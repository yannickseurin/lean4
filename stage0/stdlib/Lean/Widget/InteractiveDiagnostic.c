// Lean compiler output
// Module: Lean.Widget.InteractiveDiagnostic
// Imports: public import Lean.Server.Utils public import Lean.Widget.InteractiveGoal public import Init.Data.Array.Subarray.Split import Lean.Linter.UnusedVariables
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
size_t lean_array_size(lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_MonadExcept_ofExcept___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Json_getNat_x3f(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_JsonNumber_fromNat(lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* l_Lean_Server_WithRpcRef_mk___redArg(lean_object*);
lean_object* l_Lean_Json_getTag_x3f(lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Json_parseCtorFields(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Widget_instRpcEncodableSubexprInfo_enc_00___x40_Lean_Widget_InteractiveCode_3233133395____hygCtx___hyg_1_(lean_object*, lean_object*);
lean_object* l_Lean_Json_mkObj(lean_object*);
lean_object* l_Lean_Widget_instRpcEncodableInteractiveGoal_enc_00___x40_Lean_Widget_InteractiveGoal_3114798910____hygCtx___hyg_1_(lean_object*, lean_object*);
lean_object* l_Lean_Widget_instRpcEncodableWidgetInstance_enc_00___x40_Lean_Widget_Types_2243429567____hygCtx___hyg_1_(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_instRpcEncodableWithRpcRefOfTypeName_rpcEncode___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(lean_object*, uint8_t);
lean_object* lean_nat_to_int(lean_object*);
lean_object* l_Lean_Json_getObjValD(lean_object*, lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Json_getStr_x3f(lean_object*);
lean_object* l_Lean_Json_pretty(lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lean_Widget_instRpcEncodableSubexprInfo_dec_00___x40_Lean_Widget_InteractiveCode_3233133395____hygCtx___hyg_1____boxed(lean_object*, lean_object*);
lean_object* l_Lean_Widget_instRpcEncodableInteractiveGoal_dec_00___x40_Lean_Widget_InteractiveGoal_3114798910____hygCtx___hyg_1_(lean_object*, lean_object*);
lean_object* l_Lean_Widget_instRpcEncodableWidgetInstance_dec___redArg_00___x40_Lean_Widget_Types_2243429567____hygCtx___hyg_1_(lean_object*);
lean_object* l_Lean_Name_fromJson_x3f(lean_object*);
lean_object* l_Lean_Json_getBool_x3f(lean_object*);
lean_object* l_Lean_Server_instRpcEncodableWithRpcRefOfTypeName_rpcDecode___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_instInhabited___redArg();
lean_object* l_Lean_Widget_TaggedText_stripTags___redArg(lean_object*);
lean_object* l_Lean_MessageData_format(lean_object*, lean_object*);
extern lean_object* l_Std_Format_defWidth;
lean_object* l_Lean_Widget_TaggedText_prettyTagged(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Widget_TaggedText_rewrite___redArg(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* l_Array_toSubarray___redArg(lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l_Subarray_copy___redArg(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Subarray_drop___redArg(lean_object*, lean_object*);
lean_object* l_Subarray_take___redArg(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
double lean_float_of_nat(lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
extern lean_object* l_Lean_MessageData_maxTraceChildren;
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
double lean_float_sub(double, double);
lean_object* lean_float_to_string(double);
uint8_t lean_float_beq(double, double);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
lean_object* l_Lean_TraceResult_toEmoji(uint8_t);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_Std_Format_join(lean_object*);
extern lean_object* l_Lean_instImpl_00___x40_Lean_Message_4238524789____hygCtx___hyg_139_;
lean_object* l___private_Init_Dynamic_0__Dynamic_get_x3fImpl___redArg(lean_object*, lean_object*);
lean_object* lean_mk_io_user_error(lean_object*);
lean_object* l_Lean_mkMVar(lean_object*);
lean_object* lean_expr_dbg_to_string(lean_object*);
extern lean_object* l_Lean_instInhabitedFileMap_default;
lean_object* l_Lean_Widget_tagCodeInfos(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Widget_instInhabitedTaggedText_default___redArg();
lean_object* l_Lean_Widget_goalToInteractive(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_ContextInfo_runMetaM___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instMonad___redArg(lean_object*);
lean_object* l_ExceptT_pure(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Lsp_instFromJsonDiagnosticRelatedInformation_fromJson(lean_object*);
lean_object* l_List_foldl___at___00Array_appendList_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_StateT_pure(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Widget_InteractiveGoal_pretty(lean_object*);
lean_object* l_Std_Format_pretty(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Lsp_instToJsonDiagnosticRelatedInformation_toJson(lean_object*);
lean_object* l_Lean_Lsp_instToJsonRange_toJson(lean_object*);
lean_object* l_StateT_bind(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_instMonad___redArg___lam__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_instMonad___redArg___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_instMonad___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_instMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_id___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Array_toJson___redArg(lean_object*, lean_object*);
lean_object* l_Lean_JsonNumber_fromInt(lean_object*);
lean_object* l_ExceptT_bind(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ExceptT_instMonad___redArg___lam__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ExceptT_instMonad___redArg___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ExceptT_instMonad___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ExceptT_instMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ExceptT_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadExceptOfExceptTOfMonad___redArg___lam__0(lean_object*, lean_object*, lean_object*);
lean_object* l_ExceptT_tryCatch(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadExceptOfMonadExceptOf___redArg(lean_object*);
lean_object* l_Lean_Lsp_instFromJsonRange_fromJson(lean_object*);
lean_object* l_Lean_instFromJsonJson___lam__0(lean_object*);
lean_object* l_Lean_Array_fromJson_x3f___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_kind(lean_object*);
lean_object* l_Lean_errorNameOfKind_x3f(lean_object*);
lean_object* l_Lean_Name_toString(lean_object*, uint8_t);
lean_object* lean_io_error_to_string(lean_object*);
uint8_t l_Lean_MessageData_hasTag(lean_object*, lean_object*);
uint8_t l_Lean_MessageData_isDeprecationWarning(lean_object*);
uint8_t l_Lean_MessageData_isUnusedVariableWarning(lean_object*);
lean_object* l_Lean_FileMap_leanPosToLspPos(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_StrictOrLazy_ctorIdx___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_StrictOrLazy_ctorIdx___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_StrictOrLazy_ctorIdx(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_StrictOrLazy_ctorIdx___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_StrictOrLazy_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_StrictOrLazy_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_StrictOrLazy_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_StrictOrLazy_strict_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_StrictOrLazy_strict_elim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_StrictOrLazy_lazy_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_StrictOrLazy_lazy_elim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_instInhabitedStrictOrLazy_default___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_instInhabitedStrictOrLazy_default(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_instInhabitedStrictOrLazy___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_instInhabitedStrictOrLazy(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_RpcEncodablePacket_00___x40_Lean_Widget_InteractiveDiagnostic_2157017296____hygCtx___hyg_1__ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_RpcEncodablePacket_00___x40_Lean_Widget_InteractiveDiagnostic_2157017296____hygCtx___hyg_1__ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_RpcEncodablePacket_00___x40_Lean_Widget_InteractiveDiagnostic_2157017296____hygCtx___hyg_1__ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_RpcEncodablePacket_00___x40_Lean_Widget_InteractiveDiagnostic_2157017296____hygCtx___hyg_1__ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_RpcEncodablePacket_00___x40_Lean_Widget_InteractiveDiagnostic_2157017296____hygCtx___hyg_1__ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_RpcEncodablePacket_strict_00___x40_Lean_Widget_InteractiveDiagnostic_2157017296____hygCtx___hyg_1__elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_RpcEncodablePacket_strict_00___x40_Lean_Widget_InteractiveDiagnostic_2157017296____hygCtx___hyg_1__elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_RpcEncodablePacket_lazy_00___x40_Lean_Widget_InteractiveDiagnostic_2157017296____hygCtx___hyg_1__elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_RpcEncodablePacket_lazy_00___x40_Lean_Widget_InteractiveDiagnostic_2157017296____hygCtx___hyg_1__elim(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__0_00___x40_Lean_Widget_InteractiveDiagnostic_29703178____hygCtx___hyg_17__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "no inductive tag found"};
static const lean_object* l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__0_00___x40_Lean_Widget_InteractiveDiagnostic_29703178____hygCtx___hyg_17_ = (const lean_object*)&l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__0_00___x40_Lean_Widget_InteractiveDiagnostic_29703178____hygCtx___hyg_17__value;
static const lean_ctor_object l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__1_00___x40_Lean_Widget_InteractiveDiagnostic_29703178____hygCtx___hyg_17__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__0_00___x40_Lean_Widget_InteractiveDiagnostic_29703178____hygCtx___hyg_17__value)}};
static const lean_object* l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__1_00___x40_Lean_Widget_InteractiveDiagnostic_29703178____hygCtx___hyg_17_ = (const lean_object*)&l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__1_00___x40_Lean_Widget_InteractiveDiagnostic_29703178____hygCtx___hyg_17__value;
static const lean_string_object l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__2_00___x40_Lean_Widget_InteractiveDiagnostic_29703178____hygCtx___hyg_17__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "lazy"};
static const lean_object* l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__2_00___x40_Lean_Widget_InteractiveDiagnostic_29703178____hygCtx___hyg_17_ = (const lean_object*)&l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__2_00___x40_Lean_Widget_InteractiveDiagnostic_29703178____hygCtx___hyg_17__value;
static const lean_string_object l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__3_00___x40_Lean_Widget_InteractiveDiagnostic_29703178____hygCtx___hyg_17__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "strict"};
static const lean_object* l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__3_00___x40_Lean_Widget_InteractiveDiagnostic_29703178____hygCtx___hyg_17_ = (const lean_object*)&l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__3_00___x40_Lean_Widget_InteractiveDiagnostic_29703178____hygCtx___hyg_17__value;
static const lean_string_object l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__4_00___x40_Lean_Widget_InteractiveDiagnostic_29703178____hygCtx___hyg_17__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "no inductive constructor matched"};
static const lean_object* l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__4_00___x40_Lean_Widget_InteractiveDiagnostic_29703178____hygCtx___hyg_17_ = (const lean_object*)&l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__4_00___x40_Lean_Widget_InteractiveDiagnostic_29703178____hygCtx___hyg_17__value;
static const lean_ctor_object l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__5_00___x40_Lean_Widget_InteractiveDiagnostic_29703178____hygCtx___hyg_17__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__4_00___x40_Lean_Widget_InteractiveDiagnostic_29703178____hygCtx___hyg_17__value)}};
static const lean_object* l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__5_00___x40_Lean_Widget_InteractiveDiagnostic_29703178____hygCtx___hyg_17_ = (const lean_object*)&l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__5_00___x40_Lean_Widget_InteractiveDiagnostic_29703178____hygCtx___hyg_17__value;
LEAN_EXPORT lean_object* l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson_00___x40_Lean_Widget_InteractiveDiagnostic_29703178____hygCtx___hyg_17_(lean_object*);
static const lean_closure_object l_Lean_Widget_instFromJsonRpcEncodablePacket___closed__0_00___x40_Lean_Widget_InteractiveDiagnostic_29703178____hygCtx___hyg_17__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson_00___x40_Lean_Widget_InteractiveDiagnostic_29703178____hygCtx___hyg_17_, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Widget_instFromJsonRpcEncodablePacket___closed__0_00___x40_Lean_Widget_InteractiveDiagnostic_29703178____hygCtx___hyg_17_ = (const lean_object*)&l_Lean_Widget_instFromJsonRpcEncodablePacket___closed__0_00___x40_Lean_Widget_InteractiveDiagnostic_29703178____hygCtx___hyg_17__value;
LEAN_EXPORT const lean_object* l_Lean_Widget_instFromJsonRpcEncodablePacket_00___x40_Lean_Widget_InteractiveDiagnostic_29703178____hygCtx___hyg_17_ = (const lean_object*)&l_Lean_Widget_instFromJsonRpcEncodablePacket___closed__0_00___x40_Lean_Widget_InteractiveDiagnostic_29703178____hygCtx___hyg_17__value;
LEAN_EXPORT lean_object* l_Lean_Widget_instToJsonRpcEncodablePacket_toJson_00___x40_Lean_Widget_InteractiveDiagnostic_29703178____hygCtx___hyg_38_(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_instToJsonRpcEncodablePacket_toJson_00___x40_Lean_Widget_InteractiveDiagnostic_29703178____hygCtx___hyg_38____boxed(lean_object*);
static const lean_closure_object l_Lean_Widget_instToJsonRpcEncodablePacket___closed__0_00___x40_Lean_Widget_InteractiveDiagnostic_29703178____hygCtx___hyg_38__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Widget_instToJsonRpcEncodablePacket_toJson_00___x40_Lean_Widget_InteractiveDiagnostic_29703178____hygCtx___hyg_38____boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Widget_instToJsonRpcEncodablePacket___closed__0_00___x40_Lean_Widget_InteractiveDiagnostic_29703178____hygCtx___hyg_38_ = (const lean_object*)&l_Lean_Widget_instToJsonRpcEncodablePacket___closed__0_00___x40_Lean_Widget_InteractiveDiagnostic_29703178____hygCtx___hyg_38__value;
LEAN_EXPORT const lean_object* l_Lean_Widget_instToJsonRpcEncodablePacket_00___x40_Lean_Widget_InteractiveDiagnostic_29703178____hygCtx___hyg_38_ = (const lean_object*)&l_Lean_Widget_instToJsonRpcEncodablePacket___closed__0_00___x40_Lean_Widget_InteractiveDiagnostic_29703178____hygCtx___hyg_38__value;
LEAN_EXPORT lean_object* l_Lean_Widget_instRpcEncodableStrictOrLazy_enc___redArg_00___x40_Lean_Widget_InteractiveDiagnostic_2157017296____hygCtx___hyg_1_(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_instRpcEncodableStrictOrLazy_enc_00___x40_Lean_Widget_InteractiveDiagnostic_2157017296____hygCtx___hyg_1_(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_instRpcEncodableStrictOrLazy_dec___redArg_00___x40_Lean_Widget_InteractiveDiagnostic_2157017296____hygCtx___hyg_1_(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_instRpcEncodableStrictOrLazy_dec___redArg_00___x40_Lean_Widget_InteractiveDiagnostic_2157017296____hygCtx___hyg_1____boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_instRpcEncodableStrictOrLazy_dec_00___x40_Lean_Widget_InteractiveDiagnostic_2157017296____hygCtx___hyg_1_(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_instRpcEncodableStrictOrLazy_dec_00___x40_Lean_Widget_InteractiveDiagnostic_2157017296____hygCtx___hyg_1____boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_instRpcEncodableStrictOrLazy___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_instRpcEncodableStrictOrLazy(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Widget_instImpl___closed__0_00___x40_Lean_Widget_InteractiveDiagnostic_72002168____hygCtx___hyg_14__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lean_Widget_instImpl___closed__0_00___x40_Lean_Widget_InteractiveDiagnostic_72002168____hygCtx___hyg_14_ = (const lean_object*)&l_Lean_Widget_instImpl___closed__0_00___x40_Lean_Widget_InteractiveDiagnostic_72002168____hygCtx___hyg_14__value;
static const lean_string_object l_Lean_Widget_instImpl___closed__1_00___x40_Lean_Widget_InteractiveDiagnostic_72002168____hygCtx___hyg_14__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Widget"};
static const lean_object* l_Lean_Widget_instImpl___closed__1_00___x40_Lean_Widget_InteractiveDiagnostic_72002168____hygCtx___hyg_14_ = (const lean_object*)&l_Lean_Widget_instImpl___closed__1_00___x40_Lean_Widget_InteractiveDiagnostic_72002168____hygCtx___hyg_14__value;
static const lean_string_object l_Lean_Widget_instImpl___closed__2_00___x40_Lean_Widget_InteractiveDiagnostic_72002168____hygCtx___hyg_14__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "LazyTraceChildren"};
static const lean_object* l_Lean_Widget_instImpl___closed__2_00___x40_Lean_Widget_InteractiveDiagnostic_72002168____hygCtx___hyg_14_ = (const lean_object*)&l_Lean_Widget_instImpl___closed__2_00___x40_Lean_Widget_InteractiveDiagnostic_72002168____hygCtx___hyg_14__value;
static const lean_ctor_object l_Lean_Widget_instImpl___closed__3_00___x40_Lean_Widget_InteractiveDiagnostic_72002168____hygCtx___hyg_14__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Widget_instImpl___closed__0_00___x40_Lean_Widget_InteractiveDiagnostic_72002168____hygCtx___hyg_14__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Widget_instImpl___closed__3_00___x40_Lean_Widget_InteractiveDiagnostic_72002168____hygCtx___hyg_14__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Widget_instImpl___closed__3_00___x40_Lean_Widget_InteractiveDiagnostic_72002168____hygCtx___hyg_14__value_aux_0),((lean_object*)&l_Lean_Widget_instImpl___closed__1_00___x40_Lean_Widget_InteractiveDiagnostic_72002168____hygCtx___hyg_14__value),LEAN_SCALAR_PTR_LITERAL(242, 47, 106, 136, 147, 253, 78, 115)}};
static const lean_ctor_object l_Lean_Widget_instImpl___closed__3_00___x40_Lean_Widget_InteractiveDiagnostic_72002168____hygCtx___hyg_14__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Widget_instImpl___closed__3_00___x40_Lean_Widget_InteractiveDiagnostic_72002168____hygCtx___hyg_14__value_aux_1),((lean_object*)&l_Lean_Widget_instImpl___closed__2_00___x40_Lean_Widget_InteractiveDiagnostic_72002168____hygCtx___hyg_14__value),LEAN_SCALAR_PTR_LITERAL(165, 137, 18, 43, 57, 42, 78, 138)}};
static const lean_object* l_Lean_Widget_instImpl___closed__3_00___x40_Lean_Widget_InteractiveDiagnostic_72002168____hygCtx___hyg_14_ = (const lean_object*)&l_Lean_Widget_instImpl___closed__3_00___x40_Lean_Widget_InteractiveDiagnostic_72002168____hygCtx___hyg_14__value;
static lean_once_cell_t l_Lean_Widget_instImpl___closed__4_00___x40_Lean_Widget_InteractiveDiagnostic_72002168____hygCtx___hyg_14__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Widget_instImpl___closed__4_00___x40_Lean_Widget_InteractiveDiagnostic_72002168____hygCtx___hyg_14_;
LEAN_EXPORT lean_object* l_Lean_Widget_instImpl_00___x40_Lean_Widget_InteractiveDiagnostic_72002168____hygCtx___hyg_14_;
LEAN_EXPORT lean_object* l_Lean_Widget_instTypeNameLazyTraceChildren;
LEAN_EXPORT lean_object* l_Lean_Widget_MsgEmbed_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_MsgEmbed_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_MsgEmbed_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_MsgEmbed_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_MsgEmbed_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_MsgEmbed_expr_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_MsgEmbed_expr_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_MsgEmbed_goal_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_MsgEmbed_goal_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_MsgEmbed_widget_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_MsgEmbed_widget_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_MsgEmbed_trace_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_MsgEmbed_trace_elim(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Widget_instInhabitedMsgEmbed_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Widget_instInhabitedMsgEmbed_default___closed__0;
static lean_once_cell_t l_Lean_Widget_instInhabitedMsgEmbed_default___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Widget_instInhabitedMsgEmbed_default___closed__1;
LEAN_EXPORT lean_object* l_Lean_Widget_instInhabitedMsgEmbed_default;
LEAN_EXPORT lean_object* l_Lean_Widget_instInhabitedMsgEmbed;
LEAN_EXPORT lean_object* l_Lean_Widget_RpcEncodablePacket_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_RpcEncodablePacket_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_RpcEncodablePacket_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_RpcEncodablePacket_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_RpcEncodablePacket_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_RpcEncodablePacket_expr_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_RpcEncodablePacket_expr_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_RpcEncodablePacket_goal_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_RpcEncodablePacket_goal_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_RpcEncodablePacket_widget_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_RpcEncodablePacket_widget_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_RpcEncodablePacket_trace_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_RpcEncodablePacket_trace_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__elim(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__0_00___x40_Lean_Widget_InteractiveDiagnostic_2315129857____hygCtx___hyg_37__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__0_00___x40_Lean_Widget_InteractiveDiagnostic_29703178____hygCtx___hyg_17__value)}};
static const lean_object* l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__0_00___x40_Lean_Widget_InteractiveDiagnostic_2315129857____hygCtx___hyg_37_ = (const lean_object*)&l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__0_00___x40_Lean_Widget_InteractiveDiagnostic_2315129857____hygCtx___hyg_37__value;
static const lean_string_object l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__1_00___x40_Lean_Widget_InteractiveDiagnostic_2315129857____hygCtx___hyg_37__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "goal"};
static const lean_object* l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__1_00___x40_Lean_Widget_InteractiveDiagnostic_2315129857____hygCtx___hyg_37_ = (const lean_object*)&l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__1_00___x40_Lean_Widget_InteractiveDiagnostic_2315129857____hygCtx___hyg_37__value;
static const lean_string_object l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__2_00___x40_Lean_Widget_InteractiveDiagnostic_2315129857____hygCtx___hyg_37__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "expr"};
static const lean_object* l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__2_00___x40_Lean_Widget_InteractiveDiagnostic_2315129857____hygCtx___hyg_37_ = (const lean_object*)&l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__2_00___x40_Lean_Widget_InteractiveDiagnostic_2315129857____hygCtx___hyg_37__value;
static const lean_string_object l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__3_00___x40_Lean_Widget_InteractiveDiagnostic_2315129857____hygCtx___hyg_37__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "widget"};
static const lean_object* l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__3_00___x40_Lean_Widget_InteractiveDiagnostic_2315129857____hygCtx___hyg_37_ = (const lean_object*)&l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__3_00___x40_Lean_Widget_InteractiveDiagnostic_2315129857____hygCtx___hyg_37__value;
static const lean_string_object l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__4_00___x40_Lean_Widget_InteractiveDiagnostic_2315129857____hygCtx___hyg_37__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__4_00___x40_Lean_Widget_InteractiveDiagnostic_2315129857____hygCtx___hyg_37_ = (const lean_object*)&l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__4_00___x40_Lean_Widget_InteractiveDiagnostic_2315129857____hygCtx___hyg_37__value;
static const lean_ctor_object l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__5_00___x40_Lean_Widget_InteractiveDiagnostic_2315129857____hygCtx___hyg_37__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__4_00___x40_Lean_Widget_InteractiveDiagnostic_29703178____hygCtx___hyg_17__value)}};
static const lean_object* l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__5_00___x40_Lean_Widget_InteractiveDiagnostic_2315129857____hygCtx___hyg_37_ = (const lean_object*)&l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__5_00___x40_Lean_Widget_InteractiveDiagnostic_2315129857____hygCtx___hyg_37__value;
static const lean_string_object l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__6_00___x40_Lean_Widget_InteractiveDiagnostic_2315129857____hygCtx___hyg_37__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "indent"};
static const lean_object* l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__6_00___x40_Lean_Widget_InteractiveDiagnostic_2315129857____hygCtx___hyg_37_ = (const lean_object*)&l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__6_00___x40_Lean_Widget_InteractiveDiagnostic_2315129857____hygCtx___hyg_37__value;
static const lean_ctor_object l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__7_00___x40_Lean_Widget_InteractiveDiagnostic_2315129857____hygCtx___hyg_37__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__6_00___x40_Lean_Widget_InteractiveDiagnostic_2315129857____hygCtx___hyg_37__value),LEAN_SCALAR_PTR_LITERAL(206, 200, 13, 200, 175, 144, 184, 75)}};
static const lean_object* l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__7_00___x40_Lean_Widget_InteractiveDiagnostic_2315129857____hygCtx___hyg_37_ = (const lean_object*)&l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__7_00___x40_Lean_Widget_InteractiveDiagnostic_2315129857____hygCtx___hyg_37__value;
static const lean_string_object l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__8_00___x40_Lean_Widget_InteractiveDiagnostic_2315129857____hygCtx___hyg_37__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "cls"};
static const lean_object* l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__8_00___x40_Lean_Widget_InteractiveDiagnostic_2315129857____hygCtx___hyg_37_ = (const lean_object*)&l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__8_00___x40_Lean_Widget_InteractiveDiagnostic_2315129857____hygCtx___hyg_37__value;
static const lean_ctor_object l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__9_00___x40_Lean_Widget_InteractiveDiagnostic_2315129857____hygCtx___hyg_37__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__8_00___x40_Lean_Widget_InteractiveDiagnostic_2315129857____hygCtx___hyg_37__value),LEAN_SCALAR_PTR_LITERAL(28, 113, 141, 155, 240, 79, 69, 244)}};
static const lean_object* l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__9_00___x40_Lean_Widget_InteractiveDiagnostic_2315129857____hygCtx___hyg_37_ = (const lean_object*)&l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__9_00___x40_Lean_Widget_InteractiveDiagnostic_2315129857____hygCtx___hyg_37__value;
static const lean_string_object l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__10_00___x40_Lean_Widget_InteractiveDiagnostic_2315129857____hygCtx___hyg_37__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "msg"};
static const lean_object* l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__10_00___x40_Lean_Widget_InteractiveDiagnostic_2315129857____hygCtx___hyg_37_ = (const lean_object*)&l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__10_00___x40_Lean_Widget_InteractiveDiagnostic_2315129857____hygCtx___hyg_37__value;
static const lean_ctor_object l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__11_00___x40_Lean_Widget_InteractiveDiagnostic_2315129857____hygCtx___hyg_37__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__10_00___x40_Lean_Widget_InteractiveDiagnostic_2315129857____hygCtx___hyg_37__value),LEAN_SCALAR_PTR_LITERAL(178, 178, 148, 59, 81, 15, 45, 82)}};
static const lean_object* l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__11_00___x40_Lean_Widget_InteractiveDiagnostic_2315129857____hygCtx___hyg_37_ = (const lean_object*)&l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__11_00___x40_Lean_Widget_InteractiveDiagnostic_2315129857____hygCtx___hyg_37__value;
static const lean_string_object l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__12_00___x40_Lean_Widget_InteractiveDiagnostic_2315129857____hygCtx___hyg_37__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "collapsed"};
static const lean_object* l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__12_00___x40_Lean_Widget_InteractiveDiagnostic_2315129857____hygCtx___hyg_37_ = (const lean_object*)&l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__12_00___x40_Lean_Widget_InteractiveDiagnostic_2315129857____hygCtx___hyg_37__value;
static const lean_ctor_object l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__13_00___x40_Lean_Widget_InteractiveDiagnostic_2315129857____hygCtx___hyg_37__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__12_00___x40_Lean_Widget_InteractiveDiagnostic_2315129857____hygCtx___hyg_37__value),LEAN_SCALAR_PTR_LITERAL(45, 139, 238, 225, 47, 187, 208, 208)}};
static const lean_object* l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__13_00___x40_Lean_Widget_InteractiveDiagnostic_2315129857____hygCtx___hyg_37_ = (const lean_object*)&l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__13_00___x40_Lean_Widget_InteractiveDiagnostic_2315129857____hygCtx___hyg_37__value;
static const lean_string_object l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__14_00___x40_Lean_Widget_InteractiveDiagnostic_2315129857____hygCtx___hyg_37__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "children"};
static const lean_object* l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__14_00___x40_Lean_Widget_InteractiveDiagnostic_2315129857____hygCtx___hyg_37_ = (const lean_object*)&l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__14_00___x40_Lean_Widget_InteractiveDiagnostic_2315129857____hygCtx___hyg_37__value;
static const lean_ctor_object l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__15_00___x40_Lean_Widget_InteractiveDiagnostic_2315129857____hygCtx___hyg_37__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__14_00___x40_Lean_Widget_InteractiveDiagnostic_2315129857____hygCtx___hyg_37__value),LEAN_SCALAR_PTR_LITERAL(207, 29, 161, 81, 49, 98, 4, 106)}};
static const lean_object* l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__15_00___x40_Lean_Widget_InteractiveDiagnostic_2315129857____hygCtx___hyg_37_ = (const lean_object*)&l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__15_00___x40_Lean_Widget_InteractiveDiagnostic_2315129857____hygCtx___hyg_37__value;
static const lean_array_object l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__16_00___x40_Lean_Widget_InteractiveDiagnostic_2315129857____hygCtx___hyg_37__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*5, .m_other = 0, .m_tag = 246}, .m_size = 5, .m_capacity = 5, .m_data = {((lean_object*)&l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__7_00___x40_Lean_Widget_InteractiveDiagnostic_2315129857____hygCtx___hyg_37__value),((lean_object*)&l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__9_00___x40_Lean_Widget_InteractiveDiagnostic_2315129857____hygCtx___hyg_37__value),((lean_object*)&l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__11_00___x40_Lean_Widget_InteractiveDiagnostic_2315129857____hygCtx___hyg_37__value),((lean_object*)&l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__13_00___x40_Lean_Widget_InteractiveDiagnostic_2315129857____hygCtx___hyg_37__value),((lean_object*)&l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__15_00___x40_Lean_Widget_InteractiveDiagnostic_2315129857____hygCtx___hyg_37__value)}};
static const lean_object* l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__16_00___x40_Lean_Widget_InteractiveDiagnostic_2315129857____hygCtx___hyg_37_ = (const lean_object*)&l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__16_00___x40_Lean_Widget_InteractiveDiagnostic_2315129857____hygCtx___hyg_37__value;
static const lean_ctor_object l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__17_00___x40_Lean_Widget_InteractiveDiagnostic_2315129857____hygCtx___hyg_37__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__16_00___x40_Lean_Widget_InteractiveDiagnostic_2315129857____hygCtx___hyg_37__value)}};
static const lean_object* l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__17_00___x40_Lean_Widget_InteractiveDiagnostic_2315129857____hygCtx___hyg_37_ = (const lean_object*)&l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__17_00___x40_Lean_Widget_InteractiveDiagnostic_2315129857____hygCtx___hyg_37__value;
static const lean_string_object l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__18_00___x40_Lean_Widget_InteractiveDiagnostic_2315129857____hygCtx___hyg_37__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "wi"};
static const lean_object* l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__18_00___x40_Lean_Widget_InteractiveDiagnostic_2315129857____hygCtx___hyg_37_ = (const lean_object*)&l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__18_00___x40_Lean_Widget_InteractiveDiagnostic_2315129857____hygCtx___hyg_37__value;
static const lean_ctor_object l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__19_00___x40_Lean_Widget_InteractiveDiagnostic_2315129857____hygCtx___hyg_37__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__18_00___x40_Lean_Widget_InteractiveDiagnostic_2315129857____hygCtx___hyg_37__value),LEAN_SCALAR_PTR_LITERAL(66, 175, 87, 75, 42, 99, 172, 2)}};
static const lean_object* l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__19_00___x40_Lean_Widget_InteractiveDiagnostic_2315129857____hygCtx___hyg_37_ = (const lean_object*)&l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__19_00___x40_Lean_Widget_InteractiveDiagnostic_2315129857____hygCtx___hyg_37__value;
static const lean_string_object l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__20_00___x40_Lean_Widget_InteractiveDiagnostic_2315129857____hygCtx___hyg_37__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "alt"};
static const lean_object* l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__20_00___x40_Lean_Widget_InteractiveDiagnostic_2315129857____hygCtx___hyg_37_ = (const lean_object*)&l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__20_00___x40_Lean_Widget_InteractiveDiagnostic_2315129857____hygCtx___hyg_37__value;
static const lean_ctor_object l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__21_00___x40_Lean_Widget_InteractiveDiagnostic_2315129857____hygCtx___hyg_37__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__20_00___x40_Lean_Widget_InteractiveDiagnostic_2315129857____hygCtx___hyg_37__value),LEAN_SCALAR_PTR_LITERAL(242, 128, 245, 49, 225, 62, 36, 86)}};
static const lean_object* l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__21_00___x40_Lean_Widget_InteractiveDiagnostic_2315129857____hygCtx___hyg_37_ = (const lean_object*)&l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__21_00___x40_Lean_Widget_InteractiveDiagnostic_2315129857____hygCtx___hyg_37__value;
static const lean_array_object l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__22_00___x40_Lean_Widget_InteractiveDiagnostic_2315129857____hygCtx___hyg_37__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 246}, .m_size = 2, .m_capacity = 2, .m_data = {((lean_object*)&l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__19_00___x40_Lean_Widget_InteractiveDiagnostic_2315129857____hygCtx___hyg_37__value),((lean_object*)&l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__21_00___x40_Lean_Widget_InteractiveDiagnostic_2315129857____hygCtx___hyg_37__value)}};
static const lean_object* l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__22_00___x40_Lean_Widget_InteractiveDiagnostic_2315129857____hygCtx___hyg_37_ = (const lean_object*)&l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__22_00___x40_Lean_Widget_InteractiveDiagnostic_2315129857____hygCtx___hyg_37__value;
static const lean_ctor_object l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__23_00___x40_Lean_Widget_InteractiveDiagnostic_2315129857____hygCtx___hyg_37__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__22_00___x40_Lean_Widget_InteractiveDiagnostic_2315129857____hygCtx___hyg_37__value)}};
static const lean_object* l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__23_00___x40_Lean_Widget_InteractiveDiagnostic_2315129857____hygCtx___hyg_37_ = (const lean_object*)&l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__23_00___x40_Lean_Widget_InteractiveDiagnostic_2315129857____hygCtx___hyg_37__value;
LEAN_EXPORT lean_object* l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson_00___x40_Lean_Widget_InteractiveDiagnostic_2315129857____hygCtx___hyg_37_(lean_object*);
static const lean_closure_object l_Lean_Widget_instFromJsonRpcEncodablePacket___closed__0_00___x40_Lean_Widget_InteractiveDiagnostic_2315129857____hygCtx___hyg_37__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson_00___x40_Lean_Widget_InteractiveDiagnostic_2315129857____hygCtx___hyg_37_, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Widget_instFromJsonRpcEncodablePacket___closed__0_00___x40_Lean_Widget_InteractiveDiagnostic_2315129857____hygCtx___hyg_37_ = (const lean_object*)&l_Lean_Widget_instFromJsonRpcEncodablePacket___closed__0_00___x40_Lean_Widget_InteractiveDiagnostic_2315129857____hygCtx___hyg_37__value;
LEAN_EXPORT const lean_object* l_Lean_Widget_instFromJsonRpcEncodablePacket_00___x40_Lean_Widget_InteractiveDiagnostic_2315129857____hygCtx___hyg_37_ = (const lean_object*)&l_Lean_Widget_instFromJsonRpcEncodablePacket___closed__0_00___x40_Lean_Widget_InteractiveDiagnostic_2315129857____hygCtx___hyg_37__value;
LEAN_EXPORT lean_object* l_Lean_Widget_instToJsonRpcEncodablePacket_toJson_00___x40_Lean_Widget_InteractiveDiagnostic_2315129857____hygCtx___hyg_65_(lean_object*);
static const lean_closure_object l_Lean_Widget_instToJsonRpcEncodablePacket___closed__0_00___x40_Lean_Widget_InteractiveDiagnostic_2315129857____hygCtx___hyg_65__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Widget_instToJsonRpcEncodablePacket_toJson_00___x40_Lean_Widget_InteractiveDiagnostic_2315129857____hygCtx___hyg_65_, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Widget_instToJsonRpcEncodablePacket___closed__0_00___x40_Lean_Widget_InteractiveDiagnostic_2315129857____hygCtx___hyg_65_ = (const lean_object*)&l_Lean_Widget_instToJsonRpcEncodablePacket___closed__0_00___x40_Lean_Widget_InteractiveDiagnostic_2315129857____hygCtx___hyg_65__value;
LEAN_EXPORT const lean_object* l_Lean_Widget_instToJsonRpcEncodablePacket_00___x40_Lean_Widget_InteractiveDiagnostic_2315129857____hygCtx___hyg_65_ = (const lean_object*)&l_Lean_Widget_instToJsonRpcEncodablePacket___closed__0_00___x40_Lean_Widget_InteractiveDiagnostic_2315129857____hygCtx___hyg_65__value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Widget_instRpcEncodableStrictOrLazy_enc_00___x40_Lean_Widget_InteractiveDiagnostic_2157017296____hygCtx___hyg_1____at___00Lean_Widget_instRpcEncodableMsgEmbed_enc_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__spec__2_spec__5_spec__9(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Widget_instRpcEncodableStrictOrLazy_enc_00___x40_Lean_Widget_InteractiveDiagnostic_2157017296____hygCtx___hyg_1____at___00Lean_Widget_instRpcEncodableMsgEmbed_enc_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__spec__2_spec__5_spec__9___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00Lean_Widget_instRpcEncodableStrictOrLazy_enc_00___x40_Lean_Widget_InteractiveDiagnostic_2157017296____hygCtx___hyg_1____at___00Lean_Widget_instRpcEncodableMsgEmbed_enc_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__spec__2_spec__5(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00Lean_Widget_instRpcEncodableStrictOrLazy_enc_00___x40_Lean_Widget_InteractiveDiagnostic_2157017296____hygCtx___hyg_1____at___00Lean_Widget_instRpcEncodableMsgEmbed_enc_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__spec__2_spec__5___boxed(lean_object*);
static const lean_string_object l_Lean_Widget_instToJsonTaggedText_toJson___at___00Lean_Widget_instRpcEncodableMsgEmbed_enc_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "text"};
static const lean_object* l_Lean_Widget_instToJsonTaggedText_toJson___at___00Lean_Widget_instRpcEncodableMsgEmbed_enc_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__spec__1___closed__0 = (const lean_object*)&l_Lean_Widget_instToJsonTaggedText_toJson___at___00Lean_Widget_instRpcEncodableMsgEmbed_enc_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__spec__1___closed__0_value;
static const lean_string_object l_Lean_Widget_instToJsonTaggedText_toJson___at___00Lean_Widget_instRpcEncodableMsgEmbed_enc_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "append"};
static const lean_object* l_Lean_Widget_instToJsonTaggedText_toJson___at___00Lean_Widget_instRpcEncodableMsgEmbed_enc_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__spec__1___closed__1 = (const lean_object*)&l_Lean_Widget_instToJsonTaggedText_toJson___at___00Lean_Widget_instRpcEncodableMsgEmbed_enc_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__spec__1___closed__1_value;
static const lean_string_object l_Lean_Widget_instToJsonTaggedText_toJson___at___00Lean_Widget_instRpcEncodableMsgEmbed_enc_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__spec__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "tag"};
static const lean_object* l_Lean_Widget_instToJsonTaggedText_toJson___at___00Lean_Widget_instRpcEncodableMsgEmbed_enc_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__spec__1___closed__2 = (const lean_object*)&l_Lean_Widget_instToJsonTaggedText_toJson___at___00Lean_Widget_instRpcEncodableMsgEmbed_enc_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__spec__1___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Widget_instToJsonTaggedText_toJson___at___00Lean_Widget_instRpcEncodableMsgEmbed_enc_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__spec__1(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Widget_instToJsonTaggedText_toJson___at___00Lean_Widget_instRpcEncodableMsgEmbed_enc_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__spec__1_spec__2_spec__5(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00Lean_Widget_instToJsonTaggedText_toJson___at___00Lean_Widget_instRpcEncodableMsgEmbed_enc_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__spec__1_spec__2(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00Lean_Widget_instToJsonTaggedText_toJson___at___00Lean_Widget_instRpcEncodableMsgEmbed_enc_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__spec__1_spec__2___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Widget_instToJsonTaggedText_toJson___at___00Lean_Widget_instRpcEncodableMsgEmbed_enc_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__spec__1_spec__2_spec__5___boxed(lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Widget_TaggedText_mapM___at___00Lean_Widget_instRpcEncodableMsgEmbed_enc_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__spec__0___redArg___boxed__const__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + sizeof(size_t)*1, .m_other = 0, .m_tag = 0}, .m_objs = {(lean_object*)(size_t)(0ULL)}};
LEAN_EXPORT const lean_object* l_Lean_Widget_TaggedText_mapM___at___00Lean_Widget_instRpcEncodableMsgEmbed_enc_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__spec__0___redArg___boxed__const__1 = (const lean_object*)&l_Lean_Widget_TaggedText_mapM___at___00Lean_Widget_instRpcEncodableMsgEmbed_enc_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__spec__0___redArg___boxed__const__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_TaggedText_mapM___at___00Lean_Widget_instRpcEncodableMsgEmbed_enc_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_mapM___at___00Lean_Widget_instRpcEncodableMsgEmbed_enc_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_TaggedText_mapM___at___00Lean_Widget_instRpcEncodableMsgEmbed_enc_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__spec__0_spec__0___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_TaggedText_mapM___at___00Lean_Widget_instRpcEncodableMsgEmbed_enc_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__spec__0_spec__0(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_TaggedText_mapM___at___00Lean_Widget_instRpcEncodableMsgEmbed_enc_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Widget_instRpcEncodableMsgEmbed_enc___closed__0_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Widget_instRpcEncodableSubexprInfo_enc_00___x40_Lean_Widget_InteractiveCode_3233133395____hygCtx___hyg_1_, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Widget_instRpcEncodableMsgEmbed_enc___closed__0_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1_ = (const lean_object*)&l_Lean_Widget_instRpcEncodableMsgEmbed_enc___closed__0_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_instRpcEncodableStrictOrLazy_enc_00___x40_Lean_Widget_InteractiveDiagnostic_2157017296____hygCtx___hyg_1____at___00Lean_Widget_instRpcEncodableMsgEmbed_enc_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_instRpcEncodableStrictOrLazy_enc_00___x40_Lean_Widget_InteractiveDiagnostic_2157017296____hygCtx___hyg_1____at___00Lean_Widget_instRpcEncodableMsgEmbed_enc_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_instRpcEncodableMsgEmbed_enc_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1_(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_instRpcEncodableStrictOrLazy_enc_00___x40_Lean_Widget_InteractiveDiagnostic_2157017296____hygCtx___hyg_1____at___00Lean_Widget_instRpcEncodableMsgEmbed_enc_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__spec__2_spec__4(size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00Lean_Widget_instRpcEncodableMsgEmbed_dec_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__spec__6___redArg(lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00Lean_Widget_instRpcEncodableMsgEmbed_dec_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__spec__6___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00Lean_Widget_instRpcEncodableMsgEmbed_dec_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__spec__6(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00Lean_Widget_instRpcEncodableMsgEmbed_dec_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__spec__6___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Array_fromJson_x3f___at___00Lean_Widget_instFromJsonTaggedText_fromJson___at___00Lean_Widget_instRpcEncodableMsgEmbed_dec_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__spec__4_spec__8___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "expected JSON array, got '"};
static const lean_object* l_Lean_Array_fromJson_x3f___at___00Lean_Widget_instFromJsonTaggedText_fromJson___at___00Lean_Widget_instRpcEncodableMsgEmbed_dec_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__spec__4_spec__8___closed__0 = (const lean_object*)&l_Lean_Array_fromJson_x3f___at___00Lean_Widget_instFromJsonTaggedText_fromJson___at___00Lean_Widget_instRpcEncodableMsgEmbed_dec_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__spec__4_spec__8___closed__0_value;
static const lean_string_object l_Lean_Array_fromJson_x3f___at___00Lean_Widget_instFromJsonTaggedText_fromJson___at___00Lean_Widget_instRpcEncodableMsgEmbed_dec_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__spec__4_spec__8___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "'"};
static const lean_object* l_Lean_Array_fromJson_x3f___at___00Lean_Widget_instFromJsonTaggedText_fromJson___at___00Lean_Widget_instRpcEncodableMsgEmbed_dec_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__spec__4_spec__8___closed__1 = (const lean_object*)&l_Lean_Array_fromJson_x3f___at___00Lean_Widget_instFromJsonTaggedText_fromJson___at___00Lean_Widget_instRpcEncodableMsgEmbed_dec_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__spec__4_spec__8___closed__1_value;
static const lean_ctor_object l_Lean_Widget_instFromJsonTaggedText_fromJson___at___00Lean_Widget_instRpcEncodableMsgEmbed_dec_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__spec__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__0_00___x40_Lean_Widget_InteractiveDiagnostic_29703178____hygCtx___hyg_17__value)}};
static const lean_object* l_Lean_Widget_instFromJsonTaggedText_fromJson___at___00Lean_Widget_instRpcEncodableMsgEmbed_dec_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__spec__4___closed__0 = (const lean_object*)&l_Lean_Widget_instFromJsonTaggedText_fromJson___at___00Lean_Widget_instRpcEncodableMsgEmbed_dec_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__spec__4___closed__0_value;
static const lean_ctor_object l_Lean_Widget_instFromJsonTaggedText_fromJson___at___00Lean_Widget_instRpcEncodableMsgEmbed_dec_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__spec__4___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__4_00___x40_Lean_Widget_InteractiveDiagnostic_29703178____hygCtx___hyg_17__value)}};
static const lean_object* l_Lean_Widget_instFromJsonTaggedText_fromJson___at___00Lean_Widget_instRpcEncodableMsgEmbed_dec_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__spec__4___closed__1 = (const lean_object*)&l_Lean_Widget_instFromJsonTaggedText_fromJson___at___00Lean_Widget_instRpcEncodableMsgEmbed_dec_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__spec__4___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Widget_instFromJsonTaggedText_fromJson___at___00Lean_Widget_instRpcEncodableMsgEmbed_dec_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__spec__4(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Widget_instFromJsonTaggedText_fromJson___at___00Lean_Widget_instRpcEncodableMsgEmbed_dec_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__spec__4_spec__8_spec__12(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Array_fromJson_x3f___at___00Lean_Widget_instFromJsonTaggedText_fromJson___at___00Lean_Widget_instRpcEncodableMsgEmbed_dec_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__spec__4_spec__8(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Widget_instFromJsonTaggedText_fromJson___at___00Lean_Widget_instRpcEncodableMsgEmbed_dec_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__spec__4_spec__8_spec__12___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Widget_instRpcEncodableStrictOrLazy_dec_00___x40_Lean_Widget_InteractiveDiagnostic_2157017296____hygCtx___hyg_1____at___00Lean_Widget_instRpcEncodableMsgEmbed_dec_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__spec__7_spec__13_spec__17(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Widget_instRpcEncodableStrictOrLazy_dec_00___x40_Lean_Widget_InteractiveDiagnostic_2157017296____hygCtx___hyg_1____at___00Lean_Widget_instRpcEncodableMsgEmbed_dec_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__spec__7_spec__13_spec__17___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Array_fromJson_x3f___at___00Lean_Widget_instRpcEncodableStrictOrLazy_dec_00___x40_Lean_Widget_InteractiveDiagnostic_2157017296____hygCtx___hyg_1____at___00Lean_Widget_instRpcEncodableMsgEmbed_dec_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__spec__7_spec__13(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_TaggedText_mapM___at___00Lean_Widget_instRpcEncodableMsgEmbed_dec_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__spec__5_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_mapM___at___00Lean_Widget_instRpcEncodableMsgEmbed_dec_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__spec__5___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_TaggedText_mapM___at___00Lean_Widget_instRpcEncodableMsgEmbed_dec_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__spec__5_spec__10___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_TaggedText_mapM___at___00Lean_Widget_instRpcEncodableMsgEmbed_dec_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__spec__5_spec__10(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_TaggedText_mapM___at___00Lean_Widget_instRpcEncodableMsgEmbed_dec_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__spec__5_spec__10___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_mapM___at___00Lean_Widget_instRpcEncodableMsgEmbed_dec_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Widget_instRpcEncodableMsgEmbed_dec___closed__0_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Widget_instRpcEncodableSubexprInfo_dec_00___x40_Lean_Widget_InteractiveCode_3233133395____hygCtx___hyg_1____boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Widget_instRpcEncodableMsgEmbed_dec___closed__0_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1_ = (const lean_object*)&l_Lean_Widget_instRpcEncodableMsgEmbed_dec___closed__0_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_instRpcEncodableStrictOrLazy_dec_00___x40_Lean_Widget_InteractiveDiagnostic_2157017296____hygCtx___hyg_1____at___00Lean_Widget_instRpcEncodableMsgEmbed_dec_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__spec__7_spec__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_instRpcEncodableStrictOrLazy_dec_00___x40_Lean_Widget_InteractiveDiagnostic_2157017296____hygCtx___hyg_1____at___00Lean_Widget_instRpcEncodableMsgEmbed_dec_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__spec__7(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_instRpcEncodableMsgEmbed_dec_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1_(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_instRpcEncodableMsgEmbed_dec_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1____boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_instRpcEncodableStrictOrLazy_dec_00___x40_Lean_Widget_InteractiveDiagnostic_2157017296____hygCtx___hyg_1____at___00Lean_Widget_instRpcEncodableMsgEmbed_dec_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__spec__7_spec__14(size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_instRpcEncodableStrictOrLazy_dec_00___x40_Lean_Widget_InteractiveDiagnostic_2157017296____hygCtx___hyg_1____at___00Lean_Widget_instRpcEncodableMsgEmbed_dec_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__spec__7___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_mapM___at___00Lean_Widget_instRpcEncodableMsgEmbed_enc_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_mapM___at___00Lean_Widget_instRpcEncodableMsgEmbed_dec_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_mapM___at___00Lean_Widget_instRpcEncodableMsgEmbed_dec_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Widget_instRpcEncodableMsgEmbed___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Widget_instRpcEncodableMsgEmbed_enc_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1_, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Widget_instRpcEncodableMsgEmbed___closed__0 = (const lean_object*)&l_Lean_Widget_instRpcEncodableMsgEmbed___closed__0_value;
static const lean_closure_object l_Lean_Widget_instRpcEncodableMsgEmbed___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Widget_instRpcEncodableMsgEmbed_dec_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1____boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Widget_instRpcEncodableMsgEmbed___closed__1 = (const lean_object*)&l_Lean_Widget_instRpcEncodableMsgEmbed___closed__1_value;
static const lean_ctor_object l_Lean_Widget_instRpcEncodableMsgEmbed___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Widget_instRpcEncodableMsgEmbed___closed__0_value),((lean_object*)&l_Lean_Widget_instRpcEncodableMsgEmbed___closed__1_value)}};
static const lean_object* l_Lean_Widget_instRpcEncodableMsgEmbed___closed__2 = (const lean_object*)&l_Lean_Widget_instRpcEncodableMsgEmbed___closed__2_value;
LEAN_EXPORT const lean_object* l_Lean_Widget_instRpcEncodableMsgEmbed = (const lean_object*)&l_Lean_Widget_instRpcEncodableMsgEmbed___closed__2_value;
static const lean_string_object l_Lean_Widget_instTypeNameInteractiveMessage_unsafe__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "InteractiveMessage"};
static const lean_object* l_Lean_Widget_instTypeNameInteractiveMessage_unsafe__1___closed__0 = (const lean_object*)&l_Lean_Widget_instTypeNameInteractiveMessage_unsafe__1___closed__0_value;
static const lean_ctor_object l_Lean_Widget_instTypeNameInteractiveMessage_unsafe__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Widget_instImpl___closed__0_00___x40_Lean_Widget_InteractiveDiagnostic_72002168____hygCtx___hyg_14__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Widget_instTypeNameInteractiveMessage_unsafe__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Widget_instTypeNameInteractiveMessage_unsafe__1___closed__1_value_aux_0),((lean_object*)&l_Lean_Widget_instImpl___closed__1_00___x40_Lean_Widget_InteractiveDiagnostic_72002168____hygCtx___hyg_14__value),LEAN_SCALAR_PTR_LITERAL(242, 47, 106, 136, 147, 253, 78, 115)}};
static const lean_ctor_object l_Lean_Widget_instTypeNameInteractiveMessage_unsafe__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Widget_instTypeNameInteractiveMessage_unsafe__1___closed__1_value_aux_1),((lean_object*)&l_Lean_Widget_instTypeNameInteractiveMessage_unsafe__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(228, 166, 162, 6, 136, 116, 159, 57)}};
static const lean_object* l_Lean_Widget_instTypeNameInteractiveMessage_unsafe__1___closed__1 = (const lean_object*)&l_Lean_Widget_instTypeNameInteractiveMessage_unsafe__1___closed__1_value;
static lean_once_cell_t l_Lean_Widget_instTypeNameInteractiveMessage_unsafe__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Widget_instTypeNameInteractiveMessage_unsafe__1___closed__2;
LEAN_EXPORT lean_object* l_Lean_Widget_instTypeNameInteractiveMessage_unsafe__1;
LEAN_EXPORT lean_object* l_Lean_Widget_instTypeNameInteractiveMessage;
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Widget_instFromJsonRpcEncodablePacket_fromJson_00___x40_Lean_Widget_InteractiveDiagnostic_3833933514____hygCtx___hyg_39__spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Widget_instFromJsonRpcEncodablePacket_fromJson_00___x40_Lean_Widget_InteractiveDiagnostic_3833933514____hygCtx___hyg_39__spec__0___boxed(lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Widget_instFromJsonRpcEncodablePacket_fromJson_00___x40_Lean_Widget_InteractiveDiagnostic_3833933514____hygCtx___hyg_39__spec__1_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Widget_instFromJsonRpcEncodablePacket_fromJson_00___x40_Lean_Widget_InteractiveDiagnostic_3833933514____hygCtx___hyg_39__spec__1_spec__1___closed__0 = (const lean_object*)&l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Widget_instFromJsonRpcEncodablePacket_fromJson_00___x40_Lean_Widget_InteractiveDiagnostic_3833933514____hygCtx___hyg_39__spec__1_spec__1___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Widget_instFromJsonRpcEncodablePacket_fromJson_00___x40_Lean_Widget_InteractiveDiagnostic_3833933514____hygCtx___hyg_39__spec__1_spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Widget_instFromJsonRpcEncodablePacket_fromJson_00___x40_Lean_Widget_InteractiveDiagnostic_3833933514____hygCtx___hyg_39__spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Widget_instFromJsonRpcEncodablePacket_fromJson_00___x40_Lean_Widget_InteractiveDiagnostic_3833933514____hygCtx___hyg_39__spec__1___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__0_00___x40_Lean_Widget_InteractiveDiagnostic_3833933514____hygCtx___hyg_39__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "range"};
static const lean_object* l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__0_00___x40_Lean_Widget_InteractiveDiagnostic_3833933514____hygCtx___hyg_39_ = (const lean_object*)&l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__0_00___x40_Lean_Widget_InteractiveDiagnostic_3833933514____hygCtx___hyg_39__value;
static const lean_string_object l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__1_00___x40_Lean_Widget_InteractiveDiagnostic_3833933514____hygCtx___hyg_39__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "fullRange"};
static const lean_object* l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__1_00___x40_Lean_Widget_InteractiveDiagnostic_3833933514____hygCtx___hyg_39_ = (const lean_object*)&l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__1_00___x40_Lean_Widget_InteractiveDiagnostic_3833933514____hygCtx___hyg_39__value;
static const lean_string_object l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__2_00___x40_Lean_Widget_InteractiveDiagnostic_3833933514____hygCtx___hyg_39__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "severity"};
static const lean_object* l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__2_00___x40_Lean_Widget_InteractiveDiagnostic_3833933514____hygCtx___hyg_39_ = (const lean_object*)&l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__2_00___x40_Lean_Widget_InteractiveDiagnostic_3833933514____hygCtx___hyg_39__value;
static const lean_string_object l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__3_00___x40_Lean_Widget_InteractiveDiagnostic_3833933514____hygCtx___hyg_39__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "isSilent"};
static const lean_object* l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__3_00___x40_Lean_Widget_InteractiveDiagnostic_3833933514____hygCtx___hyg_39_ = (const lean_object*)&l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__3_00___x40_Lean_Widget_InteractiveDiagnostic_3833933514____hygCtx___hyg_39__value;
static const lean_string_object l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__4_00___x40_Lean_Widget_InteractiveDiagnostic_3833933514____hygCtx___hyg_39__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "code"};
static const lean_object* l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__4_00___x40_Lean_Widget_InteractiveDiagnostic_3833933514____hygCtx___hyg_39_ = (const lean_object*)&l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__4_00___x40_Lean_Widget_InteractiveDiagnostic_3833933514____hygCtx___hyg_39__value;
static const lean_string_object l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__5_00___x40_Lean_Widget_InteractiveDiagnostic_3833933514____hygCtx___hyg_39__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "source"};
static const lean_object* l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__5_00___x40_Lean_Widget_InteractiveDiagnostic_3833933514____hygCtx___hyg_39_ = (const lean_object*)&l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__5_00___x40_Lean_Widget_InteractiveDiagnostic_3833933514____hygCtx___hyg_39__value;
static const lean_string_object l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__6_00___x40_Lean_Widget_InteractiveDiagnostic_3833933514____hygCtx___hyg_39__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "message"};
static const lean_object* l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__6_00___x40_Lean_Widget_InteractiveDiagnostic_3833933514____hygCtx___hyg_39_ = (const lean_object*)&l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__6_00___x40_Lean_Widget_InteractiveDiagnostic_3833933514____hygCtx___hyg_39__value;
static const lean_string_object l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__7_00___x40_Lean_Widget_InteractiveDiagnostic_3833933514____hygCtx___hyg_39__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "tags"};
static const lean_object* l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__7_00___x40_Lean_Widget_InteractiveDiagnostic_3833933514____hygCtx___hyg_39_ = (const lean_object*)&l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__7_00___x40_Lean_Widget_InteractiveDiagnostic_3833933514____hygCtx___hyg_39__value;
static const lean_string_object l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__8_00___x40_Lean_Widget_InteractiveDiagnostic_3833933514____hygCtx___hyg_39__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "leanTags"};
static const lean_object* l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__8_00___x40_Lean_Widget_InteractiveDiagnostic_3833933514____hygCtx___hyg_39_ = (const lean_object*)&l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__8_00___x40_Lean_Widget_InteractiveDiagnostic_3833933514____hygCtx___hyg_39__value;
static const lean_string_object l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__9_00___x40_Lean_Widget_InteractiveDiagnostic_3833933514____hygCtx___hyg_39__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "relatedInformation"};
static const lean_object* l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__9_00___x40_Lean_Widget_InteractiveDiagnostic_3833933514____hygCtx___hyg_39_ = (const lean_object*)&l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__9_00___x40_Lean_Widget_InteractiveDiagnostic_3833933514____hygCtx___hyg_39__value;
static const lean_string_object l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__10_00___x40_Lean_Widget_InteractiveDiagnostic_3833933514____hygCtx___hyg_39__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "data"};
static const lean_object* l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__10_00___x40_Lean_Widget_InteractiveDiagnostic_3833933514____hygCtx___hyg_39_ = (const lean_object*)&l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__10_00___x40_Lean_Widget_InteractiveDiagnostic_3833933514____hygCtx___hyg_39__value;
LEAN_EXPORT lean_object* l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson_00___x40_Lean_Widget_InteractiveDiagnostic_3833933514____hygCtx___hyg_39_(lean_object*);
static const lean_closure_object l_Lean_Widget_instFromJsonRpcEncodablePacket___closed__0_00___x40_Lean_Widget_InteractiveDiagnostic_3833933514____hygCtx___hyg_39__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson_00___x40_Lean_Widget_InteractiveDiagnostic_3833933514____hygCtx___hyg_39_, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Widget_instFromJsonRpcEncodablePacket___closed__0_00___x40_Lean_Widget_InteractiveDiagnostic_3833933514____hygCtx___hyg_39_ = (const lean_object*)&l_Lean_Widget_instFromJsonRpcEncodablePacket___closed__0_00___x40_Lean_Widget_InteractiveDiagnostic_3833933514____hygCtx___hyg_39__value;
LEAN_EXPORT const lean_object* l_Lean_Widget_instFromJsonRpcEncodablePacket_00___x40_Lean_Widget_InteractiveDiagnostic_3833933514____hygCtx___hyg_39_ = (const lean_object*)&l_Lean_Widget_instFromJsonRpcEncodablePacket___closed__0_00___x40_Lean_Widget_InteractiveDiagnostic_3833933514____hygCtx___hyg_39__value;
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___00Lean_Widget_instToJsonRpcEncodablePacket_toJson_00___x40_Lean_Widget_InteractiveDiagnostic_3833933514____hygCtx___hyg_58__spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___00Lean_Widget_instToJsonRpcEncodablePacket_toJson_00___x40_Lean_Widget_InteractiveDiagnostic_3833933514____hygCtx___hyg_58__spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lean_Widget_instToJsonRpcEncodablePacket_toJson_00___x40_Lean_Widget_InteractiveDiagnostic_3833933514____hygCtx___hyg_58__spec__1(lean_object*, lean_object*);
static const lean_array_object l_Lean_Widget_instToJsonRpcEncodablePacket_toJson___closed__0_00___x40_Lean_Widget_InteractiveDiagnostic_3833933514____hygCtx___hyg_58__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Widget_instToJsonRpcEncodablePacket_toJson___closed__0_00___x40_Lean_Widget_InteractiveDiagnostic_3833933514____hygCtx___hyg_58_ = (const lean_object*)&l_Lean_Widget_instToJsonRpcEncodablePacket_toJson___closed__0_00___x40_Lean_Widget_InteractiveDiagnostic_3833933514____hygCtx___hyg_58__value;
LEAN_EXPORT lean_object* l_Lean_Widget_instToJsonRpcEncodablePacket_toJson_00___x40_Lean_Widget_InteractiveDiagnostic_3833933514____hygCtx___hyg_58_(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_instToJsonRpcEncodablePacket_toJson_00___x40_Lean_Widget_InteractiveDiagnostic_3833933514____hygCtx___hyg_58____boxed(lean_object*);
static const lean_closure_object l_Lean_Widget_instToJsonRpcEncodablePacket___closed__0_00___x40_Lean_Widget_InteractiveDiagnostic_3833933514____hygCtx___hyg_58__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Widget_instToJsonRpcEncodablePacket_toJson_00___x40_Lean_Widget_InteractiveDiagnostic_3833933514____hygCtx___hyg_58____boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Widget_instToJsonRpcEncodablePacket___closed__0_00___x40_Lean_Widget_InteractiveDiagnostic_3833933514____hygCtx___hyg_58_ = (const lean_object*)&l_Lean_Widget_instToJsonRpcEncodablePacket___closed__0_00___x40_Lean_Widget_InteractiveDiagnostic_3833933514____hygCtx___hyg_58__value;
LEAN_EXPORT const lean_object* l_Lean_Widget_instToJsonRpcEncodablePacket_00___x40_Lean_Widget_InteractiveDiagnostic_3833933514____hygCtx___hyg_58_ = (const lean_object*)&l_Lean_Widget_instToJsonRpcEncodablePacket___closed__0_00___x40_Lean_Widget_InteractiveDiagnostic_3833933514____hygCtx___hyg_58__value;
static lean_once_cell_t l_Lean_Widget_instRpcEncodableDiagnosticWith_enc___redArg___lam__0___closed__0_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Widget_instRpcEncodableDiagnosticWith_enc___redArg___lam__0___closed__0_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2_;
static lean_once_cell_t l_Lean_Widget_instRpcEncodableDiagnosticWith_enc___redArg___lam__0___closed__1_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Widget_instRpcEncodableDiagnosticWith_enc___redArg___lam__0___closed__1_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2_;
static lean_once_cell_t l_Lean_Widget_instRpcEncodableDiagnosticWith_enc___redArg___lam__0___closed__2_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Widget_instRpcEncodableDiagnosticWith_enc___redArg___lam__0___closed__2_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2_;
static lean_once_cell_t l_Lean_Widget_instRpcEncodableDiagnosticWith_enc___redArg___lam__0___closed__3_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Widget_instRpcEncodableDiagnosticWith_enc___redArg___lam__0___closed__3_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l_Lean_Widget_instRpcEncodableDiagnosticWith_enc___redArg___lam__0_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2_(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_instRpcEncodableDiagnosticWith_enc___redArg___lam__0_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2____boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_instRpcEncodableDiagnosticWith_enc___redArg___lam__1_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2_(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_instRpcEncodableDiagnosticWith_enc___redArg___lam__2_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2_(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_instRpcEncodableDiagnosticWith_enc___redArg___lam__2_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2____boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Widget_instRpcEncodableDiagnosticWith_enc___redArg___closed__0_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Widget_instRpcEncodableDiagnosticWith_enc___redArg___lam__0_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2____boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Widget_instRpcEncodableDiagnosticWith_enc___redArg___closed__0_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_Widget_instRpcEncodableDiagnosticWith_enc___redArg___closed__0_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2__value;
static const lean_closure_object l_Lean_Widget_instRpcEncodableDiagnosticWith_enc___redArg___closed__1_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Widget_instRpcEncodableDiagnosticWith_enc___redArg___lam__1_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2_, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Widget_instRpcEncodableDiagnosticWith_enc___redArg___closed__1_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_Widget_instRpcEncodableDiagnosticWith_enc___redArg___closed__1_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2__value;
static const lean_closure_object l_Lean_Widget_instRpcEncodableDiagnosticWith_enc___redArg___closed__2_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Widget_instRpcEncodableDiagnosticWith_enc___redArg___lam__2_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2____boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Widget_instRpcEncodableDiagnosticWith_enc___redArg___closed__2_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_Widget_instRpcEncodableDiagnosticWith_enc___redArg___closed__2_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2__value;
static const lean_closure_object l_Lean_Widget_instRpcEncodableDiagnosticWith_enc___redArg___closed__3_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Widget_instRpcEncodableDiagnosticWith_enc___redArg___closed__3_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_Widget_instRpcEncodableDiagnosticWith_enc___redArg___closed__3_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2__value;
static const lean_closure_object l_Lean_Widget_instRpcEncodableDiagnosticWith_enc___redArg___closed__4_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Widget_instRpcEncodableDiagnosticWith_enc___redArg___closed__4_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_Widget_instRpcEncodableDiagnosticWith_enc___redArg___closed__4_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2__value;
static const lean_closure_object l_Lean_Widget_instRpcEncodableDiagnosticWith_enc___redArg___closed__5_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Widget_instRpcEncodableDiagnosticWith_enc___redArg___closed__5_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_Widget_instRpcEncodableDiagnosticWith_enc___redArg___closed__5_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2__value;
static const lean_closure_object l_Lean_Widget_instRpcEncodableDiagnosticWith_enc___redArg___closed__6_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__3, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Widget_instRpcEncodableDiagnosticWith_enc___redArg___closed__6_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_Widget_instRpcEncodableDiagnosticWith_enc___redArg___closed__6_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2__value;
static const lean_closure_object l_Lean_Widget_instRpcEncodableDiagnosticWith_enc___redArg___closed__7_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__4___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Widget_instRpcEncodableDiagnosticWith_enc___redArg___closed__7_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_Widget_instRpcEncodableDiagnosticWith_enc___redArg___closed__7_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2__value;
static const lean_closure_object l_Lean_Widget_instRpcEncodableDiagnosticWith_enc___redArg___closed__8_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__5___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Widget_instRpcEncodableDiagnosticWith_enc___redArg___closed__8_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_Widget_instRpcEncodableDiagnosticWith_enc___redArg___closed__8_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2__value;
static const lean_closure_object l_Lean_Widget_instRpcEncodableDiagnosticWith_enc___redArg___closed__9_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__6, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Widget_instRpcEncodableDiagnosticWith_enc___redArg___closed__9_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_Widget_instRpcEncodableDiagnosticWith_enc___redArg___closed__9_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2__value;
static const lean_ctor_object l_Lean_Widget_instRpcEncodableDiagnosticWith_enc___redArg___closed__10_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Widget_instRpcEncodableDiagnosticWith_enc___redArg___closed__3_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2__value),((lean_object*)&l_Lean_Widget_instRpcEncodableDiagnosticWith_enc___redArg___closed__4_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2__value)}};
static const lean_object* l_Lean_Widget_instRpcEncodableDiagnosticWith_enc___redArg___closed__10_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_Widget_instRpcEncodableDiagnosticWith_enc___redArg___closed__10_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2__value;
static const lean_ctor_object l_Lean_Widget_instRpcEncodableDiagnosticWith_enc___redArg___closed__11_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Widget_instRpcEncodableDiagnosticWith_enc___redArg___closed__10_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2__value),((lean_object*)&l_Lean_Widget_instRpcEncodableDiagnosticWith_enc___redArg___closed__5_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2__value),((lean_object*)&l_Lean_Widget_instRpcEncodableDiagnosticWith_enc___redArg___closed__6_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2__value),((lean_object*)&l_Lean_Widget_instRpcEncodableDiagnosticWith_enc___redArg___closed__7_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2__value),((lean_object*)&l_Lean_Widget_instRpcEncodableDiagnosticWith_enc___redArg___closed__8_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2__value)}};
static const lean_object* l_Lean_Widget_instRpcEncodableDiagnosticWith_enc___redArg___closed__11_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_Widget_instRpcEncodableDiagnosticWith_enc___redArg___closed__11_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2__value;
static const lean_ctor_object l_Lean_Widget_instRpcEncodableDiagnosticWith_enc___redArg___closed__12_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Widget_instRpcEncodableDiagnosticWith_enc___redArg___closed__11_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2__value),((lean_object*)&l_Lean_Widget_instRpcEncodableDiagnosticWith_enc___redArg___closed__9_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2__value)}};
static const lean_object* l_Lean_Widget_instRpcEncodableDiagnosticWith_enc___redArg___closed__12_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_Widget_instRpcEncodableDiagnosticWith_enc___redArg___closed__12_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2__value;
static const lean_closure_object l_Lean_Widget_instRpcEncodableDiagnosticWith_enc___redArg___closed__13_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_StateT_instMonad___redArg___lam__1, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Widget_instRpcEncodableDiagnosticWith_enc___redArg___closed__12_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2__value)} };
static const lean_object* l_Lean_Widget_instRpcEncodableDiagnosticWith_enc___redArg___closed__13_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_Widget_instRpcEncodableDiagnosticWith_enc___redArg___closed__13_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2__value;
static const lean_closure_object l_Lean_Widget_instRpcEncodableDiagnosticWith_enc___redArg___closed__14_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_StateT_instMonad___redArg___lam__4, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Widget_instRpcEncodableDiagnosticWith_enc___redArg___closed__12_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2__value)} };
static const lean_object* l_Lean_Widget_instRpcEncodableDiagnosticWith_enc___redArg___closed__14_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_Widget_instRpcEncodableDiagnosticWith_enc___redArg___closed__14_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2__value;
static const lean_closure_object l_Lean_Widget_instRpcEncodableDiagnosticWith_enc___redArg___closed__15_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_StateT_instMonad___redArg___lam__7, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Widget_instRpcEncodableDiagnosticWith_enc___redArg___closed__12_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2__value)} };
static const lean_object* l_Lean_Widget_instRpcEncodableDiagnosticWith_enc___redArg___closed__15_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_Widget_instRpcEncodableDiagnosticWith_enc___redArg___closed__15_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2__value;
static const lean_closure_object l_Lean_Widget_instRpcEncodableDiagnosticWith_enc___redArg___closed__16_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_StateT_instMonad___redArg___lam__9, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Widget_instRpcEncodableDiagnosticWith_enc___redArg___closed__12_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2__value)} };
static const lean_object* l_Lean_Widget_instRpcEncodableDiagnosticWith_enc___redArg___closed__16_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_Widget_instRpcEncodableDiagnosticWith_enc___redArg___closed__16_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2__value;
static const lean_closure_object l_Lean_Widget_instRpcEncodableDiagnosticWith_enc___redArg___closed__17_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_StateT_map, .m_arity = 8, .m_num_fixed = 3, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Widget_instRpcEncodableDiagnosticWith_enc___redArg___closed__12_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2__value)} };
static const lean_object* l_Lean_Widget_instRpcEncodableDiagnosticWith_enc___redArg___closed__17_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_Widget_instRpcEncodableDiagnosticWith_enc___redArg___closed__17_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2__value;
static const lean_ctor_object l_Lean_Widget_instRpcEncodableDiagnosticWith_enc___redArg___closed__18_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Widget_instRpcEncodableDiagnosticWith_enc___redArg___closed__17_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2__value),((lean_object*)&l_Lean_Widget_instRpcEncodableDiagnosticWith_enc___redArg___closed__13_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2__value)}};
static const lean_object* l_Lean_Widget_instRpcEncodableDiagnosticWith_enc___redArg___closed__18_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_Widget_instRpcEncodableDiagnosticWith_enc___redArg___closed__18_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2__value;
static const lean_closure_object l_Lean_Widget_instRpcEncodableDiagnosticWith_enc___redArg___closed__19_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_StateT_pure, .m_arity = 6, .m_num_fixed = 3, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Widget_instRpcEncodableDiagnosticWith_enc___redArg___closed__12_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2__value)} };
static const lean_object* l_Lean_Widget_instRpcEncodableDiagnosticWith_enc___redArg___closed__19_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_Widget_instRpcEncodableDiagnosticWith_enc___redArg___closed__19_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2__value;
static const lean_ctor_object l_Lean_Widget_instRpcEncodableDiagnosticWith_enc___redArg___closed__20_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Widget_instRpcEncodableDiagnosticWith_enc___redArg___closed__18_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2__value),((lean_object*)&l_Lean_Widget_instRpcEncodableDiagnosticWith_enc___redArg___closed__19_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2__value),((lean_object*)&l_Lean_Widget_instRpcEncodableDiagnosticWith_enc___redArg___closed__14_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2__value),((lean_object*)&l_Lean_Widget_instRpcEncodableDiagnosticWith_enc___redArg___closed__15_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2__value),((lean_object*)&l_Lean_Widget_instRpcEncodableDiagnosticWith_enc___redArg___closed__16_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2__value)}};
static const lean_object* l_Lean_Widget_instRpcEncodableDiagnosticWith_enc___redArg___closed__20_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_Widget_instRpcEncodableDiagnosticWith_enc___redArg___closed__20_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2__value;
static const lean_closure_object l_Lean_Widget_instRpcEncodableDiagnosticWith_enc___redArg___closed__21_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_StateT_bind, .m_arity = 8, .m_num_fixed = 3, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Widget_instRpcEncodableDiagnosticWith_enc___redArg___closed__12_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2__value)} };
static const lean_object* l_Lean_Widget_instRpcEncodableDiagnosticWith_enc___redArg___closed__21_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_Widget_instRpcEncodableDiagnosticWith_enc___redArg___closed__21_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2__value;
static const lean_ctor_object l_Lean_Widget_instRpcEncodableDiagnosticWith_enc___redArg___closed__22_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Widget_instRpcEncodableDiagnosticWith_enc___redArg___closed__20_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2__value),((lean_object*)&l_Lean_Widget_instRpcEncodableDiagnosticWith_enc___redArg___closed__21_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2__value)}};
static const lean_object* l_Lean_Widget_instRpcEncodableDiagnosticWith_enc___redArg___closed__22_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_Widget_instRpcEncodableDiagnosticWith_enc___redArg___closed__22_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2__value;
static const lean_closure_object l_Lean_Widget_instRpcEncodableDiagnosticWith_enc___redArg___closed__23_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_id___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Widget_instRpcEncodableDiagnosticWith_enc___redArg___closed__23_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_Widget_instRpcEncodableDiagnosticWith_enc___redArg___closed__23_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2__value;
static lean_once_cell_t l_Lean_Widget_instRpcEncodableDiagnosticWith_enc___redArg___closed__24_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Widget_instRpcEncodableDiagnosticWith_enc___redArg___closed__24_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2_;
static lean_once_cell_t l_Lean_Widget_instRpcEncodableDiagnosticWith_enc___redArg___closed__25_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Widget_instRpcEncodableDiagnosticWith_enc___redArg___closed__25_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2_;
static lean_once_cell_t l_Lean_Widget_instRpcEncodableDiagnosticWith_enc___redArg___closed__26_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Widget_instRpcEncodableDiagnosticWith_enc___redArg___closed__26_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2_;
static lean_once_cell_t l_Lean_Widget_instRpcEncodableDiagnosticWith_enc___redArg___closed__27_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Widget_instRpcEncodableDiagnosticWith_enc___redArg___closed__27_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l_Lean_Widget_instRpcEncodableDiagnosticWith_enc___redArg_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_instRpcEncodableDiagnosticWith_enc_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_instRpcEncodableDiagnosticWith_dec___redArg___lam__0_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_instRpcEncodableDiagnosticWith_dec___redArg___lam__0_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Widget_instRpcEncodableDiagnosticWith_dec___redArg___lam__1___closed__0_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "unknown LeanDiagnosticTag"};
static const lean_object* l_Lean_Widget_instRpcEncodableDiagnosticWith_dec___redArg___lam__1___closed__0_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_Widget_instRpcEncodableDiagnosticWith_dec___redArg___lam__1___closed__0_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2__value;
static const lean_ctor_object l_Lean_Widget_instRpcEncodableDiagnosticWith_dec___redArg___lam__1___closed__1_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Widget_instRpcEncodableDiagnosticWith_dec___redArg___lam__1___closed__0_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2__value)}};
static const lean_object* l_Lean_Widget_instRpcEncodableDiagnosticWith_dec___redArg___lam__1___closed__1_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_Widget_instRpcEncodableDiagnosticWith_dec___redArg___lam__1___closed__1_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2__value;
static const lean_ctor_object l_Lean_Widget_instRpcEncodableDiagnosticWith_dec___redArg___lam__1___closed__2_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Widget_instRpcEncodableDiagnosticWith_dec___redArg___lam__1___closed__2_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_Widget_instRpcEncodableDiagnosticWith_dec___redArg___lam__1___closed__2_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2__value;
static const lean_ctor_object l_Lean_Widget_instRpcEncodableDiagnosticWith_dec___redArg___lam__1___closed__3_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Widget_instRpcEncodableDiagnosticWith_dec___redArg___lam__1___closed__3_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_Widget_instRpcEncodableDiagnosticWith_dec___redArg___lam__1___closed__3_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l_Lean_Widget_instRpcEncodableDiagnosticWith_dec___redArg___lam__1_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_instRpcEncodableDiagnosticWith_dec___redArg___lam__1_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Widget_instRpcEncodableDiagnosticWith_dec___redArg___lam__2___closed__0_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "unknown DiagnosticTag"};
static const lean_object* l_Lean_Widget_instRpcEncodableDiagnosticWith_dec___redArg___lam__2___closed__0_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_Widget_instRpcEncodableDiagnosticWith_dec___redArg___lam__2___closed__0_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2__value;
static const lean_ctor_object l_Lean_Widget_instRpcEncodableDiagnosticWith_dec___redArg___lam__2___closed__1_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Widget_instRpcEncodableDiagnosticWith_dec___redArg___lam__2___closed__0_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2__value)}};
static const lean_object* l_Lean_Widget_instRpcEncodableDiagnosticWith_dec___redArg___lam__2___closed__1_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_Widget_instRpcEncodableDiagnosticWith_dec___redArg___lam__2___closed__1_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2__value;
static const lean_ctor_object l_Lean_Widget_instRpcEncodableDiagnosticWith_dec___redArg___lam__2___closed__2_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Widget_instRpcEncodableDiagnosticWith_dec___redArg___lam__2___closed__2_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_Widget_instRpcEncodableDiagnosticWith_dec___redArg___lam__2___closed__2_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2__value;
static const lean_ctor_object l_Lean_Widget_instRpcEncodableDiagnosticWith_dec___redArg___lam__2___closed__3_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Widget_instRpcEncodableDiagnosticWith_dec___redArg___lam__2___closed__3_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_Widget_instRpcEncodableDiagnosticWith_dec___redArg___lam__2___closed__3_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l_Lean_Widget_instRpcEncodableDiagnosticWith_dec___redArg___lam__2_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_instRpcEncodableDiagnosticWith_dec___redArg___lam__2_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Widget_instRpcEncodableDiagnosticWith_dec___redArg___closed__0_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Widget_instRpcEncodableDiagnosticWith_dec___redArg___closed__0_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2_;
static lean_once_cell_t l_Lean_Widget_instRpcEncodableDiagnosticWith_dec___redArg___closed__1_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Widget_instRpcEncodableDiagnosticWith_dec___redArg___closed__1_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2_;
static lean_once_cell_t l_Lean_Widget_instRpcEncodableDiagnosticWith_dec___redArg___closed__2_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Widget_instRpcEncodableDiagnosticWith_dec___redArg___closed__2_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2_;
static lean_once_cell_t l_Lean_Widget_instRpcEncodableDiagnosticWith_dec___redArg___closed__3_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Widget_instRpcEncodableDiagnosticWith_dec___redArg___closed__3_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2_;
static lean_once_cell_t l_Lean_Widget_instRpcEncodableDiagnosticWith_dec___redArg___closed__4_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Widget_instRpcEncodableDiagnosticWith_dec___redArg___closed__4_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2_;
static lean_once_cell_t l_Lean_Widget_instRpcEncodableDiagnosticWith_dec___redArg___closed__5_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Widget_instRpcEncodableDiagnosticWith_dec___redArg___closed__5_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2_;
static lean_once_cell_t l_Lean_Widget_instRpcEncodableDiagnosticWith_dec___redArg___closed__6_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Widget_instRpcEncodableDiagnosticWith_dec___redArg___closed__6_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2_;
static lean_once_cell_t l_Lean_Widget_instRpcEncodableDiagnosticWith_dec___redArg___closed__7_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Widget_instRpcEncodableDiagnosticWith_dec___redArg___closed__7_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2_;
static lean_once_cell_t l_Lean_Widget_instRpcEncodableDiagnosticWith_dec___redArg___closed__8_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Widget_instRpcEncodableDiagnosticWith_dec___redArg___closed__8_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2_;
static lean_once_cell_t l_Lean_Widget_instRpcEncodableDiagnosticWith_dec___redArg___closed__9_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Widget_instRpcEncodableDiagnosticWith_dec___redArg___closed__9_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2_;
static lean_once_cell_t l_Lean_Widget_instRpcEncodableDiagnosticWith_dec___redArg___closed__10_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Widget_instRpcEncodableDiagnosticWith_dec___redArg___closed__10_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2_;
static lean_once_cell_t l_Lean_Widget_instRpcEncodableDiagnosticWith_dec___redArg___closed__11_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Widget_instRpcEncodableDiagnosticWith_dec___redArg___closed__11_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2_;
static const lean_closure_object l_Lean_Widget_instRpcEncodableDiagnosticWith_dec___redArg___closed__12_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instFromJsonJson___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Widget_instRpcEncodableDiagnosticWith_dec___redArg___closed__12_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_Widget_instRpcEncodableDiagnosticWith_dec___redArg___closed__12_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2__value;
static const lean_string_object l_Lean_Widget_instRpcEncodableDiagnosticWith_dec___redArg___closed__13_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 50, .m_capacity = 50, .m_length = 49, .m_data = "expected string or integer diagnostic code, got '"};
static const lean_object* l_Lean_Widget_instRpcEncodableDiagnosticWith_dec___redArg___closed__13_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_Widget_instRpcEncodableDiagnosticWith_dec___redArg___closed__13_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2__value;
static const lean_string_object l_Lean_Widget_instRpcEncodableDiagnosticWith_dec___redArg___closed__14_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "unknown DiagnosticSeverity '"};
static const lean_object* l_Lean_Widget_instRpcEncodableDiagnosticWith_dec___redArg___closed__14_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_Widget_instRpcEncodableDiagnosticWith_dec___redArg___closed__14_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2__value;
static const lean_ctor_object l_Lean_Widget_instRpcEncodableDiagnosticWith_dec___redArg___closed__15_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(3) << 1) | 1))}};
static const lean_object* l_Lean_Widget_instRpcEncodableDiagnosticWith_dec___redArg___closed__15_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_Widget_instRpcEncodableDiagnosticWith_dec___redArg___closed__15_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2__value;
static const lean_ctor_object l_Lean_Widget_instRpcEncodableDiagnosticWith_dec___redArg___closed__16_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(2) << 1) | 1))}};
static const lean_object* l_Lean_Widget_instRpcEncodableDiagnosticWith_dec___redArg___closed__16_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_Widget_instRpcEncodableDiagnosticWith_dec___redArg___closed__16_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2__value;
static const lean_ctor_object l_Lean_Widget_instRpcEncodableDiagnosticWith_dec___redArg___closed__17_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Widget_instRpcEncodableDiagnosticWith_dec___redArg___closed__17_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_Widget_instRpcEncodableDiagnosticWith_dec___redArg___closed__17_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2__value;
static const lean_ctor_object l_Lean_Widget_instRpcEncodableDiagnosticWith_dec___redArg___closed__18_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Widget_instRpcEncodableDiagnosticWith_dec___redArg___closed__18_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_Widget_instRpcEncodableDiagnosticWith_dec___redArg___closed__18_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l_Lean_Widget_instRpcEncodableDiagnosticWith_dec___redArg_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_instRpcEncodableDiagnosticWith_dec___redArg_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_instRpcEncodableDiagnosticWith_dec_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_instRpcEncodableDiagnosticWith_dec_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_instRpcEncodableDiagnosticWith___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_instRpcEncodableDiagnosticWith(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_InteractiveDiagnostic_toDiagnostic_prettyTt___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "(trace)"};
static const lean_object* l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_InteractiveDiagnostic_toDiagnostic_prettyTt___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_InteractiveDiagnostic_toDiagnostic_prettyTt___lam__0___closed__0_value;
static const lean_ctor_object l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_InteractiveDiagnostic_toDiagnostic_prettyTt___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_InteractiveDiagnostic_toDiagnostic_prettyTt___lam__0___closed__0_value)}};
static const lean_object* l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_InteractiveDiagnostic_toDiagnostic_prettyTt___lam__0___closed__1 = (const lean_object*)&l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_InteractiveDiagnostic_toDiagnostic_prettyTt___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_InteractiveDiagnostic_toDiagnostic_prettyTt___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_InteractiveDiagnostic_toDiagnostic_prettyTt___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_InteractiveDiagnostic_toDiagnostic_prettyTt(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_InteractiveDiagnostic_toDiagnostic(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_mkPPContext(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_mkPPContext___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_EmbedFmt_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_EmbedFmt_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_EmbedFmt_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_EmbedFmt_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_EmbedFmt_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_EmbedFmt_code_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_EmbedFmt_code_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_EmbedFmt_goal_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_EmbedFmt_goal_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_EmbedFmt_widget_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_EmbedFmt_widget_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_EmbedFmt_trace_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_EmbedFmt_trace_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_EmbedFmt_ignoreTags_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_EmbedFmt_ignoreTags_elim(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Widget_instInhabitedEmbedFmt_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Widget_instInhabitedEmbedFmt_default___closed__0;
static lean_once_cell_t l_Lean_Widget_instInhabitedEmbedFmt_default___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Widget_instInhabitedEmbedFmt_default___closed__1;
static lean_once_cell_t l_Lean_Widget_instInhabitedEmbedFmt_default___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Widget_instInhabitedEmbedFmt_default___closed__2;
static lean_once_cell_t l_Lean_Widget_instInhabitedEmbedFmt_default___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Widget_instInhabitedEmbedFmt_default___closed__3;
LEAN_EXPORT lean_object* l_Lean_Widget_instInhabitedEmbedFmt_default;
LEAN_EXPORT lean_object* l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_instInhabitedEmbedFmt;
LEAN_EXPORT lean_object* l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractiveAux_pushEmbed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractiveAux_pushEmbed___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractiveAux_withIgnoreTags(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractiveAux_withIgnoreTags___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractiveAux_mkContextInfo___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "_diag"};
static const lean_object* l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractiveAux_mkContextInfo___closed__0 = (const lean_object*)&l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractiveAux_mkContextInfo___closed__0_value;
static const lean_ctor_object l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractiveAux_mkContextInfo___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractiveAux_mkContextInfo___closed__0_value),LEAN_SCALAR_PTR_LITERAL(24, 80, 229, 227, 38, 203, 204, 166)}};
static const lean_object* l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractiveAux_mkContextInfo___closed__1 = (const lean_object*)&l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractiveAux_mkContextInfo___closed__1_value;
static const lean_ctor_object l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractiveAux_mkContextInfo___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractiveAux_mkContextInfo___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractiveAux_mkContextInfo___closed__2 = (const lean_object*)&l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractiveAux_mkContextInfo___closed__2_value;
static const lean_array_object l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractiveAux_mkContextInfo___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractiveAux_mkContextInfo___closed__3 = (const lean_object*)&l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractiveAux_mkContextInfo___closed__3_value;
LEAN_EXPORT lean_object* l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractiveAux_mkContextInfo(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractiveAux_mkContextInfo___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractiveAux_chopUpChildren_spec__0___redArg(lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractiveAux_chopUpChildren___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractiveAux_chopUpChildren___closed__0 = (const lean_object*)&l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractiveAux_chopUpChildren___closed__0_value;
static lean_once_cell_t l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractiveAux_chopUpChildren___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static double l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractiveAux_chopUpChildren___closed__1;
static const lean_string_object l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractiveAux_chopUpChildren___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractiveAux_chopUpChildren___closed__2 = (const lean_object*)&l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractiveAux_chopUpChildren___closed__2_value;
static const lean_string_object l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractiveAux_chopUpChildren___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = " more entries..."};
static const lean_object* l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractiveAux_chopUpChildren___closed__3 = (const lean_object*)&l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractiveAux_chopUpChildren___closed__3_value;
static const lean_ctor_object l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractiveAux_chopUpChildren___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractiveAux_chopUpChildren___closed__3_value)}};
static const lean_object* l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractiveAux_chopUpChildren___closed__4 = (const lean_object*)&l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractiveAux_chopUpChildren___closed__4_value;
LEAN_EXPORT lean_object* l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractiveAux_chopUpChildren(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractiveAux_chopUpChildren___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractiveAux_chopUpChildren_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at___00__private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractiveAux_go_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get_x3f___at___00__private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractiveAux_go_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get_x3f___at___00__private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractiveAux_go_spec__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractiveAux_go_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractiveAux_go_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractiveAux_go_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractiveAux_go___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "["};
static const lean_object* l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractiveAux_go___closed__0 = (const lean_object*)&l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractiveAux_go___closed__0_value;
static const lean_ctor_object l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractiveAux_go___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractiveAux_go___closed__0_value)}};
static const lean_object* l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractiveAux_go___closed__1 = (const lean_object*)&l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractiveAux_go___closed__1_value;
static const lean_string_object l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractiveAux_go___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "] "};
static const lean_object* l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractiveAux_go___closed__2 = (const lean_object*)&l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractiveAux_go___closed__2_value;
static const lean_ctor_object l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractiveAux_go___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractiveAux_go___closed__2_value)}};
static const lean_object* l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractiveAux_go___closed__3 = (const lean_object*)&l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractiveAux_go___closed__3_value;
static lean_once_cell_t l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractiveAux_go___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractiveAux_go___closed__4;
static const lean_string_object l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractiveAux_go___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = " "};
static const lean_object* l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractiveAux_go___closed__5 = (const lean_object*)&l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractiveAux_go___closed__5_value;
static const lean_ctor_object l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractiveAux_go___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractiveAux_go___closed__5_value)}};
static const lean_object* l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractiveAux_go___closed__6 = (const lean_object*)&l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractiveAux_go___closed__6_value;
static const lean_string_object l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractiveAux_go___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 52, .m_capacity = 52, .m_length = 51, .m_data = "MessageData.ofLazy: expected MessageData in Dynamic"};
static const lean_object* l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractiveAux_go___closed__7 = (const lean_object*)&l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractiveAux_go___closed__7_value;
static lean_once_cell_t l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractiveAux_go___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractiveAux_go___closed__8;
static const lean_string_object l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractiveAux_go___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "goal "};
static const lean_object* l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractiveAux_go___closed__9 = (const lean_object*)&l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractiveAux_go___closed__9_value;
static const lean_ctor_object l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractiveAux_go___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractiveAux_go___closed__9_value)}};
static const lean_object* l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractiveAux_go___closed__10 = (const lean_object*)&l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractiveAux_go___closed__10_value;
LEAN_EXPORT lean_object* l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractiveAux_go(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractiveAux_go_spec__3(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractiveAux_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractiveAux___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractiveAux___closed__0;
static const lean_array_object l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractiveAux___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractiveAux___closed__1 = (const lean_object*)&l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractiveAux___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractiveAux(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractiveAux___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractive_fmtToTT___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractive_fmtToTT___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_TaggedText_rewriteM___at___00__private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractive_fmtToTT_spec__2_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_rewriteM___at___00__private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractive_fmtToTT_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_TaggedText_rewriteM___at___00__private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractive_fmtToTT_spec__2_spec__2___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_TaggedText_rewriteM___at___00__private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractive_fmtToTT_spec__2_spec__2(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_rewriteM___at___00__private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractive_fmtToTT_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_TaggedText_rewriteM___at___00__private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractive_fmtToTT_spec__2_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractive_fmtToTT_spec__1(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractive_fmtToTT_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractive_fmtToTT_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractive_fmtToTT_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractive_fmtToTT___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractive_fmtToTT___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractive_fmtToTT(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractive_fmtToTT___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_rewriteM___at___00__private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractive_fmtToTT_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_rewriteM___at___00__private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractive_fmtToTT_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_msgToInteractive___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_msgToInteractive___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Widget_msgToInteractive___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Widget_msgToInteractive___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Widget_msgToInteractive___closed__0 = (const lean_object*)&l_Lean_Widget_msgToInteractive___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Widget_msgToInteractive(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_msgToInteractive___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Widget_msgToInteractiveDiagnostic___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l_Lean_Widget_msgToInteractiveDiagnostic___lam__0___closed__0 = (const lean_object*)&l_Lean_Widget_msgToInteractiveDiagnostic___lam__0___closed__0_value;
static const lean_string_object l_Lean_Widget_msgToInteractiveDiagnostic___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "unsolvedGoals"};
static const lean_object* l_Lean_Widget_msgToInteractiveDiagnostic___lam__0___closed__1 = (const lean_object*)&l_Lean_Widget_msgToInteractiveDiagnostic___lam__0___closed__1_value;
static const lean_ctor_object l_Lean_Widget_msgToInteractiveDiagnostic___lam__0___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Widget_msgToInteractiveDiagnostic___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(186, 205, 46, 93, 234, 75, 44, 75)}};
static const lean_ctor_object l_Lean_Widget_msgToInteractiveDiagnostic___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Widget_msgToInteractiveDiagnostic___lam__0___closed__2_value_aux_0),((lean_object*)&l_Lean_Widget_msgToInteractiveDiagnostic___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(83, 55, 102, 232, 177, 170, 100, 130)}};
static const lean_object* l_Lean_Widget_msgToInteractiveDiagnostic___lam__0___closed__2 = (const lean_object*)&l_Lean_Widget_msgToInteractiveDiagnostic___lam__0___closed__2_value;
LEAN_EXPORT uint8_t l_Lean_Widget_msgToInteractiveDiagnostic___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_msgToInteractiveDiagnostic___lam__0___boxed(lean_object*);
static const lean_string_object l_Lean_Widget_msgToInteractiveDiagnostic___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "goalsAccomplished"};
static const lean_object* l_Lean_Widget_msgToInteractiveDiagnostic___lam__1___closed__0 = (const lean_object*)&l_Lean_Widget_msgToInteractiveDiagnostic___lam__1___closed__0_value;
static const lean_ctor_object l_Lean_Widget_msgToInteractiveDiagnostic___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Widget_msgToInteractiveDiagnostic___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(101, 125, 130, 173, 238, 104, 164, 108)}};
static const lean_object* l_Lean_Widget_msgToInteractiveDiagnostic___lam__1___closed__1 = (const lean_object*)&l_Lean_Widget_msgToInteractiveDiagnostic___lam__1___closed__1_value;
LEAN_EXPORT uint8_t l_Lean_Widget_msgToInteractiveDiagnostic___lam__1(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_msgToInteractiveDiagnostic___lam__1___boxed(lean_object*);
static const lean_string_object l_Lean_Widget_msgToInteractiveDiagnostic___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "[error when printing message: "};
static const lean_object* l_Lean_Widget_msgToInteractiveDiagnostic___closed__0 = (const lean_object*)&l_Lean_Widget_msgToInteractiveDiagnostic___closed__0_value;
static const lean_string_object l_Lean_Widget_msgToInteractiveDiagnostic___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "]"};
static const lean_object* l_Lean_Widget_msgToInteractiveDiagnostic___closed__1 = (const lean_object*)&l_Lean_Widget_msgToInteractiveDiagnostic___closed__1_value;
static const lean_closure_object l_Lean_Widget_msgToInteractiveDiagnostic___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Widget_msgToInteractiveDiagnostic___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Widget_msgToInteractiveDiagnostic___closed__2 = (const lean_object*)&l_Lean_Widget_msgToInteractiveDiagnostic___closed__2_value;
static const lean_closure_object l_Lean_Widget_msgToInteractiveDiagnostic___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Widget_msgToInteractiveDiagnostic___lam__1___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Widget_msgToInteractiveDiagnostic___closed__3 = (const lean_object*)&l_Lean_Widget_msgToInteractiveDiagnostic___closed__3_value;
static const lean_array_object l_Lean_Widget_msgToInteractiveDiagnostic___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 246}, .m_size = 1, .m_capacity = 1, .m_data = {((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Widget_msgToInteractiveDiagnostic___closed__4 = (const lean_object*)&l_Lean_Widget_msgToInteractiveDiagnostic___closed__4_value;
static const lean_ctor_object l_Lean_Widget_msgToInteractiveDiagnostic___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Widget_msgToInteractiveDiagnostic___closed__4_value)}};
static const lean_object* l_Lean_Widget_msgToInteractiveDiagnostic___closed__5 = (const lean_object*)&l_Lean_Widget_msgToInteractiveDiagnostic___closed__5_value;
static const lean_array_object l_Lean_Widget_msgToInteractiveDiagnostic___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 246}, .m_size = 1, .m_capacity = 1, .m_data = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Widget_msgToInteractiveDiagnostic___closed__6 = (const lean_object*)&l_Lean_Widget_msgToInteractiveDiagnostic___closed__6_value;
static const lean_ctor_object l_Lean_Widget_msgToInteractiveDiagnostic___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Widget_msgToInteractiveDiagnostic___closed__6_value)}};
static const lean_object* l_Lean_Widget_msgToInteractiveDiagnostic___closed__7 = (const lean_object*)&l_Lean_Widget_msgToInteractiveDiagnostic___closed__7_value;
static const lean_string_object l_Lean_Widget_msgToInteractiveDiagnostic___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Lean 4"};
static const lean_object* l_Lean_Widget_msgToInteractiveDiagnostic___closed__8 = (const lean_object*)&l_Lean_Widget_msgToInteractiveDiagnostic___closed__8_value;
static const lean_ctor_object l_Lean_Widget_msgToInteractiveDiagnostic___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Widget_msgToInteractiveDiagnostic___closed__8_value)}};
static const lean_object* l_Lean_Widget_msgToInteractiveDiagnostic___closed__9 = (const lean_object*)&l_Lean_Widget_msgToInteractiveDiagnostic___closed__9_value;
static const lean_array_object l_Lean_Widget_msgToInteractiveDiagnostic___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 246}, .m_size = 1, .m_capacity = 1, .m_data = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Widget_msgToInteractiveDiagnostic___closed__10 = (const lean_object*)&l_Lean_Widget_msgToInteractiveDiagnostic___closed__10_value;
static const lean_ctor_object l_Lean_Widget_msgToInteractiveDiagnostic___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Widget_msgToInteractiveDiagnostic___closed__10_value)}};
static const lean_object* l_Lean_Widget_msgToInteractiveDiagnostic___closed__11 = (const lean_object*)&l_Lean_Widget_msgToInteractiveDiagnostic___closed__11_value;
static const lean_array_object l_Lean_Widget_msgToInteractiveDiagnostic___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 246}, .m_size = 1, .m_capacity = 1, .m_data = {((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Widget_msgToInteractiveDiagnostic___closed__12 = (const lean_object*)&l_Lean_Widget_msgToInteractiveDiagnostic___closed__12_value;
static const lean_ctor_object l_Lean_Widget_msgToInteractiveDiagnostic___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Widget_msgToInteractiveDiagnostic___closed__12_value)}};
static const lean_object* l_Lean_Widget_msgToInteractiveDiagnostic___closed__13 = (const lean_object*)&l_Lean_Widget_msgToInteractiveDiagnostic___closed__13_value;
static const lean_ctor_object l_Lean_Widget_msgToInteractiveDiagnostic___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Widget_msgToInteractiveDiagnostic___closed__14 = (const lean_object*)&l_Lean_Widget_msgToInteractiveDiagnostic___closed__14_value;
LEAN_EXPORT lean_object* l_Lean_Widget_msgToInteractiveDiagnostic(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Widget_msgToInteractiveDiagnostic___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_StrictOrLazy_ctorIdx___redArg(lean_object* v_x_1_){
_start:
{
if (lean_obj_tag(v_x_1_) == 0)
{
lean_object* v___x_2_; 
v___x_2_ = lean_unsigned_to_nat(0u);
return v___x_2_;
}
else
{
lean_object* v___x_3_; 
v___x_3_ = lean_unsigned_to_nat(1u);
return v___x_3_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_StrictOrLazy_ctorIdx___redArg___boxed(lean_object* v_x_4_){
_start:
{
lean_object* v_res_5_; 
v_res_5_ = l_Lean_Widget_StrictOrLazy_ctorIdx___redArg(v_x_4_);
lean_dec_ref(v_x_4_);
return v_res_5_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_StrictOrLazy_ctorIdx(lean_object* v_00_u03b1_6_, lean_object* v_00_u03b2_7_, lean_object* v_x_8_){
_start:
{
lean_object* v___x_9_; 
v___x_9_ = l_Lean_Widget_StrictOrLazy_ctorIdx___redArg(v_x_8_);
return v___x_9_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_StrictOrLazy_ctorIdx___boxed(lean_object* v_00_u03b1_10_, lean_object* v_00_u03b2_11_, lean_object* v_x_12_){
_start:
{
lean_object* v_res_13_; 
v_res_13_ = l_Lean_Widget_StrictOrLazy_ctorIdx(v_00_u03b1_10_, v_00_u03b2_11_, v_x_12_);
lean_dec_ref(v_x_12_);
return v_res_13_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_StrictOrLazy_ctorElim___redArg(lean_object* v_t_14_, lean_object* v_k_15_){
_start:
{
lean_object* v_a_16_; lean_object* v___x_17_; 
v_a_16_ = lean_ctor_get(v_t_14_, 0);
lean_inc(v_a_16_);
lean_dec_ref(v_t_14_);
v___x_17_ = lean_apply_1(v_k_15_, v_a_16_);
return v___x_17_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_StrictOrLazy_ctorElim(lean_object* v_00_u03b1_18_, lean_object* v_00_u03b2_19_, lean_object* v_motive_20_, lean_object* v_ctorIdx_21_, lean_object* v_t_22_, lean_object* v_h_23_, lean_object* v_k_24_){
_start:
{
lean_object* v___x_25_; 
v___x_25_ = l_Lean_Widget_StrictOrLazy_ctorElim___redArg(v_t_22_, v_k_24_);
return v___x_25_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_StrictOrLazy_ctorElim___boxed(lean_object* v_00_u03b1_26_, lean_object* v_00_u03b2_27_, lean_object* v_motive_28_, lean_object* v_ctorIdx_29_, lean_object* v_t_30_, lean_object* v_h_31_, lean_object* v_k_32_){
_start:
{
lean_object* v_res_33_; 
v_res_33_ = l_Lean_Widget_StrictOrLazy_ctorElim(v_00_u03b1_26_, v_00_u03b2_27_, v_motive_28_, v_ctorIdx_29_, v_t_30_, v_h_31_, v_k_32_);
lean_dec(v_ctorIdx_29_);
return v_res_33_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_StrictOrLazy_strict_elim___redArg(lean_object* v_t_34_, lean_object* v_strict_35_){
_start:
{
lean_object* v___x_36_; 
v___x_36_ = l_Lean_Widget_StrictOrLazy_ctorElim___redArg(v_t_34_, v_strict_35_);
return v___x_36_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_StrictOrLazy_strict_elim(lean_object* v_00_u03b1_37_, lean_object* v_00_u03b2_38_, lean_object* v_motive_39_, lean_object* v_t_40_, lean_object* v_h_41_, lean_object* v_strict_42_){
_start:
{
lean_object* v___x_43_; 
v___x_43_ = l_Lean_Widget_StrictOrLazy_ctorElim___redArg(v_t_40_, v_strict_42_);
return v___x_43_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_StrictOrLazy_lazy_elim___redArg(lean_object* v_t_44_, lean_object* v_lazy_45_){
_start:
{
lean_object* v___x_46_; 
v___x_46_ = l_Lean_Widget_StrictOrLazy_ctorElim___redArg(v_t_44_, v_lazy_45_);
return v___x_46_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_StrictOrLazy_lazy_elim(lean_object* v_00_u03b1_47_, lean_object* v_00_u03b2_48_, lean_object* v_motive_49_, lean_object* v_t_50_, lean_object* v_h_51_, lean_object* v_lazy_52_){
_start:
{
lean_object* v___x_53_; 
v___x_53_ = l_Lean_Widget_StrictOrLazy_ctorElim___redArg(v_t_50_, v_lazy_52_);
return v___x_53_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_instInhabitedStrictOrLazy_default___redArg(lean_object* v_inst_54_){
_start:
{
lean_object* v___x_55_; 
v___x_55_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_55_, 0, v_inst_54_);
return v___x_55_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_instInhabitedStrictOrLazy_default(lean_object* v_00_u03b1_56_, lean_object* v_00_u03b2_57_, lean_object* v_inst_58_){
_start:
{
lean_object* v___x_59_; 
v___x_59_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_59_, 0, v_inst_58_);
return v___x_59_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_instInhabitedStrictOrLazy___redArg(lean_object* v_inst_60_){
_start:
{
lean_object* v___x_61_; 
v___x_61_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_61_, 0, v_inst_60_);
return v___x_61_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_instInhabitedStrictOrLazy(lean_object* v_a_62_, lean_object* v_inst_63_, lean_object* v_a_64_){
_start:
{
lean_object* v___x_65_; 
v___x_65_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_65_, 0, v_inst_63_);
return v___x_65_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_RpcEncodablePacket_00___x40_Lean_Widget_InteractiveDiagnostic_2157017296____hygCtx___hyg_1__ctorIdx(lean_object* v_x_66_){
_start:
{
if (lean_obj_tag(v_x_66_) == 0)
{
lean_object* v___x_67_; 
v___x_67_ = lean_unsigned_to_nat(0u);
return v___x_67_;
}
else
{
lean_object* v___x_68_; 
v___x_68_ = lean_unsigned_to_nat(1u);
return v___x_68_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_RpcEncodablePacket_00___x40_Lean_Widget_InteractiveDiagnostic_2157017296____hygCtx___hyg_1__ctorIdx___boxed(lean_object* v_x_69_){
_start:
{
lean_object* v_res_70_; 
v_res_70_ = l_Lean_Widget_RpcEncodablePacket_00___x40_Lean_Widget_InteractiveDiagnostic_2157017296____hygCtx___hyg_1__ctorIdx(v_x_69_);
lean_dec_ref(v_x_69_);
return v_res_70_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_RpcEncodablePacket_00___x40_Lean_Widget_InteractiveDiagnostic_2157017296____hygCtx___hyg_1__ctorElim___redArg(lean_object* v_t_71_, lean_object* v_k_72_){
_start:
{
lean_object* v_a_73_; lean_object* v___x_74_; 
v_a_73_ = lean_ctor_get(v_t_71_, 0);
lean_inc(v_a_73_);
lean_dec_ref(v_t_71_);
v___x_74_ = lean_apply_1(v_k_72_, v_a_73_);
return v___x_74_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_RpcEncodablePacket_00___x40_Lean_Widget_InteractiveDiagnostic_2157017296____hygCtx___hyg_1__ctorElim(lean_object* v_motive_75_, lean_object* v_ctorIdx_76_, lean_object* v_t_77_, lean_object* v_h_78_, lean_object* v_k_79_){
_start:
{
lean_object* v___x_80_; 
v___x_80_ = l_Lean_Widget_RpcEncodablePacket_00___x40_Lean_Widget_InteractiveDiagnostic_2157017296____hygCtx___hyg_1__ctorElim___redArg(v_t_77_, v_k_79_);
return v___x_80_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_RpcEncodablePacket_00___x40_Lean_Widget_InteractiveDiagnostic_2157017296____hygCtx___hyg_1__ctorElim___boxed(lean_object* v_motive_81_, lean_object* v_ctorIdx_82_, lean_object* v_t_83_, lean_object* v_h_84_, lean_object* v_k_85_){
_start:
{
lean_object* v_res_86_; 
v_res_86_ = l_Lean_Widget_RpcEncodablePacket_00___x40_Lean_Widget_InteractiveDiagnostic_2157017296____hygCtx___hyg_1__ctorElim(v_motive_81_, v_ctorIdx_82_, v_t_83_, v_h_84_, v_k_85_);
lean_dec(v_ctorIdx_82_);
return v_res_86_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_RpcEncodablePacket_strict_00___x40_Lean_Widget_InteractiveDiagnostic_2157017296____hygCtx___hyg_1__elim___redArg(lean_object* v_t_87_, lean_object* v_Lean_Widget_RpcEncodablePacket_strict_88_){
_start:
{
lean_object* v___x_89_; 
v___x_89_ = l_Lean_Widget_RpcEncodablePacket_00___x40_Lean_Widget_InteractiveDiagnostic_2157017296____hygCtx___hyg_1__ctorElim___redArg(v_t_87_, v_Lean_Widget_RpcEncodablePacket_strict_88_);
return v___x_89_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_RpcEncodablePacket_strict_00___x40_Lean_Widget_InteractiveDiagnostic_2157017296____hygCtx___hyg_1__elim(lean_object* v_motive_90_, lean_object* v_t_91_, lean_object* v_h_92_, lean_object* v_Lean_Widget_RpcEncodablePacket_strict_93_){
_start:
{
lean_object* v___x_94_; 
v___x_94_ = l_Lean_Widget_RpcEncodablePacket_00___x40_Lean_Widget_InteractiveDiagnostic_2157017296____hygCtx___hyg_1__ctorElim___redArg(v_t_91_, v_Lean_Widget_RpcEncodablePacket_strict_93_);
return v___x_94_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_RpcEncodablePacket_lazy_00___x40_Lean_Widget_InteractiveDiagnostic_2157017296____hygCtx___hyg_1__elim___redArg(lean_object* v_t_95_, lean_object* v_Lean_Widget_RpcEncodablePacket_lazy_96_){
_start:
{
lean_object* v___x_97_; 
v___x_97_ = l_Lean_Widget_RpcEncodablePacket_00___x40_Lean_Widget_InteractiveDiagnostic_2157017296____hygCtx___hyg_1__ctorElim___redArg(v_t_95_, v_Lean_Widget_RpcEncodablePacket_lazy_96_);
return v___x_97_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_RpcEncodablePacket_lazy_00___x40_Lean_Widget_InteractiveDiagnostic_2157017296____hygCtx___hyg_1__elim(lean_object* v_motive_98_, lean_object* v_t_99_, lean_object* v_h_100_, lean_object* v_Lean_Widget_RpcEncodablePacket_lazy_101_){
_start:
{
lean_object* v___x_102_; 
v___x_102_ = l_Lean_Widget_RpcEncodablePacket_00___x40_Lean_Widget_InteractiveDiagnostic_2157017296____hygCtx___hyg_1__ctorElim___redArg(v_t_99_, v_Lean_Widget_RpcEncodablePacket_lazy_101_);
return v___x_102_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson_00___x40_Lean_Widget_InteractiveDiagnostic_29703178____hygCtx___hyg_17_(lean_object* v_json_111_){
_start:
{
lean_object* v___x_112_; 
lean_inc(v_json_111_);
v___x_112_ = l_Lean_Json_getTag_x3f(v_json_111_);
if (lean_obj_tag(v___x_112_) == 0)
{
lean_object* v___x_113_; 
lean_dec(v_json_111_);
v___x_113_ = ((lean_object*)(l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__1_00___x40_Lean_Widget_InteractiveDiagnostic_29703178____hygCtx___hyg_17_));
return v___x_113_;
}
else
{
lean_object* v_val_114_; lean_object* v___x_116_; uint8_t v_isShared_117_; uint8_t v_isSharedCheck_172_; 
v_val_114_ = lean_ctor_get(v___x_112_, 0);
v_isSharedCheck_172_ = !lean_is_exclusive(v___x_112_);
if (v_isSharedCheck_172_ == 0)
{
v___x_116_ = v___x_112_;
v_isShared_117_ = v_isSharedCheck_172_;
goto v_resetjp_115_;
}
else
{
lean_inc(v_val_114_);
lean_dec(v___x_112_);
v___x_116_ = lean_box(0);
v_isShared_117_ = v_isSharedCheck_172_;
goto v_resetjp_115_;
}
v_resetjp_115_:
{
lean_object* v___x_118_; lean_object* v___x_119_; uint8_t v___x_120_; 
v___x_118_ = lean_box(0);
v___x_119_ = ((lean_object*)(l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__2_00___x40_Lean_Widget_InteractiveDiagnostic_29703178____hygCtx___hyg_17_));
v___x_120_ = lean_string_dec_eq(v_val_114_, v___x_119_);
if (v___x_120_ == 0)
{
lean_object* v___x_121_; uint8_t v___x_122_; 
v___x_121_ = ((lean_object*)(l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__3_00___x40_Lean_Widget_InteractiveDiagnostic_29703178____hygCtx___hyg_17_));
v___x_122_ = lean_string_dec_eq(v_val_114_, v___x_121_);
lean_dec(v_val_114_);
if (v___x_122_ == 0)
{
lean_object* v___x_123_; 
lean_del_object(v___x_116_);
lean_dec(v_json_111_);
v___x_123_ = ((lean_object*)(l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__5_00___x40_Lean_Widget_InteractiveDiagnostic_29703178____hygCtx___hyg_17_));
return v___x_123_;
}
else
{
lean_object* v___x_124_; lean_object* v___x_125_; lean_object* v___x_126_; 
v___x_124_ = lean_unsigned_to_nat(1u);
v___x_125_ = lean_box(0);
v___x_126_ = l_Lean_Json_parseCtorFields(v_json_111_, v___x_121_, v___x_124_, v___x_125_);
if (lean_obj_tag(v___x_126_) == 0)
{
lean_object* v_a_127_; lean_object* v___x_129_; uint8_t v_isShared_130_; uint8_t v_isSharedCheck_134_; 
lean_del_object(v___x_116_);
v_a_127_ = lean_ctor_get(v___x_126_, 0);
v_isSharedCheck_134_ = !lean_is_exclusive(v___x_126_);
if (v_isSharedCheck_134_ == 0)
{
v___x_129_ = v___x_126_;
v_isShared_130_ = v_isSharedCheck_134_;
goto v_resetjp_128_;
}
else
{
lean_inc(v_a_127_);
lean_dec(v___x_126_);
v___x_129_ = lean_box(0);
v_isShared_130_ = v_isSharedCheck_134_;
goto v_resetjp_128_;
}
v_resetjp_128_:
{
lean_object* v___x_132_; 
if (v_isShared_130_ == 0)
{
v___x_132_ = v___x_129_;
goto v_reusejp_131_;
}
else
{
lean_object* v_reuseFailAlloc_133_; 
v_reuseFailAlloc_133_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_133_, 0, v_a_127_);
v___x_132_ = v_reuseFailAlloc_133_;
goto v_reusejp_131_;
}
v_reusejp_131_:
{
return v___x_132_;
}
}
}
else
{
lean_object* v_a_135_; lean_object* v___x_137_; uint8_t v_isShared_138_; uint8_t v_isSharedCheck_147_; 
v_a_135_ = lean_ctor_get(v___x_126_, 0);
v_isSharedCheck_147_ = !lean_is_exclusive(v___x_126_);
if (v_isSharedCheck_147_ == 0)
{
v___x_137_ = v___x_126_;
v_isShared_138_ = v_isSharedCheck_147_;
goto v_resetjp_136_;
}
else
{
lean_inc(v_a_135_);
lean_dec(v___x_126_);
v___x_137_ = lean_box(0);
v_isShared_138_ = v_isSharedCheck_147_;
goto v_resetjp_136_;
}
v_resetjp_136_:
{
lean_object* v___x_139_; lean_object* v___x_140_; lean_object* v___x_142_; 
v___x_139_ = lean_unsigned_to_nat(0u);
v___x_140_ = lean_array_get(v___x_118_, v_a_135_, v___x_139_);
lean_dec(v_a_135_);
if (v_isShared_117_ == 0)
{
lean_ctor_set_tag(v___x_116_, 0);
lean_ctor_set(v___x_116_, 0, v___x_140_);
v___x_142_ = v___x_116_;
goto v_reusejp_141_;
}
else
{
lean_object* v_reuseFailAlloc_146_; 
v_reuseFailAlloc_146_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_146_, 0, v___x_140_);
v___x_142_ = v_reuseFailAlloc_146_;
goto v_reusejp_141_;
}
v_reusejp_141_:
{
lean_object* v___x_144_; 
if (v_isShared_138_ == 0)
{
lean_ctor_set(v___x_137_, 0, v___x_142_);
v___x_144_ = v___x_137_;
goto v_reusejp_143_;
}
else
{
lean_object* v_reuseFailAlloc_145_; 
v_reuseFailAlloc_145_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_145_, 0, v___x_142_);
v___x_144_ = v_reuseFailAlloc_145_;
goto v_reusejp_143_;
}
v_reusejp_143_:
{
return v___x_144_;
}
}
}
}
}
}
else
{
lean_object* v___x_148_; lean_object* v___x_149_; lean_object* v___x_150_; 
lean_dec(v_val_114_);
v___x_148_ = lean_unsigned_to_nat(1u);
v___x_149_ = lean_box(0);
v___x_150_ = l_Lean_Json_parseCtorFields(v_json_111_, v___x_119_, v___x_148_, v___x_149_);
if (lean_obj_tag(v___x_150_) == 0)
{
lean_object* v_a_151_; lean_object* v___x_153_; uint8_t v_isShared_154_; uint8_t v_isSharedCheck_158_; 
lean_del_object(v___x_116_);
v_a_151_ = lean_ctor_get(v___x_150_, 0);
v_isSharedCheck_158_ = !lean_is_exclusive(v___x_150_);
if (v_isSharedCheck_158_ == 0)
{
v___x_153_ = v___x_150_;
v_isShared_154_ = v_isSharedCheck_158_;
goto v_resetjp_152_;
}
else
{
lean_inc(v_a_151_);
lean_dec(v___x_150_);
v___x_153_ = lean_box(0);
v_isShared_154_ = v_isSharedCheck_158_;
goto v_resetjp_152_;
}
v_resetjp_152_:
{
lean_object* v___x_156_; 
if (v_isShared_154_ == 0)
{
v___x_156_ = v___x_153_;
goto v_reusejp_155_;
}
else
{
lean_object* v_reuseFailAlloc_157_; 
v_reuseFailAlloc_157_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_157_, 0, v_a_151_);
v___x_156_ = v_reuseFailAlloc_157_;
goto v_reusejp_155_;
}
v_reusejp_155_:
{
return v___x_156_;
}
}
}
else
{
lean_object* v_a_159_; lean_object* v___x_161_; uint8_t v_isShared_162_; uint8_t v_isSharedCheck_171_; 
v_a_159_ = lean_ctor_get(v___x_150_, 0);
v_isSharedCheck_171_ = !lean_is_exclusive(v___x_150_);
if (v_isSharedCheck_171_ == 0)
{
v___x_161_ = v___x_150_;
v_isShared_162_ = v_isSharedCheck_171_;
goto v_resetjp_160_;
}
else
{
lean_inc(v_a_159_);
lean_dec(v___x_150_);
v___x_161_ = lean_box(0);
v_isShared_162_ = v_isSharedCheck_171_;
goto v_resetjp_160_;
}
v_resetjp_160_:
{
lean_object* v___x_163_; lean_object* v___x_164_; lean_object* v___x_166_; 
v___x_163_ = lean_unsigned_to_nat(0u);
v___x_164_ = lean_array_get(v___x_118_, v_a_159_, v___x_163_);
lean_dec(v_a_159_);
if (v_isShared_117_ == 0)
{
lean_ctor_set(v___x_116_, 0, v___x_164_);
v___x_166_ = v___x_116_;
goto v_reusejp_165_;
}
else
{
lean_object* v_reuseFailAlloc_170_; 
v_reuseFailAlloc_170_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_170_, 0, v___x_164_);
v___x_166_ = v_reuseFailAlloc_170_;
goto v_reusejp_165_;
}
v_reusejp_165_:
{
lean_object* v___x_168_; 
if (v_isShared_162_ == 0)
{
lean_ctor_set(v___x_161_, 0, v___x_166_);
v___x_168_ = v___x_161_;
goto v_reusejp_167_;
}
else
{
lean_object* v_reuseFailAlloc_169_; 
v_reuseFailAlloc_169_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_169_, 0, v___x_166_);
v___x_168_ = v_reuseFailAlloc_169_;
goto v_reusejp_167_;
}
v_reusejp_167_:
{
return v___x_168_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_instToJsonRpcEncodablePacket_toJson_00___x40_Lean_Widget_InteractiveDiagnostic_29703178____hygCtx___hyg_38_(lean_object* v_x_175_){
_start:
{
if (lean_obj_tag(v_x_175_) == 0)
{
lean_object* v_a_176_; lean_object* v___x_177_; lean_object* v___x_178_; lean_object* v___x_179_; lean_object* v___x_180_; lean_object* v___x_181_; 
v_a_176_ = lean_ctor_get(v_x_175_, 0);
v___x_177_ = ((lean_object*)(l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__3_00___x40_Lean_Widget_InteractiveDiagnostic_29703178____hygCtx___hyg_17_));
lean_inc(v_a_176_);
v___x_178_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_178_, 0, v___x_177_);
lean_ctor_set(v___x_178_, 1, v_a_176_);
v___x_179_ = lean_box(0);
v___x_180_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_180_, 0, v___x_178_);
lean_ctor_set(v___x_180_, 1, v___x_179_);
v___x_181_ = l_Lean_Json_mkObj(v___x_180_);
lean_dec_ref_known(v___x_180_, 2);
return v___x_181_;
}
else
{
lean_object* v_a_182_; lean_object* v___x_183_; lean_object* v___x_184_; lean_object* v___x_185_; lean_object* v___x_186_; lean_object* v___x_187_; 
v_a_182_ = lean_ctor_get(v_x_175_, 0);
v___x_183_ = ((lean_object*)(l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__2_00___x40_Lean_Widget_InteractiveDiagnostic_29703178____hygCtx___hyg_17_));
lean_inc(v_a_182_);
v___x_184_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_184_, 0, v___x_183_);
lean_ctor_set(v___x_184_, 1, v_a_182_);
v___x_185_ = lean_box(0);
v___x_186_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_186_, 0, v___x_184_);
lean_ctor_set(v___x_186_, 1, v___x_185_);
v___x_187_ = l_Lean_Json_mkObj(v___x_186_);
lean_dec_ref_known(v___x_186_, 2);
return v___x_187_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_instToJsonRpcEncodablePacket_toJson_00___x40_Lean_Widget_InteractiveDiagnostic_29703178____hygCtx___hyg_38____boxed(lean_object* v_x_188_){
_start:
{
lean_object* v_res_189_; 
v_res_189_ = l_Lean_Widget_instToJsonRpcEncodablePacket_toJson_00___x40_Lean_Widget_InteractiveDiagnostic_29703178____hygCtx___hyg_38_(v_x_188_);
lean_dec_ref(v_x_188_);
return v_res_189_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_instRpcEncodableStrictOrLazy_enc___redArg_00___x40_Lean_Widget_InteractiveDiagnostic_2157017296____hygCtx___hyg_1_(lean_object* v_inst_192_, lean_object* v_inst_193_, lean_object* v_x_194_, lean_object* v_a_195_){
_start:
{
if (lean_obj_tag(v_x_194_) == 0)
{
lean_object* v_a_196_; lean_object* v___x_198_; uint8_t v_isShared_199_; uint8_t v_isSharedCheck_215_; 
lean_dec_ref(v_inst_193_);
v_a_196_ = lean_ctor_get(v_x_194_, 0);
v_isSharedCheck_215_ = !lean_is_exclusive(v_x_194_);
if (v_isSharedCheck_215_ == 0)
{
v___x_198_ = v_x_194_;
v_isShared_199_ = v_isSharedCheck_215_;
goto v_resetjp_197_;
}
else
{
lean_inc(v_a_196_);
lean_dec(v_x_194_);
v___x_198_ = lean_box(0);
v_isShared_199_ = v_isSharedCheck_215_;
goto v_resetjp_197_;
}
v_resetjp_197_:
{
lean_object* v_rpcEncode_200_; lean_object* v___x_201_; lean_object* v_fst_202_; lean_object* v_snd_203_; lean_object* v___x_205_; uint8_t v_isShared_206_; uint8_t v_isSharedCheck_214_; 
v_rpcEncode_200_ = lean_ctor_get(v_inst_192_, 0);
lean_inc_ref(v_rpcEncode_200_);
lean_dec_ref(v_inst_192_);
v___x_201_ = lean_apply_2(v_rpcEncode_200_, v_a_196_, v_a_195_);
v_fst_202_ = lean_ctor_get(v___x_201_, 0);
v_snd_203_ = lean_ctor_get(v___x_201_, 1);
v_isSharedCheck_214_ = !lean_is_exclusive(v___x_201_);
if (v_isSharedCheck_214_ == 0)
{
v___x_205_ = v___x_201_;
v_isShared_206_ = v_isSharedCheck_214_;
goto v_resetjp_204_;
}
else
{
lean_inc(v_snd_203_);
lean_inc(v_fst_202_);
lean_dec(v___x_201_);
v___x_205_ = lean_box(0);
v_isShared_206_ = v_isSharedCheck_214_;
goto v_resetjp_204_;
}
v_resetjp_204_:
{
lean_object* v___x_208_; 
if (v_isShared_199_ == 0)
{
lean_ctor_set(v___x_198_, 0, v_fst_202_);
v___x_208_ = v___x_198_;
goto v_reusejp_207_;
}
else
{
lean_object* v_reuseFailAlloc_213_; 
v_reuseFailAlloc_213_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_213_, 0, v_fst_202_);
v___x_208_ = v_reuseFailAlloc_213_;
goto v_reusejp_207_;
}
v_reusejp_207_:
{
lean_object* v___x_209_; lean_object* v___x_211_; 
v___x_209_ = l_Lean_Widget_instToJsonRpcEncodablePacket_toJson_00___x40_Lean_Widget_InteractiveDiagnostic_29703178____hygCtx___hyg_38_(v___x_208_);
lean_dec_ref(v___x_208_);
if (v_isShared_206_ == 0)
{
lean_ctor_set(v___x_205_, 0, v___x_209_);
v___x_211_ = v___x_205_;
goto v_reusejp_210_;
}
else
{
lean_object* v_reuseFailAlloc_212_; 
v_reuseFailAlloc_212_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_212_, 0, v___x_209_);
lean_ctor_set(v_reuseFailAlloc_212_, 1, v_snd_203_);
v___x_211_ = v_reuseFailAlloc_212_;
goto v_reusejp_210_;
}
v_reusejp_210_:
{
return v___x_211_;
}
}
}
}
}
else
{
lean_object* v_a_216_; lean_object* v___x_218_; uint8_t v_isShared_219_; uint8_t v_isSharedCheck_235_; 
lean_dec_ref(v_inst_192_);
v_a_216_ = lean_ctor_get(v_x_194_, 0);
v_isSharedCheck_235_ = !lean_is_exclusive(v_x_194_);
if (v_isSharedCheck_235_ == 0)
{
v___x_218_ = v_x_194_;
v_isShared_219_ = v_isSharedCheck_235_;
goto v_resetjp_217_;
}
else
{
lean_inc(v_a_216_);
lean_dec(v_x_194_);
v___x_218_ = lean_box(0);
v_isShared_219_ = v_isSharedCheck_235_;
goto v_resetjp_217_;
}
v_resetjp_217_:
{
lean_object* v_rpcEncode_220_; lean_object* v___x_221_; lean_object* v_fst_222_; lean_object* v_snd_223_; lean_object* v___x_225_; uint8_t v_isShared_226_; uint8_t v_isSharedCheck_234_; 
v_rpcEncode_220_ = lean_ctor_get(v_inst_193_, 0);
lean_inc_ref(v_rpcEncode_220_);
lean_dec_ref(v_inst_193_);
v___x_221_ = lean_apply_2(v_rpcEncode_220_, v_a_216_, v_a_195_);
v_fst_222_ = lean_ctor_get(v___x_221_, 0);
v_snd_223_ = lean_ctor_get(v___x_221_, 1);
v_isSharedCheck_234_ = !lean_is_exclusive(v___x_221_);
if (v_isSharedCheck_234_ == 0)
{
v___x_225_ = v___x_221_;
v_isShared_226_ = v_isSharedCheck_234_;
goto v_resetjp_224_;
}
else
{
lean_inc(v_snd_223_);
lean_inc(v_fst_222_);
lean_dec(v___x_221_);
v___x_225_ = lean_box(0);
v_isShared_226_ = v_isSharedCheck_234_;
goto v_resetjp_224_;
}
v_resetjp_224_:
{
lean_object* v___x_228_; 
if (v_isShared_219_ == 0)
{
lean_ctor_set(v___x_218_, 0, v_fst_222_);
v___x_228_ = v___x_218_;
goto v_reusejp_227_;
}
else
{
lean_object* v_reuseFailAlloc_233_; 
v_reuseFailAlloc_233_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_233_, 0, v_fst_222_);
v___x_228_ = v_reuseFailAlloc_233_;
goto v_reusejp_227_;
}
v_reusejp_227_:
{
lean_object* v___x_229_; lean_object* v___x_231_; 
v___x_229_ = l_Lean_Widget_instToJsonRpcEncodablePacket_toJson_00___x40_Lean_Widget_InteractiveDiagnostic_29703178____hygCtx___hyg_38_(v___x_228_);
lean_dec_ref(v___x_228_);
if (v_isShared_226_ == 0)
{
lean_ctor_set(v___x_225_, 0, v___x_229_);
v___x_231_ = v___x_225_;
goto v_reusejp_230_;
}
else
{
lean_object* v_reuseFailAlloc_232_; 
v_reuseFailAlloc_232_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_232_, 0, v___x_229_);
lean_ctor_set(v_reuseFailAlloc_232_, 1, v_snd_223_);
v___x_231_ = v_reuseFailAlloc_232_;
goto v_reusejp_230_;
}
v_reusejp_230_:
{
return v___x_231_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_instRpcEncodableStrictOrLazy_enc_00___x40_Lean_Widget_InteractiveDiagnostic_2157017296____hygCtx___hyg_1_(lean_object* v_00_u03b1_236_, lean_object* v_00_u03b2_237_, lean_object* v_inst_238_, lean_object* v_inst_239_, lean_object* v_x_240_, lean_object* v_a_241_){
_start:
{
lean_object* v___x_242_; 
v___x_242_ = l_Lean_Widget_instRpcEncodableStrictOrLazy_enc___redArg_00___x40_Lean_Widget_InteractiveDiagnostic_2157017296____hygCtx___hyg_1_(v_inst_238_, v_inst_239_, v_x_240_, v_a_241_);
return v___x_242_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_instRpcEncodableStrictOrLazy_dec___redArg_00___x40_Lean_Widget_InteractiveDiagnostic_2157017296____hygCtx___hyg_1_(lean_object* v_inst_243_, lean_object* v_inst_244_, lean_object* v_j_245_, lean_object* v_a_246_){
_start:
{
lean_object* v___x_247_; 
v___x_247_ = l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson_00___x40_Lean_Widget_InteractiveDiagnostic_29703178____hygCtx___hyg_17_(v_j_245_);
if (lean_obj_tag(v___x_247_) == 0)
{
lean_object* v_a_248_; lean_object* v___x_250_; uint8_t v_isShared_251_; uint8_t v_isSharedCheck_255_; 
lean_dec_ref(v_inst_244_);
lean_dec_ref(v_inst_243_);
v_a_248_ = lean_ctor_get(v___x_247_, 0);
v_isSharedCheck_255_ = !lean_is_exclusive(v___x_247_);
if (v_isSharedCheck_255_ == 0)
{
v___x_250_ = v___x_247_;
v_isShared_251_ = v_isSharedCheck_255_;
goto v_resetjp_249_;
}
else
{
lean_inc(v_a_248_);
lean_dec(v___x_247_);
v___x_250_ = lean_box(0);
v_isShared_251_ = v_isSharedCheck_255_;
goto v_resetjp_249_;
}
v_resetjp_249_:
{
lean_object* v___x_253_; 
if (v_isShared_251_ == 0)
{
v___x_253_ = v___x_250_;
goto v_reusejp_252_;
}
else
{
lean_object* v_reuseFailAlloc_254_; 
v_reuseFailAlloc_254_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_254_, 0, v_a_248_);
v___x_253_ = v_reuseFailAlloc_254_;
goto v_reusejp_252_;
}
v_reusejp_252_:
{
return v___x_253_;
}
}
}
else
{
lean_object* v_a_256_; 
v_a_256_ = lean_ctor_get(v___x_247_, 0);
lean_inc(v_a_256_);
lean_dec_ref_known(v___x_247_, 1);
if (lean_obj_tag(v_a_256_) == 0)
{
lean_object* v_a_257_; lean_object* v___x_259_; uint8_t v_isShared_260_; uint8_t v_isSharedCheck_282_; 
lean_dec_ref(v_inst_244_);
v_a_257_ = lean_ctor_get(v_a_256_, 0);
v_isSharedCheck_282_ = !lean_is_exclusive(v_a_256_);
if (v_isSharedCheck_282_ == 0)
{
v___x_259_ = v_a_256_;
v_isShared_260_ = v_isSharedCheck_282_;
goto v_resetjp_258_;
}
else
{
lean_inc(v_a_257_);
lean_dec(v_a_256_);
v___x_259_ = lean_box(0);
v_isShared_260_ = v_isSharedCheck_282_;
goto v_resetjp_258_;
}
v_resetjp_258_:
{
lean_object* v_rpcDecode_261_; lean_object* v___x_262_; 
v_rpcDecode_261_ = lean_ctor_get(v_inst_243_, 1);
lean_inc_ref(v_rpcDecode_261_);
lean_dec_ref(v_inst_243_);
lean_inc_ref(v_a_246_);
v___x_262_ = lean_apply_2(v_rpcDecode_261_, v_a_257_, v_a_246_);
if (lean_obj_tag(v___x_262_) == 0)
{
lean_object* v_a_263_; lean_object* v___x_265_; uint8_t v_isShared_266_; uint8_t v_isSharedCheck_270_; 
lean_del_object(v___x_259_);
v_a_263_ = lean_ctor_get(v___x_262_, 0);
v_isSharedCheck_270_ = !lean_is_exclusive(v___x_262_);
if (v_isSharedCheck_270_ == 0)
{
v___x_265_ = v___x_262_;
v_isShared_266_ = v_isSharedCheck_270_;
goto v_resetjp_264_;
}
else
{
lean_inc(v_a_263_);
lean_dec(v___x_262_);
v___x_265_ = lean_box(0);
v_isShared_266_ = v_isSharedCheck_270_;
goto v_resetjp_264_;
}
v_resetjp_264_:
{
lean_object* v___x_268_; 
if (v_isShared_266_ == 0)
{
v___x_268_ = v___x_265_;
goto v_reusejp_267_;
}
else
{
lean_object* v_reuseFailAlloc_269_; 
v_reuseFailAlloc_269_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_269_, 0, v_a_263_);
v___x_268_ = v_reuseFailAlloc_269_;
goto v_reusejp_267_;
}
v_reusejp_267_:
{
return v___x_268_;
}
}
}
else
{
lean_object* v_a_271_; lean_object* v___x_273_; uint8_t v_isShared_274_; uint8_t v_isSharedCheck_281_; 
v_a_271_ = lean_ctor_get(v___x_262_, 0);
v_isSharedCheck_281_ = !lean_is_exclusive(v___x_262_);
if (v_isSharedCheck_281_ == 0)
{
v___x_273_ = v___x_262_;
v_isShared_274_ = v_isSharedCheck_281_;
goto v_resetjp_272_;
}
else
{
lean_inc(v_a_271_);
lean_dec(v___x_262_);
v___x_273_ = lean_box(0);
v_isShared_274_ = v_isSharedCheck_281_;
goto v_resetjp_272_;
}
v_resetjp_272_:
{
lean_object* v___x_276_; 
if (v_isShared_260_ == 0)
{
lean_ctor_set(v___x_259_, 0, v_a_271_);
v___x_276_ = v___x_259_;
goto v_reusejp_275_;
}
else
{
lean_object* v_reuseFailAlloc_280_; 
v_reuseFailAlloc_280_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_280_, 0, v_a_271_);
v___x_276_ = v_reuseFailAlloc_280_;
goto v_reusejp_275_;
}
v_reusejp_275_:
{
lean_object* v___x_278_; 
if (v_isShared_274_ == 0)
{
lean_ctor_set(v___x_273_, 0, v___x_276_);
v___x_278_ = v___x_273_;
goto v_reusejp_277_;
}
else
{
lean_object* v_reuseFailAlloc_279_; 
v_reuseFailAlloc_279_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_279_, 0, v___x_276_);
v___x_278_ = v_reuseFailAlloc_279_;
goto v_reusejp_277_;
}
v_reusejp_277_:
{
return v___x_278_;
}
}
}
}
}
}
else
{
lean_object* v_a_283_; lean_object* v___x_285_; uint8_t v_isShared_286_; uint8_t v_isSharedCheck_308_; 
lean_dec_ref(v_inst_243_);
v_a_283_ = lean_ctor_get(v_a_256_, 0);
v_isSharedCheck_308_ = !lean_is_exclusive(v_a_256_);
if (v_isSharedCheck_308_ == 0)
{
v___x_285_ = v_a_256_;
v_isShared_286_ = v_isSharedCheck_308_;
goto v_resetjp_284_;
}
else
{
lean_inc(v_a_283_);
lean_dec(v_a_256_);
v___x_285_ = lean_box(0);
v_isShared_286_ = v_isSharedCheck_308_;
goto v_resetjp_284_;
}
v_resetjp_284_:
{
lean_object* v_rpcDecode_287_; lean_object* v___x_288_; 
v_rpcDecode_287_ = lean_ctor_get(v_inst_244_, 1);
lean_inc_ref(v_rpcDecode_287_);
lean_dec_ref(v_inst_244_);
lean_inc_ref(v_a_246_);
v___x_288_ = lean_apply_2(v_rpcDecode_287_, v_a_283_, v_a_246_);
if (lean_obj_tag(v___x_288_) == 0)
{
lean_object* v_a_289_; lean_object* v___x_291_; uint8_t v_isShared_292_; uint8_t v_isSharedCheck_296_; 
lean_del_object(v___x_285_);
v_a_289_ = lean_ctor_get(v___x_288_, 0);
v_isSharedCheck_296_ = !lean_is_exclusive(v___x_288_);
if (v_isSharedCheck_296_ == 0)
{
v___x_291_ = v___x_288_;
v_isShared_292_ = v_isSharedCheck_296_;
goto v_resetjp_290_;
}
else
{
lean_inc(v_a_289_);
lean_dec(v___x_288_);
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
v_reuseFailAlloc_295_ = lean_alloc_ctor(0, 1, 0);
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
else
{
lean_object* v_a_297_; lean_object* v___x_299_; uint8_t v_isShared_300_; uint8_t v_isSharedCheck_307_; 
v_a_297_ = lean_ctor_get(v___x_288_, 0);
v_isSharedCheck_307_ = !lean_is_exclusive(v___x_288_);
if (v_isSharedCheck_307_ == 0)
{
v___x_299_ = v___x_288_;
v_isShared_300_ = v_isSharedCheck_307_;
goto v_resetjp_298_;
}
else
{
lean_inc(v_a_297_);
lean_dec(v___x_288_);
v___x_299_ = lean_box(0);
v_isShared_300_ = v_isSharedCheck_307_;
goto v_resetjp_298_;
}
v_resetjp_298_:
{
lean_object* v___x_302_; 
if (v_isShared_286_ == 0)
{
lean_ctor_set(v___x_285_, 0, v_a_297_);
v___x_302_ = v___x_285_;
goto v_reusejp_301_;
}
else
{
lean_object* v_reuseFailAlloc_306_; 
v_reuseFailAlloc_306_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_306_, 0, v_a_297_);
v___x_302_ = v_reuseFailAlloc_306_;
goto v_reusejp_301_;
}
v_reusejp_301_:
{
lean_object* v___x_304_; 
if (v_isShared_300_ == 0)
{
lean_ctor_set(v___x_299_, 0, v___x_302_);
v___x_304_ = v___x_299_;
goto v_reusejp_303_;
}
else
{
lean_object* v_reuseFailAlloc_305_; 
v_reuseFailAlloc_305_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_305_, 0, v___x_302_);
v___x_304_ = v_reuseFailAlloc_305_;
goto v_reusejp_303_;
}
v_reusejp_303_:
{
return v___x_304_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_instRpcEncodableStrictOrLazy_dec___redArg_00___x40_Lean_Widget_InteractiveDiagnostic_2157017296____hygCtx___hyg_1____boxed(lean_object* v_inst_309_, lean_object* v_inst_310_, lean_object* v_j_311_, lean_object* v_a_312_){
_start:
{
lean_object* v_res_313_; 
v_res_313_ = l_Lean_Widget_instRpcEncodableStrictOrLazy_dec___redArg_00___x40_Lean_Widget_InteractiveDiagnostic_2157017296____hygCtx___hyg_1_(v_inst_309_, v_inst_310_, v_j_311_, v_a_312_);
lean_dec_ref(v_a_312_);
return v_res_313_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_instRpcEncodableStrictOrLazy_dec_00___x40_Lean_Widget_InteractiveDiagnostic_2157017296____hygCtx___hyg_1_(lean_object* v_00_u03b1_314_, lean_object* v_00_u03b2_315_, lean_object* v_inst_316_, lean_object* v_inst_317_, lean_object* v_j_318_, lean_object* v_a_319_){
_start:
{
lean_object* v___x_320_; 
v___x_320_ = l_Lean_Widget_instRpcEncodableStrictOrLazy_dec___redArg_00___x40_Lean_Widget_InteractiveDiagnostic_2157017296____hygCtx___hyg_1_(v_inst_316_, v_inst_317_, v_j_318_, v_a_319_);
return v___x_320_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_instRpcEncodableStrictOrLazy_dec_00___x40_Lean_Widget_InteractiveDiagnostic_2157017296____hygCtx___hyg_1____boxed(lean_object* v_00_u03b1_321_, lean_object* v_00_u03b2_322_, lean_object* v_inst_323_, lean_object* v_inst_324_, lean_object* v_j_325_, lean_object* v_a_326_){
_start:
{
lean_object* v_res_327_; 
v_res_327_ = l_Lean_Widget_instRpcEncodableStrictOrLazy_dec_00___x40_Lean_Widget_InteractiveDiagnostic_2157017296____hygCtx___hyg_1_(v_00_u03b1_321_, v_00_u03b2_322_, v_inst_323_, v_inst_324_, v_j_325_, v_a_326_);
lean_dec_ref(v_a_326_);
return v_res_327_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_instRpcEncodableStrictOrLazy___redArg(lean_object* v_inst_328_, lean_object* v_inst_329_){
_start:
{
lean_object* v___x_330_; lean_object* v___x_331_; lean_object* v___x_332_; 
lean_inc_ref(v_inst_329_);
lean_inc_ref(v_inst_328_);
v___x_330_ = lean_alloc_closure((void*)(l_Lean_Widget_instRpcEncodableStrictOrLazy_enc_00___x40_Lean_Widget_InteractiveDiagnostic_2157017296____hygCtx___hyg_1_), 6, 4);
lean_closure_set(v___x_330_, 0, lean_box(0));
lean_closure_set(v___x_330_, 1, lean_box(0));
lean_closure_set(v___x_330_, 2, v_inst_328_);
lean_closure_set(v___x_330_, 3, v_inst_329_);
v___x_331_ = lean_alloc_closure((void*)(l_Lean_Widget_instRpcEncodableStrictOrLazy_dec_00___x40_Lean_Widget_InteractiveDiagnostic_2157017296____hygCtx___hyg_1____boxed), 6, 4);
lean_closure_set(v___x_331_, 0, lean_box(0));
lean_closure_set(v___x_331_, 1, lean_box(0));
lean_closure_set(v___x_331_, 2, v_inst_328_);
lean_closure_set(v___x_331_, 3, v_inst_329_);
v___x_332_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_332_, 0, v___x_330_);
lean_ctor_set(v___x_332_, 1, v___x_331_);
return v___x_332_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_instRpcEncodableStrictOrLazy(lean_object* v_00_u03b1_333_, lean_object* v_00_u03b2_334_, lean_object* v_inst_335_, lean_object* v_inst_336_){
_start:
{
lean_object* v___x_337_; 
v___x_337_ = l_Lean_Widget_instRpcEncodableStrictOrLazy___redArg(v_inst_335_, v_inst_336_);
return v___x_337_;
}
}
static lean_object* _init_l_Lean_Widget_instImpl___closed__4_00___x40_Lean_Widget_InteractiveDiagnostic_72002168____hygCtx___hyg_14_(void){
_start:
{
lean_object* v___x_345_; lean_object* v___x_346_; 
v___x_345_ = ((lean_object*)(l_Lean_Widget_instImpl___closed__3_00___x40_Lean_Widget_InteractiveDiagnostic_72002168____hygCtx___hyg_14_));
v___x_346_ = l_unsafeCast___redArg(v___x_345_);
return v___x_346_;
}
}
static lean_object* _init_l_Lean_Widget_instImpl_00___x40_Lean_Widget_InteractiveDiagnostic_72002168____hygCtx___hyg_14_(void){
_start:
{
lean_object* v___x_347_; 
v___x_347_ = lean_obj_once(&l_Lean_Widget_instImpl___closed__4_00___x40_Lean_Widget_InteractiveDiagnostic_72002168____hygCtx___hyg_14_, &l_Lean_Widget_instImpl___closed__4_00___x40_Lean_Widget_InteractiveDiagnostic_72002168____hygCtx___hyg_14__once, _init_l_Lean_Widget_instImpl___closed__4_00___x40_Lean_Widget_InteractiveDiagnostic_72002168____hygCtx___hyg_14_);
return v___x_347_;
}
}
static lean_object* _init_l_Lean_Widget_instTypeNameLazyTraceChildren(void){
_start:
{
lean_object* v___x_348_; 
v___x_348_ = l_Lean_Widget_instImpl_00___x40_Lean_Widget_InteractiveDiagnostic_72002168____hygCtx___hyg_14_;
return v___x_348_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_MsgEmbed_ctorIdx(lean_object* v_x_349_){
_start:
{
switch(lean_obj_tag(v_x_349_))
{
case 0:
{
lean_object* v___x_350_; 
v___x_350_ = lean_unsigned_to_nat(0u);
return v___x_350_;
}
case 1:
{
lean_object* v___x_351_; 
v___x_351_ = lean_unsigned_to_nat(1u);
return v___x_351_;
}
case 2:
{
lean_object* v___x_352_; 
v___x_352_ = lean_unsigned_to_nat(2u);
return v___x_352_;
}
default: 
{
lean_object* v___x_353_; 
v___x_353_ = lean_unsigned_to_nat(3u);
return v___x_353_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_MsgEmbed_ctorIdx___boxed(lean_object* v_x_354_){
_start:
{
lean_object* v_res_355_; 
v_res_355_ = l_Lean_Widget_MsgEmbed_ctorIdx(v_x_354_);
lean_dec_ref(v_x_354_);
return v_res_355_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_MsgEmbed_ctorElim___redArg(lean_object* v_t_356_, lean_object* v_k_357_){
_start:
{
switch(lean_obj_tag(v_t_356_))
{
case 2:
{
lean_object* v_wi_358_; lean_object* v_alt_359_; lean_object* v___x_360_; 
v_wi_358_ = lean_ctor_get(v_t_356_, 0);
lean_inc_ref(v_wi_358_);
v_alt_359_ = lean_ctor_get(v_t_356_, 1);
lean_inc_ref(v_alt_359_);
lean_dec_ref_known(v_t_356_, 2);
v___x_360_ = lean_apply_2(v_k_357_, v_wi_358_, v_alt_359_);
return v___x_360_;
}
case 3:
{
lean_object* v_indent_361_; lean_object* v_cls_362_; lean_object* v_msg_363_; uint8_t v_collapsed_364_; lean_object* v_children_365_; lean_object* v___x_366_; lean_object* v___x_367_; 
v_indent_361_ = lean_ctor_get(v_t_356_, 0);
lean_inc(v_indent_361_);
v_cls_362_ = lean_ctor_get(v_t_356_, 1);
lean_inc(v_cls_362_);
v_msg_363_ = lean_ctor_get(v_t_356_, 2);
lean_inc_ref(v_msg_363_);
v_collapsed_364_ = lean_ctor_get_uint8(v_t_356_, sizeof(void*)*4);
v_children_365_ = lean_ctor_get(v_t_356_, 3);
lean_inc_ref(v_children_365_);
lean_dec_ref_known(v_t_356_, 4);
v___x_366_ = lean_box(v_collapsed_364_);
v___x_367_ = lean_apply_5(v_k_357_, v_indent_361_, v_cls_362_, v_msg_363_, v___x_366_, v_children_365_);
return v___x_367_;
}
default: 
{
lean_object* v_a_368_; lean_object* v___x_369_; 
v_a_368_ = lean_ctor_get(v_t_356_, 0);
lean_inc_ref(v_a_368_);
lean_dec_ref(v_t_356_);
v___x_369_ = lean_apply_1(v_k_357_, v_a_368_);
return v___x_369_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_MsgEmbed_ctorElim(lean_object* v_motive__1_370_, lean_object* v_ctorIdx_371_, lean_object* v_t_372_, lean_object* v_h_373_, lean_object* v_k_374_){
_start:
{
lean_object* v___x_375_; 
v___x_375_ = l_Lean_Widget_MsgEmbed_ctorElim___redArg(v_t_372_, v_k_374_);
return v___x_375_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_MsgEmbed_ctorElim___boxed(lean_object* v_motive__1_376_, lean_object* v_ctorIdx_377_, lean_object* v_t_378_, lean_object* v_h_379_, lean_object* v_k_380_){
_start:
{
lean_object* v_res_381_; 
v_res_381_ = l_Lean_Widget_MsgEmbed_ctorElim(v_motive__1_376_, v_ctorIdx_377_, v_t_378_, v_h_379_, v_k_380_);
lean_dec(v_ctorIdx_377_);
return v_res_381_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_MsgEmbed_expr_elim___redArg(lean_object* v_t_382_, lean_object* v_expr_383_){
_start:
{
lean_object* v___x_384_; 
v___x_384_ = l_Lean_Widget_MsgEmbed_ctorElim___redArg(v_t_382_, v_expr_383_);
return v___x_384_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_MsgEmbed_expr_elim(lean_object* v_motive__1_385_, lean_object* v_t_386_, lean_object* v_h_387_, lean_object* v_expr_388_){
_start:
{
lean_object* v___x_389_; 
v___x_389_ = l_Lean_Widget_MsgEmbed_ctorElim___redArg(v_t_386_, v_expr_388_);
return v___x_389_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_MsgEmbed_goal_elim___redArg(lean_object* v_t_390_, lean_object* v_goal_391_){
_start:
{
lean_object* v___x_392_; 
v___x_392_ = l_Lean_Widget_MsgEmbed_ctorElim___redArg(v_t_390_, v_goal_391_);
return v___x_392_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_MsgEmbed_goal_elim(lean_object* v_motive__1_393_, lean_object* v_t_394_, lean_object* v_h_395_, lean_object* v_goal_396_){
_start:
{
lean_object* v___x_397_; 
v___x_397_ = l_Lean_Widget_MsgEmbed_ctorElim___redArg(v_t_394_, v_goal_396_);
return v___x_397_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_MsgEmbed_widget_elim___redArg(lean_object* v_t_398_, lean_object* v_widget_399_){
_start:
{
lean_object* v___x_400_; 
v___x_400_ = l_Lean_Widget_MsgEmbed_ctorElim___redArg(v_t_398_, v_widget_399_);
return v___x_400_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_MsgEmbed_widget_elim(lean_object* v_motive__1_401_, lean_object* v_t_402_, lean_object* v_h_403_, lean_object* v_widget_404_){
_start:
{
lean_object* v___x_405_; 
v___x_405_ = l_Lean_Widget_MsgEmbed_ctorElim___redArg(v_t_402_, v_widget_404_);
return v___x_405_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_MsgEmbed_trace_elim___redArg(lean_object* v_t_406_, lean_object* v_trace_407_){
_start:
{
lean_object* v___x_408_; 
v___x_408_ = l_Lean_Widget_MsgEmbed_ctorElim___redArg(v_t_406_, v_trace_407_);
return v___x_408_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_MsgEmbed_trace_elim(lean_object* v_motive__1_409_, lean_object* v_t_410_, lean_object* v_h_411_, lean_object* v_trace_412_){
_start:
{
lean_object* v___x_413_; 
v___x_413_ = l_Lean_Widget_MsgEmbed_ctorElim___redArg(v_t_410_, v_trace_412_);
return v___x_413_;
}
}
static lean_object* _init_l_Lean_Widget_instInhabitedMsgEmbed_default___closed__0(void){
_start:
{
lean_object* v___x_414_; 
v___x_414_ = l_Lean_Widget_instInhabitedTaggedText_default___redArg();
return v___x_414_;
}
}
static lean_object* _init_l_Lean_Widget_instInhabitedMsgEmbed_default___closed__1(void){
_start:
{
lean_object* v___x_415_; lean_object* v___x_416_; 
v___x_415_ = lean_obj_once(&l_Lean_Widget_instInhabitedMsgEmbed_default___closed__0, &l_Lean_Widget_instInhabitedMsgEmbed_default___closed__0_once, _init_l_Lean_Widget_instInhabitedMsgEmbed_default___closed__0);
v___x_416_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_416_, 0, v___x_415_);
return v___x_416_;
}
}
static lean_object* _init_l_Lean_Widget_instInhabitedMsgEmbed_default(void){
_start:
{
lean_object* v___x_417_; 
v___x_417_ = lean_obj_once(&l_Lean_Widget_instInhabitedMsgEmbed_default___closed__1, &l_Lean_Widget_instInhabitedMsgEmbed_default___closed__1_once, _init_l_Lean_Widget_instInhabitedMsgEmbed_default___closed__1);
return v___x_417_;
}
}
static lean_object* _init_l_Lean_Widget_instInhabitedMsgEmbed(void){
_start:
{
lean_object* v___x_418_; 
v___x_418_ = l_Lean_Widget_instInhabitedMsgEmbed_default;
return v___x_418_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_RpcEncodablePacket_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__ctorIdx(lean_object* v_x_419_){
_start:
{
switch(lean_obj_tag(v_x_419_))
{
case 0:
{
lean_object* v___x_420_; 
v___x_420_ = lean_unsigned_to_nat(0u);
return v___x_420_;
}
case 1:
{
lean_object* v___x_421_; 
v___x_421_ = lean_unsigned_to_nat(1u);
return v___x_421_;
}
case 2:
{
lean_object* v___x_422_; 
v___x_422_ = lean_unsigned_to_nat(2u);
return v___x_422_;
}
default: 
{
lean_object* v___x_423_; 
v___x_423_ = lean_unsigned_to_nat(3u);
return v___x_423_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_RpcEncodablePacket_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__ctorIdx___boxed(lean_object* v_x_424_){
_start:
{
lean_object* v_res_425_; 
v_res_425_ = l_Lean_Widget_RpcEncodablePacket_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__ctorIdx(v_x_424_);
lean_dec_ref(v_x_424_);
return v_res_425_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_RpcEncodablePacket_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__ctorElim___redArg(lean_object* v_t_426_, lean_object* v_k_427_){
_start:
{
switch(lean_obj_tag(v_t_426_))
{
case 2:
{
lean_object* v_wi_428_; lean_object* v_alt_429_; lean_object* v___x_430_; 
v_wi_428_ = lean_ctor_get(v_t_426_, 0);
lean_inc(v_wi_428_);
v_alt_429_ = lean_ctor_get(v_t_426_, 1);
lean_inc(v_alt_429_);
lean_dec_ref_known(v_t_426_, 2);
v___x_430_ = lean_apply_2(v_k_427_, v_wi_428_, v_alt_429_);
return v___x_430_;
}
case 3:
{
lean_object* v_indent_431_; lean_object* v_cls_432_; lean_object* v_msg_433_; lean_object* v_collapsed_434_; lean_object* v_children_435_; lean_object* v___x_436_; 
v_indent_431_ = lean_ctor_get(v_t_426_, 0);
lean_inc(v_indent_431_);
v_cls_432_ = lean_ctor_get(v_t_426_, 1);
lean_inc(v_cls_432_);
v_msg_433_ = lean_ctor_get(v_t_426_, 2);
lean_inc(v_msg_433_);
v_collapsed_434_ = lean_ctor_get(v_t_426_, 3);
lean_inc(v_collapsed_434_);
v_children_435_ = lean_ctor_get(v_t_426_, 4);
lean_inc(v_children_435_);
lean_dec_ref_known(v_t_426_, 5);
v___x_436_ = lean_apply_5(v_k_427_, v_indent_431_, v_cls_432_, v_msg_433_, v_collapsed_434_, v_children_435_);
return v___x_436_;
}
default: 
{
lean_object* v_a_437_; lean_object* v___x_438_; 
v_a_437_ = lean_ctor_get(v_t_426_, 0);
lean_inc(v_a_437_);
lean_dec_ref(v_t_426_);
v___x_438_ = lean_apply_1(v_k_427_, v_a_437_);
return v___x_438_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_RpcEncodablePacket_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__ctorElim(lean_object* v_motive_439_, lean_object* v_ctorIdx_440_, lean_object* v_t_441_, lean_object* v_h_442_, lean_object* v_k_443_){
_start:
{
lean_object* v___x_444_; 
v___x_444_ = l_Lean_Widget_RpcEncodablePacket_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__ctorElim___redArg(v_t_441_, v_k_443_);
return v___x_444_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_RpcEncodablePacket_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__ctorElim___boxed(lean_object* v_motive_445_, lean_object* v_ctorIdx_446_, lean_object* v_t_447_, lean_object* v_h_448_, lean_object* v_k_449_){
_start:
{
lean_object* v_res_450_; 
v_res_450_ = l_Lean_Widget_RpcEncodablePacket_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__ctorElim(v_motive_445_, v_ctorIdx_446_, v_t_447_, v_h_448_, v_k_449_);
lean_dec(v_ctorIdx_446_);
return v_res_450_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_RpcEncodablePacket_expr_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__elim___redArg(lean_object* v_t_451_, lean_object* v_Lean_Widget_RpcEncodablePacket_expr_452_){
_start:
{
lean_object* v___x_453_; 
v___x_453_ = l_Lean_Widget_RpcEncodablePacket_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__ctorElim___redArg(v_t_451_, v_Lean_Widget_RpcEncodablePacket_expr_452_);
return v___x_453_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_RpcEncodablePacket_expr_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__elim(lean_object* v_motive_454_, lean_object* v_t_455_, lean_object* v_h_456_, lean_object* v_Lean_Widget_RpcEncodablePacket_expr_457_){
_start:
{
lean_object* v___x_458_; 
v___x_458_ = l_Lean_Widget_RpcEncodablePacket_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__ctorElim___redArg(v_t_455_, v_Lean_Widget_RpcEncodablePacket_expr_457_);
return v___x_458_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_RpcEncodablePacket_goal_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__elim___redArg(lean_object* v_t_459_, lean_object* v_Lean_Widget_RpcEncodablePacket_goal_460_){
_start:
{
lean_object* v___x_461_; 
v___x_461_ = l_Lean_Widget_RpcEncodablePacket_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__ctorElim___redArg(v_t_459_, v_Lean_Widget_RpcEncodablePacket_goal_460_);
return v___x_461_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_RpcEncodablePacket_goal_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__elim(lean_object* v_motive_462_, lean_object* v_t_463_, lean_object* v_h_464_, lean_object* v_Lean_Widget_RpcEncodablePacket_goal_465_){
_start:
{
lean_object* v___x_466_; 
v___x_466_ = l_Lean_Widget_RpcEncodablePacket_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__ctorElim___redArg(v_t_463_, v_Lean_Widget_RpcEncodablePacket_goal_465_);
return v___x_466_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_RpcEncodablePacket_widget_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__elim___redArg(lean_object* v_t_467_, lean_object* v_Lean_Widget_RpcEncodablePacket_widget_468_){
_start:
{
lean_object* v___x_469_; 
v___x_469_ = l_Lean_Widget_RpcEncodablePacket_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__ctorElim___redArg(v_t_467_, v_Lean_Widget_RpcEncodablePacket_widget_468_);
return v___x_469_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_RpcEncodablePacket_widget_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__elim(lean_object* v_motive_470_, lean_object* v_t_471_, lean_object* v_h_472_, lean_object* v_Lean_Widget_RpcEncodablePacket_widget_473_){
_start:
{
lean_object* v___x_474_; 
v___x_474_ = l_Lean_Widget_RpcEncodablePacket_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__ctorElim___redArg(v_t_471_, v_Lean_Widget_RpcEncodablePacket_widget_473_);
return v___x_474_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_RpcEncodablePacket_trace_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__elim___redArg(lean_object* v_t_475_, lean_object* v_Lean_Widget_RpcEncodablePacket_trace_476_){
_start:
{
lean_object* v___x_477_; 
v___x_477_ = l_Lean_Widget_RpcEncodablePacket_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__ctorElim___redArg(v_t_475_, v_Lean_Widget_RpcEncodablePacket_trace_476_);
return v___x_477_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_RpcEncodablePacket_trace_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__elim(lean_object* v_motive_478_, lean_object* v_t_479_, lean_object* v_h_480_, lean_object* v_Lean_Widget_RpcEncodablePacket_trace_481_){
_start:
{
lean_object* v___x_482_; 
v___x_482_ = l_Lean_Widget_RpcEncodablePacket_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__ctorElim___redArg(v_t_479_, v_Lean_Widget_RpcEncodablePacket_trace_481_);
return v___x_482_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson_00___x40_Lean_Widget_InteractiveDiagnostic_2315129857____hygCtx___hyg_37_(lean_object* v_json_534_){
_start:
{
lean_object* v___x_535_; 
lean_inc(v_json_534_);
v___x_535_ = l_Lean_Json_getTag_x3f(v_json_534_);
if (lean_obj_tag(v___x_535_) == 0)
{
lean_object* v___x_536_; 
lean_dec(v_json_534_);
v___x_536_ = ((lean_object*)(l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__0_00___x40_Lean_Widget_InteractiveDiagnostic_2315129857____hygCtx___hyg_37_));
return v___x_536_;
}
else
{
lean_object* v_val_537_; lean_object* v___x_539_; uint8_t v_isShared_540_; uint8_t v_isSharedCheck_653_; 
v_val_537_ = lean_ctor_get(v___x_535_, 0);
v_isSharedCheck_653_ = !lean_is_exclusive(v___x_535_);
if (v_isSharedCheck_653_ == 0)
{
v___x_539_ = v___x_535_;
v_isShared_540_ = v_isSharedCheck_653_;
goto v_resetjp_538_;
}
else
{
lean_inc(v_val_537_);
lean_dec(v___x_535_);
v___x_539_ = lean_box(0);
v_isShared_540_ = v_isSharedCheck_653_;
goto v_resetjp_538_;
}
v_resetjp_538_:
{
lean_object* v___x_541_; lean_object* v___x_542_; uint8_t v___x_543_; 
v___x_541_ = lean_box(0);
v___x_542_ = ((lean_object*)(l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__1_00___x40_Lean_Widget_InteractiveDiagnostic_2315129857____hygCtx___hyg_37_));
v___x_543_ = lean_string_dec_eq(v_val_537_, v___x_542_);
if (v___x_543_ == 0)
{
lean_object* v___x_544_; uint8_t v___x_545_; 
v___x_544_ = ((lean_object*)(l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__2_00___x40_Lean_Widget_InteractiveDiagnostic_2315129857____hygCtx___hyg_37_));
v___x_545_ = lean_string_dec_eq(v_val_537_, v___x_544_);
if (v___x_545_ == 0)
{
lean_object* v___x_546_; uint8_t v___x_547_; 
lean_del_object(v___x_539_);
v___x_546_ = ((lean_object*)(l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__3_00___x40_Lean_Widget_InteractiveDiagnostic_2315129857____hygCtx___hyg_37_));
v___x_547_ = lean_string_dec_eq(v_val_537_, v___x_546_);
if (v___x_547_ == 0)
{
lean_object* v___x_548_; uint8_t v___x_549_; 
v___x_548_ = ((lean_object*)(l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__4_00___x40_Lean_Widget_InteractiveDiagnostic_2315129857____hygCtx___hyg_37_));
v___x_549_ = lean_string_dec_eq(v_val_537_, v___x_548_);
lean_dec(v_val_537_);
if (v___x_549_ == 0)
{
lean_object* v___x_550_; 
lean_dec(v_json_534_);
v___x_550_ = ((lean_object*)(l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__5_00___x40_Lean_Widget_InteractiveDiagnostic_2315129857____hygCtx___hyg_37_));
return v___x_550_;
}
else
{
lean_object* v___x_551_; lean_object* v___x_552_; lean_object* v___x_553_; 
v___x_551_ = lean_unsigned_to_nat(5u);
v___x_552_ = ((lean_object*)(l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__17_00___x40_Lean_Widget_InteractiveDiagnostic_2315129857____hygCtx___hyg_37_));
v___x_553_ = l_Lean_Json_parseCtorFields(v_json_534_, v___x_548_, v___x_551_, v___x_552_);
if (lean_obj_tag(v___x_553_) == 0)
{
lean_object* v_a_554_; lean_object* v___x_556_; uint8_t v_isShared_557_; uint8_t v_isSharedCheck_561_; 
v_a_554_ = lean_ctor_get(v___x_553_, 0);
v_isSharedCheck_561_ = !lean_is_exclusive(v___x_553_);
if (v_isSharedCheck_561_ == 0)
{
v___x_556_ = v___x_553_;
v_isShared_557_ = v_isSharedCheck_561_;
goto v_resetjp_555_;
}
else
{
lean_inc(v_a_554_);
lean_dec(v___x_553_);
v___x_556_ = lean_box(0);
v_isShared_557_ = v_isSharedCheck_561_;
goto v_resetjp_555_;
}
v_resetjp_555_:
{
lean_object* v___x_559_; 
if (v_isShared_557_ == 0)
{
v___x_559_ = v___x_556_;
goto v_reusejp_558_;
}
else
{
lean_object* v_reuseFailAlloc_560_; 
v_reuseFailAlloc_560_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_560_, 0, v_a_554_);
v___x_559_ = v_reuseFailAlloc_560_;
goto v_reusejp_558_;
}
v_reusejp_558_:
{
return v___x_559_;
}
}
}
else
{
lean_object* v_a_562_; lean_object* v___x_564_; uint8_t v_isShared_565_; uint8_t v_isSharedCheck_580_; 
v_a_562_ = lean_ctor_get(v___x_553_, 0);
v_isSharedCheck_580_ = !lean_is_exclusive(v___x_553_);
if (v_isSharedCheck_580_ == 0)
{
v___x_564_ = v___x_553_;
v_isShared_565_ = v_isSharedCheck_580_;
goto v_resetjp_563_;
}
else
{
lean_inc(v_a_562_);
lean_dec(v___x_553_);
v___x_564_ = lean_box(0);
v_isShared_565_ = v_isSharedCheck_580_;
goto v_resetjp_563_;
}
v_resetjp_563_:
{
lean_object* v___x_566_; lean_object* v___x_567_; lean_object* v___x_568_; lean_object* v___x_569_; lean_object* v___x_570_; lean_object* v___x_571_; lean_object* v___x_572_; lean_object* v___x_573_; lean_object* v___x_574_; lean_object* v___x_575_; lean_object* v___x_576_; lean_object* v___x_578_; 
v___x_566_ = lean_unsigned_to_nat(0u);
v___x_567_ = lean_array_get(v___x_541_, v_a_562_, v___x_566_);
v___x_568_ = lean_unsigned_to_nat(1u);
v___x_569_ = lean_array_get(v___x_541_, v_a_562_, v___x_568_);
v___x_570_ = lean_unsigned_to_nat(2u);
v___x_571_ = lean_array_get(v___x_541_, v_a_562_, v___x_570_);
v___x_572_ = lean_unsigned_to_nat(3u);
v___x_573_ = lean_array_get(v___x_541_, v_a_562_, v___x_572_);
v___x_574_ = lean_unsigned_to_nat(4u);
v___x_575_ = lean_array_get(v___x_541_, v_a_562_, v___x_574_);
lean_dec(v_a_562_);
v___x_576_ = lean_alloc_ctor(3, 5, 0);
lean_ctor_set(v___x_576_, 0, v___x_567_);
lean_ctor_set(v___x_576_, 1, v___x_569_);
lean_ctor_set(v___x_576_, 2, v___x_571_);
lean_ctor_set(v___x_576_, 3, v___x_573_);
lean_ctor_set(v___x_576_, 4, v___x_575_);
if (v_isShared_565_ == 0)
{
lean_ctor_set(v___x_564_, 0, v___x_576_);
v___x_578_ = v___x_564_;
goto v_reusejp_577_;
}
else
{
lean_object* v_reuseFailAlloc_579_; 
v_reuseFailAlloc_579_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_579_, 0, v___x_576_);
v___x_578_ = v_reuseFailAlloc_579_;
goto v_reusejp_577_;
}
v_reusejp_577_:
{
return v___x_578_;
}
}
}
}
}
else
{
lean_object* v___x_581_; lean_object* v___x_582_; lean_object* v___x_583_; 
lean_dec(v_val_537_);
v___x_581_ = lean_unsigned_to_nat(2u);
v___x_582_ = ((lean_object*)(l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__23_00___x40_Lean_Widget_InteractiveDiagnostic_2315129857____hygCtx___hyg_37_));
v___x_583_ = l_Lean_Json_parseCtorFields(v_json_534_, v___x_546_, v___x_581_, v___x_582_);
if (lean_obj_tag(v___x_583_) == 0)
{
lean_object* v_a_584_; lean_object* v___x_586_; uint8_t v_isShared_587_; uint8_t v_isSharedCheck_591_; 
v_a_584_ = lean_ctor_get(v___x_583_, 0);
v_isSharedCheck_591_ = !lean_is_exclusive(v___x_583_);
if (v_isSharedCheck_591_ == 0)
{
v___x_586_ = v___x_583_;
v_isShared_587_ = v_isSharedCheck_591_;
goto v_resetjp_585_;
}
else
{
lean_inc(v_a_584_);
lean_dec(v___x_583_);
v___x_586_ = lean_box(0);
v_isShared_587_ = v_isSharedCheck_591_;
goto v_resetjp_585_;
}
v_resetjp_585_:
{
lean_object* v___x_589_; 
if (v_isShared_587_ == 0)
{
v___x_589_ = v___x_586_;
goto v_reusejp_588_;
}
else
{
lean_object* v_reuseFailAlloc_590_; 
v_reuseFailAlloc_590_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_590_, 0, v_a_584_);
v___x_589_ = v_reuseFailAlloc_590_;
goto v_reusejp_588_;
}
v_reusejp_588_:
{
return v___x_589_;
}
}
}
else
{
lean_object* v_a_592_; lean_object* v___x_594_; uint8_t v_isShared_595_; uint8_t v_isSharedCheck_604_; 
v_a_592_ = lean_ctor_get(v___x_583_, 0);
v_isSharedCheck_604_ = !lean_is_exclusive(v___x_583_);
if (v_isSharedCheck_604_ == 0)
{
v___x_594_ = v___x_583_;
v_isShared_595_ = v_isSharedCheck_604_;
goto v_resetjp_593_;
}
else
{
lean_inc(v_a_592_);
lean_dec(v___x_583_);
v___x_594_ = lean_box(0);
v_isShared_595_ = v_isSharedCheck_604_;
goto v_resetjp_593_;
}
v_resetjp_593_:
{
lean_object* v___x_596_; lean_object* v___x_597_; lean_object* v___x_598_; lean_object* v___x_599_; lean_object* v___x_600_; lean_object* v___x_602_; 
v___x_596_ = lean_unsigned_to_nat(0u);
v___x_597_ = lean_array_get(v___x_541_, v_a_592_, v___x_596_);
v___x_598_ = lean_unsigned_to_nat(1u);
v___x_599_ = lean_array_get(v___x_541_, v_a_592_, v___x_598_);
lean_dec(v_a_592_);
v___x_600_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_600_, 0, v___x_597_);
lean_ctor_set(v___x_600_, 1, v___x_599_);
if (v_isShared_595_ == 0)
{
lean_ctor_set(v___x_594_, 0, v___x_600_);
v___x_602_ = v___x_594_;
goto v_reusejp_601_;
}
else
{
lean_object* v_reuseFailAlloc_603_; 
v_reuseFailAlloc_603_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_603_, 0, v___x_600_);
v___x_602_ = v_reuseFailAlloc_603_;
goto v_reusejp_601_;
}
v_reusejp_601_:
{
return v___x_602_;
}
}
}
}
}
else
{
lean_object* v___x_605_; lean_object* v___x_606_; lean_object* v___x_607_; 
lean_dec(v_val_537_);
v___x_605_ = lean_unsigned_to_nat(1u);
v___x_606_ = lean_box(0);
v___x_607_ = l_Lean_Json_parseCtorFields(v_json_534_, v___x_544_, v___x_605_, v___x_606_);
if (lean_obj_tag(v___x_607_) == 0)
{
lean_object* v_a_608_; lean_object* v___x_610_; uint8_t v_isShared_611_; uint8_t v_isSharedCheck_615_; 
lean_del_object(v___x_539_);
v_a_608_ = lean_ctor_get(v___x_607_, 0);
v_isSharedCheck_615_ = !lean_is_exclusive(v___x_607_);
if (v_isSharedCheck_615_ == 0)
{
v___x_610_ = v___x_607_;
v_isShared_611_ = v_isSharedCheck_615_;
goto v_resetjp_609_;
}
else
{
lean_inc(v_a_608_);
lean_dec(v___x_607_);
v___x_610_ = lean_box(0);
v_isShared_611_ = v_isSharedCheck_615_;
goto v_resetjp_609_;
}
v_resetjp_609_:
{
lean_object* v___x_613_; 
if (v_isShared_611_ == 0)
{
v___x_613_ = v___x_610_;
goto v_reusejp_612_;
}
else
{
lean_object* v_reuseFailAlloc_614_; 
v_reuseFailAlloc_614_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_614_, 0, v_a_608_);
v___x_613_ = v_reuseFailAlloc_614_;
goto v_reusejp_612_;
}
v_reusejp_612_:
{
return v___x_613_;
}
}
}
else
{
lean_object* v_a_616_; lean_object* v___x_618_; uint8_t v_isShared_619_; uint8_t v_isSharedCheck_628_; 
v_a_616_ = lean_ctor_get(v___x_607_, 0);
v_isSharedCheck_628_ = !lean_is_exclusive(v___x_607_);
if (v_isSharedCheck_628_ == 0)
{
v___x_618_ = v___x_607_;
v_isShared_619_ = v_isSharedCheck_628_;
goto v_resetjp_617_;
}
else
{
lean_inc(v_a_616_);
lean_dec(v___x_607_);
v___x_618_ = lean_box(0);
v_isShared_619_ = v_isSharedCheck_628_;
goto v_resetjp_617_;
}
v_resetjp_617_:
{
lean_object* v___x_620_; lean_object* v___x_621_; lean_object* v___x_623_; 
v___x_620_ = lean_unsigned_to_nat(0u);
v___x_621_ = lean_array_get(v___x_541_, v_a_616_, v___x_620_);
lean_dec(v_a_616_);
if (v_isShared_540_ == 0)
{
lean_ctor_set_tag(v___x_539_, 0);
lean_ctor_set(v___x_539_, 0, v___x_621_);
v___x_623_ = v___x_539_;
goto v_reusejp_622_;
}
else
{
lean_object* v_reuseFailAlloc_627_; 
v_reuseFailAlloc_627_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_627_, 0, v___x_621_);
v___x_623_ = v_reuseFailAlloc_627_;
goto v_reusejp_622_;
}
v_reusejp_622_:
{
lean_object* v___x_625_; 
if (v_isShared_619_ == 0)
{
lean_ctor_set(v___x_618_, 0, v___x_623_);
v___x_625_ = v___x_618_;
goto v_reusejp_624_;
}
else
{
lean_object* v_reuseFailAlloc_626_; 
v_reuseFailAlloc_626_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_626_, 0, v___x_623_);
v___x_625_ = v_reuseFailAlloc_626_;
goto v_reusejp_624_;
}
v_reusejp_624_:
{
return v___x_625_;
}
}
}
}
}
}
else
{
lean_object* v___x_629_; lean_object* v___x_630_; lean_object* v___x_631_; 
lean_dec(v_val_537_);
v___x_629_ = lean_unsigned_to_nat(1u);
v___x_630_ = lean_box(0);
v___x_631_ = l_Lean_Json_parseCtorFields(v_json_534_, v___x_542_, v___x_629_, v___x_630_);
if (lean_obj_tag(v___x_631_) == 0)
{
lean_object* v_a_632_; lean_object* v___x_634_; uint8_t v_isShared_635_; uint8_t v_isSharedCheck_639_; 
lean_del_object(v___x_539_);
v_a_632_ = lean_ctor_get(v___x_631_, 0);
v_isSharedCheck_639_ = !lean_is_exclusive(v___x_631_);
if (v_isSharedCheck_639_ == 0)
{
v___x_634_ = v___x_631_;
v_isShared_635_ = v_isSharedCheck_639_;
goto v_resetjp_633_;
}
else
{
lean_inc(v_a_632_);
lean_dec(v___x_631_);
v___x_634_ = lean_box(0);
v_isShared_635_ = v_isSharedCheck_639_;
goto v_resetjp_633_;
}
v_resetjp_633_:
{
lean_object* v___x_637_; 
if (v_isShared_635_ == 0)
{
v___x_637_ = v___x_634_;
goto v_reusejp_636_;
}
else
{
lean_object* v_reuseFailAlloc_638_; 
v_reuseFailAlloc_638_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_638_, 0, v_a_632_);
v___x_637_ = v_reuseFailAlloc_638_;
goto v_reusejp_636_;
}
v_reusejp_636_:
{
return v___x_637_;
}
}
}
else
{
lean_object* v_a_640_; lean_object* v___x_642_; uint8_t v_isShared_643_; uint8_t v_isSharedCheck_652_; 
v_a_640_ = lean_ctor_get(v___x_631_, 0);
v_isSharedCheck_652_ = !lean_is_exclusive(v___x_631_);
if (v_isSharedCheck_652_ == 0)
{
v___x_642_ = v___x_631_;
v_isShared_643_ = v_isSharedCheck_652_;
goto v_resetjp_641_;
}
else
{
lean_inc(v_a_640_);
lean_dec(v___x_631_);
v___x_642_ = lean_box(0);
v_isShared_643_ = v_isSharedCheck_652_;
goto v_resetjp_641_;
}
v_resetjp_641_:
{
lean_object* v___x_644_; lean_object* v___x_645_; lean_object* v___x_647_; 
v___x_644_ = lean_unsigned_to_nat(0u);
v___x_645_ = lean_array_get(v___x_541_, v_a_640_, v___x_644_);
lean_dec(v_a_640_);
if (v_isShared_540_ == 0)
{
lean_ctor_set(v___x_539_, 0, v___x_645_);
v___x_647_ = v___x_539_;
goto v_reusejp_646_;
}
else
{
lean_object* v_reuseFailAlloc_651_; 
v_reuseFailAlloc_651_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_651_, 0, v___x_645_);
v___x_647_ = v_reuseFailAlloc_651_;
goto v_reusejp_646_;
}
v_reusejp_646_:
{
lean_object* v___x_649_; 
if (v_isShared_643_ == 0)
{
lean_ctor_set(v___x_642_, 0, v___x_647_);
v___x_649_ = v___x_642_;
goto v_reusejp_648_;
}
else
{
lean_object* v_reuseFailAlloc_650_; 
v_reuseFailAlloc_650_ = lean_alloc_ctor(1, 1, 0);
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
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_instToJsonRpcEncodablePacket_toJson_00___x40_Lean_Widget_InteractiveDiagnostic_2315129857____hygCtx___hyg_65_(lean_object* v_x_656_){
_start:
{
switch(lean_obj_tag(v_x_656_))
{
case 0:
{
lean_object* v_a_657_; lean_object* v___x_658_; lean_object* v___x_659_; lean_object* v___x_660_; lean_object* v___x_661_; lean_object* v___x_662_; 
v_a_657_ = lean_ctor_get(v_x_656_, 0);
lean_inc(v_a_657_);
lean_dec_ref_known(v_x_656_, 1);
v___x_658_ = ((lean_object*)(l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__2_00___x40_Lean_Widget_InteractiveDiagnostic_2315129857____hygCtx___hyg_37_));
v___x_659_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_659_, 0, v___x_658_);
lean_ctor_set(v___x_659_, 1, v_a_657_);
v___x_660_ = lean_box(0);
v___x_661_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_661_, 0, v___x_659_);
lean_ctor_set(v___x_661_, 1, v___x_660_);
v___x_662_ = l_Lean_Json_mkObj(v___x_661_);
lean_dec_ref_known(v___x_661_, 2);
return v___x_662_;
}
case 1:
{
lean_object* v_a_663_; lean_object* v___x_664_; lean_object* v___x_665_; lean_object* v___x_666_; lean_object* v___x_667_; lean_object* v___x_668_; 
v_a_663_ = lean_ctor_get(v_x_656_, 0);
lean_inc(v_a_663_);
lean_dec_ref_known(v_x_656_, 1);
v___x_664_ = ((lean_object*)(l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__1_00___x40_Lean_Widget_InteractiveDiagnostic_2315129857____hygCtx___hyg_37_));
v___x_665_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_665_, 0, v___x_664_);
lean_ctor_set(v___x_665_, 1, v_a_663_);
v___x_666_ = lean_box(0);
v___x_667_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_667_, 0, v___x_665_);
lean_ctor_set(v___x_667_, 1, v___x_666_);
v___x_668_ = l_Lean_Json_mkObj(v___x_667_);
lean_dec_ref_known(v___x_667_, 2);
return v___x_668_;
}
case 2:
{
lean_object* v_wi_669_; lean_object* v_alt_670_; lean_object* v___x_672_; uint8_t v_isShared_673_; uint8_t v_isSharedCheck_688_; 
v_wi_669_ = lean_ctor_get(v_x_656_, 0);
v_alt_670_ = lean_ctor_get(v_x_656_, 1);
v_isSharedCheck_688_ = !lean_is_exclusive(v_x_656_);
if (v_isSharedCheck_688_ == 0)
{
v___x_672_ = v_x_656_;
v_isShared_673_ = v_isSharedCheck_688_;
goto v_resetjp_671_;
}
else
{
lean_inc(v_alt_670_);
lean_inc(v_wi_669_);
lean_dec(v_x_656_);
v___x_672_ = lean_box(0);
v_isShared_673_ = v_isSharedCheck_688_;
goto v_resetjp_671_;
}
v_resetjp_671_:
{
lean_object* v___x_674_; lean_object* v___x_675_; lean_object* v___x_677_; 
v___x_674_ = ((lean_object*)(l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__3_00___x40_Lean_Widget_InteractiveDiagnostic_2315129857____hygCtx___hyg_37_));
v___x_675_ = ((lean_object*)(l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__18_00___x40_Lean_Widget_InteractiveDiagnostic_2315129857____hygCtx___hyg_37_));
if (v_isShared_673_ == 0)
{
lean_ctor_set_tag(v___x_672_, 0);
lean_ctor_set(v___x_672_, 1, v_wi_669_);
lean_ctor_set(v___x_672_, 0, v___x_675_);
v___x_677_ = v___x_672_;
goto v_reusejp_676_;
}
else
{
lean_object* v_reuseFailAlloc_687_; 
v_reuseFailAlloc_687_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_687_, 0, v___x_675_);
lean_ctor_set(v_reuseFailAlloc_687_, 1, v_wi_669_);
v___x_677_ = v_reuseFailAlloc_687_;
goto v_reusejp_676_;
}
v_reusejp_676_:
{
lean_object* v___x_678_; lean_object* v___x_679_; lean_object* v___x_680_; lean_object* v___x_681_; lean_object* v___x_682_; lean_object* v___x_683_; lean_object* v___x_684_; lean_object* v___x_685_; lean_object* v___x_686_; 
v___x_678_ = ((lean_object*)(l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__20_00___x40_Lean_Widget_InteractiveDiagnostic_2315129857____hygCtx___hyg_37_));
v___x_679_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_679_, 0, v___x_678_);
lean_ctor_set(v___x_679_, 1, v_alt_670_);
v___x_680_ = lean_box(0);
v___x_681_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_681_, 0, v___x_679_);
lean_ctor_set(v___x_681_, 1, v___x_680_);
v___x_682_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_682_, 0, v___x_677_);
lean_ctor_set(v___x_682_, 1, v___x_681_);
v___x_683_ = l_Lean_Json_mkObj(v___x_682_);
lean_dec_ref_known(v___x_682_, 2);
v___x_684_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_684_, 0, v___x_674_);
lean_ctor_set(v___x_684_, 1, v___x_683_);
v___x_685_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_685_, 0, v___x_684_);
lean_ctor_set(v___x_685_, 1, v___x_680_);
v___x_686_ = l_Lean_Json_mkObj(v___x_685_);
lean_dec_ref_known(v___x_685_, 2);
return v___x_686_;
}
}
}
default: 
{
lean_object* v_indent_689_; lean_object* v_cls_690_; lean_object* v_msg_691_; lean_object* v_collapsed_692_; lean_object* v_children_693_; lean_object* v___x_694_; lean_object* v___x_695_; lean_object* v___x_696_; lean_object* v___x_697_; lean_object* v___x_698_; lean_object* v___x_699_; lean_object* v___x_700_; lean_object* v___x_701_; lean_object* v___x_702_; lean_object* v___x_703_; lean_object* v___x_704_; lean_object* v___x_705_; lean_object* v___x_706_; lean_object* v___x_707_; lean_object* v___x_708_; lean_object* v___x_709_; lean_object* v___x_710_; lean_object* v___x_711_; lean_object* v___x_712_; lean_object* v___x_713_; lean_object* v___x_714_; 
v_indent_689_ = lean_ctor_get(v_x_656_, 0);
lean_inc(v_indent_689_);
v_cls_690_ = lean_ctor_get(v_x_656_, 1);
lean_inc(v_cls_690_);
v_msg_691_ = lean_ctor_get(v_x_656_, 2);
lean_inc(v_msg_691_);
v_collapsed_692_ = lean_ctor_get(v_x_656_, 3);
lean_inc(v_collapsed_692_);
v_children_693_ = lean_ctor_get(v_x_656_, 4);
lean_inc(v_children_693_);
lean_dec_ref_known(v_x_656_, 5);
v___x_694_ = ((lean_object*)(l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__4_00___x40_Lean_Widget_InteractiveDiagnostic_2315129857____hygCtx___hyg_37_));
v___x_695_ = ((lean_object*)(l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__6_00___x40_Lean_Widget_InteractiveDiagnostic_2315129857____hygCtx___hyg_37_));
v___x_696_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_696_, 0, v___x_695_);
lean_ctor_set(v___x_696_, 1, v_indent_689_);
v___x_697_ = ((lean_object*)(l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__8_00___x40_Lean_Widget_InteractiveDiagnostic_2315129857____hygCtx___hyg_37_));
v___x_698_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_698_, 0, v___x_697_);
lean_ctor_set(v___x_698_, 1, v_cls_690_);
v___x_699_ = ((lean_object*)(l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__10_00___x40_Lean_Widget_InteractiveDiagnostic_2315129857____hygCtx___hyg_37_));
v___x_700_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_700_, 0, v___x_699_);
lean_ctor_set(v___x_700_, 1, v_msg_691_);
v___x_701_ = ((lean_object*)(l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__12_00___x40_Lean_Widget_InteractiveDiagnostic_2315129857____hygCtx___hyg_37_));
v___x_702_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_702_, 0, v___x_701_);
lean_ctor_set(v___x_702_, 1, v_collapsed_692_);
v___x_703_ = ((lean_object*)(l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__14_00___x40_Lean_Widget_InteractiveDiagnostic_2315129857____hygCtx___hyg_37_));
v___x_704_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_704_, 0, v___x_703_);
lean_ctor_set(v___x_704_, 1, v_children_693_);
v___x_705_ = lean_box(0);
v___x_706_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_706_, 0, v___x_704_);
lean_ctor_set(v___x_706_, 1, v___x_705_);
v___x_707_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_707_, 0, v___x_702_);
lean_ctor_set(v___x_707_, 1, v___x_706_);
v___x_708_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_708_, 0, v___x_700_);
lean_ctor_set(v___x_708_, 1, v___x_707_);
v___x_709_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_709_, 0, v___x_698_);
lean_ctor_set(v___x_709_, 1, v___x_708_);
v___x_710_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_710_, 0, v___x_696_);
lean_ctor_set(v___x_710_, 1, v___x_709_);
v___x_711_ = l_Lean_Json_mkObj(v___x_710_);
lean_dec_ref_known(v___x_710_, 2);
v___x_712_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_712_, 0, v___x_694_);
lean_ctor_set(v___x_712_, 1, v___x_711_);
v___x_713_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_713_, 0, v___x_712_);
lean_ctor_set(v___x_713_, 1, v___x_705_);
v___x_714_ = l_Lean_Json_mkObj(v___x_713_);
lean_dec_ref_known(v___x_713_, 2);
return v___x_714_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Widget_instRpcEncodableStrictOrLazy_enc_00___x40_Lean_Widget_InteractiveDiagnostic_2157017296____hygCtx___hyg_1____at___00Lean_Widget_instRpcEncodableMsgEmbed_enc_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__spec__2_spec__5_spec__9(size_t v_sz_717_, size_t v_i_718_, lean_object* v_bs_719_){
_start:
{
uint8_t v___x_720_; 
v___x_720_ = lean_usize_dec_lt(v_i_718_, v_sz_717_);
if (v___x_720_ == 0)
{
lean_object* v___x_721_; 
v___x_721_ = l_unsafeCast___redArg(v_bs_719_);
lean_dec_ref(v_bs_719_);
return v___x_721_;
}
else
{
lean_object* v_v_722_; lean_object* v___x_723_; lean_object* v_bs_x27_724_; lean_object* v___x_725_; size_t v___x_726_; size_t v___x_727_; lean_object* v___x_728_; lean_object* v___x_729_; 
v_v_722_ = lean_array_uget(v_bs_719_, v_i_718_);
v___x_723_ = lean_unsigned_to_nat(0u);
v_bs_x27_724_ = lean_array_uset(v_bs_719_, v_i_718_, v___x_723_);
v___x_725_ = l_unsafeCast___redArg(v_v_722_);
lean_dec(v_v_722_);
v___x_726_ = ((size_t)1ULL);
v___x_727_ = lean_usize_add(v_i_718_, v___x_726_);
v___x_728_ = l_unsafeCast___redArg(v___x_725_);
lean_dec(v___x_725_);
v___x_729_ = lean_array_uset(v_bs_x27_724_, v_i_718_, v___x_728_);
v_i_718_ = v___x_727_;
v_bs_719_ = v___x_729_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Widget_instRpcEncodableStrictOrLazy_enc_00___x40_Lean_Widget_InteractiveDiagnostic_2157017296____hygCtx___hyg_1____at___00Lean_Widget_instRpcEncodableMsgEmbed_enc_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__spec__2_spec__5_spec__9___boxed(lean_object* v_sz_731_, lean_object* v_i_732_, lean_object* v_bs_733_){
_start:
{
size_t v_sz_boxed_734_; size_t v_i_boxed_735_; lean_object* v_res_736_; 
v_sz_boxed_734_ = lean_unbox_usize(v_sz_731_);
lean_dec(v_sz_731_);
v_i_boxed_735_ = lean_unbox_usize(v_i_732_);
lean_dec(v_i_732_);
v_res_736_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Widget_instRpcEncodableStrictOrLazy_enc_00___x40_Lean_Widget_InteractiveDiagnostic_2157017296____hygCtx___hyg_1____at___00Lean_Widget_instRpcEncodableMsgEmbed_enc_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__spec__2_spec__5_spec__9(v_sz_boxed_734_, v_i_boxed_735_, v_bs_733_);
return v_res_736_;
}
}
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00Lean_Widget_instRpcEncodableStrictOrLazy_enc_00___x40_Lean_Widget_InteractiveDiagnostic_2157017296____hygCtx___hyg_1____at___00Lean_Widget_instRpcEncodableMsgEmbed_enc_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__spec__2_spec__5(lean_object* v_a_737_){
_start:
{
size_t v_sz_738_; size_t v___x_739_; lean_object* v___x_740_; lean_object* v___x_741_; lean_object* v___x_742_; lean_object* v___x_743_; 
v_sz_738_ = lean_array_size(v_a_737_);
v___x_739_ = ((size_t)0ULL);
v___x_740_ = l_unsafeCast___redArg(v_a_737_);
v___x_741_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Widget_instRpcEncodableStrictOrLazy_enc_00___x40_Lean_Widget_InteractiveDiagnostic_2157017296____hygCtx___hyg_1____at___00Lean_Widget_instRpcEncodableMsgEmbed_enc_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__spec__2_spec__5_spec__9(v_sz_738_, v___x_739_, v___x_740_);
v___x_742_ = l_unsafeCast___redArg(v___x_741_);
lean_dec_ref(v___x_741_);
v___x_743_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_743_, 0, v___x_742_);
return v___x_743_;
}
}
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00Lean_Widget_instRpcEncodableStrictOrLazy_enc_00___x40_Lean_Widget_InteractiveDiagnostic_2157017296____hygCtx___hyg_1____at___00Lean_Widget_instRpcEncodableMsgEmbed_enc_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__spec__2_spec__5___boxed(lean_object* v_a_744_){
_start:
{
lean_object* v_res_745_; 
v_res_745_ = l_Lean_Array_toJson___at___00Lean_Widget_instRpcEncodableStrictOrLazy_enc_00___x40_Lean_Widget_InteractiveDiagnostic_2157017296____hygCtx___hyg_1____at___00Lean_Widget_instRpcEncodableMsgEmbed_enc_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__spec__2_spec__5(v_a_744_);
lean_dec_ref(v_a_744_);
return v_res_745_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_instToJsonTaggedText_toJson___at___00Lean_Widget_instRpcEncodableMsgEmbed_enc_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__spec__1(lean_object* v_x_749_){
_start:
{
switch(lean_obj_tag(v_x_749_))
{
case 0:
{
lean_object* v_a_750_; lean_object* v___x_752_; uint8_t v_isShared_753_; uint8_t v_isSharedCheck_762_; 
v_a_750_ = lean_ctor_get(v_x_749_, 0);
v_isSharedCheck_762_ = !lean_is_exclusive(v_x_749_);
if (v_isSharedCheck_762_ == 0)
{
v___x_752_ = v_x_749_;
v_isShared_753_ = v_isSharedCheck_762_;
goto v_resetjp_751_;
}
else
{
lean_inc(v_a_750_);
lean_dec(v_x_749_);
v___x_752_ = lean_box(0);
v_isShared_753_ = v_isSharedCheck_762_;
goto v_resetjp_751_;
}
v_resetjp_751_:
{
lean_object* v___x_754_; lean_object* v___x_756_; 
v___x_754_ = ((lean_object*)(l_Lean_Widget_instToJsonTaggedText_toJson___at___00Lean_Widget_instRpcEncodableMsgEmbed_enc_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__spec__1___closed__0));
if (v_isShared_753_ == 0)
{
lean_ctor_set_tag(v___x_752_, 3);
v___x_756_ = v___x_752_;
goto v_reusejp_755_;
}
else
{
lean_object* v_reuseFailAlloc_761_; 
v_reuseFailAlloc_761_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_761_, 0, v_a_750_);
v___x_756_ = v_reuseFailAlloc_761_;
goto v_reusejp_755_;
}
v_reusejp_755_:
{
lean_object* v___x_757_; lean_object* v___x_758_; lean_object* v___x_759_; lean_object* v___x_760_; 
v___x_757_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_757_, 0, v___x_754_);
lean_ctor_set(v___x_757_, 1, v___x_756_);
v___x_758_ = lean_box(0);
v___x_759_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_759_, 0, v___x_757_);
lean_ctor_set(v___x_759_, 1, v___x_758_);
v___x_760_ = l_Lean_Json_mkObj(v___x_759_);
lean_dec_ref_known(v___x_759_, 2);
return v___x_760_;
}
}
}
case 1:
{
lean_object* v_a_763_; lean_object* v___x_764_; lean_object* v___x_765_; lean_object* v___x_766_; lean_object* v___x_767_; lean_object* v___x_768_; lean_object* v___x_769_; 
v_a_763_ = lean_ctor_get(v_x_749_, 0);
lean_inc_ref(v_a_763_);
lean_dec_ref_known(v_x_749_, 1);
v___x_764_ = ((lean_object*)(l_Lean_Widget_instToJsonTaggedText_toJson___at___00Lean_Widget_instRpcEncodableMsgEmbed_enc_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__spec__1___closed__1));
v___x_765_ = l_Lean_Array_toJson___at___00Lean_Widget_instToJsonTaggedText_toJson___at___00Lean_Widget_instRpcEncodableMsgEmbed_enc_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__spec__1_spec__2(v_a_763_);
lean_dec_ref(v_a_763_);
v___x_766_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_766_, 0, v___x_764_);
lean_ctor_set(v___x_766_, 1, v___x_765_);
v___x_767_ = lean_box(0);
v___x_768_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_768_, 0, v___x_766_);
lean_ctor_set(v___x_768_, 1, v___x_767_);
v___x_769_ = l_Lean_Json_mkObj(v___x_768_);
lean_dec_ref_known(v___x_768_, 2);
return v___x_769_;
}
default: 
{
lean_object* v_a_770_; lean_object* v_a_771_; lean_object* v___x_773_; uint8_t v_isShared_774_; uint8_t v_isSharedCheck_788_; 
v_a_770_ = lean_ctor_get(v_x_749_, 0);
v_a_771_ = lean_ctor_get(v_x_749_, 1);
v_isSharedCheck_788_ = !lean_is_exclusive(v_x_749_);
if (v_isSharedCheck_788_ == 0)
{
v___x_773_ = v_x_749_;
v_isShared_774_ = v_isSharedCheck_788_;
goto v_resetjp_772_;
}
else
{
lean_inc(v_a_771_);
lean_inc(v_a_770_);
lean_dec(v_x_749_);
v___x_773_ = lean_box(0);
v_isShared_774_ = v_isSharedCheck_788_;
goto v_resetjp_772_;
}
v_resetjp_772_:
{
lean_object* v___x_775_; lean_object* v___x_776_; lean_object* v___x_777_; lean_object* v___x_778_; lean_object* v___x_779_; lean_object* v___x_780_; lean_object* v___x_781_; lean_object* v___x_783_; 
v___x_775_ = ((lean_object*)(l_Lean_Widget_instToJsonTaggedText_toJson___at___00Lean_Widget_instRpcEncodableMsgEmbed_enc_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__spec__1___closed__2));
v___x_776_ = l_Lean_Widget_instToJsonTaggedText_toJson___at___00Lean_Widget_instRpcEncodableMsgEmbed_enc_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__spec__1(v_a_771_);
v___x_777_ = lean_unsigned_to_nat(2u);
v___x_778_ = lean_mk_empty_array_with_capacity(v___x_777_);
v___x_779_ = lean_array_push(v___x_778_, v_a_770_);
v___x_780_ = lean_array_push(v___x_779_, v___x_776_);
v___x_781_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_781_, 0, v___x_780_);
if (v_isShared_774_ == 0)
{
lean_ctor_set_tag(v___x_773_, 0);
lean_ctor_set(v___x_773_, 1, v___x_781_);
lean_ctor_set(v___x_773_, 0, v___x_775_);
v___x_783_ = v___x_773_;
goto v_reusejp_782_;
}
else
{
lean_object* v_reuseFailAlloc_787_; 
v_reuseFailAlloc_787_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_787_, 0, v___x_775_);
lean_ctor_set(v_reuseFailAlloc_787_, 1, v___x_781_);
v___x_783_ = v_reuseFailAlloc_787_;
goto v_reusejp_782_;
}
v_reusejp_782_:
{
lean_object* v___x_784_; lean_object* v___x_785_; lean_object* v___x_786_; 
v___x_784_ = lean_box(0);
v___x_785_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_785_, 0, v___x_783_);
lean_ctor_set(v___x_785_, 1, v___x_784_);
v___x_786_ = l_Lean_Json_mkObj(v___x_785_);
lean_dec_ref_known(v___x_785_, 2);
return v___x_786_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Widget_instToJsonTaggedText_toJson___at___00Lean_Widget_instRpcEncodableMsgEmbed_enc_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__spec__1_spec__2_spec__5(size_t v_sz_789_, size_t v_i_790_, lean_object* v_bs_791_){
_start:
{
uint8_t v___x_792_; 
v___x_792_ = lean_usize_dec_lt(v_i_790_, v_sz_789_);
if (v___x_792_ == 0)
{
lean_object* v___x_793_; 
v___x_793_ = l_unsafeCast___redArg(v_bs_791_);
lean_dec_ref(v_bs_791_);
return v___x_793_;
}
else
{
lean_object* v_v_794_; lean_object* v___x_795_; lean_object* v_bs_x27_796_; lean_object* v___x_797_; lean_object* v___x_798_; size_t v___x_799_; size_t v___x_800_; lean_object* v___x_801_; lean_object* v___x_802_; 
v_v_794_ = lean_array_uget(v_bs_791_, v_i_790_);
v___x_795_ = lean_unsigned_to_nat(0u);
v_bs_x27_796_ = lean_array_uset(v_bs_791_, v_i_790_, v___x_795_);
v___x_797_ = l_unsafeCast___redArg(v_v_794_);
lean_dec(v_v_794_);
v___x_798_ = l_Lean_Widget_instToJsonTaggedText_toJson___at___00Lean_Widget_instRpcEncodableMsgEmbed_enc_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__spec__1(v___x_797_);
v___x_799_ = ((size_t)1ULL);
v___x_800_ = lean_usize_add(v_i_790_, v___x_799_);
v___x_801_ = l_unsafeCast___redArg(v___x_798_);
lean_dec(v___x_798_);
v___x_802_ = lean_array_uset(v_bs_x27_796_, v_i_790_, v___x_801_);
v_i_790_ = v___x_800_;
v_bs_791_ = v___x_802_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00Lean_Widget_instToJsonTaggedText_toJson___at___00Lean_Widget_instRpcEncodableMsgEmbed_enc_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__spec__1_spec__2(lean_object* v_a_804_){
_start:
{
size_t v_sz_805_; size_t v___x_806_; lean_object* v___x_807_; lean_object* v___x_808_; lean_object* v___x_809_; lean_object* v___x_810_; 
v_sz_805_ = lean_array_size(v_a_804_);
v___x_806_ = ((size_t)0ULL);
v___x_807_ = l_unsafeCast___redArg(v_a_804_);
v___x_808_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Widget_instToJsonTaggedText_toJson___at___00Lean_Widget_instRpcEncodableMsgEmbed_enc_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__spec__1_spec__2_spec__5(v_sz_805_, v___x_806_, v___x_807_);
v___x_809_ = l_unsafeCast___redArg(v___x_808_);
lean_dec_ref(v___x_808_);
v___x_810_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_810_, 0, v___x_809_);
return v___x_810_;
}
}
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00Lean_Widget_instToJsonTaggedText_toJson___at___00Lean_Widget_instRpcEncodableMsgEmbed_enc_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__spec__1_spec__2___boxed(lean_object* v_a_811_){
_start:
{
lean_object* v_res_812_; 
v_res_812_ = l_Lean_Array_toJson___at___00Lean_Widget_instToJsonTaggedText_toJson___at___00Lean_Widget_instRpcEncodableMsgEmbed_enc_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__spec__1_spec__2(v_a_811_);
lean_dec_ref(v_a_811_);
return v_res_812_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Widget_instToJsonTaggedText_toJson___at___00Lean_Widget_instRpcEncodableMsgEmbed_enc_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__spec__1_spec__2_spec__5___boxed(lean_object* v_sz_813_, lean_object* v_i_814_, lean_object* v_bs_815_){
_start:
{
size_t v_sz_boxed_816_; size_t v_i_boxed_817_; lean_object* v_res_818_; 
v_sz_boxed_816_ = lean_unbox_usize(v_sz_813_);
lean_dec(v_sz_813_);
v_i_boxed_817_ = lean_unbox_usize(v_i_814_);
lean_dec(v_i_814_);
v_res_818_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Widget_instToJsonTaggedText_toJson___at___00Lean_Widget_instRpcEncodableMsgEmbed_enc_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__spec__1_spec__2_spec__5(v_sz_boxed_816_, v_i_boxed_817_, v_bs_815_);
return v_res_818_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_TaggedText_mapM___at___00Lean_Widget_instRpcEncodableMsgEmbed_enc_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__spec__0_spec__0___boxed(lean_object* v_00_u03b1_821_, lean_object* v_00_u03b2_822_, lean_object* v_f_823_, lean_object* v_sz_824_, lean_object* v_i_825_, lean_object* v_bs_826_, lean_object* v___y_827_){
_start:
{
size_t v_sz_boxed_828_; size_t v_i_boxed_829_; lean_object* v_res_830_; 
v_sz_boxed_828_ = lean_unbox_usize(v_sz_824_);
lean_dec(v_sz_824_);
v_i_boxed_829_ = lean_unbox_usize(v_i_825_);
lean_dec(v_i_825_);
v_res_830_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_TaggedText_mapM___at___00Lean_Widget_instRpcEncodableMsgEmbed_enc_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__spec__0_spec__0(v_00_u03b1_821_, v_00_u03b2_822_, v_f_823_, v_sz_boxed_828_, v_i_boxed_829_, v_bs_826_, v___y_827_);
return v_res_830_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_mapM___at___00Lean_Widget_instRpcEncodableMsgEmbed_enc_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__spec__0___redArg(lean_object* v_f_831_, lean_object* v_x_832_, lean_object* v___y_833_){
_start:
{
switch(lean_obj_tag(v_x_832_))
{
case 0:
{
lean_object* v_a_834_; lean_object* v___x_836_; uint8_t v_isShared_837_; uint8_t v_isSharedCheck_842_; 
lean_dec_ref(v_f_831_);
v_a_834_ = lean_ctor_get(v_x_832_, 0);
v_isSharedCheck_842_ = !lean_is_exclusive(v_x_832_);
if (v_isSharedCheck_842_ == 0)
{
v___x_836_ = v_x_832_;
v_isShared_837_ = v_isSharedCheck_842_;
goto v_resetjp_835_;
}
else
{
lean_inc(v_a_834_);
lean_dec(v_x_832_);
v___x_836_ = lean_box(0);
v_isShared_837_ = v_isSharedCheck_842_;
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
lean_object* v_reuseFailAlloc_841_; 
v_reuseFailAlloc_841_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_841_, 0, v_a_834_);
v___x_839_ = v_reuseFailAlloc_841_;
goto v_reusejp_838_;
}
v_reusejp_838_:
{
lean_object* v___x_840_; 
v___x_840_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_840_, 0, v___x_839_);
lean_ctor_set(v___x_840_, 1, v___y_833_);
return v___x_840_;
}
}
}
case 1:
{
lean_object* v_a_843_; lean_object* v___x_845_; uint8_t v_isShared_846_; uint8_t v_isSharedCheck_866_; 
v_a_843_ = lean_ctor_get(v_x_832_, 0);
v_isSharedCheck_866_ = !lean_is_exclusive(v_x_832_);
if (v_isSharedCheck_866_ == 0)
{
v___x_845_ = v_x_832_;
v_isShared_846_ = v_isSharedCheck_866_;
goto v_resetjp_844_;
}
else
{
lean_inc(v_a_843_);
lean_dec(v_x_832_);
v___x_845_ = lean_box(0);
v_isShared_846_ = v_isSharedCheck_866_;
goto v_resetjp_844_;
}
v_resetjp_844_:
{
size_t v_sz_847_; lean_object* v___x_848_; lean_object* v___x_849_; lean_object* v___x_850_; lean_object* v___x_851_; lean_object* v___x_10914__overap_852_; lean_object* v___x_853_; lean_object* v_fst_854_; lean_object* v_snd_855_; lean_object* v___x_857_; uint8_t v_isShared_858_; uint8_t v_isSharedCheck_865_; 
v_sz_847_ = lean_array_size(v_a_843_);
v___x_848_ = l_unsafeCast___redArg(v_a_843_);
lean_dec_ref(v_a_843_);
v___x_849_ = lean_box_usize(v_sz_847_);
v___x_850_ = ((lean_object*)(l_Lean_Widget_TaggedText_mapM___at___00Lean_Widget_instRpcEncodableMsgEmbed_enc_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__spec__0___redArg___boxed__const__1));
v___x_851_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_TaggedText_mapM___at___00Lean_Widget_instRpcEncodableMsgEmbed_enc_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__spec__0_spec__0___boxed), 7, 6);
lean_closure_set(v___x_851_, 0, lean_box(0));
lean_closure_set(v___x_851_, 1, lean_box(0));
lean_closure_set(v___x_851_, 2, v_f_831_);
lean_closure_set(v___x_851_, 3, v___x_849_);
lean_closure_set(v___x_851_, 4, v___x_850_);
lean_closure_set(v___x_851_, 5, v___x_848_);
v___x_10914__overap_852_ = l_unsafeCast___redArg(v___x_851_);
lean_dec_ref(v___x_851_);
v___x_853_ = lean_apply_1(v___x_10914__overap_852_, v___y_833_);
v_fst_854_ = lean_ctor_get(v___x_853_, 0);
v_snd_855_ = lean_ctor_get(v___x_853_, 1);
v_isSharedCheck_865_ = !lean_is_exclusive(v___x_853_);
if (v_isSharedCheck_865_ == 0)
{
v___x_857_ = v___x_853_;
v_isShared_858_ = v_isSharedCheck_865_;
goto v_resetjp_856_;
}
else
{
lean_inc(v_snd_855_);
lean_inc(v_fst_854_);
lean_dec(v___x_853_);
v___x_857_ = lean_box(0);
v_isShared_858_ = v_isSharedCheck_865_;
goto v_resetjp_856_;
}
v_resetjp_856_:
{
lean_object* v___x_860_; 
if (v_isShared_846_ == 0)
{
lean_ctor_set(v___x_845_, 0, v_fst_854_);
v___x_860_ = v___x_845_;
goto v_reusejp_859_;
}
else
{
lean_object* v_reuseFailAlloc_864_; 
v_reuseFailAlloc_864_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_864_, 0, v_fst_854_);
v___x_860_ = v_reuseFailAlloc_864_;
goto v_reusejp_859_;
}
v_reusejp_859_:
{
lean_object* v___x_862_; 
if (v_isShared_858_ == 0)
{
lean_ctor_set(v___x_857_, 0, v___x_860_);
v___x_862_ = v___x_857_;
goto v_reusejp_861_;
}
else
{
lean_object* v_reuseFailAlloc_863_; 
v_reuseFailAlloc_863_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_863_, 0, v___x_860_);
lean_ctor_set(v_reuseFailAlloc_863_, 1, v_snd_855_);
v___x_862_ = v_reuseFailAlloc_863_;
goto v_reusejp_861_;
}
v_reusejp_861_:
{
return v___x_862_;
}
}
}
}
}
default: 
{
lean_object* v_a_867_; lean_object* v_a_868_; lean_object* v___x_870_; uint8_t v_isShared_871_; uint8_t v_isSharedCheck_888_; 
v_a_867_ = lean_ctor_get(v_x_832_, 0);
v_a_868_ = lean_ctor_get(v_x_832_, 1);
v_isSharedCheck_888_ = !lean_is_exclusive(v_x_832_);
if (v_isSharedCheck_888_ == 0)
{
v___x_870_ = v_x_832_;
v_isShared_871_ = v_isSharedCheck_888_;
goto v_resetjp_869_;
}
else
{
lean_inc(v_a_868_);
lean_inc(v_a_867_);
lean_dec(v_x_832_);
v___x_870_ = lean_box(0);
v_isShared_871_ = v_isSharedCheck_888_;
goto v_resetjp_869_;
}
v_resetjp_869_:
{
lean_object* v___x_872_; lean_object* v_fst_873_; lean_object* v_snd_874_; lean_object* v___x_875_; lean_object* v_fst_876_; lean_object* v_snd_877_; lean_object* v___x_879_; uint8_t v_isShared_880_; uint8_t v_isSharedCheck_887_; 
lean_inc_ref(v_f_831_);
v___x_872_ = lean_apply_2(v_f_831_, v_a_867_, v___y_833_);
v_fst_873_ = lean_ctor_get(v___x_872_, 0);
lean_inc(v_fst_873_);
v_snd_874_ = lean_ctor_get(v___x_872_, 1);
lean_inc(v_snd_874_);
lean_dec_ref(v___x_872_);
v___x_875_ = l_Lean_Widget_TaggedText_mapM___at___00Lean_Widget_instRpcEncodableMsgEmbed_enc_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__spec__0___redArg(v_f_831_, v_a_868_, v_snd_874_);
v_fst_876_ = lean_ctor_get(v___x_875_, 0);
v_snd_877_ = lean_ctor_get(v___x_875_, 1);
v_isSharedCheck_887_ = !lean_is_exclusive(v___x_875_);
if (v_isSharedCheck_887_ == 0)
{
v___x_879_ = v___x_875_;
v_isShared_880_ = v_isSharedCheck_887_;
goto v_resetjp_878_;
}
else
{
lean_inc(v_snd_877_);
lean_inc(v_fst_876_);
lean_dec(v___x_875_);
v___x_879_ = lean_box(0);
v_isShared_880_ = v_isSharedCheck_887_;
goto v_resetjp_878_;
}
v_resetjp_878_:
{
lean_object* v___x_882_; 
if (v_isShared_871_ == 0)
{
lean_ctor_set(v___x_870_, 1, v_fst_876_);
lean_ctor_set(v___x_870_, 0, v_fst_873_);
v___x_882_ = v___x_870_;
goto v_reusejp_881_;
}
else
{
lean_object* v_reuseFailAlloc_886_; 
v_reuseFailAlloc_886_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_886_, 0, v_fst_873_);
lean_ctor_set(v_reuseFailAlloc_886_, 1, v_fst_876_);
v___x_882_ = v_reuseFailAlloc_886_;
goto v_reusejp_881_;
}
v_reusejp_881_:
{
lean_object* v___x_884_; 
if (v_isShared_880_ == 0)
{
lean_ctor_set(v___x_879_, 0, v___x_882_);
v___x_884_ = v___x_879_;
goto v_reusejp_883_;
}
else
{
lean_object* v_reuseFailAlloc_885_; 
v_reuseFailAlloc_885_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_885_, 0, v___x_882_);
lean_ctor_set(v_reuseFailAlloc_885_, 1, v_snd_877_);
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
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_TaggedText_mapM___at___00Lean_Widget_instRpcEncodableMsgEmbed_enc_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__spec__0_spec__0___redArg(lean_object* v_f_889_, size_t v_sz_890_, size_t v_i_891_, lean_object* v_bs_892_, lean_object* v___y_893_){
_start:
{
uint8_t v___x_894_; 
v___x_894_ = lean_usize_dec_lt(v_i_891_, v_sz_890_);
if (v___x_894_ == 0)
{
lean_object* v___x_895_; lean_object* v___x_896_; 
lean_dec_ref(v_f_889_);
v___x_895_ = l_unsafeCast___redArg(v_bs_892_);
lean_dec_ref(v_bs_892_);
v___x_896_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_896_, 0, v___x_895_);
lean_ctor_set(v___x_896_, 1, v___y_893_);
return v___x_896_;
}
else
{
lean_object* v_v_897_; lean_object* v___x_898_; lean_object* v___x_899_; lean_object* v_fst_900_; lean_object* v_snd_901_; lean_object* v___x_902_; lean_object* v_bs_x27_903_; size_t v___x_904_; size_t v___x_905_; lean_object* v___x_906_; lean_object* v___x_907_; 
v_v_897_ = lean_array_uget_borrowed(v_bs_892_, v_i_891_);
v___x_898_ = l_unsafeCast___redArg(v_v_897_);
lean_inc_ref(v_f_889_);
v___x_899_ = l_Lean_Widget_TaggedText_mapM___at___00Lean_Widget_instRpcEncodableMsgEmbed_enc_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__spec__0___redArg(v_f_889_, v___x_898_, v___y_893_);
v_fst_900_ = lean_ctor_get(v___x_899_, 0);
lean_inc(v_fst_900_);
v_snd_901_ = lean_ctor_get(v___x_899_, 1);
lean_inc(v_snd_901_);
lean_dec_ref(v___x_899_);
v___x_902_ = lean_unsigned_to_nat(0u);
v_bs_x27_903_ = lean_array_uset(v_bs_892_, v_i_891_, v___x_902_);
v___x_904_ = ((size_t)1ULL);
v___x_905_ = lean_usize_add(v_i_891_, v___x_904_);
v___x_906_ = l_unsafeCast___redArg(v_fst_900_);
lean_dec(v_fst_900_);
v___x_907_ = lean_array_uset(v_bs_x27_903_, v_i_891_, v___x_906_);
v_i_891_ = v___x_905_;
v_bs_892_ = v___x_907_;
v___y_893_ = v_snd_901_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_TaggedText_mapM___at___00Lean_Widget_instRpcEncodableMsgEmbed_enc_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__spec__0_spec__0(lean_object* v_00_u03b1_909_, lean_object* v_00_u03b2_910_, lean_object* v_f_911_, size_t v_sz_912_, size_t v_i_913_, lean_object* v_bs_914_, lean_object* v___y_915_){
_start:
{
lean_object* v___x_916_; 
v___x_916_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_TaggedText_mapM___at___00Lean_Widget_instRpcEncodableMsgEmbed_enc_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__spec__0_spec__0___redArg(v_f_911_, v_sz_912_, v_i_913_, v_bs_914_, v___y_915_);
return v___x_916_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_TaggedText_mapM___at___00Lean_Widget_instRpcEncodableMsgEmbed_enc_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__spec__0_spec__0___redArg___boxed(lean_object* v_f_917_, lean_object* v_sz_918_, lean_object* v_i_919_, lean_object* v_bs_920_, lean_object* v___y_921_){
_start:
{
size_t v_sz_boxed_922_; size_t v_i_boxed_923_; lean_object* v_res_924_; 
v_sz_boxed_922_ = lean_unbox_usize(v_sz_918_);
lean_dec(v_sz_918_);
v_i_boxed_923_ = lean_unbox_usize(v_i_919_);
lean_dec(v_i_919_);
v_res_924_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_TaggedText_mapM___at___00Lean_Widget_instRpcEncodableMsgEmbed_enc_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__spec__0_spec__0___redArg(v_f_917_, v_sz_boxed_922_, v_i_boxed_923_, v_bs_920_, v___y_921_);
return v_res_924_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_instRpcEncodableStrictOrLazy_enc_00___x40_Lean_Widget_InteractiveDiagnostic_2157017296____hygCtx___hyg_1____at___00Lean_Widget_instRpcEncodableMsgEmbed_enc_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__spec__2_spec__4___boxed(lean_object* v_sz_926_, lean_object* v_i_927_, lean_object* v_bs_928_, lean_object* v___y_929_){
_start:
{
size_t v_sz_boxed_930_; size_t v_i_boxed_931_; lean_object* v_res_932_; 
v_sz_boxed_930_ = lean_unbox_usize(v_sz_926_);
lean_dec(v_sz_926_);
v_i_boxed_931_ = lean_unbox_usize(v_i_927_);
lean_dec(v_i_927_);
v_res_932_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_instRpcEncodableStrictOrLazy_enc_00___x40_Lean_Widget_InteractiveDiagnostic_2157017296____hygCtx___hyg_1____at___00Lean_Widget_instRpcEncodableMsgEmbed_enc_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__spec__2_spec__4(v_sz_boxed_930_, v_i_boxed_931_, v_bs_928_, v___y_929_);
return v_res_932_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_instRpcEncodableStrictOrLazy_enc_00___x40_Lean_Widget_InteractiveDiagnostic_2157017296____hygCtx___hyg_1____at___00Lean_Widget_instRpcEncodableMsgEmbed_enc_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__spec__2(lean_object* v_x_933_, lean_object* v_a_934_){
_start:
{
if (lean_obj_tag(v_x_933_) == 0)
{
lean_object* v_a_935_; lean_object* v___x_937_; uint8_t v_isShared_938_; uint8_t v_isSharedCheck_960_; 
v_a_935_ = lean_ctor_get(v_x_933_, 0);
v_isSharedCheck_960_ = !lean_is_exclusive(v_x_933_);
if (v_isSharedCheck_960_ == 0)
{
v___x_937_ = v_x_933_;
v_isShared_938_ = v_isSharedCheck_960_;
goto v_resetjp_936_;
}
else
{
lean_inc(v_a_935_);
lean_dec(v_x_933_);
v___x_937_ = lean_box(0);
v_isShared_938_ = v_isSharedCheck_960_;
goto v_resetjp_936_;
}
v_resetjp_936_:
{
size_t v_sz_939_; lean_object* v___x_940_; lean_object* v___x_941_; lean_object* v___x_942_; lean_object* v___x_943_; lean_object* v___x_10918__overap_944_; lean_object* v___x_945_; lean_object* v_fst_946_; lean_object* v_snd_947_; lean_object* v___x_949_; uint8_t v_isShared_950_; uint8_t v_isSharedCheck_959_; 
v_sz_939_ = lean_array_size(v_a_935_);
v___x_940_ = l_unsafeCast___redArg(v_a_935_);
lean_dec(v_a_935_);
v___x_941_ = lean_box_usize(v_sz_939_);
v___x_942_ = ((lean_object*)(l_Lean_Widget_TaggedText_mapM___at___00Lean_Widget_instRpcEncodableMsgEmbed_enc_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__spec__0___redArg___boxed__const__1));
v___x_943_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_instRpcEncodableStrictOrLazy_enc_00___x40_Lean_Widget_InteractiveDiagnostic_2157017296____hygCtx___hyg_1____at___00Lean_Widget_instRpcEncodableMsgEmbed_enc_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__spec__2_spec__4___boxed), 4, 3);
lean_closure_set(v___x_943_, 0, v___x_941_);
lean_closure_set(v___x_943_, 1, v___x_942_);
lean_closure_set(v___x_943_, 2, v___x_940_);
v___x_10918__overap_944_ = l_unsafeCast___redArg(v___x_943_);
lean_dec_ref(v___x_943_);
v___x_945_ = lean_apply_1(v___x_10918__overap_944_, v_a_934_);
v_fst_946_ = lean_ctor_get(v___x_945_, 0);
v_snd_947_ = lean_ctor_get(v___x_945_, 1);
v_isSharedCheck_959_ = !lean_is_exclusive(v___x_945_);
if (v_isSharedCheck_959_ == 0)
{
v___x_949_ = v___x_945_;
v_isShared_950_ = v_isSharedCheck_959_;
goto v_resetjp_948_;
}
else
{
lean_inc(v_snd_947_);
lean_inc(v_fst_946_);
lean_dec(v___x_945_);
v___x_949_ = lean_box(0);
v_isShared_950_ = v_isSharedCheck_959_;
goto v_resetjp_948_;
}
v_resetjp_948_:
{
lean_object* v___x_951_; lean_object* v___x_953_; 
v___x_951_ = l_Lean_Array_toJson___at___00Lean_Widget_instRpcEncodableStrictOrLazy_enc_00___x40_Lean_Widget_InteractiveDiagnostic_2157017296____hygCtx___hyg_1____at___00Lean_Widget_instRpcEncodableMsgEmbed_enc_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__spec__2_spec__5(v_fst_946_);
lean_dec(v_fst_946_);
if (v_isShared_938_ == 0)
{
lean_ctor_set(v___x_937_, 0, v___x_951_);
v___x_953_ = v___x_937_;
goto v_reusejp_952_;
}
else
{
lean_object* v_reuseFailAlloc_958_; 
v_reuseFailAlloc_958_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_958_, 0, v___x_951_);
v___x_953_ = v_reuseFailAlloc_958_;
goto v_reusejp_952_;
}
v_reusejp_952_:
{
lean_object* v___x_954_; lean_object* v___x_956_; 
v___x_954_ = l_Lean_Widget_instToJsonRpcEncodablePacket_toJson_00___x40_Lean_Widget_InteractiveDiagnostic_29703178____hygCtx___hyg_38_(v___x_953_);
lean_dec_ref(v___x_953_);
if (v_isShared_950_ == 0)
{
lean_ctor_set(v___x_949_, 0, v___x_954_);
v___x_956_ = v___x_949_;
goto v_reusejp_955_;
}
else
{
lean_object* v_reuseFailAlloc_957_; 
v_reuseFailAlloc_957_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_957_, 0, v___x_954_);
lean_ctor_set(v_reuseFailAlloc_957_, 1, v_snd_947_);
v___x_956_ = v_reuseFailAlloc_957_;
goto v_reusejp_955_;
}
v_reusejp_955_:
{
return v___x_956_;
}
}
}
}
}
else
{
lean_object* v_a_961_; lean_object* v___x_963_; uint8_t v_isShared_964_; uint8_t v_isSharedCheck_980_; 
v_a_961_ = lean_ctor_get(v_x_933_, 0);
v_isSharedCheck_980_ = !lean_is_exclusive(v_x_933_);
if (v_isSharedCheck_980_ == 0)
{
v___x_963_ = v_x_933_;
v_isShared_964_ = v_isSharedCheck_980_;
goto v_resetjp_962_;
}
else
{
lean_inc(v_a_961_);
lean_dec(v_x_933_);
v___x_963_ = lean_box(0);
v_isShared_964_ = v_isSharedCheck_980_;
goto v_resetjp_962_;
}
v_resetjp_962_:
{
lean_object* v___x_965_; lean_object* v___x_966_; lean_object* v_fst_967_; lean_object* v_snd_968_; lean_object* v___x_970_; uint8_t v_isShared_971_; uint8_t v_isSharedCheck_979_; 
v___x_965_ = l_Lean_Widget_instImpl_00___x40_Lean_Widget_InteractiveDiagnostic_72002168____hygCtx___hyg_14_;
v___x_966_ = l_Lean_Server_instRpcEncodableWithRpcRefOfTypeName_rpcEncode___redArg(v___x_965_, v_a_961_, v_a_934_);
lean_dec(v_a_961_);
v_fst_967_ = lean_ctor_get(v___x_966_, 0);
v_snd_968_ = lean_ctor_get(v___x_966_, 1);
v_isSharedCheck_979_ = !lean_is_exclusive(v___x_966_);
if (v_isSharedCheck_979_ == 0)
{
v___x_970_ = v___x_966_;
v_isShared_971_ = v_isSharedCheck_979_;
goto v_resetjp_969_;
}
else
{
lean_inc(v_snd_968_);
lean_inc(v_fst_967_);
lean_dec(v___x_966_);
v___x_970_ = lean_box(0);
v_isShared_971_ = v_isSharedCheck_979_;
goto v_resetjp_969_;
}
v_resetjp_969_:
{
lean_object* v___x_973_; 
if (v_isShared_964_ == 0)
{
lean_ctor_set(v___x_963_, 0, v_fst_967_);
v___x_973_ = v___x_963_;
goto v_reusejp_972_;
}
else
{
lean_object* v_reuseFailAlloc_978_; 
v_reuseFailAlloc_978_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_978_, 0, v_fst_967_);
v___x_973_ = v_reuseFailAlloc_978_;
goto v_reusejp_972_;
}
v_reusejp_972_:
{
lean_object* v___x_974_; lean_object* v___x_976_; 
v___x_974_ = l_Lean_Widget_instToJsonRpcEncodablePacket_toJson_00___x40_Lean_Widget_InteractiveDiagnostic_29703178____hygCtx___hyg_38_(v___x_973_);
lean_dec_ref(v___x_973_);
if (v_isShared_971_ == 0)
{
lean_ctor_set(v___x_970_, 0, v___x_974_);
v___x_976_ = v___x_970_;
goto v_reusejp_975_;
}
else
{
lean_object* v_reuseFailAlloc_977_; 
v_reuseFailAlloc_977_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_977_, 0, v___x_974_);
lean_ctor_set(v_reuseFailAlloc_977_, 1, v_snd_968_);
v___x_976_ = v_reuseFailAlloc_977_;
goto v_reusejp_975_;
}
v_reusejp_975_:
{
return v___x_976_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_instRpcEncodableMsgEmbed_enc_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1_(lean_object* v_x_981_, lean_object* v_a_982_){
_start:
{
lean_object* v___x_983_; 
v___x_983_ = lean_alloc_closure((void*)(l_Lean_Widget_instRpcEncodableMsgEmbed_enc_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1_), 2, 0);
switch(lean_obj_tag(v_x_981_))
{
case 0:
{
lean_object* v_a_984_; lean_object* v___x_986_; uint8_t v_isShared_987_; uint8_t v_isSharedCheck_1004_; 
lean_dec_ref(v___x_983_);
v_a_984_ = lean_ctor_get(v_x_981_, 0);
v_isSharedCheck_1004_ = !lean_is_exclusive(v_x_981_);
if (v_isSharedCheck_1004_ == 0)
{
v___x_986_ = v_x_981_;
v_isShared_987_ = v_isSharedCheck_1004_;
goto v_resetjp_985_;
}
else
{
lean_inc(v_a_984_);
lean_dec(v_x_981_);
v___x_986_ = lean_box(0);
v_isShared_987_ = v_isSharedCheck_1004_;
goto v_resetjp_985_;
}
v_resetjp_985_:
{
lean_object* v___x_988_; lean_object* v___x_989_; lean_object* v_fst_990_; lean_object* v_snd_991_; lean_object* v___x_993_; uint8_t v_isShared_994_; uint8_t v_isSharedCheck_1003_; 
v___x_988_ = ((lean_object*)(l_Lean_Widget_instRpcEncodableMsgEmbed_enc___closed__0_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1_));
v___x_989_ = l_Lean_Widget_TaggedText_mapM___at___00Lean_Widget_instRpcEncodableMsgEmbed_enc_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__spec__0___redArg(v___x_988_, v_a_984_, v_a_982_);
v_fst_990_ = lean_ctor_get(v___x_989_, 0);
v_snd_991_ = lean_ctor_get(v___x_989_, 1);
v_isSharedCheck_1003_ = !lean_is_exclusive(v___x_989_);
if (v_isSharedCheck_1003_ == 0)
{
v___x_993_ = v___x_989_;
v_isShared_994_ = v_isSharedCheck_1003_;
goto v_resetjp_992_;
}
else
{
lean_inc(v_snd_991_);
lean_inc(v_fst_990_);
lean_dec(v___x_989_);
v___x_993_ = lean_box(0);
v_isShared_994_ = v_isSharedCheck_1003_;
goto v_resetjp_992_;
}
v_resetjp_992_:
{
lean_object* v___x_995_; lean_object* v___x_997_; 
v___x_995_ = l_Lean_Widget_instToJsonTaggedText_toJson___at___00Lean_Widget_instRpcEncodableMsgEmbed_enc_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__spec__1(v_fst_990_);
if (v_isShared_987_ == 0)
{
lean_ctor_set(v___x_986_, 0, v___x_995_);
v___x_997_ = v___x_986_;
goto v_reusejp_996_;
}
else
{
lean_object* v_reuseFailAlloc_1002_; 
v_reuseFailAlloc_1002_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1002_, 0, v___x_995_);
v___x_997_ = v_reuseFailAlloc_1002_;
goto v_reusejp_996_;
}
v_reusejp_996_:
{
lean_object* v___x_998_; lean_object* v___x_1000_; 
v___x_998_ = l_Lean_Widget_instToJsonRpcEncodablePacket_toJson_00___x40_Lean_Widget_InteractiveDiagnostic_2315129857____hygCtx___hyg_65_(v___x_997_);
if (v_isShared_994_ == 0)
{
lean_ctor_set(v___x_993_, 0, v___x_998_);
v___x_1000_ = v___x_993_;
goto v_reusejp_999_;
}
else
{
lean_object* v_reuseFailAlloc_1001_; 
v_reuseFailAlloc_1001_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1001_, 0, v___x_998_);
lean_ctor_set(v_reuseFailAlloc_1001_, 1, v_snd_991_);
v___x_1000_ = v_reuseFailAlloc_1001_;
goto v_reusejp_999_;
}
v_reusejp_999_:
{
return v___x_1000_;
}
}
}
}
}
case 1:
{
lean_object* v_a_1005_; lean_object* v___x_1007_; uint8_t v_isShared_1008_; uint8_t v_isSharedCheck_1023_; 
lean_dec_ref(v___x_983_);
v_a_1005_ = lean_ctor_get(v_x_981_, 0);
v_isSharedCheck_1023_ = !lean_is_exclusive(v_x_981_);
if (v_isSharedCheck_1023_ == 0)
{
v___x_1007_ = v_x_981_;
v_isShared_1008_ = v_isSharedCheck_1023_;
goto v_resetjp_1006_;
}
else
{
lean_inc(v_a_1005_);
lean_dec(v_x_981_);
v___x_1007_ = lean_box(0);
v_isShared_1008_ = v_isSharedCheck_1023_;
goto v_resetjp_1006_;
}
v_resetjp_1006_:
{
lean_object* v___x_1009_; lean_object* v_fst_1010_; lean_object* v_snd_1011_; lean_object* v___x_1013_; uint8_t v_isShared_1014_; uint8_t v_isSharedCheck_1022_; 
v___x_1009_ = l_Lean_Widget_instRpcEncodableInteractiveGoal_enc_00___x40_Lean_Widget_InteractiveGoal_3114798910____hygCtx___hyg_1_(v_a_1005_, v_a_982_);
v_fst_1010_ = lean_ctor_get(v___x_1009_, 0);
v_snd_1011_ = lean_ctor_get(v___x_1009_, 1);
v_isSharedCheck_1022_ = !lean_is_exclusive(v___x_1009_);
if (v_isSharedCheck_1022_ == 0)
{
v___x_1013_ = v___x_1009_;
v_isShared_1014_ = v_isSharedCheck_1022_;
goto v_resetjp_1012_;
}
else
{
lean_inc(v_snd_1011_);
lean_inc(v_fst_1010_);
lean_dec(v___x_1009_);
v___x_1013_ = lean_box(0);
v_isShared_1014_ = v_isSharedCheck_1022_;
goto v_resetjp_1012_;
}
v_resetjp_1012_:
{
lean_object* v___x_1016_; 
if (v_isShared_1008_ == 0)
{
lean_ctor_set(v___x_1007_, 0, v_fst_1010_);
v___x_1016_ = v___x_1007_;
goto v_reusejp_1015_;
}
else
{
lean_object* v_reuseFailAlloc_1021_; 
v_reuseFailAlloc_1021_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1021_, 0, v_fst_1010_);
v___x_1016_ = v_reuseFailAlloc_1021_;
goto v_reusejp_1015_;
}
v_reusejp_1015_:
{
lean_object* v___x_1017_; lean_object* v___x_1019_; 
v___x_1017_ = l_Lean_Widget_instToJsonRpcEncodablePacket_toJson_00___x40_Lean_Widget_InteractiveDiagnostic_2315129857____hygCtx___hyg_65_(v___x_1016_);
if (v_isShared_1014_ == 0)
{
lean_ctor_set(v___x_1013_, 0, v___x_1017_);
v___x_1019_ = v___x_1013_;
goto v_reusejp_1018_;
}
else
{
lean_object* v_reuseFailAlloc_1020_; 
v_reuseFailAlloc_1020_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1020_, 0, v___x_1017_);
lean_ctor_set(v_reuseFailAlloc_1020_, 1, v_snd_1011_);
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
case 2:
{
lean_object* v_wi_1024_; lean_object* v_alt_1025_; lean_object* v___x_1026_; lean_object* v_fst_1027_; lean_object* v_snd_1028_; lean_object* v___x_1030_; uint8_t v_isShared_1031_; uint8_t v_isSharedCheck_1047_; 
v_wi_1024_ = lean_ctor_get(v_x_981_, 0);
lean_inc_ref(v_wi_1024_);
v_alt_1025_ = lean_ctor_get(v_x_981_, 1);
lean_inc_ref(v_alt_1025_);
lean_dec_ref_known(v_x_981_, 2);
v___x_1026_ = l_Lean_Widget_instRpcEncodableWidgetInstance_enc_00___x40_Lean_Widget_Types_2243429567____hygCtx___hyg_1_(v_wi_1024_, v_a_982_);
v_fst_1027_ = lean_ctor_get(v___x_1026_, 0);
v_snd_1028_ = lean_ctor_get(v___x_1026_, 1);
v_isSharedCheck_1047_ = !lean_is_exclusive(v___x_1026_);
if (v_isSharedCheck_1047_ == 0)
{
v___x_1030_ = v___x_1026_;
v_isShared_1031_ = v_isSharedCheck_1047_;
goto v_resetjp_1029_;
}
else
{
lean_inc(v_snd_1028_);
lean_inc(v_fst_1027_);
lean_dec(v___x_1026_);
v___x_1030_ = lean_box(0);
v_isShared_1031_ = v_isSharedCheck_1047_;
goto v_resetjp_1029_;
}
v_resetjp_1029_:
{
lean_object* v___x_1032_; lean_object* v_fst_1033_; lean_object* v_snd_1034_; lean_object* v___x_1036_; uint8_t v_isShared_1037_; uint8_t v_isSharedCheck_1046_; 
v___x_1032_ = l_Lean_Widget_TaggedText_mapM___at___00Lean_Widget_instRpcEncodableMsgEmbed_enc_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__spec__0___redArg(v___x_983_, v_alt_1025_, v_snd_1028_);
v_fst_1033_ = lean_ctor_get(v___x_1032_, 0);
v_snd_1034_ = lean_ctor_get(v___x_1032_, 1);
v_isSharedCheck_1046_ = !lean_is_exclusive(v___x_1032_);
if (v_isSharedCheck_1046_ == 0)
{
v___x_1036_ = v___x_1032_;
v_isShared_1037_ = v_isSharedCheck_1046_;
goto v_resetjp_1035_;
}
else
{
lean_inc(v_snd_1034_);
lean_inc(v_fst_1033_);
lean_dec(v___x_1032_);
v___x_1036_ = lean_box(0);
v_isShared_1037_ = v_isSharedCheck_1046_;
goto v_resetjp_1035_;
}
v_resetjp_1035_:
{
lean_object* v___x_1038_; lean_object* v___x_1040_; 
v___x_1038_ = l_Lean_Widget_instToJsonTaggedText_toJson___at___00Lean_Widget_instRpcEncodableMsgEmbed_enc_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__spec__1(v_fst_1033_);
if (v_isShared_1031_ == 0)
{
lean_ctor_set_tag(v___x_1030_, 2);
lean_ctor_set(v___x_1030_, 1, v___x_1038_);
v___x_1040_ = v___x_1030_;
goto v_reusejp_1039_;
}
else
{
lean_object* v_reuseFailAlloc_1045_; 
v_reuseFailAlloc_1045_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1045_, 0, v_fst_1027_);
lean_ctor_set(v_reuseFailAlloc_1045_, 1, v___x_1038_);
v___x_1040_ = v_reuseFailAlloc_1045_;
goto v_reusejp_1039_;
}
v_reusejp_1039_:
{
lean_object* v___x_1041_; lean_object* v___x_1043_; 
v___x_1041_ = l_Lean_Widget_instToJsonRpcEncodablePacket_toJson_00___x40_Lean_Widget_InteractiveDiagnostic_2315129857____hygCtx___hyg_65_(v___x_1040_);
if (v_isShared_1037_ == 0)
{
lean_ctor_set(v___x_1036_, 0, v___x_1041_);
v___x_1043_ = v___x_1036_;
goto v_reusejp_1042_;
}
else
{
lean_object* v_reuseFailAlloc_1044_; 
v_reuseFailAlloc_1044_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1044_, 0, v___x_1041_);
lean_ctor_set(v_reuseFailAlloc_1044_, 1, v_snd_1034_);
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
}
default: 
{
lean_object* v_indent_1048_; lean_object* v_cls_1049_; lean_object* v_msg_1050_; uint8_t v_collapsed_1051_; lean_object* v_children_1052_; lean_object* v___x_1053_; lean_object* v_fst_1054_; lean_object* v_snd_1055_; lean_object* v___x_1056_; lean_object* v_fst_1057_; lean_object* v_snd_1058_; lean_object* v___x_1060_; uint8_t v_isShared_1061_; uint8_t v_isSharedCheck_1074_; 
v_indent_1048_ = lean_ctor_get(v_x_981_, 0);
lean_inc(v_indent_1048_);
v_cls_1049_ = lean_ctor_get(v_x_981_, 1);
lean_inc(v_cls_1049_);
v_msg_1050_ = lean_ctor_get(v_x_981_, 2);
lean_inc_ref(v_msg_1050_);
v_collapsed_1051_ = lean_ctor_get_uint8(v_x_981_, sizeof(void*)*4);
v_children_1052_ = lean_ctor_get(v_x_981_, 3);
lean_inc_ref(v_children_1052_);
lean_dec_ref_known(v_x_981_, 4);
v___x_1053_ = l_Lean_Widget_TaggedText_mapM___at___00Lean_Widget_instRpcEncodableMsgEmbed_enc_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__spec__0___redArg(v___x_983_, v_msg_1050_, v_a_982_);
v_fst_1054_ = lean_ctor_get(v___x_1053_, 0);
lean_inc(v_fst_1054_);
v_snd_1055_ = lean_ctor_get(v___x_1053_, 1);
lean_inc(v_snd_1055_);
lean_dec_ref(v___x_1053_);
v___x_1056_ = l_Lean_Widget_instRpcEncodableStrictOrLazy_enc_00___x40_Lean_Widget_InteractiveDiagnostic_2157017296____hygCtx___hyg_1____at___00Lean_Widget_instRpcEncodableMsgEmbed_enc_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__spec__2(v_children_1052_, v_snd_1055_);
v_fst_1057_ = lean_ctor_get(v___x_1056_, 0);
v_snd_1058_ = lean_ctor_get(v___x_1056_, 1);
v_isSharedCheck_1074_ = !lean_is_exclusive(v___x_1056_);
if (v_isSharedCheck_1074_ == 0)
{
v___x_1060_ = v___x_1056_;
v_isShared_1061_ = v_isSharedCheck_1074_;
goto v_resetjp_1059_;
}
else
{
lean_inc(v_snd_1058_);
lean_inc(v_fst_1057_);
lean_dec(v___x_1056_);
v___x_1060_ = lean_box(0);
v_isShared_1061_ = v_isSharedCheck_1074_;
goto v_resetjp_1059_;
}
v_resetjp_1059_:
{
lean_object* v___x_1062_; lean_object* v___x_1063_; uint8_t v___x_1064_; lean_object* v___x_1065_; lean_object* v___x_1066_; lean_object* v___x_1067_; lean_object* v___x_1068_; lean_object* v___x_1069_; lean_object* v___x_1070_; lean_object* v___x_1072_; 
v___x_1062_ = l_Lean_JsonNumber_fromNat(v_indent_1048_);
v___x_1063_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_1063_, 0, v___x_1062_);
v___x_1064_ = 1;
v___x_1065_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_cls_1049_, v___x_1064_);
v___x_1066_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1066_, 0, v___x_1065_);
v___x_1067_ = l_Lean_Widget_instToJsonTaggedText_toJson___at___00Lean_Widget_instRpcEncodableMsgEmbed_enc_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__spec__1(v_fst_1054_);
v___x_1068_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_1068_, 0, v_collapsed_1051_);
v___x_1069_ = lean_alloc_ctor(3, 5, 0);
lean_ctor_set(v___x_1069_, 0, v___x_1063_);
lean_ctor_set(v___x_1069_, 1, v___x_1066_);
lean_ctor_set(v___x_1069_, 2, v___x_1067_);
lean_ctor_set(v___x_1069_, 3, v___x_1068_);
lean_ctor_set(v___x_1069_, 4, v_fst_1057_);
v___x_1070_ = l_Lean_Widget_instToJsonRpcEncodablePacket_toJson_00___x40_Lean_Widget_InteractiveDiagnostic_2315129857____hygCtx___hyg_65_(v___x_1069_);
if (v_isShared_1061_ == 0)
{
lean_ctor_set(v___x_1060_, 0, v___x_1070_);
v___x_1072_ = v___x_1060_;
goto v_reusejp_1071_;
}
else
{
lean_object* v_reuseFailAlloc_1073_; 
v_reuseFailAlloc_1073_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1073_, 0, v___x_1070_);
lean_ctor_set(v_reuseFailAlloc_1073_, 1, v_snd_1058_);
v___x_1072_ = v_reuseFailAlloc_1073_;
goto v_reusejp_1071_;
}
v_reusejp_1071_:
{
return v___x_1072_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_instRpcEncodableStrictOrLazy_enc_00___x40_Lean_Widget_InteractiveDiagnostic_2157017296____hygCtx___hyg_1____at___00Lean_Widget_instRpcEncodableMsgEmbed_enc_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__spec__2_spec__4(size_t v_sz_1075_, size_t v_i_1076_, lean_object* v_bs_1077_, lean_object* v___y_1078_){
_start:
{
uint8_t v___x_1079_; 
v___x_1079_ = lean_usize_dec_lt(v_i_1076_, v_sz_1075_);
if (v___x_1079_ == 0)
{
lean_object* v___x_1080_; lean_object* v___x_1081_; 
v___x_1080_ = l_unsafeCast___redArg(v_bs_1077_);
lean_dec_ref(v_bs_1077_);
v___x_1081_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1081_, 0, v___x_1080_);
lean_ctor_set(v___x_1081_, 1, v___y_1078_);
return v___x_1081_;
}
else
{
lean_object* v___x_1082_; lean_object* v_v_1083_; lean_object* v___x_1084_; lean_object* v___x_1085_; lean_object* v_fst_1086_; lean_object* v_snd_1087_; lean_object* v___x_1088_; lean_object* v_bs_x27_1089_; lean_object* v___x_1090_; size_t v___x_1091_; size_t v___x_1092_; lean_object* v___x_1093_; lean_object* v___x_1094_; 
v___x_1082_ = lean_alloc_closure((void*)(l_Lean_Widget_instRpcEncodableMsgEmbed_enc_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1_), 2, 0);
v_v_1083_ = lean_array_uget_borrowed(v_bs_1077_, v_i_1076_);
v___x_1084_ = l_unsafeCast___redArg(v_v_1083_);
v___x_1085_ = l_Lean_Widget_TaggedText_mapM___at___00Lean_Widget_instRpcEncodableMsgEmbed_enc_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__spec__0___redArg(v___x_1082_, v___x_1084_, v___y_1078_);
v_fst_1086_ = lean_ctor_get(v___x_1085_, 0);
lean_inc(v_fst_1086_);
v_snd_1087_ = lean_ctor_get(v___x_1085_, 1);
lean_inc(v_snd_1087_);
lean_dec_ref(v___x_1085_);
v___x_1088_ = lean_unsigned_to_nat(0u);
v_bs_x27_1089_ = lean_array_uset(v_bs_1077_, v_i_1076_, v___x_1088_);
v___x_1090_ = l_Lean_Widget_instToJsonTaggedText_toJson___at___00Lean_Widget_instRpcEncodableMsgEmbed_enc_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__spec__1(v_fst_1086_);
v___x_1091_ = ((size_t)1ULL);
v___x_1092_ = lean_usize_add(v_i_1076_, v___x_1091_);
v___x_1093_ = l_unsafeCast___redArg(v___x_1090_);
lean_dec(v___x_1090_);
v___x_1094_ = lean_array_uset(v_bs_x27_1089_, v_i_1076_, v___x_1093_);
v_i_1076_ = v___x_1092_;
v_bs_1077_ = v___x_1094_;
v___y_1078_ = v_snd_1087_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00Lean_Widget_instRpcEncodableMsgEmbed_dec_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__spec__6___redArg(lean_object* v_x_1096_){
_start:
{
lean_inc_ref(v_x_1096_);
return v_x_1096_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00Lean_Widget_instRpcEncodableMsgEmbed_dec_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__spec__6___redArg___boxed(lean_object* v_x_1097_){
_start:
{
lean_object* v_res_1098_; 
v_res_1098_ = l_MonadExcept_ofExcept___at___00Lean_Widget_instRpcEncodableMsgEmbed_dec_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__spec__6___redArg(v_x_1097_);
lean_dec_ref(v_x_1097_);
return v_res_1098_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00Lean_Widget_instRpcEncodableMsgEmbed_dec_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__spec__6(lean_object* v_00_u03b1_1099_, lean_object* v_x_1100_, lean_object* v___y_1101_){
_start:
{
lean_inc_ref(v_x_1100_);
return v_x_1100_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00Lean_Widget_instRpcEncodableMsgEmbed_dec_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__spec__6___boxed(lean_object* v_00_u03b1_1102_, lean_object* v_x_1103_, lean_object* v___y_1104_){
_start:
{
lean_object* v_res_1105_; 
v_res_1105_ = l_MonadExcept_ofExcept___at___00Lean_Widget_instRpcEncodableMsgEmbed_dec_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__spec__6(v_00_u03b1_1102_, v_x_1103_, v___y_1104_);
lean_dec_ref(v___y_1104_);
lean_dec_ref(v_x_1103_);
return v_res_1105_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_instFromJsonTaggedText_fromJson___at___00Lean_Widget_instRpcEncodableMsgEmbed_dec_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__spec__4(lean_object* v_json_1112_){
_start:
{
lean_object* v___x_1113_; 
lean_inc(v_json_1112_);
v___x_1113_ = l_Lean_Json_getTag_x3f(v_json_1112_);
if (lean_obj_tag(v___x_1113_) == 0)
{
lean_object* v___x_1114_; 
lean_dec(v_json_1112_);
v___x_1114_ = ((lean_object*)(l_Lean_Widget_instFromJsonTaggedText_fromJson___at___00Lean_Widget_instRpcEncodableMsgEmbed_dec_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__spec__4___closed__0));
return v___x_1114_;
}
else
{
lean_object* v_val_1115_; lean_object* v___x_1117_; uint8_t v_isShared_1118_; uint8_t v_isSharedCheck_1221_; 
v_val_1115_ = lean_ctor_get(v___x_1113_, 0);
v_isSharedCheck_1221_ = !lean_is_exclusive(v___x_1113_);
if (v_isSharedCheck_1221_ == 0)
{
v___x_1117_ = v___x_1113_;
v_isShared_1118_ = v_isSharedCheck_1221_;
goto v_resetjp_1116_;
}
else
{
lean_inc(v_val_1115_);
lean_dec(v___x_1113_);
v___x_1117_ = lean_box(0);
v_isShared_1118_ = v_isSharedCheck_1221_;
goto v_resetjp_1116_;
}
v_resetjp_1116_:
{
lean_object* v___x_1119_; lean_object* v___x_1120_; uint8_t v___x_1121_; 
v___x_1119_ = lean_box(0);
v___x_1120_ = ((lean_object*)(l_Lean_Widget_instToJsonTaggedText_toJson___at___00Lean_Widget_instRpcEncodableMsgEmbed_enc_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__spec__1___closed__1));
v___x_1121_ = lean_string_dec_eq(v_val_1115_, v___x_1120_);
if (v___x_1121_ == 0)
{
lean_object* v___x_1122_; uint8_t v___x_1123_; 
v___x_1122_ = ((lean_object*)(l_Lean_Widget_instToJsonTaggedText_toJson___at___00Lean_Widget_instRpcEncodableMsgEmbed_enc_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__spec__1___closed__0));
v___x_1123_ = lean_string_dec_eq(v_val_1115_, v___x_1122_);
if (v___x_1123_ == 0)
{
lean_object* v___x_1124_; uint8_t v___x_1125_; 
lean_del_object(v___x_1117_);
v___x_1124_ = ((lean_object*)(l_Lean_Widget_instToJsonTaggedText_toJson___at___00Lean_Widget_instRpcEncodableMsgEmbed_enc_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__spec__1___closed__2));
v___x_1125_ = lean_string_dec_eq(v_val_1115_, v___x_1124_);
lean_dec(v_val_1115_);
if (v___x_1125_ == 0)
{
lean_object* v___x_1126_; 
lean_dec(v_json_1112_);
v___x_1126_ = ((lean_object*)(l_Lean_Widget_instFromJsonTaggedText_fromJson___at___00Lean_Widget_instRpcEncodableMsgEmbed_dec_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__spec__4___closed__1));
return v___x_1126_;
}
else
{
lean_object* v___x_1127_; lean_object* v___x_1128_; lean_object* v___x_1129_; 
v___x_1127_ = lean_unsigned_to_nat(2u);
v___x_1128_ = lean_box(0);
v___x_1129_ = l_Lean_Json_parseCtorFields(v_json_1112_, v___x_1124_, v___x_1127_, v___x_1128_);
if (lean_obj_tag(v___x_1129_) == 0)
{
lean_object* v_a_1130_; lean_object* v___x_1132_; uint8_t v_isShared_1133_; uint8_t v_isSharedCheck_1137_; 
v_a_1130_ = lean_ctor_get(v___x_1129_, 0);
v_isSharedCheck_1137_ = !lean_is_exclusive(v___x_1129_);
if (v_isSharedCheck_1137_ == 0)
{
v___x_1132_ = v___x_1129_;
v_isShared_1133_ = v_isSharedCheck_1137_;
goto v_resetjp_1131_;
}
else
{
lean_inc(v_a_1130_);
lean_dec(v___x_1129_);
v___x_1132_ = lean_box(0);
v_isShared_1133_ = v_isSharedCheck_1137_;
goto v_resetjp_1131_;
}
v_resetjp_1131_:
{
lean_object* v___x_1135_; 
if (v_isShared_1133_ == 0)
{
v___x_1135_ = v___x_1132_;
goto v_reusejp_1134_;
}
else
{
lean_object* v_reuseFailAlloc_1136_; 
v_reuseFailAlloc_1136_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1136_, 0, v_a_1130_);
v___x_1135_ = v_reuseFailAlloc_1136_;
goto v_reusejp_1134_;
}
v_reusejp_1134_:
{
return v___x_1135_;
}
}
}
else
{
lean_object* v_a_1138_; lean_object* v___x_1139_; lean_object* v___x_1140_; lean_object* v___x_1141_; 
v_a_1138_ = lean_ctor_get(v___x_1129_, 0);
lean_inc(v_a_1138_);
lean_dec_ref_known(v___x_1129_, 1);
v___x_1139_ = lean_unsigned_to_nat(1u);
v___x_1140_ = lean_array_get_borrowed(v___x_1119_, v_a_1138_, v___x_1139_);
lean_inc(v___x_1140_);
v___x_1141_ = l_Lean_Widget_instFromJsonTaggedText_fromJson___at___00Lean_Widget_instRpcEncodableMsgEmbed_dec_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__spec__4(v___x_1140_);
if (lean_obj_tag(v___x_1141_) == 0)
{
lean_dec(v_a_1138_);
return v___x_1141_;
}
else
{
lean_object* v_a_1142_; lean_object* v___x_1144_; uint8_t v_isShared_1145_; uint8_t v_isSharedCheck_1152_; 
v_a_1142_ = lean_ctor_get(v___x_1141_, 0);
v_isSharedCheck_1152_ = !lean_is_exclusive(v___x_1141_);
if (v_isSharedCheck_1152_ == 0)
{
v___x_1144_ = v___x_1141_;
v_isShared_1145_ = v_isSharedCheck_1152_;
goto v_resetjp_1143_;
}
else
{
lean_inc(v_a_1142_);
lean_dec(v___x_1141_);
v___x_1144_ = lean_box(0);
v_isShared_1145_ = v_isSharedCheck_1152_;
goto v_resetjp_1143_;
}
v_resetjp_1143_:
{
lean_object* v___x_1146_; lean_object* v___x_1147_; lean_object* v___x_1148_; lean_object* v___x_1150_; 
v___x_1146_ = lean_unsigned_to_nat(0u);
v___x_1147_ = lean_array_get(v___x_1119_, v_a_1138_, v___x_1146_);
lean_dec(v_a_1138_);
v___x_1148_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1148_, 0, v___x_1147_);
lean_ctor_set(v___x_1148_, 1, v_a_1142_);
if (v_isShared_1145_ == 0)
{
lean_ctor_set(v___x_1144_, 0, v___x_1148_);
v___x_1150_ = v___x_1144_;
goto v_reusejp_1149_;
}
else
{
lean_object* v_reuseFailAlloc_1151_; 
v_reuseFailAlloc_1151_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1151_, 0, v___x_1148_);
v___x_1150_ = v_reuseFailAlloc_1151_;
goto v_reusejp_1149_;
}
v_reusejp_1149_:
{
return v___x_1150_;
}
}
}
}
}
}
else
{
lean_object* v___x_1153_; lean_object* v___x_1154_; lean_object* v___x_1155_; 
lean_dec(v_val_1115_);
v___x_1153_ = lean_unsigned_to_nat(1u);
v___x_1154_ = lean_box(0);
v___x_1155_ = l_Lean_Json_parseCtorFields(v_json_1112_, v___x_1122_, v___x_1153_, v___x_1154_);
if (lean_obj_tag(v___x_1155_) == 0)
{
lean_object* v_a_1156_; lean_object* v___x_1158_; uint8_t v_isShared_1159_; uint8_t v_isSharedCheck_1163_; 
lean_del_object(v___x_1117_);
v_a_1156_ = lean_ctor_get(v___x_1155_, 0);
v_isSharedCheck_1163_ = !lean_is_exclusive(v___x_1155_);
if (v_isSharedCheck_1163_ == 0)
{
v___x_1158_ = v___x_1155_;
v_isShared_1159_ = v_isSharedCheck_1163_;
goto v_resetjp_1157_;
}
else
{
lean_inc(v_a_1156_);
lean_dec(v___x_1155_);
v___x_1158_ = lean_box(0);
v_isShared_1159_ = v_isSharedCheck_1163_;
goto v_resetjp_1157_;
}
v_resetjp_1157_:
{
lean_object* v___x_1161_; 
if (v_isShared_1159_ == 0)
{
v___x_1161_ = v___x_1158_;
goto v_reusejp_1160_;
}
else
{
lean_object* v_reuseFailAlloc_1162_; 
v_reuseFailAlloc_1162_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1162_, 0, v_a_1156_);
v___x_1161_ = v_reuseFailAlloc_1162_;
goto v_reusejp_1160_;
}
v_reusejp_1160_:
{
return v___x_1161_;
}
}
}
else
{
lean_object* v_a_1164_; lean_object* v___x_1165_; lean_object* v___x_1166_; lean_object* v___x_1167_; 
v_a_1164_ = lean_ctor_get(v___x_1155_, 0);
lean_inc(v_a_1164_);
lean_dec_ref_known(v___x_1155_, 1);
v___x_1165_ = lean_unsigned_to_nat(0u);
v___x_1166_ = lean_array_get(v___x_1119_, v_a_1164_, v___x_1165_);
lean_dec(v_a_1164_);
v___x_1167_ = l_Lean_Json_getStr_x3f(v___x_1166_);
if (lean_obj_tag(v___x_1167_) == 0)
{
lean_object* v_a_1168_; lean_object* v___x_1170_; uint8_t v_isShared_1171_; uint8_t v_isSharedCheck_1175_; 
lean_del_object(v___x_1117_);
v_a_1168_ = lean_ctor_get(v___x_1167_, 0);
v_isSharedCheck_1175_ = !lean_is_exclusive(v___x_1167_);
if (v_isSharedCheck_1175_ == 0)
{
v___x_1170_ = v___x_1167_;
v_isShared_1171_ = v_isSharedCheck_1175_;
goto v_resetjp_1169_;
}
else
{
lean_inc(v_a_1168_);
lean_dec(v___x_1167_);
v___x_1170_ = lean_box(0);
v_isShared_1171_ = v_isSharedCheck_1175_;
goto v_resetjp_1169_;
}
v_resetjp_1169_:
{
lean_object* v___x_1173_; 
if (v_isShared_1171_ == 0)
{
v___x_1173_ = v___x_1170_;
goto v_reusejp_1172_;
}
else
{
lean_object* v_reuseFailAlloc_1174_; 
v_reuseFailAlloc_1174_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1174_, 0, v_a_1168_);
v___x_1173_ = v_reuseFailAlloc_1174_;
goto v_reusejp_1172_;
}
v_reusejp_1172_:
{
return v___x_1173_;
}
}
}
else
{
lean_object* v_a_1176_; lean_object* v___x_1178_; uint8_t v_isShared_1179_; uint8_t v_isSharedCheck_1186_; 
v_a_1176_ = lean_ctor_get(v___x_1167_, 0);
v_isSharedCheck_1186_ = !lean_is_exclusive(v___x_1167_);
if (v_isSharedCheck_1186_ == 0)
{
v___x_1178_ = v___x_1167_;
v_isShared_1179_ = v_isSharedCheck_1186_;
goto v_resetjp_1177_;
}
else
{
lean_inc(v_a_1176_);
lean_dec(v___x_1167_);
v___x_1178_ = lean_box(0);
v_isShared_1179_ = v_isSharedCheck_1186_;
goto v_resetjp_1177_;
}
v_resetjp_1177_:
{
lean_object* v___x_1181_; 
if (v_isShared_1118_ == 0)
{
lean_ctor_set_tag(v___x_1117_, 0);
lean_ctor_set(v___x_1117_, 0, v_a_1176_);
v___x_1181_ = v___x_1117_;
goto v_reusejp_1180_;
}
else
{
lean_object* v_reuseFailAlloc_1185_; 
v_reuseFailAlloc_1185_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1185_, 0, v_a_1176_);
v___x_1181_ = v_reuseFailAlloc_1185_;
goto v_reusejp_1180_;
}
v_reusejp_1180_:
{
lean_object* v___x_1183_; 
if (v_isShared_1179_ == 0)
{
lean_ctor_set(v___x_1178_, 0, v___x_1181_);
v___x_1183_ = v___x_1178_;
goto v_reusejp_1182_;
}
else
{
lean_object* v_reuseFailAlloc_1184_; 
v_reuseFailAlloc_1184_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1184_, 0, v___x_1181_);
v___x_1183_ = v_reuseFailAlloc_1184_;
goto v_reusejp_1182_;
}
v_reusejp_1182_:
{
return v___x_1183_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_1187_; lean_object* v___x_1188_; lean_object* v___x_1189_; 
lean_dec(v_val_1115_);
v___x_1187_ = lean_unsigned_to_nat(1u);
v___x_1188_ = lean_box(0);
v___x_1189_ = l_Lean_Json_parseCtorFields(v_json_1112_, v___x_1120_, v___x_1187_, v___x_1188_);
if (lean_obj_tag(v___x_1189_) == 0)
{
lean_object* v_a_1190_; lean_object* v___x_1192_; uint8_t v_isShared_1193_; uint8_t v_isSharedCheck_1197_; 
lean_del_object(v___x_1117_);
v_a_1190_ = lean_ctor_get(v___x_1189_, 0);
v_isSharedCheck_1197_ = !lean_is_exclusive(v___x_1189_);
if (v_isSharedCheck_1197_ == 0)
{
v___x_1192_ = v___x_1189_;
v_isShared_1193_ = v_isSharedCheck_1197_;
goto v_resetjp_1191_;
}
else
{
lean_inc(v_a_1190_);
lean_dec(v___x_1189_);
v___x_1192_ = lean_box(0);
v_isShared_1193_ = v_isSharedCheck_1197_;
goto v_resetjp_1191_;
}
v_resetjp_1191_:
{
lean_object* v___x_1195_; 
if (v_isShared_1193_ == 0)
{
v___x_1195_ = v___x_1192_;
goto v_reusejp_1194_;
}
else
{
lean_object* v_reuseFailAlloc_1196_; 
v_reuseFailAlloc_1196_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1196_, 0, v_a_1190_);
v___x_1195_ = v_reuseFailAlloc_1196_;
goto v_reusejp_1194_;
}
v_reusejp_1194_:
{
return v___x_1195_;
}
}
}
else
{
lean_object* v_a_1198_; lean_object* v___x_1199_; lean_object* v___x_1200_; lean_object* v___x_1201_; 
v_a_1198_ = lean_ctor_get(v___x_1189_, 0);
lean_inc(v_a_1198_);
lean_dec_ref_known(v___x_1189_, 1);
v___x_1199_ = lean_unsigned_to_nat(0u);
v___x_1200_ = lean_array_get(v___x_1119_, v_a_1198_, v___x_1199_);
lean_dec(v_a_1198_);
v___x_1201_ = l_Lean_Array_fromJson_x3f___at___00Lean_Widget_instFromJsonTaggedText_fromJson___at___00Lean_Widget_instRpcEncodableMsgEmbed_dec_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__spec__4_spec__8(v___x_1200_);
if (lean_obj_tag(v___x_1201_) == 0)
{
lean_object* v_a_1202_; lean_object* v___x_1204_; uint8_t v_isShared_1205_; uint8_t v_isSharedCheck_1209_; 
lean_del_object(v___x_1117_);
v_a_1202_ = lean_ctor_get(v___x_1201_, 0);
v_isSharedCheck_1209_ = !lean_is_exclusive(v___x_1201_);
if (v_isSharedCheck_1209_ == 0)
{
v___x_1204_ = v___x_1201_;
v_isShared_1205_ = v_isSharedCheck_1209_;
goto v_resetjp_1203_;
}
else
{
lean_inc(v_a_1202_);
lean_dec(v___x_1201_);
v___x_1204_ = lean_box(0);
v_isShared_1205_ = v_isSharedCheck_1209_;
goto v_resetjp_1203_;
}
v_resetjp_1203_:
{
lean_object* v___x_1207_; 
if (v_isShared_1205_ == 0)
{
v___x_1207_ = v___x_1204_;
goto v_reusejp_1206_;
}
else
{
lean_object* v_reuseFailAlloc_1208_; 
v_reuseFailAlloc_1208_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1208_, 0, v_a_1202_);
v___x_1207_ = v_reuseFailAlloc_1208_;
goto v_reusejp_1206_;
}
v_reusejp_1206_:
{
return v___x_1207_;
}
}
}
else
{
lean_object* v_a_1210_; lean_object* v___x_1212_; uint8_t v_isShared_1213_; uint8_t v_isSharedCheck_1220_; 
v_a_1210_ = lean_ctor_get(v___x_1201_, 0);
v_isSharedCheck_1220_ = !lean_is_exclusive(v___x_1201_);
if (v_isSharedCheck_1220_ == 0)
{
v___x_1212_ = v___x_1201_;
v_isShared_1213_ = v_isSharedCheck_1220_;
goto v_resetjp_1211_;
}
else
{
lean_inc(v_a_1210_);
lean_dec(v___x_1201_);
v___x_1212_ = lean_box(0);
v_isShared_1213_ = v_isSharedCheck_1220_;
goto v_resetjp_1211_;
}
v_resetjp_1211_:
{
lean_object* v___x_1215_; 
if (v_isShared_1118_ == 0)
{
lean_ctor_set(v___x_1117_, 0, v_a_1210_);
v___x_1215_ = v___x_1117_;
goto v_reusejp_1214_;
}
else
{
lean_object* v_reuseFailAlloc_1219_; 
v_reuseFailAlloc_1219_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1219_, 0, v_a_1210_);
v___x_1215_ = v_reuseFailAlloc_1219_;
goto v_reusejp_1214_;
}
v_reusejp_1214_:
{
lean_object* v___x_1217_; 
if (v_isShared_1213_ == 0)
{
lean_ctor_set(v___x_1212_, 0, v___x_1215_);
v___x_1217_ = v___x_1212_;
goto v_reusejp_1216_;
}
else
{
lean_object* v_reuseFailAlloc_1218_; 
v_reuseFailAlloc_1218_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1218_, 0, v___x_1215_);
v___x_1217_ = v_reuseFailAlloc_1218_;
goto v_reusejp_1216_;
}
v_reusejp_1216_:
{
return v___x_1217_;
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
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Widget_instFromJsonTaggedText_fromJson___at___00Lean_Widget_instRpcEncodableMsgEmbed_dec_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__spec__4_spec__8_spec__12(size_t v_sz_1222_, size_t v_i_1223_, lean_object* v_bs_1224_){
_start:
{
uint8_t v___x_1225_; 
v___x_1225_ = lean_usize_dec_lt(v_i_1223_, v_sz_1222_);
if (v___x_1225_ == 0)
{
lean_object* v___x_1226_; lean_object* v___x_1227_; 
v___x_1226_ = l_unsafeCast___redArg(v_bs_1224_);
lean_dec_ref(v_bs_1224_);
v___x_1227_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1227_, 0, v___x_1226_);
return v___x_1227_;
}
else
{
lean_object* v_v_1228_; lean_object* v___x_1229_; lean_object* v___x_1230_; 
v_v_1228_ = lean_array_uget_borrowed(v_bs_1224_, v_i_1223_);
v___x_1229_ = l_unsafeCast___redArg(v_v_1228_);
v___x_1230_ = l_Lean_Widget_instFromJsonTaggedText_fromJson___at___00Lean_Widget_instRpcEncodableMsgEmbed_dec_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__spec__4(v___x_1229_);
if (lean_obj_tag(v___x_1230_) == 0)
{
lean_object* v_a_1231_; lean_object* v___x_1233_; uint8_t v_isShared_1234_; uint8_t v_isSharedCheck_1238_; 
lean_dec_ref(v_bs_1224_);
v_a_1231_ = lean_ctor_get(v___x_1230_, 0);
v_isSharedCheck_1238_ = !lean_is_exclusive(v___x_1230_);
if (v_isSharedCheck_1238_ == 0)
{
v___x_1233_ = v___x_1230_;
v_isShared_1234_ = v_isSharedCheck_1238_;
goto v_resetjp_1232_;
}
else
{
lean_inc(v_a_1231_);
lean_dec(v___x_1230_);
v___x_1233_ = lean_box(0);
v_isShared_1234_ = v_isSharedCheck_1238_;
goto v_resetjp_1232_;
}
v_resetjp_1232_:
{
lean_object* v___x_1236_; 
if (v_isShared_1234_ == 0)
{
v___x_1236_ = v___x_1233_;
goto v_reusejp_1235_;
}
else
{
lean_object* v_reuseFailAlloc_1237_; 
v_reuseFailAlloc_1237_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1237_, 0, v_a_1231_);
v___x_1236_ = v_reuseFailAlloc_1237_;
goto v_reusejp_1235_;
}
v_reusejp_1235_:
{
return v___x_1236_;
}
}
}
else
{
lean_object* v_a_1239_; lean_object* v___x_1240_; lean_object* v_bs_x27_1241_; size_t v___x_1242_; size_t v___x_1243_; lean_object* v___x_1244_; lean_object* v___x_1245_; 
v_a_1239_ = lean_ctor_get(v___x_1230_, 0);
lean_inc(v_a_1239_);
lean_dec_ref_known(v___x_1230_, 1);
v___x_1240_ = lean_unsigned_to_nat(0u);
v_bs_x27_1241_ = lean_array_uset(v_bs_1224_, v_i_1223_, v___x_1240_);
v___x_1242_ = ((size_t)1ULL);
v___x_1243_ = lean_usize_add(v_i_1223_, v___x_1242_);
v___x_1244_ = l_unsafeCast___redArg(v_a_1239_);
lean_dec(v_a_1239_);
v___x_1245_ = lean_array_uset(v_bs_x27_1241_, v_i_1223_, v___x_1244_);
v_i_1223_ = v___x_1243_;
v_bs_1224_ = v___x_1245_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Array_fromJson_x3f___at___00Lean_Widget_instFromJsonTaggedText_fromJson___at___00Lean_Widget_instRpcEncodableMsgEmbed_dec_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__spec__4_spec__8(lean_object* v_x_1247_){
_start:
{
if (lean_obj_tag(v_x_1247_) == 4)
{
lean_object* v_elems_1248_; size_t v_sz_1249_; size_t v___x_1250_; lean_object* v___x_1251_; lean_object* v___x_1252_; lean_object* v___x_1253_; 
v_elems_1248_ = lean_ctor_get(v_x_1247_, 0);
lean_inc_ref(v_elems_1248_);
lean_dec_ref_known(v_x_1247_, 1);
v_sz_1249_ = lean_array_size(v_elems_1248_);
v___x_1250_ = ((size_t)0ULL);
v___x_1251_ = l_unsafeCast___redArg(v_elems_1248_);
lean_dec_ref(v_elems_1248_);
v___x_1252_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Widget_instFromJsonTaggedText_fromJson___at___00Lean_Widget_instRpcEncodableMsgEmbed_dec_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__spec__4_spec__8_spec__12(v_sz_1249_, v___x_1250_, v___x_1251_);
v___x_1253_ = l_unsafeCast___redArg(v___x_1252_);
lean_dec_ref(v___x_1252_);
return v___x_1253_;
}
else
{
lean_object* v___x_1254_; lean_object* v___x_1255_; lean_object* v___x_1256_; lean_object* v___x_1257_; lean_object* v___x_1258_; lean_object* v___x_1259_; lean_object* v___x_1260_; 
v___x_1254_ = ((lean_object*)(l_Lean_Array_fromJson_x3f___at___00Lean_Widget_instFromJsonTaggedText_fromJson___at___00Lean_Widget_instRpcEncodableMsgEmbed_dec_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__spec__4_spec__8___closed__0));
v___x_1255_ = lean_unsigned_to_nat(80u);
v___x_1256_ = l_Lean_Json_pretty(v_x_1247_, v___x_1255_);
v___x_1257_ = lean_string_append(v___x_1254_, v___x_1256_);
lean_dec_ref(v___x_1256_);
v___x_1258_ = ((lean_object*)(l_Lean_Array_fromJson_x3f___at___00Lean_Widget_instFromJsonTaggedText_fromJson___at___00Lean_Widget_instRpcEncodableMsgEmbed_dec_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__spec__4_spec__8___closed__1));
v___x_1259_ = lean_string_append(v___x_1257_, v___x_1258_);
v___x_1260_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1260_, 0, v___x_1259_);
return v___x_1260_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Widget_instFromJsonTaggedText_fromJson___at___00Lean_Widget_instRpcEncodableMsgEmbed_dec_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__spec__4_spec__8_spec__12___boxed(lean_object* v_sz_1261_, lean_object* v_i_1262_, lean_object* v_bs_1263_){
_start:
{
size_t v_sz_boxed_1264_; size_t v_i_boxed_1265_; lean_object* v_res_1266_; 
v_sz_boxed_1264_ = lean_unbox_usize(v_sz_1261_);
lean_dec(v_sz_1261_);
v_i_boxed_1265_ = lean_unbox_usize(v_i_1262_);
lean_dec(v_i_1262_);
v_res_1266_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Widget_instFromJsonTaggedText_fromJson___at___00Lean_Widget_instRpcEncodableMsgEmbed_dec_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__spec__4_spec__8_spec__12(v_sz_boxed_1264_, v_i_boxed_1265_, v_bs_1263_);
return v_res_1266_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Widget_instRpcEncodableStrictOrLazy_dec_00___x40_Lean_Widget_InteractiveDiagnostic_2157017296____hygCtx___hyg_1____at___00Lean_Widget_instRpcEncodableMsgEmbed_dec_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__spec__7_spec__13_spec__17(size_t v_sz_1267_, size_t v_i_1268_, lean_object* v_bs_1269_){
_start:
{
uint8_t v___x_1270_; 
v___x_1270_ = lean_usize_dec_lt(v_i_1268_, v_sz_1267_);
if (v___x_1270_ == 0)
{
lean_object* v___x_1271_; lean_object* v___x_1272_; 
v___x_1271_ = l_unsafeCast___redArg(v_bs_1269_);
lean_dec_ref(v_bs_1269_);
v___x_1272_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1272_, 0, v___x_1271_);
return v___x_1272_;
}
else
{
lean_object* v_v_1273_; lean_object* v___x_1274_; lean_object* v_bs_x27_1275_; lean_object* v___x_1276_; size_t v___x_1277_; size_t v___x_1278_; lean_object* v___x_1279_; lean_object* v___x_1280_; 
v_v_1273_ = lean_array_uget(v_bs_1269_, v_i_1268_);
v___x_1274_ = lean_unsigned_to_nat(0u);
v_bs_x27_1275_ = lean_array_uset(v_bs_1269_, v_i_1268_, v___x_1274_);
v___x_1276_ = l_unsafeCast___redArg(v_v_1273_);
lean_dec(v_v_1273_);
v___x_1277_ = ((size_t)1ULL);
v___x_1278_ = lean_usize_add(v_i_1268_, v___x_1277_);
v___x_1279_ = l_unsafeCast___redArg(v___x_1276_);
lean_dec(v___x_1276_);
v___x_1280_ = lean_array_uset(v_bs_x27_1275_, v_i_1268_, v___x_1279_);
v_i_1268_ = v___x_1278_;
v_bs_1269_ = v___x_1280_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Widget_instRpcEncodableStrictOrLazy_dec_00___x40_Lean_Widget_InteractiveDiagnostic_2157017296____hygCtx___hyg_1____at___00Lean_Widget_instRpcEncodableMsgEmbed_dec_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__spec__7_spec__13_spec__17___boxed(lean_object* v_sz_1282_, lean_object* v_i_1283_, lean_object* v_bs_1284_){
_start:
{
size_t v_sz_boxed_1285_; size_t v_i_boxed_1286_; lean_object* v_res_1287_; 
v_sz_boxed_1285_ = lean_unbox_usize(v_sz_1282_);
lean_dec(v_sz_1282_);
v_i_boxed_1286_ = lean_unbox_usize(v_i_1283_);
lean_dec(v_i_1283_);
v_res_1287_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Widget_instRpcEncodableStrictOrLazy_dec_00___x40_Lean_Widget_InteractiveDiagnostic_2157017296____hygCtx___hyg_1____at___00Lean_Widget_instRpcEncodableMsgEmbed_dec_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__spec__7_spec__13_spec__17(v_sz_boxed_1285_, v_i_boxed_1286_, v_bs_1284_);
return v_res_1287_;
}
}
LEAN_EXPORT lean_object* l_Lean_Array_fromJson_x3f___at___00Lean_Widget_instRpcEncodableStrictOrLazy_dec_00___x40_Lean_Widget_InteractiveDiagnostic_2157017296____hygCtx___hyg_1____at___00Lean_Widget_instRpcEncodableMsgEmbed_dec_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__spec__7_spec__13(lean_object* v_x_1288_){
_start:
{
if (lean_obj_tag(v_x_1288_) == 4)
{
lean_object* v_elems_1289_; size_t v_sz_1290_; size_t v___x_1291_; lean_object* v___x_1292_; lean_object* v___x_1293_; lean_object* v___x_1294_; 
v_elems_1289_ = lean_ctor_get(v_x_1288_, 0);
lean_inc_ref(v_elems_1289_);
lean_dec_ref_known(v_x_1288_, 1);
v_sz_1290_ = lean_array_size(v_elems_1289_);
v___x_1291_ = ((size_t)0ULL);
v___x_1292_ = l_unsafeCast___redArg(v_elems_1289_);
lean_dec_ref(v_elems_1289_);
v___x_1293_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Widget_instRpcEncodableStrictOrLazy_dec_00___x40_Lean_Widget_InteractiveDiagnostic_2157017296____hygCtx___hyg_1____at___00Lean_Widget_instRpcEncodableMsgEmbed_dec_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__spec__7_spec__13_spec__17(v_sz_1290_, v___x_1291_, v___x_1292_);
v___x_1294_ = l_unsafeCast___redArg(v___x_1293_);
lean_dec_ref(v___x_1293_);
return v___x_1294_;
}
else
{
lean_object* v___x_1295_; lean_object* v___x_1296_; lean_object* v___x_1297_; lean_object* v___x_1298_; lean_object* v___x_1299_; lean_object* v___x_1300_; lean_object* v___x_1301_; 
v___x_1295_ = ((lean_object*)(l_Lean_Array_fromJson_x3f___at___00Lean_Widget_instFromJsonTaggedText_fromJson___at___00Lean_Widget_instRpcEncodableMsgEmbed_dec_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__spec__4_spec__8___closed__0));
v___x_1296_ = lean_unsigned_to_nat(80u);
v___x_1297_ = l_Lean_Json_pretty(v_x_1288_, v___x_1296_);
v___x_1298_ = lean_string_append(v___x_1295_, v___x_1297_);
lean_dec_ref(v___x_1297_);
v___x_1299_ = ((lean_object*)(l_Lean_Array_fromJson_x3f___at___00Lean_Widget_instFromJsonTaggedText_fromJson___at___00Lean_Widget_instRpcEncodableMsgEmbed_dec_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__spec__4_spec__8___closed__1));
v___x_1300_ = lean_string_append(v___x_1298_, v___x_1299_);
v___x_1301_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1301_, 0, v___x_1300_);
return v___x_1301_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_TaggedText_mapM___at___00Lean_Widget_instRpcEncodableMsgEmbed_dec_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__spec__5_spec__10___boxed(lean_object* v_00_u03b1_1302_, lean_object* v_00_u03b2_1303_, lean_object* v_f_1304_, lean_object* v_sz_1305_, lean_object* v_i_1306_, lean_object* v_bs_1307_, lean_object* v___y_1308_){
_start:
{
size_t v_sz_boxed_1309_; size_t v_i_boxed_1310_; lean_object* v_res_1311_; 
v_sz_boxed_1309_ = lean_unbox_usize(v_sz_1305_);
lean_dec(v_sz_1305_);
v_i_boxed_1310_ = lean_unbox_usize(v_i_1306_);
lean_dec(v_i_1306_);
v_res_1311_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_TaggedText_mapM___at___00Lean_Widget_instRpcEncodableMsgEmbed_dec_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__spec__5_spec__10(v_00_u03b1_1302_, v_00_u03b2_1303_, v_f_1304_, v_sz_boxed_1309_, v_i_boxed_1310_, v_bs_1307_, v___y_1308_);
lean_dec_ref(v___y_1308_);
return v_res_1311_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_mapM___at___00Lean_Widget_instRpcEncodableMsgEmbed_dec_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__spec__5___redArg(lean_object* v_f_1312_, lean_object* v_x_1313_, lean_object* v___y_1314_){
_start:
{
switch(lean_obj_tag(v_x_1313_))
{
case 0:
{
lean_object* v_a_1315_; lean_object* v___x_1317_; uint8_t v_isShared_1318_; uint8_t v_isSharedCheck_1323_; 
lean_dec_ref(v_f_1312_);
v_a_1315_ = lean_ctor_get(v_x_1313_, 0);
v_isSharedCheck_1323_ = !lean_is_exclusive(v_x_1313_);
if (v_isSharedCheck_1323_ == 0)
{
v___x_1317_ = v_x_1313_;
v_isShared_1318_ = v_isSharedCheck_1323_;
goto v_resetjp_1316_;
}
else
{
lean_inc(v_a_1315_);
lean_dec(v_x_1313_);
v___x_1317_ = lean_box(0);
v_isShared_1318_ = v_isSharedCheck_1323_;
goto v_resetjp_1316_;
}
v_resetjp_1316_:
{
lean_object* v___x_1320_; 
if (v_isShared_1318_ == 0)
{
v___x_1320_ = v___x_1317_;
goto v_reusejp_1319_;
}
else
{
lean_object* v_reuseFailAlloc_1322_; 
v_reuseFailAlloc_1322_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1322_, 0, v_a_1315_);
v___x_1320_ = v_reuseFailAlloc_1322_;
goto v_reusejp_1319_;
}
v_reusejp_1319_:
{
lean_object* v___x_1321_; 
v___x_1321_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1321_, 0, v___x_1320_);
return v___x_1321_;
}
}
}
case 1:
{
lean_object* v_a_1324_; lean_object* v___x_1326_; uint8_t v_isShared_1327_; uint8_t v_isSharedCheck_1354_; 
v_a_1324_ = lean_ctor_get(v_x_1313_, 0);
v_isSharedCheck_1354_ = !lean_is_exclusive(v_x_1313_);
if (v_isSharedCheck_1354_ == 0)
{
v___x_1326_ = v_x_1313_;
v_isShared_1327_ = v_isSharedCheck_1354_;
goto v_resetjp_1325_;
}
else
{
lean_inc(v_a_1324_);
lean_dec(v_x_1313_);
v___x_1326_ = lean_box(0);
v_isShared_1327_ = v_isSharedCheck_1354_;
goto v_resetjp_1325_;
}
v_resetjp_1325_:
{
size_t v_sz_1328_; lean_object* v___x_1329_; lean_object* v___x_1330_; lean_object* v___x_1331_; lean_object* v___x_1332_; lean_object* v___x_10926__overap_1333_; lean_object* v___x_1334_; 
v_sz_1328_ = lean_array_size(v_a_1324_);
v___x_1329_ = l_unsafeCast___redArg(v_a_1324_);
lean_dec_ref(v_a_1324_);
v___x_1330_ = lean_box_usize(v_sz_1328_);
v___x_1331_ = ((lean_object*)(l_Lean_Widget_TaggedText_mapM___at___00Lean_Widget_instRpcEncodableMsgEmbed_enc_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__spec__0___redArg___boxed__const__1));
v___x_1332_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_TaggedText_mapM___at___00Lean_Widget_instRpcEncodableMsgEmbed_dec_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__spec__5_spec__10___boxed), 7, 6);
lean_closure_set(v___x_1332_, 0, lean_box(0));
lean_closure_set(v___x_1332_, 1, lean_box(0));
lean_closure_set(v___x_1332_, 2, v_f_1312_);
lean_closure_set(v___x_1332_, 3, v___x_1330_);
lean_closure_set(v___x_1332_, 4, v___x_1331_);
lean_closure_set(v___x_1332_, 5, v___x_1329_);
v___x_10926__overap_1333_ = l_unsafeCast___redArg(v___x_1332_);
lean_dec_ref(v___x_1332_);
lean_inc_ref(v___y_1314_);
v___x_1334_ = lean_apply_1(v___x_10926__overap_1333_, v___y_1314_);
if (lean_obj_tag(v___x_1334_) == 0)
{
lean_object* v_a_1335_; lean_object* v___x_1337_; uint8_t v_isShared_1338_; uint8_t v_isSharedCheck_1342_; 
lean_del_object(v___x_1326_);
v_a_1335_ = lean_ctor_get(v___x_1334_, 0);
v_isSharedCheck_1342_ = !lean_is_exclusive(v___x_1334_);
if (v_isSharedCheck_1342_ == 0)
{
v___x_1337_ = v___x_1334_;
v_isShared_1338_ = v_isSharedCheck_1342_;
goto v_resetjp_1336_;
}
else
{
lean_inc(v_a_1335_);
lean_dec(v___x_1334_);
v___x_1337_ = lean_box(0);
v_isShared_1338_ = v_isSharedCheck_1342_;
goto v_resetjp_1336_;
}
v_resetjp_1336_:
{
lean_object* v___x_1340_; 
if (v_isShared_1338_ == 0)
{
v___x_1340_ = v___x_1337_;
goto v_reusejp_1339_;
}
else
{
lean_object* v_reuseFailAlloc_1341_; 
v_reuseFailAlloc_1341_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1341_, 0, v_a_1335_);
v___x_1340_ = v_reuseFailAlloc_1341_;
goto v_reusejp_1339_;
}
v_reusejp_1339_:
{
return v___x_1340_;
}
}
}
else
{
lean_object* v_a_1343_; lean_object* v___x_1345_; uint8_t v_isShared_1346_; uint8_t v_isSharedCheck_1353_; 
v_a_1343_ = lean_ctor_get(v___x_1334_, 0);
v_isSharedCheck_1353_ = !lean_is_exclusive(v___x_1334_);
if (v_isSharedCheck_1353_ == 0)
{
v___x_1345_ = v___x_1334_;
v_isShared_1346_ = v_isSharedCheck_1353_;
goto v_resetjp_1344_;
}
else
{
lean_inc(v_a_1343_);
lean_dec(v___x_1334_);
v___x_1345_ = lean_box(0);
v_isShared_1346_ = v_isSharedCheck_1353_;
goto v_resetjp_1344_;
}
v_resetjp_1344_:
{
lean_object* v___x_1348_; 
if (v_isShared_1327_ == 0)
{
lean_ctor_set(v___x_1326_, 0, v_a_1343_);
v___x_1348_ = v___x_1326_;
goto v_reusejp_1347_;
}
else
{
lean_object* v_reuseFailAlloc_1352_; 
v_reuseFailAlloc_1352_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1352_, 0, v_a_1343_);
v___x_1348_ = v_reuseFailAlloc_1352_;
goto v_reusejp_1347_;
}
v_reusejp_1347_:
{
lean_object* v___x_1350_; 
if (v_isShared_1346_ == 0)
{
lean_ctor_set(v___x_1345_, 0, v___x_1348_);
v___x_1350_ = v___x_1345_;
goto v_reusejp_1349_;
}
else
{
lean_object* v_reuseFailAlloc_1351_; 
v_reuseFailAlloc_1351_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1351_, 0, v___x_1348_);
v___x_1350_ = v_reuseFailAlloc_1351_;
goto v_reusejp_1349_;
}
v_reusejp_1349_:
{
return v___x_1350_;
}
}
}
}
}
}
default: 
{
lean_object* v_a_1355_; lean_object* v_a_1356_; lean_object* v___x_1358_; uint8_t v_isShared_1359_; uint8_t v_isSharedCheck_1382_; 
v_a_1355_ = lean_ctor_get(v_x_1313_, 0);
v_a_1356_ = lean_ctor_get(v_x_1313_, 1);
v_isSharedCheck_1382_ = !lean_is_exclusive(v_x_1313_);
if (v_isSharedCheck_1382_ == 0)
{
v___x_1358_ = v_x_1313_;
v_isShared_1359_ = v_isSharedCheck_1382_;
goto v_resetjp_1357_;
}
else
{
lean_inc(v_a_1356_);
lean_inc(v_a_1355_);
lean_dec(v_x_1313_);
v___x_1358_ = lean_box(0);
v_isShared_1359_ = v_isSharedCheck_1382_;
goto v_resetjp_1357_;
}
v_resetjp_1357_:
{
lean_object* v___x_1360_; 
lean_inc_ref(v_f_1312_);
lean_inc_ref(v___y_1314_);
v___x_1360_ = lean_apply_2(v_f_1312_, v_a_1355_, v___y_1314_);
if (lean_obj_tag(v___x_1360_) == 0)
{
lean_object* v_a_1361_; lean_object* v___x_1363_; uint8_t v_isShared_1364_; uint8_t v_isSharedCheck_1368_; 
lean_del_object(v___x_1358_);
lean_dec_ref(v_a_1356_);
lean_dec_ref(v_f_1312_);
v_a_1361_ = lean_ctor_get(v___x_1360_, 0);
v_isSharedCheck_1368_ = !lean_is_exclusive(v___x_1360_);
if (v_isSharedCheck_1368_ == 0)
{
v___x_1363_ = v___x_1360_;
v_isShared_1364_ = v_isSharedCheck_1368_;
goto v_resetjp_1362_;
}
else
{
lean_inc(v_a_1361_);
lean_dec(v___x_1360_);
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
v_reuseFailAlloc_1367_ = lean_alloc_ctor(0, 1, 0);
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
else
{
lean_object* v_a_1369_; lean_object* v___x_1370_; 
v_a_1369_ = lean_ctor_get(v___x_1360_, 0);
lean_inc(v_a_1369_);
lean_dec_ref_known(v___x_1360_, 1);
v___x_1370_ = l_Lean_Widget_TaggedText_mapM___at___00Lean_Widget_instRpcEncodableMsgEmbed_dec_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__spec__5___redArg(v_f_1312_, v_a_1356_, v___y_1314_);
if (lean_obj_tag(v___x_1370_) == 0)
{
lean_dec(v_a_1369_);
lean_del_object(v___x_1358_);
return v___x_1370_;
}
else
{
lean_object* v_a_1371_; lean_object* v___x_1373_; uint8_t v_isShared_1374_; uint8_t v_isSharedCheck_1381_; 
v_a_1371_ = lean_ctor_get(v___x_1370_, 0);
v_isSharedCheck_1381_ = !lean_is_exclusive(v___x_1370_);
if (v_isSharedCheck_1381_ == 0)
{
v___x_1373_ = v___x_1370_;
v_isShared_1374_ = v_isSharedCheck_1381_;
goto v_resetjp_1372_;
}
else
{
lean_inc(v_a_1371_);
lean_dec(v___x_1370_);
v___x_1373_ = lean_box(0);
v_isShared_1374_ = v_isSharedCheck_1381_;
goto v_resetjp_1372_;
}
v_resetjp_1372_:
{
lean_object* v___x_1376_; 
if (v_isShared_1359_ == 0)
{
lean_ctor_set(v___x_1358_, 1, v_a_1371_);
lean_ctor_set(v___x_1358_, 0, v_a_1369_);
v___x_1376_ = v___x_1358_;
goto v_reusejp_1375_;
}
else
{
lean_object* v_reuseFailAlloc_1380_; 
v_reuseFailAlloc_1380_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1380_, 0, v_a_1369_);
lean_ctor_set(v_reuseFailAlloc_1380_, 1, v_a_1371_);
v___x_1376_ = v_reuseFailAlloc_1380_;
goto v_reusejp_1375_;
}
v_reusejp_1375_:
{
lean_object* v___x_1378_; 
if (v_isShared_1374_ == 0)
{
lean_ctor_set(v___x_1373_, 0, v___x_1376_);
v___x_1378_ = v___x_1373_;
goto v_reusejp_1377_;
}
else
{
lean_object* v_reuseFailAlloc_1379_; 
v_reuseFailAlloc_1379_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1379_, 0, v___x_1376_);
v___x_1378_ = v_reuseFailAlloc_1379_;
goto v_reusejp_1377_;
}
v_reusejp_1377_:
{
return v___x_1378_;
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
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_TaggedText_mapM___at___00Lean_Widget_instRpcEncodableMsgEmbed_dec_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__spec__5_spec__10___redArg(lean_object* v_f_1383_, size_t v_sz_1384_, size_t v_i_1385_, lean_object* v_bs_1386_, lean_object* v___y_1387_){
_start:
{
uint8_t v___x_1388_; 
v___x_1388_ = lean_usize_dec_lt(v_i_1385_, v_sz_1384_);
if (v___x_1388_ == 0)
{
lean_object* v___x_1389_; lean_object* v___x_1390_; 
lean_dec_ref(v_f_1383_);
v___x_1389_ = l_unsafeCast___redArg(v_bs_1386_);
lean_dec_ref(v_bs_1386_);
v___x_1390_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1390_, 0, v___x_1389_);
return v___x_1390_;
}
else
{
lean_object* v_v_1391_; lean_object* v___x_1392_; lean_object* v___x_1393_; 
v_v_1391_ = lean_array_uget_borrowed(v_bs_1386_, v_i_1385_);
v___x_1392_ = l_unsafeCast___redArg(v_v_1391_);
lean_inc_ref(v_f_1383_);
v___x_1393_ = l_Lean_Widget_TaggedText_mapM___at___00Lean_Widget_instRpcEncodableMsgEmbed_dec_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__spec__5___redArg(v_f_1383_, v___x_1392_, v___y_1387_);
if (lean_obj_tag(v___x_1393_) == 0)
{
lean_object* v_a_1394_; lean_object* v___x_1396_; uint8_t v_isShared_1397_; uint8_t v_isSharedCheck_1401_; 
lean_dec_ref(v_bs_1386_);
lean_dec_ref(v_f_1383_);
v_a_1394_ = lean_ctor_get(v___x_1393_, 0);
v_isSharedCheck_1401_ = !lean_is_exclusive(v___x_1393_);
if (v_isSharedCheck_1401_ == 0)
{
v___x_1396_ = v___x_1393_;
v_isShared_1397_ = v_isSharedCheck_1401_;
goto v_resetjp_1395_;
}
else
{
lean_inc(v_a_1394_);
lean_dec(v___x_1393_);
v___x_1396_ = lean_box(0);
v_isShared_1397_ = v_isSharedCheck_1401_;
goto v_resetjp_1395_;
}
v_resetjp_1395_:
{
lean_object* v___x_1399_; 
if (v_isShared_1397_ == 0)
{
v___x_1399_ = v___x_1396_;
goto v_reusejp_1398_;
}
else
{
lean_object* v_reuseFailAlloc_1400_; 
v_reuseFailAlloc_1400_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1400_, 0, v_a_1394_);
v___x_1399_ = v_reuseFailAlloc_1400_;
goto v_reusejp_1398_;
}
v_reusejp_1398_:
{
return v___x_1399_;
}
}
}
else
{
lean_object* v_a_1402_; lean_object* v___x_1403_; lean_object* v_bs_x27_1404_; size_t v___x_1405_; size_t v___x_1406_; lean_object* v___x_1407_; lean_object* v___x_1408_; 
v_a_1402_ = lean_ctor_get(v___x_1393_, 0);
lean_inc(v_a_1402_);
lean_dec_ref_known(v___x_1393_, 1);
v___x_1403_ = lean_unsigned_to_nat(0u);
v_bs_x27_1404_ = lean_array_uset(v_bs_1386_, v_i_1385_, v___x_1403_);
v___x_1405_ = ((size_t)1ULL);
v___x_1406_ = lean_usize_add(v_i_1385_, v___x_1405_);
v___x_1407_ = l_unsafeCast___redArg(v_a_1402_);
lean_dec(v_a_1402_);
v___x_1408_ = lean_array_uset(v_bs_x27_1404_, v_i_1385_, v___x_1407_);
v_i_1385_ = v___x_1406_;
v_bs_1386_ = v___x_1408_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_TaggedText_mapM___at___00Lean_Widget_instRpcEncodableMsgEmbed_dec_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__spec__5_spec__10(lean_object* v_00_u03b1_1410_, lean_object* v_00_u03b2_1411_, lean_object* v_f_1412_, size_t v_sz_1413_, size_t v_i_1414_, lean_object* v_bs_1415_, lean_object* v___y_1416_){
_start:
{
lean_object* v___x_1417_; 
v___x_1417_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_TaggedText_mapM___at___00Lean_Widget_instRpcEncodableMsgEmbed_dec_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__spec__5_spec__10___redArg(v_f_1412_, v_sz_1413_, v_i_1414_, v_bs_1415_, v___y_1416_);
return v___x_1417_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_TaggedText_mapM___at___00Lean_Widget_instRpcEncodableMsgEmbed_dec_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__spec__5_spec__10___redArg___boxed(lean_object* v_f_1418_, lean_object* v_sz_1419_, lean_object* v_i_1420_, lean_object* v_bs_1421_, lean_object* v___y_1422_){
_start:
{
size_t v_sz_boxed_1423_; size_t v_i_boxed_1424_; lean_object* v_res_1425_; 
v_sz_boxed_1423_ = lean_unbox_usize(v_sz_1419_);
lean_dec(v_sz_1419_);
v_i_boxed_1424_ = lean_unbox_usize(v_i_1420_);
lean_dec(v_i_1420_);
v_res_1425_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_TaggedText_mapM___at___00Lean_Widget_instRpcEncodableMsgEmbed_dec_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__spec__5_spec__10___redArg(v_f_1418_, v_sz_boxed_1423_, v_i_boxed_1424_, v_bs_1421_, v___y_1422_);
lean_dec_ref(v___y_1422_);
return v_res_1425_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_mapM___at___00Lean_Widget_instRpcEncodableMsgEmbed_dec_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__spec__5___redArg___boxed(lean_object* v_f_1426_, lean_object* v_x_1427_, lean_object* v___y_1428_){
_start:
{
lean_object* v_res_1429_; 
v_res_1429_ = l_Lean_Widget_TaggedText_mapM___at___00Lean_Widget_instRpcEncodableMsgEmbed_dec_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__spec__5___redArg(v_f_1426_, v_x_1427_, v___y_1428_);
lean_dec_ref(v___y_1428_);
return v_res_1429_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_instRpcEncodableStrictOrLazy_dec_00___x40_Lean_Widget_InteractiveDiagnostic_2157017296____hygCtx___hyg_1____at___00Lean_Widget_instRpcEncodableMsgEmbed_dec_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__spec__7_spec__14___boxed(lean_object* v_sz_1431_, lean_object* v_i_1432_, lean_object* v_bs_1433_, lean_object* v___y_1434_){
_start:
{
size_t v_sz_boxed_1435_; size_t v_i_boxed_1436_; lean_object* v_res_1437_; 
v_sz_boxed_1435_ = lean_unbox_usize(v_sz_1431_);
lean_dec(v_sz_1431_);
v_i_boxed_1436_ = lean_unbox_usize(v_i_1432_);
lean_dec(v_i_1432_);
v_res_1437_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_instRpcEncodableStrictOrLazy_dec_00___x40_Lean_Widget_InteractiveDiagnostic_2157017296____hygCtx___hyg_1____at___00Lean_Widget_instRpcEncodableMsgEmbed_dec_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__spec__7_spec__14(v_sz_boxed_1435_, v_i_boxed_1436_, v_bs_1433_, v___y_1434_);
lean_dec_ref(v___y_1434_);
return v_res_1437_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_instRpcEncodableStrictOrLazy_dec_00___x40_Lean_Widget_InteractiveDiagnostic_2157017296____hygCtx___hyg_1____at___00Lean_Widget_instRpcEncodableMsgEmbed_dec_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__spec__7(lean_object* v_j_1438_, lean_object* v_a_1439_){
_start:
{
lean_object* v___x_1440_; 
v___x_1440_ = l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson_00___x40_Lean_Widget_InteractiveDiagnostic_29703178____hygCtx___hyg_17_(v_j_1438_);
if (lean_obj_tag(v___x_1440_) == 0)
{
lean_object* v_a_1441_; lean_object* v___x_1443_; uint8_t v_isShared_1444_; uint8_t v_isSharedCheck_1448_; 
v_a_1441_ = lean_ctor_get(v___x_1440_, 0);
v_isSharedCheck_1448_ = !lean_is_exclusive(v___x_1440_);
if (v_isSharedCheck_1448_ == 0)
{
v___x_1443_ = v___x_1440_;
v_isShared_1444_ = v_isSharedCheck_1448_;
goto v_resetjp_1442_;
}
else
{
lean_inc(v_a_1441_);
lean_dec(v___x_1440_);
v___x_1443_ = lean_box(0);
v_isShared_1444_ = v_isSharedCheck_1448_;
goto v_resetjp_1442_;
}
v_resetjp_1442_:
{
lean_object* v___x_1446_; 
if (v_isShared_1444_ == 0)
{
v___x_1446_ = v___x_1443_;
goto v_reusejp_1445_;
}
else
{
lean_object* v_reuseFailAlloc_1447_; 
v_reuseFailAlloc_1447_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1447_, 0, v_a_1441_);
v___x_1446_ = v_reuseFailAlloc_1447_;
goto v_reusejp_1445_;
}
v_reusejp_1445_:
{
return v___x_1446_;
}
}
}
else
{
lean_object* v_a_1449_; 
v_a_1449_ = lean_ctor_get(v___x_1440_, 0);
lean_inc(v_a_1449_);
lean_dec_ref_known(v___x_1440_, 1);
if (lean_obj_tag(v_a_1449_) == 0)
{
lean_object* v_a_1450_; lean_object* v___x_1452_; uint8_t v_isShared_1453_; uint8_t v_isSharedCheck_1490_; 
v_a_1450_ = lean_ctor_get(v_a_1449_, 0);
v_isSharedCheck_1490_ = !lean_is_exclusive(v_a_1449_);
if (v_isSharedCheck_1490_ == 0)
{
v___x_1452_ = v_a_1449_;
v_isShared_1453_ = v_isSharedCheck_1490_;
goto v_resetjp_1451_;
}
else
{
lean_inc(v_a_1450_);
lean_dec(v_a_1449_);
v___x_1452_ = lean_box(0);
v_isShared_1453_ = v_isSharedCheck_1490_;
goto v_resetjp_1451_;
}
v_resetjp_1451_:
{
lean_object* v___x_1454_; 
v___x_1454_ = l_Lean_Array_fromJson_x3f___at___00Lean_Widget_instRpcEncodableStrictOrLazy_dec_00___x40_Lean_Widget_InteractiveDiagnostic_2157017296____hygCtx___hyg_1____at___00Lean_Widget_instRpcEncodableMsgEmbed_dec_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__spec__7_spec__13(v_a_1450_);
if (lean_obj_tag(v___x_1454_) == 0)
{
lean_object* v_a_1455_; lean_object* v___x_1457_; uint8_t v_isShared_1458_; uint8_t v_isSharedCheck_1462_; 
lean_del_object(v___x_1452_);
v_a_1455_ = lean_ctor_get(v___x_1454_, 0);
v_isSharedCheck_1462_ = !lean_is_exclusive(v___x_1454_);
if (v_isSharedCheck_1462_ == 0)
{
v___x_1457_ = v___x_1454_;
v_isShared_1458_ = v_isSharedCheck_1462_;
goto v_resetjp_1456_;
}
else
{
lean_inc(v_a_1455_);
lean_dec(v___x_1454_);
v___x_1457_ = lean_box(0);
v_isShared_1458_ = v_isSharedCheck_1462_;
goto v_resetjp_1456_;
}
v_resetjp_1456_:
{
lean_object* v___x_1460_; 
if (v_isShared_1458_ == 0)
{
v___x_1460_ = v___x_1457_;
goto v_reusejp_1459_;
}
else
{
lean_object* v_reuseFailAlloc_1461_; 
v_reuseFailAlloc_1461_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1461_, 0, v_a_1455_);
v___x_1460_ = v_reuseFailAlloc_1461_;
goto v_reusejp_1459_;
}
v_reusejp_1459_:
{
return v___x_1460_;
}
}
}
else
{
lean_object* v_a_1463_; size_t v_sz_1464_; lean_object* v___x_1465_; lean_object* v___x_1466_; lean_object* v___x_1467_; lean_object* v___x_1468_; lean_object* v___x_10930__overap_1469_; lean_object* v___x_1470_; 
v_a_1463_ = lean_ctor_get(v___x_1454_, 0);
lean_inc(v_a_1463_);
lean_dec_ref_known(v___x_1454_, 1);
v_sz_1464_ = lean_array_size(v_a_1463_);
v___x_1465_ = l_unsafeCast___redArg(v_a_1463_);
lean_dec(v_a_1463_);
v___x_1466_ = lean_box_usize(v_sz_1464_);
v___x_1467_ = ((lean_object*)(l_Lean_Widget_TaggedText_mapM___at___00Lean_Widget_instRpcEncodableMsgEmbed_enc_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__spec__0___redArg___boxed__const__1));
v___x_1468_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_instRpcEncodableStrictOrLazy_dec_00___x40_Lean_Widget_InteractiveDiagnostic_2157017296____hygCtx___hyg_1____at___00Lean_Widget_instRpcEncodableMsgEmbed_dec_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__spec__7_spec__14___boxed), 4, 3);
lean_closure_set(v___x_1468_, 0, v___x_1466_);
lean_closure_set(v___x_1468_, 1, v___x_1467_);
lean_closure_set(v___x_1468_, 2, v___x_1465_);
v___x_10930__overap_1469_ = l_unsafeCast___redArg(v___x_1468_);
lean_dec_ref(v___x_1468_);
lean_inc_ref(v_a_1439_);
v___x_1470_ = lean_apply_1(v___x_10930__overap_1469_, v_a_1439_);
if (lean_obj_tag(v___x_1470_) == 0)
{
lean_object* v_a_1471_; lean_object* v___x_1473_; uint8_t v_isShared_1474_; uint8_t v_isSharedCheck_1478_; 
lean_del_object(v___x_1452_);
v_a_1471_ = lean_ctor_get(v___x_1470_, 0);
v_isSharedCheck_1478_ = !lean_is_exclusive(v___x_1470_);
if (v_isSharedCheck_1478_ == 0)
{
v___x_1473_ = v___x_1470_;
v_isShared_1474_ = v_isSharedCheck_1478_;
goto v_resetjp_1472_;
}
else
{
lean_inc(v_a_1471_);
lean_dec(v___x_1470_);
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
v_reuseFailAlloc_1477_ = lean_alloc_ctor(0, 1, 0);
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
else
{
lean_object* v_a_1479_; lean_object* v___x_1481_; uint8_t v_isShared_1482_; uint8_t v_isSharedCheck_1489_; 
v_a_1479_ = lean_ctor_get(v___x_1470_, 0);
v_isSharedCheck_1489_ = !lean_is_exclusive(v___x_1470_);
if (v_isSharedCheck_1489_ == 0)
{
v___x_1481_ = v___x_1470_;
v_isShared_1482_ = v_isSharedCheck_1489_;
goto v_resetjp_1480_;
}
else
{
lean_inc(v_a_1479_);
lean_dec(v___x_1470_);
v___x_1481_ = lean_box(0);
v_isShared_1482_ = v_isSharedCheck_1489_;
goto v_resetjp_1480_;
}
v_resetjp_1480_:
{
lean_object* v___x_1484_; 
if (v_isShared_1453_ == 0)
{
lean_ctor_set(v___x_1452_, 0, v_a_1479_);
v___x_1484_ = v___x_1452_;
goto v_reusejp_1483_;
}
else
{
lean_object* v_reuseFailAlloc_1488_; 
v_reuseFailAlloc_1488_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1488_, 0, v_a_1479_);
v___x_1484_ = v_reuseFailAlloc_1488_;
goto v_reusejp_1483_;
}
v_reusejp_1483_:
{
lean_object* v___x_1486_; 
if (v_isShared_1482_ == 0)
{
lean_ctor_set(v___x_1481_, 0, v___x_1484_);
v___x_1486_ = v___x_1481_;
goto v_reusejp_1485_;
}
else
{
lean_object* v_reuseFailAlloc_1487_; 
v_reuseFailAlloc_1487_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1487_, 0, v___x_1484_);
v___x_1486_ = v_reuseFailAlloc_1487_;
goto v_reusejp_1485_;
}
v_reusejp_1485_:
{
return v___x_1486_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_1491_; lean_object* v___x_1493_; uint8_t v_isShared_1494_; uint8_t v_isSharedCheck_1516_; 
v_a_1491_ = lean_ctor_get(v_a_1449_, 0);
v_isSharedCheck_1516_ = !lean_is_exclusive(v_a_1449_);
if (v_isSharedCheck_1516_ == 0)
{
v___x_1493_ = v_a_1449_;
v_isShared_1494_ = v_isSharedCheck_1516_;
goto v_resetjp_1492_;
}
else
{
lean_inc(v_a_1491_);
lean_dec(v_a_1449_);
v___x_1493_ = lean_box(0);
v_isShared_1494_ = v_isSharedCheck_1516_;
goto v_resetjp_1492_;
}
v_resetjp_1492_:
{
lean_object* v___x_1495_; lean_object* v___x_1496_; 
v___x_1495_ = l_Lean_Widget_instImpl_00___x40_Lean_Widget_InteractiveDiagnostic_72002168____hygCtx___hyg_14_;
v___x_1496_ = l_Lean_Server_instRpcEncodableWithRpcRefOfTypeName_rpcDecode___redArg(v___x_1495_, v_a_1491_, v_a_1439_);
if (lean_obj_tag(v___x_1496_) == 0)
{
lean_object* v_a_1497_; lean_object* v___x_1499_; uint8_t v_isShared_1500_; uint8_t v_isSharedCheck_1504_; 
lean_del_object(v___x_1493_);
v_a_1497_ = lean_ctor_get(v___x_1496_, 0);
v_isSharedCheck_1504_ = !lean_is_exclusive(v___x_1496_);
if (v_isSharedCheck_1504_ == 0)
{
v___x_1499_ = v___x_1496_;
v_isShared_1500_ = v_isSharedCheck_1504_;
goto v_resetjp_1498_;
}
else
{
lean_inc(v_a_1497_);
lean_dec(v___x_1496_);
v___x_1499_ = lean_box(0);
v_isShared_1500_ = v_isSharedCheck_1504_;
goto v_resetjp_1498_;
}
v_resetjp_1498_:
{
lean_object* v___x_1502_; 
if (v_isShared_1500_ == 0)
{
v___x_1502_ = v___x_1499_;
goto v_reusejp_1501_;
}
else
{
lean_object* v_reuseFailAlloc_1503_; 
v_reuseFailAlloc_1503_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1503_, 0, v_a_1497_);
v___x_1502_ = v_reuseFailAlloc_1503_;
goto v_reusejp_1501_;
}
v_reusejp_1501_:
{
return v___x_1502_;
}
}
}
else
{
lean_object* v_a_1505_; lean_object* v___x_1507_; uint8_t v_isShared_1508_; uint8_t v_isSharedCheck_1515_; 
v_a_1505_ = lean_ctor_get(v___x_1496_, 0);
v_isSharedCheck_1515_ = !lean_is_exclusive(v___x_1496_);
if (v_isSharedCheck_1515_ == 0)
{
v___x_1507_ = v___x_1496_;
v_isShared_1508_ = v_isSharedCheck_1515_;
goto v_resetjp_1506_;
}
else
{
lean_inc(v_a_1505_);
lean_dec(v___x_1496_);
v___x_1507_ = lean_box(0);
v_isShared_1508_ = v_isSharedCheck_1515_;
goto v_resetjp_1506_;
}
v_resetjp_1506_:
{
lean_object* v___x_1510_; 
if (v_isShared_1494_ == 0)
{
lean_ctor_set(v___x_1493_, 0, v_a_1505_);
v___x_1510_ = v___x_1493_;
goto v_reusejp_1509_;
}
else
{
lean_object* v_reuseFailAlloc_1514_; 
v_reuseFailAlloc_1514_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1514_, 0, v_a_1505_);
v___x_1510_ = v_reuseFailAlloc_1514_;
goto v_reusejp_1509_;
}
v_reusejp_1509_:
{
lean_object* v___x_1512_; 
if (v_isShared_1508_ == 0)
{
lean_ctor_set(v___x_1507_, 0, v___x_1510_);
v___x_1512_ = v___x_1507_;
goto v_reusejp_1511_;
}
else
{
lean_object* v_reuseFailAlloc_1513_; 
v_reuseFailAlloc_1513_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1513_, 0, v___x_1510_);
v___x_1512_ = v_reuseFailAlloc_1513_;
goto v_reusejp_1511_;
}
v_reusejp_1511_:
{
return v___x_1512_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_instRpcEncodableMsgEmbed_dec_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1_(lean_object* v_j_1517_, lean_object* v_a_1518_){
_start:
{
lean_object* v___x_1519_; 
v___x_1519_ = l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson_00___x40_Lean_Widget_InteractiveDiagnostic_2315129857____hygCtx___hyg_37_(v_j_1517_);
if (lean_obj_tag(v___x_1519_) == 0)
{
lean_object* v_a_1520_; lean_object* v___x_1522_; uint8_t v_isShared_1523_; uint8_t v_isSharedCheck_1527_; 
v_a_1520_ = lean_ctor_get(v___x_1519_, 0);
v_isSharedCheck_1527_ = !lean_is_exclusive(v___x_1519_);
if (v_isSharedCheck_1527_ == 0)
{
v___x_1522_ = v___x_1519_;
v_isShared_1523_ = v_isSharedCheck_1527_;
goto v_resetjp_1521_;
}
else
{
lean_inc(v_a_1520_);
lean_dec(v___x_1519_);
v___x_1522_ = lean_box(0);
v_isShared_1523_ = v_isSharedCheck_1527_;
goto v_resetjp_1521_;
}
v_resetjp_1521_:
{
lean_object* v___x_1525_; 
if (v_isShared_1523_ == 0)
{
v___x_1525_ = v___x_1522_;
goto v_reusejp_1524_;
}
else
{
lean_object* v_reuseFailAlloc_1526_; 
v_reuseFailAlloc_1526_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1526_, 0, v_a_1520_);
v___x_1525_ = v_reuseFailAlloc_1526_;
goto v_reusejp_1524_;
}
v_reusejp_1524_:
{
return v___x_1525_;
}
}
}
else
{
lean_object* v_a_1528_; lean_object* v___x_1529_; 
v_a_1528_ = lean_ctor_get(v___x_1519_, 0);
lean_inc(v_a_1528_);
lean_dec_ref_known(v___x_1519_, 1);
v___x_1529_ = lean_alloc_closure((void*)(l_Lean_Widget_instRpcEncodableMsgEmbed_dec_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1____boxed), 2, 0);
switch(lean_obj_tag(v_a_1528_))
{
case 0:
{
lean_object* v_a_1530_; lean_object* v___x_1532_; uint8_t v_isShared_1533_; uint8_t v_isSharedCheck_1565_; 
lean_dec_ref(v___x_1529_);
v_a_1530_ = lean_ctor_get(v_a_1528_, 0);
v_isSharedCheck_1565_ = !lean_is_exclusive(v_a_1528_);
if (v_isSharedCheck_1565_ == 0)
{
v___x_1532_ = v_a_1528_;
v_isShared_1533_ = v_isSharedCheck_1565_;
goto v_resetjp_1531_;
}
else
{
lean_inc(v_a_1530_);
lean_dec(v_a_1528_);
v___x_1532_ = lean_box(0);
v_isShared_1533_ = v_isSharedCheck_1565_;
goto v_resetjp_1531_;
}
v_resetjp_1531_:
{
lean_object* v___x_1534_; 
v___x_1534_ = l_Lean_Widget_instFromJsonTaggedText_fromJson___at___00Lean_Widget_instRpcEncodableMsgEmbed_dec_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__spec__4(v_a_1530_);
if (lean_obj_tag(v___x_1534_) == 0)
{
lean_object* v_a_1535_; lean_object* v___x_1537_; uint8_t v_isShared_1538_; uint8_t v_isSharedCheck_1542_; 
lean_del_object(v___x_1532_);
v_a_1535_ = lean_ctor_get(v___x_1534_, 0);
v_isSharedCheck_1542_ = !lean_is_exclusive(v___x_1534_);
if (v_isSharedCheck_1542_ == 0)
{
v___x_1537_ = v___x_1534_;
v_isShared_1538_ = v_isSharedCheck_1542_;
goto v_resetjp_1536_;
}
else
{
lean_inc(v_a_1535_);
lean_dec(v___x_1534_);
v___x_1537_ = lean_box(0);
v_isShared_1538_ = v_isSharedCheck_1542_;
goto v_resetjp_1536_;
}
v_resetjp_1536_:
{
lean_object* v___x_1540_; 
if (v_isShared_1538_ == 0)
{
v___x_1540_ = v___x_1537_;
goto v_reusejp_1539_;
}
else
{
lean_object* v_reuseFailAlloc_1541_; 
v_reuseFailAlloc_1541_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1541_, 0, v_a_1535_);
v___x_1540_ = v_reuseFailAlloc_1541_;
goto v_reusejp_1539_;
}
v_reusejp_1539_:
{
return v___x_1540_;
}
}
}
else
{
lean_object* v_a_1543_; lean_object* v___x_1544_; lean_object* v___x_1545_; 
v_a_1543_ = lean_ctor_get(v___x_1534_, 0);
lean_inc(v_a_1543_);
lean_dec_ref_known(v___x_1534_, 1);
v___x_1544_ = ((lean_object*)(l_Lean_Widget_instRpcEncodableMsgEmbed_dec___closed__0_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1_));
v___x_1545_ = l_Lean_Widget_TaggedText_mapM___at___00Lean_Widget_instRpcEncodableMsgEmbed_dec_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__spec__5___redArg(v___x_1544_, v_a_1543_, v_a_1518_);
if (lean_obj_tag(v___x_1545_) == 0)
{
lean_object* v_a_1546_; lean_object* v___x_1548_; uint8_t v_isShared_1549_; uint8_t v_isSharedCheck_1553_; 
lean_del_object(v___x_1532_);
v_a_1546_ = lean_ctor_get(v___x_1545_, 0);
v_isSharedCheck_1553_ = !lean_is_exclusive(v___x_1545_);
if (v_isSharedCheck_1553_ == 0)
{
v___x_1548_ = v___x_1545_;
v_isShared_1549_ = v_isSharedCheck_1553_;
goto v_resetjp_1547_;
}
else
{
lean_inc(v_a_1546_);
lean_dec(v___x_1545_);
v___x_1548_ = lean_box(0);
v_isShared_1549_ = v_isSharedCheck_1553_;
goto v_resetjp_1547_;
}
v_resetjp_1547_:
{
lean_object* v___x_1551_; 
if (v_isShared_1549_ == 0)
{
v___x_1551_ = v___x_1548_;
goto v_reusejp_1550_;
}
else
{
lean_object* v_reuseFailAlloc_1552_; 
v_reuseFailAlloc_1552_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1552_, 0, v_a_1546_);
v___x_1551_ = v_reuseFailAlloc_1552_;
goto v_reusejp_1550_;
}
v_reusejp_1550_:
{
return v___x_1551_;
}
}
}
else
{
lean_object* v_a_1554_; lean_object* v___x_1556_; uint8_t v_isShared_1557_; uint8_t v_isSharedCheck_1564_; 
v_a_1554_ = lean_ctor_get(v___x_1545_, 0);
v_isSharedCheck_1564_ = !lean_is_exclusive(v___x_1545_);
if (v_isSharedCheck_1564_ == 0)
{
v___x_1556_ = v___x_1545_;
v_isShared_1557_ = v_isSharedCheck_1564_;
goto v_resetjp_1555_;
}
else
{
lean_inc(v_a_1554_);
lean_dec(v___x_1545_);
v___x_1556_ = lean_box(0);
v_isShared_1557_ = v_isSharedCheck_1564_;
goto v_resetjp_1555_;
}
v_resetjp_1555_:
{
lean_object* v___x_1559_; 
if (v_isShared_1533_ == 0)
{
lean_ctor_set(v___x_1532_, 0, v_a_1554_);
v___x_1559_ = v___x_1532_;
goto v_reusejp_1558_;
}
else
{
lean_object* v_reuseFailAlloc_1563_; 
v_reuseFailAlloc_1563_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1563_, 0, v_a_1554_);
v___x_1559_ = v_reuseFailAlloc_1563_;
goto v_reusejp_1558_;
}
v_reusejp_1558_:
{
lean_object* v___x_1561_; 
if (v_isShared_1557_ == 0)
{
lean_ctor_set(v___x_1556_, 0, v___x_1559_);
v___x_1561_ = v___x_1556_;
goto v_reusejp_1560_;
}
else
{
lean_object* v_reuseFailAlloc_1562_; 
v_reuseFailAlloc_1562_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1562_, 0, v___x_1559_);
v___x_1561_ = v_reuseFailAlloc_1562_;
goto v_reusejp_1560_;
}
v_reusejp_1560_:
{
return v___x_1561_;
}
}
}
}
}
}
}
case 1:
{
lean_object* v_a_1566_; lean_object* v___x_1568_; uint8_t v_isShared_1569_; uint8_t v_isSharedCheck_1590_; 
lean_dec_ref(v___x_1529_);
v_a_1566_ = lean_ctor_get(v_a_1528_, 0);
v_isSharedCheck_1590_ = !lean_is_exclusive(v_a_1528_);
if (v_isSharedCheck_1590_ == 0)
{
v___x_1568_ = v_a_1528_;
v_isShared_1569_ = v_isSharedCheck_1590_;
goto v_resetjp_1567_;
}
else
{
lean_inc(v_a_1566_);
lean_dec(v_a_1528_);
v___x_1568_ = lean_box(0);
v_isShared_1569_ = v_isSharedCheck_1590_;
goto v_resetjp_1567_;
}
v_resetjp_1567_:
{
lean_object* v___x_1570_; 
v___x_1570_ = l_Lean_Widget_instRpcEncodableInteractiveGoal_dec_00___x40_Lean_Widget_InteractiveGoal_3114798910____hygCtx___hyg_1_(v_a_1566_, v_a_1518_);
if (lean_obj_tag(v___x_1570_) == 0)
{
lean_object* v_a_1571_; lean_object* v___x_1573_; uint8_t v_isShared_1574_; uint8_t v_isSharedCheck_1578_; 
lean_del_object(v___x_1568_);
v_a_1571_ = lean_ctor_get(v___x_1570_, 0);
v_isSharedCheck_1578_ = !lean_is_exclusive(v___x_1570_);
if (v_isSharedCheck_1578_ == 0)
{
v___x_1573_ = v___x_1570_;
v_isShared_1574_ = v_isSharedCheck_1578_;
goto v_resetjp_1572_;
}
else
{
lean_inc(v_a_1571_);
lean_dec(v___x_1570_);
v___x_1573_ = lean_box(0);
v_isShared_1574_ = v_isSharedCheck_1578_;
goto v_resetjp_1572_;
}
v_resetjp_1572_:
{
lean_object* v___x_1576_; 
if (v_isShared_1574_ == 0)
{
v___x_1576_ = v___x_1573_;
goto v_reusejp_1575_;
}
else
{
lean_object* v_reuseFailAlloc_1577_; 
v_reuseFailAlloc_1577_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1577_, 0, v_a_1571_);
v___x_1576_ = v_reuseFailAlloc_1577_;
goto v_reusejp_1575_;
}
v_reusejp_1575_:
{
return v___x_1576_;
}
}
}
else
{
lean_object* v_a_1579_; lean_object* v___x_1581_; uint8_t v_isShared_1582_; uint8_t v_isSharedCheck_1589_; 
v_a_1579_ = lean_ctor_get(v___x_1570_, 0);
v_isSharedCheck_1589_ = !lean_is_exclusive(v___x_1570_);
if (v_isSharedCheck_1589_ == 0)
{
v___x_1581_ = v___x_1570_;
v_isShared_1582_ = v_isSharedCheck_1589_;
goto v_resetjp_1580_;
}
else
{
lean_inc(v_a_1579_);
lean_dec(v___x_1570_);
v___x_1581_ = lean_box(0);
v_isShared_1582_ = v_isSharedCheck_1589_;
goto v_resetjp_1580_;
}
v_resetjp_1580_:
{
lean_object* v___x_1584_; 
if (v_isShared_1569_ == 0)
{
lean_ctor_set(v___x_1568_, 0, v_a_1579_);
v___x_1584_ = v___x_1568_;
goto v_reusejp_1583_;
}
else
{
lean_object* v_reuseFailAlloc_1588_; 
v_reuseFailAlloc_1588_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1588_, 0, v_a_1579_);
v___x_1584_ = v_reuseFailAlloc_1588_;
goto v_reusejp_1583_;
}
v_reusejp_1583_:
{
lean_object* v___x_1586_; 
if (v_isShared_1582_ == 0)
{
lean_ctor_set(v___x_1581_, 0, v___x_1584_);
v___x_1586_ = v___x_1581_;
goto v_reusejp_1585_;
}
else
{
lean_object* v_reuseFailAlloc_1587_; 
v_reuseFailAlloc_1587_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1587_, 0, v___x_1584_);
v___x_1586_ = v_reuseFailAlloc_1587_;
goto v_reusejp_1585_;
}
v_reusejp_1585_:
{
return v___x_1586_;
}
}
}
}
}
}
case 2:
{
lean_object* v_wi_1591_; lean_object* v_alt_1592_; lean_object* v___x_1594_; uint8_t v_isShared_1595_; uint8_t v_isSharedCheck_1636_; 
v_wi_1591_ = lean_ctor_get(v_a_1528_, 0);
v_alt_1592_ = lean_ctor_get(v_a_1528_, 1);
v_isSharedCheck_1636_ = !lean_is_exclusive(v_a_1528_);
if (v_isSharedCheck_1636_ == 0)
{
v___x_1594_ = v_a_1528_;
v_isShared_1595_ = v_isSharedCheck_1636_;
goto v_resetjp_1593_;
}
else
{
lean_inc(v_alt_1592_);
lean_inc(v_wi_1591_);
lean_dec(v_a_1528_);
v___x_1594_ = lean_box(0);
v_isShared_1595_ = v_isSharedCheck_1636_;
goto v_resetjp_1593_;
}
v_resetjp_1593_:
{
lean_object* v___x_1596_; 
v___x_1596_ = l_Lean_Widget_instRpcEncodableWidgetInstance_dec___redArg_00___x40_Lean_Widget_Types_2243429567____hygCtx___hyg_1_(v_wi_1591_);
if (lean_obj_tag(v___x_1596_) == 0)
{
lean_object* v_a_1597_; lean_object* v___x_1599_; uint8_t v_isShared_1600_; uint8_t v_isSharedCheck_1604_; 
lean_del_object(v___x_1594_);
lean_dec(v_alt_1592_);
lean_dec_ref(v___x_1529_);
v_a_1597_ = lean_ctor_get(v___x_1596_, 0);
v_isSharedCheck_1604_ = !lean_is_exclusive(v___x_1596_);
if (v_isSharedCheck_1604_ == 0)
{
v___x_1599_ = v___x_1596_;
v_isShared_1600_ = v_isSharedCheck_1604_;
goto v_resetjp_1598_;
}
else
{
lean_inc(v_a_1597_);
lean_dec(v___x_1596_);
v___x_1599_ = lean_box(0);
v_isShared_1600_ = v_isSharedCheck_1604_;
goto v_resetjp_1598_;
}
v_resetjp_1598_:
{
lean_object* v___x_1602_; 
if (v_isShared_1600_ == 0)
{
v___x_1602_ = v___x_1599_;
goto v_reusejp_1601_;
}
else
{
lean_object* v_reuseFailAlloc_1603_; 
v_reuseFailAlloc_1603_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1603_, 0, v_a_1597_);
v___x_1602_ = v_reuseFailAlloc_1603_;
goto v_reusejp_1601_;
}
v_reusejp_1601_:
{
return v___x_1602_;
}
}
}
else
{
lean_object* v_a_1605_; lean_object* v___x_1606_; 
v_a_1605_ = lean_ctor_get(v___x_1596_, 0);
lean_inc(v_a_1605_);
lean_dec_ref_known(v___x_1596_, 1);
v___x_1606_ = l_Lean_Widget_instFromJsonTaggedText_fromJson___at___00Lean_Widget_instRpcEncodableMsgEmbed_dec_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__spec__4(v_alt_1592_);
if (lean_obj_tag(v___x_1606_) == 0)
{
lean_object* v_a_1607_; lean_object* v___x_1609_; uint8_t v_isShared_1610_; uint8_t v_isSharedCheck_1614_; 
lean_dec(v_a_1605_);
lean_del_object(v___x_1594_);
lean_dec_ref(v___x_1529_);
v_a_1607_ = lean_ctor_get(v___x_1606_, 0);
v_isSharedCheck_1614_ = !lean_is_exclusive(v___x_1606_);
if (v_isSharedCheck_1614_ == 0)
{
v___x_1609_ = v___x_1606_;
v_isShared_1610_ = v_isSharedCheck_1614_;
goto v_resetjp_1608_;
}
else
{
lean_inc(v_a_1607_);
lean_dec(v___x_1606_);
v___x_1609_ = lean_box(0);
v_isShared_1610_ = v_isSharedCheck_1614_;
goto v_resetjp_1608_;
}
v_resetjp_1608_:
{
lean_object* v___x_1612_; 
if (v_isShared_1610_ == 0)
{
v___x_1612_ = v___x_1609_;
goto v_reusejp_1611_;
}
else
{
lean_object* v_reuseFailAlloc_1613_; 
v_reuseFailAlloc_1613_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1613_, 0, v_a_1607_);
v___x_1612_ = v_reuseFailAlloc_1613_;
goto v_reusejp_1611_;
}
v_reusejp_1611_:
{
return v___x_1612_;
}
}
}
else
{
lean_object* v_a_1615_; lean_object* v___x_1616_; 
v_a_1615_ = lean_ctor_get(v___x_1606_, 0);
lean_inc(v_a_1615_);
lean_dec_ref_known(v___x_1606_, 1);
v___x_1616_ = l_Lean_Widget_TaggedText_mapM___at___00Lean_Widget_instRpcEncodableMsgEmbed_dec_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__spec__5___redArg(v___x_1529_, v_a_1615_, v_a_1518_);
if (lean_obj_tag(v___x_1616_) == 0)
{
lean_object* v_a_1617_; lean_object* v___x_1619_; uint8_t v_isShared_1620_; uint8_t v_isSharedCheck_1624_; 
lean_dec(v_a_1605_);
lean_del_object(v___x_1594_);
v_a_1617_ = lean_ctor_get(v___x_1616_, 0);
v_isSharedCheck_1624_ = !lean_is_exclusive(v___x_1616_);
if (v_isSharedCheck_1624_ == 0)
{
v___x_1619_ = v___x_1616_;
v_isShared_1620_ = v_isSharedCheck_1624_;
goto v_resetjp_1618_;
}
else
{
lean_inc(v_a_1617_);
lean_dec(v___x_1616_);
v___x_1619_ = lean_box(0);
v_isShared_1620_ = v_isSharedCheck_1624_;
goto v_resetjp_1618_;
}
v_resetjp_1618_:
{
lean_object* v___x_1622_; 
if (v_isShared_1620_ == 0)
{
v___x_1622_ = v___x_1619_;
goto v_reusejp_1621_;
}
else
{
lean_object* v_reuseFailAlloc_1623_; 
v_reuseFailAlloc_1623_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1623_, 0, v_a_1617_);
v___x_1622_ = v_reuseFailAlloc_1623_;
goto v_reusejp_1621_;
}
v_reusejp_1621_:
{
return v___x_1622_;
}
}
}
else
{
lean_object* v_a_1625_; lean_object* v___x_1627_; uint8_t v_isShared_1628_; uint8_t v_isSharedCheck_1635_; 
v_a_1625_ = lean_ctor_get(v___x_1616_, 0);
v_isSharedCheck_1635_ = !lean_is_exclusive(v___x_1616_);
if (v_isSharedCheck_1635_ == 0)
{
v___x_1627_ = v___x_1616_;
v_isShared_1628_ = v_isSharedCheck_1635_;
goto v_resetjp_1626_;
}
else
{
lean_inc(v_a_1625_);
lean_dec(v___x_1616_);
v___x_1627_ = lean_box(0);
v_isShared_1628_ = v_isSharedCheck_1635_;
goto v_resetjp_1626_;
}
v_resetjp_1626_:
{
lean_object* v___x_1630_; 
if (v_isShared_1595_ == 0)
{
lean_ctor_set(v___x_1594_, 1, v_a_1625_);
lean_ctor_set(v___x_1594_, 0, v_a_1605_);
v___x_1630_ = v___x_1594_;
goto v_reusejp_1629_;
}
else
{
lean_object* v_reuseFailAlloc_1634_; 
v_reuseFailAlloc_1634_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1634_, 0, v_a_1605_);
lean_ctor_set(v_reuseFailAlloc_1634_, 1, v_a_1625_);
v___x_1630_ = v_reuseFailAlloc_1634_;
goto v_reusejp_1629_;
}
v_reusejp_1629_:
{
lean_object* v___x_1632_; 
if (v_isShared_1628_ == 0)
{
lean_ctor_set(v___x_1627_, 0, v___x_1630_);
v___x_1632_ = v___x_1627_;
goto v_reusejp_1631_;
}
else
{
lean_object* v_reuseFailAlloc_1633_; 
v_reuseFailAlloc_1633_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1633_, 0, v___x_1630_);
v___x_1632_ = v_reuseFailAlloc_1633_;
goto v_reusejp_1631_;
}
v_reusejp_1631_:
{
return v___x_1632_;
}
}
}
}
}
}
}
}
default: 
{
lean_object* v_indent_1637_; lean_object* v_cls_1638_; lean_object* v_msg_1639_; lean_object* v_collapsed_1640_; lean_object* v_children_1641_; lean_object* v___x_1642_; 
v_indent_1637_ = lean_ctor_get(v_a_1528_, 0);
lean_inc(v_indent_1637_);
v_cls_1638_ = lean_ctor_get(v_a_1528_, 1);
lean_inc(v_cls_1638_);
v_msg_1639_ = lean_ctor_get(v_a_1528_, 2);
lean_inc(v_msg_1639_);
v_collapsed_1640_ = lean_ctor_get(v_a_1528_, 3);
lean_inc(v_collapsed_1640_);
v_children_1641_ = lean_ctor_get(v_a_1528_, 4);
lean_inc(v_children_1641_);
lean_dec_ref_known(v_a_1528_, 5);
v___x_1642_ = l_Lean_Json_getNat_x3f(v_indent_1637_);
if (lean_obj_tag(v___x_1642_) == 0)
{
lean_object* v_a_1643_; lean_object* v___x_1645_; uint8_t v_isShared_1646_; uint8_t v_isSharedCheck_1650_; 
lean_dec(v_children_1641_);
lean_dec(v_collapsed_1640_);
lean_dec(v_msg_1639_);
lean_dec(v_cls_1638_);
lean_dec_ref(v___x_1529_);
v_a_1643_ = lean_ctor_get(v___x_1642_, 0);
v_isSharedCheck_1650_ = !lean_is_exclusive(v___x_1642_);
if (v_isSharedCheck_1650_ == 0)
{
v___x_1645_ = v___x_1642_;
v_isShared_1646_ = v_isSharedCheck_1650_;
goto v_resetjp_1644_;
}
else
{
lean_inc(v_a_1643_);
lean_dec(v___x_1642_);
v___x_1645_ = lean_box(0);
v_isShared_1646_ = v_isSharedCheck_1650_;
goto v_resetjp_1644_;
}
v_resetjp_1644_:
{
lean_object* v___x_1648_; 
if (v_isShared_1646_ == 0)
{
v___x_1648_ = v___x_1645_;
goto v_reusejp_1647_;
}
else
{
lean_object* v_reuseFailAlloc_1649_; 
v_reuseFailAlloc_1649_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1649_, 0, v_a_1643_);
v___x_1648_ = v_reuseFailAlloc_1649_;
goto v_reusejp_1647_;
}
v_reusejp_1647_:
{
return v___x_1648_;
}
}
}
else
{
lean_object* v_a_1651_; lean_object* v___x_1652_; 
v_a_1651_ = lean_ctor_get(v___x_1642_, 0);
lean_inc(v_a_1651_);
lean_dec_ref_known(v___x_1642_, 1);
v___x_1652_ = l_Lean_Name_fromJson_x3f(v_cls_1638_);
if (lean_obj_tag(v___x_1652_) == 0)
{
lean_object* v_a_1653_; lean_object* v___x_1655_; uint8_t v_isShared_1656_; uint8_t v_isSharedCheck_1660_; 
lean_dec(v_a_1651_);
lean_dec(v_children_1641_);
lean_dec(v_collapsed_1640_);
lean_dec(v_msg_1639_);
lean_dec_ref(v___x_1529_);
v_a_1653_ = lean_ctor_get(v___x_1652_, 0);
v_isSharedCheck_1660_ = !lean_is_exclusive(v___x_1652_);
if (v_isSharedCheck_1660_ == 0)
{
v___x_1655_ = v___x_1652_;
v_isShared_1656_ = v_isSharedCheck_1660_;
goto v_resetjp_1654_;
}
else
{
lean_inc(v_a_1653_);
lean_dec(v___x_1652_);
v___x_1655_ = lean_box(0);
v_isShared_1656_ = v_isSharedCheck_1660_;
goto v_resetjp_1654_;
}
v_resetjp_1654_:
{
lean_object* v___x_1658_; 
if (v_isShared_1656_ == 0)
{
v___x_1658_ = v___x_1655_;
goto v_reusejp_1657_;
}
else
{
lean_object* v_reuseFailAlloc_1659_; 
v_reuseFailAlloc_1659_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1659_, 0, v_a_1653_);
v___x_1658_ = v_reuseFailAlloc_1659_;
goto v_reusejp_1657_;
}
v_reusejp_1657_:
{
return v___x_1658_;
}
}
}
else
{
lean_object* v_a_1661_; lean_object* v___x_1662_; 
v_a_1661_ = lean_ctor_get(v___x_1652_, 0);
lean_inc(v_a_1661_);
lean_dec_ref_known(v___x_1652_, 1);
v___x_1662_ = l_Lean_Widget_instFromJsonTaggedText_fromJson___at___00Lean_Widget_instRpcEncodableMsgEmbed_dec_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__spec__4(v_msg_1639_);
if (lean_obj_tag(v___x_1662_) == 0)
{
lean_object* v_a_1663_; lean_object* v___x_1665_; uint8_t v_isShared_1666_; uint8_t v_isSharedCheck_1670_; 
lean_dec(v_a_1661_);
lean_dec(v_a_1651_);
lean_dec(v_children_1641_);
lean_dec(v_collapsed_1640_);
lean_dec_ref(v___x_1529_);
v_a_1663_ = lean_ctor_get(v___x_1662_, 0);
v_isSharedCheck_1670_ = !lean_is_exclusive(v___x_1662_);
if (v_isSharedCheck_1670_ == 0)
{
v___x_1665_ = v___x_1662_;
v_isShared_1666_ = v_isSharedCheck_1670_;
goto v_resetjp_1664_;
}
else
{
lean_inc(v_a_1663_);
lean_dec(v___x_1662_);
v___x_1665_ = lean_box(0);
v_isShared_1666_ = v_isSharedCheck_1670_;
goto v_resetjp_1664_;
}
v_resetjp_1664_:
{
lean_object* v___x_1668_; 
if (v_isShared_1666_ == 0)
{
v___x_1668_ = v___x_1665_;
goto v_reusejp_1667_;
}
else
{
lean_object* v_reuseFailAlloc_1669_; 
v_reuseFailAlloc_1669_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1669_, 0, v_a_1663_);
v___x_1668_ = v_reuseFailAlloc_1669_;
goto v_reusejp_1667_;
}
v_reusejp_1667_:
{
return v___x_1668_;
}
}
}
else
{
lean_object* v_a_1671_; lean_object* v___x_1672_; 
v_a_1671_ = lean_ctor_get(v___x_1662_, 0);
lean_inc(v_a_1671_);
lean_dec_ref_known(v___x_1662_, 1);
v___x_1672_ = l_Lean_Widget_TaggedText_mapM___at___00Lean_Widget_instRpcEncodableMsgEmbed_dec_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__spec__5___redArg(v___x_1529_, v_a_1671_, v_a_1518_);
if (lean_obj_tag(v___x_1672_) == 0)
{
lean_object* v_a_1673_; lean_object* v___x_1675_; uint8_t v_isShared_1676_; uint8_t v_isSharedCheck_1680_; 
lean_dec(v_a_1661_);
lean_dec(v_a_1651_);
lean_dec(v_children_1641_);
lean_dec(v_collapsed_1640_);
v_a_1673_ = lean_ctor_get(v___x_1672_, 0);
v_isSharedCheck_1680_ = !lean_is_exclusive(v___x_1672_);
if (v_isSharedCheck_1680_ == 0)
{
v___x_1675_ = v___x_1672_;
v_isShared_1676_ = v_isSharedCheck_1680_;
goto v_resetjp_1674_;
}
else
{
lean_inc(v_a_1673_);
lean_dec(v___x_1672_);
v___x_1675_ = lean_box(0);
v_isShared_1676_ = v_isSharedCheck_1680_;
goto v_resetjp_1674_;
}
v_resetjp_1674_:
{
lean_object* v___x_1678_; 
if (v_isShared_1676_ == 0)
{
v___x_1678_ = v___x_1675_;
goto v_reusejp_1677_;
}
else
{
lean_object* v_reuseFailAlloc_1679_; 
v_reuseFailAlloc_1679_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1679_, 0, v_a_1673_);
v___x_1678_ = v_reuseFailAlloc_1679_;
goto v_reusejp_1677_;
}
v_reusejp_1677_:
{
return v___x_1678_;
}
}
}
else
{
lean_object* v_a_1681_; lean_object* v___x_1682_; 
v_a_1681_ = lean_ctor_get(v___x_1672_, 0);
lean_inc(v_a_1681_);
lean_dec_ref_known(v___x_1672_, 1);
v___x_1682_ = l_Lean_Json_getBool_x3f(v_collapsed_1640_);
lean_dec(v_collapsed_1640_);
if (lean_obj_tag(v___x_1682_) == 0)
{
lean_object* v_a_1683_; lean_object* v___x_1685_; uint8_t v_isShared_1686_; uint8_t v_isSharedCheck_1690_; 
lean_dec(v_a_1681_);
lean_dec(v_a_1661_);
lean_dec(v_a_1651_);
lean_dec(v_children_1641_);
v_a_1683_ = lean_ctor_get(v___x_1682_, 0);
v_isSharedCheck_1690_ = !lean_is_exclusive(v___x_1682_);
if (v_isSharedCheck_1690_ == 0)
{
v___x_1685_ = v___x_1682_;
v_isShared_1686_ = v_isSharedCheck_1690_;
goto v_resetjp_1684_;
}
else
{
lean_inc(v_a_1683_);
lean_dec(v___x_1682_);
v___x_1685_ = lean_box(0);
v_isShared_1686_ = v_isSharedCheck_1690_;
goto v_resetjp_1684_;
}
v_resetjp_1684_:
{
lean_object* v___x_1688_; 
if (v_isShared_1686_ == 0)
{
v___x_1688_ = v___x_1685_;
goto v_reusejp_1687_;
}
else
{
lean_object* v_reuseFailAlloc_1689_; 
v_reuseFailAlloc_1689_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1689_, 0, v_a_1683_);
v___x_1688_ = v_reuseFailAlloc_1689_;
goto v_reusejp_1687_;
}
v_reusejp_1687_:
{
return v___x_1688_;
}
}
}
else
{
lean_object* v_a_1691_; lean_object* v___x_1692_; 
v_a_1691_ = lean_ctor_get(v___x_1682_, 0);
lean_inc(v_a_1691_);
lean_dec_ref_known(v___x_1682_, 1);
v___x_1692_ = l_Lean_Widget_instRpcEncodableStrictOrLazy_dec_00___x40_Lean_Widget_InteractiveDiagnostic_2157017296____hygCtx___hyg_1____at___00Lean_Widget_instRpcEncodableMsgEmbed_dec_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__spec__7(v_children_1641_, v_a_1518_);
if (lean_obj_tag(v___x_1692_) == 0)
{
lean_object* v_a_1693_; lean_object* v___x_1695_; uint8_t v_isShared_1696_; uint8_t v_isSharedCheck_1700_; 
lean_dec(v_a_1691_);
lean_dec(v_a_1681_);
lean_dec(v_a_1661_);
lean_dec(v_a_1651_);
v_a_1693_ = lean_ctor_get(v___x_1692_, 0);
v_isSharedCheck_1700_ = !lean_is_exclusive(v___x_1692_);
if (v_isSharedCheck_1700_ == 0)
{
v___x_1695_ = v___x_1692_;
v_isShared_1696_ = v_isSharedCheck_1700_;
goto v_resetjp_1694_;
}
else
{
lean_inc(v_a_1693_);
lean_dec(v___x_1692_);
v___x_1695_ = lean_box(0);
v_isShared_1696_ = v_isSharedCheck_1700_;
goto v_resetjp_1694_;
}
v_resetjp_1694_:
{
lean_object* v___x_1698_; 
if (v_isShared_1696_ == 0)
{
v___x_1698_ = v___x_1695_;
goto v_reusejp_1697_;
}
else
{
lean_object* v_reuseFailAlloc_1699_; 
v_reuseFailAlloc_1699_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1699_, 0, v_a_1693_);
v___x_1698_ = v_reuseFailAlloc_1699_;
goto v_reusejp_1697_;
}
v_reusejp_1697_:
{
return v___x_1698_;
}
}
}
else
{
lean_object* v_a_1701_; lean_object* v___x_1703_; uint8_t v_isShared_1704_; uint8_t v_isSharedCheck_1710_; 
v_a_1701_ = lean_ctor_get(v___x_1692_, 0);
v_isSharedCheck_1710_ = !lean_is_exclusive(v___x_1692_);
if (v_isSharedCheck_1710_ == 0)
{
v___x_1703_ = v___x_1692_;
v_isShared_1704_ = v_isSharedCheck_1710_;
goto v_resetjp_1702_;
}
else
{
lean_inc(v_a_1701_);
lean_dec(v___x_1692_);
v___x_1703_ = lean_box(0);
v_isShared_1704_ = v_isSharedCheck_1710_;
goto v_resetjp_1702_;
}
v_resetjp_1702_:
{
lean_object* v___x_1705_; uint8_t v___x_1706_; lean_object* v___x_1708_; 
v___x_1705_ = lean_alloc_ctor(3, 4, 1);
lean_ctor_set(v___x_1705_, 0, v_a_1651_);
lean_ctor_set(v___x_1705_, 1, v_a_1661_);
lean_ctor_set(v___x_1705_, 2, v_a_1681_);
lean_ctor_set(v___x_1705_, 3, v_a_1701_);
v___x_1706_ = lean_unbox(v_a_1691_);
lean_dec(v_a_1691_);
lean_ctor_set_uint8(v___x_1705_, sizeof(void*)*4, v___x_1706_);
if (v_isShared_1704_ == 0)
{
lean_ctor_set(v___x_1703_, 0, v___x_1705_);
v___x_1708_ = v___x_1703_;
goto v_reusejp_1707_;
}
else
{
lean_object* v_reuseFailAlloc_1709_; 
v_reuseFailAlloc_1709_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1709_, 0, v___x_1705_);
v___x_1708_ = v_reuseFailAlloc_1709_;
goto v_reusejp_1707_;
}
v_reusejp_1707_:
{
return v___x_1708_;
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
LEAN_EXPORT lean_object* l_Lean_Widget_instRpcEncodableMsgEmbed_dec_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1____boxed(lean_object* v_j_1711_, lean_object* v_a_1712_){
_start:
{
lean_object* v_res_1713_; 
v_res_1713_ = l_Lean_Widget_instRpcEncodableMsgEmbed_dec_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1_(v_j_1711_, v_a_1712_);
lean_dec_ref(v_a_1712_);
return v_res_1713_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_instRpcEncodableStrictOrLazy_dec_00___x40_Lean_Widget_InteractiveDiagnostic_2157017296____hygCtx___hyg_1____at___00Lean_Widget_instRpcEncodableMsgEmbed_dec_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__spec__7_spec__14(size_t v_sz_1714_, size_t v_i_1715_, lean_object* v_bs_1716_, lean_object* v___y_1717_){
_start:
{
uint8_t v___x_1718_; 
v___x_1718_ = lean_usize_dec_lt(v_i_1715_, v_sz_1714_);
if (v___x_1718_ == 0)
{
lean_object* v___x_1719_; lean_object* v___x_1720_; 
v___x_1719_ = l_unsafeCast___redArg(v_bs_1716_);
lean_dec_ref(v_bs_1716_);
v___x_1720_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1720_, 0, v___x_1719_);
return v___x_1720_;
}
else
{
lean_object* v_v_1721_; lean_object* v___x_1722_; lean_object* v___x_1723_; 
v_v_1721_ = lean_array_uget_borrowed(v_bs_1716_, v_i_1715_);
v___x_1722_ = l_unsafeCast___redArg(v_v_1721_);
v___x_1723_ = l_Lean_Widget_instFromJsonTaggedText_fromJson___at___00Lean_Widget_instRpcEncodableMsgEmbed_dec_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__spec__4(v___x_1722_);
if (lean_obj_tag(v___x_1723_) == 0)
{
lean_object* v_a_1724_; lean_object* v___x_1726_; uint8_t v_isShared_1727_; uint8_t v_isSharedCheck_1731_; 
lean_dec_ref(v_bs_1716_);
v_a_1724_ = lean_ctor_get(v___x_1723_, 0);
v_isSharedCheck_1731_ = !lean_is_exclusive(v___x_1723_);
if (v_isSharedCheck_1731_ == 0)
{
v___x_1726_ = v___x_1723_;
v_isShared_1727_ = v_isSharedCheck_1731_;
goto v_resetjp_1725_;
}
else
{
lean_inc(v_a_1724_);
lean_dec(v___x_1723_);
v___x_1726_ = lean_box(0);
v_isShared_1727_ = v_isSharedCheck_1731_;
goto v_resetjp_1725_;
}
v_resetjp_1725_:
{
lean_object* v___x_1729_; 
if (v_isShared_1727_ == 0)
{
v___x_1729_ = v___x_1726_;
goto v_reusejp_1728_;
}
else
{
lean_object* v_reuseFailAlloc_1730_; 
v_reuseFailAlloc_1730_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1730_, 0, v_a_1724_);
v___x_1729_ = v_reuseFailAlloc_1730_;
goto v_reusejp_1728_;
}
v_reusejp_1728_:
{
return v___x_1729_;
}
}
}
else
{
lean_object* v_a_1732_; lean_object* v___x_1733_; lean_object* v___x_1734_; 
v_a_1732_ = lean_ctor_get(v___x_1723_, 0);
lean_inc(v_a_1732_);
lean_dec_ref_known(v___x_1723_, 1);
v___x_1733_ = lean_alloc_closure((void*)(l_Lean_Widget_instRpcEncodableMsgEmbed_dec_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1____boxed), 2, 0);
v___x_1734_ = l_Lean_Widget_TaggedText_mapM___at___00Lean_Widget_instRpcEncodableMsgEmbed_dec_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__spec__5___redArg(v___x_1733_, v_a_1732_, v___y_1717_);
if (lean_obj_tag(v___x_1734_) == 0)
{
lean_object* v_a_1735_; lean_object* v___x_1737_; uint8_t v_isShared_1738_; uint8_t v_isSharedCheck_1742_; 
lean_dec_ref(v_bs_1716_);
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
v_reuseFailAlloc_1741_ = lean_alloc_ctor(0, 1, 0);
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
else
{
lean_object* v_a_1743_; lean_object* v___x_1744_; lean_object* v_bs_x27_1745_; size_t v___x_1746_; size_t v___x_1747_; lean_object* v___x_1748_; lean_object* v___x_1749_; 
v_a_1743_ = lean_ctor_get(v___x_1734_, 0);
lean_inc(v_a_1743_);
lean_dec_ref_known(v___x_1734_, 1);
v___x_1744_ = lean_unsigned_to_nat(0u);
v_bs_x27_1745_ = lean_array_uset(v_bs_1716_, v_i_1715_, v___x_1744_);
v___x_1746_ = ((size_t)1ULL);
v___x_1747_ = lean_usize_add(v_i_1715_, v___x_1746_);
v___x_1748_ = l_unsafeCast___redArg(v_a_1743_);
lean_dec(v_a_1743_);
v___x_1749_ = lean_array_uset(v_bs_x27_1745_, v_i_1715_, v___x_1748_);
v_i_1715_ = v___x_1747_;
v_bs_1716_ = v___x_1749_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_instRpcEncodableStrictOrLazy_dec_00___x40_Lean_Widget_InteractiveDiagnostic_2157017296____hygCtx___hyg_1____at___00Lean_Widget_instRpcEncodableMsgEmbed_dec_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__spec__7___boxed(lean_object* v_j_1751_, lean_object* v_a_1752_){
_start:
{
lean_object* v_res_1753_; 
v_res_1753_ = l_Lean_Widget_instRpcEncodableStrictOrLazy_dec_00___x40_Lean_Widget_InteractiveDiagnostic_2157017296____hygCtx___hyg_1____at___00Lean_Widget_instRpcEncodableMsgEmbed_dec_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__spec__7(v_j_1751_, v_a_1752_);
lean_dec_ref(v_a_1752_);
return v_res_1753_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_mapM___at___00Lean_Widget_instRpcEncodableMsgEmbed_enc_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__spec__0(lean_object* v_00_u03b1_1754_, lean_object* v_00_u03b2_1755_, lean_object* v_f_1756_, lean_object* v_x_1757_, lean_object* v___y_1758_){
_start:
{
lean_object* v___x_1759_; 
v___x_1759_ = l_Lean_Widget_TaggedText_mapM___at___00Lean_Widget_instRpcEncodableMsgEmbed_enc_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__spec__0___redArg(v_f_1756_, v_x_1757_, v___y_1758_);
return v___x_1759_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_mapM___at___00Lean_Widget_instRpcEncodableMsgEmbed_dec_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__spec__5(lean_object* v_00_u03b1_1760_, lean_object* v_00_u03b2_1761_, lean_object* v_f_1762_, lean_object* v_x_1763_, lean_object* v___y_1764_){
_start:
{
lean_object* v___x_1765_; 
v___x_1765_ = l_Lean_Widget_TaggedText_mapM___at___00Lean_Widget_instRpcEncodableMsgEmbed_dec_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__spec__5___redArg(v_f_1762_, v_x_1763_, v___y_1764_);
return v___x_1765_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_mapM___at___00Lean_Widget_instRpcEncodableMsgEmbed_dec_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__spec__5___boxed(lean_object* v_00_u03b1_1766_, lean_object* v_00_u03b2_1767_, lean_object* v_f_1768_, lean_object* v_x_1769_, lean_object* v___y_1770_){
_start:
{
lean_object* v_res_1771_; 
v_res_1771_ = l_Lean_Widget_TaggedText_mapM___at___00Lean_Widget_instRpcEncodableMsgEmbed_dec_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__spec__5(v_00_u03b1_1766_, v_00_u03b2_1767_, v_f_1768_, v_x_1769_, v___y_1770_);
lean_dec_ref(v___y_1770_);
return v_res_1771_;
}
}
static lean_object* _init_l_Lean_Widget_instTypeNameInteractiveMessage_unsafe__1___closed__2(void){
_start:
{
lean_object* v___x_1783_; lean_object* v___x_1784_; 
v___x_1783_ = ((lean_object*)(l_Lean_Widget_instTypeNameInteractiveMessage_unsafe__1___closed__1));
v___x_1784_ = l_unsafeCast___redArg(v___x_1783_);
return v___x_1784_;
}
}
static lean_object* _init_l_Lean_Widget_instTypeNameInteractiveMessage_unsafe__1(void){
_start:
{
lean_object* v___x_1785_; 
v___x_1785_ = lean_obj_once(&l_Lean_Widget_instTypeNameInteractiveMessage_unsafe__1___closed__2, &l_Lean_Widget_instTypeNameInteractiveMessage_unsafe__1___closed__2_once, _init_l_Lean_Widget_instTypeNameInteractiveMessage_unsafe__1___closed__2);
return v___x_1785_;
}
}
static lean_object* _init_l_Lean_Widget_instTypeNameInteractiveMessage(void){
_start:
{
lean_object* v___x_1786_; 
v___x_1786_ = lean_obj_once(&l_Lean_Widget_instTypeNameInteractiveMessage_unsafe__1___closed__2, &l_Lean_Widget_instTypeNameInteractiveMessage_unsafe__1___closed__2_once, _init_l_Lean_Widget_instTypeNameInteractiveMessage_unsafe__1___closed__2);
return v___x_1786_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Widget_instFromJsonRpcEncodablePacket_fromJson_00___x40_Lean_Widget_InteractiveDiagnostic_3833933514____hygCtx___hyg_39__spec__0(lean_object* v_j_1787_, lean_object* v_k_1788_){
_start:
{
lean_object* v___x_1789_; lean_object* v___x_1790_; 
v___x_1789_ = l_Lean_Json_getObjValD(v_j_1787_, v_k_1788_);
v___x_1790_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1790_, 0, v___x_1789_);
return v___x_1790_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Widget_instFromJsonRpcEncodablePacket_fromJson_00___x40_Lean_Widget_InteractiveDiagnostic_3833933514____hygCtx___hyg_39__spec__0___boxed(lean_object* v_j_1791_, lean_object* v_k_1792_){
_start:
{
lean_object* v_res_1793_; 
v_res_1793_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Widget_instFromJsonRpcEncodablePacket_fromJson_00___x40_Lean_Widget_InteractiveDiagnostic_3833933514____hygCtx___hyg_39__spec__0(v_j_1791_, v_k_1792_);
lean_dec_ref(v_k_1792_);
return v_res_1793_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Widget_instFromJsonRpcEncodablePacket_fromJson_00___x40_Lean_Widget_InteractiveDiagnostic_3833933514____hygCtx___hyg_39__spec__1_spec__1(lean_object* v_x_1796_){
_start:
{
if (lean_obj_tag(v_x_1796_) == 0)
{
lean_object* v___x_1797_; 
v___x_1797_ = ((lean_object*)(l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Widget_instFromJsonRpcEncodablePacket_fromJson_00___x40_Lean_Widget_InteractiveDiagnostic_3833933514____hygCtx___hyg_39__spec__1_spec__1___closed__0));
return v___x_1797_;
}
else
{
lean_object* v___x_1798_; lean_object* v___x_1799_; 
v___x_1798_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1798_, 0, v_x_1796_);
v___x_1799_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1799_, 0, v___x_1798_);
return v___x_1799_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Widget_instFromJsonRpcEncodablePacket_fromJson_00___x40_Lean_Widget_InteractiveDiagnostic_3833933514____hygCtx___hyg_39__spec__1(lean_object* v_j_1800_, lean_object* v_k_1801_){
_start:
{
lean_object* v___x_1802_; lean_object* v___x_1803_; 
v___x_1802_ = l_Lean_Json_getObjValD(v_j_1800_, v_k_1801_);
v___x_1803_ = l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Widget_instFromJsonRpcEncodablePacket_fromJson_00___x40_Lean_Widget_InteractiveDiagnostic_3833933514____hygCtx___hyg_39__spec__1_spec__1(v___x_1802_);
return v___x_1803_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Widget_instFromJsonRpcEncodablePacket_fromJson_00___x40_Lean_Widget_InteractiveDiagnostic_3833933514____hygCtx___hyg_39__spec__1___boxed(lean_object* v_j_1804_, lean_object* v_k_1805_){
_start:
{
lean_object* v_res_1806_; 
v_res_1806_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Widget_instFromJsonRpcEncodablePacket_fromJson_00___x40_Lean_Widget_InteractiveDiagnostic_3833933514____hygCtx___hyg_39__spec__1(v_j_1804_, v_k_1805_);
lean_dec_ref(v_k_1805_);
return v_res_1806_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson_00___x40_Lean_Widget_InteractiveDiagnostic_3833933514____hygCtx___hyg_39_(lean_object* v_json_1818_){
_start:
{
lean_object* v___x_1819_; lean_object* v___x_1820_; lean_object* v_a_1821_; lean_object* v___x_1822_; lean_object* v___x_1823_; lean_object* v_a_1824_; lean_object* v___x_1825_; lean_object* v___x_1826_; lean_object* v_a_1827_; lean_object* v___x_1828_; lean_object* v___x_1829_; lean_object* v_a_1830_; lean_object* v___x_1831_; lean_object* v___x_1832_; lean_object* v_a_1833_; lean_object* v___x_1834_; lean_object* v___x_1835_; lean_object* v_a_1836_; lean_object* v___x_1837_; lean_object* v___x_1838_; lean_object* v_a_1839_; lean_object* v___x_1840_; lean_object* v___x_1841_; lean_object* v_a_1842_; lean_object* v___x_1843_; lean_object* v___x_1844_; lean_object* v_a_1845_; lean_object* v___x_1846_; lean_object* v___x_1847_; lean_object* v_a_1848_; lean_object* v___x_1849_; lean_object* v___x_1850_; lean_object* v_a_1851_; lean_object* v___x_1853_; uint8_t v_isShared_1854_; uint8_t v_isSharedCheck_1859_; 
v___x_1819_ = ((lean_object*)(l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__0_00___x40_Lean_Widget_InteractiveDiagnostic_3833933514____hygCtx___hyg_39_));
lean_inc_n(v_json_1818_, 10);
v___x_1820_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Widget_instFromJsonRpcEncodablePacket_fromJson_00___x40_Lean_Widget_InteractiveDiagnostic_3833933514____hygCtx___hyg_39__spec__0(v_json_1818_, v___x_1819_);
v_a_1821_ = lean_ctor_get(v___x_1820_, 0);
lean_inc(v_a_1821_);
lean_dec_ref(v___x_1820_);
v___x_1822_ = ((lean_object*)(l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__1_00___x40_Lean_Widget_InteractiveDiagnostic_3833933514____hygCtx___hyg_39_));
v___x_1823_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Widget_instFromJsonRpcEncodablePacket_fromJson_00___x40_Lean_Widget_InteractiveDiagnostic_3833933514____hygCtx___hyg_39__spec__1(v_json_1818_, v___x_1822_);
v_a_1824_ = lean_ctor_get(v___x_1823_, 0);
lean_inc(v_a_1824_);
lean_dec_ref(v___x_1823_);
v___x_1825_ = ((lean_object*)(l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__2_00___x40_Lean_Widget_InteractiveDiagnostic_3833933514____hygCtx___hyg_39_));
v___x_1826_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Widget_instFromJsonRpcEncodablePacket_fromJson_00___x40_Lean_Widget_InteractiveDiagnostic_3833933514____hygCtx___hyg_39__spec__1(v_json_1818_, v___x_1825_);
v_a_1827_ = lean_ctor_get(v___x_1826_, 0);
lean_inc(v_a_1827_);
lean_dec_ref(v___x_1826_);
v___x_1828_ = ((lean_object*)(l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__3_00___x40_Lean_Widget_InteractiveDiagnostic_3833933514____hygCtx___hyg_39_));
v___x_1829_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Widget_instFromJsonRpcEncodablePacket_fromJson_00___x40_Lean_Widget_InteractiveDiagnostic_3833933514____hygCtx___hyg_39__spec__1(v_json_1818_, v___x_1828_);
v_a_1830_ = lean_ctor_get(v___x_1829_, 0);
lean_inc(v_a_1830_);
lean_dec_ref(v___x_1829_);
v___x_1831_ = ((lean_object*)(l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__4_00___x40_Lean_Widget_InteractiveDiagnostic_3833933514____hygCtx___hyg_39_));
v___x_1832_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Widget_instFromJsonRpcEncodablePacket_fromJson_00___x40_Lean_Widget_InteractiveDiagnostic_3833933514____hygCtx___hyg_39__spec__1(v_json_1818_, v___x_1831_);
v_a_1833_ = lean_ctor_get(v___x_1832_, 0);
lean_inc(v_a_1833_);
lean_dec_ref(v___x_1832_);
v___x_1834_ = ((lean_object*)(l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__5_00___x40_Lean_Widget_InteractiveDiagnostic_3833933514____hygCtx___hyg_39_));
v___x_1835_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Widget_instFromJsonRpcEncodablePacket_fromJson_00___x40_Lean_Widget_InteractiveDiagnostic_3833933514____hygCtx___hyg_39__spec__1(v_json_1818_, v___x_1834_);
v_a_1836_ = lean_ctor_get(v___x_1835_, 0);
lean_inc(v_a_1836_);
lean_dec_ref(v___x_1835_);
v___x_1837_ = ((lean_object*)(l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__6_00___x40_Lean_Widget_InteractiveDiagnostic_3833933514____hygCtx___hyg_39_));
v___x_1838_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Widget_instFromJsonRpcEncodablePacket_fromJson_00___x40_Lean_Widget_InteractiveDiagnostic_3833933514____hygCtx___hyg_39__spec__0(v_json_1818_, v___x_1837_);
v_a_1839_ = lean_ctor_get(v___x_1838_, 0);
lean_inc(v_a_1839_);
lean_dec_ref(v___x_1838_);
v___x_1840_ = ((lean_object*)(l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__7_00___x40_Lean_Widget_InteractiveDiagnostic_3833933514____hygCtx___hyg_39_));
v___x_1841_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Widget_instFromJsonRpcEncodablePacket_fromJson_00___x40_Lean_Widget_InteractiveDiagnostic_3833933514____hygCtx___hyg_39__spec__1(v_json_1818_, v___x_1840_);
v_a_1842_ = lean_ctor_get(v___x_1841_, 0);
lean_inc(v_a_1842_);
lean_dec_ref(v___x_1841_);
v___x_1843_ = ((lean_object*)(l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__8_00___x40_Lean_Widget_InteractiveDiagnostic_3833933514____hygCtx___hyg_39_));
v___x_1844_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Widget_instFromJsonRpcEncodablePacket_fromJson_00___x40_Lean_Widget_InteractiveDiagnostic_3833933514____hygCtx___hyg_39__spec__1(v_json_1818_, v___x_1843_);
v_a_1845_ = lean_ctor_get(v___x_1844_, 0);
lean_inc(v_a_1845_);
lean_dec_ref(v___x_1844_);
v___x_1846_ = ((lean_object*)(l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__9_00___x40_Lean_Widget_InteractiveDiagnostic_3833933514____hygCtx___hyg_39_));
v___x_1847_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Widget_instFromJsonRpcEncodablePacket_fromJson_00___x40_Lean_Widget_InteractiveDiagnostic_3833933514____hygCtx___hyg_39__spec__1(v_json_1818_, v___x_1846_);
v_a_1848_ = lean_ctor_get(v___x_1847_, 0);
lean_inc(v_a_1848_);
lean_dec_ref(v___x_1847_);
v___x_1849_ = ((lean_object*)(l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__10_00___x40_Lean_Widget_InteractiveDiagnostic_3833933514____hygCtx___hyg_39_));
v___x_1850_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Widget_instFromJsonRpcEncodablePacket_fromJson_00___x40_Lean_Widget_InteractiveDiagnostic_3833933514____hygCtx___hyg_39__spec__1(v_json_1818_, v___x_1849_);
v_a_1851_ = lean_ctor_get(v___x_1850_, 0);
v_isSharedCheck_1859_ = !lean_is_exclusive(v___x_1850_);
if (v_isSharedCheck_1859_ == 0)
{
v___x_1853_ = v___x_1850_;
v_isShared_1854_ = v_isSharedCheck_1859_;
goto v_resetjp_1852_;
}
else
{
lean_inc(v_a_1851_);
lean_dec(v___x_1850_);
v___x_1853_ = lean_box(0);
v_isShared_1854_ = v_isSharedCheck_1859_;
goto v_resetjp_1852_;
}
v_resetjp_1852_:
{
lean_object* v___x_1855_; lean_object* v___x_1857_; 
v___x_1855_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_1855_, 0, v_a_1821_);
lean_ctor_set(v___x_1855_, 1, v_a_1824_);
lean_ctor_set(v___x_1855_, 2, v_a_1827_);
lean_ctor_set(v___x_1855_, 3, v_a_1830_);
lean_ctor_set(v___x_1855_, 4, v_a_1833_);
lean_ctor_set(v___x_1855_, 5, v_a_1836_);
lean_ctor_set(v___x_1855_, 6, v_a_1839_);
lean_ctor_set(v___x_1855_, 7, v_a_1842_);
lean_ctor_set(v___x_1855_, 8, v_a_1845_);
lean_ctor_set(v___x_1855_, 9, v_a_1848_);
lean_ctor_set(v___x_1855_, 10, v_a_1851_);
if (v_isShared_1854_ == 0)
{
lean_ctor_set(v___x_1853_, 0, v___x_1855_);
v___x_1857_ = v___x_1853_;
goto v_reusejp_1856_;
}
else
{
lean_object* v_reuseFailAlloc_1858_; 
v_reuseFailAlloc_1858_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1858_, 0, v___x_1855_);
v___x_1857_ = v_reuseFailAlloc_1858_;
goto v_reusejp_1856_;
}
v_reusejp_1856_:
{
return v___x_1857_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___00Lean_Widget_instToJsonRpcEncodablePacket_toJson_00___x40_Lean_Widget_InteractiveDiagnostic_3833933514____hygCtx___hyg_58__spec__0(lean_object* v_k_1862_, lean_object* v_x_1863_){
_start:
{
if (lean_obj_tag(v_x_1863_) == 0)
{
lean_object* v___x_1864_; 
lean_dec_ref(v_k_1862_);
v___x_1864_ = lean_box(0);
return v___x_1864_;
}
else
{
lean_object* v_val_1865_; lean_object* v___x_1866_; lean_object* v___x_1867_; lean_object* v___x_1868_; 
v_val_1865_ = lean_ctor_get(v_x_1863_, 0);
lean_inc(v_val_1865_);
v___x_1866_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1866_, 0, v_k_1862_);
lean_ctor_set(v___x_1866_, 1, v_val_1865_);
v___x_1867_ = lean_box(0);
v___x_1868_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1868_, 0, v___x_1866_);
lean_ctor_set(v___x_1868_, 1, v___x_1867_);
return v___x_1868_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___00Lean_Widget_instToJsonRpcEncodablePacket_toJson_00___x40_Lean_Widget_InteractiveDiagnostic_3833933514____hygCtx___hyg_58__spec__0___boxed(lean_object* v_k_1869_, lean_object* v_x_1870_){
_start:
{
lean_object* v_res_1871_; 
v_res_1871_ = l_Lean_Json_opt___at___00Lean_Widget_instToJsonRpcEncodablePacket_toJson_00___x40_Lean_Widget_InteractiveDiagnostic_3833933514____hygCtx___hyg_58__spec__0(v_k_1869_, v_x_1870_);
lean_dec(v_x_1870_);
return v_res_1871_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lean_Widget_instToJsonRpcEncodablePacket_toJson_00___x40_Lean_Widget_InteractiveDiagnostic_3833933514____hygCtx___hyg_58__spec__1(lean_object* v_a_1872_, lean_object* v_a_1873_){
_start:
{
if (lean_obj_tag(v_a_1872_) == 0)
{
lean_object* v___x_1874_; 
v___x_1874_ = lean_array_to_list(v_a_1873_);
return v___x_1874_;
}
else
{
lean_object* v_head_1875_; lean_object* v_tail_1876_; lean_object* v___x_1877_; 
v_head_1875_ = lean_ctor_get(v_a_1872_, 0);
lean_inc(v_head_1875_);
v_tail_1876_ = lean_ctor_get(v_a_1872_, 1);
lean_inc(v_tail_1876_);
lean_dec_ref_known(v_a_1872_, 2);
v___x_1877_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_a_1873_, v_head_1875_);
v_a_1872_ = v_tail_1876_;
v_a_1873_ = v___x_1877_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_instToJsonRpcEncodablePacket_toJson_00___x40_Lean_Widget_InteractiveDiagnostic_3833933514____hygCtx___hyg_58_(lean_object* v_x_1881_){
_start:
{
lean_object* v_range_1882_; lean_object* v_fullRange_x3f_1883_; lean_object* v_severity_x3f_1884_; lean_object* v_isSilent_x3f_1885_; lean_object* v_code_x3f_1886_; lean_object* v_source_x3f_1887_; lean_object* v_message_1888_; lean_object* v_tags_x3f_1889_; lean_object* v_leanTags_x3f_1890_; lean_object* v_relatedInformation_x3f_1891_; lean_object* v_data_x3f_1892_; lean_object* v___x_1893_; lean_object* v___x_1894_; lean_object* v___x_1895_; lean_object* v___x_1896_; lean_object* v___x_1897_; lean_object* v___x_1898_; lean_object* v___x_1899_; lean_object* v___x_1900_; lean_object* v___x_1901_; lean_object* v___x_1902_; lean_object* v___x_1903_; lean_object* v___x_1904_; lean_object* v___x_1905_; lean_object* v___x_1906_; lean_object* v___x_1907_; lean_object* v___x_1908_; lean_object* v___x_1909_; lean_object* v___x_1910_; lean_object* v___x_1911_; lean_object* v___x_1912_; lean_object* v___x_1913_; lean_object* v___x_1914_; lean_object* v___x_1915_; lean_object* v___x_1916_; lean_object* v___x_1917_; lean_object* v___x_1918_; lean_object* v___x_1919_; lean_object* v___x_1920_; lean_object* v___x_1921_; lean_object* v___x_1922_; lean_object* v___x_1923_; lean_object* v___x_1924_; lean_object* v___x_1925_; lean_object* v___x_1926_; lean_object* v___x_1927_; lean_object* v___x_1928_; lean_object* v___x_1929_; lean_object* v___x_1930_; lean_object* v___x_1931_; 
v_range_1882_ = lean_ctor_get(v_x_1881_, 0);
v_fullRange_x3f_1883_ = lean_ctor_get(v_x_1881_, 1);
v_severity_x3f_1884_ = lean_ctor_get(v_x_1881_, 2);
v_isSilent_x3f_1885_ = lean_ctor_get(v_x_1881_, 3);
v_code_x3f_1886_ = lean_ctor_get(v_x_1881_, 4);
v_source_x3f_1887_ = lean_ctor_get(v_x_1881_, 5);
v_message_1888_ = lean_ctor_get(v_x_1881_, 6);
v_tags_x3f_1889_ = lean_ctor_get(v_x_1881_, 7);
v_leanTags_x3f_1890_ = lean_ctor_get(v_x_1881_, 8);
v_relatedInformation_x3f_1891_ = lean_ctor_get(v_x_1881_, 9);
v_data_x3f_1892_ = lean_ctor_get(v_x_1881_, 10);
v___x_1893_ = ((lean_object*)(l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__0_00___x40_Lean_Widget_InteractiveDiagnostic_3833933514____hygCtx___hyg_39_));
lean_inc(v_range_1882_);
v___x_1894_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1894_, 0, v___x_1893_);
lean_ctor_set(v___x_1894_, 1, v_range_1882_);
v___x_1895_ = lean_box(0);
v___x_1896_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1896_, 0, v___x_1894_);
lean_ctor_set(v___x_1896_, 1, v___x_1895_);
v___x_1897_ = ((lean_object*)(l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__1_00___x40_Lean_Widget_InteractiveDiagnostic_3833933514____hygCtx___hyg_39_));
v___x_1898_ = l_Lean_Json_opt___at___00Lean_Widget_instToJsonRpcEncodablePacket_toJson_00___x40_Lean_Widget_InteractiveDiagnostic_3833933514____hygCtx___hyg_58__spec__0(v___x_1897_, v_fullRange_x3f_1883_);
v___x_1899_ = ((lean_object*)(l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__2_00___x40_Lean_Widget_InteractiveDiagnostic_3833933514____hygCtx___hyg_39_));
v___x_1900_ = l_Lean_Json_opt___at___00Lean_Widget_instToJsonRpcEncodablePacket_toJson_00___x40_Lean_Widget_InteractiveDiagnostic_3833933514____hygCtx___hyg_58__spec__0(v___x_1899_, v_severity_x3f_1884_);
v___x_1901_ = ((lean_object*)(l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__3_00___x40_Lean_Widget_InteractiveDiagnostic_3833933514____hygCtx___hyg_39_));
v___x_1902_ = l_Lean_Json_opt___at___00Lean_Widget_instToJsonRpcEncodablePacket_toJson_00___x40_Lean_Widget_InteractiveDiagnostic_3833933514____hygCtx___hyg_58__spec__0(v___x_1901_, v_isSilent_x3f_1885_);
v___x_1903_ = ((lean_object*)(l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__4_00___x40_Lean_Widget_InteractiveDiagnostic_3833933514____hygCtx___hyg_39_));
v___x_1904_ = l_Lean_Json_opt___at___00Lean_Widget_instToJsonRpcEncodablePacket_toJson_00___x40_Lean_Widget_InteractiveDiagnostic_3833933514____hygCtx___hyg_58__spec__0(v___x_1903_, v_code_x3f_1886_);
v___x_1905_ = ((lean_object*)(l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__5_00___x40_Lean_Widget_InteractiveDiagnostic_3833933514____hygCtx___hyg_39_));
v___x_1906_ = l_Lean_Json_opt___at___00Lean_Widget_instToJsonRpcEncodablePacket_toJson_00___x40_Lean_Widget_InteractiveDiagnostic_3833933514____hygCtx___hyg_58__spec__0(v___x_1905_, v_source_x3f_1887_);
v___x_1907_ = ((lean_object*)(l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__6_00___x40_Lean_Widget_InteractiveDiagnostic_3833933514____hygCtx___hyg_39_));
lean_inc(v_message_1888_);
v___x_1908_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1908_, 0, v___x_1907_);
lean_ctor_set(v___x_1908_, 1, v_message_1888_);
v___x_1909_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1909_, 0, v___x_1908_);
lean_ctor_set(v___x_1909_, 1, v___x_1895_);
v___x_1910_ = ((lean_object*)(l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__7_00___x40_Lean_Widget_InteractiveDiagnostic_3833933514____hygCtx___hyg_39_));
v___x_1911_ = l_Lean_Json_opt___at___00Lean_Widget_instToJsonRpcEncodablePacket_toJson_00___x40_Lean_Widget_InteractiveDiagnostic_3833933514____hygCtx___hyg_58__spec__0(v___x_1910_, v_tags_x3f_1889_);
v___x_1912_ = ((lean_object*)(l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__8_00___x40_Lean_Widget_InteractiveDiagnostic_3833933514____hygCtx___hyg_39_));
v___x_1913_ = l_Lean_Json_opt___at___00Lean_Widget_instToJsonRpcEncodablePacket_toJson_00___x40_Lean_Widget_InteractiveDiagnostic_3833933514____hygCtx___hyg_58__spec__0(v___x_1912_, v_leanTags_x3f_1890_);
v___x_1914_ = ((lean_object*)(l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__9_00___x40_Lean_Widget_InteractiveDiagnostic_3833933514____hygCtx___hyg_39_));
v___x_1915_ = l_Lean_Json_opt___at___00Lean_Widget_instToJsonRpcEncodablePacket_toJson_00___x40_Lean_Widget_InteractiveDiagnostic_3833933514____hygCtx___hyg_58__spec__0(v___x_1914_, v_relatedInformation_x3f_1891_);
v___x_1916_ = ((lean_object*)(l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson___closed__10_00___x40_Lean_Widget_InteractiveDiagnostic_3833933514____hygCtx___hyg_39_));
v___x_1917_ = l_Lean_Json_opt___at___00Lean_Widget_instToJsonRpcEncodablePacket_toJson_00___x40_Lean_Widget_InteractiveDiagnostic_3833933514____hygCtx___hyg_58__spec__0(v___x_1916_, v_data_x3f_1892_);
v___x_1918_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1918_, 0, v___x_1917_);
lean_ctor_set(v___x_1918_, 1, v___x_1895_);
v___x_1919_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1919_, 0, v___x_1915_);
lean_ctor_set(v___x_1919_, 1, v___x_1918_);
v___x_1920_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1920_, 0, v___x_1913_);
lean_ctor_set(v___x_1920_, 1, v___x_1919_);
v___x_1921_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1921_, 0, v___x_1911_);
lean_ctor_set(v___x_1921_, 1, v___x_1920_);
v___x_1922_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1922_, 0, v___x_1909_);
lean_ctor_set(v___x_1922_, 1, v___x_1921_);
v___x_1923_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1923_, 0, v___x_1906_);
lean_ctor_set(v___x_1923_, 1, v___x_1922_);
v___x_1924_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1924_, 0, v___x_1904_);
lean_ctor_set(v___x_1924_, 1, v___x_1923_);
v___x_1925_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1925_, 0, v___x_1902_);
lean_ctor_set(v___x_1925_, 1, v___x_1924_);
v___x_1926_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1926_, 0, v___x_1900_);
lean_ctor_set(v___x_1926_, 1, v___x_1925_);
v___x_1927_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1927_, 0, v___x_1898_);
lean_ctor_set(v___x_1927_, 1, v___x_1926_);
v___x_1928_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1928_, 0, v___x_1896_);
lean_ctor_set(v___x_1928_, 1, v___x_1927_);
v___x_1929_ = ((lean_object*)(l_Lean_Widget_instToJsonRpcEncodablePacket_toJson___closed__0_00___x40_Lean_Widget_InteractiveDiagnostic_3833933514____hygCtx___hyg_58_));
v___x_1930_ = l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lean_Widget_instToJsonRpcEncodablePacket_toJson_00___x40_Lean_Widget_InteractiveDiagnostic_3833933514____hygCtx___hyg_58__spec__1(v___x_1928_, v___x_1929_);
v___x_1931_ = l_Lean_Json_mkObj(v___x_1930_);
lean_dec(v___x_1930_);
return v___x_1931_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_instToJsonRpcEncodablePacket_toJson_00___x40_Lean_Widget_InteractiveDiagnostic_3833933514____hygCtx___hyg_58____boxed(lean_object* v_x_1932_){
_start:
{
lean_object* v_res_1933_; 
v_res_1933_ = l_Lean_Widget_instToJsonRpcEncodablePacket_toJson_00___x40_Lean_Widget_InteractiveDiagnostic_3833933514____hygCtx___hyg_58_(v_x_1932_);
lean_dec_ref(v_x_1932_);
return v_res_1933_;
}
}
static lean_object* _init_l_Lean_Widget_instRpcEncodableDiagnosticWith_enc___redArg___lam__0___closed__0_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1936_; lean_object* v___x_1937_; 
v___x_1936_ = lean_unsigned_to_nat(1u);
v___x_1937_ = l_Lean_JsonNumber_fromNat(v___x_1936_);
return v___x_1937_;
}
}
static lean_object* _init_l_Lean_Widget_instRpcEncodableDiagnosticWith_enc___redArg___lam__0___closed__1_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1938_; lean_object* v___x_1939_; 
v___x_1938_ = lean_obj_once(&l_Lean_Widget_instRpcEncodableDiagnosticWith_enc___redArg___lam__0___closed__0_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2_, &l_Lean_Widget_instRpcEncodableDiagnosticWith_enc___redArg___lam__0___closed__0_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2__once, _init_l_Lean_Widget_instRpcEncodableDiagnosticWith_enc___redArg___lam__0___closed__0_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2_);
v___x_1939_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_1939_, 0, v___x_1938_);
return v___x_1939_;
}
}
static lean_object* _init_l_Lean_Widget_instRpcEncodableDiagnosticWith_enc___redArg___lam__0___closed__2_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1940_; lean_object* v___x_1941_; 
v___x_1940_ = lean_unsigned_to_nat(2u);
v___x_1941_ = l_Lean_JsonNumber_fromNat(v___x_1940_);
return v___x_1941_;
}
}
static lean_object* _init_l_Lean_Widget_instRpcEncodableDiagnosticWith_enc___redArg___lam__0___closed__3_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1942_; lean_object* v___x_1943_; 
v___x_1942_ = lean_obj_once(&l_Lean_Widget_instRpcEncodableDiagnosticWith_enc___redArg___lam__0___closed__2_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2_, &l_Lean_Widget_instRpcEncodableDiagnosticWith_enc___redArg___lam__0___closed__2_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2__once, _init_l_Lean_Widget_instRpcEncodableDiagnosticWith_enc___redArg___lam__0___closed__2_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2_);
v___x_1943_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_1943_, 0, v___x_1942_);
return v___x_1943_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_instRpcEncodableDiagnosticWith_enc___redArg___lam__0_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2_(uint8_t v_a_1944_, lean_object* v___y_1945_){
_start:
{
if (v_a_1944_ == 0)
{
lean_object* v___x_1946_; lean_object* v___x_1947_; 
v___x_1946_ = lean_obj_once(&l_Lean_Widget_instRpcEncodableDiagnosticWith_enc___redArg___lam__0___closed__1_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2_, &l_Lean_Widget_instRpcEncodableDiagnosticWith_enc___redArg___lam__0___closed__1_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2__once, _init_l_Lean_Widget_instRpcEncodableDiagnosticWith_enc___redArg___lam__0___closed__1_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2_);
v___x_1947_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1947_, 0, v___x_1946_);
lean_ctor_set(v___x_1947_, 1, v___y_1945_);
return v___x_1947_;
}
else
{
lean_object* v___x_1948_; lean_object* v___x_1949_; 
v___x_1948_ = lean_obj_once(&l_Lean_Widget_instRpcEncodableDiagnosticWith_enc___redArg___lam__0___closed__3_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2_, &l_Lean_Widget_instRpcEncodableDiagnosticWith_enc___redArg___lam__0___closed__3_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2__once, _init_l_Lean_Widget_instRpcEncodableDiagnosticWith_enc___redArg___lam__0___closed__3_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2_);
v___x_1949_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1949_, 0, v___x_1948_);
lean_ctor_set(v___x_1949_, 1, v___y_1945_);
return v___x_1949_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_instRpcEncodableDiagnosticWith_enc___redArg___lam__0_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2____boxed(lean_object* v_a_1950_, lean_object* v___y_1951_){
_start:
{
uint8_t v_a_boxed_1952_; lean_object* v_res_1953_; 
v_a_boxed_1952_ = lean_unbox(v_a_1950_);
v_res_1953_ = l_Lean_Widget_instRpcEncodableDiagnosticWith_enc___redArg___lam__0_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2_(v_a_boxed_1952_, v___y_1951_);
return v_res_1953_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_instRpcEncodableDiagnosticWith_enc___redArg___lam__1_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2_(lean_object* v_a_1954_, lean_object* v___y_1955_){
_start:
{
lean_object* v___x_1956_; lean_object* v___x_1957_; 
v___x_1956_ = l_Lean_Lsp_instToJsonDiagnosticRelatedInformation_toJson(v_a_1954_);
v___x_1957_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1957_, 0, v___x_1956_);
lean_ctor_set(v___x_1957_, 1, v___y_1955_);
return v___x_1957_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_instRpcEncodableDiagnosticWith_enc___redArg___lam__2_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2_(uint8_t v_a_1958_, lean_object* v___y_1959_){
_start:
{
if (v_a_1958_ == 0)
{
lean_object* v___x_1960_; lean_object* v___x_1961_; 
v___x_1960_ = lean_obj_once(&l_Lean_Widget_instRpcEncodableDiagnosticWith_enc___redArg___lam__0___closed__1_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2_, &l_Lean_Widget_instRpcEncodableDiagnosticWith_enc___redArg___lam__0___closed__1_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2__once, _init_l_Lean_Widget_instRpcEncodableDiagnosticWith_enc___redArg___lam__0___closed__1_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2_);
v___x_1961_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1961_, 0, v___x_1960_);
lean_ctor_set(v___x_1961_, 1, v___y_1959_);
return v___x_1961_;
}
else
{
lean_object* v___x_1962_; lean_object* v___x_1963_; 
v___x_1962_ = lean_obj_once(&l_Lean_Widget_instRpcEncodableDiagnosticWith_enc___redArg___lam__0___closed__3_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2_, &l_Lean_Widget_instRpcEncodableDiagnosticWith_enc___redArg___lam__0___closed__3_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2__once, _init_l_Lean_Widget_instRpcEncodableDiagnosticWith_enc___redArg___lam__0___closed__3_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2_);
v___x_1963_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1963_, 0, v___x_1962_);
lean_ctor_set(v___x_1963_, 1, v___y_1959_);
return v___x_1963_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_instRpcEncodableDiagnosticWith_enc___redArg___lam__2_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2____boxed(lean_object* v_a_1964_, lean_object* v___y_1965_){
_start:
{
uint8_t v_a_boxed_1966_; lean_object* v_res_1967_; 
v_a_boxed_1966_ = lean_unbox(v_a_1964_);
v_res_1967_ = l_Lean_Widget_instRpcEncodableDiagnosticWith_enc___redArg___lam__2_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2_(v_a_boxed_1966_, v___y_1965_);
return v_res_1967_;
}
}
static lean_object* _init_l_Lean_Widget_instRpcEncodableDiagnosticWith_enc___redArg___closed__24_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2017_; lean_object* v___x_2018_; 
v___x_2017_ = lean_unsigned_to_nat(3u);
v___x_2018_ = l_Lean_JsonNumber_fromNat(v___x_2017_);
return v___x_2018_;
}
}
static lean_object* _init_l_Lean_Widget_instRpcEncodableDiagnosticWith_enc___redArg___closed__25_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2019_; lean_object* v___x_2020_; 
v___x_2019_ = lean_obj_once(&l_Lean_Widget_instRpcEncodableDiagnosticWith_enc___redArg___closed__24_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2_, &l_Lean_Widget_instRpcEncodableDiagnosticWith_enc___redArg___closed__24_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2__once, _init_l_Lean_Widget_instRpcEncodableDiagnosticWith_enc___redArg___closed__24_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2_);
v___x_2020_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_2020_, 0, v___x_2019_);
return v___x_2020_;
}
}
static lean_object* _init_l_Lean_Widget_instRpcEncodableDiagnosticWith_enc___redArg___closed__26_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2021_; lean_object* v___x_2022_; 
v___x_2021_ = lean_unsigned_to_nat(4u);
v___x_2022_ = l_Lean_JsonNumber_fromNat(v___x_2021_);
return v___x_2022_;
}
}
static lean_object* _init_l_Lean_Widget_instRpcEncodableDiagnosticWith_enc___redArg___closed__27_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2023_; lean_object* v___x_2024_; 
v___x_2023_ = lean_obj_once(&l_Lean_Widget_instRpcEncodableDiagnosticWith_enc___redArg___closed__26_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2_, &l_Lean_Widget_instRpcEncodableDiagnosticWith_enc___redArg___closed__26_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2__once, _init_l_Lean_Widget_instRpcEncodableDiagnosticWith_enc___redArg___closed__26_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2_);
v___x_2024_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_2024_, 0, v___x_2023_);
return v___x_2024_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_instRpcEncodableDiagnosticWith_enc___redArg_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2_(lean_object* v_inst_2025_, lean_object* v_a_2026_, lean_object* v_a_2027_){
_start:
{
lean_object* v_range_2028_; lean_object* v_fullRange_x3f_2029_; lean_object* v_severity_x3f_2030_; lean_object* v_isSilent_x3f_2031_; lean_object* v_code_x3f_2032_; lean_object* v_source_x3f_2033_; lean_object* v_message_2034_; lean_object* v_tags_x3f_2035_; lean_object* v_leanTags_x3f_2036_; lean_object* v_relatedInformation_x3f_2037_; lean_object* v_data_x3f_2038_; lean_object* v___x_2040_; uint8_t v_isShared_2041_; uint8_t v_isSharedCheck_2239_; 
v_range_2028_ = lean_ctor_get(v_a_2026_, 0);
v_fullRange_x3f_2029_ = lean_ctor_get(v_a_2026_, 1);
v_severity_x3f_2030_ = lean_ctor_get(v_a_2026_, 2);
v_isSilent_x3f_2031_ = lean_ctor_get(v_a_2026_, 3);
v_code_x3f_2032_ = lean_ctor_get(v_a_2026_, 4);
v_source_x3f_2033_ = lean_ctor_get(v_a_2026_, 5);
v_message_2034_ = lean_ctor_get(v_a_2026_, 6);
v_tags_x3f_2035_ = lean_ctor_get(v_a_2026_, 7);
v_leanTags_x3f_2036_ = lean_ctor_get(v_a_2026_, 8);
v_relatedInformation_x3f_2037_ = lean_ctor_get(v_a_2026_, 9);
v_data_x3f_2038_ = lean_ctor_get(v_a_2026_, 10);
v_isSharedCheck_2239_ = !lean_is_exclusive(v_a_2026_);
if (v_isSharedCheck_2239_ == 0)
{
v___x_2040_ = v_a_2026_;
v_isShared_2041_ = v_isSharedCheck_2239_;
goto v_resetjp_2039_;
}
else
{
lean_inc(v_data_x3f_2038_);
lean_inc(v_relatedInformation_x3f_2037_);
lean_inc(v_leanTags_x3f_2036_);
lean_inc(v_tags_x3f_2035_);
lean_inc(v_message_2034_);
lean_inc(v_source_x3f_2033_);
lean_inc(v_code_x3f_2032_);
lean_inc(v_isSilent_x3f_2031_);
lean_inc(v_severity_x3f_2030_);
lean_inc(v_fullRange_x3f_2029_);
lean_inc(v_range_2028_);
lean_dec(v_a_2026_);
v___x_2040_ = lean_box(0);
v_isShared_2041_ = v_isSharedCheck_2239_;
goto v_resetjp_2039_;
}
v_resetjp_2039_:
{
lean_object* v___f_2042_; lean_object* v___f_2043_; lean_object* v___f_2044_; lean_object* v___x_2045_; lean_object* v___y_2047_; lean_object* v___y_2048_; lean_object* v___y_2049_; lean_object* v___y_2050_; lean_object* v___y_2051_; lean_object* v___y_2052_; lean_object* v___y_2053_; lean_object* v___y_2054_; lean_object* v_fst_2055_; lean_object* v_snd_2056_; lean_object* v___y_2063_; lean_object* v___y_2064_; lean_object* v___y_2065_; lean_object* v___y_2066_; lean_object* v___y_2067_; lean_object* v___y_2068_; lean_object* v___y_2069_; lean_object* v_fst_2070_; lean_object* v_snd_2071_; lean_object* v___y_2093_; lean_object* v___y_2094_; lean_object* v___y_2095_; lean_object* v___y_2096_; lean_object* v___y_2097_; lean_object* v___y_2098_; lean_object* v_fst_2099_; lean_object* v_snd_2100_; lean_object* v___y_2122_; lean_object* v___y_2123_; lean_object* v___y_2124_; lean_object* v___y_2125_; lean_object* v_fst_2126_; lean_object* v_snd_2127_; lean_object* v___y_2153_; lean_object* v___y_2154_; lean_object* v___y_2155_; lean_object* v_fst_2156_; lean_object* v_snd_2157_; lean_object* v___y_2169_; lean_object* v___y_2170_; lean_object* v___y_2171_; lean_object* v_fst_2172_; lean_object* v_snd_2173_; lean_object* v___y_2176_; lean_object* v___y_2177_; lean_object* v_fst_2178_; lean_object* v_snd_2179_; lean_object* v___y_2200_; lean_object* v_fst_2201_; lean_object* v_snd_2202_; lean_object* v___y_2215_; lean_object* v_fst_2216_; lean_object* v_snd_2217_; lean_object* v_fst_2220_; lean_object* v_snd_2221_; 
v___f_2042_ = ((lean_object*)(l_Lean_Widget_instRpcEncodableDiagnosticWith_enc___redArg___closed__0_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2_));
v___f_2043_ = ((lean_object*)(l_Lean_Widget_instRpcEncodableDiagnosticWith_enc___redArg___closed__1_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2_));
v___f_2044_ = ((lean_object*)(l_Lean_Widget_instRpcEncodableDiagnosticWith_enc___redArg___closed__2_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2_));
v___x_2045_ = l_Lean_Lsp_instToJsonRange_toJson(v_range_2028_);
if (lean_obj_tag(v_fullRange_x3f_2029_) == 0)
{
lean_object* v___x_2229_; 
v___x_2229_ = lean_box(0);
v_fst_2220_ = v___x_2229_;
v_snd_2221_ = v_a_2027_;
goto v___jp_2219_;
}
else
{
lean_object* v_val_2230_; lean_object* v___x_2232_; uint8_t v_isShared_2233_; uint8_t v_isSharedCheck_2238_; 
v_val_2230_ = lean_ctor_get(v_fullRange_x3f_2029_, 0);
v_isSharedCheck_2238_ = !lean_is_exclusive(v_fullRange_x3f_2029_);
if (v_isSharedCheck_2238_ == 0)
{
v___x_2232_ = v_fullRange_x3f_2029_;
v_isShared_2233_ = v_isSharedCheck_2238_;
goto v_resetjp_2231_;
}
else
{
lean_inc(v_val_2230_);
lean_dec(v_fullRange_x3f_2029_);
v___x_2232_ = lean_box(0);
v_isShared_2233_ = v_isSharedCheck_2238_;
goto v_resetjp_2231_;
}
v_resetjp_2231_:
{
lean_object* v___x_2234_; lean_object* v___x_2236_; 
v___x_2234_ = l_Lean_Lsp_instToJsonRange_toJson(v_val_2230_);
if (v_isShared_2233_ == 0)
{
lean_ctor_set(v___x_2232_, 0, v___x_2234_);
v___x_2236_ = v___x_2232_;
goto v_reusejp_2235_;
}
else
{
lean_object* v_reuseFailAlloc_2237_; 
v_reuseFailAlloc_2237_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2237_, 0, v___x_2234_);
v___x_2236_ = v_reuseFailAlloc_2237_;
goto v_reusejp_2235_;
}
v_reusejp_2235_:
{
v_fst_2220_ = v___x_2236_;
v_snd_2221_ = v_a_2027_;
goto v___jp_2219_;
}
}
}
v___jp_2046_:
{
lean_object* v___x_2058_; 
if (v_isShared_2041_ == 0)
{
lean_ctor_set(v___x_2040_, 9, v_fst_2055_);
lean_ctor_set(v___x_2040_, 8, v___y_2051_);
lean_ctor_set(v___x_2040_, 7, v___y_2054_);
lean_ctor_set(v___x_2040_, 6, v___y_2047_);
lean_ctor_set(v___x_2040_, 5, v___y_2048_);
lean_ctor_set(v___x_2040_, 4, v___y_2052_);
lean_ctor_set(v___x_2040_, 3, v___y_2050_);
lean_ctor_set(v___x_2040_, 2, v___y_2053_);
lean_ctor_set(v___x_2040_, 1, v___y_2049_);
lean_ctor_set(v___x_2040_, 0, v___x_2045_);
v___x_2058_ = v___x_2040_;
goto v_reusejp_2057_;
}
else
{
lean_object* v_reuseFailAlloc_2061_; 
v_reuseFailAlloc_2061_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v_reuseFailAlloc_2061_, 0, v___x_2045_);
lean_ctor_set(v_reuseFailAlloc_2061_, 1, v___y_2049_);
lean_ctor_set(v_reuseFailAlloc_2061_, 2, v___y_2053_);
lean_ctor_set(v_reuseFailAlloc_2061_, 3, v___y_2050_);
lean_ctor_set(v_reuseFailAlloc_2061_, 4, v___y_2052_);
lean_ctor_set(v_reuseFailAlloc_2061_, 5, v___y_2048_);
lean_ctor_set(v_reuseFailAlloc_2061_, 6, v___y_2047_);
lean_ctor_set(v_reuseFailAlloc_2061_, 7, v___y_2054_);
lean_ctor_set(v_reuseFailAlloc_2061_, 8, v___y_2051_);
lean_ctor_set(v_reuseFailAlloc_2061_, 9, v_fst_2055_);
lean_ctor_set(v_reuseFailAlloc_2061_, 10, v_data_x3f_2038_);
v___x_2058_ = v_reuseFailAlloc_2061_;
goto v_reusejp_2057_;
}
v_reusejp_2057_:
{
lean_object* v___x_2059_; lean_object* v___x_2060_; 
v___x_2059_ = l_Lean_Widget_instToJsonRpcEncodablePacket_toJson_00___x40_Lean_Widget_InteractiveDiagnostic_3833933514____hygCtx___hyg_58_(v___x_2058_);
lean_dec_ref(v___x_2058_);
v___x_2060_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2060_, 0, v___x_2059_);
lean_ctor_set(v___x_2060_, 1, v_snd_2056_);
return v___x_2060_;
}
}
v___jp_2062_:
{
lean_object* v___x_2072_; 
v___x_2072_ = ((lean_object*)(l_Lean_Widget_instRpcEncodableDiagnosticWith_enc___redArg___closed__22_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2_));
if (lean_obj_tag(v_relatedInformation_x3f_2037_) == 0)
{
lean_object* v___x_2073_; 
v___x_2073_ = lean_box(0);
v___y_2047_ = v___y_2063_;
v___y_2048_ = v___y_2064_;
v___y_2049_ = v___y_2065_;
v___y_2050_ = v___y_2066_;
v___y_2051_ = v_fst_2070_;
v___y_2052_ = v___y_2067_;
v___y_2053_ = v___y_2068_;
v___y_2054_ = v___y_2069_;
v_fst_2055_ = v___x_2073_;
v_snd_2056_ = v_snd_2071_;
goto v___jp_2046_;
}
else
{
lean_object* v_val_2074_; lean_object* v___x_2076_; uint8_t v_isShared_2077_; uint8_t v_isSharedCheck_2091_; 
v_val_2074_ = lean_ctor_get(v_relatedInformation_x3f_2037_, 0);
v_isSharedCheck_2091_ = !lean_is_exclusive(v_relatedInformation_x3f_2037_);
if (v_isSharedCheck_2091_ == 0)
{
v___x_2076_ = v_relatedInformation_x3f_2037_;
v_isShared_2077_ = v_isSharedCheck_2091_;
goto v_resetjp_2075_;
}
else
{
lean_inc(v_val_2074_);
lean_dec(v_relatedInformation_x3f_2037_);
v___x_2076_ = lean_box(0);
v_isShared_2077_ = v_isSharedCheck_2091_;
goto v_resetjp_2075_;
}
v_resetjp_2075_:
{
size_t v_sz_2078_; size_t v___x_2079_; lean_object* v___x_2080_; lean_object* v___x_2081_; lean_object* v___x_7576__overap_2082_; lean_object* v___x_2083_; lean_object* v_fst_2084_; lean_object* v_snd_2085_; lean_object* v___x_2086_; lean_object* v___x_2087_; lean_object* v___x_2089_; 
v_sz_2078_ = lean_array_size(v_val_2074_);
v___x_2079_ = ((size_t)0ULL);
v___x_2080_ = l_unsafeCast___redArg(v_val_2074_);
lean_dec(v_val_2074_);
v___x_2081_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_2072_, v___f_2043_, v_sz_2078_, v___x_2079_, v___x_2080_);
v___x_7576__overap_2082_ = l_unsafeCast___redArg(v___x_2081_);
lean_dec(v___x_2081_);
v___x_2083_ = lean_apply_1(v___x_7576__overap_2082_, v_snd_2071_);
v_fst_2084_ = lean_ctor_get(v___x_2083_, 0);
lean_inc(v_fst_2084_);
v_snd_2085_ = lean_ctor_get(v___x_2083_, 1);
lean_inc(v_snd_2085_);
lean_dec(v___x_2083_);
v___x_2086_ = ((lean_object*)(l_Lean_Widget_instRpcEncodableDiagnosticWith_enc___redArg___closed__23_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2_));
v___x_2087_ = l_Lean_Array_toJson___redArg(v___x_2086_, v_fst_2084_);
lean_dec(v_fst_2084_);
if (v_isShared_2077_ == 0)
{
lean_ctor_set(v___x_2076_, 0, v___x_2087_);
v___x_2089_ = v___x_2076_;
goto v_reusejp_2088_;
}
else
{
lean_object* v_reuseFailAlloc_2090_; 
v_reuseFailAlloc_2090_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2090_, 0, v___x_2087_);
v___x_2089_ = v_reuseFailAlloc_2090_;
goto v_reusejp_2088_;
}
v_reusejp_2088_:
{
v___y_2047_ = v___y_2063_;
v___y_2048_ = v___y_2064_;
v___y_2049_ = v___y_2065_;
v___y_2050_ = v___y_2066_;
v___y_2051_ = v_fst_2070_;
v___y_2052_ = v___y_2067_;
v___y_2053_ = v___y_2068_;
v___y_2054_ = v___y_2069_;
v_fst_2055_ = v___x_2089_;
v_snd_2056_ = v_snd_2085_;
goto v___jp_2046_;
}
}
}
}
v___jp_2092_:
{
lean_object* v___x_2101_; 
v___x_2101_ = ((lean_object*)(l_Lean_Widget_instRpcEncodableDiagnosticWith_enc___redArg___closed__22_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2_));
if (lean_obj_tag(v_leanTags_x3f_2036_) == 0)
{
lean_object* v___x_2102_; 
v___x_2102_ = lean_box(0);
v___y_2063_ = v___y_2093_;
v___y_2064_ = v___y_2094_;
v___y_2065_ = v___y_2095_;
v___y_2066_ = v___y_2096_;
v___y_2067_ = v___y_2097_;
v___y_2068_ = v___y_2098_;
v___y_2069_ = v_fst_2099_;
v_fst_2070_ = v___x_2102_;
v_snd_2071_ = v_snd_2100_;
goto v___jp_2062_;
}
else
{
lean_object* v_val_2103_; lean_object* v___x_2105_; uint8_t v_isShared_2106_; uint8_t v_isSharedCheck_2120_; 
v_val_2103_ = lean_ctor_get(v_leanTags_x3f_2036_, 0);
v_isSharedCheck_2120_ = !lean_is_exclusive(v_leanTags_x3f_2036_);
if (v_isSharedCheck_2120_ == 0)
{
v___x_2105_ = v_leanTags_x3f_2036_;
v_isShared_2106_ = v_isSharedCheck_2120_;
goto v_resetjp_2104_;
}
else
{
lean_inc(v_val_2103_);
lean_dec(v_leanTags_x3f_2036_);
v___x_2105_ = lean_box(0);
v_isShared_2106_ = v_isSharedCheck_2120_;
goto v_resetjp_2104_;
}
v_resetjp_2104_:
{
size_t v_sz_2107_; size_t v___x_2108_; lean_object* v___x_2109_; lean_object* v___x_2110_; lean_object* v___x_7601__overap_2111_; lean_object* v___x_2112_; lean_object* v_fst_2113_; lean_object* v_snd_2114_; lean_object* v___x_2115_; lean_object* v___x_2116_; lean_object* v___x_2118_; 
v_sz_2107_ = lean_array_size(v_val_2103_);
v___x_2108_ = ((size_t)0ULL);
v___x_2109_ = l_unsafeCast___redArg(v_val_2103_);
lean_dec(v_val_2103_);
v___x_2110_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_2101_, v___f_2042_, v_sz_2107_, v___x_2108_, v___x_2109_);
v___x_7601__overap_2111_ = l_unsafeCast___redArg(v___x_2110_);
lean_dec(v___x_2110_);
v___x_2112_ = lean_apply_1(v___x_7601__overap_2111_, v_snd_2100_);
v_fst_2113_ = lean_ctor_get(v___x_2112_, 0);
lean_inc(v_fst_2113_);
v_snd_2114_ = lean_ctor_get(v___x_2112_, 1);
lean_inc(v_snd_2114_);
lean_dec(v___x_2112_);
v___x_2115_ = ((lean_object*)(l_Lean_Widget_instRpcEncodableDiagnosticWith_enc___redArg___closed__23_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2_));
v___x_2116_ = l_Lean_Array_toJson___redArg(v___x_2115_, v_fst_2113_);
lean_dec(v_fst_2113_);
if (v_isShared_2106_ == 0)
{
lean_ctor_set(v___x_2105_, 0, v___x_2116_);
v___x_2118_ = v___x_2105_;
goto v_reusejp_2117_;
}
else
{
lean_object* v_reuseFailAlloc_2119_; 
v_reuseFailAlloc_2119_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2119_, 0, v___x_2116_);
v___x_2118_ = v_reuseFailAlloc_2119_;
goto v_reusejp_2117_;
}
v_reusejp_2117_:
{
v___y_2063_ = v___y_2093_;
v___y_2064_ = v___y_2094_;
v___y_2065_ = v___y_2095_;
v___y_2066_ = v___y_2096_;
v___y_2067_ = v___y_2097_;
v___y_2068_ = v___y_2098_;
v___y_2069_ = v_fst_2099_;
v_fst_2070_ = v___x_2118_;
v_snd_2071_ = v_snd_2114_;
goto v___jp_2062_;
}
}
}
}
v___jp_2121_:
{
lean_object* v_rpcEncode_2128_; lean_object* v___x_2129_; lean_object* v_fst_2130_; lean_object* v_snd_2131_; lean_object* v___x_2132_; 
v_rpcEncode_2128_ = lean_ctor_get(v_inst_2025_, 0);
lean_inc_ref(v_rpcEncode_2128_);
lean_dec_ref(v_inst_2025_);
v___x_2129_ = lean_apply_2(v_rpcEncode_2128_, v_message_2034_, v_snd_2127_);
v_fst_2130_ = lean_ctor_get(v___x_2129_, 0);
lean_inc(v_fst_2130_);
v_snd_2131_ = lean_ctor_get(v___x_2129_, 1);
lean_inc(v_snd_2131_);
lean_dec_ref(v___x_2129_);
v___x_2132_ = ((lean_object*)(l_Lean_Widget_instRpcEncodableDiagnosticWith_enc___redArg___closed__22_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2_));
if (lean_obj_tag(v_tags_x3f_2035_) == 0)
{
lean_object* v___x_2133_; 
v___x_2133_ = lean_box(0);
v___y_2093_ = v_fst_2130_;
v___y_2094_ = v_fst_2126_;
v___y_2095_ = v___y_2122_;
v___y_2096_ = v___y_2123_;
v___y_2097_ = v___y_2124_;
v___y_2098_ = v___y_2125_;
v_fst_2099_ = v___x_2133_;
v_snd_2100_ = v_snd_2131_;
goto v___jp_2092_;
}
else
{
lean_object* v_val_2134_; lean_object* v___x_2136_; uint8_t v_isShared_2137_; uint8_t v_isSharedCheck_2151_; 
v_val_2134_ = lean_ctor_get(v_tags_x3f_2035_, 0);
v_isSharedCheck_2151_ = !lean_is_exclusive(v_tags_x3f_2035_);
if (v_isSharedCheck_2151_ == 0)
{
v___x_2136_ = v_tags_x3f_2035_;
v_isShared_2137_ = v_isSharedCheck_2151_;
goto v_resetjp_2135_;
}
else
{
lean_inc(v_val_2134_);
lean_dec(v_tags_x3f_2035_);
v___x_2136_ = lean_box(0);
v_isShared_2137_ = v_isSharedCheck_2151_;
goto v_resetjp_2135_;
}
v_resetjp_2135_:
{
size_t v_sz_2138_; size_t v___x_2139_; lean_object* v___x_2140_; lean_object* v___x_2141_; lean_object* v___x_7626__overap_2142_; lean_object* v___x_2143_; lean_object* v_fst_2144_; lean_object* v_snd_2145_; lean_object* v___x_2146_; lean_object* v___x_2147_; lean_object* v___x_2149_; 
v_sz_2138_ = lean_array_size(v_val_2134_);
v___x_2139_ = ((size_t)0ULL);
v___x_2140_ = l_unsafeCast___redArg(v_val_2134_);
lean_dec(v_val_2134_);
v___x_2141_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_2132_, v___f_2044_, v_sz_2138_, v___x_2139_, v___x_2140_);
v___x_7626__overap_2142_ = l_unsafeCast___redArg(v___x_2141_);
lean_dec(v___x_2141_);
v___x_2143_ = lean_apply_1(v___x_7626__overap_2142_, v_snd_2131_);
v_fst_2144_ = lean_ctor_get(v___x_2143_, 0);
lean_inc(v_fst_2144_);
v_snd_2145_ = lean_ctor_get(v___x_2143_, 1);
lean_inc(v_snd_2145_);
lean_dec(v___x_2143_);
v___x_2146_ = ((lean_object*)(l_Lean_Widget_instRpcEncodableDiagnosticWith_enc___redArg___closed__23_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2_));
v___x_2147_ = l_Lean_Array_toJson___redArg(v___x_2146_, v_fst_2144_);
lean_dec(v_fst_2144_);
if (v_isShared_2137_ == 0)
{
lean_ctor_set(v___x_2136_, 0, v___x_2147_);
v___x_2149_ = v___x_2136_;
goto v_reusejp_2148_;
}
else
{
lean_object* v_reuseFailAlloc_2150_; 
v_reuseFailAlloc_2150_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2150_, 0, v___x_2147_);
v___x_2149_ = v_reuseFailAlloc_2150_;
goto v_reusejp_2148_;
}
v_reusejp_2148_:
{
v___y_2093_ = v_fst_2130_;
v___y_2094_ = v_fst_2126_;
v___y_2095_ = v___y_2122_;
v___y_2096_ = v___y_2123_;
v___y_2097_ = v___y_2124_;
v___y_2098_ = v___y_2125_;
v_fst_2099_ = v___x_2149_;
v_snd_2100_ = v_snd_2145_;
goto v___jp_2092_;
}
}
}
}
v___jp_2152_:
{
if (lean_obj_tag(v_source_x3f_2033_) == 0)
{
lean_object* v___x_2158_; 
v___x_2158_ = lean_box(0);
v___y_2122_ = v___y_2153_;
v___y_2123_ = v___y_2154_;
v___y_2124_ = v_fst_2156_;
v___y_2125_ = v___y_2155_;
v_fst_2126_ = v___x_2158_;
v_snd_2127_ = v_snd_2157_;
goto v___jp_2121_;
}
else
{
lean_object* v_val_2159_; lean_object* v___x_2161_; uint8_t v_isShared_2162_; uint8_t v_isSharedCheck_2167_; 
v_val_2159_ = lean_ctor_get(v_source_x3f_2033_, 0);
v_isSharedCheck_2167_ = !lean_is_exclusive(v_source_x3f_2033_);
if (v_isSharedCheck_2167_ == 0)
{
v___x_2161_ = v_source_x3f_2033_;
v_isShared_2162_ = v_isSharedCheck_2167_;
goto v_resetjp_2160_;
}
else
{
lean_inc(v_val_2159_);
lean_dec(v_source_x3f_2033_);
v___x_2161_ = lean_box(0);
v_isShared_2162_ = v_isSharedCheck_2167_;
goto v_resetjp_2160_;
}
v_resetjp_2160_:
{
lean_object* v___x_2163_; lean_object* v___x_2165_; 
v___x_2163_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2163_, 0, v_val_2159_);
if (v_isShared_2162_ == 0)
{
lean_ctor_set(v___x_2161_, 0, v___x_2163_);
v___x_2165_ = v___x_2161_;
goto v_reusejp_2164_;
}
else
{
lean_object* v_reuseFailAlloc_2166_; 
v_reuseFailAlloc_2166_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2166_, 0, v___x_2163_);
v___x_2165_ = v_reuseFailAlloc_2166_;
goto v_reusejp_2164_;
}
v_reusejp_2164_:
{
v___y_2122_ = v___y_2153_;
v___y_2123_ = v___y_2154_;
v___y_2124_ = v_fst_2156_;
v___y_2125_ = v___y_2155_;
v_fst_2126_ = v___x_2165_;
v_snd_2127_ = v_snd_2157_;
goto v___jp_2121_;
}
}
}
}
v___jp_2168_:
{
lean_object* v___x_2174_; 
v___x_2174_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2174_, 0, v_fst_2172_);
v___y_2153_ = v___y_2169_;
v___y_2154_ = v___y_2170_;
v___y_2155_ = v___y_2171_;
v_fst_2156_ = v___x_2174_;
v_snd_2157_ = v_snd_2173_;
goto v___jp_2152_;
}
v___jp_2175_:
{
if (lean_obj_tag(v_code_x3f_2032_) == 0)
{
lean_object* v___x_2180_; 
v___x_2180_ = lean_box(0);
v___y_2153_ = v___y_2176_;
v___y_2154_ = v_fst_2178_;
v___y_2155_ = v___y_2177_;
v_fst_2156_ = v___x_2180_;
v_snd_2157_ = v_snd_2179_;
goto v___jp_2152_;
}
else
{
lean_object* v_val_2181_; 
v_val_2181_ = lean_ctor_get(v_code_x3f_2032_, 0);
lean_inc(v_val_2181_);
lean_dec_ref_known(v_code_x3f_2032_, 1);
if (lean_obj_tag(v_val_2181_) == 0)
{
lean_object* v_i_2182_; lean_object* v___x_2184_; uint8_t v_isShared_2185_; uint8_t v_isSharedCheck_2190_; 
v_i_2182_ = lean_ctor_get(v_val_2181_, 0);
v_isSharedCheck_2190_ = !lean_is_exclusive(v_val_2181_);
if (v_isSharedCheck_2190_ == 0)
{
v___x_2184_ = v_val_2181_;
v_isShared_2185_ = v_isSharedCheck_2190_;
goto v_resetjp_2183_;
}
else
{
lean_inc(v_i_2182_);
lean_dec(v_val_2181_);
v___x_2184_ = lean_box(0);
v_isShared_2185_ = v_isSharedCheck_2190_;
goto v_resetjp_2183_;
}
v_resetjp_2183_:
{
lean_object* v___x_2186_; lean_object* v___x_2188_; 
v___x_2186_ = l_Lean_JsonNumber_fromInt(v_i_2182_);
if (v_isShared_2185_ == 0)
{
lean_ctor_set_tag(v___x_2184_, 2);
lean_ctor_set(v___x_2184_, 0, v___x_2186_);
v___x_2188_ = v___x_2184_;
goto v_reusejp_2187_;
}
else
{
lean_object* v_reuseFailAlloc_2189_; 
v_reuseFailAlloc_2189_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2189_, 0, v___x_2186_);
v___x_2188_ = v_reuseFailAlloc_2189_;
goto v_reusejp_2187_;
}
v_reusejp_2187_:
{
v___y_2169_ = v___y_2176_;
v___y_2170_ = v_fst_2178_;
v___y_2171_ = v___y_2177_;
v_fst_2172_ = v___x_2188_;
v_snd_2173_ = v_snd_2179_;
goto v___jp_2168_;
}
}
}
else
{
lean_object* v_s_2191_; lean_object* v___x_2193_; uint8_t v_isShared_2194_; uint8_t v_isSharedCheck_2198_; 
v_s_2191_ = lean_ctor_get(v_val_2181_, 0);
v_isSharedCheck_2198_ = !lean_is_exclusive(v_val_2181_);
if (v_isSharedCheck_2198_ == 0)
{
v___x_2193_ = v_val_2181_;
v_isShared_2194_ = v_isSharedCheck_2198_;
goto v_resetjp_2192_;
}
else
{
lean_inc(v_s_2191_);
lean_dec(v_val_2181_);
v___x_2193_ = lean_box(0);
v_isShared_2194_ = v_isSharedCheck_2198_;
goto v_resetjp_2192_;
}
v_resetjp_2192_:
{
lean_object* v___x_2196_; 
if (v_isShared_2194_ == 0)
{
lean_ctor_set_tag(v___x_2193_, 3);
v___x_2196_ = v___x_2193_;
goto v_reusejp_2195_;
}
else
{
lean_object* v_reuseFailAlloc_2197_; 
v_reuseFailAlloc_2197_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2197_, 0, v_s_2191_);
v___x_2196_ = v_reuseFailAlloc_2197_;
goto v_reusejp_2195_;
}
v_reusejp_2195_:
{
v___y_2169_ = v___y_2176_;
v___y_2170_ = v_fst_2178_;
v___y_2171_ = v___y_2177_;
v_fst_2172_ = v___x_2196_;
v_snd_2173_ = v_snd_2179_;
goto v___jp_2168_;
}
}
}
}
}
v___jp_2199_:
{
if (lean_obj_tag(v_isSilent_x3f_2031_) == 0)
{
lean_object* v___x_2203_; 
v___x_2203_ = lean_box(0);
v___y_2176_ = v___y_2200_;
v___y_2177_ = v_fst_2201_;
v_fst_2178_ = v___x_2203_;
v_snd_2179_ = v_snd_2202_;
goto v___jp_2175_;
}
else
{
lean_object* v_val_2204_; lean_object* v___x_2206_; uint8_t v_isShared_2207_; uint8_t v_isSharedCheck_2213_; 
v_val_2204_ = lean_ctor_get(v_isSilent_x3f_2031_, 0);
v_isSharedCheck_2213_ = !lean_is_exclusive(v_isSilent_x3f_2031_);
if (v_isSharedCheck_2213_ == 0)
{
v___x_2206_ = v_isSilent_x3f_2031_;
v_isShared_2207_ = v_isSharedCheck_2213_;
goto v_resetjp_2205_;
}
else
{
lean_inc(v_val_2204_);
lean_dec(v_isSilent_x3f_2031_);
v___x_2206_ = lean_box(0);
v_isShared_2207_ = v_isSharedCheck_2213_;
goto v_resetjp_2205_;
}
v_resetjp_2205_:
{
lean_object* v___x_2208_; uint8_t v___x_2209_; lean_object* v___x_2211_; 
v___x_2208_ = lean_alloc_ctor(1, 0, 1);
v___x_2209_ = lean_unbox(v_val_2204_);
lean_dec(v_val_2204_);
lean_ctor_set_uint8(v___x_2208_, 0, v___x_2209_);
if (v_isShared_2207_ == 0)
{
lean_ctor_set(v___x_2206_, 0, v___x_2208_);
v___x_2211_ = v___x_2206_;
goto v_reusejp_2210_;
}
else
{
lean_object* v_reuseFailAlloc_2212_; 
v_reuseFailAlloc_2212_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2212_, 0, v___x_2208_);
v___x_2211_ = v_reuseFailAlloc_2212_;
goto v_reusejp_2210_;
}
v_reusejp_2210_:
{
v___y_2176_ = v___y_2200_;
v___y_2177_ = v_fst_2201_;
v_fst_2178_ = v___x_2211_;
v_snd_2179_ = v_snd_2202_;
goto v___jp_2175_;
}
}
}
}
v___jp_2214_:
{
lean_object* v___x_2218_; 
lean_inc(v_fst_2216_);
v___x_2218_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2218_, 0, v_fst_2216_);
v___y_2200_ = v___y_2215_;
v_fst_2201_ = v___x_2218_;
v_snd_2202_ = v_snd_2217_;
goto v___jp_2199_;
}
v___jp_2219_:
{
if (lean_obj_tag(v_severity_x3f_2030_) == 0)
{
lean_object* v___x_2222_; 
v___x_2222_ = lean_box(0);
v___y_2200_ = v_fst_2220_;
v_fst_2201_ = v___x_2222_;
v_snd_2202_ = v_snd_2221_;
goto v___jp_2199_;
}
else
{
lean_object* v_val_2223_; uint8_t v___x_2224_; 
v_val_2223_ = lean_ctor_get(v_severity_x3f_2030_, 0);
lean_inc(v_val_2223_);
lean_dec_ref_known(v_severity_x3f_2030_, 1);
v___x_2224_ = lean_unbox(v_val_2223_);
lean_dec(v_val_2223_);
switch(v___x_2224_)
{
case 0:
{
lean_object* v___x_2225_; 
v___x_2225_ = lean_obj_once(&l_Lean_Widget_instRpcEncodableDiagnosticWith_enc___redArg___lam__0___closed__1_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2_, &l_Lean_Widget_instRpcEncodableDiagnosticWith_enc___redArg___lam__0___closed__1_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2__once, _init_l_Lean_Widget_instRpcEncodableDiagnosticWith_enc___redArg___lam__0___closed__1_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2_);
v___y_2215_ = v_fst_2220_;
v_fst_2216_ = v___x_2225_;
v_snd_2217_ = v_snd_2221_;
goto v___jp_2214_;
}
case 1:
{
lean_object* v___x_2226_; 
v___x_2226_ = lean_obj_once(&l_Lean_Widget_instRpcEncodableDiagnosticWith_enc___redArg___lam__0___closed__3_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2_, &l_Lean_Widget_instRpcEncodableDiagnosticWith_enc___redArg___lam__0___closed__3_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2__once, _init_l_Lean_Widget_instRpcEncodableDiagnosticWith_enc___redArg___lam__0___closed__3_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2_);
v___y_2215_ = v_fst_2220_;
v_fst_2216_ = v___x_2226_;
v_snd_2217_ = v_snd_2221_;
goto v___jp_2214_;
}
case 2:
{
lean_object* v___x_2227_; 
v___x_2227_ = lean_obj_once(&l_Lean_Widget_instRpcEncodableDiagnosticWith_enc___redArg___closed__25_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2_, &l_Lean_Widget_instRpcEncodableDiagnosticWith_enc___redArg___closed__25_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2__once, _init_l_Lean_Widget_instRpcEncodableDiagnosticWith_enc___redArg___closed__25_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2_);
v___y_2215_ = v_fst_2220_;
v_fst_2216_ = v___x_2227_;
v_snd_2217_ = v_snd_2221_;
goto v___jp_2214_;
}
default: 
{
lean_object* v___x_2228_; 
v___x_2228_ = lean_obj_once(&l_Lean_Widget_instRpcEncodableDiagnosticWith_enc___redArg___closed__27_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2_, &l_Lean_Widget_instRpcEncodableDiagnosticWith_enc___redArg___closed__27_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2__once, _init_l_Lean_Widget_instRpcEncodableDiagnosticWith_enc___redArg___closed__27_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2_);
v___y_2215_ = v_fst_2220_;
v_fst_2216_ = v___x_2228_;
v_snd_2217_ = v_snd_2221_;
goto v___jp_2214_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_instRpcEncodableDiagnosticWith_enc_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2_(lean_object* v_00_u03b1_2240_, lean_object* v_inst_2241_, lean_object* v_a_2242_, lean_object* v_a_2243_){
_start:
{
lean_object* v___x_2244_; 
v___x_2244_ = l_Lean_Widget_instRpcEncodableDiagnosticWith_enc___redArg_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2_(v_inst_2241_, v_a_2242_, v_a_2243_);
return v___x_2244_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_instRpcEncodableDiagnosticWith_dec___redArg___lam__0_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2_(lean_object* v___x_2245_, lean_object* v___x_2246_, lean_object* v_j_2247_, lean_object* v___y_2248_){
_start:
{
lean_object* v___x_2249_; lean_object* v___x_10520__overap_2250_; lean_object* v___x_2251_; 
v___x_2249_ = l_Lean_Lsp_instFromJsonDiagnosticRelatedInformation_fromJson(v_j_2247_);
v___x_10520__overap_2250_ = l_MonadExcept_ofExcept___redArg(v___x_2245_, v___x_2246_, v___x_2249_);
lean_inc_ref(v___y_2248_);
v___x_2251_ = lean_apply_1(v___x_10520__overap_2250_, v___y_2248_);
return v___x_2251_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_instRpcEncodableDiagnosticWith_dec___redArg___lam__0_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2____boxed(lean_object* v___x_2252_, lean_object* v___x_2253_, lean_object* v_j_2254_, lean_object* v___y_2255_){
_start:
{
lean_object* v_res_2256_; 
v_res_2256_ = l_Lean_Widget_instRpcEncodableDiagnosticWith_dec___redArg___lam__0_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2_(v___x_2252_, v___x_2253_, v_j_2254_, v___y_2255_);
lean_dec_ref(v___y_2255_);
return v_res_2256_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_instRpcEncodableDiagnosticWith_dec___redArg___lam__1_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2_(lean_object* v___x_2266_, lean_object* v___x_2267_, lean_object* v_j_2268_, lean_object* v___y_2269_){
_start:
{
lean_object* v___x_2274_; 
v___x_2274_ = l_Lean_Json_getNat_x3f(v_j_2268_);
if (lean_obj_tag(v___x_2274_) == 1)
{
lean_object* v_a_2275_; lean_object* v___x_2276_; uint8_t v___x_2277_; 
v_a_2275_ = lean_ctor_get(v___x_2274_, 0);
lean_inc(v_a_2275_);
lean_dec_ref_known(v___x_2274_, 1);
v___x_2276_ = lean_unsigned_to_nat(1u);
v___x_2277_ = lean_nat_dec_eq(v_a_2275_, v___x_2276_);
if (v___x_2277_ == 0)
{
lean_object* v___x_2278_; uint8_t v___x_2279_; 
v___x_2278_ = lean_unsigned_to_nat(2u);
v___x_2279_ = lean_nat_dec_eq(v_a_2275_, v___x_2278_);
lean_dec(v_a_2275_);
if (v___x_2279_ == 0)
{
goto v___jp_2270_;
}
else
{
lean_object* v___x_2280_; lean_object* v___x_10536__overap_2281_; lean_object* v___x_2282_; 
v___x_2280_ = ((lean_object*)(l_Lean_Widget_instRpcEncodableDiagnosticWith_dec___redArg___lam__1___closed__2_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2_));
v___x_10536__overap_2281_ = l_MonadExcept_ofExcept___redArg(v___x_2266_, v___x_2267_, v___x_2280_);
lean_inc_ref(v___y_2269_);
v___x_2282_ = lean_apply_1(v___x_10536__overap_2281_, v___y_2269_);
return v___x_2282_;
}
}
else
{
lean_object* v___x_2283_; lean_object* v___x_10539__overap_2284_; lean_object* v___x_2285_; 
lean_dec(v_a_2275_);
v___x_2283_ = ((lean_object*)(l_Lean_Widget_instRpcEncodableDiagnosticWith_dec___redArg___lam__1___closed__3_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2_));
v___x_10539__overap_2284_ = l_MonadExcept_ofExcept___redArg(v___x_2266_, v___x_2267_, v___x_2283_);
lean_inc_ref(v___y_2269_);
v___x_2285_ = lean_apply_1(v___x_10539__overap_2284_, v___y_2269_);
return v___x_2285_;
}
}
else
{
lean_dec_ref(v___x_2274_);
goto v___jp_2270_;
}
v___jp_2270_:
{
lean_object* v___x_2271_; lean_object* v___x_10527__overap_2272_; lean_object* v___x_2273_; 
v___x_2271_ = ((lean_object*)(l_Lean_Widget_instRpcEncodableDiagnosticWith_dec___redArg___lam__1___closed__1_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2_));
v___x_10527__overap_2272_ = l_MonadExcept_ofExcept___redArg(v___x_2266_, v___x_2267_, v___x_2271_);
lean_inc_ref(v___y_2269_);
v___x_2273_ = lean_apply_1(v___x_10527__overap_2272_, v___y_2269_);
return v___x_2273_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_instRpcEncodableDiagnosticWith_dec___redArg___lam__1_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2____boxed(lean_object* v___x_2286_, lean_object* v___x_2287_, lean_object* v_j_2288_, lean_object* v___y_2289_){
_start:
{
lean_object* v_res_2290_; 
v_res_2290_ = l_Lean_Widget_instRpcEncodableDiagnosticWith_dec___redArg___lam__1_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2_(v___x_2286_, v___x_2287_, v_j_2288_, v___y_2289_);
lean_dec_ref(v___y_2289_);
return v_res_2290_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_instRpcEncodableDiagnosticWith_dec___redArg___lam__2_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2_(lean_object* v___x_2300_, lean_object* v___x_2301_, lean_object* v_j_2302_, lean_object* v___y_2303_){
_start:
{
lean_object* v___x_2308_; 
v___x_2308_ = l_Lean_Json_getNat_x3f(v_j_2302_);
if (lean_obj_tag(v___x_2308_) == 1)
{
lean_object* v_a_2309_; lean_object* v___x_2310_; uint8_t v___x_2311_; 
v_a_2309_ = lean_ctor_get(v___x_2308_, 0);
lean_inc(v_a_2309_);
lean_dec_ref_known(v___x_2308_, 1);
v___x_2310_ = lean_unsigned_to_nat(1u);
v___x_2311_ = lean_nat_dec_eq(v_a_2309_, v___x_2310_);
if (v___x_2311_ == 0)
{
lean_object* v___x_2312_; uint8_t v___x_2313_; 
v___x_2312_ = lean_unsigned_to_nat(2u);
v___x_2313_ = lean_nat_dec_eq(v_a_2309_, v___x_2312_);
lean_dec(v_a_2309_);
if (v___x_2313_ == 0)
{
goto v___jp_2304_;
}
else
{
lean_object* v___x_2314_; lean_object* v___x_10555__overap_2315_; lean_object* v___x_2316_; 
v___x_2314_ = ((lean_object*)(l_Lean_Widget_instRpcEncodableDiagnosticWith_dec___redArg___lam__2___closed__2_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2_));
v___x_10555__overap_2315_ = l_MonadExcept_ofExcept___redArg(v___x_2300_, v___x_2301_, v___x_2314_);
lean_inc_ref(v___y_2303_);
v___x_2316_ = lean_apply_1(v___x_10555__overap_2315_, v___y_2303_);
return v___x_2316_;
}
}
else
{
lean_object* v___x_2317_; lean_object* v___x_10558__overap_2318_; lean_object* v___x_2319_; 
lean_dec(v_a_2309_);
v___x_2317_ = ((lean_object*)(l_Lean_Widget_instRpcEncodableDiagnosticWith_dec___redArg___lam__2___closed__3_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2_));
v___x_10558__overap_2318_ = l_MonadExcept_ofExcept___redArg(v___x_2300_, v___x_2301_, v___x_2317_);
lean_inc_ref(v___y_2303_);
v___x_2319_ = lean_apply_1(v___x_10558__overap_2318_, v___y_2303_);
return v___x_2319_;
}
}
else
{
lean_dec_ref(v___x_2308_);
goto v___jp_2304_;
}
v___jp_2304_:
{
lean_object* v___x_2305_; lean_object* v___x_10546__overap_2306_; lean_object* v___x_2307_; 
v___x_2305_ = ((lean_object*)(l_Lean_Widget_instRpcEncodableDiagnosticWith_dec___redArg___lam__2___closed__1_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2_));
v___x_10546__overap_2306_ = l_MonadExcept_ofExcept___redArg(v___x_2300_, v___x_2301_, v___x_2305_);
lean_inc_ref(v___y_2303_);
v___x_2307_ = lean_apply_1(v___x_10546__overap_2306_, v___y_2303_);
return v___x_2307_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_instRpcEncodableDiagnosticWith_dec___redArg___lam__2_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2____boxed(lean_object* v___x_2320_, lean_object* v___x_2321_, lean_object* v_j_2322_, lean_object* v___y_2323_){
_start:
{
lean_object* v_res_2324_; 
v_res_2324_ = l_Lean_Widget_instRpcEncodableDiagnosticWith_dec___redArg___lam__2_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2_(v___x_2320_, v___x_2321_, v_j_2322_, v___y_2323_);
lean_dec_ref(v___y_2323_);
return v_res_2324_;
}
}
static lean_object* _init_l_Lean_Widget_instRpcEncodableDiagnosticWith_dec___redArg___closed__0_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2325_; lean_object* v___x_2326_; 
v___x_2325_ = ((lean_object*)(l_Lean_Widget_instRpcEncodableDiagnosticWith_enc___redArg___closed__12_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2_));
v___x_2326_ = l_ReaderT_instMonad___redArg(v___x_2325_);
return v___x_2326_;
}
}
static lean_object* _init_l_Lean_Widget_instRpcEncodableDiagnosticWith_dec___redArg___closed__1_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2327_; lean_object* v___f_2328_; 
v___x_2327_ = lean_obj_once(&l_Lean_Widget_instRpcEncodableDiagnosticWith_dec___redArg___closed__0_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2_, &l_Lean_Widget_instRpcEncodableDiagnosticWith_dec___redArg___closed__0_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2__once, _init_l_Lean_Widget_instRpcEncodableDiagnosticWith_dec___redArg___closed__0_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2_);
v___f_2328_ = lean_alloc_closure((void*)(l_ExceptT_instMonad___redArg___lam__1), 5, 1);
lean_closure_set(v___f_2328_, 0, v___x_2327_);
return v___f_2328_;
}
}
static lean_object* _init_l_Lean_Widget_instRpcEncodableDiagnosticWith_dec___redArg___closed__2_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2329_; lean_object* v___f_2330_; 
v___x_2329_ = lean_obj_once(&l_Lean_Widget_instRpcEncodableDiagnosticWith_dec___redArg___closed__0_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2_, &l_Lean_Widget_instRpcEncodableDiagnosticWith_dec___redArg___closed__0_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2__once, _init_l_Lean_Widget_instRpcEncodableDiagnosticWith_dec___redArg___closed__0_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2_);
v___f_2330_ = lean_alloc_closure((void*)(l_ExceptT_instMonad___redArg___lam__4), 5, 1);
lean_closure_set(v___f_2330_, 0, v___x_2329_);
return v___f_2330_;
}
}
static lean_object* _init_l_Lean_Widget_instRpcEncodableDiagnosticWith_dec___redArg___closed__3_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2331_; lean_object* v___f_2332_; 
v___x_2331_ = lean_obj_once(&l_Lean_Widget_instRpcEncodableDiagnosticWith_dec___redArg___closed__0_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2_, &l_Lean_Widget_instRpcEncodableDiagnosticWith_dec___redArg___closed__0_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2__once, _init_l_Lean_Widget_instRpcEncodableDiagnosticWith_dec___redArg___closed__0_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2_);
v___f_2332_ = lean_alloc_closure((void*)(l_ExceptT_instMonad___redArg___lam__7), 5, 1);
lean_closure_set(v___f_2332_, 0, v___x_2331_);
return v___f_2332_;
}
}
static lean_object* _init_l_Lean_Widget_instRpcEncodableDiagnosticWith_dec___redArg___closed__4_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2333_; lean_object* v___f_2334_; 
v___x_2333_ = lean_obj_once(&l_Lean_Widget_instRpcEncodableDiagnosticWith_dec___redArg___closed__0_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2_, &l_Lean_Widget_instRpcEncodableDiagnosticWith_dec___redArg___closed__0_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2__once, _init_l_Lean_Widget_instRpcEncodableDiagnosticWith_dec___redArg___closed__0_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2_);
v___f_2334_ = lean_alloc_closure((void*)(l_ExceptT_instMonad___redArg___lam__9), 5, 1);
lean_closure_set(v___f_2334_, 0, v___x_2333_);
return v___f_2334_;
}
}
static lean_object* _init_l_Lean_Widget_instRpcEncodableDiagnosticWith_dec___redArg___closed__5_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2335_; lean_object* v___x_2336_; 
v___x_2335_ = lean_obj_once(&l_Lean_Widget_instRpcEncodableDiagnosticWith_dec___redArg___closed__0_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2_, &l_Lean_Widget_instRpcEncodableDiagnosticWith_dec___redArg___closed__0_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2__once, _init_l_Lean_Widget_instRpcEncodableDiagnosticWith_dec___redArg___closed__0_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2_);
v___x_2336_ = lean_alloc_closure((void*)(l_ExceptT_map), 7, 3);
lean_closure_set(v___x_2336_, 0, lean_box(0));
lean_closure_set(v___x_2336_, 1, lean_box(0));
lean_closure_set(v___x_2336_, 2, v___x_2335_);
return v___x_2336_;
}
}
static lean_object* _init_l_Lean_Widget_instRpcEncodableDiagnosticWith_dec___redArg___closed__6_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___f_2337_; lean_object* v___x_2338_; lean_object* v___x_2339_; 
v___f_2337_ = lean_obj_once(&l_Lean_Widget_instRpcEncodableDiagnosticWith_dec___redArg___closed__1_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2_, &l_Lean_Widget_instRpcEncodableDiagnosticWith_dec___redArg___closed__1_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2__once, _init_l_Lean_Widget_instRpcEncodableDiagnosticWith_dec___redArg___closed__1_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2_);
v___x_2338_ = lean_obj_once(&l_Lean_Widget_instRpcEncodableDiagnosticWith_dec___redArg___closed__5_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2_, &l_Lean_Widget_instRpcEncodableDiagnosticWith_dec___redArg___closed__5_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2__once, _init_l_Lean_Widget_instRpcEncodableDiagnosticWith_dec___redArg___closed__5_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2_);
v___x_2339_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2339_, 0, v___x_2338_);
lean_ctor_set(v___x_2339_, 1, v___f_2337_);
return v___x_2339_;
}
}
static lean_object* _init_l_Lean_Widget_instRpcEncodableDiagnosticWith_dec___redArg___closed__7_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2340_; lean_object* v___x_2341_; 
v___x_2340_ = lean_obj_once(&l_Lean_Widget_instRpcEncodableDiagnosticWith_dec___redArg___closed__0_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2_, &l_Lean_Widget_instRpcEncodableDiagnosticWith_dec___redArg___closed__0_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2__once, _init_l_Lean_Widget_instRpcEncodableDiagnosticWith_dec___redArg___closed__0_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2_);
v___x_2341_ = lean_alloc_closure((void*)(l_ExceptT_pure), 5, 3);
lean_closure_set(v___x_2341_, 0, lean_box(0));
lean_closure_set(v___x_2341_, 1, lean_box(0));
lean_closure_set(v___x_2341_, 2, v___x_2340_);
return v___x_2341_;
}
}
static lean_object* _init_l_Lean_Widget_instRpcEncodableDiagnosticWith_dec___redArg___closed__8_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___f_2342_; lean_object* v___f_2343_; lean_object* v___f_2344_; lean_object* v___x_2345_; lean_object* v___x_2346_; lean_object* v___x_2347_; 
v___f_2342_ = lean_obj_once(&l_Lean_Widget_instRpcEncodableDiagnosticWith_dec___redArg___closed__4_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2_, &l_Lean_Widget_instRpcEncodableDiagnosticWith_dec___redArg___closed__4_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2__once, _init_l_Lean_Widget_instRpcEncodableDiagnosticWith_dec___redArg___closed__4_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2_);
v___f_2343_ = lean_obj_once(&l_Lean_Widget_instRpcEncodableDiagnosticWith_dec___redArg___closed__3_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2_, &l_Lean_Widget_instRpcEncodableDiagnosticWith_dec___redArg___closed__3_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2__once, _init_l_Lean_Widget_instRpcEncodableDiagnosticWith_dec___redArg___closed__3_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2_);
v___f_2344_ = lean_obj_once(&l_Lean_Widget_instRpcEncodableDiagnosticWith_dec___redArg___closed__2_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2_, &l_Lean_Widget_instRpcEncodableDiagnosticWith_dec___redArg___closed__2_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2__once, _init_l_Lean_Widget_instRpcEncodableDiagnosticWith_dec___redArg___closed__2_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2_);
v___x_2345_ = lean_obj_once(&l_Lean_Widget_instRpcEncodableDiagnosticWith_dec___redArg___closed__7_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2_, &l_Lean_Widget_instRpcEncodableDiagnosticWith_dec___redArg___closed__7_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2__once, _init_l_Lean_Widget_instRpcEncodableDiagnosticWith_dec___redArg___closed__7_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2_);
v___x_2346_ = lean_obj_once(&l_Lean_Widget_instRpcEncodableDiagnosticWith_dec___redArg___closed__6_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2_, &l_Lean_Widget_instRpcEncodableDiagnosticWith_dec___redArg___closed__6_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2__once, _init_l_Lean_Widget_instRpcEncodableDiagnosticWith_dec___redArg___closed__6_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2_);
v___x_2347_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2347_, 0, v___x_2346_);
lean_ctor_set(v___x_2347_, 1, v___x_2345_);
lean_ctor_set(v___x_2347_, 2, v___f_2344_);
lean_ctor_set(v___x_2347_, 3, v___f_2343_);
lean_ctor_set(v___x_2347_, 4, v___f_2342_);
return v___x_2347_;
}
}
static lean_object* _init_l_Lean_Widget_instRpcEncodableDiagnosticWith_dec___redArg___closed__9_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2348_; lean_object* v___x_2349_; 
v___x_2348_ = lean_obj_once(&l_Lean_Widget_instRpcEncodableDiagnosticWith_dec___redArg___closed__0_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2_, &l_Lean_Widget_instRpcEncodableDiagnosticWith_dec___redArg___closed__0_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2__once, _init_l_Lean_Widget_instRpcEncodableDiagnosticWith_dec___redArg___closed__0_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2_);
v___x_2349_ = lean_alloc_closure((void*)(l_ExceptT_bind), 7, 3);
lean_closure_set(v___x_2349_, 0, lean_box(0));
lean_closure_set(v___x_2349_, 1, lean_box(0));
lean_closure_set(v___x_2349_, 2, v___x_2348_);
return v___x_2349_;
}
}
static lean_object* _init_l_Lean_Widget_instRpcEncodableDiagnosticWith_dec___redArg___closed__10_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2350_; lean_object* v___x_2351_; lean_object* v___x_2352_; 
v___x_2350_ = lean_obj_once(&l_Lean_Widget_instRpcEncodableDiagnosticWith_dec___redArg___closed__9_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2_, &l_Lean_Widget_instRpcEncodableDiagnosticWith_dec___redArg___closed__9_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2__once, _init_l_Lean_Widget_instRpcEncodableDiagnosticWith_dec___redArg___closed__9_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2_);
v___x_2351_ = lean_obj_once(&l_Lean_Widget_instRpcEncodableDiagnosticWith_dec___redArg___closed__8_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2_, &l_Lean_Widget_instRpcEncodableDiagnosticWith_dec___redArg___closed__8_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2__once, _init_l_Lean_Widget_instRpcEncodableDiagnosticWith_dec___redArg___closed__8_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2_);
v___x_2352_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2352_, 0, v___x_2351_);
lean_ctor_set(v___x_2352_, 1, v___x_2350_);
return v___x_2352_;
}
}
static lean_object* _init_l_Lean_Widget_instRpcEncodableDiagnosticWith_dec___redArg___closed__11_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2353_; lean_object* v___x_2354_; 
v___x_2353_ = lean_obj_once(&l_Lean_Widget_instRpcEncodableDiagnosticWith_dec___redArg___closed__0_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2_, &l_Lean_Widget_instRpcEncodableDiagnosticWith_dec___redArg___closed__0_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2__once, _init_l_Lean_Widget_instRpcEncodableDiagnosticWith_dec___redArg___closed__0_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2_);
v___x_2354_ = lean_alloc_closure((void*)(l_ExceptT_tryCatch), 6, 3);
lean_closure_set(v___x_2354_, 0, lean_box(0));
lean_closure_set(v___x_2354_, 1, lean_box(0));
lean_closure_set(v___x_2354_, 2, v___x_2353_);
return v___x_2354_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_instRpcEncodableDiagnosticWith_dec___redArg_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2_(lean_object* v_inst_2370_, lean_object* v_j_2371_, lean_object* v_a_2372_){
_start:
{
lean_object* v___x_2373_; 
v___x_2373_ = l_Lean_Widget_instFromJsonRpcEncodablePacket_fromJson_00___x40_Lean_Widget_InteractiveDiagnostic_3833933514____hygCtx___hyg_39_(v_j_2371_);
if (lean_obj_tag(v___x_2373_) == 0)
{
lean_object* v_a_2374_; lean_object* v___x_2376_; uint8_t v_isShared_2377_; uint8_t v_isSharedCheck_2381_; 
lean_dec_ref(v_inst_2370_);
v_a_2374_ = lean_ctor_get(v___x_2373_, 0);
v_isSharedCheck_2381_ = !lean_is_exclusive(v___x_2373_);
if (v_isSharedCheck_2381_ == 0)
{
v___x_2376_ = v___x_2373_;
v_isShared_2377_ = v_isSharedCheck_2381_;
goto v_resetjp_2375_;
}
else
{
lean_inc(v_a_2374_);
lean_dec(v___x_2373_);
v___x_2376_ = lean_box(0);
v_isShared_2377_ = v_isSharedCheck_2381_;
goto v_resetjp_2375_;
}
v_resetjp_2375_:
{
lean_object* v___x_2379_; 
if (v_isShared_2377_ == 0)
{
v___x_2379_ = v___x_2376_;
goto v_reusejp_2378_;
}
else
{
lean_object* v_reuseFailAlloc_2380_; 
v_reuseFailAlloc_2380_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2380_, 0, v_a_2374_);
v___x_2379_ = v_reuseFailAlloc_2380_;
goto v_reusejp_2378_;
}
v_reusejp_2378_:
{
return v___x_2379_;
}
}
}
else
{
lean_object* v_a_2382_; lean_object* v___x_2384_; uint8_t v_isShared_2385_; uint8_t v_isSharedCheck_2821_; 
v_a_2382_ = lean_ctor_get(v___x_2373_, 0);
v_isSharedCheck_2821_ = !lean_is_exclusive(v___x_2373_);
if (v_isSharedCheck_2821_ == 0)
{
v___x_2384_ = v___x_2373_;
v_isShared_2385_ = v_isSharedCheck_2821_;
goto v_resetjp_2383_;
}
else
{
lean_inc(v_a_2382_);
lean_dec(v___x_2373_);
v___x_2384_ = lean_box(0);
v_isShared_2385_ = v_isSharedCheck_2821_;
goto v_resetjp_2383_;
}
v_resetjp_2383_:
{
lean_object* v___x_2386_; lean_object* v___x_2387_; lean_object* v_toApplicative_2388_; lean_object* v_toPure_2389_; lean_object* v___f_2390_; lean_object* v___x_2391_; lean_object* v___x_2392_; lean_object* v___x_2393_; lean_object* v_range_2394_; lean_object* v_fullRange_x3f_2395_; lean_object* v_severity_x3f_2396_; lean_object* v_isSilent_x3f_2397_; lean_object* v_code_x3f_2398_; lean_object* v_source_x3f_2399_; lean_object* v_message_2400_; lean_object* v_tags_x3f_2401_; lean_object* v_leanTags_x3f_2402_; lean_object* v_relatedInformation_x3f_2403_; lean_object* v_data_x3f_2404_; lean_object* v___x_2406_; uint8_t v_isShared_2407_; uint8_t v_isSharedCheck_2820_; 
v___x_2386_ = lean_obj_once(&l_Lean_Widget_instRpcEncodableDiagnosticWith_dec___redArg___closed__0_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2_, &l_Lean_Widget_instRpcEncodableDiagnosticWith_dec___redArg___closed__0_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2__once, _init_l_Lean_Widget_instRpcEncodableDiagnosticWith_dec___redArg___closed__0_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2_);
v___x_2387_ = lean_obj_once(&l_Lean_Widget_instRpcEncodableDiagnosticWith_dec___redArg___closed__10_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2_, &l_Lean_Widget_instRpcEncodableDiagnosticWith_dec___redArg___closed__10_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2__once, _init_l_Lean_Widget_instRpcEncodableDiagnosticWith_dec___redArg___closed__10_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2_);
v_toApplicative_2388_ = lean_ctor_get(v___x_2386_, 0);
v_toPure_2389_ = lean_ctor_get(v_toApplicative_2388_, 1);
lean_inc(v_toPure_2389_);
v___f_2390_ = lean_alloc_closure((void*)(l_instMonadExceptOfExceptTOfMonad___redArg___lam__0), 3, 1);
lean_closure_set(v___f_2390_, 0, v_toPure_2389_);
v___x_2391_ = lean_obj_once(&l_Lean_Widget_instRpcEncodableDiagnosticWith_dec___redArg___closed__11_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2_, &l_Lean_Widget_instRpcEncodableDiagnosticWith_dec___redArg___closed__11_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2__once, _init_l_Lean_Widget_instRpcEncodableDiagnosticWith_dec___redArg___closed__11_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2_);
v___x_2392_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2392_, 0, v___f_2390_);
lean_ctor_set(v___x_2392_, 1, v___x_2391_);
v___x_2393_ = l_instMonadExceptOfMonadExceptOf___redArg(v___x_2392_);
v_range_2394_ = lean_ctor_get(v_a_2382_, 0);
v_fullRange_x3f_2395_ = lean_ctor_get(v_a_2382_, 1);
v_severity_x3f_2396_ = lean_ctor_get(v_a_2382_, 2);
v_isSilent_x3f_2397_ = lean_ctor_get(v_a_2382_, 3);
v_code_x3f_2398_ = lean_ctor_get(v_a_2382_, 4);
v_source_x3f_2399_ = lean_ctor_get(v_a_2382_, 5);
v_message_2400_ = lean_ctor_get(v_a_2382_, 6);
v_tags_x3f_2401_ = lean_ctor_get(v_a_2382_, 7);
v_leanTags_x3f_2402_ = lean_ctor_get(v_a_2382_, 8);
v_relatedInformation_x3f_2403_ = lean_ctor_get(v_a_2382_, 9);
v_data_x3f_2404_ = lean_ctor_get(v_a_2382_, 10);
v_isSharedCheck_2820_ = !lean_is_exclusive(v_a_2382_);
if (v_isSharedCheck_2820_ == 0)
{
v___x_2406_ = v_a_2382_;
v_isShared_2407_ = v_isSharedCheck_2820_;
goto v_resetjp_2405_;
}
else
{
lean_inc(v_data_x3f_2404_);
lean_inc(v_relatedInformation_x3f_2403_);
lean_inc(v_leanTags_x3f_2402_);
lean_inc(v_tags_x3f_2401_);
lean_inc(v_message_2400_);
lean_inc(v_source_x3f_2399_);
lean_inc(v_code_x3f_2398_);
lean_inc(v_isSilent_x3f_2397_);
lean_inc(v_severity_x3f_2396_);
lean_inc(v_fullRange_x3f_2395_);
lean_inc(v_range_2394_);
lean_dec(v_a_2382_);
v___x_2406_ = lean_box(0);
v_isShared_2407_ = v_isSharedCheck_2820_;
goto v_resetjp_2405_;
}
v_resetjp_2405_:
{
lean_object* v___x_2408_; lean_object* v___x_10397__overap_2409_; lean_object* v___x_2410_; 
v___x_2408_ = l_Lean_Lsp_instFromJsonRange_fromJson(v_range_2394_);
lean_inc_ref(v___x_2393_);
v___x_10397__overap_2409_ = l_MonadExcept_ofExcept___redArg(v___x_2387_, v___x_2393_, v___x_2408_);
lean_inc_ref(v_a_2372_);
v___x_2410_ = lean_apply_1(v___x_10397__overap_2409_, v_a_2372_);
if (lean_obj_tag(v___x_2410_) == 0)
{
lean_object* v_a_2411_; lean_object* v___x_2413_; uint8_t v_isShared_2414_; uint8_t v_isSharedCheck_2418_; 
lean_del_object(v___x_2406_);
lean_dec(v_data_x3f_2404_);
lean_dec(v_relatedInformation_x3f_2403_);
lean_dec(v_leanTags_x3f_2402_);
lean_dec(v_tags_x3f_2401_);
lean_dec(v_message_2400_);
lean_dec(v_source_x3f_2399_);
lean_dec(v_code_x3f_2398_);
lean_dec(v_isSilent_x3f_2397_);
lean_dec(v_severity_x3f_2396_);
lean_dec(v_fullRange_x3f_2395_);
lean_dec_ref(v___x_2393_);
lean_del_object(v___x_2384_);
lean_dec_ref(v_inst_2370_);
v_a_2411_ = lean_ctor_get(v___x_2410_, 0);
v_isSharedCheck_2418_ = !lean_is_exclusive(v___x_2410_);
if (v_isSharedCheck_2418_ == 0)
{
v___x_2413_ = v___x_2410_;
v_isShared_2414_ = v_isSharedCheck_2418_;
goto v_resetjp_2412_;
}
else
{
lean_inc(v_a_2411_);
lean_dec(v___x_2410_);
v___x_2413_ = lean_box(0);
v_isShared_2414_ = v_isSharedCheck_2418_;
goto v_resetjp_2412_;
}
v_resetjp_2412_:
{
lean_object* v___x_2416_; 
if (v_isShared_2414_ == 0)
{
v___x_2416_ = v___x_2413_;
goto v_reusejp_2415_;
}
else
{
lean_object* v_reuseFailAlloc_2417_; 
v_reuseFailAlloc_2417_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2417_, 0, v_a_2411_);
v___x_2416_ = v_reuseFailAlloc_2417_;
goto v_reusejp_2415_;
}
v_reusejp_2415_:
{
return v___x_2416_;
}
}
}
else
{
lean_object* v_a_2419_; lean_object* v___x_2421_; uint8_t v_isShared_2422_; uint8_t v_isSharedCheck_2819_; 
v_a_2419_ = lean_ctor_get(v___x_2410_, 0);
v_isSharedCheck_2819_ = !lean_is_exclusive(v___x_2410_);
if (v_isSharedCheck_2819_ == 0)
{
v___x_2421_ = v___x_2410_;
v_isShared_2422_ = v_isSharedCheck_2819_;
goto v_resetjp_2420_;
}
else
{
lean_inc(v_a_2419_);
lean_dec(v___x_2410_);
v___x_2421_ = lean_box(0);
v_isShared_2422_ = v_isSharedCheck_2819_;
goto v_resetjp_2420_;
}
v_resetjp_2420_:
{
lean_object* v___y_2424_; lean_object* v___y_2425_; lean_object* v___y_2426_; lean_object* v___y_2427_; lean_object* v___y_2428_; lean_object* v___y_2429_; lean_object* v___y_2430_; lean_object* v___y_2431_; lean_object* v___y_2432_; lean_object* v_____do__lift_2433_; lean_object* v___y_2441_; lean_object* v___y_2442_; lean_object* v___y_2443_; lean_object* v___y_2444_; lean_object* v___y_2445_; lean_object* v___y_2446_; lean_object* v___y_2447_; lean_object* v___y_2448_; lean_object* v_____do__lift_2449_; lean_object* v___y_2450_; lean_object* v___f_2473_; lean_object* v___y_2475_; lean_object* v___y_2476_; lean_object* v___y_2477_; lean_object* v___y_2478_; lean_object* v___y_2479_; lean_object* v___y_2480_; lean_object* v___y_2481_; lean_object* v_____do__lift_2482_; lean_object* v___y_2483_; lean_object* v___f_2519_; lean_object* v___y_2521_; lean_object* v___y_2522_; lean_object* v___y_2523_; lean_object* v___y_2524_; lean_object* v___y_2525_; lean_object* v___y_2526_; lean_object* v_____do__lift_2527_; lean_object* v___y_2528_; lean_object* v___f_2564_; lean_object* v___y_2566_; lean_object* v___y_2567_; lean_object* v___y_2568_; lean_object* v___y_2569_; lean_object* v_____do__lift_2570_; lean_object* v___y_2571_; lean_object* v___y_2620_; lean_object* v___y_2621_; lean_object* v___y_2622_; lean_object* v_____do__lift_2623_; lean_object* v___y_2624_; lean_object* v___y_2647_; lean_object* v___y_2648_; lean_object* v___y_2649_; lean_object* v___y_2650_; lean_object* v___y_2651_; lean_object* v___y_2663_; lean_object* v___y_2664_; lean_object* v___y_2665_; lean_object* v___y_2666_; lean_object* v_j_2667_; lean_object* v___y_2678_; lean_object* v___y_2679_; lean_object* v_____do__lift_2680_; lean_object* v___y_2681_; lean_object* v___y_2720_; lean_object* v_____do__lift_2721_; lean_object* v___y_2722_; lean_object* v___y_2745_; lean_object* v___y_2746_; lean_object* v___y_2747_; lean_object* v___y_2759_; lean_object* v___y_2760_; lean_object* v___y_2761_; lean_object* v_____do__lift_2772_; lean_object* v___y_2773_; 
lean_inc_ref_n(v___x_2393_, 3);
v___f_2473_ = lean_alloc_closure((void*)(l_Lean_Widget_instRpcEncodableDiagnosticWith_dec___redArg___lam__0_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2____boxed), 4, 2);
lean_closure_set(v___f_2473_, 0, v___x_2387_);
lean_closure_set(v___f_2473_, 1, v___x_2393_);
v___f_2519_ = lean_alloc_closure((void*)(l_Lean_Widget_instRpcEncodableDiagnosticWith_dec___redArg___lam__1_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2____boxed), 4, 2);
lean_closure_set(v___f_2519_, 0, v___x_2387_);
lean_closure_set(v___f_2519_, 1, v___x_2393_);
v___f_2564_ = lean_alloc_closure((void*)(l_Lean_Widget_instRpcEncodableDiagnosticWith_dec___redArg___lam__2_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2____boxed), 4, 2);
lean_closure_set(v___f_2564_, 0, v___x_2387_);
lean_closure_set(v___f_2564_, 1, v___x_2393_);
if (lean_obj_tag(v_fullRange_x3f_2395_) == 0)
{
lean_object* v___x_2798_; 
v___x_2798_ = lean_box(0);
v_____do__lift_2772_ = v___x_2798_;
v___y_2773_ = v_a_2372_;
goto v___jp_2771_;
}
else
{
lean_object* v_val_2799_; lean_object* v___x_2801_; uint8_t v_isShared_2802_; uint8_t v_isSharedCheck_2818_; 
v_val_2799_ = lean_ctor_get(v_fullRange_x3f_2395_, 0);
v_isSharedCheck_2818_ = !lean_is_exclusive(v_fullRange_x3f_2395_);
if (v_isSharedCheck_2818_ == 0)
{
v___x_2801_ = v_fullRange_x3f_2395_;
v_isShared_2802_ = v_isSharedCheck_2818_;
goto v_resetjp_2800_;
}
else
{
lean_inc(v_val_2799_);
lean_dec(v_fullRange_x3f_2395_);
v___x_2801_ = lean_box(0);
v_isShared_2802_ = v_isSharedCheck_2818_;
goto v_resetjp_2800_;
}
v_resetjp_2800_:
{
lean_object* v___x_2803_; lean_object* v___x_10459__overap_2804_; lean_object* v___x_2805_; 
v___x_2803_ = l_Lean_Lsp_instFromJsonRange_fromJson(v_val_2799_);
lean_inc_ref(v___x_2393_);
v___x_10459__overap_2804_ = l_MonadExcept_ofExcept___redArg(v___x_2387_, v___x_2393_, v___x_2803_);
lean_inc_ref(v_a_2372_);
v___x_2805_ = lean_apply_1(v___x_10459__overap_2804_, v_a_2372_);
if (lean_obj_tag(v___x_2805_) == 0)
{
lean_object* v_a_2806_; lean_object* v___x_2808_; uint8_t v_isShared_2809_; uint8_t v_isSharedCheck_2813_; 
lean_del_object(v___x_2801_);
lean_dec_ref(v___f_2564_);
lean_dec_ref(v___f_2519_);
lean_dec_ref(v___f_2473_);
lean_del_object(v___x_2421_);
lean_dec(v_a_2419_);
lean_del_object(v___x_2406_);
lean_dec(v_data_x3f_2404_);
lean_dec(v_relatedInformation_x3f_2403_);
lean_dec(v_leanTags_x3f_2402_);
lean_dec(v_tags_x3f_2401_);
lean_dec(v_message_2400_);
lean_dec(v_source_x3f_2399_);
lean_dec(v_code_x3f_2398_);
lean_dec(v_isSilent_x3f_2397_);
lean_dec(v_severity_x3f_2396_);
lean_dec_ref(v___x_2393_);
lean_del_object(v___x_2384_);
lean_dec_ref(v_inst_2370_);
v_a_2806_ = lean_ctor_get(v___x_2805_, 0);
v_isSharedCheck_2813_ = !lean_is_exclusive(v___x_2805_);
if (v_isSharedCheck_2813_ == 0)
{
v___x_2808_ = v___x_2805_;
v_isShared_2809_ = v_isSharedCheck_2813_;
goto v_resetjp_2807_;
}
else
{
lean_inc(v_a_2806_);
lean_dec(v___x_2805_);
v___x_2808_ = lean_box(0);
v_isShared_2809_ = v_isSharedCheck_2813_;
goto v_resetjp_2807_;
}
v_resetjp_2807_:
{
lean_object* v___x_2811_; 
if (v_isShared_2809_ == 0)
{
v___x_2811_ = v___x_2808_;
goto v_reusejp_2810_;
}
else
{
lean_object* v_reuseFailAlloc_2812_; 
v_reuseFailAlloc_2812_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2812_, 0, v_a_2806_);
v___x_2811_ = v_reuseFailAlloc_2812_;
goto v_reusejp_2810_;
}
v_reusejp_2810_:
{
return v___x_2811_;
}
}
}
else
{
lean_object* v_a_2814_; lean_object* v___x_2816_; 
v_a_2814_ = lean_ctor_get(v___x_2805_, 0);
lean_inc(v_a_2814_);
lean_dec_ref_known(v___x_2805_, 1);
if (v_isShared_2802_ == 0)
{
lean_ctor_set(v___x_2801_, 0, v_a_2814_);
v___x_2816_ = v___x_2801_;
goto v_reusejp_2815_;
}
else
{
lean_object* v_reuseFailAlloc_2817_; 
v_reuseFailAlloc_2817_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2817_, 0, v_a_2814_);
v___x_2816_ = v_reuseFailAlloc_2817_;
goto v_reusejp_2815_;
}
v_reusejp_2815_:
{
v_____do__lift_2772_ = v___x_2816_;
v___y_2773_ = v_a_2372_;
goto v___jp_2771_;
}
}
}
}
v___jp_2423_:
{
lean_object* v___x_2435_; 
if (v_isShared_2407_ == 0)
{
lean_ctor_set(v___x_2406_, 10, v_____do__lift_2433_);
lean_ctor_set(v___x_2406_, 9, v___y_2426_);
lean_ctor_set(v___x_2406_, 8, v___y_2431_);
lean_ctor_set(v___x_2406_, 7, v___y_2429_);
lean_ctor_set(v___x_2406_, 6, v___y_2428_);
lean_ctor_set(v___x_2406_, 5, v___y_2424_);
lean_ctor_set(v___x_2406_, 4, v___y_2430_);
lean_ctor_set(v___x_2406_, 3, v___y_2432_);
lean_ctor_set(v___x_2406_, 2, v___y_2425_);
lean_ctor_set(v___x_2406_, 1, v___y_2427_);
lean_ctor_set(v___x_2406_, 0, v_a_2419_);
v___x_2435_ = v___x_2406_;
goto v_reusejp_2434_;
}
else
{
lean_object* v_reuseFailAlloc_2439_; 
v_reuseFailAlloc_2439_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v_reuseFailAlloc_2439_, 0, v_a_2419_);
lean_ctor_set(v_reuseFailAlloc_2439_, 1, v___y_2427_);
lean_ctor_set(v_reuseFailAlloc_2439_, 2, v___y_2425_);
lean_ctor_set(v_reuseFailAlloc_2439_, 3, v___y_2432_);
lean_ctor_set(v_reuseFailAlloc_2439_, 4, v___y_2430_);
lean_ctor_set(v_reuseFailAlloc_2439_, 5, v___y_2424_);
lean_ctor_set(v_reuseFailAlloc_2439_, 6, v___y_2428_);
lean_ctor_set(v_reuseFailAlloc_2439_, 7, v___y_2429_);
lean_ctor_set(v_reuseFailAlloc_2439_, 8, v___y_2431_);
lean_ctor_set(v_reuseFailAlloc_2439_, 9, v___y_2426_);
lean_ctor_set(v_reuseFailAlloc_2439_, 10, v_____do__lift_2433_);
v___x_2435_ = v_reuseFailAlloc_2439_;
goto v_reusejp_2434_;
}
v_reusejp_2434_:
{
lean_object* v___x_2437_; 
if (v_isShared_2422_ == 0)
{
lean_ctor_set(v___x_2421_, 0, v___x_2435_);
v___x_2437_ = v___x_2421_;
goto v_reusejp_2436_;
}
else
{
lean_object* v_reuseFailAlloc_2438_; 
v_reuseFailAlloc_2438_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2438_, 0, v___x_2435_);
v___x_2437_ = v_reuseFailAlloc_2438_;
goto v_reusejp_2436_;
}
v_reusejp_2436_:
{
return v___x_2437_;
}
}
}
v___jp_2440_:
{
if (lean_obj_tag(v_data_x3f_2404_) == 0)
{
lean_dec_ref(v___x_2393_);
lean_del_object(v___x_2384_);
v___y_2424_ = v___y_2442_;
v___y_2425_ = v___y_2441_;
v___y_2426_ = v_____do__lift_2449_;
v___y_2427_ = v___y_2443_;
v___y_2428_ = v___y_2444_;
v___y_2429_ = v___y_2445_;
v___y_2430_ = v___y_2446_;
v___y_2431_ = v___y_2447_;
v___y_2432_ = v___y_2448_;
v_____do__lift_2433_ = v_data_x3f_2404_;
goto v___jp_2423_;
}
else
{
lean_object* v_val_2451_; lean_object* v___x_2453_; uint8_t v_isShared_2454_; uint8_t v_isSharedCheck_2472_; 
v_val_2451_ = lean_ctor_get(v_data_x3f_2404_, 0);
v_isSharedCheck_2472_ = !lean_is_exclusive(v_data_x3f_2404_);
if (v_isSharedCheck_2472_ == 0)
{
v___x_2453_ = v_data_x3f_2404_;
v_isShared_2454_ = v_isSharedCheck_2472_;
goto v_resetjp_2452_;
}
else
{
lean_inc(v_val_2451_);
lean_dec(v_data_x3f_2404_);
v___x_2453_ = lean_box(0);
v_isShared_2454_ = v_isSharedCheck_2472_;
goto v_resetjp_2452_;
}
v_resetjp_2452_:
{
lean_object* v___x_2456_; 
if (v_isShared_2385_ == 0)
{
lean_ctor_set(v___x_2384_, 0, v_val_2451_);
v___x_2456_ = v___x_2384_;
goto v_reusejp_2455_;
}
else
{
lean_object* v_reuseFailAlloc_2471_; 
v_reuseFailAlloc_2471_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2471_, 0, v_val_2451_);
v___x_2456_ = v_reuseFailAlloc_2471_;
goto v_reusejp_2455_;
}
v_reusejp_2455_:
{
lean_object* v___x_10399__overap_2457_; lean_object* v___x_2458_; 
v___x_10399__overap_2457_ = l_MonadExcept_ofExcept___redArg(v___x_2387_, v___x_2393_, v___x_2456_);
lean_inc_ref(v___y_2450_);
v___x_2458_ = lean_apply_1(v___x_10399__overap_2457_, v___y_2450_);
if (lean_obj_tag(v___x_2458_) == 0)
{
lean_object* v_a_2459_; lean_object* v___x_2461_; uint8_t v_isShared_2462_; uint8_t v_isSharedCheck_2466_; 
lean_del_object(v___x_2453_);
lean_dec(v_____do__lift_2449_);
lean_dec(v___y_2448_);
lean_dec(v___y_2447_);
lean_dec(v___y_2446_);
lean_dec(v___y_2445_);
lean_dec(v___y_2444_);
lean_dec(v___y_2443_);
lean_dec(v___y_2442_);
lean_dec(v___y_2441_);
lean_del_object(v___x_2421_);
lean_dec(v_a_2419_);
lean_del_object(v___x_2406_);
v_a_2459_ = lean_ctor_get(v___x_2458_, 0);
v_isSharedCheck_2466_ = !lean_is_exclusive(v___x_2458_);
if (v_isSharedCheck_2466_ == 0)
{
v___x_2461_ = v___x_2458_;
v_isShared_2462_ = v_isSharedCheck_2466_;
goto v_resetjp_2460_;
}
else
{
lean_inc(v_a_2459_);
lean_dec(v___x_2458_);
v___x_2461_ = lean_box(0);
v_isShared_2462_ = v_isSharedCheck_2466_;
goto v_resetjp_2460_;
}
v_resetjp_2460_:
{
lean_object* v___x_2464_; 
if (v_isShared_2462_ == 0)
{
v___x_2464_ = v___x_2461_;
goto v_reusejp_2463_;
}
else
{
lean_object* v_reuseFailAlloc_2465_; 
v_reuseFailAlloc_2465_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2465_, 0, v_a_2459_);
v___x_2464_ = v_reuseFailAlloc_2465_;
goto v_reusejp_2463_;
}
v_reusejp_2463_:
{
return v___x_2464_;
}
}
}
else
{
lean_object* v_a_2467_; lean_object* v___x_2469_; 
v_a_2467_ = lean_ctor_get(v___x_2458_, 0);
lean_inc(v_a_2467_);
lean_dec_ref_known(v___x_2458_, 1);
if (v_isShared_2454_ == 0)
{
lean_ctor_set(v___x_2453_, 0, v_a_2467_);
v___x_2469_ = v___x_2453_;
goto v_reusejp_2468_;
}
else
{
lean_object* v_reuseFailAlloc_2470_; 
v_reuseFailAlloc_2470_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2470_, 0, v_a_2467_);
v___x_2469_ = v_reuseFailAlloc_2470_;
goto v_reusejp_2468_;
}
v_reusejp_2468_:
{
v___y_2424_ = v___y_2442_;
v___y_2425_ = v___y_2441_;
v___y_2426_ = v_____do__lift_2449_;
v___y_2427_ = v___y_2443_;
v___y_2428_ = v___y_2444_;
v___y_2429_ = v___y_2445_;
v___y_2430_ = v___y_2446_;
v___y_2431_ = v___y_2447_;
v___y_2432_ = v___y_2448_;
v_____do__lift_2433_ = v___x_2469_;
goto v___jp_2423_;
}
}
}
}
}
}
v___jp_2474_:
{
if (lean_obj_tag(v_relatedInformation_x3f_2403_) == 0)
{
lean_object* v___x_2484_; 
lean_dec_ref(v___f_2473_);
v___x_2484_ = lean_box(0);
v___y_2441_ = v___y_2476_;
v___y_2442_ = v___y_2475_;
v___y_2443_ = v___y_2477_;
v___y_2444_ = v___y_2478_;
v___y_2445_ = v___y_2479_;
v___y_2446_ = v___y_2480_;
v___y_2447_ = v_____do__lift_2482_;
v___y_2448_ = v___y_2481_;
v_____do__lift_2449_ = v___x_2484_;
v___y_2450_ = v___y_2483_;
goto v___jp_2440_;
}
else
{
lean_object* v_val_2485_; lean_object* v___x_2487_; uint8_t v_isShared_2488_; uint8_t v_isSharedCheck_2518_; 
v_val_2485_ = lean_ctor_get(v_relatedInformation_x3f_2403_, 0);
v_isSharedCheck_2518_ = !lean_is_exclusive(v_relatedInformation_x3f_2403_);
if (v_isSharedCheck_2518_ == 0)
{
v___x_2487_ = v_relatedInformation_x3f_2403_;
v_isShared_2488_ = v_isSharedCheck_2518_;
goto v_resetjp_2486_;
}
else
{
lean_inc(v_val_2485_);
lean_dec(v_relatedInformation_x3f_2403_);
v___x_2487_ = lean_box(0);
v_isShared_2488_ = v_isSharedCheck_2518_;
goto v_resetjp_2486_;
}
v_resetjp_2486_:
{
lean_object* v___f_2489_; lean_object* v___x_2490_; 
v___f_2489_ = ((lean_object*)(l_Lean_Widget_instRpcEncodableDiagnosticWith_dec___redArg___closed__12_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2_));
v___x_2490_ = l_Lean_Array_fromJson_x3f___redArg(v___f_2489_, v_val_2485_);
if (lean_obj_tag(v___x_2490_) == 0)
{
lean_object* v_a_2491_; lean_object* v___x_2493_; uint8_t v_isShared_2494_; uint8_t v_isSharedCheck_2498_; 
lean_del_object(v___x_2487_);
lean_dec(v_____do__lift_2482_);
lean_dec(v___y_2481_);
lean_dec(v___y_2480_);
lean_dec(v___y_2479_);
lean_dec(v___y_2478_);
lean_dec(v___y_2477_);
lean_dec(v___y_2476_);
lean_dec(v___y_2475_);
lean_dec_ref(v___f_2473_);
lean_del_object(v___x_2421_);
lean_dec(v_a_2419_);
lean_del_object(v___x_2406_);
lean_dec(v_data_x3f_2404_);
lean_dec_ref(v___x_2393_);
lean_del_object(v___x_2384_);
v_a_2491_ = lean_ctor_get(v___x_2490_, 0);
v_isSharedCheck_2498_ = !lean_is_exclusive(v___x_2490_);
if (v_isSharedCheck_2498_ == 0)
{
v___x_2493_ = v___x_2490_;
v_isShared_2494_ = v_isSharedCheck_2498_;
goto v_resetjp_2492_;
}
else
{
lean_inc(v_a_2491_);
lean_dec(v___x_2490_);
v___x_2493_ = lean_box(0);
v_isShared_2494_ = v_isSharedCheck_2498_;
goto v_resetjp_2492_;
}
v_resetjp_2492_:
{
lean_object* v___x_2496_; 
if (v_isShared_2494_ == 0)
{
v___x_2496_ = v___x_2493_;
goto v_reusejp_2495_;
}
else
{
lean_object* v_reuseFailAlloc_2497_; 
v_reuseFailAlloc_2497_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2497_, 0, v_a_2491_);
v___x_2496_ = v_reuseFailAlloc_2497_;
goto v_reusejp_2495_;
}
v_reusejp_2495_:
{
return v___x_2496_;
}
}
}
else
{
lean_object* v_a_2499_; size_t v_sz_2500_; size_t v___x_2501_; lean_object* v___x_2502_; lean_object* v___x_2503_; lean_object* v___x_10406__overap_2504_; lean_object* v___x_2505_; 
v_a_2499_ = lean_ctor_get(v___x_2490_, 0);
lean_inc(v_a_2499_);
lean_dec_ref_known(v___x_2490_, 1);
v_sz_2500_ = lean_array_size(v_a_2499_);
v___x_2501_ = ((size_t)0ULL);
v___x_2502_ = l_unsafeCast___redArg(v_a_2499_);
lean_dec(v_a_2499_);
v___x_2503_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_2387_, v___f_2473_, v_sz_2500_, v___x_2501_, v___x_2502_);
v___x_10406__overap_2504_ = l_unsafeCast___redArg(v___x_2503_);
lean_dec(v___x_2503_);
lean_inc_ref(v___y_2483_);
v___x_2505_ = lean_apply_1(v___x_10406__overap_2504_, v___y_2483_);
if (lean_obj_tag(v___x_2505_) == 0)
{
lean_object* v_a_2506_; lean_object* v___x_2508_; uint8_t v_isShared_2509_; uint8_t v_isSharedCheck_2513_; 
lean_del_object(v___x_2487_);
lean_dec(v_____do__lift_2482_);
lean_dec(v___y_2481_);
lean_dec(v___y_2480_);
lean_dec(v___y_2479_);
lean_dec(v___y_2478_);
lean_dec(v___y_2477_);
lean_dec(v___y_2476_);
lean_dec(v___y_2475_);
lean_del_object(v___x_2421_);
lean_dec(v_a_2419_);
lean_del_object(v___x_2406_);
lean_dec(v_data_x3f_2404_);
lean_dec_ref(v___x_2393_);
lean_del_object(v___x_2384_);
v_a_2506_ = lean_ctor_get(v___x_2505_, 0);
v_isSharedCheck_2513_ = !lean_is_exclusive(v___x_2505_);
if (v_isSharedCheck_2513_ == 0)
{
v___x_2508_ = v___x_2505_;
v_isShared_2509_ = v_isSharedCheck_2513_;
goto v_resetjp_2507_;
}
else
{
lean_inc(v_a_2506_);
lean_dec(v___x_2505_);
v___x_2508_ = lean_box(0);
v_isShared_2509_ = v_isSharedCheck_2513_;
goto v_resetjp_2507_;
}
v_resetjp_2507_:
{
lean_object* v___x_2511_; 
if (v_isShared_2509_ == 0)
{
v___x_2511_ = v___x_2508_;
goto v_reusejp_2510_;
}
else
{
lean_object* v_reuseFailAlloc_2512_; 
v_reuseFailAlloc_2512_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2512_, 0, v_a_2506_);
v___x_2511_ = v_reuseFailAlloc_2512_;
goto v_reusejp_2510_;
}
v_reusejp_2510_:
{
return v___x_2511_;
}
}
}
else
{
lean_object* v_a_2514_; lean_object* v___x_2516_; 
v_a_2514_ = lean_ctor_get(v___x_2505_, 0);
lean_inc(v_a_2514_);
lean_dec_ref_known(v___x_2505_, 1);
if (v_isShared_2488_ == 0)
{
lean_ctor_set(v___x_2487_, 0, v_a_2514_);
v___x_2516_ = v___x_2487_;
goto v_reusejp_2515_;
}
else
{
lean_object* v_reuseFailAlloc_2517_; 
v_reuseFailAlloc_2517_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2517_, 0, v_a_2514_);
v___x_2516_ = v_reuseFailAlloc_2517_;
goto v_reusejp_2515_;
}
v_reusejp_2515_:
{
v___y_2441_ = v___y_2476_;
v___y_2442_ = v___y_2475_;
v___y_2443_ = v___y_2477_;
v___y_2444_ = v___y_2478_;
v___y_2445_ = v___y_2479_;
v___y_2446_ = v___y_2480_;
v___y_2447_ = v_____do__lift_2482_;
v___y_2448_ = v___y_2481_;
v_____do__lift_2449_ = v___x_2516_;
v___y_2450_ = v___y_2483_;
goto v___jp_2440_;
}
}
}
}
}
}
v___jp_2520_:
{
if (lean_obj_tag(v_leanTags_x3f_2402_) == 0)
{
lean_object* v___x_2529_; 
lean_dec_ref(v___f_2519_);
v___x_2529_ = lean_box(0);
v___y_2475_ = v___y_2522_;
v___y_2476_ = v___y_2521_;
v___y_2477_ = v___y_2523_;
v___y_2478_ = v___y_2524_;
v___y_2479_ = v_____do__lift_2527_;
v___y_2480_ = v___y_2525_;
v___y_2481_ = v___y_2526_;
v_____do__lift_2482_ = v___x_2529_;
v___y_2483_ = v___y_2528_;
goto v___jp_2474_;
}
else
{
lean_object* v_val_2530_; lean_object* v___x_2532_; uint8_t v_isShared_2533_; uint8_t v_isSharedCheck_2563_; 
v_val_2530_ = lean_ctor_get(v_leanTags_x3f_2402_, 0);
v_isSharedCheck_2563_ = !lean_is_exclusive(v_leanTags_x3f_2402_);
if (v_isSharedCheck_2563_ == 0)
{
v___x_2532_ = v_leanTags_x3f_2402_;
v_isShared_2533_ = v_isSharedCheck_2563_;
goto v_resetjp_2531_;
}
else
{
lean_inc(v_val_2530_);
lean_dec(v_leanTags_x3f_2402_);
v___x_2532_ = lean_box(0);
v_isShared_2533_ = v_isSharedCheck_2563_;
goto v_resetjp_2531_;
}
v_resetjp_2531_:
{
lean_object* v___f_2534_; lean_object* v___x_2535_; 
v___f_2534_ = ((lean_object*)(l_Lean_Widget_instRpcEncodableDiagnosticWith_dec___redArg___closed__12_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2_));
v___x_2535_ = l_Lean_Array_fromJson_x3f___redArg(v___f_2534_, v_val_2530_);
if (lean_obj_tag(v___x_2535_) == 0)
{
lean_object* v_a_2536_; lean_object* v___x_2538_; uint8_t v_isShared_2539_; uint8_t v_isSharedCheck_2543_; 
lean_del_object(v___x_2532_);
lean_dec(v_____do__lift_2527_);
lean_dec(v___y_2526_);
lean_dec(v___y_2525_);
lean_dec(v___y_2524_);
lean_dec(v___y_2523_);
lean_dec(v___y_2522_);
lean_dec(v___y_2521_);
lean_dec_ref(v___f_2519_);
lean_dec_ref(v___f_2473_);
lean_del_object(v___x_2421_);
lean_dec(v_a_2419_);
lean_del_object(v___x_2406_);
lean_dec(v_data_x3f_2404_);
lean_dec(v_relatedInformation_x3f_2403_);
lean_dec_ref(v___x_2393_);
lean_del_object(v___x_2384_);
v_a_2536_ = lean_ctor_get(v___x_2535_, 0);
v_isSharedCheck_2543_ = !lean_is_exclusive(v___x_2535_);
if (v_isSharedCheck_2543_ == 0)
{
v___x_2538_ = v___x_2535_;
v_isShared_2539_ = v_isSharedCheck_2543_;
goto v_resetjp_2537_;
}
else
{
lean_inc(v_a_2536_);
lean_dec(v___x_2535_);
v___x_2538_ = lean_box(0);
v_isShared_2539_ = v_isSharedCheck_2543_;
goto v_resetjp_2537_;
}
v_resetjp_2537_:
{
lean_object* v___x_2541_; 
if (v_isShared_2539_ == 0)
{
v___x_2541_ = v___x_2538_;
goto v_reusejp_2540_;
}
else
{
lean_object* v_reuseFailAlloc_2542_; 
v_reuseFailAlloc_2542_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2542_, 0, v_a_2536_);
v___x_2541_ = v_reuseFailAlloc_2542_;
goto v_reusejp_2540_;
}
v_reusejp_2540_:
{
return v___x_2541_;
}
}
}
else
{
lean_object* v_a_2544_; size_t v_sz_2545_; size_t v___x_2546_; lean_object* v___x_2547_; lean_object* v___x_2548_; lean_object* v___x_10419__overap_2549_; lean_object* v___x_2550_; 
v_a_2544_ = lean_ctor_get(v___x_2535_, 0);
lean_inc(v_a_2544_);
lean_dec_ref_known(v___x_2535_, 1);
v_sz_2545_ = lean_array_size(v_a_2544_);
v___x_2546_ = ((size_t)0ULL);
v___x_2547_ = l_unsafeCast___redArg(v_a_2544_);
lean_dec(v_a_2544_);
v___x_2548_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_2387_, v___f_2519_, v_sz_2545_, v___x_2546_, v___x_2547_);
v___x_10419__overap_2549_ = l_unsafeCast___redArg(v___x_2548_);
lean_dec(v___x_2548_);
lean_inc_ref(v___y_2528_);
v___x_2550_ = lean_apply_1(v___x_10419__overap_2549_, v___y_2528_);
if (lean_obj_tag(v___x_2550_) == 0)
{
lean_object* v_a_2551_; lean_object* v___x_2553_; uint8_t v_isShared_2554_; uint8_t v_isSharedCheck_2558_; 
lean_del_object(v___x_2532_);
lean_dec(v_____do__lift_2527_);
lean_dec(v___y_2526_);
lean_dec(v___y_2525_);
lean_dec(v___y_2524_);
lean_dec(v___y_2523_);
lean_dec(v___y_2522_);
lean_dec(v___y_2521_);
lean_dec_ref(v___f_2473_);
lean_del_object(v___x_2421_);
lean_dec(v_a_2419_);
lean_del_object(v___x_2406_);
lean_dec(v_data_x3f_2404_);
lean_dec(v_relatedInformation_x3f_2403_);
lean_dec_ref(v___x_2393_);
lean_del_object(v___x_2384_);
v_a_2551_ = lean_ctor_get(v___x_2550_, 0);
v_isSharedCheck_2558_ = !lean_is_exclusive(v___x_2550_);
if (v_isSharedCheck_2558_ == 0)
{
v___x_2553_ = v___x_2550_;
v_isShared_2554_ = v_isSharedCheck_2558_;
goto v_resetjp_2552_;
}
else
{
lean_inc(v_a_2551_);
lean_dec(v___x_2550_);
v___x_2553_ = lean_box(0);
v_isShared_2554_ = v_isSharedCheck_2558_;
goto v_resetjp_2552_;
}
v_resetjp_2552_:
{
lean_object* v___x_2556_; 
if (v_isShared_2554_ == 0)
{
v___x_2556_ = v___x_2553_;
goto v_reusejp_2555_;
}
else
{
lean_object* v_reuseFailAlloc_2557_; 
v_reuseFailAlloc_2557_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2557_, 0, v_a_2551_);
v___x_2556_ = v_reuseFailAlloc_2557_;
goto v_reusejp_2555_;
}
v_reusejp_2555_:
{
return v___x_2556_;
}
}
}
else
{
lean_object* v_a_2559_; lean_object* v___x_2561_; 
v_a_2559_ = lean_ctor_get(v___x_2550_, 0);
lean_inc(v_a_2559_);
lean_dec_ref_known(v___x_2550_, 1);
if (v_isShared_2533_ == 0)
{
lean_ctor_set(v___x_2532_, 0, v_a_2559_);
v___x_2561_ = v___x_2532_;
goto v_reusejp_2560_;
}
else
{
lean_object* v_reuseFailAlloc_2562_; 
v_reuseFailAlloc_2562_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2562_, 0, v_a_2559_);
v___x_2561_ = v_reuseFailAlloc_2562_;
goto v_reusejp_2560_;
}
v_reusejp_2560_:
{
v___y_2475_ = v___y_2522_;
v___y_2476_ = v___y_2521_;
v___y_2477_ = v___y_2523_;
v___y_2478_ = v___y_2524_;
v___y_2479_ = v_____do__lift_2527_;
v___y_2480_ = v___y_2525_;
v___y_2481_ = v___y_2526_;
v_____do__lift_2482_ = v___x_2561_;
v___y_2483_ = v___y_2528_;
goto v___jp_2474_;
}
}
}
}
}
}
v___jp_2565_:
{
lean_object* v_rpcDecode_2572_; lean_object* v___x_2573_; 
v_rpcDecode_2572_ = lean_ctor_get(v_inst_2370_, 1);
lean_inc_ref(v_rpcDecode_2572_);
lean_dec_ref(v_inst_2370_);
lean_inc_ref(v___y_2571_);
v___x_2573_ = lean_apply_2(v_rpcDecode_2572_, v_message_2400_, v___y_2571_);
if (lean_obj_tag(v___x_2573_) == 0)
{
lean_object* v_a_2574_; lean_object* v___x_2576_; uint8_t v_isShared_2577_; uint8_t v_isSharedCheck_2581_; 
lean_dec(v_____do__lift_2570_);
lean_dec(v___y_2569_);
lean_dec(v___y_2568_);
lean_dec(v___y_2567_);
lean_dec(v___y_2566_);
lean_dec_ref(v___f_2564_);
lean_dec_ref(v___f_2519_);
lean_dec_ref(v___f_2473_);
lean_del_object(v___x_2421_);
lean_dec(v_a_2419_);
lean_del_object(v___x_2406_);
lean_dec(v_data_x3f_2404_);
lean_dec(v_relatedInformation_x3f_2403_);
lean_dec(v_leanTags_x3f_2402_);
lean_dec(v_tags_x3f_2401_);
lean_dec_ref(v___x_2393_);
lean_del_object(v___x_2384_);
v_a_2574_ = lean_ctor_get(v___x_2573_, 0);
v_isSharedCheck_2581_ = !lean_is_exclusive(v___x_2573_);
if (v_isSharedCheck_2581_ == 0)
{
v___x_2576_ = v___x_2573_;
v_isShared_2577_ = v_isSharedCheck_2581_;
goto v_resetjp_2575_;
}
else
{
lean_inc(v_a_2574_);
lean_dec(v___x_2573_);
v___x_2576_ = lean_box(0);
v_isShared_2577_ = v_isSharedCheck_2581_;
goto v_resetjp_2575_;
}
v_resetjp_2575_:
{
lean_object* v___x_2579_; 
if (v_isShared_2577_ == 0)
{
v___x_2579_ = v___x_2576_;
goto v_reusejp_2578_;
}
else
{
lean_object* v_reuseFailAlloc_2580_; 
v_reuseFailAlloc_2580_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2580_, 0, v_a_2574_);
v___x_2579_ = v_reuseFailAlloc_2580_;
goto v_reusejp_2578_;
}
v_reusejp_2578_:
{
return v___x_2579_;
}
}
}
else
{
if (lean_obj_tag(v_tags_x3f_2401_) == 0)
{
lean_object* v_a_2582_; lean_object* v___x_2583_; 
lean_dec_ref(v___f_2564_);
v_a_2582_ = lean_ctor_get(v___x_2573_, 0);
lean_inc(v_a_2582_);
lean_dec_ref_known(v___x_2573_, 1);
v___x_2583_ = lean_box(0);
v___y_2521_ = v___y_2566_;
v___y_2522_ = v_____do__lift_2570_;
v___y_2523_ = v___y_2567_;
v___y_2524_ = v_a_2582_;
v___y_2525_ = v___y_2568_;
v___y_2526_ = v___y_2569_;
v_____do__lift_2527_ = v___x_2583_;
v___y_2528_ = v___y_2571_;
goto v___jp_2520_;
}
else
{
lean_object* v_a_2584_; lean_object* v_val_2585_; lean_object* v___x_2587_; uint8_t v_isShared_2588_; uint8_t v_isSharedCheck_2618_; 
v_a_2584_ = lean_ctor_get(v___x_2573_, 0);
lean_inc(v_a_2584_);
lean_dec_ref_known(v___x_2573_, 1);
v_val_2585_ = lean_ctor_get(v_tags_x3f_2401_, 0);
v_isSharedCheck_2618_ = !lean_is_exclusive(v_tags_x3f_2401_);
if (v_isSharedCheck_2618_ == 0)
{
v___x_2587_ = v_tags_x3f_2401_;
v_isShared_2588_ = v_isSharedCheck_2618_;
goto v_resetjp_2586_;
}
else
{
lean_inc(v_val_2585_);
lean_dec(v_tags_x3f_2401_);
v___x_2587_ = lean_box(0);
v_isShared_2588_ = v_isSharedCheck_2618_;
goto v_resetjp_2586_;
}
v_resetjp_2586_:
{
lean_object* v___f_2589_; lean_object* v___x_2590_; 
v___f_2589_ = ((lean_object*)(l_Lean_Widget_instRpcEncodableDiagnosticWith_dec___redArg___closed__12_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2_));
v___x_2590_ = l_Lean_Array_fromJson_x3f___redArg(v___f_2589_, v_val_2585_);
if (lean_obj_tag(v___x_2590_) == 0)
{
lean_object* v_a_2591_; lean_object* v___x_2593_; uint8_t v_isShared_2594_; uint8_t v_isSharedCheck_2598_; 
lean_del_object(v___x_2587_);
lean_dec(v_a_2584_);
lean_dec(v_____do__lift_2570_);
lean_dec(v___y_2569_);
lean_dec(v___y_2568_);
lean_dec(v___y_2567_);
lean_dec(v___y_2566_);
lean_dec_ref(v___f_2564_);
lean_dec_ref(v___f_2519_);
lean_dec_ref(v___f_2473_);
lean_del_object(v___x_2421_);
lean_dec(v_a_2419_);
lean_del_object(v___x_2406_);
lean_dec(v_data_x3f_2404_);
lean_dec(v_relatedInformation_x3f_2403_);
lean_dec(v_leanTags_x3f_2402_);
lean_dec_ref(v___x_2393_);
lean_del_object(v___x_2384_);
v_a_2591_ = lean_ctor_get(v___x_2590_, 0);
v_isSharedCheck_2598_ = !lean_is_exclusive(v___x_2590_);
if (v_isSharedCheck_2598_ == 0)
{
v___x_2593_ = v___x_2590_;
v_isShared_2594_ = v_isSharedCheck_2598_;
goto v_resetjp_2592_;
}
else
{
lean_inc(v_a_2591_);
lean_dec(v___x_2590_);
v___x_2593_ = lean_box(0);
v_isShared_2594_ = v_isSharedCheck_2598_;
goto v_resetjp_2592_;
}
v_resetjp_2592_:
{
lean_object* v___x_2596_; 
if (v_isShared_2594_ == 0)
{
v___x_2596_ = v___x_2593_;
goto v_reusejp_2595_;
}
else
{
lean_object* v_reuseFailAlloc_2597_; 
v_reuseFailAlloc_2597_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2597_, 0, v_a_2591_);
v___x_2596_ = v_reuseFailAlloc_2597_;
goto v_reusejp_2595_;
}
v_reusejp_2595_:
{
return v___x_2596_;
}
}
}
else
{
lean_object* v_a_2599_; size_t v_sz_2600_; size_t v___x_2601_; lean_object* v___x_2602_; lean_object* v___x_2603_; lean_object* v___x_10432__overap_2604_; lean_object* v___x_2605_; 
v_a_2599_ = lean_ctor_get(v___x_2590_, 0);
lean_inc(v_a_2599_);
lean_dec_ref_known(v___x_2590_, 1);
v_sz_2600_ = lean_array_size(v_a_2599_);
v___x_2601_ = ((size_t)0ULL);
v___x_2602_ = l_unsafeCast___redArg(v_a_2599_);
lean_dec(v_a_2599_);
v___x_2603_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_2387_, v___f_2564_, v_sz_2600_, v___x_2601_, v___x_2602_);
v___x_10432__overap_2604_ = l_unsafeCast___redArg(v___x_2603_);
lean_dec(v___x_2603_);
lean_inc_ref(v___y_2571_);
v___x_2605_ = lean_apply_1(v___x_10432__overap_2604_, v___y_2571_);
if (lean_obj_tag(v___x_2605_) == 0)
{
lean_object* v_a_2606_; lean_object* v___x_2608_; uint8_t v_isShared_2609_; uint8_t v_isSharedCheck_2613_; 
lean_del_object(v___x_2587_);
lean_dec(v_a_2584_);
lean_dec(v_____do__lift_2570_);
lean_dec(v___y_2569_);
lean_dec(v___y_2568_);
lean_dec(v___y_2567_);
lean_dec(v___y_2566_);
lean_dec_ref(v___f_2519_);
lean_dec_ref(v___f_2473_);
lean_del_object(v___x_2421_);
lean_dec(v_a_2419_);
lean_del_object(v___x_2406_);
lean_dec(v_data_x3f_2404_);
lean_dec(v_relatedInformation_x3f_2403_);
lean_dec(v_leanTags_x3f_2402_);
lean_dec_ref(v___x_2393_);
lean_del_object(v___x_2384_);
v_a_2606_ = lean_ctor_get(v___x_2605_, 0);
v_isSharedCheck_2613_ = !lean_is_exclusive(v___x_2605_);
if (v_isSharedCheck_2613_ == 0)
{
v___x_2608_ = v___x_2605_;
v_isShared_2609_ = v_isSharedCheck_2613_;
goto v_resetjp_2607_;
}
else
{
lean_inc(v_a_2606_);
lean_dec(v___x_2605_);
v___x_2608_ = lean_box(0);
v_isShared_2609_ = v_isSharedCheck_2613_;
goto v_resetjp_2607_;
}
v_resetjp_2607_:
{
lean_object* v___x_2611_; 
if (v_isShared_2609_ == 0)
{
v___x_2611_ = v___x_2608_;
goto v_reusejp_2610_;
}
else
{
lean_object* v_reuseFailAlloc_2612_; 
v_reuseFailAlloc_2612_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2612_, 0, v_a_2606_);
v___x_2611_ = v_reuseFailAlloc_2612_;
goto v_reusejp_2610_;
}
v_reusejp_2610_:
{
return v___x_2611_;
}
}
}
else
{
lean_object* v_a_2614_; lean_object* v___x_2616_; 
v_a_2614_ = lean_ctor_get(v___x_2605_, 0);
lean_inc(v_a_2614_);
lean_dec_ref_known(v___x_2605_, 1);
if (v_isShared_2588_ == 0)
{
lean_ctor_set(v___x_2587_, 0, v_a_2614_);
v___x_2616_ = v___x_2587_;
goto v_reusejp_2615_;
}
else
{
lean_object* v_reuseFailAlloc_2617_; 
v_reuseFailAlloc_2617_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2617_, 0, v_a_2614_);
v___x_2616_ = v_reuseFailAlloc_2617_;
goto v_reusejp_2615_;
}
v_reusejp_2615_:
{
v___y_2521_ = v___y_2566_;
v___y_2522_ = v_____do__lift_2570_;
v___y_2523_ = v___y_2567_;
v___y_2524_ = v_a_2584_;
v___y_2525_ = v___y_2568_;
v___y_2526_ = v___y_2569_;
v_____do__lift_2527_ = v___x_2616_;
v___y_2528_ = v___y_2571_;
goto v___jp_2520_;
}
}
}
}
}
}
}
v___jp_2619_:
{
if (lean_obj_tag(v_source_x3f_2399_) == 0)
{
lean_object* v___x_2625_; 
v___x_2625_ = lean_box(0);
v___y_2566_ = v___y_2620_;
v___y_2567_ = v___y_2621_;
v___y_2568_ = v_____do__lift_2623_;
v___y_2569_ = v___y_2622_;
v_____do__lift_2570_ = v___x_2625_;
v___y_2571_ = v___y_2624_;
goto v___jp_2565_;
}
else
{
lean_object* v_val_2626_; lean_object* v___x_2628_; uint8_t v_isShared_2629_; uint8_t v_isSharedCheck_2645_; 
v_val_2626_ = lean_ctor_get(v_source_x3f_2399_, 0);
v_isSharedCheck_2645_ = !lean_is_exclusive(v_source_x3f_2399_);
if (v_isSharedCheck_2645_ == 0)
{
v___x_2628_ = v_source_x3f_2399_;
v_isShared_2629_ = v_isSharedCheck_2645_;
goto v_resetjp_2627_;
}
else
{
lean_inc(v_val_2626_);
lean_dec(v_source_x3f_2399_);
v___x_2628_ = lean_box(0);
v_isShared_2629_ = v_isSharedCheck_2645_;
goto v_resetjp_2627_;
}
v_resetjp_2627_:
{
lean_object* v___x_2630_; lean_object* v___x_10434__overap_2631_; lean_object* v___x_2632_; 
v___x_2630_ = l_Lean_Json_getStr_x3f(v_val_2626_);
lean_inc_ref(v___x_2393_);
v___x_10434__overap_2631_ = l_MonadExcept_ofExcept___redArg(v___x_2387_, v___x_2393_, v___x_2630_);
lean_inc_ref(v___y_2624_);
v___x_2632_ = lean_apply_1(v___x_10434__overap_2631_, v___y_2624_);
if (lean_obj_tag(v___x_2632_) == 0)
{
lean_object* v_a_2633_; lean_object* v___x_2635_; uint8_t v_isShared_2636_; uint8_t v_isSharedCheck_2640_; 
lean_del_object(v___x_2628_);
lean_dec(v_____do__lift_2623_);
lean_dec(v___y_2622_);
lean_dec(v___y_2621_);
lean_dec(v___y_2620_);
lean_dec_ref(v___f_2564_);
lean_dec_ref(v___f_2519_);
lean_dec_ref(v___f_2473_);
lean_del_object(v___x_2421_);
lean_dec(v_a_2419_);
lean_del_object(v___x_2406_);
lean_dec(v_data_x3f_2404_);
lean_dec(v_relatedInformation_x3f_2403_);
lean_dec(v_leanTags_x3f_2402_);
lean_dec(v_tags_x3f_2401_);
lean_dec(v_message_2400_);
lean_dec_ref(v___x_2393_);
lean_del_object(v___x_2384_);
lean_dec_ref(v_inst_2370_);
v_a_2633_ = lean_ctor_get(v___x_2632_, 0);
v_isSharedCheck_2640_ = !lean_is_exclusive(v___x_2632_);
if (v_isSharedCheck_2640_ == 0)
{
v___x_2635_ = v___x_2632_;
v_isShared_2636_ = v_isSharedCheck_2640_;
goto v_resetjp_2634_;
}
else
{
lean_inc(v_a_2633_);
lean_dec(v___x_2632_);
v___x_2635_ = lean_box(0);
v_isShared_2636_ = v_isSharedCheck_2640_;
goto v_resetjp_2634_;
}
v_resetjp_2634_:
{
lean_object* v___x_2638_; 
if (v_isShared_2636_ == 0)
{
v___x_2638_ = v___x_2635_;
goto v_reusejp_2637_;
}
else
{
lean_object* v_reuseFailAlloc_2639_; 
v_reuseFailAlloc_2639_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2639_, 0, v_a_2633_);
v___x_2638_ = v_reuseFailAlloc_2639_;
goto v_reusejp_2637_;
}
v_reusejp_2637_:
{
return v___x_2638_;
}
}
}
else
{
lean_object* v_a_2641_; lean_object* v___x_2643_; 
v_a_2641_ = lean_ctor_get(v___x_2632_, 0);
lean_inc(v_a_2641_);
lean_dec_ref_known(v___x_2632_, 1);
if (v_isShared_2629_ == 0)
{
lean_ctor_set(v___x_2628_, 0, v_a_2641_);
v___x_2643_ = v___x_2628_;
goto v_reusejp_2642_;
}
else
{
lean_object* v_reuseFailAlloc_2644_; 
v_reuseFailAlloc_2644_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2644_, 0, v_a_2641_);
v___x_2643_ = v_reuseFailAlloc_2644_;
goto v_reusejp_2642_;
}
v_reusejp_2642_:
{
v___y_2566_ = v___y_2620_;
v___y_2567_ = v___y_2621_;
v___y_2568_ = v_____do__lift_2623_;
v___y_2569_ = v___y_2622_;
v_____do__lift_2570_ = v___x_2643_;
v___y_2571_ = v___y_2624_;
goto v___jp_2565_;
}
}
}
}
}
v___jp_2646_:
{
if (lean_obj_tag(v___y_2651_) == 0)
{
lean_object* v_a_2652_; lean_object* v___x_2654_; uint8_t v_isShared_2655_; uint8_t v_isSharedCheck_2659_; 
lean_dec(v___y_2650_);
lean_dec(v___y_2648_);
lean_dec(v___y_2647_);
lean_dec_ref(v___f_2564_);
lean_dec_ref(v___f_2519_);
lean_dec_ref(v___f_2473_);
lean_del_object(v___x_2421_);
lean_dec(v_a_2419_);
lean_del_object(v___x_2406_);
lean_dec(v_data_x3f_2404_);
lean_dec(v_relatedInformation_x3f_2403_);
lean_dec(v_leanTags_x3f_2402_);
lean_dec(v_tags_x3f_2401_);
lean_dec(v_message_2400_);
lean_dec(v_source_x3f_2399_);
lean_dec_ref(v___x_2393_);
lean_del_object(v___x_2384_);
lean_dec_ref(v_inst_2370_);
v_a_2652_ = lean_ctor_get(v___y_2651_, 0);
v_isSharedCheck_2659_ = !lean_is_exclusive(v___y_2651_);
if (v_isSharedCheck_2659_ == 0)
{
v___x_2654_ = v___y_2651_;
v_isShared_2655_ = v_isSharedCheck_2659_;
goto v_resetjp_2653_;
}
else
{
lean_inc(v_a_2652_);
lean_dec(v___y_2651_);
v___x_2654_ = lean_box(0);
v_isShared_2655_ = v_isSharedCheck_2659_;
goto v_resetjp_2653_;
}
v_resetjp_2653_:
{
lean_object* v___x_2657_; 
if (v_isShared_2655_ == 0)
{
v___x_2657_ = v___x_2654_;
goto v_reusejp_2656_;
}
else
{
lean_object* v_reuseFailAlloc_2658_; 
v_reuseFailAlloc_2658_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2658_, 0, v_a_2652_);
v___x_2657_ = v_reuseFailAlloc_2658_;
goto v_reusejp_2656_;
}
v_reusejp_2656_:
{
return v___x_2657_;
}
}
}
else
{
lean_object* v_a_2660_; lean_object* v___x_2661_; 
v_a_2660_ = lean_ctor_get(v___y_2651_, 0);
lean_inc(v_a_2660_);
lean_dec_ref_known(v___y_2651_, 1);
v___x_2661_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2661_, 0, v_a_2660_);
v___y_2620_ = v___y_2647_;
v___y_2621_ = v___y_2648_;
v___y_2622_ = v___y_2650_;
v_____do__lift_2623_ = v___x_2661_;
v___y_2624_ = v___y_2649_;
goto v___jp_2619_;
}
}
v___jp_2662_:
{
lean_object* v___x_2668_; lean_object* v___x_2669_; lean_object* v___x_2670_; lean_object* v___x_2671_; lean_object* v___x_2672_; lean_object* v___x_2673_; lean_object* v___x_2674_; lean_object* v___x_10436__overap_2675_; lean_object* v___x_2676_; 
v___x_2668_ = ((lean_object*)(l_Lean_Widget_instRpcEncodableDiagnosticWith_dec___redArg___closed__13_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2_));
v___x_2669_ = lean_unsigned_to_nat(80u);
v___x_2670_ = l_Lean_Json_pretty(v_j_2667_, v___x_2669_);
v___x_2671_ = lean_string_append(v___x_2668_, v___x_2670_);
lean_dec_ref(v___x_2670_);
v___x_2672_ = ((lean_object*)(l_Lean_Array_fromJson_x3f___at___00Lean_Widget_instFromJsonTaggedText_fromJson___at___00Lean_Widget_instRpcEncodableMsgEmbed_dec_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__spec__4_spec__8___closed__1));
v___x_2673_ = lean_string_append(v___x_2671_, v___x_2672_);
v___x_2674_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2674_, 0, v___x_2673_);
lean_inc_ref(v___x_2393_);
v___x_10436__overap_2675_ = l_MonadExcept_ofExcept___redArg(v___x_2387_, v___x_2393_, v___x_2674_);
lean_inc_ref(v___y_2665_);
v___x_2676_ = lean_apply_1(v___x_10436__overap_2675_, v___y_2665_);
v___y_2647_ = v___y_2663_;
v___y_2648_ = v___y_2664_;
v___y_2649_ = v___y_2665_;
v___y_2650_ = v___y_2666_;
v___y_2651_ = v___x_2676_;
goto v___jp_2646_;
}
v___jp_2677_:
{
if (lean_obj_tag(v_code_x3f_2398_) == 0)
{
lean_object* v___x_2682_; 
v___x_2682_ = lean_box(0);
v___y_2620_ = v___y_2678_;
v___y_2621_ = v___y_2679_;
v___y_2622_ = v_____do__lift_2680_;
v_____do__lift_2623_ = v___x_2682_;
v___y_2624_ = v___y_2681_;
goto v___jp_2619_;
}
else
{
lean_object* v_val_2683_; lean_object* v___x_2685_; uint8_t v_isShared_2686_; uint8_t v_isSharedCheck_2718_; 
v_val_2683_ = lean_ctor_get(v_code_x3f_2398_, 0);
v_isSharedCheck_2718_ = !lean_is_exclusive(v_code_x3f_2398_);
if (v_isSharedCheck_2718_ == 0)
{
v___x_2685_ = v_code_x3f_2398_;
v_isShared_2686_ = v_isSharedCheck_2718_;
goto v_resetjp_2684_;
}
else
{
lean_inc(v_val_2683_);
lean_dec(v_code_x3f_2398_);
v___x_2685_ = lean_box(0);
v_isShared_2686_ = v_isSharedCheck_2718_;
goto v_resetjp_2684_;
}
v_resetjp_2684_:
{
switch(lean_obj_tag(v_val_2683_))
{
case 2:
{
lean_object* v_n_2687_; lean_object* v_mantissa_2688_; lean_object* v_exponent_2689_; lean_object* v___x_2690_; uint8_t v___x_2691_; 
v_n_2687_ = lean_ctor_get(v_val_2683_, 0);
v_mantissa_2688_ = lean_ctor_get(v_n_2687_, 0);
v_exponent_2689_ = lean_ctor_get(v_n_2687_, 1);
v___x_2690_ = lean_unsigned_to_nat(0u);
v___x_2691_ = lean_nat_dec_eq(v_exponent_2689_, v___x_2690_);
if (v___x_2691_ == 0)
{
lean_del_object(v___x_2685_);
v___y_2663_ = v___y_2678_;
v___y_2664_ = v___y_2679_;
v___y_2665_ = v___y_2681_;
v___y_2666_ = v_____do__lift_2680_;
v_j_2667_ = v_val_2683_;
goto v___jp_2662_;
}
else
{
lean_object* v___x_2693_; uint8_t v_isShared_2694_; uint8_t v_isSharedCheck_2703_; 
lean_inc(v_mantissa_2688_);
v_isSharedCheck_2703_ = !lean_is_exclusive(v_val_2683_);
if (v_isSharedCheck_2703_ == 0)
{
lean_object* v_unused_2704_; 
v_unused_2704_ = lean_ctor_get(v_val_2683_, 0);
lean_dec(v_unused_2704_);
v___x_2693_ = v_val_2683_;
v_isShared_2694_ = v_isSharedCheck_2703_;
goto v_resetjp_2692_;
}
else
{
lean_dec(v_val_2683_);
v___x_2693_ = lean_box(0);
v_isShared_2694_ = v_isSharedCheck_2703_;
goto v_resetjp_2692_;
}
v_resetjp_2692_:
{
lean_object* v___x_2696_; 
if (v_isShared_2694_ == 0)
{
lean_ctor_set_tag(v___x_2693_, 0);
lean_ctor_set(v___x_2693_, 0, v_mantissa_2688_);
v___x_2696_ = v___x_2693_;
goto v_reusejp_2695_;
}
else
{
lean_object* v_reuseFailAlloc_2702_; 
v_reuseFailAlloc_2702_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2702_, 0, v_mantissa_2688_);
v___x_2696_ = v_reuseFailAlloc_2702_;
goto v_reusejp_2695_;
}
v_reusejp_2695_:
{
lean_object* v___x_2698_; 
if (v_isShared_2686_ == 0)
{
lean_ctor_set(v___x_2685_, 0, v___x_2696_);
v___x_2698_ = v___x_2685_;
goto v_reusejp_2697_;
}
else
{
lean_object* v_reuseFailAlloc_2701_; 
v_reuseFailAlloc_2701_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2701_, 0, v___x_2696_);
v___x_2698_ = v_reuseFailAlloc_2701_;
goto v_reusejp_2697_;
}
v_reusejp_2697_:
{
lean_object* v___x_10439__overap_2699_; lean_object* v___x_2700_; 
lean_inc_ref(v___x_2393_);
v___x_10439__overap_2699_ = l_MonadExcept_ofExcept___redArg(v___x_2387_, v___x_2393_, v___x_2698_);
lean_inc_ref(v___y_2681_);
v___x_2700_ = lean_apply_1(v___x_10439__overap_2699_, v___y_2681_);
v___y_2647_ = v___y_2678_;
v___y_2648_ = v___y_2679_;
v___y_2649_ = v___y_2681_;
v___y_2650_ = v_____do__lift_2680_;
v___y_2651_ = v___x_2700_;
goto v___jp_2646_;
}
}
}
}
}
case 3:
{
lean_object* v_s_2705_; lean_object* v___x_2707_; uint8_t v_isShared_2708_; uint8_t v_isSharedCheck_2717_; 
v_s_2705_ = lean_ctor_get(v_val_2683_, 0);
v_isSharedCheck_2717_ = !lean_is_exclusive(v_val_2683_);
if (v_isSharedCheck_2717_ == 0)
{
v___x_2707_ = v_val_2683_;
v_isShared_2708_ = v_isSharedCheck_2717_;
goto v_resetjp_2706_;
}
else
{
lean_inc(v_s_2705_);
lean_dec(v_val_2683_);
v___x_2707_ = lean_box(0);
v_isShared_2708_ = v_isSharedCheck_2717_;
goto v_resetjp_2706_;
}
v_resetjp_2706_:
{
lean_object* v___x_2710_; 
if (v_isShared_2708_ == 0)
{
lean_ctor_set_tag(v___x_2707_, 1);
v___x_2710_ = v___x_2707_;
goto v_reusejp_2709_;
}
else
{
lean_object* v_reuseFailAlloc_2716_; 
v_reuseFailAlloc_2716_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2716_, 0, v_s_2705_);
v___x_2710_ = v_reuseFailAlloc_2716_;
goto v_reusejp_2709_;
}
v_reusejp_2709_:
{
lean_object* v___x_2712_; 
if (v_isShared_2686_ == 0)
{
lean_ctor_set(v___x_2685_, 0, v___x_2710_);
v___x_2712_ = v___x_2685_;
goto v_reusejp_2711_;
}
else
{
lean_object* v_reuseFailAlloc_2715_; 
v_reuseFailAlloc_2715_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2715_, 0, v___x_2710_);
v___x_2712_ = v_reuseFailAlloc_2715_;
goto v_reusejp_2711_;
}
v_reusejp_2711_:
{
lean_object* v___x_10441__overap_2713_; lean_object* v___x_2714_; 
lean_inc_ref(v___x_2393_);
v___x_10441__overap_2713_ = l_MonadExcept_ofExcept___redArg(v___x_2387_, v___x_2393_, v___x_2712_);
lean_inc_ref(v___y_2681_);
v___x_2714_ = lean_apply_1(v___x_10441__overap_2713_, v___y_2681_);
v___y_2647_ = v___y_2678_;
v___y_2648_ = v___y_2679_;
v___y_2649_ = v___y_2681_;
v___y_2650_ = v_____do__lift_2680_;
v___y_2651_ = v___x_2714_;
goto v___jp_2646_;
}
}
}
}
default: 
{
lean_del_object(v___x_2685_);
v___y_2663_ = v___y_2678_;
v___y_2664_ = v___y_2679_;
v___y_2665_ = v___y_2681_;
v___y_2666_ = v_____do__lift_2680_;
v_j_2667_ = v_val_2683_;
goto v___jp_2662_;
}
}
}
}
}
v___jp_2719_:
{
if (lean_obj_tag(v_isSilent_x3f_2397_) == 0)
{
lean_object* v___x_2723_; 
v___x_2723_ = lean_box(0);
v___y_2678_ = v_____do__lift_2721_;
v___y_2679_ = v___y_2720_;
v_____do__lift_2680_ = v___x_2723_;
v___y_2681_ = v___y_2722_;
goto v___jp_2677_;
}
else
{
lean_object* v_val_2724_; lean_object* v___x_2726_; uint8_t v_isShared_2727_; uint8_t v_isSharedCheck_2743_; 
v_val_2724_ = lean_ctor_get(v_isSilent_x3f_2397_, 0);
v_isSharedCheck_2743_ = !lean_is_exclusive(v_isSilent_x3f_2397_);
if (v_isSharedCheck_2743_ == 0)
{
v___x_2726_ = v_isSilent_x3f_2397_;
v_isShared_2727_ = v_isSharedCheck_2743_;
goto v_resetjp_2725_;
}
else
{
lean_inc(v_val_2724_);
lean_dec(v_isSilent_x3f_2397_);
v___x_2726_ = lean_box(0);
v_isShared_2727_ = v_isSharedCheck_2743_;
goto v_resetjp_2725_;
}
v_resetjp_2725_:
{
lean_object* v___x_2728_; lean_object* v___x_10443__overap_2729_; lean_object* v___x_2730_; 
v___x_2728_ = l_Lean_Json_getBool_x3f(v_val_2724_);
lean_dec(v_val_2724_);
lean_inc_ref(v___x_2393_);
v___x_10443__overap_2729_ = l_MonadExcept_ofExcept___redArg(v___x_2387_, v___x_2393_, v___x_2728_);
lean_inc_ref(v___y_2722_);
v___x_2730_ = lean_apply_1(v___x_10443__overap_2729_, v___y_2722_);
if (lean_obj_tag(v___x_2730_) == 0)
{
lean_object* v_a_2731_; lean_object* v___x_2733_; uint8_t v_isShared_2734_; uint8_t v_isSharedCheck_2738_; 
lean_del_object(v___x_2726_);
lean_dec(v_____do__lift_2721_);
lean_dec(v___y_2720_);
lean_dec_ref(v___f_2564_);
lean_dec_ref(v___f_2519_);
lean_dec_ref(v___f_2473_);
lean_del_object(v___x_2421_);
lean_dec(v_a_2419_);
lean_del_object(v___x_2406_);
lean_dec(v_data_x3f_2404_);
lean_dec(v_relatedInformation_x3f_2403_);
lean_dec(v_leanTags_x3f_2402_);
lean_dec(v_tags_x3f_2401_);
lean_dec(v_message_2400_);
lean_dec(v_source_x3f_2399_);
lean_dec(v_code_x3f_2398_);
lean_dec_ref(v___x_2393_);
lean_del_object(v___x_2384_);
lean_dec_ref(v_inst_2370_);
v_a_2731_ = lean_ctor_get(v___x_2730_, 0);
v_isSharedCheck_2738_ = !lean_is_exclusive(v___x_2730_);
if (v_isSharedCheck_2738_ == 0)
{
v___x_2733_ = v___x_2730_;
v_isShared_2734_ = v_isSharedCheck_2738_;
goto v_resetjp_2732_;
}
else
{
lean_inc(v_a_2731_);
lean_dec(v___x_2730_);
v___x_2733_ = lean_box(0);
v_isShared_2734_ = v_isSharedCheck_2738_;
goto v_resetjp_2732_;
}
v_resetjp_2732_:
{
lean_object* v___x_2736_; 
if (v_isShared_2734_ == 0)
{
v___x_2736_ = v___x_2733_;
goto v_reusejp_2735_;
}
else
{
lean_object* v_reuseFailAlloc_2737_; 
v_reuseFailAlloc_2737_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2737_, 0, v_a_2731_);
v___x_2736_ = v_reuseFailAlloc_2737_;
goto v_reusejp_2735_;
}
v_reusejp_2735_:
{
return v___x_2736_;
}
}
}
else
{
lean_object* v_a_2739_; lean_object* v___x_2741_; 
v_a_2739_ = lean_ctor_get(v___x_2730_, 0);
lean_inc(v_a_2739_);
lean_dec_ref_known(v___x_2730_, 1);
if (v_isShared_2727_ == 0)
{
lean_ctor_set(v___x_2726_, 0, v_a_2739_);
v___x_2741_ = v___x_2726_;
goto v_reusejp_2740_;
}
else
{
lean_object* v_reuseFailAlloc_2742_; 
v_reuseFailAlloc_2742_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2742_, 0, v_a_2739_);
v___x_2741_ = v_reuseFailAlloc_2742_;
goto v_reusejp_2740_;
}
v_reusejp_2740_:
{
v___y_2678_ = v_____do__lift_2721_;
v___y_2679_ = v___y_2720_;
v_____do__lift_2680_ = v___x_2741_;
v___y_2681_ = v___y_2722_;
goto v___jp_2677_;
}
}
}
}
}
v___jp_2744_:
{
if (lean_obj_tag(v___y_2747_) == 0)
{
lean_object* v_a_2748_; lean_object* v___x_2750_; uint8_t v_isShared_2751_; uint8_t v_isSharedCheck_2755_; 
lean_dec(v___y_2746_);
lean_dec_ref(v___f_2564_);
lean_dec_ref(v___f_2519_);
lean_dec_ref(v___f_2473_);
lean_del_object(v___x_2421_);
lean_dec(v_a_2419_);
lean_del_object(v___x_2406_);
lean_dec(v_data_x3f_2404_);
lean_dec(v_relatedInformation_x3f_2403_);
lean_dec(v_leanTags_x3f_2402_);
lean_dec(v_tags_x3f_2401_);
lean_dec(v_message_2400_);
lean_dec(v_source_x3f_2399_);
lean_dec(v_code_x3f_2398_);
lean_dec(v_isSilent_x3f_2397_);
lean_dec_ref(v___x_2393_);
lean_del_object(v___x_2384_);
lean_dec_ref(v_inst_2370_);
v_a_2748_ = lean_ctor_get(v___y_2747_, 0);
v_isSharedCheck_2755_ = !lean_is_exclusive(v___y_2747_);
if (v_isSharedCheck_2755_ == 0)
{
v___x_2750_ = v___y_2747_;
v_isShared_2751_ = v_isSharedCheck_2755_;
goto v_resetjp_2749_;
}
else
{
lean_inc(v_a_2748_);
lean_dec(v___y_2747_);
v___x_2750_ = lean_box(0);
v_isShared_2751_ = v_isSharedCheck_2755_;
goto v_resetjp_2749_;
}
v_resetjp_2749_:
{
lean_object* v___x_2753_; 
if (v_isShared_2751_ == 0)
{
v___x_2753_ = v___x_2750_;
goto v_reusejp_2752_;
}
else
{
lean_object* v_reuseFailAlloc_2754_; 
v_reuseFailAlloc_2754_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2754_, 0, v_a_2748_);
v___x_2753_ = v_reuseFailAlloc_2754_;
goto v_reusejp_2752_;
}
v_reusejp_2752_:
{
return v___x_2753_;
}
}
}
else
{
lean_object* v_a_2756_; lean_object* v___x_2757_; 
v_a_2756_ = lean_ctor_get(v___y_2747_, 0);
lean_inc(v_a_2756_);
lean_dec_ref_known(v___y_2747_, 1);
v___x_2757_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2757_, 0, v_a_2756_);
v___y_2720_ = v___y_2746_;
v_____do__lift_2721_ = v___x_2757_;
v___y_2722_ = v___y_2745_;
goto v___jp_2719_;
}
}
v___jp_2758_:
{
lean_object* v___x_2762_; lean_object* v___x_2763_; lean_object* v___x_2764_; lean_object* v___x_2765_; lean_object* v___x_2766_; lean_object* v___x_2767_; lean_object* v___x_2768_; lean_object* v___x_10445__overap_2769_; lean_object* v___x_2770_; 
v___x_2762_ = ((lean_object*)(l_Lean_Widget_instRpcEncodableDiagnosticWith_dec___redArg___closed__14_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2_));
v___x_2763_ = lean_unsigned_to_nat(80u);
v___x_2764_ = l_Lean_Json_pretty(v___y_2761_, v___x_2763_);
v___x_2765_ = lean_string_append(v___x_2762_, v___x_2764_);
lean_dec_ref(v___x_2764_);
v___x_2766_ = ((lean_object*)(l_Lean_Array_fromJson_x3f___at___00Lean_Widget_instFromJsonTaggedText_fromJson___at___00Lean_Widget_instRpcEncodableMsgEmbed_dec_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__spec__4_spec__8___closed__1));
v___x_2767_ = lean_string_append(v___x_2765_, v___x_2766_);
v___x_2768_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2768_, 0, v___x_2767_);
lean_inc_ref(v___x_2393_);
v___x_10445__overap_2769_ = l_MonadExcept_ofExcept___redArg(v___x_2387_, v___x_2393_, v___x_2768_);
lean_inc_ref(v___y_2759_);
v___x_2770_ = lean_apply_1(v___x_10445__overap_2769_, v___y_2759_);
v___y_2745_ = v___y_2759_;
v___y_2746_ = v___y_2760_;
v___y_2747_ = v___x_2770_;
goto v___jp_2744_;
}
v___jp_2771_:
{
if (lean_obj_tag(v_severity_x3f_2396_) == 0)
{
lean_object* v___x_2774_; 
v___x_2774_ = lean_box(0);
v___y_2720_ = v_____do__lift_2772_;
v_____do__lift_2721_ = v___x_2774_;
v___y_2722_ = v___y_2773_;
goto v___jp_2719_;
}
else
{
lean_object* v_val_2775_; lean_object* v___x_2776_; 
v_val_2775_ = lean_ctor_get(v_severity_x3f_2396_, 0);
lean_inc_n(v_val_2775_, 2);
lean_dec_ref_known(v_severity_x3f_2396_, 1);
v___x_2776_ = l_Lean_Json_getNat_x3f(v_val_2775_);
if (lean_obj_tag(v___x_2776_) == 1)
{
lean_object* v_a_2777_; lean_object* v___x_2778_; uint8_t v___x_2779_; 
v_a_2777_ = lean_ctor_get(v___x_2776_, 0);
lean_inc(v_a_2777_);
lean_dec_ref_known(v___x_2776_, 1);
v___x_2778_ = lean_unsigned_to_nat(1u);
v___x_2779_ = lean_nat_dec_eq(v_a_2777_, v___x_2778_);
if (v___x_2779_ == 0)
{
lean_object* v___x_2780_; uint8_t v___x_2781_; 
v___x_2780_ = lean_unsigned_to_nat(2u);
v___x_2781_ = lean_nat_dec_eq(v_a_2777_, v___x_2780_);
if (v___x_2781_ == 0)
{
lean_object* v___x_2782_; uint8_t v___x_2783_; 
v___x_2782_ = lean_unsigned_to_nat(3u);
v___x_2783_ = lean_nat_dec_eq(v_a_2777_, v___x_2782_);
if (v___x_2783_ == 0)
{
lean_object* v___x_2784_; uint8_t v___x_2785_; 
v___x_2784_ = lean_unsigned_to_nat(4u);
v___x_2785_ = lean_nat_dec_eq(v_a_2777_, v___x_2784_);
lean_dec(v_a_2777_);
if (v___x_2785_ == 0)
{
v___y_2759_ = v___y_2773_;
v___y_2760_ = v_____do__lift_2772_;
v___y_2761_ = v_val_2775_;
goto v___jp_2758_;
}
else
{
lean_object* v___x_2786_; lean_object* v___x_10451__overap_2787_; lean_object* v___x_2788_; 
lean_dec(v_val_2775_);
v___x_2786_ = ((lean_object*)(l_Lean_Widget_instRpcEncodableDiagnosticWith_dec___redArg___closed__15_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2_));
lean_inc_ref(v___x_2393_);
v___x_10451__overap_2787_ = l_MonadExcept_ofExcept___redArg(v___x_2387_, v___x_2393_, v___x_2786_);
lean_inc_ref(v___y_2773_);
v___x_2788_ = lean_apply_1(v___x_10451__overap_2787_, v___y_2773_);
v___y_2745_ = v___y_2773_;
v___y_2746_ = v_____do__lift_2772_;
v___y_2747_ = v___x_2788_;
goto v___jp_2744_;
}
}
else
{
lean_object* v___x_2789_; lean_object* v___x_10453__overap_2790_; lean_object* v___x_2791_; 
lean_dec(v_a_2777_);
lean_dec(v_val_2775_);
v___x_2789_ = ((lean_object*)(l_Lean_Widget_instRpcEncodableDiagnosticWith_dec___redArg___closed__16_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2_));
lean_inc_ref(v___x_2393_);
v___x_10453__overap_2790_ = l_MonadExcept_ofExcept___redArg(v___x_2387_, v___x_2393_, v___x_2789_);
lean_inc_ref(v___y_2773_);
v___x_2791_ = lean_apply_1(v___x_10453__overap_2790_, v___y_2773_);
v___y_2745_ = v___y_2773_;
v___y_2746_ = v_____do__lift_2772_;
v___y_2747_ = v___x_2791_;
goto v___jp_2744_;
}
}
else
{
lean_object* v___x_2792_; lean_object* v___x_10455__overap_2793_; lean_object* v___x_2794_; 
lean_dec(v_a_2777_);
lean_dec(v_val_2775_);
v___x_2792_ = ((lean_object*)(l_Lean_Widget_instRpcEncodableDiagnosticWith_dec___redArg___closed__17_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2_));
lean_inc_ref(v___x_2393_);
v___x_10455__overap_2793_ = l_MonadExcept_ofExcept___redArg(v___x_2387_, v___x_2393_, v___x_2792_);
lean_inc_ref(v___y_2773_);
v___x_2794_ = lean_apply_1(v___x_10455__overap_2793_, v___y_2773_);
v___y_2745_ = v___y_2773_;
v___y_2746_ = v_____do__lift_2772_;
v___y_2747_ = v___x_2794_;
goto v___jp_2744_;
}
}
else
{
lean_object* v___x_2795_; lean_object* v___x_10457__overap_2796_; lean_object* v___x_2797_; 
lean_dec(v_a_2777_);
lean_dec(v_val_2775_);
v___x_2795_ = ((lean_object*)(l_Lean_Widget_instRpcEncodableDiagnosticWith_dec___redArg___closed__18_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2_));
lean_inc_ref(v___x_2393_);
v___x_10457__overap_2796_ = l_MonadExcept_ofExcept___redArg(v___x_2387_, v___x_2393_, v___x_2795_);
lean_inc_ref(v___y_2773_);
v___x_2797_ = lean_apply_1(v___x_10457__overap_2796_, v___y_2773_);
v___y_2745_ = v___y_2773_;
v___y_2746_ = v_____do__lift_2772_;
v___y_2747_ = v___x_2797_;
goto v___jp_2744_;
}
}
else
{
lean_dec_ref(v___x_2776_);
v___y_2759_ = v___y_2773_;
v___y_2760_ = v_____do__lift_2772_;
v___y_2761_ = v_val_2775_;
goto v___jp_2758_;
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
LEAN_EXPORT lean_object* l_Lean_Widget_instRpcEncodableDiagnosticWith_dec___redArg_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2____boxed(lean_object* v_inst_2822_, lean_object* v_j_2823_, lean_object* v_a_2824_){
_start:
{
lean_object* v_res_2825_; 
v_res_2825_ = l_Lean_Widget_instRpcEncodableDiagnosticWith_dec___redArg_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2_(v_inst_2822_, v_j_2823_, v_a_2824_);
lean_dec_ref(v_a_2824_);
return v_res_2825_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_instRpcEncodableDiagnosticWith_dec_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2_(lean_object* v_00_u03b1_2826_, lean_object* v_inst_2827_, lean_object* v_j_2828_, lean_object* v_a_2829_){
_start:
{
lean_object* v___x_2830_; 
v___x_2830_ = l_Lean_Widget_instRpcEncodableDiagnosticWith_dec___redArg_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2_(v_inst_2827_, v_j_2828_, v_a_2829_);
return v___x_2830_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_instRpcEncodableDiagnosticWith_dec_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2____boxed(lean_object* v_00_u03b1_2831_, lean_object* v_inst_2832_, lean_object* v_j_2833_, lean_object* v_a_2834_){
_start:
{
lean_object* v_res_2835_; 
v_res_2835_ = l_Lean_Widget_instRpcEncodableDiagnosticWith_dec_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2_(v_00_u03b1_2831_, v_inst_2832_, v_j_2833_, v_a_2834_);
lean_dec_ref(v_a_2834_);
return v_res_2835_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_instRpcEncodableDiagnosticWith___redArg(lean_object* v_inst_2836_){
_start:
{
lean_object* v___x_2837_; lean_object* v___x_2838_; lean_object* v___x_2839_; 
lean_inc_ref(v_inst_2836_);
v___x_2837_ = lean_alloc_closure((void*)(l_Lean_Widget_instRpcEncodableDiagnosticWith_enc_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2_), 4, 2);
lean_closure_set(v___x_2837_, 0, lean_box(0));
lean_closure_set(v___x_2837_, 1, v_inst_2836_);
v___x_2838_ = lean_alloc_closure((void*)(l_Lean_Widget_instRpcEncodableDiagnosticWith_dec_00___x40_Lean_Widget_InteractiveDiagnostic_2989700264____hygCtx___hyg_2____boxed), 4, 2);
lean_closure_set(v___x_2838_, 0, lean_box(0));
lean_closure_set(v___x_2838_, 1, v_inst_2836_);
v___x_2839_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2839_, 0, v___x_2837_);
lean_ctor_set(v___x_2839_, 1, v___x_2838_);
return v___x_2839_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_instRpcEncodableDiagnosticWith(lean_object* v_00_u03b1_2840_, lean_object* v_inst_2841_){
_start:
{
lean_object* v___x_2842_; 
v___x_2842_ = l_Lean_Widget_instRpcEncodableDiagnosticWith___redArg(v_inst_2841_);
return v___x_2842_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_InteractiveDiagnostic_toDiagnostic_prettyTt___lam__0(lean_object* v_x_2846_, lean_object* v_x_2847_){
_start:
{
switch(lean_obj_tag(v_x_2846_))
{
case 0:
{
lean_object* v_a_2848_; lean_object* v___x_2850_; uint8_t v_isShared_2851_; uint8_t v_isSharedCheck_2856_; 
v_a_2848_ = lean_ctor_get(v_x_2846_, 0);
v_isSharedCheck_2856_ = !lean_is_exclusive(v_x_2846_);
if (v_isSharedCheck_2856_ == 0)
{
v___x_2850_ = v_x_2846_;
v_isShared_2851_ = v_isSharedCheck_2856_;
goto v_resetjp_2849_;
}
else
{
lean_inc(v_a_2848_);
lean_dec(v_x_2846_);
v___x_2850_ = lean_box(0);
v_isShared_2851_ = v_isSharedCheck_2856_;
goto v_resetjp_2849_;
}
v_resetjp_2849_:
{
lean_object* v___x_2852_; lean_object* v___x_2854_; 
v___x_2852_ = l_Lean_Widget_TaggedText_stripTags___redArg(v_a_2848_);
if (v_isShared_2851_ == 0)
{
lean_ctor_set(v___x_2850_, 0, v___x_2852_);
v___x_2854_ = v___x_2850_;
goto v_reusejp_2853_;
}
else
{
lean_object* v_reuseFailAlloc_2855_; 
v_reuseFailAlloc_2855_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2855_, 0, v___x_2852_);
v___x_2854_ = v_reuseFailAlloc_2855_;
goto v_reusejp_2853_;
}
v_reusejp_2853_:
{
return v___x_2854_;
}
}
}
case 1:
{
lean_object* v_a_2857_; lean_object* v___x_2859_; uint8_t v_isShared_2860_; uint8_t v_isSharedCheck_2868_; 
v_a_2857_ = lean_ctor_get(v_x_2846_, 0);
v_isSharedCheck_2868_ = !lean_is_exclusive(v_x_2846_);
if (v_isSharedCheck_2868_ == 0)
{
v___x_2859_ = v_x_2846_;
v_isShared_2860_ = v_isSharedCheck_2868_;
goto v_resetjp_2858_;
}
else
{
lean_inc(v_a_2857_);
lean_dec(v_x_2846_);
v___x_2859_ = lean_box(0);
v_isShared_2860_ = v_isSharedCheck_2868_;
goto v_resetjp_2858_;
}
v_resetjp_2858_:
{
lean_object* v___x_2861_; lean_object* v___x_2862_; lean_object* v___x_2863_; lean_object* v___x_2864_; lean_object* v___x_2866_; 
v___x_2861_ = l_Lean_Widget_InteractiveGoal_pretty(v_a_2857_);
v___x_2862_ = l_Std_Format_defWidth;
v___x_2863_ = lean_unsigned_to_nat(0u);
v___x_2864_ = l_Std_Format_pretty(v___x_2861_, v___x_2862_, v___x_2863_, v___x_2863_);
if (v_isShared_2860_ == 0)
{
lean_ctor_set_tag(v___x_2859_, 0);
lean_ctor_set(v___x_2859_, 0, v___x_2864_);
v___x_2866_ = v___x_2859_;
goto v_reusejp_2865_;
}
else
{
lean_object* v_reuseFailAlloc_2867_; 
v_reuseFailAlloc_2867_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2867_, 0, v___x_2864_);
v___x_2866_ = v_reuseFailAlloc_2867_;
goto v_reusejp_2865_;
}
v_reusejp_2865_:
{
return v___x_2866_;
}
}
}
case 2:
{
lean_object* v_alt_2869_; lean_object* v___x_2870_; lean_object* v___x_2871_; 
v_alt_2869_ = lean_ctor_get(v_x_2846_, 1);
lean_inc_ref(v_alt_2869_);
lean_dec_ref_known(v_x_2846_, 2);
v___x_2870_ = l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_InteractiveDiagnostic_toDiagnostic_prettyTt(v_alt_2869_);
v___x_2871_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2871_, 0, v___x_2870_);
return v___x_2871_;
}
default: 
{
lean_object* v___x_2872_; 
lean_dec_ref_known(v_x_2846_, 4);
v___x_2872_ = ((lean_object*)(l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_InteractiveDiagnostic_toDiagnostic_prettyTt___lam__0___closed__1));
return v___x_2872_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_InteractiveDiagnostic_toDiagnostic_prettyTt___lam__0___boxed(lean_object* v_x_2873_, lean_object* v_x_2874_){
_start:
{
lean_object* v_res_2875_; 
v_res_2875_ = l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_InteractiveDiagnostic_toDiagnostic_prettyTt___lam__0(v_x_2873_, v_x_2874_);
lean_dec_ref(v_x_2874_);
return v_res_2875_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_InteractiveDiagnostic_toDiagnostic_prettyTt(lean_object* v_tt_2876_){
_start:
{
lean_object* v___f_2877_; lean_object* v_tt_2878_; lean_object* v___x_2879_; 
v___f_2877_ = lean_alloc_closure((void*)(l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_InteractiveDiagnostic_toDiagnostic_prettyTt___lam__0___boxed), 2, 0);
v_tt_2878_ = l_Lean_Widget_TaggedText_rewrite___redArg(v___f_2877_, v_tt_2876_);
v___x_2879_ = l_Lean_Widget_TaggedText_stripTags___redArg(v_tt_2878_);
return v___x_2879_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_InteractiveDiagnostic_toDiagnostic(lean_object* v_diag_2880_){
_start:
{
lean_object* v_range_2881_; lean_object* v_fullRange_x3f_2882_; lean_object* v_severity_x3f_2883_; lean_object* v_isSilent_x3f_2884_; lean_object* v_code_x3f_2885_; lean_object* v_source_x3f_2886_; lean_object* v_message_2887_; lean_object* v_tags_x3f_2888_; lean_object* v_leanTags_x3f_2889_; lean_object* v_relatedInformation_x3f_2890_; lean_object* v_data_x3f_2891_; lean_object* v___x_2893_; uint8_t v_isShared_2894_; uint8_t v_isSharedCheck_2899_; 
v_range_2881_ = lean_ctor_get(v_diag_2880_, 0);
v_fullRange_x3f_2882_ = lean_ctor_get(v_diag_2880_, 1);
v_severity_x3f_2883_ = lean_ctor_get(v_diag_2880_, 2);
v_isSilent_x3f_2884_ = lean_ctor_get(v_diag_2880_, 3);
v_code_x3f_2885_ = lean_ctor_get(v_diag_2880_, 4);
v_source_x3f_2886_ = lean_ctor_get(v_diag_2880_, 5);
v_message_2887_ = lean_ctor_get(v_diag_2880_, 6);
v_tags_x3f_2888_ = lean_ctor_get(v_diag_2880_, 7);
v_leanTags_x3f_2889_ = lean_ctor_get(v_diag_2880_, 8);
v_relatedInformation_x3f_2890_ = lean_ctor_get(v_diag_2880_, 9);
v_data_x3f_2891_ = lean_ctor_get(v_diag_2880_, 10);
v_isSharedCheck_2899_ = !lean_is_exclusive(v_diag_2880_);
if (v_isSharedCheck_2899_ == 0)
{
v___x_2893_ = v_diag_2880_;
v_isShared_2894_ = v_isSharedCheck_2899_;
goto v_resetjp_2892_;
}
else
{
lean_inc(v_data_x3f_2891_);
lean_inc(v_relatedInformation_x3f_2890_);
lean_inc(v_leanTags_x3f_2889_);
lean_inc(v_tags_x3f_2888_);
lean_inc(v_message_2887_);
lean_inc(v_source_x3f_2886_);
lean_inc(v_code_x3f_2885_);
lean_inc(v_isSilent_x3f_2884_);
lean_inc(v_severity_x3f_2883_);
lean_inc(v_fullRange_x3f_2882_);
lean_inc(v_range_2881_);
lean_dec(v_diag_2880_);
v___x_2893_ = lean_box(0);
v_isShared_2894_ = v_isSharedCheck_2899_;
goto v_resetjp_2892_;
}
v_resetjp_2892_:
{
lean_object* v___x_2895_; lean_object* v___x_2897_; 
v___x_2895_ = l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_InteractiveDiagnostic_toDiagnostic_prettyTt(v_message_2887_);
if (v_isShared_2894_ == 0)
{
lean_ctor_set(v___x_2893_, 6, v___x_2895_);
v___x_2897_ = v___x_2893_;
goto v_reusejp_2896_;
}
else
{
lean_object* v_reuseFailAlloc_2898_; 
v_reuseFailAlloc_2898_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v_reuseFailAlloc_2898_, 0, v_range_2881_);
lean_ctor_set(v_reuseFailAlloc_2898_, 1, v_fullRange_x3f_2882_);
lean_ctor_set(v_reuseFailAlloc_2898_, 2, v_severity_x3f_2883_);
lean_ctor_set(v_reuseFailAlloc_2898_, 3, v_isSilent_x3f_2884_);
lean_ctor_set(v_reuseFailAlloc_2898_, 4, v_code_x3f_2885_);
lean_ctor_set(v_reuseFailAlloc_2898_, 5, v_source_x3f_2886_);
lean_ctor_set(v_reuseFailAlloc_2898_, 6, v___x_2895_);
lean_ctor_set(v_reuseFailAlloc_2898_, 7, v_tags_x3f_2888_);
lean_ctor_set(v_reuseFailAlloc_2898_, 8, v_leanTags_x3f_2889_);
lean_ctor_set(v_reuseFailAlloc_2898_, 9, v_relatedInformation_x3f_2890_);
lean_ctor_set(v_reuseFailAlloc_2898_, 10, v_data_x3f_2891_);
v___x_2897_ = v_reuseFailAlloc_2898_;
goto v_reusejp_2896_;
}
v_reusejp_2896_:
{
return v___x_2897_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_mkPPContext(lean_object* v_nCtx_2900_, lean_object* v_ctx_2901_){
_start:
{
lean_object* v_env_2902_; lean_object* v_mctx_2903_; lean_object* v_lctx_2904_; lean_object* v_opts_2905_; lean_object* v_currNamespace_2906_; lean_object* v_openDecls_2907_; lean_object* v___x_2908_; 
v_env_2902_ = lean_ctor_get(v_ctx_2901_, 0);
v_mctx_2903_ = lean_ctor_get(v_ctx_2901_, 1);
v_lctx_2904_ = lean_ctor_get(v_ctx_2901_, 2);
v_opts_2905_ = lean_ctor_get(v_ctx_2901_, 3);
v_currNamespace_2906_ = lean_ctor_get(v_nCtx_2900_, 0);
v_openDecls_2907_ = lean_ctor_get(v_nCtx_2900_, 1);
lean_inc(v_openDecls_2907_);
lean_inc(v_currNamespace_2906_);
lean_inc_ref(v_opts_2905_);
lean_inc_ref(v_lctx_2904_);
lean_inc_ref(v_mctx_2903_);
lean_inc_ref(v_env_2902_);
v___x_2908_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_2908_, 0, v_env_2902_);
lean_ctor_set(v___x_2908_, 1, v_mctx_2903_);
lean_ctor_set(v___x_2908_, 2, v_lctx_2904_);
lean_ctor_set(v___x_2908_, 3, v_opts_2905_);
lean_ctor_set(v___x_2908_, 4, v_currNamespace_2906_);
lean_ctor_set(v___x_2908_, 5, v_openDecls_2907_);
return v___x_2908_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_mkPPContext___boxed(lean_object* v_nCtx_2909_, lean_object* v_ctx_2910_){
_start:
{
lean_object* v_res_2911_; 
v_res_2911_ = l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_mkPPContext(v_nCtx_2909_, v_ctx_2910_);
lean_dec_ref(v_ctx_2910_);
lean_dec_ref(v_nCtx_2909_);
return v_res_2911_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_EmbedFmt_ctorIdx(lean_object* v_x_2912_){
_start:
{
switch(lean_obj_tag(v_x_2912_))
{
case 0:
{
lean_object* v___x_2913_; 
v___x_2913_ = lean_unsigned_to_nat(0u);
return v___x_2913_;
}
case 1:
{
lean_object* v___x_2914_; 
v___x_2914_ = lean_unsigned_to_nat(1u);
return v___x_2914_;
}
case 2:
{
lean_object* v___x_2915_; 
v___x_2915_ = lean_unsigned_to_nat(2u);
return v___x_2915_;
}
case 3:
{
lean_object* v___x_2916_; 
v___x_2916_ = lean_unsigned_to_nat(3u);
return v___x_2916_;
}
default: 
{
lean_object* v___x_2917_; 
v___x_2917_ = lean_unsigned_to_nat(4u);
return v___x_2917_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_EmbedFmt_ctorIdx___boxed(lean_object* v_x_2918_){
_start:
{
lean_object* v_res_2919_; 
v_res_2919_ = l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_EmbedFmt_ctorIdx(v_x_2918_);
lean_dec(v_x_2918_);
return v_res_2919_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_EmbedFmt_ctorElim___redArg(lean_object* v_t_2920_, lean_object* v_k_2921_){
_start:
{
switch(lean_obj_tag(v_t_2920_))
{
case 1:
{
lean_object* v_ctx_2922_; lean_object* v_lctx_2923_; lean_object* v_g_2924_; lean_object* v___x_2925_; 
v_ctx_2922_ = lean_ctor_get(v_t_2920_, 0);
lean_inc_ref(v_ctx_2922_);
v_lctx_2923_ = lean_ctor_get(v_t_2920_, 1);
lean_inc_ref(v_lctx_2923_);
v_g_2924_ = lean_ctor_get(v_t_2920_, 2);
lean_inc(v_g_2924_);
lean_dec_ref_known(v_t_2920_, 3);
v___x_2925_ = lean_apply_3(v_k_2921_, v_ctx_2922_, v_lctx_2923_, v_g_2924_);
return v___x_2925_;
}
case 3:
{
lean_object* v_cls_2926_; lean_object* v_msg_2927_; uint8_t v_collapsed_2928_; lean_object* v_children_2929_; lean_object* v___x_2930_; lean_object* v___x_2931_; 
v_cls_2926_ = lean_ctor_get(v_t_2920_, 0);
lean_inc(v_cls_2926_);
v_msg_2927_ = lean_ctor_get(v_t_2920_, 1);
lean_inc(v_msg_2927_);
v_collapsed_2928_ = lean_ctor_get_uint8(v_t_2920_, sizeof(void*)*3);
v_children_2929_ = lean_ctor_get(v_t_2920_, 2);
lean_inc_ref(v_children_2929_);
lean_dec_ref_known(v_t_2920_, 3);
v___x_2930_ = lean_box(v_collapsed_2928_);
v___x_2931_ = lean_apply_4(v_k_2921_, v_cls_2926_, v_msg_2927_, v___x_2930_, v_children_2929_);
return v___x_2931_;
}
case 4:
{
return v_k_2921_;
}
default: 
{
lean_object* v_ctx_2932_; lean_object* v_infos_2933_; lean_object* v___x_2934_; 
v_ctx_2932_ = lean_ctor_get(v_t_2920_, 0);
lean_inc_ref(v_ctx_2932_);
v_infos_2933_ = lean_ctor_get(v_t_2920_, 1);
lean_inc(v_infos_2933_);
lean_dec(v_t_2920_);
v___x_2934_ = lean_apply_2(v_k_2921_, v_ctx_2932_, v_infos_2933_);
return v___x_2934_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_EmbedFmt_ctorElim(lean_object* v_motive_2935_, lean_object* v_ctorIdx_2936_, lean_object* v_t_2937_, lean_object* v_h_2938_, lean_object* v_k_2939_){
_start:
{
lean_object* v___x_2940_; 
v___x_2940_ = l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_EmbedFmt_ctorElim___redArg(v_t_2937_, v_k_2939_);
return v___x_2940_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_EmbedFmt_ctorElim___boxed(lean_object* v_motive_2941_, lean_object* v_ctorIdx_2942_, lean_object* v_t_2943_, lean_object* v_h_2944_, lean_object* v_k_2945_){
_start:
{
lean_object* v_res_2946_; 
v_res_2946_ = l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_EmbedFmt_ctorElim(v_motive_2941_, v_ctorIdx_2942_, v_t_2943_, v_h_2944_, v_k_2945_);
lean_dec(v_ctorIdx_2942_);
return v_res_2946_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_EmbedFmt_code_elim___redArg(lean_object* v_t_2947_, lean_object* v_code_2948_){
_start:
{
lean_object* v___x_2949_; 
v___x_2949_ = l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_EmbedFmt_ctorElim___redArg(v_t_2947_, v_code_2948_);
return v___x_2949_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_EmbedFmt_code_elim(lean_object* v_motive_2950_, lean_object* v_t_2951_, lean_object* v_h_2952_, lean_object* v_code_2953_){
_start:
{
lean_object* v___x_2954_; 
v___x_2954_ = l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_EmbedFmt_ctorElim___redArg(v_t_2951_, v_code_2953_);
return v___x_2954_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_EmbedFmt_goal_elim___redArg(lean_object* v_t_2955_, lean_object* v_goal_2956_){
_start:
{
lean_object* v___x_2957_; 
v___x_2957_ = l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_EmbedFmt_ctorElim___redArg(v_t_2955_, v_goal_2956_);
return v___x_2957_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_EmbedFmt_goal_elim(lean_object* v_motive_2958_, lean_object* v_t_2959_, lean_object* v_h_2960_, lean_object* v_goal_2961_){
_start:
{
lean_object* v___x_2962_; 
v___x_2962_ = l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_EmbedFmt_ctorElim___redArg(v_t_2959_, v_goal_2961_);
return v___x_2962_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_EmbedFmt_widget_elim___redArg(lean_object* v_t_2963_, lean_object* v_widget_2964_){
_start:
{
lean_object* v___x_2965_; 
v___x_2965_ = l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_EmbedFmt_ctorElim___redArg(v_t_2963_, v_widget_2964_);
return v___x_2965_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_EmbedFmt_widget_elim(lean_object* v_motive_2966_, lean_object* v_t_2967_, lean_object* v_h_2968_, lean_object* v_widget_2969_){
_start:
{
lean_object* v___x_2970_; 
v___x_2970_ = l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_EmbedFmt_ctorElim___redArg(v_t_2967_, v_widget_2969_);
return v___x_2970_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_EmbedFmt_trace_elim___redArg(lean_object* v_t_2971_, lean_object* v_trace_2972_){
_start:
{
lean_object* v___x_2973_; 
v___x_2973_ = l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_EmbedFmt_ctorElim___redArg(v_t_2971_, v_trace_2972_);
return v___x_2973_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_EmbedFmt_trace_elim(lean_object* v_motive_2974_, lean_object* v_t_2975_, lean_object* v_h_2976_, lean_object* v_trace_2977_){
_start:
{
lean_object* v___x_2978_; 
v___x_2978_ = l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_EmbedFmt_ctorElim___redArg(v_t_2975_, v_trace_2977_);
return v___x_2978_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_EmbedFmt_ignoreTags_elim___redArg(lean_object* v_t_2979_, lean_object* v_ignoreTags_2980_){
_start:
{
lean_object* v___x_2981_; 
v___x_2981_ = l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_EmbedFmt_ctorElim___redArg(v_t_2979_, v_ignoreTags_2980_);
return v___x_2981_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_EmbedFmt_ignoreTags_elim(lean_object* v_motive_2982_, lean_object* v_t_2983_, lean_object* v_h_2984_, lean_object* v_ignoreTags_2985_){
_start:
{
lean_object* v___x_2986_; 
v___x_2986_ = l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_EmbedFmt_ctorElim___redArg(v_t_2983_, v_ignoreTags_2985_);
return v___x_2986_;
}
}
static lean_object* _init_l_Lean_Widget_instInhabitedEmbedFmt_default___closed__0(void){
_start:
{
lean_object* v___x_2987_; 
v___x_2987_ = l_Array_instInhabited___redArg();
return v___x_2987_;
}
}
static lean_object* _init_l_Lean_Widget_instInhabitedEmbedFmt_default___closed__1(void){
_start:
{
lean_object* v___x_2988_; lean_object* v___x_2989_; 
v___x_2988_ = lean_box(0);
v___x_2989_ = l_unsafeCast___redArg(v___x_2988_);
return v___x_2989_;
}
}
static lean_object* _init_l_Lean_Widget_instInhabitedEmbedFmt_default___closed__2(void){
_start:
{
lean_object* v___x_2990_; lean_object* v___x_2991_; 
v___x_2990_ = lean_obj_once(&l_Lean_Widget_instInhabitedEmbedFmt_default___closed__0, &l_Lean_Widget_instInhabitedEmbedFmt_default___closed__0_once, _init_l_Lean_Widget_instInhabitedEmbedFmt_default___closed__0);
v___x_2991_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2991_, 0, v___x_2990_);
return v___x_2991_;
}
}
static lean_object* _init_l_Lean_Widget_instInhabitedEmbedFmt_default___closed__3(void){
_start:
{
lean_object* v___x_2992_; uint8_t v___x_2993_; lean_object* v___x_2994_; lean_object* v___x_2995_; lean_object* v___x_2996_; 
v___x_2992_ = lean_obj_once(&l_Lean_Widget_instInhabitedEmbedFmt_default___closed__2, &l_Lean_Widget_instInhabitedEmbedFmt_default___closed__2_once, _init_l_Lean_Widget_instInhabitedEmbedFmt_default___closed__2);
v___x_2993_ = 0;
v___x_2994_ = lean_box(0);
v___x_2995_ = lean_obj_once(&l_Lean_Widget_instInhabitedEmbedFmt_default___closed__1, &l_Lean_Widget_instInhabitedEmbedFmt_default___closed__1_once, _init_l_Lean_Widget_instInhabitedEmbedFmt_default___closed__1);
v___x_2996_ = lean_alloc_ctor(3, 3, 1);
lean_ctor_set(v___x_2996_, 0, v___x_2995_);
lean_ctor_set(v___x_2996_, 1, v___x_2994_);
lean_ctor_set(v___x_2996_, 2, v___x_2992_);
lean_ctor_set_uint8(v___x_2996_, sizeof(void*)*3, v___x_2993_);
return v___x_2996_;
}
}
static lean_object* _init_l_Lean_Widget_instInhabitedEmbedFmt_default(void){
_start:
{
lean_object* v___x_2997_; 
v___x_2997_ = lean_obj_once(&l_Lean_Widget_instInhabitedEmbedFmt_default___closed__3, &l_Lean_Widget_instInhabitedEmbedFmt_default___closed__3_once, _init_l_Lean_Widget_instInhabitedEmbedFmt_default___closed__3);
return v___x_2997_;
}
}
static lean_object* _init_l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_instInhabitedEmbedFmt(void){
_start:
{
lean_object* v___x_2998_; 
v___x_2998_ = l_Lean_Widget_instInhabitedEmbedFmt_default;
return v___x_2998_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractiveAux_pushEmbed(lean_object* v_e_2999_, lean_object* v_a_3000_){
_start:
{
lean_object* v___x_3002_; lean_object* v___x_3003_; lean_object* v___x_3004_; lean_object* v___x_3005_; 
v___x_3002_ = lean_array_get_size(v_a_3000_);
v___x_3003_ = lean_array_push(v_a_3000_, v_e_2999_);
v___x_3004_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3004_, 0, v___x_3002_);
lean_ctor_set(v___x_3004_, 1, v___x_3003_);
v___x_3005_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3005_, 0, v___x_3004_);
return v___x_3005_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractiveAux_pushEmbed___boxed(lean_object* v_e_3006_, lean_object* v_a_3007_, lean_object* v_a_3008_){
_start:
{
lean_object* v_res_3009_; 
v_res_3009_ = l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractiveAux_pushEmbed(v_e_3006_, v_a_3007_);
return v_res_3009_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractiveAux_withIgnoreTags(lean_object* v_fmt_3010_, lean_object* v_a_3011_){
_start:
{
lean_object* v___x_3013_; lean_object* v___x_3014_; lean_object* v_a_3015_; lean_object* v___x_3017_; uint8_t v_isShared_3018_; uint8_t v_isSharedCheck_3032_; 
v___x_3013_ = lean_box(4);
v___x_3014_ = l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractiveAux_pushEmbed(v___x_3013_, v_a_3011_);
v_a_3015_ = lean_ctor_get(v___x_3014_, 0);
v_isSharedCheck_3032_ = !lean_is_exclusive(v___x_3014_);
if (v_isSharedCheck_3032_ == 0)
{
v___x_3017_ = v___x_3014_;
v_isShared_3018_ = v_isSharedCheck_3032_;
goto v_resetjp_3016_;
}
else
{
lean_inc(v_a_3015_);
lean_dec(v___x_3014_);
v___x_3017_ = lean_box(0);
v_isShared_3018_ = v_isSharedCheck_3032_;
goto v_resetjp_3016_;
}
v_resetjp_3016_:
{
lean_object* v_fst_3019_; lean_object* v_snd_3020_; lean_object* v___x_3022_; uint8_t v_isShared_3023_; uint8_t v_isSharedCheck_3031_; 
v_fst_3019_ = lean_ctor_get(v_a_3015_, 0);
v_snd_3020_ = lean_ctor_get(v_a_3015_, 1);
v_isSharedCheck_3031_ = !lean_is_exclusive(v_a_3015_);
if (v_isSharedCheck_3031_ == 0)
{
v___x_3022_ = v_a_3015_;
v_isShared_3023_ = v_isSharedCheck_3031_;
goto v_resetjp_3021_;
}
else
{
lean_inc(v_snd_3020_);
lean_inc(v_fst_3019_);
lean_dec(v_a_3015_);
v___x_3022_ = lean_box(0);
v_isShared_3023_ = v_isSharedCheck_3031_;
goto v_resetjp_3021_;
}
v_resetjp_3021_:
{
lean_object* v___x_3024_; lean_object* v___x_3026_; 
v___x_3024_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3024_, 0, v_fst_3019_);
lean_ctor_set(v___x_3024_, 1, v_fmt_3010_);
if (v_isShared_3023_ == 0)
{
lean_ctor_set(v___x_3022_, 0, v___x_3024_);
v___x_3026_ = v___x_3022_;
goto v_reusejp_3025_;
}
else
{
lean_object* v_reuseFailAlloc_3030_; 
v_reuseFailAlloc_3030_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3030_, 0, v___x_3024_);
lean_ctor_set(v_reuseFailAlloc_3030_, 1, v_snd_3020_);
v___x_3026_ = v_reuseFailAlloc_3030_;
goto v_reusejp_3025_;
}
v_reusejp_3025_:
{
lean_object* v___x_3028_; 
if (v_isShared_3018_ == 0)
{
lean_ctor_set(v___x_3017_, 0, v___x_3026_);
v___x_3028_ = v___x_3017_;
goto v_reusejp_3027_;
}
else
{
lean_object* v_reuseFailAlloc_3029_; 
v_reuseFailAlloc_3029_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3029_, 0, v___x_3026_);
v___x_3028_ = v_reuseFailAlloc_3029_;
goto v_reusejp_3027_;
}
v_reusejp_3027_:
{
return v___x_3028_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractiveAux_withIgnoreTags___boxed(lean_object* v_fmt_3033_, lean_object* v_a_3034_, lean_object* v_a_3035_){
_start:
{
lean_object* v_res_3036_; 
v_res_3036_ = l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractiveAux_withIgnoreTags(v_fmt_3033_, v_a_3034_);
return v_res_3036_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractiveAux_mkContextInfo(lean_object* v_nCtx_3045_, lean_object* v_ctx_3046_){
_start:
{
lean_object* v_env_3047_; lean_object* v_mctx_3048_; lean_object* v_opts_3049_; lean_object* v_currNamespace_3050_; lean_object* v_openDecls_3051_; lean_object* v___x_3052_; lean_object* v___x_3053_; lean_object* v___x_3054_; lean_object* v___x_3055_; lean_object* v___x_3056_; lean_object* v___x_3057_; 
v_env_3047_ = lean_ctor_get(v_ctx_3046_, 0);
v_mctx_3048_ = lean_ctor_get(v_ctx_3046_, 1);
v_opts_3049_ = lean_ctor_get(v_ctx_3046_, 3);
v_currNamespace_3050_ = lean_ctor_get(v_nCtx_3045_, 0);
v_openDecls_3051_ = lean_ctor_get(v_nCtx_3045_, 1);
v___x_3052_ = lean_box(0);
v___x_3053_ = l_Lean_instInhabitedFileMap_default;
v___x_3054_ = ((lean_object*)(l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractiveAux_mkContextInfo___closed__2));
lean_inc(v_openDecls_3051_);
lean_inc(v_currNamespace_3050_);
lean_inc_ref(v_opts_3049_);
lean_inc_ref(v_mctx_3048_);
lean_inc_ref(v_env_3047_);
v___x_3055_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_3055_, 0, v_env_3047_);
lean_ctor_set(v___x_3055_, 1, v___x_3052_);
lean_ctor_set(v___x_3055_, 2, v___x_3053_);
lean_ctor_set(v___x_3055_, 3, v_mctx_3048_);
lean_ctor_set(v___x_3055_, 4, v_opts_3049_);
lean_ctor_set(v___x_3055_, 5, v_currNamespace_3050_);
lean_ctor_set(v___x_3055_, 6, v_openDecls_3051_);
lean_ctor_set(v___x_3055_, 7, v___x_3054_);
v___x_3056_ = ((lean_object*)(l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractiveAux_mkContextInfo___closed__3));
v___x_3057_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3057_, 0, v___x_3055_);
lean_ctor_set(v___x_3057_, 1, v___x_3052_);
lean_ctor_set(v___x_3057_, 2, v___x_3056_);
return v___x_3057_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractiveAux_mkContextInfo___boxed(lean_object* v_nCtx_3058_, lean_object* v_ctx_3059_){
_start:
{
lean_object* v_res_3060_; 
v_res_3060_ = l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractiveAux_mkContextInfo(v_nCtx_3058_, v_ctx_3059_);
lean_dec_ref(v_ctx_3059_);
lean_dec_ref(v_nCtx_3058_);
return v_res_3060_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractiveAux_chopUpChildren_spec__0___redArg(lean_object* v_a_3061_, lean_object* v_b_3062_){
_start:
{
lean_object* v_array_3063_; lean_object* v_start_3064_; lean_object* v_stop_3065_; lean_object* v___x_3067_; uint8_t v_isShared_3068_; uint8_t v_isSharedCheck_3078_; 
v_array_3063_ = lean_ctor_get(v_a_3061_, 0);
v_start_3064_ = lean_ctor_get(v_a_3061_, 1);
v_stop_3065_ = lean_ctor_get(v_a_3061_, 2);
v_isSharedCheck_3078_ = !lean_is_exclusive(v_a_3061_);
if (v_isSharedCheck_3078_ == 0)
{
v___x_3067_ = v_a_3061_;
v_isShared_3068_ = v_isSharedCheck_3078_;
goto v_resetjp_3066_;
}
else
{
lean_inc(v_stop_3065_);
lean_inc(v_start_3064_);
lean_inc(v_array_3063_);
lean_dec(v_a_3061_);
v___x_3067_ = lean_box(0);
v_isShared_3068_ = v_isSharedCheck_3078_;
goto v_resetjp_3066_;
}
v_resetjp_3066_:
{
uint8_t v___x_3069_; 
v___x_3069_ = lean_nat_dec_lt(v_start_3064_, v_stop_3065_);
if (v___x_3069_ == 0)
{
lean_del_object(v___x_3067_);
lean_dec(v_stop_3065_);
lean_dec(v_start_3064_);
lean_dec_ref(v_array_3063_);
return v_b_3062_;
}
else
{
lean_object* v___x_3070_; lean_object* v___x_3071_; lean_object* v___x_3073_; 
v___x_3070_ = lean_unsigned_to_nat(1u);
v___x_3071_ = lean_nat_add(v_start_3064_, v___x_3070_);
lean_inc_ref(v_array_3063_);
if (v_isShared_3068_ == 0)
{
lean_ctor_set(v___x_3067_, 1, v___x_3071_);
v___x_3073_ = v___x_3067_;
goto v_reusejp_3072_;
}
else
{
lean_object* v_reuseFailAlloc_3077_; 
v_reuseFailAlloc_3077_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3077_, 0, v_array_3063_);
lean_ctor_set(v_reuseFailAlloc_3077_, 1, v___x_3071_);
lean_ctor_set(v_reuseFailAlloc_3077_, 2, v_stop_3065_);
v___x_3073_ = v_reuseFailAlloc_3077_;
goto v_reusejp_3072_;
}
v_reusejp_3072_:
{
lean_object* v___x_3074_; lean_object* v___x_3075_; 
v___x_3074_ = lean_array_fget(v_array_3063_, v_start_3064_);
lean_dec(v_start_3064_);
lean_dec_ref(v_array_3063_);
v___x_3075_ = lean_array_push(v_b_3062_, v___x_3074_);
v_a_3061_ = v___x_3073_;
v_b_3062_ = v___x_3075_;
goto _start;
}
}
}
}
}
static double _init_l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractiveAux_chopUpChildren___closed__1(void){
_start:
{
lean_object* v___x_3081_; double v___x_3082_; 
v___x_3081_ = lean_unsigned_to_nat(0u);
v___x_3082_ = lean_float_of_nat(v___x_3081_);
return v___x_3082_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractiveAux_chopUpChildren(lean_object* v_cls_3087_, lean_object* v_blockSize_3088_, lean_object* v_children_3089_){
_start:
{
lean_object* v___x_3090_; uint8_t v___x_3091_; 
v___x_3090_ = lean_unsigned_to_nat(0u);
v___x_3091_ = lean_nat_dec_lt(v___x_3090_, v_blockSize_3088_);
if (v___x_3091_ == 0)
{
lean_object* v___x_3092_; 
lean_dec(v_cls_3087_);
v___x_3092_ = l_Subarray_copy___redArg(v_children_3089_);
return v___x_3092_;
}
else
{
lean_object* v_start_3093_; lean_object* v_stop_3094_; lean_object* v___x_3095_; lean_object* v___x_3096_; lean_object* v___x_3097_; uint8_t v___x_3098_; 
v_start_3093_ = lean_ctor_get(v_children_3089_, 1);
v_stop_3094_ = lean_ctor_get(v_children_3089_, 2);
v___x_3095_ = lean_unsigned_to_nat(1u);
v___x_3096_ = lean_nat_add(v_blockSize_3088_, v___x_3095_);
v___x_3097_ = lean_nat_sub(v_stop_3094_, v_start_3093_);
v___x_3098_ = lean_nat_dec_lt(v___x_3096_, v___x_3097_);
lean_dec(v___x_3096_);
if (v___x_3098_ == 0)
{
lean_object* v___x_3099_; 
lean_dec(v___x_3097_);
lean_dec(v_cls_3087_);
v___x_3099_ = l_Subarray_copy___redArg(v_children_3089_);
return v___x_3099_;
}
else
{
lean_object* v___x_3100_; lean_object* v_more_3101_; lean_object* v___x_3102_; lean_object* v___x_3103_; lean_object* v___x_3104_; lean_object* v___x_3105_; double v___x_3106_; lean_object* v___x_3107_; lean_object* v___x_3108_; lean_object* v___x_3109_; lean_object* v___x_3110_; lean_object* v___x_3111_; lean_object* v___x_3112_; lean_object* v___x_3113_; lean_object* v___x_3114_; lean_object* v___x_3115_; lean_object* v___x_3116_; 
lean_inc_ref(v_children_3089_);
v___x_3100_ = l_Subarray_drop___redArg(v_children_3089_, v_blockSize_3088_);
lean_inc(v_cls_3087_);
v_more_3101_ = l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractiveAux_chopUpChildren(v_cls_3087_, v_blockSize_3088_, v___x_3100_);
v___x_3102_ = l_Subarray_take___redArg(v_children_3089_, v_blockSize_3088_);
v___x_3103_ = ((lean_object*)(l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractiveAux_chopUpChildren___closed__0));
v___x_3104_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractiveAux_chopUpChildren_spec__0___redArg(v___x_3102_, v___x_3103_);
v___x_3105_ = lean_box(0);
v___x_3106_ = lean_float_once(&l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractiveAux_chopUpChildren___closed__1, &l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractiveAux_chopUpChildren___closed__1_once, _init_l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractiveAux_chopUpChildren___closed__1);
v___x_3107_ = ((lean_object*)(l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractiveAux_chopUpChildren___closed__2));
v___x_3108_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_3108_, 0, v_cls_3087_);
lean_ctor_set(v___x_3108_, 1, v___x_3105_);
lean_ctor_set(v___x_3108_, 2, v___x_3107_);
lean_ctor_set_float(v___x_3108_, sizeof(void*)*3, v___x_3106_);
lean_ctor_set_float(v___x_3108_, sizeof(void*)*3 + 8, v___x_3106_);
lean_ctor_set_uint8(v___x_3108_, sizeof(void*)*3 + 16, v___x_3091_);
v___x_3109_ = lean_nat_sub(v___x_3097_, v_blockSize_3088_);
lean_dec(v___x_3097_);
v___x_3110_ = l_Nat_reprFast(v___x_3109_);
v___x_3111_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3111_, 0, v___x_3110_);
v___x_3112_ = ((lean_object*)(l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractiveAux_chopUpChildren___closed__4));
v___x_3113_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3113_, 0, v___x_3111_);
lean_ctor_set(v___x_3113_, 1, v___x_3112_);
v___x_3114_ = l_Lean_MessageData_ofFormat(v___x_3113_);
v___x_3115_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_3115_, 0, v___x_3108_);
lean_ctor_set(v___x_3115_, 1, v___x_3114_);
lean_ctor_set(v___x_3115_, 2, v_more_3101_);
v___x_3116_ = lean_array_push(v___x_3104_, v___x_3115_);
return v___x_3116_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractiveAux_chopUpChildren___boxed(lean_object* v_cls_3117_, lean_object* v_blockSize_3118_, lean_object* v_children_3119_){
_start:
{
lean_object* v_res_3120_; 
v_res_3120_ = l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractiveAux_chopUpChildren(v_cls_3117_, v_blockSize_3118_, v_children_3119_);
lean_dec(v_blockSize_3118_);
return v_res_3120_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractiveAux_chopUpChildren_spec__0(lean_object* v_inst_3121_, lean_object* v_R_3122_, lean_object* v_a_3123_, lean_object* v_b_3124_){
_start:
{
lean_object* v___x_3125_; 
v___x_3125_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractiveAux_chopUpChildren_spec__0___redArg(v_a_3123_, v_b_3124_);
return v___x_3125_;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at___00__private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractiveAux_go_spec__0(lean_object* v_a_3126_){
_start:
{
lean_object* v___x_3127_; 
v___x_3127_ = lean_nat_to_int(v_a_3126_);
return v___x_3127_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get_x3f___at___00__private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractiveAux_go_spec__2(lean_object* v_opts_3128_, lean_object* v_opt_3129_){
_start:
{
lean_object* v_name_3130_; lean_object* v_map_3131_; lean_object* v___x_3132_; 
v_name_3130_ = lean_ctor_get(v_opt_3129_, 0);
v_map_3131_ = lean_ctor_get(v_opts_3128_, 0);
v___x_3132_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_3131_, v_name_3130_);
if (lean_obj_tag(v___x_3132_) == 0)
{
lean_object* v___x_3133_; 
v___x_3133_ = lean_box(0);
return v___x_3133_;
}
else
{
lean_object* v_val_3134_; lean_object* v___x_3136_; uint8_t v_isShared_3137_; uint8_t v_isSharedCheck_3143_; 
v_val_3134_ = lean_ctor_get(v___x_3132_, 0);
v_isSharedCheck_3143_ = !lean_is_exclusive(v___x_3132_);
if (v_isSharedCheck_3143_ == 0)
{
v___x_3136_ = v___x_3132_;
v_isShared_3137_ = v_isSharedCheck_3143_;
goto v_resetjp_3135_;
}
else
{
lean_inc(v_val_3134_);
lean_dec(v___x_3132_);
v___x_3136_ = lean_box(0);
v_isShared_3137_ = v_isSharedCheck_3143_;
goto v_resetjp_3135_;
}
v_resetjp_3135_:
{
if (lean_obj_tag(v_val_3134_) == 3)
{
lean_object* v_v_3138_; lean_object* v___x_3140_; 
v_v_3138_ = lean_ctor_get(v_val_3134_, 0);
lean_inc(v_v_3138_);
lean_dec_ref_known(v_val_3134_, 1);
if (v_isShared_3137_ == 0)
{
lean_ctor_set(v___x_3136_, 0, v_v_3138_);
v___x_3140_ = v___x_3136_;
goto v_reusejp_3139_;
}
else
{
lean_object* v_reuseFailAlloc_3141_; 
v_reuseFailAlloc_3141_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3141_, 0, v_v_3138_);
v___x_3140_ = v_reuseFailAlloc_3141_;
goto v_reusejp_3139_;
}
v_reusejp_3139_:
{
return v___x_3140_;
}
}
else
{
lean_object* v___x_3142_; 
lean_del_object(v___x_3136_);
lean_dec(v_val_3134_);
v___x_3142_ = lean_box(0);
return v___x_3142_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get_x3f___at___00__private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractiveAux_go_spec__2___boxed(lean_object* v_opts_3144_, lean_object* v_opt_3145_){
_start:
{
lean_object* v_res_3146_; 
v_res_3146_ = l_Lean_Option_get_x3f___at___00__private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractiveAux_go_spec__2(v_opts_3144_, v_opt_3145_);
lean_dec_ref(v_opt_3145_);
lean_dec_ref(v_opts_3144_);
return v_res_3146_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractiveAux_go_spec__1(lean_object* v_ctx_3147_, lean_object* v_nCtx_3148_, size_t v_sz_3149_, size_t v_i_3150_, lean_object* v_bs_3151_){
_start:
{
uint8_t v___x_3152_; 
v___x_3152_ = lean_usize_dec_lt(v_i_3150_, v_sz_3149_);
if (v___x_3152_ == 0)
{
lean_object* v___x_3153_; 
lean_dec_ref(v_nCtx_3148_);
v___x_3153_ = l_unsafeCast___redArg(v_bs_3151_);
lean_dec_ref(v_bs_3151_);
return v___x_3153_;
}
else
{
lean_object* v_v_3154_; lean_object* v___x_3155_; lean_object* v_bs_x27_3156_; lean_object* v___y_3158_; lean_object* v___x_3164_; 
v_v_3154_ = lean_array_uget(v_bs_3151_, v_i_3150_);
v___x_3155_ = lean_unsigned_to_nat(0u);
v_bs_x27_3156_ = lean_array_uset(v_bs_3151_, v_i_3150_, v___x_3155_);
v___x_3164_ = l_unsafeCast___redArg(v_v_3154_);
lean_dec(v_v_3154_);
if (lean_obj_tag(v_ctx_3147_) == 0)
{
lean_object* v___x_3165_; 
lean_inc_ref(v_nCtx_3148_);
v___x_3165_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3165_, 0, v_nCtx_3148_);
lean_ctor_set(v___x_3165_, 1, v___x_3164_);
v___y_3158_ = v___x_3165_;
goto v___jp_3157_;
}
else
{
lean_object* v_val_3166_; lean_object* v___x_3167_; lean_object* v___x_3168_; 
v_val_3166_ = lean_ctor_get(v_ctx_3147_, 0);
lean_inc(v_val_3166_);
v___x_3167_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_3167_, 0, v_val_3166_);
lean_ctor_set(v___x_3167_, 1, v___x_3164_);
lean_inc_ref(v_nCtx_3148_);
v___x_3168_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3168_, 0, v_nCtx_3148_);
lean_ctor_set(v___x_3168_, 1, v___x_3167_);
v___y_3158_ = v___x_3168_;
goto v___jp_3157_;
}
v___jp_3157_:
{
size_t v___x_3159_; size_t v___x_3160_; lean_object* v___x_3161_; lean_object* v___x_3162_; 
v___x_3159_ = ((size_t)1ULL);
v___x_3160_ = lean_usize_add(v_i_3150_, v___x_3159_);
v___x_3161_ = l_unsafeCast___redArg(v___y_3158_);
lean_dec_ref(v___y_3158_);
v___x_3162_ = lean_array_uset(v_bs_x27_3156_, v_i_3150_, v___x_3161_);
v_i_3150_ = v___x_3160_;
v_bs_3151_ = v___x_3162_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractiveAux_go_spec__1___boxed(lean_object* v_ctx_3169_, lean_object* v_nCtx_3170_, lean_object* v_sz_3171_, lean_object* v_i_3172_, lean_object* v_bs_3173_){
_start:
{
size_t v_sz_boxed_3174_; size_t v_i_boxed_3175_; lean_object* v_res_3176_; 
v_sz_boxed_3174_ = lean_unbox_usize(v_sz_3171_);
lean_dec(v_sz_3171_);
v_i_boxed_3175_ = lean_unbox_usize(v_i_3172_);
lean_dec(v_i_3172_);
v_res_3176_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractiveAux_go_spec__1(v_ctx_3169_, v_nCtx_3170_, v_sz_boxed_3174_, v_i_boxed_3175_, v_bs_3173_);
lean_dec(v_ctx_3169_);
return v_res_3176_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractiveAux_go_spec__3___boxed(lean_object* v_nCtx_3177_, lean_object* v_ctx_3178_, lean_object* v_sz_3179_, lean_object* v_i_3180_, lean_object* v_bs_3181_, lean_object* v___y_3182_, lean_object* v___y_3183_){
_start:
{
size_t v_sz_boxed_3184_; size_t v_i_boxed_3185_; lean_object* v_res_3186_; 
v_sz_boxed_3184_ = lean_unbox_usize(v_sz_3179_);
lean_dec(v_sz_3179_);
v_i_boxed_3185_ = lean_unbox_usize(v_i_3180_);
lean_dec(v_i_3180_);
v_res_3186_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractiveAux_go_spec__3(v_nCtx_3177_, v_ctx_3178_, v_sz_boxed_3184_, v_i_boxed_3185_, v_bs_3181_, v___y_3182_);
return v_res_3186_;
}
}
static lean_object* _init_l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractiveAux_go___closed__4(void){
_start:
{
lean_object* v___x_3193_; lean_object* v___x_3194_; 
v___x_3193_ = lean_unsigned_to_nat(4u);
v___x_3194_ = lean_nat_to_int(v___x_3193_);
return v___x_3194_;
}
}
static lean_object* _init_l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractiveAux_go___closed__8(void){
_start:
{
lean_object* v___x_3199_; lean_object* v___x_3200_; 
v___x_3199_ = ((lean_object*)(l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractiveAux_go___closed__7));
v___x_3200_ = lean_mk_io_user_error(v___x_3199_);
return v___x_3200_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractiveAux_go(lean_object* v_nCtx_3204_, lean_object* v_a_3205_, lean_object* v_a_3206_, lean_object* v_a_3207_){
_start:
{
uint8_t v___y_3210_; lean_object* v___y_3211_; lean_object* v___y_3212_; lean_object* v_nodes_3213_; lean_object* v___y_3214_; lean_object* v___y_3245_; lean_object* v___y_3246_; uint8_t v___y_3247_; lean_object* v___y_3248_; lean_object* v___y_3249_; lean_object* v___y_3250_; lean_object* v___y_3257_; lean_object* v___y_3258_; uint8_t v___y_3259_; lean_object* v___y_3260_; lean_object* v___y_3261_; lean_object* v___y_3265_; lean_object* v___y_3266_; lean_object* v___y_3267_; uint8_t v___y_3268_; lean_object* v___y_3269_; lean_object* v___y_3270_; lean_object* v___y_3282_; lean_object* v___y_3283_; lean_object* v___y_3284_; uint8_t v___y_3285_; lean_object* v___y_3286_; lean_object* v___y_3287_; uint8_t v___y_3288_; uint8_t v___y_3309_; lean_object* v___y_3310_; lean_object* v___y_3311_; uint8_t v___y_3312_; lean_object* v___y_3313_; lean_object* v_header_3314_; lean_object* v___y_3315_; lean_object* v___y_3320_; uint8_t v___y_3321_; lean_object* v___y_3322_; double v___y_3323_; lean_object* v___y_3324_; lean_object* v___y_3325_; double v___y_3326_; uint8_t v___y_3327_; lean_object* v___y_3328_; double v___y_3338_; lean_object* v___y_3339_; uint8_t v___y_3340_; lean_object* v___y_3341_; lean_object* v___y_3342_; double v___y_3343_; uint8_t v___y_3344_; lean_object* v___y_3345_; lean_object* v___y_3346_; lean_object* v_ctx_3350_; lean_object* v_data_3351_; lean_object* v_header_3352_; lean_object* v_children_3353_; lean_object* v___y_3354_; lean_object* v_ctx_3421_; lean_object* v_n_3422_; lean_object* v_d_3423_; lean_object* v___y_3424_; lean_object* v_ctx_3446_; lean_object* v_wi_3447_; lean_object* v_d_3448_; lean_object* v___y_3449_; lean_object* v_ctx_3490_; lean_object* v_d_3491_; lean_object* v___y_3492_; lean_object* v_ctx_3496_; lean_object* v_d_u2081_3497_; lean_object* v_d_u2082_3498_; lean_object* v___y_3499_; lean_object* v_ctx_3530_; lean_object* v_d_3531_; lean_object* v___y_3532_; lean_object* v___x_3553_; lean_object* v___y_3555_; lean_object* v___y_3556_; lean_object* v___y_3557_; lean_object* v___y_3558_; 
v___x_3553_ = l_Lean_instImpl_00___x40_Lean_Message_4238524789____hygCtx___hyg_139_;
if (lean_obj_tag(v_a_3205_) == 0)
{
switch(lean_obj_tag(v_a_3206_))
{
case 0:
{
lean_object* v_a_3565_; lean_object* v_fmt_3566_; lean_object* v___x_3567_; 
lean_dec_ref(v_nCtx_3204_);
v_a_3565_ = lean_ctor_get(v_a_3206_, 0);
lean_inc_ref(v_a_3565_);
lean_dec_ref_known(v_a_3206_, 1);
v_fmt_3566_ = lean_ctor_get(v_a_3565_, 0);
lean_inc(v_fmt_3566_);
lean_dec_ref(v_a_3565_);
v___x_3567_ = l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractiveAux_withIgnoreTags(v_fmt_3566_, v_a_3207_);
return v___x_3567_;
}
case 1:
{
lean_object* v_a_3568_; lean_object* v___x_3570_; uint8_t v_isShared_3571_; uint8_t v_isSharedCheck_3581_; 
lean_dec_ref(v_nCtx_3204_);
v_a_3568_ = lean_ctor_get(v_a_3206_, 0);
v_isSharedCheck_3581_ = !lean_is_exclusive(v_a_3206_);
if (v_isSharedCheck_3581_ == 0)
{
v___x_3570_ = v_a_3206_;
v_isShared_3571_ = v_isSharedCheck_3581_;
goto v_resetjp_3569_;
}
else
{
lean_inc(v_a_3568_);
lean_dec(v_a_3206_);
v___x_3570_ = lean_box(0);
v_isShared_3571_ = v_isSharedCheck_3581_;
goto v_resetjp_3569_;
}
v_resetjp_3569_:
{
lean_object* v___x_3572_; lean_object* v___x_3573_; lean_object* v___x_3574_; lean_object* v___x_3576_; 
v___x_3572_ = ((lean_object*)(l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractiveAux_go___closed__10));
v___x_3573_ = l_Lean_mkMVar(v_a_3568_);
v___x_3574_ = lean_expr_dbg_to_string(v___x_3573_);
lean_dec_ref(v___x_3573_);
if (v_isShared_3571_ == 0)
{
lean_ctor_set_tag(v___x_3570_, 3);
lean_ctor_set(v___x_3570_, 0, v___x_3574_);
v___x_3576_ = v___x_3570_;
goto v_reusejp_3575_;
}
else
{
lean_object* v_reuseFailAlloc_3580_; 
v_reuseFailAlloc_3580_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3580_, 0, v___x_3574_);
v___x_3576_ = v_reuseFailAlloc_3580_;
goto v_reusejp_3575_;
}
v_reusejp_3575_:
{
lean_object* v___x_3577_; lean_object* v___x_3578_; lean_object* v___x_3579_; 
v___x_3577_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3577_, 0, v___x_3572_);
lean_ctor_set(v___x_3577_, 1, v___x_3576_);
v___x_3578_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3578_, 0, v___x_3577_);
lean_ctor_set(v___x_3578_, 1, v_a_3207_);
v___x_3579_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3579_, 0, v___x_3578_);
return v___x_3579_;
}
}
}
case 2:
{
lean_object* v_a_3582_; lean_object* v_a_3583_; 
v_a_3582_ = lean_ctor_get(v_a_3206_, 0);
lean_inc_ref(v_a_3582_);
v_a_3583_ = lean_ctor_get(v_a_3206_, 1);
lean_inc_ref(v_a_3583_);
lean_dec_ref_known(v_a_3206_, 2);
v_ctx_3446_ = v_a_3205_;
v_wi_3447_ = v_a_3582_;
v_d_3448_ = v_a_3583_;
v___y_3449_ = v_a_3207_;
goto v___jp_3445_;
}
case 3:
{
lean_object* v_a_3584_; lean_object* v_a_3585_; 
v_a_3584_ = lean_ctor_get(v_a_3206_, 0);
lean_inc_ref(v_a_3584_);
v_a_3585_ = lean_ctor_get(v_a_3206_, 1);
lean_inc_ref(v_a_3585_);
lean_dec_ref_known(v_a_3206_, 2);
v_ctx_3490_ = v_a_3584_;
v_d_3491_ = v_a_3585_;
v___y_3492_ = v_a_3207_;
goto v___jp_3489_;
}
case 4:
{
lean_object* v_a_3586_; lean_object* v_a_3587_; 
lean_dec_ref(v_nCtx_3204_);
v_a_3586_ = lean_ctor_get(v_a_3206_, 0);
lean_inc_ref(v_a_3586_);
v_a_3587_ = lean_ctor_get(v_a_3206_, 1);
lean_inc_ref(v_a_3587_);
lean_dec_ref_known(v_a_3206_, 2);
v_nCtx_3204_ = v_a_3586_;
v_a_3206_ = v_a_3587_;
goto _start;
}
case 5:
{
lean_object* v_a_3589_; lean_object* v_a_3590_; 
v_a_3589_ = lean_ctor_get(v_a_3206_, 0);
lean_inc(v_a_3589_);
v_a_3590_ = lean_ctor_get(v_a_3206_, 1);
lean_inc_ref(v_a_3590_);
lean_dec_ref_known(v_a_3206_, 2);
v_ctx_3421_ = v_a_3205_;
v_n_3422_ = v_a_3589_;
v_d_3423_ = v_a_3590_;
v___y_3424_ = v_a_3207_;
goto v___jp_3420_;
}
case 6:
{
lean_object* v_a_3591_; 
v_a_3591_ = lean_ctor_get(v_a_3206_, 0);
lean_inc_ref(v_a_3591_);
lean_dec_ref_known(v_a_3206_, 1);
v_ctx_3530_ = v_a_3205_;
v_d_3531_ = v_a_3591_;
v___y_3532_ = v_a_3207_;
goto v___jp_3529_;
}
case 7:
{
lean_object* v_a_3592_; lean_object* v_a_3593_; 
v_a_3592_ = lean_ctor_get(v_a_3206_, 0);
lean_inc_ref(v_a_3592_);
v_a_3593_ = lean_ctor_get(v_a_3206_, 1);
lean_inc_ref(v_a_3593_);
lean_dec_ref_known(v_a_3206_, 2);
v_ctx_3496_ = v_a_3205_;
v_d_u2081_3497_ = v_a_3592_;
v_d_u2082_3498_ = v_a_3593_;
v___y_3499_ = v_a_3207_;
goto v___jp_3495_;
}
case 9:
{
lean_object* v_data_3594_; lean_object* v_msg_3595_; lean_object* v_children_3596_; 
v_data_3594_ = lean_ctor_get(v_a_3206_, 0);
lean_inc_ref(v_data_3594_);
v_msg_3595_ = lean_ctor_get(v_a_3206_, 1);
lean_inc_ref(v_msg_3595_);
v_children_3596_ = lean_ctor_get(v_a_3206_, 2);
lean_inc_ref(v_children_3596_);
lean_dec_ref_known(v_a_3206_, 3);
v_ctx_3350_ = v_a_3205_;
v_data_3351_ = v_data_3594_;
v_header_3352_ = v_msg_3595_;
v_children_3353_ = v_children_3596_;
v___y_3354_ = v_a_3207_;
goto v___jp_3349_;
}
case 10:
{
lean_object* v_f_3597_; lean_object* v___x_3598_; 
v_f_3597_ = lean_ctor_get(v_a_3206_, 0);
lean_inc_ref(v_f_3597_);
lean_dec_ref_known(v_a_3206_, 2);
v___x_3598_ = lean_box(0);
v___y_3555_ = v_f_3597_;
v___y_3556_ = v_a_3205_;
v___y_3557_ = v_a_3207_;
v___y_3558_ = v___x_3598_;
goto v___jp_3554_;
}
default: 
{
lean_object* v_a_3599_; 
v_a_3599_ = lean_ctor_get(v_a_3206_, 1);
lean_inc_ref(v_a_3599_);
lean_dec_ref(v_a_3206_);
v_a_3206_ = v_a_3599_;
goto _start;
}
}
}
else
{
switch(lean_obj_tag(v_a_3206_))
{
case 0:
{
lean_object* v_a_3601_; lean_object* v_val_3602_; lean_object* v_fmt_3603_; lean_object* v_infos_3604_; lean_object* v___x_3606_; uint8_t v_isShared_3607_; uint8_t v_isSharedCheck_3639_; 
v_a_3601_ = lean_ctor_get(v_a_3206_, 0);
lean_inc_ref(v_a_3601_);
lean_dec_ref_known(v_a_3206_, 1);
v_val_3602_ = lean_ctor_get(v_a_3205_, 0);
lean_inc(v_val_3602_);
lean_dec_ref_known(v_a_3205_, 1);
v_fmt_3603_ = lean_ctor_get(v_a_3601_, 0);
v_infos_3604_ = lean_ctor_get(v_a_3601_, 1);
v_isSharedCheck_3639_ = !lean_is_exclusive(v_a_3601_);
if (v_isSharedCheck_3639_ == 0)
{
v___x_3606_ = v_a_3601_;
v_isShared_3607_ = v_isSharedCheck_3639_;
goto v_resetjp_3605_;
}
else
{
lean_inc(v_infos_3604_);
lean_inc(v_fmt_3603_);
lean_dec(v_a_3601_);
v___x_3606_ = lean_box(0);
v_isShared_3607_ = v_isSharedCheck_3639_;
goto v_resetjp_3605_;
}
v_resetjp_3605_:
{
lean_object* v___x_3608_; lean_object* v___x_3610_; 
v___x_3608_ = l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractiveAux_mkContextInfo(v_nCtx_3204_, v_val_3602_);
lean_dec(v_val_3602_);
lean_dec_ref(v_nCtx_3204_);
if (v_isShared_3607_ == 0)
{
lean_ctor_set(v___x_3606_, 0, v___x_3608_);
v___x_3610_ = v___x_3606_;
goto v_reusejp_3609_;
}
else
{
lean_object* v_reuseFailAlloc_3638_; 
v_reuseFailAlloc_3638_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3638_, 0, v___x_3608_);
lean_ctor_set(v_reuseFailAlloc_3638_, 1, v_infos_3604_);
v___x_3610_ = v_reuseFailAlloc_3638_;
goto v_reusejp_3609_;
}
v_reusejp_3609_:
{
lean_object* v___x_3611_; 
v___x_3611_ = l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractiveAux_pushEmbed(v___x_3610_, v_a_3207_);
if (lean_obj_tag(v___x_3611_) == 0)
{
lean_object* v_a_3612_; lean_object* v___x_3614_; uint8_t v_isShared_3615_; uint8_t v_isSharedCheck_3629_; 
v_a_3612_ = lean_ctor_get(v___x_3611_, 0);
v_isSharedCheck_3629_ = !lean_is_exclusive(v___x_3611_);
if (v_isSharedCheck_3629_ == 0)
{
v___x_3614_ = v___x_3611_;
v_isShared_3615_ = v_isSharedCheck_3629_;
goto v_resetjp_3613_;
}
else
{
lean_inc(v_a_3612_);
lean_dec(v___x_3611_);
v___x_3614_ = lean_box(0);
v_isShared_3615_ = v_isSharedCheck_3629_;
goto v_resetjp_3613_;
}
v_resetjp_3613_:
{
lean_object* v_fst_3616_; lean_object* v_snd_3617_; lean_object* v___x_3619_; uint8_t v_isShared_3620_; uint8_t v_isSharedCheck_3628_; 
v_fst_3616_ = lean_ctor_get(v_a_3612_, 0);
v_snd_3617_ = lean_ctor_get(v_a_3612_, 1);
v_isSharedCheck_3628_ = !lean_is_exclusive(v_a_3612_);
if (v_isSharedCheck_3628_ == 0)
{
v___x_3619_ = v_a_3612_;
v_isShared_3620_ = v_isSharedCheck_3628_;
goto v_resetjp_3618_;
}
else
{
lean_inc(v_snd_3617_);
lean_inc(v_fst_3616_);
lean_dec(v_a_3612_);
v___x_3619_ = lean_box(0);
v_isShared_3620_ = v_isSharedCheck_3628_;
goto v_resetjp_3618_;
}
v_resetjp_3618_:
{
lean_object* v___x_3621_; lean_object* v___x_3623_; 
v___x_3621_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3621_, 0, v_fst_3616_);
lean_ctor_set(v___x_3621_, 1, v_fmt_3603_);
if (v_isShared_3620_ == 0)
{
lean_ctor_set(v___x_3619_, 0, v___x_3621_);
v___x_3623_ = v___x_3619_;
goto v_reusejp_3622_;
}
else
{
lean_object* v_reuseFailAlloc_3627_; 
v_reuseFailAlloc_3627_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3627_, 0, v___x_3621_);
lean_ctor_set(v_reuseFailAlloc_3627_, 1, v_snd_3617_);
v___x_3623_ = v_reuseFailAlloc_3627_;
goto v_reusejp_3622_;
}
v_reusejp_3622_:
{
lean_object* v___x_3625_; 
if (v_isShared_3615_ == 0)
{
lean_ctor_set(v___x_3614_, 0, v___x_3623_);
v___x_3625_ = v___x_3614_;
goto v_reusejp_3624_;
}
else
{
lean_object* v_reuseFailAlloc_3626_; 
v_reuseFailAlloc_3626_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3626_, 0, v___x_3623_);
v___x_3625_ = v_reuseFailAlloc_3626_;
goto v_reusejp_3624_;
}
v_reusejp_3624_:
{
return v___x_3625_;
}
}
}
}
}
else
{
lean_object* v_a_3630_; lean_object* v___x_3632_; uint8_t v_isShared_3633_; uint8_t v_isSharedCheck_3637_; 
lean_dec(v_fmt_3603_);
v_a_3630_ = lean_ctor_get(v___x_3611_, 0);
v_isSharedCheck_3637_ = !lean_is_exclusive(v___x_3611_);
if (v_isSharedCheck_3637_ == 0)
{
v___x_3632_ = v___x_3611_;
v_isShared_3633_ = v_isSharedCheck_3637_;
goto v_resetjp_3631_;
}
else
{
lean_inc(v_a_3630_);
lean_dec(v___x_3611_);
v___x_3632_ = lean_box(0);
v_isShared_3633_ = v_isSharedCheck_3637_;
goto v_resetjp_3631_;
}
v_resetjp_3631_:
{
lean_object* v___x_3635_; 
if (v_isShared_3633_ == 0)
{
v___x_3635_ = v___x_3632_;
goto v_reusejp_3634_;
}
else
{
lean_object* v_reuseFailAlloc_3636_; 
v_reuseFailAlloc_3636_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3636_, 0, v_a_3630_);
v___x_3635_ = v_reuseFailAlloc_3636_;
goto v_reusejp_3634_;
}
v_reusejp_3634_:
{
return v___x_3635_;
}
}
}
}
}
}
case 1:
{
lean_object* v_val_3640_; lean_object* v_a_3641_; lean_object* v_lctx_3642_; lean_object* v___x_3643_; lean_object* v___x_3644_; lean_object* v___x_3645_; 
v_val_3640_ = lean_ctor_get(v_a_3205_, 0);
lean_inc(v_val_3640_);
lean_dec_ref_known(v_a_3205_, 1);
v_a_3641_ = lean_ctor_get(v_a_3206_, 0);
lean_inc(v_a_3641_);
lean_dec_ref_known(v_a_3206_, 1);
v_lctx_3642_ = lean_ctor_get(v_val_3640_, 2);
lean_inc_ref(v_lctx_3642_);
v___x_3643_ = l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractiveAux_mkContextInfo(v_nCtx_3204_, v_val_3640_);
lean_dec(v_val_3640_);
lean_dec_ref(v_nCtx_3204_);
v___x_3644_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3644_, 0, v___x_3643_);
lean_ctor_set(v___x_3644_, 1, v_lctx_3642_);
lean_ctor_set(v___x_3644_, 2, v_a_3641_);
v___x_3645_ = l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractiveAux_pushEmbed(v___x_3644_, v_a_3207_);
if (lean_obj_tag(v___x_3645_) == 0)
{
lean_object* v_a_3646_; lean_object* v___x_3648_; uint8_t v_isShared_3649_; uint8_t v_isSharedCheck_3664_; 
v_a_3646_ = lean_ctor_get(v___x_3645_, 0);
v_isSharedCheck_3664_ = !lean_is_exclusive(v___x_3645_);
if (v_isSharedCheck_3664_ == 0)
{
v___x_3648_ = v___x_3645_;
v_isShared_3649_ = v_isSharedCheck_3664_;
goto v_resetjp_3647_;
}
else
{
lean_inc(v_a_3646_);
lean_dec(v___x_3645_);
v___x_3648_ = lean_box(0);
v_isShared_3649_ = v_isSharedCheck_3664_;
goto v_resetjp_3647_;
}
v_resetjp_3647_:
{
lean_object* v_fst_3650_; lean_object* v_snd_3651_; lean_object* v___x_3653_; uint8_t v_isShared_3654_; uint8_t v_isSharedCheck_3663_; 
v_fst_3650_ = lean_ctor_get(v_a_3646_, 0);
v_snd_3651_ = lean_ctor_get(v_a_3646_, 1);
v_isSharedCheck_3663_ = !lean_is_exclusive(v_a_3646_);
if (v_isSharedCheck_3663_ == 0)
{
v___x_3653_ = v_a_3646_;
v_isShared_3654_ = v_isSharedCheck_3663_;
goto v_resetjp_3652_;
}
else
{
lean_inc(v_snd_3651_);
lean_inc(v_fst_3650_);
lean_dec(v_a_3646_);
v___x_3653_ = lean_box(0);
v_isShared_3654_ = v_isSharedCheck_3663_;
goto v_resetjp_3652_;
}
v_resetjp_3652_:
{
lean_object* v___x_3655_; lean_object* v___x_3656_; lean_object* v___x_3658_; 
v___x_3655_ = lean_box(0);
v___x_3656_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3656_, 0, v_fst_3650_);
lean_ctor_set(v___x_3656_, 1, v___x_3655_);
if (v_isShared_3654_ == 0)
{
lean_ctor_set(v___x_3653_, 0, v___x_3656_);
v___x_3658_ = v___x_3653_;
goto v_reusejp_3657_;
}
else
{
lean_object* v_reuseFailAlloc_3662_; 
v_reuseFailAlloc_3662_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3662_, 0, v___x_3656_);
lean_ctor_set(v_reuseFailAlloc_3662_, 1, v_snd_3651_);
v___x_3658_ = v_reuseFailAlloc_3662_;
goto v_reusejp_3657_;
}
v_reusejp_3657_:
{
lean_object* v___x_3660_; 
if (v_isShared_3649_ == 0)
{
lean_ctor_set(v___x_3648_, 0, v___x_3658_);
v___x_3660_ = v___x_3648_;
goto v_reusejp_3659_;
}
else
{
lean_object* v_reuseFailAlloc_3661_; 
v_reuseFailAlloc_3661_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3661_, 0, v___x_3658_);
v___x_3660_ = v_reuseFailAlloc_3661_;
goto v_reusejp_3659_;
}
v_reusejp_3659_:
{
return v___x_3660_;
}
}
}
}
}
else
{
lean_object* v_a_3665_; lean_object* v___x_3667_; uint8_t v_isShared_3668_; uint8_t v_isSharedCheck_3672_; 
v_a_3665_ = lean_ctor_get(v___x_3645_, 0);
v_isSharedCheck_3672_ = !lean_is_exclusive(v___x_3645_);
if (v_isSharedCheck_3672_ == 0)
{
v___x_3667_ = v___x_3645_;
v_isShared_3668_ = v_isSharedCheck_3672_;
goto v_resetjp_3666_;
}
else
{
lean_inc(v_a_3665_);
lean_dec(v___x_3645_);
v___x_3667_ = lean_box(0);
v_isShared_3668_ = v_isSharedCheck_3672_;
goto v_resetjp_3666_;
}
v_resetjp_3666_:
{
lean_object* v___x_3670_; 
if (v_isShared_3668_ == 0)
{
v___x_3670_ = v___x_3667_;
goto v_reusejp_3669_;
}
else
{
lean_object* v_reuseFailAlloc_3671_; 
v_reuseFailAlloc_3671_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3671_, 0, v_a_3665_);
v___x_3670_ = v_reuseFailAlloc_3671_;
goto v_reusejp_3669_;
}
v_reusejp_3669_:
{
return v___x_3670_;
}
}
}
}
case 2:
{
lean_object* v_a_3673_; lean_object* v_a_3674_; 
v_a_3673_ = lean_ctor_get(v_a_3206_, 0);
lean_inc_ref(v_a_3673_);
v_a_3674_ = lean_ctor_get(v_a_3206_, 1);
lean_inc_ref(v_a_3674_);
lean_dec_ref_known(v_a_3206_, 2);
v_ctx_3446_ = v_a_3205_;
v_wi_3447_ = v_a_3673_;
v_d_3448_ = v_a_3674_;
v___y_3449_ = v_a_3207_;
goto v___jp_3445_;
}
case 3:
{
lean_object* v_a_3675_; lean_object* v_a_3676_; 
lean_dec_ref_known(v_a_3205_, 1);
v_a_3675_ = lean_ctor_get(v_a_3206_, 0);
lean_inc_ref(v_a_3675_);
v_a_3676_ = lean_ctor_get(v_a_3206_, 1);
lean_inc_ref(v_a_3676_);
lean_dec_ref_known(v_a_3206_, 2);
v_ctx_3490_ = v_a_3675_;
v_d_3491_ = v_a_3676_;
v___y_3492_ = v_a_3207_;
goto v___jp_3489_;
}
case 4:
{
lean_object* v_a_3677_; lean_object* v_a_3678_; 
lean_dec_ref(v_nCtx_3204_);
v_a_3677_ = lean_ctor_get(v_a_3206_, 0);
lean_inc_ref(v_a_3677_);
v_a_3678_ = lean_ctor_get(v_a_3206_, 1);
lean_inc_ref(v_a_3678_);
lean_dec_ref_known(v_a_3206_, 2);
v_nCtx_3204_ = v_a_3677_;
v_a_3206_ = v_a_3678_;
goto _start;
}
case 5:
{
lean_object* v_a_3680_; lean_object* v_a_3681_; 
v_a_3680_ = lean_ctor_get(v_a_3206_, 0);
lean_inc(v_a_3680_);
v_a_3681_ = lean_ctor_get(v_a_3206_, 1);
lean_inc_ref(v_a_3681_);
lean_dec_ref_known(v_a_3206_, 2);
v_ctx_3421_ = v_a_3205_;
v_n_3422_ = v_a_3680_;
v_d_3423_ = v_a_3681_;
v___y_3424_ = v_a_3207_;
goto v___jp_3420_;
}
case 6:
{
lean_object* v_a_3682_; 
v_a_3682_ = lean_ctor_get(v_a_3206_, 0);
lean_inc_ref(v_a_3682_);
lean_dec_ref_known(v_a_3206_, 1);
v_ctx_3530_ = v_a_3205_;
v_d_3531_ = v_a_3682_;
v___y_3532_ = v_a_3207_;
goto v___jp_3529_;
}
case 7:
{
lean_object* v_a_3683_; lean_object* v_a_3684_; 
v_a_3683_ = lean_ctor_get(v_a_3206_, 0);
lean_inc_ref(v_a_3683_);
v_a_3684_ = lean_ctor_get(v_a_3206_, 1);
lean_inc_ref(v_a_3684_);
lean_dec_ref_known(v_a_3206_, 2);
v_ctx_3496_ = v_a_3205_;
v_d_u2081_3497_ = v_a_3683_;
v_d_u2082_3498_ = v_a_3684_;
v___y_3499_ = v_a_3207_;
goto v___jp_3495_;
}
case 9:
{
lean_object* v_data_3685_; lean_object* v_msg_3686_; lean_object* v_children_3687_; 
v_data_3685_ = lean_ctor_get(v_a_3206_, 0);
lean_inc_ref(v_data_3685_);
v_msg_3686_ = lean_ctor_get(v_a_3206_, 1);
lean_inc_ref(v_msg_3686_);
v_children_3687_ = lean_ctor_get(v_a_3206_, 2);
lean_inc_ref(v_children_3687_);
lean_dec_ref_known(v_a_3206_, 3);
v_ctx_3350_ = v_a_3205_;
v_data_3351_ = v_data_3685_;
v_header_3352_ = v_msg_3686_;
v_children_3353_ = v_children_3687_;
v___y_3354_ = v_a_3207_;
goto v___jp_3349_;
}
case 10:
{
lean_object* v_val_3688_; lean_object* v_f_3689_; lean_object* v___x_3690_; lean_object* v___x_3691_; 
v_val_3688_ = lean_ctor_get(v_a_3205_, 0);
v_f_3689_ = lean_ctor_get(v_a_3206_, 0);
lean_inc_ref(v_f_3689_);
lean_dec_ref_known(v_a_3206_, 2);
v___x_3690_ = l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_mkPPContext(v_nCtx_3204_, v_val_3688_);
v___x_3691_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3691_, 0, v___x_3690_);
v___y_3555_ = v_f_3689_;
v___y_3556_ = v_a_3205_;
v___y_3557_ = v_a_3207_;
v___y_3558_ = v___x_3691_;
goto v___jp_3554_;
}
default: 
{
lean_object* v_a_3692_; 
v_a_3692_ = lean_ctor_get(v_a_3206_, 1);
lean_inc_ref(v_a_3692_);
lean_dec_ref(v_a_3206_);
v_a_3206_ = v_a_3692_;
goto _start;
}
}
}
v___jp_3209_:
{
lean_object* v___x_3215_; lean_object* v___x_3216_; 
v___x_3215_ = lean_alloc_ctor(3, 3, 1);
lean_ctor_set(v___x_3215_, 0, v___y_3211_);
lean_ctor_set(v___x_3215_, 1, v___y_3212_);
lean_ctor_set(v___x_3215_, 2, v_nodes_3213_);
lean_ctor_set_uint8(v___x_3215_, sizeof(void*)*3, v___y_3210_);
v___x_3216_ = l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractiveAux_pushEmbed(v___x_3215_, v___y_3214_);
if (lean_obj_tag(v___x_3216_) == 0)
{
lean_object* v_a_3217_; lean_object* v___x_3219_; uint8_t v_isShared_3220_; uint8_t v_isSharedCheck_3235_; 
v_a_3217_ = lean_ctor_get(v___x_3216_, 0);
v_isSharedCheck_3235_ = !lean_is_exclusive(v___x_3216_);
if (v_isSharedCheck_3235_ == 0)
{
v___x_3219_ = v___x_3216_;
v_isShared_3220_ = v_isSharedCheck_3235_;
goto v_resetjp_3218_;
}
else
{
lean_inc(v_a_3217_);
lean_dec(v___x_3216_);
v___x_3219_ = lean_box(0);
v_isShared_3220_ = v_isSharedCheck_3235_;
goto v_resetjp_3218_;
}
v_resetjp_3218_:
{
lean_object* v_fst_3221_; lean_object* v_snd_3222_; lean_object* v___x_3224_; uint8_t v_isShared_3225_; uint8_t v_isSharedCheck_3234_; 
v_fst_3221_ = lean_ctor_get(v_a_3217_, 0);
v_snd_3222_ = lean_ctor_get(v_a_3217_, 1);
v_isSharedCheck_3234_ = !lean_is_exclusive(v_a_3217_);
if (v_isSharedCheck_3234_ == 0)
{
v___x_3224_ = v_a_3217_;
v_isShared_3225_ = v_isSharedCheck_3234_;
goto v_resetjp_3223_;
}
else
{
lean_inc(v_snd_3222_);
lean_inc(v_fst_3221_);
lean_dec(v_a_3217_);
v___x_3224_ = lean_box(0);
v_isShared_3225_ = v_isSharedCheck_3234_;
goto v_resetjp_3223_;
}
v_resetjp_3223_:
{
lean_object* v___x_3226_; lean_object* v___x_3227_; lean_object* v___x_3229_; 
v___x_3226_ = lean_box(0);
v___x_3227_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3227_, 0, v_fst_3221_);
lean_ctor_set(v___x_3227_, 1, v___x_3226_);
if (v_isShared_3225_ == 0)
{
lean_ctor_set(v___x_3224_, 0, v___x_3227_);
v___x_3229_ = v___x_3224_;
goto v_reusejp_3228_;
}
else
{
lean_object* v_reuseFailAlloc_3233_; 
v_reuseFailAlloc_3233_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3233_, 0, v___x_3227_);
lean_ctor_set(v_reuseFailAlloc_3233_, 1, v_snd_3222_);
v___x_3229_ = v_reuseFailAlloc_3233_;
goto v_reusejp_3228_;
}
v_reusejp_3228_:
{
lean_object* v___x_3231_; 
if (v_isShared_3220_ == 0)
{
lean_ctor_set(v___x_3219_, 0, v___x_3229_);
v___x_3231_ = v___x_3219_;
goto v_reusejp_3230_;
}
else
{
lean_object* v_reuseFailAlloc_3232_; 
v_reuseFailAlloc_3232_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3232_, 0, v___x_3229_);
v___x_3231_ = v_reuseFailAlloc_3232_;
goto v_reusejp_3230_;
}
v_reusejp_3230_:
{
return v___x_3231_;
}
}
}
}
}
else
{
lean_object* v_a_3236_; lean_object* v___x_3238_; uint8_t v_isShared_3239_; uint8_t v_isSharedCheck_3243_; 
v_a_3236_ = lean_ctor_get(v___x_3216_, 0);
v_isSharedCheck_3243_ = !lean_is_exclusive(v___x_3216_);
if (v_isSharedCheck_3243_ == 0)
{
v___x_3238_ = v___x_3216_;
v_isShared_3239_ = v_isSharedCheck_3243_;
goto v_resetjp_3237_;
}
else
{
lean_inc(v_a_3236_);
lean_dec(v___x_3216_);
v___x_3238_ = lean_box(0);
v_isShared_3239_ = v_isSharedCheck_3243_;
goto v_resetjp_3237_;
}
v_resetjp_3237_:
{
lean_object* v___x_3241_; 
if (v_isShared_3239_ == 0)
{
v___x_3241_ = v___x_3238_;
goto v_reusejp_3240_;
}
else
{
lean_object* v_reuseFailAlloc_3242_; 
v_reuseFailAlloc_3242_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3242_, 0, v_a_3236_);
v___x_3241_ = v_reuseFailAlloc_3242_;
goto v_reusejp_3240_;
}
v_reusejp_3240_:
{
return v___x_3241_;
}
}
}
}
v___jp_3244_:
{
lean_object* v___x_3251_; lean_object* v___x_3252_; lean_object* v___x_3253_; lean_object* v___x_3254_; lean_object* v___x_3255_; 
v___x_3251_ = lean_unsigned_to_nat(0u);
v___x_3252_ = lean_array_get_size(v___y_3245_);
v___x_3253_ = l_Array_toSubarray___redArg(v___y_3245_, v___x_3251_, v___x_3252_);
lean_inc(v___y_3248_);
v___x_3254_ = l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractiveAux_chopUpChildren(v___y_3248_, v___y_3250_, v___x_3253_);
lean_dec(v___y_3250_);
v___x_3255_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3255_, 0, v___x_3254_);
v___y_3210_ = v___y_3247_;
v___y_3211_ = v___y_3248_;
v___y_3212_ = v___y_3249_;
v_nodes_3213_ = v___x_3255_;
v___y_3214_ = v___y_3246_;
goto v___jp_3209_;
}
v___jp_3256_:
{
lean_object* v___x_3262_; lean_object* v_defValue_3263_; 
v___x_3262_ = l_Lean_MessageData_maxTraceChildren;
v_defValue_3263_ = lean_ctor_get(v___x_3262_, 1);
lean_inc(v_defValue_3263_);
v___y_3245_ = v___y_3257_;
v___y_3246_ = v___y_3258_;
v___y_3247_ = v___y_3259_;
v___y_3248_ = v___y_3260_;
v___y_3249_ = v___y_3261_;
v___y_3250_ = v_defValue_3263_;
goto v___jp_3244_;
}
v___jp_3264_:
{
size_t v_sz_3271_; size_t v___x_3272_; lean_object* v___x_3273_; lean_object* v___x_3274_; lean_object* v___x_3275_; 
v_sz_3271_ = lean_array_size(v___y_3265_);
v___x_3272_ = ((size_t)0ULL);
v___x_3273_ = l_unsafeCast___redArg(v___y_3265_);
lean_dec_ref(v___y_3265_);
v___x_3274_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractiveAux_go_spec__1(v___y_3266_, v_nCtx_3204_, v_sz_3271_, v___x_3272_, v___x_3273_);
v___x_3275_ = l_unsafeCast___redArg(v___x_3274_);
lean_dec_ref(v___x_3274_);
if (lean_obj_tag(v___y_3266_) == 0)
{
v___y_3257_ = v___x_3275_;
v___y_3258_ = v___y_3267_;
v___y_3259_ = v___y_3268_;
v___y_3260_ = v___y_3269_;
v___y_3261_ = v___y_3270_;
goto v___jp_3256_;
}
else
{
lean_object* v_val_3276_; lean_object* v_opts_3277_; lean_object* v___x_3278_; lean_object* v___x_3279_; 
v_val_3276_ = lean_ctor_get(v___y_3266_, 0);
lean_inc(v_val_3276_);
lean_dec_ref_known(v___y_3266_, 1);
v_opts_3277_ = lean_ctor_get(v_val_3276_, 3);
lean_inc_ref(v_opts_3277_);
lean_dec(v_val_3276_);
v___x_3278_ = l_Lean_MessageData_maxTraceChildren;
v___x_3279_ = l_Lean_Option_get_x3f___at___00__private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractiveAux_go_spec__2(v_opts_3277_, v___x_3278_);
lean_dec_ref(v_opts_3277_);
if (lean_obj_tag(v___x_3279_) == 0)
{
v___y_3257_ = v___x_3275_;
v___y_3258_ = v___y_3267_;
v___y_3259_ = v___y_3268_;
v___y_3260_ = v___y_3269_;
v___y_3261_ = v___y_3270_;
goto v___jp_3256_;
}
else
{
lean_object* v_val_3280_; 
v_val_3280_ = lean_ctor_get(v___x_3279_, 0);
lean_inc(v_val_3280_);
lean_dec_ref_known(v___x_3279_, 1);
v___y_3245_ = v___x_3275_;
v___y_3246_ = v___y_3267_;
v___y_3247_ = v___y_3268_;
v___y_3248_ = v___y_3269_;
v___y_3249_ = v___y_3270_;
v___y_3250_ = v_val_3280_;
goto v___jp_3244_;
}
}
}
v___jp_3281_:
{
if (v___y_3288_ == 0)
{
size_t v_sz_3289_; lean_object* v___x_3290_; lean_object* v___x_3291_; lean_object* v___x_3292_; lean_object* v___x_3293_; lean_object* v___x_5621__overap_3294_; lean_object* v___x_3295_; 
v_sz_3289_ = lean_array_size(v___y_3282_);
v___x_3290_ = l_unsafeCast___redArg(v___y_3282_);
lean_dec_ref(v___y_3282_);
v___x_3291_ = lean_box_usize(v_sz_3289_);
v___x_3292_ = ((lean_object*)(l_Lean_Widget_TaggedText_mapM___at___00Lean_Widget_instRpcEncodableMsgEmbed_enc_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__spec__0___redArg___boxed__const__1));
v___x_3293_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractiveAux_go_spec__3___boxed), 7, 5);
lean_closure_set(v___x_3293_, 0, v_nCtx_3204_);
lean_closure_set(v___x_3293_, 1, v___y_3283_);
lean_closure_set(v___x_3293_, 2, v___x_3291_);
lean_closure_set(v___x_3293_, 3, v___x_3292_);
lean_closure_set(v___x_3293_, 4, v___x_3290_);
v___x_5621__overap_3294_ = l_unsafeCast___redArg(v___x_3293_);
lean_dec_ref(v___x_3293_);
v___x_3295_ = lean_apply_2(v___x_5621__overap_3294_, v___y_3284_, lean_box(0));
if (lean_obj_tag(v___x_3295_) == 0)
{
lean_object* v_a_3296_; lean_object* v_fst_3297_; lean_object* v_snd_3298_; lean_object* v___x_3299_; 
v_a_3296_ = lean_ctor_get(v___x_3295_, 0);
lean_inc(v_a_3296_);
lean_dec_ref_known(v___x_3295_, 1);
v_fst_3297_ = lean_ctor_get(v_a_3296_, 0);
lean_inc(v_fst_3297_);
v_snd_3298_ = lean_ctor_get(v_a_3296_, 1);
lean_inc(v_snd_3298_);
lean_dec(v_a_3296_);
v___x_3299_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3299_, 0, v_fst_3297_);
v___y_3210_ = v___y_3285_;
v___y_3211_ = v___y_3286_;
v___y_3212_ = v___y_3287_;
v_nodes_3213_ = v___x_3299_;
v___y_3214_ = v_snd_3298_;
goto v___jp_3209_;
}
else
{
lean_object* v_a_3300_; lean_object* v___x_3302_; uint8_t v_isShared_3303_; uint8_t v_isSharedCheck_3307_; 
lean_dec(v___y_3287_);
lean_dec(v___y_3286_);
v_a_3300_ = lean_ctor_get(v___x_3295_, 0);
v_isSharedCheck_3307_ = !lean_is_exclusive(v___x_3295_);
if (v_isSharedCheck_3307_ == 0)
{
v___x_3302_ = v___x_3295_;
v_isShared_3303_ = v_isSharedCheck_3307_;
goto v_resetjp_3301_;
}
else
{
lean_inc(v_a_3300_);
lean_dec(v___x_3295_);
v___x_3302_ = lean_box(0);
v_isShared_3303_ = v_isSharedCheck_3307_;
goto v_resetjp_3301_;
}
v_resetjp_3301_:
{
lean_object* v___x_3305_; 
if (v_isShared_3303_ == 0)
{
v___x_3305_ = v___x_3302_;
goto v_reusejp_3304_;
}
else
{
lean_object* v_reuseFailAlloc_3306_; 
v_reuseFailAlloc_3306_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3306_, 0, v_a_3300_);
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
else
{
v___y_3265_ = v___y_3282_;
v___y_3266_ = v___y_3283_;
v___y_3267_ = v___y_3284_;
v___y_3268_ = v___y_3285_;
v___y_3269_ = v___y_3286_;
v___y_3270_ = v___y_3287_;
goto v___jp_3264_;
}
}
v___jp_3308_:
{
if (v___y_3312_ == 0)
{
v___y_3282_ = v___y_3310_;
v___y_3283_ = v___y_3311_;
v___y_3284_ = v___y_3315_;
v___y_3285_ = v___y_3312_;
v___y_3286_ = v___y_3313_;
v___y_3287_ = v_header_3314_;
v___y_3288_ = v___y_3309_;
goto v___jp_3281_;
}
else
{
lean_object* v___x_3316_; lean_object* v___x_3317_; uint8_t v___x_3318_; 
v___x_3316_ = lean_array_get_size(v___y_3310_);
v___x_3317_ = lean_unsigned_to_nat(0u);
v___x_3318_ = lean_nat_dec_eq(v___x_3316_, v___x_3317_);
if (v___x_3318_ == 0)
{
v___y_3265_ = v___y_3310_;
v___y_3266_ = v___y_3311_;
v___y_3267_ = v___y_3315_;
v___y_3268_ = v___y_3312_;
v___y_3269_ = v___y_3313_;
v___y_3270_ = v_header_3314_;
goto v___jp_3264_;
}
else
{
v___y_3282_ = v___y_3310_;
v___y_3283_ = v___y_3311_;
v___y_3284_ = v___y_3315_;
v___y_3285_ = v___y_3312_;
v___y_3286_ = v___y_3313_;
v___y_3287_ = v_header_3314_;
v___y_3288_ = v___y_3309_;
goto v___jp_3281_;
}
}
}
v___jp_3319_:
{
lean_object* v___x_3329_; double v___x_3330_; lean_object* v___x_3331_; lean_object* v___x_3332_; lean_object* v___x_3333_; lean_object* v___x_3334_; lean_object* v___x_3335_; lean_object* v___x_3336_; 
v___x_3329_ = ((lean_object*)(l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractiveAux_go___closed__1));
v___x_3330_ = lean_float_sub(v___y_3326_, v___y_3323_);
v___x_3331_ = lean_float_to_string(v___x_3330_);
v___x_3332_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3332_, 0, v___x_3331_);
v___x_3333_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3333_, 0, v___x_3329_);
lean_ctor_set(v___x_3333_, 1, v___x_3332_);
v___x_3334_ = ((lean_object*)(l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractiveAux_go___closed__3));
v___x_3335_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3335_, 0, v___x_3333_);
lean_ctor_set(v___x_3335_, 1, v___x_3334_);
v___x_3336_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3336_, 0, v___x_3335_);
lean_ctor_set(v___x_3336_, 1, v___y_3320_);
v___y_3309_ = v___y_3321_;
v___y_3310_ = v___y_3324_;
v___y_3311_ = v___y_3325_;
v___y_3312_ = v___y_3327_;
v___y_3313_ = v___y_3328_;
v_header_3314_ = v___x_3336_;
v___y_3315_ = v___y_3322_;
goto v___jp_3308_;
}
v___jp_3337_:
{
double v___x_3347_; uint8_t v___x_3348_; 
v___x_3347_ = lean_float_once(&l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractiveAux_chopUpChildren___closed__1, &l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractiveAux_chopUpChildren___closed__1_once, _init_l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractiveAux_chopUpChildren___closed__1);
v___x_3348_ = lean_float_beq(v___y_3338_, v___x_3347_);
if (v___x_3348_ == 0)
{
v___y_3320_ = v___y_3346_;
v___y_3321_ = v___y_3340_;
v___y_3322_ = v___y_3339_;
v___y_3323_ = v___y_3338_;
v___y_3324_ = v___y_3341_;
v___y_3325_ = v___y_3342_;
v___y_3326_ = v___y_3343_;
v___y_3327_ = v___y_3344_;
v___y_3328_ = v___y_3345_;
goto v___jp_3319_;
}
else
{
if (v___y_3340_ == 0)
{
v___y_3309_ = v___y_3340_;
v___y_3310_ = v___y_3341_;
v___y_3311_ = v___y_3342_;
v___y_3312_ = v___y_3344_;
v___y_3313_ = v___y_3345_;
v_header_3314_ = v___y_3346_;
v___y_3315_ = v___y_3339_;
goto v___jp_3308_;
}
else
{
v___y_3320_ = v___y_3346_;
v___y_3321_ = v___y_3340_;
v___y_3322_ = v___y_3339_;
v___y_3323_ = v___y_3338_;
v___y_3324_ = v___y_3341_;
v___y_3325_ = v___y_3342_;
v___y_3326_ = v___y_3343_;
v___y_3327_ = v___y_3344_;
v___y_3328_ = v___y_3345_;
goto v___jp_3319_;
}
}
}
v___jp_3349_:
{
lean_object* v_cls_3355_; lean_object* v_result_x3f_3356_; double v_startTime_3357_; double v_stopTime_3358_; uint8_t v_collapsed_3359_; uint8_t v___x_3360_; 
v_cls_3355_ = lean_ctor_get(v_data_3351_, 0);
lean_inc(v_cls_3355_);
v_result_x3f_3356_ = lean_ctor_get(v_data_3351_, 1);
lean_inc(v_result_x3f_3356_);
v_startTime_3357_ = lean_ctor_get_float(v_data_3351_, sizeof(void*)*3);
v_stopTime_3358_ = lean_ctor_get_float(v_data_3351_, sizeof(void*)*3 + 8);
v_collapsed_3359_ = lean_ctor_get_uint8(v_data_3351_, sizeof(void*)*3 + 16);
lean_dec_ref(v_data_3351_);
v___x_3360_ = l_Lean_Name_isAnonymous(v_cls_3355_);
if (v___x_3360_ == 0)
{
lean_object* v___x_3361_; 
lean_inc(v_ctx_3350_);
lean_inc_ref(v_nCtx_3204_);
v___x_3361_ = l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractiveAux_go(v_nCtx_3204_, v_ctx_3350_, v_header_3352_, v___y_3354_);
if (lean_obj_tag(v___x_3361_) == 0)
{
lean_object* v_a_3362_; lean_object* v_fst_3363_; lean_object* v_snd_3364_; lean_object* v___x_3366_; uint8_t v_isShared_3367_; uint8_t v_isSharedCheck_3385_; 
v_a_3362_ = lean_ctor_get(v___x_3361_, 0);
lean_inc(v_a_3362_);
lean_dec_ref_known(v___x_3361_, 1);
v_fst_3363_ = lean_ctor_get(v_a_3362_, 0);
v_snd_3364_ = lean_ctor_get(v_a_3362_, 1);
v_isSharedCheck_3385_ = !lean_is_exclusive(v_a_3362_);
if (v_isSharedCheck_3385_ == 0)
{
v___x_3366_ = v_a_3362_;
v_isShared_3367_ = v_isSharedCheck_3385_;
goto v_resetjp_3365_;
}
else
{
lean_inc(v_snd_3364_);
lean_inc(v_fst_3363_);
lean_dec(v_a_3362_);
v___x_3366_ = lean_box(0);
v_isShared_3367_ = v_isSharedCheck_3385_;
goto v_resetjp_3365_;
}
v_resetjp_3365_:
{
lean_object* v___x_3368_; lean_object* v___x_3370_; 
v___x_3368_ = lean_obj_once(&l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractiveAux_go___closed__4, &l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractiveAux_go___closed__4_once, _init_l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractiveAux_go___closed__4);
if (v_isShared_3367_ == 0)
{
lean_ctor_set_tag(v___x_3366_, 4);
lean_ctor_set(v___x_3366_, 1, v_fst_3363_);
lean_ctor_set(v___x_3366_, 0, v___x_3368_);
v___x_3370_ = v___x_3366_;
goto v_reusejp_3369_;
}
else
{
lean_object* v_reuseFailAlloc_3384_; 
v_reuseFailAlloc_3384_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3384_, 0, v___x_3368_);
lean_ctor_set(v_reuseFailAlloc_3384_, 1, v_fst_3363_);
v___x_3370_ = v_reuseFailAlloc_3384_;
goto v_reusejp_3369_;
}
v_reusejp_3369_:
{
if (lean_obj_tag(v_result_x3f_3356_) == 0)
{
v___y_3338_ = v_startTime_3357_;
v___y_3339_ = v_snd_3364_;
v___y_3340_ = v___x_3360_;
v___y_3341_ = v_children_3353_;
v___y_3342_ = v_ctx_3350_;
v___y_3343_ = v_stopTime_3358_;
v___y_3344_ = v_collapsed_3359_;
v___y_3345_ = v_cls_3355_;
v___y_3346_ = v___x_3370_;
goto v___jp_3337_;
}
else
{
lean_object* v_val_3371_; lean_object* v___x_3373_; uint8_t v_isShared_3374_; uint8_t v_isSharedCheck_3383_; 
v_val_3371_ = lean_ctor_get(v_result_x3f_3356_, 0);
v_isSharedCheck_3383_ = !lean_is_exclusive(v_result_x3f_3356_);
if (v_isSharedCheck_3383_ == 0)
{
v___x_3373_ = v_result_x3f_3356_;
v_isShared_3374_ = v_isSharedCheck_3383_;
goto v_resetjp_3372_;
}
else
{
lean_inc(v_val_3371_);
lean_dec(v_result_x3f_3356_);
v___x_3373_ = lean_box(0);
v_isShared_3374_ = v_isSharedCheck_3383_;
goto v_resetjp_3372_;
}
v_resetjp_3372_:
{
uint8_t v___x_3375_; lean_object* v___x_3376_; lean_object* v___x_3378_; 
v___x_3375_ = lean_unbox(v_val_3371_);
lean_dec(v_val_3371_);
v___x_3376_ = l_Lean_TraceResult_toEmoji(v___x_3375_);
if (v_isShared_3374_ == 0)
{
lean_ctor_set_tag(v___x_3373_, 3);
lean_ctor_set(v___x_3373_, 0, v___x_3376_);
v___x_3378_ = v___x_3373_;
goto v_reusejp_3377_;
}
else
{
lean_object* v_reuseFailAlloc_3382_; 
v_reuseFailAlloc_3382_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3382_, 0, v___x_3376_);
v___x_3378_ = v_reuseFailAlloc_3382_;
goto v_reusejp_3377_;
}
v_reusejp_3377_:
{
lean_object* v___x_3379_; lean_object* v___x_3380_; lean_object* v___x_3381_; 
v___x_3379_ = ((lean_object*)(l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractiveAux_go___closed__6));
v___x_3380_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3380_, 0, v___x_3378_);
lean_ctor_set(v___x_3380_, 1, v___x_3379_);
v___x_3381_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3381_, 0, v___x_3380_);
lean_ctor_set(v___x_3381_, 1, v___x_3370_);
v___y_3338_ = v_startTime_3357_;
v___y_3339_ = v_snd_3364_;
v___y_3340_ = v___x_3360_;
v___y_3341_ = v_children_3353_;
v___y_3342_ = v_ctx_3350_;
v___y_3343_ = v_stopTime_3358_;
v___y_3344_ = v_collapsed_3359_;
v___y_3345_ = v_cls_3355_;
v___y_3346_ = v___x_3381_;
goto v___jp_3337_;
}
}
}
}
}
}
else
{
lean_dec(v_result_x3f_3356_);
lean_dec(v_cls_3355_);
lean_dec_ref(v_children_3353_);
lean_dec(v_ctx_3350_);
lean_dec_ref(v_nCtx_3204_);
return v___x_3361_;
}
}
else
{
size_t v_sz_3386_; lean_object* v___x_3387_; lean_object* v___x_3388_; lean_object* v___x_3389_; lean_object* v___x_3390_; lean_object* v___x_5625__overap_3391_; lean_object* v___x_3392_; 
lean_dec(v_result_x3f_3356_);
lean_dec(v_cls_3355_);
lean_dec_ref(v_header_3352_);
v_sz_3386_ = lean_array_size(v_children_3353_);
v___x_3387_ = l_unsafeCast___redArg(v_children_3353_);
lean_dec_ref(v_children_3353_);
v___x_3388_ = lean_box_usize(v_sz_3386_);
v___x_3389_ = ((lean_object*)(l_Lean_Widget_TaggedText_mapM___at___00Lean_Widget_instRpcEncodableMsgEmbed_enc_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__spec__0___redArg___boxed__const__1));
v___x_3390_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractiveAux_go_spec__3___boxed), 7, 5);
lean_closure_set(v___x_3390_, 0, v_nCtx_3204_);
lean_closure_set(v___x_3390_, 1, v_ctx_3350_);
lean_closure_set(v___x_3390_, 2, v___x_3388_);
lean_closure_set(v___x_3390_, 3, v___x_3389_);
lean_closure_set(v___x_3390_, 4, v___x_3387_);
v___x_5625__overap_3391_ = l_unsafeCast___redArg(v___x_3390_);
lean_dec_ref(v___x_3390_);
v___x_3392_ = lean_apply_2(v___x_5625__overap_3391_, v___y_3354_, lean_box(0));
if (lean_obj_tag(v___x_3392_) == 0)
{
lean_object* v_a_3393_; lean_object* v___x_3395_; uint8_t v_isShared_3396_; uint8_t v_isSharedCheck_3411_; 
v_a_3393_ = lean_ctor_get(v___x_3392_, 0);
v_isSharedCheck_3411_ = !lean_is_exclusive(v___x_3392_);
if (v_isSharedCheck_3411_ == 0)
{
v___x_3395_ = v___x_3392_;
v_isShared_3396_ = v_isSharedCheck_3411_;
goto v_resetjp_3394_;
}
else
{
lean_inc(v_a_3393_);
lean_dec(v___x_3392_);
v___x_3395_ = lean_box(0);
v_isShared_3396_ = v_isSharedCheck_3411_;
goto v_resetjp_3394_;
}
v_resetjp_3394_:
{
lean_object* v_fst_3397_; lean_object* v_snd_3398_; lean_object* v___x_3400_; uint8_t v_isShared_3401_; uint8_t v_isSharedCheck_3410_; 
v_fst_3397_ = lean_ctor_get(v_a_3393_, 0);
v_snd_3398_ = lean_ctor_get(v_a_3393_, 1);
v_isSharedCheck_3410_ = !lean_is_exclusive(v_a_3393_);
if (v_isSharedCheck_3410_ == 0)
{
v___x_3400_ = v_a_3393_;
v_isShared_3401_ = v_isSharedCheck_3410_;
goto v_resetjp_3399_;
}
else
{
lean_inc(v_snd_3398_);
lean_inc(v_fst_3397_);
lean_dec(v_a_3393_);
v___x_3400_ = lean_box(0);
v_isShared_3401_ = v_isSharedCheck_3410_;
goto v_resetjp_3399_;
}
v_resetjp_3399_:
{
lean_object* v___x_3402_; lean_object* v___x_3403_; lean_object* v___x_3405_; 
v___x_3402_ = lean_array_to_list(v_fst_3397_);
v___x_3403_ = l_Std_Format_join(v___x_3402_);
if (v_isShared_3401_ == 0)
{
lean_ctor_set(v___x_3400_, 0, v___x_3403_);
v___x_3405_ = v___x_3400_;
goto v_reusejp_3404_;
}
else
{
lean_object* v_reuseFailAlloc_3409_; 
v_reuseFailAlloc_3409_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3409_, 0, v___x_3403_);
lean_ctor_set(v_reuseFailAlloc_3409_, 1, v_snd_3398_);
v___x_3405_ = v_reuseFailAlloc_3409_;
goto v_reusejp_3404_;
}
v_reusejp_3404_:
{
lean_object* v___x_3407_; 
if (v_isShared_3396_ == 0)
{
lean_ctor_set(v___x_3395_, 0, v___x_3405_);
v___x_3407_ = v___x_3395_;
goto v_reusejp_3406_;
}
else
{
lean_object* v_reuseFailAlloc_3408_; 
v_reuseFailAlloc_3408_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3408_, 0, v___x_3405_);
v___x_3407_ = v_reuseFailAlloc_3408_;
goto v_reusejp_3406_;
}
v_reusejp_3406_:
{
return v___x_3407_;
}
}
}
}
}
else
{
lean_object* v_a_3412_; lean_object* v___x_3414_; uint8_t v_isShared_3415_; uint8_t v_isSharedCheck_3419_; 
v_a_3412_ = lean_ctor_get(v___x_3392_, 0);
v_isSharedCheck_3419_ = !lean_is_exclusive(v___x_3392_);
if (v_isSharedCheck_3419_ == 0)
{
v___x_3414_ = v___x_3392_;
v_isShared_3415_ = v_isSharedCheck_3419_;
goto v_resetjp_3413_;
}
else
{
lean_inc(v_a_3412_);
lean_dec(v___x_3392_);
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
}
v___jp_3420_:
{
lean_object* v___x_3425_; 
v___x_3425_ = l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractiveAux_go(v_nCtx_3204_, v_ctx_3421_, v_d_3423_, v___y_3424_);
if (lean_obj_tag(v___x_3425_) == 0)
{
lean_object* v_a_3426_; lean_object* v___x_3428_; uint8_t v_isShared_3429_; uint8_t v_isSharedCheck_3444_; 
v_a_3426_ = lean_ctor_get(v___x_3425_, 0);
v_isSharedCheck_3444_ = !lean_is_exclusive(v___x_3425_);
if (v_isSharedCheck_3444_ == 0)
{
v___x_3428_ = v___x_3425_;
v_isShared_3429_ = v_isSharedCheck_3444_;
goto v_resetjp_3427_;
}
else
{
lean_inc(v_a_3426_);
lean_dec(v___x_3425_);
v___x_3428_ = lean_box(0);
v_isShared_3429_ = v_isSharedCheck_3444_;
goto v_resetjp_3427_;
}
v_resetjp_3427_:
{
lean_object* v_fst_3430_; lean_object* v_snd_3431_; lean_object* v___x_3433_; uint8_t v_isShared_3434_; uint8_t v_isSharedCheck_3443_; 
v_fst_3430_ = lean_ctor_get(v_a_3426_, 0);
v_snd_3431_ = lean_ctor_get(v_a_3426_, 1);
v_isSharedCheck_3443_ = !lean_is_exclusive(v_a_3426_);
if (v_isSharedCheck_3443_ == 0)
{
v___x_3433_ = v_a_3426_;
v_isShared_3434_ = v_isSharedCheck_3443_;
goto v_resetjp_3432_;
}
else
{
lean_inc(v_snd_3431_);
lean_inc(v_fst_3430_);
lean_dec(v_a_3426_);
v___x_3433_ = lean_box(0);
v_isShared_3434_ = v_isSharedCheck_3443_;
goto v_resetjp_3432_;
}
v_resetjp_3432_:
{
lean_object* v___x_3435_; lean_object* v___x_3436_; lean_object* v___x_3438_; 
v___x_3435_ = lean_nat_to_int(v_n_3422_);
v___x_3436_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3436_, 0, v___x_3435_);
lean_ctor_set(v___x_3436_, 1, v_fst_3430_);
if (v_isShared_3434_ == 0)
{
lean_ctor_set(v___x_3433_, 0, v___x_3436_);
v___x_3438_ = v___x_3433_;
goto v_reusejp_3437_;
}
else
{
lean_object* v_reuseFailAlloc_3442_; 
v_reuseFailAlloc_3442_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3442_, 0, v___x_3436_);
lean_ctor_set(v_reuseFailAlloc_3442_, 1, v_snd_3431_);
v___x_3438_ = v_reuseFailAlloc_3442_;
goto v_reusejp_3437_;
}
v_reusejp_3437_:
{
lean_object* v___x_3440_; 
if (v_isShared_3429_ == 0)
{
lean_ctor_set(v___x_3428_, 0, v___x_3438_);
v___x_3440_ = v___x_3428_;
goto v_reusejp_3439_;
}
else
{
lean_object* v_reuseFailAlloc_3441_; 
v_reuseFailAlloc_3441_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3441_, 0, v___x_3438_);
v___x_3440_ = v_reuseFailAlloc_3441_;
goto v_reusejp_3439_;
}
v_reusejp_3439_:
{
return v___x_3440_;
}
}
}
}
}
else
{
lean_dec(v_n_3422_);
return v___x_3425_;
}
}
v___jp_3445_:
{
lean_object* v___x_3450_; 
v___x_3450_ = l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractiveAux_go(v_nCtx_3204_, v_ctx_3446_, v_d_3448_, v___y_3449_);
if (lean_obj_tag(v___x_3450_) == 0)
{
lean_object* v_a_3451_; lean_object* v_fst_3452_; lean_object* v_snd_3453_; lean_object* v___x_3455_; uint8_t v_isShared_3456_; uint8_t v_isSharedCheck_3488_; 
v_a_3451_ = lean_ctor_get(v___x_3450_, 0);
lean_inc(v_a_3451_);
lean_dec_ref_known(v___x_3450_, 1);
v_fst_3452_ = lean_ctor_get(v_a_3451_, 0);
v_snd_3453_ = lean_ctor_get(v_a_3451_, 1);
v_isSharedCheck_3488_ = !lean_is_exclusive(v_a_3451_);
if (v_isSharedCheck_3488_ == 0)
{
v___x_3455_ = v_a_3451_;
v_isShared_3456_ = v_isSharedCheck_3488_;
goto v_resetjp_3454_;
}
else
{
lean_inc(v_snd_3453_);
lean_inc(v_fst_3452_);
lean_dec(v_a_3451_);
v___x_3455_ = lean_box(0);
v_isShared_3456_ = v_isSharedCheck_3488_;
goto v_resetjp_3454_;
}
v_resetjp_3454_:
{
lean_object* v___x_3458_; 
if (v_isShared_3456_ == 0)
{
lean_ctor_set_tag(v___x_3455_, 2);
lean_ctor_set(v___x_3455_, 1, v_fst_3452_);
lean_ctor_set(v___x_3455_, 0, v_wi_3447_);
v___x_3458_ = v___x_3455_;
goto v_reusejp_3457_;
}
else
{
lean_object* v_reuseFailAlloc_3487_; 
v_reuseFailAlloc_3487_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3487_, 0, v_wi_3447_);
lean_ctor_set(v_reuseFailAlloc_3487_, 1, v_fst_3452_);
v___x_3458_ = v_reuseFailAlloc_3487_;
goto v_reusejp_3457_;
}
v_reusejp_3457_:
{
lean_object* v___x_3459_; 
v___x_3459_ = l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractiveAux_pushEmbed(v___x_3458_, v_snd_3453_);
if (lean_obj_tag(v___x_3459_) == 0)
{
lean_object* v_a_3460_; lean_object* v___x_3462_; uint8_t v_isShared_3463_; uint8_t v_isSharedCheck_3478_; 
v_a_3460_ = lean_ctor_get(v___x_3459_, 0);
v_isSharedCheck_3478_ = !lean_is_exclusive(v___x_3459_);
if (v_isSharedCheck_3478_ == 0)
{
v___x_3462_ = v___x_3459_;
v_isShared_3463_ = v_isSharedCheck_3478_;
goto v_resetjp_3461_;
}
else
{
lean_inc(v_a_3460_);
lean_dec(v___x_3459_);
v___x_3462_ = lean_box(0);
v_isShared_3463_ = v_isSharedCheck_3478_;
goto v_resetjp_3461_;
}
v_resetjp_3461_:
{
lean_object* v_fst_3464_; lean_object* v_snd_3465_; lean_object* v___x_3467_; uint8_t v_isShared_3468_; uint8_t v_isSharedCheck_3477_; 
v_fst_3464_ = lean_ctor_get(v_a_3460_, 0);
v_snd_3465_ = lean_ctor_get(v_a_3460_, 1);
v_isSharedCheck_3477_ = !lean_is_exclusive(v_a_3460_);
if (v_isSharedCheck_3477_ == 0)
{
v___x_3467_ = v_a_3460_;
v_isShared_3468_ = v_isSharedCheck_3477_;
goto v_resetjp_3466_;
}
else
{
lean_inc(v_snd_3465_);
lean_inc(v_fst_3464_);
lean_dec(v_a_3460_);
v___x_3467_ = lean_box(0);
v_isShared_3468_ = v_isSharedCheck_3477_;
goto v_resetjp_3466_;
}
v_resetjp_3466_:
{
lean_object* v___x_3469_; lean_object* v___x_3470_; lean_object* v___x_3472_; 
v___x_3469_ = lean_box(0);
v___x_3470_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3470_, 0, v_fst_3464_);
lean_ctor_set(v___x_3470_, 1, v___x_3469_);
if (v_isShared_3468_ == 0)
{
lean_ctor_set(v___x_3467_, 0, v___x_3470_);
v___x_3472_ = v___x_3467_;
goto v_reusejp_3471_;
}
else
{
lean_object* v_reuseFailAlloc_3476_; 
v_reuseFailAlloc_3476_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3476_, 0, v___x_3470_);
lean_ctor_set(v_reuseFailAlloc_3476_, 1, v_snd_3465_);
v___x_3472_ = v_reuseFailAlloc_3476_;
goto v_reusejp_3471_;
}
v_reusejp_3471_:
{
lean_object* v___x_3474_; 
if (v_isShared_3463_ == 0)
{
lean_ctor_set(v___x_3462_, 0, v___x_3472_);
v___x_3474_ = v___x_3462_;
goto v_reusejp_3473_;
}
else
{
lean_object* v_reuseFailAlloc_3475_; 
v_reuseFailAlloc_3475_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3475_, 0, v___x_3472_);
v___x_3474_ = v_reuseFailAlloc_3475_;
goto v_reusejp_3473_;
}
v_reusejp_3473_:
{
return v___x_3474_;
}
}
}
}
}
else
{
lean_object* v_a_3479_; lean_object* v___x_3481_; uint8_t v_isShared_3482_; uint8_t v_isSharedCheck_3486_; 
v_a_3479_ = lean_ctor_get(v___x_3459_, 0);
v_isSharedCheck_3486_ = !lean_is_exclusive(v___x_3459_);
if (v_isSharedCheck_3486_ == 0)
{
v___x_3481_ = v___x_3459_;
v_isShared_3482_ = v_isSharedCheck_3486_;
goto v_resetjp_3480_;
}
else
{
lean_inc(v_a_3479_);
lean_dec(v___x_3459_);
v___x_3481_ = lean_box(0);
v_isShared_3482_ = v_isSharedCheck_3486_;
goto v_resetjp_3480_;
}
v_resetjp_3480_:
{
lean_object* v___x_3484_; 
if (v_isShared_3482_ == 0)
{
v___x_3484_ = v___x_3481_;
goto v_reusejp_3483_;
}
else
{
lean_object* v_reuseFailAlloc_3485_; 
v_reuseFailAlloc_3485_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3485_, 0, v_a_3479_);
v___x_3484_ = v_reuseFailAlloc_3485_;
goto v_reusejp_3483_;
}
v_reusejp_3483_:
{
return v___x_3484_;
}
}
}
}
}
}
else
{
lean_dec_ref(v_wi_3447_);
return v___x_3450_;
}
}
v___jp_3489_:
{
lean_object* v___x_3493_; 
v___x_3493_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3493_, 0, v_ctx_3490_);
v_a_3205_ = v___x_3493_;
v_a_3206_ = v_d_3491_;
v_a_3207_ = v___y_3492_;
goto _start;
}
v___jp_3495_:
{
lean_object* v___x_3500_; 
lean_inc(v_ctx_3496_);
lean_inc_ref(v_nCtx_3204_);
v___x_3500_ = l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractiveAux_go(v_nCtx_3204_, v_ctx_3496_, v_d_u2081_3497_, v___y_3499_);
if (lean_obj_tag(v___x_3500_) == 0)
{
lean_object* v_a_3501_; lean_object* v_fst_3502_; lean_object* v_snd_3503_; lean_object* v___x_3505_; uint8_t v_isShared_3506_; uint8_t v_isSharedCheck_3528_; 
v_a_3501_ = lean_ctor_get(v___x_3500_, 0);
lean_inc(v_a_3501_);
lean_dec_ref_known(v___x_3500_, 1);
v_fst_3502_ = lean_ctor_get(v_a_3501_, 0);
v_snd_3503_ = lean_ctor_get(v_a_3501_, 1);
v_isSharedCheck_3528_ = !lean_is_exclusive(v_a_3501_);
if (v_isSharedCheck_3528_ == 0)
{
v___x_3505_ = v_a_3501_;
v_isShared_3506_ = v_isSharedCheck_3528_;
goto v_resetjp_3504_;
}
else
{
lean_inc(v_snd_3503_);
lean_inc(v_fst_3502_);
lean_dec(v_a_3501_);
v___x_3505_ = lean_box(0);
v_isShared_3506_ = v_isSharedCheck_3528_;
goto v_resetjp_3504_;
}
v_resetjp_3504_:
{
lean_object* v___x_3507_; 
v___x_3507_ = l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractiveAux_go(v_nCtx_3204_, v_ctx_3496_, v_d_u2082_3498_, v_snd_3503_);
if (lean_obj_tag(v___x_3507_) == 0)
{
lean_object* v_a_3508_; lean_object* v___x_3510_; uint8_t v_isShared_3511_; uint8_t v_isSharedCheck_3527_; 
v_a_3508_ = lean_ctor_get(v___x_3507_, 0);
v_isSharedCheck_3527_ = !lean_is_exclusive(v___x_3507_);
if (v_isSharedCheck_3527_ == 0)
{
v___x_3510_ = v___x_3507_;
v_isShared_3511_ = v_isSharedCheck_3527_;
goto v_resetjp_3509_;
}
else
{
lean_inc(v_a_3508_);
lean_dec(v___x_3507_);
v___x_3510_ = lean_box(0);
v_isShared_3511_ = v_isSharedCheck_3527_;
goto v_resetjp_3509_;
}
v_resetjp_3509_:
{
lean_object* v_fst_3512_; lean_object* v_snd_3513_; lean_object* v___x_3515_; uint8_t v_isShared_3516_; uint8_t v_isSharedCheck_3526_; 
v_fst_3512_ = lean_ctor_get(v_a_3508_, 0);
v_snd_3513_ = lean_ctor_get(v_a_3508_, 1);
v_isSharedCheck_3526_ = !lean_is_exclusive(v_a_3508_);
if (v_isSharedCheck_3526_ == 0)
{
v___x_3515_ = v_a_3508_;
v_isShared_3516_ = v_isSharedCheck_3526_;
goto v_resetjp_3514_;
}
else
{
lean_inc(v_snd_3513_);
lean_inc(v_fst_3512_);
lean_dec(v_a_3508_);
v___x_3515_ = lean_box(0);
v_isShared_3516_ = v_isSharedCheck_3526_;
goto v_resetjp_3514_;
}
v_resetjp_3514_:
{
lean_object* v___x_3518_; 
if (v_isShared_3506_ == 0)
{
lean_ctor_set_tag(v___x_3505_, 5);
lean_ctor_set(v___x_3505_, 1, v_fst_3512_);
v___x_3518_ = v___x_3505_;
goto v_reusejp_3517_;
}
else
{
lean_object* v_reuseFailAlloc_3525_; 
v_reuseFailAlloc_3525_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3525_, 0, v_fst_3502_);
lean_ctor_set(v_reuseFailAlloc_3525_, 1, v_fst_3512_);
v___x_3518_ = v_reuseFailAlloc_3525_;
goto v_reusejp_3517_;
}
v_reusejp_3517_:
{
lean_object* v___x_3520_; 
if (v_isShared_3516_ == 0)
{
lean_ctor_set(v___x_3515_, 0, v___x_3518_);
v___x_3520_ = v___x_3515_;
goto v_reusejp_3519_;
}
else
{
lean_object* v_reuseFailAlloc_3524_; 
v_reuseFailAlloc_3524_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3524_, 0, v___x_3518_);
lean_ctor_set(v_reuseFailAlloc_3524_, 1, v_snd_3513_);
v___x_3520_ = v_reuseFailAlloc_3524_;
goto v_reusejp_3519_;
}
v_reusejp_3519_:
{
lean_object* v___x_3522_; 
if (v_isShared_3511_ == 0)
{
lean_ctor_set(v___x_3510_, 0, v___x_3520_);
v___x_3522_ = v___x_3510_;
goto v_reusejp_3521_;
}
else
{
lean_object* v_reuseFailAlloc_3523_; 
v_reuseFailAlloc_3523_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3523_, 0, v___x_3520_);
v___x_3522_ = v_reuseFailAlloc_3523_;
goto v_reusejp_3521_;
}
v_reusejp_3521_:
{
return v___x_3522_;
}
}
}
}
}
}
else
{
lean_del_object(v___x_3505_);
lean_dec(v_fst_3502_);
return v___x_3507_;
}
}
}
else
{
lean_dec_ref(v_d_u2082_3498_);
lean_dec(v_ctx_3496_);
lean_dec_ref(v_nCtx_3204_);
return v___x_3500_;
}
}
v___jp_3529_:
{
lean_object* v___x_3533_; 
v___x_3533_ = l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractiveAux_go(v_nCtx_3204_, v_ctx_3530_, v_d_3531_, v___y_3532_);
if (lean_obj_tag(v___x_3533_) == 0)
{
lean_object* v_a_3534_; lean_object* v___x_3536_; uint8_t v_isShared_3537_; uint8_t v_isSharedCheck_3552_; 
v_a_3534_ = lean_ctor_get(v___x_3533_, 0);
v_isSharedCheck_3552_ = !lean_is_exclusive(v___x_3533_);
if (v_isSharedCheck_3552_ == 0)
{
v___x_3536_ = v___x_3533_;
v_isShared_3537_ = v_isSharedCheck_3552_;
goto v_resetjp_3535_;
}
else
{
lean_inc(v_a_3534_);
lean_dec(v___x_3533_);
v___x_3536_ = lean_box(0);
v_isShared_3537_ = v_isSharedCheck_3552_;
goto v_resetjp_3535_;
}
v_resetjp_3535_:
{
lean_object* v_fst_3538_; lean_object* v_snd_3539_; lean_object* v___x_3541_; uint8_t v_isShared_3542_; uint8_t v_isSharedCheck_3551_; 
v_fst_3538_ = lean_ctor_get(v_a_3534_, 0);
v_snd_3539_ = lean_ctor_get(v_a_3534_, 1);
v_isSharedCheck_3551_ = !lean_is_exclusive(v_a_3534_);
if (v_isSharedCheck_3551_ == 0)
{
v___x_3541_ = v_a_3534_;
v_isShared_3542_ = v_isSharedCheck_3551_;
goto v_resetjp_3540_;
}
else
{
lean_inc(v_snd_3539_);
lean_inc(v_fst_3538_);
lean_dec(v_a_3534_);
v___x_3541_ = lean_box(0);
v_isShared_3542_ = v_isSharedCheck_3551_;
goto v_resetjp_3540_;
}
v_resetjp_3540_:
{
uint8_t v___x_3543_; lean_object* v___x_3544_; lean_object* v___x_3546_; 
v___x_3543_ = 0;
v___x_3544_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3544_, 0, v_fst_3538_);
lean_ctor_set_uint8(v___x_3544_, sizeof(void*)*1, v___x_3543_);
if (v_isShared_3542_ == 0)
{
lean_ctor_set(v___x_3541_, 0, v___x_3544_);
v___x_3546_ = v___x_3541_;
goto v_reusejp_3545_;
}
else
{
lean_object* v_reuseFailAlloc_3550_; 
v_reuseFailAlloc_3550_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3550_, 0, v___x_3544_);
lean_ctor_set(v_reuseFailAlloc_3550_, 1, v_snd_3539_);
v___x_3546_ = v_reuseFailAlloc_3550_;
goto v_reusejp_3545_;
}
v_reusejp_3545_:
{
lean_object* v___x_3548_; 
if (v_isShared_3537_ == 0)
{
lean_ctor_set(v___x_3536_, 0, v___x_3546_);
v___x_3548_ = v___x_3536_;
goto v_reusejp_3547_;
}
else
{
lean_object* v_reuseFailAlloc_3549_; 
v_reuseFailAlloc_3549_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3549_, 0, v___x_3546_);
v___x_3548_ = v_reuseFailAlloc_3549_;
goto v_reusejp_3547_;
}
v_reusejp_3547_:
{
return v___x_3548_;
}
}
}
}
}
else
{
return v___x_3533_;
}
}
v___jp_3554_:
{
lean_object* v___x_3559_; lean_object* v___x_3560_; 
v___x_3559_ = lean_apply_2(v___y_3555_, v___y_3558_, lean_box(0));
v___x_3560_ = l___private_Init_Dynamic_0__Dynamic_get_x3fImpl___redArg(v___x_3559_, v___x_3553_);
lean_dec(v___x_3559_);
if (lean_obj_tag(v___x_3560_) == 1)
{
lean_object* v_val_3561_; 
v_val_3561_ = lean_ctor_get(v___x_3560_, 0);
lean_inc(v_val_3561_);
lean_dec_ref_known(v___x_3560_, 1);
v_a_3205_ = v___y_3556_;
v_a_3206_ = v_val_3561_;
v_a_3207_ = v___y_3557_;
goto _start;
}
else
{
lean_object* v___x_3563_; lean_object* v___x_3564_; 
lean_dec(v___x_3560_);
lean_dec_ref(v___y_3557_);
lean_dec(v___y_3556_);
lean_dec_ref(v_nCtx_3204_);
v___x_3563_ = lean_obj_once(&l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractiveAux_go___closed__8, &l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractiveAux_go___closed__8_once, _init_l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractiveAux_go___closed__8);
v___x_3564_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3564_, 0, v___x_3563_);
return v___x_3564_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractiveAux_go_spec__3(lean_object* v_nCtx_3694_, lean_object* v_ctx_3695_, size_t v_sz_3696_, size_t v_i_3697_, lean_object* v_bs_3698_, lean_object* v___y_3699_){
_start:
{
uint8_t v___x_3701_; 
v___x_3701_ = lean_usize_dec_lt(v_i_3697_, v_sz_3696_);
if (v___x_3701_ == 0)
{
lean_object* v___x_3702_; lean_object* v___x_3703_; lean_object* v___x_3704_; 
lean_dec(v_ctx_3695_);
lean_dec_ref(v_nCtx_3694_);
v___x_3702_ = l_unsafeCast___redArg(v_bs_3698_);
lean_dec_ref(v_bs_3698_);
v___x_3703_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3703_, 0, v___x_3702_);
lean_ctor_set(v___x_3703_, 1, v___y_3699_);
v___x_3704_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3704_, 0, v___x_3703_);
return v___x_3704_;
}
else
{
lean_object* v_v_3705_; lean_object* v___x_3706_; lean_object* v_bs_x27_3707_; lean_object* v___x_3708_; lean_object* v___x_3709_; 
v_v_3705_ = lean_array_uget(v_bs_3698_, v_i_3697_);
v___x_3706_ = lean_unsigned_to_nat(0u);
v_bs_x27_3707_ = lean_array_uset(v_bs_3698_, v_i_3697_, v___x_3706_);
v___x_3708_ = l_unsafeCast___redArg(v_v_3705_);
lean_dec(v_v_3705_);
lean_inc(v_ctx_3695_);
lean_inc_ref(v_nCtx_3694_);
v___x_3709_ = l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractiveAux_go(v_nCtx_3694_, v_ctx_3695_, v___x_3708_, v___y_3699_);
if (lean_obj_tag(v___x_3709_) == 0)
{
lean_object* v_a_3710_; lean_object* v_fst_3711_; lean_object* v_snd_3712_; size_t v___x_3713_; size_t v___x_3714_; lean_object* v___x_3715_; lean_object* v___x_3716_; 
v_a_3710_ = lean_ctor_get(v___x_3709_, 0);
lean_inc(v_a_3710_);
lean_dec_ref_known(v___x_3709_, 1);
v_fst_3711_ = lean_ctor_get(v_a_3710_, 0);
lean_inc(v_fst_3711_);
v_snd_3712_ = lean_ctor_get(v_a_3710_, 1);
lean_inc(v_snd_3712_);
lean_dec(v_a_3710_);
v___x_3713_ = ((size_t)1ULL);
v___x_3714_ = lean_usize_add(v_i_3697_, v___x_3713_);
v___x_3715_ = l_unsafeCast___redArg(v_fst_3711_);
lean_dec(v_fst_3711_);
v___x_3716_ = lean_array_uset(v_bs_x27_3707_, v_i_3697_, v___x_3715_);
v_i_3697_ = v___x_3714_;
v_bs_3698_ = v___x_3716_;
v___y_3699_ = v_snd_3712_;
goto _start;
}
else
{
lean_object* v_a_3718_; lean_object* v___x_3720_; uint8_t v_isShared_3721_; uint8_t v_isSharedCheck_3725_; 
lean_dec_ref(v_bs_x27_3707_);
lean_dec(v_ctx_3695_);
lean_dec_ref(v_nCtx_3694_);
v_a_3718_ = lean_ctor_get(v___x_3709_, 0);
v_isSharedCheck_3725_ = !lean_is_exclusive(v___x_3709_);
if (v_isSharedCheck_3725_ == 0)
{
v___x_3720_ = v___x_3709_;
v_isShared_3721_ = v_isSharedCheck_3725_;
goto v_resetjp_3719_;
}
else
{
lean_inc(v_a_3718_);
lean_dec(v___x_3709_);
v___x_3720_ = lean_box(0);
v_isShared_3721_ = v_isSharedCheck_3725_;
goto v_resetjp_3719_;
}
v_resetjp_3719_:
{
lean_object* v___x_3723_; 
if (v_isShared_3721_ == 0)
{
v___x_3723_ = v___x_3720_;
goto v_reusejp_3722_;
}
else
{
lean_object* v_reuseFailAlloc_3724_; 
v_reuseFailAlloc_3724_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3724_, 0, v_a_3718_);
v___x_3723_ = v_reuseFailAlloc_3724_;
goto v_reusejp_3722_;
}
v_reusejp_3722_:
{
return v___x_3723_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractiveAux_go___boxed(lean_object* v_nCtx_3726_, lean_object* v_a_3727_, lean_object* v_a_3728_, lean_object* v_a_3729_, lean_object* v_a_3730_){
_start:
{
lean_object* v_res_3731_; 
v_res_3731_ = l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractiveAux_go(v_nCtx_3726_, v_a_3727_, v_a_3728_, v_a_3729_);
return v_res_3731_;
}
}
static lean_object* _init_l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractiveAux___closed__0(void){
_start:
{
lean_object* v___x_3732_; lean_object* v___x_3733_; lean_object* v___x_3734_; 
v___x_3732_ = lean_box(0);
v___x_3733_ = lean_obj_once(&l_Lean_Widget_instInhabitedEmbedFmt_default___closed__1, &l_Lean_Widget_instInhabitedEmbedFmt_default___closed__1_once, _init_l_Lean_Widget_instInhabitedEmbedFmt_default___closed__1);
v___x_3734_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3734_, 0, v___x_3733_);
lean_ctor_set(v___x_3734_, 1, v___x_3732_);
return v___x_3734_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractiveAux(lean_object* v_msgData_3737_){
_start:
{
lean_object* v___x_3739_; lean_object* v___x_3740_; lean_object* v___x_3741_; lean_object* v___x_3742_; 
v___x_3739_ = lean_obj_once(&l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractiveAux___closed__0, &l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractiveAux___closed__0_once, _init_l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractiveAux___closed__0);
v___x_3740_ = lean_box(0);
v___x_3741_ = ((lean_object*)(l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractiveAux___closed__1));
v___x_3742_ = l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractiveAux_go(v___x_3739_, v___x_3740_, v_msgData_3737_, v___x_3741_);
return v___x_3742_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractiveAux___boxed(lean_object* v_msgData_3743_, lean_object* v_a_3744_){
_start:
{
lean_object* v_res_3745_; 
v_res_3745_ = l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractiveAux(v_msgData_3743_);
return v_res_3745_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractive_fmtToTT___lam__0(lean_object* v_g_3746_, lean_object* v___y_3747_, lean_object* v___y_3748_, lean_object* v___y_3749_, lean_object* v___y_3750_){
_start:
{
lean_object* v___x_3752_; 
v___x_3752_ = l_Lean_Widget_goalToInteractive(v_g_3746_, v___y_3747_, v___y_3748_, v___y_3749_, v___y_3750_);
if (lean_obj_tag(v___x_3752_) == 0)
{
lean_object* v_a_3753_; lean_object* v___x_3755_; uint8_t v_isShared_3756_; uint8_t v_isSharedCheck_3763_; 
v_a_3753_ = lean_ctor_get(v___x_3752_, 0);
v_isSharedCheck_3763_ = !lean_is_exclusive(v___x_3752_);
if (v_isSharedCheck_3763_ == 0)
{
v___x_3755_ = v___x_3752_;
v_isShared_3756_ = v_isSharedCheck_3763_;
goto v_resetjp_3754_;
}
else
{
lean_inc(v_a_3753_);
lean_dec(v___x_3752_);
v___x_3755_ = lean_box(0);
v_isShared_3756_ = v_isSharedCheck_3763_;
goto v_resetjp_3754_;
}
v_resetjp_3754_:
{
lean_object* v___x_3757_; lean_object* v___x_3758_; lean_object* v___x_3759_; lean_object* v___x_3761_; 
v___x_3757_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3757_, 0, v_a_3753_);
v___x_3758_ = lean_obj_once(&l_Lean_Widget_instInhabitedMsgEmbed_default___closed__0, &l_Lean_Widget_instInhabitedMsgEmbed_default___closed__0_once, _init_l_Lean_Widget_instInhabitedMsgEmbed_default___closed__0);
v___x_3759_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3759_, 0, v___x_3757_);
lean_ctor_set(v___x_3759_, 1, v___x_3758_);
if (v_isShared_3756_ == 0)
{
lean_ctor_set(v___x_3755_, 0, v___x_3759_);
v___x_3761_ = v___x_3755_;
goto v_reusejp_3760_;
}
else
{
lean_object* v_reuseFailAlloc_3762_; 
v_reuseFailAlloc_3762_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3762_, 0, v___x_3759_);
v___x_3761_ = v_reuseFailAlloc_3762_;
goto v_reusejp_3760_;
}
v_reusejp_3760_:
{
return v___x_3761_;
}
}
}
else
{
lean_object* v_a_3764_; lean_object* v___x_3766_; uint8_t v_isShared_3767_; uint8_t v_isSharedCheck_3771_; 
v_a_3764_ = lean_ctor_get(v___x_3752_, 0);
v_isSharedCheck_3771_ = !lean_is_exclusive(v___x_3752_);
if (v_isSharedCheck_3771_ == 0)
{
v___x_3766_ = v___x_3752_;
v_isShared_3767_ = v_isSharedCheck_3771_;
goto v_resetjp_3765_;
}
else
{
lean_inc(v_a_3764_);
lean_dec(v___x_3752_);
v___x_3766_ = lean_box(0);
v_isShared_3767_ = v_isSharedCheck_3771_;
goto v_resetjp_3765_;
}
v_resetjp_3765_:
{
lean_object* v___x_3769_; 
if (v_isShared_3767_ == 0)
{
v___x_3769_ = v___x_3766_;
goto v_reusejp_3768_;
}
else
{
lean_object* v_reuseFailAlloc_3770_; 
v_reuseFailAlloc_3770_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3770_, 0, v_a_3764_);
v___x_3769_ = v_reuseFailAlloc_3770_;
goto v_reusejp_3768_;
}
v_reusejp_3768_:
{
return v___x_3769_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractive_fmtToTT___lam__0___boxed(lean_object* v_g_3772_, lean_object* v___y_3773_, lean_object* v___y_3774_, lean_object* v___y_3775_, lean_object* v___y_3776_, lean_object* v___y_3777_){
_start:
{
lean_object* v_res_3778_; 
v_res_3778_ = l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractive_fmtToTT___lam__0(v_g_3772_, v___y_3773_, v___y_3774_, v___y_3775_, v___y_3776_);
lean_dec(v___y_3776_);
lean_dec_ref(v___y_3775_);
lean_dec(v___y_3774_);
lean_dec_ref(v___y_3773_);
return v_res_3778_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_TaggedText_rewriteM___at___00__private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractive_fmtToTT_spec__2_spec__2___boxed(lean_object* v_00_u03b1_3779_, lean_object* v_00_u03b2_3780_, lean_object* v_f_3781_, lean_object* v_sz_3782_, lean_object* v_i_3783_, lean_object* v_bs_3784_, lean_object* v___y_3785_){
_start:
{
size_t v_sz_boxed_3786_; size_t v_i_boxed_3787_; lean_object* v_res_3788_; 
v_sz_boxed_3786_ = lean_unbox_usize(v_sz_3782_);
lean_dec(v_sz_3782_);
v_i_boxed_3787_ = lean_unbox_usize(v_i_3783_);
lean_dec(v_i_3783_);
v_res_3788_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_TaggedText_rewriteM___at___00__private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractive_fmtToTT_spec__2_spec__2(v_00_u03b1_3779_, v_00_u03b2_3780_, v_f_3781_, v_sz_boxed_3786_, v_i_boxed_3787_, v_bs_3784_);
return v_res_3788_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_rewriteM___at___00__private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractive_fmtToTT_spec__2___redArg(lean_object* v_f_3789_, lean_object* v_x_3790_){
_start:
{
switch(lean_obj_tag(v_x_3790_))
{
case 0:
{
lean_object* v_a_3792_; lean_object* v___x_3794_; uint8_t v_isShared_3795_; uint8_t v_isSharedCheck_3800_; 
lean_dec_ref(v_f_3789_);
v_a_3792_ = lean_ctor_get(v_x_3790_, 0);
v_isSharedCheck_3800_ = !lean_is_exclusive(v_x_3790_);
if (v_isSharedCheck_3800_ == 0)
{
v___x_3794_ = v_x_3790_;
v_isShared_3795_ = v_isSharedCheck_3800_;
goto v_resetjp_3793_;
}
else
{
lean_inc(v_a_3792_);
lean_dec(v_x_3790_);
v___x_3794_ = lean_box(0);
v_isShared_3795_ = v_isSharedCheck_3800_;
goto v_resetjp_3793_;
}
v_resetjp_3793_:
{
lean_object* v___x_3797_; 
if (v_isShared_3795_ == 0)
{
v___x_3797_ = v___x_3794_;
goto v_reusejp_3796_;
}
else
{
lean_object* v_reuseFailAlloc_3799_; 
v_reuseFailAlloc_3799_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3799_, 0, v_a_3792_);
v___x_3797_ = v_reuseFailAlloc_3799_;
goto v_reusejp_3796_;
}
v_reusejp_3796_:
{
lean_object* v___x_3798_; 
v___x_3798_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3798_, 0, v___x_3797_);
return v___x_3798_;
}
}
}
case 1:
{
lean_object* v_a_3801_; lean_object* v___x_3803_; uint8_t v_isShared_3804_; uint8_t v_isSharedCheck_3831_; 
v_a_3801_ = lean_ctor_get(v_x_3790_, 0);
v_isSharedCheck_3831_ = !lean_is_exclusive(v_x_3790_);
if (v_isSharedCheck_3831_ == 0)
{
v___x_3803_ = v_x_3790_;
v_isShared_3804_ = v_isSharedCheck_3831_;
goto v_resetjp_3802_;
}
else
{
lean_inc(v_a_3801_);
lean_dec(v_x_3790_);
v___x_3803_ = lean_box(0);
v_isShared_3804_ = v_isSharedCheck_3831_;
goto v_resetjp_3802_;
}
v_resetjp_3802_:
{
size_t v_sz_3805_; lean_object* v___x_3806_; lean_object* v___x_3807_; lean_object* v___x_3808_; lean_object* v___x_3809_; lean_object* v___x_1526__overap_3810_; lean_object* v___x_3811_; 
v_sz_3805_ = lean_array_size(v_a_3801_);
v___x_3806_ = l_unsafeCast___redArg(v_a_3801_);
lean_dec_ref(v_a_3801_);
v___x_3807_ = lean_box_usize(v_sz_3805_);
v___x_3808_ = ((lean_object*)(l_Lean_Widget_TaggedText_mapM___at___00Lean_Widget_instRpcEncodableMsgEmbed_enc_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__spec__0___redArg___boxed__const__1));
v___x_3809_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_TaggedText_rewriteM___at___00__private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractive_fmtToTT_spec__2_spec__2___boxed), 7, 6);
lean_closure_set(v___x_3809_, 0, lean_box(0));
lean_closure_set(v___x_3809_, 1, lean_box(0));
lean_closure_set(v___x_3809_, 2, v_f_3789_);
lean_closure_set(v___x_3809_, 3, v___x_3807_);
lean_closure_set(v___x_3809_, 4, v___x_3808_);
lean_closure_set(v___x_3809_, 5, v___x_3806_);
v___x_1526__overap_3810_ = l_unsafeCast___redArg(v___x_3809_);
lean_dec_ref(v___x_3809_);
v___x_3811_ = lean_apply_1(v___x_1526__overap_3810_, lean_box(0));
if (lean_obj_tag(v___x_3811_) == 0)
{
lean_object* v_a_3812_; lean_object* v___x_3814_; uint8_t v_isShared_3815_; uint8_t v_isSharedCheck_3822_; 
v_a_3812_ = lean_ctor_get(v___x_3811_, 0);
v_isSharedCheck_3822_ = !lean_is_exclusive(v___x_3811_);
if (v_isSharedCheck_3822_ == 0)
{
v___x_3814_ = v___x_3811_;
v_isShared_3815_ = v_isSharedCheck_3822_;
goto v_resetjp_3813_;
}
else
{
lean_inc(v_a_3812_);
lean_dec(v___x_3811_);
v___x_3814_ = lean_box(0);
v_isShared_3815_ = v_isSharedCheck_3822_;
goto v_resetjp_3813_;
}
v_resetjp_3813_:
{
lean_object* v___x_3817_; 
if (v_isShared_3804_ == 0)
{
lean_ctor_set(v___x_3803_, 0, v_a_3812_);
v___x_3817_ = v___x_3803_;
goto v_reusejp_3816_;
}
else
{
lean_object* v_reuseFailAlloc_3821_; 
v_reuseFailAlloc_3821_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3821_, 0, v_a_3812_);
v___x_3817_ = v_reuseFailAlloc_3821_;
goto v_reusejp_3816_;
}
v_reusejp_3816_:
{
lean_object* v___x_3819_; 
if (v_isShared_3815_ == 0)
{
lean_ctor_set(v___x_3814_, 0, v___x_3817_);
v___x_3819_ = v___x_3814_;
goto v_reusejp_3818_;
}
else
{
lean_object* v_reuseFailAlloc_3820_; 
v_reuseFailAlloc_3820_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3820_, 0, v___x_3817_);
v___x_3819_ = v_reuseFailAlloc_3820_;
goto v_reusejp_3818_;
}
v_reusejp_3818_:
{
return v___x_3819_;
}
}
}
}
else
{
lean_object* v_a_3823_; lean_object* v___x_3825_; uint8_t v_isShared_3826_; uint8_t v_isSharedCheck_3830_; 
lean_del_object(v___x_3803_);
v_a_3823_ = lean_ctor_get(v___x_3811_, 0);
v_isSharedCheck_3830_ = !lean_is_exclusive(v___x_3811_);
if (v_isSharedCheck_3830_ == 0)
{
v___x_3825_ = v___x_3811_;
v_isShared_3826_ = v_isSharedCheck_3830_;
goto v_resetjp_3824_;
}
else
{
lean_inc(v_a_3823_);
lean_dec(v___x_3811_);
v___x_3825_ = lean_box(0);
v_isShared_3826_ = v_isSharedCheck_3830_;
goto v_resetjp_3824_;
}
v_resetjp_3824_:
{
lean_object* v___x_3828_; 
if (v_isShared_3826_ == 0)
{
v___x_3828_ = v___x_3825_;
goto v_reusejp_3827_;
}
else
{
lean_object* v_reuseFailAlloc_3829_; 
v_reuseFailAlloc_3829_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3829_, 0, v_a_3823_);
v___x_3828_ = v_reuseFailAlloc_3829_;
goto v_reusejp_3827_;
}
v_reusejp_3827_:
{
return v___x_3828_;
}
}
}
}
}
default: 
{
lean_object* v_a_3832_; lean_object* v_a_3833_; lean_object* v___x_3834_; 
v_a_3832_ = lean_ctor_get(v_x_3790_, 0);
lean_inc(v_a_3832_);
v_a_3833_ = lean_ctor_get(v_x_3790_, 1);
lean_inc_ref(v_a_3833_);
lean_dec_ref_known(v_x_3790_, 2);
v___x_3834_ = lean_apply_3(v_f_3789_, v_a_3832_, v_a_3833_, lean_box(0));
return v___x_3834_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_TaggedText_rewriteM___at___00__private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractive_fmtToTT_spec__2_spec__2___redArg(lean_object* v_f_3835_, size_t v_sz_3836_, size_t v_i_3837_, lean_object* v_bs_3838_){
_start:
{
uint8_t v___x_3840_; 
v___x_3840_ = lean_usize_dec_lt(v_i_3837_, v_sz_3836_);
if (v___x_3840_ == 0)
{
lean_object* v___x_3841_; lean_object* v___x_3842_; 
lean_dec_ref(v_f_3835_);
v___x_3841_ = l_unsafeCast___redArg(v_bs_3838_);
lean_dec_ref(v_bs_3838_);
v___x_3842_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3842_, 0, v___x_3841_);
return v___x_3842_;
}
else
{
lean_object* v_v_3843_; lean_object* v___x_3844_; lean_object* v_bs_x27_3845_; lean_object* v___x_3846_; lean_object* v___x_3847_; 
v_v_3843_ = lean_array_uget(v_bs_3838_, v_i_3837_);
v___x_3844_ = lean_unsigned_to_nat(0u);
v_bs_x27_3845_ = lean_array_uset(v_bs_3838_, v_i_3837_, v___x_3844_);
v___x_3846_ = l_unsafeCast___redArg(v_v_3843_);
lean_dec(v_v_3843_);
lean_inc_ref(v_f_3835_);
v___x_3847_ = l_Lean_Widget_TaggedText_rewriteM___at___00__private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractive_fmtToTT_spec__2___redArg(v_f_3835_, v___x_3846_);
if (lean_obj_tag(v___x_3847_) == 0)
{
lean_object* v_a_3848_; size_t v___x_3849_; size_t v___x_3850_; lean_object* v___x_3851_; lean_object* v___x_3852_; 
v_a_3848_ = lean_ctor_get(v___x_3847_, 0);
lean_inc(v_a_3848_);
lean_dec_ref_known(v___x_3847_, 1);
v___x_3849_ = ((size_t)1ULL);
v___x_3850_ = lean_usize_add(v_i_3837_, v___x_3849_);
v___x_3851_ = l_unsafeCast___redArg(v_a_3848_);
lean_dec(v_a_3848_);
v___x_3852_ = lean_array_uset(v_bs_x27_3845_, v_i_3837_, v___x_3851_);
v_i_3837_ = v___x_3850_;
v_bs_3838_ = v___x_3852_;
goto _start;
}
else
{
lean_object* v_a_3854_; lean_object* v___x_3856_; uint8_t v_isShared_3857_; uint8_t v_isSharedCheck_3861_; 
lean_dec_ref(v_bs_x27_3845_);
lean_dec_ref(v_f_3835_);
v_a_3854_ = lean_ctor_get(v___x_3847_, 0);
v_isSharedCheck_3861_ = !lean_is_exclusive(v___x_3847_);
if (v_isSharedCheck_3861_ == 0)
{
v___x_3856_ = v___x_3847_;
v_isShared_3857_ = v_isSharedCheck_3861_;
goto v_resetjp_3855_;
}
else
{
lean_inc(v_a_3854_);
lean_dec(v___x_3847_);
v___x_3856_ = lean_box(0);
v_isShared_3857_ = v_isSharedCheck_3861_;
goto v_resetjp_3855_;
}
v_resetjp_3855_:
{
lean_object* v___x_3859_; 
if (v_isShared_3857_ == 0)
{
v___x_3859_ = v___x_3856_;
goto v_reusejp_3858_;
}
else
{
lean_object* v_reuseFailAlloc_3860_; 
v_reuseFailAlloc_3860_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3860_, 0, v_a_3854_);
v___x_3859_ = v_reuseFailAlloc_3860_;
goto v_reusejp_3858_;
}
v_reusejp_3858_:
{
return v___x_3859_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_TaggedText_rewriteM___at___00__private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractive_fmtToTT_spec__2_spec__2(lean_object* v_00_u03b1_3862_, lean_object* v_00_u03b2_3863_, lean_object* v_f_3864_, size_t v_sz_3865_, size_t v_i_3866_, lean_object* v_bs_3867_){
_start:
{
lean_object* v___x_3869_; 
v___x_3869_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_TaggedText_rewriteM___at___00__private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractive_fmtToTT_spec__2_spec__2___redArg(v_f_3864_, v_sz_3865_, v_i_3866_, v_bs_3867_);
return v___x_3869_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_rewriteM___at___00__private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractive_fmtToTT_spec__2___redArg___boxed(lean_object* v_f_3870_, lean_object* v_x_3871_, lean_object* v___y_3872_){
_start:
{
lean_object* v_res_3873_; 
v_res_3873_ = l_Lean_Widget_TaggedText_rewriteM___at___00__private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractive_fmtToTT_spec__2___redArg(v_f_3870_, v_x_3871_);
return v_res_3873_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_TaggedText_rewriteM___at___00__private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractive_fmtToTT_spec__2_spec__2___redArg___boxed(lean_object* v_f_3874_, lean_object* v_sz_3875_, lean_object* v_i_3876_, lean_object* v_bs_3877_, lean_object* v___y_3878_){
_start:
{
size_t v_sz_boxed_3879_; size_t v_i_boxed_3880_; lean_object* v_res_3881_; 
v_sz_boxed_3879_ = lean_unbox_usize(v_sz_3875_);
lean_dec(v_sz_3875_);
v_i_boxed_3880_ = lean_unbox_usize(v_i_3876_);
lean_dec(v_i_3876_);
v_res_3881_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_TaggedText_rewriteM___at___00__private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractive_fmtToTT_spec__2_spec__2___redArg(v_f_3874_, v_sz_boxed_3879_, v_i_boxed_3880_, v_bs_3877_);
return v_res_3881_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractive_fmtToTT_spec__1(size_t v_sz_3882_, size_t v_i_3883_, lean_object* v_bs_3884_){
_start:
{
uint8_t v___x_3886_; 
v___x_3886_ = lean_usize_dec_lt(v_i_3883_, v_sz_3882_);
if (v___x_3886_ == 0)
{
lean_object* v___x_3887_; lean_object* v___x_3888_; 
v___x_3887_ = l_unsafeCast___redArg(v_bs_3884_);
lean_dec_ref(v_bs_3884_);
v___x_3888_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3888_, 0, v___x_3887_);
return v___x_3888_;
}
else
{
lean_object* v_v_3889_; lean_object* v___x_3890_; lean_object* v_bs_x27_3891_; lean_object* v___x_3892_; lean_object* v___x_3893_; size_t v___x_3894_; size_t v___x_3895_; lean_object* v___x_3896_; lean_object* v___x_3897_; 
v_v_3889_ = lean_array_uget(v_bs_3884_, v_i_3883_);
v___x_3890_ = lean_unsigned_to_nat(0u);
v_bs_x27_3891_ = lean_array_uset(v_bs_3884_, v_i_3883_, v___x_3890_);
v___x_3892_ = l_unsafeCast___redArg(v_v_3889_);
lean_dec(v_v_3889_);
v___x_3893_ = l_Lean_Server_WithRpcRef_mk___redArg(v___x_3892_);
v___x_3894_ = ((size_t)1ULL);
v___x_3895_ = lean_usize_add(v_i_3883_, v___x_3894_);
v___x_3896_ = l_unsafeCast___redArg(v___x_3893_);
lean_dec_ref(v___x_3893_);
v___x_3897_ = lean_array_uset(v_bs_x27_3891_, v_i_3883_, v___x_3896_);
v_i_3883_ = v___x_3895_;
v_bs_3884_ = v___x_3897_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractive_fmtToTT_spec__1___boxed(lean_object* v_sz_3899_, lean_object* v_i_3900_, lean_object* v_bs_3901_, lean_object* v___y_3902_){
_start:
{
size_t v_sz_boxed_3903_; size_t v_i_boxed_3904_; lean_object* v_res_3905_; 
v_sz_boxed_3903_ = lean_unbox_usize(v_sz_3899_);
lean_dec(v_sz_3899_);
v_i_boxed_3904_ = lean_unbox_usize(v_i_3900_);
lean_dec(v_i_3900_);
v_res_3905_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractive_fmtToTT_spec__1(v_sz_boxed_3903_, v_i_boxed_3904_, v_bs_3901_);
return v_res_3905_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractive_fmtToTT_spec__0(lean_object* v_col_3906_, lean_object* v_embeds_3907_, size_t v_sz_3908_, size_t v_i_3909_, lean_object* v_bs_3910_){
_start:
{
uint8_t v___x_3912_; 
v___x_3912_ = lean_usize_dec_lt(v_i_3909_, v_sz_3908_);
if (v___x_3912_ == 0)
{
lean_object* v___x_3913_; lean_object* v___x_3914_; 
lean_dec_ref(v_embeds_3907_);
v___x_3913_ = l_unsafeCast___redArg(v_bs_3910_);
lean_dec_ref(v_bs_3910_);
v___x_3914_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3914_, 0, v___x_3913_);
return v___x_3914_;
}
else
{
lean_object* v_v_3915_; lean_object* v___x_3916_; lean_object* v_bs_x27_3917_; lean_object* v___x_3918_; lean_object* v___x_3919_; lean_object* v___x_3920_; lean_object* v___x_3921_; 
v_v_3915_ = lean_array_uget(v_bs_3910_, v_i_3909_);
v___x_3916_ = lean_unsigned_to_nat(0u);
v_bs_x27_3917_ = lean_array_uset(v_bs_3910_, v_i_3909_, v___x_3916_);
v___x_3918_ = l_unsafeCast___redArg(v_v_3915_);
lean_dec(v_v_3915_);
v___x_3919_ = lean_unsigned_to_nat(2u);
v___x_3920_ = lean_nat_add(v_col_3906_, v___x_3919_);
lean_inc_ref(v_embeds_3907_);
v___x_3921_ = l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractive_fmtToTT(v_embeds_3907_, v___x_3918_, v___x_3920_);
if (lean_obj_tag(v___x_3921_) == 0)
{
lean_object* v_a_3922_; size_t v___x_3923_; size_t v___x_3924_; lean_object* v___x_3925_; lean_object* v___x_3926_; 
v_a_3922_ = lean_ctor_get(v___x_3921_, 0);
lean_inc(v_a_3922_);
lean_dec_ref_known(v___x_3921_, 1);
v___x_3923_ = ((size_t)1ULL);
v___x_3924_ = lean_usize_add(v_i_3909_, v___x_3923_);
v___x_3925_ = l_unsafeCast___redArg(v_a_3922_);
lean_dec(v_a_3922_);
v___x_3926_ = lean_array_uset(v_bs_x27_3917_, v_i_3909_, v___x_3925_);
v_i_3909_ = v___x_3924_;
v_bs_3910_ = v___x_3926_;
goto _start;
}
else
{
lean_object* v_a_3928_; lean_object* v___x_3930_; uint8_t v_isShared_3931_; uint8_t v_isSharedCheck_3935_; 
lean_dec_ref(v_bs_x27_3917_);
lean_dec_ref(v_embeds_3907_);
v_a_3928_ = lean_ctor_get(v___x_3921_, 0);
v_isSharedCheck_3935_ = !lean_is_exclusive(v___x_3921_);
if (v_isSharedCheck_3935_ == 0)
{
v___x_3930_ = v___x_3921_;
v_isShared_3931_ = v_isSharedCheck_3935_;
goto v_resetjp_3929_;
}
else
{
lean_inc(v_a_3928_);
lean_dec(v___x_3921_);
v___x_3930_ = lean_box(0);
v_isShared_3931_ = v_isSharedCheck_3935_;
goto v_resetjp_3929_;
}
v_resetjp_3929_:
{
lean_object* v___x_3933_; 
if (v_isShared_3931_ == 0)
{
v___x_3933_ = v___x_3930_;
goto v_reusejp_3932_;
}
else
{
lean_object* v_reuseFailAlloc_3934_; 
v_reuseFailAlloc_3934_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3934_, 0, v_a_3928_);
v___x_3933_ = v_reuseFailAlloc_3934_;
goto v_reusejp_3932_;
}
v_reusejp_3932_:
{
return v___x_3933_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractive_fmtToTT_spec__0___boxed(lean_object* v_col_3936_, lean_object* v_embeds_3937_, lean_object* v_sz_3938_, lean_object* v_i_3939_, lean_object* v_bs_3940_, lean_object* v___y_3941_){
_start:
{
size_t v_sz_boxed_3942_; size_t v_i_boxed_3943_; lean_object* v_res_3944_; 
v_sz_boxed_3942_ = lean_unbox_usize(v_sz_3938_);
lean_dec(v_sz_3938_);
v_i_boxed_3943_ = lean_unbox_usize(v_i_3939_);
lean_dec(v_i_3939_);
v_res_3944_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractive_fmtToTT_spec__0(v_col_3936_, v_embeds_3937_, v_sz_boxed_3942_, v_i_boxed_3943_, v_bs_3940_);
lean_dec(v_col_3936_);
return v_res_3944_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractive_fmtToTT___lam__1(lean_object* v___x_3945_, lean_object* v_embeds_3946_, lean_object* v_indent_3947_, lean_object* v_x_3948_, lean_object* v_tt_3949_){
_start:
{
lean_object* v_fst_3951_; lean_object* v_snd_3952_; lean_object* v___x_3954_; uint8_t v_isShared_3955_; uint8_t v_isSharedCheck_4073_; 
v_fst_3951_ = lean_ctor_get(v_x_3948_, 0);
v_snd_3952_ = lean_ctor_get(v_x_3948_, 1);
v_isSharedCheck_4073_ = !lean_is_exclusive(v_x_3948_);
if (v_isSharedCheck_4073_ == 0)
{
v___x_3954_ = v_x_3948_;
v_isShared_3955_ = v_isSharedCheck_4073_;
goto v_resetjp_3953_;
}
else
{
lean_inc(v_snd_3952_);
lean_inc(v_fst_3951_);
lean_dec(v_x_3948_);
v___x_3954_ = lean_box(0);
v_isShared_3955_ = v_isSharedCheck_4073_;
goto v_resetjp_3953_;
}
v_resetjp_3953_:
{
lean_object* v___x_3956_; 
v___x_3956_ = lean_array_get(v___x_3945_, v_embeds_3946_, v_fst_3951_);
lean_dec(v_fst_3951_);
switch(lean_obj_tag(v___x_3956_))
{
case 0:
{
lean_object* v_ctx_3957_; lean_object* v_infos_3958_; lean_object* v___x_3960_; uint8_t v_isShared_3961_; uint8_t v_isSharedCheck_3969_; 
lean_del_object(v___x_3954_);
lean_dec(v_snd_3952_);
lean_dec(v_indent_3947_);
lean_dec_ref(v_embeds_3946_);
v_ctx_3957_ = lean_ctor_get(v___x_3956_, 0);
v_infos_3958_ = lean_ctor_get(v___x_3956_, 1);
v_isSharedCheck_3969_ = !lean_is_exclusive(v___x_3956_);
if (v_isSharedCheck_3969_ == 0)
{
v___x_3960_ = v___x_3956_;
v_isShared_3961_ = v_isSharedCheck_3969_;
goto v_resetjp_3959_;
}
else
{
lean_inc(v_infos_3958_);
lean_inc(v_ctx_3957_);
lean_dec(v___x_3956_);
v___x_3960_ = lean_box(0);
v_isShared_3961_ = v_isSharedCheck_3969_;
goto v_resetjp_3959_;
}
v_resetjp_3959_:
{
lean_object* v___x_3962_; lean_object* v___x_3963_; lean_object* v___x_3964_; lean_object* v___x_3966_; 
v___x_3962_ = l_Lean_Widget_tagCodeInfos(v_ctx_3957_, v_infos_3958_, v_tt_3949_);
v___x_3963_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3963_, 0, v___x_3962_);
v___x_3964_ = lean_obj_once(&l_Lean_Widget_instInhabitedMsgEmbed_default___closed__0, &l_Lean_Widget_instInhabitedMsgEmbed_default___closed__0_once, _init_l_Lean_Widget_instInhabitedMsgEmbed_default___closed__0);
if (v_isShared_3961_ == 0)
{
lean_ctor_set_tag(v___x_3960_, 2);
lean_ctor_set(v___x_3960_, 1, v___x_3964_);
lean_ctor_set(v___x_3960_, 0, v___x_3963_);
v___x_3966_ = v___x_3960_;
goto v_reusejp_3965_;
}
else
{
lean_object* v_reuseFailAlloc_3968_; 
v_reuseFailAlloc_3968_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3968_, 0, v___x_3963_);
lean_ctor_set(v_reuseFailAlloc_3968_, 1, v___x_3964_);
v___x_3966_ = v_reuseFailAlloc_3968_;
goto v_reusejp_3965_;
}
v_reusejp_3965_:
{
lean_object* v___x_3967_; 
v___x_3967_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3967_, 0, v___x_3966_);
return v___x_3967_;
}
}
}
case 1:
{
lean_object* v_ctx_3970_; lean_object* v_lctx_3971_; lean_object* v_g_3972_; lean_object* v___f_3973_; lean_object* v___x_3974_; 
lean_del_object(v___x_3954_);
lean_dec(v_snd_3952_);
lean_dec_ref(v_tt_3949_);
lean_dec(v_indent_3947_);
lean_dec_ref(v_embeds_3946_);
v_ctx_3970_ = lean_ctor_get(v___x_3956_, 0);
lean_inc_ref(v_ctx_3970_);
v_lctx_3971_ = lean_ctor_get(v___x_3956_, 1);
lean_inc_ref(v_lctx_3971_);
v_g_3972_ = lean_ctor_get(v___x_3956_, 2);
lean_inc(v_g_3972_);
lean_dec_ref_known(v___x_3956_, 3);
v___f_3973_ = lean_alloc_closure((void*)(l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractive_fmtToTT___lam__0___boxed), 6, 1);
lean_closure_set(v___f_3973_, 0, v_g_3972_);
v___x_3974_ = l_Lean_Elab_ContextInfo_runMetaM___redArg(v_ctx_3970_, v_lctx_3971_, v___f_3973_);
return v___x_3974_;
}
case 2:
{
lean_object* v_wi_3975_; lean_object* v_alt_3976_; lean_object* v___x_3978_; uint8_t v_isShared_3979_; uint8_t v_isSharedCheck_3996_; 
lean_dec_ref(v_tt_3949_);
lean_dec(v_indent_3947_);
v_wi_3975_ = lean_ctor_get(v___x_3956_, 0);
v_alt_3976_ = lean_ctor_get(v___x_3956_, 1);
v_isSharedCheck_3996_ = !lean_is_exclusive(v___x_3956_);
if (v_isSharedCheck_3996_ == 0)
{
v___x_3978_ = v___x_3956_;
v_isShared_3979_ = v_isSharedCheck_3996_;
goto v_resetjp_3977_;
}
else
{
lean_inc(v_alt_3976_);
lean_inc(v_wi_3975_);
lean_dec(v___x_3956_);
v___x_3978_ = lean_box(0);
v_isShared_3979_ = v_isSharedCheck_3996_;
goto v_resetjp_3977_;
}
v_resetjp_3977_:
{
lean_object* v___x_3980_; 
v___x_3980_ = l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractive_fmtToTT(v_embeds_3946_, v_alt_3976_, v_snd_3952_);
if (lean_obj_tag(v___x_3980_) == 0)
{
lean_object* v_a_3981_; lean_object* v___x_3983_; uint8_t v_isShared_3984_; uint8_t v_isSharedCheck_3995_; 
v_a_3981_ = lean_ctor_get(v___x_3980_, 0);
v_isSharedCheck_3995_ = !lean_is_exclusive(v___x_3980_);
if (v_isSharedCheck_3995_ == 0)
{
v___x_3983_ = v___x_3980_;
v_isShared_3984_ = v_isSharedCheck_3995_;
goto v_resetjp_3982_;
}
else
{
lean_inc(v_a_3981_);
lean_dec(v___x_3980_);
v___x_3983_ = lean_box(0);
v_isShared_3984_ = v_isSharedCheck_3995_;
goto v_resetjp_3982_;
}
v_resetjp_3982_:
{
lean_object* v___x_3986_; 
if (v_isShared_3979_ == 0)
{
lean_ctor_set(v___x_3978_, 1, v_a_3981_);
v___x_3986_ = v___x_3978_;
goto v_reusejp_3985_;
}
else
{
lean_object* v_reuseFailAlloc_3994_; 
v_reuseFailAlloc_3994_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3994_, 0, v_wi_3975_);
lean_ctor_set(v_reuseFailAlloc_3994_, 1, v_a_3981_);
v___x_3986_ = v_reuseFailAlloc_3994_;
goto v_reusejp_3985_;
}
v_reusejp_3985_:
{
lean_object* v___x_3987_; lean_object* v___x_3989_; 
v___x_3987_ = lean_obj_once(&l_Lean_Widget_instInhabitedMsgEmbed_default___closed__0, &l_Lean_Widget_instInhabitedMsgEmbed_default___closed__0_once, _init_l_Lean_Widget_instInhabitedMsgEmbed_default___closed__0);
if (v_isShared_3955_ == 0)
{
lean_ctor_set_tag(v___x_3954_, 2);
lean_ctor_set(v___x_3954_, 1, v___x_3987_);
lean_ctor_set(v___x_3954_, 0, v___x_3986_);
v___x_3989_ = v___x_3954_;
goto v_reusejp_3988_;
}
else
{
lean_object* v_reuseFailAlloc_3993_; 
v_reuseFailAlloc_3993_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3993_, 0, v___x_3986_);
lean_ctor_set(v_reuseFailAlloc_3993_, 1, v___x_3987_);
v___x_3989_ = v_reuseFailAlloc_3993_;
goto v_reusejp_3988_;
}
v_reusejp_3988_:
{
lean_object* v___x_3991_; 
if (v_isShared_3984_ == 0)
{
lean_ctor_set(v___x_3983_, 0, v___x_3989_);
v___x_3991_ = v___x_3983_;
goto v_reusejp_3990_;
}
else
{
lean_object* v_reuseFailAlloc_3992_; 
v_reuseFailAlloc_3992_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3992_, 0, v___x_3989_);
v___x_3991_ = v_reuseFailAlloc_3992_;
goto v_reusejp_3990_;
}
v_reusejp_3990_:
{
return v___x_3991_;
}
}
}
}
}
else
{
lean_del_object(v___x_3978_);
lean_dec_ref(v_wi_3975_);
lean_del_object(v___x_3954_);
return v___x_3980_;
}
}
}
case 3:
{
lean_object* v_cls_3997_; lean_object* v_msg_3998_; uint8_t v_collapsed_3999_; lean_object* v_children_4000_; lean_object* v_col_4001_; lean_object* v_children_4003_; 
lean_dec_ref(v_tt_3949_);
v_cls_3997_ = lean_ctor_get(v___x_3956_, 0);
lean_inc(v_cls_3997_);
v_msg_3998_ = lean_ctor_get(v___x_3956_, 1);
lean_inc(v_msg_3998_);
v_collapsed_3999_ = lean_ctor_get_uint8(v___x_3956_, sizeof(void*)*3);
v_children_4000_ = lean_ctor_get(v___x_3956_, 2);
lean_inc_ref(v_children_4000_);
lean_dec_ref_known(v___x_3956_, 3);
v_col_4001_ = lean_nat_add(v_indent_3947_, v_snd_3952_);
lean_dec(v_snd_3952_);
if (lean_obj_tag(v_children_4000_) == 0)
{
lean_object* v_a_4018_; lean_object* v___x_4020_; uint8_t v_isShared_4021_; uint8_t v_isSharedCheck_4041_; 
v_a_4018_ = lean_ctor_get(v_children_4000_, 0);
v_isSharedCheck_4041_ = !lean_is_exclusive(v_children_4000_);
if (v_isSharedCheck_4041_ == 0)
{
v___x_4020_ = v_children_4000_;
v_isShared_4021_ = v_isSharedCheck_4041_;
goto v_resetjp_4019_;
}
else
{
lean_inc(v_a_4018_);
lean_dec(v_children_4000_);
v___x_4020_ = lean_box(0);
v_isShared_4021_ = v_isSharedCheck_4041_;
goto v_resetjp_4019_;
}
v_resetjp_4019_:
{
size_t v_sz_4022_; lean_object* v___x_4023_; lean_object* v___x_4024_; lean_object* v___x_4025_; lean_object* v___x_4026_; lean_object* v___x_1604__overap_4027_; lean_object* v___x_4028_; 
v_sz_4022_ = lean_array_size(v_a_4018_);
v___x_4023_ = l_unsafeCast___redArg(v_a_4018_);
lean_dec(v_a_4018_);
v___x_4024_ = lean_box_usize(v_sz_4022_);
v___x_4025_ = ((lean_object*)(l_Lean_Widget_TaggedText_mapM___at___00Lean_Widget_instRpcEncodableMsgEmbed_enc_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__spec__0___redArg___boxed__const__1));
lean_inc_ref(v_embeds_3946_);
lean_inc(v_col_4001_);
v___x_4026_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractive_fmtToTT_spec__0___boxed), 6, 5);
lean_closure_set(v___x_4026_, 0, v_col_4001_);
lean_closure_set(v___x_4026_, 1, v_embeds_3946_);
lean_closure_set(v___x_4026_, 2, v___x_4024_);
lean_closure_set(v___x_4026_, 3, v___x_4025_);
lean_closure_set(v___x_4026_, 4, v___x_4023_);
v___x_1604__overap_4027_ = l_unsafeCast___redArg(v___x_4026_);
lean_dec_ref(v___x_4026_);
v___x_4028_ = lean_apply_1(v___x_1604__overap_4027_, lean_box(0));
if (lean_obj_tag(v___x_4028_) == 0)
{
lean_object* v_a_4029_; lean_object* v___x_4031_; 
v_a_4029_ = lean_ctor_get(v___x_4028_, 0);
lean_inc(v_a_4029_);
lean_dec_ref_known(v___x_4028_, 1);
if (v_isShared_4021_ == 0)
{
lean_ctor_set(v___x_4020_, 0, v_a_4029_);
v___x_4031_ = v___x_4020_;
goto v_reusejp_4030_;
}
else
{
lean_object* v_reuseFailAlloc_4032_; 
v_reuseFailAlloc_4032_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4032_, 0, v_a_4029_);
v___x_4031_ = v_reuseFailAlloc_4032_;
goto v_reusejp_4030_;
}
v_reusejp_4030_:
{
v_children_4003_ = v___x_4031_;
goto v___jp_4002_;
}
}
else
{
lean_object* v_a_4033_; lean_object* v___x_4035_; uint8_t v_isShared_4036_; uint8_t v_isSharedCheck_4040_; 
lean_del_object(v___x_4020_);
lean_dec(v_col_4001_);
lean_dec(v_msg_3998_);
lean_dec(v_cls_3997_);
lean_del_object(v___x_3954_);
lean_dec(v_indent_3947_);
lean_dec_ref(v_embeds_3946_);
v_a_4033_ = lean_ctor_get(v___x_4028_, 0);
v_isSharedCheck_4040_ = !lean_is_exclusive(v___x_4028_);
if (v_isSharedCheck_4040_ == 0)
{
v___x_4035_ = v___x_4028_;
v_isShared_4036_ = v_isSharedCheck_4040_;
goto v_resetjp_4034_;
}
else
{
lean_inc(v_a_4033_);
lean_dec(v___x_4028_);
v___x_4035_ = lean_box(0);
v_isShared_4036_ = v_isSharedCheck_4040_;
goto v_resetjp_4034_;
}
v_resetjp_4034_:
{
lean_object* v___x_4038_; 
if (v_isShared_4036_ == 0)
{
v___x_4038_ = v___x_4035_;
goto v_reusejp_4037_;
}
else
{
lean_object* v_reuseFailAlloc_4039_; 
v_reuseFailAlloc_4039_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4039_, 0, v_a_4033_);
v___x_4038_ = v_reuseFailAlloc_4039_;
goto v_reusejp_4037_;
}
v_reusejp_4037_:
{
return v___x_4038_;
}
}
}
}
}
else
{
lean_object* v_a_4042_; lean_object* v___x_4044_; uint8_t v_isShared_4045_; uint8_t v_isSharedCheck_4069_; 
v_a_4042_ = lean_ctor_get(v_children_4000_, 0);
v_isSharedCheck_4069_ = !lean_is_exclusive(v_children_4000_);
if (v_isSharedCheck_4069_ == 0)
{
v___x_4044_ = v_children_4000_;
v_isShared_4045_ = v_isSharedCheck_4069_;
goto v_resetjp_4043_;
}
else
{
lean_inc(v_a_4042_);
lean_dec(v_children_4000_);
v___x_4044_ = lean_box(0);
v_isShared_4045_ = v_isSharedCheck_4069_;
goto v_resetjp_4043_;
}
v_resetjp_4043_:
{
size_t v_sz_4046_; lean_object* v___x_4047_; lean_object* v___x_4048_; lean_object* v___x_4049_; lean_object* v___x_4050_; lean_object* v___x_1615__overap_4051_; lean_object* v___x_4052_; 
v_sz_4046_ = lean_array_size(v_a_4042_);
v___x_4047_ = l_unsafeCast___redArg(v_a_4042_);
lean_dec(v_a_4042_);
v___x_4048_ = lean_box_usize(v_sz_4046_);
v___x_4049_ = ((lean_object*)(l_Lean_Widget_TaggedText_mapM___at___00Lean_Widget_instRpcEncodableMsgEmbed_enc_00___x40_Lean_Widget_InteractiveDiagnostic_1765450820____hygCtx___hyg_1__spec__0___redArg___boxed__const__1));
v___x_4050_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractive_fmtToTT_spec__1___boxed), 4, 3);
lean_closure_set(v___x_4050_, 0, v___x_4048_);
lean_closure_set(v___x_4050_, 1, v___x_4049_);
lean_closure_set(v___x_4050_, 2, v___x_4047_);
v___x_1615__overap_4051_ = l_unsafeCast___redArg(v___x_4050_);
lean_dec_ref(v___x_4050_);
v___x_4052_ = lean_apply_1(v___x_1615__overap_4051_, lean_box(0));
if (lean_obj_tag(v___x_4052_) == 0)
{
lean_object* v_a_4053_; lean_object* v___x_4054_; lean_object* v___x_4055_; lean_object* v___x_4056_; lean_object* v___x_4057_; lean_object* v___x_4059_; 
v_a_4053_ = lean_ctor_get(v___x_4052_, 0);
lean_inc(v_a_4053_);
lean_dec_ref_known(v___x_4052_, 1);
v___x_4054_ = lean_unsigned_to_nat(2u);
v___x_4055_ = lean_nat_add(v_col_4001_, v___x_4054_);
v___x_4056_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4056_, 0, v___x_4055_);
lean_ctor_set(v___x_4056_, 1, v_a_4053_);
v___x_4057_ = l_Lean_Server_WithRpcRef_mk___redArg(v___x_4056_);
if (v_isShared_4045_ == 0)
{
lean_ctor_set(v___x_4044_, 0, v___x_4057_);
v___x_4059_ = v___x_4044_;
goto v_reusejp_4058_;
}
else
{
lean_object* v_reuseFailAlloc_4060_; 
v_reuseFailAlloc_4060_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4060_, 0, v___x_4057_);
v___x_4059_ = v_reuseFailAlloc_4060_;
goto v_reusejp_4058_;
}
v_reusejp_4058_:
{
v_children_4003_ = v___x_4059_;
goto v___jp_4002_;
}
}
else
{
lean_object* v_a_4061_; lean_object* v___x_4063_; uint8_t v_isShared_4064_; uint8_t v_isSharedCheck_4068_; 
lean_del_object(v___x_4044_);
lean_dec(v_col_4001_);
lean_dec(v_msg_3998_);
lean_dec(v_cls_3997_);
lean_del_object(v___x_3954_);
lean_dec(v_indent_3947_);
lean_dec_ref(v_embeds_3946_);
v_a_4061_ = lean_ctor_get(v___x_4052_, 0);
v_isSharedCheck_4068_ = !lean_is_exclusive(v___x_4052_);
if (v_isSharedCheck_4068_ == 0)
{
v___x_4063_ = v___x_4052_;
v_isShared_4064_ = v_isSharedCheck_4068_;
goto v_resetjp_4062_;
}
else
{
lean_inc(v_a_4061_);
lean_dec(v___x_4052_);
v___x_4063_ = lean_box(0);
v_isShared_4064_ = v_isSharedCheck_4068_;
goto v_resetjp_4062_;
}
v_resetjp_4062_:
{
lean_object* v___x_4066_; 
if (v_isShared_4064_ == 0)
{
v___x_4066_ = v___x_4063_;
goto v_reusejp_4065_;
}
else
{
lean_object* v_reuseFailAlloc_4067_; 
v_reuseFailAlloc_4067_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4067_, 0, v_a_4061_);
v___x_4066_ = v_reuseFailAlloc_4067_;
goto v_reusejp_4065_;
}
v_reusejp_4065_:
{
return v___x_4066_;
}
}
}
}
}
v___jp_4002_:
{
lean_object* v___x_4004_; 
v___x_4004_ = l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractive_fmtToTT(v_embeds_3946_, v_msg_3998_, v_col_4001_);
if (lean_obj_tag(v___x_4004_) == 0)
{
lean_object* v_a_4005_; lean_object* v___x_4007_; uint8_t v_isShared_4008_; uint8_t v_isSharedCheck_4017_; 
v_a_4005_ = lean_ctor_get(v___x_4004_, 0);
v_isSharedCheck_4017_ = !lean_is_exclusive(v___x_4004_);
if (v_isSharedCheck_4017_ == 0)
{
v___x_4007_ = v___x_4004_;
v_isShared_4008_ = v_isSharedCheck_4017_;
goto v_resetjp_4006_;
}
else
{
lean_inc(v_a_4005_);
lean_dec(v___x_4004_);
v___x_4007_ = lean_box(0);
v_isShared_4008_ = v_isSharedCheck_4017_;
goto v_resetjp_4006_;
}
v_resetjp_4006_:
{
lean_object* v___x_4009_; lean_object* v___x_4010_; lean_object* v___x_4012_; 
v___x_4009_ = lean_alloc_ctor(3, 4, 1);
lean_ctor_set(v___x_4009_, 0, v_indent_3947_);
lean_ctor_set(v___x_4009_, 1, v_cls_3997_);
lean_ctor_set(v___x_4009_, 2, v_a_4005_);
lean_ctor_set(v___x_4009_, 3, v_children_4003_);
lean_ctor_set_uint8(v___x_4009_, sizeof(void*)*4, v_collapsed_3999_);
v___x_4010_ = lean_obj_once(&l_Lean_Widget_instInhabitedMsgEmbed_default___closed__0, &l_Lean_Widget_instInhabitedMsgEmbed_default___closed__0_once, _init_l_Lean_Widget_instInhabitedMsgEmbed_default___closed__0);
if (v_isShared_3955_ == 0)
{
lean_ctor_set_tag(v___x_3954_, 2);
lean_ctor_set(v___x_3954_, 1, v___x_4010_);
lean_ctor_set(v___x_3954_, 0, v___x_4009_);
v___x_4012_ = v___x_3954_;
goto v_reusejp_4011_;
}
else
{
lean_object* v_reuseFailAlloc_4016_; 
v_reuseFailAlloc_4016_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4016_, 0, v___x_4009_);
lean_ctor_set(v_reuseFailAlloc_4016_, 1, v___x_4010_);
v___x_4012_ = v_reuseFailAlloc_4016_;
goto v_reusejp_4011_;
}
v_reusejp_4011_:
{
lean_object* v___x_4014_; 
if (v_isShared_4008_ == 0)
{
lean_ctor_set(v___x_4007_, 0, v___x_4012_);
v___x_4014_ = v___x_4007_;
goto v_reusejp_4013_;
}
else
{
lean_object* v_reuseFailAlloc_4015_; 
v_reuseFailAlloc_4015_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4015_, 0, v___x_4012_);
v___x_4014_ = v_reuseFailAlloc_4015_;
goto v_reusejp_4013_;
}
v_reusejp_4013_:
{
return v___x_4014_;
}
}
}
}
else
{
lean_dec_ref(v_children_4003_);
lean_dec(v_cls_3997_);
lean_del_object(v___x_3954_);
lean_dec(v_indent_3947_);
return v___x_4004_;
}
}
}
default: 
{
lean_object* v___x_4070_; lean_object* v___x_4071_; lean_object* v___x_4072_; 
lean_del_object(v___x_3954_);
lean_dec(v_snd_3952_);
lean_dec(v_indent_3947_);
lean_dec_ref(v_embeds_3946_);
v___x_4070_ = l_Lean_Widget_TaggedText_stripTags___redArg(v_tt_3949_);
v___x_4071_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4071_, 0, v___x_4070_);
v___x_4072_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4072_, 0, v___x_4071_);
return v___x_4072_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractive_fmtToTT___lam__1___boxed(lean_object* v___x_4074_, lean_object* v_embeds_4075_, lean_object* v_indent_4076_, lean_object* v_x_4077_, lean_object* v_tt_4078_, lean_object* v___y_4079_){
_start:
{
lean_object* v_res_4080_; 
v_res_4080_ = l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractive_fmtToTT___lam__1(v___x_4074_, v_embeds_4075_, v_indent_4076_, v_x_4077_, v_tt_4078_);
lean_dec(v___x_4074_);
return v_res_4080_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractive_fmtToTT(lean_object* v_embeds_4081_, lean_object* v_fmt_4082_, lean_object* v_indent_4083_){
_start:
{
lean_object* v___x_4085_; lean_object* v___f_4086_; lean_object* v___x_4087_; lean_object* v___x_4088_; lean_object* v___x_4089_; 
v___x_4085_ = l_Lean_Widget_instInhabitedEmbedFmt_default;
lean_inc(v_indent_4083_);
v___f_4086_ = lean_alloc_closure((void*)(l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractive_fmtToTT___lam__1___boxed), 6, 3);
lean_closure_set(v___f_4086_, 0, v___x_4085_);
lean_closure_set(v___f_4086_, 1, v_embeds_4081_);
lean_closure_set(v___f_4086_, 2, v_indent_4083_);
v___x_4087_ = l_Std_Format_defWidth;
v___x_4088_ = l_Lean_Widget_TaggedText_prettyTagged(v_fmt_4082_, v_indent_4083_, v___x_4087_);
v___x_4089_ = l_Lean_Widget_TaggedText_rewriteM___at___00__private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractive_fmtToTT_spec__2___redArg(v___f_4086_, v___x_4088_);
return v___x_4089_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractive_fmtToTT___boxed(lean_object* v_embeds_4090_, lean_object* v_fmt_4091_, lean_object* v_indent_4092_, lean_object* v_a_4093_){
_start:
{
lean_object* v_res_4094_; 
v_res_4094_ = l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractive_fmtToTT(v_embeds_4090_, v_fmt_4091_, v_indent_4092_);
return v_res_4094_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_rewriteM___at___00__private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractive_fmtToTT_spec__2(lean_object* v_00_u03b1_4095_, lean_object* v_00_u03b2_4096_, lean_object* v_f_4097_, lean_object* v_x_4098_){
_start:
{
lean_object* v___x_4100_; 
v___x_4100_ = l_Lean_Widget_TaggedText_rewriteM___at___00__private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractive_fmtToTT_spec__2___redArg(v_f_4097_, v_x_4098_);
return v___x_4100_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_rewriteM___at___00__private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractive_fmtToTT_spec__2___boxed(lean_object* v_00_u03b1_4101_, lean_object* v_00_u03b2_4102_, lean_object* v_f_4103_, lean_object* v_x_4104_, lean_object* v___y_4105_){
_start:
{
lean_object* v_res_4106_; 
v_res_4106_ = l_Lean_Widget_TaggedText_rewriteM___at___00__private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractive_fmtToTT_spec__2(v_00_u03b1_4101_, v_00_u03b2_4102_, v_f_4103_, v_x_4104_);
return v_res_4106_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_msgToInteractive___lam__0(lean_object* v_x_4107_, lean_object* v_tt_4108_){
_start:
{
lean_object* v___x_4109_; lean_object* v___x_4110_; 
v___x_4109_ = l_Lean_Widget_TaggedText_stripTags___redArg(v_tt_4108_);
v___x_4110_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4110_, 0, v___x_4109_);
return v___x_4110_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_msgToInteractive___lam__0___boxed(lean_object* v_x_4111_, lean_object* v_tt_4112_){
_start:
{
lean_object* v_res_4113_; 
v_res_4113_ = l_Lean_Widget_msgToInteractive___lam__0(v_x_4111_, v_tt_4112_);
lean_dec_ref(v_x_4111_);
return v_res_4113_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_msgToInteractive(lean_object* v_msgData_4115_, uint8_t v_hasWidgets_4116_, lean_object* v_indent_4117_){
_start:
{
if (v_hasWidgets_4116_ == 0)
{
lean_object* v___f_4119_; lean_object* v___x_4120_; lean_object* v___x_4121_; lean_object* v___x_4122_; lean_object* v___x_4123_; lean_object* v___x_4124_; lean_object* v___x_4125_; lean_object* v___x_4126_; 
lean_dec(v_indent_4117_);
v___f_4119_ = ((lean_object*)(l_Lean_Widget_msgToInteractive___closed__0));
v___x_4120_ = lean_box(0);
v___x_4121_ = l_Lean_MessageData_format(v_msgData_4115_, v___x_4120_);
v___x_4122_ = lean_unsigned_to_nat(0u);
v___x_4123_ = l_Std_Format_defWidth;
v___x_4124_ = l_Lean_Widget_TaggedText_prettyTagged(v___x_4121_, v___x_4122_, v___x_4123_);
v___x_4125_ = l_Lean_Widget_TaggedText_rewrite___redArg(v___f_4119_, v___x_4124_);
v___x_4126_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4126_, 0, v___x_4125_);
return v___x_4126_;
}
else
{
lean_object* v___x_4127_; 
v___x_4127_ = l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractiveAux(v_msgData_4115_);
if (lean_obj_tag(v___x_4127_) == 0)
{
lean_object* v_a_4128_; lean_object* v_fst_4129_; lean_object* v_snd_4130_; lean_object* v___x_4131_; 
v_a_4128_ = lean_ctor_get(v___x_4127_, 0);
lean_inc(v_a_4128_);
lean_dec_ref_known(v___x_4127_, 1);
v_fst_4129_ = lean_ctor_get(v_a_4128_, 0);
lean_inc(v_fst_4129_);
v_snd_4130_ = lean_ctor_get(v_a_4128_, 1);
lean_inc(v_snd_4130_);
lean_dec(v_a_4128_);
v___x_4131_ = l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_msgToInteractive_fmtToTT(v_snd_4130_, v_fst_4129_, v_indent_4117_);
return v___x_4131_;
}
else
{
lean_object* v_a_4132_; lean_object* v___x_4134_; uint8_t v_isShared_4135_; uint8_t v_isSharedCheck_4139_; 
lean_dec(v_indent_4117_);
v_a_4132_ = lean_ctor_get(v___x_4127_, 0);
v_isSharedCheck_4139_ = !lean_is_exclusive(v___x_4127_);
if (v_isSharedCheck_4139_ == 0)
{
v___x_4134_ = v___x_4127_;
v_isShared_4135_ = v_isSharedCheck_4139_;
goto v_resetjp_4133_;
}
else
{
lean_inc(v_a_4132_);
lean_dec(v___x_4127_);
v___x_4134_ = lean_box(0);
v_isShared_4135_ = v_isSharedCheck_4139_;
goto v_resetjp_4133_;
}
v_resetjp_4133_:
{
lean_object* v___x_4137_; 
if (v_isShared_4135_ == 0)
{
v___x_4137_ = v___x_4134_;
goto v_reusejp_4136_;
}
else
{
lean_object* v_reuseFailAlloc_4138_; 
v_reuseFailAlloc_4138_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4138_, 0, v_a_4132_);
v___x_4137_ = v_reuseFailAlloc_4138_;
goto v_reusejp_4136_;
}
v_reusejp_4136_:
{
return v___x_4137_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_msgToInteractive___boxed(lean_object* v_msgData_4140_, lean_object* v_hasWidgets_4141_, lean_object* v_indent_4142_, lean_object* v_a_4143_){
_start:
{
uint8_t v_hasWidgets_boxed_4144_; lean_object* v_res_4145_; 
v_hasWidgets_boxed_4144_ = lean_unbox(v_hasWidgets_4141_);
v_res_4145_ = l_Lean_Widget_msgToInteractive(v_msgData_4140_, v_hasWidgets_boxed_4144_, v_indent_4142_);
return v_res_4145_;
}
}
LEAN_EXPORT uint8_t l_Lean_Widget_msgToInteractiveDiagnostic___lam__0(lean_object* v_x_4151_){
_start:
{
lean_object* v___x_4152_; uint8_t v___x_4153_; 
v___x_4152_ = ((lean_object*)(l_Lean_Widget_msgToInteractiveDiagnostic___lam__0___closed__2));
v___x_4153_ = lean_name_eq(v_x_4151_, v___x_4152_);
return v___x_4153_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_msgToInteractiveDiagnostic___lam__0___boxed(lean_object* v_x_4154_){
_start:
{
uint8_t v_res_4155_; lean_object* v_r_4156_; 
v_res_4155_ = l_Lean_Widget_msgToInteractiveDiagnostic___lam__0(v_x_4154_);
lean_dec(v_x_4154_);
v_r_4156_ = lean_box(v_res_4155_);
return v_r_4156_;
}
}
LEAN_EXPORT uint8_t l_Lean_Widget_msgToInteractiveDiagnostic___lam__1(lean_object* v_x_4160_){
_start:
{
lean_object* v___x_4161_; uint8_t v___x_4162_; 
v___x_4161_ = ((lean_object*)(l_Lean_Widget_msgToInteractiveDiagnostic___lam__1___closed__1));
v___x_4162_ = lean_name_eq(v_x_4160_, v___x_4161_);
return v___x_4162_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_msgToInteractiveDiagnostic___lam__1___boxed(lean_object* v_x_4163_){
_start:
{
uint8_t v_res_4164_; lean_object* v_r_4165_; 
v_res_4164_ = l_Lean_Widget_msgToInteractiveDiagnostic___lam__1(v_x_4163_);
lean_dec(v_x_4163_);
v_r_4165_ = lean_box(v_res_4164_);
return v_r_4165_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_msgToInteractiveDiagnostic(lean_object* v_text_4204_, lean_object* v_m_4205_, uint8_t v_hasWidgets_4206_){
_start:
{
lean_object* v___y_4209_; lean_object* v___y_4210_; lean_object* v___y_4211_; lean_object* v___y_4212_; lean_object* v___y_4213_; lean_object* v___y_4214_; lean_object* v___y_4215_; lean_object* v___y_4216_; lean_object* v___y_4217_; lean_object* v_pos_4221_; lean_object* v_endPos_4222_; uint8_t v_keepFullRange_4223_; uint8_t v_severity_4224_; uint8_t v_isSilent_4225_; lean_object* v_data_4226_; lean_object* v___y_4228_; lean_object* v___y_4229_; lean_object* v___y_4230_; lean_object* v___y_4231_; lean_object* v___y_4232_; lean_object* v___y_4233_; lean_object* v___y_4234_; uint8_t v___y_4235_; lean_object* v___y_4236_; lean_object* v___y_4251_; lean_object* v___y_4252_; lean_object* v___y_4253_; lean_object* v___y_4254_; lean_object* v___y_4255_; lean_object* v___y_4256_; uint8_t v___y_4257_; lean_object* v___y_4258_; lean_object* v___f_4275_; lean_object* v___f_4276_; lean_object* v___y_4278_; lean_object* v___y_4279_; lean_object* v___y_4280_; lean_object* v___y_4281_; lean_object* v___y_4282_; uint8_t v___y_4283_; lean_object* v___y_4284_; lean_object* v___y_4291_; lean_object* v___y_4292_; lean_object* v___y_4293_; uint8_t v___y_4294_; lean_object* v___y_4295_; lean_object* v___y_4303_; lean_object* v___y_4304_; uint8_t v___y_4305_; lean_object* v_low_4311_; lean_object* v___y_4313_; lean_object* v___y_4314_; lean_object* v___y_4321_; 
v_pos_4221_ = lean_ctor_get(v_m_4205_, 1);
lean_inc_ref_n(v_pos_4221_, 2);
v_endPos_4222_ = lean_ctor_get(v_m_4205_, 2);
lean_inc(v_endPos_4222_);
v_keepFullRange_4223_ = lean_ctor_get_uint8(v_m_4205_, sizeof(void*)*5);
v_severity_4224_ = lean_ctor_get_uint8(v_m_4205_, sizeof(void*)*5 + 1);
v_isSilent_4225_ = lean_ctor_get_uint8(v_m_4205_, sizeof(void*)*5 + 2);
v_data_4226_ = lean_ctor_get(v_m_4205_, 4);
lean_inc(v_data_4226_);
lean_dec_ref(v_m_4205_);
v___f_4275_ = ((lean_object*)(l_Lean_Widget_msgToInteractiveDiagnostic___closed__2));
v___f_4276_ = ((lean_object*)(l_Lean_Widget_msgToInteractiveDiagnostic___closed__3));
lean_inc_ref(v_text_4204_);
v_low_4311_ = l_Lean_FileMap_leanPosToLspPos(v_text_4204_, v_pos_4221_);
if (lean_obj_tag(v_endPos_4222_) == 0)
{
lean_inc_ref(v_pos_4221_);
v___y_4321_ = v_pos_4221_;
goto v___jp_4320_;
}
else
{
lean_object* v_val_4343_; 
v_val_4343_ = lean_ctor_get(v_endPos_4222_, 0);
lean_inc(v_val_4343_);
v___y_4321_ = v_val_4343_;
goto v___jp_4320_;
}
v___jp_4208_:
{
lean_object* v___x_4218_; lean_object* v___x_4219_; lean_object* v___x_4220_; 
v___x_4218_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4218_, 0, v___y_4209_);
v___x_4219_ = lean_box(0);
lean_inc(v___y_4210_);
lean_inc(v___y_4214_);
lean_inc(v___y_4212_);
lean_inc(v___y_4211_);
v___x_4220_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_4220_, 0, v___y_4216_);
lean_ctor_set(v___x_4220_, 1, v___x_4218_);
lean_ctor_set(v___x_4220_, 2, v___y_4215_);
lean_ctor_set(v___x_4220_, 3, v___y_4211_);
lean_ctor_set(v___x_4220_, 4, v___y_4217_);
lean_ctor_set(v___x_4220_, 5, v___y_4212_);
lean_ctor_set(v___x_4220_, 6, v___y_4213_);
lean_ctor_set(v___x_4220_, 7, v___y_4214_);
lean_ctor_set(v___x_4220_, 8, v___y_4210_);
lean_ctor_set(v___x_4220_, 9, v___x_4219_);
lean_ctor_set(v___x_4220_, 10, v___x_4219_);
return v___x_4220_;
}
v___jp_4227_:
{
lean_object* v___x_4237_; lean_object* v___x_4238_; 
v___x_4237_ = l_Lean_MessageData_kind(v_data_4226_);
lean_dec(v_data_4226_);
v___x_4238_ = l_Lean_errorNameOfKind_x3f(v___x_4237_);
lean_dec(v___x_4237_);
if (lean_obj_tag(v___x_4238_) == 0)
{
lean_object* v___x_4239_; 
v___x_4239_ = lean_box(0);
v___y_4209_ = v___y_4228_;
v___y_4210_ = v___y_4230_;
v___y_4211_ = v___y_4229_;
v___y_4212_ = v___y_4231_;
v___y_4213_ = v___y_4236_;
v___y_4214_ = v___y_4233_;
v___y_4215_ = v___y_4232_;
v___y_4216_ = v___y_4234_;
v___y_4217_ = v___x_4239_;
goto v___jp_4208_;
}
else
{
lean_object* v_val_4240_; lean_object* v___x_4242_; uint8_t v_isShared_4243_; uint8_t v_isSharedCheck_4249_; 
v_val_4240_ = lean_ctor_get(v___x_4238_, 0);
v_isSharedCheck_4249_ = !lean_is_exclusive(v___x_4238_);
if (v_isSharedCheck_4249_ == 0)
{
v___x_4242_ = v___x_4238_;
v_isShared_4243_ = v_isSharedCheck_4249_;
goto v_resetjp_4241_;
}
else
{
lean_inc(v_val_4240_);
lean_dec(v___x_4238_);
v___x_4242_ = lean_box(0);
v_isShared_4243_ = v_isSharedCheck_4249_;
goto v_resetjp_4241_;
}
v_resetjp_4241_:
{
lean_object* v___x_4244_; lean_object* v___x_4245_; lean_object* v___x_4247_; 
v___x_4244_ = l_Lean_Name_toString(v_val_4240_, v___y_4235_);
v___x_4245_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4245_, 0, v___x_4244_);
if (v_isShared_4243_ == 0)
{
lean_ctor_set(v___x_4242_, 0, v___x_4245_);
v___x_4247_ = v___x_4242_;
goto v_reusejp_4246_;
}
else
{
lean_object* v_reuseFailAlloc_4248_; 
v_reuseFailAlloc_4248_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4248_, 0, v___x_4245_);
v___x_4247_ = v_reuseFailAlloc_4248_;
goto v_reusejp_4246_;
}
v_reusejp_4246_:
{
v___y_4209_ = v___y_4228_;
v___y_4210_ = v___y_4230_;
v___y_4211_ = v___y_4229_;
v___y_4212_ = v___y_4231_;
v___y_4213_ = v___y_4236_;
v___y_4214_ = v___y_4233_;
v___y_4215_ = v___y_4232_;
v___y_4216_ = v___y_4234_;
v___y_4217_ = v___x_4247_;
goto v___jp_4208_;
}
}
}
}
v___jp_4250_:
{
lean_object* v___x_4259_; lean_object* v___x_4260_; 
v___x_4259_ = lean_unsigned_to_nat(0u);
lean_inc(v_data_4226_);
v___x_4260_ = l_Lean_Widget_msgToInteractive(v_data_4226_, v_hasWidgets_4206_, v___x_4259_);
if (lean_obj_tag(v___x_4260_) == 0)
{
lean_object* v_a_4261_; 
v_a_4261_ = lean_ctor_get(v___x_4260_, 0);
lean_inc(v_a_4261_);
lean_dec_ref_known(v___x_4260_, 1);
v___y_4228_ = v___y_4251_;
v___y_4229_ = v___y_4252_;
v___y_4230_ = v___y_4258_;
v___y_4231_ = v___y_4253_;
v___y_4232_ = v___y_4254_;
v___y_4233_ = v___y_4255_;
v___y_4234_ = v___y_4256_;
v___y_4235_ = v___y_4257_;
v___y_4236_ = v_a_4261_;
goto v___jp_4227_;
}
else
{
lean_object* v_a_4262_; lean_object* v___x_4264_; uint8_t v_isShared_4265_; uint8_t v_isSharedCheck_4274_; 
v_a_4262_ = lean_ctor_get(v___x_4260_, 0);
v_isSharedCheck_4274_ = !lean_is_exclusive(v___x_4260_);
if (v_isSharedCheck_4274_ == 0)
{
v___x_4264_ = v___x_4260_;
v_isShared_4265_ = v_isSharedCheck_4274_;
goto v_resetjp_4263_;
}
else
{
lean_inc(v_a_4262_);
lean_dec(v___x_4260_);
v___x_4264_ = lean_box(0);
v_isShared_4265_ = v_isSharedCheck_4274_;
goto v_resetjp_4263_;
}
v_resetjp_4263_:
{
lean_object* v___x_4266_; lean_object* v___x_4267_; lean_object* v___x_4268_; lean_object* v___x_4269_; lean_object* v___x_4270_; lean_object* v___x_4272_; 
v___x_4266_ = ((lean_object*)(l_Lean_Widget_msgToInteractiveDiagnostic___closed__0));
v___x_4267_ = lean_io_error_to_string(v_a_4262_);
v___x_4268_ = lean_string_append(v___x_4266_, v___x_4267_);
lean_dec_ref(v___x_4267_);
v___x_4269_ = ((lean_object*)(l_Lean_Widget_msgToInteractiveDiagnostic___closed__1));
v___x_4270_ = lean_string_append(v___x_4268_, v___x_4269_);
if (v_isShared_4265_ == 0)
{
lean_ctor_set_tag(v___x_4264_, 0);
lean_ctor_set(v___x_4264_, 0, v___x_4270_);
v___x_4272_ = v___x_4264_;
goto v_reusejp_4271_;
}
else
{
lean_object* v_reuseFailAlloc_4273_; 
v_reuseFailAlloc_4273_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4273_, 0, v___x_4270_);
v___x_4272_ = v_reuseFailAlloc_4273_;
goto v_reusejp_4271_;
}
v_reusejp_4271_:
{
v___y_4228_ = v___y_4251_;
v___y_4229_ = v___y_4252_;
v___y_4230_ = v___y_4258_;
v___y_4231_ = v___y_4253_;
v___y_4232_ = v___y_4254_;
v___y_4233_ = v___y_4255_;
v___y_4234_ = v___y_4256_;
v___y_4235_ = v___y_4257_;
v___y_4236_ = v___x_4272_;
goto v___jp_4227_;
}
}
}
}
v___jp_4277_:
{
uint8_t v___x_4285_; 
lean_inc(v_data_4226_);
v___x_4285_ = l_Lean_MessageData_hasTag(v___f_4275_, v_data_4226_);
if (v___x_4285_ == 0)
{
uint8_t v___x_4286_; 
lean_inc(v_data_4226_);
v___x_4286_ = l_Lean_MessageData_hasTag(v___f_4276_, v_data_4226_);
if (v___x_4286_ == 0)
{
lean_object* v___x_4287_; 
v___x_4287_ = lean_box(0);
v___y_4251_ = v___y_4278_;
v___y_4252_ = v___y_4279_;
v___y_4253_ = v___y_4280_;
v___y_4254_ = v___y_4281_;
v___y_4255_ = v___y_4284_;
v___y_4256_ = v___y_4282_;
v___y_4257_ = v___y_4283_;
v___y_4258_ = v___x_4287_;
goto v___jp_4250_;
}
else
{
lean_object* v___x_4288_; 
v___x_4288_ = ((lean_object*)(l_Lean_Widget_msgToInteractiveDiagnostic___closed__5));
v___y_4251_ = v___y_4278_;
v___y_4252_ = v___y_4279_;
v___y_4253_ = v___y_4280_;
v___y_4254_ = v___y_4281_;
v___y_4255_ = v___y_4284_;
v___y_4256_ = v___y_4282_;
v___y_4257_ = v___y_4283_;
v___y_4258_ = v___x_4288_;
goto v___jp_4250_;
}
}
else
{
lean_object* v___x_4289_; 
v___x_4289_ = ((lean_object*)(l_Lean_Widget_msgToInteractiveDiagnostic___closed__7));
v___y_4251_ = v___y_4278_;
v___y_4252_ = v___y_4279_;
v___y_4253_ = v___y_4280_;
v___y_4254_ = v___y_4281_;
v___y_4255_ = v___y_4284_;
v___y_4256_ = v___y_4282_;
v___y_4257_ = v___y_4283_;
v___y_4258_ = v___x_4289_;
goto v___jp_4250_;
}
}
v___jp_4290_:
{
lean_object* v_source_x3f_4296_; uint8_t v___x_4297_; 
v_source_x3f_4296_ = ((lean_object*)(l_Lean_Widget_msgToInteractiveDiagnostic___closed__9));
lean_inc(v_data_4226_);
v___x_4297_ = l_Lean_MessageData_isDeprecationWarning(v_data_4226_);
if (v___x_4297_ == 0)
{
uint8_t v___x_4298_; 
lean_inc(v_data_4226_);
v___x_4298_ = l_Lean_MessageData_isUnusedVariableWarning(v_data_4226_);
if (v___x_4298_ == 0)
{
lean_object* v___x_4299_; 
v___x_4299_ = lean_box(0);
v___y_4278_ = v___y_4291_;
v___y_4279_ = v___y_4295_;
v___y_4280_ = v_source_x3f_4296_;
v___y_4281_ = v___y_4292_;
v___y_4282_ = v___y_4293_;
v___y_4283_ = v___y_4294_;
v___y_4284_ = v___x_4299_;
goto v___jp_4277_;
}
else
{
lean_object* v___x_4300_; 
v___x_4300_ = ((lean_object*)(l_Lean_Widget_msgToInteractiveDiagnostic___closed__11));
v___y_4278_ = v___y_4291_;
v___y_4279_ = v___y_4295_;
v___y_4280_ = v_source_x3f_4296_;
v___y_4281_ = v___y_4292_;
v___y_4282_ = v___y_4293_;
v___y_4283_ = v___y_4294_;
v___y_4284_ = v___x_4300_;
goto v___jp_4277_;
}
}
else
{
lean_object* v___x_4301_; 
v___x_4301_ = ((lean_object*)(l_Lean_Widget_msgToInteractiveDiagnostic___closed__13));
v___y_4278_ = v___y_4291_;
v___y_4279_ = v___y_4295_;
v___y_4280_ = v_source_x3f_4296_;
v___y_4281_ = v___y_4292_;
v___y_4282_ = v___y_4293_;
v___y_4283_ = v___y_4294_;
v___y_4284_ = v___x_4301_;
goto v___jp_4277_;
}
}
v___jp_4302_:
{
lean_object* v___x_4306_; lean_object* v_severity_x3f_4307_; uint8_t v___x_4308_; 
v___x_4306_ = lean_box(v___y_4305_);
v_severity_x3f_4307_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_severity_x3f_4307_, 0, v___x_4306_);
v___x_4308_ = 1;
if (v_isSilent_4225_ == 0)
{
lean_object* v___x_4309_; 
v___x_4309_ = lean_box(0);
v___y_4291_ = v___y_4303_;
v___y_4292_ = v_severity_x3f_4307_;
v___y_4293_ = v___y_4304_;
v___y_4294_ = v___x_4308_;
v___y_4295_ = v___x_4309_;
goto v___jp_4290_;
}
else
{
lean_object* v___x_4310_; 
v___x_4310_ = ((lean_object*)(l_Lean_Widget_msgToInteractiveDiagnostic___closed__14));
v___y_4291_ = v___y_4303_;
v___y_4292_ = v_severity_x3f_4307_;
v___y_4293_ = v___y_4304_;
v___y_4294_ = v___x_4308_;
v___y_4295_ = v___x_4310_;
goto v___jp_4290_;
}
}
v___jp_4312_:
{
lean_object* v_range_4315_; lean_object* v_fullRange_4316_; 
lean_inc_ref(v_low_4311_);
v_range_4315_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_range_4315_, 0, v_low_4311_);
lean_ctor_set(v_range_4315_, 1, v___y_4314_);
v_fullRange_4316_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_fullRange_4316_, 0, v_low_4311_);
lean_ctor_set(v_fullRange_4316_, 1, v___y_4313_);
switch(v_severity_4224_)
{
case 0:
{
uint8_t v___x_4317_; 
v___x_4317_ = 2;
v___y_4303_ = v_fullRange_4316_;
v___y_4304_ = v_range_4315_;
v___y_4305_ = v___x_4317_;
goto v___jp_4302_;
}
case 1:
{
uint8_t v___x_4318_; 
v___x_4318_ = 1;
v___y_4303_ = v_fullRange_4316_;
v___y_4304_ = v_range_4315_;
v___y_4305_ = v___x_4318_;
goto v___jp_4302_;
}
default: 
{
uint8_t v___x_4319_; 
v___x_4319_ = 0;
v___y_4303_ = v_fullRange_4316_;
v___y_4304_ = v_range_4315_;
v___y_4305_ = v___x_4319_;
goto v___jp_4302_;
}
}
}
v___jp_4320_:
{
lean_object* v_fullHigh_4322_; 
lean_inc_ref(v_text_4204_);
v_fullHigh_4322_ = l_Lean_FileMap_leanPosToLspPos(v_text_4204_, v___y_4321_);
if (lean_obj_tag(v_endPos_4222_) == 0)
{
lean_dec_ref(v_pos_4221_);
lean_dec_ref(v_text_4204_);
lean_inc_ref(v_low_4311_);
v___y_4313_ = v_fullHigh_4322_;
v___y_4314_ = v_low_4311_;
goto v___jp_4312_;
}
else
{
if (v_keepFullRange_4223_ == 0)
{
lean_object* v_val_4323_; lean_object* v_line_4324_; lean_object* v_line_4325_; uint8_t v___x_4326_; 
v_val_4323_ = lean_ctor_get(v_endPos_4222_, 0);
lean_inc(v_val_4323_);
lean_dec_ref_known(v_endPos_4222_, 1);
v_line_4324_ = lean_ctor_get(v_pos_4221_, 0);
lean_inc(v_line_4324_);
lean_dec_ref(v_pos_4221_);
v_line_4325_ = lean_ctor_get(v_val_4323_, 0);
v___x_4326_ = lean_nat_dec_lt(v_line_4324_, v_line_4325_);
if (v___x_4326_ == 0)
{
lean_object* v___x_4327_; 
lean_dec(v_line_4324_);
v___x_4327_ = l_Lean_FileMap_leanPosToLspPos(v_text_4204_, v_val_4323_);
v___y_4313_ = v_fullHigh_4322_;
v___y_4314_ = v___x_4327_;
goto v___jp_4312_;
}
else
{
lean_object* v___x_4329_; uint8_t v_isShared_4330_; uint8_t v_isSharedCheck_4338_; 
v_isSharedCheck_4338_ = !lean_is_exclusive(v_val_4323_);
if (v_isSharedCheck_4338_ == 0)
{
lean_object* v_unused_4339_; lean_object* v_unused_4340_; 
v_unused_4339_ = lean_ctor_get(v_val_4323_, 1);
lean_dec(v_unused_4339_);
v_unused_4340_ = lean_ctor_get(v_val_4323_, 0);
lean_dec(v_unused_4340_);
v___x_4329_ = v_val_4323_;
v_isShared_4330_ = v_isSharedCheck_4338_;
goto v_resetjp_4328_;
}
else
{
lean_dec(v_val_4323_);
v___x_4329_ = lean_box(0);
v_isShared_4330_ = v_isSharedCheck_4338_;
goto v_resetjp_4328_;
}
v_resetjp_4328_:
{
lean_object* v___x_4331_; lean_object* v___x_4332_; lean_object* v___x_4333_; lean_object* v___x_4335_; 
v___x_4331_ = lean_unsigned_to_nat(1u);
v___x_4332_ = lean_nat_add(v_line_4324_, v___x_4331_);
lean_dec(v_line_4324_);
v___x_4333_ = lean_unsigned_to_nat(0u);
if (v_isShared_4330_ == 0)
{
lean_ctor_set(v___x_4329_, 1, v___x_4333_);
lean_ctor_set(v___x_4329_, 0, v___x_4332_);
v___x_4335_ = v___x_4329_;
goto v_reusejp_4334_;
}
else
{
lean_object* v_reuseFailAlloc_4337_; 
v_reuseFailAlloc_4337_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4337_, 0, v___x_4332_);
lean_ctor_set(v_reuseFailAlloc_4337_, 1, v___x_4333_);
v___x_4335_ = v_reuseFailAlloc_4337_;
goto v_reusejp_4334_;
}
v_reusejp_4334_:
{
lean_object* v___x_4336_; 
v___x_4336_ = l_Lean_FileMap_leanPosToLspPos(v_text_4204_, v___x_4335_);
v___y_4313_ = v_fullHigh_4322_;
v___y_4314_ = v___x_4336_;
goto v___jp_4312_;
}
}
}
}
else
{
lean_object* v_val_4341_; lean_object* v___x_4342_; 
lean_dec_ref(v_pos_4221_);
v_val_4341_ = lean_ctor_get(v_endPos_4222_, 0);
lean_inc(v_val_4341_);
lean_dec_ref_known(v_endPos_4222_, 1);
v___x_4342_ = l_Lean_FileMap_leanPosToLspPos(v_text_4204_, v_val_4341_);
v___y_4313_ = v_fullHigh_4322_;
v___y_4314_ = v___x_4342_;
goto v___jp_4312_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_msgToInteractiveDiagnostic___boxed(lean_object* v_text_4344_, lean_object* v_m_4345_, lean_object* v_hasWidgets_4346_, lean_object* v_a_4347_){
_start:
{
uint8_t v_hasWidgets_boxed_4348_; lean_object* v_res_4349_; 
v_hasWidgets_boxed_4348_ = lean_unbox(v_hasWidgets_4346_);
v_res_4349_ = l_Lean_Widget_msgToInteractiveDiagnostic(v_text_4344_, v_m_4345_, v_hasWidgets_boxed_4348_);
return v_res_4349_;
}
}
lean_object* runtime_initialize_Lean_Server_Utils(uint8_t builtin);
lean_object* runtime_initialize_Lean_Widget_InteractiveGoal(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Array_Subarray_Split(uint8_t builtin);
lean_object* runtime_initialize_Lean_Linter_UnusedVariables(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Widget_InteractiveDiagnostic(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Server_Utils(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Widget_InteractiveGoal(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Array_Subarray_Split(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Linter_UnusedVariables(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Widget_instImpl_00___x40_Lean_Widget_InteractiveDiagnostic_72002168____hygCtx___hyg_14_ = _init_l_Lean_Widget_instImpl_00___x40_Lean_Widget_InteractiveDiagnostic_72002168____hygCtx___hyg_14_();
lean_mark_persistent(l_Lean_Widget_instImpl_00___x40_Lean_Widget_InteractiveDiagnostic_72002168____hygCtx___hyg_14_);
l_Lean_Widget_instTypeNameLazyTraceChildren = _init_l_Lean_Widget_instTypeNameLazyTraceChildren();
lean_mark_persistent(l_Lean_Widget_instTypeNameLazyTraceChildren);
l_Lean_Widget_instInhabitedMsgEmbed_default = _init_l_Lean_Widget_instInhabitedMsgEmbed_default();
lean_mark_persistent(l_Lean_Widget_instInhabitedMsgEmbed_default);
l_Lean_Widget_instInhabitedMsgEmbed = _init_l_Lean_Widget_instInhabitedMsgEmbed();
lean_mark_persistent(l_Lean_Widget_instInhabitedMsgEmbed);
l_Lean_Widget_instTypeNameInteractiveMessage_unsafe__1 = _init_l_Lean_Widget_instTypeNameInteractiveMessage_unsafe__1();
lean_mark_persistent(l_Lean_Widget_instTypeNameInteractiveMessage_unsafe__1);
l_Lean_Widget_instTypeNameInteractiveMessage = _init_l_Lean_Widget_instTypeNameInteractiveMessage();
lean_mark_persistent(l_Lean_Widget_instTypeNameInteractiveMessage);
l_Lean_Widget_instInhabitedEmbedFmt_default = _init_l_Lean_Widget_instInhabitedEmbedFmt_default();
lean_mark_persistent(l_Lean_Widget_instInhabitedEmbedFmt_default);
l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_instInhabitedEmbedFmt = _init_l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_instInhabitedEmbedFmt();
lean_mark_persistent(l___private_Lean_Widget_InteractiveDiagnostic_0__Lean_Widget_instInhabitedEmbedFmt);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Widget_InteractiveDiagnostic(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Server_Utils(uint8_t builtin);
lean_object* initialize_Lean_Widget_InteractiveGoal(uint8_t builtin);
lean_object* initialize_Init_Data_Array_Subarray_Split(uint8_t builtin);
lean_object* initialize_Lean_Linter_UnusedVariables(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Widget_InteractiveDiagnostic(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Server_Utils(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Widget_InteractiveGoal(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Array_Subarray_Split(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Linter_UnusedVariables(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Widget_InteractiveDiagnostic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Widget_InteractiveDiagnostic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Widget_InteractiveDiagnostic(builtin);
}
#ifdef __cplusplus
}
#endif

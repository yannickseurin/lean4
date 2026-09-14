// Lean compiler output
// Module: Lean.Server.Completion.CompletionCollectors
// Imports: public import Lean.Data.FuzzyMatching public import Lean.Elab.Tactic.Doc public import Lean.Server.Completion.CompletionResolution public import Lean.Server.Completion.EligibleHeaderDecls public import Lean.Server.RequestCancellation
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
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_privateToUserName_x3f(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_mkPrivateName(lean_object*, lean_object*);
uint8_t l_Lean_Name_isPrefixOf(lean_object*, lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* l_Lean_Name_replacePrefix(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
uint8_t l_Lean_String_charactersIn(lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
uint8_t l_Lean_Name_isAtomic(lean_object*);
uint8_t l_Lean_Name_isSuffixOf(lean_object*, lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
uint8_t l_Lean_Server_Completion_allowCompletion(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_getString_x21(lean_object*);
lean_object* l_Lean_Environment_find_x3f(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Server_Completion_getCompletionKindForDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_Completion_getCompletionTagsForDecl___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Name_toString(lean_object*, uint8_t);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
size_t lean_array_size(lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* l_Lean_LocalDecl_userName(lean_object*);
lean_object* l_Lean_LocalDecl_fvarId(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Name_getPrefix(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint8_t l_Lean_isPrivatePrefix(lean_object*);
uint8_t lean_string_compare(lean_object*, lean_object*);
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
lean_object* l_Lean_FVarId_getDecl___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_type(lean_object*);
lean_object* l_Lean_Expr_consumeMData(lean_object*);
lean_object* l_Lean_Server_Completion_unfoldDefinitionGuarded_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
lean_object* l_Lean_ConstantInfo_type(lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingImp(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ConstantInfo_name(lean_object*);
lean_object* l_Lean_getStructureFieldsFlattened(lean_object*, lean_object*, uint8_t);
lean_object* lean_st_mk_ref(lean_object*);
lean_object* l_Lean_Elab_ContextInfo_runMetaM___redArg(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Server_RequestCancellation_requestCancelled;
uint8_t l_Lean_Name_isInternal(lean_object*);
uint8_t l_Lean_Environment_contains(lean_object*, lean_object*, uint8_t);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Subarray_drop___redArg(lean_object*, lean_object*);
lean_object* l_Subarray_get___redArg(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_Zipper_prependNode___redArg(lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
extern lean_object* l_Lean_errorExplanationExt;
lean_object* l_Lean_SimplePersistentEnvExtension_getState___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_fswap(lean_object*, lean_object*, lean_object*);
uint8_t lean_string_dec_lt(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
lean_object* l_Lean_FileMap_utf8PosToLspPos(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getRange_x3f(lean_object*, uint8_t);
lean_object* l_Char_utf8Size(uint32_t);
lean_object* l_Lean_Syntax_getSubstring_x3f(lean_object*, uint8_t, uint8_t);
lean_object* lean_string_utf8_extract(lean_object*, lean_object*, lean_object*);
uint8_t lean_string_utf8_at_end(lean_object*, lean_object*);
uint32_t lean_string_utf8_get(lean_object*, lean_object*);
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* l_Lean_getOptionDecls();
lean_object* lean_data_value_to_string(lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* lean_io_error_to_string(lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_Server_Completion_getDotCompletionTypeNames(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_TreeSet_ofArray___redArg(lean_object*, lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
uint8_t l_Lean_Expr_isForall(lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAuxAux(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_whnfCoreUnfoldingAnnotations(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
uint8_t l_Lean_Exception_isRuntime(lean_object*);
lean_object* l_Lean_getAliasState(lean_object*);
uint8_t l_Lean_Server_RequestCancellationToken_wasCancelledByCancelRequest(lean_object*);
uint8_t l_Lean_Meta_allowCompletion(lean_object*, lean_object*);
lean_object* l_Lean_Server_Completion_getCompletionKindForDecl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_Completion_getCompletionTagsForDecl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_Completion_getEligibleHeaderDecls(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Environment_constants(lean_object*);
lean_object* l_Lean_Parser_getTokenTable(lean_object*);
lean_object* l_Lean_Data_Trie_findPrefix___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Environment_getNamespaces(lean_object*);
lean_object* lean_string_length(lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedName;
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
uint8_t l_Lean_Name_hasMacroScopes(lean_object*);
lean_object* l_Lean_Syntax_getHeadInfo(lean_object*);
lean_object* l_Lean_Name_eraseMacroScopes(lean_object*);
lean_object* l_Lean_ErrorExplanation_summaryWithSeverity(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* l_Array_toSubarray___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_String_intercalate(lean_object*, lean_object*);
lean_object* l_Lean_Server_Completion_getDotIdCompletionTypeNames(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
lean_object* lean_array_mk(lean_object*);
lean_object* lean_array_pop(lean_object*);
lean_object* l_Array_takeWhile___redArg(lean_object*, lean_object*);
lean_object* l_Array_reverse___redArg(lean_object*);
lean_object* l_Lean_Name_components(lean_object*);
lean_object* l_StateT_instMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_instMonad___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_instMonad___redArg___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_instMonad___redArg___lam__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_pure(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_bind(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_lift(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_instMonadEnvOfMonadLift___redArg___lam__0(lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadLiftTOfMonadLift___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_Completion_forEligibleDeclsM___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Doc_allTacticDocs(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_LocalContext_empty;
static const lean_ctor_object l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addItem___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addItem___redArg___closed__0 = (const lean_object*)&l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addItem___redArg___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addItem___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addItem___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addItem(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addItem___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addUnresolvedCompletionItem___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addUnresolvedCompletionItem___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addUnresolvedCompletionItem(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addUnresolvedCompletionItem___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addUnresolvedCompletionItemForDecl___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addUnresolvedCompletionItemForDecl___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addUnresolvedCompletionItemForDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addUnresolvedCompletionItemForDecl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addKeywordCompletionItem___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "keyword"};
static const lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addKeywordCompletionItem___redArg___closed__0 = (const lean_object*)&l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addKeywordCompletionItem___redArg___closed__0_value;
static const lean_ctor_object l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addKeywordCompletionItem___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addKeywordCompletionItem___redArg___closed__0_value)}};
static const lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addKeywordCompletionItem___redArg___closed__1 = (const lean_object*)&l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addKeywordCompletionItem___redArg___closed__1_value;
static const lean_ctor_object l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addKeywordCompletionItem___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(13) << 1) | 1))}};
static const lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addKeywordCompletionItem___redArg___closed__2 = (const lean_object*)&l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addKeywordCompletionItem___redArg___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addKeywordCompletionItem___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addKeywordCompletionItem___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addKeywordCompletionItem(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addKeywordCompletionItem___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addNamespaceCompletionItem___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "namespace"};
static const lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addNamespaceCompletionItem___redArg___closed__0 = (const lean_object*)&l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addNamespaceCompletionItem___redArg___closed__0_value;
static const lean_ctor_object l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addNamespaceCompletionItem___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addNamespaceCompletionItem___redArg___closed__0_value)}};
static const lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addNamespaceCompletionItem___redArg___closed__1 = (const lean_object*)&l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addNamespaceCompletionItem___redArg___closed__1_value;
static const lean_ctor_object l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addNamespaceCompletionItem___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(8) << 1) | 1))}};
static const lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addNamespaceCompletionItem___redArg___closed__2 = (const lean_object*)&l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addNamespaceCompletionItem___redArg___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addNamespaceCompletionItem___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addNamespaceCompletionItem___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addNamespaceCompletionItem(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addNamespaceCompletionItem___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_runM___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_runM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_runM___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_runM___closed__0 = (const lean_object*)&l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_runM___closed__0_value;
static lean_once_cell_t l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_runM___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_runM___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_runM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_runM___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_normPrivateName_x3f___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_normPrivateName_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_normPrivateName_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_normPrivateName_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_matchDecl_x3f___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_matchDecl_x3f___redArg___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_matchDecl_x3f___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_matchDecl_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_matchDecl_x3f(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_matchDecl_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___redArg___lam__2(lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___redArg___lam__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___redArg___lam__3___closed__0 = (const lean_object*)&l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___redArg___lam__3___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___redArg___lam__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___redArg___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___redArg___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___redArg___lam__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___redArg___lam__8(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___redArg___lam__8___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_matchAtomic(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_matchAtomic___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_truncate_go_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_truncate_go_spec__0___closed__0;
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_truncate_go_spec__0(lean_object*);
static const lean_string_object l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_truncate_go___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 44, .m_capacity = 44, .m_length = 43, .m_data = "Lean.Server.Completion.CompletionCollectors"};
static const lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_truncate_go___closed__0 = (const lean_object*)&l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_truncate_go___closed__0_value;
static const lean_string_object l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_truncate_go___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 90, .m_capacity = 90, .m_length = 89, .m_data = "_private.Lean.Server.Completion.CompletionCollectors.0.Lean.Server.Completion.truncate.go"};
static const lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_truncate_go___closed__1 = (const lean_object*)&l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_truncate_go___closed__1_value;
static const lean_string_object l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_truncate_go___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "unreachable code has been reached"};
static const lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_truncate_go___closed__2 = (const lean_object*)&l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_truncate_go___closed__2_value;
static lean_once_cell_t l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_truncate_go___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_truncate_go___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_truncate_go(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_truncate(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f_visitNamespaces(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f_visitNamespaces___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f___lam__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_elem___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_elem___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f_spec__1_spec__1___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f_spec__1_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f_spec__1___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f_spec__1(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f_spec__1_spec__1(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_completeNamespaces_spec__0___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_completeNamespaces_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_completeNamespaces(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_completeNamespaces___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_completeNamespaces_spec__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_completeNamespaces_spec__0___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_stripPrivatePrefix(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_stripPrivatePrefix___boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_cmpModPrivate(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_cmpModPrivate___boxed(lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_NameSetModPrivate_ofArray___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_cmpModPrivate___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_NameSetModPrivate_ofArray___closed__0 = (const lean_object*)&l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_NameSetModPrivate_ofArray___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_NameSetModPrivate_ofArray(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_NameSetModPrivate_ofArray___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_getDotCompletionTypeNameSet_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_getDotCompletionTypeNameSet_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_getDotCompletionTypeNameSet_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_getDotCompletionTypeNameSet_spec__2___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_getDotCompletionTypeNameSet_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_getDotCompletionTypeNameSet(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_getDotCompletionTypeNameSet___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_getDotCompletionTypeNameSet_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_getDotCompletionTypeNameSet_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_getDotCompletionTypeNameSet_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_getDotCompletionTypeNameSet_spec__2(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_getDotCompletionTypeNameSet_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDefEqToAppOf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDefEqToAppOf___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotCompletionMethod_spec__1___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotCompletionMethod_spec__1___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotCompletionMethod_spec__1___redArg(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotCompletionMethod_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotCompletionMethod_spec__1(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotCompletionMethod_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotCompletionMethod_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotCompletionMethod_spec__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotCompletionMethod_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotCompletionMethod_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotCompletionMethod_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotCompletionMethod___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotCompletionMethod___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotCompletionMethod(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotCompletionMethod___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotIdCompletionMethod_visit_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotIdCompletionMethod_visit_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotIdCompletionMethod_visit_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotIdCompletionMethod_visit_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotIdCompletionMethod_visit_spec__1___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotIdCompletionMethod_visit_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotIdCompletionMethod_visit_spec__1(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotIdCompletionMethod_visit_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotIdCompletionMethod_visit___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotIdCompletionMethod_visit(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotIdCompletionMethod_visit___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotIdCompletionMethod_visit___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotIdCompletionMethod(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotIdCompletionMethod___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_searchAlias(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_searchAlias___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Server_CancellableT_checkCancelled___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Server_CancellableT_checkCancelled___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__1___redArg___closed__0 = (const lean_object*)&l_Lean_Server_CancellableT_checkCancelled___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__1___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Server_CancellableT_checkCancelled___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__1___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_CancellableT_checkCancelled___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_CancellableT_checkCancelled___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_CancellableT_checkCancelled___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore___lam__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore___lam__1(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__6___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5_spec__9_spec__14_spec__21___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5_spec__9_spec__14_spec__21___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5_spec__9_spec__14_spec__20___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5_spec__9_spec__14___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5_spec__9_spec__14___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5_spec__9_spec__14_spec__20___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3_spec__9_spec__16_spec__23___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3_spec__9_spec__16_spec__23___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3_spec__9_spec__16_spec__22___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3_spec__9_spec__16___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3_spec__9_spec__16___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3_spec__9_spec__16_spec__22___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__4(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__11_spec__17_spec__20___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__11_spec__17_spec__20___redArg___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__11_spec__17_spec__20___redArg___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__11_spec__17_spec__20___redArg(lean_object*, uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__11_spec__17_spec__20___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__11_spec__17(lean_object*, uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__11_spec__17___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__11(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__11_spec__16(lean_object*, lean_object*, uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__11_spec__16___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__12_spec__19___redArg(lean_object*, uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__12_spec__19___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__12(lean_object*, uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__5___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__4___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__4___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__4_spec__8___redArg(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__4_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__4___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__4(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__5(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__6(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__4_spec__8(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__4_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5_spec__9___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__12_spec__19(lean_object*, uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__12_spec__19___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3_spec__9___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5_spec__9_spec__14(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5_spec__9_spec__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__11_spec__17_spec__20(lean_object*, uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__11_spec__17_spec__20___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3_spec__9_spec__16(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3_spec__9_spec__16___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5_spec__9_spec__14_spec__20(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5_spec__9_spec__14_spec__20___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5_spec__9_spec__14_spec__21(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5_spec__9_spec__14_spec__21___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3_spec__9_spec__16_spec__22(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3_spec__9_spec__16_spec__22___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3_spec__9_spec__16_spec__23(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3_spec__9_spec__16_spec__23___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Server_Completion_idCompletion(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Completion_idCompletion___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Server_Completion_dotCompletion_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Server_Completion_dotCompletion_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Server_Completion_dotCompletion_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Server_Completion_dotCompletion_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Completion_dotCompletion___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Completion_dotCompletion___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Completion_dotCompletion___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Completion_dotCompletion___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Completion_dotCompletion(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Completion_dotCompletion___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Completion_dotIdCompletion___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Completion_dotIdCompletion___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Completion_dotIdCompletion___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Completion_dotIdCompletion___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Completion_dotIdCompletion(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Completion_dotIdCompletion___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_Completion_fieldIdCompletion_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "field"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_Completion_fieldIdCompletion_spec__0___redArg___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_Completion_fieldIdCompletion_spec__0___redArg___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_Completion_fieldIdCompletion_spec__0___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_Completion_fieldIdCompletion_spec__0___redArg___closed__0_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_Completion_fieldIdCompletion_spec__0___redArg___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_Completion_fieldIdCompletion_spec__0___redArg___closed__1_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_Completion_fieldIdCompletion_spec__0___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(4) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_Completion_fieldIdCompletion_spec__0___redArg___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_Completion_fieldIdCompletion_spec__0___redArg___closed__2_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_Completion_fieldIdCompletion_spec__0___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_Completion_fieldIdCompletion_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Completion_fieldIdCompletion___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Completion_fieldIdCompletion___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Server_Completion_fieldIdCompletion___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_Server_Completion_fieldIdCompletion___closed__0 = (const lean_object*)&l_Lean_Server_Completion_fieldIdCompletion___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Server_Completion_fieldIdCompletion(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Completion_fieldIdCompletion___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_Completion_fieldIdCompletion_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_Completion_fieldIdCompletion_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion___redArg___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion___redArg___lam__0___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "."};
static const lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion___redArg___closed__0 = (const lean_object*)&l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion___redArg___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Server_Completion_optionCompletion___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "("};
static const lean_object* l_Lean_Server_Completion_optionCompletion___lam__0___closed__0 = (const lean_object*)&l_Lean_Server_Completion_optionCompletion___lam__0___closed__0_value;
static const lean_string_object l_Lean_Server_Completion_optionCompletion___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "), "};
static const lean_object* l_Lean_Server_Completion_optionCompletion___lam__0___closed__1 = (const lean_object*)&l_Lean_Server_Completion_optionCompletion___lam__0___closed__1_value;
static const lean_ctor_object l_Lean_Server_Completion_optionCompletion___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(9) << 1) | 1))}};
static const lean_object* l_Lean_Server_Completion_optionCompletion___lam__0___closed__2 = (const lean_object*)&l_Lean_Server_Completion_optionCompletion___lam__0___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Server_Completion_optionCompletion___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Completion_optionCompletion___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion___at___00Lean_Server_Completion_optionCompletion_spec__0_spec__0(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion___at___00Lean_Server_Completion_optionCompletion_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion___at___00Lean_Server_Completion_optionCompletion_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion___at___00Lean_Server_Completion_optionCompletion_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Completion_optionCompletion___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Completion_optionCompletion___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Server_Completion_optionCompletion___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_Completion_optionCompletion___closed__0;
static lean_once_cell_t l_Lean_Server_Completion_optionCompletion___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_Completion_optionCompletion___closed__1;
static lean_once_cell_t l_Lean_Server_Completion_optionCompletion___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_Completion_optionCompletion___closed__2;
static lean_once_cell_t l_Lean_Server_Completion_optionCompletion___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_Completion_optionCompletion___closed__3;
static lean_once_cell_t l_Lean_Server_Completion_optionCompletion___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_Completion_optionCompletion___closed__4;
LEAN_EXPORT lean_object* l_Lean_Server_Completion_optionCompletion(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Completion_optionCompletion___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Server_Completion_errorNameCompletion___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "error name"};
static const lean_object* l_Lean_Server_Completion_errorNameCompletion___lam__0___closed__0 = (const lean_object*)&l_Lean_Server_Completion_errorNameCompletion___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_Server_Completion_errorNameCompletion___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Server_Completion_errorNameCompletion___lam__0___closed__0_value)}};
static const lean_object* l_Lean_Server_Completion_errorNameCompletion___lam__0___closed__1 = (const lean_object*)&l_Lean_Server_Completion_errorNameCompletion___lam__0___closed__1_value;
static const lean_array_object l_Lean_Server_Completion_errorNameCompletion___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 246}, .m_size = 1, .m_capacity = 1, .m_data = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Server_Completion_errorNameCompletion___lam__0___closed__2 = (const lean_object*)&l_Lean_Server_Completion_errorNameCompletion___lam__0___closed__2_value;
static const lean_ctor_object l_Lean_Server_Completion_errorNameCompletion___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Server_Completion_errorNameCompletion___lam__0___closed__2_value)}};
static const lean_object* l_Lean_Server_Completion_errorNameCompletion___lam__0___closed__3 = (const lean_object*)&l_Lean_Server_Completion_errorNameCompletion___lam__0___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_Server_Completion_errorNameCompletion___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Completion_errorNameCompletion___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0_spec__1_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0_spec__1_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0_spec__1___redArg___lam__0(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0_spec__1___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0___redArg___closed__0 = (const lean_object*)&l_Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion___at___00Lean_Server_Completion_errorNameCompletion_spec__1_spec__3(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion___at___00Lean_Server_Completion_errorNameCompletion_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion___at___00Lean_Server_Completion_errorNameCompletion_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion___at___00Lean_Server_Completion_errorNameCompletion_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Completion_errorNameCompletion___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Completion_errorNameCompletion___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Completion_errorNameCompletion(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Completion_errorNameCompletion___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0_spec__1_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_Completion_tacticCompletion_spec__0(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_Completion_tacticCompletion_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Completion_tacticCompletion___lam__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Completion_tacticCompletion___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Completion_tacticCompletion(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Completion_tacticCompletion___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_findEndSectionCompletionCandidates_mkCandidate_spec__0___redArg(lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_findEndSectionCompletionCandidates_mkCandidate___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_findEndSectionCompletionCandidates_mkCandidate___closed__0 = (const lean_object*)&l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_findEndSectionCompletionCandidates_mkCandidate___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_findEndSectionCompletionCandidates_mkCandidate(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_findEndSectionCompletionCandidates_mkCandidate_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_findEndSectionCompletionCandidates_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_findEndSectionCompletionCandidates_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_findEndSectionCompletionCandidates_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_findEndSectionCompletionCandidates_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_findEndSectionCompletionCandidates(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_findEndSectionCompletionCandidates___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_findEndSectionCompletionCandidates_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_findEndSectionCompletionCandidates_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_findEndSectionCompletionCandidates_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_findEndSectionCompletionCandidates_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Server_Completion_endSectionCompletion___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Completion_endSectionCompletion___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_Completion_endSectionCompletion_spec__1(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_Completion_endSectionCompletion_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_Completion_endSectionCompletion_spec__0(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_Completion_endSectionCompletion_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Server_Completion_endSectionCompletion___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Server_Completion_endSectionCompletion___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Server_Completion_endSectionCompletion___closed__0 = (const lean_object*)&l_Lean_Server_Completion_endSectionCompletion___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Server_Completion_endSectionCompletion(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Completion_endSectionCompletion___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addItem___redArg(lean_object* v_item_3_, lean_object* v_id_x3f_4_, lean_object* v_a_5_, lean_object* v_a_6_){
_start:
{
lean_object* v_uri_8_; lean_object* v_pos_9_; lean_object* v_completionInfoPos_10_; lean_object* v_label_11_; lean_object* v_detail_x3f_12_; lean_object* v_documentation_x3f_13_; lean_object* v_kind_x3f_14_; lean_object* v_textEdit_x3f_15_; lean_object* v_sortText_x3f_16_; lean_object* v_tags_x3f_17_; lean_object* v___x_19_; uint8_t v_isShared_20_; uint8_t v_isSharedCheck_32_; 
v_uri_8_ = lean_ctor_get(v_a_5_, 0);
v_pos_9_ = lean_ctor_get(v_a_5_, 1);
v_completionInfoPos_10_ = lean_ctor_get(v_a_5_, 2);
v_label_11_ = lean_ctor_get(v_item_3_, 0);
v_detail_x3f_12_ = lean_ctor_get(v_item_3_, 1);
v_documentation_x3f_13_ = lean_ctor_get(v_item_3_, 2);
v_kind_x3f_14_ = lean_ctor_get(v_item_3_, 3);
v_textEdit_x3f_15_ = lean_ctor_get(v_item_3_, 4);
v_sortText_x3f_16_ = lean_ctor_get(v_item_3_, 5);
v_tags_x3f_17_ = lean_ctor_get(v_item_3_, 7);
v_isSharedCheck_32_ = !lean_is_exclusive(v_item_3_);
if (v_isSharedCheck_32_ == 0)
{
lean_object* v_unused_33_; 
v_unused_33_ = lean_ctor_get(v_item_3_, 6);
lean_dec(v_unused_33_);
v___x_19_ = v_item_3_;
v_isShared_20_ = v_isSharedCheck_32_;
goto v_resetjp_18_;
}
else
{
lean_inc(v_tags_x3f_17_);
lean_inc(v_sortText_x3f_16_);
lean_inc(v_textEdit_x3f_15_);
lean_inc(v_kind_x3f_14_);
lean_inc(v_documentation_x3f_13_);
lean_inc(v_detail_x3f_12_);
lean_inc(v_label_11_);
lean_dec(v_item_3_);
v___x_19_ = lean_box(0);
v_isShared_20_ = v_isSharedCheck_32_;
goto v_resetjp_18_;
}
v_resetjp_18_:
{
lean_object* v___x_21_; lean_object* v___x_22_; lean_object* v___x_23_; lean_object* v___x_25_; 
lean_inc(v_completionInfoPos_10_);
v___x_21_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_21_, 0, v_completionInfoPos_10_);
lean_inc_ref(v_pos_9_);
lean_inc_ref(v_uri_8_);
v___x_22_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_22_, 0, v_uri_8_);
lean_ctor_set(v___x_22_, 1, v_pos_9_);
lean_ctor_set(v___x_22_, 2, v___x_21_);
lean_ctor_set(v___x_22_, 3, v_id_x3f_4_);
v___x_23_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_23_, 0, v___x_22_);
if (v_isShared_20_ == 0)
{
lean_ctor_set(v___x_19_, 6, v___x_23_);
v___x_25_ = v___x_19_;
goto v_reusejp_24_;
}
else
{
lean_object* v_reuseFailAlloc_31_; 
v_reuseFailAlloc_31_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v_reuseFailAlloc_31_, 0, v_label_11_);
lean_ctor_set(v_reuseFailAlloc_31_, 1, v_detail_x3f_12_);
lean_ctor_set(v_reuseFailAlloc_31_, 2, v_documentation_x3f_13_);
lean_ctor_set(v_reuseFailAlloc_31_, 3, v_kind_x3f_14_);
lean_ctor_set(v_reuseFailAlloc_31_, 4, v_textEdit_x3f_15_);
lean_ctor_set(v_reuseFailAlloc_31_, 5, v_sortText_x3f_16_);
lean_ctor_set(v_reuseFailAlloc_31_, 6, v___x_23_);
lean_ctor_set(v_reuseFailAlloc_31_, 7, v_tags_x3f_17_);
v___x_25_ = v_reuseFailAlloc_31_;
goto v_reusejp_24_;
}
v_reusejp_24_:
{
lean_object* v___x_26_; lean_object* v___x_27_; lean_object* v___x_28_; lean_object* v___x_29_; lean_object* v___x_30_; 
v___x_26_ = lean_st_ref_take(v_a_6_);
v___x_27_ = lean_array_push(v___x_26_, v___x_25_);
v___x_28_ = lean_st_ref_put(v_a_6_, v___x_27_);
v___x_29_ = ((lean_object*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addItem___redArg___closed__0));
v___x_30_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_30_, 0, v___x_29_);
return v___x_30_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addItem___redArg___boxed(lean_object* v_item_34_, lean_object* v_id_x3f_35_, lean_object* v_a_36_, lean_object* v_a_37_, lean_object* v_a_38_){
_start:
{
lean_object* v_res_39_; 
v_res_39_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addItem___redArg(v_item_34_, v_id_x3f_35_, v_a_36_, v_a_37_);
lean_dec(v_a_37_);
lean_dec_ref(v_a_36_);
return v_res_39_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addItem(lean_object* v_item_40_, lean_object* v_id_x3f_41_, lean_object* v_a_42_, lean_object* v_a_43_, lean_object* v_a_44_, lean_object* v_a_45_, lean_object* v_a_46_, lean_object* v_a_47_, lean_object* v_a_48_){
_start:
{
lean_object* v___x_50_; 
v___x_50_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addItem___redArg(v_item_40_, v_id_x3f_41_, v_a_42_, v_a_43_);
return v___x_50_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addItem___boxed(lean_object* v_item_51_, lean_object* v_id_x3f_52_, lean_object* v_a_53_, lean_object* v_a_54_, lean_object* v_a_55_, lean_object* v_a_56_, lean_object* v_a_57_, lean_object* v_a_58_, lean_object* v_a_59_, lean_object* v_a_60_){
_start:
{
lean_object* v_res_61_; 
v_res_61_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addItem(v_item_51_, v_id_x3f_52_, v_a_53_, v_a_54_, v_a_55_, v_a_56_, v_a_57_, v_a_58_, v_a_59_);
lean_dec(v_a_59_);
lean_dec_ref(v_a_58_);
lean_dec(v_a_57_);
lean_dec_ref(v_a_56_);
lean_dec_ref(v_a_55_);
lean_dec(v_a_54_);
lean_dec_ref(v_a_53_);
return v_res_61_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addUnresolvedCompletionItem___redArg(lean_object* v_label_62_, lean_object* v_id_63_, uint8_t v_kind_64_, lean_object* v_tags_65_, lean_object* v_a_66_, lean_object* v_a_67_){
_start:
{
uint8_t v___x_69_; lean_object* v___x_70_; lean_object* v___x_71_; lean_object* v___x_72_; lean_object* v___x_73_; lean_object* v___x_74_; lean_object* v_item_75_; lean_object* v___x_76_; lean_object* v___x_77_; 
v___x_69_ = 1;
v___x_70_ = l_Lean_Name_toString(v_label_62_, v___x_69_);
v___x_71_ = lean_box(0);
v___x_72_ = lean_box(v_kind_64_);
v___x_73_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_73_, 0, v___x_72_);
v___x_74_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_74_, 0, v_tags_65_);
v_item_75_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v_item_75_, 0, v___x_70_);
lean_ctor_set(v_item_75_, 1, v___x_71_);
lean_ctor_set(v_item_75_, 2, v___x_71_);
lean_ctor_set(v_item_75_, 3, v___x_73_);
lean_ctor_set(v_item_75_, 4, v___x_71_);
lean_ctor_set(v_item_75_, 5, v___x_71_);
lean_ctor_set(v_item_75_, 6, v___x_71_);
lean_ctor_set(v_item_75_, 7, v___x_74_);
v___x_76_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_76_, 0, v_id_63_);
v___x_77_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addItem___redArg(v_item_75_, v___x_76_, v_a_66_, v_a_67_);
return v___x_77_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addUnresolvedCompletionItem___redArg___boxed(lean_object* v_label_78_, lean_object* v_id_79_, lean_object* v_kind_80_, lean_object* v_tags_81_, lean_object* v_a_82_, lean_object* v_a_83_, lean_object* v_a_84_){
_start:
{
uint8_t v_kind_boxed_85_; lean_object* v_res_86_; 
v_kind_boxed_85_ = lean_unbox(v_kind_80_);
v_res_86_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addUnresolvedCompletionItem___redArg(v_label_78_, v_id_79_, v_kind_boxed_85_, v_tags_81_, v_a_82_, v_a_83_);
lean_dec(v_a_83_);
lean_dec_ref(v_a_82_);
return v_res_86_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addUnresolvedCompletionItem(lean_object* v_label_87_, lean_object* v_id_88_, uint8_t v_kind_89_, lean_object* v_tags_90_, lean_object* v_a_91_, lean_object* v_a_92_, lean_object* v_a_93_, lean_object* v_a_94_, lean_object* v_a_95_, lean_object* v_a_96_, lean_object* v_a_97_){
_start:
{
lean_object* v___x_99_; 
v___x_99_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addUnresolvedCompletionItem___redArg(v_label_87_, v_id_88_, v_kind_89_, v_tags_90_, v_a_91_, v_a_92_);
return v___x_99_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addUnresolvedCompletionItem___boxed(lean_object* v_label_100_, lean_object* v_id_101_, lean_object* v_kind_102_, lean_object* v_tags_103_, lean_object* v_a_104_, lean_object* v_a_105_, lean_object* v_a_106_, lean_object* v_a_107_, lean_object* v_a_108_, lean_object* v_a_109_, lean_object* v_a_110_, lean_object* v_a_111_){
_start:
{
uint8_t v_kind_boxed_112_; lean_object* v_res_113_; 
v_kind_boxed_112_ = lean_unbox(v_kind_102_);
v_res_113_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addUnresolvedCompletionItem(v_label_100_, v_id_101_, v_kind_boxed_112_, v_tags_103_, v_a_104_, v_a_105_, v_a_106_, v_a_107_, v_a_108_, v_a_109_, v_a_110_);
lean_dec(v_a_110_);
lean_dec_ref(v_a_109_);
lean_dec(v_a_108_);
lean_dec_ref(v_a_107_);
lean_dec_ref(v_a_106_);
lean_dec(v_a_105_);
lean_dec_ref(v_a_104_);
return v_res_113_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addUnresolvedCompletionItemForDecl___redArg(lean_object* v_label_114_, lean_object* v_declName_115_, lean_object* v_a_116_, lean_object* v_a_117_, lean_object* v_a_118_, lean_object* v_a_119_, lean_object* v_a_120_, lean_object* v_a_121_){
_start:
{
lean_object* v___x_123_; lean_object* v_env_124_; uint8_t v___x_125_; lean_object* v___x_126_; 
v___x_123_ = lean_st_ref_get(v_a_121_);
v_env_124_ = lean_ctor_get(v___x_123_, 0);
lean_inc_ref(v_env_124_);
lean_dec(v___x_123_);
v___x_125_ = 0;
lean_inc(v_declName_115_);
v___x_126_ = l_Lean_Environment_find_x3f(v_env_124_, v_declName_115_, v___x_125_);
if (lean_obj_tag(v___x_126_) == 1)
{
lean_object* v_val_127_; lean_object* v___x_129_; uint8_t v_isShared_130_; uint8_t v_isSharedCheck_156_; 
v_val_127_ = lean_ctor_get(v___x_126_, 0);
v_isSharedCheck_156_ = !lean_is_exclusive(v___x_126_);
if (v_isSharedCheck_156_ == 0)
{
v___x_129_ = v___x_126_;
v_isShared_130_ = v_isSharedCheck_156_;
goto v_resetjp_128_;
}
else
{
lean_inc(v_val_127_);
lean_dec(v___x_126_);
v___x_129_ = lean_box(0);
v_isShared_130_ = v_isSharedCheck_156_;
goto v_resetjp_128_;
}
v_resetjp_128_:
{
lean_object* v___x_131_; 
v___x_131_ = l_Lean_Server_Completion_getCompletionKindForDecl(v_val_127_, v_a_118_, v_a_119_, v_a_120_, v_a_121_);
lean_dec(v_val_127_);
if (lean_obj_tag(v___x_131_) == 0)
{
lean_object* v_a_132_; lean_object* v___x_133_; 
v_a_132_ = lean_ctor_get(v___x_131_, 0);
lean_inc(v_a_132_);
lean_dec_ref_known(v___x_131_, 1);
lean_inc(v_declName_115_);
v___x_133_ = l_Lean_Server_Completion_getCompletionTagsForDecl___redArg(v_declName_115_, v_a_121_);
if (lean_obj_tag(v___x_133_) == 0)
{
lean_object* v_a_134_; lean_object* v___x_136_; 
v_a_134_ = lean_ctor_get(v___x_133_, 0);
lean_inc(v_a_134_);
lean_dec_ref_known(v___x_133_, 1);
if (v_isShared_130_ == 0)
{
lean_ctor_set_tag(v___x_129_, 0);
lean_ctor_set(v___x_129_, 0, v_declName_115_);
v___x_136_ = v___x_129_;
goto v_reusejp_135_;
}
else
{
lean_object* v_reuseFailAlloc_139_; 
v_reuseFailAlloc_139_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_139_, 0, v_declName_115_);
v___x_136_ = v_reuseFailAlloc_139_;
goto v_reusejp_135_;
}
v_reusejp_135_:
{
uint8_t v___x_137_; lean_object* v___x_138_; 
v___x_137_ = lean_unbox(v_a_132_);
lean_dec(v_a_132_);
v___x_138_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addUnresolvedCompletionItem___redArg(v_label_114_, v___x_136_, v___x_137_, v_a_134_, v_a_116_, v_a_117_);
return v___x_138_;
}
}
else
{
lean_object* v_a_140_; lean_object* v___x_142_; uint8_t v_isShared_143_; uint8_t v_isSharedCheck_147_; 
lean_dec(v_a_132_);
lean_del_object(v___x_129_);
lean_dec(v_declName_115_);
lean_dec(v_label_114_);
v_a_140_ = lean_ctor_get(v___x_133_, 0);
v_isSharedCheck_147_ = !lean_is_exclusive(v___x_133_);
if (v_isSharedCheck_147_ == 0)
{
v___x_142_ = v___x_133_;
v_isShared_143_ = v_isSharedCheck_147_;
goto v_resetjp_141_;
}
else
{
lean_inc(v_a_140_);
lean_dec(v___x_133_);
v___x_142_ = lean_box(0);
v_isShared_143_ = v_isSharedCheck_147_;
goto v_resetjp_141_;
}
v_resetjp_141_:
{
lean_object* v___x_145_; 
if (v_isShared_143_ == 0)
{
v___x_145_ = v___x_142_;
goto v_reusejp_144_;
}
else
{
lean_object* v_reuseFailAlloc_146_; 
v_reuseFailAlloc_146_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_146_, 0, v_a_140_);
v___x_145_ = v_reuseFailAlloc_146_;
goto v_reusejp_144_;
}
v_reusejp_144_:
{
return v___x_145_;
}
}
}
}
else
{
lean_object* v_a_148_; lean_object* v___x_150_; uint8_t v_isShared_151_; uint8_t v_isSharedCheck_155_; 
lean_del_object(v___x_129_);
lean_dec(v_declName_115_);
lean_dec(v_label_114_);
v_a_148_ = lean_ctor_get(v___x_131_, 0);
v_isSharedCheck_155_ = !lean_is_exclusive(v___x_131_);
if (v_isSharedCheck_155_ == 0)
{
v___x_150_ = v___x_131_;
v_isShared_151_ = v_isSharedCheck_155_;
goto v_resetjp_149_;
}
else
{
lean_inc(v_a_148_);
lean_dec(v___x_131_);
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
}
else
{
lean_object* v___x_157_; lean_object* v___x_158_; 
lean_dec(v___x_126_);
lean_dec(v_declName_115_);
lean_dec(v_label_114_);
v___x_157_ = ((lean_object*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addItem___redArg___closed__0));
v___x_158_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_158_, 0, v___x_157_);
return v___x_158_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addUnresolvedCompletionItemForDecl___redArg___boxed(lean_object* v_label_159_, lean_object* v_declName_160_, lean_object* v_a_161_, lean_object* v_a_162_, lean_object* v_a_163_, lean_object* v_a_164_, lean_object* v_a_165_, lean_object* v_a_166_, lean_object* v_a_167_){
_start:
{
lean_object* v_res_168_; 
v_res_168_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addUnresolvedCompletionItemForDecl___redArg(v_label_159_, v_declName_160_, v_a_161_, v_a_162_, v_a_163_, v_a_164_, v_a_165_, v_a_166_);
lean_dec(v_a_166_);
lean_dec_ref(v_a_165_);
lean_dec(v_a_164_);
lean_dec_ref(v_a_163_);
lean_dec(v_a_162_);
lean_dec_ref(v_a_161_);
return v_res_168_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addUnresolvedCompletionItemForDecl(lean_object* v_label_169_, lean_object* v_declName_170_, lean_object* v_a_171_, lean_object* v_a_172_, lean_object* v_a_173_, lean_object* v_a_174_, lean_object* v_a_175_, lean_object* v_a_176_, lean_object* v_a_177_){
_start:
{
lean_object* v___x_179_; 
v___x_179_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addUnresolvedCompletionItemForDecl___redArg(v_label_169_, v_declName_170_, v_a_171_, v_a_172_, v_a_174_, v_a_175_, v_a_176_, v_a_177_);
return v___x_179_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addUnresolvedCompletionItemForDecl___boxed(lean_object* v_label_180_, lean_object* v_declName_181_, lean_object* v_a_182_, lean_object* v_a_183_, lean_object* v_a_184_, lean_object* v_a_185_, lean_object* v_a_186_, lean_object* v_a_187_, lean_object* v_a_188_, lean_object* v_a_189_){
_start:
{
lean_object* v_res_190_; 
v_res_190_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addUnresolvedCompletionItemForDecl(v_label_180_, v_declName_181_, v_a_182_, v_a_183_, v_a_184_, v_a_185_, v_a_186_, v_a_187_, v_a_188_);
lean_dec(v_a_188_);
lean_dec_ref(v_a_187_);
lean_dec(v_a_186_);
lean_dec_ref(v_a_185_);
lean_dec_ref(v_a_184_);
lean_dec(v_a_183_);
lean_dec_ref(v_a_182_);
return v_res_190_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addKeywordCompletionItem___redArg(lean_object* v_keyword_197_, lean_object* v_a_198_, lean_object* v_a_199_){
_start:
{
lean_object* v___x_201_; lean_object* v___x_202_; lean_object* v___x_203_; lean_object* v_item_204_; lean_object* v___x_205_; 
v___x_201_ = ((lean_object*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addKeywordCompletionItem___redArg___closed__1));
v___x_202_ = lean_box(0);
v___x_203_ = ((lean_object*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addKeywordCompletionItem___redArg___closed__2));
v_item_204_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v_item_204_, 0, v_keyword_197_);
lean_ctor_set(v_item_204_, 1, v___x_201_);
lean_ctor_set(v_item_204_, 2, v___x_202_);
lean_ctor_set(v_item_204_, 3, v___x_203_);
lean_ctor_set(v_item_204_, 4, v___x_202_);
lean_ctor_set(v_item_204_, 5, v___x_202_);
lean_ctor_set(v_item_204_, 6, v___x_202_);
lean_ctor_set(v_item_204_, 7, v___x_202_);
v___x_205_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addItem___redArg(v_item_204_, v___x_202_, v_a_198_, v_a_199_);
return v___x_205_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addKeywordCompletionItem___redArg___boxed(lean_object* v_keyword_206_, lean_object* v_a_207_, lean_object* v_a_208_, lean_object* v_a_209_){
_start:
{
lean_object* v_res_210_; 
v_res_210_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addKeywordCompletionItem___redArg(v_keyword_206_, v_a_207_, v_a_208_);
lean_dec(v_a_208_);
lean_dec_ref(v_a_207_);
return v_res_210_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addKeywordCompletionItem(lean_object* v_keyword_211_, lean_object* v_a_212_, lean_object* v_a_213_, lean_object* v_a_214_, lean_object* v_a_215_, lean_object* v_a_216_, lean_object* v_a_217_, lean_object* v_a_218_){
_start:
{
lean_object* v___x_220_; 
v___x_220_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addKeywordCompletionItem___redArg(v_keyword_211_, v_a_212_, v_a_213_);
return v___x_220_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addKeywordCompletionItem___boxed(lean_object* v_keyword_221_, lean_object* v_a_222_, lean_object* v_a_223_, lean_object* v_a_224_, lean_object* v_a_225_, lean_object* v_a_226_, lean_object* v_a_227_, lean_object* v_a_228_, lean_object* v_a_229_){
_start:
{
lean_object* v_res_230_; 
v_res_230_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addKeywordCompletionItem(v_keyword_221_, v_a_222_, v_a_223_, v_a_224_, v_a_225_, v_a_226_, v_a_227_, v_a_228_);
lean_dec(v_a_228_);
lean_dec_ref(v_a_227_);
lean_dec(v_a_226_);
lean_dec_ref(v_a_225_);
lean_dec_ref(v_a_224_);
lean_dec(v_a_223_);
lean_dec_ref(v_a_222_);
return v_res_230_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addNamespaceCompletionItem___redArg(lean_object* v_ns_237_, lean_object* v_a_238_, lean_object* v_a_239_){
_start:
{
uint8_t v___x_241_; lean_object* v___x_242_; lean_object* v___x_243_; lean_object* v___x_244_; lean_object* v___x_245_; lean_object* v_item_246_; lean_object* v___x_247_; 
v___x_241_ = 1;
v___x_242_ = l_Lean_Name_toString(v_ns_237_, v___x_241_);
v___x_243_ = ((lean_object*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addNamespaceCompletionItem___redArg___closed__1));
v___x_244_ = lean_box(0);
v___x_245_ = ((lean_object*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addNamespaceCompletionItem___redArg___closed__2));
v_item_246_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v_item_246_, 0, v___x_242_);
lean_ctor_set(v_item_246_, 1, v___x_243_);
lean_ctor_set(v_item_246_, 2, v___x_244_);
lean_ctor_set(v_item_246_, 3, v___x_245_);
lean_ctor_set(v_item_246_, 4, v___x_244_);
lean_ctor_set(v_item_246_, 5, v___x_244_);
lean_ctor_set(v_item_246_, 6, v___x_244_);
lean_ctor_set(v_item_246_, 7, v___x_244_);
v___x_247_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addItem___redArg(v_item_246_, v___x_244_, v_a_238_, v_a_239_);
return v___x_247_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addNamespaceCompletionItem___redArg___boxed(lean_object* v_ns_248_, lean_object* v_a_249_, lean_object* v_a_250_, lean_object* v_a_251_){
_start:
{
lean_object* v_res_252_; 
v_res_252_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addNamespaceCompletionItem___redArg(v_ns_248_, v_a_249_, v_a_250_);
lean_dec(v_a_250_);
lean_dec_ref(v_a_249_);
return v_res_252_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addNamespaceCompletionItem(lean_object* v_ns_253_, lean_object* v_a_254_, lean_object* v_a_255_, lean_object* v_a_256_, lean_object* v_a_257_, lean_object* v_a_258_, lean_object* v_a_259_, lean_object* v_a_260_){
_start:
{
lean_object* v___x_262_; 
v___x_262_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addNamespaceCompletionItem___redArg(v_ns_253_, v_a_254_, v_a_255_);
return v___x_262_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addNamespaceCompletionItem___boxed(lean_object* v_ns_263_, lean_object* v_a_264_, lean_object* v_a_265_, lean_object* v_a_266_, lean_object* v_a_267_, lean_object* v_a_268_, lean_object* v_a_269_, lean_object* v_a_270_, lean_object* v_a_271_){
_start:
{
lean_object* v_res_272_; 
v_res_272_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addNamespaceCompletionItem(v_ns_263_, v_a_264_, v_a_265_, v_a_266_, v_a_267_, v_a_268_, v_a_269_, v_a_270_);
lean_dec(v_a_270_);
lean_dec_ref(v_a_269_);
lean_dec(v_a_268_);
lean_dec_ref(v_a_267_);
lean_dec_ref(v_a_266_);
lean_dec(v_a_265_);
lean_dec_ref(v_a_264_);
return v_res_272_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_runM___lam__0(lean_object* v___x_273_, lean_object* v_x_274_, lean_object* v___x_275_, lean_object* v_a_276_, lean_object* v___y_277_, lean_object* v___y_278_, lean_object* v___y_279_, lean_object* v___y_280_){
_start:
{
lean_object* v___x_282_; lean_object* v___x_283_; 
v___x_282_ = lean_st_mk_ref(v___x_273_);
lean_inc_ref(v_a_276_);
lean_inc(v___x_282_);
v___x_283_ = lean_apply_8(v_x_274_, v___x_275_, v___x_282_, v_a_276_, v___y_277_, v___y_278_, v___y_279_, v___y_280_, lean_box(0));
if (lean_obj_tag(v___x_283_) == 0)
{
lean_object* v_a_284_; lean_object* v___x_286_; uint8_t v_isShared_287_; uint8_t v_isSharedCheck_312_; 
v_a_284_ = lean_ctor_get(v___x_283_, 0);
v_isSharedCheck_312_ = !lean_is_exclusive(v___x_283_);
if (v_isSharedCheck_312_ == 0)
{
v___x_286_ = v___x_283_;
v_isShared_287_ = v_isSharedCheck_312_;
goto v_resetjp_285_;
}
else
{
lean_inc(v_a_284_);
lean_dec(v___x_283_);
v___x_286_ = lean_box(0);
v_isShared_287_ = v_isSharedCheck_312_;
goto v_resetjp_285_;
}
v_resetjp_285_:
{
if (lean_obj_tag(v_a_284_) == 0)
{
lean_object* v_a_288_; lean_object* v___x_290_; uint8_t v_isShared_291_; uint8_t v_isSharedCheck_298_; 
lean_dec(v___x_282_);
v_a_288_ = lean_ctor_get(v_a_284_, 0);
v_isSharedCheck_298_ = !lean_is_exclusive(v_a_284_);
if (v_isSharedCheck_298_ == 0)
{
v___x_290_ = v_a_284_;
v_isShared_291_ = v_isSharedCheck_298_;
goto v_resetjp_289_;
}
else
{
lean_inc(v_a_288_);
lean_dec(v_a_284_);
v___x_290_ = lean_box(0);
v_isShared_291_ = v_isSharedCheck_298_;
goto v_resetjp_289_;
}
v_resetjp_289_:
{
lean_object* v___x_293_; 
if (v_isShared_291_ == 0)
{
v___x_293_ = v___x_290_;
goto v_reusejp_292_;
}
else
{
lean_object* v_reuseFailAlloc_297_; 
v_reuseFailAlloc_297_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_297_, 0, v_a_288_);
v___x_293_ = v_reuseFailAlloc_297_;
goto v_reusejp_292_;
}
v_reusejp_292_:
{
lean_object* v___x_295_; 
if (v_isShared_287_ == 0)
{
lean_ctor_set(v___x_286_, 0, v___x_293_);
v___x_295_ = v___x_286_;
goto v_reusejp_294_;
}
else
{
lean_object* v_reuseFailAlloc_296_; 
v_reuseFailAlloc_296_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_296_, 0, v___x_293_);
v___x_295_ = v_reuseFailAlloc_296_;
goto v_reusejp_294_;
}
v_reusejp_294_:
{
return v___x_295_;
}
}
}
}
else
{
lean_object* v_a_299_; lean_object* v___x_301_; uint8_t v_isShared_302_; uint8_t v_isSharedCheck_311_; 
v_a_299_ = lean_ctor_get(v_a_284_, 0);
v_isSharedCheck_311_ = !lean_is_exclusive(v_a_284_);
if (v_isSharedCheck_311_ == 0)
{
v___x_301_ = v_a_284_;
v_isShared_302_ = v_isSharedCheck_311_;
goto v_resetjp_300_;
}
else
{
lean_inc(v_a_299_);
lean_dec(v_a_284_);
v___x_301_ = lean_box(0);
v_isShared_302_ = v_isSharedCheck_311_;
goto v_resetjp_300_;
}
v_resetjp_300_:
{
lean_object* v___x_303_; lean_object* v___x_304_; lean_object* v___x_306_; 
v___x_303_ = lean_st_ref_get(v___x_282_);
lean_dec(v___x_282_);
v___x_304_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_304_, 0, v_a_299_);
lean_ctor_set(v___x_304_, 1, v___x_303_);
if (v_isShared_302_ == 0)
{
lean_ctor_set(v___x_301_, 0, v___x_304_);
v___x_306_ = v___x_301_;
goto v_reusejp_305_;
}
else
{
lean_object* v_reuseFailAlloc_310_; 
v_reuseFailAlloc_310_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_310_, 0, v___x_304_);
v___x_306_ = v_reuseFailAlloc_310_;
goto v_reusejp_305_;
}
v_reusejp_305_:
{
lean_object* v___x_308_; 
if (v_isShared_287_ == 0)
{
lean_ctor_set(v___x_286_, 0, v___x_306_);
v___x_308_ = v___x_286_;
goto v_reusejp_307_;
}
else
{
lean_object* v_reuseFailAlloc_309_; 
v_reuseFailAlloc_309_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_309_, 0, v___x_306_);
v___x_308_ = v_reuseFailAlloc_309_;
goto v_reusejp_307_;
}
v_reusejp_307_:
{
return v___x_308_;
}
}
}
}
}
}
else
{
lean_object* v_a_313_; lean_object* v___x_315_; uint8_t v_isShared_316_; uint8_t v_isSharedCheck_320_; 
lean_dec(v___x_282_);
v_a_313_ = lean_ctor_get(v___x_283_, 0);
v_isSharedCheck_320_ = !lean_is_exclusive(v___x_283_);
if (v_isSharedCheck_320_ == 0)
{
v___x_315_ = v___x_283_;
v_isShared_316_ = v_isSharedCheck_320_;
goto v_resetjp_314_;
}
else
{
lean_inc(v_a_313_);
lean_dec(v___x_283_);
v___x_315_ = lean_box(0);
v_isShared_316_ = v_isSharedCheck_320_;
goto v_resetjp_314_;
}
v_resetjp_314_:
{
lean_object* v___x_318_; 
if (v_isShared_316_ == 0)
{
v___x_318_ = v___x_315_;
goto v_reusejp_317_;
}
else
{
lean_object* v_reuseFailAlloc_319_; 
v_reuseFailAlloc_319_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_319_, 0, v_a_313_);
v___x_318_ = v_reuseFailAlloc_319_;
goto v_reusejp_317_;
}
v_reusejp_317_:
{
return v___x_318_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_runM___lam__0___boxed(lean_object* v___x_321_, lean_object* v_x_322_, lean_object* v___x_323_, lean_object* v_a_324_, lean_object* v___y_325_, lean_object* v___y_326_, lean_object* v___y_327_, lean_object* v___y_328_, lean_object* v___y_329_){
_start:
{
lean_object* v_res_330_; 
v_res_330_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_runM___lam__0(v___x_321_, v_x_322_, v___x_323_, v_a_324_, v___y_325_, v___y_326_, v___y_327_, v___y_328_);
lean_dec_ref(v_a_324_);
return v_res_330_;
}
}
static lean_object* _init_l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_runM___closed__1(void){
_start:
{
lean_object* v___x_333_; lean_object* v___x_334_; 
v___x_333_ = l_Lean_Server_RequestCancellation_requestCancelled;
v___x_334_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_334_, 0, v___x_333_);
return v___x_334_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_runM(lean_object* v_uri_335_, lean_object* v_pos_336_, lean_object* v_completionInfoPos_337_, lean_object* v_ctx_338_, lean_object* v_lctx_339_, lean_object* v_x_340_, lean_object* v_a_341_){
_start:
{
lean_object* v___x_343_; lean_object* v___x_344_; lean_object* v___f_345_; lean_object* v___x_346_; 
v___x_343_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_343_, 0, v_uri_335_);
lean_ctor_set(v___x_343_, 1, v_pos_336_);
lean_ctor_set(v___x_343_, 2, v_completionInfoPos_337_);
v___x_344_ = ((lean_object*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_runM___closed__0));
lean_inc_ref(v_a_341_);
v___f_345_ = lean_alloc_closure((void*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_runM___lam__0___boxed), 9, 4);
lean_closure_set(v___f_345_, 0, v___x_344_);
lean_closure_set(v___f_345_, 1, v_x_340_);
lean_closure_set(v___f_345_, 2, v___x_343_);
lean_closure_set(v___f_345_, 3, v_a_341_);
v___x_346_ = l_Lean_Elab_ContextInfo_runMetaM___redArg(v_ctx_338_, v_lctx_339_, v___f_345_);
if (lean_obj_tag(v___x_346_) == 0)
{
lean_object* v_a_347_; lean_object* v___x_349_; uint8_t v_isShared_350_; uint8_t v_isSharedCheck_367_; 
v_a_347_ = lean_ctor_get(v___x_346_, 0);
v_isSharedCheck_367_ = !lean_is_exclusive(v___x_346_);
if (v_isSharedCheck_367_ == 0)
{
v___x_349_ = v___x_346_;
v_isShared_350_ = v_isSharedCheck_367_;
goto v_resetjp_348_;
}
else
{
lean_inc(v_a_347_);
lean_dec(v___x_346_);
v___x_349_ = lean_box(0);
v_isShared_350_ = v_isSharedCheck_367_;
goto v_resetjp_348_;
}
v_resetjp_348_:
{
if (lean_obj_tag(v_a_347_) == 0)
{
lean_object* v___x_351_; lean_object* v___x_353_; 
lean_dec_ref_known(v_a_347_, 1);
v___x_351_ = lean_obj_once(&l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_runM___closed__1, &l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_runM___closed__1_once, _init_l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_runM___closed__1);
if (v_isShared_350_ == 0)
{
lean_ctor_set(v___x_349_, 0, v___x_351_);
v___x_353_ = v___x_349_;
goto v_reusejp_352_;
}
else
{
lean_object* v_reuseFailAlloc_354_; 
v_reuseFailAlloc_354_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_354_, 0, v___x_351_);
v___x_353_ = v_reuseFailAlloc_354_;
goto v_reusejp_352_;
}
v_reusejp_352_:
{
return v___x_353_;
}
}
else
{
lean_object* v_a_355_; lean_object* v___x_357_; uint8_t v_isShared_358_; uint8_t v_isSharedCheck_366_; 
v_a_355_ = lean_ctor_get(v_a_347_, 0);
v_isSharedCheck_366_ = !lean_is_exclusive(v_a_347_);
if (v_isSharedCheck_366_ == 0)
{
v___x_357_ = v_a_347_;
v_isShared_358_ = v_isSharedCheck_366_;
goto v_resetjp_356_;
}
else
{
lean_inc(v_a_355_);
lean_dec(v_a_347_);
v___x_357_ = lean_box(0);
v_isShared_358_ = v_isSharedCheck_366_;
goto v_resetjp_356_;
}
v_resetjp_356_:
{
lean_object* v_snd_359_; lean_object* v___x_361_; 
v_snd_359_ = lean_ctor_get(v_a_355_, 1);
lean_inc(v_snd_359_);
lean_dec(v_a_355_);
if (v_isShared_358_ == 0)
{
lean_ctor_set(v___x_357_, 0, v_snd_359_);
v___x_361_ = v___x_357_;
goto v_reusejp_360_;
}
else
{
lean_object* v_reuseFailAlloc_365_; 
v_reuseFailAlloc_365_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_365_, 0, v_snd_359_);
v___x_361_ = v_reuseFailAlloc_365_;
goto v_reusejp_360_;
}
v_reusejp_360_:
{
lean_object* v___x_363_; 
if (v_isShared_350_ == 0)
{
lean_ctor_set(v___x_349_, 0, v___x_361_);
v___x_363_ = v___x_349_;
goto v_reusejp_362_;
}
else
{
lean_object* v_reuseFailAlloc_364_; 
v_reuseFailAlloc_364_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_364_, 0, v___x_361_);
v___x_363_ = v_reuseFailAlloc_364_;
goto v_reusejp_362_;
}
v_reusejp_362_:
{
return v___x_363_;
}
}
}
}
}
}
else
{
lean_object* v_a_368_; lean_object* v___x_370_; uint8_t v_isShared_371_; uint8_t v_isSharedCheck_375_; 
v_a_368_ = lean_ctor_get(v___x_346_, 0);
v_isSharedCheck_375_ = !lean_is_exclusive(v___x_346_);
if (v_isSharedCheck_375_ == 0)
{
v___x_370_ = v___x_346_;
v_isShared_371_ = v_isSharedCheck_375_;
goto v_resetjp_369_;
}
else
{
lean_inc(v_a_368_);
lean_dec(v___x_346_);
v___x_370_ = lean_box(0);
v_isShared_371_ = v_isSharedCheck_375_;
goto v_resetjp_369_;
}
v_resetjp_369_:
{
lean_object* v___x_373_; 
if (v_isShared_371_ == 0)
{
v___x_373_ = v___x_370_;
goto v_reusejp_372_;
}
else
{
lean_object* v_reuseFailAlloc_374_; 
v_reuseFailAlloc_374_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_374_, 0, v_a_368_);
v___x_373_ = v_reuseFailAlloc_374_;
goto v_reusejp_372_;
}
v_reusejp_372_:
{
return v___x_373_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_runM___boxed(lean_object* v_uri_376_, lean_object* v_pos_377_, lean_object* v_completionInfoPos_378_, lean_object* v_ctx_379_, lean_object* v_lctx_380_, lean_object* v_x_381_, lean_object* v_a_382_, lean_object* v_a_383_){
_start:
{
lean_object* v_res_384_; 
v_res_384_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_runM(v_uri_376_, v_pos_377_, v_completionInfoPos_378_, v_ctx_379_, v_lctx_380_, v_x_381_, v_a_382_);
lean_dec_ref(v_a_382_);
return v_res_384_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_normPrivateName_x3f___redArg(lean_object* v_declName_385_, lean_object* v_a_386_){
_start:
{
lean_object* v___x_388_; 
lean_inc(v_declName_385_);
v___x_388_ = l_Lean_privateToUserName_x3f(v_declName_385_);
if (lean_obj_tag(v___x_388_) == 0)
{
lean_object* v___x_389_; lean_object* v___x_390_; 
v___x_389_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_389_, 0, v_declName_385_);
v___x_390_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_390_, 0, v___x_389_);
return v___x_390_;
}
else
{
lean_object* v_val_391_; lean_object* v___x_392_; lean_object* v_env_393_; lean_object* v___x_394_; uint8_t v___x_395_; 
v_val_391_ = lean_ctor_get(v___x_388_, 0);
lean_inc(v_val_391_);
v___x_392_ = lean_st_ref_get(v_a_386_);
v_env_393_ = lean_ctor_get(v___x_392_, 0);
lean_inc_ref(v_env_393_);
lean_dec(v___x_392_);
v___x_394_ = l_Lean_mkPrivateName(v_env_393_, v_val_391_);
lean_dec_ref(v_env_393_);
v___x_395_ = lean_name_eq(v___x_394_, v_declName_385_);
lean_dec(v_declName_385_);
lean_dec(v___x_394_);
if (v___x_395_ == 0)
{
lean_object* v___x_397_; uint8_t v_isShared_398_; uint8_t v_isSharedCheck_403_; 
v_isSharedCheck_403_ = !lean_is_exclusive(v___x_388_);
if (v_isSharedCheck_403_ == 0)
{
lean_object* v_unused_404_; 
v_unused_404_ = lean_ctor_get(v___x_388_, 0);
lean_dec(v_unused_404_);
v___x_397_ = v___x_388_;
v_isShared_398_ = v_isSharedCheck_403_;
goto v_resetjp_396_;
}
else
{
lean_dec(v___x_388_);
v___x_397_ = lean_box(0);
v_isShared_398_ = v_isSharedCheck_403_;
goto v_resetjp_396_;
}
v_resetjp_396_:
{
lean_object* v___x_399_; lean_object* v___x_401_; 
v___x_399_ = lean_box(0);
if (v_isShared_398_ == 0)
{
lean_ctor_set_tag(v___x_397_, 0);
lean_ctor_set(v___x_397_, 0, v___x_399_);
v___x_401_ = v___x_397_;
goto v_reusejp_400_;
}
else
{
lean_object* v_reuseFailAlloc_402_; 
v_reuseFailAlloc_402_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_402_, 0, v___x_399_);
v___x_401_ = v_reuseFailAlloc_402_;
goto v_reusejp_400_;
}
v_reusejp_400_:
{
return v___x_401_;
}
}
}
else
{
lean_object* v___x_405_; 
v___x_405_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_405_, 0, v___x_388_);
return v___x_405_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_normPrivateName_x3f___redArg___boxed(lean_object* v_declName_406_, lean_object* v_a_407_, lean_object* v_a_408_){
_start:
{
lean_object* v_res_409_; 
v_res_409_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_normPrivateName_x3f___redArg(v_declName_406_, v_a_407_);
lean_dec(v_a_407_);
return v_res_409_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_normPrivateName_x3f(lean_object* v_declName_410_, lean_object* v_a_411_, lean_object* v_a_412_, lean_object* v_a_413_, lean_object* v_a_414_){
_start:
{
lean_object* v___x_416_; 
v___x_416_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_normPrivateName_x3f___redArg(v_declName_410_, v_a_414_);
return v___x_416_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_normPrivateName_x3f___boxed(lean_object* v_declName_417_, lean_object* v_a_418_, lean_object* v_a_419_, lean_object* v_a_420_, lean_object* v_a_421_, lean_object* v_a_422_){
_start:
{
lean_object* v_res_423_; 
v_res_423_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_normPrivateName_x3f(v_declName_417_, v_a_418_, v_a_419_, v_a_420_, v_a_421_);
lean_dec(v_a_421_);
lean_dec_ref(v_a_420_);
lean_dec(v_a_419_);
lean_dec_ref(v_a_418_);
return v_res_423_;
}
}
static lean_object* _init_l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_matchDecl_x3f___redArg___closed__0(void){
_start:
{
lean_object* v___x_424_; lean_object* v___x_425_; 
v___x_424_ = lean_box(0);
v___x_425_ = l_unsafeCast___redArg(v___x_424_);
return v___x_425_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_matchDecl_x3f___redArg(lean_object* v_ns_426_, lean_object* v_id_427_, uint8_t v_danglingDot_428_, lean_object* v_declName_429_, lean_object* v_a_430_){
_start:
{
lean_object* v___x_435_; lean_object* v_a_436_; lean_object* v___x_438_; uint8_t v_isShared_439_; uint8_t v_isSharedCheck_495_; 
v___x_435_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_normPrivateName_x3f___redArg(v_declName_429_, v_a_430_);
v_a_436_ = lean_ctor_get(v___x_435_, 0);
v_isSharedCheck_495_ = !lean_is_exclusive(v___x_435_);
if (v_isSharedCheck_495_ == 0)
{
v___x_438_ = v___x_435_;
v_isShared_439_ = v_isSharedCheck_495_;
goto v_resetjp_437_;
}
else
{
lean_inc(v_a_436_);
lean_dec(v___x_435_);
v___x_438_ = lean_box(0);
v_isShared_439_ = v_isSharedCheck_495_;
goto v_resetjp_437_;
}
v___jp_432_:
{
lean_object* v___x_433_; lean_object* v___x_434_; 
v___x_433_ = lean_box(0);
v___x_434_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_434_, 0, v___x_433_);
return v___x_434_;
}
v_resetjp_437_:
{
if (lean_obj_tag(v_a_436_) == 1)
{
lean_object* v_val_440_; lean_object* v___x_442_; uint8_t v_isShared_443_; uint8_t v_isSharedCheck_490_; 
v_val_440_ = lean_ctor_get(v_a_436_, 0);
v_isSharedCheck_490_ = !lean_is_exclusive(v_a_436_);
if (v_isSharedCheck_490_ == 0)
{
v___x_442_ = v_a_436_;
v_isShared_443_ = v_isSharedCheck_490_;
goto v_resetjp_441_;
}
else
{
lean_inc(v_val_440_);
lean_dec(v_a_436_);
v___x_442_ = lean_box(0);
v_isShared_443_ = v_isSharedCheck_490_;
goto v_resetjp_441_;
}
v_resetjp_441_:
{
uint8_t v___x_444_; 
v___x_444_ = l_Lean_Name_isPrefixOf(v_ns_426_, v_val_440_);
if (v___x_444_ == 0)
{
lean_object* v___x_445_; lean_object* v___x_447_; 
lean_del_object(v___x_442_);
lean_dec(v_val_440_);
v___x_445_ = lean_box(0);
if (v_isShared_439_ == 0)
{
lean_ctor_set(v___x_438_, 0, v___x_445_);
v___x_447_ = v___x_438_;
goto v_reusejp_446_;
}
else
{
lean_object* v_reuseFailAlloc_448_; 
v_reuseFailAlloc_448_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_448_, 0, v___x_445_);
v___x_447_ = v_reuseFailAlloc_448_;
goto v_reusejp_446_;
}
v_reusejp_446_:
{
return v___x_447_;
}
}
else
{
lean_object* v___x_449_; lean_object* v___x_450_; 
v___x_449_ = lean_obj_once(&l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_matchDecl_x3f___redArg___closed__0, &l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_matchDecl_x3f___redArg___closed__0_once, _init_l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_matchDecl_x3f___redArg___closed__0);
v___x_450_ = l_Lean_Name_replacePrefix(v_val_440_, v_ns_426_, v___x_449_);
if (v_danglingDot_428_ == 0)
{
if (lean_obj_tag(v_id_427_) == 1)
{
if (lean_obj_tag(v___x_450_) == 1)
{
lean_object* v_pre_451_; lean_object* v_str_452_; lean_object* v_pre_453_; lean_object* v_str_454_; uint8_t v___x_455_; 
v_pre_451_ = lean_ctor_get(v_id_427_, 0);
v_str_452_ = lean_ctor_get(v_id_427_, 1);
v_pre_453_ = lean_ctor_get(v___x_450_, 0);
lean_inc(v_pre_453_);
v_str_454_ = lean_ctor_get(v___x_450_, 1);
lean_inc_ref(v_str_454_);
v___x_455_ = lean_name_eq(v_pre_451_, v_pre_453_);
lean_dec(v_pre_453_);
if (v___x_455_ == 0)
{
uint8_t v___x_456_; 
v___x_456_ = l_Lean_Name_isAnonymous(v_pre_451_);
if (v___x_456_ == 0)
{
lean_dec_ref(v_str_454_);
lean_dec_ref_known(v___x_450_, 2);
lean_del_object(v___x_442_);
lean_del_object(v___x_438_);
goto v___jp_432_;
}
else
{
uint8_t v___x_457_; 
v___x_457_ = l_Lean_String_charactersIn(v_str_452_, v_str_454_);
lean_dec_ref(v_str_454_);
if (v___x_457_ == 0)
{
lean_object* v___x_458_; lean_object* v___x_460_; 
lean_dec_ref_known(v___x_450_, 2);
lean_del_object(v___x_442_);
v___x_458_ = lean_box(0);
if (v_isShared_439_ == 0)
{
lean_ctor_set(v___x_438_, 0, v___x_458_);
v___x_460_ = v___x_438_;
goto v_reusejp_459_;
}
else
{
lean_object* v_reuseFailAlloc_461_; 
v_reuseFailAlloc_461_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_461_, 0, v___x_458_);
v___x_460_ = v_reuseFailAlloc_461_;
goto v_reusejp_459_;
}
v_reusejp_459_:
{
return v___x_460_;
}
}
else
{
lean_object* v___x_463_; 
if (v_isShared_443_ == 0)
{
lean_ctor_set(v___x_442_, 0, v___x_450_);
v___x_463_ = v___x_442_;
goto v_reusejp_462_;
}
else
{
lean_object* v_reuseFailAlloc_467_; 
v_reuseFailAlloc_467_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_467_, 0, v___x_450_);
v___x_463_ = v_reuseFailAlloc_467_;
goto v_reusejp_462_;
}
v_reusejp_462_:
{
lean_object* v___x_465_; 
if (v_isShared_439_ == 0)
{
lean_ctor_set(v___x_438_, 0, v___x_463_);
v___x_465_ = v___x_438_;
goto v_reusejp_464_;
}
else
{
lean_object* v_reuseFailAlloc_466_; 
v_reuseFailAlloc_466_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_466_, 0, v___x_463_);
v___x_465_ = v_reuseFailAlloc_466_;
goto v_reusejp_464_;
}
v_reusejp_464_:
{
return v___x_465_;
}
}
}
}
}
else
{
uint8_t v___x_468_; 
lean_dec_ref_known(v___x_450_, 2);
v___x_468_ = l_Lean_String_charactersIn(v_str_452_, v_str_454_);
if (v___x_468_ == 0)
{
lean_object* v___x_469_; lean_object* v___x_471_; 
lean_dec_ref(v_str_454_);
lean_del_object(v___x_442_);
v___x_469_ = lean_box(0);
if (v_isShared_439_ == 0)
{
lean_ctor_set(v___x_438_, 0, v___x_469_);
v___x_471_ = v___x_438_;
goto v_reusejp_470_;
}
else
{
lean_object* v_reuseFailAlloc_472_; 
v_reuseFailAlloc_472_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_472_, 0, v___x_469_);
v___x_471_ = v_reuseFailAlloc_472_;
goto v_reusejp_470_;
}
v_reusejp_470_:
{
return v___x_471_;
}
}
else
{
lean_object* v___x_473_; lean_object* v___x_475_; 
v___x_473_ = l_Lean_Name_str___override(v___x_449_, v_str_454_);
if (v_isShared_443_ == 0)
{
lean_ctor_set(v___x_442_, 0, v___x_473_);
v___x_475_ = v___x_442_;
goto v_reusejp_474_;
}
else
{
lean_object* v_reuseFailAlloc_479_; 
v_reuseFailAlloc_479_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_479_, 0, v___x_473_);
v___x_475_ = v_reuseFailAlloc_479_;
goto v_reusejp_474_;
}
v_reusejp_474_:
{
lean_object* v___x_477_; 
if (v_isShared_439_ == 0)
{
lean_ctor_set(v___x_438_, 0, v___x_475_);
v___x_477_ = v___x_438_;
goto v_reusejp_476_;
}
else
{
lean_object* v_reuseFailAlloc_478_; 
v_reuseFailAlloc_478_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_478_, 0, v___x_475_);
v___x_477_ = v_reuseFailAlloc_478_;
goto v_reusejp_476_;
}
v_reusejp_476_:
{
return v___x_477_;
}
}
}
}
}
else
{
lean_dec(v___x_450_);
lean_del_object(v___x_442_);
lean_del_object(v___x_438_);
goto v___jp_432_;
}
}
else
{
lean_dec(v___x_450_);
lean_del_object(v___x_442_);
lean_del_object(v___x_438_);
goto v___jp_432_;
}
}
else
{
uint8_t v___x_480_; 
v___x_480_ = l_Lean_Name_isPrefixOf(v_id_427_, v___x_450_);
if (v___x_480_ == 0)
{
lean_dec(v___x_450_);
lean_del_object(v___x_442_);
lean_del_object(v___x_438_);
goto v___jp_432_;
}
else
{
lean_object* v___x_481_; uint8_t v___x_482_; 
v___x_481_ = l_Lean_Name_replacePrefix(v___x_450_, v_id_427_, v___x_449_);
v___x_482_ = l_Lean_Name_isAtomic(v___x_481_);
if (v___x_482_ == 0)
{
lean_dec(v___x_481_);
lean_del_object(v___x_442_);
lean_del_object(v___x_438_);
goto v___jp_432_;
}
else
{
uint8_t v___x_483_; 
v___x_483_ = l_Lean_Name_isAnonymous(v___x_481_);
if (v___x_483_ == 0)
{
if (v___x_480_ == 0)
{
lean_dec(v___x_481_);
lean_del_object(v___x_442_);
lean_del_object(v___x_438_);
goto v___jp_432_;
}
else
{
lean_object* v___x_485_; 
if (v_isShared_443_ == 0)
{
lean_ctor_set(v___x_442_, 0, v___x_481_);
v___x_485_ = v___x_442_;
goto v_reusejp_484_;
}
else
{
lean_object* v_reuseFailAlloc_489_; 
v_reuseFailAlloc_489_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_489_, 0, v___x_481_);
v___x_485_ = v_reuseFailAlloc_489_;
goto v_reusejp_484_;
}
v_reusejp_484_:
{
lean_object* v___x_487_; 
if (v_isShared_439_ == 0)
{
lean_ctor_set(v___x_438_, 0, v___x_485_);
v___x_487_ = v___x_438_;
goto v_reusejp_486_;
}
else
{
lean_object* v_reuseFailAlloc_488_; 
v_reuseFailAlloc_488_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_488_, 0, v___x_485_);
v___x_487_ = v_reuseFailAlloc_488_;
goto v_reusejp_486_;
}
v_reusejp_486_:
{
return v___x_487_;
}
}
}
}
else
{
lean_dec(v___x_481_);
lean_del_object(v___x_442_);
lean_del_object(v___x_438_);
goto v___jp_432_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_491_; lean_object* v___x_493_; 
lean_dec(v_a_436_);
v___x_491_ = lean_box(0);
if (v_isShared_439_ == 0)
{
lean_ctor_set(v___x_438_, 0, v___x_491_);
v___x_493_ = v___x_438_;
goto v_reusejp_492_;
}
else
{
lean_object* v_reuseFailAlloc_494_; 
v_reuseFailAlloc_494_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_494_, 0, v___x_491_);
v___x_493_ = v_reuseFailAlloc_494_;
goto v_reusejp_492_;
}
v_reusejp_492_:
{
return v___x_493_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_matchDecl_x3f___redArg___boxed(lean_object* v_ns_496_, lean_object* v_id_497_, lean_object* v_danglingDot_498_, lean_object* v_declName_499_, lean_object* v_a_500_, lean_object* v_a_501_){
_start:
{
uint8_t v_danglingDot_boxed_502_; lean_object* v_res_503_; 
v_danglingDot_boxed_502_ = lean_unbox(v_danglingDot_498_);
v_res_503_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_matchDecl_x3f___redArg(v_ns_496_, v_id_497_, v_danglingDot_boxed_502_, v_declName_499_, v_a_500_);
lean_dec(v_a_500_);
lean_dec(v_id_497_);
lean_dec(v_ns_496_);
return v_res_503_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_matchDecl_x3f(lean_object* v_ns_504_, lean_object* v_id_505_, uint8_t v_danglingDot_506_, lean_object* v_declName_507_, lean_object* v_a_508_, lean_object* v_a_509_, lean_object* v_a_510_, lean_object* v_a_511_){
_start:
{
lean_object* v___x_513_; 
v___x_513_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_matchDecl_x3f___redArg(v_ns_504_, v_id_505_, v_danglingDot_506_, v_declName_507_, v_a_511_);
return v___x_513_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_matchDecl_x3f___boxed(lean_object* v_ns_514_, lean_object* v_id_515_, lean_object* v_danglingDot_516_, lean_object* v_declName_517_, lean_object* v_a_518_, lean_object* v_a_519_, lean_object* v_a_520_, lean_object* v_a_521_, lean_object* v_a_522_){
_start:
{
uint8_t v_danglingDot_boxed_523_; lean_object* v_res_524_; 
v_danglingDot_boxed_523_ = lean_unbox(v_danglingDot_516_);
v_res_524_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_matchDecl_x3f(v_ns_514_, v_id_515_, v_danglingDot_boxed_523_, v_declName_517_, v_a_518_, v_a_519_, v_a_520_, v_a_521_);
lean_dec(v_a_521_);
lean_dec_ref(v_a_520_);
lean_dec(v_a_519_);
lean_dec_ref(v_a_518_);
lean_dec(v_id_515_);
lean_dec(v_ns_514_);
return v_res_524_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___redArg___lam__0(lean_object* v___y_525_, lean_object* v_toPure_526_, lean_object* v_a_527_){
_start:
{
lean_object* v___x_528_; lean_object* v___x_529_; 
v___x_528_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_528_, 0, v_a_527_);
lean_ctor_set(v___x_528_, 1, v___y_525_);
v___x_529_ = lean_apply_2(v_toPure_526_, lean_box(0), v___x_528_);
return v___x_529_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___redArg___lam__1(lean_object* v_f_530_, lean_object* v_decl_531_, lean_object* v_ci_532_, lean_object* v_toPure_533_, lean_object* v_toBind_534_, lean_object* v_____r_535_, lean_object* v___y_536_){
_start:
{
lean_object* v___x_537_; lean_object* v___f_538_; lean_object* v___x_539_; 
v___x_537_ = lean_apply_2(v_f_530_, v_decl_531_, v_ci_532_);
v___f_538_ = lean_alloc_closure((void*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___redArg___lam__0), 3, 2);
lean_closure_set(v___f_538_, 0, v___y_536_);
lean_closure_set(v___f_538_, 1, v_toPure_533_);
v___x_539_ = lean_apply_4(v_toBind_534_, lean_box(0), lean_box(0), v___x_537_, v___f_538_);
return v___x_539_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___redArg___lam__2(lean_object* v___f_540_, lean_object* v_____x_541_){
_start:
{
lean_object* v_fst_542_; lean_object* v_snd_543_; lean_object* v___x_544_; 
v_fst_542_ = lean_ctor_get(v_____x_541_, 0);
lean_inc(v_fst_542_);
v_snd_543_ = lean_ctor_get(v_____x_541_, 1);
lean_inc(v_snd_543_);
lean_dec_ref(v_____x_541_);
v___x_544_ = lean_apply_2(v___f_540_, v_fst_542_, v_snd_543_);
return v___x_544_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___redArg___lam__3(lean_object* v_toPure_548_, lean_object* v_toBind_549_, lean_object* v___f_550_, lean_object* v_____x_551_){
_start:
{
lean_object* v___x_552_; lean_object* v___x_553_; lean_object* v___x_554_; 
v___x_552_ = ((lean_object*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___redArg___lam__3___closed__0));
v___x_553_ = lean_apply_2(v_toPure_548_, lean_box(0), v___x_552_);
v___x_554_ = lean_apply_4(v_toBind_549_, lean_box(0), lean_box(0), v___x_553_, v___f_550_);
return v___x_554_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___redArg___lam__3___boxed(lean_object* v_toPure_555_, lean_object* v_toBind_556_, lean_object* v___f_557_, lean_object* v_____x_558_){
_start:
{
lean_object* v_res_559_; 
v_res_559_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___redArg___lam__3(v_toPure_555_, v_toBind_556_, v___f_557_, v_____x_558_);
lean_dec_ref(v_____x_558_);
return v_res_559_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___redArg___lam__4(lean_object* v_snd_560_, lean_object* v_toPure_561_, lean_object* v_a_562_){
_start:
{
lean_object* v___x_563_; lean_object* v___x_564_; 
v___x_563_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_563_, 0, v_a_562_);
lean_ctor_set(v___x_563_, 1, v_snd_560_);
v___x_564_ = lean_apply_2(v_toPure_561_, lean_box(0), v___x_563_);
return v___x_564_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___redArg___lam__5(lean_object* v___f_565_, lean_object* v_toPure_566_, lean_object* v_toBind_567_, lean_object* v_inst_568_, lean_object* v___f_569_, lean_object* v_____x_570_){
_start:
{
lean_object* v_fst_571_; lean_object* v_snd_572_; lean_object* v___x_573_; uint8_t v___x_574_; 
v_fst_571_ = lean_ctor_get(v_____x_570_, 0);
lean_inc(v_fst_571_);
v_snd_572_ = lean_ctor_get(v_____x_570_, 1);
lean_inc(v_snd_572_);
lean_dec_ref(v_____x_570_);
v___x_573_ = lean_unsigned_to_nat(10000u);
v___x_574_ = lean_nat_dec_le(v___x_573_, v_fst_571_);
lean_dec(v_fst_571_);
if (v___x_574_ == 0)
{
lean_object* v___x_575_; lean_object* v___x_576_; 
lean_dec(v___f_569_);
lean_dec(v_inst_568_);
lean_dec(v_toBind_567_);
lean_dec(v_toPure_566_);
v___x_575_ = lean_box(0);
v___x_576_ = lean_apply_2(v___f_565_, v___x_575_, v_snd_572_);
return v___x_576_;
}
else
{
lean_object* v___f_577_; lean_object* v___x_578_; lean_object* v___x_579_; 
lean_dec(v___f_565_);
v___f_577_ = lean_alloc_closure((void*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___redArg___lam__4), 3, 2);
lean_closure_set(v___f_577_, 0, v_snd_572_);
lean_closure_set(v___f_577_, 1, v_toPure_566_);
lean_inc(v_toBind_567_);
v___x_578_ = lean_apply_4(v_toBind_567_, lean_box(0), lean_box(0), v_inst_568_, v___f_577_);
v___x_579_ = lean_apply_4(v_toBind_567_, lean_box(0), lean_box(0), v___x_578_, v___f_569_);
return v___x_579_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___redArg___lam__6(lean_object* v_toPure_580_, lean_object* v_toBind_581_, lean_object* v___f_582_, lean_object* v_____x_583_){
_start:
{
lean_object* v_snd_584_; lean_object* v___x_586_; uint8_t v_isShared_587_; uint8_t v_isSharedCheck_593_; 
v_snd_584_ = lean_ctor_get(v_____x_583_, 1);
v_isSharedCheck_593_ = !lean_is_exclusive(v_____x_583_);
if (v_isSharedCheck_593_ == 0)
{
lean_object* v_unused_594_; 
v_unused_594_ = lean_ctor_get(v_____x_583_, 0);
lean_dec(v_unused_594_);
v___x_586_ = v_____x_583_;
v_isShared_587_ = v_isSharedCheck_593_;
goto v_resetjp_585_;
}
else
{
lean_inc(v_snd_584_);
lean_dec(v_____x_583_);
v___x_586_ = lean_box(0);
v_isShared_587_ = v_isSharedCheck_593_;
goto v_resetjp_585_;
}
v_resetjp_585_:
{
lean_object* v___x_589_; 
lean_inc(v_snd_584_);
if (v_isShared_587_ == 0)
{
lean_ctor_set(v___x_586_, 0, v_snd_584_);
v___x_589_ = v___x_586_;
goto v_reusejp_588_;
}
else
{
lean_object* v_reuseFailAlloc_592_; 
v_reuseFailAlloc_592_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_592_, 0, v_snd_584_);
lean_ctor_set(v_reuseFailAlloc_592_, 1, v_snd_584_);
v___x_589_ = v_reuseFailAlloc_592_;
goto v_reusejp_588_;
}
v_reusejp_588_:
{
lean_object* v___x_590_; lean_object* v___x_591_; 
v___x_590_ = lean_apply_2(v_toPure_580_, lean_box(0), v___x_589_);
v___x_591_ = lean_apply_4(v_toBind_581_, lean_box(0), lean_box(0), v___x_590_, v___f_582_);
return v___x_591_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___redArg___lam__7(lean_object* v_f_595_, lean_object* v_toPure_596_, lean_object* v_toBind_597_, lean_object* v_inst_598_, lean_object* v_decl_599_, lean_object* v_ci_600_, lean_object* v___y_601_){
_start:
{
lean_object* v___f_602_; lean_object* v___f_603_; lean_object* v___f_604_; lean_object* v___f_605_; lean_object* v___f_606_; lean_object* v___x_607_; lean_object* v___x_608_; lean_object* v___x_609_; lean_object* v___x_610_; lean_object* v___x_611_; lean_object* v___x_612_; 
lean_inc_n(v_toBind_597_, 4);
lean_inc_n(v_toPure_596_, 4);
v___f_602_ = lean_alloc_closure((void*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___redArg___lam__1), 7, 5);
lean_closure_set(v___f_602_, 0, v_f_595_);
lean_closure_set(v___f_602_, 1, v_decl_599_);
lean_closure_set(v___f_602_, 2, v_ci_600_);
lean_closure_set(v___f_602_, 3, v_toPure_596_);
lean_closure_set(v___f_602_, 4, v_toBind_597_);
lean_inc_ref(v___f_602_);
v___f_603_ = lean_alloc_closure((void*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___redArg___lam__2), 2, 1);
lean_closure_set(v___f_603_, 0, v___f_602_);
v___f_604_ = lean_alloc_closure((void*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___redArg___lam__3___boxed), 4, 3);
lean_closure_set(v___f_604_, 0, v_toPure_596_);
lean_closure_set(v___f_604_, 1, v_toBind_597_);
lean_closure_set(v___f_604_, 2, v___f_603_);
v___f_605_ = lean_alloc_closure((void*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___redArg___lam__5), 6, 5);
lean_closure_set(v___f_605_, 0, v___f_602_);
lean_closure_set(v___f_605_, 1, v_toPure_596_);
lean_closure_set(v___f_605_, 2, v_toBind_597_);
lean_closure_set(v___f_605_, 3, v_inst_598_);
lean_closure_set(v___f_605_, 4, v___f_604_);
v___f_606_ = lean_alloc_closure((void*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___redArg___lam__6), 4, 3);
lean_closure_set(v___f_606_, 0, v_toPure_596_);
lean_closure_set(v___f_606_, 1, v_toBind_597_);
lean_closure_set(v___f_606_, 2, v___f_605_);
v___x_607_ = lean_box(0);
v___x_608_ = lean_unsigned_to_nat(1u);
v___x_609_ = lean_nat_add(v___y_601_, v___x_608_);
v___x_610_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_610_, 0, v___x_607_);
lean_ctor_set(v___x_610_, 1, v___x_609_);
v___x_611_ = lean_apply_2(v_toPure_596_, lean_box(0), v___x_610_);
v___x_612_ = lean_apply_4(v_toBind_597_, lean_box(0), lean_box(0), v___x_611_, v___f_606_);
return v___x_612_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___redArg___lam__7___boxed(lean_object* v_f_613_, lean_object* v_toPure_614_, lean_object* v_toBind_615_, lean_object* v_inst_616_, lean_object* v_decl_617_, lean_object* v_ci_618_, lean_object* v___y_619_){
_start:
{
lean_object* v_res_620_; 
v_res_620_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___redArg___lam__7(v_f_613_, v_toPure_614_, v_toBind_615_, v_inst_616_, v_decl_617_, v_ci_618_, v___y_619_);
lean_dec(v___y_619_);
return v_res_620_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___redArg___lam__8(lean_object* v_toPure_621_, lean_object* v_____x_622_){
_start:
{
lean_object* v___x_623_; lean_object* v___x_624_; 
v___x_623_ = lean_box(0);
v___x_624_ = lean_apply_2(v_toPure_621_, lean_box(0), v___x_623_);
return v___x_624_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___redArg___lam__8___boxed(lean_object* v_toPure_625_, lean_object* v_____x_626_){
_start:
{
lean_object* v_res_627_; 
v_res_627_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___redArg___lam__8(v_toPure_625_, v_____x_626_);
lean_dec_ref(v_____x_626_);
return v_res_627_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___redArg(lean_object* v_inst_628_, lean_object* v_inst_629_, lean_object* v_inst_630_, lean_object* v_inst_631_, lean_object* v_f_632_){
_start:
{
lean_object* v_toApplicative_633_; lean_object* v_toBind_634_; lean_object* v___f_635_; lean_object* v___f_636_; lean_object* v___f_637_; lean_object* v___f_638_; lean_object* v___x_639_; lean_object* v___x_640_; lean_object* v___x_641_; lean_object* v___x_642_; lean_object* v___x_643_; lean_object* v___x_644_; lean_object* v_getEnv_645_; lean_object* v_modifyEnv_646_; lean_object* v___x_648_; uint8_t v_isShared_649_; uint8_t v_isSharedCheck_664_; 
v_toApplicative_633_ = lean_ctor_get(v_inst_628_, 0);
lean_inc_ref(v_toApplicative_633_);
v_toBind_634_ = lean_ctor_get(v_inst_628_, 1);
lean_inc(v_toBind_634_);
lean_inc_ref_n(v_inst_628_, 7);
v___f_635_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_635_, 0, v_inst_628_);
v___f_636_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_636_, 0, v_inst_628_);
v___f_637_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__7), 6, 1);
lean_closure_set(v___f_637_, 0, v_inst_628_);
v___f_638_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__9), 6, 1);
lean_closure_set(v___f_638_, 0, v_inst_628_);
v___x_639_ = lean_alloc_closure((void*)(l_StateT_map), 8, 3);
lean_closure_set(v___x_639_, 0, lean_box(0));
lean_closure_set(v___x_639_, 1, lean_box(0));
lean_closure_set(v___x_639_, 2, v_inst_628_);
v___x_640_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_640_, 0, v___x_639_);
lean_ctor_set(v___x_640_, 1, v___f_635_);
v___x_641_ = lean_alloc_closure((void*)(l_StateT_pure), 6, 3);
lean_closure_set(v___x_641_, 0, lean_box(0));
lean_closure_set(v___x_641_, 1, lean_box(0));
lean_closure_set(v___x_641_, 2, v_inst_628_);
v___x_642_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_642_, 0, v___x_640_);
lean_ctor_set(v___x_642_, 1, v___x_641_);
lean_ctor_set(v___x_642_, 2, v___f_636_);
lean_ctor_set(v___x_642_, 3, v___f_637_);
lean_ctor_set(v___x_642_, 4, v___f_638_);
v___x_643_ = lean_alloc_closure((void*)(l_StateT_bind), 8, 3);
lean_closure_set(v___x_643_, 0, lean_box(0));
lean_closure_set(v___x_643_, 1, lean_box(0));
lean_closure_set(v___x_643_, 2, v_inst_628_);
v___x_644_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_644_, 0, v___x_642_);
lean_ctor_set(v___x_644_, 1, v___x_643_);
v_getEnv_645_ = lean_ctor_get(v_inst_629_, 0);
v_modifyEnv_646_ = lean_ctor_get(v_inst_629_, 1);
v_isSharedCheck_664_ = !lean_is_exclusive(v_inst_629_);
if (v_isSharedCheck_664_ == 0)
{
v___x_648_ = v_inst_629_;
v_isShared_649_ = v_isSharedCheck_664_;
goto v_resetjp_647_;
}
else
{
lean_inc(v_modifyEnv_646_);
lean_inc(v_getEnv_645_);
lean_dec(v_inst_629_);
v___x_648_ = lean_box(0);
v_isShared_649_ = v_isSharedCheck_664_;
goto v_resetjp_647_;
}
v_resetjp_647_:
{
lean_object* v___x_650_; lean_object* v___f_651_; lean_object* v___x_652_; lean_object* v___x_654_; 
lean_inc_ref(v_inst_628_);
v___x_650_ = lean_alloc_closure((void*)(l_StateT_lift), 6, 3);
lean_closure_set(v___x_650_, 0, lean_box(0));
lean_closure_set(v___x_650_, 1, lean_box(0));
lean_closure_set(v___x_650_, 2, v_inst_628_);
lean_inc_ref(v___x_650_);
v___f_651_ = lean_alloc_closure((void*)(l_Lean_instMonadEnvOfMonadLift___redArg___lam__0), 3, 2);
lean_closure_set(v___f_651_, 0, v_modifyEnv_646_);
lean_closure_set(v___f_651_, 1, v___x_650_);
v___x_652_ = lean_alloc_closure((void*)(l_StateT_lift), 6, 5);
lean_closure_set(v___x_652_, 0, lean_box(0));
lean_closure_set(v___x_652_, 1, lean_box(0));
lean_closure_set(v___x_652_, 2, v_inst_628_);
lean_closure_set(v___x_652_, 3, lean_box(0));
lean_closure_set(v___x_652_, 4, v_getEnv_645_);
if (v_isShared_649_ == 0)
{
lean_ctor_set(v___x_648_, 1, v___f_651_);
lean_ctor_set(v___x_648_, 0, v___x_652_);
v___x_654_ = v___x_648_;
goto v_reusejp_653_;
}
else
{
lean_object* v_reuseFailAlloc_663_; 
v_reuseFailAlloc_663_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_663_, 0, v___x_652_);
lean_ctor_set(v_reuseFailAlloc_663_, 1, v___f_651_);
v___x_654_ = v_reuseFailAlloc_663_;
goto v_reusejp_653_;
}
v_reusejp_653_:
{
lean_object* v_toPure_655_; lean_object* v___f_656_; lean_object* v___f_657_; lean_object* v___f_658_; lean_object* v___x_659_; lean_object* v___x_467__overap_660_; lean_object* v___x_661_; lean_object* v___x_662_; 
v_toPure_655_ = lean_ctor_get(v_toApplicative_633_, 1);
lean_inc_n(v_toPure_655_, 2);
lean_dec_ref(v_toApplicative_633_);
lean_inc(v_toBind_634_);
v___f_656_ = lean_alloc_closure((void*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___redArg___lam__7___boxed), 7, 4);
lean_closure_set(v___f_656_, 0, v_f_632_);
lean_closure_set(v___f_656_, 1, v_toPure_655_);
lean_closure_set(v___f_656_, 2, v_toBind_634_);
lean_closure_set(v___f_656_, 3, v_inst_631_);
v___f_657_ = lean_alloc_closure((void*)(l_instMonadLiftTOfMonadLift___redArg___lam__0), 4, 2);
lean_closure_set(v___f_657_, 0, v_inst_630_);
lean_closure_set(v___f_657_, 1, v___x_650_);
v___f_658_ = lean_alloc_closure((void*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___redArg___lam__8___boxed), 2, 1);
lean_closure_set(v___f_658_, 0, v_toPure_655_);
v___x_659_ = lean_unsigned_to_nat(0u);
v___x_467__overap_660_ = l_Lean_Server_Completion_forEligibleDeclsM___redArg(v___x_644_, v___x_654_, v___f_657_, v___f_656_);
v___x_661_ = lean_apply_1(v___x_467__overap_660_, v___x_659_);
v___x_662_ = lean_apply_4(v_toBind_634_, lean_box(0), lean_box(0), v___x_661_, v___f_658_);
return v___x_662_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM(lean_object* v_m_665_, lean_object* v_inst_666_, lean_object* v_inst_667_, lean_object* v_inst_668_, lean_object* v_inst_669_, lean_object* v_f_670_){
_start:
{
lean_object* v___x_671_; 
v___x_671_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___redArg(v_inst_666_, v_inst_667_, v_inst_668_, v_inst_669_, v_f_670_);
return v___x_671_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_matchAtomic(lean_object* v_id_672_, lean_object* v_declName_673_, uint8_t v_danglingDot_674_){
_start:
{
if (v_danglingDot_674_ == 0)
{
if (lean_obj_tag(v_id_672_) == 1)
{
lean_object* v_pre_675_; 
v_pre_675_ = lean_ctor_get(v_id_672_, 0);
if (lean_obj_tag(v_pre_675_) == 0)
{
if (lean_obj_tag(v_declName_673_) == 1)
{
lean_object* v_pre_676_; 
v_pre_676_ = lean_ctor_get(v_declName_673_, 0);
if (lean_obj_tag(v_pre_676_) == 0)
{
lean_object* v_str_677_; lean_object* v_str_678_; uint8_t v___x_679_; 
v_str_677_ = lean_ctor_get(v_id_672_, 1);
v_str_678_ = lean_ctor_get(v_declName_673_, 1);
v___x_679_ = l_Lean_String_charactersIn(v_str_677_, v_str_678_);
return v___x_679_;
}
else
{
return v_danglingDot_674_;
}
}
else
{
return v_danglingDot_674_;
}
}
else
{
return v_danglingDot_674_;
}
}
else
{
return v_danglingDot_674_;
}
}
else
{
uint8_t v___x_680_; 
v___x_680_ = 0;
return v___x_680_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_matchAtomic___boxed(lean_object* v_id_681_, lean_object* v_declName_682_, lean_object* v_danglingDot_683_){
_start:
{
uint8_t v_danglingDot_boxed_684_; uint8_t v_res_685_; lean_object* v_r_686_; 
v_danglingDot_boxed_684_ = lean_unbox(v_danglingDot_683_);
v_res_685_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_matchAtomic(v_id_681_, v_declName_682_, v_danglingDot_boxed_684_);
lean_dec(v_declName_682_);
lean_dec(v_id_681_);
v_r_686_ = lean_box(v_res_685_);
return v_r_686_;
}
}
static lean_object* _init_l_panic___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_truncate_go_spec__0___closed__0(void){
_start:
{
lean_object* v___x_687_; lean_object* v___x_688_; lean_object* v___x_689_; 
v___x_687_ = lean_unsigned_to_nat(0u);
v___x_688_ = l_Lean_instInhabitedName;
v___x_689_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_689_, 0, v___x_688_);
lean_ctor_set(v___x_689_, 1, v___x_687_);
return v___x_689_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_truncate_go_spec__0(lean_object* v_msg_690_){
_start:
{
lean_object* v___x_691_; lean_object* v___x_692_; 
v___x_691_ = lean_obj_once(&l_panic___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_truncate_go_spec__0___closed__0, &l_panic___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_truncate_go_spec__0___closed__0_once, _init_l_panic___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_truncate_go_spec__0___closed__0);
v___x_692_ = lean_panic_fn_borrowed(v___x_691_, v_msg_690_);
return v___x_692_;
}
}
static lean_object* _init_l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_truncate_go___closed__3(void){
_start:
{
lean_object* v___x_696_; lean_object* v___x_697_; lean_object* v___x_698_; lean_object* v___x_699_; lean_object* v___x_700_; lean_object* v___x_701_; 
v___x_696_ = ((lean_object*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_truncate_go___closed__2));
v___x_697_ = lean_unsigned_to_nat(26u);
v___x_698_ = lean_unsigned_to_nat(177u);
v___x_699_ = ((lean_object*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_truncate_go___closed__1));
v___x_700_ = ((lean_object*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_truncate_go___closed__0));
v___x_701_ = l_mkPanicMessageWithDecl(v___x_700_, v___x_699_, v___x_698_, v___x_697_, v___x_696_);
return v___x_701_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_truncate_go(lean_object* v_newLen_702_, lean_object* v_id_703_){
_start:
{
switch(lean_obj_tag(v_id_703_))
{
case 0:
{
lean_object* v___x_704_; lean_object* v___x_705_; 
lean_dec(v_newLen_702_);
v___x_704_ = lean_unsigned_to_nat(0u);
v___x_705_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_705_, 0, v_id_703_);
lean_ctor_set(v___x_705_, 1, v___x_704_);
return v___x_705_;
}
case 1:
{
lean_object* v_pre_706_; lean_object* v_str_707_; lean_object* v___x_708_; lean_object* v_snd_709_; lean_object* v___y_711_; lean_object* v___x_723_; lean_object* v___x_724_; uint8_t v___x_725_; 
v_pre_706_ = lean_ctor_get(v_id_703_, 0);
v_str_707_ = lean_ctor_get(v_id_703_, 1);
lean_inc(v_pre_706_);
lean_inc(v_newLen_702_);
v___x_708_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_truncate_go(v_newLen_702_, v_pre_706_);
v_snd_709_ = lean_ctor_get(v___x_708_, 1);
lean_inc(v_snd_709_);
v___x_723_ = lean_unsigned_to_nat(1u);
v___x_724_ = lean_nat_add(v_snd_709_, v___x_723_);
v___x_725_ = lean_nat_dec_le(v_newLen_702_, v___x_724_);
lean_dec(v___x_724_);
if (v___x_725_ == 0)
{
uint8_t v___x_726_; 
lean_dec_ref(v___x_708_);
v___x_726_ = l_Lean_Name_isAnonymous(v_pre_706_);
if (v___x_726_ == 0)
{
v___y_711_ = v___x_723_;
goto v___jp_710_;
}
else
{
lean_object* v___x_727_; 
v___x_727_ = lean_unsigned_to_nat(0u);
v___y_711_ = v___x_727_;
goto v___jp_710_;
}
}
else
{
lean_dec(v_snd_709_);
lean_dec_ref_known(v_id_703_, 2);
lean_dec(v_newLen_702_);
return v___x_708_;
}
v___jp_710_:
{
lean_object* v___x_712_; lean_object* v___x_713_; lean_object* v_len_x27_714_; uint8_t v___x_715_; 
v___x_712_ = lean_nat_add(v_snd_709_, v___y_711_);
v___x_713_ = lean_string_length(v_str_707_);
v_len_x27_714_ = lean_nat_add(v___x_712_, v___x_713_);
lean_dec(v___x_712_);
v___x_715_ = lean_nat_dec_le(v_len_x27_714_, v_newLen_702_);
if (v___x_715_ == 0)
{
lean_object* v___x_716_; lean_object* v___x_717_; lean_object* v___x_718_; lean_object* v___x_719_; lean_object* v___x_720_; lean_object* v___x_721_; 
lean_inc_ref(v_str_707_);
lean_inc(v_pre_706_);
lean_dec(v_len_x27_714_);
lean_dec_ref_known(v_id_703_, 2);
v___x_716_ = lean_unsigned_to_nat(0u);
v___x_717_ = lean_nat_sub(v_newLen_702_, v___y_711_);
v___x_718_ = lean_nat_sub(v___x_717_, v_snd_709_);
lean_dec(v_snd_709_);
lean_dec(v___x_717_);
v___x_719_ = lean_string_utf8_extract(v_str_707_, v___x_716_, v___x_718_);
lean_dec(v___x_718_);
lean_dec_ref(v_str_707_);
v___x_720_ = l_Lean_Name_str___override(v_pre_706_, v___x_719_);
v___x_721_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_721_, 0, v___x_720_);
lean_ctor_set(v___x_721_, 1, v_newLen_702_);
return v___x_721_;
}
else
{
lean_object* v___x_722_; 
lean_dec(v_snd_709_);
lean_dec(v_newLen_702_);
v___x_722_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_722_, 0, v_id_703_);
lean_ctor_set(v___x_722_, 1, v_len_x27_714_);
return v___x_722_;
}
}
}
default: 
{
lean_object* v___x_728_; lean_object* v___x_729_; 
lean_dec_ref_known(v_id_703_, 2);
lean_dec(v_newLen_702_);
v___x_728_ = lean_obj_once(&l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_truncate_go___closed__3, &l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_truncate_go___closed__3_once, _init_l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_truncate_go___closed__3);
v___x_729_ = l_panic___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_truncate_go_spec__0(v___x_728_);
return v___x_729_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_truncate(lean_object* v_id_730_, lean_object* v_newLen_731_){
_start:
{
lean_object* v___x_732_; lean_object* v_fst_733_; 
v___x_732_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_truncate_go(v_newLen_731_, v_id_730_);
v_fst_733_ = lean_ctor_get(v___x_732_, 0);
lean_inc(v_fst_733_);
lean_dec_ref(v___x_732_);
return v_fst_733_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f_visitNamespaces(lean_object* v_matchUsingNamespace_734_, lean_object* v_ns_735_, lean_object* v_a_736_, lean_object* v_a_737_, lean_object* v_a_738_, lean_object* v_a_739_, lean_object* v_a_740_, lean_object* v_a_741_, lean_object* v_a_742_, lean_object* v_a_743_){
_start:
{
if (lean_obj_tag(v_ns_735_) == 1)
{
lean_object* v_pre_745_; lean_object* v___x_746_; 
v_pre_745_ = lean_ctor_get(v_ns_735_, 0);
lean_inc(v_pre_745_);
lean_inc_ref(v_matchUsingNamespace_734_);
lean_inc(v_a_743_);
lean_inc_ref(v_a_742_);
lean_inc(v_a_741_);
lean_inc_ref(v_a_740_);
lean_inc_ref(v_a_739_);
lean_inc(v_a_738_);
lean_inc_ref(v_a_737_);
v___x_746_ = lean_apply_10(v_matchUsingNamespace_734_, v_ns_735_, v_a_736_, v_a_737_, v_a_738_, v_a_739_, v_a_740_, v_a_741_, v_a_742_, v_a_743_, lean_box(0));
if (lean_obj_tag(v___x_746_) == 0)
{
lean_object* v_a_747_; 
v_a_747_ = lean_ctor_get(v___x_746_, 0);
lean_inc(v_a_747_);
if (lean_obj_tag(v_a_747_) == 0)
{
lean_dec_ref_known(v_a_747_, 1);
lean_dec(v_pre_745_);
lean_dec_ref(v_matchUsingNamespace_734_);
return v___x_746_;
}
else
{
lean_object* v_a_748_; lean_object* v_snd_749_; 
lean_dec_ref_known(v___x_746_, 1);
v_a_748_ = lean_ctor_get(v_a_747_, 0);
lean_inc(v_a_748_);
lean_dec_ref_known(v_a_747_, 1);
v_snd_749_ = lean_ctor_get(v_a_748_, 1);
lean_inc(v_snd_749_);
lean_dec(v_a_748_);
v_ns_735_ = v_pre_745_;
v_a_736_ = v_snd_749_;
goto _start;
}
}
else
{
lean_dec(v_pre_745_);
lean_dec_ref(v_matchUsingNamespace_734_);
return v___x_746_;
}
}
else
{
lean_object* v___x_751_; lean_object* v___x_752_; lean_object* v___x_753_; lean_object* v___x_754_; 
lean_dec(v_ns_735_);
lean_dec_ref(v_matchUsingNamespace_734_);
v___x_751_ = lean_box(0);
v___x_752_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_752_, 0, v___x_751_);
lean_ctor_set(v___x_752_, 1, v_a_736_);
v___x_753_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_753_, 0, v___x_752_);
v___x_754_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_754_, 0, v___x_753_);
return v___x_754_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f_visitNamespaces___boxed(lean_object* v_matchUsingNamespace_755_, lean_object* v_ns_756_, lean_object* v_a_757_, lean_object* v_a_758_, lean_object* v_a_759_, lean_object* v_a_760_, lean_object* v_a_761_, lean_object* v_a_762_, lean_object* v_a_763_, lean_object* v_a_764_, lean_object* v_a_765_){
_start:
{
lean_object* v_res_766_; 
v_res_766_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f_visitNamespaces(v_matchUsingNamespace_755_, v_ns_756_, v_a_757_, v_a_758_, v_a_759_, v_a_760_, v_a_761_, v_a_762_, v_a_763_, v_a_764_);
lean_dec(v_a_764_);
lean_dec_ref(v_a_763_);
lean_dec(v_a_762_);
lean_dec_ref(v_a_761_);
lean_dec_ref(v_a_760_);
lean_dec(v_a_759_);
lean_dec_ref(v_a_758_);
return v_res_766_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f___lam__0(lean_object* v_id_767_, uint8_t v_danglingDot_768_, lean_object* v_declName_769_, lean_object* v_ns_770_, lean_object* v___y_771_, lean_object* v___y_772_, lean_object* v___y_773_, lean_object* v___y_774_, lean_object* v___y_775_, lean_object* v___y_776_, lean_object* v___y_777_, lean_object* v___y_778_){
_start:
{
lean_object* v___x_780_; lean_object* v_a_781_; lean_object* v___x_783_; uint8_t v_isShared_784_; uint8_t v_isSharedCheck_802_; 
v___x_780_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_matchDecl_x3f___redArg(v_ns_770_, v_id_767_, v_danglingDot_768_, v_declName_769_, v___y_778_);
v_a_781_ = lean_ctor_get(v___x_780_, 0);
v_isSharedCheck_802_ = !lean_is_exclusive(v___x_780_);
if (v_isSharedCheck_802_ == 0)
{
v___x_783_ = v___x_780_;
v_isShared_784_ = v_isSharedCheck_802_;
goto v_resetjp_782_;
}
else
{
lean_inc(v_a_781_);
lean_dec(v___x_780_);
v___x_783_ = lean_box(0);
v_isShared_784_ = v_isSharedCheck_802_;
goto v_resetjp_782_;
}
v_resetjp_782_:
{
if (lean_obj_tag(v_a_781_) == 1)
{
lean_object* v_val_785_; lean_object* v___x_786_; lean_object* v___y_788_; 
v_val_785_ = lean_ctor_get(v_a_781_, 0);
v___x_786_ = lean_box(0);
if (lean_obj_tag(v___y_771_) == 0)
{
v___y_788_ = v_a_781_;
goto v___jp_787_;
}
else
{
lean_object* v_val_794_; uint8_t v___x_795_; 
v_val_794_ = lean_ctor_get(v___y_771_, 0);
v___x_795_ = l_Lean_Name_isSuffixOf(v_val_785_, v_val_794_);
if (v___x_795_ == 0)
{
lean_dec_ref_known(v_a_781_, 1);
v___y_788_ = v___y_771_;
goto v___jp_787_;
}
else
{
lean_dec_ref_known(v___y_771_, 1);
v___y_788_ = v_a_781_;
goto v___jp_787_;
}
}
v___jp_787_:
{
lean_object* v___x_789_; lean_object* v___x_790_; lean_object* v___x_792_; 
v___x_789_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_789_, 0, v___x_786_);
lean_ctor_set(v___x_789_, 1, v___y_788_);
v___x_790_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_790_, 0, v___x_789_);
if (v_isShared_784_ == 0)
{
lean_ctor_set(v___x_783_, 0, v___x_790_);
v___x_792_ = v___x_783_;
goto v_reusejp_791_;
}
else
{
lean_object* v_reuseFailAlloc_793_; 
v_reuseFailAlloc_793_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_793_, 0, v___x_790_);
v___x_792_ = v_reuseFailAlloc_793_;
goto v_reusejp_791_;
}
v_reusejp_791_:
{
return v___x_792_;
}
}
}
else
{
lean_object* v___x_796_; lean_object* v___x_797_; lean_object* v___x_798_; lean_object* v___x_800_; 
lean_dec(v_a_781_);
v___x_796_ = lean_box(0);
v___x_797_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_797_, 0, v___x_796_);
lean_ctor_set(v___x_797_, 1, v___y_771_);
v___x_798_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_798_, 0, v___x_797_);
if (v_isShared_784_ == 0)
{
lean_ctor_set(v___x_783_, 0, v___x_798_);
v___x_800_ = v___x_783_;
goto v_reusejp_799_;
}
else
{
lean_object* v_reuseFailAlloc_801_; 
v_reuseFailAlloc_801_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_801_, 0, v___x_798_);
v___x_800_ = v_reuseFailAlloc_801_;
goto v_reusejp_799_;
}
v_reusejp_799_:
{
return v___x_800_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f___lam__0___boxed(lean_object* v_id_803_, lean_object* v_danglingDot_804_, lean_object* v_declName_805_, lean_object* v_ns_806_, lean_object* v___y_807_, lean_object* v___y_808_, lean_object* v___y_809_, lean_object* v___y_810_, lean_object* v___y_811_, lean_object* v___y_812_, lean_object* v___y_813_, lean_object* v___y_814_, lean_object* v___y_815_){
_start:
{
uint8_t v_danglingDot_boxed_816_; lean_object* v_res_817_; 
v_danglingDot_boxed_816_ = lean_unbox(v_danglingDot_804_);
v_res_817_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f___lam__0(v_id_803_, v_danglingDot_boxed_816_, v_declName_805_, v_ns_806_, v___y_807_, v___y_808_, v___y_809_, v___y_810_, v___y_811_, v___y_812_, v___y_813_, v___y_814_);
lean_dec(v___y_814_);
lean_dec_ref(v___y_813_);
lean_dec(v___y_812_);
lean_dec_ref(v___y_811_);
lean_dec_ref(v___y_810_);
lean_dec(v___y_809_);
lean_dec_ref(v___y_808_);
lean_dec(v_ns_806_);
lean_dec(v_id_803_);
return v_res_817_;
}
}
LEAN_EXPORT uint8_t l_List_elem___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f_spec__0(lean_object* v_a_818_, lean_object* v_x_819_){
_start:
{
if (lean_obj_tag(v_x_819_) == 0)
{
uint8_t v___x_820_; 
v___x_820_ = 0;
return v___x_820_;
}
else
{
lean_object* v_head_821_; lean_object* v_tail_822_; uint8_t v___x_823_; 
v_head_821_ = lean_ctor_get(v_x_819_, 0);
v_tail_822_ = lean_ctor_get(v_x_819_, 1);
v___x_823_ = lean_name_eq(v_a_818_, v_head_821_);
if (v___x_823_ == 0)
{
v_x_819_ = v_tail_822_;
goto _start;
}
else
{
return v___x_823_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_elem___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f_spec__0___boxed(lean_object* v_a_825_, lean_object* v_x_826_){
_start:
{
uint8_t v_res_827_; lean_object* v_r_828_; 
v_res_827_ = l_List_elem___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f_spec__0(v_a_825_, v_x_826_);
lean_dec(v_x_826_);
lean_dec(v_a_825_);
v_r_828_ = lean_box(v_res_827_);
return v_r_828_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f_spec__1_spec__1___redArg(lean_object* v_declName_829_, lean_object* v_id_830_, uint8_t v_danglingDot_831_, lean_object* v_as_x27_832_, lean_object* v_b_833_, lean_object* v___y_834_, lean_object* v___y_835_){
_start:
{
if (lean_obj_tag(v_as_x27_832_) == 0)
{
lean_object* v___x_837_; lean_object* v___x_838_; lean_object* v___x_839_; 
lean_dec(v_declName_829_);
v___x_837_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_837_, 0, v_b_833_);
lean_ctor_set(v___x_837_, 1, v___y_834_);
v___x_838_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_838_, 0, v___x_837_);
v___x_839_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_839_, 0, v___x_838_);
return v___x_839_;
}
else
{
lean_object* v_head_840_; lean_object* v_tail_841_; lean_object* v___x_842_; 
v_head_840_ = lean_ctor_get(v_as_x27_832_, 0);
v_tail_841_ = lean_ctor_get(v_as_x27_832_, 1);
v___x_842_ = lean_box(0);
if (lean_obj_tag(v_head_840_) == 0)
{
lean_object* v_ns_843_; lean_object* v_except_844_; uint8_t v___x_845_; 
v_ns_843_ = lean_ctor_get(v_head_840_, 0);
v_except_844_ = lean_ctor_get(v_head_840_, 1);
v___x_845_ = l_List_elem___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f_spec__0(v_declName_829_, v_except_844_);
if (v___x_845_ == 0)
{
lean_object* v___x_846_; lean_object* v_a_847_; 
lean_inc(v_declName_829_);
v___x_846_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_matchDecl_x3f___redArg(v_ns_843_, v_id_830_, v_danglingDot_831_, v_declName_829_, v___y_835_);
v_a_847_ = lean_ctor_get(v___x_846_, 0);
lean_inc(v_a_847_);
lean_dec_ref(v___x_846_);
if (lean_obj_tag(v_a_847_) == 1)
{
if (lean_obj_tag(v___y_834_) == 0)
{
v_as_x27_832_ = v_tail_841_;
v_b_833_ = v___x_842_;
v___y_834_ = v_a_847_;
goto _start;
}
else
{
lean_object* v_val_849_; lean_object* v_val_850_; uint8_t v___x_851_; 
v_val_849_ = lean_ctor_get(v_a_847_, 0);
v_val_850_ = lean_ctor_get(v___y_834_, 0);
v___x_851_ = l_Lean_Name_isSuffixOf(v_val_849_, v_val_850_);
if (v___x_851_ == 0)
{
lean_dec_ref_known(v_a_847_, 1);
v_as_x27_832_ = v_tail_841_;
v_b_833_ = v___x_842_;
goto _start;
}
else
{
lean_dec_ref_known(v___y_834_, 1);
v_as_x27_832_ = v_tail_841_;
v_b_833_ = v___x_842_;
v___y_834_ = v_a_847_;
goto _start;
}
}
}
else
{
lean_dec(v_a_847_);
v_as_x27_832_ = v_tail_841_;
v_b_833_ = v___x_842_;
goto _start;
}
}
else
{
v_as_x27_832_ = v_tail_841_;
v_b_833_ = v___x_842_;
goto _start;
}
}
else
{
v_as_x27_832_ = v_tail_841_;
v_b_833_ = v___x_842_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f_spec__1_spec__1___redArg___boxed(lean_object* v_declName_857_, lean_object* v_id_858_, lean_object* v_danglingDot_859_, lean_object* v_as_x27_860_, lean_object* v_b_861_, lean_object* v___y_862_, lean_object* v___y_863_, lean_object* v___y_864_){
_start:
{
uint8_t v_danglingDot_boxed_865_; lean_object* v_res_866_; 
v_danglingDot_boxed_865_ = lean_unbox(v_danglingDot_859_);
v_res_866_ = l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f_spec__1_spec__1___redArg(v_declName_857_, v_id_858_, v_danglingDot_boxed_865_, v_as_x27_860_, v_b_861_, v___y_862_, v___y_863_);
lean_dec(v___y_863_);
lean_dec(v_as_x27_860_);
lean_dec(v_id_858_);
return v_res_866_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f_spec__1___redArg(lean_object* v_declName_867_, lean_object* v_id_868_, uint8_t v_danglingDot_869_, lean_object* v_as_870_, lean_object* v_as_x27_871_, lean_object* v_b_872_, lean_object* v___y_873_, lean_object* v___y_874_, lean_object* v___y_875_, lean_object* v___y_876_, lean_object* v___y_877_, lean_object* v___y_878_, lean_object* v___y_879_, lean_object* v___y_880_){
_start:
{
if (lean_obj_tag(v_as_x27_871_) == 0)
{
lean_object* v___x_882_; lean_object* v___x_883_; lean_object* v___x_884_; 
lean_dec(v_declName_867_);
v___x_882_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_882_, 0, v_b_872_);
lean_ctor_set(v___x_882_, 1, v___y_873_);
v___x_883_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_883_, 0, v___x_882_);
v___x_884_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_884_, 0, v___x_883_);
return v___x_884_;
}
else
{
lean_object* v_head_885_; lean_object* v_tail_886_; lean_object* v___x_887_; 
v_head_885_ = lean_ctor_get(v_as_x27_871_, 0);
v_tail_886_ = lean_ctor_get(v_as_x27_871_, 1);
v___x_887_ = lean_box(0);
if (lean_obj_tag(v_head_885_) == 0)
{
lean_object* v_ns_888_; lean_object* v_except_889_; uint8_t v___x_890_; 
v_ns_888_ = lean_ctor_get(v_head_885_, 0);
v_except_889_ = lean_ctor_get(v_head_885_, 1);
v___x_890_ = l_List_elem___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f_spec__0(v_declName_867_, v_except_889_);
if (v___x_890_ == 0)
{
lean_object* v___x_891_; lean_object* v_a_892_; 
lean_inc(v_declName_867_);
v___x_891_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_matchDecl_x3f___redArg(v_ns_888_, v_id_868_, v_danglingDot_869_, v_declName_867_, v___y_880_);
v_a_892_ = lean_ctor_get(v___x_891_, 0);
lean_inc(v_a_892_);
lean_dec_ref(v___x_891_);
if (lean_obj_tag(v_a_892_) == 1)
{
if (lean_obj_tag(v___y_873_) == 0)
{
lean_object* v___x_893_; 
v___x_893_ = l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f_spec__1_spec__1___redArg(v_declName_867_, v_id_868_, v_danglingDot_869_, v_tail_886_, v___x_887_, v_a_892_, v___y_880_);
return v___x_893_;
}
else
{
lean_object* v_val_894_; lean_object* v_val_895_; uint8_t v___x_896_; 
v_val_894_ = lean_ctor_get(v_a_892_, 0);
v_val_895_ = lean_ctor_get(v___y_873_, 0);
v___x_896_ = l_Lean_Name_isSuffixOf(v_val_894_, v_val_895_);
if (v___x_896_ == 0)
{
lean_object* v___x_897_; 
lean_dec_ref_known(v_a_892_, 1);
v___x_897_ = l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f_spec__1_spec__1___redArg(v_declName_867_, v_id_868_, v_danglingDot_869_, v_tail_886_, v___x_887_, v___y_873_, v___y_880_);
return v___x_897_;
}
else
{
lean_object* v___x_898_; 
lean_dec_ref_known(v___y_873_, 1);
v___x_898_ = l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f_spec__1_spec__1___redArg(v_declName_867_, v_id_868_, v_danglingDot_869_, v_tail_886_, v___x_887_, v_a_892_, v___y_880_);
return v___x_898_;
}
}
}
else
{
lean_object* v___x_899_; 
lean_dec(v_a_892_);
v___x_899_ = l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f_spec__1_spec__1___redArg(v_declName_867_, v_id_868_, v_danglingDot_869_, v_tail_886_, v___x_887_, v___y_873_, v___y_880_);
return v___x_899_;
}
}
else
{
lean_object* v___x_900_; 
v___x_900_ = l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f_spec__1_spec__1___redArg(v_declName_867_, v_id_868_, v_danglingDot_869_, v_tail_886_, v___x_887_, v___y_873_, v___y_880_);
return v___x_900_;
}
}
else
{
lean_object* v___x_901_; 
v___x_901_ = l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f_spec__1_spec__1___redArg(v_declName_867_, v_id_868_, v_danglingDot_869_, v_tail_886_, v___x_887_, v___y_873_, v___y_880_);
return v___x_901_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f_spec__1___redArg___boxed(lean_object* v_declName_902_, lean_object* v_id_903_, lean_object* v_danglingDot_904_, lean_object* v_as_905_, lean_object* v_as_x27_906_, lean_object* v_b_907_, lean_object* v___y_908_, lean_object* v___y_909_, lean_object* v___y_910_, lean_object* v___y_911_, lean_object* v___y_912_, lean_object* v___y_913_, lean_object* v___y_914_, lean_object* v___y_915_, lean_object* v___y_916_){
_start:
{
uint8_t v_danglingDot_boxed_917_; lean_object* v_res_918_; 
v_danglingDot_boxed_917_ = lean_unbox(v_danglingDot_904_);
v_res_918_ = l_List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f_spec__1___redArg(v_declName_902_, v_id_903_, v_danglingDot_boxed_917_, v_as_905_, v_as_x27_906_, v_b_907_, v___y_908_, v___y_909_, v___y_910_, v___y_911_, v___y_912_, v___y_913_, v___y_914_, v___y_915_);
lean_dec(v___y_915_);
lean_dec_ref(v___y_914_);
lean_dec(v___y_913_);
lean_dec_ref(v___y_912_);
lean_dec_ref(v___y_911_);
lean_dec(v___y_910_);
lean_dec_ref(v___y_909_);
lean_dec(v_as_x27_906_);
lean_dec(v_as_905_);
lean_dec(v_id_903_);
return v_res_918_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f(lean_object* v_ctx_919_, lean_object* v_declName_920_, lean_object* v_id_921_, uint8_t v_danglingDot_922_, lean_object* v_a_923_, lean_object* v_a_924_, lean_object* v_a_925_, lean_object* v_a_926_, lean_object* v_a_927_, lean_object* v_a_928_, lean_object* v_a_929_){
_start:
{
lean_object* v___y_932_; lean_object* v_toCommandContextInfo_969_; lean_object* v_currNamespace_970_; lean_object* v_openDecls_971_; lean_object* v___x_972_; lean_object* v_matchUsingNamespace_973_; lean_object* v___x_974_; lean_object* v___x_975_; 
v_toCommandContextInfo_969_ = lean_ctor_get(v_ctx_919_, 0);
lean_inc_ref(v_toCommandContextInfo_969_);
lean_dec_ref(v_ctx_919_);
v_currNamespace_970_ = lean_ctor_get(v_toCommandContextInfo_969_, 5);
lean_inc(v_currNamespace_970_);
v_openDecls_971_ = lean_ctor_get(v_toCommandContextInfo_969_, 6);
lean_inc(v_openDecls_971_);
lean_dec_ref(v_toCommandContextInfo_969_);
v___x_972_ = lean_box(v_danglingDot_922_);
lean_inc(v_declName_920_);
lean_inc(v_id_921_);
v_matchUsingNamespace_973_ = lean_alloc_closure((void*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f___lam__0___boxed), 13, 3);
lean_closure_set(v_matchUsingNamespace_973_, 0, v_id_921_);
lean_closure_set(v_matchUsingNamespace_973_, 1, v___x_972_);
lean_closure_set(v_matchUsingNamespace_973_, 2, v_declName_920_);
v___x_974_ = lean_box(0);
v___x_975_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f_visitNamespaces(v_matchUsingNamespace_973_, v_currNamespace_970_, v___x_974_, v_a_923_, v_a_924_, v_a_925_, v_a_926_, v_a_927_, v_a_928_, v_a_929_);
if (lean_obj_tag(v___x_975_) == 0)
{
lean_object* v_a_976_; 
v_a_976_ = lean_ctor_get(v___x_975_, 0);
lean_inc(v_a_976_);
if (lean_obj_tag(v_a_976_) == 0)
{
lean_dec_ref_known(v_a_976_, 1);
lean_dec(v_openDecls_971_);
lean_dec(v_id_921_);
lean_dec(v_declName_920_);
v___y_932_ = v___x_975_;
goto v___jp_931_;
}
else
{
lean_object* v_a_977_; lean_object* v_snd_978_; lean_object* v___x_979_; lean_object* v___x_980_; 
lean_dec_ref_known(v___x_975_, 1);
v_a_977_ = lean_ctor_get(v_a_976_, 0);
lean_inc(v_a_977_);
lean_dec_ref_known(v_a_976_, 1);
v_snd_978_ = lean_ctor_get(v_a_977_, 1);
lean_inc(v_snd_978_);
lean_dec(v_a_977_);
v___x_979_ = lean_box(0);
lean_inc(v_declName_920_);
v___x_980_ = l_List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f_spec__1___redArg(v_declName_920_, v_id_921_, v_danglingDot_922_, v_openDecls_971_, v_openDecls_971_, v___x_979_, v_snd_978_, v_a_923_, v_a_924_, v_a_925_, v_a_926_, v_a_927_, v_a_928_, v_a_929_);
lean_dec(v_openDecls_971_);
if (lean_obj_tag(v___x_980_) == 0)
{
lean_object* v_a_981_; lean_object* v_a_982_; lean_object* v_snd_983_; lean_object* v___x_984_; lean_object* v___x_985_; 
v_a_981_ = lean_ctor_get(v___x_980_, 0);
lean_inc(v_a_981_);
lean_dec_ref_known(v___x_980_, 1);
v_a_982_ = lean_ctor_get(v_a_981_, 0);
lean_inc(v_a_982_);
lean_dec(v_a_981_);
v_snd_983_ = lean_ctor_get(v_a_982_, 1);
lean_inc(v_snd_983_);
lean_dec(v_a_982_);
v___x_984_ = lean_obj_once(&l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_matchDecl_x3f___redArg___closed__0, &l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_matchDecl_x3f___redArg___closed__0_once, _init_l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_matchDecl_x3f___redArg___closed__0);
v___x_985_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f___lam__0(v_id_921_, v_danglingDot_922_, v_declName_920_, v___x_984_, v_snd_983_, v_a_923_, v_a_924_, v_a_925_, v_a_926_, v_a_927_, v_a_928_, v_a_929_);
lean_dec(v_id_921_);
v___y_932_ = v___x_985_;
goto v___jp_931_;
}
else
{
lean_dec(v_id_921_);
lean_dec(v_declName_920_);
v___y_932_ = v___x_980_;
goto v___jp_931_;
}
}
}
else
{
lean_dec(v_openDecls_971_);
lean_dec(v_id_921_);
lean_dec(v_declName_920_);
v___y_932_ = v___x_975_;
goto v___jp_931_;
}
v___jp_931_:
{
if (lean_obj_tag(v___y_932_) == 0)
{
lean_object* v_a_933_; lean_object* v___x_935_; uint8_t v_isShared_936_; uint8_t v_isSharedCheck_960_; 
v_a_933_ = lean_ctor_get(v___y_932_, 0);
v_isSharedCheck_960_ = !lean_is_exclusive(v___y_932_);
if (v_isSharedCheck_960_ == 0)
{
v___x_935_ = v___y_932_;
v_isShared_936_ = v_isSharedCheck_960_;
goto v_resetjp_934_;
}
else
{
lean_inc(v_a_933_);
lean_dec(v___y_932_);
v___x_935_ = lean_box(0);
v_isShared_936_ = v_isSharedCheck_960_;
goto v_resetjp_934_;
}
v_resetjp_934_:
{
if (lean_obj_tag(v_a_933_) == 0)
{
lean_object* v_a_937_; lean_object* v___x_939_; uint8_t v_isShared_940_; uint8_t v_isSharedCheck_947_; 
v_a_937_ = lean_ctor_get(v_a_933_, 0);
v_isSharedCheck_947_ = !lean_is_exclusive(v_a_933_);
if (v_isSharedCheck_947_ == 0)
{
v___x_939_ = v_a_933_;
v_isShared_940_ = v_isSharedCheck_947_;
goto v_resetjp_938_;
}
else
{
lean_inc(v_a_937_);
lean_dec(v_a_933_);
v___x_939_ = lean_box(0);
v_isShared_940_ = v_isSharedCheck_947_;
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
lean_object* v_reuseFailAlloc_946_; 
v_reuseFailAlloc_946_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_946_, 0, v_a_937_);
v___x_942_ = v_reuseFailAlloc_946_;
goto v_reusejp_941_;
}
v_reusejp_941_:
{
lean_object* v___x_944_; 
if (v_isShared_936_ == 0)
{
lean_ctor_set(v___x_935_, 0, v___x_942_);
v___x_944_ = v___x_935_;
goto v_reusejp_943_;
}
else
{
lean_object* v_reuseFailAlloc_945_; 
v_reuseFailAlloc_945_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_945_, 0, v___x_942_);
v___x_944_ = v_reuseFailAlloc_945_;
goto v_reusejp_943_;
}
v_reusejp_943_:
{
return v___x_944_;
}
}
}
}
else
{
lean_object* v_a_948_; lean_object* v___x_950_; uint8_t v_isShared_951_; uint8_t v_isSharedCheck_959_; 
v_a_948_ = lean_ctor_get(v_a_933_, 0);
v_isSharedCheck_959_ = !lean_is_exclusive(v_a_933_);
if (v_isSharedCheck_959_ == 0)
{
v___x_950_ = v_a_933_;
v_isShared_951_ = v_isSharedCheck_959_;
goto v_resetjp_949_;
}
else
{
lean_inc(v_a_948_);
lean_dec(v_a_933_);
v___x_950_ = lean_box(0);
v_isShared_951_ = v_isSharedCheck_959_;
goto v_resetjp_949_;
}
v_resetjp_949_:
{
lean_object* v_snd_952_; lean_object* v___x_954_; 
v_snd_952_ = lean_ctor_get(v_a_948_, 1);
lean_inc(v_snd_952_);
lean_dec(v_a_948_);
if (v_isShared_951_ == 0)
{
lean_ctor_set(v___x_950_, 0, v_snd_952_);
v___x_954_ = v___x_950_;
goto v_reusejp_953_;
}
else
{
lean_object* v_reuseFailAlloc_958_; 
v_reuseFailAlloc_958_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_958_, 0, v_snd_952_);
v___x_954_ = v_reuseFailAlloc_958_;
goto v_reusejp_953_;
}
v_reusejp_953_:
{
lean_object* v___x_956_; 
if (v_isShared_936_ == 0)
{
lean_ctor_set(v___x_935_, 0, v___x_954_);
v___x_956_ = v___x_935_;
goto v_reusejp_955_;
}
else
{
lean_object* v_reuseFailAlloc_957_; 
v_reuseFailAlloc_957_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_957_, 0, v___x_954_);
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
}
else
{
lean_object* v_a_961_; lean_object* v___x_963_; uint8_t v_isShared_964_; uint8_t v_isSharedCheck_968_; 
v_a_961_ = lean_ctor_get(v___y_932_, 0);
v_isSharedCheck_968_ = !lean_is_exclusive(v___y_932_);
if (v_isSharedCheck_968_ == 0)
{
v___x_963_ = v___y_932_;
v_isShared_964_ = v_isSharedCheck_968_;
goto v_resetjp_962_;
}
else
{
lean_inc(v_a_961_);
lean_dec(v___y_932_);
v___x_963_ = lean_box(0);
v_isShared_964_ = v_isSharedCheck_968_;
goto v_resetjp_962_;
}
v_resetjp_962_:
{
lean_object* v___x_966_; 
if (v_isShared_964_ == 0)
{
v___x_966_ = v___x_963_;
goto v_reusejp_965_;
}
else
{
lean_object* v_reuseFailAlloc_967_; 
v_reuseFailAlloc_967_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_967_, 0, v_a_961_);
v___x_966_ = v_reuseFailAlloc_967_;
goto v_reusejp_965_;
}
v_reusejp_965_:
{
return v___x_966_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f___boxed(lean_object* v_ctx_986_, lean_object* v_declName_987_, lean_object* v_id_988_, lean_object* v_danglingDot_989_, lean_object* v_a_990_, lean_object* v_a_991_, lean_object* v_a_992_, lean_object* v_a_993_, lean_object* v_a_994_, lean_object* v_a_995_, lean_object* v_a_996_, lean_object* v_a_997_){
_start:
{
uint8_t v_danglingDot_boxed_998_; lean_object* v_res_999_; 
v_danglingDot_boxed_998_ = lean_unbox(v_danglingDot_989_);
v_res_999_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f(v_ctx_986_, v_declName_987_, v_id_988_, v_danglingDot_boxed_998_, v_a_990_, v_a_991_, v_a_992_, v_a_993_, v_a_994_, v_a_995_, v_a_996_);
lean_dec(v_a_996_);
lean_dec_ref(v_a_995_);
lean_dec(v_a_994_);
lean_dec_ref(v_a_993_);
lean_dec_ref(v_a_992_);
lean_dec(v_a_991_);
lean_dec_ref(v_a_990_);
return v_res_999_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f_spec__1(lean_object* v_declName_1000_, lean_object* v_id_1001_, uint8_t v_danglingDot_1002_, lean_object* v_as_1003_, lean_object* v_as_x27_1004_, lean_object* v_b_1005_, lean_object* v_a_1006_, lean_object* v___y_1007_, lean_object* v___y_1008_, lean_object* v___y_1009_, lean_object* v___y_1010_, lean_object* v___y_1011_, lean_object* v___y_1012_, lean_object* v___y_1013_, lean_object* v___y_1014_){
_start:
{
lean_object* v___x_1016_; 
v___x_1016_ = l_List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f_spec__1___redArg(v_declName_1000_, v_id_1001_, v_danglingDot_1002_, v_as_1003_, v_as_x27_1004_, v_b_1005_, v___y_1007_, v___y_1008_, v___y_1009_, v___y_1010_, v___y_1011_, v___y_1012_, v___y_1013_, v___y_1014_);
return v___x_1016_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f_spec__1___boxed(lean_object* v_declName_1017_, lean_object* v_id_1018_, lean_object* v_danglingDot_1019_, lean_object* v_as_1020_, lean_object* v_as_x27_1021_, lean_object* v_b_1022_, lean_object* v_a_1023_, lean_object* v___y_1024_, lean_object* v___y_1025_, lean_object* v___y_1026_, lean_object* v___y_1027_, lean_object* v___y_1028_, lean_object* v___y_1029_, lean_object* v___y_1030_, lean_object* v___y_1031_, lean_object* v___y_1032_){
_start:
{
uint8_t v_danglingDot_boxed_1033_; lean_object* v_res_1034_; 
v_danglingDot_boxed_1033_ = lean_unbox(v_danglingDot_1019_);
v_res_1034_ = l_List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f_spec__1(v_declName_1017_, v_id_1018_, v_danglingDot_boxed_1033_, v_as_1020_, v_as_x27_1021_, v_b_1022_, v_a_1023_, v___y_1024_, v___y_1025_, v___y_1026_, v___y_1027_, v___y_1028_, v___y_1029_, v___y_1030_, v___y_1031_);
lean_dec(v___y_1031_);
lean_dec_ref(v___y_1030_);
lean_dec(v___y_1029_);
lean_dec_ref(v___y_1028_);
lean_dec_ref(v___y_1027_);
lean_dec(v___y_1026_);
lean_dec_ref(v___y_1025_);
lean_dec(v_as_x27_1021_);
lean_dec(v_as_1020_);
lean_dec(v_id_1018_);
return v_res_1034_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f_spec__1_spec__1(lean_object* v_declName_1035_, lean_object* v_id_1036_, uint8_t v_danglingDot_1037_, lean_object* v_as_1038_, lean_object* v_as_x27_1039_, lean_object* v_b_1040_, lean_object* v_a_1041_, lean_object* v___y_1042_, lean_object* v___y_1043_, lean_object* v___y_1044_, lean_object* v___y_1045_, lean_object* v___y_1046_, lean_object* v___y_1047_, lean_object* v___y_1048_, lean_object* v___y_1049_){
_start:
{
lean_object* v___x_1051_; 
v___x_1051_ = l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f_spec__1_spec__1___redArg(v_declName_1035_, v_id_1036_, v_danglingDot_1037_, v_as_x27_1039_, v_b_1040_, v___y_1042_, v___y_1049_);
return v___x_1051_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f_spec__1_spec__1___boxed(lean_object* v_declName_1052_, lean_object* v_id_1053_, lean_object* v_danglingDot_1054_, lean_object* v_as_1055_, lean_object* v_as_x27_1056_, lean_object* v_b_1057_, lean_object* v_a_1058_, lean_object* v___y_1059_, lean_object* v___y_1060_, lean_object* v___y_1061_, lean_object* v___y_1062_, lean_object* v___y_1063_, lean_object* v___y_1064_, lean_object* v___y_1065_, lean_object* v___y_1066_, lean_object* v___y_1067_){
_start:
{
uint8_t v_danglingDot_boxed_1068_; lean_object* v_res_1069_; 
v_danglingDot_boxed_1068_ = lean_unbox(v_danglingDot_1054_);
v_res_1069_ = l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f_spec__1_spec__1(v_declName_1052_, v_id_1053_, v_danglingDot_boxed_1068_, v_as_1055_, v_as_x27_1056_, v_b_1057_, v_a_1058_, v___y_1059_, v___y_1060_, v___y_1061_, v___y_1062_, v___y_1063_, v___y_1064_, v___y_1065_, v___y_1066_);
lean_dec(v___y_1066_);
lean_dec_ref(v___y_1065_);
lean_dec(v___y_1064_);
lean_dec_ref(v___y_1063_);
lean_dec_ref(v___y_1062_);
lean_dec(v___y_1061_);
lean_dec_ref(v___y_1060_);
lean_dec(v_as_x27_1056_);
lean_dec(v_as_1055_);
lean_dec(v_id_1053_);
return v_res_1069_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_completeNamespaces_spec__0___redArg(lean_object* v_ctx_1070_, lean_object* v_id_1071_, uint8_t v_danglingDot_1072_, lean_object* v___x_1073_, lean_object* v_a_1074_, lean_object* v_b_1075_, lean_object* v___y_1076_, lean_object* v___y_1077_, lean_object* v___y_1078_, lean_object* v___y_1079_, lean_object* v___y_1080_, lean_object* v___y_1081_, lean_object* v___y_1082_){
_start:
{
lean_object* v_it_1085_; lean_object* v_a_1089_; lean_object* v___x_1092_; lean_object* v___y_1094_; lean_object* v___y_1095_; uint8_t v___y_1096_; lean_object* v_it_1117_; lean_object* v_fst_1118_; lean_object* v_it_1123_; lean_object* v_fst_1124_; 
v___x_1092_ = lean_box(0);
if (lean_obj_tag(v_a_1074_) == 0)
{
lean_object* v_a_1126_; lean_object* v_a_1127_; lean_object* v___x_1129_; uint8_t v_isShared_1130_; uint8_t v_isSharedCheck_1194_; 
v_a_1126_ = lean_ctor_get(v_a_1074_, 0);
v_a_1127_ = lean_ctor_get(v_a_1074_, 1);
v_isSharedCheck_1194_ = !lean_is_exclusive(v_a_1074_);
if (v_isSharedCheck_1194_ == 0)
{
v___x_1129_ = v_a_1074_;
v_isShared_1130_ = v_isSharedCheck_1194_;
goto v_resetjp_1128_;
}
else
{
lean_inc(v_a_1127_);
lean_inc(v_a_1126_);
lean_dec(v_a_1074_);
v___x_1129_ = lean_box(0);
v_isShared_1130_ = v_isSharedCheck_1194_;
goto v_resetjp_1128_;
}
v_resetjp_1128_:
{
lean_object* v_it_1132_; lean_object* v_it_u2082_1137_; 
v_it_u2082_1137_ = lean_ctor_get(v_a_1126_, 1);
lean_inc(v_it_u2082_1137_);
if (lean_obj_tag(v_it_u2082_1137_) == 0)
{
lean_object* v_it_u2081_1138_; lean_object* v___x_1140_; uint8_t v_isShared_1141_; uint8_t v_isSharedCheck_1162_; 
v_it_u2081_1138_ = lean_ctor_get(v_a_1126_, 0);
v_isSharedCheck_1162_ = !lean_is_exclusive(v_a_1126_);
if (v_isSharedCheck_1162_ == 0)
{
lean_object* v_unused_1163_; 
v_unused_1163_ = lean_ctor_get(v_a_1126_, 1);
lean_dec(v_unused_1163_);
v___x_1140_ = v_a_1126_;
v_isShared_1141_ = v_isSharedCheck_1162_;
goto v_resetjp_1139_;
}
else
{
lean_inc(v_it_u2081_1138_);
lean_dec(v_a_1126_);
v___x_1140_ = lean_box(0);
v_isShared_1141_ = v_isSharedCheck_1162_;
goto v_resetjp_1139_;
}
v_resetjp_1139_:
{
lean_object* v_array_1142_; lean_object* v_pos_1143_; lean_object* v___x_1145_; uint8_t v_isShared_1146_; uint8_t v_isSharedCheck_1161_; 
v_array_1142_ = lean_ctor_get(v_it_u2081_1138_, 0);
v_pos_1143_ = lean_ctor_get(v_it_u2081_1138_, 1);
v_isSharedCheck_1161_ = !lean_is_exclusive(v_it_u2081_1138_);
if (v_isSharedCheck_1161_ == 0)
{
v___x_1145_ = v_it_u2081_1138_;
v_isShared_1146_ = v_isSharedCheck_1161_;
goto v_resetjp_1144_;
}
else
{
lean_inc(v_pos_1143_);
lean_inc(v_array_1142_);
lean_dec(v_it_u2081_1138_);
v___x_1145_ = lean_box(0);
v_isShared_1146_ = v_isSharedCheck_1161_;
goto v_resetjp_1144_;
}
v_resetjp_1144_:
{
lean_object* v___x_1147_; uint8_t v___x_1148_; 
v___x_1147_ = lean_array_get_size(v_array_1142_);
v___x_1148_ = lean_nat_dec_lt(v_pos_1143_, v___x_1147_);
if (v___x_1148_ == 0)
{
lean_object* v___x_1149_; 
lean_del_object(v___x_1145_);
lean_dec(v_pos_1143_);
lean_dec_ref(v_array_1142_);
lean_del_object(v___x_1140_);
lean_del_object(v___x_1129_);
v___x_1149_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1149_, 0, v_a_1127_);
v_a_1074_ = v___x_1149_;
goto _start;
}
else
{
lean_object* v___x_1151_; lean_object* v___x_1152_; lean_object* v___x_1154_; 
v___x_1151_ = lean_unsigned_to_nat(1u);
v___x_1152_ = lean_nat_add(v_pos_1143_, v___x_1151_);
lean_inc_ref(v_array_1142_);
if (v_isShared_1146_ == 0)
{
lean_ctor_set(v___x_1145_, 1, v___x_1152_);
v___x_1154_ = v___x_1145_;
goto v_reusejp_1153_;
}
else
{
lean_object* v_reuseFailAlloc_1160_; 
v_reuseFailAlloc_1160_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1160_, 0, v_array_1142_);
lean_ctor_set(v_reuseFailAlloc_1160_, 1, v___x_1152_);
v___x_1154_ = v_reuseFailAlloc_1160_;
goto v_reusejp_1153_;
}
v_reusejp_1153_:
{
lean_object* v___x_1155_; lean_object* v___x_1156_; lean_object* v___x_1158_; 
v___x_1155_ = lean_array_fget(v_array_1142_, v_pos_1143_);
lean_dec(v_pos_1143_);
lean_dec_ref(v_array_1142_);
v___x_1156_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1156_, 0, v___x_1155_);
if (v_isShared_1141_ == 0)
{
lean_ctor_set(v___x_1140_, 1, v___x_1156_);
lean_ctor_set(v___x_1140_, 0, v___x_1154_);
v___x_1158_ = v___x_1140_;
goto v_reusejp_1157_;
}
else
{
lean_object* v_reuseFailAlloc_1159_; 
v_reuseFailAlloc_1159_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1159_, 0, v___x_1154_);
lean_ctor_set(v_reuseFailAlloc_1159_, 1, v___x_1156_);
v___x_1158_ = v_reuseFailAlloc_1159_;
goto v_reusejp_1157_;
}
v_reusejp_1157_:
{
v_it_1132_ = v___x_1158_;
goto v___jp_1131_;
}
}
}
}
}
}
else
{
lean_object* v_val_1164_; lean_object* v___x_1166_; uint8_t v_isShared_1167_; uint8_t v_isSharedCheck_1193_; 
v_val_1164_ = lean_ctor_get(v_it_u2082_1137_, 0);
v_isSharedCheck_1193_ = !lean_is_exclusive(v_it_u2082_1137_);
if (v_isSharedCheck_1193_ == 0)
{
v___x_1166_ = v_it_u2082_1137_;
v_isShared_1167_ = v_isSharedCheck_1193_;
goto v_resetjp_1165_;
}
else
{
lean_inc(v_val_1164_);
lean_dec(v_it_u2082_1137_);
v___x_1166_ = lean_box(0);
v_isShared_1167_ = v_isSharedCheck_1193_;
goto v_resetjp_1165_;
}
v_resetjp_1165_:
{
if (lean_obj_tag(v_val_1164_) == 0)
{
lean_object* v_it_u2081_1168_; lean_object* v___x_1170_; uint8_t v_isShared_1171_; uint8_t v_isSharedCheck_1176_; 
lean_del_object(v___x_1166_);
v_it_u2081_1168_ = lean_ctor_get(v_a_1126_, 0);
v_isSharedCheck_1176_ = !lean_is_exclusive(v_a_1126_);
if (v_isSharedCheck_1176_ == 0)
{
lean_object* v_unused_1177_; 
v_unused_1177_ = lean_ctor_get(v_a_1126_, 1);
lean_dec(v_unused_1177_);
v___x_1170_ = v_a_1126_;
v_isShared_1171_ = v_isSharedCheck_1176_;
goto v_resetjp_1169_;
}
else
{
lean_inc(v_it_u2081_1168_);
lean_dec(v_a_1126_);
v___x_1170_ = lean_box(0);
v_isShared_1171_ = v_isSharedCheck_1176_;
goto v_resetjp_1169_;
}
v_resetjp_1169_:
{
lean_object* v___x_1172_; lean_object* v___x_1174_; 
v___x_1172_ = lean_box(0);
if (v_isShared_1171_ == 0)
{
lean_ctor_set(v___x_1170_, 1, v___x_1172_);
v___x_1174_ = v___x_1170_;
goto v_reusejp_1173_;
}
else
{
lean_object* v_reuseFailAlloc_1175_; 
v_reuseFailAlloc_1175_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1175_, 0, v_it_u2081_1168_);
lean_ctor_set(v_reuseFailAlloc_1175_, 1, v___x_1172_);
v___x_1174_ = v_reuseFailAlloc_1175_;
goto v_reusejp_1173_;
}
v_reusejp_1173_:
{
v_it_1132_ = v___x_1174_;
goto v___jp_1131_;
}
}
}
else
{
lean_object* v_it_u2081_1178_; lean_object* v___x_1180_; uint8_t v_isShared_1181_; uint8_t v_isSharedCheck_1191_; 
lean_del_object(v___x_1129_);
v_it_u2081_1178_ = lean_ctor_get(v_a_1126_, 0);
v_isSharedCheck_1191_ = !lean_is_exclusive(v_a_1126_);
if (v_isSharedCheck_1191_ == 0)
{
lean_object* v_unused_1192_; 
v_unused_1192_ = lean_ctor_get(v_a_1126_, 1);
lean_dec(v_unused_1192_);
v___x_1180_ = v_a_1126_;
v_isShared_1181_ = v_isSharedCheck_1191_;
goto v_resetjp_1179_;
}
else
{
lean_inc(v_it_u2081_1178_);
lean_dec(v_a_1126_);
v___x_1180_ = lean_box(0);
v_isShared_1181_ = v_isSharedCheck_1191_;
goto v_resetjp_1179_;
}
v_resetjp_1179_:
{
lean_object* v_key_1182_; lean_object* v_tail_1183_; lean_object* v___x_1185_; 
v_key_1182_ = lean_ctor_get(v_val_1164_, 0);
lean_inc(v_key_1182_);
v_tail_1183_ = lean_ctor_get(v_val_1164_, 2);
lean_inc(v_tail_1183_);
lean_dec_ref_known(v_val_1164_, 3);
if (v_isShared_1167_ == 0)
{
lean_ctor_set(v___x_1166_, 0, v_tail_1183_);
v___x_1185_ = v___x_1166_;
goto v_reusejp_1184_;
}
else
{
lean_object* v_reuseFailAlloc_1190_; 
v_reuseFailAlloc_1190_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1190_, 0, v_tail_1183_);
v___x_1185_ = v_reuseFailAlloc_1190_;
goto v_reusejp_1184_;
}
v_reusejp_1184_:
{
lean_object* v___x_1187_; 
if (v_isShared_1181_ == 0)
{
lean_ctor_set(v___x_1180_, 1, v___x_1185_);
v___x_1187_ = v___x_1180_;
goto v_reusejp_1186_;
}
else
{
lean_object* v_reuseFailAlloc_1189_; 
v_reuseFailAlloc_1189_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1189_, 0, v_it_u2081_1178_);
lean_ctor_set(v_reuseFailAlloc_1189_, 1, v___x_1185_);
v___x_1187_ = v_reuseFailAlloc_1189_;
goto v_reusejp_1186_;
}
v_reusejp_1186_:
{
lean_object* v___x_1188_; 
v___x_1188_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1188_, 0, v___x_1187_);
lean_ctor_set(v___x_1188_, 1, v_a_1127_);
v_it_1117_ = v___x_1188_;
v_fst_1118_ = v_key_1182_;
goto v___jp_1116_;
}
}
}
}
}
}
v___jp_1131_:
{
lean_object* v___x_1134_; 
if (v_isShared_1130_ == 0)
{
lean_ctor_set(v___x_1129_, 0, v_it_1132_);
v___x_1134_ = v___x_1129_;
goto v_reusejp_1133_;
}
else
{
lean_object* v_reuseFailAlloc_1136_; 
v_reuseFailAlloc_1136_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1136_, 0, v_it_1132_);
lean_ctor_set(v_reuseFailAlloc_1136_, 1, v_a_1127_);
v___x_1134_ = v_reuseFailAlloc_1136_;
goto v_reusejp_1133_;
}
v_reusejp_1133_:
{
v_a_1074_ = v___x_1134_;
goto _start;
}
}
}
}
else
{
lean_object* v_a_1195_; 
v_a_1195_ = lean_ctor_get(v_a_1074_, 0);
lean_inc(v_a_1195_);
lean_dec_ref_known(v_a_1074_, 1);
switch(lean_obj_tag(v_a_1195_))
{
case 0:
{
lean_object* v___x_1196_; lean_object* v___x_1197_; 
lean_dec_ref(v___x_1073_);
lean_dec(v_id_1071_);
lean_dec_ref(v_ctx_1070_);
v___x_1196_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1196_, 0, v_b_1075_);
v___x_1197_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1197_, 0, v___x_1196_);
return v___x_1197_;
}
case 1:
{
lean_object* v_a_1198_; lean_object* v_a_1199_; lean_object* v___x_1201_; uint8_t v_isShared_1202_; uint8_t v_isSharedCheck_1217_; 
v_a_1198_ = lean_ctor_get(v_a_1195_, 0);
v_a_1199_ = lean_ctor_get(v_a_1195_, 1);
v_isSharedCheck_1217_ = !lean_is_exclusive(v_a_1195_);
if (v_isSharedCheck_1217_ == 0)
{
v___x_1201_ = v_a_1195_;
v_isShared_1202_ = v_isSharedCheck_1217_;
goto v_resetjp_1200_;
}
else
{
lean_inc(v_a_1199_);
lean_inc(v_a_1198_);
lean_dec(v_a_1195_);
v___x_1201_ = lean_box(0);
v_isShared_1202_ = v_isSharedCheck_1217_;
goto v_resetjp_1200_;
}
v_resetjp_1200_:
{
lean_object* v_start_1203_; lean_object* v_stop_1204_; lean_object* v___x_1205_; lean_object* v___x_1206_; uint8_t v___x_1207_; 
v_start_1203_ = lean_ctor_get(v_a_1198_, 1);
v_stop_1204_ = lean_ctor_get(v_a_1198_, 2);
v___x_1205_ = lean_unsigned_to_nat(0u);
v___x_1206_ = lean_nat_sub(v_stop_1204_, v_start_1203_);
v___x_1207_ = lean_nat_dec_lt(v___x_1205_, v___x_1206_);
lean_dec(v___x_1206_);
if (v___x_1207_ == 0)
{
lean_del_object(v___x_1201_);
lean_dec_ref(v_a_1198_);
v_it_1085_ = v_a_1199_;
goto v___jp_1084_;
}
else
{
lean_object* v___x_1208_; lean_object* v___x_1209_; lean_object* v_z_1211_; 
v___x_1208_ = lean_unsigned_to_nat(1u);
lean_inc_ref(v_a_1198_);
v___x_1209_ = l_Subarray_drop___redArg(v_a_1198_, v___x_1208_);
if (v_isShared_1202_ == 0)
{
lean_ctor_set(v___x_1201_, 0, v___x_1209_);
v_z_1211_ = v___x_1201_;
goto v_reusejp_1210_;
}
else
{
lean_object* v_reuseFailAlloc_1216_; 
v_reuseFailAlloc_1216_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1216_, 0, v___x_1209_);
lean_ctor_set(v_reuseFailAlloc_1216_, 1, v_a_1199_);
v_z_1211_ = v_reuseFailAlloc_1216_;
goto v_reusejp_1210_;
}
v_reusejp_1210_:
{
lean_object* v___x_1212_; 
v___x_1212_ = l_Subarray_get___redArg(v_a_1198_, v___x_1205_);
lean_dec_ref(v_a_1198_);
switch(lean_obj_tag(v___x_1212_))
{
case 0:
{
lean_object* v_key_1213_; 
v_key_1213_ = lean_ctor_get(v___x_1212_, 0);
lean_inc(v_key_1213_);
lean_dec_ref_known(v___x_1212_, 2);
v_it_1123_ = v_z_1211_;
v_fst_1124_ = v_key_1213_;
goto v___jp_1122_;
}
case 1:
{
lean_object* v_node_1214_; lean_object* v___x_1215_; 
v_node_1214_ = lean_ctor_get(v___x_1212_, 0);
lean_inc(v_node_1214_);
lean_dec_ref_known(v___x_1212_, 1);
v___x_1215_ = l_Lean_PersistentHashMap_Zipper_prependNode___redArg(v_node_1214_, v_z_1211_);
v_it_1085_ = v___x_1215_;
goto v___jp_1084_;
}
default: 
{
v_it_1085_ = v_z_1211_;
goto v___jp_1084_;
}
}
}
}
}
}
default: 
{
lean_object* v_vals_1218_; lean_object* v_keys_1219_; lean_object* v_a_1220_; lean_object* v___x_1222_; uint8_t v_isShared_1223_; uint8_t v_isSharedCheck_1236_; 
v_vals_1218_ = lean_ctor_get(v_a_1195_, 1);
v_keys_1219_ = lean_ctor_get(v_a_1195_, 0);
v_a_1220_ = lean_ctor_get(v_a_1195_, 2);
v_isSharedCheck_1236_ = !lean_is_exclusive(v_a_1195_);
if (v_isSharedCheck_1236_ == 0)
{
v___x_1222_ = v_a_1195_;
v_isShared_1223_ = v_isSharedCheck_1236_;
goto v_resetjp_1221_;
}
else
{
lean_inc(v_a_1220_);
lean_inc(v_vals_1218_);
lean_inc(v_keys_1219_);
lean_dec(v_a_1195_);
v___x_1222_ = lean_box(0);
v_isShared_1223_ = v_isSharedCheck_1236_;
goto v_resetjp_1221_;
}
v_resetjp_1221_:
{
lean_object* v_start_1224_; lean_object* v_stop_1225_; lean_object* v___x_1226_; lean_object* v___x_1227_; uint8_t v___x_1228_; 
v_start_1224_ = lean_ctor_get(v_vals_1218_, 1);
v_stop_1225_ = lean_ctor_get(v_vals_1218_, 2);
v___x_1226_ = lean_unsigned_to_nat(0u);
v___x_1227_ = lean_nat_sub(v_stop_1225_, v_start_1224_);
v___x_1228_ = lean_nat_dec_lt(v___x_1226_, v___x_1227_);
lean_dec(v___x_1227_);
if (v___x_1228_ == 0)
{
lean_del_object(v___x_1222_);
lean_dec_ref(v_keys_1219_);
lean_dec_ref(v_vals_1218_);
v_it_1085_ = v_a_1220_;
goto v___jp_1084_;
}
else
{
lean_object* v___x_1229_; lean_object* v___x_1230_; lean_object* v___x_1231_; lean_object* v___x_1233_; 
v___x_1229_ = lean_unsigned_to_nat(1u);
lean_inc_ref(v_keys_1219_);
v___x_1230_ = l_Subarray_drop___redArg(v_keys_1219_, v___x_1229_);
v___x_1231_ = l_Subarray_drop___redArg(v_vals_1218_, v___x_1229_);
if (v_isShared_1223_ == 0)
{
lean_ctor_set(v___x_1222_, 1, v___x_1231_);
lean_ctor_set(v___x_1222_, 0, v___x_1230_);
v___x_1233_ = v___x_1222_;
goto v_reusejp_1232_;
}
else
{
lean_object* v_reuseFailAlloc_1235_; 
v_reuseFailAlloc_1235_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1235_, 0, v___x_1230_);
lean_ctor_set(v_reuseFailAlloc_1235_, 1, v___x_1231_);
lean_ctor_set(v_reuseFailAlloc_1235_, 2, v_a_1220_);
v___x_1233_ = v_reuseFailAlloc_1235_;
goto v_reusejp_1232_;
}
v_reusejp_1232_:
{
lean_object* v___x_1234_; 
v___x_1234_ = l_Subarray_get___redArg(v_keys_1219_, v___x_1226_);
lean_dec_ref(v_keys_1219_);
v_it_1123_ = v___x_1233_;
v_fst_1124_ = v___x_1234_;
goto v___jp_1122_;
}
}
}
}
}
}
v___jp_1084_:
{
lean_object* v___x_1086_; 
v___x_1086_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1086_, 0, v_it_1085_);
v_a_1074_ = v___x_1086_;
goto _start;
}
v___jp_1088_:
{
lean_object* v___x_1090_; lean_object* v___x_1091_; 
v___x_1090_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1090_, 0, v_a_1089_);
v___x_1091_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1091_, 0, v___x_1090_);
return v___x_1091_;
}
v___jp_1093_:
{
if (v___y_1096_ == 0)
{
lean_object* v___x_1097_; 
lean_inc(v_id_1071_);
lean_inc_ref(v_ctx_1070_);
v___x_1097_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f(v_ctx_1070_, v___y_1095_, v_id_1071_, v_danglingDot_1072_, v___y_1076_, v___y_1077_, v___y_1078_, v___y_1079_, v___y_1080_, v___y_1081_, v___y_1082_);
if (lean_obj_tag(v___x_1097_) == 0)
{
lean_object* v_a_1098_; 
v_a_1098_ = lean_ctor_get(v___x_1097_, 0);
lean_inc(v_a_1098_);
lean_dec_ref_known(v___x_1097_, 1);
if (lean_obj_tag(v_a_1098_) == 0)
{
lean_object* v_a_1099_; 
lean_dec_ref(v___y_1094_);
lean_dec_ref(v___x_1073_);
lean_dec(v_id_1071_);
lean_dec_ref(v_ctx_1070_);
v_a_1099_ = lean_ctor_get(v_a_1098_, 0);
lean_inc(v_a_1099_);
lean_dec_ref_known(v_a_1098_, 1);
v_a_1089_ = v_a_1099_;
goto v___jp_1088_;
}
else
{
lean_object* v_a_1100_; 
v_a_1100_ = lean_ctor_get(v_a_1098_, 0);
lean_inc(v_a_1100_);
lean_dec_ref_known(v_a_1098_, 1);
if (lean_obj_tag(v_a_1100_) == 1)
{
lean_object* v_val_1101_; lean_object* v___x_1102_; 
v_val_1101_ = lean_ctor_get(v_a_1100_, 0);
lean_inc(v_val_1101_);
lean_dec_ref_known(v_a_1100_, 1);
v___x_1102_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addNamespaceCompletionItem___redArg(v_val_1101_, v___y_1076_, v___y_1077_);
if (lean_obj_tag(v___x_1102_) == 0)
{
lean_object* v_a_1103_; 
v_a_1103_ = lean_ctor_get(v___x_1102_, 0);
lean_inc(v_a_1103_);
lean_dec_ref_known(v___x_1102_, 1);
if (lean_obj_tag(v_a_1103_) == 0)
{
lean_object* v_a_1104_; 
lean_dec_ref(v___y_1094_);
lean_dec_ref(v___x_1073_);
lean_dec(v_id_1071_);
lean_dec_ref(v_ctx_1070_);
v_a_1104_ = lean_ctor_get(v_a_1103_, 0);
lean_inc(v_a_1104_);
lean_dec_ref_known(v_a_1103_, 1);
v_a_1089_ = v_a_1104_;
goto v___jp_1088_;
}
else
{
lean_dec_ref_known(v_a_1103_, 1);
v_a_1074_ = v___y_1094_;
v_b_1075_ = v___x_1092_;
goto _start;
}
}
else
{
lean_dec_ref(v___y_1094_);
lean_dec_ref(v___x_1073_);
lean_dec(v_id_1071_);
lean_dec_ref(v_ctx_1070_);
return v___x_1102_;
}
}
else
{
lean_dec(v_a_1100_);
v_a_1074_ = v___y_1094_;
v_b_1075_ = v___x_1092_;
goto _start;
}
}
}
else
{
lean_object* v_a_1107_; lean_object* v___x_1109_; uint8_t v_isShared_1110_; uint8_t v_isSharedCheck_1114_; 
lean_dec_ref(v___y_1094_);
lean_dec_ref(v___x_1073_);
lean_dec(v_id_1071_);
lean_dec_ref(v_ctx_1070_);
v_a_1107_ = lean_ctor_get(v___x_1097_, 0);
v_isSharedCheck_1114_ = !lean_is_exclusive(v___x_1097_);
if (v_isSharedCheck_1114_ == 0)
{
v___x_1109_ = v___x_1097_;
v_isShared_1110_ = v_isSharedCheck_1114_;
goto v_resetjp_1108_;
}
else
{
lean_inc(v_a_1107_);
lean_dec(v___x_1097_);
v___x_1109_ = lean_box(0);
v_isShared_1110_ = v_isSharedCheck_1114_;
goto v_resetjp_1108_;
}
v_resetjp_1108_:
{
lean_object* v___x_1112_; 
if (v_isShared_1110_ == 0)
{
v___x_1112_ = v___x_1109_;
goto v_reusejp_1111_;
}
else
{
lean_object* v_reuseFailAlloc_1113_; 
v_reuseFailAlloc_1113_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1113_, 0, v_a_1107_);
v___x_1112_ = v_reuseFailAlloc_1113_;
goto v_reusejp_1111_;
}
v_reusejp_1111_:
{
return v___x_1112_;
}
}
}
}
else
{
lean_dec(v___y_1095_);
v_a_1074_ = v___y_1094_;
v_b_1075_ = v___x_1092_;
goto _start;
}
}
v___jp_1116_:
{
uint8_t v___x_1119_; 
v___x_1119_ = l_Lean_Name_isInternal(v_fst_1118_);
if (v___x_1119_ == 0)
{
uint8_t v___x_1120_; uint8_t v___x_1121_; 
v___x_1120_ = 1;
lean_inc(v_fst_1118_);
lean_inc_ref(v___x_1073_);
v___x_1121_ = l_Lean_Environment_contains(v___x_1073_, v_fst_1118_, v___x_1120_);
v___y_1094_ = v_it_1117_;
v___y_1095_ = v_fst_1118_;
v___y_1096_ = v___x_1121_;
goto v___jp_1093_;
}
else
{
v___y_1094_ = v_it_1117_;
v___y_1095_ = v_fst_1118_;
v___y_1096_ = v___x_1119_;
goto v___jp_1093_;
}
}
v___jp_1122_:
{
lean_object* v___x_1125_; 
v___x_1125_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1125_, 0, v_it_1123_);
v_it_1117_ = v___x_1125_;
v_fst_1118_ = v_fst_1124_;
goto v___jp_1116_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_completeNamespaces_spec__0___redArg___boxed(lean_object* v_ctx_1237_, lean_object* v_id_1238_, lean_object* v_danglingDot_1239_, lean_object* v___x_1240_, lean_object* v_a_1241_, lean_object* v_b_1242_, lean_object* v___y_1243_, lean_object* v___y_1244_, lean_object* v___y_1245_, lean_object* v___y_1246_, lean_object* v___y_1247_, lean_object* v___y_1248_, lean_object* v___y_1249_, lean_object* v___y_1250_){
_start:
{
uint8_t v_danglingDot_boxed_1251_; lean_object* v_res_1252_; 
v_danglingDot_boxed_1251_ = lean_unbox(v_danglingDot_1239_);
v_res_1252_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_completeNamespaces_spec__0___redArg(v_ctx_1237_, v_id_1238_, v_danglingDot_boxed_1251_, v___x_1240_, v_a_1241_, v_b_1242_, v___y_1243_, v___y_1244_, v___y_1245_, v___y_1246_, v___y_1247_, v___y_1248_, v___y_1249_);
lean_dec(v___y_1249_);
lean_dec_ref(v___y_1248_);
lean_dec(v___y_1247_);
lean_dec_ref(v___y_1246_);
lean_dec_ref(v___y_1245_);
lean_dec(v___y_1244_);
lean_dec_ref(v___y_1243_);
return v_res_1252_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_completeNamespaces(lean_object* v_ctx_1253_, lean_object* v_id_1254_, uint8_t v_danglingDot_1255_, lean_object* v_a_1256_, lean_object* v_a_1257_, lean_object* v_a_1258_, lean_object* v_a_1259_, lean_object* v_a_1260_, lean_object* v_a_1261_, lean_object* v_a_1262_){
_start:
{
lean_object* v___x_1264_; lean_object* v_env_1265_; lean_object* v___x_1266_; lean_object* v___x_1267_; lean_object* v___x_1268_; 
v___x_1264_ = lean_st_ref_get(v_a_1262_);
v_env_1265_ = lean_ctor_get(v___x_1264_, 0);
lean_inc_ref_n(v_env_1265_, 2);
lean_dec(v___x_1264_);
v___x_1266_ = l_Lean_Environment_getNamespaces(v_env_1265_);
v___x_1267_ = lean_box(0);
v___x_1268_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_completeNamespaces_spec__0___redArg(v_ctx_1253_, v_id_1254_, v_danglingDot_1255_, v_env_1265_, v___x_1266_, v___x_1267_, v_a_1256_, v_a_1257_, v_a_1258_, v_a_1259_, v_a_1260_, v_a_1261_, v_a_1262_);
if (lean_obj_tag(v___x_1268_) == 0)
{
lean_object* v_a_1269_; 
v_a_1269_ = lean_ctor_get(v___x_1268_, 0);
lean_inc(v_a_1269_);
if (lean_obj_tag(v_a_1269_) == 0)
{
lean_dec_ref_known(v_a_1269_, 1);
return v___x_1268_;
}
else
{
lean_object* v___x_1271_; uint8_t v_isShared_1272_; uint8_t v_isSharedCheck_1277_; 
lean_dec_ref_known(v_a_1269_, 1);
v_isSharedCheck_1277_ = !lean_is_exclusive(v___x_1268_);
if (v_isSharedCheck_1277_ == 0)
{
lean_object* v_unused_1278_; 
v_unused_1278_ = lean_ctor_get(v___x_1268_, 0);
lean_dec(v_unused_1278_);
v___x_1271_ = v___x_1268_;
v_isShared_1272_ = v_isSharedCheck_1277_;
goto v_resetjp_1270_;
}
else
{
lean_dec(v___x_1268_);
v___x_1271_ = lean_box(0);
v_isShared_1272_ = v_isSharedCheck_1277_;
goto v_resetjp_1270_;
}
v_resetjp_1270_:
{
lean_object* v___x_1273_; lean_object* v___x_1275_; 
v___x_1273_ = ((lean_object*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addItem___redArg___closed__0));
if (v_isShared_1272_ == 0)
{
lean_ctor_set(v___x_1271_, 0, v___x_1273_);
v___x_1275_ = v___x_1271_;
goto v_reusejp_1274_;
}
else
{
lean_object* v_reuseFailAlloc_1276_; 
v_reuseFailAlloc_1276_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1276_, 0, v___x_1273_);
v___x_1275_ = v_reuseFailAlloc_1276_;
goto v_reusejp_1274_;
}
v_reusejp_1274_:
{
return v___x_1275_;
}
}
}
}
else
{
return v___x_1268_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_completeNamespaces___boxed(lean_object* v_ctx_1279_, lean_object* v_id_1280_, lean_object* v_danglingDot_1281_, lean_object* v_a_1282_, lean_object* v_a_1283_, lean_object* v_a_1284_, lean_object* v_a_1285_, lean_object* v_a_1286_, lean_object* v_a_1287_, lean_object* v_a_1288_, lean_object* v_a_1289_){
_start:
{
uint8_t v_danglingDot_boxed_1290_; lean_object* v_res_1291_; 
v_danglingDot_boxed_1290_ = lean_unbox(v_danglingDot_1281_);
v_res_1291_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_completeNamespaces(v_ctx_1279_, v_id_1280_, v_danglingDot_boxed_1290_, v_a_1282_, v_a_1283_, v_a_1284_, v_a_1285_, v_a_1286_, v_a_1287_, v_a_1288_);
lean_dec(v_a_1288_);
lean_dec_ref(v_a_1287_);
lean_dec(v_a_1286_);
lean_dec_ref(v_a_1285_);
lean_dec_ref(v_a_1284_);
lean_dec(v_a_1283_);
lean_dec_ref(v_a_1282_);
return v_res_1291_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_completeNamespaces_spec__0(lean_object* v_ctx_1292_, lean_object* v_id_1293_, uint8_t v_danglingDot_1294_, lean_object* v___x_1295_, lean_object* v_inst_1296_, lean_object* v_R_1297_, lean_object* v_a_1298_, lean_object* v_b_1299_, lean_object* v_c_1300_, lean_object* v___y_1301_, lean_object* v___y_1302_, lean_object* v___y_1303_, lean_object* v___y_1304_, lean_object* v___y_1305_, lean_object* v___y_1306_, lean_object* v___y_1307_){
_start:
{
lean_object* v___x_1309_; 
v___x_1309_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_completeNamespaces_spec__0___redArg(v_ctx_1292_, v_id_1293_, v_danglingDot_1294_, v___x_1295_, v_a_1298_, v_b_1299_, v___y_1301_, v___y_1302_, v___y_1303_, v___y_1304_, v___y_1305_, v___y_1306_, v___y_1307_);
return v___x_1309_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_completeNamespaces_spec__0___boxed(lean_object** _args){
lean_object* v_ctx_1310_ = _args[0];
lean_object* v_id_1311_ = _args[1];
lean_object* v_danglingDot_1312_ = _args[2];
lean_object* v___x_1313_ = _args[3];
lean_object* v_inst_1314_ = _args[4];
lean_object* v_R_1315_ = _args[5];
lean_object* v_a_1316_ = _args[6];
lean_object* v_b_1317_ = _args[7];
lean_object* v_c_1318_ = _args[8];
lean_object* v___y_1319_ = _args[9];
lean_object* v___y_1320_ = _args[10];
lean_object* v___y_1321_ = _args[11];
lean_object* v___y_1322_ = _args[12];
lean_object* v___y_1323_ = _args[13];
lean_object* v___y_1324_ = _args[14];
lean_object* v___y_1325_ = _args[15];
lean_object* v___y_1326_ = _args[16];
_start:
{
uint8_t v_danglingDot_boxed_1327_; lean_object* v_res_1328_; 
v_danglingDot_boxed_1327_ = lean_unbox(v_danglingDot_1312_);
v_res_1328_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_completeNamespaces_spec__0(v_ctx_1310_, v_id_1311_, v_danglingDot_boxed_1327_, v___x_1313_, v_inst_1314_, v_R_1315_, v_a_1316_, v_b_1317_, v_c_1318_, v___y_1319_, v___y_1320_, v___y_1321_, v___y_1322_, v___y_1323_, v___y_1324_, v___y_1325_);
lean_dec(v___y_1325_);
lean_dec_ref(v___y_1324_);
lean_dec(v___y_1323_);
lean_dec_ref(v___y_1322_);
lean_dec_ref(v___y_1321_);
lean_dec(v___y_1320_);
lean_dec_ref(v___y_1319_);
return v_res_1328_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_stripPrivatePrefix(lean_object* v_n_1329_){
_start:
{
if (lean_obj_tag(v_n_1329_) == 2)
{
lean_object* v_i_1330_; lean_object* v___x_1331_; uint8_t v___x_1332_; 
v_i_1330_ = lean_ctor_get(v_n_1329_, 1);
v___x_1331_ = lean_unsigned_to_nat(0u);
v___x_1332_ = lean_nat_dec_eq(v_i_1330_, v___x_1331_);
if (v___x_1332_ == 0)
{
lean_inc_ref(v_n_1329_);
return v_n_1329_;
}
else
{
uint8_t v___x_1333_; 
v___x_1333_ = l_Lean_isPrivatePrefix(v_n_1329_);
if (v___x_1333_ == 0)
{
lean_inc_ref(v_n_1329_);
return v_n_1329_;
}
else
{
lean_object* v___x_1334_; 
v___x_1334_ = lean_obj_once(&l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_matchDecl_x3f___redArg___closed__0, &l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_matchDecl_x3f___redArg___closed__0_once, _init_l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_matchDecl_x3f___redArg___closed__0);
return v___x_1334_;
}
}
}
else
{
lean_inc(v_n_1329_);
return v_n_1329_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_stripPrivatePrefix___boxed(lean_object* v_n_1335_){
_start:
{
lean_object* v_res_1336_; 
v_res_1336_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_stripPrivatePrefix(v_n_1335_);
lean_dec(v_n_1335_);
return v_res_1336_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_cmpModPrivate(lean_object* v_n_u2081_1337_, lean_object* v_n_u2082_1338_){
_start:
{
lean_object* v_n_u2081_1339_; lean_object* v_n_u2082_1340_; 
v_n_u2081_1339_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_stripPrivatePrefix(v_n_u2081_1337_);
lean_dec(v_n_u2081_1337_);
v_n_u2082_1340_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_stripPrivatePrefix(v_n_u2082_1338_);
lean_dec(v_n_u2082_1338_);
switch(lean_obj_tag(v_n_u2081_1339_))
{
case 0:
{
if (lean_obj_tag(v_n_u2082_1340_) == 0)
{
uint8_t v___x_1341_; 
v___x_1341_ = 1;
return v___x_1341_;
}
else
{
uint8_t v___x_1342_; 
lean_dec(v_n_u2082_1340_);
v___x_1342_ = 0;
return v___x_1342_;
}
}
case 1:
{
if (lean_obj_tag(v_n_u2082_1340_) == 1)
{
lean_object* v_pre_1343_; lean_object* v_str_1344_; lean_object* v_pre_1345_; lean_object* v_str_1346_; uint8_t v___x_1347_; 
v_pre_1343_ = lean_ctor_get(v_n_u2081_1339_, 0);
lean_inc(v_pre_1343_);
v_str_1344_ = lean_ctor_get(v_n_u2081_1339_, 1);
lean_inc_ref(v_str_1344_);
lean_dec_ref_known(v_n_u2081_1339_, 2);
v_pre_1345_ = lean_ctor_get(v_n_u2082_1340_, 0);
lean_inc(v_pre_1345_);
v_str_1346_ = lean_ctor_get(v_n_u2082_1340_, 1);
lean_inc_ref(v_str_1346_);
lean_dec_ref_known(v_n_u2082_1340_, 2);
v___x_1347_ = lean_string_compare(v_str_1344_, v_str_1346_);
lean_dec_ref(v_str_1346_);
lean_dec_ref(v_str_1344_);
if (v___x_1347_ == 1)
{
v_n_u2081_1337_ = v_pre_1343_;
v_n_u2082_1338_ = v_pre_1345_;
goto _start;
}
else
{
lean_dec(v_pre_1345_);
lean_dec(v_pre_1343_);
return v___x_1347_;
}
}
else
{
uint8_t v___x_1349_; 
lean_dec_ref_known(v_n_u2081_1339_, 2);
lean_dec(v_n_u2082_1340_);
v___x_1349_ = 2;
return v___x_1349_;
}
}
default: 
{
switch(lean_obj_tag(v_n_u2082_1340_))
{
case 0:
{
uint8_t v___x_1350_; 
lean_dec_ref_known(v_n_u2081_1339_, 2);
v___x_1350_ = 2;
return v___x_1350_;
}
case 1:
{
uint8_t v___x_1351_; 
lean_dec_ref_known(v_n_u2082_1340_, 2);
lean_dec_ref_known(v_n_u2081_1339_, 2);
v___x_1351_ = 0;
return v___x_1351_;
}
default: 
{
lean_object* v_pre_1352_; lean_object* v_i_1353_; lean_object* v_pre_1354_; lean_object* v_i_1355_; uint8_t v___x_1356_; 
v_pre_1352_ = lean_ctor_get(v_n_u2081_1339_, 0);
lean_inc(v_pre_1352_);
v_i_1353_ = lean_ctor_get(v_n_u2081_1339_, 1);
lean_inc(v_i_1353_);
lean_dec_ref_known(v_n_u2081_1339_, 2);
v_pre_1354_ = lean_ctor_get(v_n_u2082_1340_, 0);
lean_inc(v_pre_1354_);
v_i_1355_ = lean_ctor_get(v_n_u2082_1340_, 1);
lean_inc(v_i_1355_);
lean_dec_ref_known(v_n_u2082_1340_, 2);
v___x_1356_ = lean_nat_dec_lt(v_i_1353_, v_i_1355_);
if (v___x_1356_ == 0)
{
uint8_t v___x_1357_; 
v___x_1357_ = lean_nat_dec_eq(v_i_1353_, v_i_1355_);
lean_dec(v_i_1355_);
lean_dec(v_i_1353_);
if (v___x_1357_ == 0)
{
uint8_t v___x_1358_; 
lean_dec(v_pre_1354_);
lean_dec(v_pre_1352_);
v___x_1358_ = 2;
return v___x_1358_;
}
else
{
v_n_u2081_1337_ = v_pre_1352_;
v_n_u2082_1338_ = v_pre_1354_;
goto _start;
}
}
else
{
uint8_t v___x_1360_; 
lean_dec(v_i_1355_);
lean_dec(v_pre_1354_);
lean_dec(v_i_1353_);
lean_dec(v_pre_1352_);
v___x_1360_ = 0;
return v___x_1360_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_cmpModPrivate___boxed(lean_object* v_n_u2081_1361_, lean_object* v_n_u2082_1362_){
_start:
{
uint8_t v_res_1363_; lean_object* v_r_1364_; 
v_res_1363_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_cmpModPrivate(v_n_u2081_1361_, v_n_u2082_1362_);
v_r_1364_ = lean_box(v_res_1363_);
return v_r_1364_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_NameSetModPrivate_ofArray(lean_object* v_names_1366_){
_start:
{
lean_object* v___x_1367_; lean_object* v___x_1368_; 
v___x_1367_ = ((lean_object*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_NameSetModPrivate_ofArray___closed__0));
v___x_1368_ = l_Std_TreeSet_ofArray___redArg(v_names_1366_, v___x_1367_);
return v___x_1368_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_NameSetModPrivate_ofArray___boxed(lean_object* v_names_1369_){
_start:
{
lean_object* v_res_1370_; 
v_res_1370_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_NameSetModPrivate_ofArray(v_names_1369_);
lean_dec_ref(v_names_1369_);
return v_res_1370_;
}
}
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_getDotCompletionTypeNameSet_spec__0___redArg(lean_object* v_k_1371_, lean_object* v_t_1372_){
_start:
{
if (lean_obj_tag(v_t_1372_) == 0)
{
lean_object* v_k_1373_; lean_object* v_l_1374_; lean_object* v_r_1375_; uint8_t v___x_1376_; 
v_k_1373_ = lean_ctor_get(v_t_1372_, 1);
lean_inc(v_k_1373_);
v_l_1374_ = lean_ctor_get(v_t_1372_, 3);
lean_inc(v_l_1374_);
v_r_1375_ = lean_ctor_get(v_t_1372_, 4);
lean_inc(v_r_1375_);
lean_dec_ref_known(v_t_1372_, 5);
lean_inc(v_k_1371_);
v___x_1376_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_cmpModPrivate(v_k_1371_, v_k_1373_);
switch(v___x_1376_)
{
case 0:
{
lean_dec(v_r_1375_);
v_t_1372_ = v_l_1374_;
goto _start;
}
case 1:
{
uint8_t v___x_1378_; 
lean_dec(v_r_1375_);
lean_dec(v_l_1374_);
lean_dec(v_k_1371_);
v___x_1378_ = 1;
return v___x_1378_;
}
default: 
{
lean_dec(v_l_1374_);
v_t_1372_ = v_r_1375_;
goto _start;
}
}
}
else
{
uint8_t v___x_1380_; 
lean_dec(v_k_1371_);
v___x_1380_ = 0;
return v___x_1380_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_getDotCompletionTypeNameSet_spec__0___redArg___boxed(lean_object* v_k_1381_, lean_object* v_t_1382_){
_start:
{
uint8_t v_res_1383_; lean_object* v_r_1384_; 
v_res_1383_ = l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_getDotCompletionTypeNameSet_spec__0___redArg(v_k_1381_, v_t_1382_);
v_r_1384_ = lean_box(v_res_1383_);
return v_r_1384_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_getDotCompletionTypeNameSet_spec__1___redArg(lean_object* v_k_1385_, lean_object* v_v_1386_, lean_object* v_t_1387_){
_start:
{
if (lean_obj_tag(v_t_1387_) == 0)
{
lean_object* v_size_1388_; lean_object* v_k_1389_; lean_object* v_v_1390_; lean_object* v_l_1391_; lean_object* v_r_1392_; lean_object* v___x_1394_; uint8_t v_isShared_1395_; uint8_t v_isSharedCheck_1672_; 
v_size_1388_ = lean_ctor_get(v_t_1387_, 0);
v_k_1389_ = lean_ctor_get(v_t_1387_, 1);
v_v_1390_ = lean_ctor_get(v_t_1387_, 2);
v_l_1391_ = lean_ctor_get(v_t_1387_, 3);
v_r_1392_ = lean_ctor_get(v_t_1387_, 4);
v_isSharedCheck_1672_ = !lean_is_exclusive(v_t_1387_);
if (v_isSharedCheck_1672_ == 0)
{
v___x_1394_ = v_t_1387_;
v_isShared_1395_ = v_isSharedCheck_1672_;
goto v_resetjp_1393_;
}
else
{
lean_inc(v_r_1392_);
lean_inc(v_l_1391_);
lean_inc(v_v_1390_);
lean_inc(v_k_1389_);
lean_inc(v_size_1388_);
lean_dec(v_t_1387_);
v___x_1394_ = lean_box(0);
v_isShared_1395_ = v_isSharedCheck_1672_;
goto v_resetjp_1393_;
}
v_resetjp_1393_:
{
uint8_t v___x_1396_; 
lean_inc(v_k_1389_);
lean_inc(v_k_1385_);
v___x_1396_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_cmpModPrivate(v_k_1385_, v_k_1389_);
switch(v___x_1396_)
{
case 0:
{
lean_object* v_impl_1397_; lean_object* v___x_1398_; 
lean_dec(v_size_1388_);
v_impl_1397_ = l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_getDotCompletionTypeNameSet_spec__1___redArg(v_k_1385_, v_v_1386_, v_l_1391_);
v___x_1398_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_r_1392_) == 0)
{
lean_object* v_size_1399_; lean_object* v_size_1400_; lean_object* v_k_1401_; lean_object* v_v_1402_; lean_object* v_l_1403_; lean_object* v_r_1404_; lean_object* v___x_1405_; lean_object* v___x_1406_; uint8_t v___x_1407_; 
v_size_1399_ = lean_ctor_get(v_r_1392_, 0);
v_size_1400_ = lean_ctor_get(v_impl_1397_, 0);
lean_inc(v_size_1400_);
v_k_1401_ = lean_ctor_get(v_impl_1397_, 1);
lean_inc(v_k_1401_);
v_v_1402_ = lean_ctor_get(v_impl_1397_, 2);
lean_inc(v_v_1402_);
v_l_1403_ = lean_ctor_get(v_impl_1397_, 3);
lean_inc(v_l_1403_);
v_r_1404_ = lean_ctor_get(v_impl_1397_, 4);
lean_inc(v_r_1404_);
v___x_1405_ = lean_unsigned_to_nat(3u);
v___x_1406_ = lean_nat_mul(v___x_1405_, v_size_1399_);
v___x_1407_ = lean_nat_dec_lt(v___x_1406_, v_size_1400_);
lean_dec(v___x_1406_);
if (v___x_1407_ == 0)
{
lean_object* v___x_1408_; lean_object* v___x_1409_; lean_object* v___x_1411_; 
lean_dec(v_r_1404_);
lean_dec(v_l_1403_);
lean_dec(v_v_1402_);
lean_dec(v_k_1401_);
v___x_1408_ = lean_nat_add(v___x_1398_, v_size_1400_);
lean_dec(v_size_1400_);
v___x_1409_ = lean_nat_add(v___x_1408_, v_size_1399_);
lean_dec(v___x_1408_);
if (v_isShared_1395_ == 0)
{
lean_ctor_set(v___x_1394_, 3, v_impl_1397_);
lean_ctor_set(v___x_1394_, 0, v___x_1409_);
v___x_1411_ = v___x_1394_;
goto v_reusejp_1410_;
}
else
{
lean_object* v_reuseFailAlloc_1412_; 
v_reuseFailAlloc_1412_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1412_, 0, v___x_1409_);
lean_ctor_set(v_reuseFailAlloc_1412_, 1, v_k_1389_);
lean_ctor_set(v_reuseFailAlloc_1412_, 2, v_v_1390_);
lean_ctor_set(v_reuseFailAlloc_1412_, 3, v_impl_1397_);
lean_ctor_set(v_reuseFailAlloc_1412_, 4, v_r_1392_);
v___x_1411_ = v_reuseFailAlloc_1412_;
goto v_reusejp_1410_;
}
v_reusejp_1410_:
{
return v___x_1411_;
}
}
else
{
lean_object* v___x_1414_; uint8_t v_isShared_1415_; uint8_t v_isSharedCheck_1478_; 
v_isSharedCheck_1478_ = !lean_is_exclusive(v_impl_1397_);
if (v_isSharedCheck_1478_ == 0)
{
lean_object* v_unused_1479_; lean_object* v_unused_1480_; lean_object* v_unused_1481_; lean_object* v_unused_1482_; lean_object* v_unused_1483_; 
v_unused_1479_ = lean_ctor_get(v_impl_1397_, 4);
lean_dec(v_unused_1479_);
v_unused_1480_ = lean_ctor_get(v_impl_1397_, 3);
lean_dec(v_unused_1480_);
v_unused_1481_ = lean_ctor_get(v_impl_1397_, 2);
lean_dec(v_unused_1481_);
v_unused_1482_ = lean_ctor_get(v_impl_1397_, 1);
lean_dec(v_unused_1482_);
v_unused_1483_ = lean_ctor_get(v_impl_1397_, 0);
lean_dec(v_unused_1483_);
v___x_1414_ = v_impl_1397_;
v_isShared_1415_ = v_isSharedCheck_1478_;
goto v_resetjp_1413_;
}
else
{
lean_dec(v_impl_1397_);
v___x_1414_ = lean_box(0);
v_isShared_1415_ = v_isSharedCheck_1478_;
goto v_resetjp_1413_;
}
v_resetjp_1413_:
{
lean_object* v_size_1416_; lean_object* v_size_1417_; lean_object* v_k_1418_; lean_object* v_v_1419_; lean_object* v_l_1420_; lean_object* v_r_1421_; lean_object* v___x_1422_; lean_object* v___x_1423_; uint8_t v___x_1424_; 
v_size_1416_ = lean_ctor_get(v_l_1403_, 0);
v_size_1417_ = lean_ctor_get(v_r_1404_, 0);
v_k_1418_ = lean_ctor_get(v_r_1404_, 1);
v_v_1419_ = lean_ctor_get(v_r_1404_, 2);
v_l_1420_ = lean_ctor_get(v_r_1404_, 3);
v_r_1421_ = lean_ctor_get(v_r_1404_, 4);
v___x_1422_ = lean_unsigned_to_nat(2u);
v___x_1423_ = lean_nat_mul(v___x_1422_, v_size_1416_);
v___x_1424_ = lean_nat_dec_lt(v_size_1417_, v___x_1423_);
lean_dec(v___x_1423_);
if (v___x_1424_ == 0)
{
lean_object* v___x_1426_; uint8_t v_isShared_1427_; uint8_t v_isSharedCheck_1453_; 
lean_inc(v_r_1421_);
lean_inc(v_l_1420_);
lean_inc(v_v_1419_);
lean_inc(v_k_1418_);
v_isSharedCheck_1453_ = !lean_is_exclusive(v_r_1404_);
if (v_isSharedCheck_1453_ == 0)
{
lean_object* v_unused_1454_; lean_object* v_unused_1455_; lean_object* v_unused_1456_; lean_object* v_unused_1457_; lean_object* v_unused_1458_; 
v_unused_1454_ = lean_ctor_get(v_r_1404_, 4);
lean_dec(v_unused_1454_);
v_unused_1455_ = lean_ctor_get(v_r_1404_, 3);
lean_dec(v_unused_1455_);
v_unused_1456_ = lean_ctor_get(v_r_1404_, 2);
lean_dec(v_unused_1456_);
v_unused_1457_ = lean_ctor_get(v_r_1404_, 1);
lean_dec(v_unused_1457_);
v_unused_1458_ = lean_ctor_get(v_r_1404_, 0);
lean_dec(v_unused_1458_);
v___x_1426_ = v_r_1404_;
v_isShared_1427_ = v_isSharedCheck_1453_;
goto v_resetjp_1425_;
}
else
{
lean_dec(v_r_1404_);
v___x_1426_ = lean_box(0);
v_isShared_1427_ = v_isSharedCheck_1453_;
goto v_resetjp_1425_;
}
v_resetjp_1425_:
{
lean_object* v___x_1428_; lean_object* v___x_1429_; lean_object* v___y_1431_; lean_object* v___y_1432_; lean_object* v___y_1433_; lean_object* v___x_1441_; lean_object* v___y_1443_; 
v___x_1428_ = lean_nat_add(v___x_1398_, v_size_1400_);
lean_dec(v_size_1400_);
v___x_1429_ = lean_nat_add(v___x_1428_, v_size_1399_);
lean_dec(v___x_1428_);
v___x_1441_ = lean_nat_add(v___x_1398_, v_size_1416_);
if (lean_obj_tag(v_l_1420_) == 0)
{
lean_object* v_size_1451_; 
v_size_1451_ = lean_ctor_get(v_l_1420_, 0);
lean_inc(v_size_1451_);
v___y_1443_ = v_size_1451_;
goto v___jp_1442_;
}
else
{
lean_object* v___x_1452_; 
v___x_1452_ = lean_unsigned_to_nat(0u);
v___y_1443_ = v___x_1452_;
goto v___jp_1442_;
}
v___jp_1430_:
{
lean_object* v___x_1434_; lean_object* v___x_1436_; 
v___x_1434_ = lean_nat_add(v___y_1432_, v___y_1433_);
lean_dec(v___y_1433_);
lean_dec(v___y_1432_);
if (v_isShared_1427_ == 0)
{
lean_ctor_set(v___x_1426_, 4, v_r_1392_);
lean_ctor_set(v___x_1426_, 3, v_r_1421_);
lean_ctor_set(v___x_1426_, 2, v_v_1390_);
lean_ctor_set(v___x_1426_, 1, v_k_1389_);
lean_ctor_set(v___x_1426_, 0, v___x_1434_);
v___x_1436_ = v___x_1426_;
goto v_reusejp_1435_;
}
else
{
lean_object* v_reuseFailAlloc_1440_; 
v_reuseFailAlloc_1440_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1440_, 0, v___x_1434_);
lean_ctor_set(v_reuseFailAlloc_1440_, 1, v_k_1389_);
lean_ctor_set(v_reuseFailAlloc_1440_, 2, v_v_1390_);
lean_ctor_set(v_reuseFailAlloc_1440_, 3, v_r_1421_);
lean_ctor_set(v_reuseFailAlloc_1440_, 4, v_r_1392_);
v___x_1436_ = v_reuseFailAlloc_1440_;
goto v_reusejp_1435_;
}
v_reusejp_1435_:
{
lean_object* v___x_1438_; 
if (v_isShared_1415_ == 0)
{
lean_ctor_set(v___x_1414_, 4, v___x_1436_);
lean_ctor_set(v___x_1414_, 3, v___y_1431_);
lean_ctor_set(v___x_1414_, 2, v_v_1419_);
lean_ctor_set(v___x_1414_, 1, v_k_1418_);
lean_ctor_set(v___x_1414_, 0, v___x_1429_);
v___x_1438_ = v___x_1414_;
goto v_reusejp_1437_;
}
else
{
lean_object* v_reuseFailAlloc_1439_; 
v_reuseFailAlloc_1439_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1439_, 0, v___x_1429_);
lean_ctor_set(v_reuseFailAlloc_1439_, 1, v_k_1418_);
lean_ctor_set(v_reuseFailAlloc_1439_, 2, v_v_1419_);
lean_ctor_set(v_reuseFailAlloc_1439_, 3, v___y_1431_);
lean_ctor_set(v_reuseFailAlloc_1439_, 4, v___x_1436_);
v___x_1438_ = v_reuseFailAlloc_1439_;
goto v_reusejp_1437_;
}
v_reusejp_1437_:
{
return v___x_1438_;
}
}
}
v___jp_1442_:
{
lean_object* v___x_1444_; lean_object* v___x_1446_; 
v___x_1444_ = lean_nat_add(v___x_1441_, v___y_1443_);
lean_dec(v___y_1443_);
lean_dec(v___x_1441_);
if (v_isShared_1395_ == 0)
{
lean_ctor_set(v___x_1394_, 4, v_l_1420_);
lean_ctor_set(v___x_1394_, 3, v_l_1403_);
lean_ctor_set(v___x_1394_, 2, v_v_1402_);
lean_ctor_set(v___x_1394_, 1, v_k_1401_);
lean_ctor_set(v___x_1394_, 0, v___x_1444_);
v___x_1446_ = v___x_1394_;
goto v_reusejp_1445_;
}
else
{
lean_object* v_reuseFailAlloc_1450_; 
v_reuseFailAlloc_1450_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1450_, 0, v___x_1444_);
lean_ctor_set(v_reuseFailAlloc_1450_, 1, v_k_1401_);
lean_ctor_set(v_reuseFailAlloc_1450_, 2, v_v_1402_);
lean_ctor_set(v_reuseFailAlloc_1450_, 3, v_l_1403_);
lean_ctor_set(v_reuseFailAlloc_1450_, 4, v_l_1420_);
v___x_1446_ = v_reuseFailAlloc_1450_;
goto v_reusejp_1445_;
}
v_reusejp_1445_:
{
lean_object* v___x_1447_; 
v___x_1447_ = lean_nat_add(v___x_1398_, v_size_1399_);
if (lean_obj_tag(v_r_1421_) == 0)
{
lean_object* v_size_1448_; 
v_size_1448_ = lean_ctor_get(v_r_1421_, 0);
lean_inc(v_size_1448_);
v___y_1431_ = v___x_1446_;
v___y_1432_ = v___x_1447_;
v___y_1433_ = v_size_1448_;
goto v___jp_1430_;
}
else
{
lean_object* v___x_1449_; 
v___x_1449_ = lean_unsigned_to_nat(0u);
v___y_1431_ = v___x_1446_;
v___y_1432_ = v___x_1447_;
v___y_1433_ = v___x_1449_;
goto v___jp_1430_;
}
}
}
}
}
else
{
lean_object* v___x_1459_; lean_object* v___x_1460_; lean_object* v___x_1461_; lean_object* v___x_1462_; lean_object* v___x_1464_; 
lean_del_object(v___x_1394_);
v___x_1459_ = lean_nat_add(v___x_1398_, v_size_1400_);
lean_dec(v_size_1400_);
v___x_1460_ = lean_nat_add(v___x_1459_, v_size_1399_);
lean_dec(v___x_1459_);
v___x_1461_ = lean_nat_add(v___x_1398_, v_size_1399_);
v___x_1462_ = lean_nat_add(v___x_1461_, v_size_1417_);
lean_dec(v___x_1461_);
lean_inc_ref(v_r_1392_);
if (v_isShared_1415_ == 0)
{
lean_ctor_set(v___x_1414_, 4, v_r_1392_);
lean_ctor_set(v___x_1414_, 3, v_r_1404_);
lean_ctor_set(v___x_1414_, 2, v_v_1390_);
lean_ctor_set(v___x_1414_, 1, v_k_1389_);
lean_ctor_set(v___x_1414_, 0, v___x_1462_);
v___x_1464_ = v___x_1414_;
goto v_reusejp_1463_;
}
else
{
lean_object* v_reuseFailAlloc_1477_; 
v_reuseFailAlloc_1477_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1477_, 0, v___x_1462_);
lean_ctor_set(v_reuseFailAlloc_1477_, 1, v_k_1389_);
lean_ctor_set(v_reuseFailAlloc_1477_, 2, v_v_1390_);
lean_ctor_set(v_reuseFailAlloc_1477_, 3, v_r_1404_);
lean_ctor_set(v_reuseFailAlloc_1477_, 4, v_r_1392_);
v___x_1464_ = v_reuseFailAlloc_1477_;
goto v_reusejp_1463_;
}
v_reusejp_1463_:
{
lean_object* v___x_1466_; uint8_t v_isShared_1467_; uint8_t v_isSharedCheck_1471_; 
v_isSharedCheck_1471_ = !lean_is_exclusive(v_r_1392_);
if (v_isSharedCheck_1471_ == 0)
{
lean_object* v_unused_1472_; lean_object* v_unused_1473_; lean_object* v_unused_1474_; lean_object* v_unused_1475_; lean_object* v_unused_1476_; 
v_unused_1472_ = lean_ctor_get(v_r_1392_, 4);
lean_dec(v_unused_1472_);
v_unused_1473_ = lean_ctor_get(v_r_1392_, 3);
lean_dec(v_unused_1473_);
v_unused_1474_ = lean_ctor_get(v_r_1392_, 2);
lean_dec(v_unused_1474_);
v_unused_1475_ = lean_ctor_get(v_r_1392_, 1);
lean_dec(v_unused_1475_);
v_unused_1476_ = lean_ctor_get(v_r_1392_, 0);
lean_dec(v_unused_1476_);
v___x_1466_ = v_r_1392_;
v_isShared_1467_ = v_isSharedCheck_1471_;
goto v_resetjp_1465_;
}
else
{
lean_dec(v_r_1392_);
v___x_1466_ = lean_box(0);
v_isShared_1467_ = v_isSharedCheck_1471_;
goto v_resetjp_1465_;
}
v_resetjp_1465_:
{
lean_object* v___x_1469_; 
if (v_isShared_1467_ == 0)
{
lean_ctor_set(v___x_1466_, 4, v___x_1464_);
lean_ctor_set(v___x_1466_, 3, v_l_1403_);
lean_ctor_set(v___x_1466_, 2, v_v_1402_);
lean_ctor_set(v___x_1466_, 1, v_k_1401_);
lean_ctor_set(v___x_1466_, 0, v___x_1460_);
v___x_1469_ = v___x_1466_;
goto v_reusejp_1468_;
}
else
{
lean_object* v_reuseFailAlloc_1470_; 
v_reuseFailAlloc_1470_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1470_, 0, v___x_1460_);
lean_ctor_set(v_reuseFailAlloc_1470_, 1, v_k_1401_);
lean_ctor_set(v_reuseFailAlloc_1470_, 2, v_v_1402_);
lean_ctor_set(v_reuseFailAlloc_1470_, 3, v_l_1403_);
lean_ctor_set(v_reuseFailAlloc_1470_, 4, v___x_1464_);
v___x_1469_ = v_reuseFailAlloc_1470_;
goto v_reusejp_1468_;
}
v_reusejp_1468_:
{
return v___x_1469_;
}
}
}
}
}
}
}
else
{
lean_object* v_l_1484_; 
v_l_1484_ = lean_ctor_get(v_impl_1397_, 3);
lean_inc(v_l_1484_);
if (lean_obj_tag(v_l_1484_) == 0)
{
lean_object* v_r_1485_; lean_object* v_k_1486_; lean_object* v_v_1487_; lean_object* v___x_1489_; uint8_t v_isShared_1490_; uint8_t v_isSharedCheck_1498_; 
v_r_1485_ = lean_ctor_get(v_impl_1397_, 4);
v_k_1486_ = lean_ctor_get(v_impl_1397_, 1);
v_v_1487_ = lean_ctor_get(v_impl_1397_, 2);
v_isSharedCheck_1498_ = !lean_is_exclusive(v_impl_1397_);
if (v_isSharedCheck_1498_ == 0)
{
lean_object* v_unused_1499_; lean_object* v_unused_1500_; 
v_unused_1499_ = lean_ctor_get(v_impl_1397_, 3);
lean_dec(v_unused_1499_);
v_unused_1500_ = lean_ctor_get(v_impl_1397_, 0);
lean_dec(v_unused_1500_);
v___x_1489_ = v_impl_1397_;
v_isShared_1490_ = v_isSharedCheck_1498_;
goto v_resetjp_1488_;
}
else
{
lean_inc(v_r_1485_);
lean_inc(v_v_1487_);
lean_inc(v_k_1486_);
lean_dec(v_impl_1397_);
v___x_1489_ = lean_box(0);
v_isShared_1490_ = v_isSharedCheck_1498_;
goto v_resetjp_1488_;
}
v_resetjp_1488_:
{
lean_object* v___x_1491_; lean_object* v___x_1493_; 
v___x_1491_ = lean_unsigned_to_nat(3u);
lean_inc(v_r_1485_);
if (v_isShared_1490_ == 0)
{
lean_ctor_set(v___x_1489_, 3, v_r_1485_);
lean_ctor_set(v___x_1489_, 2, v_v_1390_);
lean_ctor_set(v___x_1489_, 1, v_k_1389_);
lean_ctor_set(v___x_1489_, 0, v___x_1398_);
v___x_1493_ = v___x_1489_;
goto v_reusejp_1492_;
}
else
{
lean_object* v_reuseFailAlloc_1497_; 
v_reuseFailAlloc_1497_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1497_, 0, v___x_1398_);
lean_ctor_set(v_reuseFailAlloc_1497_, 1, v_k_1389_);
lean_ctor_set(v_reuseFailAlloc_1497_, 2, v_v_1390_);
lean_ctor_set(v_reuseFailAlloc_1497_, 3, v_r_1485_);
lean_ctor_set(v_reuseFailAlloc_1497_, 4, v_r_1485_);
v___x_1493_ = v_reuseFailAlloc_1497_;
goto v_reusejp_1492_;
}
v_reusejp_1492_:
{
lean_object* v___x_1495_; 
if (v_isShared_1395_ == 0)
{
lean_ctor_set(v___x_1394_, 4, v___x_1493_);
lean_ctor_set(v___x_1394_, 3, v_l_1484_);
lean_ctor_set(v___x_1394_, 2, v_v_1487_);
lean_ctor_set(v___x_1394_, 1, v_k_1486_);
lean_ctor_set(v___x_1394_, 0, v___x_1491_);
v___x_1495_ = v___x_1394_;
goto v_reusejp_1494_;
}
else
{
lean_object* v_reuseFailAlloc_1496_; 
v_reuseFailAlloc_1496_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1496_, 0, v___x_1491_);
lean_ctor_set(v_reuseFailAlloc_1496_, 1, v_k_1486_);
lean_ctor_set(v_reuseFailAlloc_1496_, 2, v_v_1487_);
lean_ctor_set(v_reuseFailAlloc_1496_, 3, v_l_1484_);
lean_ctor_set(v_reuseFailAlloc_1496_, 4, v___x_1493_);
v___x_1495_ = v_reuseFailAlloc_1496_;
goto v_reusejp_1494_;
}
v_reusejp_1494_:
{
return v___x_1495_;
}
}
}
}
else
{
lean_object* v_r_1501_; 
v_r_1501_ = lean_ctor_get(v_impl_1397_, 4);
lean_inc(v_r_1501_);
if (lean_obj_tag(v_r_1501_) == 0)
{
lean_object* v_k_1502_; lean_object* v_v_1503_; lean_object* v___x_1505_; uint8_t v_isShared_1506_; uint8_t v_isSharedCheck_1526_; 
v_k_1502_ = lean_ctor_get(v_impl_1397_, 1);
v_v_1503_ = lean_ctor_get(v_impl_1397_, 2);
v_isSharedCheck_1526_ = !lean_is_exclusive(v_impl_1397_);
if (v_isSharedCheck_1526_ == 0)
{
lean_object* v_unused_1527_; lean_object* v_unused_1528_; lean_object* v_unused_1529_; 
v_unused_1527_ = lean_ctor_get(v_impl_1397_, 4);
lean_dec(v_unused_1527_);
v_unused_1528_ = lean_ctor_get(v_impl_1397_, 3);
lean_dec(v_unused_1528_);
v_unused_1529_ = lean_ctor_get(v_impl_1397_, 0);
lean_dec(v_unused_1529_);
v___x_1505_ = v_impl_1397_;
v_isShared_1506_ = v_isSharedCheck_1526_;
goto v_resetjp_1504_;
}
else
{
lean_inc(v_v_1503_);
lean_inc(v_k_1502_);
lean_dec(v_impl_1397_);
v___x_1505_ = lean_box(0);
v_isShared_1506_ = v_isSharedCheck_1526_;
goto v_resetjp_1504_;
}
v_resetjp_1504_:
{
lean_object* v_k_1507_; lean_object* v_v_1508_; lean_object* v___x_1510_; uint8_t v_isShared_1511_; uint8_t v_isSharedCheck_1522_; 
v_k_1507_ = lean_ctor_get(v_r_1501_, 1);
v_v_1508_ = lean_ctor_get(v_r_1501_, 2);
v_isSharedCheck_1522_ = !lean_is_exclusive(v_r_1501_);
if (v_isSharedCheck_1522_ == 0)
{
lean_object* v_unused_1523_; lean_object* v_unused_1524_; lean_object* v_unused_1525_; 
v_unused_1523_ = lean_ctor_get(v_r_1501_, 4);
lean_dec(v_unused_1523_);
v_unused_1524_ = lean_ctor_get(v_r_1501_, 3);
lean_dec(v_unused_1524_);
v_unused_1525_ = lean_ctor_get(v_r_1501_, 0);
lean_dec(v_unused_1525_);
v___x_1510_ = v_r_1501_;
v_isShared_1511_ = v_isSharedCheck_1522_;
goto v_resetjp_1509_;
}
else
{
lean_inc(v_v_1508_);
lean_inc(v_k_1507_);
lean_dec(v_r_1501_);
v___x_1510_ = lean_box(0);
v_isShared_1511_ = v_isSharedCheck_1522_;
goto v_resetjp_1509_;
}
v_resetjp_1509_:
{
lean_object* v___x_1512_; lean_object* v___x_1514_; 
v___x_1512_ = lean_unsigned_to_nat(3u);
if (v_isShared_1511_ == 0)
{
lean_ctor_set(v___x_1510_, 4, v_l_1484_);
lean_ctor_set(v___x_1510_, 3, v_l_1484_);
lean_ctor_set(v___x_1510_, 2, v_v_1503_);
lean_ctor_set(v___x_1510_, 1, v_k_1502_);
lean_ctor_set(v___x_1510_, 0, v___x_1398_);
v___x_1514_ = v___x_1510_;
goto v_reusejp_1513_;
}
else
{
lean_object* v_reuseFailAlloc_1521_; 
v_reuseFailAlloc_1521_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1521_, 0, v___x_1398_);
lean_ctor_set(v_reuseFailAlloc_1521_, 1, v_k_1502_);
lean_ctor_set(v_reuseFailAlloc_1521_, 2, v_v_1503_);
lean_ctor_set(v_reuseFailAlloc_1521_, 3, v_l_1484_);
lean_ctor_set(v_reuseFailAlloc_1521_, 4, v_l_1484_);
v___x_1514_ = v_reuseFailAlloc_1521_;
goto v_reusejp_1513_;
}
v_reusejp_1513_:
{
lean_object* v___x_1516_; 
if (v_isShared_1506_ == 0)
{
lean_ctor_set(v___x_1505_, 4, v_l_1484_);
lean_ctor_set(v___x_1505_, 2, v_v_1390_);
lean_ctor_set(v___x_1505_, 1, v_k_1389_);
lean_ctor_set(v___x_1505_, 0, v___x_1398_);
v___x_1516_ = v___x_1505_;
goto v_reusejp_1515_;
}
else
{
lean_object* v_reuseFailAlloc_1520_; 
v_reuseFailAlloc_1520_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1520_, 0, v___x_1398_);
lean_ctor_set(v_reuseFailAlloc_1520_, 1, v_k_1389_);
lean_ctor_set(v_reuseFailAlloc_1520_, 2, v_v_1390_);
lean_ctor_set(v_reuseFailAlloc_1520_, 3, v_l_1484_);
lean_ctor_set(v_reuseFailAlloc_1520_, 4, v_l_1484_);
v___x_1516_ = v_reuseFailAlloc_1520_;
goto v_reusejp_1515_;
}
v_reusejp_1515_:
{
lean_object* v___x_1518_; 
if (v_isShared_1395_ == 0)
{
lean_ctor_set(v___x_1394_, 4, v___x_1516_);
lean_ctor_set(v___x_1394_, 3, v___x_1514_);
lean_ctor_set(v___x_1394_, 2, v_v_1508_);
lean_ctor_set(v___x_1394_, 1, v_k_1507_);
lean_ctor_set(v___x_1394_, 0, v___x_1512_);
v___x_1518_ = v___x_1394_;
goto v_reusejp_1517_;
}
else
{
lean_object* v_reuseFailAlloc_1519_; 
v_reuseFailAlloc_1519_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1519_, 0, v___x_1512_);
lean_ctor_set(v_reuseFailAlloc_1519_, 1, v_k_1507_);
lean_ctor_set(v_reuseFailAlloc_1519_, 2, v_v_1508_);
lean_ctor_set(v_reuseFailAlloc_1519_, 3, v___x_1514_);
lean_ctor_set(v_reuseFailAlloc_1519_, 4, v___x_1516_);
v___x_1518_ = v_reuseFailAlloc_1519_;
goto v_reusejp_1517_;
}
v_reusejp_1517_:
{
return v___x_1518_;
}
}
}
}
}
}
else
{
lean_object* v___x_1530_; lean_object* v___x_1532_; 
v___x_1530_ = lean_unsigned_to_nat(2u);
if (v_isShared_1395_ == 0)
{
lean_ctor_set(v___x_1394_, 4, v_r_1501_);
lean_ctor_set(v___x_1394_, 3, v_impl_1397_);
lean_ctor_set(v___x_1394_, 0, v___x_1530_);
v___x_1532_ = v___x_1394_;
goto v_reusejp_1531_;
}
else
{
lean_object* v_reuseFailAlloc_1533_; 
v_reuseFailAlloc_1533_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1533_, 0, v___x_1530_);
lean_ctor_set(v_reuseFailAlloc_1533_, 1, v_k_1389_);
lean_ctor_set(v_reuseFailAlloc_1533_, 2, v_v_1390_);
lean_ctor_set(v_reuseFailAlloc_1533_, 3, v_impl_1397_);
lean_ctor_set(v_reuseFailAlloc_1533_, 4, v_r_1501_);
v___x_1532_ = v_reuseFailAlloc_1533_;
goto v_reusejp_1531_;
}
v_reusejp_1531_:
{
return v___x_1532_;
}
}
}
}
}
case 1:
{
lean_object* v___x_1535_; 
lean_dec(v_v_1390_);
lean_dec(v_k_1389_);
if (v_isShared_1395_ == 0)
{
lean_ctor_set(v___x_1394_, 2, v_v_1386_);
lean_ctor_set(v___x_1394_, 1, v_k_1385_);
v___x_1535_ = v___x_1394_;
goto v_reusejp_1534_;
}
else
{
lean_object* v_reuseFailAlloc_1536_; 
v_reuseFailAlloc_1536_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1536_, 0, v_size_1388_);
lean_ctor_set(v_reuseFailAlloc_1536_, 1, v_k_1385_);
lean_ctor_set(v_reuseFailAlloc_1536_, 2, v_v_1386_);
lean_ctor_set(v_reuseFailAlloc_1536_, 3, v_l_1391_);
lean_ctor_set(v_reuseFailAlloc_1536_, 4, v_r_1392_);
v___x_1535_ = v_reuseFailAlloc_1536_;
goto v_reusejp_1534_;
}
v_reusejp_1534_:
{
return v___x_1535_;
}
}
default: 
{
lean_object* v_impl_1537_; lean_object* v___x_1538_; 
lean_dec(v_size_1388_);
v_impl_1537_ = l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_getDotCompletionTypeNameSet_spec__1___redArg(v_k_1385_, v_v_1386_, v_r_1392_);
v___x_1538_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_l_1391_) == 0)
{
lean_object* v_size_1539_; lean_object* v_size_1540_; lean_object* v_k_1541_; lean_object* v_v_1542_; lean_object* v_l_1543_; lean_object* v_r_1544_; lean_object* v___x_1545_; lean_object* v___x_1546_; uint8_t v___x_1547_; 
v_size_1539_ = lean_ctor_get(v_l_1391_, 0);
v_size_1540_ = lean_ctor_get(v_impl_1537_, 0);
lean_inc(v_size_1540_);
v_k_1541_ = lean_ctor_get(v_impl_1537_, 1);
lean_inc(v_k_1541_);
v_v_1542_ = lean_ctor_get(v_impl_1537_, 2);
lean_inc(v_v_1542_);
v_l_1543_ = lean_ctor_get(v_impl_1537_, 3);
lean_inc(v_l_1543_);
v_r_1544_ = lean_ctor_get(v_impl_1537_, 4);
lean_inc(v_r_1544_);
v___x_1545_ = lean_unsigned_to_nat(3u);
v___x_1546_ = lean_nat_mul(v___x_1545_, v_size_1539_);
v___x_1547_ = lean_nat_dec_lt(v___x_1546_, v_size_1540_);
lean_dec(v___x_1546_);
if (v___x_1547_ == 0)
{
lean_object* v___x_1548_; lean_object* v___x_1549_; lean_object* v___x_1551_; 
lean_dec(v_r_1544_);
lean_dec(v_l_1543_);
lean_dec(v_v_1542_);
lean_dec(v_k_1541_);
v___x_1548_ = lean_nat_add(v___x_1538_, v_size_1539_);
v___x_1549_ = lean_nat_add(v___x_1548_, v_size_1540_);
lean_dec(v_size_1540_);
lean_dec(v___x_1548_);
if (v_isShared_1395_ == 0)
{
lean_ctor_set(v___x_1394_, 4, v_impl_1537_);
lean_ctor_set(v___x_1394_, 0, v___x_1549_);
v___x_1551_ = v___x_1394_;
goto v_reusejp_1550_;
}
else
{
lean_object* v_reuseFailAlloc_1552_; 
v_reuseFailAlloc_1552_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1552_, 0, v___x_1549_);
lean_ctor_set(v_reuseFailAlloc_1552_, 1, v_k_1389_);
lean_ctor_set(v_reuseFailAlloc_1552_, 2, v_v_1390_);
lean_ctor_set(v_reuseFailAlloc_1552_, 3, v_l_1391_);
lean_ctor_set(v_reuseFailAlloc_1552_, 4, v_impl_1537_);
v___x_1551_ = v_reuseFailAlloc_1552_;
goto v_reusejp_1550_;
}
v_reusejp_1550_:
{
return v___x_1551_;
}
}
else
{
lean_object* v___x_1554_; uint8_t v_isShared_1555_; uint8_t v_isSharedCheck_1616_; 
v_isSharedCheck_1616_ = !lean_is_exclusive(v_impl_1537_);
if (v_isSharedCheck_1616_ == 0)
{
lean_object* v_unused_1617_; lean_object* v_unused_1618_; lean_object* v_unused_1619_; lean_object* v_unused_1620_; lean_object* v_unused_1621_; 
v_unused_1617_ = lean_ctor_get(v_impl_1537_, 4);
lean_dec(v_unused_1617_);
v_unused_1618_ = lean_ctor_get(v_impl_1537_, 3);
lean_dec(v_unused_1618_);
v_unused_1619_ = lean_ctor_get(v_impl_1537_, 2);
lean_dec(v_unused_1619_);
v_unused_1620_ = lean_ctor_get(v_impl_1537_, 1);
lean_dec(v_unused_1620_);
v_unused_1621_ = lean_ctor_get(v_impl_1537_, 0);
lean_dec(v_unused_1621_);
v___x_1554_ = v_impl_1537_;
v_isShared_1555_ = v_isSharedCheck_1616_;
goto v_resetjp_1553_;
}
else
{
lean_dec(v_impl_1537_);
v___x_1554_ = lean_box(0);
v_isShared_1555_ = v_isSharedCheck_1616_;
goto v_resetjp_1553_;
}
v_resetjp_1553_:
{
lean_object* v_size_1556_; lean_object* v_k_1557_; lean_object* v_v_1558_; lean_object* v_l_1559_; lean_object* v_r_1560_; lean_object* v_size_1561_; lean_object* v___x_1562_; lean_object* v___x_1563_; uint8_t v___x_1564_; 
v_size_1556_ = lean_ctor_get(v_l_1543_, 0);
v_k_1557_ = lean_ctor_get(v_l_1543_, 1);
v_v_1558_ = lean_ctor_get(v_l_1543_, 2);
v_l_1559_ = lean_ctor_get(v_l_1543_, 3);
v_r_1560_ = lean_ctor_get(v_l_1543_, 4);
v_size_1561_ = lean_ctor_get(v_r_1544_, 0);
v___x_1562_ = lean_unsigned_to_nat(2u);
v___x_1563_ = lean_nat_mul(v___x_1562_, v_size_1561_);
v___x_1564_ = lean_nat_dec_lt(v_size_1556_, v___x_1563_);
lean_dec(v___x_1563_);
if (v___x_1564_ == 0)
{
lean_object* v___x_1566_; uint8_t v_isShared_1567_; uint8_t v_isSharedCheck_1592_; 
lean_inc(v_r_1560_);
lean_inc(v_l_1559_);
lean_inc(v_v_1558_);
lean_inc(v_k_1557_);
v_isSharedCheck_1592_ = !lean_is_exclusive(v_l_1543_);
if (v_isSharedCheck_1592_ == 0)
{
lean_object* v_unused_1593_; lean_object* v_unused_1594_; lean_object* v_unused_1595_; lean_object* v_unused_1596_; lean_object* v_unused_1597_; 
v_unused_1593_ = lean_ctor_get(v_l_1543_, 4);
lean_dec(v_unused_1593_);
v_unused_1594_ = lean_ctor_get(v_l_1543_, 3);
lean_dec(v_unused_1594_);
v_unused_1595_ = lean_ctor_get(v_l_1543_, 2);
lean_dec(v_unused_1595_);
v_unused_1596_ = lean_ctor_get(v_l_1543_, 1);
lean_dec(v_unused_1596_);
v_unused_1597_ = lean_ctor_get(v_l_1543_, 0);
lean_dec(v_unused_1597_);
v___x_1566_ = v_l_1543_;
v_isShared_1567_ = v_isSharedCheck_1592_;
goto v_resetjp_1565_;
}
else
{
lean_dec(v_l_1543_);
v___x_1566_ = lean_box(0);
v_isShared_1567_ = v_isSharedCheck_1592_;
goto v_resetjp_1565_;
}
v_resetjp_1565_:
{
lean_object* v___x_1568_; lean_object* v___x_1569_; lean_object* v___y_1571_; lean_object* v___y_1572_; lean_object* v___y_1573_; lean_object* v___y_1582_; 
v___x_1568_ = lean_nat_add(v___x_1538_, v_size_1539_);
v___x_1569_ = lean_nat_add(v___x_1568_, v_size_1540_);
lean_dec(v_size_1540_);
if (lean_obj_tag(v_l_1559_) == 0)
{
lean_object* v_size_1590_; 
v_size_1590_ = lean_ctor_get(v_l_1559_, 0);
lean_inc(v_size_1590_);
v___y_1582_ = v_size_1590_;
goto v___jp_1581_;
}
else
{
lean_object* v___x_1591_; 
v___x_1591_ = lean_unsigned_to_nat(0u);
v___y_1582_ = v___x_1591_;
goto v___jp_1581_;
}
v___jp_1570_:
{
lean_object* v___x_1574_; lean_object* v___x_1576_; 
v___x_1574_ = lean_nat_add(v___y_1572_, v___y_1573_);
lean_dec(v___y_1573_);
lean_dec(v___y_1572_);
if (v_isShared_1567_ == 0)
{
lean_ctor_set(v___x_1566_, 4, v_r_1544_);
lean_ctor_set(v___x_1566_, 3, v_r_1560_);
lean_ctor_set(v___x_1566_, 2, v_v_1542_);
lean_ctor_set(v___x_1566_, 1, v_k_1541_);
lean_ctor_set(v___x_1566_, 0, v___x_1574_);
v___x_1576_ = v___x_1566_;
goto v_reusejp_1575_;
}
else
{
lean_object* v_reuseFailAlloc_1580_; 
v_reuseFailAlloc_1580_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1580_, 0, v___x_1574_);
lean_ctor_set(v_reuseFailAlloc_1580_, 1, v_k_1541_);
lean_ctor_set(v_reuseFailAlloc_1580_, 2, v_v_1542_);
lean_ctor_set(v_reuseFailAlloc_1580_, 3, v_r_1560_);
lean_ctor_set(v_reuseFailAlloc_1580_, 4, v_r_1544_);
v___x_1576_ = v_reuseFailAlloc_1580_;
goto v_reusejp_1575_;
}
v_reusejp_1575_:
{
lean_object* v___x_1578_; 
if (v_isShared_1555_ == 0)
{
lean_ctor_set(v___x_1554_, 4, v___x_1576_);
lean_ctor_set(v___x_1554_, 3, v___y_1571_);
lean_ctor_set(v___x_1554_, 2, v_v_1558_);
lean_ctor_set(v___x_1554_, 1, v_k_1557_);
lean_ctor_set(v___x_1554_, 0, v___x_1569_);
v___x_1578_ = v___x_1554_;
goto v_reusejp_1577_;
}
else
{
lean_object* v_reuseFailAlloc_1579_; 
v_reuseFailAlloc_1579_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1579_, 0, v___x_1569_);
lean_ctor_set(v_reuseFailAlloc_1579_, 1, v_k_1557_);
lean_ctor_set(v_reuseFailAlloc_1579_, 2, v_v_1558_);
lean_ctor_set(v_reuseFailAlloc_1579_, 3, v___y_1571_);
lean_ctor_set(v_reuseFailAlloc_1579_, 4, v___x_1576_);
v___x_1578_ = v_reuseFailAlloc_1579_;
goto v_reusejp_1577_;
}
v_reusejp_1577_:
{
return v___x_1578_;
}
}
}
v___jp_1581_:
{
lean_object* v___x_1583_; lean_object* v___x_1585_; 
v___x_1583_ = lean_nat_add(v___x_1568_, v___y_1582_);
lean_dec(v___y_1582_);
lean_dec(v___x_1568_);
if (v_isShared_1395_ == 0)
{
lean_ctor_set(v___x_1394_, 4, v_l_1559_);
lean_ctor_set(v___x_1394_, 0, v___x_1583_);
v___x_1585_ = v___x_1394_;
goto v_reusejp_1584_;
}
else
{
lean_object* v_reuseFailAlloc_1589_; 
v_reuseFailAlloc_1589_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1589_, 0, v___x_1583_);
lean_ctor_set(v_reuseFailAlloc_1589_, 1, v_k_1389_);
lean_ctor_set(v_reuseFailAlloc_1589_, 2, v_v_1390_);
lean_ctor_set(v_reuseFailAlloc_1589_, 3, v_l_1391_);
lean_ctor_set(v_reuseFailAlloc_1589_, 4, v_l_1559_);
v___x_1585_ = v_reuseFailAlloc_1589_;
goto v_reusejp_1584_;
}
v_reusejp_1584_:
{
lean_object* v___x_1586_; 
v___x_1586_ = lean_nat_add(v___x_1538_, v_size_1561_);
if (lean_obj_tag(v_r_1560_) == 0)
{
lean_object* v_size_1587_; 
v_size_1587_ = lean_ctor_get(v_r_1560_, 0);
lean_inc(v_size_1587_);
v___y_1571_ = v___x_1585_;
v___y_1572_ = v___x_1586_;
v___y_1573_ = v_size_1587_;
goto v___jp_1570_;
}
else
{
lean_object* v___x_1588_; 
v___x_1588_ = lean_unsigned_to_nat(0u);
v___y_1571_ = v___x_1585_;
v___y_1572_ = v___x_1586_;
v___y_1573_ = v___x_1588_;
goto v___jp_1570_;
}
}
}
}
}
else
{
lean_object* v___x_1598_; lean_object* v___x_1599_; lean_object* v___x_1600_; lean_object* v___x_1602_; 
lean_del_object(v___x_1394_);
v___x_1598_ = lean_nat_add(v___x_1538_, v_size_1539_);
v___x_1599_ = lean_nat_add(v___x_1598_, v_size_1540_);
lean_dec(v_size_1540_);
v___x_1600_ = lean_nat_add(v___x_1598_, v_size_1556_);
lean_dec(v___x_1598_);
lean_inc_ref(v_l_1391_);
if (v_isShared_1555_ == 0)
{
lean_ctor_set(v___x_1554_, 4, v_l_1543_);
lean_ctor_set(v___x_1554_, 3, v_l_1391_);
lean_ctor_set(v___x_1554_, 2, v_v_1390_);
lean_ctor_set(v___x_1554_, 1, v_k_1389_);
lean_ctor_set(v___x_1554_, 0, v___x_1600_);
v___x_1602_ = v___x_1554_;
goto v_reusejp_1601_;
}
else
{
lean_object* v_reuseFailAlloc_1615_; 
v_reuseFailAlloc_1615_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1615_, 0, v___x_1600_);
lean_ctor_set(v_reuseFailAlloc_1615_, 1, v_k_1389_);
lean_ctor_set(v_reuseFailAlloc_1615_, 2, v_v_1390_);
lean_ctor_set(v_reuseFailAlloc_1615_, 3, v_l_1391_);
lean_ctor_set(v_reuseFailAlloc_1615_, 4, v_l_1543_);
v___x_1602_ = v_reuseFailAlloc_1615_;
goto v_reusejp_1601_;
}
v_reusejp_1601_:
{
lean_object* v___x_1604_; uint8_t v_isShared_1605_; uint8_t v_isSharedCheck_1609_; 
v_isSharedCheck_1609_ = !lean_is_exclusive(v_l_1391_);
if (v_isSharedCheck_1609_ == 0)
{
lean_object* v_unused_1610_; lean_object* v_unused_1611_; lean_object* v_unused_1612_; lean_object* v_unused_1613_; lean_object* v_unused_1614_; 
v_unused_1610_ = lean_ctor_get(v_l_1391_, 4);
lean_dec(v_unused_1610_);
v_unused_1611_ = lean_ctor_get(v_l_1391_, 3);
lean_dec(v_unused_1611_);
v_unused_1612_ = lean_ctor_get(v_l_1391_, 2);
lean_dec(v_unused_1612_);
v_unused_1613_ = lean_ctor_get(v_l_1391_, 1);
lean_dec(v_unused_1613_);
v_unused_1614_ = lean_ctor_get(v_l_1391_, 0);
lean_dec(v_unused_1614_);
v___x_1604_ = v_l_1391_;
v_isShared_1605_ = v_isSharedCheck_1609_;
goto v_resetjp_1603_;
}
else
{
lean_dec(v_l_1391_);
v___x_1604_ = lean_box(0);
v_isShared_1605_ = v_isSharedCheck_1609_;
goto v_resetjp_1603_;
}
v_resetjp_1603_:
{
lean_object* v___x_1607_; 
if (v_isShared_1605_ == 0)
{
lean_ctor_set(v___x_1604_, 4, v_r_1544_);
lean_ctor_set(v___x_1604_, 3, v___x_1602_);
lean_ctor_set(v___x_1604_, 2, v_v_1542_);
lean_ctor_set(v___x_1604_, 1, v_k_1541_);
lean_ctor_set(v___x_1604_, 0, v___x_1599_);
v___x_1607_ = v___x_1604_;
goto v_reusejp_1606_;
}
else
{
lean_object* v_reuseFailAlloc_1608_; 
v_reuseFailAlloc_1608_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1608_, 0, v___x_1599_);
lean_ctor_set(v_reuseFailAlloc_1608_, 1, v_k_1541_);
lean_ctor_set(v_reuseFailAlloc_1608_, 2, v_v_1542_);
lean_ctor_set(v_reuseFailAlloc_1608_, 3, v___x_1602_);
lean_ctor_set(v_reuseFailAlloc_1608_, 4, v_r_1544_);
v___x_1607_ = v_reuseFailAlloc_1608_;
goto v_reusejp_1606_;
}
v_reusejp_1606_:
{
return v___x_1607_;
}
}
}
}
}
}
}
else
{
lean_object* v_l_1622_; 
v_l_1622_ = lean_ctor_get(v_impl_1537_, 3);
lean_inc(v_l_1622_);
if (lean_obj_tag(v_l_1622_) == 0)
{
lean_object* v_r_1623_; lean_object* v_k_1624_; lean_object* v_v_1625_; lean_object* v___x_1627_; uint8_t v_isShared_1628_; uint8_t v_isSharedCheck_1648_; 
v_r_1623_ = lean_ctor_get(v_impl_1537_, 4);
v_k_1624_ = lean_ctor_get(v_impl_1537_, 1);
v_v_1625_ = lean_ctor_get(v_impl_1537_, 2);
v_isSharedCheck_1648_ = !lean_is_exclusive(v_impl_1537_);
if (v_isSharedCheck_1648_ == 0)
{
lean_object* v_unused_1649_; lean_object* v_unused_1650_; 
v_unused_1649_ = lean_ctor_get(v_impl_1537_, 3);
lean_dec(v_unused_1649_);
v_unused_1650_ = lean_ctor_get(v_impl_1537_, 0);
lean_dec(v_unused_1650_);
v___x_1627_ = v_impl_1537_;
v_isShared_1628_ = v_isSharedCheck_1648_;
goto v_resetjp_1626_;
}
else
{
lean_inc(v_r_1623_);
lean_inc(v_v_1625_);
lean_inc(v_k_1624_);
lean_dec(v_impl_1537_);
v___x_1627_ = lean_box(0);
v_isShared_1628_ = v_isSharedCheck_1648_;
goto v_resetjp_1626_;
}
v_resetjp_1626_:
{
lean_object* v_k_1629_; lean_object* v_v_1630_; lean_object* v___x_1632_; uint8_t v_isShared_1633_; uint8_t v_isSharedCheck_1644_; 
v_k_1629_ = lean_ctor_get(v_l_1622_, 1);
v_v_1630_ = lean_ctor_get(v_l_1622_, 2);
v_isSharedCheck_1644_ = !lean_is_exclusive(v_l_1622_);
if (v_isSharedCheck_1644_ == 0)
{
lean_object* v_unused_1645_; lean_object* v_unused_1646_; lean_object* v_unused_1647_; 
v_unused_1645_ = lean_ctor_get(v_l_1622_, 4);
lean_dec(v_unused_1645_);
v_unused_1646_ = lean_ctor_get(v_l_1622_, 3);
lean_dec(v_unused_1646_);
v_unused_1647_ = lean_ctor_get(v_l_1622_, 0);
lean_dec(v_unused_1647_);
v___x_1632_ = v_l_1622_;
v_isShared_1633_ = v_isSharedCheck_1644_;
goto v_resetjp_1631_;
}
else
{
lean_inc(v_v_1630_);
lean_inc(v_k_1629_);
lean_dec(v_l_1622_);
v___x_1632_ = lean_box(0);
v_isShared_1633_ = v_isSharedCheck_1644_;
goto v_resetjp_1631_;
}
v_resetjp_1631_:
{
lean_object* v___x_1634_; lean_object* v___x_1636_; 
v___x_1634_ = lean_unsigned_to_nat(3u);
lean_inc_n(v_r_1623_, 2);
if (v_isShared_1633_ == 0)
{
lean_ctor_set(v___x_1632_, 4, v_r_1623_);
lean_ctor_set(v___x_1632_, 3, v_r_1623_);
lean_ctor_set(v___x_1632_, 2, v_v_1390_);
lean_ctor_set(v___x_1632_, 1, v_k_1389_);
lean_ctor_set(v___x_1632_, 0, v___x_1538_);
v___x_1636_ = v___x_1632_;
goto v_reusejp_1635_;
}
else
{
lean_object* v_reuseFailAlloc_1643_; 
v_reuseFailAlloc_1643_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1643_, 0, v___x_1538_);
lean_ctor_set(v_reuseFailAlloc_1643_, 1, v_k_1389_);
lean_ctor_set(v_reuseFailAlloc_1643_, 2, v_v_1390_);
lean_ctor_set(v_reuseFailAlloc_1643_, 3, v_r_1623_);
lean_ctor_set(v_reuseFailAlloc_1643_, 4, v_r_1623_);
v___x_1636_ = v_reuseFailAlloc_1643_;
goto v_reusejp_1635_;
}
v_reusejp_1635_:
{
lean_object* v___x_1638_; 
lean_inc(v_r_1623_);
if (v_isShared_1628_ == 0)
{
lean_ctor_set(v___x_1627_, 3, v_r_1623_);
lean_ctor_set(v___x_1627_, 0, v___x_1538_);
v___x_1638_ = v___x_1627_;
goto v_reusejp_1637_;
}
else
{
lean_object* v_reuseFailAlloc_1642_; 
v_reuseFailAlloc_1642_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1642_, 0, v___x_1538_);
lean_ctor_set(v_reuseFailAlloc_1642_, 1, v_k_1624_);
lean_ctor_set(v_reuseFailAlloc_1642_, 2, v_v_1625_);
lean_ctor_set(v_reuseFailAlloc_1642_, 3, v_r_1623_);
lean_ctor_set(v_reuseFailAlloc_1642_, 4, v_r_1623_);
v___x_1638_ = v_reuseFailAlloc_1642_;
goto v_reusejp_1637_;
}
v_reusejp_1637_:
{
lean_object* v___x_1640_; 
if (v_isShared_1395_ == 0)
{
lean_ctor_set(v___x_1394_, 4, v___x_1638_);
lean_ctor_set(v___x_1394_, 3, v___x_1636_);
lean_ctor_set(v___x_1394_, 2, v_v_1630_);
lean_ctor_set(v___x_1394_, 1, v_k_1629_);
lean_ctor_set(v___x_1394_, 0, v___x_1634_);
v___x_1640_ = v___x_1394_;
goto v_reusejp_1639_;
}
else
{
lean_object* v_reuseFailAlloc_1641_; 
v_reuseFailAlloc_1641_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1641_, 0, v___x_1634_);
lean_ctor_set(v_reuseFailAlloc_1641_, 1, v_k_1629_);
lean_ctor_set(v_reuseFailAlloc_1641_, 2, v_v_1630_);
lean_ctor_set(v_reuseFailAlloc_1641_, 3, v___x_1636_);
lean_ctor_set(v_reuseFailAlloc_1641_, 4, v___x_1638_);
v___x_1640_ = v_reuseFailAlloc_1641_;
goto v_reusejp_1639_;
}
v_reusejp_1639_:
{
return v___x_1640_;
}
}
}
}
}
}
else
{
lean_object* v_r_1651_; 
v_r_1651_ = lean_ctor_get(v_impl_1537_, 4);
lean_inc(v_r_1651_);
if (lean_obj_tag(v_r_1651_) == 0)
{
lean_object* v_k_1652_; lean_object* v_v_1653_; lean_object* v___x_1655_; uint8_t v_isShared_1656_; uint8_t v_isSharedCheck_1664_; 
v_k_1652_ = lean_ctor_get(v_impl_1537_, 1);
v_v_1653_ = lean_ctor_get(v_impl_1537_, 2);
v_isSharedCheck_1664_ = !lean_is_exclusive(v_impl_1537_);
if (v_isSharedCheck_1664_ == 0)
{
lean_object* v_unused_1665_; lean_object* v_unused_1666_; lean_object* v_unused_1667_; 
v_unused_1665_ = lean_ctor_get(v_impl_1537_, 4);
lean_dec(v_unused_1665_);
v_unused_1666_ = lean_ctor_get(v_impl_1537_, 3);
lean_dec(v_unused_1666_);
v_unused_1667_ = lean_ctor_get(v_impl_1537_, 0);
lean_dec(v_unused_1667_);
v___x_1655_ = v_impl_1537_;
v_isShared_1656_ = v_isSharedCheck_1664_;
goto v_resetjp_1654_;
}
else
{
lean_inc(v_v_1653_);
lean_inc(v_k_1652_);
lean_dec(v_impl_1537_);
v___x_1655_ = lean_box(0);
v_isShared_1656_ = v_isSharedCheck_1664_;
goto v_resetjp_1654_;
}
v_resetjp_1654_:
{
lean_object* v___x_1657_; lean_object* v___x_1659_; 
v___x_1657_ = lean_unsigned_to_nat(3u);
if (v_isShared_1656_ == 0)
{
lean_ctor_set(v___x_1655_, 4, v_l_1622_);
lean_ctor_set(v___x_1655_, 2, v_v_1390_);
lean_ctor_set(v___x_1655_, 1, v_k_1389_);
lean_ctor_set(v___x_1655_, 0, v___x_1538_);
v___x_1659_ = v___x_1655_;
goto v_reusejp_1658_;
}
else
{
lean_object* v_reuseFailAlloc_1663_; 
v_reuseFailAlloc_1663_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1663_, 0, v___x_1538_);
lean_ctor_set(v_reuseFailAlloc_1663_, 1, v_k_1389_);
lean_ctor_set(v_reuseFailAlloc_1663_, 2, v_v_1390_);
lean_ctor_set(v_reuseFailAlloc_1663_, 3, v_l_1622_);
lean_ctor_set(v_reuseFailAlloc_1663_, 4, v_l_1622_);
v___x_1659_ = v_reuseFailAlloc_1663_;
goto v_reusejp_1658_;
}
v_reusejp_1658_:
{
lean_object* v___x_1661_; 
if (v_isShared_1395_ == 0)
{
lean_ctor_set(v___x_1394_, 4, v_r_1651_);
lean_ctor_set(v___x_1394_, 3, v___x_1659_);
lean_ctor_set(v___x_1394_, 2, v_v_1653_);
lean_ctor_set(v___x_1394_, 1, v_k_1652_);
lean_ctor_set(v___x_1394_, 0, v___x_1657_);
v___x_1661_ = v___x_1394_;
goto v_reusejp_1660_;
}
else
{
lean_object* v_reuseFailAlloc_1662_; 
v_reuseFailAlloc_1662_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1662_, 0, v___x_1657_);
lean_ctor_set(v_reuseFailAlloc_1662_, 1, v_k_1652_);
lean_ctor_set(v_reuseFailAlloc_1662_, 2, v_v_1653_);
lean_ctor_set(v_reuseFailAlloc_1662_, 3, v___x_1659_);
lean_ctor_set(v_reuseFailAlloc_1662_, 4, v_r_1651_);
v___x_1661_ = v_reuseFailAlloc_1662_;
goto v_reusejp_1660_;
}
v_reusejp_1660_:
{
return v___x_1661_;
}
}
}
}
else
{
lean_object* v___x_1668_; lean_object* v___x_1670_; 
v___x_1668_ = lean_unsigned_to_nat(2u);
if (v_isShared_1395_ == 0)
{
lean_ctor_set(v___x_1394_, 4, v_impl_1537_);
lean_ctor_set(v___x_1394_, 3, v_r_1651_);
lean_ctor_set(v___x_1394_, 0, v___x_1668_);
v___x_1670_ = v___x_1394_;
goto v_reusejp_1669_;
}
else
{
lean_object* v_reuseFailAlloc_1671_; 
v_reuseFailAlloc_1671_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1671_, 0, v___x_1668_);
lean_ctor_set(v_reuseFailAlloc_1671_, 1, v_k_1389_);
lean_ctor_set(v_reuseFailAlloc_1671_, 2, v_v_1390_);
lean_ctor_set(v_reuseFailAlloc_1671_, 3, v_r_1651_);
lean_ctor_set(v_reuseFailAlloc_1671_, 4, v_impl_1537_);
v___x_1670_ = v_reuseFailAlloc_1671_;
goto v_reusejp_1669_;
}
v_reusejp_1669_:
{
return v___x_1670_;
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
lean_object* v___x_1673_; lean_object* v___x_1674_; 
v___x_1673_ = lean_unsigned_to_nat(1u);
v___x_1674_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1674_, 0, v___x_1673_);
lean_ctor_set(v___x_1674_, 1, v_k_1385_);
lean_ctor_set(v___x_1674_, 2, v_v_1386_);
lean_ctor_set(v___x_1674_, 3, v_t_1387_);
lean_ctor_set(v___x_1674_, 4, v_t_1387_);
return v___x_1674_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_getDotCompletionTypeNameSet_spec__2___redArg(lean_object* v_as_1675_, size_t v_sz_1676_, size_t v_i_1677_, lean_object* v_b_1678_){
_start:
{
lean_object* v___y_1681_; uint8_t v___x_1685_; 
v___x_1685_ = lean_usize_dec_lt(v_i_1677_, v_sz_1676_);
if (v___x_1685_ == 0)
{
lean_object* v___x_1686_; 
v___x_1686_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1686_, 0, v_b_1678_);
return v___x_1686_;
}
else
{
lean_object* v_a_1687_; uint8_t v___x_1688_; 
v_a_1687_ = lean_array_uget_borrowed(v_as_1675_, v_i_1677_);
lean_inc(v_b_1678_);
lean_inc(v_a_1687_);
v___x_1688_ = l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_getDotCompletionTypeNameSet_spec__0___redArg(v_a_1687_, v_b_1678_);
if (v___x_1688_ == 0)
{
lean_object* v___x_1689_; lean_object* v___x_1690_; 
v___x_1689_ = lean_box(0);
lean_inc(v_a_1687_);
v___x_1690_ = l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_getDotCompletionTypeNameSet_spec__1___redArg(v_a_1687_, v___x_1689_, v_b_1678_);
v___y_1681_ = v___x_1690_;
goto v___jp_1680_;
}
else
{
v___y_1681_ = v_b_1678_;
goto v___jp_1680_;
}
}
v___jp_1680_:
{
size_t v___x_1682_; size_t v___x_1683_; 
v___x_1682_ = ((size_t)1ULL);
v___x_1683_ = lean_usize_add(v_i_1677_, v___x_1682_);
v_i_1677_ = v___x_1683_;
v_b_1678_ = v___y_1681_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_getDotCompletionTypeNameSet_spec__2___redArg___boxed(lean_object* v_as_1691_, lean_object* v_sz_1692_, lean_object* v_i_1693_, lean_object* v_b_1694_, lean_object* v___y_1695_){
_start:
{
size_t v_sz_boxed_1696_; size_t v_i_boxed_1697_; lean_object* v_res_1698_; 
v_sz_boxed_1696_ = lean_unbox_usize(v_sz_1692_);
lean_dec(v_sz_1692_);
v_i_boxed_1697_ = lean_unbox_usize(v_i_1693_);
lean_dec(v_i_1693_);
v_res_1698_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_getDotCompletionTypeNameSet_spec__2___redArg(v_as_1691_, v_sz_boxed_1696_, v_i_boxed_1697_, v_b_1694_);
lean_dec_ref(v_as_1691_);
return v_res_1698_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_getDotCompletionTypeNameSet(lean_object* v_type_1699_, lean_object* v_a_1700_, lean_object* v_a_1701_, lean_object* v_a_1702_, lean_object* v_a_1703_){
_start:
{
lean_object* v_set_1705_; lean_object* v___x_1706_; 
v_set_1705_ = lean_box(1);
v___x_1706_ = l_Lean_Server_Completion_getDotCompletionTypeNames(v_type_1699_, v_a_1700_, v_a_1701_, v_a_1702_, v_a_1703_);
if (lean_obj_tag(v___x_1706_) == 0)
{
lean_object* v_a_1707_; size_t v_sz_1708_; size_t v___x_1709_; lean_object* v___x_1710_; 
v_a_1707_ = lean_ctor_get(v___x_1706_, 0);
lean_inc(v_a_1707_);
lean_dec_ref_known(v___x_1706_, 1);
v_sz_1708_ = lean_array_size(v_a_1707_);
v___x_1709_ = ((size_t)0ULL);
v___x_1710_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_getDotCompletionTypeNameSet_spec__2___redArg(v_a_1707_, v_sz_1708_, v___x_1709_, v_set_1705_);
lean_dec(v_a_1707_);
return v___x_1710_;
}
else
{
lean_object* v_a_1711_; lean_object* v___x_1713_; uint8_t v_isShared_1714_; uint8_t v_isSharedCheck_1718_; 
v_a_1711_ = lean_ctor_get(v___x_1706_, 0);
v_isSharedCheck_1718_ = !lean_is_exclusive(v___x_1706_);
if (v_isSharedCheck_1718_ == 0)
{
v___x_1713_ = v___x_1706_;
v_isShared_1714_ = v_isSharedCheck_1718_;
goto v_resetjp_1712_;
}
else
{
lean_inc(v_a_1711_);
lean_dec(v___x_1706_);
v___x_1713_ = lean_box(0);
v_isShared_1714_ = v_isSharedCheck_1718_;
goto v_resetjp_1712_;
}
v_resetjp_1712_:
{
lean_object* v___x_1716_; 
if (v_isShared_1714_ == 0)
{
v___x_1716_ = v___x_1713_;
goto v_reusejp_1715_;
}
else
{
lean_object* v_reuseFailAlloc_1717_; 
v_reuseFailAlloc_1717_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1717_, 0, v_a_1711_);
v___x_1716_ = v_reuseFailAlloc_1717_;
goto v_reusejp_1715_;
}
v_reusejp_1715_:
{
return v___x_1716_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_getDotCompletionTypeNameSet___boxed(lean_object* v_type_1719_, lean_object* v_a_1720_, lean_object* v_a_1721_, lean_object* v_a_1722_, lean_object* v_a_1723_, lean_object* v_a_1724_){
_start:
{
lean_object* v_res_1725_; 
v_res_1725_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_getDotCompletionTypeNameSet(v_type_1719_, v_a_1720_, v_a_1721_, v_a_1722_, v_a_1723_);
lean_dec(v_a_1723_);
lean_dec_ref(v_a_1722_);
lean_dec(v_a_1721_);
lean_dec_ref(v_a_1720_);
return v_res_1725_;
}
}
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_getDotCompletionTypeNameSet_spec__0(lean_object* v_00_u03b2_1726_, lean_object* v_k_1727_, lean_object* v_t_1728_){
_start:
{
uint8_t v___x_1729_; 
v___x_1729_ = l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_getDotCompletionTypeNameSet_spec__0___redArg(v_k_1727_, v_t_1728_);
return v___x_1729_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_getDotCompletionTypeNameSet_spec__0___boxed(lean_object* v_00_u03b2_1730_, lean_object* v_k_1731_, lean_object* v_t_1732_){
_start:
{
uint8_t v_res_1733_; lean_object* v_r_1734_; 
v_res_1733_ = l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_getDotCompletionTypeNameSet_spec__0(v_00_u03b2_1730_, v_k_1731_, v_t_1732_);
v_r_1734_ = lean_box(v_res_1733_);
return v_r_1734_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_getDotCompletionTypeNameSet_spec__1(lean_object* v_00_u03b2_1735_, lean_object* v_k_1736_, lean_object* v_v_1737_, lean_object* v_t_1738_, lean_object* v_hl_1739_){
_start:
{
lean_object* v___x_1740_; 
v___x_1740_ = l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_getDotCompletionTypeNameSet_spec__1___redArg(v_k_1736_, v_v_1737_, v_t_1738_);
return v___x_1740_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_getDotCompletionTypeNameSet_spec__2(lean_object* v_as_1741_, size_t v_sz_1742_, size_t v_i_1743_, lean_object* v_b_1744_, lean_object* v___y_1745_, lean_object* v___y_1746_, lean_object* v___y_1747_, lean_object* v___y_1748_){
_start:
{
lean_object* v___x_1750_; 
v___x_1750_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_getDotCompletionTypeNameSet_spec__2___redArg(v_as_1741_, v_sz_1742_, v_i_1743_, v_b_1744_);
return v___x_1750_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_getDotCompletionTypeNameSet_spec__2___boxed(lean_object* v_as_1751_, lean_object* v_sz_1752_, lean_object* v_i_1753_, lean_object* v_b_1754_, lean_object* v___y_1755_, lean_object* v___y_1756_, lean_object* v___y_1757_, lean_object* v___y_1758_, lean_object* v___y_1759_){
_start:
{
size_t v_sz_boxed_1760_; size_t v_i_boxed_1761_; lean_object* v_res_1762_; 
v_sz_boxed_1760_ = lean_unbox_usize(v_sz_1752_);
lean_dec(v_sz_1752_);
v_i_boxed_1761_ = lean_unbox_usize(v_i_1753_);
lean_dec(v_i_1753_);
v_res_1762_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_getDotCompletionTypeNameSet_spec__2(v_as_1751_, v_sz_boxed_1760_, v_i_boxed_1761_, v_b_1754_, v___y_1755_, v___y_1756_, v___y_1757_, v___y_1758_);
lean_dec(v___y_1758_);
lean_dec_ref(v___y_1757_);
lean_dec(v___y_1756_);
lean_dec_ref(v___y_1755_);
lean_dec_ref(v_as_1751_);
return v_res_1762_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDefEqToAppOf(lean_object* v_e_1763_, lean_object* v_declName_1764_, lean_object* v_a_1765_, lean_object* v_a_1766_, lean_object* v_a_1767_, lean_object* v_a_1768_){
_start:
{
uint8_t v___y_1771_; uint8_t v___y_1793_; lean_object* v___x_1796_; 
v___x_1796_ = l_Lean_Expr_getAppFn(v_e_1763_);
if (lean_obj_tag(v___x_1796_) == 4)
{
lean_object* v_declName_1797_; lean_object* v___x_1798_; 
v_declName_1797_ = lean_ctor_get(v___x_1796_, 0);
lean_inc_n(v_declName_1797_, 2);
lean_dec_ref_known(v___x_1796_, 2);
v___x_1798_ = l_Lean_privateToUserName_x3f(v_declName_1797_);
if (lean_obj_tag(v___x_1798_) == 0)
{
uint8_t v___x_1799_; 
v___x_1799_ = lean_name_eq(v_declName_1797_, v_declName_1764_);
lean_dec(v_declName_1797_);
v___y_1793_ = v___x_1799_;
goto v___jp_1792_;
}
else
{
lean_object* v_val_1800_; uint8_t v___x_1801_; 
lean_dec(v_declName_1797_);
v_val_1800_ = lean_ctor_get(v___x_1798_, 0);
lean_inc(v_val_1800_);
lean_dec_ref_known(v___x_1798_, 1);
v___x_1801_ = lean_name_eq(v_val_1800_, v_declName_1764_);
lean_dec(v_val_1800_);
v___y_1793_ = v___x_1801_;
goto v___jp_1792_;
}
}
else
{
uint8_t v___x_1802_; 
lean_dec_ref(v___x_1796_);
v___x_1802_ = 0;
v___y_1771_ = v___x_1802_;
goto v___jp_1770_;
}
v___jp_1770_:
{
lean_object* v___x_1772_; 
v___x_1772_ = l_Lean_Server_Completion_unfoldDefinitionGuarded_x3f(v_e_1763_, v_a_1765_, v_a_1766_, v_a_1767_, v_a_1768_);
if (lean_obj_tag(v___x_1772_) == 0)
{
lean_object* v_a_1773_; lean_object* v___x_1775_; uint8_t v_isShared_1776_; uint8_t v_isSharedCheck_1783_; 
v_a_1773_ = lean_ctor_get(v___x_1772_, 0);
v_isSharedCheck_1783_ = !lean_is_exclusive(v___x_1772_);
if (v_isSharedCheck_1783_ == 0)
{
v___x_1775_ = v___x_1772_;
v_isShared_1776_ = v_isSharedCheck_1783_;
goto v_resetjp_1774_;
}
else
{
lean_inc(v_a_1773_);
lean_dec(v___x_1772_);
v___x_1775_ = lean_box(0);
v_isShared_1776_ = v_isSharedCheck_1783_;
goto v_resetjp_1774_;
}
v_resetjp_1774_:
{
if (lean_obj_tag(v_a_1773_) == 1)
{
lean_object* v_val_1777_; 
lean_del_object(v___x_1775_);
v_val_1777_ = lean_ctor_get(v_a_1773_, 0);
lean_inc(v_val_1777_);
lean_dec_ref_known(v_a_1773_, 1);
v_e_1763_ = v_val_1777_;
goto _start;
}
else
{
lean_object* v___x_1779_; lean_object* v___x_1781_; 
lean_dec(v_a_1773_);
v___x_1779_ = lean_box(v___y_1771_);
if (v_isShared_1776_ == 0)
{
lean_ctor_set(v___x_1775_, 0, v___x_1779_);
v___x_1781_ = v___x_1775_;
goto v_reusejp_1780_;
}
else
{
lean_object* v_reuseFailAlloc_1782_; 
v_reuseFailAlloc_1782_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1782_, 0, v___x_1779_);
v___x_1781_ = v_reuseFailAlloc_1782_;
goto v_reusejp_1780_;
}
v_reusejp_1780_:
{
return v___x_1781_;
}
}
}
}
else
{
lean_object* v_a_1784_; lean_object* v___x_1786_; uint8_t v_isShared_1787_; uint8_t v_isSharedCheck_1791_; 
v_a_1784_ = lean_ctor_get(v___x_1772_, 0);
v_isSharedCheck_1791_ = !lean_is_exclusive(v___x_1772_);
if (v_isSharedCheck_1791_ == 0)
{
v___x_1786_ = v___x_1772_;
v_isShared_1787_ = v_isSharedCheck_1791_;
goto v_resetjp_1785_;
}
else
{
lean_inc(v_a_1784_);
lean_dec(v___x_1772_);
v___x_1786_ = lean_box(0);
v_isShared_1787_ = v_isSharedCheck_1791_;
goto v_resetjp_1785_;
}
v_resetjp_1785_:
{
lean_object* v___x_1789_; 
if (v_isShared_1787_ == 0)
{
v___x_1789_ = v___x_1786_;
goto v_reusejp_1788_;
}
else
{
lean_object* v_reuseFailAlloc_1790_; 
v_reuseFailAlloc_1790_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1790_, 0, v_a_1784_);
v___x_1789_ = v_reuseFailAlloc_1790_;
goto v_reusejp_1788_;
}
v_reusejp_1788_:
{
return v___x_1789_;
}
}
}
}
v___jp_1792_:
{
if (v___y_1793_ == 0)
{
v___y_1771_ = v___y_1793_;
goto v___jp_1770_;
}
else
{
lean_object* v___x_1794_; lean_object* v___x_1795_; 
lean_dec_ref(v_e_1763_);
v___x_1794_ = lean_box(v___y_1793_);
v___x_1795_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1795_, 0, v___x_1794_);
return v___x_1795_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDefEqToAppOf___boxed(lean_object* v_e_1803_, lean_object* v_declName_1804_, lean_object* v_a_1805_, lean_object* v_a_1806_, lean_object* v_a_1807_, lean_object* v_a_1808_, lean_object* v_a_1809_){
_start:
{
lean_object* v_res_1810_; 
v_res_1810_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDefEqToAppOf(v_e_1803_, v_declName_1804_, v_a_1805_, v_a_1806_, v_a_1807_, v_a_1808_);
lean_dec(v_a_1808_);
lean_dec_ref(v_a_1807_);
lean_dec(v_a_1806_);
lean_dec_ref(v_a_1805_);
lean_dec(v_declName_1804_);
return v_res_1810_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotCompletionMethod_spec__1___redArg___lam__0(lean_object* v_k_1811_, lean_object* v_b_1812_, lean_object* v_c_1813_, lean_object* v___y_1814_, lean_object* v___y_1815_, lean_object* v___y_1816_, lean_object* v___y_1817_){
_start:
{
lean_object* v___x_1819_; 
lean_inc(v___y_1817_);
lean_inc_ref(v___y_1816_);
lean_inc(v___y_1815_);
lean_inc_ref(v___y_1814_);
v___x_1819_ = lean_apply_7(v_k_1811_, v_b_1812_, v_c_1813_, v___y_1814_, v___y_1815_, v___y_1816_, v___y_1817_, lean_box(0));
return v___x_1819_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotCompletionMethod_spec__1___redArg___lam__0___boxed(lean_object* v_k_1820_, lean_object* v_b_1821_, lean_object* v_c_1822_, lean_object* v___y_1823_, lean_object* v___y_1824_, lean_object* v___y_1825_, lean_object* v___y_1826_, lean_object* v___y_1827_){
_start:
{
lean_object* v_res_1828_; 
v_res_1828_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotCompletionMethod_spec__1___redArg___lam__0(v_k_1820_, v_b_1821_, v_c_1822_, v___y_1823_, v___y_1824_, v___y_1825_, v___y_1826_);
lean_dec(v___y_1826_);
lean_dec_ref(v___y_1825_);
lean_dec(v___y_1824_);
lean_dec_ref(v___y_1823_);
return v_res_1828_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotCompletionMethod_spec__1___redArg(lean_object* v_type_1829_, lean_object* v_k_1830_, uint8_t v_cleanupAnnotations_1831_, uint8_t v_whnfType_1832_, lean_object* v___y_1833_, lean_object* v___y_1834_, lean_object* v___y_1835_, lean_object* v___y_1836_){
_start:
{
lean_object* v___f_1838_; lean_object* v___x_1839_; 
v___f_1838_ = lean_alloc_closure((void*)(l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotCompletionMethod_spec__1___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_1838_, 0, v_k_1830_);
v___x_1839_ = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingImp(lean_box(0), v_type_1829_, v___f_1838_, v_cleanupAnnotations_1831_, v_whnfType_1832_, v___y_1833_, v___y_1834_, v___y_1835_, v___y_1836_);
if (lean_obj_tag(v___x_1839_) == 0)
{
lean_object* v_a_1840_; lean_object* v___x_1842_; uint8_t v_isShared_1843_; uint8_t v_isSharedCheck_1847_; 
v_a_1840_ = lean_ctor_get(v___x_1839_, 0);
v_isSharedCheck_1847_ = !lean_is_exclusive(v___x_1839_);
if (v_isSharedCheck_1847_ == 0)
{
v___x_1842_ = v___x_1839_;
v_isShared_1843_ = v_isSharedCheck_1847_;
goto v_resetjp_1841_;
}
else
{
lean_inc(v_a_1840_);
lean_dec(v___x_1839_);
v___x_1842_ = lean_box(0);
v_isShared_1843_ = v_isSharedCheck_1847_;
goto v_resetjp_1841_;
}
v_resetjp_1841_:
{
lean_object* v___x_1845_; 
if (v_isShared_1843_ == 0)
{
v___x_1845_ = v___x_1842_;
goto v_reusejp_1844_;
}
else
{
lean_object* v_reuseFailAlloc_1846_; 
v_reuseFailAlloc_1846_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1846_, 0, v_a_1840_);
v___x_1845_ = v_reuseFailAlloc_1846_;
goto v_reusejp_1844_;
}
v_reusejp_1844_:
{
return v___x_1845_;
}
}
}
else
{
lean_object* v_a_1848_; lean_object* v___x_1850_; uint8_t v_isShared_1851_; uint8_t v_isSharedCheck_1855_; 
v_a_1848_ = lean_ctor_get(v___x_1839_, 0);
v_isSharedCheck_1855_ = !lean_is_exclusive(v___x_1839_);
if (v_isSharedCheck_1855_ == 0)
{
v___x_1850_ = v___x_1839_;
v_isShared_1851_ = v_isSharedCheck_1855_;
goto v_resetjp_1849_;
}
else
{
lean_inc(v_a_1848_);
lean_dec(v___x_1839_);
v___x_1850_ = lean_box(0);
v_isShared_1851_ = v_isSharedCheck_1855_;
goto v_resetjp_1849_;
}
v_resetjp_1849_:
{
lean_object* v___x_1853_; 
if (v_isShared_1851_ == 0)
{
v___x_1853_ = v___x_1850_;
goto v_reusejp_1852_;
}
else
{
lean_object* v_reuseFailAlloc_1854_; 
v_reuseFailAlloc_1854_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1854_, 0, v_a_1848_);
v___x_1853_ = v_reuseFailAlloc_1854_;
goto v_reusejp_1852_;
}
v_reusejp_1852_:
{
return v___x_1853_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotCompletionMethod_spec__1___redArg___boxed(lean_object* v_type_1856_, lean_object* v_k_1857_, lean_object* v_cleanupAnnotations_1858_, lean_object* v_whnfType_1859_, lean_object* v___y_1860_, lean_object* v___y_1861_, lean_object* v___y_1862_, lean_object* v___y_1863_, lean_object* v___y_1864_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_1865_; uint8_t v_whnfType_boxed_1866_; lean_object* v_res_1867_; 
v_cleanupAnnotations_boxed_1865_ = lean_unbox(v_cleanupAnnotations_1858_);
v_whnfType_boxed_1866_ = lean_unbox(v_whnfType_1859_);
v_res_1867_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotCompletionMethod_spec__1___redArg(v_type_1856_, v_k_1857_, v_cleanupAnnotations_boxed_1865_, v_whnfType_boxed_1866_, v___y_1860_, v___y_1861_, v___y_1862_, v___y_1863_);
lean_dec(v___y_1863_);
lean_dec_ref(v___y_1862_);
lean_dec(v___y_1861_);
lean_dec_ref(v___y_1860_);
return v_res_1867_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotCompletionMethod_spec__1(lean_object* v_00_u03b1_1868_, lean_object* v_type_1869_, lean_object* v_k_1870_, uint8_t v_cleanupAnnotations_1871_, uint8_t v_whnfType_1872_, lean_object* v___y_1873_, lean_object* v___y_1874_, lean_object* v___y_1875_, lean_object* v___y_1876_){
_start:
{
lean_object* v___x_1878_; 
v___x_1878_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotCompletionMethod_spec__1___redArg(v_type_1869_, v_k_1870_, v_cleanupAnnotations_1871_, v_whnfType_1872_, v___y_1873_, v___y_1874_, v___y_1875_, v___y_1876_);
return v___x_1878_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotCompletionMethod_spec__1___boxed(lean_object* v_00_u03b1_1879_, lean_object* v_type_1880_, lean_object* v_k_1881_, lean_object* v_cleanupAnnotations_1882_, lean_object* v_whnfType_1883_, lean_object* v___y_1884_, lean_object* v___y_1885_, lean_object* v___y_1886_, lean_object* v___y_1887_, lean_object* v___y_1888_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_1889_; uint8_t v_whnfType_boxed_1890_; lean_object* v_res_1891_; 
v_cleanupAnnotations_boxed_1889_ = lean_unbox(v_cleanupAnnotations_1882_);
v_whnfType_boxed_1890_ = lean_unbox(v_whnfType_1883_);
v_res_1891_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotCompletionMethod_spec__1(v_00_u03b1_1879_, v_type_1880_, v_k_1881_, v_cleanupAnnotations_boxed_1889_, v_whnfType_boxed_1890_, v___y_1884_, v___y_1885_, v___y_1886_, v___y_1887_);
lean_dec(v___y_1887_);
lean_dec_ref(v___y_1886_);
lean_dec(v___y_1885_);
lean_dec_ref(v___y_1884_);
return v_res_1891_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotCompletionMethod_spec__0(lean_object* v_typeName_1895_, lean_object* v_as_1896_, size_t v_sz_1897_, size_t v_i_1898_, lean_object* v_b_1899_, lean_object* v___y_1900_, lean_object* v___y_1901_, lean_object* v___y_1902_, lean_object* v___y_1903_){
_start:
{
uint8_t v___x_1905_; 
v___x_1905_ = lean_usize_dec_lt(v_i_1898_, v_sz_1897_);
if (v___x_1905_ == 0)
{
lean_object* v___x_1906_; 
v___x_1906_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1906_, 0, v_b_1899_);
return v___x_1906_;
}
else
{
lean_object* v___x_1907_; lean_object* v___x_1908_; lean_object* v_a_1909_; lean_object* v___x_1910_; lean_object* v___x_1911_; 
lean_dec_ref(v_b_1899_);
v___x_1907_ = lean_box(0);
v___x_1908_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotCompletionMethod_spec__0___closed__0));
v_a_1909_ = lean_array_uget_borrowed(v_as_1896_, v_i_1898_);
v___x_1910_ = l_Lean_Expr_fvarId_x21(v_a_1909_);
v___x_1911_ = l_Lean_FVarId_getDecl___redArg(v___x_1910_, v___y_1900_, v___y_1902_, v___y_1903_);
if (lean_obj_tag(v___x_1911_) == 0)
{
lean_object* v_a_1912_; lean_object* v___x_1913_; lean_object* v___x_1914_; lean_object* v___x_1915_; 
v_a_1912_ = lean_ctor_get(v___x_1911_, 0);
lean_inc(v_a_1912_);
lean_dec_ref_known(v___x_1911_, 1);
v___x_1913_ = l_Lean_LocalDecl_type(v_a_1912_);
lean_dec(v_a_1912_);
v___x_1914_ = l_Lean_Expr_consumeMData(v___x_1913_);
lean_dec_ref(v___x_1913_);
v___x_1915_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDefEqToAppOf(v___x_1914_, v_typeName_1895_, v___y_1900_, v___y_1901_, v___y_1902_, v___y_1903_);
if (lean_obj_tag(v___x_1915_) == 0)
{
lean_object* v_a_1916_; lean_object* v___x_1918_; uint8_t v_isShared_1919_; uint8_t v_isSharedCheck_1929_; 
v_a_1916_ = lean_ctor_get(v___x_1915_, 0);
v_isSharedCheck_1929_ = !lean_is_exclusive(v___x_1915_);
if (v_isSharedCheck_1929_ == 0)
{
v___x_1918_ = v___x_1915_;
v_isShared_1919_ = v_isSharedCheck_1929_;
goto v_resetjp_1917_;
}
else
{
lean_inc(v_a_1916_);
lean_dec(v___x_1915_);
v___x_1918_ = lean_box(0);
v_isShared_1919_ = v_isSharedCheck_1929_;
goto v_resetjp_1917_;
}
v_resetjp_1917_:
{
uint8_t v___x_1920_; 
v___x_1920_ = lean_unbox(v_a_1916_);
if (v___x_1920_ == 0)
{
size_t v___x_1921_; size_t v___x_1922_; 
lean_del_object(v___x_1918_);
lean_dec(v_a_1916_);
v___x_1921_ = ((size_t)1ULL);
v___x_1922_ = lean_usize_add(v_i_1898_, v___x_1921_);
v_i_1898_ = v___x_1922_;
v_b_1899_ = v___x_1908_;
goto _start;
}
else
{
lean_object* v___x_1924_; lean_object* v___x_1925_; lean_object* v___x_1927_; 
v___x_1924_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1924_, 0, v_a_1916_);
v___x_1925_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1925_, 0, v___x_1924_);
lean_ctor_set(v___x_1925_, 1, v___x_1907_);
if (v_isShared_1919_ == 0)
{
lean_ctor_set(v___x_1918_, 0, v___x_1925_);
v___x_1927_ = v___x_1918_;
goto v_reusejp_1926_;
}
else
{
lean_object* v_reuseFailAlloc_1928_; 
v_reuseFailAlloc_1928_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1928_, 0, v___x_1925_);
v___x_1927_ = v_reuseFailAlloc_1928_;
goto v_reusejp_1926_;
}
v_reusejp_1926_:
{
return v___x_1927_;
}
}
}
}
else
{
lean_object* v_a_1930_; lean_object* v___x_1932_; uint8_t v_isShared_1933_; uint8_t v_isSharedCheck_1937_; 
v_a_1930_ = lean_ctor_get(v___x_1915_, 0);
v_isSharedCheck_1937_ = !lean_is_exclusive(v___x_1915_);
if (v_isSharedCheck_1937_ == 0)
{
v___x_1932_ = v___x_1915_;
v_isShared_1933_ = v_isSharedCheck_1937_;
goto v_resetjp_1931_;
}
else
{
lean_inc(v_a_1930_);
lean_dec(v___x_1915_);
v___x_1932_ = lean_box(0);
v_isShared_1933_ = v_isSharedCheck_1937_;
goto v_resetjp_1931_;
}
v_resetjp_1931_:
{
lean_object* v___x_1935_; 
if (v_isShared_1933_ == 0)
{
v___x_1935_ = v___x_1932_;
goto v_reusejp_1934_;
}
else
{
lean_object* v_reuseFailAlloc_1936_; 
v_reuseFailAlloc_1936_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1936_, 0, v_a_1930_);
v___x_1935_ = v_reuseFailAlloc_1936_;
goto v_reusejp_1934_;
}
v_reusejp_1934_:
{
return v___x_1935_;
}
}
}
}
else
{
lean_object* v_a_1938_; lean_object* v___x_1940_; uint8_t v_isShared_1941_; uint8_t v_isSharedCheck_1945_; 
v_a_1938_ = lean_ctor_get(v___x_1911_, 0);
v_isSharedCheck_1945_ = !lean_is_exclusive(v___x_1911_);
if (v_isSharedCheck_1945_ == 0)
{
v___x_1940_ = v___x_1911_;
v_isShared_1941_ = v_isSharedCheck_1945_;
goto v_resetjp_1939_;
}
else
{
lean_inc(v_a_1938_);
lean_dec(v___x_1911_);
v___x_1940_ = lean_box(0);
v_isShared_1941_ = v_isSharedCheck_1945_;
goto v_resetjp_1939_;
}
v_resetjp_1939_:
{
lean_object* v___x_1943_; 
if (v_isShared_1941_ == 0)
{
v___x_1943_ = v___x_1940_;
goto v_reusejp_1942_;
}
else
{
lean_object* v_reuseFailAlloc_1944_; 
v_reuseFailAlloc_1944_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1944_, 0, v_a_1938_);
v___x_1943_ = v_reuseFailAlloc_1944_;
goto v_reusejp_1942_;
}
v_reusejp_1942_:
{
return v___x_1943_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotCompletionMethod_spec__0___boxed(lean_object* v_typeName_1946_, lean_object* v_as_1947_, lean_object* v_sz_1948_, lean_object* v_i_1949_, lean_object* v_b_1950_, lean_object* v___y_1951_, lean_object* v___y_1952_, lean_object* v___y_1953_, lean_object* v___y_1954_, lean_object* v___y_1955_){
_start:
{
size_t v_sz_boxed_1956_; size_t v_i_boxed_1957_; lean_object* v_res_1958_; 
v_sz_boxed_1956_ = lean_unbox_usize(v_sz_1948_);
lean_dec(v_sz_1948_);
v_i_boxed_1957_ = lean_unbox_usize(v_i_1949_);
lean_dec(v_i_1949_);
v_res_1958_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotCompletionMethod_spec__0(v_typeName_1946_, v_as_1947_, v_sz_boxed_1956_, v_i_boxed_1957_, v_b_1950_, v___y_1951_, v___y_1952_, v___y_1953_, v___y_1954_);
lean_dec(v___y_1954_);
lean_dec_ref(v___y_1953_);
lean_dec(v___y_1952_);
lean_dec_ref(v___y_1951_);
lean_dec_ref(v_as_1947_);
lean_dec(v_typeName_1946_);
return v_res_1958_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotCompletionMethod___lam__0(lean_object* v_typeName_1959_, lean_object* v_xs_1960_, lean_object* v_x_1961_, lean_object* v___y_1962_, lean_object* v___y_1963_, lean_object* v___y_1964_, lean_object* v___y_1965_){
_start:
{
lean_object* v___x_1967_; size_t v_sz_1968_; size_t v___x_1969_; lean_object* v___x_1970_; 
v___x_1967_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotCompletionMethod_spec__0___closed__0));
v_sz_1968_ = lean_array_size(v_xs_1960_);
v___x_1969_ = ((size_t)0ULL);
v___x_1970_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotCompletionMethod_spec__0(v_typeName_1959_, v_xs_1960_, v_sz_1968_, v___x_1969_, v___x_1967_, v___y_1962_, v___y_1963_, v___y_1964_, v___y_1965_);
if (lean_obj_tag(v___x_1970_) == 0)
{
lean_object* v_a_1971_; lean_object* v___x_1973_; uint8_t v_isShared_1974_; uint8_t v_isSharedCheck_1985_; 
v_a_1971_ = lean_ctor_get(v___x_1970_, 0);
v_isSharedCheck_1985_ = !lean_is_exclusive(v___x_1970_);
if (v_isSharedCheck_1985_ == 0)
{
v___x_1973_ = v___x_1970_;
v_isShared_1974_ = v_isSharedCheck_1985_;
goto v_resetjp_1972_;
}
else
{
lean_inc(v_a_1971_);
lean_dec(v___x_1970_);
v___x_1973_ = lean_box(0);
v_isShared_1974_ = v_isSharedCheck_1985_;
goto v_resetjp_1972_;
}
v_resetjp_1972_:
{
lean_object* v_fst_1975_; 
v_fst_1975_ = lean_ctor_get(v_a_1971_, 0);
lean_inc(v_fst_1975_);
lean_dec(v_a_1971_);
if (lean_obj_tag(v_fst_1975_) == 0)
{
uint8_t v___x_1976_; lean_object* v___x_1977_; lean_object* v___x_1979_; 
v___x_1976_ = 0;
v___x_1977_ = lean_box(v___x_1976_);
if (v_isShared_1974_ == 0)
{
lean_ctor_set(v___x_1973_, 0, v___x_1977_);
v___x_1979_ = v___x_1973_;
goto v_reusejp_1978_;
}
else
{
lean_object* v_reuseFailAlloc_1980_; 
v_reuseFailAlloc_1980_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1980_, 0, v___x_1977_);
v___x_1979_ = v_reuseFailAlloc_1980_;
goto v_reusejp_1978_;
}
v_reusejp_1978_:
{
return v___x_1979_;
}
}
else
{
lean_object* v_val_1981_; lean_object* v___x_1983_; 
v_val_1981_ = lean_ctor_get(v_fst_1975_, 0);
lean_inc(v_val_1981_);
lean_dec_ref_known(v_fst_1975_, 1);
if (v_isShared_1974_ == 0)
{
lean_ctor_set(v___x_1973_, 0, v_val_1981_);
v___x_1983_ = v___x_1973_;
goto v_reusejp_1982_;
}
else
{
lean_object* v_reuseFailAlloc_1984_; 
v_reuseFailAlloc_1984_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1984_, 0, v_val_1981_);
v___x_1983_ = v_reuseFailAlloc_1984_;
goto v_reusejp_1982_;
}
v_reusejp_1982_:
{
return v___x_1983_;
}
}
}
}
else
{
lean_object* v_a_1986_; lean_object* v___x_1988_; uint8_t v_isShared_1989_; uint8_t v_isSharedCheck_1993_; 
v_a_1986_ = lean_ctor_get(v___x_1970_, 0);
v_isSharedCheck_1993_ = !lean_is_exclusive(v___x_1970_);
if (v_isSharedCheck_1993_ == 0)
{
v___x_1988_ = v___x_1970_;
v_isShared_1989_ = v_isSharedCheck_1993_;
goto v_resetjp_1987_;
}
else
{
lean_inc(v_a_1986_);
lean_dec(v___x_1970_);
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
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotCompletionMethod___lam__0___boxed(lean_object* v_typeName_1994_, lean_object* v_xs_1995_, lean_object* v_x_1996_, lean_object* v___y_1997_, lean_object* v___y_1998_, lean_object* v___y_1999_, lean_object* v___y_2000_, lean_object* v___y_2001_){
_start:
{
lean_object* v_res_2002_; 
v_res_2002_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotCompletionMethod___lam__0(v_typeName_1994_, v_xs_1995_, v_x_1996_, v___y_1997_, v___y_1998_, v___y_1999_, v___y_2000_);
lean_dec(v___y_2000_);
lean_dec_ref(v___y_1999_);
lean_dec(v___y_1998_);
lean_dec_ref(v___y_1997_);
lean_dec_ref(v_x_1996_);
lean_dec_ref(v_xs_1995_);
lean_dec(v_typeName_1994_);
return v_res_2002_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotCompletionMethod(lean_object* v_typeName_2003_, lean_object* v_info_2004_, lean_object* v_a_2005_, lean_object* v_a_2006_, lean_object* v_a_2007_, lean_object* v_a_2008_){
_start:
{
lean_object* v___f_2010_; lean_object* v___x_2011_; uint8_t v___x_2012_; lean_object* v___x_2013_; 
v___f_2010_ = lean_alloc_closure((void*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotCompletionMethod___lam__0___boxed), 8, 1);
lean_closure_set(v___f_2010_, 0, v_typeName_2003_);
v___x_2011_ = l_Lean_ConstantInfo_type(v_info_2004_);
v___x_2012_ = 0;
v___x_2013_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotCompletionMethod_spec__1___redArg(v___x_2011_, v___f_2010_, v___x_2012_, v___x_2012_, v_a_2005_, v_a_2006_, v_a_2007_, v_a_2008_);
return v___x_2013_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotCompletionMethod___boxed(lean_object* v_typeName_2014_, lean_object* v_info_2015_, lean_object* v_a_2016_, lean_object* v_a_2017_, lean_object* v_a_2018_, lean_object* v_a_2019_, lean_object* v_a_2020_){
_start:
{
lean_object* v_res_2021_; 
v_res_2021_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotCompletionMethod(v_typeName_2014_, v_info_2015_, v_a_2016_, v_a_2017_, v_a_2018_, v_a_2019_);
lean_dec(v_a_2019_);
lean_dec_ref(v_a_2018_);
lean_dec(v_a_2017_);
lean_dec_ref(v_a_2016_);
lean_dec_ref(v_info_2015_);
return v_res_2021_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotIdCompletionMethod_visit_spec__0___redArg(lean_object* v_e_2022_, lean_object* v___y_2023_){
_start:
{
uint8_t v___x_2025_; 
v___x_2025_ = l_Lean_Expr_hasMVar(v_e_2022_);
if (v___x_2025_ == 0)
{
lean_object* v___x_2026_; 
v___x_2026_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2026_, 0, v_e_2022_);
return v___x_2026_;
}
else
{
lean_object* v___x_2027_; lean_object* v_mctx_2028_; lean_object* v___x_2029_; lean_object* v_fst_2030_; lean_object* v_snd_2031_; lean_object* v___x_2032_; lean_object* v_cache_2033_; lean_object* v_zetaDeltaFVarIds_2034_; lean_object* v_postponed_2035_; lean_object* v_diag_2036_; lean_object* v___x_2038_; uint8_t v_isShared_2039_; uint8_t v_isSharedCheck_2045_; 
v___x_2027_ = lean_st_ref_get(v___y_2023_);
v_mctx_2028_ = lean_ctor_get(v___x_2027_, 0);
lean_inc_ref(v_mctx_2028_);
lean_dec(v___x_2027_);
v___x_2029_ = l_Lean_instantiateMVarsCore(v_mctx_2028_, v_e_2022_);
v_fst_2030_ = lean_ctor_get(v___x_2029_, 0);
lean_inc(v_fst_2030_);
v_snd_2031_ = lean_ctor_get(v___x_2029_, 1);
lean_inc(v_snd_2031_);
lean_dec_ref(v___x_2029_);
v___x_2032_ = lean_st_ref_take(v___y_2023_);
v_cache_2033_ = lean_ctor_get(v___x_2032_, 1);
v_zetaDeltaFVarIds_2034_ = lean_ctor_get(v___x_2032_, 2);
v_postponed_2035_ = lean_ctor_get(v___x_2032_, 3);
v_diag_2036_ = lean_ctor_get(v___x_2032_, 4);
v_isSharedCheck_2045_ = !lean_is_exclusive(v___x_2032_);
if (v_isSharedCheck_2045_ == 0)
{
lean_object* v_unused_2046_; 
v_unused_2046_ = lean_ctor_get(v___x_2032_, 0);
lean_dec(v_unused_2046_);
v___x_2038_ = v___x_2032_;
v_isShared_2039_ = v_isSharedCheck_2045_;
goto v_resetjp_2037_;
}
else
{
lean_inc(v_diag_2036_);
lean_inc(v_postponed_2035_);
lean_inc(v_zetaDeltaFVarIds_2034_);
lean_inc(v_cache_2033_);
lean_dec(v___x_2032_);
v___x_2038_ = lean_box(0);
v_isShared_2039_ = v_isSharedCheck_2045_;
goto v_resetjp_2037_;
}
v_resetjp_2037_:
{
lean_object* v___x_2041_; 
if (v_isShared_2039_ == 0)
{
lean_ctor_set(v___x_2038_, 0, v_snd_2031_);
v___x_2041_ = v___x_2038_;
goto v_reusejp_2040_;
}
else
{
lean_object* v_reuseFailAlloc_2044_; 
v_reuseFailAlloc_2044_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2044_, 0, v_snd_2031_);
lean_ctor_set(v_reuseFailAlloc_2044_, 1, v_cache_2033_);
lean_ctor_set(v_reuseFailAlloc_2044_, 2, v_zetaDeltaFVarIds_2034_);
lean_ctor_set(v_reuseFailAlloc_2044_, 3, v_postponed_2035_);
lean_ctor_set(v_reuseFailAlloc_2044_, 4, v_diag_2036_);
v___x_2041_ = v_reuseFailAlloc_2044_;
goto v_reusejp_2040_;
}
v_reusejp_2040_:
{
lean_object* v___x_2042_; lean_object* v___x_2043_; 
v___x_2042_ = lean_st_ref_put(v___y_2023_, v___x_2041_);
v___x_2043_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2043_, 0, v_fst_2030_);
return v___x_2043_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotIdCompletionMethod_visit_spec__0___redArg___boxed(lean_object* v_e_2047_, lean_object* v___y_2048_, lean_object* v___y_2049_){
_start:
{
lean_object* v_res_2050_; 
v_res_2050_ = l_Lean_instantiateMVars___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotIdCompletionMethod_visit_spec__0___redArg(v_e_2047_, v___y_2048_);
lean_dec(v___y_2048_);
return v_res_2050_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotIdCompletionMethod_visit_spec__0(lean_object* v_e_2051_, lean_object* v___y_2052_, lean_object* v___y_2053_, lean_object* v___y_2054_, lean_object* v___y_2055_){
_start:
{
lean_object* v___x_2057_; 
v___x_2057_ = l_Lean_instantiateMVars___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotIdCompletionMethod_visit_spec__0___redArg(v_e_2051_, v___y_2053_);
return v___x_2057_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotIdCompletionMethod_visit_spec__0___boxed(lean_object* v_e_2058_, lean_object* v___y_2059_, lean_object* v___y_2060_, lean_object* v___y_2061_, lean_object* v___y_2062_, lean_object* v___y_2063_){
_start:
{
lean_object* v_res_2064_; 
v_res_2064_ = l_Lean_instantiateMVars___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotIdCompletionMethod_visit_spec__0(v_e_2058_, v___y_2059_, v___y_2060_, v___y_2061_, v___y_2062_);
lean_dec(v___y_2062_);
lean_dec_ref(v___y_2061_);
lean_dec(v___y_2060_);
lean_dec_ref(v___y_2059_);
return v_res_2064_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotIdCompletionMethod_visit_spec__1___redArg(lean_object* v_type_2065_, lean_object* v_k_2066_, uint8_t v_cleanupAnnotations_2067_, lean_object* v___y_2068_, lean_object* v___y_2069_, lean_object* v___y_2070_, lean_object* v___y_2071_){
_start:
{
lean_object* v___f_2073_; uint8_t v___x_2074_; lean_object* v___x_2075_; lean_object* v___x_2076_; 
v___f_2073_ = lean_alloc_closure((void*)(l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotCompletionMethod_spec__1___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_2073_, 0, v_k_2066_);
v___x_2074_ = 0;
v___x_2075_ = lean_box(0);
v___x_2076_ = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAuxAux(lean_box(0), v___x_2074_, v___x_2075_, v_type_2065_, v___f_2073_, v_cleanupAnnotations_2067_, v___x_2074_, v___y_2068_, v___y_2069_, v___y_2070_, v___y_2071_);
if (lean_obj_tag(v___x_2076_) == 0)
{
lean_object* v_a_2077_; lean_object* v___x_2079_; uint8_t v_isShared_2080_; uint8_t v_isSharedCheck_2084_; 
v_a_2077_ = lean_ctor_get(v___x_2076_, 0);
v_isSharedCheck_2084_ = !lean_is_exclusive(v___x_2076_);
if (v_isSharedCheck_2084_ == 0)
{
v___x_2079_ = v___x_2076_;
v_isShared_2080_ = v_isSharedCheck_2084_;
goto v_resetjp_2078_;
}
else
{
lean_inc(v_a_2077_);
lean_dec(v___x_2076_);
v___x_2079_ = lean_box(0);
v_isShared_2080_ = v_isSharedCheck_2084_;
goto v_resetjp_2078_;
}
v_resetjp_2078_:
{
lean_object* v___x_2082_; 
if (v_isShared_2080_ == 0)
{
v___x_2082_ = v___x_2079_;
goto v_reusejp_2081_;
}
else
{
lean_object* v_reuseFailAlloc_2083_; 
v_reuseFailAlloc_2083_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2083_, 0, v_a_2077_);
v___x_2082_ = v_reuseFailAlloc_2083_;
goto v_reusejp_2081_;
}
v_reusejp_2081_:
{
return v___x_2082_;
}
}
}
else
{
lean_object* v_a_2085_; lean_object* v___x_2087_; uint8_t v_isShared_2088_; uint8_t v_isSharedCheck_2092_; 
v_a_2085_ = lean_ctor_get(v___x_2076_, 0);
v_isSharedCheck_2092_ = !lean_is_exclusive(v___x_2076_);
if (v_isSharedCheck_2092_ == 0)
{
v___x_2087_ = v___x_2076_;
v_isShared_2088_ = v_isSharedCheck_2092_;
goto v_resetjp_2086_;
}
else
{
lean_inc(v_a_2085_);
lean_dec(v___x_2076_);
v___x_2087_ = lean_box(0);
v_isShared_2088_ = v_isSharedCheck_2092_;
goto v_resetjp_2086_;
}
v_resetjp_2086_:
{
lean_object* v___x_2090_; 
if (v_isShared_2088_ == 0)
{
v___x_2090_ = v___x_2087_;
goto v_reusejp_2089_;
}
else
{
lean_object* v_reuseFailAlloc_2091_; 
v_reuseFailAlloc_2091_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2091_, 0, v_a_2085_);
v___x_2090_ = v_reuseFailAlloc_2091_;
goto v_reusejp_2089_;
}
v_reusejp_2089_:
{
return v___x_2090_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotIdCompletionMethod_visit_spec__1___redArg___boxed(lean_object* v_type_2093_, lean_object* v_k_2094_, lean_object* v_cleanupAnnotations_2095_, lean_object* v___y_2096_, lean_object* v___y_2097_, lean_object* v___y_2098_, lean_object* v___y_2099_, lean_object* v___y_2100_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_2101_; lean_object* v_res_2102_; 
v_cleanupAnnotations_boxed_2101_ = lean_unbox(v_cleanupAnnotations_2095_);
v_res_2102_ = l_Lean_Meta_forallTelescope___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotIdCompletionMethod_visit_spec__1___redArg(v_type_2093_, v_k_2094_, v_cleanupAnnotations_boxed_2101_, v___y_2096_, v___y_2097_, v___y_2098_, v___y_2099_);
lean_dec(v___y_2099_);
lean_dec_ref(v___y_2098_);
lean_dec(v___y_2097_);
lean_dec_ref(v___y_2096_);
return v_res_2102_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotIdCompletionMethod_visit_spec__1(lean_object* v_00_u03b1_2103_, lean_object* v_type_2104_, lean_object* v_k_2105_, uint8_t v_cleanupAnnotations_2106_, lean_object* v___y_2107_, lean_object* v___y_2108_, lean_object* v___y_2109_, lean_object* v___y_2110_){
_start:
{
lean_object* v___x_2112_; 
v___x_2112_ = l_Lean_Meta_forallTelescope___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotIdCompletionMethod_visit_spec__1___redArg(v_type_2104_, v_k_2105_, v_cleanupAnnotations_2106_, v___y_2107_, v___y_2108_, v___y_2109_, v___y_2110_);
return v___x_2112_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotIdCompletionMethod_visit_spec__1___boxed(lean_object* v_00_u03b1_2113_, lean_object* v_type_2114_, lean_object* v_k_2115_, lean_object* v_cleanupAnnotations_2116_, lean_object* v___y_2117_, lean_object* v___y_2118_, lean_object* v___y_2119_, lean_object* v___y_2120_, lean_object* v___y_2121_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_2122_; lean_object* v_res_2123_; 
v_cleanupAnnotations_boxed_2122_ = lean_unbox(v_cleanupAnnotations_2116_);
v_res_2123_ = l_Lean_Meta_forallTelescope___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotIdCompletionMethod_visit_spec__1(v_00_u03b1_2113_, v_type_2114_, v_k_2115_, v_cleanupAnnotations_boxed_2122_, v___y_2117_, v___y_2118_, v___y_2119_, v___y_2120_);
lean_dec(v___y_2120_);
lean_dec_ref(v___y_2119_);
lean_dec(v___y_2118_);
lean_dec_ref(v___y_2117_);
return v_res_2123_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotIdCompletionMethod_visit___lam__0___boxed(lean_object* v_typeNameSet_2124_, lean_object* v_x_2125_, lean_object* v_type_2126_, lean_object* v___y_2127_, lean_object* v___y_2128_, lean_object* v___y_2129_, lean_object* v___y_2130_, lean_object* v___y_2131_){
_start:
{
lean_object* v_res_2132_; 
v_res_2132_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotIdCompletionMethod_visit___lam__0(v_typeNameSet_2124_, v_x_2125_, v_type_2126_, v___y_2127_, v___y_2128_, v___y_2129_, v___y_2130_);
lean_dec(v___y_2130_);
lean_dec_ref(v___y_2129_);
lean_dec(v___y_2128_);
lean_dec_ref(v___y_2127_);
lean_dec_ref(v_x_2125_);
return v_res_2132_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotIdCompletionMethod_visit(lean_object* v_typeNameSet_2133_, lean_object* v_type_2134_, lean_object* v_a_2135_, lean_object* v_a_2136_, lean_object* v_a_2137_, lean_object* v_a_2138_){
_start:
{
lean_object* v___f_2140_; lean_object* v_a_2142_; lean_object* v___y_2193_; lean_object* v___x_2203_; 
lean_inc(v_typeNameSet_2133_);
v___f_2140_ = lean_alloc_closure((void*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotIdCompletionMethod_visit___lam__0___boxed), 8, 1);
lean_closure_set(v___f_2140_, 0, v_typeNameSet_2133_);
lean_inc_ref(v_type_2134_);
v___x_2203_ = l_Lean_Meta_whnfCoreUnfoldingAnnotations(v_type_2134_, v_a_2135_, v_a_2136_, v_a_2137_, v_a_2138_);
if (lean_obj_tag(v___x_2203_) == 0)
{
lean_dec_ref(v_type_2134_);
v___y_2193_ = v___x_2203_;
goto v___jp_2192_;
}
else
{
lean_object* v_a_2204_; uint8_t v___y_2206_; uint8_t v___x_2207_; 
v_a_2204_ = lean_ctor_get(v___x_2203_, 0);
lean_inc(v_a_2204_);
v___x_2207_ = l_Lean_Exception_isInterrupt(v_a_2204_);
if (v___x_2207_ == 0)
{
uint8_t v___x_2208_; 
v___x_2208_ = l_Lean_Exception_isRuntime(v_a_2204_);
v___y_2206_ = v___x_2208_;
goto v___jp_2205_;
}
else
{
lean_dec(v_a_2204_);
v___y_2206_ = v___x_2207_;
goto v___jp_2205_;
}
v___jp_2205_:
{
if (v___y_2206_ == 0)
{
lean_dec_ref_known(v___x_2203_, 1);
v_a_2142_ = v_type_2134_;
goto v___jp_2141_;
}
else
{
lean_dec_ref(v_type_2134_);
v___y_2193_ = v___x_2203_;
goto v___jp_2192_;
}
}
}
v___jp_2141_:
{
uint8_t v___x_2143_; 
v___x_2143_ = l_Lean_Expr_isForall(v_a_2142_);
if (v___x_2143_ == 0)
{
uint8_t v___x_2144_; lean_object* v___x_2145_; 
lean_dec_ref(v___f_2140_);
v___x_2144_ = 1;
v___x_2145_ = l_Lean_instantiateMVars___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotIdCompletionMethod_visit_spec__0___redArg(v_a_2142_, v_a_2136_);
if (lean_obj_tag(v___x_2145_) == 0)
{
lean_object* v_a_2146_; lean_object* v___x_2148_; uint8_t v_isShared_2149_; uint8_t v_isSharedCheck_2181_; 
v_a_2146_ = lean_ctor_get(v___x_2145_, 0);
v_isSharedCheck_2181_ = !lean_is_exclusive(v___x_2145_);
if (v_isSharedCheck_2181_ == 0)
{
v___x_2148_ = v___x_2145_;
v_isShared_2149_ = v_isSharedCheck_2181_;
goto v_resetjp_2147_;
}
else
{
lean_inc(v_a_2146_);
lean_dec(v___x_2145_);
v___x_2148_ = lean_box(0);
v_isShared_2149_ = v_isSharedCheck_2181_;
goto v_resetjp_2147_;
}
v_resetjp_2147_:
{
lean_object* v___x_2150_; 
v___x_2150_ = l_Lean_Expr_getAppFn(v_a_2146_);
if (lean_obj_tag(v___x_2150_) == 4)
{
lean_object* v_declName_2151_; uint8_t v___x_2152_; 
v_declName_2151_ = lean_ctor_get(v___x_2150_, 0);
lean_inc(v_declName_2151_);
lean_dec_ref_known(v___x_2150_, 2);
lean_inc(v_typeNameSet_2133_);
v___x_2152_ = l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_getDotCompletionTypeNameSet_spec__0___redArg(v_declName_2151_, v_typeNameSet_2133_);
if (v___x_2152_ == 0)
{
lean_object* v___x_2153_; 
lean_del_object(v___x_2148_);
v___x_2153_ = l_Lean_Server_Completion_unfoldDefinitionGuarded_x3f(v_a_2146_, v_a_2135_, v_a_2136_, v_a_2137_, v_a_2138_);
if (lean_obj_tag(v___x_2153_) == 0)
{
lean_object* v_a_2154_; lean_object* v___x_2156_; uint8_t v_isShared_2157_; uint8_t v_isSharedCheck_2164_; 
v_a_2154_ = lean_ctor_get(v___x_2153_, 0);
v_isSharedCheck_2164_ = !lean_is_exclusive(v___x_2153_);
if (v_isSharedCheck_2164_ == 0)
{
v___x_2156_ = v___x_2153_;
v_isShared_2157_ = v_isSharedCheck_2164_;
goto v_resetjp_2155_;
}
else
{
lean_inc(v_a_2154_);
lean_dec(v___x_2153_);
v___x_2156_ = lean_box(0);
v_isShared_2157_ = v_isSharedCheck_2164_;
goto v_resetjp_2155_;
}
v_resetjp_2155_:
{
if (lean_obj_tag(v_a_2154_) == 1)
{
lean_object* v_val_2158_; 
lean_del_object(v___x_2156_);
v_val_2158_ = lean_ctor_get(v_a_2154_, 0);
lean_inc(v_val_2158_);
lean_dec_ref_known(v_a_2154_, 1);
v_type_2134_ = v_val_2158_;
goto _start;
}
else
{
lean_object* v___x_2160_; lean_object* v___x_2162_; 
lean_dec(v_a_2154_);
lean_dec(v_typeNameSet_2133_);
v___x_2160_ = lean_box(v___x_2152_);
if (v_isShared_2157_ == 0)
{
lean_ctor_set(v___x_2156_, 0, v___x_2160_);
v___x_2162_ = v___x_2156_;
goto v_reusejp_2161_;
}
else
{
lean_object* v_reuseFailAlloc_2163_; 
v_reuseFailAlloc_2163_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2163_, 0, v___x_2160_);
v___x_2162_ = v_reuseFailAlloc_2163_;
goto v_reusejp_2161_;
}
v_reusejp_2161_:
{
return v___x_2162_;
}
}
}
}
else
{
lean_object* v_a_2165_; lean_object* v___x_2167_; uint8_t v_isShared_2168_; uint8_t v_isSharedCheck_2172_; 
lean_dec(v_typeNameSet_2133_);
v_a_2165_ = lean_ctor_get(v___x_2153_, 0);
v_isSharedCheck_2172_ = !lean_is_exclusive(v___x_2153_);
if (v_isSharedCheck_2172_ == 0)
{
v___x_2167_ = v___x_2153_;
v_isShared_2168_ = v_isSharedCheck_2172_;
goto v_resetjp_2166_;
}
else
{
lean_inc(v_a_2165_);
lean_dec(v___x_2153_);
v___x_2167_ = lean_box(0);
v_isShared_2168_ = v_isSharedCheck_2172_;
goto v_resetjp_2166_;
}
v_resetjp_2166_:
{
lean_object* v___x_2170_; 
if (v_isShared_2168_ == 0)
{
v___x_2170_ = v___x_2167_;
goto v_reusejp_2169_;
}
else
{
lean_object* v_reuseFailAlloc_2171_; 
v_reuseFailAlloc_2171_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2171_, 0, v_a_2165_);
v___x_2170_ = v_reuseFailAlloc_2171_;
goto v_reusejp_2169_;
}
v_reusejp_2169_:
{
return v___x_2170_;
}
}
}
}
else
{
lean_object* v___x_2173_; lean_object* v___x_2175_; 
lean_dec(v_a_2146_);
lean_dec(v_typeNameSet_2133_);
v___x_2173_ = lean_box(v___x_2144_);
if (v_isShared_2149_ == 0)
{
lean_ctor_set(v___x_2148_, 0, v___x_2173_);
v___x_2175_ = v___x_2148_;
goto v_reusejp_2174_;
}
else
{
lean_object* v_reuseFailAlloc_2176_; 
v_reuseFailAlloc_2176_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2176_, 0, v___x_2173_);
v___x_2175_ = v_reuseFailAlloc_2176_;
goto v_reusejp_2174_;
}
v_reusejp_2174_:
{
return v___x_2175_;
}
}
}
else
{
lean_object* v___x_2177_; lean_object* v___x_2179_; 
lean_dec_ref(v___x_2150_);
lean_dec(v_a_2146_);
lean_dec(v_typeNameSet_2133_);
v___x_2177_ = lean_box(v___x_2143_);
if (v_isShared_2149_ == 0)
{
lean_ctor_set(v___x_2148_, 0, v___x_2177_);
v___x_2179_ = v___x_2148_;
goto v_reusejp_2178_;
}
else
{
lean_object* v_reuseFailAlloc_2180_; 
v_reuseFailAlloc_2180_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2180_, 0, v___x_2177_);
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
else
{
lean_object* v_a_2182_; lean_object* v___x_2184_; uint8_t v_isShared_2185_; uint8_t v_isSharedCheck_2189_; 
lean_dec(v_typeNameSet_2133_);
v_a_2182_ = lean_ctor_get(v___x_2145_, 0);
v_isSharedCheck_2189_ = !lean_is_exclusive(v___x_2145_);
if (v_isSharedCheck_2189_ == 0)
{
v___x_2184_ = v___x_2145_;
v_isShared_2185_ = v_isSharedCheck_2189_;
goto v_resetjp_2183_;
}
else
{
lean_inc(v_a_2182_);
lean_dec(v___x_2145_);
v___x_2184_ = lean_box(0);
v_isShared_2185_ = v_isSharedCheck_2189_;
goto v_resetjp_2183_;
}
v_resetjp_2183_:
{
lean_object* v___x_2187_; 
if (v_isShared_2185_ == 0)
{
v___x_2187_ = v___x_2184_;
goto v_reusejp_2186_;
}
else
{
lean_object* v_reuseFailAlloc_2188_; 
v_reuseFailAlloc_2188_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2188_, 0, v_a_2182_);
v___x_2187_ = v_reuseFailAlloc_2188_;
goto v_reusejp_2186_;
}
v_reusejp_2186_:
{
return v___x_2187_;
}
}
}
}
else
{
uint8_t v___x_2190_; lean_object* v___x_2191_; 
lean_dec(v_typeNameSet_2133_);
v___x_2190_ = 0;
v___x_2191_ = l_Lean_Meta_forallTelescope___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotIdCompletionMethod_visit_spec__1___redArg(v_a_2142_, v___f_2140_, v___x_2190_, v_a_2135_, v_a_2136_, v_a_2137_, v_a_2138_);
return v___x_2191_;
}
}
v___jp_2192_:
{
if (lean_obj_tag(v___y_2193_) == 0)
{
lean_object* v_a_2194_; 
v_a_2194_ = lean_ctor_get(v___y_2193_, 0);
lean_inc(v_a_2194_);
lean_dec_ref_known(v___y_2193_, 1);
v_a_2142_ = v_a_2194_;
goto v___jp_2141_;
}
else
{
lean_object* v_a_2195_; lean_object* v___x_2197_; uint8_t v_isShared_2198_; uint8_t v_isSharedCheck_2202_; 
lean_dec_ref(v___f_2140_);
lean_dec(v_typeNameSet_2133_);
v_a_2195_ = lean_ctor_get(v___y_2193_, 0);
v_isSharedCheck_2202_ = !lean_is_exclusive(v___y_2193_);
if (v_isSharedCheck_2202_ == 0)
{
v___x_2197_ = v___y_2193_;
v_isShared_2198_ = v_isSharedCheck_2202_;
goto v_resetjp_2196_;
}
else
{
lean_inc(v_a_2195_);
lean_dec(v___y_2193_);
v___x_2197_ = lean_box(0);
v_isShared_2198_ = v_isSharedCheck_2202_;
goto v_resetjp_2196_;
}
v_resetjp_2196_:
{
lean_object* v___x_2200_; 
if (v_isShared_2198_ == 0)
{
v___x_2200_ = v___x_2197_;
goto v_reusejp_2199_;
}
else
{
lean_object* v_reuseFailAlloc_2201_; 
v_reuseFailAlloc_2201_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2201_, 0, v_a_2195_);
v___x_2200_ = v_reuseFailAlloc_2201_;
goto v_reusejp_2199_;
}
v_reusejp_2199_:
{
return v___x_2200_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotIdCompletionMethod_visit___lam__0(lean_object* v_typeNameSet_2209_, lean_object* v_x_2210_, lean_object* v_type_2211_, lean_object* v___y_2212_, lean_object* v___y_2213_, lean_object* v___y_2214_, lean_object* v___y_2215_){
_start:
{
lean_object* v___x_2217_; 
v___x_2217_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotIdCompletionMethod_visit(v_typeNameSet_2209_, v_type_2211_, v___y_2212_, v___y_2213_, v___y_2214_, v___y_2215_);
return v___x_2217_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotIdCompletionMethod_visit___boxed(lean_object* v_typeNameSet_2218_, lean_object* v_type_2219_, lean_object* v_a_2220_, lean_object* v_a_2221_, lean_object* v_a_2222_, lean_object* v_a_2223_, lean_object* v_a_2224_){
_start:
{
lean_object* v_res_2225_; 
v_res_2225_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotIdCompletionMethod_visit(v_typeNameSet_2218_, v_type_2219_, v_a_2220_, v_a_2221_, v_a_2222_, v_a_2223_);
lean_dec(v_a_2223_);
lean_dec_ref(v_a_2222_);
lean_dec(v_a_2221_);
lean_dec_ref(v_a_2220_);
return v_res_2225_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotIdCompletionMethod(lean_object* v_typeNameSet_2226_, lean_object* v_info_2227_, lean_object* v_a_2228_, lean_object* v_a_2229_, lean_object* v_a_2230_, lean_object* v_a_2231_){
_start:
{
lean_object* v___x_2233_; lean_object* v___x_2234_; 
v___x_2233_ = l_Lean_ConstantInfo_type(v_info_2227_);
v___x_2234_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotIdCompletionMethod_visit(v_typeNameSet_2226_, v___x_2233_, v_a_2228_, v_a_2229_, v_a_2230_, v_a_2231_);
return v___x_2234_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotIdCompletionMethod___boxed(lean_object* v_typeNameSet_2235_, lean_object* v_info_2236_, lean_object* v_a_2237_, lean_object* v_a_2238_, lean_object* v_a_2239_, lean_object* v_a_2240_, lean_object* v_a_2241_){
_start:
{
lean_object* v_res_2242_; 
v_res_2242_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotIdCompletionMethod(v_typeNameSet_2235_, v_info_2236_, v_a_2237_, v_a_2238_, v_a_2239_, v_a_2240_);
lean_dec(v_a_2240_);
lean_dec_ref(v_a_2239_);
lean_dec(v_a_2238_);
lean_dec_ref(v_a_2237_);
lean_dec_ref(v_info_2236_);
return v_res_2242_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_searchAlias(lean_object* v_matchAlias_2243_, lean_object* v_addAlias_2244_, lean_object* v_alias_2245_, lean_object* v_declNames_2246_, lean_object* v_ns_2247_, lean_object* v_a_2248_, lean_object* v_a_2249_, lean_object* v_a_2250_, lean_object* v_a_2251_, lean_object* v_a_2252_, lean_object* v_a_2253_, lean_object* v_a_2254_){
_start:
{
lean_object* v___x_2256_; uint8_t v___x_2257_; 
lean_inc_ref(v_matchAlias_2243_);
lean_inc(v_alias_2245_);
lean_inc(v_ns_2247_);
v___x_2256_ = lean_apply_2(v_matchAlias_2243_, v_ns_2247_, v_alias_2245_);
v___x_2257_ = lean_unbox(v___x_2256_);
if (v___x_2257_ == 0)
{
if (lean_obj_tag(v_ns_2247_) == 1)
{
lean_object* v_pre_2258_; 
v_pre_2258_ = lean_ctor_get(v_ns_2247_, 0);
lean_inc(v_pre_2258_);
lean_dec_ref_known(v_ns_2247_, 2);
v_ns_2247_ = v_pre_2258_;
goto _start;
}
else
{
lean_object* v___x_2260_; lean_object* v___x_2261_; 
lean_dec(v_ns_2247_);
lean_dec(v_declNames_2246_);
lean_dec(v_alias_2245_);
lean_dec_ref(v_addAlias_2244_);
lean_dec_ref(v_matchAlias_2243_);
v___x_2260_ = ((lean_object*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addItem___redArg___closed__0));
v___x_2261_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2261_, 0, v___x_2260_);
return v___x_2261_;
}
}
else
{
lean_object* v___x_2262_; 
lean_dec(v_ns_2247_);
lean_dec_ref(v_matchAlias_2243_);
lean_inc(v_a_2254_);
lean_inc_ref(v_a_2253_);
lean_inc(v_a_2252_);
lean_inc_ref(v_a_2251_);
lean_inc_ref(v_a_2250_);
lean_inc(v_a_2249_);
lean_inc_ref(v_a_2248_);
v___x_2262_ = lean_apply_10(v_addAlias_2244_, v_alias_2245_, v_declNames_2246_, v_a_2248_, v_a_2249_, v_a_2250_, v_a_2251_, v_a_2252_, v_a_2253_, v_a_2254_, lean_box(0));
return v___x_2262_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_searchAlias___boxed(lean_object* v_matchAlias_2263_, lean_object* v_addAlias_2264_, lean_object* v_alias_2265_, lean_object* v_declNames_2266_, lean_object* v_ns_2267_, lean_object* v_a_2268_, lean_object* v_a_2269_, lean_object* v_a_2270_, lean_object* v_a_2271_, lean_object* v_a_2272_, lean_object* v_a_2273_, lean_object* v_a_2274_, lean_object* v_a_2275_){
_start:
{
lean_object* v_res_2276_; 
v_res_2276_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_searchAlias(v_matchAlias_2263_, v_addAlias_2264_, v_alias_2265_, v_declNames_2266_, v_ns_2267_, v_a_2268_, v_a_2269_, v_a_2270_, v_a_2271_, v_a_2272_, v_a_2273_, v_a_2274_);
lean_dec(v_a_2274_);
lean_dec_ref(v_a_2273_);
lean_dec(v_a_2272_);
lean_dec_ref(v_a_2271_);
lean_dec_ref(v_a_2270_);
lean_dec(v_a_2269_);
lean_dec_ref(v_a_2268_);
return v_res_2276_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_CancellableT_checkCancelled___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__1___redArg(lean_object* v_a_2279_){
_start:
{
uint8_t v___x_2281_; 
v___x_2281_ = l_Lean_Server_RequestCancellationToken_wasCancelledByCancelRequest(v_a_2279_);
if (v___x_2281_ == 0)
{
lean_object* v___x_2282_; lean_object* v___x_2283_; 
v___x_2282_ = ((lean_object*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addItem___redArg___closed__0));
v___x_2283_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2283_, 0, v___x_2282_);
return v___x_2283_;
}
else
{
lean_object* v___x_2284_; lean_object* v___x_2285_; 
v___x_2284_ = ((lean_object*)(l_Lean_Server_CancellableT_checkCancelled___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__1___redArg___closed__0));
v___x_2285_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2285_, 0, v___x_2284_);
return v___x_2285_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_CancellableT_checkCancelled___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__1___redArg___boxed(lean_object* v_a_2286_, lean_object* v___y_2287_){
_start:
{
lean_object* v_res_2288_; 
v_res_2288_ = l_Lean_Server_CancellableT_checkCancelled___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__1___redArg(v_a_2286_);
lean_dec_ref(v_a_2286_);
return v_res_2288_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_CancellableT_checkCancelled___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__1(lean_object* v_a_2289_, lean_object* v___y_2290_, lean_object* v___y_2291_, lean_object* v___y_2292_, lean_object* v___y_2293_){
_start:
{
lean_object* v___x_2295_; 
v___x_2295_ = l_Lean_Server_CancellableT_checkCancelled___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__1___redArg(v_a_2289_);
return v___x_2295_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_CancellableT_checkCancelled___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__1___boxed(lean_object* v_a_2296_, lean_object* v___y_2297_, lean_object* v___y_2298_, lean_object* v___y_2299_, lean_object* v___y_2300_, lean_object* v___y_2301_){
_start:
{
lean_object* v_res_2302_; 
v_res_2302_ = l_Lean_Server_CancellableT_checkCancelled___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__1(v_a_2296_, v___y_2297_, v___y_2298_, v___y_2299_, v___y_2300_);
lean_dec(v___y_2300_);
lean_dec_ref(v___y_2299_);
lean_dec(v___y_2298_);
lean_dec_ref(v___y_2297_);
lean_dec_ref(v_a_2296_);
return v_res_2302_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore___lam__0(lean_object* v_ctx_2303_, lean_object* v_id_2304_, uint8_t v_danglingDot_2305_, lean_object* v_declName_2306_, lean_object* v_decl_2307_, lean_object* v___y_2308_, lean_object* v___y_2309_, lean_object* v___y_2310_, lean_object* v___y_2311_, lean_object* v___y_2312_, lean_object* v___y_2313_, lean_object* v___y_2314_){
_start:
{
lean_object* v___x_2316_; 
lean_inc(v_declName_2306_);
v___x_2316_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f(v_ctx_2303_, v_declName_2306_, v_id_2304_, v_danglingDot_2305_, v___y_2308_, v___y_2309_, v___y_2310_, v___y_2311_, v___y_2312_, v___y_2313_, v___y_2314_);
if (lean_obj_tag(v___x_2316_) == 0)
{
lean_object* v_a_2317_; lean_object* v___x_2319_; uint8_t v_isShared_2320_; uint8_t v_isSharedCheck_2369_; 
v_a_2317_ = lean_ctor_get(v___x_2316_, 0);
v_isSharedCheck_2369_ = !lean_is_exclusive(v___x_2316_);
if (v_isSharedCheck_2369_ == 0)
{
v___x_2319_ = v___x_2316_;
v_isShared_2320_ = v_isSharedCheck_2369_;
goto v_resetjp_2318_;
}
else
{
lean_inc(v_a_2317_);
lean_dec(v___x_2316_);
v___x_2319_ = lean_box(0);
v_isShared_2320_ = v_isSharedCheck_2369_;
goto v_resetjp_2318_;
}
v_resetjp_2318_:
{
if (lean_obj_tag(v_a_2317_) == 0)
{
lean_object* v_a_2321_; lean_object* v___x_2323_; uint8_t v_isShared_2324_; uint8_t v_isSharedCheck_2331_; 
lean_dec_ref(v_decl_2307_);
lean_dec(v_declName_2306_);
v_a_2321_ = lean_ctor_get(v_a_2317_, 0);
v_isSharedCheck_2331_ = !lean_is_exclusive(v_a_2317_);
if (v_isSharedCheck_2331_ == 0)
{
v___x_2323_ = v_a_2317_;
v_isShared_2324_ = v_isSharedCheck_2331_;
goto v_resetjp_2322_;
}
else
{
lean_inc(v_a_2321_);
lean_dec(v_a_2317_);
v___x_2323_ = lean_box(0);
v_isShared_2324_ = v_isSharedCheck_2331_;
goto v_resetjp_2322_;
}
v_resetjp_2322_:
{
lean_object* v___x_2326_; 
if (v_isShared_2324_ == 0)
{
v___x_2326_ = v___x_2323_;
goto v_reusejp_2325_;
}
else
{
lean_object* v_reuseFailAlloc_2330_; 
v_reuseFailAlloc_2330_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2330_, 0, v_a_2321_);
v___x_2326_ = v_reuseFailAlloc_2330_;
goto v_reusejp_2325_;
}
v_reusejp_2325_:
{
lean_object* v___x_2328_; 
if (v_isShared_2320_ == 0)
{
lean_ctor_set(v___x_2319_, 0, v___x_2326_);
v___x_2328_ = v___x_2319_;
goto v_reusejp_2327_;
}
else
{
lean_object* v_reuseFailAlloc_2329_; 
v_reuseFailAlloc_2329_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2329_, 0, v___x_2326_);
v___x_2328_ = v_reuseFailAlloc_2329_;
goto v_reusejp_2327_;
}
v_reusejp_2327_:
{
return v___x_2328_;
}
}
}
}
else
{
lean_object* v_a_2332_; 
v_a_2332_ = lean_ctor_get(v_a_2317_, 0);
lean_inc(v_a_2332_);
lean_dec_ref_known(v_a_2317_, 1);
if (lean_obj_tag(v_a_2332_) == 1)
{
lean_object* v_val_2333_; lean_object* v___x_2335_; uint8_t v_isShared_2336_; uint8_t v_isSharedCheck_2364_; 
lean_del_object(v___x_2319_);
v_val_2333_ = lean_ctor_get(v_a_2332_, 0);
v_isSharedCheck_2364_ = !lean_is_exclusive(v_a_2332_);
if (v_isSharedCheck_2364_ == 0)
{
v___x_2335_ = v_a_2332_;
v_isShared_2336_ = v_isSharedCheck_2364_;
goto v_resetjp_2334_;
}
else
{
lean_inc(v_val_2333_);
lean_dec(v_a_2332_);
v___x_2335_ = lean_box(0);
v_isShared_2336_ = v_isSharedCheck_2364_;
goto v_resetjp_2334_;
}
v_resetjp_2334_:
{
lean_object* v_kind_2337_; lean_object* v_tags_2338_; lean_object* v___x_2339_; 
v_kind_2337_ = lean_ctor_get(v_decl_2307_, 1);
lean_inc_ref(v_kind_2337_);
v_tags_2338_ = lean_ctor_get(v_decl_2307_, 2);
lean_inc_ref(v_tags_2338_);
lean_dec_ref(v_decl_2307_);
lean_inc(v___y_2314_);
lean_inc_ref(v___y_2313_);
lean_inc(v___y_2312_);
lean_inc_ref(v___y_2311_);
v___x_2339_ = lean_apply_5(v_kind_2337_, v___y_2311_, v___y_2312_, v___y_2313_, v___y_2314_, lean_box(0));
if (lean_obj_tag(v___x_2339_) == 0)
{
lean_object* v_a_2340_; lean_object* v___x_2341_; 
v_a_2340_ = lean_ctor_get(v___x_2339_, 0);
lean_inc(v_a_2340_);
lean_dec_ref_known(v___x_2339_, 1);
lean_inc(v___y_2314_);
lean_inc_ref(v___y_2313_);
lean_inc(v___y_2312_);
lean_inc_ref(v___y_2311_);
v___x_2341_ = lean_apply_5(v_tags_2338_, v___y_2311_, v___y_2312_, v___y_2313_, v___y_2314_, lean_box(0));
if (lean_obj_tag(v___x_2341_) == 0)
{
lean_object* v_a_2342_; lean_object* v___x_2344_; 
v_a_2342_ = lean_ctor_get(v___x_2341_, 0);
lean_inc(v_a_2342_);
lean_dec_ref_known(v___x_2341_, 1);
if (v_isShared_2336_ == 0)
{
lean_ctor_set_tag(v___x_2335_, 0);
lean_ctor_set(v___x_2335_, 0, v_declName_2306_);
v___x_2344_ = v___x_2335_;
goto v_reusejp_2343_;
}
else
{
lean_object* v_reuseFailAlloc_2347_; 
v_reuseFailAlloc_2347_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2347_, 0, v_declName_2306_);
v___x_2344_ = v_reuseFailAlloc_2347_;
goto v_reusejp_2343_;
}
v_reusejp_2343_:
{
uint8_t v___x_2345_; lean_object* v___x_2346_; 
v___x_2345_ = lean_unbox(v_a_2340_);
lean_dec(v_a_2340_);
v___x_2346_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addUnresolvedCompletionItem___redArg(v_val_2333_, v___x_2344_, v___x_2345_, v_a_2342_, v___y_2308_, v___y_2309_);
return v___x_2346_;
}
}
else
{
lean_object* v_a_2348_; lean_object* v___x_2350_; uint8_t v_isShared_2351_; uint8_t v_isSharedCheck_2355_; 
lean_dec(v_a_2340_);
lean_del_object(v___x_2335_);
lean_dec(v_val_2333_);
lean_dec(v_declName_2306_);
v_a_2348_ = lean_ctor_get(v___x_2341_, 0);
v_isSharedCheck_2355_ = !lean_is_exclusive(v___x_2341_);
if (v_isSharedCheck_2355_ == 0)
{
v___x_2350_ = v___x_2341_;
v_isShared_2351_ = v_isSharedCheck_2355_;
goto v_resetjp_2349_;
}
else
{
lean_inc(v_a_2348_);
lean_dec(v___x_2341_);
v___x_2350_ = lean_box(0);
v_isShared_2351_ = v_isSharedCheck_2355_;
goto v_resetjp_2349_;
}
v_resetjp_2349_:
{
lean_object* v___x_2353_; 
if (v_isShared_2351_ == 0)
{
v___x_2353_ = v___x_2350_;
goto v_reusejp_2352_;
}
else
{
lean_object* v_reuseFailAlloc_2354_; 
v_reuseFailAlloc_2354_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2354_, 0, v_a_2348_);
v___x_2353_ = v_reuseFailAlloc_2354_;
goto v_reusejp_2352_;
}
v_reusejp_2352_:
{
return v___x_2353_;
}
}
}
}
else
{
lean_object* v_a_2356_; lean_object* v___x_2358_; uint8_t v_isShared_2359_; uint8_t v_isSharedCheck_2363_; 
lean_dec_ref(v_tags_2338_);
lean_del_object(v___x_2335_);
lean_dec(v_val_2333_);
lean_dec(v_declName_2306_);
v_a_2356_ = lean_ctor_get(v___x_2339_, 0);
v_isSharedCheck_2363_ = !lean_is_exclusive(v___x_2339_);
if (v_isSharedCheck_2363_ == 0)
{
v___x_2358_ = v___x_2339_;
v_isShared_2359_ = v_isSharedCheck_2363_;
goto v_resetjp_2357_;
}
else
{
lean_inc(v_a_2356_);
lean_dec(v___x_2339_);
v___x_2358_ = lean_box(0);
v_isShared_2359_ = v_isSharedCheck_2363_;
goto v_resetjp_2357_;
}
v_resetjp_2357_:
{
lean_object* v___x_2361_; 
if (v_isShared_2359_ == 0)
{
v___x_2361_ = v___x_2358_;
goto v_reusejp_2360_;
}
else
{
lean_object* v_reuseFailAlloc_2362_; 
v_reuseFailAlloc_2362_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2362_, 0, v_a_2356_);
v___x_2361_ = v_reuseFailAlloc_2362_;
goto v_reusejp_2360_;
}
v_reusejp_2360_:
{
return v___x_2361_;
}
}
}
}
}
else
{
lean_object* v___x_2365_; lean_object* v___x_2367_; 
lean_dec(v_a_2332_);
lean_dec_ref(v_decl_2307_);
lean_dec(v_declName_2306_);
v___x_2365_ = ((lean_object*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addItem___redArg___closed__0));
if (v_isShared_2320_ == 0)
{
lean_ctor_set(v___x_2319_, 0, v___x_2365_);
v___x_2367_ = v___x_2319_;
goto v_reusejp_2366_;
}
else
{
lean_object* v_reuseFailAlloc_2368_; 
v_reuseFailAlloc_2368_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2368_, 0, v___x_2365_);
v___x_2367_ = v_reuseFailAlloc_2368_;
goto v_reusejp_2366_;
}
v_reusejp_2366_:
{
return v___x_2367_;
}
}
}
}
}
else
{
lean_object* v_a_2370_; lean_object* v___x_2372_; uint8_t v_isShared_2373_; uint8_t v_isSharedCheck_2377_; 
lean_dec_ref(v_decl_2307_);
lean_dec(v_declName_2306_);
v_a_2370_ = lean_ctor_get(v___x_2316_, 0);
v_isSharedCheck_2377_ = !lean_is_exclusive(v___x_2316_);
if (v_isSharedCheck_2377_ == 0)
{
v___x_2372_ = v___x_2316_;
v_isShared_2373_ = v_isSharedCheck_2377_;
goto v_resetjp_2371_;
}
else
{
lean_inc(v_a_2370_);
lean_dec(v___x_2316_);
v___x_2372_ = lean_box(0);
v_isShared_2373_ = v_isSharedCheck_2377_;
goto v_resetjp_2371_;
}
v_resetjp_2371_:
{
lean_object* v___x_2375_; 
if (v_isShared_2373_ == 0)
{
v___x_2375_ = v___x_2372_;
goto v_reusejp_2374_;
}
else
{
lean_object* v_reuseFailAlloc_2376_; 
v_reuseFailAlloc_2376_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2376_, 0, v_a_2370_);
v___x_2375_ = v_reuseFailAlloc_2376_;
goto v_reusejp_2374_;
}
v_reusejp_2374_:
{
return v___x_2375_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore___lam__0___boxed(lean_object* v_ctx_2378_, lean_object* v_id_2379_, lean_object* v_danglingDot_2380_, lean_object* v_declName_2381_, lean_object* v_decl_2382_, lean_object* v___y_2383_, lean_object* v___y_2384_, lean_object* v___y_2385_, lean_object* v___y_2386_, lean_object* v___y_2387_, lean_object* v___y_2388_, lean_object* v___y_2389_, lean_object* v___y_2390_){
_start:
{
uint8_t v_danglingDot_boxed_2391_; lean_object* v_res_2392_; 
v_danglingDot_boxed_2391_ = lean_unbox(v_danglingDot_2380_);
v_res_2392_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore___lam__0(v_ctx_2378_, v_id_2379_, v_danglingDot_boxed_2391_, v_declName_2381_, v_decl_2382_, v___y_2383_, v___y_2384_, v___y_2385_, v___y_2386_, v___y_2387_, v___y_2388_, v___y_2389_);
lean_dec(v___y_2389_);
lean_dec_ref(v___y_2388_);
lean_dec(v___y_2387_);
lean_dec_ref(v___y_2386_);
lean_dec_ref(v___y_2385_);
lean_dec(v___y_2384_);
lean_dec_ref(v___y_2383_);
return v_res_2392_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore___lam__1(lean_object* v_id_2393_, uint8_t v_danglingDot_2394_, lean_object* v_ns_2395_, lean_object* v_alias_2396_){
_start:
{
uint8_t v___x_2397_; 
v___x_2397_ = l_Lean_Name_isPrefixOf(v_ns_2395_, v_alias_2396_);
if (v___x_2397_ == 0)
{
lean_dec(v_alias_2396_);
return v___x_2397_;
}
else
{
lean_object* v___x_2398_; lean_object* v___x_2399_; uint8_t v___x_2400_; 
v___x_2398_ = lean_obj_once(&l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_matchDecl_x3f___redArg___closed__0, &l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_matchDecl_x3f___redArg___closed__0_once, _init_l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_matchDecl_x3f___redArg___closed__0);
v___x_2399_ = l_Lean_Name_replacePrefix(v_alias_2396_, v_ns_2395_, v___x_2398_);
v___x_2400_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_matchAtomic(v_id_2393_, v___x_2399_, v_danglingDot_2394_);
lean_dec(v___x_2399_);
return v___x_2400_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore___lam__1___boxed(lean_object* v_id_2401_, lean_object* v_danglingDot_2402_, lean_object* v_ns_2403_, lean_object* v_alias_2404_){
_start:
{
uint8_t v_danglingDot_boxed_2405_; uint8_t v_res_2406_; lean_object* v_r_2407_; 
v_danglingDot_boxed_2405_ = lean_unbox(v_danglingDot_2402_);
v_res_2406_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore___lam__1(v_id_2401_, v_danglingDot_boxed_2405_, v_ns_2403_, v_alias_2404_);
lean_dec(v_ns_2403_);
lean_dec(v_id_2401_);
v_r_2407_ = lean_box(v_res_2406_);
return v_r_2407_;
}
}
LEAN_EXPORT lean_object* l_List_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__2___redArg(lean_object* v_a_2408_, lean_object* v___x_2409_, lean_object* v_alias_2410_, lean_object* v_as_2411_, lean_object* v___y_2412_, lean_object* v___y_2413_, lean_object* v___y_2414_, lean_object* v___y_2415_, lean_object* v___y_2416_, lean_object* v___y_2417_){
_start:
{
if (lean_obj_tag(v_as_2411_) == 0)
{
lean_object* v___x_2419_; lean_object* v___x_2420_; 
lean_dec_ref(v___x_2409_);
v___x_2419_ = ((lean_object*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addItem___redArg___closed__0));
v___x_2420_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2420_, 0, v___x_2419_);
return v___x_2420_;
}
else
{
lean_object* v_head_2421_; lean_object* v_tail_2422_; uint8_t v___x_2423_; 
v_head_2421_ = lean_ctor_get(v_as_2411_, 0);
lean_inc_n(v_head_2421_, 2);
v_tail_2422_ = lean_ctor_get(v_as_2411_, 1);
lean_inc(v_tail_2422_);
lean_dec_ref_known(v_as_2411_, 2);
lean_inc_ref(v___x_2409_);
v___x_2423_ = l_Lean_Server_Completion_allowCompletion(v_a_2408_, v___x_2409_, v_head_2421_);
if (v___x_2423_ == 0)
{
lean_dec(v_head_2421_);
v_as_2411_ = v_tail_2422_;
goto _start;
}
else
{
lean_object* v___x_2425_; lean_object* v___x_2426_; lean_object* v___x_2427_; lean_object* v___x_2428_; 
v___x_2425_ = l_Lean_Name_getString_x21(v_alias_2410_);
v___x_2426_ = lean_obj_once(&l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_matchDecl_x3f___redArg___closed__0, &l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_matchDecl_x3f___redArg___closed__0_once, _init_l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_matchDecl_x3f___redArg___closed__0);
v___x_2427_ = l_Lean_Name_str___override(v___x_2426_, v___x_2425_);
v___x_2428_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addUnresolvedCompletionItemForDecl___redArg(v___x_2427_, v_head_2421_, v___y_2412_, v___y_2413_, v___y_2414_, v___y_2415_, v___y_2416_, v___y_2417_);
if (lean_obj_tag(v___x_2428_) == 0)
{
lean_dec_ref_known(v___x_2428_, 1);
v_as_2411_ = v_tail_2422_;
goto _start;
}
else
{
lean_dec(v_tail_2422_);
lean_dec_ref(v___x_2409_);
return v___x_2428_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__2___redArg___boxed(lean_object* v_a_2430_, lean_object* v___x_2431_, lean_object* v_alias_2432_, lean_object* v_as_2433_, lean_object* v___y_2434_, lean_object* v___y_2435_, lean_object* v___y_2436_, lean_object* v___y_2437_, lean_object* v___y_2438_, lean_object* v___y_2439_, lean_object* v___y_2440_){
_start:
{
lean_object* v_res_2441_; 
v_res_2441_ = l_List_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__2___redArg(v_a_2430_, v___x_2431_, v_alias_2432_, v_as_2433_, v___y_2434_, v___y_2435_, v___y_2436_, v___y_2437_, v___y_2438_, v___y_2439_);
lean_dec(v___y_2439_);
lean_dec_ref(v___y_2438_);
lean_dec(v___y_2437_);
lean_dec_ref(v___y_2436_);
lean_dec(v___y_2435_);
lean_dec_ref(v___y_2434_);
lean_dec(v_alias_2432_);
lean_dec_ref(v_a_2430_);
return v_res_2441_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore___lam__2(lean_object* v_a_2442_, lean_object* v_env_2443_, lean_object* v_alias_2444_, lean_object* v_declNames_2445_, lean_object* v___y_2446_, lean_object* v___y_2447_, lean_object* v___y_2448_, lean_object* v___y_2449_, lean_object* v___y_2450_, lean_object* v___y_2451_, lean_object* v___y_2452_){
_start:
{
lean_object* v___x_2454_; 
v___x_2454_ = l_List_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__2___redArg(v_a_2442_, v_env_2443_, v_alias_2444_, v_declNames_2445_, v___y_2446_, v___y_2447_, v___y_2449_, v___y_2450_, v___y_2451_, v___y_2452_);
return v___x_2454_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore___lam__2___boxed(lean_object* v_a_2455_, lean_object* v_env_2456_, lean_object* v_alias_2457_, lean_object* v_declNames_2458_, lean_object* v___y_2459_, lean_object* v___y_2460_, lean_object* v___y_2461_, lean_object* v___y_2462_, lean_object* v___y_2463_, lean_object* v___y_2464_, lean_object* v___y_2465_, lean_object* v___y_2466_){
_start:
{
lean_object* v_res_2467_; 
v_res_2467_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore___lam__2(v_a_2455_, v_env_2456_, v_alias_2457_, v_declNames_2458_, v___y_2459_, v___y_2460_, v___y_2461_, v___y_2462_, v___y_2463_, v___y_2464_, v___y_2465_);
lean_dec(v___y_2465_);
lean_dec_ref(v___y_2464_);
lean_dec(v___y_2463_);
lean_dec_ref(v___y_2462_);
lean_dec_ref(v___y_2461_);
lean_dec(v___y_2460_);
lean_dec_ref(v___y_2459_);
lean_dec(v_alias_2457_);
lean_dec_ref(v_a_2455_);
return v_res_2467_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore___lam__3(lean_object* v___f_2468_, lean_object* v___f_2469_, lean_object* v_currNamespace_2470_, lean_object* v_alias_2471_, lean_object* v_declNames_2472_, lean_object* v___y_2473_, lean_object* v___y_2474_, lean_object* v___y_2475_, lean_object* v___y_2476_, lean_object* v___y_2477_, lean_object* v___y_2478_, lean_object* v___y_2479_){
_start:
{
lean_object* v___x_2481_; 
v___x_2481_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_searchAlias(v___f_2468_, v___f_2469_, v_alias_2471_, v_declNames_2472_, v_currNamespace_2470_, v___y_2473_, v___y_2474_, v___y_2475_, v___y_2476_, v___y_2477_, v___y_2478_, v___y_2479_);
return v___x_2481_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore___lam__3___boxed(lean_object* v___f_2482_, lean_object* v___f_2483_, lean_object* v_currNamespace_2484_, lean_object* v_alias_2485_, lean_object* v_declNames_2486_, lean_object* v___y_2487_, lean_object* v___y_2488_, lean_object* v___y_2489_, lean_object* v___y_2490_, lean_object* v___y_2491_, lean_object* v___y_2492_, lean_object* v___y_2493_, lean_object* v___y_2494_){
_start:
{
lean_object* v_res_2495_; 
v_res_2495_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore___lam__3(v___f_2482_, v___f_2483_, v_currNamespace_2484_, v_alias_2485_, v_declNames_2486_, v___y_2487_, v___y_2488_, v___y_2489_, v___y_2490_, v___y_2491_, v___y_2492_, v___y_2493_);
lean_dec(v___y_2493_);
lean_dec_ref(v___y_2492_);
lean_dec(v___y_2491_);
lean_dec_ref(v___y_2490_);
lean_dec_ref(v___y_2489_);
lean_dec(v___y_2488_);
lean_dec_ref(v___y_2487_);
return v_res_2495_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__4___redArg(lean_object* v_f_2496_, lean_object* v_x_2497_, lean_object* v_x_2498_, lean_object* v___y_2499_, lean_object* v___y_2500_, lean_object* v___y_2501_, lean_object* v___y_2502_, lean_object* v___y_2503_, lean_object* v___y_2504_, lean_object* v___y_2505_){
_start:
{
if (lean_obj_tag(v_x_2498_) == 0)
{
lean_object* v___x_2507_; lean_object* v___x_2508_; 
lean_dec_ref(v_f_2496_);
v___x_2507_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2507_, 0, v_x_2497_);
v___x_2508_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2508_, 0, v___x_2507_);
return v___x_2508_;
}
else
{
lean_object* v_key_2509_; lean_object* v_value_2510_; lean_object* v_tail_2511_; lean_object* v___x_2512_; 
v_key_2509_ = lean_ctor_get(v_x_2498_, 0);
lean_inc(v_key_2509_);
v_value_2510_ = lean_ctor_get(v_x_2498_, 1);
lean_inc(v_value_2510_);
v_tail_2511_ = lean_ctor_get(v_x_2498_, 2);
lean_inc(v_tail_2511_);
lean_dec_ref_known(v_x_2498_, 3);
lean_inc_ref(v_f_2496_);
lean_inc(v___y_2505_);
lean_inc_ref(v___y_2504_);
lean_inc(v___y_2503_);
lean_inc_ref(v___y_2502_);
lean_inc_ref(v___y_2501_);
lean_inc(v___y_2500_);
lean_inc_ref(v___y_2499_);
v___x_2512_ = lean_apply_10(v_f_2496_, v_key_2509_, v_value_2510_, v___y_2499_, v___y_2500_, v___y_2501_, v___y_2502_, v___y_2503_, v___y_2504_, v___y_2505_, lean_box(0));
if (lean_obj_tag(v___x_2512_) == 0)
{
lean_object* v_a_2513_; 
v_a_2513_ = lean_ctor_get(v___x_2512_, 0);
lean_inc(v_a_2513_);
if (lean_obj_tag(v_a_2513_) == 0)
{
lean_dec_ref_known(v_a_2513_, 1);
lean_dec(v_tail_2511_);
lean_dec_ref(v_f_2496_);
return v___x_2512_;
}
else
{
lean_object* v_a_2514_; 
lean_dec_ref_known(v___x_2512_, 1);
v_a_2514_ = lean_ctor_get(v_a_2513_, 0);
lean_inc(v_a_2514_);
lean_dec_ref_known(v_a_2513_, 1);
v_x_2497_ = v_a_2514_;
v_x_2498_ = v_tail_2511_;
goto _start;
}
}
else
{
lean_dec(v_tail_2511_);
lean_dec_ref(v_f_2496_);
return v___x_2512_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__4___redArg___boxed(lean_object* v_f_2516_, lean_object* v_x_2517_, lean_object* v_x_2518_, lean_object* v___y_2519_, lean_object* v___y_2520_, lean_object* v___y_2521_, lean_object* v___y_2522_, lean_object* v___y_2523_, lean_object* v___y_2524_, lean_object* v___y_2525_, lean_object* v___y_2526_){
_start:
{
lean_object* v_res_2527_; 
v_res_2527_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__4___redArg(v_f_2516_, v_x_2517_, v_x_2518_, v___y_2519_, v___y_2520_, v___y_2521_, v___y_2522_, v___y_2523_, v___y_2524_, v___y_2525_);
lean_dec(v___y_2525_);
lean_dec_ref(v___y_2524_);
lean_dec(v___y_2523_);
lean_dec_ref(v___y_2522_);
lean_dec_ref(v___y_2521_);
lean_dec(v___y_2520_);
lean_dec_ref(v___y_2519_);
return v_res_2527_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__6___redArg(lean_object* v_f_2528_, lean_object* v_as_2529_, size_t v_i_2530_, size_t v_stop_2531_, lean_object* v_b_2532_, lean_object* v___y_2533_, lean_object* v___y_2534_, lean_object* v___y_2535_, lean_object* v___y_2536_, lean_object* v___y_2537_, lean_object* v___y_2538_, lean_object* v___y_2539_){
_start:
{
uint8_t v___x_2541_; 
v___x_2541_ = lean_usize_dec_eq(v_i_2530_, v_stop_2531_);
if (v___x_2541_ == 0)
{
lean_object* v___x_2542_; lean_object* v___x_2543_; lean_object* v___x_2544_; 
v___x_2542_ = lean_array_uget_borrowed(v_as_2529_, v_i_2530_);
v___x_2543_ = lean_box(0);
lean_inc(v___x_2542_);
lean_inc_ref(v_f_2528_);
v___x_2544_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__4___redArg(v_f_2528_, v___x_2543_, v___x_2542_, v___y_2533_, v___y_2534_, v___y_2535_, v___y_2536_, v___y_2537_, v___y_2538_, v___y_2539_);
if (lean_obj_tag(v___x_2544_) == 0)
{
lean_object* v_a_2545_; 
v_a_2545_ = lean_ctor_get(v___x_2544_, 0);
lean_inc(v_a_2545_);
if (lean_obj_tag(v_a_2545_) == 0)
{
lean_dec_ref_known(v_a_2545_, 1);
lean_dec_ref(v_f_2528_);
return v___x_2544_;
}
else
{
lean_object* v_a_2546_; size_t v___x_2547_; size_t v___x_2548_; 
lean_dec_ref_known(v___x_2544_, 1);
v_a_2546_ = lean_ctor_get(v_a_2545_, 0);
lean_inc(v_a_2546_);
lean_dec_ref_known(v_a_2545_, 1);
v___x_2547_ = ((size_t)1ULL);
v___x_2548_ = lean_usize_add(v_i_2530_, v___x_2547_);
v_i_2530_ = v___x_2548_;
v_b_2532_ = v_a_2546_;
goto _start;
}
}
else
{
lean_dec_ref(v_f_2528_);
return v___x_2544_;
}
}
else
{
lean_object* v___x_2550_; lean_object* v___x_2551_; 
lean_dec_ref(v_f_2528_);
v___x_2550_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2550_, 0, v_b_2532_);
v___x_2551_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2551_, 0, v___x_2550_);
return v___x_2551_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__6___redArg___boxed(lean_object* v_f_2552_, lean_object* v_as_2553_, lean_object* v_i_2554_, lean_object* v_stop_2555_, lean_object* v_b_2556_, lean_object* v___y_2557_, lean_object* v___y_2558_, lean_object* v___y_2559_, lean_object* v___y_2560_, lean_object* v___y_2561_, lean_object* v___y_2562_, lean_object* v___y_2563_, lean_object* v___y_2564_){
_start:
{
size_t v_i_boxed_2565_; size_t v_stop_boxed_2566_; lean_object* v_res_2567_; 
v_i_boxed_2565_ = lean_unbox_usize(v_i_2554_);
lean_dec(v_i_2554_);
v_stop_boxed_2566_ = lean_unbox_usize(v_stop_2555_);
lean_dec(v_stop_2555_);
v_res_2567_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__6___redArg(v_f_2552_, v_as_2553_, v_i_boxed_2565_, v_stop_boxed_2566_, v_b_2556_, v___y_2557_, v___y_2558_, v___y_2559_, v___y_2560_, v___y_2561_, v___y_2562_, v___y_2563_);
lean_dec(v___y_2563_);
lean_dec_ref(v___y_2562_);
lean_dec(v___y_2561_);
lean_dec_ref(v___y_2560_);
lean_dec_ref(v___y_2559_);
lean_dec(v___y_2558_);
lean_dec_ref(v___y_2557_);
lean_dec_ref(v_as_2553_);
return v_res_2567_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5___redArg___lam__0(lean_object* v_f_2568_, lean_object* v_x_2569_, lean_object* v___y_2570_, lean_object* v___y_2571_, lean_object* v___y_2572_, lean_object* v___y_2573_, lean_object* v___y_2574_, lean_object* v___y_2575_, lean_object* v___y_2576_, lean_object* v___y_2577_, lean_object* v___y_2578_){
_start:
{
lean_object* v___x_2580_; 
lean_inc(v___y_2578_);
lean_inc_ref(v___y_2577_);
lean_inc(v___y_2576_);
lean_inc_ref(v___y_2575_);
lean_inc_ref(v___y_2574_);
lean_inc(v___y_2573_);
lean_inc_ref(v___y_2572_);
v___x_2580_ = lean_apply_10(v_f_2568_, v___y_2570_, v___y_2571_, v___y_2572_, v___y_2573_, v___y_2574_, v___y_2575_, v___y_2576_, v___y_2577_, v___y_2578_, lean_box(0));
return v___x_2580_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5___redArg___lam__0___boxed(lean_object* v_f_2581_, lean_object* v_x_2582_, lean_object* v___y_2583_, lean_object* v___y_2584_, lean_object* v___y_2585_, lean_object* v___y_2586_, lean_object* v___y_2587_, lean_object* v___y_2588_, lean_object* v___y_2589_, lean_object* v___y_2590_, lean_object* v___y_2591_, lean_object* v___y_2592_){
_start:
{
lean_object* v_res_2593_; 
v_res_2593_ = l_Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5___redArg___lam__0(v_f_2581_, v_x_2582_, v___y_2583_, v___y_2584_, v___y_2585_, v___y_2586_, v___y_2587_, v___y_2588_, v___y_2589_, v___y_2590_, v___y_2591_);
lean_dec(v___y_2591_);
lean_dec_ref(v___y_2590_);
lean_dec(v___y_2589_);
lean_dec_ref(v___y_2588_);
lean_dec_ref(v___y_2587_);
lean_dec(v___y_2586_);
lean_dec_ref(v___y_2585_);
return v_res_2593_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5_spec__9_spec__14_spec__21___redArg(lean_object* v_f_2594_, lean_object* v_keys_2595_, lean_object* v_vals_2596_, lean_object* v_i_2597_, lean_object* v_acc_2598_, lean_object* v___y_2599_, lean_object* v___y_2600_, lean_object* v___y_2601_, lean_object* v___y_2602_, lean_object* v___y_2603_, lean_object* v___y_2604_, lean_object* v___y_2605_){
_start:
{
lean_object* v___x_2607_; uint8_t v___x_2608_; 
v___x_2607_ = lean_array_get_size(v_keys_2595_);
v___x_2608_ = lean_nat_dec_lt(v_i_2597_, v___x_2607_);
if (v___x_2608_ == 0)
{
lean_object* v___x_2609_; lean_object* v___x_2610_; 
lean_dec(v_i_2597_);
lean_dec_ref(v_f_2594_);
v___x_2609_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2609_, 0, v_acc_2598_);
v___x_2610_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2610_, 0, v___x_2609_);
return v___x_2610_;
}
else
{
lean_object* v_k_2611_; lean_object* v_v_2612_; lean_object* v___x_2613_; 
v_k_2611_ = lean_array_fget_borrowed(v_keys_2595_, v_i_2597_);
v_v_2612_ = lean_array_fget_borrowed(v_vals_2596_, v_i_2597_);
lean_inc_ref(v_f_2594_);
lean_inc(v___y_2605_);
lean_inc_ref(v___y_2604_);
lean_inc(v___y_2603_);
lean_inc_ref(v___y_2602_);
lean_inc_ref(v___y_2601_);
lean_inc(v___y_2600_);
lean_inc_ref(v___y_2599_);
lean_inc(v_v_2612_);
lean_inc(v_k_2611_);
v___x_2613_ = lean_apply_11(v_f_2594_, v_acc_2598_, v_k_2611_, v_v_2612_, v___y_2599_, v___y_2600_, v___y_2601_, v___y_2602_, v___y_2603_, v___y_2604_, v___y_2605_, lean_box(0));
if (lean_obj_tag(v___x_2613_) == 0)
{
lean_object* v_a_2614_; 
v_a_2614_ = lean_ctor_get(v___x_2613_, 0);
lean_inc(v_a_2614_);
if (lean_obj_tag(v_a_2614_) == 0)
{
lean_dec_ref_known(v_a_2614_, 1);
lean_dec(v_i_2597_);
lean_dec_ref(v_f_2594_);
return v___x_2613_;
}
else
{
lean_object* v_a_2615_; lean_object* v___x_2616_; lean_object* v___x_2617_; 
lean_dec_ref_known(v___x_2613_, 1);
v_a_2615_ = lean_ctor_get(v_a_2614_, 0);
lean_inc(v_a_2615_);
lean_dec_ref_known(v_a_2614_, 1);
v___x_2616_ = lean_unsigned_to_nat(1u);
v___x_2617_ = lean_nat_add(v_i_2597_, v___x_2616_);
lean_dec(v_i_2597_);
v_i_2597_ = v___x_2617_;
v_acc_2598_ = v_a_2615_;
goto _start;
}
}
else
{
lean_dec(v_i_2597_);
lean_dec_ref(v_f_2594_);
return v___x_2613_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5_spec__9_spec__14_spec__21___redArg___boxed(lean_object* v_f_2619_, lean_object* v_keys_2620_, lean_object* v_vals_2621_, lean_object* v_i_2622_, lean_object* v_acc_2623_, lean_object* v___y_2624_, lean_object* v___y_2625_, lean_object* v___y_2626_, lean_object* v___y_2627_, lean_object* v___y_2628_, lean_object* v___y_2629_, lean_object* v___y_2630_, lean_object* v___y_2631_){
_start:
{
lean_object* v_res_2632_; 
v_res_2632_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5_spec__9_spec__14_spec__21___redArg(v_f_2619_, v_keys_2620_, v_vals_2621_, v_i_2622_, v_acc_2623_, v___y_2624_, v___y_2625_, v___y_2626_, v___y_2627_, v___y_2628_, v___y_2629_, v___y_2630_);
lean_dec(v___y_2630_);
lean_dec_ref(v___y_2629_);
lean_dec(v___y_2628_);
lean_dec_ref(v___y_2627_);
lean_dec_ref(v___y_2626_);
lean_dec(v___y_2625_);
lean_dec_ref(v___y_2624_);
lean_dec_ref(v_vals_2621_);
lean_dec_ref(v_keys_2620_);
return v_res_2632_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5_spec__9_spec__14_spec__20___redArg(lean_object* v_f_2633_, lean_object* v_as_2634_, size_t v_i_2635_, size_t v_stop_2636_, lean_object* v_b_2637_, lean_object* v___y_2638_, lean_object* v___y_2639_, lean_object* v___y_2640_, lean_object* v___y_2641_, lean_object* v___y_2642_, lean_object* v___y_2643_, lean_object* v___y_2644_){
_start:
{
lean_object* v_a_2647_; lean_object* v___y_2652_; uint8_t v___x_2655_; 
v___x_2655_ = lean_usize_dec_eq(v_i_2635_, v_stop_2636_);
if (v___x_2655_ == 0)
{
lean_object* v___x_2656_; 
v___x_2656_ = lean_array_uget_borrowed(v_as_2634_, v_i_2635_);
switch(lean_obj_tag(v___x_2656_))
{
case 0:
{
lean_object* v_key_2657_; lean_object* v_val_2658_; lean_object* v___x_2659_; 
v_key_2657_ = lean_ctor_get(v___x_2656_, 0);
v_val_2658_ = lean_ctor_get(v___x_2656_, 1);
lean_inc_ref(v_f_2633_);
lean_inc(v___y_2644_);
lean_inc_ref(v___y_2643_);
lean_inc(v___y_2642_);
lean_inc_ref(v___y_2641_);
lean_inc_ref(v___y_2640_);
lean_inc(v___y_2639_);
lean_inc_ref(v___y_2638_);
lean_inc(v_val_2658_);
lean_inc(v_key_2657_);
v___x_2659_ = lean_apply_11(v_f_2633_, v_b_2637_, v_key_2657_, v_val_2658_, v___y_2638_, v___y_2639_, v___y_2640_, v___y_2641_, v___y_2642_, v___y_2643_, v___y_2644_, lean_box(0));
v___y_2652_ = v___x_2659_;
goto v___jp_2651_;
}
case 1:
{
lean_object* v_node_2660_; lean_object* v___x_2661_; 
v_node_2660_ = lean_ctor_get(v___x_2656_, 0);
lean_inc(v_node_2660_);
lean_inc_ref(v_f_2633_);
v___x_2661_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5_spec__9_spec__14___redArg(v_f_2633_, v_node_2660_, v_b_2637_, v___y_2638_, v___y_2639_, v___y_2640_, v___y_2641_, v___y_2642_, v___y_2643_, v___y_2644_);
v___y_2652_ = v___x_2661_;
goto v___jp_2651_;
}
default: 
{
v_a_2647_ = v_b_2637_;
goto v___jp_2646_;
}
}
}
else
{
lean_object* v___x_2662_; lean_object* v___x_2663_; 
lean_dec_ref(v_f_2633_);
v___x_2662_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2662_, 0, v_b_2637_);
v___x_2663_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2663_, 0, v___x_2662_);
return v___x_2663_;
}
v___jp_2646_:
{
size_t v___x_2648_; size_t v___x_2649_; 
v___x_2648_ = ((size_t)1ULL);
v___x_2649_ = lean_usize_add(v_i_2635_, v___x_2648_);
v_i_2635_ = v___x_2649_;
v_b_2637_ = v_a_2647_;
goto _start;
}
v___jp_2651_:
{
if (lean_obj_tag(v___y_2652_) == 0)
{
lean_object* v_a_2653_; 
v_a_2653_ = lean_ctor_get(v___y_2652_, 0);
if (lean_obj_tag(v_a_2653_) == 0)
{
lean_dec_ref(v_f_2633_);
return v___y_2652_;
}
else
{
lean_object* v_a_2654_; 
lean_inc_ref(v_a_2653_);
lean_dec_ref_known(v___y_2652_, 1);
v_a_2654_ = lean_ctor_get(v_a_2653_, 0);
lean_inc(v_a_2654_);
lean_dec_ref_known(v_a_2653_, 1);
v_a_2647_ = v_a_2654_;
goto v___jp_2646_;
}
}
else
{
lean_dec_ref(v_f_2633_);
return v___y_2652_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5_spec__9_spec__14___redArg(lean_object* v_f_2664_, lean_object* v_x_2665_, lean_object* v_x_2666_, lean_object* v___y_2667_, lean_object* v___y_2668_, lean_object* v___y_2669_, lean_object* v___y_2670_, lean_object* v___y_2671_, lean_object* v___y_2672_, lean_object* v___y_2673_){
_start:
{
if (lean_obj_tag(v_x_2665_) == 0)
{
lean_object* v_es_2675_; lean_object* v___x_2677_; uint8_t v_isShared_2678_; uint8_t v_isSharedCheck_2689_; 
v_es_2675_ = lean_ctor_get(v_x_2665_, 0);
v_isSharedCheck_2689_ = !lean_is_exclusive(v_x_2665_);
if (v_isSharedCheck_2689_ == 0)
{
v___x_2677_ = v_x_2665_;
v_isShared_2678_ = v_isSharedCheck_2689_;
goto v_resetjp_2676_;
}
else
{
lean_inc(v_es_2675_);
lean_dec(v_x_2665_);
v___x_2677_ = lean_box(0);
v_isShared_2678_ = v_isSharedCheck_2689_;
goto v_resetjp_2676_;
}
v_resetjp_2676_:
{
lean_object* v___x_2679_; lean_object* v___x_2680_; uint8_t v___x_2681_; 
v___x_2679_ = lean_unsigned_to_nat(0u);
v___x_2680_ = lean_array_get_size(v_es_2675_);
v___x_2681_ = lean_nat_dec_lt(v___x_2679_, v___x_2680_);
if (v___x_2681_ == 0)
{
lean_object* v___x_2683_; 
lean_dec_ref(v_es_2675_);
lean_dec_ref(v_f_2664_);
if (v_isShared_2678_ == 0)
{
lean_ctor_set_tag(v___x_2677_, 1);
lean_ctor_set(v___x_2677_, 0, v_x_2666_);
v___x_2683_ = v___x_2677_;
goto v_reusejp_2682_;
}
else
{
lean_object* v_reuseFailAlloc_2685_; 
v_reuseFailAlloc_2685_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2685_, 0, v_x_2666_);
v___x_2683_ = v_reuseFailAlloc_2685_;
goto v_reusejp_2682_;
}
v_reusejp_2682_:
{
lean_object* v___x_2684_; 
v___x_2684_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2684_, 0, v___x_2683_);
return v___x_2684_;
}
}
else
{
size_t v___x_2686_; size_t v___x_2687_; lean_object* v___x_2688_; 
lean_del_object(v___x_2677_);
v___x_2686_ = ((size_t)0ULL);
v___x_2687_ = lean_usize_of_nat(v___x_2680_);
v___x_2688_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5_spec__9_spec__14_spec__20___redArg(v_f_2664_, v_es_2675_, v___x_2686_, v___x_2687_, v_x_2666_, v___y_2667_, v___y_2668_, v___y_2669_, v___y_2670_, v___y_2671_, v___y_2672_, v___y_2673_);
lean_dec_ref(v_es_2675_);
return v___x_2688_;
}
}
}
else
{
lean_object* v_ks_2690_; lean_object* v_vs_2691_; lean_object* v___x_2692_; lean_object* v___x_2693_; 
v_ks_2690_ = lean_ctor_get(v_x_2665_, 0);
lean_inc_ref(v_ks_2690_);
v_vs_2691_ = lean_ctor_get(v_x_2665_, 1);
lean_inc_ref(v_vs_2691_);
lean_dec_ref_known(v_x_2665_, 2);
v___x_2692_ = lean_unsigned_to_nat(0u);
v___x_2693_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5_spec__9_spec__14_spec__21___redArg(v_f_2664_, v_ks_2690_, v_vs_2691_, v___x_2692_, v_x_2666_, v___y_2667_, v___y_2668_, v___y_2669_, v___y_2670_, v___y_2671_, v___y_2672_, v___y_2673_);
lean_dec_ref(v_vs_2691_);
lean_dec_ref(v_ks_2690_);
return v___x_2693_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5_spec__9_spec__14___redArg___boxed(lean_object* v_f_2694_, lean_object* v_x_2695_, lean_object* v_x_2696_, lean_object* v___y_2697_, lean_object* v___y_2698_, lean_object* v___y_2699_, lean_object* v___y_2700_, lean_object* v___y_2701_, lean_object* v___y_2702_, lean_object* v___y_2703_, lean_object* v___y_2704_){
_start:
{
lean_object* v_res_2705_; 
v_res_2705_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5_spec__9_spec__14___redArg(v_f_2694_, v_x_2695_, v_x_2696_, v___y_2697_, v___y_2698_, v___y_2699_, v___y_2700_, v___y_2701_, v___y_2702_, v___y_2703_);
lean_dec(v___y_2703_);
lean_dec_ref(v___y_2702_);
lean_dec(v___y_2701_);
lean_dec_ref(v___y_2700_);
lean_dec_ref(v___y_2699_);
lean_dec(v___y_2698_);
lean_dec_ref(v___y_2697_);
return v_res_2705_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5_spec__9_spec__14_spec__20___redArg___boxed(lean_object* v_f_2706_, lean_object* v_as_2707_, lean_object* v_i_2708_, lean_object* v_stop_2709_, lean_object* v_b_2710_, lean_object* v___y_2711_, lean_object* v___y_2712_, lean_object* v___y_2713_, lean_object* v___y_2714_, lean_object* v___y_2715_, lean_object* v___y_2716_, lean_object* v___y_2717_, lean_object* v___y_2718_){
_start:
{
size_t v_i_boxed_2719_; size_t v_stop_boxed_2720_; lean_object* v_res_2721_; 
v_i_boxed_2719_ = lean_unbox_usize(v_i_2708_);
lean_dec(v_i_2708_);
v_stop_boxed_2720_ = lean_unbox_usize(v_stop_2709_);
lean_dec(v_stop_2709_);
v_res_2721_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5_spec__9_spec__14_spec__20___redArg(v_f_2706_, v_as_2707_, v_i_boxed_2719_, v_stop_boxed_2720_, v_b_2710_, v___y_2711_, v___y_2712_, v___y_2713_, v___y_2714_, v___y_2715_, v___y_2716_, v___y_2717_);
lean_dec(v___y_2717_);
lean_dec_ref(v___y_2716_);
lean_dec(v___y_2715_);
lean_dec_ref(v___y_2714_);
lean_dec_ref(v___y_2713_);
lean_dec(v___y_2712_);
lean_dec_ref(v___y_2711_);
lean_dec_ref(v_as_2707_);
return v_res_2721_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5___redArg(lean_object* v_map_2722_, lean_object* v_f_2723_, lean_object* v___y_2724_, lean_object* v___y_2725_, lean_object* v___y_2726_, lean_object* v___y_2727_, lean_object* v___y_2728_, lean_object* v___y_2729_, lean_object* v___y_2730_){
_start:
{
lean_object* v___f_2732_; lean_object* v___x_2733_; lean_object* v___x_2734_; 
v___f_2732_ = lean_alloc_closure((void*)(l_Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5___redArg___lam__0___boxed), 12, 1);
lean_closure_set(v___f_2732_, 0, v_f_2723_);
v___x_2733_ = lean_box(0);
v___x_2734_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5_spec__9_spec__14___redArg(v___f_2732_, v_map_2722_, v___x_2733_, v___y_2724_, v___y_2725_, v___y_2726_, v___y_2727_, v___y_2728_, v___y_2729_, v___y_2730_);
return v___x_2734_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5___redArg___boxed(lean_object* v_map_2735_, lean_object* v_f_2736_, lean_object* v___y_2737_, lean_object* v___y_2738_, lean_object* v___y_2739_, lean_object* v___y_2740_, lean_object* v___y_2741_, lean_object* v___y_2742_, lean_object* v___y_2743_, lean_object* v___y_2744_){
_start:
{
lean_object* v_res_2745_; 
v_res_2745_ = l_Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5___redArg(v_map_2735_, v_f_2736_, v___y_2737_, v___y_2738_, v___y_2739_, v___y_2740_, v___y_2741_, v___y_2742_, v___y_2743_);
lean_dec(v___y_2743_);
lean_dec_ref(v___y_2742_);
lean_dec(v___y_2741_);
lean_dec_ref(v___y_2740_);
lean_dec_ref(v___y_2739_);
lean_dec(v___y_2738_);
lean_dec_ref(v___y_2737_);
return v_res_2745_;
}
}
LEAN_EXPORT lean_object* l_Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3___redArg(lean_object* v_s_2746_, lean_object* v_f_2747_, lean_object* v___y_2748_, lean_object* v___y_2749_, lean_object* v___y_2750_, lean_object* v___y_2751_, lean_object* v___y_2752_, lean_object* v___y_2753_, lean_object* v___y_2754_){
_start:
{
lean_object* v_map_u2081_2756_; lean_object* v_map_u2082_2757_; lean_object* v_buckets_2758_; lean_object* v___x_2759_; lean_object* v___x_2760_; uint8_t v___x_2761_; 
v_map_u2081_2756_ = lean_ctor_get(v_s_2746_, 0);
lean_inc_ref(v_map_u2081_2756_);
v_map_u2082_2757_ = lean_ctor_get(v_s_2746_, 1);
lean_inc_ref(v_map_u2082_2757_);
lean_dec_ref(v_s_2746_);
v_buckets_2758_ = lean_ctor_get(v_map_u2081_2756_, 1);
lean_inc_ref(v_buckets_2758_);
lean_dec_ref(v_map_u2081_2756_);
v___x_2759_ = lean_unsigned_to_nat(0u);
v___x_2760_ = lean_array_get_size(v_buckets_2758_);
v___x_2761_ = lean_nat_dec_lt(v___x_2759_, v___x_2760_);
if (v___x_2761_ == 0)
{
lean_object* v___x_2762_; 
lean_dec_ref(v_buckets_2758_);
v___x_2762_ = l_Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5___redArg(v_map_u2082_2757_, v_f_2747_, v___y_2748_, v___y_2749_, v___y_2750_, v___y_2751_, v___y_2752_, v___y_2753_, v___y_2754_);
return v___x_2762_;
}
else
{
lean_object* v___x_2763_; size_t v___x_2764_; size_t v___x_2765_; lean_object* v___x_2766_; 
v___x_2763_ = lean_box(0);
v___x_2764_ = ((size_t)0ULL);
v___x_2765_ = lean_usize_of_nat(v___x_2760_);
lean_inc_ref(v_f_2747_);
v___x_2766_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__6___redArg(v_f_2747_, v_buckets_2758_, v___x_2764_, v___x_2765_, v___x_2763_, v___y_2748_, v___y_2749_, v___y_2750_, v___y_2751_, v___y_2752_, v___y_2753_, v___y_2754_);
lean_dec_ref(v_buckets_2758_);
if (lean_obj_tag(v___x_2766_) == 0)
{
lean_object* v_a_2767_; 
v_a_2767_ = lean_ctor_get(v___x_2766_, 0);
lean_inc(v_a_2767_);
if (lean_obj_tag(v_a_2767_) == 0)
{
lean_dec_ref_known(v_a_2767_, 1);
lean_dec_ref(v_map_u2082_2757_);
lean_dec_ref(v_f_2747_);
return v___x_2766_;
}
else
{
lean_object* v___x_2768_; 
lean_dec_ref_known(v_a_2767_, 1);
lean_dec_ref_known(v___x_2766_, 1);
v___x_2768_ = l_Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5___redArg(v_map_u2082_2757_, v_f_2747_, v___y_2748_, v___y_2749_, v___y_2750_, v___y_2751_, v___y_2752_, v___y_2753_, v___y_2754_);
return v___x_2768_;
}
}
else
{
lean_dec_ref(v_map_u2082_2757_);
lean_dec_ref(v_f_2747_);
return v___x_2766_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3___redArg___boxed(lean_object* v_s_2769_, lean_object* v_f_2770_, lean_object* v___y_2771_, lean_object* v___y_2772_, lean_object* v___y_2773_, lean_object* v___y_2774_, lean_object* v___y_2775_, lean_object* v___y_2776_, lean_object* v___y_2777_, lean_object* v___y_2778_){
_start:
{
lean_object* v_res_2779_; 
v_res_2779_ = l_Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3___redArg(v_s_2769_, v_f_2770_, v___y_2771_, v___y_2772_, v___y_2773_, v___y_2774_, v___y_2775_, v___y_2776_, v___y_2777_);
lean_dec(v___y_2777_);
lean_dec_ref(v___y_2776_);
lean_dec(v___y_2775_);
lean_dec_ref(v___y_2774_);
lean_dec_ref(v___y_2773_);
lean_dec(v___y_2772_);
lean_dec_ref(v___y_2771_);
return v_res_2779_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0___lam__0(lean_object* v_f_2780_, lean_object* v_decl_2781_, lean_object* v_ci_2782_, lean_object* v___y_2783_, lean_object* v___y_2784_, lean_object* v___y_2785_, lean_object* v___y_2786_, lean_object* v___y_2787_, lean_object* v___y_2788_, lean_object* v___y_2789_, lean_object* v___y_2790_){
_start:
{
lean_object* v___y_2793_; lean_object* v___x_2831_; lean_object* v___x_2832_; lean_object* v___x_2833_; uint8_t v___x_2834_; 
v___x_2831_ = lean_unsigned_to_nat(1u);
v___x_2832_ = lean_nat_add(v___y_2783_, v___x_2831_);
v___x_2833_ = lean_unsigned_to_nat(10000u);
v___x_2834_ = lean_nat_dec_le(v___x_2833_, v___x_2832_);
if (v___x_2834_ == 0)
{
v___y_2793_ = v___x_2832_;
goto v___jp_2792_;
}
else
{
lean_object* v___x_2835_; lean_object* v_a_2836_; lean_object* v___x_2838_; uint8_t v_isShared_2839_; uint8_t v_isSharedCheck_2852_; 
lean_dec(v___x_2832_);
v___x_2835_ = l_Lean_Server_CancellableT_checkCancelled___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__1___redArg(v___y_2786_);
v_a_2836_ = lean_ctor_get(v___x_2835_, 0);
v_isSharedCheck_2852_ = !lean_is_exclusive(v___x_2835_);
if (v_isSharedCheck_2852_ == 0)
{
v___x_2838_ = v___x_2835_;
v_isShared_2839_ = v_isSharedCheck_2852_;
goto v_resetjp_2837_;
}
else
{
lean_inc(v_a_2836_);
lean_dec(v___x_2835_);
v___x_2838_ = lean_box(0);
v_isShared_2839_ = v_isSharedCheck_2852_;
goto v_resetjp_2837_;
}
v_resetjp_2837_:
{
if (lean_obj_tag(v_a_2836_) == 0)
{
lean_object* v_a_2840_; lean_object* v___x_2842_; uint8_t v_isShared_2843_; uint8_t v_isSharedCheck_2850_; 
lean_dec_ref(v_ci_2782_);
lean_dec(v_decl_2781_);
lean_dec_ref(v_f_2780_);
v_a_2840_ = lean_ctor_get(v_a_2836_, 0);
v_isSharedCheck_2850_ = !lean_is_exclusive(v_a_2836_);
if (v_isSharedCheck_2850_ == 0)
{
v___x_2842_ = v_a_2836_;
v_isShared_2843_ = v_isSharedCheck_2850_;
goto v_resetjp_2841_;
}
else
{
lean_inc(v_a_2840_);
lean_dec(v_a_2836_);
v___x_2842_ = lean_box(0);
v_isShared_2843_ = v_isSharedCheck_2850_;
goto v_resetjp_2841_;
}
v_resetjp_2841_:
{
lean_object* v___x_2845_; 
if (v_isShared_2843_ == 0)
{
v___x_2845_ = v___x_2842_;
goto v_reusejp_2844_;
}
else
{
lean_object* v_reuseFailAlloc_2849_; 
v_reuseFailAlloc_2849_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2849_, 0, v_a_2840_);
v___x_2845_ = v_reuseFailAlloc_2849_;
goto v_reusejp_2844_;
}
v_reusejp_2844_:
{
lean_object* v___x_2847_; 
if (v_isShared_2839_ == 0)
{
lean_ctor_set(v___x_2838_, 0, v___x_2845_);
v___x_2847_ = v___x_2838_;
goto v_reusejp_2846_;
}
else
{
lean_object* v_reuseFailAlloc_2848_; 
v_reuseFailAlloc_2848_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2848_, 0, v___x_2845_);
v___x_2847_ = v_reuseFailAlloc_2848_;
goto v_reusejp_2846_;
}
v_reusejp_2846_:
{
return v___x_2847_;
}
}
}
}
else
{
lean_object* v___x_2851_; 
lean_dec_ref_known(v_a_2836_, 1);
lean_del_object(v___x_2838_);
v___x_2851_ = lean_unsigned_to_nat(0u);
v___y_2793_ = v___x_2851_;
goto v___jp_2792_;
}
}
}
v___jp_2792_:
{
lean_object* v___x_2794_; 
lean_inc(v___y_2790_);
lean_inc_ref(v___y_2789_);
lean_inc(v___y_2788_);
lean_inc_ref(v___y_2787_);
lean_inc_ref(v___y_2786_);
lean_inc(v___y_2785_);
lean_inc_ref(v___y_2784_);
v___x_2794_ = lean_apply_10(v_f_2780_, v_decl_2781_, v_ci_2782_, v___y_2784_, v___y_2785_, v___y_2786_, v___y_2787_, v___y_2788_, v___y_2789_, v___y_2790_, lean_box(0));
if (lean_obj_tag(v___x_2794_) == 0)
{
lean_object* v_a_2795_; lean_object* v___x_2797_; uint8_t v_isShared_2798_; uint8_t v_isSharedCheck_2822_; 
v_a_2795_ = lean_ctor_get(v___x_2794_, 0);
v_isSharedCheck_2822_ = !lean_is_exclusive(v___x_2794_);
if (v_isSharedCheck_2822_ == 0)
{
v___x_2797_ = v___x_2794_;
v_isShared_2798_ = v_isSharedCheck_2822_;
goto v_resetjp_2796_;
}
else
{
lean_inc(v_a_2795_);
lean_dec(v___x_2794_);
v___x_2797_ = lean_box(0);
v_isShared_2798_ = v_isSharedCheck_2822_;
goto v_resetjp_2796_;
}
v_resetjp_2796_:
{
if (lean_obj_tag(v_a_2795_) == 0)
{
lean_object* v_a_2799_; lean_object* v___x_2801_; uint8_t v_isShared_2802_; uint8_t v_isSharedCheck_2809_; 
lean_dec(v___y_2793_);
v_a_2799_ = lean_ctor_get(v_a_2795_, 0);
v_isSharedCheck_2809_ = !lean_is_exclusive(v_a_2795_);
if (v_isSharedCheck_2809_ == 0)
{
v___x_2801_ = v_a_2795_;
v_isShared_2802_ = v_isSharedCheck_2809_;
goto v_resetjp_2800_;
}
else
{
lean_inc(v_a_2799_);
lean_dec(v_a_2795_);
v___x_2801_ = lean_box(0);
v_isShared_2802_ = v_isSharedCheck_2809_;
goto v_resetjp_2800_;
}
v_resetjp_2800_:
{
lean_object* v___x_2804_; 
if (v_isShared_2802_ == 0)
{
v___x_2804_ = v___x_2801_;
goto v_reusejp_2803_;
}
else
{
lean_object* v_reuseFailAlloc_2808_; 
v_reuseFailAlloc_2808_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2808_, 0, v_a_2799_);
v___x_2804_ = v_reuseFailAlloc_2808_;
goto v_reusejp_2803_;
}
v_reusejp_2803_:
{
lean_object* v___x_2806_; 
if (v_isShared_2798_ == 0)
{
lean_ctor_set(v___x_2797_, 0, v___x_2804_);
v___x_2806_ = v___x_2797_;
goto v_reusejp_2805_;
}
else
{
lean_object* v_reuseFailAlloc_2807_; 
v_reuseFailAlloc_2807_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2807_, 0, v___x_2804_);
v___x_2806_ = v_reuseFailAlloc_2807_;
goto v_reusejp_2805_;
}
v_reusejp_2805_:
{
return v___x_2806_;
}
}
}
}
else
{
lean_object* v_a_2810_; lean_object* v___x_2812_; uint8_t v_isShared_2813_; uint8_t v_isSharedCheck_2821_; 
v_a_2810_ = lean_ctor_get(v_a_2795_, 0);
v_isSharedCheck_2821_ = !lean_is_exclusive(v_a_2795_);
if (v_isSharedCheck_2821_ == 0)
{
v___x_2812_ = v_a_2795_;
v_isShared_2813_ = v_isSharedCheck_2821_;
goto v_resetjp_2811_;
}
else
{
lean_inc(v_a_2810_);
lean_dec(v_a_2795_);
v___x_2812_ = lean_box(0);
v_isShared_2813_ = v_isSharedCheck_2821_;
goto v_resetjp_2811_;
}
v_resetjp_2811_:
{
lean_object* v___x_2814_; lean_object* v___x_2816_; 
v___x_2814_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2814_, 0, v_a_2810_);
lean_ctor_set(v___x_2814_, 1, v___y_2793_);
if (v_isShared_2813_ == 0)
{
lean_ctor_set(v___x_2812_, 0, v___x_2814_);
v___x_2816_ = v___x_2812_;
goto v_reusejp_2815_;
}
else
{
lean_object* v_reuseFailAlloc_2820_; 
v_reuseFailAlloc_2820_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2820_, 0, v___x_2814_);
v___x_2816_ = v_reuseFailAlloc_2820_;
goto v_reusejp_2815_;
}
v_reusejp_2815_:
{
lean_object* v___x_2818_; 
if (v_isShared_2798_ == 0)
{
lean_ctor_set(v___x_2797_, 0, v___x_2816_);
v___x_2818_ = v___x_2797_;
goto v_reusejp_2817_;
}
else
{
lean_object* v_reuseFailAlloc_2819_; 
v_reuseFailAlloc_2819_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2819_, 0, v___x_2816_);
v___x_2818_ = v_reuseFailAlloc_2819_;
goto v_reusejp_2817_;
}
v_reusejp_2817_:
{
return v___x_2818_;
}
}
}
}
}
}
else
{
lean_object* v_a_2823_; lean_object* v___x_2825_; uint8_t v_isShared_2826_; uint8_t v_isSharedCheck_2830_; 
lean_dec(v___y_2793_);
v_a_2823_ = lean_ctor_get(v___x_2794_, 0);
v_isSharedCheck_2830_ = !lean_is_exclusive(v___x_2794_);
if (v_isSharedCheck_2830_ == 0)
{
v___x_2825_ = v___x_2794_;
v_isShared_2826_ = v_isSharedCheck_2830_;
goto v_resetjp_2824_;
}
else
{
lean_inc(v_a_2823_);
lean_dec(v___x_2794_);
v___x_2825_ = lean_box(0);
v_isShared_2826_ = v_isSharedCheck_2830_;
goto v_resetjp_2824_;
}
v_resetjp_2824_:
{
lean_object* v___x_2828_; 
if (v_isShared_2826_ == 0)
{
v___x_2828_ = v___x_2825_;
goto v_reusejp_2827_;
}
else
{
lean_object* v_reuseFailAlloc_2829_; 
v_reuseFailAlloc_2829_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2829_, 0, v_a_2823_);
v___x_2828_ = v_reuseFailAlloc_2829_;
goto v_reusejp_2827_;
}
v_reusejp_2827_:
{
return v___x_2828_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0___lam__0___boxed(lean_object* v_f_2853_, lean_object* v_decl_2854_, lean_object* v_ci_2855_, lean_object* v___y_2856_, lean_object* v___y_2857_, lean_object* v___y_2858_, lean_object* v___y_2859_, lean_object* v___y_2860_, lean_object* v___y_2861_, lean_object* v___y_2862_, lean_object* v___y_2863_, lean_object* v___y_2864_){
_start:
{
lean_object* v_res_2865_; 
v_res_2865_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0___lam__0(v_f_2853_, v_decl_2854_, v_ci_2855_, v___y_2856_, v___y_2857_, v___y_2858_, v___y_2859_, v___y_2860_, v___y_2861_, v___y_2862_, v___y_2863_);
lean_dec(v___y_2863_);
lean_dec_ref(v___y_2862_);
lean_dec(v___y_2861_);
lean_dec_ref(v___y_2860_);
lean_dec_ref(v___y_2859_);
lean_dec(v___y_2858_);
lean_dec_ref(v___y_2857_);
lean_dec(v___y_2856_);
return v_res_2865_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3_spec__9_spec__16_spec__23___redArg(lean_object* v_f_2866_, lean_object* v_keys_2867_, lean_object* v_vals_2868_, lean_object* v_i_2869_, lean_object* v_acc_2870_, lean_object* v___y_2871_, lean_object* v___y_2872_, lean_object* v___y_2873_, lean_object* v___y_2874_, lean_object* v___y_2875_, lean_object* v___y_2876_, lean_object* v___y_2877_, lean_object* v___y_2878_){
_start:
{
lean_object* v___x_2880_; uint8_t v___x_2881_; 
v___x_2880_ = lean_array_get_size(v_keys_2867_);
v___x_2881_ = lean_nat_dec_lt(v_i_2869_, v___x_2880_);
if (v___x_2881_ == 0)
{
lean_object* v___x_2882_; lean_object* v___x_2883_; lean_object* v___x_2884_; 
lean_dec(v_i_2869_);
lean_dec_ref(v_f_2866_);
v___x_2882_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2882_, 0, v_acc_2870_);
lean_ctor_set(v___x_2882_, 1, v___y_2871_);
v___x_2883_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2883_, 0, v___x_2882_);
v___x_2884_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2884_, 0, v___x_2883_);
return v___x_2884_;
}
else
{
lean_object* v_k_2885_; lean_object* v_v_2886_; lean_object* v___x_2887_; 
v_k_2885_ = lean_array_fget_borrowed(v_keys_2867_, v_i_2869_);
v_v_2886_ = lean_array_fget_borrowed(v_vals_2868_, v_i_2869_);
lean_inc_ref(v_f_2866_);
lean_inc(v___y_2878_);
lean_inc_ref(v___y_2877_);
lean_inc(v___y_2876_);
lean_inc_ref(v___y_2875_);
lean_inc_ref(v___y_2874_);
lean_inc(v___y_2873_);
lean_inc_ref(v___y_2872_);
lean_inc(v_v_2886_);
lean_inc(v_k_2885_);
v___x_2887_ = lean_apply_12(v_f_2866_, v_acc_2870_, v_k_2885_, v_v_2886_, v___y_2871_, v___y_2872_, v___y_2873_, v___y_2874_, v___y_2875_, v___y_2876_, v___y_2877_, v___y_2878_, lean_box(0));
if (lean_obj_tag(v___x_2887_) == 0)
{
lean_object* v_a_2888_; 
v_a_2888_ = lean_ctor_get(v___x_2887_, 0);
lean_inc(v_a_2888_);
if (lean_obj_tag(v_a_2888_) == 0)
{
lean_dec_ref_known(v_a_2888_, 1);
lean_dec(v_i_2869_);
lean_dec_ref(v_f_2866_);
return v___x_2887_;
}
else
{
lean_object* v_a_2889_; lean_object* v_fst_2890_; lean_object* v_snd_2891_; lean_object* v___x_2892_; lean_object* v___x_2893_; 
lean_dec_ref_known(v___x_2887_, 1);
v_a_2889_ = lean_ctor_get(v_a_2888_, 0);
lean_inc(v_a_2889_);
lean_dec_ref_known(v_a_2888_, 1);
v_fst_2890_ = lean_ctor_get(v_a_2889_, 0);
lean_inc(v_fst_2890_);
v_snd_2891_ = lean_ctor_get(v_a_2889_, 1);
lean_inc(v_snd_2891_);
lean_dec(v_a_2889_);
v___x_2892_ = lean_unsigned_to_nat(1u);
v___x_2893_ = lean_nat_add(v_i_2869_, v___x_2892_);
lean_dec(v_i_2869_);
v_i_2869_ = v___x_2893_;
v_acc_2870_ = v_fst_2890_;
v___y_2871_ = v_snd_2891_;
goto _start;
}
}
else
{
lean_dec(v_i_2869_);
lean_dec_ref(v_f_2866_);
return v___x_2887_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3_spec__9_spec__16_spec__23___redArg___boxed(lean_object* v_f_2895_, lean_object* v_keys_2896_, lean_object* v_vals_2897_, lean_object* v_i_2898_, lean_object* v_acc_2899_, lean_object* v___y_2900_, lean_object* v___y_2901_, lean_object* v___y_2902_, lean_object* v___y_2903_, lean_object* v___y_2904_, lean_object* v___y_2905_, lean_object* v___y_2906_, lean_object* v___y_2907_, lean_object* v___y_2908_){
_start:
{
lean_object* v_res_2909_; 
v_res_2909_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3_spec__9_spec__16_spec__23___redArg(v_f_2895_, v_keys_2896_, v_vals_2897_, v_i_2898_, v_acc_2899_, v___y_2900_, v___y_2901_, v___y_2902_, v___y_2903_, v___y_2904_, v___y_2905_, v___y_2906_, v___y_2907_);
lean_dec(v___y_2907_);
lean_dec_ref(v___y_2906_);
lean_dec(v___y_2905_);
lean_dec_ref(v___y_2904_);
lean_dec_ref(v___y_2903_);
lean_dec(v___y_2902_);
lean_dec_ref(v___y_2901_);
lean_dec_ref(v_vals_2897_);
lean_dec_ref(v_keys_2896_);
return v_res_2909_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3_spec__9_spec__16_spec__22___redArg(lean_object* v_f_2910_, lean_object* v_as_2911_, size_t v_i_2912_, size_t v_stop_2913_, lean_object* v_b_2914_, lean_object* v___y_2915_, lean_object* v___y_2916_, lean_object* v___y_2917_, lean_object* v___y_2918_, lean_object* v___y_2919_, lean_object* v___y_2920_, lean_object* v___y_2921_, lean_object* v___y_2922_){
_start:
{
lean_object* v_fst_2925_; lean_object* v_snd_2926_; lean_object* v___y_2931_; uint8_t v___x_2936_; 
v___x_2936_ = lean_usize_dec_eq(v_i_2912_, v_stop_2913_);
if (v___x_2936_ == 0)
{
lean_object* v___x_2937_; 
v___x_2937_ = lean_array_uget_borrowed(v_as_2911_, v_i_2912_);
switch(lean_obj_tag(v___x_2937_))
{
case 0:
{
lean_object* v_key_2938_; lean_object* v_val_2939_; lean_object* v___x_2940_; 
v_key_2938_ = lean_ctor_get(v___x_2937_, 0);
v_val_2939_ = lean_ctor_get(v___x_2937_, 1);
lean_inc_ref(v_f_2910_);
lean_inc(v___y_2922_);
lean_inc_ref(v___y_2921_);
lean_inc(v___y_2920_);
lean_inc_ref(v___y_2919_);
lean_inc_ref(v___y_2918_);
lean_inc(v___y_2917_);
lean_inc_ref(v___y_2916_);
lean_inc(v_val_2939_);
lean_inc(v_key_2938_);
v___x_2940_ = lean_apply_12(v_f_2910_, v_b_2914_, v_key_2938_, v_val_2939_, v___y_2915_, v___y_2916_, v___y_2917_, v___y_2918_, v___y_2919_, v___y_2920_, v___y_2921_, v___y_2922_, lean_box(0));
v___y_2931_ = v___x_2940_;
goto v___jp_2930_;
}
case 1:
{
lean_object* v_node_2941_; lean_object* v___x_2942_; 
v_node_2941_ = lean_ctor_get(v___x_2937_, 0);
lean_inc(v_node_2941_);
lean_inc_ref(v_f_2910_);
v___x_2942_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3_spec__9_spec__16___redArg(v_f_2910_, v_node_2941_, v_b_2914_, v___y_2915_, v___y_2916_, v___y_2917_, v___y_2918_, v___y_2919_, v___y_2920_, v___y_2921_, v___y_2922_);
v___y_2931_ = v___x_2942_;
goto v___jp_2930_;
}
default: 
{
v_fst_2925_ = v_b_2914_;
v_snd_2926_ = v___y_2915_;
goto v___jp_2924_;
}
}
}
else
{
lean_object* v___x_2943_; lean_object* v___x_2944_; lean_object* v___x_2945_; 
lean_dec_ref(v_f_2910_);
v___x_2943_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2943_, 0, v_b_2914_);
lean_ctor_set(v___x_2943_, 1, v___y_2915_);
v___x_2944_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2944_, 0, v___x_2943_);
v___x_2945_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2945_, 0, v___x_2944_);
return v___x_2945_;
}
v___jp_2924_:
{
size_t v___x_2927_; size_t v___x_2928_; 
v___x_2927_ = ((size_t)1ULL);
v___x_2928_ = lean_usize_add(v_i_2912_, v___x_2927_);
v_i_2912_ = v___x_2928_;
v_b_2914_ = v_fst_2925_;
v___y_2915_ = v_snd_2926_;
goto _start;
}
v___jp_2930_:
{
if (lean_obj_tag(v___y_2931_) == 0)
{
lean_object* v_a_2932_; 
v_a_2932_ = lean_ctor_get(v___y_2931_, 0);
if (lean_obj_tag(v_a_2932_) == 0)
{
lean_dec_ref(v_f_2910_);
return v___y_2931_;
}
else
{
lean_object* v_a_2933_; lean_object* v_fst_2934_; lean_object* v_snd_2935_; 
lean_inc_ref(v_a_2932_);
lean_dec_ref_known(v___y_2931_, 1);
v_a_2933_ = lean_ctor_get(v_a_2932_, 0);
lean_inc(v_a_2933_);
lean_dec_ref_known(v_a_2932_, 1);
v_fst_2934_ = lean_ctor_get(v_a_2933_, 0);
lean_inc(v_fst_2934_);
v_snd_2935_ = lean_ctor_get(v_a_2933_, 1);
lean_inc(v_snd_2935_);
lean_dec(v_a_2933_);
v_fst_2925_ = v_fst_2934_;
v_snd_2926_ = v_snd_2935_;
goto v___jp_2924_;
}
}
else
{
lean_dec_ref(v_f_2910_);
return v___y_2931_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3_spec__9_spec__16___redArg(lean_object* v_f_2946_, lean_object* v_x_2947_, lean_object* v_x_2948_, lean_object* v___y_2949_, lean_object* v___y_2950_, lean_object* v___y_2951_, lean_object* v___y_2952_, lean_object* v___y_2953_, lean_object* v___y_2954_, lean_object* v___y_2955_, lean_object* v___y_2956_){
_start:
{
if (lean_obj_tag(v_x_2947_) == 0)
{
lean_object* v_es_2958_; lean_object* v___x_2960_; uint8_t v_isShared_2961_; uint8_t v_isSharedCheck_2973_; 
v_es_2958_ = lean_ctor_get(v_x_2947_, 0);
v_isSharedCheck_2973_ = !lean_is_exclusive(v_x_2947_);
if (v_isSharedCheck_2973_ == 0)
{
v___x_2960_ = v_x_2947_;
v_isShared_2961_ = v_isSharedCheck_2973_;
goto v_resetjp_2959_;
}
else
{
lean_inc(v_es_2958_);
lean_dec(v_x_2947_);
v___x_2960_ = lean_box(0);
v_isShared_2961_ = v_isSharedCheck_2973_;
goto v_resetjp_2959_;
}
v_resetjp_2959_:
{
lean_object* v___x_2962_; lean_object* v___x_2963_; uint8_t v___x_2964_; 
v___x_2962_ = lean_unsigned_to_nat(0u);
v___x_2963_ = lean_array_get_size(v_es_2958_);
v___x_2964_ = lean_nat_dec_lt(v___x_2962_, v___x_2963_);
if (v___x_2964_ == 0)
{
lean_object* v___x_2965_; lean_object* v___x_2967_; 
lean_dec_ref(v_es_2958_);
lean_dec_ref(v_f_2946_);
v___x_2965_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2965_, 0, v_x_2948_);
lean_ctor_set(v___x_2965_, 1, v___y_2949_);
if (v_isShared_2961_ == 0)
{
lean_ctor_set_tag(v___x_2960_, 1);
lean_ctor_set(v___x_2960_, 0, v___x_2965_);
v___x_2967_ = v___x_2960_;
goto v_reusejp_2966_;
}
else
{
lean_object* v_reuseFailAlloc_2969_; 
v_reuseFailAlloc_2969_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2969_, 0, v___x_2965_);
v___x_2967_ = v_reuseFailAlloc_2969_;
goto v_reusejp_2966_;
}
v_reusejp_2966_:
{
lean_object* v___x_2968_; 
v___x_2968_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2968_, 0, v___x_2967_);
return v___x_2968_;
}
}
else
{
size_t v___x_2970_; size_t v___x_2971_; lean_object* v___x_2972_; 
lean_del_object(v___x_2960_);
v___x_2970_ = ((size_t)0ULL);
v___x_2971_ = lean_usize_of_nat(v___x_2963_);
v___x_2972_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3_spec__9_spec__16_spec__22___redArg(v_f_2946_, v_es_2958_, v___x_2970_, v___x_2971_, v_x_2948_, v___y_2949_, v___y_2950_, v___y_2951_, v___y_2952_, v___y_2953_, v___y_2954_, v___y_2955_, v___y_2956_);
lean_dec_ref(v_es_2958_);
return v___x_2972_;
}
}
}
else
{
lean_object* v_ks_2974_; lean_object* v_vs_2975_; lean_object* v___x_2976_; lean_object* v___x_2977_; 
v_ks_2974_ = lean_ctor_get(v_x_2947_, 0);
lean_inc_ref(v_ks_2974_);
v_vs_2975_ = lean_ctor_get(v_x_2947_, 1);
lean_inc_ref(v_vs_2975_);
lean_dec_ref_known(v_x_2947_, 2);
v___x_2976_ = lean_unsigned_to_nat(0u);
v___x_2977_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3_spec__9_spec__16_spec__23___redArg(v_f_2946_, v_ks_2974_, v_vs_2975_, v___x_2976_, v_x_2948_, v___y_2949_, v___y_2950_, v___y_2951_, v___y_2952_, v___y_2953_, v___y_2954_, v___y_2955_, v___y_2956_);
lean_dec_ref(v_vs_2975_);
lean_dec_ref(v_ks_2974_);
return v___x_2977_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3_spec__9_spec__16___redArg___boxed(lean_object* v_f_2978_, lean_object* v_x_2979_, lean_object* v_x_2980_, lean_object* v___y_2981_, lean_object* v___y_2982_, lean_object* v___y_2983_, lean_object* v___y_2984_, lean_object* v___y_2985_, lean_object* v___y_2986_, lean_object* v___y_2987_, lean_object* v___y_2988_, lean_object* v___y_2989_){
_start:
{
lean_object* v_res_2990_; 
v_res_2990_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3_spec__9_spec__16___redArg(v_f_2978_, v_x_2979_, v_x_2980_, v___y_2981_, v___y_2982_, v___y_2983_, v___y_2984_, v___y_2985_, v___y_2986_, v___y_2987_, v___y_2988_);
lean_dec(v___y_2988_);
lean_dec_ref(v___y_2987_);
lean_dec(v___y_2986_);
lean_dec_ref(v___y_2985_);
lean_dec_ref(v___y_2984_);
lean_dec(v___y_2983_);
lean_dec_ref(v___y_2982_);
return v_res_2990_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3_spec__9_spec__16_spec__22___redArg___boxed(lean_object* v_f_2991_, lean_object* v_as_2992_, lean_object* v_i_2993_, lean_object* v_stop_2994_, lean_object* v_b_2995_, lean_object* v___y_2996_, lean_object* v___y_2997_, lean_object* v___y_2998_, lean_object* v___y_2999_, lean_object* v___y_3000_, lean_object* v___y_3001_, lean_object* v___y_3002_, lean_object* v___y_3003_, lean_object* v___y_3004_){
_start:
{
size_t v_i_boxed_3005_; size_t v_stop_boxed_3006_; lean_object* v_res_3007_; 
v_i_boxed_3005_ = lean_unbox_usize(v_i_2993_);
lean_dec(v_i_2993_);
v_stop_boxed_3006_ = lean_unbox_usize(v_stop_2994_);
lean_dec(v_stop_2994_);
v_res_3007_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3_spec__9_spec__16_spec__22___redArg(v_f_2991_, v_as_2992_, v_i_boxed_3005_, v_stop_boxed_3006_, v_b_2995_, v___y_2996_, v___y_2997_, v___y_2998_, v___y_2999_, v___y_3000_, v___y_3001_, v___y_3002_, v___y_3003_);
lean_dec(v___y_3003_);
lean_dec_ref(v___y_3002_);
lean_dec(v___y_3001_);
lean_dec_ref(v___y_3000_);
lean_dec_ref(v___y_2999_);
lean_dec(v___y_2998_);
lean_dec_ref(v___y_2997_);
lean_dec_ref(v_as_2992_);
return v_res_3007_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3___redArg___lam__0(lean_object* v_f_3008_, lean_object* v_x_3009_, lean_object* v___y_3010_, lean_object* v___y_3011_, lean_object* v___y_3012_, lean_object* v___y_3013_, lean_object* v___y_3014_, lean_object* v___y_3015_, lean_object* v___y_3016_, lean_object* v___y_3017_, lean_object* v___y_3018_, lean_object* v___y_3019_){
_start:
{
lean_object* v___x_3021_; 
lean_inc(v___y_3019_);
lean_inc_ref(v___y_3018_);
lean_inc(v___y_3017_);
lean_inc_ref(v___y_3016_);
lean_inc_ref(v___y_3015_);
lean_inc(v___y_3014_);
lean_inc_ref(v___y_3013_);
v___x_3021_ = lean_apply_11(v_f_3008_, v___y_3010_, v___y_3011_, v___y_3012_, v___y_3013_, v___y_3014_, v___y_3015_, v___y_3016_, v___y_3017_, v___y_3018_, v___y_3019_, lean_box(0));
return v___x_3021_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3___redArg___lam__0___boxed(lean_object* v_f_3022_, lean_object* v_x_3023_, lean_object* v___y_3024_, lean_object* v___y_3025_, lean_object* v___y_3026_, lean_object* v___y_3027_, lean_object* v___y_3028_, lean_object* v___y_3029_, lean_object* v___y_3030_, lean_object* v___y_3031_, lean_object* v___y_3032_, lean_object* v___y_3033_, lean_object* v___y_3034_){
_start:
{
lean_object* v_res_3035_; 
v_res_3035_ = l_Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3___redArg___lam__0(v_f_3022_, v_x_3023_, v___y_3024_, v___y_3025_, v___y_3026_, v___y_3027_, v___y_3028_, v___y_3029_, v___y_3030_, v___y_3031_, v___y_3032_, v___y_3033_);
lean_dec(v___y_3033_);
lean_dec_ref(v___y_3032_);
lean_dec(v___y_3031_);
lean_dec_ref(v___y_3030_);
lean_dec_ref(v___y_3029_);
lean_dec(v___y_3028_);
lean_dec_ref(v___y_3027_);
return v_res_3035_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3___redArg(lean_object* v_map_3036_, lean_object* v_f_3037_, lean_object* v___y_3038_, lean_object* v___y_3039_, lean_object* v___y_3040_, lean_object* v___y_3041_, lean_object* v___y_3042_, lean_object* v___y_3043_, lean_object* v___y_3044_, lean_object* v___y_3045_){
_start:
{
lean_object* v___f_3047_; lean_object* v___x_3048_; lean_object* v___x_3049_; 
v___f_3047_ = lean_alloc_closure((void*)(l_Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3___redArg___lam__0___boxed), 13, 1);
lean_closure_set(v___f_3047_, 0, v_f_3037_);
v___x_3048_ = lean_box(0);
v___x_3049_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3_spec__9_spec__16___redArg(v___f_3047_, v_map_3036_, v___x_3048_, v___y_3038_, v___y_3039_, v___y_3040_, v___y_3041_, v___y_3042_, v___y_3043_, v___y_3044_, v___y_3045_);
return v___x_3049_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3___redArg___boxed(lean_object* v_map_3050_, lean_object* v_f_3051_, lean_object* v___y_3052_, lean_object* v___y_3053_, lean_object* v___y_3054_, lean_object* v___y_3055_, lean_object* v___y_3056_, lean_object* v___y_3057_, lean_object* v___y_3058_, lean_object* v___y_3059_, lean_object* v___y_3060_){
_start:
{
lean_object* v_res_3061_; 
v_res_3061_ = l_Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3___redArg(v_map_3050_, v_f_3051_, v___y_3052_, v___y_3053_, v___y_3054_, v___y_3055_, v___y_3056_, v___y_3057_, v___y_3058_, v___y_3059_);
lean_dec(v___y_3059_);
lean_dec_ref(v___y_3058_);
lean_dec(v___y_3057_);
lean_dec_ref(v___y_3056_);
lean_dec_ref(v___y_3055_);
lean_dec(v___y_3054_);
lean_dec_ref(v___y_3053_);
return v_res_3061_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__2(lean_object* v_f_3062_, lean_object* v_x_3063_, lean_object* v_x_3064_, lean_object* v___y_3065_, lean_object* v___y_3066_, lean_object* v___y_3067_, lean_object* v___y_3068_, lean_object* v___y_3069_, lean_object* v___y_3070_, lean_object* v___y_3071_, lean_object* v___y_3072_){
_start:
{
if (lean_obj_tag(v_x_3064_) == 0)
{
lean_object* v___x_3074_; lean_object* v___x_3075_; lean_object* v___x_3076_; 
lean_dec_ref(v_f_3062_);
v___x_3074_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3074_, 0, v_x_3063_);
lean_ctor_set(v___x_3074_, 1, v___y_3065_);
v___x_3075_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3075_, 0, v___x_3074_);
v___x_3076_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3076_, 0, v___x_3075_);
return v___x_3076_;
}
else
{
lean_object* v_key_3077_; lean_object* v_value_3078_; lean_object* v_tail_3079_; lean_object* v___x_3080_; 
v_key_3077_ = lean_ctor_get(v_x_3064_, 0);
lean_inc(v_key_3077_);
v_value_3078_ = lean_ctor_get(v_x_3064_, 1);
lean_inc(v_value_3078_);
v_tail_3079_ = lean_ctor_get(v_x_3064_, 2);
lean_inc(v_tail_3079_);
lean_dec_ref_known(v_x_3064_, 3);
lean_inc_ref(v_f_3062_);
lean_inc(v___y_3072_);
lean_inc_ref(v___y_3071_);
lean_inc(v___y_3070_);
lean_inc_ref(v___y_3069_);
lean_inc_ref(v___y_3068_);
lean_inc(v___y_3067_);
lean_inc_ref(v___y_3066_);
v___x_3080_ = lean_apply_11(v_f_3062_, v_key_3077_, v_value_3078_, v___y_3065_, v___y_3066_, v___y_3067_, v___y_3068_, v___y_3069_, v___y_3070_, v___y_3071_, v___y_3072_, lean_box(0));
if (lean_obj_tag(v___x_3080_) == 0)
{
lean_object* v_a_3081_; 
v_a_3081_ = lean_ctor_get(v___x_3080_, 0);
lean_inc(v_a_3081_);
if (lean_obj_tag(v_a_3081_) == 0)
{
lean_dec_ref_known(v_a_3081_, 1);
lean_dec(v_tail_3079_);
lean_dec_ref(v_f_3062_);
return v___x_3080_;
}
else
{
lean_object* v_a_3082_; lean_object* v_fst_3083_; lean_object* v_snd_3084_; 
lean_dec_ref_known(v___x_3080_, 1);
v_a_3082_ = lean_ctor_get(v_a_3081_, 0);
lean_inc(v_a_3082_);
lean_dec_ref_known(v_a_3081_, 1);
v_fst_3083_ = lean_ctor_get(v_a_3082_, 0);
lean_inc(v_fst_3083_);
v_snd_3084_ = lean_ctor_get(v_a_3082_, 1);
lean_inc(v_snd_3084_);
lean_dec(v_a_3082_);
v_x_3063_ = v_fst_3083_;
v_x_3064_ = v_tail_3079_;
v___y_3065_ = v_snd_3084_;
goto _start;
}
}
else
{
lean_dec(v_tail_3079_);
lean_dec_ref(v_f_3062_);
return v___x_3080_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__2___boxed(lean_object* v_f_3086_, lean_object* v_x_3087_, lean_object* v_x_3088_, lean_object* v___y_3089_, lean_object* v___y_3090_, lean_object* v___y_3091_, lean_object* v___y_3092_, lean_object* v___y_3093_, lean_object* v___y_3094_, lean_object* v___y_3095_, lean_object* v___y_3096_, lean_object* v___y_3097_){
_start:
{
lean_object* v_res_3098_; 
v_res_3098_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__2(v_f_3086_, v_x_3087_, v_x_3088_, v___y_3089_, v___y_3090_, v___y_3091_, v___y_3092_, v___y_3093_, v___y_3094_, v___y_3095_, v___y_3096_);
lean_dec(v___y_3096_);
lean_dec_ref(v___y_3095_);
lean_dec(v___y_3094_);
lean_dec_ref(v___y_3093_);
lean_dec_ref(v___y_3092_);
lean_dec(v___y_3091_);
lean_dec_ref(v___y_3090_);
return v_res_3098_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__4(lean_object* v_f_3099_, lean_object* v_as_3100_, size_t v_i_3101_, size_t v_stop_3102_, lean_object* v_b_3103_, lean_object* v___y_3104_, lean_object* v___y_3105_, lean_object* v___y_3106_, lean_object* v___y_3107_, lean_object* v___y_3108_, lean_object* v___y_3109_, lean_object* v___y_3110_, lean_object* v___y_3111_){
_start:
{
uint8_t v___x_3113_; 
v___x_3113_ = lean_usize_dec_eq(v_i_3101_, v_stop_3102_);
if (v___x_3113_ == 0)
{
lean_object* v___x_3114_; lean_object* v___x_3115_; lean_object* v___x_3116_; 
v___x_3114_ = lean_array_uget_borrowed(v_as_3100_, v_i_3101_);
v___x_3115_ = lean_box(0);
lean_inc(v___x_3114_);
lean_inc_ref(v_f_3099_);
v___x_3116_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__2(v_f_3099_, v___x_3115_, v___x_3114_, v___y_3104_, v___y_3105_, v___y_3106_, v___y_3107_, v___y_3108_, v___y_3109_, v___y_3110_, v___y_3111_);
if (lean_obj_tag(v___x_3116_) == 0)
{
lean_object* v_a_3117_; 
v_a_3117_ = lean_ctor_get(v___x_3116_, 0);
lean_inc(v_a_3117_);
if (lean_obj_tag(v_a_3117_) == 0)
{
lean_dec_ref_known(v_a_3117_, 1);
lean_dec_ref(v_f_3099_);
return v___x_3116_;
}
else
{
lean_object* v_a_3118_; lean_object* v_fst_3119_; lean_object* v_snd_3120_; size_t v___x_3121_; size_t v___x_3122_; 
lean_dec_ref_known(v___x_3116_, 1);
v_a_3118_ = lean_ctor_get(v_a_3117_, 0);
lean_inc(v_a_3118_);
lean_dec_ref_known(v_a_3117_, 1);
v_fst_3119_ = lean_ctor_get(v_a_3118_, 0);
lean_inc(v_fst_3119_);
v_snd_3120_ = lean_ctor_get(v_a_3118_, 1);
lean_inc(v_snd_3120_);
lean_dec(v_a_3118_);
v___x_3121_ = ((size_t)1ULL);
v___x_3122_ = lean_usize_add(v_i_3101_, v___x_3121_);
v_i_3101_ = v___x_3122_;
v_b_3103_ = v_fst_3119_;
v___y_3104_ = v_snd_3120_;
goto _start;
}
}
else
{
lean_dec_ref(v_f_3099_);
return v___x_3116_;
}
}
else
{
lean_object* v___x_3124_; lean_object* v___x_3125_; lean_object* v___x_3126_; 
lean_dec_ref(v_f_3099_);
v___x_3124_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3124_, 0, v_b_3103_);
lean_ctor_set(v___x_3124_, 1, v___y_3104_);
v___x_3125_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3125_, 0, v___x_3124_);
v___x_3126_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3126_, 0, v___x_3125_);
return v___x_3126_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__4___boxed(lean_object* v_f_3127_, lean_object* v_as_3128_, lean_object* v_i_3129_, lean_object* v_stop_3130_, lean_object* v_b_3131_, lean_object* v___y_3132_, lean_object* v___y_3133_, lean_object* v___y_3134_, lean_object* v___y_3135_, lean_object* v___y_3136_, lean_object* v___y_3137_, lean_object* v___y_3138_, lean_object* v___y_3139_, lean_object* v___y_3140_){
_start:
{
size_t v_i_boxed_3141_; size_t v_stop_boxed_3142_; lean_object* v_res_3143_; 
v_i_boxed_3141_ = lean_unbox_usize(v_i_3129_);
lean_dec(v_i_3129_);
v_stop_boxed_3142_ = lean_unbox_usize(v_stop_3130_);
lean_dec(v_stop_3130_);
v_res_3143_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__4(v_f_3127_, v_as_3128_, v_i_boxed_3141_, v_stop_boxed_3142_, v_b_3131_, v___y_3132_, v___y_3133_, v___y_3134_, v___y_3135_, v___y_3136_, v___y_3137_, v___y_3138_, v___y_3139_);
lean_dec(v___y_3139_);
lean_dec_ref(v___y_3138_);
lean_dec(v___y_3137_);
lean_dec_ref(v___y_3136_);
lean_dec_ref(v___y_3135_);
lean_dec(v___y_3134_);
lean_dec_ref(v___y_3133_);
lean_dec_ref(v_as_3128_);
return v_res_3143_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0___lam__0(lean_object* v_env_3144_, lean_object* v_f_3145_, lean_object* v_name_3146_, lean_object* v_c_3147_, lean_object* v___y_3148_, lean_object* v___y_3149_, lean_object* v___y_3150_, lean_object* v___y_3151_, lean_object* v___y_3152_, lean_object* v___y_3153_, lean_object* v___y_3154_, lean_object* v___y_3155_){
_start:
{
uint8_t v___x_3157_; 
lean_inc(v_name_3146_);
v___x_3157_ = l_Lean_Meta_allowCompletion(v_env_3144_, v_name_3146_);
if (v___x_3157_ == 0)
{
lean_object* v___x_3158_; lean_object* v___x_3159_; lean_object* v___x_3160_; lean_object* v___x_3161_; 
lean_dec_ref(v_c_3147_);
lean_dec(v_name_3146_);
lean_dec_ref(v_f_3145_);
v___x_3158_ = lean_box(0);
v___x_3159_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3159_, 0, v___x_3158_);
lean_ctor_set(v___x_3159_, 1, v___y_3148_);
v___x_3160_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3160_, 0, v___x_3159_);
v___x_3161_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3161_, 0, v___x_3160_);
return v___x_3161_;
}
else
{
lean_object* v___x_3162_; lean_object* v___x_3163_; lean_object* v___x_3164_; lean_object* v___x_3165_; 
lean_inc_ref(v_c_3147_);
v___x_3162_ = lean_alloc_closure((void*)(l_Lean_Server_Completion_getCompletionKindForDecl___boxed), 6, 1);
lean_closure_set(v___x_3162_, 0, v_c_3147_);
lean_inc(v_name_3146_);
v___x_3163_ = lean_alloc_closure((void*)(l_Lean_Server_Completion_getCompletionTagsForDecl___boxed), 6, 1);
lean_closure_set(v___x_3163_, 0, v_name_3146_);
v___x_3164_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3164_, 0, v_c_3147_);
lean_ctor_set(v___x_3164_, 1, v___x_3162_);
lean_ctor_set(v___x_3164_, 2, v___x_3163_);
lean_inc(v___y_3155_);
lean_inc_ref(v___y_3154_);
lean_inc(v___y_3153_);
lean_inc_ref(v___y_3152_);
lean_inc_ref(v___y_3151_);
lean_inc(v___y_3150_);
lean_inc_ref(v___y_3149_);
v___x_3165_ = lean_apply_11(v_f_3145_, v_name_3146_, v___x_3164_, v___y_3148_, v___y_3149_, v___y_3150_, v___y_3151_, v___y_3152_, v___y_3153_, v___y_3154_, v___y_3155_, lean_box(0));
return v___x_3165_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0___lam__0___boxed(lean_object* v_env_3166_, lean_object* v_f_3167_, lean_object* v_name_3168_, lean_object* v_c_3169_, lean_object* v___y_3170_, lean_object* v___y_3171_, lean_object* v___y_3172_, lean_object* v___y_3173_, lean_object* v___y_3174_, lean_object* v___y_3175_, lean_object* v___y_3176_, lean_object* v___y_3177_, lean_object* v___y_3178_){
_start:
{
lean_object* v_res_3179_; 
v_res_3179_ = l_Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0___lam__0(v_env_3166_, v_f_3167_, v_name_3168_, v_c_3169_, v___y_3170_, v___y_3171_, v___y_3172_, v___y_3173_, v___y_3174_, v___y_3175_, v___y_3176_, v___y_3177_);
lean_dec(v___y_3177_);
lean_dec_ref(v___y_3176_);
lean_dec(v___y_3175_);
lean_dec_ref(v___y_3174_);
lean_dec_ref(v___y_3173_);
lean_dec(v___y_3172_);
lean_dec_ref(v___y_3171_);
return v_res_3179_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0(lean_object* v_f_3180_, lean_object* v___y_3181_, lean_object* v___y_3182_, lean_object* v___y_3183_, lean_object* v___y_3184_, lean_object* v___y_3185_, lean_object* v___y_3186_, lean_object* v___y_3187_, lean_object* v___y_3188_){
_start:
{
lean_object* v___x_3190_; lean_object* v_env_3191_; lean_object* v___f_3192_; lean_object* v___x_3193_; 
v___x_3190_ = lean_st_ref_get(v___y_3188_);
v_env_3191_ = lean_ctor_get(v___x_3190_, 0);
lean_inc_ref_n(v_env_3191_, 3);
lean_dec(v___x_3190_);
lean_inc_ref(v_f_3180_);
v___f_3192_ = lean_alloc_closure((void*)(l_Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0___lam__0___boxed), 13, 2);
lean_closure_set(v___f_3192_, 0, v_env_3191_);
lean_closure_set(v___f_3192_, 1, v_f_3180_);
v___x_3193_ = l_Lean_Server_Completion_getEligibleHeaderDecls(v_env_3191_, v___y_3185_, v___y_3186_, v___y_3187_, v___y_3188_);
if (lean_obj_tag(v___x_3193_) == 0)
{
lean_object* v_a_3194_; lean_object* v_buckets_3195_; lean_object* v___x_3196_; lean_object* v___x_3197_; uint8_t v___x_3198_; 
v_a_3194_ = lean_ctor_get(v___x_3193_, 0);
lean_inc(v_a_3194_);
lean_dec_ref_known(v___x_3193_, 1);
v_buckets_3195_ = lean_ctor_get(v_a_3194_, 1);
lean_inc_ref(v_buckets_3195_);
lean_dec(v_a_3194_);
v___x_3196_ = lean_unsigned_to_nat(0u);
v___x_3197_ = lean_array_get_size(v_buckets_3195_);
v___x_3198_ = lean_nat_dec_lt(v___x_3196_, v___x_3197_);
if (v___x_3198_ == 0)
{
lean_object* v___x_3199_; lean_object* v_map_u2082_3200_; lean_object* v___x_3201_; 
lean_dec_ref(v_buckets_3195_);
lean_dec_ref(v_f_3180_);
v___x_3199_ = l_Lean_Environment_constants(v_env_3191_);
v_map_u2082_3200_ = lean_ctor_get(v___x_3199_, 1);
lean_inc_ref(v_map_u2082_3200_);
lean_dec_ref(v___x_3199_);
v___x_3201_ = l_Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3___redArg(v_map_u2082_3200_, v___f_3192_, v___y_3181_, v___y_3182_, v___y_3183_, v___y_3184_, v___y_3185_, v___y_3186_, v___y_3187_, v___y_3188_);
return v___x_3201_;
}
else
{
lean_object* v___x_3202_; size_t v___x_3203_; size_t v___x_3204_; lean_object* v___x_3205_; 
v___x_3202_ = lean_box(0);
v___x_3203_ = ((size_t)0ULL);
v___x_3204_ = lean_usize_of_nat(v___x_3197_);
v___x_3205_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__4(v_f_3180_, v_buckets_3195_, v___x_3203_, v___x_3204_, v___x_3202_, v___y_3181_, v___y_3182_, v___y_3183_, v___y_3184_, v___y_3185_, v___y_3186_, v___y_3187_, v___y_3188_);
lean_dec_ref(v_buckets_3195_);
if (lean_obj_tag(v___x_3205_) == 0)
{
lean_object* v_a_3206_; 
v_a_3206_ = lean_ctor_get(v___x_3205_, 0);
lean_inc(v_a_3206_);
if (lean_obj_tag(v_a_3206_) == 0)
{
lean_dec_ref_known(v_a_3206_, 1);
lean_dec_ref(v___f_3192_);
lean_dec_ref(v_env_3191_);
return v___x_3205_;
}
else
{
lean_object* v_a_3207_; lean_object* v_snd_3208_; lean_object* v___x_3209_; lean_object* v_map_u2082_3210_; lean_object* v___x_3211_; 
lean_dec_ref_known(v___x_3205_, 1);
v_a_3207_ = lean_ctor_get(v_a_3206_, 0);
lean_inc(v_a_3207_);
lean_dec_ref_known(v_a_3206_, 1);
v_snd_3208_ = lean_ctor_get(v_a_3207_, 1);
lean_inc(v_snd_3208_);
lean_dec(v_a_3207_);
v___x_3209_ = l_Lean_Environment_constants(v_env_3191_);
v_map_u2082_3210_ = lean_ctor_get(v___x_3209_, 1);
lean_inc_ref(v_map_u2082_3210_);
lean_dec_ref(v___x_3209_);
v___x_3211_ = l_Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3___redArg(v_map_u2082_3210_, v___f_3192_, v_snd_3208_, v___y_3182_, v___y_3183_, v___y_3184_, v___y_3185_, v___y_3186_, v___y_3187_, v___y_3188_);
return v___x_3211_;
}
}
else
{
lean_dec_ref(v___f_3192_);
lean_dec_ref(v_env_3191_);
return v___x_3205_;
}
}
}
else
{
lean_object* v_a_3212_; lean_object* v___x_3214_; uint8_t v_isShared_3215_; uint8_t v_isSharedCheck_3219_; 
lean_dec_ref(v___f_3192_);
lean_dec_ref(v_env_3191_);
lean_dec(v___y_3181_);
lean_dec_ref(v_f_3180_);
v_a_3212_ = lean_ctor_get(v___x_3193_, 0);
v_isSharedCheck_3219_ = !lean_is_exclusive(v___x_3193_);
if (v_isSharedCheck_3219_ == 0)
{
v___x_3214_ = v___x_3193_;
v_isShared_3215_ = v_isSharedCheck_3219_;
goto v_resetjp_3213_;
}
else
{
lean_inc(v_a_3212_);
lean_dec(v___x_3193_);
v___x_3214_ = lean_box(0);
v_isShared_3215_ = v_isSharedCheck_3219_;
goto v_resetjp_3213_;
}
v_resetjp_3213_:
{
lean_object* v___x_3217_; 
if (v_isShared_3215_ == 0)
{
v___x_3217_ = v___x_3214_;
goto v_reusejp_3216_;
}
else
{
lean_object* v_reuseFailAlloc_3218_; 
v_reuseFailAlloc_3218_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3218_, 0, v_a_3212_);
v___x_3217_ = v_reuseFailAlloc_3218_;
goto v_reusejp_3216_;
}
v_reusejp_3216_:
{
return v___x_3217_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0___boxed(lean_object* v_f_3220_, lean_object* v___y_3221_, lean_object* v___y_3222_, lean_object* v___y_3223_, lean_object* v___y_3224_, lean_object* v___y_3225_, lean_object* v___y_3226_, lean_object* v___y_3227_, lean_object* v___y_3228_, lean_object* v___y_3229_){
_start:
{
lean_object* v_res_3230_; 
v_res_3230_ = l_Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0(v_f_3220_, v___y_3221_, v___y_3222_, v___y_3223_, v___y_3224_, v___y_3225_, v___y_3226_, v___y_3227_, v___y_3228_);
lean_dec(v___y_3228_);
lean_dec_ref(v___y_3227_);
lean_dec(v___y_3226_);
lean_dec_ref(v___y_3225_);
lean_dec_ref(v___y_3224_);
lean_dec(v___y_3223_);
lean_dec_ref(v___y_3222_);
return v_res_3230_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0(lean_object* v_f_3231_, lean_object* v___y_3232_, lean_object* v___y_3233_, lean_object* v___y_3234_, lean_object* v___y_3235_, lean_object* v___y_3236_, lean_object* v___y_3237_, lean_object* v___y_3238_){
_start:
{
lean_object* v___f_3240_; lean_object* v___x_3241_; lean_object* v___x_3242_; 
v___f_3240_ = lean_alloc_closure((void*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0___lam__0___boxed), 12, 1);
lean_closure_set(v___f_3240_, 0, v_f_3231_);
v___x_3241_ = lean_unsigned_to_nat(0u);
v___x_3242_ = l_Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0(v___f_3240_, v___x_3241_, v___y_3232_, v___y_3233_, v___y_3234_, v___y_3235_, v___y_3236_, v___y_3237_, v___y_3238_);
if (lean_obj_tag(v___x_3242_) == 0)
{
lean_object* v_a_3243_; lean_object* v___x_3245_; uint8_t v_isShared_3246_; uint8_t v_isSharedCheck_3262_; 
v_a_3243_ = lean_ctor_get(v___x_3242_, 0);
v_isSharedCheck_3262_ = !lean_is_exclusive(v___x_3242_);
if (v_isSharedCheck_3262_ == 0)
{
v___x_3245_ = v___x_3242_;
v_isShared_3246_ = v_isSharedCheck_3262_;
goto v_resetjp_3244_;
}
else
{
lean_inc(v_a_3243_);
lean_dec(v___x_3242_);
v___x_3245_ = lean_box(0);
v_isShared_3246_ = v_isSharedCheck_3262_;
goto v_resetjp_3244_;
}
v_resetjp_3244_:
{
if (lean_obj_tag(v_a_3243_) == 0)
{
lean_object* v_a_3247_; lean_object* v___x_3249_; uint8_t v_isShared_3250_; uint8_t v_isSharedCheck_3257_; 
v_a_3247_ = lean_ctor_get(v_a_3243_, 0);
v_isSharedCheck_3257_ = !lean_is_exclusive(v_a_3243_);
if (v_isSharedCheck_3257_ == 0)
{
v___x_3249_ = v_a_3243_;
v_isShared_3250_ = v_isSharedCheck_3257_;
goto v_resetjp_3248_;
}
else
{
lean_inc(v_a_3247_);
lean_dec(v_a_3243_);
v___x_3249_ = lean_box(0);
v_isShared_3250_ = v_isSharedCheck_3257_;
goto v_resetjp_3248_;
}
v_resetjp_3248_:
{
lean_object* v___x_3252_; 
if (v_isShared_3250_ == 0)
{
v___x_3252_ = v___x_3249_;
goto v_reusejp_3251_;
}
else
{
lean_object* v_reuseFailAlloc_3256_; 
v_reuseFailAlloc_3256_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3256_, 0, v_a_3247_);
v___x_3252_ = v_reuseFailAlloc_3256_;
goto v_reusejp_3251_;
}
v_reusejp_3251_:
{
lean_object* v___x_3254_; 
if (v_isShared_3246_ == 0)
{
lean_ctor_set(v___x_3245_, 0, v___x_3252_);
v___x_3254_ = v___x_3245_;
goto v_reusejp_3253_;
}
else
{
lean_object* v_reuseFailAlloc_3255_; 
v_reuseFailAlloc_3255_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3255_, 0, v___x_3252_);
v___x_3254_ = v_reuseFailAlloc_3255_;
goto v_reusejp_3253_;
}
v_reusejp_3253_:
{
return v___x_3254_;
}
}
}
}
else
{
lean_object* v___x_3258_; lean_object* v___x_3260_; 
lean_dec_ref_known(v_a_3243_, 1);
v___x_3258_ = ((lean_object*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addItem___redArg___closed__0));
if (v_isShared_3246_ == 0)
{
lean_ctor_set(v___x_3245_, 0, v___x_3258_);
v___x_3260_ = v___x_3245_;
goto v_reusejp_3259_;
}
else
{
lean_object* v_reuseFailAlloc_3261_; 
v_reuseFailAlloc_3261_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3261_, 0, v___x_3258_);
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
v_a_3263_ = lean_ctor_get(v___x_3242_, 0);
v_isSharedCheck_3270_ = !lean_is_exclusive(v___x_3242_);
if (v_isSharedCheck_3270_ == 0)
{
v___x_3265_ = v___x_3242_;
v_isShared_3266_ = v_isSharedCheck_3270_;
goto v_resetjp_3264_;
}
else
{
lean_inc(v_a_3263_);
lean_dec(v___x_3242_);
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
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0___boxed(lean_object* v_f_3271_, lean_object* v___y_3272_, lean_object* v___y_3273_, lean_object* v___y_3274_, lean_object* v___y_3275_, lean_object* v___y_3276_, lean_object* v___y_3277_, lean_object* v___y_3278_, lean_object* v___y_3279_){
_start:
{
lean_object* v_res_3280_; 
v_res_3280_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0(v_f_3271_, v___y_3272_, v___y_3273_, v___y_3274_, v___y_3275_, v___y_3276_, v___y_3277_, v___y_3278_);
lean_dec(v___y_3278_);
lean_dec_ref(v___y_3277_);
lean_dec(v___y_3276_);
lean_dec_ref(v___y_3275_);
lean_dec_ref(v___y_3274_);
lean_dec(v___y_3273_);
lean_dec_ref(v___y_3272_);
return v_res_3280_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__11_spec__17_spec__20___redArg(lean_object* v_id_3283_, uint8_t v_danglingDot_3284_, lean_object* v_as_3285_, size_t v_sz_3286_, size_t v_i_3287_, lean_object* v_b_3288_, lean_object* v___y_3289_, lean_object* v___y_3290_){
_start:
{
uint8_t v___x_3292_; 
v___x_3292_ = lean_usize_dec_lt(v_i_3287_, v_sz_3286_);
if (v___x_3292_ == 0)
{
lean_object* v___x_3293_; lean_object* v___x_3294_; 
v___x_3293_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3293_, 0, v_b_3288_);
v___x_3294_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3294_, 0, v___x_3293_);
return v___x_3294_;
}
else
{
lean_object* v_snd_3295_; lean_object* v___x_3297_; uint8_t v_isShared_3298_; uint8_t v_isSharedCheck_3348_; 
v_snd_3295_ = lean_ctor_get(v_b_3288_, 1);
v_isSharedCheck_3348_ = !lean_is_exclusive(v_b_3288_);
if (v_isSharedCheck_3348_ == 0)
{
lean_object* v_unused_3349_; 
v_unused_3349_ = lean_ctor_get(v_b_3288_, 0);
lean_dec(v_unused_3349_);
v___x_3297_ = v_b_3288_;
v_isShared_3298_ = v_isSharedCheck_3348_;
goto v_resetjp_3296_;
}
else
{
lean_inc(v_snd_3295_);
lean_dec(v_b_3288_);
v___x_3297_ = lean_box(0);
v_isShared_3298_ = v_isSharedCheck_3348_;
goto v_resetjp_3296_;
}
v_resetjp_3296_:
{
lean_object* v___x_3299_; lean_object* v_a_3301_; lean_object* v_a_3308_; 
v___x_3299_ = lean_box(0);
v_a_3308_ = lean_array_uget(v_as_3285_, v_i_3287_);
if (lean_obj_tag(v_a_3308_) == 0)
{
v_a_3301_ = v_snd_3295_;
goto v___jp_3300_;
}
else
{
lean_object* v_val_3309_; lean_object* v___x_3311_; uint8_t v_isShared_3312_; uint8_t v_isSharedCheck_3347_; 
lean_dec(v_snd_3295_);
v_val_3309_ = lean_ctor_get(v_a_3308_, 0);
v_isSharedCheck_3347_ = !lean_is_exclusive(v_a_3308_);
if (v_isSharedCheck_3347_ == 0)
{
v___x_3311_ = v_a_3308_;
v_isShared_3312_ = v_isSharedCheck_3347_;
goto v_resetjp_3310_;
}
else
{
lean_inc(v_val_3309_);
lean_dec(v_a_3308_);
v___x_3311_ = lean_box(0);
v_isShared_3312_ = v_isSharedCheck_3347_;
goto v_resetjp_3310_;
}
v_resetjp_3310_:
{
lean_object* v___x_3313_; lean_object* v___x_3314_; uint8_t v___x_3315_; 
v___x_3313_ = lean_box(0);
v___x_3314_ = l_Lean_LocalDecl_userName(v_val_3309_);
v___x_3315_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_matchAtomic(v_id_3283_, v___x_3314_, v_danglingDot_3284_);
if (v___x_3315_ == 0)
{
lean_dec(v___x_3314_);
lean_del_object(v___x_3311_);
lean_dec(v_val_3309_);
v_a_3301_ = v___x_3313_;
goto v___jp_3300_;
}
else
{
lean_object* v___x_3316_; lean_object* v___x_3318_; 
v___x_3316_ = l_Lean_LocalDecl_fvarId(v_val_3309_);
lean_dec(v_val_3309_);
if (v_isShared_3312_ == 0)
{
lean_ctor_set(v___x_3311_, 0, v___x_3316_);
v___x_3318_ = v___x_3311_;
goto v_reusejp_3317_;
}
else
{
lean_object* v_reuseFailAlloc_3346_; 
v_reuseFailAlloc_3346_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3346_, 0, v___x_3316_);
v___x_3318_ = v_reuseFailAlloc_3346_;
goto v_reusejp_3317_;
}
v_reusejp_3317_:
{
uint8_t v___x_3319_; lean_object* v___x_3320_; lean_object* v___x_3321_; 
v___x_3319_ = 5;
v___x_3320_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__11_spec__17_spec__20___redArg___closed__0));
v___x_3321_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addUnresolvedCompletionItem___redArg(v___x_3314_, v___x_3318_, v___x_3319_, v___x_3320_, v___y_3289_, v___y_3290_);
if (lean_obj_tag(v___x_3321_) == 0)
{
lean_object* v_a_3322_; lean_object* v___x_3324_; uint8_t v_isShared_3325_; uint8_t v_isSharedCheck_3337_; 
v_a_3322_ = lean_ctor_get(v___x_3321_, 0);
v_isSharedCheck_3337_ = !lean_is_exclusive(v___x_3321_);
if (v_isSharedCheck_3337_ == 0)
{
v___x_3324_ = v___x_3321_;
v_isShared_3325_ = v_isSharedCheck_3337_;
goto v_resetjp_3323_;
}
else
{
lean_inc(v_a_3322_);
lean_dec(v___x_3321_);
v___x_3324_ = lean_box(0);
v_isShared_3325_ = v_isSharedCheck_3337_;
goto v_resetjp_3323_;
}
v_resetjp_3323_:
{
if (lean_obj_tag(v_a_3322_) == 0)
{
lean_object* v_a_3326_; lean_object* v___x_3328_; uint8_t v_isShared_3329_; uint8_t v_isSharedCheck_3336_; 
lean_del_object(v___x_3297_);
v_a_3326_ = lean_ctor_get(v_a_3322_, 0);
v_isSharedCheck_3336_ = !lean_is_exclusive(v_a_3322_);
if (v_isSharedCheck_3336_ == 0)
{
v___x_3328_ = v_a_3322_;
v_isShared_3329_ = v_isSharedCheck_3336_;
goto v_resetjp_3327_;
}
else
{
lean_inc(v_a_3326_);
lean_dec(v_a_3322_);
v___x_3328_ = lean_box(0);
v_isShared_3329_ = v_isSharedCheck_3336_;
goto v_resetjp_3327_;
}
v_resetjp_3327_:
{
lean_object* v___x_3331_; 
if (v_isShared_3329_ == 0)
{
v___x_3331_ = v___x_3328_;
goto v_reusejp_3330_;
}
else
{
lean_object* v_reuseFailAlloc_3335_; 
v_reuseFailAlloc_3335_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3335_, 0, v_a_3326_);
v___x_3331_ = v_reuseFailAlloc_3335_;
goto v_reusejp_3330_;
}
v_reusejp_3330_:
{
lean_object* v___x_3333_; 
if (v_isShared_3325_ == 0)
{
lean_ctor_set(v___x_3324_, 0, v___x_3331_);
v___x_3333_ = v___x_3324_;
goto v_reusejp_3332_;
}
else
{
lean_object* v_reuseFailAlloc_3334_; 
v_reuseFailAlloc_3334_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3334_, 0, v___x_3331_);
v___x_3333_ = v_reuseFailAlloc_3334_;
goto v_reusejp_3332_;
}
v_reusejp_3332_:
{
return v___x_3333_;
}
}
}
}
else
{
lean_dec_ref_known(v_a_3322_, 1);
lean_del_object(v___x_3324_);
v_a_3301_ = v___x_3313_;
goto v___jp_3300_;
}
}
}
else
{
lean_object* v_a_3338_; lean_object* v___x_3340_; uint8_t v_isShared_3341_; uint8_t v_isSharedCheck_3345_; 
lean_del_object(v___x_3297_);
v_a_3338_ = lean_ctor_get(v___x_3321_, 0);
v_isSharedCheck_3345_ = !lean_is_exclusive(v___x_3321_);
if (v_isSharedCheck_3345_ == 0)
{
v___x_3340_ = v___x_3321_;
v_isShared_3341_ = v_isSharedCheck_3345_;
goto v_resetjp_3339_;
}
else
{
lean_inc(v_a_3338_);
lean_dec(v___x_3321_);
v___x_3340_ = lean_box(0);
v_isShared_3341_ = v_isSharedCheck_3345_;
goto v_resetjp_3339_;
}
v_resetjp_3339_:
{
lean_object* v___x_3343_; 
if (v_isShared_3341_ == 0)
{
v___x_3343_ = v___x_3340_;
goto v_reusejp_3342_;
}
else
{
lean_object* v_reuseFailAlloc_3344_; 
v_reuseFailAlloc_3344_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3344_, 0, v_a_3338_);
v___x_3343_ = v_reuseFailAlloc_3344_;
goto v_reusejp_3342_;
}
v_reusejp_3342_:
{
return v___x_3343_;
}
}
}
}
}
}
}
v___jp_3300_:
{
lean_object* v___x_3303_; 
if (v_isShared_3298_ == 0)
{
lean_ctor_set(v___x_3297_, 1, v_a_3301_);
lean_ctor_set(v___x_3297_, 0, v___x_3299_);
v___x_3303_ = v___x_3297_;
goto v_reusejp_3302_;
}
else
{
lean_object* v_reuseFailAlloc_3307_; 
v_reuseFailAlloc_3307_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3307_, 0, v___x_3299_);
lean_ctor_set(v_reuseFailAlloc_3307_, 1, v_a_3301_);
v___x_3303_ = v_reuseFailAlloc_3307_;
goto v_reusejp_3302_;
}
v_reusejp_3302_:
{
size_t v___x_3304_; size_t v___x_3305_; 
v___x_3304_ = ((size_t)1ULL);
v___x_3305_ = lean_usize_add(v_i_3287_, v___x_3304_);
v_i_3287_ = v___x_3305_;
v_b_3288_ = v___x_3303_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__11_spec__17_spec__20___redArg___boxed(lean_object* v_id_3350_, lean_object* v_danglingDot_3351_, lean_object* v_as_3352_, lean_object* v_sz_3353_, lean_object* v_i_3354_, lean_object* v_b_3355_, lean_object* v___y_3356_, lean_object* v___y_3357_, lean_object* v___y_3358_){
_start:
{
uint8_t v_danglingDot_boxed_3359_; size_t v_sz_boxed_3360_; size_t v_i_boxed_3361_; lean_object* v_res_3362_; 
v_danglingDot_boxed_3359_ = lean_unbox(v_danglingDot_3351_);
v_sz_boxed_3360_ = lean_unbox_usize(v_sz_3353_);
lean_dec(v_sz_3353_);
v_i_boxed_3361_ = lean_unbox_usize(v_i_3354_);
lean_dec(v_i_3354_);
v_res_3362_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__11_spec__17_spec__20___redArg(v_id_3350_, v_danglingDot_boxed_3359_, v_as_3352_, v_sz_boxed_3360_, v_i_boxed_3361_, v_b_3355_, v___y_3356_, v___y_3357_);
lean_dec(v___y_3357_);
lean_dec_ref(v___y_3356_);
lean_dec_ref(v_as_3352_);
lean_dec(v_id_3350_);
return v_res_3362_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__11_spec__17(lean_object* v_id_3363_, uint8_t v_danglingDot_3364_, lean_object* v_as_3365_, size_t v_sz_3366_, size_t v_i_3367_, lean_object* v_b_3368_, lean_object* v___y_3369_, lean_object* v___y_3370_, lean_object* v___y_3371_, lean_object* v___y_3372_, lean_object* v___y_3373_, lean_object* v___y_3374_, lean_object* v___y_3375_){
_start:
{
uint8_t v___x_3377_; 
v___x_3377_ = lean_usize_dec_lt(v_i_3367_, v_sz_3366_);
if (v___x_3377_ == 0)
{
lean_object* v___x_3378_; lean_object* v___x_3379_; 
v___x_3378_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3378_, 0, v_b_3368_);
v___x_3379_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3379_, 0, v___x_3378_);
return v___x_3379_;
}
else
{
lean_object* v_snd_3380_; lean_object* v___x_3382_; uint8_t v_isShared_3383_; uint8_t v_isSharedCheck_3433_; 
v_snd_3380_ = lean_ctor_get(v_b_3368_, 1);
v_isSharedCheck_3433_ = !lean_is_exclusive(v_b_3368_);
if (v_isSharedCheck_3433_ == 0)
{
lean_object* v_unused_3434_; 
v_unused_3434_ = lean_ctor_get(v_b_3368_, 0);
lean_dec(v_unused_3434_);
v___x_3382_ = v_b_3368_;
v_isShared_3383_ = v_isSharedCheck_3433_;
goto v_resetjp_3381_;
}
else
{
lean_inc(v_snd_3380_);
lean_dec(v_b_3368_);
v___x_3382_ = lean_box(0);
v_isShared_3383_ = v_isSharedCheck_3433_;
goto v_resetjp_3381_;
}
v_resetjp_3381_:
{
lean_object* v___x_3384_; lean_object* v_a_3386_; lean_object* v_a_3393_; 
v___x_3384_ = lean_box(0);
v_a_3393_ = lean_array_uget(v_as_3365_, v_i_3367_);
if (lean_obj_tag(v_a_3393_) == 0)
{
v_a_3386_ = v_snd_3380_;
goto v___jp_3385_;
}
else
{
lean_object* v_val_3394_; lean_object* v___x_3396_; uint8_t v_isShared_3397_; uint8_t v_isSharedCheck_3432_; 
lean_dec(v_snd_3380_);
v_val_3394_ = lean_ctor_get(v_a_3393_, 0);
v_isSharedCheck_3432_ = !lean_is_exclusive(v_a_3393_);
if (v_isSharedCheck_3432_ == 0)
{
v___x_3396_ = v_a_3393_;
v_isShared_3397_ = v_isSharedCheck_3432_;
goto v_resetjp_3395_;
}
else
{
lean_inc(v_val_3394_);
lean_dec(v_a_3393_);
v___x_3396_ = lean_box(0);
v_isShared_3397_ = v_isSharedCheck_3432_;
goto v_resetjp_3395_;
}
v_resetjp_3395_:
{
lean_object* v___x_3398_; lean_object* v___x_3399_; uint8_t v___x_3400_; 
v___x_3398_ = lean_box(0);
v___x_3399_ = l_Lean_LocalDecl_userName(v_val_3394_);
v___x_3400_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_matchAtomic(v_id_3363_, v___x_3399_, v_danglingDot_3364_);
if (v___x_3400_ == 0)
{
lean_dec(v___x_3399_);
lean_del_object(v___x_3396_);
lean_dec(v_val_3394_);
v_a_3386_ = v___x_3398_;
goto v___jp_3385_;
}
else
{
lean_object* v___x_3401_; lean_object* v___x_3403_; 
v___x_3401_ = l_Lean_LocalDecl_fvarId(v_val_3394_);
lean_dec(v_val_3394_);
if (v_isShared_3397_ == 0)
{
lean_ctor_set(v___x_3396_, 0, v___x_3401_);
v___x_3403_ = v___x_3396_;
goto v_reusejp_3402_;
}
else
{
lean_object* v_reuseFailAlloc_3431_; 
v_reuseFailAlloc_3431_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3431_, 0, v___x_3401_);
v___x_3403_ = v_reuseFailAlloc_3431_;
goto v_reusejp_3402_;
}
v_reusejp_3402_:
{
uint8_t v___x_3404_; lean_object* v___x_3405_; lean_object* v___x_3406_; 
v___x_3404_ = 5;
v___x_3405_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__11_spec__17_spec__20___redArg___closed__0));
v___x_3406_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addUnresolvedCompletionItem___redArg(v___x_3399_, v___x_3403_, v___x_3404_, v___x_3405_, v___y_3369_, v___y_3370_);
if (lean_obj_tag(v___x_3406_) == 0)
{
lean_object* v_a_3407_; lean_object* v___x_3409_; uint8_t v_isShared_3410_; uint8_t v_isSharedCheck_3422_; 
v_a_3407_ = lean_ctor_get(v___x_3406_, 0);
v_isSharedCheck_3422_ = !lean_is_exclusive(v___x_3406_);
if (v_isSharedCheck_3422_ == 0)
{
v___x_3409_ = v___x_3406_;
v_isShared_3410_ = v_isSharedCheck_3422_;
goto v_resetjp_3408_;
}
else
{
lean_inc(v_a_3407_);
lean_dec(v___x_3406_);
v___x_3409_ = lean_box(0);
v_isShared_3410_ = v_isSharedCheck_3422_;
goto v_resetjp_3408_;
}
v_resetjp_3408_:
{
if (lean_obj_tag(v_a_3407_) == 0)
{
lean_object* v_a_3411_; lean_object* v___x_3413_; uint8_t v_isShared_3414_; uint8_t v_isSharedCheck_3421_; 
lean_del_object(v___x_3382_);
v_a_3411_ = lean_ctor_get(v_a_3407_, 0);
v_isSharedCheck_3421_ = !lean_is_exclusive(v_a_3407_);
if (v_isSharedCheck_3421_ == 0)
{
v___x_3413_ = v_a_3407_;
v_isShared_3414_ = v_isSharedCheck_3421_;
goto v_resetjp_3412_;
}
else
{
lean_inc(v_a_3411_);
lean_dec(v_a_3407_);
v___x_3413_ = lean_box(0);
v_isShared_3414_ = v_isSharedCheck_3421_;
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
lean_object* v_reuseFailAlloc_3420_; 
v_reuseFailAlloc_3420_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3420_, 0, v_a_3411_);
v___x_3416_ = v_reuseFailAlloc_3420_;
goto v_reusejp_3415_;
}
v_reusejp_3415_:
{
lean_object* v___x_3418_; 
if (v_isShared_3410_ == 0)
{
lean_ctor_set(v___x_3409_, 0, v___x_3416_);
v___x_3418_ = v___x_3409_;
goto v_reusejp_3417_;
}
else
{
lean_object* v_reuseFailAlloc_3419_; 
v_reuseFailAlloc_3419_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3419_, 0, v___x_3416_);
v___x_3418_ = v_reuseFailAlloc_3419_;
goto v_reusejp_3417_;
}
v_reusejp_3417_:
{
return v___x_3418_;
}
}
}
}
else
{
lean_dec_ref_known(v_a_3407_, 1);
lean_del_object(v___x_3409_);
v_a_3386_ = v___x_3398_;
goto v___jp_3385_;
}
}
}
else
{
lean_object* v_a_3423_; lean_object* v___x_3425_; uint8_t v_isShared_3426_; uint8_t v_isSharedCheck_3430_; 
lean_del_object(v___x_3382_);
v_a_3423_ = lean_ctor_get(v___x_3406_, 0);
v_isSharedCheck_3430_ = !lean_is_exclusive(v___x_3406_);
if (v_isSharedCheck_3430_ == 0)
{
v___x_3425_ = v___x_3406_;
v_isShared_3426_ = v_isSharedCheck_3430_;
goto v_resetjp_3424_;
}
else
{
lean_inc(v_a_3423_);
lean_dec(v___x_3406_);
v___x_3425_ = lean_box(0);
v_isShared_3426_ = v_isSharedCheck_3430_;
goto v_resetjp_3424_;
}
v_resetjp_3424_:
{
lean_object* v___x_3428_; 
if (v_isShared_3426_ == 0)
{
v___x_3428_ = v___x_3425_;
goto v_reusejp_3427_;
}
else
{
lean_object* v_reuseFailAlloc_3429_; 
v_reuseFailAlloc_3429_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3429_, 0, v_a_3423_);
v___x_3428_ = v_reuseFailAlloc_3429_;
goto v_reusejp_3427_;
}
v_reusejp_3427_:
{
return v___x_3428_;
}
}
}
}
}
}
}
v___jp_3385_:
{
lean_object* v___x_3388_; 
if (v_isShared_3383_ == 0)
{
lean_ctor_set(v___x_3382_, 1, v_a_3386_);
lean_ctor_set(v___x_3382_, 0, v___x_3384_);
v___x_3388_ = v___x_3382_;
goto v_reusejp_3387_;
}
else
{
lean_object* v_reuseFailAlloc_3392_; 
v_reuseFailAlloc_3392_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3392_, 0, v___x_3384_);
lean_ctor_set(v_reuseFailAlloc_3392_, 1, v_a_3386_);
v___x_3388_ = v_reuseFailAlloc_3392_;
goto v_reusejp_3387_;
}
v_reusejp_3387_:
{
size_t v___x_3389_; size_t v___x_3390_; lean_object* v___x_3391_; 
v___x_3389_ = ((size_t)1ULL);
v___x_3390_ = lean_usize_add(v_i_3367_, v___x_3389_);
v___x_3391_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__11_spec__17_spec__20___redArg(v_id_3363_, v_danglingDot_3364_, v_as_3365_, v_sz_3366_, v___x_3390_, v___x_3388_, v___y_3369_, v___y_3370_);
return v___x_3391_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__11_spec__17___boxed(lean_object* v_id_3435_, lean_object* v_danglingDot_3436_, lean_object* v_as_3437_, lean_object* v_sz_3438_, lean_object* v_i_3439_, lean_object* v_b_3440_, lean_object* v___y_3441_, lean_object* v___y_3442_, lean_object* v___y_3443_, lean_object* v___y_3444_, lean_object* v___y_3445_, lean_object* v___y_3446_, lean_object* v___y_3447_, lean_object* v___y_3448_){
_start:
{
uint8_t v_danglingDot_boxed_3449_; size_t v_sz_boxed_3450_; size_t v_i_boxed_3451_; lean_object* v_res_3452_; 
v_danglingDot_boxed_3449_ = lean_unbox(v_danglingDot_3436_);
v_sz_boxed_3450_ = lean_unbox_usize(v_sz_3438_);
lean_dec(v_sz_3438_);
v_i_boxed_3451_ = lean_unbox_usize(v_i_3439_);
lean_dec(v_i_3439_);
v_res_3452_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__11_spec__17(v_id_3435_, v_danglingDot_boxed_3449_, v_as_3437_, v_sz_boxed_3450_, v_i_boxed_3451_, v_b_3440_, v___y_3441_, v___y_3442_, v___y_3443_, v___y_3444_, v___y_3445_, v___y_3446_, v___y_3447_);
lean_dec(v___y_3447_);
lean_dec_ref(v___y_3446_);
lean_dec(v___y_3445_);
lean_dec_ref(v___y_3444_);
lean_dec_ref(v___y_3443_);
lean_dec(v___y_3442_);
lean_dec_ref(v___y_3441_);
lean_dec_ref(v_as_3437_);
lean_dec(v_id_3435_);
return v_res_3452_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__11(lean_object* v_init_3453_, lean_object* v_id_3454_, uint8_t v_danglingDot_3455_, lean_object* v_n_3456_, lean_object* v_b_3457_, lean_object* v___y_3458_, lean_object* v___y_3459_, lean_object* v___y_3460_, lean_object* v___y_3461_, lean_object* v___y_3462_, lean_object* v___y_3463_, lean_object* v___y_3464_){
_start:
{
if (lean_obj_tag(v_n_3456_) == 0)
{
lean_object* v_cs_3466_; lean_object* v___x_3467_; lean_object* v___x_3468_; size_t v_sz_3469_; size_t v___x_3470_; lean_object* v___x_3471_; 
v_cs_3466_ = lean_ctor_get(v_n_3456_, 0);
v___x_3467_ = lean_box(0);
v___x_3468_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3468_, 0, v___x_3467_);
lean_ctor_set(v___x_3468_, 1, v_b_3457_);
v_sz_3469_ = lean_array_size(v_cs_3466_);
v___x_3470_ = ((size_t)0ULL);
v___x_3471_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__11_spec__16(v_init_3453_, v_id_3454_, v_danglingDot_3455_, v_cs_3466_, v_sz_3469_, v___x_3470_, v___x_3468_, v___y_3458_, v___y_3459_, v___y_3460_, v___y_3461_, v___y_3462_, v___y_3463_, v___y_3464_);
if (lean_obj_tag(v___x_3471_) == 0)
{
lean_object* v_a_3472_; lean_object* v___x_3474_; uint8_t v_isShared_3475_; uint8_t v_isSharedCheck_3508_; 
v_a_3472_ = lean_ctor_get(v___x_3471_, 0);
v_isSharedCheck_3508_ = !lean_is_exclusive(v___x_3471_);
if (v_isSharedCheck_3508_ == 0)
{
v___x_3474_ = v___x_3471_;
v_isShared_3475_ = v_isSharedCheck_3508_;
goto v_resetjp_3473_;
}
else
{
lean_inc(v_a_3472_);
lean_dec(v___x_3471_);
v___x_3474_ = lean_box(0);
v_isShared_3475_ = v_isSharedCheck_3508_;
goto v_resetjp_3473_;
}
v_resetjp_3473_:
{
if (lean_obj_tag(v_a_3472_) == 0)
{
lean_object* v_a_3476_; lean_object* v___x_3478_; uint8_t v_isShared_3479_; uint8_t v_isSharedCheck_3486_; 
v_a_3476_ = lean_ctor_get(v_a_3472_, 0);
v_isSharedCheck_3486_ = !lean_is_exclusive(v_a_3472_);
if (v_isSharedCheck_3486_ == 0)
{
v___x_3478_ = v_a_3472_;
v_isShared_3479_ = v_isSharedCheck_3486_;
goto v_resetjp_3477_;
}
else
{
lean_inc(v_a_3476_);
lean_dec(v_a_3472_);
v___x_3478_ = lean_box(0);
v_isShared_3479_ = v_isSharedCheck_3486_;
goto v_resetjp_3477_;
}
v_resetjp_3477_:
{
lean_object* v___x_3481_; 
if (v_isShared_3479_ == 0)
{
v___x_3481_ = v___x_3478_;
goto v_reusejp_3480_;
}
else
{
lean_object* v_reuseFailAlloc_3485_; 
v_reuseFailAlloc_3485_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3485_, 0, v_a_3476_);
v___x_3481_ = v_reuseFailAlloc_3485_;
goto v_reusejp_3480_;
}
v_reusejp_3480_:
{
lean_object* v___x_3483_; 
if (v_isShared_3475_ == 0)
{
lean_ctor_set(v___x_3474_, 0, v___x_3481_);
v___x_3483_ = v___x_3474_;
goto v_reusejp_3482_;
}
else
{
lean_object* v_reuseFailAlloc_3484_; 
v_reuseFailAlloc_3484_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3484_, 0, v___x_3481_);
v___x_3483_ = v_reuseFailAlloc_3484_;
goto v_reusejp_3482_;
}
v_reusejp_3482_:
{
return v___x_3483_;
}
}
}
}
else
{
lean_object* v_a_3487_; lean_object* v___x_3489_; uint8_t v_isShared_3490_; uint8_t v_isSharedCheck_3507_; 
v_a_3487_ = lean_ctor_get(v_a_3472_, 0);
v_isSharedCheck_3507_ = !lean_is_exclusive(v_a_3472_);
if (v_isSharedCheck_3507_ == 0)
{
v___x_3489_ = v_a_3472_;
v_isShared_3490_ = v_isSharedCheck_3507_;
goto v_resetjp_3488_;
}
else
{
lean_inc(v_a_3487_);
lean_dec(v_a_3472_);
v___x_3489_ = lean_box(0);
v_isShared_3490_ = v_isSharedCheck_3507_;
goto v_resetjp_3488_;
}
v_resetjp_3488_:
{
lean_object* v_fst_3491_; 
v_fst_3491_ = lean_ctor_get(v_a_3487_, 0);
if (lean_obj_tag(v_fst_3491_) == 0)
{
lean_object* v_snd_3492_; lean_object* v___x_3493_; lean_object* v___x_3495_; 
v_snd_3492_ = lean_ctor_get(v_a_3487_, 1);
lean_inc(v_snd_3492_);
lean_dec(v_a_3487_);
v___x_3493_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3493_, 0, v_snd_3492_);
if (v_isShared_3490_ == 0)
{
lean_ctor_set(v___x_3489_, 0, v___x_3493_);
v___x_3495_ = v___x_3489_;
goto v_reusejp_3494_;
}
else
{
lean_object* v_reuseFailAlloc_3499_; 
v_reuseFailAlloc_3499_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3499_, 0, v___x_3493_);
v___x_3495_ = v_reuseFailAlloc_3499_;
goto v_reusejp_3494_;
}
v_reusejp_3494_:
{
lean_object* v___x_3497_; 
if (v_isShared_3475_ == 0)
{
lean_ctor_set(v___x_3474_, 0, v___x_3495_);
v___x_3497_ = v___x_3474_;
goto v_reusejp_3496_;
}
else
{
lean_object* v_reuseFailAlloc_3498_; 
v_reuseFailAlloc_3498_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3498_, 0, v___x_3495_);
v___x_3497_ = v_reuseFailAlloc_3498_;
goto v_reusejp_3496_;
}
v_reusejp_3496_:
{
return v___x_3497_;
}
}
}
else
{
lean_object* v_val_3500_; lean_object* v___x_3502_; 
lean_inc_ref(v_fst_3491_);
lean_dec(v_a_3487_);
v_val_3500_ = lean_ctor_get(v_fst_3491_, 0);
lean_inc(v_val_3500_);
lean_dec_ref_known(v_fst_3491_, 1);
if (v_isShared_3490_ == 0)
{
lean_ctor_set(v___x_3489_, 0, v_val_3500_);
v___x_3502_ = v___x_3489_;
goto v_reusejp_3501_;
}
else
{
lean_object* v_reuseFailAlloc_3506_; 
v_reuseFailAlloc_3506_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3506_, 0, v_val_3500_);
v___x_3502_ = v_reuseFailAlloc_3506_;
goto v_reusejp_3501_;
}
v_reusejp_3501_:
{
lean_object* v___x_3504_; 
if (v_isShared_3475_ == 0)
{
lean_ctor_set(v___x_3474_, 0, v___x_3502_);
v___x_3504_ = v___x_3474_;
goto v_reusejp_3503_;
}
else
{
lean_object* v_reuseFailAlloc_3505_; 
v_reuseFailAlloc_3505_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3505_, 0, v___x_3502_);
v___x_3504_ = v_reuseFailAlloc_3505_;
goto v_reusejp_3503_;
}
v_reusejp_3503_:
{
return v___x_3504_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_3509_; lean_object* v___x_3511_; uint8_t v_isShared_3512_; uint8_t v_isSharedCheck_3516_; 
v_a_3509_ = lean_ctor_get(v___x_3471_, 0);
v_isSharedCheck_3516_ = !lean_is_exclusive(v___x_3471_);
if (v_isSharedCheck_3516_ == 0)
{
v___x_3511_ = v___x_3471_;
v_isShared_3512_ = v_isSharedCheck_3516_;
goto v_resetjp_3510_;
}
else
{
lean_inc(v_a_3509_);
lean_dec(v___x_3471_);
v___x_3511_ = lean_box(0);
v_isShared_3512_ = v_isSharedCheck_3516_;
goto v_resetjp_3510_;
}
v_resetjp_3510_:
{
lean_object* v___x_3514_; 
if (v_isShared_3512_ == 0)
{
v___x_3514_ = v___x_3511_;
goto v_reusejp_3513_;
}
else
{
lean_object* v_reuseFailAlloc_3515_; 
v_reuseFailAlloc_3515_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3515_, 0, v_a_3509_);
v___x_3514_ = v_reuseFailAlloc_3515_;
goto v_reusejp_3513_;
}
v_reusejp_3513_:
{
return v___x_3514_;
}
}
}
}
else
{
lean_object* v_vs_3517_; lean_object* v___x_3518_; lean_object* v___x_3519_; size_t v_sz_3520_; size_t v___x_3521_; lean_object* v___x_3522_; 
v_vs_3517_ = lean_ctor_get(v_n_3456_, 0);
v___x_3518_ = lean_box(0);
v___x_3519_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3519_, 0, v___x_3518_);
lean_ctor_set(v___x_3519_, 1, v_b_3457_);
v_sz_3520_ = lean_array_size(v_vs_3517_);
v___x_3521_ = ((size_t)0ULL);
v___x_3522_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__11_spec__17(v_id_3454_, v_danglingDot_3455_, v_vs_3517_, v_sz_3520_, v___x_3521_, v___x_3519_, v___y_3458_, v___y_3459_, v___y_3460_, v___y_3461_, v___y_3462_, v___y_3463_, v___y_3464_);
if (lean_obj_tag(v___x_3522_) == 0)
{
lean_object* v_a_3523_; lean_object* v___x_3525_; uint8_t v_isShared_3526_; uint8_t v_isSharedCheck_3559_; 
v_a_3523_ = lean_ctor_get(v___x_3522_, 0);
v_isSharedCheck_3559_ = !lean_is_exclusive(v___x_3522_);
if (v_isSharedCheck_3559_ == 0)
{
v___x_3525_ = v___x_3522_;
v_isShared_3526_ = v_isSharedCheck_3559_;
goto v_resetjp_3524_;
}
else
{
lean_inc(v_a_3523_);
lean_dec(v___x_3522_);
v___x_3525_ = lean_box(0);
v_isShared_3526_ = v_isSharedCheck_3559_;
goto v_resetjp_3524_;
}
v_resetjp_3524_:
{
if (lean_obj_tag(v_a_3523_) == 0)
{
lean_object* v_a_3527_; lean_object* v___x_3529_; uint8_t v_isShared_3530_; uint8_t v_isSharedCheck_3537_; 
v_a_3527_ = lean_ctor_get(v_a_3523_, 0);
v_isSharedCheck_3537_ = !lean_is_exclusive(v_a_3523_);
if (v_isSharedCheck_3537_ == 0)
{
v___x_3529_ = v_a_3523_;
v_isShared_3530_ = v_isSharedCheck_3537_;
goto v_resetjp_3528_;
}
else
{
lean_inc(v_a_3527_);
lean_dec(v_a_3523_);
v___x_3529_ = lean_box(0);
v_isShared_3530_ = v_isSharedCheck_3537_;
goto v_resetjp_3528_;
}
v_resetjp_3528_:
{
lean_object* v___x_3532_; 
if (v_isShared_3530_ == 0)
{
v___x_3532_ = v___x_3529_;
goto v_reusejp_3531_;
}
else
{
lean_object* v_reuseFailAlloc_3536_; 
v_reuseFailAlloc_3536_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3536_, 0, v_a_3527_);
v___x_3532_ = v_reuseFailAlloc_3536_;
goto v_reusejp_3531_;
}
v_reusejp_3531_:
{
lean_object* v___x_3534_; 
if (v_isShared_3526_ == 0)
{
lean_ctor_set(v___x_3525_, 0, v___x_3532_);
v___x_3534_ = v___x_3525_;
goto v_reusejp_3533_;
}
else
{
lean_object* v_reuseFailAlloc_3535_; 
v_reuseFailAlloc_3535_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3535_, 0, v___x_3532_);
v___x_3534_ = v_reuseFailAlloc_3535_;
goto v_reusejp_3533_;
}
v_reusejp_3533_:
{
return v___x_3534_;
}
}
}
}
else
{
lean_object* v_a_3538_; lean_object* v___x_3540_; uint8_t v_isShared_3541_; uint8_t v_isSharedCheck_3558_; 
v_a_3538_ = lean_ctor_get(v_a_3523_, 0);
v_isSharedCheck_3558_ = !lean_is_exclusive(v_a_3523_);
if (v_isSharedCheck_3558_ == 0)
{
v___x_3540_ = v_a_3523_;
v_isShared_3541_ = v_isSharedCheck_3558_;
goto v_resetjp_3539_;
}
else
{
lean_inc(v_a_3538_);
lean_dec(v_a_3523_);
v___x_3540_ = lean_box(0);
v_isShared_3541_ = v_isSharedCheck_3558_;
goto v_resetjp_3539_;
}
v_resetjp_3539_:
{
lean_object* v_fst_3542_; 
v_fst_3542_ = lean_ctor_get(v_a_3538_, 0);
if (lean_obj_tag(v_fst_3542_) == 0)
{
lean_object* v_snd_3543_; lean_object* v___x_3544_; lean_object* v___x_3546_; 
v_snd_3543_ = lean_ctor_get(v_a_3538_, 1);
lean_inc(v_snd_3543_);
lean_dec(v_a_3538_);
v___x_3544_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3544_, 0, v_snd_3543_);
if (v_isShared_3541_ == 0)
{
lean_ctor_set(v___x_3540_, 0, v___x_3544_);
v___x_3546_ = v___x_3540_;
goto v_reusejp_3545_;
}
else
{
lean_object* v_reuseFailAlloc_3550_; 
v_reuseFailAlloc_3550_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3550_, 0, v___x_3544_);
v___x_3546_ = v_reuseFailAlloc_3550_;
goto v_reusejp_3545_;
}
v_reusejp_3545_:
{
lean_object* v___x_3548_; 
if (v_isShared_3526_ == 0)
{
lean_ctor_set(v___x_3525_, 0, v___x_3546_);
v___x_3548_ = v___x_3525_;
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
else
{
lean_object* v_val_3551_; lean_object* v___x_3553_; 
lean_inc_ref(v_fst_3542_);
lean_dec(v_a_3538_);
v_val_3551_ = lean_ctor_get(v_fst_3542_, 0);
lean_inc(v_val_3551_);
lean_dec_ref_known(v_fst_3542_, 1);
if (v_isShared_3541_ == 0)
{
lean_ctor_set(v___x_3540_, 0, v_val_3551_);
v___x_3553_ = v___x_3540_;
goto v_reusejp_3552_;
}
else
{
lean_object* v_reuseFailAlloc_3557_; 
v_reuseFailAlloc_3557_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3557_, 0, v_val_3551_);
v___x_3553_ = v_reuseFailAlloc_3557_;
goto v_reusejp_3552_;
}
v_reusejp_3552_:
{
lean_object* v___x_3555_; 
if (v_isShared_3526_ == 0)
{
lean_ctor_set(v___x_3525_, 0, v___x_3553_);
v___x_3555_ = v___x_3525_;
goto v_reusejp_3554_;
}
else
{
lean_object* v_reuseFailAlloc_3556_; 
v_reuseFailAlloc_3556_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3556_, 0, v___x_3553_);
v___x_3555_ = v_reuseFailAlloc_3556_;
goto v_reusejp_3554_;
}
v_reusejp_3554_:
{
return v___x_3555_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_3560_; lean_object* v___x_3562_; uint8_t v_isShared_3563_; uint8_t v_isSharedCheck_3567_; 
v_a_3560_ = lean_ctor_get(v___x_3522_, 0);
v_isSharedCheck_3567_ = !lean_is_exclusive(v___x_3522_);
if (v_isSharedCheck_3567_ == 0)
{
v___x_3562_ = v___x_3522_;
v_isShared_3563_ = v_isSharedCheck_3567_;
goto v_resetjp_3561_;
}
else
{
lean_inc(v_a_3560_);
lean_dec(v___x_3522_);
v___x_3562_ = lean_box(0);
v_isShared_3563_ = v_isSharedCheck_3567_;
goto v_resetjp_3561_;
}
v_resetjp_3561_:
{
lean_object* v___x_3565_; 
if (v_isShared_3563_ == 0)
{
v___x_3565_ = v___x_3562_;
goto v_reusejp_3564_;
}
else
{
lean_object* v_reuseFailAlloc_3566_; 
v_reuseFailAlloc_3566_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3566_, 0, v_a_3560_);
v___x_3565_ = v_reuseFailAlloc_3566_;
goto v_reusejp_3564_;
}
v_reusejp_3564_:
{
return v___x_3565_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__11_spec__16(lean_object* v_init_3568_, lean_object* v_id_3569_, uint8_t v_danglingDot_3570_, lean_object* v_as_3571_, size_t v_sz_3572_, size_t v_i_3573_, lean_object* v_b_3574_, lean_object* v___y_3575_, lean_object* v___y_3576_, lean_object* v___y_3577_, lean_object* v___y_3578_, lean_object* v___y_3579_, lean_object* v___y_3580_, lean_object* v___y_3581_){
_start:
{
uint8_t v___x_3583_; 
v___x_3583_ = lean_usize_dec_lt(v_i_3573_, v_sz_3572_);
if (v___x_3583_ == 0)
{
lean_object* v___x_3584_; lean_object* v___x_3585_; 
v___x_3584_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3584_, 0, v_b_3574_);
v___x_3585_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3585_, 0, v___x_3584_);
return v___x_3585_;
}
else
{
lean_object* v_snd_3586_; lean_object* v___x_3588_; uint8_t v_isShared_3589_; uint8_t v_isSharedCheck_3639_; 
v_snd_3586_ = lean_ctor_get(v_b_3574_, 1);
v_isSharedCheck_3639_ = !lean_is_exclusive(v_b_3574_);
if (v_isSharedCheck_3639_ == 0)
{
lean_object* v_unused_3640_; 
v_unused_3640_ = lean_ctor_get(v_b_3574_, 0);
lean_dec(v_unused_3640_);
v___x_3588_ = v_b_3574_;
v_isShared_3589_ = v_isSharedCheck_3639_;
goto v_resetjp_3587_;
}
else
{
lean_inc(v_snd_3586_);
lean_dec(v_b_3574_);
v___x_3588_ = lean_box(0);
v_isShared_3589_ = v_isSharedCheck_3639_;
goto v_resetjp_3587_;
}
v_resetjp_3587_:
{
lean_object* v___x_3590_; lean_object* v_a_3591_; lean_object* v___x_3592_; 
v___x_3590_ = lean_box(0);
v_a_3591_ = lean_array_uget_borrowed(v_as_3571_, v_i_3573_);
lean_inc(v_snd_3586_);
v___x_3592_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__11(v_init_3568_, v_id_3569_, v_danglingDot_3570_, v_a_3591_, v_snd_3586_, v___y_3575_, v___y_3576_, v___y_3577_, v___y_3578_, v___y_3579_, v___y_3580_, v___y_3581_);
if (lean_obj_tag(v___x_3592_) == 0)
{
lean_object* v_a_3593_; lean_object* v___x_3595_; uint8_t v_isShared_3596_; uint8_t v_isSharedCheck_3630_; 
v_a_3593_ = lean_ctor_get(v___x_3592_, 0);
v_isSharedCheck_3630_ = !lean_is_exclusive(v___x_3592_);
if (v_isSharedCheck_3630_ == 0)
{
v___x_3595_ = v___x_3592_;
v_isShared_3596_ = v_isSharedCheck_3630_;
goto v_resetjp_3594_;
}
else
{
lean_inc(v_a_3593_);
lean_dec(v___x_3592_);
v___x_3595_ = lean_box(0);
v_isShared_3596_ = v_isSharedCheck_3630_;
goto v_resetjp_3594_;
}
v_resetjp_3594_:
{
if (lean_obj_tag(v_a_3593_) == 0)
{
lean_object* v_a_3597_; lean_object* v___x_3599_; uint8_t v_isShared_3600_; uint8_t v_isSharedCheck_3607_; 
lean_del_object(v___x_3588_);
lean_dec(v_snd_3586_);
v_a_3597_ = lean_ctor_get(v_a_3593_, 0);
v_isSharedCheck_3607_ = !lean_is_exclusive(v_a_3593_);
if (v_isSharedCheck_3607_ == 0)
{
v___x_3599_ = v_a_3593_;
v_isShared_3600_ = v_isSharedCheck_3607_;
goto v_resetjp_3598_;
}
else
{
lean_inc(v_a_3597_);
lean_dec(v_a_3593_);
v___x_3599_ = lean_box(0);
v_isShared_3600_ = v_isSharedCheck_3607_;
goto v_resetjp_3598_;
}
v_resetjp_3598_:
{
lean_object* v___x_3602_; 
if (v_isShared_3600_ == 0)
{
v___x_3602_ = v___x_3599_;
goto v_reusejp_3601_;
}
else
{
lean_object* v_reuseFailAlloc_3606_; 
v_reuseFailAlloc_3606_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3606_, 0, v_a_3597_);
v___x_3602_ = v_reuseFailAlloc_3606_;
goto v_reusejp_3601_;
}
v_reusejp_3601_:
{
lean_object* v___x_3604_; 
if (v_isShared_3596_ == 0)
{
lean_ctor_set(v___x_3595_, 0, v___x_3602_);
v___x_3604_ = v___x_3595_;
goto v_reusejp_3603_;
}
else
{
lean_object* v_reuseFailAlloc_3605_; 
v_reuseFailAlloc_3605_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3605_, 0, v___x_3602_);
v___x_3604_ = v_reuseFailAlloc_3605_;
goto v_reusejp_3603_;
}
v_reusejp_3603_:
{
return v___x_3604_;
}
}
}
}
else
{
lean_object* v_a_3608_; lean_object* v___x_3610_; uint8_t v_isShared_3611_; uint8_t v_isSharedCheck_3629_; 
v_a_3608_ = lean_ctor_get(v_a_3593_, 0);
v_isSharedCheck_3629_ = !lean_is_exclusive(v_a_3593_);
if (v_isSharedCheck_3629_ == 0)
{
v___x_3610_ = v_a_3593_;
v_isShared_3611_ = v_isSharedCheck_3629_;
goto v_resetjp_3609_;
}
else
{
lean_inc(v_a_3608_);
lean_dec(v_a_3593_);
v___x_3610_ = lean_box(0);
v_isShared_3611_ = v_isSharedCheck_3629_;
goto v_resetjp_3609_;
}
v_resetjp_3609_:
{
if (lean_obj_tag(v_a_3608_) == 0)
{
lean_object* v___x_3612_; lean_object* v___x_3614_; 
v___x_3612_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3612_, 0, v_a_3608_);
if (v_isShared_3589_ == 0)
{
lean_ctor_set(v___x_3588_, 0, v___x_3612_);
v___x_3614_ = v___x_3588_;
goto v_reusejp_3613_;
}
else
{
lean_object* v_reuseFailAlloc_3621_; 
v_reuseFailAlloc_3621_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3621_, 0, v___x_3612_);
lean_ctor_set(v_reuseFailAlloc_3621_, 1, v_snd_3586_);
v___x_3614_ = v_reuseFailAlloc_3621_;
goto v_reusejp_3613_;
}
v_reusejp_3613_:
{
lean_object* v___x_3616_; 
if (v_isShared_3611_ == 0)
{
lean_ctor_set(v___x_3610_, 0, v___x_3614_);
v___x_3616_ = v___x_3610_;
goto v_reusejp_3615_;
}
else
{
lean_object* v_reuseFailAlloc_3620_; 
v_reuseFailAlloc_3620_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3620_, 0, v___x_3614_);
v___x_3616_ = v_reuseFailAlloc_3620_;
goto v_reusejp_3615_;
}
v_reusejp_3615_:
{
lean_object* v___x_3618_; 
if (v_isShared_3596_ == 0)
{
lean_ctor_set(v___x_3595_, 0, v___x_3616_);
v___x_3618_ = v___x_3595_;
goto v_reusejp_3617_;
}
else
{
lean_object* v_reuseFailAlloc_3619_; 
v_reuseFailAlloc_3619_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3619_, 0, v___x_3616_);
v___x_3618_ = v_reuseFailAlloc_3619_;
goto v_reusejp_3617_;
}
v_reusejp_3617_:
{
return v___x_3618_;
}
}
}
}
else
{
lean_object* v_a_3622_; lean_object* v___x_3624_; 
lean_del_object(v___x_3610_);
lean_del_object(v___x_3595_);
lean_dec(v_snd_3586_);
v_a_3622_ = lean_ctor_get(v_a_3608_, 0);
lean_inc(v_a_3622_);
lean_dec_ref_known(v_a_3608_, 1);
if (v_isShared_3589_ == 0)
{
lean_ctor_set(v___x_3588_, 1, v_a_3622_);
lean_ctor_set(v___x_3588_, 0, v___x_3590_);
v___x_3624_ = v___x_3588_;
goto v_reusejp_3623_;
}
else
{
lean_object* v_reuseFailAlloc_3628_; 
v_reuseFailAlloc_3628_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3628_, 0, v___x_3590_);
lean_ctor_set(v_reuseFailAlloc_3628_, 1, v_a_3622_);
v___x_3624_ = v_reuseFailAlloc_3628_;
goto v_reusejp_3623_;
}
v_reusejp_3623_:
{
size_t v___x_3625_; size_t v___x_3626_; 
v___x_3625_ = ((size_t)1ULL);
v___x_3626_ = lean_usize_add(v_i_3573_, v___x_3625_);
v_i_3573_ = v___x_3626_;
v_b_3574_ = v___x_3624_;
goto _start;
}
}
}
}
}
}
else
{
lean_object* v_a_3631_; lean_object* v___x_3633_; uint8_t v_isShared_3634_; uint8_t v_isSharedCheck_3638_; 
lean_del_object(v___x_3588_);
lean_dec(v_snd_3586_);
v_a_3631_ = lean_ctor_get(v___x_3592_, 0);
v_isSharedCheck_3638_ = !lean_is_exclusive(v___x_3592_);
if (v_isSharedCheck_3638_ == 0)
{
v___x_3633_ = v___x_3592_;
v_isShared_3634_ = v_isSharedCheck_3638_;
goto v_resetjp_3632_;
}
else
{
lean_inc(v_a_3631_);
lean_dec(v___x_3592_);
v___x_3633_ = lean_box(0);
v_isShared_3634_ = v_isSharedCheck_3638_;
goto v_resetjp_3632_;
}
v_resetjp_3632_:
{
lean_object* v___x_3636_; 
if (v_isShared_3634_ == 0)
{
v___x_3636_ = v___x_3633_;
goto v_reusejp_3635_;
}
else
{
lean_object* v_reuseFailAlloc_3637_; 
v_reuseFailAlloc_3637_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3637_, 0, v_a_3631_);
v___x_3636_ = v_reuseFailAlloc_3637_;
goto v_reusejp_3635_;
}
v_reusejp_3635_:
{
return v___x_3636_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__11_spec__16___boxed(lean_object* v_init_3641_, lean_object* v_id_3642_, lean_object* v_danglingDot_3643_, lean_object* v_as_3644_, lean_object* v_sz_3645_, lean_object* v_i_3646_, lean_object* v_b_3647_, lean_object* v___y_3648_, lean_object* v___y_3649_, lean_object* v___y_3650_, lean_object* v___y_3651_, lean_object* v___y_3652_, lean_object* v___y_3653_, lean_object* v___y_3654_, lean_object* v___y_3655_){
_start:
{
uint8_t v_danglingDot_boxed_3656_; size_t v_sz_boxed_3657_; size_t v_i_boxed_3658_; lean_object* v_res_3659_; 
v_danglingDot_boxed_3656_ = lean_unbox(v_danglingDot_3643_);
v_sz_boxed_3657_ = lean_unbox_usize(v_sz_3645_);
lean_dec(v_sz_3645_);
v_i_boxed_3658_ = lean_unbox_usize(v_i_3646_);
lean_dec(v_i_3646_);
v_res_3659_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__11_spec__16(v_init_3641_, v_id_3642_, v_danglingDot_boxed_3656_, v_as_3644_, v_sz_boxed_3657_, v_i_boxed_3658_, v_b_3647_, v___y_3648_, v___y_3649_, v___y_3650_, v___y_3651_, v___y_3652_, v___y_3653_, v___y_3654_);
lean_dec(v___y_3654_);
lean_dec_ref(v___y_3653_);
lean_dec(v___y_3652_);
lean_dec_ref(v___y_3651_);
lean_dec_ref(v___y_3650_);
lean_dec(v___y_3649_);
lean_dec_ref(v___y_3648_);
lean_dec_ref(v_as_3644_);
lean_dec(v_id_3642_);
return v_res_3659_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__11___boxed(lean_object* v_init_3660_, lean_object* v_id_3661_, lean_object* v_danglingDot_3662_, lean_object* v_n_3663_, lean_object* v_b_3664_, lean_object* v___y_3665_, lean_object* v___y_3666_, lean_object* v___y_3667_, lean_object* v___y_3668_, lean_object* v___y_3669_, lean_object* v___y_3670_, lean_object* v___y_3671_, lean_object* v___y_3672_){
_start:
{
uint8_t v_danglingDot_boxed_3673_; lean_object* v_res_3674_; 
v_danglingDot_boxed_3673_ = lean_unbox(v_danglingDot_3662_);
v_res_3674_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__11(v_init_3660_, v_id_3661_, v_danglingDot_boxed_3673_, v_n_3663_, v_b_3664_, v___y_3665_, v___y_3666_, v___y_3667_, v___y_3668_, v___y_3669_, v___y_3670_, v___y_3671_);
lean_dec(v___y_3671_);
lean_dec_ref(v___y_3670_);
lean_dec(v___y_3669_);
lean_dec_ref(v___y_3668_);
lean_dec_ref(v___y_3667_);
lean_dec(v___y_3666_);
lean_dec_ref(v___y_3665_);
lean_dec_ref(v_n_3663_);
lean_dec(v_id_3661_);
return v_res_3674_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__12_spec__19___redArg(lean_object* v_id_3675_, uint8_t v_danglingDot_3676_, lean_object* v_as_3677_, size_t v_sz_3678_, size_t v_i_3679_, lean_object* v_b_3680_, lean_object* v___y_3681_, lean_object* v___y_3682_){
_start:
{
uint8_t v___x_3684_; 
v___x_3684_ = lean_usize_dec_lt(v_i_3679_, v_sz_3678_);
if (v___x_3684_ == 0)
{
lean_object* v___x_3685_; lean_object* v___x_3686_; 
v___x_3685_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3685_, 0, v_b_3680_);
v___x_3686_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3686_, 0, v___x_3685_);
return v___x_3686_;
}
else
{
lean_object* v_snd_3687_; lean_object* v___x_3689_; uint8_t v_isShared_3690_; uint8_t v_isSharedCheck_3740_; 
v_snd_3687_ = lean_ctor_get(v_b_3680_, 1);
v_isSharedCheck_3740_ = !lean_is_exclusive(v_b_3680_);
if (v_isSharedCheck_3740_ == 0)
{
lean_object* v_unused_3741_; 
v_unused_3741_ = lean_ctor_get(v_b_3680_, 0);
lean_dec(v_unused_3741_);
v___x_3689_ = v_b_3680_;
v_isShared_3690_ = v_isSharedCheck_3740_;
goto v_resetjp_3688_;
}
else
{
lean_inc(v_snd_3687_);
lean_dec(v_b_3680_);
v___x_3689_ = lean_box(0);
v_isShared_3690_ = v_isSharedCheck_3740_;
goto v_resetjp_3688_;
}
v_resetjp_3688_:
{
lean_object* v___x_3691_; lean_object* v_a_3693_; lean_object* v_a_3700_; 
v___x_3691_ = lean_box(0);
v_a_3700_ = lean_array_uget(v_as_3677_, v_i_3679_);
if (lean_obj_tag(v_a_3700_) == 0)
{
v_a_3693_ = v_snd_3687_;
goto v___jp_3692_;
}
else
{
lean_object* v_val_3701_; lean_object* v___x_3703_; uint8_t v_isShared_3704_; uint8_t v_isSharedCheck_3739_; 
lean_dec(v_snd_3687_);
v_val_3701_ = lean_ctor_get(v_a_3700_, 0);
v_isSharedCheck_3739_ = !lean_is_exclusive(v_a_3700_);
if (v_isSharedCheck_3739_ == 0)
{
v___x_3703_ = v_a_3700_;
v_isShared_3704_ = v_isSharedCheck_3739_;
goto v_resetjp_3702_;
}
else
{
lean_inc(v_val_3701_);
lean_dec(v_a_3700_);
v___x_3703_ = lean_box(0);
v_isShared_3704_ = v_isSharedCheck_3739_;
goto v_resetjp_3702_;
}
v_resetjp_3702_:
{
lean_object* v___x_3705_; lean_object* v___x_3706_; uint8_t v___x_3707_; 
v___x_3705_ = lean_box(0);
v___x_3706_ = l_Lean_LocalDecl_userName(v_val_3701_);
v___x_3707_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_matchAtomic(v_id_3675_, v___x_3706_, v_danglingDot_3676_);
if (v___x_3707_ == 0)
{
lean_dec(v___x_3706_);
lean_del_object(v___x_3703_);
lean_dec(v_val_3701_);
v_a_3693_ = v___x_3705_;
goto v___jp_3692_;
}
else
{
lean_object* v___x_3708_; lean_object* v___x_3710_; 
v___x_3708_ = l_Lean_LocalDecl_fvarId(v_val_3701_);
lean_dec(v_val_3701_);
if (v_isShared_3704_ == 0)
{
lean_ctor_set(v___x_3703_, 0, v___x_3708_);
v___x_3710_ = v___x_3703_;
goto v_reusejp_3709_;
}
else
{
lean_object* v_reuseFailAlloc_3738_; 
v_reuseFailAlloc_3738_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3738_, 0, v___x_3708_);
v___x_3710_ = v_reuseFailAlloc_3738_;
goto v_reusejp_3709_;
}
v_reusejp_3709_:
{
uint8_t v___x_3711_; lean_object* v___x_3712_; lean_object* v___x_3713_; 
v___x_3711_ = 5;
v___x_3712_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__11_spec__17_spec__20___redArg___closed__0));
v___x_3713_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addUnresolvedCompletionItem___redArg(v___x_3706_, v___x_3710_, v___x_3711_, v___x_3712_, v___y_3681_, v___y_3682_);
if (lean_obj_tag(v___x_3713_) == 0)
{
lean_object* v_a_3714_; lean_object* v___x_3716_; uint8_t v_isShared_3717_; uint8_t v_isSharedCheck_3729_; 
v_a_3714_ = lean_ctor_get(v___x_3713_, 0);
v_isSharedCheck_3729_ = !lean_is_exclusive(v___x_3713_);
if (v_isSharedCheck_3729_ == 0)
{
v___x_3716_ = v___x_3713_;
v_isShared_3717_ = v_isSharedCheck_3729_;
goto v_resetjp_3715_;
}
else
{
lean_inc(v_a_3714_);
lean_dec(v___x_3713_);
v___x_3716_ = lean_box(0);
v_isShared_3717_ = v_isSharedCheck_3729_;
goto v_resetjp_3715_;
}
v_resetjp_3715_:
{
if (lean_obj_tag(v_a_3714_) == 0)
{
lean_object* v_a_3718_; lean_object* v___x_3720_; uint8_t v_isShared_3721_; uint8_t v_isSharedCheck_3728_; 
lean_del_object(v___x_3689_);
v_a_3718_ = lean_ctor_get(v_a_3714_, 0);
v_isSharedCheck_3728_ = !lean_is_exclusive(v_a_3714_);
if (v_isSharedCheck_3728_ == 0)
{
v___x_3720_ = v_a_3714_;
v_isShared_3721_ = v_isSharedCheck_3728_;
goto v_resetjp_3719_;
}
else
{
lean_inc(v_a_3718_);
lean_dec(v_a_3714_);
v___x_3720_ = lean_box(0);
v_isShared_3721_ = v_isSharedCheck_3728_;
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
lean_object* v_reuseFailAlloc_3727_; 
v_reuseFailAlloc_3727_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3727_, 0, v_a_3718_);
v___x_3723_ = v_reuseFailAlloc_3727_;
goto v_reusejp_3722_;
}
v_reusejp_3722_:
{
lean_object* v___x_3725_; 
if (v_isShared_3717_ == 0)
{
lean_ctor_set(v___x_3716_, 0, v___x_3723_);
v___x_3725_ = v___x_3716_;
goto v_reusejp_3724_;
}
else
{
lean_object* v_reuseFailAlloc_3726_; 
v_reuseFailAlloc_3726_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3726_, 0, v___x_3723_);
v___x_3725_ = v_reuseFailAlloc_3726_;
goto v_reusejp_3724_;
}
v_reusejp_3724_:
{
return v___x_3725_;
}
}
}
}
else
{
lean_dec_ref_known(v_a_3714_, 1);
lean_del_object(v___x_3716_);
v_a_3693_ = v___x_3705_;
goto v___jp_3692_;
}
}
}
else
{
lean_object* v_a_3730_; lean_object* v___x_3732_; uint8_t v_isShared_3733_; uint8_t v_isSharedCheck_3737_; 
lean_del_object(v___x_3689_);
v_a_3730_ = lean_ctor_get(v___x_3713_, 0);
v_isSharedCheck_3737_ = !lean_is_exclusive(v___x_3713_);
if (v_isSharedCheck_3737_ == 0)
{
v___x_3732_ = v___x_3713_;
v_isShared_3733_ = v_isSharedCheck_3737_;
goto v_resetjp_3731_;
}
else
{
lean_inc(v_a_3730_);
lean_dec(v___x_3713_);
v___x_3732_ = lean_box(0);
v_isShared_3733_ = v_isSharedCheck_3737_;
goto v_resetjp_3731_;
}
v_resetjp_3731_:
{
lean_object* v___x_3735_; 
if (v_isShared_3733_ == 0)
{
v___x_3735_ = v___x_3732_;
goto v_reusejp_3734_;
}
else
{
lean_object* v_reuseFailAlloc_3736_; 
v_reuseFailAlloc_3736_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3736_, 0, v_a_3730_);
v___x_3735_ = v_reuseFailAlloc_3736_;
goto v_reusejp_3734_;
}
v_reusejp_3734_:
{
return v___x_3735_;
}
}
}
}
}
}
}
v___jp_3692_:
{
lean_object* v___x_3695_; 
if (v_isShared_3690_ == 0)
{
lean_ctor_set(v___x_3689_, 1, v_a_3693_);
lean_ctor_set(v___x_3689_, 0, v___x_3691_);
v___x_3695_ = v___x_3689_;
goto v_reusejp_3694_;
}
else
{
lean_object* v_reuseFailAlloc_3699_; 
v_reuseFailAlloc_3699_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3699_, 0, v___x_3691_);
lean_ctor_set(v_reuseFailAlloc_3699_, 1, v_a_3693_);
v___x_3695_ = v_reuseFailAlloc_3699_;
goto v_reusejp_3694_;
}
v_reusejp_3694_:
{
size_t v___x_3696_; size_t v___x_3697_; 
v___x_3696_ = ((size_t)1ULL);
v___x_3697_ = lean_usize_add(v_i_3679_, v___x_3696_);
v_i_3679_ = v___x_3697_;
v_b_3680_ = v___x_3695_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__12_spec__19___redArg___boxed(lean_object* v_id_3742_, lean_object* v_danglingDot_3743_, lean_object* v_as_3744_, lean_object* v_sz_3745_, lean_object* v_i_3746_, lean_object* v_b_3747_, lean_object* v___y_3748_, lean_object* v___y_3749_, lean_object* v___y_3750_){
_start:
{
uint8_t v_danglingDot_boxed_3751_; size_t v_sz_boxed_3752_; size_t v_i_boxed_3753_; lean_object* v_res_3754_; 
v_danglingDot_boxed_3751_ = lean_unbox(v_danglingDot_3743_);
v_sz_boxed_3752_ = lean_unbox_usize(v_sz_3745_);
lean_dec(v_sz_3745_);
v_i_boxed_3753_ = lean_unbox_usize(v_i_3746_);
lean_dec(v_i_3746_);
v_res_3754_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__12_spec__19___redArg(v_id_3742_, v_danglingDot_boxed_3751_, v_as_3744_, v_sz_boxed_3752_, v_i_boxed_3753_, v_b_3747_, v___y_3748_, v___y_3749_);
lean_dec(v___y_3749_);
lean_dec_ref(v___y_3748_);
lean_dec_ref(v_as_3744_);
lean_dec(v_id_3742_);
return v_res_3754_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__12(lean_object* v_id_3755_, uint8_t v_danglingDot_3756_, lean_object* v_as_3757_, size_t v_sz_3758_, size_t v_i_3759_, lean_object* v_b_3760_, lean_object* v___y_3761_, lean_object* v___y_3762_, lean_object* v___y_3763_, lean_object* v___y_3764_, lean_object* v___y_3765_, lean_object* v___y_3766_, lean_object* v___y_3767_){
_start:
{
uint8_t v___x_3769_; 
v___x_3769_ = lean_usize_dec_lt(v_i_3759_, v_sz_3758_);
if (v___x_3769_ == 0)
{
lean_object* v___x_3770_; lean_object* v___x_3771_; 
v___x_3770_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3770_, 0, v_b_3760_);
v___x_3771_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3771_, 0, v___x_3770_);
return v___x_3771_;
}
else
{
lean_object* v_snd_3772_; lean_object* v___x_3774_; uint8_t v_isShared_3775_; uint8_t v_isSharedCheck_3825_; 
v_snd_3772_ = lean_ctor_get(v_b_3760_, 1);
v_isSharedCheck_3825_ = !lean_is_exclusive(v_b_3760_);
if (v_isSharedCheck_3825_ == 0)
{
lean_object* v_unused_3826_; 
v_unused_3826_ = lean_ctor_get(v_b_3760_, 0);
lean_dec(v_unused_3826_);
v___x_3774_ = v_b_3760_;
v_isShared_3775_ = v_isSharedCheck_3825_;
goto v_resetjp_3773_;
}
else
{
lean_inc(v_snd_3772_);
lean_dec(v_b_3760_);
v___x_3774_ = lean_box(0);
v_isShared_3775_ = v_isSharedCheck_3825_;
goto v_resetjp_3773_;
}
v_resetjp_3773_:
{
lean_object* v___x_3776_; lean_object* v_a_3778_; lean_object* v_a_3785_; 
v___x_3776_ = lean_box(0);
v_a_3785_ = lean_array_uget(v_as_3757_, v_i_3759_);
if (lean_obj_tag(v_a_3785_) == 0)
{
v_a_3778_ = v_snd_3772_;
goto v___jp_3777_;
}
else
{
lean_object* v_val_3786_; lean_object* v___x_3788_; uint8_t v_isShared_3789_; uint8_t v_isSharedCheck_3824_; 
lean_dec(v_snd_3772_);
v_val_3786_ = lean_ctor_get(v_a_3785_, 0);
v_isSharedCheck_3824_ = !lean_is_exclusive(v_a_3785_);
if (v_isSharedCheck_3824_ == 0)
{
v___x_3788_ = v_a_3785_;
v_isShared_3789_ = v_isSharedCheck_3824_;
goto v_resetjp_3787_;
}
else
{
lean_inc(v_val_3786_);
lean_dec(v_a_3785_);
v___x_3788_ = lean_box(0);
v_isShared_3789_ = v_isSharedCheck_3824_;
goto v_resetjp_3787_;
}
v_resetjp_3787_:
{
lean_object* v___x_3790_; lean_object* v___x_3791_; uint8_t v___x_3792_; 
v___x_3790_ = lean_box(0);
v___x_3791_ = l_Lean_LocalDecl_userName(v_val_3786_);
v___x_3792_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_matchAtomic(v_id_3755_, v___x_3791_, v_danglingDot_3756_);
if (v___x_3792_ == 0)
{
lean_dec(v___x_3791_);
lean_del_object(v___x_3788_);
lean_dec(v_val_3786_);
v_a_3778_ = v___x_3790_;
goto v___jp_3777_;
}
else
{
lean_object* v___x_3793_; lean_object* v___x_3795_; 
v___x_3793_ = l_Lean_LocalDecl_fvarId(v_val_3786_);
lean_dec(v_val_3786_);
if (v_isShared_3789_ == 0)
{
lean_ctor_set(v___x_3788_, 0, v___x_3793_);
v___x_3795_ = v___x_3788_;
goto v_reusejp_3794_;
}
else
{
lean_object* v_reuseFailAlloc_3823_; 
v_reuseFailAlloc_3823_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3823_, 0, v___x_3793_);
v___x_3795_ = v_reuseFailAlloc_3823_;
goto v_reusejp_3794_;
}
v_reusejp_3794_:
{
uint8_t v___x_3796_; lean_object* v___x_3797_; lean_object* v___x_3798_; 
v___x_3796_ = 5;
v___x_3797_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__11_spec__17_spec__20___redArg___closed__0));
v___x_3798_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addUnresolvedCompletionItem___redArg(v___x_3791_, v___x_3795_, v___x_3796_, v___x_3797_, v___y_3761_, v___y_3762_);
if (lean_obj_tag(v___x_3798_) == 0)
{
lean_object* v_a_3799_; lean_object* v___x_3801_; uint8_t v_isShared_3802_; uint8_t v_isSharedCheck_3814_; 
v_a_3799_ = lean_ctor_get(v___x_3798_, 0);
v_isSharedCheck_3814_ = !lean_is_exclusive(v___x_3798_);
if (v_isSharedCheck_3814_ == 0)
{
v___x_3801_ = v___x_3798_;
v_isShared_3802_ = v_isSharedCheck_3814_;
goto v_resetjp_3800_;
}
else
{
lean_inc(v_a_3799_);
lean_dec(v___x_3798_);
v___x_3801_ = lean_box(0);
v_isShared_3802_ = v_isSharedCheck_3814_;
goto v_resetjp_3800_;
}
v_resetjp_3800_:
{
if (lean_obj_tag(v_a_3799_) == 0)
{
lean_object* v_a_3803_; lean_object* v___x_3805_; uint8_t v_isShared_3806_; uint8_t v_isSharedCheck_3813_; 
lean_del_object(v___x_3774_);
v_a_3803_ = lean_ctor_get(v_a_3799_, 0);
v_isSharedCheck_3813_ = !lean_is_exclusive(v_a_3799_);
if (v_isSharedCheck_3813_ == 0)
{
v___x_3805_ = v_a_3799_;
v_isShared_3806_ = v_isSharedCheck_3813_;
goto v_resetjp_3804_;
}
else
{
lean_inc(v_a_3803_);
lean_dec(v_a_3799_);
v___x_3805_ = lean_box(0);
v_isShared_3806_ = v_isSharedCheck_3813_;
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
lean_object* v_reuseFailAlloc_3812_; 
v_reuseFailAlloc_3812_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3812_, 0, v_a_3803_);
v___x_3808_ = v_reuseFailAlloc_3812_;
goto v_reusejp_3807_;
}
v_reusejp_3807_:
{
lean_object* v___x_3810_; 
if (v_isShared_3802_ == 0)
{
lean_ctor_set(v___x_3801_, 0, v___x_3808_);
v___x_3810_ = v___x_3801_;
goto v_reusejp_3809_;
}
else
{
lean_object* v_reuseFailAlloc_3811_; 
v_reuseFailAlloc_3811_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3811_, 0, v___x_3808_);
v___x_3810_ = v_reuseFailAlloc_3811_;
goto v_reusejp_3809_;
}
v_reusejp_3809_:
{
return v___x_3810_;
}
}
}
}
else
{
lean_dec_ref_known(v_a_3799_, 1);
lean_del_object(v___x_3801_);
v_a_3778_ = v___x_3790_;
goto v___jp_3777_;
}
}
}
else
{
lean_object* v_a_3815_; lean_object* v___x_3817_; uint8_t v_isShared_3818_; uint8_t v_isSharedCheck_3822_; 
lean_del_object(v___x_3774_);
v_a_3815_ = lean_ctor_get(v___x_3798_, 0);
v_isSharedCheck_3822_ = !lean_is_exclusive(v___x_3798_);
if (v_isSharedCheck_3822_ == 0)
{
v___x_3817_ = v___x_3798_;
v_isShared_3818_ = v_isSharedCheck_3822_;
goto v_resetjp_3816_;
}
else
{
lean_inc(v_a_3815_);
lean_dec(v___x_3798_);
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
}
}
v___jp_3777_:
{
lean_object* v___x_3780_; 
if (v_isShared_3775_ == 0)
{
lean_ctor_set(v___x_3774_, 1, v_a_3778_);
lean_ctor_set(v___x_3774_, 0, v___x_3776_);
v___x_3780_ = v___x_3774_;
goto v_reusejp_3779_;
}
else
{
lean_object* v_reuseFailAlloc_3784_; 
v_reuseFailAlloc_3784_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3784_, 0, v___x_3776_);
lean_ctor_set(v_reuseFailAlloc_3784_, 1, v_a_3778_);
v___x_3780_ = v_reuseFailAlloc_3784_;
goto v_reusejp_3779_;
}
v_reusejp_3779_:
{
size_t v___x_3781_; size_t v___x_3782_; lean_object* v___x_3783_; 
v___x_3781_ = ((size_t)1ULL);
v___x_3782_ = lean_usize_add(v_i_3759_, v___x_3781_);
v___x_3783_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__12_spec__19___redArg(v_id_3755_, v_danglingDot_3756_, v_as_3757_, v_sz_3758_, v___x_3782_, v___x_3780_, v___y_3761_, v___y_3762_);
return v___x_3783_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__12___boxed(lean_object* v_id_3827_, lean_object* v_danglingDot_3828_, lean_object* v_as_3829_, lean_object* v_sz_3830_, lean_object* v_i_3831_, lean_object* v_b_3832_, lean_object* v___y_3833_, lean_object* v___y_3834_, lean_object* v___y_3835_, lean_object* v___y_3836_, lean_object* v___y_3837_, lean_object* v___y_3838_, lean_object* v___y_3839_, lean_object* v___y_3840_){
_start:
{
uint8_t v_danglingDot_boxed_3841_; size_t v_sz_boxed_3842_; size_t v_i_boxed_3843_; lean_object* v_res_3844_; 
v_danglingDot_boxed_3841_ = lean_unbox(v_danglingDot_3828_);
v_sz_boxed_3842_ = lean_unbox_usize(v_sz_3830_);
lean_dec(v_sz_3830_);
v_i_boxed_3843_ = lean_unbox_usize(v_i_3831_);
lean_dec(v_i_3831_);
v_res_3844_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__12(v_id_3827_, v_danglingDot_boxed_3841_, v_as_3829_, v_sz_boxed_3842_, v_i_boxed_3843_, v_b_3832_, v___y_3833_, v___y_3834_, v___y_3835_, v___y_3836_, v___y_3837_, v___y_3838_, v___y_3839_);
lean_dec(v___y_3839_);
lean_dec_ref(v___y_3838_);
lean_dec(v___y_3837_);
lean_dec_ref(v___y_3836_);
lean_dec_ref(v___y_3835_);
lean_dec(v___y_3834_);
lean_dec_ref(v___y_3833_);
lean_dec_ref(v_as_3829_);
lean_dec(v_id_3827_);
return v_res_3844_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6(lean_object* v_id_3845_, uint8_t v_danglingDot_3846_, lean_object* v_t_3847_, lean_object* v_init_3848_, lean_object* v___y_3849_, lean_object* v___y_3850_, lean_object* v___y_3851_, lean_object* v___y_3852_, lean_object* v___y_3853_, lean_object* v___y_3854_, lean_object* v___y_3855_){
_start:
{
lean_object* v_b_3858_; lean_object* v_root_3861_; lean_object* v_tail_3862_; lean_object* v___x_3863_; 
v_root_3861_ = lean_ctor_get(v_t_3847_, 0);
v_tail_3862_ = lean_ctor_get(v_t_3847_, 1);
v___x_3863_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__11(v_init_3848_, v_id_3845_, v_danglingDot_3846_, v_root_3861_, v_init_3848_, v___y_3849_, v___y_3850_, v___y_3851_, v___y_3852_, v___y_3853_, v___y_3854_, v___y_3855_);
if (lean_obj_tag(v___x_3863_) == 0)
{
lean_object* v_a_3864_; lean_object* v___x_3866_; uint8_t v_isShared_3867_; uint8_t v_isSharedCheck_3925_; 
v_a_3864_ = lean_ctor_get(v___x_3863_, 0);
v_isSharedCheck_3925_ = !lean_is_exclusive(v___x_3863_);
if (v_isSharedCheck_3925_ == 0)
{
v___x_3866_ = v___x_3863_;
v_isShared_3867_ = v_isSharedCheck_3925_;
goto v_resetjp_3865_;
}
else
{
lean_inc(v_a_3864_);
lean_dec(v___x_3863_);
v___x_3866_ = lean_box(0);
v_isShared_3867_ = v_isSharedCheck_3925_;
goto v_resetjp_3865_;
}
v_resetjp_3865_:
{
if (lean_obj_tag(v_a_3864_) == 0)
{
lean_object* v_a_3868_; lean_object* v___x_3870_; uint8_t v_isShared_3871_; uint8_t v_isSharedCheck_3878_; 
v_a_3868_ = lean_ctor_get(v_a_3864_, 0);
v_isSharedCheck_3878_ = !lean_is_exclusive(v_a_3864_);
if (v_isSharedCheck_3878_ == 0)
{
v___x_3870_ = v_a_3864_;
v_isShared_3871_ = v_isSharedCheck_3878_;
goto v_resetjp_3869_;
}
else
{
lean_inc(v_a_3868_);
lean_dec(v_a_3864_);
v___x_3870_ = lean_box(0);
v_isShared_3871_ = v_isSharedCheck_3878_;
goto v_resetjp_3869_;
}
v_resetjp_3869_:
{
lean_object* v___x_3873_; 
if (v_isShared_3871_ == 0)
{
v___x_3873_ = v___x_3870_;
goto v_reusejp_3872_;
}
else
{
lean_object* v_reuseFailAlloc_3877_; 
v_reuseFailAlloc_3877_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3877_, 0, v_a_3868_);
v___x_3873_ = v_reuseFailAlloc_3877_;
goto v_reusejp_3872_;
}
v_reusejp_3872_:
{
lean_object* v___x_3875_; 
if (v_isShared_3867_ == 0)
{
lean_ctor_set(v___x_3866_, 0, v___x_3873_);
v___x_3875_ = v___x_3866_;
goto v_reusejp_3874_;
}
else
{
lean_object* v_reuseFailAlloc_3876_; 
v_reuseFailAlloc_3876_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3876_, 0, v___x_3873_);
v___x_3875_ = v_reuseFailAlloc_3876_;
goto v_reusejp_3874_;
}
v_reusejp_3874_:
{
return v___x_3875_;
}
}
}
}
else
{
lean_object* v_a_3879_; 
lean_del_object(v___x_3866_);
v_a_3879_ = lean_ctor_get(v_a_3864_, 0);
lean_inc(v_a_3879_);
lean_dec_ref_known(v_a_3864_, 1);
if (lean_obj_tag(v_a_3879_) == 0)
{
lean_object* v_a_3880_; 
v_a_3880_ = lean_ctor_get(v_a_3879_, 0);
lean_inc(v_a_3880_);
lean_dec_ref_known(v_a_3879_, 1);
v_b_3858_ = v_a_3880_;
goto v___jp_3857_;
}
else
{
lean_object* v_a_3881_; lean_object* v___x_3882_; lean_object* v___x_3883_; size_t v_sz_3884_; size_t v___x_3885_; lean_object* v___x_3886_; 
v_a_3881_ = lean_ctor_get(v_a_3879_, 0);
lean_inc(v_a_3881_);
lean_dec_ref_known(v_a_3879_, 1);
v___x_3882_ = lean_box(0);
v___x_3883_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3883_, 0, v___x_3882_);
lean_ctor_set(v___x_3883_, 1, v_a_3881_);
v_sz_3884_ = lean_array_size(v_tail_3862_);
v___x_3885_ = ((size_t)0ULL);
v___x_3886_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__12(v_id_3845_, v_danglingDot_3846_, v_tail_3862_, v_sz_3884_, v___x_3885_, v___x_3883_, v___y_3849_, v___y_3850_, v___y_3851_, v___y_3852_, v___y_3853_, v___y_3854_, v___y_3855_);
if (lean_obj_tag(v___x_3886_) == 0)
{
lean_object* v_a_3887_; lean_object* v___x_3889_; uint8_t v_isShared_3890_; uint8_t v_isSharedCheck_3916_; 
v_a_3887_ = lean_ctor_get(v___x_3886_, 0);
v_isSharedCheck_3916_ = !lean_is_exclusive(v___x_3886_);
if (v_isSharedCheck_3916_ == 0)
{
v___x_3889_ = v___x_3886_;
v_isShared_3890_ = v_isSharedCheck_3916_;
goto v_resetjp_3888_;
}
else
{
lean_inc(v_a_3887_);
lean_dec(v___x_3886_);
v___x_3889_ = lean_box(0);
v_isShared_3890_ = v_isSharedCheck_3916_;
goto v_resetjp_3888_;
}
v_resetjp_3888_:
{
if (lean_obj_tag(v_a_3887_) == 0)
{
lean_object* v_a_3891_; lean_object* v___x_3893_; uint8_t v_isShared_3894_; uint8_t v_isSharedCheck_3901_; 
v_a_3891_ = lean_ctor_get(v_a_3887_, 0);
v_isSharedCheck_3901_ = !lean_is_exclusive(v_a_3887_);
if (v_isSharedCheck_3901_ == 0)
{
v___x_3893_ = v_a_3887_;
v_isShared_3894_ = v_isSharedCheck_3901_;
goto v_resetjp_3892_;
}
else
{
lean_inc(v_a_3891_);
lean_dec(v_a_3887_);
v___x_3893_ = lean_box(0);
v_isShared_3894_ = v_isSharedCheck_3901_;
goto v_resetjp_3892_;
}
v_resetjp_3892_:
{
lean_object* v___x_3896_; 
if (v_isShared_3894_ == 0)
{
v___x_3896_ = v___x_3893_;
goto v_reusejp_3895_;
}
else
{
lean_object* v_reuseFailAlloc_3900_; 
v_reuseFailAlloc_3900_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3900_, 0, v_a_3891_);
v___x_3896_ = v_reuseFailAlloc_3900_;
goto v_reusejp_3895_;
}
v_reusejp_3895_:
{
lean_object* v___x_3898_; 
if (v_isShared_3890_ == 0)
{
lean_ctor_set(v___x_3889_, 0, v___x_3896_);
v___x_3898_ = v___x_3889_;
goto v_reusejp_3897_;
}
else
{
lean_object* v_reuseFailAlloc_3899_; 
v_reuseFailAlloc_3899_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3899_, 0, v___x_3896_);
v___x_3898_ = v_reuseFailAlloc_3899_;
goto v_reusejp_3897_;
}
v_reusejp_3897_:
{
return v___x_3898_;
}
}
}
}
else
{
lean_object* v_a_3902_; lean_object* v___x_3904_; uint8_t v_isShared_3905_; uint8_t v_isSharedCheck_3915_; 
v_a_3902_ = lean_ctor_get(v_a_3887_, 0);
v_isSharedCheck_3915_ = !lean_is_exclusive(v_a_3887_);
if (v_isSharedCheck_3915_ == 0)
{
v___x_3904_ = v_a_3887_;
v_isShared_3905_ = v_isSharedCheck_3915_;
goto v_resetjp_3903_;
}
else
{
lean_inc(v_a_3902_);
lean_dec(v_a_3887_);
v___x_3904_ = lean_box(0);
v_isShared_3905_ = v_isSharedCheck_3915_;
goto v_resetjp_3903_;
}
v_resetjp_3903_:
{
lean_object* v_fst_3906_; 
v_fst_3906_ = lean_ctor_get(v_a_3902_, 0);
if (lean_obj_tag(v_fst_3906_) == 0)
{
lean_object* v_snd_3907_; lean_object* v___x_3909_; 
v_snd_3907_ = lean_ctor_get(v_a_3902_, 1);
lean_inc(v_snd_3907_);
lean_dec(v_a_3902_);
if (v_isShared_3905_ == 0)
{
lean_ctor_set(v___x_3904_, 0, v_snd_3907_);
v___x_3909_ = v___x_3904_;
goto v_reusejp_3908_;
}
else
{
lean_object* v_reuseFailAlloc_3913_; 
v_reuseFailAlloc_3913_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3913_, 0, v_snd_3907_);
v___x_3909_ = v_reuseFailAlloc_3913_;
goto v_reusejp_3908_;
}
v_reusejp_3908_:
{
lean_object* v___x_3911_; 
if (v_isShared_3890_ == 0)
{
lean_ctor_set(v___x_3889_, 0, v___x_3909_);
v___x_3911_ = v___x_3889_;
goto v_reusejp_3910_;
}
else
{
lean_object* v_reuseFailAlloc_3912_; 
v_reuseFailAlloc_3912_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3912_, 0, v___x_3909_);
v___x_3911_ = v_reuseFailAlloc_3912_;
goto v_reusejp_3910_;
}
v_reusejp_3910_:
{
return v___x_3911_;
}
}
}
else
{
lean_object* v_val_3914_; 
lean_inc_ref(v_fst_3906_);
lean_del_object(v___x_3904_);
lean_dec(v_a_3902_);
lean_del_object(v___x_3889_);
v_val_3914_ = lean_ctor_get(v_fst_3906_, 0);
lean_inc(v_val_3914_);
lean_dec_ref_known(v_fst_3906_, 1);
v_b_3858_ = v_val_3914_;
goto v___jp_3857_;
}
}
}
}
}
else
{
lean_object* v_a_3917_; lean_object* v___x_3919_; uint8_t v_isShared_3920_; uint8_t v_isSharedCheck_3924_; 
v_a_3917_ = lean_ctor_get(v___x_3886_, 0);
v_isSharedCheck_3924_ = !lean_is_exclusive(v___x_3886_);
if (v_isSharedCheck_3924_ == 0)
{
v___x_3919_ = v___x_3886_;
v_isShared_3920_ = v_isSharedCheck_3924_;
goto v_resetjp_3918_;
}
else
{
lean_inc(v_a_3917_);
lean_dec(v___x_3886_);
v___x_3919_ = lean_box(0);
v_isShared_3920_ = v_isSharedCheck_3924_;
goto v_resetjp_3918_;
}
v_resetjp_3918_:
{
lean_object* v___x_3922_; 
if (v_isShared_3920_ == 0)
{
v___x_3922_ = v___x_3919_;
goto v_reusejp_3921_;
}
else
{
lean_object* v_reuseFailAlloc_3923_; 
v_reuseFailAlloc_3923_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3923_, 0, v_a_3917_);
v___x_3922_ = v_reuseFailAlloc_3923_;
goto v_reusejp_3921_;
}
v_reusejp_3921_:
{
return v___x_3922_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_3926_; lean_object* v___x_3928_; uint8_t v_isShared_3929_; uint8_t v_isSharedCheck_3933_; 
v_a_3926_ = lean_ctor_get(v___x_3863_, 0);
v_isSharedCheck_3933_ = !lean_is_exclusive(v___x_3863_);
if (v_isSharedCheck_3933_ == 0)
{
v___x_3928_ = v___x_3863_;
v_isShared_3929_ = v_isSharedCheck_3933_;
goto v_resetjp_3927_;
}
else
{
lean_inc(v_a_3926_);
lean_dec(v___x_3863_);
v___x_3928_ = lean_box(0);
v_isShared_3929_ = v_isSharedCheck_3933_;
goto v_resetjp_3927_;
}
v_resetjp_3927_:
{
lean_object* v___x_3931_; 
if (v_isShared_3929_ == 0)
{
v___x_3931_ = v___x_3928_;
goto v_reusejp_3930_;
}
else
{
lean_object* v_reuseFailAlloc_3932_; 
v_reuseFailAlloc_3932_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3932_, 0, v_a_3926_);
v___x_3931_ = v_reuseFailAlloc_3932_;
goto v_reusejp_3930_;
}
v_reusejp_3930_:
{
return v___x_3931_;
}
}
}
v___jp_3857_:
{
lean_object* v___x_3859_; lean_object* v___x_3860_; 
v___x_3859_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3859_, 0, v_b_3858_);
v___x_3860_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3860_, 0, v___x_3859_);
return v___x_3860_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6___boxed(lean_object* v_id_3934_, lean_object* v_danglingDot_3935_, lean_object* v_t_3936_, lean_object* v_init_3937_, lean_object* v___y_3938_, lean_object* v___y_3939_, lean_object* v___y_3940_, lean_object* v___y_3941_, lean_object* v___y_3942_, lean_object* v___y_3943_, lean_object* v___y_3944_, lean_object* v___y_3945_){
_start:
{
uint8_t v_danglingDot_boxed_3946_; lean_object* v_res_3947_; 
v_danglingDot_boxed_3946_ = lean_unbox(v_danglingDot_3935_);
v_res_3947_ = l_Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6(v_id_3934_, v_danglingDot_boxed_3946_, v_t_3936_, v_init_3937_, v___y_3938_, v___y_3939_, v___y_3940_, v___y_3941_, v___y_3942_, v___y_3943_, v___y_3944_);
lean_dec(v___y_3944_);
lean_dec_ref(v___y_3943_);
lean_dec(v___y_3942_);
lean_dec_ref(v___y_3941_);
lean_dec_ref(v___y_3940_);
lean_dec(v___y_3939_);
lean_dec_ref(v___y_3938_);
lean_dec_ref(v_t_3936_);
lean_dec(v_id_3934_);
return v_res_3947_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__5___redArg(lean_object* v_as_3948_, size_t v_sz_3949_, size_t v_i_3950_, lean_object* v_b_3951_, lean_object* v___y_3952_, lean_object* v___y_3953_){
_start:
{
uint8_t v___x_3955_; 
v___x_3955_ = lean_usize_dec_lt(v_i_3950_, v_sz_3949_);
if (v___x_3955_ == 0)
{
lean_object* v___x_3956_; lean_object* v___x_3957_; 
v___x_3956_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3956_, 0, v_b_3951_);
v___x_3957_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3957_, 0, v___x_3956_);
return v___x_3957_;
}
else
{
lean_object* v___x_3958_; lean_object* v_a_3959_; lean_object* v___x_3960_; 
v___x_3958_ = lean_box(0);
v_a_3959_ = lean_array_uget_borrowed(v_as_3948_, v_i_3950_);
lean_inc(v_a_3959_);
v___x_3960_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addKeywordCompletionItem___redArg(v_a_3959_, v___y_3952_, v___y_3953_);
if (lean_obj_tag(v___x_3960_) == 0)
{
lean_object* v_a_3961_; 
v_a_3961_ = lean_ctor_get(v___x_3960_, 0);
lean_inc(v_a_3961_);
if (lean_obj_tag(v_a_3961_) == 0)
{
lean_dec_ref_known(v_a_3961_, 1);
return v___x_3960_;
}
else
{
size_t v___x_3962_; size_t v___x_3963_; 
lean_dec_ref_known(v_a_3961_, 1);
lean_dec_ref_known(v___x_3960_, 1);
v___x_3962_ = ((size_t)1ULL);
v___x_3963_ = lean_usize_add(v_i_3950_, v___x_3962_);
v_i_3950_ = v___x_3963_;
v_b_3951_ = v___x_3958_;
goto _start;
}
}
else
{
return v___x_3960_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__5___redArg___boxed(lean_object* v_as_3965_, lean_object* v_sz_3966_, lean_object* v_i_3967_, lean_object* v_b_3968_, lean_object* v___y_3969_, lean_object* v___y_3970_, lean_object* v___y_3971_){
_start:
{
size_t v_sz_boxed_3972_; size_t v_i_boxed_3973_; lean_object* v_res_3974_; 
v_sz_boxed_3972_ = lean_unbox_usize(v_sz_3966_);
lean_dec(v_sz_3966_);
v_i_boxed_3973_ = lean_unbox_usize(v_i_3967_);
lean_dec(v_i_3967_);
v_res_3974_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__5___redArg(v_as_3965_, v_sz_boxed_3972_, v_i_boxed_3973_, v_b_3968_, v___y_3969_, v___y_3970_);
lean_dec(v___y_3970_);
lean_dec_ref(v___y_3969_);
lean_dec_ref(v_as_3965_);
return v_res_3974_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__4___redArg___lam__0(lean_object* v___x_3975_, lean_object* v_a_3976_, lean_object* v___x_3977_, lean_object* v_ns_3978_, lean_object* v_id_3979_, uint8_t v_danglingDot_3980_, lean_object* v_alias_3981_, lean_object* v_declNames_3982_, lean_object* v___y_3983_, lean_object* v___y_3984_, lean_object* v___y_3985_, lean_object* v___y_3986_, lean_object* v___y_3987_, lean_object* v___y_3988_, lean_object* v___y_3989_){
_start:
{
uint8_t v___y_3992_; uint8_t v___x_3996_; 
v___x_3996_ = l_Lean_Name_isPrefixOf(v_ns_3978_, v_alias_3981_);
if (v___x_3996_ == 0)
{
v___y_3992_ = v___x_3996_;
goto v___jp_3991_;
}
else
{
lean_object* v___x_3997_; lean_object* v___x_3998_; uint8_t v___x_3999_; 
v___x_3997_ = lean_obj_once(&l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_matchDecl_x3f___redArg___closed__0, &l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_matchDecl_x3f___redArg___closed__0_once, _init_l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_matchDecl_x3f___redArg___closed__0);
lean_inc(v_alias_3981_);
v___x_3998_ = l_Lean_Name_replacePrefix(v_alias_3981_, v_ns_3978_, v___x_3997_);
v___x_3999_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_matchAtomic(v_id_3979_, v___x_3998_, v_danglingDot_3980_);
lean_dec(v___x_3998_);
v___y_3992_ = v___x_3999_;
goto v___jp_3991_;
}
v___jp_3991_:
{
if (v___y_3992_ == 0)
{
lean_object* v___x_3993_; lean_object* v___x_3994_; 
lean_dec(v_declNames_3982_);
lean_dec(v_alias_3981_);
lean_dec_ref(v___x_3977_);
v___x_3993_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3993_, 0, v___x_3975_);
v___x_3994_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3994_, 0, v___x_3993_);
return v___x_3994_;
}
else
{
lean_object* v___x_3995_; 
v___x_3995_ = l_List_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__2___redArg(v_a_3976_, v___x_3977_, v_alias_3981_, v_declNames_3982_, v___y_3983_, v___y_3984_, v___y_3986_, v___y_3987_, v___y_3988_, v___y_3989_);
lean_dec(v_alias_3981_);
return v___x_3995_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__4___redArg___lam__0___boxed(lean_object* v___x_4000_, lean_object* v_a_4001_, lean_object* v___x_4002_, lean_object* v_ns_4003_, lean_object* v_id_4004_, lean_object* v_danglingDot_4005_, lean_object* v_alias_4006_, lean_object* v_declNames_4007_, lean_object* v___y_4008_, lean_object* v___y_4009_, lean_object* v___y_4010_, lean_object* v___y_4011_, lean_object* v___y_4012_, lean_object* v___y_4013_, lean_object* v___y_4014_, lean_object* v___y_4015_){
_start:
{
uint8_t v_danglingDot_boxed_4016_; lean_object* v_res_4017_; 
v_danglingDot_boxed_4016_ = lean_unbox(v_danglingDot_4005_);
v_res_4017_ = l_List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__4___redArg___lam__0(v___x_4000_, v_a_4001_, v___x_4002_, v_ns_4003_, v_id_4004_, v_danglingDot_boxed_4016_, v_alias_4006_, v_declNames_4007_, v___y_4008_, v___y_4009_, v___y_4010_, v___y_4011_, v___y_4012_, v___y_4013_, v___y_4014_);
lean_dec(v___y_4014_);
lean_dec_ref(v___y_4013_);
lean_dec(v___y_4012_);
lean_dec_ref(v___y_4011_);
lean_dec_ref(v___y_4010_);
lean_dec(v___y_4009_);
lean_dec_ref(v___y_4008_);
lean_dec(v_id_4004_);
lean_dec(v_ns_4003_);
lean_dec_ref(v_a_4001_);
return v_res_4017_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__4_spec__8___redArg(lean_object* v_a_4018_, lean_object* v___x_4019_, lean_object* v_id_4020_, uint8_t v_danglingDot_4021_, lean_object* v_as_x27_4022_, lean_object* v_b_4023_, lean_object* v___y_4024_, lean_object* v___y_4025_, lean_object* v___y_4026_, lean_object* v___y_4027_, lean_object* v___y_4028_, lean_object* v___y_4029_, lean_object* v___y_4030_){
_start:
{
lean_object* v_a_4033_; 
if (lean_obj_tag(v_as_x27_4022_) == 0)
{
lean_object* v___x_4036_; lean_object* v___x_4037_; 
lean_dec(v_id_4020_);
lean_dec_ref(v___x_4019_);
lean_dec_ref(v_a_4018_);
v___x_4036_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4036_, 0, v_b_4023_);
v___x_4037_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4037_, 0, v___x_4036_);
return v___x_4037_;
}
else
{
lean_object* v_head_4038_; lean_object* v_tail_4039_; lean_object* v___x_4040_; 
v_head_4038_ = lean_ctor_get(v_as_x27_4022_, 0);
v_tail_4039_ = lean_ctor_get(v_as_x27_4022_, 1);
v___x_4040_ = lean_box(0);
if (lean_obj_tag(v_head_4038_) == 0)
{
lean_object* v_ns_4041_; lean_object* v___x_4042_; lean_object* v___f_4043_; lean_object* v___x_4044_; lean_object* v___x_4045_; 
v_ns_4041_ = lean_ctor_get(v_head_4038_, 0);
v___x_4042_ = lean_box(v_danglingDot_4021_);
lean_inc(v_id_4020_);
lean_inc(v_ns_4041_);
lean_inc_ref_n(v___x_4019_, 2);
lean_inc_ref(v_a_4018_);
v___f_4043_ = lean_alloc_closure((void*)(l_List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__4___redArg___lam__0___boxed), 16, 6);
lean_closure_set(v___f_4043_, 0, v___x_4040_);
lean_closure_set(v___f_4043_, 1, v_a_4018_);
lean_closure_set(v___f_4043_, 2, v___x_4019_);
lean_closure_set(v___f_4043_, 3, v_ns_4041_);
lean_closure_set(v___f_4043_, 4, v_id_4020_);
lean_closure_set(v___f_4043_, 5, v___x_4042_);
v___x_4044_ = l_Lean_getAliasState(v___x_4019_);
v___x_4045_ = l_Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3___redArg(v___x_4044_, v___f_4043_, v___y_4024_, v___y_4025_, v___y_4026_, v___y_4027_, v___y_4028_, v___y_4029_, v___y_4030_);
if (lean_obj_tag(v___x_4045_) == 0)
{
lean_object* v_a_4046_; 
v_a_4046_ = lean_ctor_get(v___x_4045_, 0);
lean_inc(v_a_4046_);
lean_dec_ref_known(v___x_4045_, 1);
if (lean_obj_tag(v_a_4046_) == 0)
{
lean_object* v_a_4047_; 
lean_dec(v_id_4020_);
lean_dec_ref(v___x_4019_);
lean_dec_ref(v_a_4018_);
v_a_4047_ = lean_ctor_get(v_a_4046_, 0);
lean_inc(v_a_4047_);
lean_dec_ref_known(v_a_4046_, 1);
v_a_4033_ = v_a_4047_;
goto v___jp_4032_;
}
else
{
lean_dec_ref_known(v_a_4046_, 1);
v_as_x27_4022_ = v_tail_4039_;
v_b_4023_ = v___x_4040_;
goto _start;
}
}
else
{
lean_dec(v_id_4020_);
lean_dec_ref(v___x_4019_);
lean_dec_ref(v_a_4018_);
return v___x_4045_;
}
}
else
{
lean_object* v_id_4049_; lean_object* v_declName_4050_; uint8_t v___x_4051_; 
v_id_4049_ = lean_ctor_get(v_head_4038_, 0);
v_declName_4050_ = lean_ctor_get(v_head_4038_, 1);
lean_inc(v_declName_4050_);
lean_inc_ref(v___x_4019_);
v___x_4051_ = l_Lean_Server_Completion_allowCompletion(v_a_4018_, v___x_4019_, v_declName_4050_);
if (v___x_4051_ == 0)
{
v_as_x27_4022_ = v_tail_4039_;
v_b_4023_ = v___x_4040_;
goto _start;
}
else
{
uint8_t v___x_4053_; 
v___x_4053_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_matchAtomic(v_id_4020_, v_id_4049_, v_danglingDot_4021_);
if (v___x_4053_ == 0)
{
v_as_x27_4022_ = v_tail_4039_;
v_b_4023_ = v___x_4040_;
goto _start;
}
else
{
lean_object* v___x_4055_; lean_object* v___x_4056_; lean_object* v___x_4057_; lean_object* v___x_4058_; 
v___x_4055_ = l_Lean_Name_getString_x21(v_id_4049_);
v___x_4056_ = lean_obj_once(&l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_matchDecl_x3f___redArg___closed__0, &l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_matchDecl_x3f___redArg___closed__0_once, _init_l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_matchDecl_x3f___redArg___closed__0);
v___x_4057_ = l_Lean_Name_str___override(v___x_4056_, v___x_4055_);
lean_inc(v_declName_4050_);
v___x_4058_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addUnresolvedCompletionItemForDecl___redArg(v___x_4057_, v_declName_4050_, v___y_4024_, v___y_4025_, v___y_4027_, v___y_4028_, v___y_4029_, v___y_4030_);
if (lean_obj_tag(v___x_4058_) == 0)
{
lean_dec_ref_known(v___x_4058_, 1);
v_as_x27_4022_ = v_tail_4039_;
v_b_4023_ = v___x_4040_;
goto _start;
}
else
{
lean_dec(v_id_4020_);
lean_dec_ref(v___x_4019_);
lean_dec_ref(v_a_4018_);
return v___x_4058_;
}
}
}
}
}
v___jp_4032_:
{
lean_object* v___x_4034_; lean_object* v___x_4035_; 
v___x_4034_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4034_, 0, v_a_4033_);
v___x_4035_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4035_, 0, v___x_4034_);
return v___x_4035_;
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__4_spec__8___redArg___boxed(lean_object* v_a_4060_, lean_object* v___x_4061_, lean_object* v_id_4062_, lean_object* v_danglingDot_4063_, lean_object* v_as_x27_4064_, lean_object* v_b_4065_, lean_object* v___y_4066_, lean_object* v___y_4067_, lean_object* v___y_4068_, lean_object* v___y_4069_, lean_object* v___y_4070_, lean_object* v___y_4071_, lean_object* v___y_4072_, lean_object* v___y_4073_){
_start:
{
uint8_t v_danglingDot_boxed_4074_; lean_object* v_res_4075_; 
v_danglingDot_boxed_4074_ = lean_unbox(v_danglingDot_4063_);
v_res_4075_ = l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__4_spec__8___redArg(v_a_4060_, v___x_4061_, v_id_4062_, v_danglingDot_boxed_4074_, v_as_x27_4064_, v_b_4065_, v___y_4066_, v___y_4067_, v___y_4068_, v___y_4069_, v___y_4070_, v___y_4071_, v___y_4072_);
lean_dec(v___y_4072_);
lean_dec_ref(v___y_4071_);
lean_dec(v___y_4070_);
lean_dec_ref(v___y_4069_);
lean_dec_ref(v___y_4068_);
lean_dec(v___y_4067_);
lean_dec_ref(v___y_4066_);
lean_dec(v_as_x27_4064_);
return v_res_4075_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__4___redArg(lean_object* v_id_4076_, uint8_t v_danglingDot_4077_, lean_object* v_a_4078_, lean_object* v___x_4079_, lean_object* v_as_4080_, lean_object* v_as_x27_4081_, lean_object* v_b_4082_, lean_object* v___y_4083_, lean_object* v___y_4084_, lean_object* v___y_4085_, lean_object* v___y_4086_, lean_object* v___y_4087_, lean_object* v___y_4088_, lean_object* v___y_4089_){
_start:
{
lean_object* v_a_4092_; 
if (lean_obj_tag(v_as_x27_4081_) == 0)
{
lean_object* v___x_4095_; lean_object* v___x_4096_; 
lean_dec_ref(v___x_4079_);
lean_dec_ref(v_a_4078_);
lean_dec(v_id_4076_);
v___x_4095_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4095_, 0, v_b_4082_);
v___x_4096_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4096_, 0, v___x_4095_);
return v___x_4096_;
}
else
{
lean_object* v_head_4097_; lean_object* v_tail_4098_; lean_object* v___x_4099_; 
v_head_4097_ = lean_ctor_get(v_as_x27_4081_, 0);
v_tail_4098_ = lean_ctor_get(v_as_x27_4081_, 1);
v___x_4099_ = lean_box(0);
if (lean_obj_tag(v_head_4097_) == 0)
{
lean_object* v_ns_4100_; lean_object* v___x_4101_; lean_object* v___f_4102_; lean_object* v___x_4103_; lean_object* v___x_4104_; 
v_ns_4100_ = lean_ctor_get(v_head_4097_, 0);
v___x_4101_ = lean_box(v_danglingDot_4077_);
lean_inc(v_id_4076_);
lean_inc(v_ns_4100_);
lean_inc_ref_n(v___x_4079_, 2);
lean_inc_ref(v_a_4078_);
v___f_4102_ = lean_alloc_closure((void*)(l_List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__4___redArg___lam__0___boxed), 16, 6);
lean_closure_set(v___f_4102_, 0, v___x_4099_);
lean_closure_set(v___f_4102_, 1, v_a_4078_);
lean_closure_set(v___f_4102_, 2, v___x_4079_);
lean_closure_set(v___f_4102_, 3, v_ns_4100_);
lean_closure_set(v___f_4102_, 4, v_id_4076_);
lean_closure_set(v___f_4102_, 5, v___x_4101_);
v___x_4103_ = l_Lean_getAliasState(v___x_4079_);
v___x_4104_ = l_Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3___redArg(v___x_4103_, v___f_4102_, v___y_4083_, v___y_4084_, v___y_4085_, v___y_4086_, v___y_4087_, v___y_4088_, v___y_4089_);
if (lean_obj_tag(v___x_4104_) == 0)
{
lean_object* v_a_4105_; 
v_a_4105_ = lean_ctor_get(v___x_4104_, 0);
lean_inc(v_a_4105_);
lean_dec_ref_known(v___x_4104_, 1);
if (lean_obj_tag(v_a_4105_) == 0)
{
lean_object* v_a_4106_; 
lean_dec_ref(v___x_4079_);
lean_dec_ref(v_a_4078_);
lean_dec(v_id_4076_);
v_a_4106_ = lean_ctor_get(v_a_4105_, 0);
lean_inc(v_a_4106_);
lean_dec_ref_known(v_a_4105_, 1);
v_a_4092_ = v_a_4106_;
goto v___jp_4091_;
}
else
{
lean_object* v___x_4107_; 
lean_dec_ref_known(v_a_4105_, 1);
v___x_4107_ = l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__4_spec__8___redArg(v_a_4078_, v___x_4079_, v_id_4076_, v_danglingDot_4077_, v_tail_4098_, v___x_4099_, v___y_4083_, v___y_4084_, v___y_4085_, v___y_4086_, v___y_4087_, v___y_4088_, v___y_4089_);
return v___x_4107_;
}
}
else
{
lean_dec_ref(v___x_4079_);
lean_dec_ref(v_a_4078_);
lean_dec(v_id_4076_);
return v___x_4104_;
}
}
else
{
lean_object* v_id_4108_; lean_object* v_declName_4109_; uint8_t v___x_4110_; 
v_id_4108_ = lean_ctor_get(v_head_4097_, 0);
v_declName_4109_ = lean_ctor_get(v_head_4097_, 1);
lean_inc(v_declName_4109_);
lean_inc_ref(v___x_4079_);
v___x_4110_ = l_Lean_Server_Completion_allowCompletion(v_a_4078_, v___x_4079_, v_declName_4109_);
if (v___x_4110_ == 0)
{
lean_object* v___x_4111_; 
v___x_4111_ = l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__4_spec__8___redArg(v_a_4078_, v___x_4079_, v_id_4076_, v_danglingDot_4077_, v_tail_4098_, v___x_4099_, v___y_4083_, v___y_4084_, v___y_4085_, v___y_4086_, v___y_4087_, v___y_4088_, v___y_4089_);
return v___x_4111_;
}
else
{
uint8_t v___x_4112_; 
v___x_4112_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_matchAtomic(v_id_4076_, v_id_4108_, v_danglingDot_4077_);
if (v___x_4112_ == 0)
{
lean_object* v___x_4113_; 
v___x_4113_ = l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__4_spec__8___redArg(v_a_4078_, v___x_4079_, v_id_4076_, v_danglingDot_4077_, v_tail_4098_, v___x_4099_, v___y_4083_, v___y_4084_, v___y_4085_, v___y_4086_, v___y_4087_, v___y_4088_, v___y_4089_);
return v___x_4113_;
}
else
{
lean_object* v___x_4114_; lean_object* v___x_4115_; lean_object* v___x_4116_; lean_object* v___x_4117_; 
v___x_4114_ = l_Lean_Name_getString_x21(v_id_4108_);
v___x_4115_ = lean_obj_once(&l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_matchDecl_x3f___redArg___closed__0, &l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_matchDecl_x3f___redArg___closed__0_once, _init_l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_matchDecl_x3f___redArg___closed__0);
v___x_4116_ = l_Lean_Name_str___override(v___x_4115_, v___x_4114_);
lean_inc(v_declName_4109_);
v___x_4117_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addUnresolvedCompletionItemForDecl___redArg(v___x_4116_, v_declName_4109_, v___y_4083_, v___y_4084_, v___y_4086_, v___y_4087_, v___y_4088_, v___y_4089_);
if (lean_obj_tag(v___x_4117_) == 0)
{
lean_object* v___x_4118_; 
lean_dec_ref_known(v___x_4117_, 1);
v___x_4118_ = l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__4_spec__8___redArg(v_a_4078_, v___x_4079_, v_id_4076_, v_danglingDot_4077_, v_tail_4098_, v___x_4099_, v___y_4083_, v___y_4084_, v___y_4085_, v___y_4086_, v___y_4087_, v___y_4088_, v___y_4089_);
return v___x_4118_;
}
else
{
lean_dec_ref(v___x_4079_);
lean_dec_ref(v_a_4078_);
lean_dec(v_id_4076_);
return v___x_4117_;
}
}
}
}
}
v___jp_4091_:
{
lean_object* v___x_4093_; lean_object* v___x_4094_; 
v___x_4093_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4093_, 0, v_a_4092_);
v___x_4094_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4094_, 0, v___x_4093_);
return v___x_4094_;
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__4___redArg___boxed(lean_object* v_id_4119_, lean_object* v_danglingDot_4120_, lean_object* v_a_4121_, lean_object* v___x_4122_, lean_object* v_as_4123_, lean_object* v_as_x27_4124_, lean_object* v_b_4125_, lean_object* v___y_4126_, lean_object* v___y_4127_, lean_object* v___y_4128_, lean_object* v___y_4129_, lean_object* v___y_4130_, lean_object* v___y_4131_, lean_object* v___y_4132_, lean_object* v___y_4133_){
_start:
{
uint8_t v_danglingDot_boxed_4134_; lean_object* v_res_4135_; 
v_danglingDot_boxed_4134_ = lean_unbox(v_danglingDot_4120_);
v_res_4135_ = l_List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__4___redArg(v_id_4119_, v_danglingDot_boxed_4134_, v_a_4121_, v___x_4122_, v_as_4123_, v_as_x27_4124_, v_b_4125_, v___y_4126_, v___y_4127_, v___y_4128_, v___y_4129_, v___y_4130_, v___y_4131_, v___y_4132_);
lean_dec(v___y_4132_);
lean_dec_ref(v___y_4131_);
lean_dec(v___y_4130_);
lean_dec_ref(v___y_4129_);
lean_dec_ref(v___y_4128_);
lean_dec(v___y_4127_);
lean_dec_ref(v___y_4126_);
lean_dec(v_as_x27_4124_);
lean_dec(v_as_4123_);
return v_res_4135_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore(lean_object* v_ctx_4136_, lean_object* v_stx_4137_, lean_object* v_id_4138_, lean_object* v_hoverInfo_4139_, uint8_t v_danglingDot_4140_, lean_object* v_a_4141_, lean_object* v_a_4142_, lean_object* v_a_4143_, lean_object* v_a_4144_, lean_object* v_a_4145_, lean_object* v_a_4146_, lean_object* v_a_4147_){
_start:
{
lean_object* v___y_4150_; lean_object* v___y_4151_; lean_object* v___y_4152_; lean_object* v___y_4153_; lean_object* v___y_4154_; lean_object* v___y_4155_; lean_object* v___y_4156_; lean_object* v___y_4157_; lean_object* v___y_4158_; uint8_t v___y_4159_; lean_object* v___y_4160_; lean_object* v_id_4201_; uint8_t v_danglingDot_4202_; lean_object* v___y_4203_; lean_object* v___y_4204_; lean_object* v___y_4205_; lean_object* v___y_4206_; lean_object* v___y_4207_; lean_object* v___y_4208_; lean_object* v___y_4209_; lean_object* v_id_4221_; lean_object* v___y_4222_; lean_object* v___y_4223_; lean_object* v___y_4224_; lean_object* v___y_4225_; lean_object* v___y_4226_; lean_object* v___y_4227_; lean_object* v___y_4228_; uint8_t v___x_4232_; 
v___x_4232_ = l_Lean_Name_hasMacroScopes(v_id_4138_);
if (v___x_4232_ == 0)
{
v_id_4221_ = v_id_4138_;
v___y_4222_ = v_a_4141_;
v___y_4223_ = v_a_4142_;
v___y_4224_ = v_a_4143_;
v___y_4225_ = v_a_4144_;
v___y_4226_ = v_a_4145_;
v___y_4227_ = v_a_4146_;
v___y_4228_ = v_a_4147_;
goto v___jp_4220_;
}
else
{
lean_object* v___x_4233_; 
v___x_4233_ = l_Lean_Syntax_getHeadInfo(v_stx_4137_);
if (lean_obj_tag(v___x_4233_) == 0)
{
lean_object* v_id_4234_; 
lean_dec_ref_known(v___x_4233_, 4);
v_id_4234_ = l_Lean_Name_eraseMacroScopes(v_id_4138_);
lean_dec(v_id_4138_);
v_id_4221_ = v_id_4234_;
v___y_4222_ = v_a_4141_;
v___y_4223_ = v_a_4142_;
v___y_4224_ = v_a_4143_;
v___y_4225_ = v_a_4144_;
v___y_4226_ = v_a_4145_;
v___y_4227_ = v_a_4146_;
v___y_4228_ = v_a_4147_;
goto v___jp_4220_;
}
else
{
lean_object* v___x_4235_; lean_object* v___x_4236_; 
lean_dec(v___x_4233_);
lean_dec(v_hoverInfo_4139_);
lean_dec(v_id_4138_);
lean_dec_ref(v_ctx_4136_);
v___x_4235_ = ((lean_object*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addItem___redArg___closed__0));
v___x_4236_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4236_, 0, v___x_4235_);
return v___x_4236_;
}
}
v___jp_4149_:
{
lean_object* v___x_4161_; lean_object* v_env_4162_; lean_object* v___x_4163_; 
v___x_4161_ = lean_st_ref_get(v___y_4158_);
v_env_4162_ = lean_ctor_get(v___x_4161_, 0);
lean_inc_ref(v_env_4162_);
lean_dec(v___x_4161_);
v___x_4163_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0(v___y_4151_, v___y_4154_, v___y_4156_, v___y_4150_, v___y_4153_, v___y_4155_, v___y_4152_, v___y_4158_);
if (lean_obj_tag(v___x_4163_) == 0)
{
lean_object* v_a_4164_; 
v_a_4164_ = lean_ctor_get(v___x_4163_, 0);
lean_inc(v_a_4164_);
if (lean_obj_tag(v_a_4164_) == 0)
{
lean_dec_ref_known(v_a_4164_, 1);
lean_dec_ref(v_env_4162_);
lean_dec_ref(v___y_4160_);
lean_dec(v___y_4157_);
lean_dec_ref(v_ctx_4136_);
return v___x_4163_;
}
else
{
lean_object* v___x_4165_; lean_object* v_a_4166_; 
lean_dec_ref_known(v_a_4164_, 1);
lean_dec_ref_known(v___x_4163_, 1);
v___x_4165_ = l_Lean_Server_CancellableT_checkCancelled___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__1___redArg(v___y_4150_);
v_a_4166_ = lean_ctor_get(v___x_4165_, 0);
lean_inc(v_a_4166_);
if (lean_obj_tag(v_a_4166_) == 0)
{
lean_dec_ref_known(v_a_4166_, 1);
lean_dec_ref(v_env_4162_);
lean_dec_ref(v___y_4160_);
lean_dec(v___y_4157_);
lean_dec_ref(v_ctx_4136_);
return v___x_4165_;
}
else
{
lean_object* v___x_4167_; 
lean_dec_ref_known(v_a_4166_, 1);
lean_dec_ref(v___x_4165_);
lean_inc_ref(v_env_4162_);
v___x_4167_ = l_Lean_Server_Completion_getEligibleHeaderDecls(v_env_4162_, v___y_4153_, v___y_4155_, v___y_4152_, v___y_4158_);
if (lean_obj_tag(v___x_4167_) == 0)
{
lean_object* v_toCommandContextInfo_4168_; lean_object* v_a_4169_; lean_object* v_currNamespace_4170_; lean_object* v_openDecls_4171_; lean_object* v___f_4172_; lean_object* v___f_4173_; lean_object* v___x_4174_; lean_object* v___x_4175_; 
v_toCommandContextInfo_4168_ = lean_ctor_get(v_ctx_4136_, 0);
v_a_4169_ = lean_ctor_get(v___x_4167_, 0);
lean_inc_n(v_a_4169_, 2);
lean_dec_ref_known(v___x_4167_, 1);
v_currNamespace_4170_ = lean_ctor_get(v_toCommandContextInfo_4168_, 5);
v_openDecls_4171_ = lean_ctor_get(v_toCommandContextInfo_4168_, 6);
lean_inc_ref_n(v_env_4162_, 2);
v___f_4172_ = lean_alloc_closure((void*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore___lam__2___boxed), 12, 2);
lean_closure_set(v___f_4172_, 0, v_a_4169_);
lean_closure_set(v___f_4172_, 1, v_env_4162_);
lean_inc(v_currNamespace_4170_);
v___f_4173_ = lean_alloc_closure((void*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore___lam__3___boxed), 13, 3);
lean_closure_set(v___f_4173_, 0, v___y_4160_);
lean_closure_set(v___f_4173_, 1, v___f_4172_);
lean_closure_set(v___f_4173_, 2, v_currNamespace_4170_);
v___x_4174_ = lean_box(0);
lean_inc(v___y_4157_);
v___x_4175_ = l_List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__4___redArg(v___y_4157_, v___y_4159_, v_a_4169_, v_env_4162_, v_openDecls_4171_, v_openDecls_4171_, v___x_4174_, v___y_4154_, v___y_4156_, v___y_4150_, v___y_4153_, v___y_4155_, v___y_4152_, v___y_4158_);
if (lean_obj_tag(v___x_4175_) == 0)
{
lean_object* v_a_4176_; 
v_a_4176_ = lean_ctor_get(v___x_4175_, 0);
lean_inc(v_a_4176_);
if (lean_obj_tag(v_a_4176_) == 0)
{
lean_dec_ref_known(v_a_4176_, 1);
lean_dec_ref(v___f_4173_);
lean_dec_ref(v_env_4162_);
lean_dec(v___y_4157_);
lean_dec_ref(v_ctx_4136_);
return v___x_4175_;
}
else
{
lean_object* v___x_4177_; lean_object* v___x_4178_; 
lean_dec_ref_known(v_a_4176_, 1);
lean_dec_ref_known(v___x_4175_, 1);
lean_inc_ref(v_env_4162_);
v___x_4177_ = l_Lean_getAliasState(v_env_4162_);
v___x_4178_ = l_Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3___redArg(v___x_4177_, v___f_4173_, v___y_4154_, v___y_4156_, v___y_4150_, v___y_4153_, v___y_4155_, v___y_4152_, v___y_4158_);
if (lean_obj_tag(v___x_4178_) == 0)
{
lean_object* v_a_4179_; 
v_a_4179_ = lean_ctor_get(v___x_4178_, 0);
lean_inc(v_a_4179_);
if (lean_obj_tag(v_a_4179_) == 0)
{
lean_dec_ref_known(v_a_4179_, 1);
lean_dec_ref(v_env_4162_);
lean_dec(v___y_4157_);
lean_dec_ref(v_ctx_4136_);
return v___x_4178_;
}
else
{
lean_dec_ref_known(v_a_4179_, 1);
lean_dec_ref_known(v___x_4178_, 1);
if (v___y_4159_ == 0)
{
if (lean_obj_tag(v___y_4157_) == 1)
{
lean_object* v_pre_4180_; 
v_pre_4180_ = lean_ctor_get(v___y_4157_, 0);
if (lean_obj_tag(v_pre_4180_) == 0)
{
lean_object* v_str_4181_; lean_object* v___x_4182_; lean_object* v___x_4183_; size_t v_sz_4184_; size_t v___x_4185_; lean_object* v___x_4186_; 
v_str_4181_ = lean_ctor_get(v___y_4157_, 1);
v___x_4182_ = l_Lean_Parser_getTokenTable(v_env_4162_);
v___x_4183_ = l_Lean_Data_Trie_findPrefix___redArg(v___x_4182_, v_str_4181_);
lean_dec_ref(v___x_4182_);
v_sz_4184_ = lean_array_size(v___x_4183_);
v___x_4185_ = ((size_t)0ULL);
v___x_4186_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__5___redArg(v___x_4183_, v_sz_4184_, v___x_4185_, v___x_4174_, v___y_4154_, v___y_4156_);
lean_dec_ref(v___x_4183_);
if (lean_obj_tag(v___x_4186_) == 0)
{
lean_object* v_a_4187_; 
v_a_4187_ = lean_ctor_get(v___x_4186_, 0);
lean_inc(v_a_4187_);
if (lean_obj_tag(v_a_4187_) == 0)
{
lean_dec_ref_known(v_a_4187_, 1);
lean_dec_ref_known(v___y_4157_, 2);
lean_dec_ref(v_ctx_4136_);
return v___x_4186_;
}
else
{
lean_object* v___x_4188_; 
lean_dec_ref_known(v_a_4187_, 1);
lean_dec_ref_known(v___x_4186_, 1);
v___x_4188_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_completeNamespaces(v_ctx_4136_, v___y_4157_, v___y_4159_, v___y_4154_, v___y_4156_, v___y_4150_, v___y_4153_, v___y_4155_, v___y_4152_, v___y_4158_);
return v___x_4188_;
}
}
else
{
lean_dec_ref_known(v___y_4157_, 2);
lean_dec_ref(v_ctx_4136_);
return v___x_4186_;
}
}
else
{
lean_object* v___x_4189_; 
lean_dec_ref(v_env_4162_);
v___x_4189_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_completeNamespaces(v_ctx_4136_, v___y_4157_, v___y_4159_, v___y_4154_, v___y_4156_, v___y_4150_, v___y_4153_, v___y_4155_, v___y_4152_, v___y_4158_);
return v___x_4189_;
}
}
else
{
lean_object* v___x_4190_; 
lean_dec_ref(v_env_4162_);
v___x_4190_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_completeNamespaces(v_ctx_4136_, v___y_4157_, v___y_4159_, v___y_4154_, v___y_4156_, v___y_4150_, v___y_4153_, v___y_4155_, v___y_4152_, v___y_4158_);
return v___x_4190_;
}
}
else
{
lean_object* v___x_4191_; 
lean_dec_ref(v_env_4162_);
v___x_4191_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_completeNamespaces(v_ctx_4136_, v___y_4157_, v___y_4159_, v___y_4154_, v___y_4156_, v___y_4150_, v___y_4153_, v___y_4155_, v___y_4152_, v___y_4158_);
return v___x_4191_;
}
}
}
else
{
lean_dec_ref(v_env_4162_);
lean_dec(v___y_4157_);
lean_dec_ref(v_ctx_4136_);
return v___x_4178_;
}
}
}
else
{
lean_dec_ref(v___f_4173_);
lean_dec_ref(v_env_4162_);
lean_dec(v___y_4157_);
lean_dec_ref(v_ctx_4136_);
return v___x_4175_;
}
}
else
{
lean_object* v_a_4192_; lean_object* v___x_4194_; uint8_t v_isShared_4195_; uint8_t v_isSharedCheck_4199_; 
lean_dec_ref(v_env_4162_);
lean_dec_ref(v___y_4160_);
lean_dec(v___y_4157_);
lean_dec_ref(v_ctx_4136_);
v_a_4192_ = lean_ctor_get(v___x_4167_, 0);
v_isSharedCheck_4199_ = !lean_is_exclusive(v___x_4167_);
if (v_isSharedCheck_4199_ == 0)
{
v___x_4194_ = v___x_4167_;
v_isShared_4195_ = v_isSharedCheck_4199_;
goto v_resetjp_4193_;
}
else
{
lean_inc(v_a_4192_);
lean_dec(v___x_4167_);
v___x_4194_ = lean_box(0);
v_isShared_4195_ = v_isSharedCheck_4199_;
goto v_resetjp_4193_;
}
v_resetjp_4193_:
{
lean_object* v___x_4197_; 
if (v_isShared_4195_ == 0)
{
v___x_4197_ = v___x_4194_;
goto v_reusejp_4196_;
}
else
{
lean_object* v_reuseFailAlloc_4198_; 
v_reuseFailAlloc_4198_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4198_, 0, v_a_4192_);
v___x_4197_ = v_reuseFailAlloc_4198_;
goto v_reusejp_4196_;
}
v_reusejp_4196_:
{
return v___x_4197_;
}
}
}
}
}
}
else
{
lean_dec_ref(v_env_4162_);
lean_dec_ref(v___y_4160_);
lean_dec(v___y_4157_);
lean_dec_ref(v_ctx_4136_);
return v___x_4163_;
}
}
v___jp_4200_:
{
lean_object* v___x_4210_; lean_object* v___f_4211_; lean_object* v___x_4212_; lean_object* v___f_4213_; uint8_t v___x_4214_; 
v___x_4210_ = lean_box(v_danglingDot_4202_);
lean_inc_n(v_id_4201_, 2);
lean_inc_ref(v_ctx_4136_);
v___f_4211_ = lean_alloc_closure((void*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore___lam__0___boxed), 13, 3);
lean_closure_set(v___f_4211_, 0, v_ctx_4136_);
lean_closure_set(v___f_4211_, 1, v_id_4201_);
lean_closure_set(v___f_4211_, 2, v___x_4210_);
v___x_4212_ = lean_box(v_danglingDot_4202_);
v___f_4213_ = lean_alloc_closure((void*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore___lam__1___boxed), 4, 2);
lean_closure_set(v___f_4213_, 0, v_id_4201_);
lean_closure_set(v___f_4213_, 1, v___x_4212_);
v___x_4214_ = l_Lean_Name_isAtomic(v_id_4201_);
if (v___x_4214_ == 0)
{
v___y_4150_ = v___y_4205_;
v___y_4151_ = v___f_4211_;
v___y_4152_ = v___y_4208_;
v___y_4153_ = v___y_4206_;
v___y_4154_ = v___y_4203_;
v___y_4155_ = v___y_4207_;
v___y_4156_ = v___y_4204_;
v___y_4157_ = v_id_4201_;
v___y_4158_ = v___y_4209_;
v___y_4159_ = v_danglingDot_4202_;
v___y_4160_ = v___f_4213_;
goto v___jp_4149_;
}
else
{
lean_object* v_lctx_4215_; lean_object* v_decls_4216_; lean_object* v___x_4217_; lean_object* v___x_4218_; 
v_lctx_4215_ = lean_ctor_get(v___y_4206_, 2);
v_decls_4216_ = lean_ctor_get(v_lctx_4215_, 1);
v___x_4217_ = lean_box(0);
v___x_4218_ = l_Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6(v_id_4201_, v_danglingDot_4202_, v_decls_4216_, v___x_4217_, v___y_4203_, v___y_4204_, v___y_4205_, v___y_4206_, v___y_4207_, v___y_4208_, v___y_4209_);
if (lean_obj_tag(v___x_4218_) == 0)
{
lean_object* v_a_4219_; 
v_a_4219_ = lean_ctor_get(v___x_4218_, 0);
lean_inc(v_a_4219_);
if (lean_obj_tag(v_a_4219_) == 0)
{
lean_dec_ref_known(v_a_4219_, 1);
lean_dec_ref(v___f_4213_);
lean_dec_ref(v___f_4211_);
lean_dec(v_id_4201_);
lean_dec_ref(v_ctx_4136_);
return v___x_4218_;
}
else
{
lean_dec_ref_known(v_a_4219_, 1);
lean_dec_ref_known(v___x_4218_, 1);
v___y_4150_ = v___y_4205_;
v___y_4151_ = v___f_4211_;
v___y_4152_ = v___y_4208_;
v___y_4153_ = v___y_4206_;
v___y_4154_ = v___y_4203_;
v___y_4155_ = v___y_4207_;
v___y_4156_ = v___y_4204_;
v___y_4157_ = v_id_4201_;
v___y_4158_ = v___y_4209_;
v___y_4159_ = v_danglingDot_4202_;
v___y_4160_ = v___f_4213_;
goto v___jp_4149_;
}
}
else
{
lean_dec_ref(v___f_4213_);
lean_dec_ref(v___f_4211_);
lean_dec(v_id_4201_);
lean_dec_ref(v_ctx_4136_);
return v___x_4218_;
}
}
}
v___jp_4220_:
{
if (lean_obj_tag(v_hoverInfo_4139_) == 1)
{
lean_object* v_delta_4229_; lean_object* v_id_4230_; uint8_t v_danglingDot_4231_; 
v_delta_4229_ = lean_ctor_get(v_hoverInfo_4139_, 0);
lean_inc(v_delta_4229_);
lean_dec_ref_known(v_hoverInfo_4139_, 1);
v_id_4230_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_truncate(v_id_4221_, v_delta_4229_);
v_danglingDot_4231_ = 0;
v_id_4201_ = v_id_4230_;
v_danglingDot_4202_ = v_danglingDot_4231_;
v___y_4203_ = v___y_4222_;
v___y_4204_ = v___y_4223_;
v___y_4205_ = v___y_4224_;
v___y_4206_ = v___y_4225_;
v___y_4207_ = v___y_4226_;
v___y_4208_ = v___y_4227_;
v___y_4209_ = v___y_4228_;
goto v___jp_4200_;
}
else
{
lean_dec(v_hoverInfo_4139_);
v_id_4201_ = v_id_4221_;
v_danglingDot_4202_ = v_danglingDot_4140_;
v___y_4203_ = v___y_4222_;
v___y_4204_ = v___y_4223_;
v___y_4205_ = v___y_4224_;
v___y_4206_ = v___y_4225_;
v___y_4207_ = v___y_4226_;
v___y_4208_ = v___y_4227_;
v___y_4209_ = v___y_4228_;
goto v___jp_4200_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore___boxed(lean_object* v_ctx_4237_, lean_object* v_stx_4238_, lean_object* v_id_4239_, lean_object* v_hoverInfo_4240_, lean_object* v_danglingDot_4241_, lean_object* v_a_4242_, lean_object* v_a_4243_, lean_object* v_a_4244_, lean_object* v_a_4245_, lean_object* v_a_4246_, lean_object* v_a_4247_, lean_object* v_a_4248_, lean_object* v_a_4249_){
_start:
{
uint8_t v_danglingDot_boxed_4250_; lean_object* v_res_4251_; 
v_danglingDot_boxed_4250_ = lean_unbox(v_danglingDot_4241_);
v_res_4251_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore(v_ctx_4237_, v_stx_4238_, v_id_4239_, v_hoverInfo_4240_, v_danglingDot_boxed_4250_, v_a_4242_, v_a_4243_, v_a_4244_, v_a_4245_, v_a_4246_, v_a_4247_, v_a_4248_);
lean_dec(v_a_4248_);
lean_dec_ref(v_a_4247_);
lean_dec(v_a_4246_);
lean_dec_ref(v_a_4245_);
lean_dec_ref(v_a_4244_);
lean_dec(v_a_4243_);
lean_dec_ref(v_a_4242_);
lean_dec(v_stx_4238_);
return v_res_4251_;
}
}
LEAN_EXPORT lean_object* l_List_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__2(lean_object* v_a_4252_, lean_object* v___x_4253_, lean_object* v_alias_4254_, lean_object* v_as_4255_, lean_object* v___y_4256_, lean_object* v___y_4257_, lean_object* v___y_4258_, lean_object* v___y_4259_, lean_object* v___y_4260_, lean_object* v___y_4261_, lean_object* v___y_4262_){
_start:
{
lean_object* v___x_4264_; 
v___x_4264_ = l_List_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__2___redArg(v_a_4252_, v___x_4253_, v_alias_4254_, v_as_4255_, v___y_4256_, v___y_4257_, v___y_4259_, v___y_4260_, v___y_4261_, v___y_4262_);
return v___x_4264_;
}
}
LEAN_EXPORT lean_object* l_List_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__2___boxed(lean_object* v_a_4265_, lean_object* v___x_4266_, lean_object* v_alias_4267_, lean_object* v_as_4268_, lean_object* v___y_4269_, lean_object* v___y_4270_, lean_object* v___y_4271_, lean_object* v___y_4272_, lean_object* v___y_4273_, lean_object* v___y_4274_, lean_object* v___y_4275_, lean_object* v___y_4276_){
_start:
{
lean_object* v_res_4277_; 
v_res_4277_ = l_List_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__2(v_a_4265_, v___x_4266_, v_alias_4267_, v_as_4268_, v___y_4269_, v___y_4270_, v___y_4271_, v___y_4272_, v___y_4273_, v___y_4274_, v___y_4275_);
lean_dec(v___y_4275_);
lean_dec_ref(v___y_4274_);
lean_dec(v___y_4273_);
lean_dec_ref(v___y_4272_);
lean_dec_ref(v___y_4271_);
lean_dec(v___y_4270_);
lean_dec_ref(v___y_4269_);
lean_dec(v_alias_4267_);
lean_dec_ref(v_a_4265_);
return v_res_4277_;
}
}
LEAN_EXPORT lean_object* l_Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3(lean_object* v_00_u03b2_4278_, lean_object* v_s_4279_, lean_object* v_f_4280_, lean_object* v___y_4281_, lean_object* v___y_4282_, lean_object* v___y_4283_, lean_object* v___y_4284_, lean_object* v___y_4285_, lean_object* v___y_4286_, lean_object* v___y_4287_){
_start:
{
lean_object* v___x_4289_; 
v___x_4289_ = l_Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3___redArg(v_s_4279_, v_f_4280_, v___y_4281_, v___y_4282_, v___y_4283_, v___y_4284_, v___y_4285_, v___y_4286_, v___y_4287_);
return v___x_4289_;
}
}
LEAN_EXPORT lean_object* l_Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3___boxed(lean_object* v_00_u03b2_4290_, lean_object* v_s_4291_, lean_object* v_f_4292_, lean_object* v___y_4293_, lean_object* v___y_4294_, lean_object* v___y_4295_, lean_object* v___y_4296_, lean_object* v___y_4297_, lean_object* v___y_4298_, lean_object* v___y_4299_, lean_object* v___y_4300_){
_start:
{
lean_object* v_res_4301_; 
v_res_4301_ = l_Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3(v_00_u03b2_4290_, v_s_4291_, v_f_4292_, v___y_4293_, v___y_4294_, v___y_4295_, v___y_4296_, v___y_4297_, v___y_4298_, v___y_4299_);
lean_dec(v___y_4299_);
lean_dec_ref(v___y_4298_);
lean_dec(v___y_4297_);
lean_dec_ref(v___y_4296_);
lean_dec_ref(v___y_4295_);
lean_dec(v___y_4294_);
lean_dec_ref(v___y_4293_);
return v_res_4301_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__4(lean_object* v_id_4302_, uint8_t v_danglingDot_4303_, lean_object* v_a_4304_, lean_object* v___x_4305_, lean_object* v_as_4306_, lean_object* v_as_x27_4307_, lean_object* v_b_4308_, lean_object* v_a_4309_, lean_object* v___y_4310_, lean_object* v___y_4311_, lean_object* v___y_4312_, lean_object* v___y_4313_, lean_object* v___y_4314_, lean_object* v___y_4315_, lean_object* v___y_4316_){
_start:
{
lean_object* v___x_4318_; 
v___x_4318_ = l_List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__4___redArg(v_id_4302_, v_danglingDot_4303_, v_a_4304_, v___x_4305_, v_as_4306_, v_as_x27_4307_, v_b_4308_, v___y_4310_, v___y_4311_, v___y_4312_, v___y_4313_, v___y_4314_, v___y_4315_, v___y_4316_);
return v___x_4318_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__4___boxed(lean_object* v_id_4319_, lean_object* v_danglingDot_4320_, lean_object* v_a_4321_, lean_object* v___x_4322_, lean_object* v_as_4323_, lean_object* v_as_x27_4324_, lean_object* v_b_4325_, lean_object* v_a_4326_, lean_object* v___y_4327_, lean_object* v___y_4328_, lean_object* v___y_4329_, lean_object* v___y_4330_, lean_object* v___y_4331_, lean_object* v___y_4332_, lean_object* v___y_4333_, lean_object* v___y_4334_){
_start:
{
uint8_t v_danglingDot_boxed_4335_; lean_object* v_res_4336_; 
v_danglingDot_boxed_4335_ = lean_unbox(v_danglingDot_4320_);
v_res_4336_ = l_List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__4(v_id_4319_, v_danglingDot_boxed_4335_, v_a_4321_, v___x_4322_, v_as_4323_, v_as_x27_4324_, v_b_4325_, v_a_4326_, v___y_4327_, v___y_4328_, v___y_4329_, v___y_4330_, v___y_4331_, v___y_4332_, v___y_4333_);
lean_dec(v___y_4333_);
lean_dec_ref(v___y_4332_);
lean_dec(v___y_4331_);
lean_dec_ref(v___y_4330_);
lean_dec_ref(v___y_4329_);
lean_dec(v___y_4328_);
lean_dec_ref(v___y_4327_);
lean_dec(v_as_x27_4324_);
lean_dec(v_as_4323_);
return v_res_4336_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__5(lean_object* v_as_4337_, size_t v_sz_4338_, size_t v_i_4339_, lean_object* v_b_4340_, lean_object* v___y_4341_, lean_object* v___y_4342_, lean_object* v___y_4343_, lean_object* v___y_4344_, lean_object* v___y_4345_, lean_object* v___y_4346_, lean_object* v___y_4347_){
_start:
{
lean_object* v___x_4349_; 
v___x_4349_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__5___redArg(v_as_4337_, v_sz_4338_, v_i_4339_, v_b_4340_, v___y_4341_, v___y_4342_);
return v___x_4349_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__5___boxed(lean_object* v_as_4350_, lean_object* v_sz_4351_, lean_object* v_i_4352_, lean_object* v_b_4353_, lean_object* v___y_4354_, lean_object* v___y_4355_, lean_object* v___y_4356_, lean_object* v___y_4357_, lean_object* v___y_4358_, lean_object* v___y_4359_, lean_object* v___y_4360_, lean_object* v___y_4361_){
_start:
{
size_t v_sz_boxed_4362_; size_t v_i_boxed_4363_; lean_object* v_res_4364_; 
v_sz_boxed_4362_ = lean_unbox_usize(v_sz_4351_);
lean_dec(v_sz_4351_);
v_i_boxed_4363_ = lean_unbox_usize(v_i_4352_);
lean_dec(v_i_4352_);
v_res_4364_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__5(v_as_4350_, v_sz_boxed_4362_, v_i_boxed_4363_, v_b_4353_, v___y_4354_, v___y_4355_, v___y_4356_, v___y_4357_, v___y_4358_, v___y_4359_, v___y_4360_);
lean_dec(v___y_4360_);
lean_dec_ref(v___y_4359_);
lean_dec(v___y_4358_);
lean_dec_ref(v___y_4357_);
lean_dec_ref(v___y_4356_);
lean_dec(v___y_4355_);
lean_dec_ref(v___y_4354_);
lean_dec_ref(v_as_4350_);
return v_res_4364_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__4(lean_object* v_00_u03b2_4365_, lean_object* v_f_4366_, lean_object* v_x_4367_, lean_object* v_x_4368_, lean_object* v___y_4369_, lean_object* v___y_4370_, lean_object* v___y_4371_, lean_object* v___y_4372_, lean_object* v___y_4373_, lean_object* v___y_4374_, lean_object* v___y_4375_){
_start:
{
lean_object* v___x_4377_; 
v___x_4377_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__4___redArg(v_f_4366_, v_x_4367_, v_x_4368_, v___y_4369_, v___y_4370_, v___y_4371_, v___y_4372_, v___y_4373_, v___y_4374_, v___y_4375_);
return v___x_4377_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__4___boxed(lean_object* v_00_u03b2_4378_, lean_object* v_f_4379_, lean_object* v_x_4380_, lean_object* v_x_4381_, lean_object* v___y_4382_, lean_object* v___y_4383_, lean_object* v___y_4384_, lean_object* v___y_4385_, lean_object* v___y_4386_, lean_object* v___y_4387_, lean_object* v___y_4388_, lean_object* v___y_4389_){
_start:
{
lean_object* v_res_4390_; 
v_res_4390_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__4(v_00_u03b2_4378_, v_f_4379_, v_x_4380_, v_x_4381_, v___y_4382_, v___y_4383_, v___y_4384_, v___y_4385_, v___y_4386_, v___y_4387_, v___y_4388_);
lean_dec(v___y_4388_);
lean_dec_ref(v___y_4387_);
lean_dec(v___y_4386_);
lean_dec_ref(v___y_4385_);
lean_dec_ref(v___y_4384_);
lean_dec(v___y_4383_);
lean_dec_ref(v___y_4382_);
return v_res_4390_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5(lean_object* v_00_u03b2_4391_, lean_object* v_map_4392_, lean_object* v_f_4393_, lean_object* v___y_4394_, lean_object* v___y_4395_, lean_object* v___y_4396_, lean_object* v___y_4397_, lean_object* v___y_4398_, lean_object* v___y_4399_, lean_object* v___y_4400_){
_start:
{
lean_object* v___x_4402_; 
v___x_4402_ = l_Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5___redArg(v_map_4392_, v_f_4393_, v___y_4394_, v___y_4395_, v___y_4396_, v___y_4397_, v___y_4398_, v___y_4399_, v___y_4400_);
return v___x_4402_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5___boxed(lean_object* v_00_u03b2_4403_, lean_object* v_map_4404_, lean_object* v_f_4405_, lean_object* v___y_4406_, lean_object* v___y_4407_, lean_object* v___y_4408_, lean_object* v___y_4409_, lean_object* v___y_4410_, lean_object* v___y_4411_, lean_object* v___y_4412_, lean_object* v___y_4413_){
_start:
{
lean_object* v_res_4414_; 
v_res_4414_ = l_Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5(v_00_u03b2_4403_, v_map_4404_, v_f_4405_, v___y_4406_, v___y_4407_, v___y_4408_, v___y_4409_, v___y_4410_, v___y_4411_, v___y_4412_);
lean_dec(v___y_4412_);
lean_dec_ref(v___y_4411_);
lean_dec(v___y_4410_);
lean_dec_ref(v___y_4409_);
lean_dec_ref(v___y_4408_);
lean_dec(v___y_4407_);
lean_dec_ref(v___y_4406_);
return v_res_4414_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__6(lean_object* v_00_u03b2_4415_, lean_object* v_f_4416_, lean_object* v_as_4417_, size_t v_i_4418_, size_t v_stop_4419_, lean_object* v_b_4420_, lean_object* v___y_4421_, lean_object* v___y_4422_, lean_object* v___y_4423_, lean_object* v___y_4424_, lean_object* v___y_4425_, lean_object* v___y_4426_, lean_object* v___y_4427_){
_start:
{
lean_object* v___x_4429_; 
v___x_4429_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__6___redArg(v_f_4416_, v_as_4417_, v_i_4418_, v_stop_4419_, v_b_4420_, v___y_4421_, v___y_4422_, v___y_4423_, v___y_4424_, v___y_4425_, v___y_4426_, v___y_4427_);
return v___x_4429_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__6___boxed(lean_object* v_00_u03b2_4430_, lean_object* v_f_4431_, lean_object* v_as_4432_, lean_object* v_i_4433_, lean_object* v_stop_4434_, lean_object* v_b_4435_, lean_object* v___y_4436_, lean_object* v___y_4437_, lean_object* v___y_4438_, lean_object* v___y_4439_, lean_object* v___y_4440_, lean_object* v___y_4441_, lean_object* v___y_4442_, lean_object* v___y_4443_){
_start:
{
size_t v_i_boxed_4444_; size_t v_stop_boxed_4445_; lean_object* v_res_4446_; 
v_i_boxed_4444_ = lean_unbox_usize(v_i_4433_);
lean_dec(v_i_4433_);
v_stop_boxed_4445_ = lean_unbox_usize(v_stop_4434_);
lean_dec(v_stop_4434_);
v_res_4446_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__6(v_00_u03b2_4430_, v_f_4431_, v_as_4432_, v_i_boxed_4444_, v_stop_boxed_4445_, v_b_4435_, v___y_4436_, v___y_4437_, v___y_4438_, v___y_4439_, v___y_4440_, v___y_4441_, v___y_4442_);
lean_dec(v___y_4442_);
lean_dec_ref(v___y_4441_);
lean_dec(v___y_4440_);
lean_dec_ref(v___y_4439_);
lean_dec_ref(v___y_4438_);
lean_dec(v___y_4437_);
lean_dec_ref(v___y_4436_);
lean_dec_ref(v_as_4432_);
return v_res_4446_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__4_spec__8(lean_object* v_a_4447_, lean_object* v___x_4448_, lean_object* v_id_4449_, uint8_t v_danglingDot_4450_, lean_object* v_as_4451_, lean_object* v_as_x27_4452_, lean_object* v_b_4453_, lean_object* v_a_4454_, lean_object* v___y_4455_, lean_object* v___y_4456_, lean_object* v___y_4457_, lean_object* v___y_4458_, lean_object* v___y_4459_, lean_object* v___y_4460_, lean_object* v___y_4461_){
_start:
{
lean_object* v___x_4463_; 
v___x_4463_ = l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__4_spec__8___redArg(v_a_4447_, v___x_4448_, v_id_4449_, v_danglingDot_4450_, v_as_x27_4452_, v_b_4453_, v___y_4455_, v___y_4456_, v___y_4457_, v___y_4458_, v___y_4459_, v___y_4460_, v___y_4461_);
return v___x_4463_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__4_spec__8___boxed(lean_object* v_a_4464_, lean_object* v___x_4465_, lean_object* v_id_4466_, lean_object* v_danglingDot_4467_, lean_object* v_as_4468_, lean_object* v_as_x27_4469_, lean_object* v_b_4470_, lean_object* v_a_4471_, lean_object* v___y_4472_, lean_object* v___y_4473_, lean_object* v___y_4474_, lean_object* v___y_4475_, lean_object* v___y_4476_, lean_object* v___y_4477_, lean_object* v___y_4478_, lean_object* v___y_4479_){
_start:
{
uint8_t v_danglingDot_boxed_4480_; lean_object* v_res_4481_; 
v_danglingDot_boxed_4480_ = lean_unbox(v_danglingDot_4467_);
v_res_4481_ = l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__4_spec__8(v_a_4464_, v___x_4465_, v_id_4466_, v_danglingDot_boxed_4480_, v_as_4468_, v_as_x27_4469_, v_b_4470_, v_a_4471_, v___y_4472_, v___y_4473_, v___y_4474_, v___y_4475_, v___y_4476_, v___y_4477_, v___y_4478_);
lean_dec(v___y_4478_);
lean_dec_ref(v___y_4477_);
lean_dec(v___y_4476_);
lean_dec_ref(v___y_4475_);
lean_dec_ref(v___y_4474_);
lean_dec(v___y_4473_);
lean_dec_ref(v___y_4472_);
lean_dec(v_as_x27_4469_);
lean_dec(v_as_4468_);
return v_res_4481_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3(lean_object* v_00_u03b2_4482_, lean_object* v_map_4483_, lean_object* v_f_4484_, lean_object* v___y_4485_, lean_object* v___y_4486_, lean_object* v___y_4487_, lean_object* v___y_4488_, lean_object* v___y_4489_, lean_object* v___y_4490_, lean_object* v___y_4491_, lean_object* v___y_4492_){
_start:
{
lean_object* v___x_4494_; 
v___x_4494_ = l_Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3___redArg(v_map_4483_, v_f_4484_, v___y_4485_, v___y_4486_, v___y_4487_, v___y_4488_, v___y_4489_, v___y_4490_, v___y_4491_, v___y_4492_);
return v___x_4494_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3___boxed(lean_object* v_00_u03b2_4495_, lean_object* v_map_4496_, lean_object* v_f_4497_, lean_object* v___y_4498_, lean_object* v___y_4499_, lean_object* v___y_4500_, lean_object* v___y_4501_, lean_object* v___y_4502_, lean_object* v___y_4503_, lean_object* v___y_4504_, lean_object* v___y_4505_, lean_object* v___y_4506_){
_start:
{
lean_object* v_res_4507_; 
v_res_4507_ = l_Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3(v_00_u03b2_4495_, v_map_4496_, v_f_4497_, v___y_4498_, v___y_4499_, v___y_4500_, v___y_4501_, v___y_4502_, v___y_4503_, v___y_4504_, v___y_4505_);
lean_dec(v___y_4505_);
lean_dec_ref(v___y_4504_);
lean_dec(v___y_4503_);
lean_dec_ref(v___y_4502_);
lean_dec_ref(v___y_4501_);
lean_dec(v___y_4500_);
lean_dec_ref(v___y_4499_);
return v_res_4507_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5_spec__9___redArg(lean_object* v_map_4508_, lean_object* v_f_4509_, lean_object* v_init_4510_, lean_object* v___y_4511_, lean_object* v___y_4512_, lean_object* v___y_4513_, lean_object* v___y_4514_, lean_object* v___y_4515_, lean_object* v___y_4516_, lean_object* v___y_4517_){
_start:
{
lean_object* v___x_4519_; 
v___x_4519_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5_spec__9_spec__14___redArg(v_f_4509_, v_map_4508_, v_init_4510_, v___y_4511_, v___y_4512_, v___y_4513_, v___y_4514_, v___y_4515_, v___y_4516_, v___y_4517_);
return v___x_4519_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5_spec__9___redArg___boxed(lean_object* v_map_4520_, lean_object* v_f_4521_, lean_object* v_init_4522_, lean_object* v___y_4523_, lean_object* v___y_4524_, lean_object* v___y_4525_, lean_object* v___y_4526_, lean_object* v___y_4527_, lean_object* v___y_4528_, lean_object* v___y_4529_, lean_object* v___y_4530_){
_start:
{
lean_object* v_res_4531_; 
v_res_4531_ = l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5_spec__9___redArg(v_map_4520_, v_f_4521_, v_init_4522_, v___y_4523_, v___y_4524_, v___y_4525_, v___y_4526_, v___y_4527_, v___y_4528_, v___y_4529_);
lean_dec(v___y_4529_);
lean_dec_ref(v___y_4528_);
lean_dec(v___y_4527_);
lean_dec_ref(v___y_4526_);
lean_dec_ref(v___y_4525_);
lean_dec(v___y_4524_);
lean_dec_ref(v___y_4523_);
return v_res_4531_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5_spec__9(lean_object* v_00_u03c3_4532_, lean_object* v_00_u03b2_4533_, lean_object* v_map_4534_, lean_object* v_f_4535_, lean_object* v_init_4536_, lean_object* v___y_4537_, lean_object* v___y_4538_, lean_object* v___y_4539_, lean_object* v___y_4540_, lean_object* v___y_4541_, lean_object* v___y_4542_, lean_object* v___y_4543_){
_start:
{
lean_object* v___x_4545_; 
v___x_4545_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5_spec__9_spec__14___redArg(v_f_4535_, v_map_4534_, v_init_4536_, v___y_4537_, v___y_4538_, v___y_4539_, v___y_4540_, v___y_4541_, v___y_4542_, v___y_4543_);
return v___x_4545_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5_spec__9___boxed(lean_object* v_00_u03c3_4546_, lean_object* v_00_u03b2_4547_, lean_object* v_map_4548_, lean_object* v_f_4549_, lean_object* v_init_4550_, lean_object* v___y_4551_, lean_object* v___y_4552_, lean_object* v___y_4553_, lean_object* v___y_4554_, lean_object* v___y_4555_, lean_object* v___y_4556_, lean_object* v___y_4557_, lean_object* v___y_4558_){
_start:
{
lean_object* v_res_4559_; 
v_res_4559_ = l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5_spec__9(v_00_u03c3_4546_, v_00_u03b2_4547_, v_map_4548_, v_f_4549_, v_init_4550_, v___y_4551_, v___y_4552_, v___y_4553_, v___y_4554_, v___y_4555_, v___y_4556_, v___y_4557_);
lean_dec(v___y_4557_);
lean_dec_ref(v___y_4556_);
lean_dec(v___y_4555_);
lean_dec_ref(v___y_4554_);
lean_dec_ref(v___y_4553_);
lean_dec(v___y_4552_);
lean_dec_ref(v___y_4551_);
return v_res_4559_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__12_spec__19(lean_object* v_id_4560_, uint8_t v_danglingDot_4561_, lean_object* v_as_4562_, size_t v_sz_4563_, size_t v_i_4564_, lean_object* v_b_4565_, lean_object* v___y_4566_, lean_object* v___y_4567_, lean_object* v___y_4568_, lean_object* v___y_4569_, lean_object* v___y_4570_, lean_object* v___y_4571_, lean_object* v___y_4572_){
_start:
{
lean_object* v___x_4574_; 
v___x_4574_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__12_spec__19___redArg(v_id_4560_, v_danglingDot_4561_, v_as_4562_, v_sz_4563_, v_i_4564_, v_b_4565_, v___y_4566_, v___y_4567_);
return v___x_4574_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__12_spec__19___boxed(lean_object* v_id_4575_, lean_object* v_danglingDot_4576_, lean_object* v_as_4577_, lean_object* v_sz_4578_, lean_object* v_i_4579_, lean_object* v_b_4580_, lean_object* v___y_4581_, lean_object* v___y_4582_, lean_object* v___y_4583_, lean_object* v___y_4584_, lean_object* v___y_4585_, lean_object* v___y_4586_, lean_object* v___y_4587_, lean_object* v___y_4588_){
_start:
{
uint8_t v_danglingDot_boxed_4589_; size_t v_sz_boxed_4590_; size_t v_i_boxed_4591_; lean_object* v_res_4592_; 
v_danglingDot_boxed_4589_ = lean_unbox(v_danglingDot_4576_);
v_sz_boxed_4590_ = lean_unbox_usize(v_sz_4578_);
lean_dec(v_sz_4578_);
v_i_boxed_4591_ = lean_unbox_usize(v_i_4579_);
lean_dec(v_i_4579_);
v_res_4592_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__12_spec__19(v_id_4575_, v_danglingDot_boxed_4589_, v_as_4577_, v_sz_boxed_4590_, v_i_boxed_4591_, v_b_4580_, v___y_4581_, v___y_4582_, v___y_4583_, v___y_4584_, v___y_4585_, v___y_4586_, v___y_4587_);
lean_dec(v___y_4587_);
lean_dec_ref(v___y_4586_);
lean_dec(v___y_4585_);
lean_dec_ref(v___y_4584_);
lean_dec_ref(v___y_4583_);
lean_dec(v___y_4582_);
lean_dec_ref(v___y_4581_);
lean_dec_ref(v_as_4577_);
lean_dec(v_id_4575_);
return v_res_4592_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3_spec__9___redArg(lean_object* v_map_4593_, lean_object* v_f_4594_, lean_object* v_init_4595_, lean_object* v___y_4596_, lean_object* v___y_4597_, lean_object* v___y_4598_, lean_object* v___y_4599_, lean_object* v___y_4600_, lean_object* v___y_4601_, lean_object* v___y_4602_, lean_object* v___y_4603_){
_start:
{
lean_object* v___x_4605_; 
v___x_4605_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3_spec__9_spec__16___redArg(v_f_4594_, v_map_4593_, v_init_4595_, v___y_4596_, v___y_4597_, v___y_4598_, v___y_4599_, v___y_4600_, v___y_4601_, v___y_4602_, v___y_4603_);
return v___x_4605_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3_spec__9___redArg___boxed(lean_object* v_map_4606_, lean_object* v_f_4607_, lean_object* v_init_4608_, lean_object* v___y_4609_, lean_object* v___y_4610_, lean_object* v___y_4611_, lean_object* v___y_4612_, lean_object* v___y_4613_, lean_object* v___y_4614_, lean_object* v___y_4615_, lean_object* v___y_4616_, lean_object* v___y_4617_){
_start:
{
lean_object* v_res_4618_; 
v_res_4618_ = l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3_spec__9___redArg(v_map_4606_, v_f_4607_, v_init_4608_, v___y_4609_, v___y_4610_, v___y_4611_, v___y_4612_, v___y_4613_, v___y_4614_, v___y_4615_, v___y_4616_);
lean_dec(v___y_4616_);
lean_dec_ref(v___y_4615_);
lean_dec(v___y_4614_);
lean_dec_ref(v___y_4613_);
lean_dec_ref(v___y_4612_);
lean_dec(v___y_4611_);
lean_dec_ref(v___y_4610_);
return v_res_4618_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3_spec__9(lean_object* v_00_u03c3_4619_, lean_object* v_00_u03b2_4620_, lean_object* v_map_4621_, lean_object* v_f_4622_, lean_object* v_init_4623_, lean_object* v___y_4624_, lean_object* v___y_4625_, lean_object* v___y_4626_, lean_object* v___y_4627_, lean_object* v___y_4628_, lean_object* v___y_4629_, lean_object* v___y_4630_, lean_object* v___y_4631_){
_start:
{
lean_object* v___x_4633_; 
v___x_4633_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3_spec__9_spec__16___redArg(v_f_4622_, v_map_4621_, v_init_4623_, v___y_4624_, v___y_4625_, v___y_4626_, v___y_4627_, v___y_4628_, v___y_4629_, v___y_4630_, v___y_4631_);
return v___x_4633_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3_spec__9___boxed(lean_object* v_00_u03c3_4634_, lean_object* v_00_u03b2_4635_, lean_object* v_map_4636_, lean_object* v_f_4637_, lean_object* v_init_4638_, lean_object* v___y_4639_, lean_object* v___y_4640_, lean_object* v___y_4641_, lean_object* v___y_4642_, lean_object* v___y_4643_, lean_object* v___y_4644_, lean_object* v___y_4645_, lean_object* v___y_4646_, lean_object* v___y_4647_){
_start:
{
lean_object* v_res_4648_; 
v_res_4648_ = l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3_spec__9(v_00_u03c3_4634_, v_00_u03b2_4635_, v_map_4636_, v_f_4637_, v_init_4638_, v___y_4639_, v___y_4640_, v___y_4641_, v___y_4642_, v___y_4643_, v___y_4644_, v___y_4645_, v___y_4646_);
lean_dec(v___y_4646_);
lean_dec_ref(v___y_4645_);
lean_dec(v___y_4644_);
lean_dec_ref(v___y_4643_);
lean_dec_ref(v___y_4642_);
lean_dec(v___y_4641_);
lean_dec_ref(v___y_4640_);
return v_res_4648_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5_spec__9_spec__14(lean_object* v_00_u03c3_4649_, lean_object* v_00_u03b1_4650_, lean_object* v_00_u03b2_4651_, lean_object* v_f_4652_, lean_object* v_x_4653_, lean_object* v_x_4654_, lean_object* v___y_4655_, lean_object* v___y_4656_, lean_object* v___y_4657_, lean_object* v___y_4658_, lean_object* v___y_4659_, lean_object* v___y_4660_, lean_object* v___y_4661_){
_start:
{
lean_object* v___x_4663_; 
v___x_4663_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5_spec__9_spec__14___redArg(v_f_4652_, v_x_4653_, v_x_4654_, v___y_4655_, v___y_4656_, v___y_4657_, v___y_4658_, v___y_4659_, v___y_4660_, v___y_4661_);
return v___x_4663_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5_spec__9_spec__14___boxed(lean_object* v_00_u03c3_4664_, lean_object* v_00_u03b1_4665_, lean_object* v_00_u03b2_4666_, lean_object* v_f_4667_, lean_object* v_x_4668_, lean_object* v_x_4669_, lean_object* v___y_4670_, lean_object* v___y_4671_, lean_object* v___y_4672_, lean_object* v___y_4673_, lean_object* v___y_4674_, lean_object* v___y_4675_, lean_object* v___y_4676_, lean_object* v___y_4677_){
_start:
{
lean_object* v_res_4678_; 
v_res_4678_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5_spec__9_spec__14(v_00_u03c3_4664_, v_00_u03b1_4665_, v_00_u03b2_4666_, v_f_4667_, v_x_4668_, v_x_4669_, v___y_4670_, v___y_4671_, v___y_4672_, v___y_4673_, v___y_4674_, v___y_4675_, v___y_4676_);
lean_dec(v___y_4676_);
lean_dec_ref(v___y_4675_);
lean_dec(v___y_4674_);
lean_dec_ref(v___y_4673_);
lean_dec_ref(v___y_4672_);
lean_dec(v___y_4671_);
lean_dec_ref(v___y_4670_);
return v_res_4678_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__11_spec__17_spec__20(lean_object* v_id_4679_, uint8_t v_danglingDot_4680_, lean_object* v_as_4681_, size_t v_sz_4682_, size_t v_i_4683_, lean_object* v_b_4684_, lean_object* v___y_4685_, lean_object* v___y_4686_, lean_object* v___y_4687_, lean_object* v___y_4688_, lean_object* v___y_4689_, lean_object* v___y_4690_, lean_object* v___y_4691_){
_start:
{
lean_object* v___x_4693_; 
v___x_4693_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__11_spec__17_spec__20___redArg(v_id_4679_, v_danglingDot_4680_, v_as_4681_, v_sz_4682_, v_i_4683_, v_b_4684_, v___y_4685_, v___y_4686_);
return v___x_4693_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__11_spec__17_spec__20___boxed(lean_object* v_id_4694_, lean_object* v_danglingDot_4695_, lean_object* v_as_4696_, lean_object* v_sz_4697_, lean_object* v_i_4698_, lean_object* v_b_4699_, lean_object* v___y_4700_, lean_object* v___y_4701_, lean_object* v___y_4702_, lean_object* v___y_4703_, lean_object* v___y_4704_, lean_object* v___y_4705_, lean_object* v___y_4706_, lean_object* v___y_4707_){
_start:
{
uint8_t v_danglingDot_boxed_4708_; size_t v_sz_boxed_4709_; size_t v_i_boxed_4710_; lean_object* v_res_4711_; 
v_danglingDot_boxed_4708_ = lean_unbox(v_danglingDot_4695_);
v_sz_boxed_4709_ = lean_unbox_usize(v_sz_4697_);
lean_dec(v_sz_4697_);
v_i_boxed_4710_ = lean_unbox_usize(v_i_4698_);
lean_dec(v_i_4698_);
v_res_4711_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__11_spec__17_spec__20(v_id_4694_, v_danglingDot_boxed_4708_, v_as_4696_, v_sz_boxed_4709_, v_i_boxed_4710_, v_b_4699_, v___y_4700_, v___y_4701_, v___y_4702_, v___y_4703_, v___y_4704_, v___y_4705_, v___y_4706_);
lean_dec(v___y_4706_);
lean_dec_ref(v___y_4705_);
lean_dec(v___y_4704_);
lean_dec_ref(v___y_4703_);
lean_dec_ref(v___y_4702_);
lean_dec(v___y_4701_);
lean_dec_ref(v___y_4700_);
lean_dec_ref(v_as_4696_);
lean_dec(v_id_4694_);
return v_res_4711_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3_spec__9_spec__16(lean_object* v_00_u03c3_4712_, lean_object* v_00_u03b1_4713_, lean_object* v_00_u03b2_4714_, lean_object* v_f_4715_, lean_object* v_x_4716_, lean_object* v_x_4717_, lean_object* v___y_4718_, lean_object* v___y_4719_, lean_object* v___y_4720_, lean_object* v___y_4721_, lean_object* v___y_4722_, lean_object* v___y_4723_, lean_object* v___y_4724_, lean_object* v___y_4725_){
_start:
{
lean_object* v___x_4727_; 
v___x_4727_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3_spec__9_spec__16___redArg(v_f_4715_, v_x_4716_, v_x_4717_, v___y_4718_, v___y_4719_, v___y_4720_, v___y_4721_, v___y_4722_, v___y_4723_, v___y_4724_, v___y_4725_);
return v___x_4727_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3_spec__9_spec__16___boxed(lean_object* v_00_u03c3_4728_, lean_object* v_00_u03b1_4729_, lean_object* v_00_u03b2_4730_, lean_object* v_f_4731_, lean_object* v_x_4732_, lean_object* v_x_4733_, lean_object* v___y_4734_, lean_object* v___y_4735_, lean_object* v___y_4736_, lean_object* v___y_4737_, lean_object* v___y_4738_, lean_object* v___y_4739_, lean_object* v___y_4740_, lean_object* v___y_4741_, lean_object* v___y_4742_){
_start:
{
lean_object* v_res_4743_; 
v_res_4743_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3_spec__9_spec__16(v_00_u03c3_4728_, v_00_u03b1_4729_, v_00_u03b2_4730_, v_f_4731_, v_x_4732_, v_x_4733_, v___y_4734_, v___y_4735_, v___y_4736_, v___y_4737_, v___y_4738_, v___y_4739_, v___y_4740_, v___y_4741_);
lean_dec(v___y_4741_);
lean_dec_ref(v___y_4740_);
lean_dec(v___y_4739_);
lean_dec_ref(v___y_4738_);
lean_dec_ref(v___y_4737_);
lean_dec(v___y_4736_);
lean_dec_ref(v___y_4735_);
return v_res_4743_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5_spec__9_spec__14_spec__20(lean_object* v_00_u03b1_4744_, lean_object* v_00_u03b2_4745_, lean_object* v_00_u03c3_4746_, lean_object* v_f_4747_, lean_object* v_as_4748_, size_t v_i_4749_, size_t v_stop_4750_, lean_object* v_b_4751_, lean_object* v___y_4752_, lean_object* v___y_4753_, lean_object* v___y_4754_, lean_object* v___y_4755_, lean_object* v___y_4756_, lean_object* v___y_4757_, lean_object* v___y_4758_){
_start:
{
lean_object* v___x_4760_; 
v___x_4760_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5_spec__9_spec__14_spec__20___redArg(v_f_4747_, v_as_4748_, v_i_4749_, v_stop_4750_, v_b_4751_, v___y_4752_, v___y_4753_, v___y_4754_, v___y_4755_, v___y_4756_, v___y_4757_, v___y_4758_);
return v___x_4760_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5_spec__9_spec__14_spec__20___boxed(lean_object* v_00_u03b1_4761_, lean_object* v_00_u03b2_4762_, lean_object* v_00_u03c3_4763_, lean_object* v_f_4764_, lean_object* v_as_4765_, lean_object* v_i_4766_, lean_object* v_stop_4767_, lean_object* v_b_4768_, lean_object* v___y_4769_, lean_object* v___y_4770_, lean_object* v___y_4771_, lean_object* v___y_4772_, lean_object* v___y_4773_, lean_object* v___y_4774_, lean_object* v___y_4775_, lean_object* v___y_4776_){
_start:
{
size_t v_i_boxed_4777_; size_t v_stop_boxed_4778_; lean_object* v_res_4779_; 
v_i_boxed_4777_ = lean_unbox_usize(v_i_4766_);
lean_dec(v_i_4766_);
v_stop_boxed_4778_ = lean_unbox_usize(v_stop_4767_);
lean_dec(v_stop_4767_);
v_res_4779_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5_spec__9_spec__14_spec__20(v_00_u03b1_4761_, v_00_u03b2_4762_, v_00_u03c3_4763_, v_f_4764_, v_as_4765_, v_i_boxed_4777_, v_stop_boxed_4778_, v_b_4768_, v___y_4769_, v___y_4770_, v___y_4771_, v___y_4772_, v___y_4773_, v___y_4774_, v___y_4775_);
lean_dec(v___y_4775_);
lean_dec_ref(v___y_4774_);
lean_dec(v___y_4773_);
lean_dec_ref(v___y_4772_);
lean_dec_ref(v___y_4771_);
lean_dec(v___y_4770_);
lean_dec_ref(v___y_4769_);
lean_dec_ref(v_as_4765_);
return v_res_4779_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5_spec__9_spec__14_spec__21(lean_object* v_00_u03c3_4780_, lean_object* v_00_u03b1_4781_, lean_object* v_00_u03b2_4782_, lean_object* v_f_4783_, lean_object* v_keys_4784_, lean_object* v_vals_4785_, lean_object* v_heq_4786_, lean_object* v_i_4787_, lean_object* v_acc_4788_, lean_object* v___y_4789_, lean_object* v___y_4790_, lean_object* v___y_4791_, lean_object* v___y_4792_, lean_object* v___y_4793_, lean_object* v___y_4794_, lean_object* v___y_4795_){
_start:
{
lean_object* v___x_4797_; 
v___x_4797_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5_spec__9_spec__14_spec__21___redArg(v_f_4783_, v_keys_4784_, v_vals_4785_, v_i_4787_, v_acc_4788_, v___y_4789_, v___y_4790_, v___y_4791_, v___y_4792_, v___y_4793_, v___y_4794_, v___y_4795_);
return v___x_4797_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5_spec__9_spec__14_spec__21___boxed(lean_object** _args){
lean_object* v_00_u03c3_4798_ = _args[0];
lean_object* v_00_u03b1_4799_ = _args[1];
lean_object* v_00_u03b2_4800_ = _args[2];
lean_object* v_f_4801_ = _args[3];
lean_object* v_keys_4802_ = _args[4];
lean_object* v_vals_4803_ = _args[5];
lean_object* v_heq_4804_ = _args[6];
lean_object* v_i_4805_ = _args[7];
lean_object* v_acc_4806_ = _args[8];
lean_object* v___y_4807_ = _args[9];
lean_object* v___y_4808_ = _args[10];
lean_object* v___y_4809_ = _args[11];
lean_object* v___y_4810_ = _args[12];
lean_object* v___y_4811_ = _args[13];
lean_object* v___y_4812_ = _args[14];
lean_object* v___y_4813_ = _args[15];
lean_object* v___y_4814_ = _args[16];
_start:
{
lean_object* v_res_4815_; 
v_res_4815_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5_spec__9_spec__14_spec__21(v_00_u03c3_4798_, v_00_u03b1_4799_, v_00_u03b2_4800_, v_f_4801_, v_keys_4802_, v_vals_4803_, v_heq_4804_, v_i_4805_, v_acc_4806_, v___y_4807_, v___y_4808_, v___y_4809_, v___y_4810_, v___y_4811_, v___y_4812_, v___y_4813_);
lean_dec(v___y_4813_);
lean_dec_ref(v___y_4812_);
lean_dec(v___y_4811_);
lean_dec_ref(v___y_4810_);
lean_dec_ref(v___y_4809_);
lean_dec(v___y_4808_);
lean_dec_ref(v___y_4807_);
lean_dec_ref(v_vals_4803_);
lean_dec_ref(v_keys_4802_);
return v_res_4815_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3_spec__9_spec__16_spec__22(lean_object* v_00_u03b1_4816_, lean_object* v_00_u03b2_4817_, lean_object* v_00_u03c3_4818_, lean_object* v_f_4819_, lean_object* v_as_4820_, size_t v_i_4821_, size_t v_stop_4822_, lean_object* v_b_4823_, lean_object* v___y_4824_, lean_object* v___y_4825_, lean_object* v___y_4826_, lean_object* v___y_4827_, lean_object* v___y_4828_, lean_object* v___y_4829_, lean_object* v___y_4830_, lean_object* v___y_4831_){
_start:
{
lean_object* v___x_4833_; 
v___x_4833_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3_spec__9_spec__16_spec__22___redArg(v_f_4819_, v_as_4820_, v_i_4821_, v_stop_4822_, v_b_4823_, v___y_4824_, v___y_4825_, v___y_4826_, v___y_4827_, v___y_4828_, v___y_4829_, v___y_4830_, v___y_4831_);
return v___x_4833_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3_spec__9_spec__16_spec__22___boxed(lean_object** _args){
lean_object* v_00_u03b1_4834_ = _args[0];
lean_object* v_00_u03b2_4835_ = _args[1];
lean_object* v_00_u03c3_4836_ = _args[2];
lean_object* v_f_4837_ = _args[3];
lean_object* v_as_4838_ = _args[4];
lean_object* v_i_4839_ = _args[5];
lean_object* v_stop_4840_ = _args[6];
lean_object* v_b_4841_ = _args[7];
lean_object* v___y_4842_ = _args[8];
lean_object* v___y_4843_ = _args[9];
lean_object* v___y_4844_ = _args[10];
lean_object* v___y_4845_ = _args[11];
lean_object* v___y_4846_ = _args[12];
lean_object* v___y_4847_ = _args[13];
lean_object* v___y_4848_ = _args[14];
lean_object* v___y_4849_ = _args[15];
lean_object* v___y_4850_ = _args[16];
_start:
{
size_t v_i_boxed_4851_; size_t v_stop_boxed_4852_; lean_object* v_res_4853_; 
v_i_boxed_4851_ = lean_unbox_usize(v_i_4839_);
lean_dec(v_i_4839_);
v_stop_boxed_4852_ = lean_unbox_usize(v_stop_4840_);
lean_dec(v_stop_4840_);
v_res_4853_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3_spec__9_spec__16_spec__22(v_00_u03b1_4834_, v_00_u03b2_4835_, v_00_u03c3_4836_, v_f_4837_, v_as_4838_, v_i_boxed_4851_, v_stop_boxed_4852_, v_b_4841_, v___y_4842_, v___y_4843_, v___y_4844_, v___y_4845_, v___y_4846_, v___y_4847_, v___y_4848_, v___y_4849_);
lean_dec(v___y_4849_);
lean_dec_ref(v___y_4848_);
lean_dec(v___y_4847_);
lean_dec_ref(v___y_4846_);
lean_dec_ref(v___y_4845_);
lean_dec(v___y_4844_);
lean_dec_ref(v___y_4843_);
lean_dec_ref(v_as_4838_);
return v_res_4853_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3_spec__9_spec__16_spec__23(lean_object* v_00_u03c3_4854_, lean_object* v_00_u03b1_4855_, lean_object* v_00_u03b2_4856_, lean_object* v_f_4857_, lean_object* v_keys_4858_, lean_object* v_vals_4859_, lean_object* v_heq_4860_, lean_object* v_i_4861_, lean_object* v_acc_4862_, lean_object* v___y_4863_, lean_object* v___y_4864_, lean_object* v___y_4865_, lean_object* v___y_4866_, lean_object* v___y_4867_, lean_object* v___y_4868_, lean_object* v___y_4869_, lean_object* v___y_4870_){
_start:
{
lean_object* v___x_4872_; 
v___x_4872_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3_spec__9_spec__16_spec__23___redArg(v_f_4857_, v_keys_4858_, v_vals_4859_, v_i_4861_, v_acc_4862_, v___y_4863_, v___y_4864_, v___y_4865_, v___y_4866_, v___y_4867_, v___y_4868_, v___y_4869_, v___y_4870_);
return v___x_4872_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3_spec__9_spec__16_spec__23___boxed(lean_object** _args){
lean_object* v_00_u03c3_4873_ = _args[0];
lean_object* v_00_u03b1_4874_ = _args[1];
lean_object* v_00_u03b2_4875_ = _args[2];
lean_object* v_f_4876_ = _args[3];
lean_object* v_keys_4877_ = _args[4];
lean_object* v_vals_4878_ = _args[5];
lean_object* v_heq_4879_ = _args[6];
lean_object* v_i_4880_ = _args[7];
lean_object* v_acc_4881_ = _args[8];
lean_object* v___y_4882_ = _args[9];
lean_object* v___y_4883_ = _args[10];
lean_object* v___y_4884_ = _args[11];
lean_object* v___y_4885_ = _args[12];
lean_object* v___y_4886_ = _args[13];
lean_object* v___y_4887_ = _args[14];
lean_object* v___y_4888_ = _args[15];
lean_object* v___y_4889_ = _args[16];
lean_object* v___y_4890_ = _args[17];
_start:
{
lean_object* v_res_4891_; 
v_res_4891_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3_spec__9_spec__16_spec__23(v_00_u03c3_4873_, v_00_u03b1_4874_, v_00_u03b2_4875_, v_f_4876_, v_keys_4877_, v_vals_4878_, v_heq_4879_, v_i_4880_, v_acc_4881_, v___y_4882_, v___y_4883_, v___y_4884_, v___y_4885_, v___y_4886_, v___y_4887_, v___y_4888_, v___y_4889_);
lean_dec(v___y_4889_);
lean_dec_ref(v___y_4888_);
lean_dec(v___y_4887_);
lean_dec_ref(v___y_4886_);
lean_dec_ref(v___y_4885_);
lean_dec(v___y_4884_);
lean_dec_ref(v___y_4883_);
lean_dec_ref(v_vals_4878_);
lean_dec_ref(v_keys_4877_);
return v_res_4891_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Completion_idCompletion(lean_object* v_uri_4892_, lean_object* v_pos_4893_, lean_object* v_completionInfoPos_4894_, lean_object* v_ctx_4895_, lean_object* v_lctx_4896_, lean_object* v_stx_4897_, lean_object* v_id_4898_, lean_object* v_hoverInfo_4899_, uint8_t v_danglingDot_4900_, lean_object* v_a_4901_){
_start:
{
lean_object* v___x_4903_; lean_object* v___x_4904_; lean_object* v___x_4905_; 
v___x_4903_ = lean_box(v_danglingDot_4900_);
lean_inc_ref(v_ctx_4895_);
v___x_4904_ = lean_alloc_closure((void*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore___boxed), 13, 5);
lean_closure_set(v___x_4904_, 0, v_ctx_4895_);
lean_closure_set(v___x_4904_, 1, v_stx_4897_);
lean_closure_set(v___x_4904_, 2, v_id_4898_);
lean_closure_set(v___x_4904_, 3, v_hoverInfo_4899_);
lean_closure_set(v___x_4904_, 4, v___x_4903_);
v___x_4905_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_runM(v_uri_4892_, v_pos_4893_, v_completionInfoPos_4894_, v_ctx_4895_, v_lctx_4896_, v___x_4904_, v_a_4901_);
return v___x_4905_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Completion_idCompletion___boxed(lean_object* v_uri_4906_, lean_object* v_pos_4907_, lean_object* v_completionInfoPos_4908_, lean_object* v_ctx_4909_, lean_object* v_lctx_4910_, lean_object* v_stx_4911_, lean_object* v_id_4912_, lean_object* v_hoverInfo_4913_, lean_object* v_danglingDot_4914_, lean_object* v_a_4915_, lean_object* v_a_4916_){
_start:
{
uint8_t v_danglingDot_boxed_4917_; lean_object* v_res_4918_; 
v_danglingDot_boxed_4917_ = lean_unbox(v_danglingDot_4914_);
v_res_4918_ = l_Lean_Server_Completion_idCompletion(v_uri_4906_, v_pos_4907_, v_completionInfoPos_4908_, v_ctx_4909_, v_lctx_4910_, v_stx_4911_, v_id_4912_, v_hoverInfo_4913_, v_danglingDot_boxed_4917_, v_a_4915_);
lean_dec_ref(v_a_4915_);
return v_res_4918_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Server_Completion_dotCompletion_spec__0___redArg(lean_object* v_e_4919_, lean_object* v___y_4920_){
_start:
{
uint8_t v___x_4922_; 
v___x_4922_ = l_Lean_Expr_hasMVar(v_e_4919_);
if (v___x_4922_ == 0)
{
lean_object* v___x_4923_; lean_object* v___x_4924_; 
v___x_4923_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4923_, 0, v_e_4919_);
v___x_4924_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4924_, 0, v___x_4923_);
return v___x_4924_;
}
else
{
lean_object* v___x_4925_; lean_object* v_mctx_4926_; lean_object* v___x_4927_; lean_object* v_fst_4928_; lean_object* v_snd_4929_; lean_object* v___x_4930_; lean_object* v_cache_4931_; lean_object* v_zetaDeltaFVarIds_4932_; lean_object* v_postponed_4933_; lean_object* v_diag_4934_; lean_object* v___x_4936_; uint8_t v_isShared_4937_; uint8_t v_isSharedCheck_4944_; 
v___x_4925_ = lean_st_ref_get(v___y_4920_);
v_mctx_4926_ = lean_ctor_get(v___x_4925_, 0);
lean_inc_ref(v_mctx_4926_);
lean_dec(v___x_4925_);
v___x_4927_ = l_Lean_instantiateMVarsCore(v_mctx_4926_, v_e_4919_);
v_fst_4928_ = lean_ctor_get(v___x_4927_, 0);
lean_inc(v_fst_4928_);
v_snd_4929_ = lean_ctor_get(v___x_4927_, 1);
lean_inc(v_snd_4929_);
lean_dec_ref(v___x_4927_);
v___x_4930_ = lean_st_ref_take(v___y_4920_);
v_cache_4931_ = lean_ctor_get(v___x_4930_, 1);
v_zetaDeltaFVarIds_4932_ = lean_ctor_get(v___x_4930_, 2);
v_postponed_4933_ = lean_ctor_get(v___x_4930_, 3);
v_diag_4934_ = lean_ctor_get(v___x_4930_, 4);
v_isSharedCheck_4944_ = !lean_is_exclusive(v___x_4930_);
if (v_isSharedCheck_4944_ == 0)
{
lean_object* v_unused_4945_; 
v_unused_4945_ = lean_ctor_get(v___x_4930_, 0);
lean_dec(v_unused_4945_);
v___x_4936_ = v___x_4930_;
v_isShared_4937_ = v_isSharedCheck_4944_;
goto v_resetjp_4935_;
}
else
{
lean_inc(v_diag_4934_);
lean_inc(v_postponed_4933_);
lean_inc(v_zetaDeltaFVarIds_4932_);
lean_inc(v_cache_4931_);
lean_dec(v___x_4930_);
v___x_4936_ = lean_box(0);
v_isShared_4937_ = v_isSharedCheck_4944_;
goto v_resetjp_4935_;
}
v_resetjp_4935_:
{
lean_object* v___x_4939_; 
if (v_isShared_4937_ == 0)
{
lean_ctor_set(v___x_4936_, 0, v_snd_4929_);
v___x_4939_ = v___x_4936_;
goto v_reusejp_4938_;
}
else
{
lean_object* v_reuseFailAlloc_4943_; 
v_reuseFailAlloc_4943_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4943_, 0, v_snd_4929_);
lean_ctor_set(v_reuseFailAlloc_4943_, 1, v_cache_4931_);
lean_ctor_set(v_reuseFailAlloc_4943_, 2, v_zetaDeltaFVarIds_4932_);
lean_ctor_set(v_reuseFailAlloc_4943_, 3, v_postponed_4933_);
lean_ctor_set(v_reuseFailAlloc_4943_, 4, v_diag_4934_);
v___x_4939_ = v_reuseFailAlloc_4943_;
goto v_reusejp_4938_;
}
v_reusejp_4938_:
{
lean_object* v___x_4940_; lean_object* v___x_4941_; lean_object* v___x_4942_; 
v___x_4940_ = lean_st_ref_put(v___y_4920_, v___x_4939_);
v___x_4941_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4941_, 0, v_fst_4928_);
v___x_4942_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4942_, 0, v___x_4941_);
return v___x_4942_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Server_Completion_dotCompletion_spec__0___redArg___boxed(lean_object* v_e_4946_, lean_object* v___y_4947_, lean_object* v___y_4948_){
_start:
{
lean_object* v_res_4949_; 
v_res_4949_ = l_Lean_instantiateMVars___at___00Lean_Server_Completion_dotCompletion_spec__0___redArg(v_e_4946_, v___y_4947_);
lean_dec(v___y_4947_);
return v_res_4949_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Server_Completion_dotCompletion_spec__0(lean_object* v_e_4950_, lean_object* v___y_4951_, lean_object* v___y_4952_, lean_object* v___y_4953_, lean_object* v___y_4954_, lean_object* v___y_4955_, lean_object* v___y_4956_, lean_object* v___y_4957_){
_start:
{
lean_object* v___x_4959_; 
v___x_4959_ = l_Lean_instantiateMVars___at___00Lean_Server_Completion_dotCompletion_spec__0___redArg(v_e_4950_, v___y_4955_);
return v___x_4959_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Server_Completion_dotCompletion_spec__0___boxed(lean_object* v_e_4960_, lean_object* v___y_4961_, lean_object* v___y_4962_, lean_object* v___y_4963_, lean_object* v___y_4964_, lean_object* v___y_4965_, lean_object* v___y_4966_, lean_object* v___y_4967_, lean_object* v___y_4968_){
_start:
{
lean_object* v_res_4969_; 
v_res_4969_ = l_Lean_instantiateMVars___at___00Lean_Server_Completion_dotCompletion_spec__0(v_e_4960_, v___y_4961_, v___y_4962_, v___y_4963_, v___y_4964_, v___y_4965_, v___y_4966_, v___y_4967_);
lean_dec(v___y_4967_);
lean_dec_ref(v___y_4966_);
lean_dec(v___y_4965_);
lean_dec_ref(v___y_4964_);
lean_dec_ref(v___y_4963_);
lean_dec(v___y_4962_);
lean_dec_ref(v___y_4961_);
return v_res_4969_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Completion_dotCompletion___lam__0(lean_object* v_a_4970_, lean_object* v_declName_4971_, lean_object* v_decl_4972_, lean_object* v___y_4973_, lean_object* v___y_4974_, lean_object* v___y_4975_, lean_object* v___y_4976_, lean_object* v___y_4977_, lean_object* v___y_4978_, lean_object* v___y_4979_){
_start:
{
lean_object* v_unnormedTypeName_4981_; uint8_t v___x_4982_; 
v_unnormedTypeName_4981_ = l_Lean_Name_getPrefix(v_declName_4971_);
v___x_4982_ = l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_getDotCompletionTypeNameSet_spec__0___redArg(v_unnormedTypeName_4981_, v_a_4970_);
if (v___x_4982_ == 0)
{
lean_object* v___x_4983_; lean_object* v___x_4984_; 
lean_dec_ref(v_decl_4972_);
lean_dec(v_declName_4971_);
v___x_4983_ = ((lean_object*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addItem___redArg___closed__0));
v___x_4984_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4984_, 0, v___x_4983_);
return v___x_4984_;
}
else
{
lean_object* v___x_4985_; lean_object* v_a_4986_; lean_object* v___x_4988_; uint8_t v_isShared_4989_; uint8_t v_isSharedCheck_5051_; 
v___x_4985_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_normPrivateName_x3f___redArg(v_declName_4971_, v___y_4979_);
v_a_4986_ = lean_ctor_get(v___x_4985_, 0);
v_isSharedCheck_5051_ = !lean_is_exclusive(v___x_4985_);
if (v_isSharedCheck_5051_ == 0)
{
v___x_4988_ = v___x_4985_;
v_isShared_4989_ = v_isSharedCheck_5051_;
goto v_resetjp_4987_;
}
else
{
lean_inc(v_a_4986_);
lean_dec(v___x_4985_);
v___x_4988_ = lean_box(0);
v_isShared_4989_ = v_isSharedCheck_5051_;
goto v_resetjp_4987_;
}
v_resetjp_4987_:
{
if (lean_obj_tag(v_a_4986_) == 1)
{
lean_object* v_val_4990_; lean_object* v___x_4992_; uint8_t v_isShared_4993_; uint8_t v_isSharedCheck_5046_; 
lean_del_object(v___x_4988_);
v_val_4990_ = lean_ctor_get(v_a_4986_, 0);
v_isSharedCheck_5046_ = !lean_is_exclusive(v_a_4986_);
if (v_isSharedCheck_5046_ == 0)
{
v___x_4992_ = v_a_4986_;
v_isShared_4993_ = v_isSharedCheck_5046_;
goto v_resetjp_4991_;
}
else
{
lean_inc(v_val_4990_);
lean_dec(v_a_4986_);
v___x_4992_ = lean_box(0);
v_isShared_4993_ = v_isSharedCheck_5046_;
goto v_resetjp_4991_;
}
v_resetjp_4991_:
{
lean_object* v_info_4994_; lean_object* v_kind_4995_; lean_object* v_tags_4996_; lean_object* v___x_4997_; lean_object* v___x_4998_; 
v_info_4994_ = lean_ctor_get(v_decl_4972_, 0);
lean_inc_ref(v_info_4994_);
v_kind_4995_ = lean_ctor_get(v_decl_4972_, 1);
lean_inc_ref(v_kind_4995_);
v_tags_4996_ = lean_ctor_get(v_decl_4972_, 2);
lean_inc_ref(v_tags_4996_);
lean_dec_ref(v_decl_4972_);
v___x_4997_ = l_Lean_Name_getPrefix(v_val_4990_);
lean_dec(v_val_4990_);
v___x_4998_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotCompletionMethod(v___x_4997_, v_info_4994_, v___y_4976_, v___y_4977_, v___y_4978_, v___y_4979_);
if (lean_obj_tag(v___x_4998_) == 0)
{
lean_object* v_a_4999_; lean_object* v___x_5001_; uint8_t v_isShared_5002_; uint8_t v_isSharedCheck_5037_; 
v_a_4999_ = lean_ctor_get(v___x_4998_, 0);
v_isSharedCheck_5037_ = !lean_is_exclusive(v___x_4998_);
if (v_isSharedCheck_5037_ == 0)
{
v___x_5001_ = v___x_4998_;
v_isShared_5002_ = v_isSharedCheck_5037_;
goto v_resetjp_5000_;
}
else
{
lean_inc(v_a_4999_);
lean_dec(v___x_4998_);
v___x_5001_ = lean_box(0);
v_isShared_5002_ = v_isSharedCheck_5037_;
goto v_resetjp_5000_;
}
v_resetjp_5000_:
{
uint8_t v___x_5003_; 
v___x_5003_ = lean_unbox(v_a_4999_);
lean_dec(v_a_4999_);
if (v___x_5003_ == 0)
{
lean_object* v___x_5004_; lean_object* v___x_5006_; 
lean_dec_ref(v_tags_4996_);
lean_dec_ref(v_kind_4995_);
lean_dec_ref(v_info_4994_);
lean_del_object(v___x_4992_);
v___x_5004_ = ((lean_object*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addItem___redArg___closed__0));
if (v_isShared_5002_ == 0)
{
lean_ctor_set(v___x_5001_, 0, v___x_5004_);
v___x_5006_ = v___x_5001_;
goto v_reusejp_5005_;
}
else
{
lean_object* v_reuseFailAlloc_5007_; 
v_reuseFailAlloc_5007_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5007_, 0, v___x_5004_);
v___x_5006_ = v_reuseFailAlloc_5007_;
goto v_reusejp_5005_;
}
v_reusejp_5005_:
{
return v___x_5006_;
}
}
else
{
lean_object* v___x_5008_; 
lean_del_object(v___x_5001_);
lean_inc(v___y_4979_);
lean_inc_ref(v___y_4978_);
lean_inc(v___y_4977_);
lean_inc_ref(v___y_4976_);
v___x_5008_ = lean_apply_5(v_kind_4995_, v___y_4976_, v___y_4977_, v___y_4978_, v___y_4979_, lean_box(0));
if (lean_obj_tag(v___x_5008_) == 0)
{
lean_object* v_a_5009_; lean_object* v___x_5010_; 
v_a_5009_ = lean_ctor_get(v___x_5008_, 0);
lean_inc(v_a_5009_);
lean_dec_ref_known(v___x_5008_, 1);
lean_inc(v___y_4979_);
lean_inc_ref(v___y_4978_);
lean_inc(v___y_4977_);
lean_inc_ref(v___y_4976_);
v___x_5010_ = lean_apply_5(v_tags_4996_, v___y_4976_, v___y_4977_, v___y_4978_, v___y_4979_, lean_box(0));
if (lean_obj_tag(v___x_5010_) == 0)
{
lean_object* v_a_5011_; lean_object* v___x_5012_; lean_object* v___x_5013_; lean_object* v___x_5014_; lean_object* v___x_5015_; lean_object* v___x_5017_; 
v_a_5011_ = lean_ctor_get(v___x_5010_, 0);
lean_inc(v_a_5011_);
lean_dec_ref_known(v___x_5010_, 1);
v___x_5012_ = l_Lean_ConstantInfo_name(v_info_4994_);
lean_dec_ref(v_info_4994_);
v___x_5013_ = l_Lean_Name_getString_x21(v___x_5012_);
v___x_5014_ = lean_obj_once(&l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_matchDecl_x3f___redArg___closed__0, &l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_matchDecl_x3f___redArg___closed__0_once, _init_l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_matchDecl_x3f___redArg___closed__0);
v___x_5015_ = l_Lean_Name_str___override(v___x_5014_, v___x_5013_);
if (v_isShared_4993_ == 0)
{
lean_ctor_set_tag(v___x_4992_, 0);
lean_ctor_set(v___x_4992_, 0, v___x_5012_);
v___x_5017_ = v___x_4992_;
goto v_reusejp_5016_;
}
else
{
lean_object* v_reuseFailAlloc_5020_; 
v_reuseFailAlloc_5020_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5020_, 0, v___x_5012_);
v___x_5017_ = v_reuseFailAlloc_5020_;
goto v_reusejp_5016_;
}
v_reusejp_5016_:
{
uint8_t v___x_5018_; lean_object* v___x_5019_; 
v___x_5018_ = lean_unbox(v_a_5009_);
lean_dec(v_a_5009_);
v___x_5019_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addUnresolvedCompletionItem___redArg(v___x_5015_, v___x_5017_, v___x_5018_, v_a_5011_, v___y_4973_, v___y_4974_);
return v___x_5019_;
}
}
else
{
lean_object* v_a_5021_; lean_object* v___x_5023_; uint8_t v_isShared_5024_; uint8_t v_isSharedCheck_5028_; 
lean_dec(v_a_5009_);
lean_dec_ref(v_info_4994_);
lean_del_object(v___x_4992_);
v_a_5021_ = lean_ctor_get(v___x_5010_, 0);
v_isSharedCheck_5028_ = !lean_is_exclusive(v___x_5010_);
if (v_isSharedCheck_5028_ == 0)
{
v___x_5023_ = v___x_5010_;
v_isShared_5024_ = v_isSharedCheck_5028_;
goto v_resetjp_5022_;
}
else
{
lean_inc(v_a_5021_);
lean_dec(v___x_5010_);
v___x_5023_ = lean_box(0);
v_isShared_5024_ = v_isSharedCheck_5028_;
goto v_resetjp_5022_;
}
v_resetjp_5022_:
{
lean_object* v___x_5026_; 
if (v_isShared_5024_ == 0)
{
v___x_5026_ = v___x_5023_;
goto v_reusejp_5025_;
}
else
{
lean_object* v_reuseFailAlloc_5027_; 
v_reuseFailAlloc_5027_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5027_, 0, v_a_5021_);
v___x_5026_ = v_reuseFailAlloc_5027_;
goto v_reusejp_5025_;
}
v_reusejp_5025_:
{
return v___x_5026_;
}
}
}
}
else
{
lean_object* v_a_5029_; lean_object* v___x_5031_; uint8_t v_isShared_5032_; uint8_t v_isSharedCheck_5036_; 
lean_dec_ref(v_tags_4996_);
lean_dec_ref(v_info_4994_);
lean_del_object(v___x_4992_);
v_a_5029_ = lean_ctor_get(v___x_5008_, 0);
v_isSharedCheck_5036_ = !lean_is_exclusive(v___x_5008_);
if (v_isSharedCheck_5036_ == 0)
{
v___x_5031_ = v___x_5008_;
v_isShared_5032_ = v_isSharedCheck_5036_;
goto v_resetjp_5030_;
}
else
{
lean_inc(v_a_5029_);
lean_dec(v___x_5008_);
v___x_5031_ = lean_box(0);
v_isShared_5032_ = v_isSharedCheck_5036_;
goto v_resetjp_5030_;
}
v_resetjp_5030_:
{
lean_object* v___x_5034_; 
if (v_isShared_5032_ == 0)
{
v___x_5034_ = v___x_5031_;
goto v_reusejp_5033_;
}
else
{
lean_object* v_reuseFailAlloc_5035_; 
v_reuseFailAlloc_5035_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5035_, 0, v_a_5029_);
v___x_5034_ = v_reuseFailAlloc_5035_;
goto v_reusejp_5033_;
}
v_reusejp_5033_:
{
return v___x_5034_;
}
}
}
}
}
}
else
{
lean_object* v_a_5038_; lean_object* v___x_5040_; uint8_t v_isShared_5041_; uint8_t v_isSharedCheck_5045_; 
lean_dec_ref(v_tags_4996_);
lean_dec_ref(v_kind_4995_);
lean_dec_ref(v_info_4994_);
lean_del_object(v___x_4992_);
v_a_5038_ = lean_ctor_get(v___x_4998_, 0);
v_isSharedCheck_5045_ = !lean_is_exclusive(v___x_4998_);
if (v_isSharedCheck_5045_ == 0)
{
v___x_5040_ = v___x_4998_;
v_isShared_5041_ = v_isSharedCheck_5045_;
goto v_resetjp_5039_;
}
else
{
lean_inc(v_a_5038_);
lean_dec(v___x_4998_);
v___x_5040_ = lean_box(0);
v_isShared_5041_ = v_isSharedCheck_5045_;
goto v_resetjp_5039_;
}
v_resetjp_5039_:
{
lean_object* v___x_5043_; 
if (v_isShared_5041_ == 0)
{
v___x_5043_ = v___x_5040_;
goto v_reusejp_5042_;
}
else
{
lean_object* v_reuseFailAlloc_5044_; 
v_reuseFailAlloc_5044_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5044_, 0, v_a_5038_);
v___x_5043_ = v_reuseFailAlloc_5044_;
goto v_reusejp_5042_;
}
v_reusejp_5042_:
{
return v___x_5043_;
}
}
}
}
}
else
{
lean_object* v___x_5047_; lean_object* v___x_5049_; 
lean_dec(v_a_4986_);
lean_dec_ref(v_decl_4972_);
v___x_5047_ = ((lean_object*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addItem___redArg___closed__0));
if (v_isShared_4989_ == 0)
{
lean_ctor_set(v___x_4988_, 0, v___x_5047_);
v___x_5049_ = v___x_4988_;
goto v_reusejp_5048_;
}
else
{
lean_object* v_reuseFailAlloc_5050_; 
v_reuseFailAlloc_5050_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5050_, 0, v___x_5047_);
v___x_5049_ = v_reuseFailAlloc_5050_;
goto v_reusejp_5048_;
}
v_reusejp_5048_:
{
return v___x_5049_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Completion_dotCompletion___lam__0___boxed(lean_object* v_a_5052_, lean_object* v_declName_5053_, lean_object* v_decl_5054_, lean_object* v___y_5055_, lean_object* v___y_5056_, lean_object* v___y_5057_, lean_object* v___y_5058_, lean_object* v___y_5059_, lean_object* v___y_5060_, lean_object* v___y_5061_, lean_object* v___y_5062_){
_start:
{
lean_object* v_res_5063_; 
v_res_5063_ = l_Lean_Server_Completion_dotCompletion___lam__0(v_a_5052_, v_declName_5053_, v_decl_5054_, v___y_5055_, v___y_5056_, v___y_5057_, v___y_5058_, v___y_5059_, v___y_5060_, v___y_5061_);
lean_dec(v___y_5061_);
lean_dec_ref(v___y_5060_);
lean_dec(v___y_5059_);
lean_dec_ref(v___y_5058_);
lean_dec_ref(v___y_5057_);
lean_dec(v___y_5056_);
lean_dec_ref(v___y_5055_);
return v_res_5063_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Completion_dotCompletion___lam__1(lean_object* v_expr_5064_, lean_object* v___y_5065_, lean_object* v___y_5066_, lean_object* v___y_5067_, lean_object* v___y_5068_, lean_object* v___y_5069_, lean_object* v___y_5070_, lean_object* v___y_5071_){
_start:
{
lean_object* v_a_5077_; lean_object* v___y_5081_; uint8_t v___y_5082_; lean_object* v___y_5092_; lean_object* v_a_5093_; lean_object* v___x_5096_; 
lean_inc(v___y_5071_);
lean_inc_ref(v___y_5070_);
lean_inc(v___y_5069_);
lean_inc_ref(v___y_5068_);
v___x_5096_ = lean_infer_type(v_expr_5064_, v___y_5068_, v___y_5069_, v___y_5070_, v___y_5071_);
if (lean_obj_tag(v___x_5096_) == 0)
{
lean_object* v_a_5097_; lean_object* v___x_5098_; lean_object* v_a_5099_; lean_object* v_a_5100_; lean_object* v___x_5101_; 
v_a_5097_ = lean_ctor_get(v___x_5096_, 0);
lean_inc(v_a_5097_);
lean_dec_ref_known(v___x_5096_, 1);
v___x_5098_ = l_Lean_instantiateMVars___at___00Lean_Server_Completion_dotCompletion_spec__0___redArg(v_a_5097_, v___y_5069_);
v_a_5099_ = lean_ctor_get(v___x_5098_, 0);
lean_inc(v_a_5099_);
lean_dec_ref(v___x_5098_);
v_a_5100_ = lean_ctor_get(v_a_5099_, 0);
lean_inc(v_a_5100_);
lean_dec(v_a_5099_);
v___x_5101_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_getDotCompletionTypeNameSet(v_a_5100_, v___y_5068_, v___y_5069_, v___y_5070_, v___y_5071_);
if (lean_obj_tag(v___x_5101_) == 0)
{
lean_object* v_a_5102_; 
v_a_5102_ = lean_ctor_get(v___x_5101_, 0);
lean_inc(v_a_5102_);
lean_dec_ref_known(v___x_5101_, 1);
v_a_5077_ = v_a_5102_;
goto v___jp_5076_;
}
else
{
lean_object* v_a_5103_; lean_object* v___x_5105_; uint8_t v_isShared_5106_; uint8_t v_isSharedCheck_5110_; 
v_a_5103_ = lean_ctor_get(v___x_5101_, 0);
v_isSharedCheck_5110_ = !lean_is_exclusive(v___x_5101_);
if (v_isSharedCheck_5110_ == 0)
{
v___x_5105_ = v___x_5101_;
v_isShared_5106_ = v_isSharedCheck_5110_;
goto v_resetjp_5104_;
}
else
{
lean_inc(v_a_5103_);
lean_dec(v___x_5101_);
v___x_5105_ = lean_box(0);
v_isShared_5106_ = v_isSharedCheck_5110_;
goto v_resetjp_5104_;
}
v_resetjp_5104_:
{
lean_object* v___x_5108_; 
lean_inc(v_a_5103_);
if (v_isShared_5106_ == 0)
{
v___x_5108_ = v___x_5105_;
goto v_reusejp_5107_;
}
else
{
lean_object* v_reuseFailAlloc_5109_; 
v_reuseFailAlloc_5109_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5109_, 0, v_a_5103_);
v___x_5108_ = v_reuseFailAlloc_5109_;
goto v_reusejp_5107_;
}
v_reusejp_5107_:
{
v___y_5092_ = v___x_5108_;
v_a_5093_ = v_a_5103_;
goto v___jp_5091_;
}
}
}
}
else
{
lean_object* v_a_5111_; lean_object* v___x_5113_; uint8_t v_isShared_5114_; uint8_t v_isSharedCheck_5118_; 
v_a_5111_ = lean_ctor_get(v___x_5096_, 0);
v_isSharedCheck_5118_ = !lean_is_exclusive(v___x_5096_);
if (v_isSharedCheck_5118_ == 0)
{
v___x_5113_ = v___x_5096_;
v_isShared_5114_ = v_isSharedCheck_5118_;
goto v_resetjp_5112_;
}
else
{
lean_inc(v_a_5111_);
lean_dec(v___x_5096_);
v___x_5113_ = lean_box(0);
v_isShared_5114_ = v_isSharedCheck_5118_;
goto v_resetjp_5112_;
}
v_resetjp_5112_:
{
lean_object* v___x_5116_; 
lean_inc(v_a_5111_);
if (v_isShared_5114_ == 0)
{
v___x_5116_ = v___x_5113_;
goto v_reusejp_5115_;
}
else
{
lean_object* v_reuseFailAlloc_5117_; 
v_reuseFailAlloc_5117_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5117_, 0, v_a_5111_);
v___x_5116_ = v_reuseFailAlloc_5117_;
goto v_reusejp_5115_;
}
v_reusejp_5115_:
{
v___y_5092_ = v___x_5116_;
v_a_5093_ = v_a_5111_;
goto v___jp_5091_;
}
}
}
v___jp_5073_:
{
lean_object* v___x_5074_; lean_object* v___x_5075_; 
v___x_5074_ = ((lean_object*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addItem___redArg___closed__0));
v___x_5075_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5075_, 0, v___x_5074_);
return v___x_5075_;
}
v___jp_5076_:
{
if (lean_obj_tag(v_a_5077_) == 0)
{
lean_object* v___f_5078_; lean_object* v___x_5079_; 
v___f_5078_ = lean_alloc_closure((void*)(l_Lean_Server_Completion_dotCompletion___lam__0___boxed), 11, 1);
lean_closure_set(v___f_5078_, 0, v_a_5077_);
v___x_5079_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0(v___f_5078_, v___y_5065_, v___y_5066_, v___y_5067_, v___y_5068_, v___y_5069_, v___y_5070_, v___y_5071_);
return v___x_5079_;
}
else
{
goto v___jp_5073_;
}
}
v___jp_5080_:
{
if (v___y_5082_ == 0)
{
lean_dec_ref(v___y_5081_);
goto v___jp_5073_;
}
else
{
lean_object* v_a_5083_; lean_object* v___x_5085_; uint8_t v_isShared_5086_; uint8_t v_isSharedCheck_5090_; 
v_a_5083_ = lean_ctor_get(v___y_5081_, 0);
v_isSharedCheck_5090_ = !lean_is_exclusive(v___y_5081_);
if (v_isSharedCheck_5090_ == 0)
{
v___x_5085_ = v___y_5081_;
v_isShared_5086_ = v_isSharedCheck_5090_;
goto v_resetjp_5084_;
}
else
{
lean_inc(v_a_5083_);
lean_dec(v___y_5081_);
v___x_5085_ = lean_box(0);
v_isShared_5086_ = v_isSharedCheck_5090_;
goto v_resetjp_5084_;
}
v_resetjp_5084_:
{
lean_object* v___x_5088_; 
if (v_isShared_5086_ == 0)
{
v___x_5088_ = v___x_5085_;
goto v_reusejp_5087_;
}
else
{
lean_object* v_reuseFailAlloc_5089_; 
v_reuseFailAlloc_5089_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5089_, 0, v_a_5083_);
v___x_5088_ = v_reuseFailAlloc_5089_;
goto v_reusejp_5087_;
}
v_reusejp_5087_:
{
return v___x_5088_;
}
}
}
}
v___jp_5091_:
{
uint8_t v___x_5094_; 
v___x_5094_ = l_Lean_Exception_isInterrupt(v_a_5093_);
if (v___x_5094_ == 0)
{
uint8_t v___x_5095_; 
v___x_5095_ = l_Lean_Exception_isRuntime(v_a_5093_);
v___y_5081_ = v___y_5092_;
v___y_5082_ = v___x_5095_;
goto v___jp_5080_;
}
else
{
lean_dec_ref(v_a_5093_);
v___y_5081_ = v___y_5092_;
v___y_5082_ = v___x_5094_;
goto v___jp_5080_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Completion_dotCompletion___lam__1___boxed(lean_object* v_expr_5119_, lean_object* v___y_5120_, lean_object* v___y_5121_, lean_object* v___y_5122_, lean_object* v___y_5123_, lean_object* v___y_5124_, lean_object* v___y_5125_, lean_object* v___y_5126_, lean_object* v___y_5127_){
_start:
{
lean_object* v_res_5128_; 
v_res_5128_ = l_Lean_Server_Completion_dotCompletion___lam__1(v_expr_5119_, v___y_5120_, v___y_5121_, v___y_5122_, v___y_5123_, v___y_5124_, v___y_5125_, v___y_5126_);
lean_dec(v___y_5126_);
lean_dec_ref(v___y_5125_);
lean_dec(v___y_5124_);
lean_dec_ref(v___y_5123_);
lean_dec_ref(v___y_5122_);
lean_dec(v___y_5121_);
lean_dec_ref(v___y_5120_);
return v_res_5128_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Completion_dotCompletion(lean_object* v_uri_5129_, lean_object* v_pos_5130_, lean_object* v_completionInfoPos_5131_, lean_object* v_ctx_5132_, lean_object* v_info_5133_, lean_object* v_a_5134_){
_start:
{
lean_object* v_lctx_5136_; lean_object* v_expr_5137_; lean_object* v___f_5138_; lean_object* v___x_5139_; 
v_lctx_5136_ = lean_ctor_get(v_info_5133_, 1);
lean_inc_ref(v_lctx_5136_);
v_expr_5137_ = lean_ctor_get(v_info_5133_, 3);
lean_inc_ref(v_expr_5137_);
lean_dec_ref(v_info_5133_);
v___f_5138_ = lean_alloc_closure((void*)(l_Lean_Server_Completion_dotCompletion___lam__1___boxed), 9, 1);
lean_closure_set(v___f_5138_, 0, v_expr_5137_);
v___x_5139_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_runM(v_uri_5129_, v_pos_5130_, v_completionInfoPos_5131_, v_ctx_5132_, v_lctx_5136_, v___f_5138_, v_a_5134_);
return v___x_5139_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Completion_dotCompletion___boxed(lean_object* v_uri_5140_, lean_object* v_pos_5141_, lean_object* v_completionInfoPos_5142_, lean_object* v_ctx_5143_, lean_object* v_info_5144_, lean_object* v_a_5145_, lean_object* v_a_5146_){
_start:
{
lean_object* v_res_5147_; 
v_res_5147_ = l_Lean_Server_Completion_dotCompletion(v_uri_5140_, v_pos_5141_, v_completionInfoPos_5142_, v_ctx_5143_, v_info_5144_, v_a_5145_);
lean_dec_ref(v_a_5145_);
return v_res_5147_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Completion_dotIdCompletion___lam__0(lean_object* v___x_5148_, lean_object* v_id_5149_, lean_object* v_declName_5150_, lean_object* v_decl_5151_, lean_object* v___y_5152_, lean_object* v___y_5153_, lean_object* v___y_5154_, lean_object* v___y_5155_, lean_object* v___y_5156_, lean_object* v___y_5157_, lean_object* v___y_5158_){
_start:
{
lean_object* v___x_5160_; uint8_t v___x_5161_; 
v___x_5160_ = l_Lean_Name_getPrefix(v_declName_5150_);
lean_inc(v___x_5148_);
v___x_5161_ = l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_getDotCompletionTypeNameSet_spec__0___redArg(v___x_5160_, v___x_5148_);
if (v___x_5161_ == 0)
{
lean_object* v___x_5162_; lean_object* v___x_5163_; 
lean_dec_ref(v_decl_5151_);
lean_dec(v_declName_5150_);
lean_dec(v___x_5148_);
v___x_5162_ = ((lean_object*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addItem___redArg___closed__0));
v___x_5163_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5163_, 0, v___x_5162_);
return v___x_5163_;
}
else
{
lean_object* v___x_5164_; lean_object* v_a_5165_; lean_object* v___x_5167_; uint8_t v_isShared_5168_; uint8_t v_isSharedCheck_5261_; 
v___x_5164_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_normPrivateName_x3f___redArg(v_declName_5150_, v___y_5158_);
v_a_5165_ = lean_ctor_get(v___x_5164_, 0);
v_isSharedCheck_5261_ = !lean_is_exclusive(v___x_5164_);
if (v_isSharedCheck_5261_ == 0)
{
v___x_5167_ = v___x_5164_;
v_isShared_5168_ = v_isSharedCheck_5261_;
goto v_resetjp_5166_;
}
else
{
lean_inc(v_a_5165_);
lean_dec(v___x_5164_);
v___x_5167_ = lean_box(0);
v_isShared_5168_ = v_isSharedCheck_5261_;
goto v_resetjp_5166_;
}
v_resetjp_5166_:
{
if (lean_obj_tag(v_a_5165_) == 1)
{
lean_object* v_val_5169_; lean_object* v___x_5171_; uint8_t v_isShared_5172_; uint8_t v_isSharedCheck_5256_; 
lean_del_object(v___x_5167_);
v_val_5169_ = lean_ctor_get(v_a_5165_, 0);
v_isSharedCheck_5256_ = !lean_is_exclusive(v_a_5165_);
if (v_isSharedCheck_5256_ == 0)
{
v___x_5171_ = v_a_5165_;
v_isShared_5172_ = v_isSharedCheck_5256_;
goto v_resetjp_5170_;
}
else
{
lean_inc(v_val_5169_);
lean_dec(v_a_5165_);
v___x_5171_ = lean_box(0);
v_isShared_5172_ = v_isSharedCheck_5256_;
goto v_resetjp_5170_;
}
v_resetjp_5170_:
{
lean_object* v_info_5173_; lean_object* v_kind_5174_; lean_object* v_tags_5175_; lean_object* v___x_5176_; 
v_info_5173_ = lean_ctor_get(v_decl_5151_, 0);
lean_inc_ref(v_info_5173_);
v_kind_5174_ = lean_ctor_get(v_decl_5151_, 1);
lean_inc_ref(v_kind_5174_);
v_tags_5175_ = lean_ctor_get(v_decl_5151_, 2);
lean_inc_ref(v_tags_5175_);
lean_dec_ref(v_decl_5151_);
v___x_5176_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotIdCompletionMethod(v___x_5148_, v_info_5173_, v___y_5155_, v___y_5156_, v___y_5157_, v___y_5158_);
if (lean_obj_tag(v___x_5176_) == 0)
{
lean_object* v_a_5177_; lean_object* v___x_5179_; uint8_t v_isShared_5180_; uint8_t v_isSharedCheck_5247_; 
v_a_5177_ = lean_ctor_get(v___x_5176_, 0);
v_isSharedCheck_5247_ = !lean_is_exclusive(v___x_5176_);
if (v_isSharedCheck_5247_ == 0)
{
v___x_5179_ = v___x_5176_;
v_isShared_5180_ = v_isSharedCheck_5247_;
goto v_resetjp_5178_;
}
else
{
lean_inc(v_a_5177_);
lean_dec(v___x_5176_);
v___x_5179_ = lean_box(0);
v_isShared_5180_ = v_isSharedCheck_5247_;
goto v_resetjp_5178_;
}
v_resetjp_5178_:
{
uint8_t v___x_5181_; 
v___x_5181_ = lean_unbox(v_a_5177_);
lean_dec(v_a_5177_);
if (v___x_5181_ == 0)
{
lean_object* v___x_5182_; lean_object* v___x_5184_; 
lean_dec_ref(v_tags_5175_);
lean_dec_ref(v_kind_5174_);
lean_dec_ref(v_info_5173_);
lean_del_object(v___x_5171_);
lean_dec(v_val_5169_);
v___x_5182_ = ((lean_object*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addItem___redArg___closed__0));
if (v_isShared_5180_ == 0)
{
lean_ctor_set(v___x_5179_, 0, v___x_5182_);
v___x_5184_ = v___x_5179_;
goto v_reusejp_5183_;
}
else
{
lean_object* v_reuseFailAlloc_5185_; 
v_reuseFailAlloc_5185_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5185_, 0, v___x_5182_);
v___x_5184_ = v_reuseFailAlloc_5185_;
goto v_reusejp_5183_;
}
v_reusejp_5183_:
{
return v___x_5184_;
}
}
else
{
lean_object* v___x_5186_; 
lean_del_object(v___x_5179_);
lean_inc(v___y_5158_);
lean_inc_ref(v___y_5157_);
lean_inc(v___y_5156_);
lean_inc_ref(v___y_5155_);
v___x_5186_ = lean_apply_5(v_kind_5174_, v___y_5155_, v___y_5156_, v___y_5157_, v___y_5158_, lean_box(0));
if (lean_obj_tag(v___x_5186_) == 0)
{
lean_object* v_a_5187_; lean_object* v___x_5188_; 
v_a_5187_ = lean_ctor_get(v___x_5186_, 0);
lean_inc(v_a_5187_);
lean_dec_ref_known(v___x_5186_, 1);
lean_inc(v___y_5158_);
lean_inc_ref(v___y_5157_);
lean_inc(v___y_5156_);
lean_inc_ref(v___y_5155_);
v___x_5188_ = lean_apply_5(v_tags_5175_, v___y_5155_, v___y_5156_, v___y_5157_, v___y_5158_, lean_box(0));
if (lean_obj_tag(v___x_5188_) == 0)
{
lean_object* v_a_5189_; uint8_t v___x_5190_; 
v_a_5189_ = lean_ctor_get(v___x_5188_, 0);
lean_inc(v_a_5189_);
lean_dec_ref_known(v___x_5188_, 1);
v___x_5190_ = l_Lean_Name_isAnonymous(v_id_5149_);
if (v___x_5190_ == 0)
{
lean_object* v___x_5191_; lean_object* v___x_5192_; lean_object* v_a_5193_; lean_object* v___x_5195_; uint8_t v_isShared_5196_; uint8_t v_isSharedCheck_5212_; 
lean_del_object(v___x_5171_);
v___x_5191_ = l_Lean_Name_getPrefix(v_val_5169_);
v___x_5192_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_matchDecl_x3f___redArg(v___x_5191_, v_id_5149_, v___x_5190_, v_val_5169_, v___y_5158_);
lean_dec(v___x_5191_);
v_a_5193_ = lean_ctor_get(v___x_5192_, 0);
v_isSharedCheck_5212_ = !lean_is_exclusive(v___x_5192_);
if (v_isSharedCheck_5212_ == 0)
{
v___x_5195_ = v___x_5192_;
v_isShared_5196_ = v_isSharedCheck_5212_;
goto v_resetjp_5194_;
}
else
{
lean_inc(v_a_5193_);
lean_dec(v___x_5192_);
v___x_5195_ = lean_box(0);
v_isShared_5196_ = v_isSharedCheck_5212_;
goto v_resetjp_5194_;
}
v_resetjp_5194_:
{
if (lean_obj_tag(v_a_5193_) == 1)
{
lean_object* v_val_5197_; lean_object* v___x_5199_; uint8_t v_isShared_5200_; uint8_t v_isSharedCheck_5207_; 
lean_del_object(v___x_5195_);
v_val_5197_ = lean_ctor_get(v_a_5193_, 0);
v_isSharedCheck_5207_ = !lean_is_exclusive(v_a_5193_);
if (v_isSharedCheck_5207_ == 0)
{
v___x_5199_ = v_a_5193_;
v_isShared_5200_ = v_isSharedCheck_5207_;
goto v_resetjp_5198_;
}
else
{
lean_inc(v_val_5197_);
lean_dec(v_a_5193_);
v___x_5199_ = lean_box(0);
v_isShared_5200_ = v_isSharedCheck_5207_;
goto v_resetjp_5198_;
}
v_resetjp_5198_:
{
lean_object* v___x_5201_; lean_object* v___x_5203_; 
v___x_5201_ = l_Lean_ConstantInfo_name(v_info_5173_);
lean_dec_ref(v_info_5173_);
if (v_isShared_5200_ == 0)
{
lean_ctor_set_tag(v___x_5199_, 0);
lean_ctor_set(v___x_5199_, 0, v___x_5201_);
v___x_5203_ = v___x_5199_;
goto v_reusejp_5202_;
}
else
{
lean_object* v_reuseFailAlloc_5206_; 
v_reuseFailAlloc_5206_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5206_, 0, v___x_5201_);
v___x_5203_ = v_reuseFailAlloc_5206_;
goto v_reusejp_5202_;
}
v_reusejp_5202_:
{
uint8_t v___x_5204_; lean_object* v___x_5205_; 
v___x_5204_ = lean_unbox(v_a_5187_);
lean_dec(v_a_5187_);
v___x_5205_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addUnresolvedCompletionItem___redArg(v_val_5197_, v___x_5203_, v___x_5204_, v_a_5189_, v___y_5152_, v___y_5153_);
return v___x_5205_;
}
}
}
else
{
lean_object* v___x_5208_; lean_object* v___x_5210_; 
lean_dec(v_a_5193_);
lean_dec(v_a_5189_);
lean_dec(v_a_5187_);
lean_dec_ref(v_info_5173_);
v___x_5208_ = ((lean_object*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addItem___redArg___closed__0));
if (v_isShared_5196_ == 0)
{
lean_ctor_set(v___x_5195_, 0, v___x_5208_);
v___x_5210_ = v___x_5195_;
goto v_reusejp_5209_;
}
else
{
lean_object* v_reuseFailAlloc_5211_; 
v_reuseFailAlloc_5211_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5211_, 0, v___x_5208_);
v___x_5210_ = v_reuseFailAlloc_5211_;
goto v_reusejp_5209_;
}
v_reusejp_5209_:
{
return v___x_5210_;
}
}
}
}
else
{
lean_object* v___x_5213_; lean_object* v___x_5214_; lean_object* v___x_5215_; lean_object* v___x_5216_; lean_object* v___x_5218_; 
lean_dec(v_val_5169_);
v___x_5213_ = l_Lean_ConstantInfo_name(v_info_5173_);
lean_dec_ref(v_info_5173_);
v___x_5214_ = l_Lean_Name_getString_x21(v___x_5213_);
v___x_5215_ = lean_obj_once(&l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_matchDecl_x3f___redArg___closed__0, &l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_matchDecl_x3f___redArg___closed__0_once, _init_l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_matchDecl_x3f___redArg___closed__0);
v___x_5216_ = l_Lean_Name_str___override(v___x_5215_, v___x_5214_);
if (v_isShared_5172_ == 0)
{
lean_ctor_set_tag(v___x_5171_, 0);
lean_ctor_set(v___x_5171_, 0, v___x_5213_);
v___x_5218_ = v___x_5171_;
goto v_reusejp_5217_;
}
else
{
lean_object* v_reuseFailAlloc_5230_; 
v_reuseFailAlloc_5230_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5230_, 0, v___x_5213_);
v___x_5218_ = v_reuseFailAlloc_5230_;
goto v_reusejp_5217_;
}
v_reusejp_5217_:
{
uint8_t v___x_5219_; lean_object* v___x_5220_; lean_object* v___x_5222_; uint8_t v_isShared_5223_; uint8_t v_isSharedCheck_5228_; 
v___x_5219_ = lean_unbox(v_a_5187_);
lean_dec(v_a_5187_);
v___x_5220_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addUnresolvedCompletionItem___redArg(v___x_5216_, v___x_5218_, v___x_5219_, v_a_5189_, v___y_5152_, v___y_5153_);
v_isSharedCheck_5228_ = !lean_is_exclusive(v___x_5220_);
if (v_isSharedCheck_5228_ == 0)
{
lean_object* v_unused_5229_; 
v_unused_5229_ = lean_ctor_get(v___x_5220_, 0);
lean_dec(v_unused_5229_);
v___x_5222_ = v___x_5220_;
v_isShared_5223_ = v_isSharedCheck_5228_;
goto v_resetjp_5221_;
}
else
{
lean_dec(v___x_5220_);
v___x_5222_ = lean_box(0);
v_isShared_5223_ = v_isSharedCheck_5228_;
goto v_resetjp_5221_;
}
v_resetjp_5221_:
{
lean_object* v___x_5224_; lean_object* v___x_5226_; 
v___x_5224_ = ((lean_object*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addItem___redArg___closed__0));
if (v_isShared_5223_ == 0)
{
lean_ctor_set(v___x_5222_, 0, v___x_5224_);
v___x_5226_ = v___x_5222_;
goto v_reusejp_5225_;
}
else
{
lean_object* v_reuseFailAlloc_5227_; 
v_reuseFailAlloc_5227_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5227_, 0, v___x_5224_);
v___x_5226_ = v_reuseFailAlloc_5227_;
goto v_reusejp_5225_;
}
v_reusejp_5225_:
{
return v___x_5226_;
}
}
}
}
}
else
{
lean_object* v_a_5231_; lean_object* v___x_5233_; uint8_t v_isShared_5234_; uint8_t v_isSharedCheck_5238_; 
lean_dec(v_a_5187_);
lean_dec_ref(v_info_5173_);
lean_del_object(v___x_5171_);
lean_dec(v_val_5169_);
v_a_5231_ = lean_ctor_get(v___x_5188_, 0);
v_isSharedCheck_5238_ = !lean_is_exclusive(v___x_5188_);
if (v_isSharedCheck_5238_ == 0)
{
v___x_5233_ = v___x_5188_;
v_isShared_5234_ = v_isSharedCheck_5238_;
goto v_resetjp_5232_;
}
else
{
lean_inc(v_a_5231_);
lean_dec(v___x_5188_);
v___x_5233_ = lean_box(0);
v_isShared_5234_ = v_isSharedCheck_5238_;
goto v_resetjp_5232_;
}
v_resetjp_5232_:
{
lean_object* v___x_5236_; 
if (v_isShared_5234_ == 0)
{
v___x_5236_ = v___x_5233_;
goto v_reusejp_5235_;
}
else
{
lean_object* v_reuseFailAlloc_5237_; 
v_reuseFailAlloc_5237_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5237_, 0, v_a_5231_);
v___x_5236_ = v_reuseFailAlloc_5237_;
goto v_reusejp_5235_;
}
v_reusejp_5235_:
{
return v___x_5236_;
}
}
}
}
else
{
lean_object* v_a_5239_; lean_object* v___x_5241_; uint8_t v_isShared_5242_; uint8_t v_isSharedCheck_5246_; 
lean_dec_ref(v_tags_5175_);
lean_dec_ref(v_info_5173_);
lean_del_object(v___x_5171_);
lean_dec(v_val_5169_);
v_a_5239_ = lean_ctor_get(v___x_5186_, 0);
v_isSharedCheck_5246_ = !lean_is_exclusive(v___x_5186_);
if (v_isSharedCheck_5246_ == 0)
{
v___x_5241_ = v___x_5186_;
v_isShared_5242_ = v_isSharedCheck_5246_;
goto v_resetjp_5240_;
}
else
{
lean_inc(v_a_5239_);
lean_dec(v___x_5186_);
v___x_5241_ = lean_box(0);
v_isShared_5242_ = v_isSharedCheck_5246_;
goto v_resetjp_5240_;
}
v_resetjp_5240_:
{
lean_object* v___x_5244_; 
if (v_isShared_5242_ == 0)
{
v___x_5244_ = v___x_5241_;
goto v_reusejp_5243_;
}
else
{
lean_object* v_reuseFailAlloc_5245_; 
v_reuseFailAlloc_5245_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5245_, 0, v_a_5239_);
v___x_5244_ = v_reuseFailAlloc_5245_;
goto v_reusejp_5243_;
}
v_reusejp_5243_:
{
return v___x_5244_;
}
}
}
}
}
}
else
{
lean_object* v_a_5248_; lean_object* v___x_5250_; uint8_t v_isShared_5251_; uint8_t v_isSharedCheck_5255_; 
lean_dec_ref(v_tags_5175_);
lean_dec_ref(v_kind_5174_);
lean_dec_ref(v_info_5173_);
lean_del_object(v___x_5171_);
lean_dec(v_val_5169_);
v_a_5248_ = lean_ctor_get(v___x_5176_, 0);
v_isSharedCheck_5255_ = !lean_is_exclusive(v___x_5176_);
if (v_isSharedCheck_5255_ == 0)
{
v___x_5250_ = v___x_5176_;
v_isShared_5251_ = v_isSharedCheck_5255_;
goto v_resetjp_5249_;
}
else
{
lean_inc(v_a_5248_);
lean_dec(v___x_5176_);
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
lean_object* v___x_5257_; lean_object* v___x_5259_; 
lean_dec(v_a_5165_);
lean_dec_ref(v_decl_5151_);
lean_dec(v___x_5148_);
v___x_5257_ = ((lean_object*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addItem___redArg___closed__0));
if (v_isShared_5168_ == 0)
{
lean_ctor_set(v___x_5167_, 0, v___x_5257_);
v___x_5259_ = v___x_5167_;
goto v_reusejp_5258_;
}
else
{
lean_object* v_reuseFailAlloc_5260_; 
v_reuseFailAlloc_5260_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5260_, 0, v___x_5257_);
v___x_5259_ = v_reuseFailAlloc_5260_;
goto v_reusejp_5258_;
}
v_reusejp_5258_:
{
return v___x_5259_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Completion_dotIdCompletion___lam__0___boxed(lean_object* v___x_5262_, lean_object* v_id_5263_, lean_object* v_declName_5264_, lean_object* v_decl_5265_, lean_object* v___y_5266_, lean_object* v___y_5267_, lean_object* v___y_5268_, lean_object* v___y_5269_, lean_object* v___y_5270_, lean_object* v___y_5271_, lean_object* v___y_5272_, lean_object* v___y_5273_){
_start:
{
lean_object* v_res_5274_; 
v_res_5274_ = l_Lean_Server_Completion_dotIdCompletion___lam__0(v___x_5262_, v_id_5263_, v_declName_5264_, v_decl_5265_, v___y_5266_, v___y_5267_, v___y_5268_, v___y_5269_, v___y_5270_, v___y_5271_, v___y_5272_);
lean_dec(v___y_5272_);
lean_dec_ref(v___y_5271_);
lean_dec(v___y_5270_);
lean_dec_ref(v___y_5269_);
lean_dec_ref(v___y_5268_);
lean_dec(v___y_5267_);
lean_dec_ref(v___y_5266_);
lean_dec(v_id_5263_);
return v_res_5274_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Completion_dotIdCompletion___lam__1(lean_object* v_expectedType_x3f_5275_, lean_object* v_id_5276_, lean_object* v___y_5277_, lean_object* v___y_5278_, lean_object* v___y_5279_, lean_object* v___y_5280_, lean_object* v___y_5281_, lean_object* v___y_5282_, lean_object* v___y_5283_){
_start:
{
if (lean_obj_tag(v_expectedType_x3f_5275_) == 1)
{
lean_object* v_val_5285_; lean_object* v___x_5286_; 
v_val_5285_ = lean_ctor_get(v_expectedType_x3f_5275_, 0);
lean_inc(v_val_5285_);
lean_dec_ref_known(v_expectedType_x3f_5275_, 1);
v___x_5286_ = l_Lean_Server_Completion_getDotIdCompletionTypeNames(v_val_5285_, v___y_5280_, v___y_5281_, v___y_5282_, v___y_5283_);
if (lean_obj_tag(v___x_5286_) == 0)
{
lean_object* v_a_5287_; lean_object* v___x_5289_; uint8_t v_isShared_5290_; uint8_t v_isSharedCheck_5301_; 
v_a_5287_ = lean_ctor_get(v___x_5286_, 0);
v_isSharedCheck_5301_ = !lean_is_exclusive(v___x_5286_);
if (v_isSharedCheck_5301_ == 0)
{
v___x_5289_ = v___x_5286_;
v_isShared_5290_ = v_isSharedCheck_5301_;
goto v_resetjp_5288_;
}
else
{
lean_inc(v_a_5287_);
lean_dec(v___x_5286_);
v___x_5289_ = lean_box(0);
v_isShared_5290_ = v_isSharedCheck_5301_;
goto v_resetjp_5288_;
}
v_resetjp_5288_:
{
lean_object* v___x_5291_; lean_object* v___x_5292_; uint8_t v___x_5293_; 
v___x_5291_ = lean_array_get_size(v_a_5287_);
v___x_5292_ = lean_unsigned_to_nat(0u);
v___x_5293_ = lean_nat_dec_eq(v___x_5291_, v___x_5292_);
if (v___x_5293_ == 0)
{
lean_object* v___x_5294_; lean_object* v___f_5295_; lean_object* v___x_5296_; 
lean_del_object(v___x_5289_);
v___x_5294_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_NameSetModPrivate_ofArray(v_a_5287_);
lean_dec(v_a_5287_);
v___f_5295_ = lean_alloc_closure((void*)(l_Lean_Server_Completion_dotIdCompletion___lam__0___boxed), 12, 2);
lean_closure_set(v___f_5295_, 0, v___x_5294_);
lean_closure_set(v___f_5295_, 1, v_id_5276_);
v___x_5296_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0(v___f_5295_, v___y_5277_, v___y_5278_, v___y_5279_, v___y_5280_, v___y_5281_, v___y_5282_, v___y_5283_);
return v___x_5296_;
}
else
{
lean_object* v___x_5297_; lean_object* v___x_5299_; 
lean_dec(v_a_5287_);
lean_dec(v_id_5276_);
v___x_5297_ = ((lean_object*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addItem___redArg___closed__0));
if (v_isShared_5290_ == 0)
{
lean_ctor_set(v___x_5289_, 0, v___x_5297_);
v___x_5299_ = v___x_5289_;
goto v_reusejp_5298_;
}
else
{
lean_object* v_reuseFailAlloc_5300_; 
v_reuseFailAlloc_5300_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5300_, 0, v___x_5297_);
v___x_5299_ = v_reuseFailAlloc_5300_;
goto v_reusejp_5298_;
}
v_reusejp_5298_:
{
return v___x_5299_;
}
}
}
}
else
{
lean_object* v_a_5302_; lean_object* v___x_5304_; uint8_t v_isShared_5305_; uint8_t v_isSharedCheck_5309_; 
lean_dec(v_id_5276_);
v_a_5302_ = lean_ctor_get(v___x_5286_, 0);
v_isSharedCheck_5309_ = !lean_is_exclusive(v___x_5286_);
if (v_isSharedCheck_5309_ == 0)
{
v___x_5304_ = v___x_5286_;
v_isShared_5305_ = v_isSharedCheck_5309_;
goto v_resetjp_5303_;
}
else
{
lean_inc(v_a_5302_);
lean_dec(v___x_5286_);
v___x_5304_ = lean_box(0);
v_isShared_5305_ = v_isSharedCheck_5309_;
goto v_resetjp_5303_;
}
v_resetjp_5303_:
{
lean_object* v___x_5307_; 
if (v_isShared_5305_ == 0)
{
v___x_5307_ = v___x_5304_;
goto v_reusejp_5306_;
}
else
{
lean_object* v_reuseFailAlloc_5308_; 
v_reuseFailAlloc_5308_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5308_, 0, v_a_5302_);
v___x_5307_ = v_reuseFailAlloc_5308_;
goto v_reusejp_5306_;
}
v_reusejp_5306_:
{
return v___x_5307_;
}
}
}
}
else
{
lean_object* v___x_5310_; lean_object* v___x_5311_; 
lean_dec(v_id_5276_);
lean_dec(v_expectedType_x3f_5275_);
v___x_5310_ = ((lean_object*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addItem___redArg___closed__0));
v___x_5311_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5311_, 0, v___x_5310_);
return v___x_5311_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Completion_dotIdCompletion___lam__1___boxed(lean_object* v_expectedType_x3f_5312_, lean_object* v_id_5313_, lean_object* v___y_5314_, lean_object* v___y_5315_, lean_object* v___y_5316_, lean_object* v___y_5317_, lean_object* v___y_5318_, lean_object* v___y_5319_, lean_object* v___y_5320_, lean_object* v___y_5321_){
_start:
{
lean_object* v_res_5322_; 
v_res_5322_ = l_Lean_Server_Completion_dotIdCompletion___lam__1(v_expectedType_x3f_5312_, v_id_5313_, v___y_5314_, v___y_5315_, v___y_5316_, v___y_5317_, v___y_5318_, v___y_5319_, v___y_5320_);
lean_dec(v___y_5320_);
lean_dec_ref(v___y_5319_);
lean_dec(v___y_5318_);
lean_dec_ref(v___y_5317_);
lean_dec_ref(v___y_5316_);
lean_dec(v___y_5315_);
lean_dec_ref(v___y_5314_);
return v_res_5322_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Completion_dotIdCompletion(lean_object* v_uri_5323_, lean_object* v_pos_5324_, lean_object* v_completionInfoPos_5325_, lean_object* v_ctx_5326_, lean_object* v_lctx_5327_, lean_object* v_id_5328_, lean_object* v_expectedType_x3f_5329_, lean_object* v_a_5330_){
_start:
{
lean_object* v___y_5332_; lean_object* v___x_5333_; 
v___y_5332_ = lean_alloc_closure((void*)(l_Lean_Server_Completion_dotIdCompletion___lam__1___boxed), 10, 2);
lean_closure_set(v___y_5332_, 0, v_expectedType_x3f_5329_);
lean_closure_set(v___y_5332_, 1, v_id_5328_);
v___x_5333_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_runM(v_uri_5323_, v_pos_5324_, v_completionInfoPos_5325_, v_ctx_5326_, v_lctx_5327_, v___y_5332_, v_a_5330_);
return v___x_5333_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Completion_dotIdCompletion___boxed(lean_object* v_uri_5334_, lean_object* v_pos_5335_, lean_object* v_completionInfoPos_5336_, lean_object* v_ctx_5337_, lean_object* v_lctx_5338_, lean_object* v_id_5339_, lean_object* v_expectedType_x3f_5340_, lean_object* v_a_5341_, lean_object* v_a_5342_){
_start:
{
lean_object* v_res_5343_; 
v_res_5343_ = l_Lean_Server_Completion_dotIdCompletion(v_uri_5334_, v_pos_5335_, v_completionInfoPos_5336_, v_ctx_5337_, v_lctx_5338_, v_id_5339_, v_expectedType_x3f_5340_, v_a_5341_);
lean_dec_ref(v_a_5341_);
return v_res_5343_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_Completion_fieldIdCompletion_spec__0___redArg(lean_object* v___y_5350_, lean_object* v_as_5351_, size_t v_sz_5352_, size_t v_i_5353_, lean_object* v_b_5354_, lean_object* v___y_5355_, lean_object* v___y_5356_){
_start:
{
lean_object* v_a_5359_; uint8_t v___x_5363_; 
v___x_5363_ = lean_usize_dec_lt(v_i_5353_, v_sz_5352_);
if (v___x_5363_ == 0)
{
lean_object* v___x_5364_; lean_object* v___x_5365_; 
v___x_5364_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5364_, 0, v_b_5354_);
v___x_5365_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5365_, 0, v___x_5364_);
return v___x_5365_;
}
else
{
lean_object* v___x_5366_; lean_object* v_a_5367_; 
v___x_5366_ = lean_box(0);
v_a_5367_ = lean_array_uget_borrowed(v_as_5351_, v_i_5353_);
if (lean_obj_tag(v_a_5367_) == 1)
{
lean_object* v_str_5368_; uint8_t v___x_5369_; 
v_str_5368_ = lean_ctor_get(v_a_5367_, 1);
v___x_5369_ = l_Lean_String_charactersIn(v___y_5350_, v_str_5368_);
if (v___x_5369_ == 0)
{
v_a_5359_ = v___x_5366_;
goto v___jp_5358_;
}
else
{
lean_object* v___x_5370_; lean_object* v___x_5371_; lean_object* v___x_5372_; lean_object* v___x_5373_; lean_object* v___x_5374_; 
v___x_5370_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_Completion_fieldIdCompletion_spec__0___redArg___closed__1));
v___x_5371_ = lean_box(0);
v___x_5372_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_Completion_fieldIdCompletion_spec__0___redArg___closed__2));
lean_inc_ref(v_str_5368_);
v___x_5373_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_5373_, 0, v_str_5368_);
lean_ctor_set(v___x_5373_, 1, v___x_5370_);
lean_ctor_set(v___x_5373_, 2, v___x_5371_);
lean_ctor_set(v___x_5373_, 3, v___x_5372_);
lean_ctor_set(v___x_5373_, 4, v___x_5371_);
lean_ctor_set(v___x_5373_, 5, v___x_5371_);
lean_ctor_set(v___x_5373_, 6, v___x_5371_);
lean_ctor_set(v___x_5373_, 7, v___x_5371_);
v___x_5374_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addItem___redArg(v___x_5373_, v___x_5371_, v___y_5355_, v___y_5356_);
if (lean_obj_tag(v___x_5374_) == 0)
{
lean_object* v_a_5375_; 
v_a_5375_ = lean_ctor_get(v___x_5374_, 0);
lean_inc(v_a_5375_);
if (lean_obj_tag(v_a_5375_) == 0)
{
lean_dec_ref_known(v_a_5375_, 1);
return v___x_5374_;
}
else
{
lean_dec_ref_known(v_a_5375_, 1);
lean_dec_ref_known(v___x_5374_, 1);
v_a_5359_ = v___x_5366_;
goto v___jp_5358_;
}
}
else
{
return v___x_5374_;
}
}
}
else
{
v_a_5359_ = v___x_5366_;
goto v___jp_5358_;
}
}
v___jp_5358_:
{
size_t v___x_5360_; size_t v___x_5361_; 
v___x_5360_ = ((size_t)1ULL);
v___x_5361_ = lean_usize_add(v_i_5353_, v___x_5360_);
v_i_5353_ = v___x_5361_;
v_b_5354_ = v_a_5359_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_Completion_fieldIdCompletion_spec__0___redArg___boxed(lean_object* v___y_5376_, lean_object* v_as_5377_, lean_object* v_sz_5378_, lean_object* v_i_5379_, lean_object* v_b_5380_, lean_object* v___y_5381_, lean_object* v___y_5382_, lean_object* v___y_5383_){
_start:
{
size_t v_sz_boxed_5384_; size_t v_i_boxed_5385_; lean_object* v_res_5386_; 
v_sz_boxed_5384_ = lean_unbox_usize(v_sz_5378_);
lean_dec(v_sz_5378_);
v_i_boxed_5385_ = lean_unbox_usize(v_i_5379_);
lean_dec(v_i_5379_);
v_res_5386_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_Completion_fieldIdCompletion_spec__0___redArg(v___y_5376_, v_as_5377_, v_sz_boxed_5384_, v_i_boxed_5385_, v_b_5380_, v___y_5381_, v___y_5382_);
lean_dec(v___y_5382_);
lean_dec_ref(v___y_5381_);
lean_dec_ref(v_as_5377_);
lean_dec_ref(v___y_5376_);
return v_res_5386_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Completion_fieldIdCompletion___lam__0(lean_object* v_structName_5387_, lean_object* v___y_5388_, lean_object* v___y_5389_, lean_object* v___y_5390_, lean_object* v___y_5391_, lean_object* v___y_5392_, lean_object* v___y_5393_, lean_object* v___y_5394_, lean_object* v___y_5395_){
_start:
{
lean_object* v___x_5397_; lean_object* v_env_5398_; uint8_t v___x_5399_; lean_object* v_fieldNames_5400_; lean_object* v___x_5401_; size_t v_sz_5402_; size_t v___x_5403_; lean_object* v___x_5404_; 
v___x_5397_ = lean_st_ref_get(v___y_5395_);
v_env_5398_ = lean_ctor_get(v___x_5397_, 0);
lean_inc_ref(v_env_5398_);
lean_dec(v___x_5397_);
v___x_5399_ = 0;
v_fieldNames_5400_ = l_Lean_getStructureFieldsFlattened(v_env_5398_, v_structName_5387_, v___x_5399_);
v___x_5401_ = lean_box(0);
v_sz_5402_ = lean_array_size(v_fieldNames_5400_);
v___x_5403_ = ((size_t)0ULL);
v___x_5404_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_Completion_fieldIdCompletion_spec__0___redArg(v___y_5388_, v_fieldNames_5400_, v_sz_5402_, v___x_5403_, v___x_5401_, v___y_5389_, v___y_5390_);
lean_dec_ref(v_fieldNames_5400_);
if (lean_obj_tag(v___x_5404_) == 0)
{
lean_object* v_a_5405_; 
v_a_5405_ = lean_ctor_get(v___x_5404_, 0);
lean_inc(v_a_5405_);
if (lean_obj_tag(v_a_5405_) == 0)
{
lean_dec_ref_known(v_a_5405_, 1);
return v___x_5404_;
}
else
{
lean_object* v___x_5407_; uint8_t v_isShared_5408_; uint8_t v_isSharedCheck_5413_; 
lean_dec_ref_known(v_a_5405_, 1);
v_isSharedCheck_5413_ = !lean_is_exclusive(v___x_5404_);
if (v_isSharedCheck_5413_ == 0)
{
lean_object* v_unused_5414_; 
v_unused_5414_ = lean_ctor_get(v___x_5404_, 0);
lean_dec(v_unused_5414_);
v___x_5407_ = v___x_5404_;
v_isShared_5408_ = v_isSharedCheck_5413_;
goto v_resetjp_5406_;
}
else
{
lean_dec(v___x_5404_);
v___x_5407_ = lean_box(0);
v_isShared_5408_ = v_isSharedCheck_5413_;
goto v_resetjp_5406_;
}
v_resetjp_5406_:
{
lean_object* v___x_5409_; lean_object* v___x_5411_; 
v___x_5409_ = ((lean_object*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addItem___redArg___closed__0));
if (v_isShared_5408_ == 0)
{
lean_ctor_set(v___x_5407_, 0, v___x_5409_);
v___x_5411_ = v___x_5407_;
goto v_reusejp_5410_;
}
else
{
lean_object* v_reuseFailAlloc_5412_; 
v_reuseFailAlloc_5412_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5412_, 0, v___x_5409_);
v___x_5411_ = v_reuseFailAlloc_5412_;
goto v_reusejp_5410_;
}
v_reusejp_5410_:
{
return v___x_5411_;
}
}
}
}
else
{
return v___x_5404_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Completion_fieldIdCompletion___lam__0___boxed(lean_object* v_structName_5415_, lean_object* v___y_5416_, lean_object* v___y_5417_, lean_object* v___y_5418_, lean_object* v___y_5419_, lean_object* v___y_5420_, lean_object* v___y_5421_, lean_object* v___y_5422_, lean_object* v___y_5423_, lean_object* v___y_5424_){
_start:
{
lean_object* v_res_5425_; 
v_res_5425_ = l_Lean_Server_Completion_fieldIdCompletion___lam__0(v_structName_5415_, v___y_5416_, v___y_5417_, v___y_5418_, v___y_5419_, v___y_5420_, v___y_5421_, v___y_5422_, v___y_5423_);
lean_dec(v___y_5423_);
lean_dec_ref(v___y_5422_);
lean_dec(v___y_5421_);
lean_dec_ref(v___y_5420_);
lean_dec_ref(v___y_5419_);
lean_dec(v___y_5418_);
lean_dec_ref(v___y_5417_);
lean_dec_ref(v___y_5416_);
return v_res_5425_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Completion_fieldIdCompletion(lean_object* v_uri_5427_, lean_object* v_pos_5428_, lean_object* v_completionInfoPos_5429_, lean_object* v_ctx_5430_, lean_object* v_lctx_5431_, lean_object* v_id_5432_, lean_object* v_structName_5433_, lean_object* v_a_5434_){
_start:
{
lean_object* v___y_5437_; 
if (lean_obj_tag(v_id_5432_) == 0)
{
lean_object* v___x_5440_; 
v___x_5440_ = ((lean_object*)(l_Lean_Server_Completion_fieldIdCompletion___closed__0));
v___y_5437_ = v___x_5440_;
goto v___jp_5436_;
}
else
{
lean_object* v_val_5441_; uint8_t v___x_5442_; lean_object* v___x_5443_; 
v_val_5441_ = lean_ctor_get(v_id_5432_, 0);
lean_inc(v_val_5441_);
lean_dec_ref_known(v_id_5432_, 1);
v___x_5442_ = 1;
v___x_5443_ = l_Lean_Name_toString(v_val_5441_, v___x_5442_);
v___y_5437_ = v___x_5443_;
goto v___jp_5436_;
}
v___jp_5436_:
{
lean_object* v___f_5438_; lean_object* v___x_5439_; 
v___f_5438_ = lean_alloc_closure((void*)(l_Lean_Server_Completion_fieldIdCompletion___lam__0___boxed), 10, 2);
lean_closure_set(v___f_5438_, 0, v_structName_5433_);
lean_closure_set(v___f_5438_, 1, v___y_5437_);
v___x_5439_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_runM(v_uri_5427_, v_pos_5428_, v_completionInfoPos_5429_, v_ctx_5430_, v_lctx_5431_, v___f_5438_, v_a_5434_);
return v___x_5439_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Completion_fieldIdCompletion___boxed(lean_object* v_uri_5444_, lean_object* v_pos_5445_, lean_object* v_completionInfoPos_5446_, lean_object* v_ctx_5447_, lean_object* v_lctx_5448_, lean_object* v_id_5449_, lean_object* v_structName_5450_, lean_object* v_a_5451_, lean_object* v_a_5452_){
_start:
{
lean_object* v_res_5453_; 
v_res_5453_ = l_Lean_Server_Completion_fieldIdCompletion(v_uri_5444_, v_pos_5445_, v_completionInfoPos_5446_, v_ctx_5447_, v_lctx_5448_, v_id_5449_, v_structName_5450_, v_a_5451_);
lean_dec_ref(v_a_5451_);
return v_res_5453_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_Completion_fieldIdCompletion_spec__0(lean_object* v___y_5454_, lean_object* v_as_5455_, size_t v_sz_5456_, size_t v_i_5457_, lean_object* v_b_5458_, lean_object* v___y_5459_, lean_object* v___y_5460_, lean_object* v___y_5461_, lean_object* v___y_5462_, lean_object* v___y_5463_, lean_object* v___y_5464_, lean_object* v___y_5465_){
_start:
{
lean_object* v___x_5467_; 
v___x_5467_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_Completion_fieldIdCompletion_spec__0___redArg(v___y_5454_, v_as_5455_, v_sz_5456_, v_i_5457_, v_b_5458_, v___y_5459_, v___y_5460_);
return v___x_5467_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_Completion_fieldIdCompletion_spec__0___boxed(lean_object* v___y_5468_, lean_object* v_as_5469_, lean_object* v_sz_5470_, lean_object* v_i_5471_, lean_object* v_b_5472_, lean_object* v___y_5473_, lean_object* v___y_5474_, lean_object* v___y_5475_, lean_object* v___y_5476_, lean_object* v___y_5477_, lean_object* v___y_5478_, lean_object* v___y_5479_, lean_object* v___y_5480_){
_start:
{
size_t v_sz_boxed_5481_; size_t v_i_boxed_5482_; lean_object* v_res_5483_; 
v_sz_boxed_5481_ = lean_unbox_usize(v_sz_5470_);
lean_dec(v_sz_5470_);
v_i_boxed_5482_ = lean_unbox_usize(v_i_5471_);
lean_dec(v_i_5471_);
v_res_5483_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_Completion_fieldIdCompletion_spec__0(v___y_5468_, v_as_5469_, v_sz_boxed_5481_, v_i_boxed_5482_, v_b_5472_, v___y_5473_, v___y_5474_, v___y_5475_, v___y_5476_, v___y_5477_, v___y_5478_, v___y_5479_);
lean_dec(v___y_5479_);
lean_dec_ref(v___y_5478_);
lean_dec(v___y_5477_);
lean_dec_ref(v___y_5476_);
lean_dec_ref(v___y_5475_);
lean_dec(v___y_5474_);
lean_dec_ref(v___y_5473_);
lean_dec_ref(v_as_5469_);
lean_dec_ref(v___y_5468_);
return v_res_5483_;
}
}
static lean_object* _init_l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion___redArg___lam__0___closed__0(void){
_start:
{
uint32_t v___x_5484_; lean_object* v___x_5485_; 
v___x_5484_ = 32;
v___x_5485_ = l_Char_utf8Size(v___x_5484_);
return v___x_5485_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion___redArg___lam__0(lean_object* v_fst_5486_, lean_object* v_caps_5487_, lean_object* v_mkItem_5488_, lean_object* v_ctx_5489_, lean_object* v_stx_5490_, uint8_t v_snd_5491_, lean_object* v_x_5492_, lean_object* v_____s_5493_){
_start:
{
lean_object* v_fst_5494_; lean_object* v_snd_5495_; lean_object* v___x_5497_; uint8_t v_isShared_5498_; uint8_t v_isSharedCheck_5549_; 
v_fst_5494_ = lean_ctor_get(v_x_5492_, 0);
v_snd_5495_ = lean_ctor_get(v_x_5492_, 1);
v_isSharedCheck_5549_ = !lean_is_exclusive(v_x_5492_);
if (v_isSharedCheck_5549_ == 0)
{
v___x_5497_ = v_x_5492_;
v_isShared_5498_ = v_isSharedCheck_5549_;
goto v_resetjp_5496_;
}
else
{
lean_inc(v_snd_5495_);
lean_inc(v_fst_5494_);
lean_dec(v_x_5492_);
v___x_5497_ = lean_box(0);
v_isShared_5498_ = v_isSharedCheck_5549_;
goto v_resetjp_5496_;
}
v_resetjp_5496_:
{
lean_object* v___y_5500_; uint8_t v___x_5504_; lean_object* v___x_5505_; lean_object* v___y_5507_; lean_object* v___y_5508_; uint8_t v___y_5527_; uint8_t v___x_5537_; 
v___x_5504_ = 1;
lean_inc(v_fst_5494_);
v___x_5505_ = l_Lean_Name_toString(v_fst_5494_, v___x_5504_);
v___x_5537_ = l_Lean_String_charactersIn(v_fst_5486_, v___x_5505_);
if (v___x_5537_ == 0)
{
lean_object* v___x_5540_; 
lean_dec_ref(v___x_5505_);
lean_del_object(v___x_5497_);
lean_dec(v_snd_5495_);
lean_dec(v_fst_5494_);
lean_dec_ref(v_ctx_5489_);
lean_dec_ref(v_mkItem_5488_);
v___x_5540_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5540_, 0, v_____s_5493_);
return v___x_5540_;
}
else
{
lean_object* v_textDocument_x3f_5541_; 
v_textDocument_x3f_5541_ = lean_ctor_get(v_caps_5487_, 0);
if (lean_obj_tag(v_textDocument_x3f_5541_) == 0)
{
goto v___jp_5538_;
}
else
{
lean_object* v_val_5542_; lean_object* v_completion_x3f_5543_; 
v_val_5542_ = lean_ctor_get(v_textDocument_x3f_5541_, 0);
v_completion_x3f_5543_ = lean_ctor_get(v_val_5542_, 0);
if (lean_obj_tag(v_completion_x3f_5543_) == 0)
{
goto v___jp_5538_;
}
else
{
lean_object* v_val_5544_; 
v_val_5544_ = lean_ctor_get(v_completion_x3f_5543_, 0);
if (lean_obj_tag(v_val_5544_) == 0)
{
goto v___jp_5538_;
}
else
{
lean_object* v_val_5545_; 
v_val_5545_ = lean_ctor_get(v_val_5544_, 0);
if (lean_obj_tag(v_val_5545_) == 0)
{
goto v___jp_5538_;
}
else
{
lean_object* v_val_5546_; uint8_t v___x_5547_; 
v_val_5546_ = lean_ctor_get(v_val_5545_, 0);
v___x_5547_ = lean_unbox(v_val_5546_);
if (v___x_5547_ == 0)
{
goto v___jp_5538_;
}
else
{
uint8_t v___x_5548_; 
v___x_5548_ = 0;
v___y_5527_ = v___x_5548_;
goto v___jp_5526_;
}
}
}
}
}
}
v___jp_5499_:
{
lean_object* v___x_5501_; lean_object* v_items_5502_; lean_object* v___x_5503_; 
v___x_5501_ = lean_apply_3(v_mkItem_5488_, v_fst_5494_, v_snd_5495_, v___y_5500_);
v_items_5502_ = lean_array_push(v_____s_5493_, v___x_5501_);
v___x_5503_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5503_, 0, v_items_5502_);
return v___x_5503_;
}
v___jp_5506_:
{
lean_object* v_toCommandContextInfo_5509_; lean_object* v___x_5511_; uint8_t v_isShared_5512_; uint8_t v_isSharedCheck_5523_; 
v_toCommandContextInfo_5509_ = lean_ctor_get(v_ctx_5489_, 0);
v_isSharedCheck_5523_ = !lean_is_exclusive(v_ctx_5489_);
if (v_isSharedCheck_5523_ == 0)
{
lean_object* v_unused_5524_; lean_object* v_unused_5525_; 
v_unused_5524_ = lean_ctor_get(v_ctx_5489_, 2);
lean_dec(v_unused_5524_);
v_unused_5525_ = lean_ctor_get(v_ctx_5489_, 1);
lean_dec(v_unused_5525_);
v___x_5511_ = v_ctx_5489_;
v_isShared_5512_ = v_isSharedCheck_5523_;
goto v_resetjp_5510_;
}
else
{
lean_inc(v_toCommandContextInfo_5509_);
lean_dec(v_ctx_5489_);
v___x_5511_ = lean_box(0);
v_isShared_5512_ = v_isSharedCheck_5523_;
goto v_resetjp_5510_;
}
v_resetjp_5510_:
{
lean_object* v_fileMap_5513_; lean_object* v___x_5514_; lean_object* v___x_5515_; lean_object* v_range_5517_; 
v_fileMap_5513_ = lean_ctor_get(v_toCommandContextInfo_5509_, 2);
lean_inc_ref_n(v_fileMap_5513_, 2);
lean_dec_ref(v_toCommandContextInfo_5509_);
v___x_5514_ = l_Lean_FileMap_utf8PosToLspPos(v_fileMap_5513_, v___y_5507_);
lean_dec(v___y_5507_);
v___x_5515_ = l_Lean_FileMap_utf8PosToLspPos(v_fileMap_5513_, v___y_5508_);
lean_dec(v___y_5508_);
if (v_isShared_5498_ == 0)
{
lean_ctor_set(v___x_5497_, 1, v___x_5515_);
lean_ctor_set(v___x_5497_, 0, v___x_5514_);
v_range_5517_ = v___x_5497_;
goto v_reusejp_5516_;
}
else
{
lean_object* v_reuseFailAlloc_5522_; 
v_reuseFailAlloc_5522_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5522_, 0, v___x_5514_);
lean_ctor_set(v_reuseFailAlloc_5522_, 1, v___x_5515_);
v_range_5517_ = v_reuseFailAlloc_5522_;
goto v_reusejp_5516_;
}
v_reusejp_5516_:
{
lean_object* v___x_5519_; 
lean_inc_ref(v_range_5517_);
if (v_isShared_5512_ == 0)
{
lean_ctor_set(v___x_5511_, 2, v_range_5517_);
lean_ctor_set(v___x_5511_, 1, v_range_5517_);
lean_ctor_set(v___x_5511_, 0, v___x_5505_);
v___x_5519_ = v___x_5511_;
goto v_reusejp_5518_;
}
else
{
lean_object* v_reuseFailAlloc_5521_; 
v_reuseFailAlloc_5521_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_5521_, 0, v___x_5505_);
lean_ctor_set(v_reuseFailAlloc_5521_, 1, v_range_5517_);
lean_ctor_set(v_reuseFailAlloc_5521_, 2, v_range_5517_);
v___x_5519_ = v_reuseFailAlloc_5521_;
goto v_reusejp_5518_;
}
v_reusejp_5518_:
{
lean_object* v___x_5520_; 
v___x_5520_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5520_, 0, v___x_5519_);
v___y_5500_ = v___x_5520_;
goto v___jp_5499_;
}
}
}
}
v___jp_5526_:
{
lean_object* v___x_5528_; 
v___x_5528_ = l_Lean_Syntax_getRange_x3f(v_stx_5490_, v___y_5527_);
if (lean_obj_tag(v___x_5528_) == 1)
{
lean_object* v_val_5529_; 
v_val_5529_ = lean_ctor_get(v___x_5528_, 0);
lean_inc(v_val_5529_);
lean_dec_ref_known(v___x_5528_, 1);
if (v_snd_5491_ == 0)
{
lean_object* v_start_5530_; lean_object* v_stop_5531_; 
v_start_5530_ = lean_ctor_get(v_val_5529_, 0);
lean_inc(v_start_5530_);
v_stop_5531_ = lean_ctor_get(v_val_5529_, 1);
lean_inc(v_stop_5531_);
lean_dec(v_val_5529_);
v___y_5507_ = v_start_5530_;
v___y_5508_ = v_stop_5531_;
goto v___jp_5506_;
}
else
{
lean_object* v_start_5532_; lean_object* v_stop_5533_; lean_object* v___x_5534_; lean_object* v___x_5535_; 
v_start_5532_ = lean_ctor_get(v_val_5529_, 0);
lean_inc(v_start_5532_);
v_stop_5533_ = lean_ctor_get(v_val_5529_, 1);
lean_inc(v_stop_5533_);
lean_dec(v_val_5529_);
v___x_5534_ = lean_obj_once(&l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion___redArg___lam__0___closed__0, &l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion___redArg___lam__0___closed__0_once, _init_l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion___redArg___lam__0___closed__0);
v___x_5535_ = lean_nat_add(v_stop_5533_, v___x_5534_);
lean_dec(v_stop_5533_);
v___y_5507_ = v_start_5532_;
v___y_5508_ = v___x_5535_;
goto v___jp_5506_;
}
}
else
{
lean_object* v___x_5536_; 
lean_dec(v___x_5528_);
lean_dec_ref(v___x_5505_);
lean_del_object(v___x_5497_);
lean_dec_ref(v_ctx_5489_);
v___x_5536_ = lean_box(0);
v___y_5500_ = v___x_5536_;
goto v___jp_5499_;
}
}
v___jp_5538_:
{
if (v___x_5537_ == 0)
{
v___y_5527_ = v___x_5537_;
goto v___jp_5526_;
}
else
{
lean_object* v___x_5539_; 
lean_dec_ref(v___x_5505_);
lean_del_object(v___x_5497_);
lean_dec_ref(v_ctx_5489_);
v___x_5539_ = lean_box(0);
v___y_5500_ = v___x_5539_;
goto v___jp_5499_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion___redArg___lam__0___boxed(lean_object* v_fst_5550_, lean_object* v_caps_5551_, lean_object* v_mkItem_5552_, lean_object* v_ctx_5553_, lean_object* v_stx_5554_, lean_object* v_snd_5555_, lean_object* v_x_5556_, lean_object* v_____s_5557_){
_start:
{
uint8_t v_snd_833__boxed_5558_; lean_object* v_res_5559_; 
v_snd_833__boxed_5558_ = lean_unbox(v_snd_5555_);
v_res_5559_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion___redArg___lam__0(v_fst_5550_, v_caps_5551_, v_mkItem_5552_, v_ctx_5553_, v_stx_5554_, v_snd_833__boxed_5558_, v_x_5556_, v_____s_5557_);
lean_dec(v_stx_5554_);
lean_dec_ref(v_caps_5551_);
lean_dec_ref(v_fst_5550_);
return v_res_5559_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion___redArg(lean_object* v_inst_5561_, lean_object* v_entries_5562_, lean_object* v_stx_5563_, lean_object* v_caps_5564_, lean_object* v_ctx_5565_, lean_object* v_mkItem_5566_){
_start:
{
lean_object* v_fst_5568_; uint8_t v_snd_5569_; uint8_t v___x_5574_; lean_object* v___x_5575_; 
v___x_5574_ = 0;
v___x_5575_ = l_Lean_Syntax_getSubstring_x3f(v_stx_5563_, v___x_5574_, v___x_5574_);
if (lean_obj_tag(v___x_5575_) == 0)
{
lean_object* v___x_5576_; 
v___x_5576_ = ((lean_object*)(l_Lean_Server_Completion_fieldIdCompletion___closed__0));
v_fst_5568_ = v___x_5576_;
v_snd_5569_ = v___x_5574_;
goto v___jp_5567_;
}
else
{
lean_object* v_val_5577_; lean_object* v_str_5578_; lean_object* v_startPos_5579_; lean_object* v_stopPos_5580_; uint8_t v___y_5582_; uint8_t v___x_5584_; 
v_val_5577_ = lean_ctor_get(v___x_5575_, 0);
lean_inc(v_val_5577_);
lean_dec_ref_known(v___x_5575_, 1);
v_str_5578_ = lean_ctor_get(v_val_5577_, 0);
lean_inc_ref(v_str_5578_);
v_startPos_5579_ = lean_ctor_get(v_val_5577_, 1);
lean_inc(v_startPos_5579_);
v_stopPos_5580_ = lean_ctor_get(v_val_5577_, 2);
lean_inc(v_stopPos_5580_);
lean_dec(v_val_5577_);
v___x_5584_ = lean_string_utf8_at_end(v_str_5578_, v_stopPos_5580_);
if (v___x_5584_ == 0)
{
uint32_t v___x_5585_; uint32_t v___x_5586_; uint8_t v___x_5587_; 
v___x_5585_ = lean_string_utf8_get(v_str_5578_, v_stopPos_5580_);
v___x_5586_ = 46;
v___x_5587_ = lean_uint32_dec_eq(v___x_5585_, v___x_5586_);
if (v___x_5587_ == 0)
{
v___y_5582_ = v___x_5587_;
goto v___jp_5581_;
}
else
{
lean_object* v___x_5588_; lean_object* v___x_5589_; lean_object* v___x_5590_; 
v___x_5588_ = lean_string_utf8_extract(v_str_5578_, v_startPos_5579_, v_stopPos_5580_);
lean_dec(v_stopPos_5580_);
lean_dec(v_startPos_5579_);
lean_dec_ref(v_str_5578_);
v___x_5589_ = ((lean_object*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion___redArg___closed__0));
v___x_5590_ = lean_string_append(v___x_5588_, v___x_5589_);
v_fst_5568_ = v___x_5590_;
v_snd_5569_ = v___x_5587_;
goto v___jp_5567_;
}
}
else
{
v___y_5582_ = v___x_5574_;
goto v___jp_5581_;
}
v___jp_5581_:
{
lean_object* v___x_5583_; 
v___x_5583_ = lean_string_utf8_extract(v_str_5578_, v_startPos_5579_, v_stopPos_5580_);
lean_dec(v_stopPos_5580_);
lean_dec(v_startPos_5579_);
lean_dec_ref(v_str_5578_);
v_fst_5568_ = v___x_5583_;
v_snd_5569_ = v___y_5582_;
goto v___jp_5567_;
}
}
v___jp_5567_:
{
lean_object* v___x_5570_; lean_object* v___f_5571_; lean_object* v_items_5572_; lean_object* v___x_5573_; 
v___x_5570_ = lean_box(v_snd_5569_);
v___f_5571_ = lean_alloc_closure((void*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion___redArg___lam__0___boxed), 8, 6);
lean_closure_set(v___f_5571_, 0, v_fst_5568_);
lean_closure_set(v___f_5571_, 1, v_caps_5564_);
lean_closure_set(v___f_5571_, 2, v_mkItem_5566_);
lean_closure_set(v___f_5571_, 3, v_ctx_5565_);
lean_closure_set(v___f_5571_, 4, v_stx_5563_);
lean_closure_set(v___f_5571_, 5, v___x_5570_);
v_items_5572_ = ((lean_object*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_runM___closed__0));
v___x_5573_ = lean_apply_4(v_inst_5561_, lean_box(0), v_entries_5562_, v_items_5572_, v___f_5571_);
return v___x_5573_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion(lean_object* v_Coll_5591_, lean_object* v_00_u03b1_5592_, lean_object* v_inst_5593_, lean_object* v_entries_5594_, lean_object* v_stx_5595_, lean_object* v_caps_5596_, lean_object* v_ctx_5597_, lean_object* v_mkItem_5598_){
_start:
{
lean_object* v___x_5599_; 
v___x_5599_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion___redArg(v_inst_5593_, v_entries_5594_, v_stx_5595_, v_caps_5596_, v_ctx_5597_, v_mkItem_5598_);
return v___x_5599_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Completion_optionCompletion___lam__0(lean_object* v_options_5605_, lean_object* v_completionInfoPos_5606_, lean_object* v_uri_5607_, lean_object* v_pos_5608_, lean_object* v_name_5609_, lean_object* v_decl_5610_, lean_object* v_textEdit_x3f_5611_){
_start:
{
lean_object* v_defValue_5612_; lean_object* v_descr_5613_; lean_object* v_map_5614_; uint8_t v___x_5615_; lean_object* v___x_5616_; lean_object* v___x_5617_; lean_object* v___y_5619_; lean_object* v___x_5632_; 
v_defValue_5612_ = lean_ctor_get(v_decl_5610_, 2);
lean_inc_ref(v_defValue_5612_);
v_descr_5613_ = lean_ctor_get(v_decl_5610_, 3);
lean_inc_ref(v_descr_5613_);
lean_dec_ref(v_decl_5610_);
v_map_5614_ = lean_ctor_get(v_options_5605_, 0);
v___x_5615_ = 1;
lean_inc(v_name_5609_);
v___x_5616_ = l_Lean_Name_toString(v_name_5609_, v___x_5615_);
v___x_5617_ = ((lean_object*)(l_Lean_Server_Completion_optionCompletion___lam__0___closed__0));
v___x_5632_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_5614_, v_name_5609_);
lean_dec(v_name_5609_);
if (lean_obj_tag(v___x_5632_) == 0)
{
v___y_5619_ = v_defValue_5612_;
goto v___jp_5618_;
}
else
{
if (lean_obj_tag(v___x_5632_) == 0)
{
v___y_5619_ = v_defValue_5612_;
goto v___jp_5618_;
}
else
{
lean_object* v_val_5633_; 
lean_dec_ref(v_defValue_5612_);
v_val_5633_ = lean_ctor_get(v___x_5632_, 0);
lean_inc(v_val_5633_);
lean_dec_ref_known(v___x_5632_, 1);
v___y_5619_ = v_val_5633_;
goto v___jp_5618_;
}
}
v___jp_5618_:
{
lean_object* v___x_5620_; lean_object* v___x_5621_; lean_object* v___x_5622_; lean_object* v___x_5623_; lean_object* v___x_5624_; lean_object* v___x_5625_; lean_object* v___x_5626_; lean_object* v___x_5627_; lean_object* v___x_5628_; lean_object* v___x_5629_; lean_object* v___x_5630_; lean_object* v___x_5631_; 
v___x_5620_ = lean_data_value_to_string(v___y_5619_);
v___x_5621_ = lean_string_append(v___x_5617_, v___x_5620_);
lean_dec_ref(v___x_5620_);
v___x_5622_ = ((lean_object*)(l_Lean_Server_Completion_optionCompletion___lam__0___closed__1));
v___x_5623_ = lean_string_append(v___x_5621_, v___x_5622_);
v___x_5624_ = lean_string_append(v___x_5623_, v_descr_5613_);
lean_dec_ref(v_descr_5613_);
v___x_5625_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5625_, 0, v___x_5624_);
v___x_5626_ = lean_box(0);
v___x_5627_ = ((lean_object*)(l_Lean_Server_Completion_optionCompletion___lam__0___closed__2));
v___x_5628_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5628_, 0, v_completionInfoPos_5606_);
v___x_5629_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_5629_, 0, v_uri_5607_);
lean_ctor_set(v___x_5629_, 1, v_pos_5608_);
lean_ctor_set(v___x_5629_, 2, v___x_5628_);
lean_ctor_set(v___x_5629_, 3, v___x_5626_);
v___x_5630_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5630_, 0, v___x_5629_);
v___x_5631_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_5631_, 0, v___x_5616_);
lean_ctor_set(v___x_5631_, 1, v___x_5625_);
lean_ctor_set(v___x_5631_, 2, v___x_5626_);
lean_ctor_set(v___x_5631_, 3, v___x_5627_);
lean_ctor_set(v___x_5631_, 4, v_textEdit_x3f_5611_);
lean_ctor_set(v___x_5631_, 5, v___x_5626_);
lean_ctor_set(v___x_5631_, 6, v___x_5630_);
lean_ctor_set(v___x_5631_, 7, v___x_5626_);
return v___x_5631_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Completion_optionCompletion___lam__0___boxed(lean_object* v_options_5634_, lean_object* v_completionInfoPos_5635_, lean_object* v_uri_5636_, lean_object* v_pos_5637_, lean_object* v_name_5638_, lean_object* v_decl_5639_, lean_object* v_textEdit_x3f_5640_){
_start:
{
lean_object* v_res_5641_; 
v_res_5641_ = l_Lean_Server_Completion_optionCompletion___lam__0(v_options_5634_, v_completionInfoPos_5635_, v_uri_5636_, v_pos_5637_, v_name_5638_, v_decl_5639_, v_textEdit_x3f_5640_);
lean_dec_ref(v_options_5634_);
return v_res_5641_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion___at___00Lean_Server_Completion_optionCompletion_spec__0_spec__0(lean_object* v_mkItem_5642_, lean_object* v_stx_5643_, lean_object* v_ctx_5644_, uint8_t v_snd_5645_, lean_object* v_fst_5646_, lean_object* v_caps_5647_, lean_object* v_init_5648_, lean_object* v_x_5649_){
_start:
{
if (lean_obj_tag(v_x_5649_) == 0)
{
lean_object* v_k_5650_; lean_object* v_v_5651_; lean_object* v_l_5652_; lean_object* v_r_5653_; lean_object* v___x_5654_; lean_object* v_a_5655_; lean_object* v___y_5657_; uint8_t v___x_5661_; lean_object* v___x_5662_; lean_object* v___y_5664_; lean_object* v___y_5665_; uint8_t v___y_5674_; uint8_t v___x_5684_; 
v_k_5650_ = lean_ctor_get(v_x_5649_, 1);
lean_inc_n(v_k_5650_, 2);
v_v_5651_ = lean_ctor_get(v_x_5649_, 2);
lean_inc(v_v_5651_);
v_l_5652_ = lean_ctor_get(v_x_5649_, 3);
lean_inc(v_l_5652_);
v_r_5653_ = lean_ctor_get(v_x_5649_, 4);
lean_inc(v_r_5653_);
lean_dec_ref_known(v_x_5649_, 5);
lean_inc_ref(v_ctx_5644_);
lean_inc_ref(v_mkItem_5642_);
v___x_5654_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion___at___00Lean_Server_Completion_optionCompletion_spec__0_spec__0(v_mkItem_5642_, v_stx_5643_, v_ctx_5644_, v_snd_5645_, v_fst_5646_, v_caps_5647_, v_init_5648_, v_l_5652_);
v_a_5655_ = lean_ctor_get(v___x_5654_, 0);
lean_inc(v_a_5655_);
v___x_5661_ = 1;
v___x_5662_ = l_Lean_Name_toString(v_k_5650_, v___x_5661_);
v___x_5684_ = l_Lean_String_charactersIn(v_fst_5646_, v___x_5662_);
if (v___x_5684_ == 0)
{
lean_object* v_a_5687_; 
lean_dec_ref(v___x_5662_);
lean_dec(v_a_5655_);
lean_dec(v_v_5651_);
lean_dec(v_k_5650_);
v_a_5687_ = lean_ctor_get(v___x_5654_, 0);
lean_inc(v_a_5687_);
lean_dec_ref(v___x_5654_);
v_init_5648_ = v_a_5687_;
v_x_5649_ = v_r_5653_;
goto _start;
}
else
{
lean_object* v_textDocument_x3f_5689_; 
lean_dec_ref(v___x_5654_);
v_textDocument_x3f_5689_ = lean_ctor_get(v_caps_5647_, 0);
if (lean_obj_tag(v_textDocument_x3f_5689_) == 0)
{
goto v___jp_5685_;
}
else
{
lean_object* v_val_5690_; lean_object* v_completion_x3f_5691_; 
v_val_5690_ = lean_ctor_get(v_textDocument_x3f_5689_, 0);
v_completion_x3f_5691_ = lean_ctor_get(v_val_5690_, 0);
if (lean_obj_tag(v_completion_x3f_5691_) == 0)
{
goto v___jp_5685_;
}
else
{
lean_object* v_val_5692_; 
v_val_5692_ = lean_ctor_get(v_completion_x3f_5691_, 0);
if (lean_obj_tag(v_val_5692_) == 0)
{
goto v___jp_5685_;
}
else
{
lean_object* v_val_5693_; 
v_val_5693_ = lean_ctor_get(v_val_5692_, 0);
if (lean_obj_tag(v_val_5693_) == 0)
{
goto v___jp_5685_;
}
else
{
lean_object* v_val_5694_; uint8_t v___x_5695_; 
v_val_5694_ = lean_ctor_get(v_val_5693_, 0);
v___x_5695_ = lean_unbox(v_val_5694_);
if (v___x_5695_ == 0)
{
goto v___jp_5685_;
}
else
{
uint8_t v___x_5696_; 
v___x_5696_ = 0;
v___y_5674_ = v___x_5696_;
goto v___jp_5673_;
}
}
}
}
}
}
v___jp_5656_:
{
lean_object* v___x_5658_; lean_object* v_items_5659_; 
lean_inc_ref(v_mkItem_5642_);
v___x_5658_ = lean_apply_3(v_mkItem_5642_, v_k_5650_, v_v_5651_, v___y_5657_);
v_items_5659_ = lean_array_push(v_a_5655_, v___x_5658_);
v_init_5648_ = v_items_5659_;
v_x_5649_ = v_r_5653_;
goto _start;
}
v___jp_5663_:
{
lean_object* v_toCommandContextInfo_5666_; lean_object* v_fileMap_5667_; lean_object* v___x_5668_; lean_object* v___x_5669_; lean_object* v_range_5670_; lean_object* v___x_5671_; lean_object* v___x_5672_; 
v_toCommandContextInfo_5666_ = lean_ctor_get(v_ctx_5644_, 0);
v_fileMap_5667_ = lean_ctor_get(v_toCommandContextInfo_5666_, 2);
lean_inc_ref_n(v_fileMap_5667_, 2);
v___x_5668_ = l_Lean_FileMap_utf8PosToLspPos(v_fileMap_5667_, v___y_5664_);
lean_dec(v___y_5664_);
v___x_5669_ = l_Lean_FileMap_utf8PosToLspPos(v_fileMap_5667_, v___y_5665_);
lean_dec(v___y_5665_);
v_range_5670_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_range_5670_, 0, v___x_5668_);
lean_ctor_set(v_range_5670_, 1, v___x_5669_);
lean_inc_ref(v_range_5670_);
v___x_5671_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_5671_, 0, v___x_5662_);
lean_ctor_set(v___x_5671_, 1, v_range_5670_);
lean_ctor_set(v___x_5671_, 2, v_range_5670_);
v___x_5672_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5672_, 0, v___x_5671_);
v___y_5657_ = v___x_5672_;
goto v___jp_5656_;
}
v___jp_5673_:
{
lean_object* v___x_5675_; 
v___x_5675_ = l_Lean_Syntax_getRange_x3f(v_stx_5643_, v___y_5674_);
if (lean_obj_tag(v___x_5675_) == 1)
{
lean_object* v_val_5676_; 
v_val_5676_ = lean_ctor_get(v___x_5675_, 0);
lean_inc(v_val_5676_);
lean_dec_ref_known(v___x_5675_, 1);
if (v_snd_5645_ == 0)
{
lean_object* v_start_5677_; lean_object* v_stop_5678_; 
v_start_5677_ = lean_ctor_get(v_val_5676_, 0);
lean_inc(v_start_5677_);
v_stop_5678_ = lean_ctor_get(v_val_5676_, 1);
lean_inc(v_stop_5678_);
lean_dec(v_val_5676_);
v___y_5664_ = v_start_5677_;
v___y_5665_ = v_stop_5678_;
goto v___jp_5663_;
}
else
{
lean_object* v_start_5679_; lean_object* v_stop_5680_; lean_object* v___x_5681_; lean_object* v___x_5682_; 
v_start_5679_ = lean_ctor_get(v_val_5676_, 0);
lean_inc(v_start_5679_);
v_stop_5680_ = lean_ctor_get(v_val_5676_, 1);
lean_inc(v_stop_5680_);
lean_dec(v_val_5676_);
v___x_5681_ = lean_obj_once(&l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion___redArg___lam__0___closed__0, &l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion___redArg___lam__0___closed__0_once, _init_l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion___redArg___lam__0___closed__0);
v___x_5682_ = lean_nat_add(v_stop_5680_, v___x_5681_);
lean_dec(v_stop_5680_);
v___y_5664_ = v_start_5679_;
v___y_5665_ = v___x_5682_;
goto v___jp_5663_;
}
}
else
{
lean_object* v___x_5683_; 
lean_dec(v___x_5675_);
lean_dec_ref(v___x_5662_);
v___x_5683_ = lean_box(0);
v___y_5657_ = v___x_5683_;
goto v___jp_5656_;
}
}
v___jp_5685_:
{
if (v___x_5684_ == 0)
{
v___y_5674_ = v___x_5684_;
goto v___jp_5673_;
}
else
{
lean_object* v___x_5686_; 
lean_dec_ref(v___x_5662_);
v___x_5686_ = lean_box(0);
v___y_5657_ = v___x_5686_;
goto v___jp_5656_;
}
}
}
else
{
lean_object* v___x_5697_; 
lean_dec_ref(v_ctx_5644_);
lean_dec_ref(v_mkItem_5642_);
v___x_5697_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5697_, 0, v_init_5648_);
return v___x_5697_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion___at___00Lean_Server_Completion_optionCompletion_spec__0_spec__0___boxed(lean_object* v_mkItem_5698_, lean_object* v_stx_5699_, lean_object* v_ctx_5700_, lean_object* v_snd_5701_, lean_object* v_fst_5702_, lean_object* v_caps_5703_, lean_object* v_init_5704_, lean_object* v_x_5705_){
_start:
{
uint8_t v_snd_1436__boxed_5706_; lean_object* v_res_5707_; 
v_snd_1436__boxed_5706_ = lean_unbox(v_snd_5701_);
v_res_5707_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion___at___00Lean_Server_Completion_optionCompletion_spec__0_spec__0(v_mkItem_5698_, v_stx_5699_, v_ctx_5700_, v_snd_1436__boxed_5706_, v_fst_5702_, v_caps_5703_, v_init_5704_, v_x_5705_);
lean_dec_ref(v_caps_5703_);
lean_dec_ref(v_fst_5702_);
lean_dec(v_stx_5699_);
return v_res_5707_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion___at___00Lean_Server_Completion_optionCompletion_spec__0(lean_object* v_entries_5708_, lean_object* v_stx_5709_, lean_object* v_caps_5710_, lean_object* v_ctx_5711_, lean_object* v_mkItem_5712_){
_start:
{
lean_object* v_fst_5714_; uint8_t v_snd_5715_; uint8_t v___x_5719_; lean_object* v___x_5720_; 
v___x_5719_ = 0;
v___x_5720_ = l_Lean_Syntax_getSubstring_x3f(v_stx_5709_, v___x_5719_, v___x_5719_);
if (lean_obj_tag(v___x_5720_) == 0)
{
lean_object* v___x_5721_; 
v___x_5721_ = ((lean_object*)(l_Lean_Server_Completion_fieldIdCompletion___closed__0));
v_fst_5714_ = v___x_5721_;
v_snd_5715_ = v___x_5719_;
goto v___jp_5713_;
}
else
{
lean_object* v_val_5722_; lean_object* v_str_5723_; lean_object* v_startPos_5724_; lean_object* v_stopPos_5725_; uint8_t v___y_5727_; uint8_t v___x_5729_; 
v_val_5722_ = lean_ctor_get(v___x_5720_, 0);
lean_inc(v_val_5722_);
lean_dec_ref_known(v___x_5720_, 1);
v_str_5723_ = lean_ctor_get(v_val_5722_, 0);
lean_inc_ref(v_str_5723_);
v_startPos_5724_ = lean_ctor_get(v_val_5722_, 1);
lean_inc(v_startPos_5724_);
v_stopPos_5725_ = lean_ctor_get(v_val_5722_, 2);
lean_inc(v_stopPos_5725_);
lean_dec(v_val_5722_);
v___x_5729_ = lean_string_utf8_at_end(v_str_5723_, v_stopPos_5725_);
if (v___x_5729_ == 0)
{
uint32_t v___x_5730_; uint32_t v___x_5731_; uint8_t v___x_5732_; 
v___x_5730_ = lean_string_utf8_get(v_str_5723_, v_stopPos_5725_);
v___x_5731_ = 46;
v___x_5732_ = lean_uint32_dec_eq(v___x_5730_, v___x_5731_);
if (v___x_5732_ == 0)
{
v___y_5727_ = v___x_5732_;
goto v___jp_5726_;
}
else
{
lean_object* v___x_5733_; lean_object* v___x_5734_; lean_object* v___x_5735_; 
v___x_5733_ = lean_string_utf8_extract(v_str_5723_, v_startPos_5724_, v_stopPos_5725_);
lean_dec(v_stopPos_5725_);
lean_dec(v_startPos_5724_);
lean_dec_ref(v_str_5723_);
v___x_5734_ = ((lean_object*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion___redArg___closed__0));
v___x_5735_ = lean_string_append(v___x_5733_, v___x_5734_);
v_fst_5714_ = v___x_5735_;
v_snd_5715_ = v___x_5732_;
goto v___jp_5713_;
}
}
else
{
v___y_5727_ = v___x_5719_;
goto v___jp_5726_;
}
v___jp_5726_:
{
lean_object* v___x_5728_; 
v___x_5728_ = lean_string_utf8_extract(v_str_5723_, v_startPos_5724_, v_stopPos_5725_);
lean_dec(v_stopPos_5725_);
lean_dec(v_startPos_5724_);
lean_dec_ref(v_str_5723_);
v_fst_5714_ = v___x_5728_;
v_snd_5715_ = v___y_5727_;
goto v___jp_5713_;
}
}
v___jp_5713_:
{
lean_object* v_items_5716_; lean_object* v___x_5717_; lean_object* v_a_5718_; 
v_items_5716_ = ((lean_object*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_runM___closed__0));
v___x_5717_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion___at___00Lean_Server_Completion_optionCompletion_spec__0_spec__0(v_mkItem_5712_, v_stx_5709_, v_ctx_5711_, v_snd_5715_, v_fst_5714_, v_caps_5710_, v_items_5716_, v_entries_5708_);
lean_dec_ref(v_fst_5714_);
v_a_5718_ = lean_ctor_get(v___x_5717_, 0);
lean_inc(v_a_5718_);
lean_dec_ref(v___x_5717_);
return v_a_5718_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion___at___00Lean_Server_Completion_optionCompletion_spec__0___boxed(lean_object* v_entries_5736_, lean_object* v_stx_5737_, lean_object* v_caps_5738_, lean_object* v_ctx_5739_, lean_object* v_mkItem_5740_){
_start:
{
lean_object* v_res_5741_; 
v_res_5741_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion___at___00Lean_Server_Completion_optionCompletion_spec__0(v_entries_5736_, v_stx_5737_, v_caps_5738_, v_ctx_5739_, v_mkItem_5740_);
lean_dec_ref(v_caps_5738_);
lean_dec(v_stx_5737_);
return v_res_5741_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Completion_optionCompletion___lam__1(lean_object* v_completionInfoPos_5742_, lean_object* v_uri_5743_, lean_object* v_pos_5744_, lean_object* v_stx_5745_, lean_object* v_caps_5746_, lean_object* v_ctx_5747_, lean_object* v___y_5748_, lean_object* v___y_5749_, lean_object* v___y_5750_, lean_object* v___y_5751_){
_start:
{
lean_object* v_toCold_5753_; lean_object* v_ref_5754_; lean_object* v___x_5755_; 
v_toCold_5753_ = lean_ctor_get(v___y_5750_, 0);
lean_inc_ref(v_toCold_5753_);
v_ref_5754_ = lean_ctor_get(v___y_5750_, 2);
lean_inc(v_ref_5754_);
lean_dec_ref(v___y_5750_);
v___x_5755_ = l_Lean_getOptionDecls();
if (lean_obj_tag(v___x_5755_) == 0)
{
lean_object* v_a_5756_; lean_object* v___x_5758_; uint8_t v_isShared_5759_; uint8_t v_isSharedCheck_5768_; 
lean_dec(v_ref_5754_);
v_a_5756_ = lean_ctor_get(v___x_5755_, 0);
v_isSharedCheck_5768_ = !lean_is_exclusive(v___x_5755_);
if (v_isSharedCheck_5768_ == 0)
{
v___x_5758_ = v___x_5755_;
v_isShared_5759_ = v_isSharedCheck_5768_;
goto v_resetjp_5757_;
}
else
{
lean_inc(v_a_5756_);
lean_dec(v___x_5755_);
v___x_5758_ = lean_box(0);
v_isShared_5759_ = v_isSharedCheck_5768_;
goto v_resetjp_5757_;
}
v_resetjp_5757_:
{
lean_object* v_options_5760_; lean_object* v___f_5761_; lean_object* v___x_5762_; lean_object* v___x_5763_; lean_object* v___x_5764_; lean_object* v___x_5766_; 
v_options_5760_ = lean_ctor_get(v_toCold_5753_, 2);
lean_inc_ref(v_options_5760_);
lean_dec_ref(v_toCold_5753_);
v___f_5761_ = lean_alloc_closure((void*)(l_Lean_Server_Completion_optionCompletion___lam__0___boxed), 7, 4);
lean_closure_set(v___f_5761_, 0, v_options_5760_);
lean_closure_set(v___f_5761_, 1, v_completionInfoPos_5742_);
lean_closure_set(v___f_5761_, 2, v_uri_5743_);
lean_closure_set(v___f_5761_, 3, v_pos_5744_);
v___x_5762_ = lean_unsigned_to_nat(1u);
v___x_5763_ = l_Lean_Syntax_getArg(v_stx_5745_, v___x_5762_);
v___x_5764_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion___at___00Lean_Server_Completion_optionCompletion_spec__0(v_a_5756_, v___x_5763_, v_caps_5746_, v_ctx_5747_, v___f_5761_);
lean_dec(v___x_5763_);
if (v_isShared_5759_ == 0)
{
lean_ctor_set(v___x_5758_, 0, v___x_5764_);
v___x_5766_ = v___x_5758_;
goto v_reusejp_5765_;
}
else
{
lean_object* v_reuseFailAlloc_5767_; 
v_reuseFailAlloc_5767_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5767_, 0, v___x_5764_);
v___x_5766_ = v_reuseFailAlloc_5767_;
goto v_reusejp_5765_;
}
v_reusejp_5765_:
{
return v___x_5766_;
}
}
}
else
{
lean_object* v_a_5769_; lean_object* v___x_5771_; uint8_t v_isShared_5772_; uint8_t v_isSharedCheck_5780_; 
lean_dec_ref(v_toCold_5753_);
lean_dec_ref(v_ctx_5747_);
lean_dec_ref(v_pos_5744_);
lean_dec_ref(v_uri_5743_);
lean_dec(v_completionInfoPos_5742_);
v_a_5769_ = lean_ctor_get(v___x_5755_, 0);
v_isSharedCheck_5780_ = !lean_is_exclusive(v___x_5755_);
if (v_isSharedCheck_5780_ == 0)
{
v___x_5771_ = v___x_5755_;
v_isShared_5772_ = v_isSharedCheck_5780_;
goto v_resetjp_5770_;
}
else
{
lean_inc(v_a_5769_);
lean_dec(v___x_5755_);
v___x_5771_ = lean_box(0);
v_isShared_5772_ = v_isSharedCheck_5780_;
goto v_resetjp_5770_;
}
v_resetjp_5770_:
{
lean_object* v___x_5773_; lean_object* v___x_5774_; lean_object* v___x_5775_; lean_object* v___x_5776_; lean_object* v___x_5778_; 
v___x_5773_ = lean_io_error_to_string(v_a_5769_);
v___x_5774_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_5774_, 0, v___x_5773_);
v___x_5775_ = l_Lean_MessageData_ofFormat(v___x_5774_);
v___x_5776_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5776_, 0, v_ref_5754_);
lean_ctor_set(v___x_5776_, 1, v___x_5775_);
if (v_isShared_5772_ == 0)
{
lean_ctor_set(v___x_5771_, 0, v___x_5776_);
v___x_5778_ = v___x_5771_;
goto v_reusejp_5777_;
}
else
{
lean_object* v_reuseFailAlloc_5779_; 
v_reuseFailAlloc_5779_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5779_, 0, v___x_5776_);
v___x_5778_ = v_reuseFailAlloc_5779_;
goto v_reusejp_5777_;
}
v_reusejp_5777_:
{
return v___x_5778_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Completion_optionCompletion___lam__1___boxed(lean_object* v_completionInfoPos_5781_, lean_object* v_uri_5782_, lean_object* v_pos_5783_, lean_object* v_stx_5784_, lean_object* v_caps_5785_, lean_object* v_ctx_5786_, lean_object* v___y_5787_, lean_object* v___y_5788_, lean_object* v___y_5789_, lean_object* v___y_5790_, lean_object* v___y_5791_){
_start:
{
lean_object* v_res_5792_; 
v_res_5792_ = l_Lean_Server_Completion_optionCompletion___lam__1(v_completionInfoPos_5781_, v_uri_5782_, v_pos_5783_, v_stx_5784_, v_caps_5785_, v_ctx_5786_, v___y_5787_, v___y_5788_, v___y_5789_, v___y_5790_);
lean_dec(v___y_5790_);
lean_dec(v___y_5788_);
lean_dec_ref(v___y_5787_);
lean_dec_ref(v_caps_5785_);
lean_dec(v_stx_5784_);
return v_res_5792_;
}
}
static lean_object* _init_l_Lean_Server_Completion_optionCompletion___closed__0(void){
_start:
{
lean_object* v___x_5793_; 
v___x_5793_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_5793_;
}
}
static lean_object* _init_l_Lean_Server_Completion_optionCompletion___closed__1(void){
_start:
{
lean_object* v___x_5794_; lean_object* v___x_5795_; 
v___x_5794_ = lean_obj_once(&l_Lean_Server_Completion_optionCompletion___closed__0, &l_Lean_Server_Completion_optionCompletion___closed__0_once, _init_l_Lean_Server_Completion_optionCompletion___closed__0);
v___x_5795_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5795_, 0, v___x_5794_);
return v___x_5795_;
}
}
static lean_object* _init_l_Lean_Server_Completion_optionCompletion___closed__2(void){
_start:
{
lean_object* v___x_5796_; lean_object* v___x_5797_; lean_object* v___x_5798_; 
v___x_5796_ = lean_unsigned_to_nat(32u);
v___x_5797_ = lean_mk_empty_array_with_capacity(v___x_5796_);
v___x_5798_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5798_, 0, v___x_5797_);
return v___x_5798_;
}
}
static lean_object* _init_l_Lean_Server_Completion_optionCompletion___closed__3(void){
_start:
{
size_t v___x_5799_; lean_object* v___x_5800_; lean_object* v___x_5801_; lean_object* v___x_5802_; lean_object* v___x_5803_; lean_object* v___x_5804_; 
v___x_5799_ = ((size_t)5ULL);
v___x_5800_ = lean_unsigned_to_nat(0u);
v___x_5801_ = lean_unsigned_to_nat(32u);
v___x_5802_ = lean_mk_empty_array_with_capacity(v___x_5801_);
v___x_5803_ = lean_obj_once(&l_Lean_Server_Completion_optionCompletion___closed__2, &l_Lean_Server_Completion_optionCompletion___closed__2_once, _init_l_Lean_Server_Completion_optionCompletion___closed__2);
v___x_5804_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_5804_, 0, v___x_5803_);
lean_ctor_set(v___x_5804_, 1, v___x_5802_);
lean_ctor_set(v___x_5804_, 2, v___x_5800_);
lean_ctor_set(v___x_5804_, 3, v___x_5800_);
lean_ctor_set_usize(v___x_5804_, 4, v___x_5799_);
return v___x_5804_;
}
}
static lean_object* _init_l_Lean_Server_Completion_optionCompletion___closed__4(void){
_start:
{
lean_object* v___x_5805_; lean_object* v___x_5806_; lean_object* v___x_5807_; lean_object* v___x_5808_; 
v___x_5805_ = lean_box(1);
v___x_5806_ = lean_obj_once(&l_Lean_Server_Completion_optionCompletion___closed__3, &l_Lean_Server_Completion_optionCompletion___closed__3_once, _init_l_Lean_Server_Completion_optionCompletion___closed__3);
v___x_5807_ = lean_obj_once(&l_Lean_Server_Completion_optionCompletion___closed__1, &l_Lean_Server_Completion_optionCompletion___closed__1_once, _init_l_Lean_Server_Completion_optionCompletion___closed__1);
v___x_5808_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_5808_, 0, v___x_5807_);
lean_ctor_set(v___x_5808_, 1, v___x_5806_);
lean_ctor_set(v___x_5808_, 2, v___x_5805_);
return v___x_5808_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Completion_optionCompletion(lean_object* v_uri_5809_, lean_object* v_pos_5810_, lean_object* v_completionInfoPos_5811_, lean_object* v_ctx_5812_, lean_object* v_stx_5813_, lean_object* v_caps_5814_){
_start:
{
lean_object* v___f_5816_; lean_object* v___x_5817_; lean_object* v___x_5818_; 
lean_inc_ref(v_ctx_5812_);
v___f_5816_ = lean_alloc_closure((void*)(l_Lean_Server_Completion_optionCompletion___lam__1___boxed), 11, 6);
lean_closure_set(v___f_5816_, 0, v_completionInfoPos_5811_);
lean_closure_set(v___f_5816_, 1, v_uri_5809_);
lean_closure_set(v___f_5816_, 2, v_pos_5810_);
lean_closure_set(v___f_5816_, 3, v_stx_5813_);
lean_closure_set(v___f_5816_, 4, v_caps_5814_);
lean_closure_set(v___f_5816_, 5, v_ctx_5812_);
v___x_5817_ = lean_obj_once(&l_Lean_Server_Completion_optionCompletion___closed__4, &l_Lean_Server_Completion_optionCompletion___closed__4_once, _init_l_Lean_Server_Completion_optionCompletion___closed__4);
v___x_5818_ = l_Lean_Elab_ContextInfo_runMetaM___redArg(v_ctx_5812_, v___x_5817_, v___f_5816_);
return v___x_5818_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Completion_optionCompletion___boxed(lean_object* v_uri_5819_, lean_object* v_pos_5820_, lean_object* v_completionInfoPos_5821_, lean_object* v_ctx_5822_, lean_object* v_stx_5823_, lean_object* v_caps_5824_, lean_object* v_a_5825_){
_start:
{
lean_object* v_res_5826_; 
v_res_5826_ = l_Lean_Server_Completion_optionCompletion(v_uri_5819_, v_pos_5820_, v_completionInfoPos_5821_, v_ctx_5822_, v_stx_5823_, v_caps_5824_);
return v_res_5826_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Completion_errorNameCompletion___lam__0(lean_object* v_completionInfoPos_5836_, lean_object* v_uri_5837_, lean_object* v_pos_5838_, lean_object* v_name_5839_, lean_object* v_explan_5840_, lean_object* v_textEdit_x3f_5841_){
_start:
{
lean_object* v_metadata_5842_; lean_object* v_removedVersion_x3f_5843_; uint8_t v___x_5844_; lean_object* v___x_5845_; lean_object* v___x_5846_; uint8_t v___x_5847_; lean_object* v___x_5848_; lean_object* v___x_5849_; lean_object* v___x_5850_; lean_object* v___x_5851_; lean_object* v___x_5852_; lean_object* v___x_5853_; lean_object* v___x_5854_; lean_object* v___x_5855_; 
v_metadata_5842_ = lean_ctor_get(v_explan_5840_, 1);
v_removedVersion_x3f_5843_ = lean_ctor_get(v_metadata_5842_, 2);
v___x_5844_ = 1;
v___x_5845_ = l_Lean_Name_toString(v_name_5839_, v___x_5844_);
v___x_5846_ = ((lean_object*)(l_Lean_Server_Completion_errorNameCompletion___lam__0___closed__1));
v___x_5847_ = 1;
v___x_5848_ = l_Lean_ErrorExplanation_summaryWithSeverity(v_explan_5840_);
v___x_5849_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_5849_, 0, v___x_5848_);
lean_ctor_set_uint8(v___x_5849_, sizeof(void*)*1, v___x_5847_);
v___x_5850_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5850_, 0, v___x_5849_);
v___x_5851_ = ((lean_object*)(l_Lean_Server_Completion_optionCompletion___lam__0___closed__2));
v___x_5852_ = lean_box(0);
v___x_5853_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5853_, 0, v_completionInfoPos_5836_);
v___x_5854_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_5854_, 0, v_uri_5837_);
lean_ctor_set(v___x_5854_, 1, v_pos_5838_);
lean_ctor_set(v___x_5854_, 2, v___x_5853_);
lean_ctor_set(v___x_5854_, 3, v___x_5852_);
v___x_5855_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5855_, 0, v___x_5854_);
if (lean_obj_tag(v_removedVersion_x3f_5843_) == 0)
{
lean_object* v___x_5856_; 
v___x_5856_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_5856_, 0, v___x_5845_);
lean_ctor_set(v___x_5856_, 1, v___x_5846_);
lean_ctor_set(v___x_5856_, 2, v___x_5850_);
lean_ctor_set(v___x_5856_, 3, v___x_5851_);
lean_ctor_set(v___x_5856_, 4, v_textEdit_x3f_5841_);
lean_ctor_set(v___x_5856_, 5, v___x_5852_);
lean_ctor_set(v___x_5856_, 6, v___x_5855_);
lean_ctor_set(v___x_5856_, 7, v___x_5852_);
return v___x_5856_;
}
else
{
lean_object* v___x_5857_; lean_object* v___x_5858_; 
v___x_5857_ = ((lean_object*)(l_Lean_Server_Completion_errorNameCompletion___lam__0___closed__3));
v___x_5858_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_5858_, 0, v___x_5845_);
lean_ctor_set(v___x_5858_, 1, v___x_5846_);
lean_ctor_set(v___x_5858_, 2, v___x_5850_);
lean_ctor_set(v___x_5858_, 3, v___x_5851_);
lean_ctor_set(v___x_5858_, 4, v_textEdit_x3f_5841_);
lean_ctor_set(v___x_5858_, 5, v___x_5852_);
lean_ctor_set(v___x_5858_, 6, v___x_5855_);
lean_ctor_set(v___x_5858_, 7, v___x_5857_);
return v___x_5858_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Completion_errorNameCompletion___lam__0___boxed(lean_object* v_completionInfoPos_5859_, lean_object* v_uri_5860_, lean_object* v_pos_5861_, lean_object* v_name_5862_, lean_object* v_explan_5863_, lean_object* v_textEdit_x3f_5864_){
_start:
{
lean_object* v_res_5865_; 
v_res_5865_ = l_Lean_Server_Completion_errorNameCompletion___lam__0(v_completionInfoPos_5859_, v_uri_5860_, v_pos_5861_, v_name_5862_, v_explan_5863_, v_textEdit_x3f_5864_);
lean_dec_ref(v_explan_5863_);
return v_res_5865_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0_spec__0_spec__1(lean_object* v_init_5866_, lean_object* v_x_5867_){
_start:
{
if (lean_obj_tag(v_x_5867_) == 0)
{
lean_object* v_k_5868_; lean_object* v_v_5869_; lean_object* v_l_5870_; lean_object* v_r_5871_; lean_object* v___x_5872_; lean_object* v___x_5873_; lean_object* v___x_5874_; 
v_k_5868_ = lean_ctor_get(v_x_5867_, 1);
v_v_5869_ = lean_ctor_get(v_x_5867_, 2);
v_l_5870_ = lean_ctor_get(v_x_5867_, 3);
v_r_5871_ = lean_ctor_get(v_x_5867_, 4);
v___x_5872_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0_spec__0_spec__1(v_init_5866_, v_l_5870_);
lean_inc(v_v_5869_);
lean_inc(v_k_5868_);
v___x_5873_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5873_, 0, v_k_5868_);
lean_ctor_set(v___x_5873_, 1, v_v_5869_);
v___x_5874_ = lean_array_push(v___x_5872_, v___x_5873_);
v_init_5866_ = v___x_5874_;
v_x_5867_ = v_r_5871_;
goto _start;
}
else
{
return v_init_5866_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0_spec__0_spec__1___boxed(lean_object* v_init_5876_, lean_object* v_x_5877_){
_start:
{
lean_object* v_res_5878_; 
v_res_5878_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0_spec__0_spec__1(v_init_5876_, v_x_5877_);
lean_dec(v_x_5877_);
return v_res_5878_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0_spec__1_spec__3___redArg(lean_object* v_hi_5879_, lean_object* v_pivot_5880_, lean_object* v_as_5881_, lean_object* v_i_5882_, lean_object* v_k_5883_){
_start:
{
uint8_t v___x_5884_; 
v___x_5884_ = lean_nat_dec_lt(v_k_5883_, v_hi_5879_);
if (v___x_5884_ == 0)
{
lean_object* v___x_5885_; lean_object* v___x_5886_; 
lean_dec(v_k_5883_);
lean_dec_ref(v_pivot_5880_);
v___x_5885_ = lean_array_fswap(v_as_5881_, v_i_5882_, v_hi_5879_);
v___x_5886_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5886_, 0, v_i_5882_);
lean_ctor_set(v___x_5886_, 1, v___x_5885_);
return v___x_5886_;
}
else
{
lean_object* v___x_5887_; lean_object* v_fst_5888_; lean_object* v_fst_5889_; lean_object* v___x_5890_; lean_object* v___x_5891_; uint8_t v___x_5892_; 
v___x_5887_ = lean_array_fget_borrowed(v_as_5881_, v_k_5883_);
v_fst_5888_ = lean_ctor_get(v___x_5887_, 0);
v_fst_5889_ = lean_ctor_get(v_pivot_5880_, 0);
lean_inc(v_fst_5888_);
v___x_5890_ = l_Lean_Name_toString(v_fst_5888_, v___x_5884_);
lean_inc(v_fst_5889_);
v___x_5891_ = l_Lean_Name_toString(v_fst_5889_, v___x_5884_);
v___x_5892_ = lean_string_dec_lt(v___x_5890_, v___x_5891_);
lean_dec_ref(v___x_5891_);
lean_dec_ref(v___x_5890_);
if (v___x_5892_ == 0)
{
lean_object* v___x_5893_; lean_object* v___x_5894_; 
v___x_5893_ = lean_unsigned_to_nat(1u);
v___x_5894_ = lean_nat_add(v_k_5883_, v___x_5893_);
lean_dec(v_k_5883_);
v_k_5883_ = v___x_5894_;
goto _start;
}
else
{
lean_object* v___x_5896_; lean_object* v___x_5897_; lean_object* v___x_5898_; lean_object* v___x_5899_; 
v___x_5896_ = lean_array_fswap(v_as_5881_, v_i_5882_, v_k_5883_);
v___x_5897_ = lean_unsigned_to_nat(1u);
v___x_5898_ = lean_nat_add(v_i_5882_, v___x_5897_);
lean_dec(v_i_5882_);
v___x_5899_ = lean_nat_add(v_k_5883_, v___x_5897_);
lean_dec(v_k_5883_);
v_as_5881_ = v___x_5896_;
v_i_5882_ = v___x_5898_;
v_k_5883_ = v___x_5899_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0_spec__1_spec__3___redArg___boxed(lean_object* v_hi_5901_, lean_object* v_pivot_5902_, lean_object* v_as_5903_, lean_object* v_i_5904_, lean_object* v_k_5905_){
_start:
{
lean_object* v_res_5906_; 
v_res_5906_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0_spec__1_spec__3___redArg(v_hi_5901_, v_pivot_5902_, v_as_5903_, v_i_5904_, v_k_5905_);
lean_dec(v_hi_5901_);
return v_res_5906_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0_spec__1___redArg___lam__0(uint8_t v___x_5907_, lean_object* v_e_5908_, lean_object* v_e_x27_5909_){
_start:
{
lean_object* v_fst_5910_; lean_object* v_fst_5911_; lean_object* v___x_5912_; lean_object* v___x_5913_; uint8_t v___x_5914_; 
v_fst_5910_ = lean_ctor_get(v_e_5908_, 0);
lean_inc(v_fst_5910_);
lean_dec_ref(v_e_5908_);
v_fst_5911_ = lean_ctor_get(v_e_x27_5909_, 0);
lean_inc(v_fst_5911_);
lean_dec_ref(v_e_x27_5909_);
v___x_5912_ = l_Lean_Name_toString(v_fst_5910_, v___x_5907_);
v___x_5913_ = l_Lean_Name_toString(v_fst_5911_, v___x_5907_);
v___x_5914_ = lean_string_dec_lt(v___x_5912_, v___x_5913_);
lean_dec_ref(v___x_5913_);
lean_dec_ref(v___x_5912_);
return v___x_5914_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0_spec__1___redArg___lam__0___boxed(lean_object* v___x_5915_, lean_object* v_e_5916_, lean_object* v_e_x27_5917_){
_start:
{
uint8_t v___x_1619__boxed_5918_; uint8_t v_res_5919_; lean_object* v_r_5920_; 
v___x_1619__boxed_5918_ = lean_unbox(v___x_5915_);
v_res_5919_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0_spec__1___redArg___lam__0(v___x_1619__boxed_5918_, v_e_5916_, v_e_x27_5917_);
v_r_5920_ = lean_box(v_res_5919_);
return v_r_5920_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0_spec__1___redArg(lean_object* v_n_5921_, lean_object* v_as_5922_, lean_object* v_lo_5923_, lean_object* v_hi_5924_){
_start:
{
lean_object* v___y_5926_; uint8_t v___x_5936_; 
v___x_5936_ = lean_nat_dec_lt(v_lo_5923_, v_hi_5924_);
if (v___x_5936_ == 0)
{
lean_dec(v_lo_5923_);
return v_as_5922_;
}
else
{
lean_object* v___x_5937_; lean_object* v___x_5938_; lean_object* v_mid_5939_; lean_object* v___y_5941_; lean_object* v___y_5947_; lean_object* v___x_5952_; lean_object* v___x_5953_; uint8_t v___x_5954_; 
v___x_5937_ = lean_nat_add(v_lo_5923_, v_hi_5924_);
v___x_5938_ = lean_unsigned_to_nat(1u);
v_mid_5939_ = lean_nat_shiftr(v___x_5937_, v___x_5938_);
lean_dec(v___x_5937_);
v___x_5952_ = lean_array_fget_borrowed(v_as_5922_, v_mid_5939_);
v___x_5953_ = lean_array_fget_borrowed(v_as_5922_, v_lo_5923_);
lean_inc(v___x_5953_);
lean_inc(v___x_5952_);
v___x_5954_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0_spec__1___redArg___lam__0(v___x_5936_, v___x_5952_, v___x_5953_);
if (v___x_5954_ == 0)
{
v___y_5947_ = v_as_5922_;
goto v___jp_5946_;
}
else
{
lean_object* v___x_5955_; 
v___x_5955_ = lean_array_fswap(v_as_5922_, v_lo_5923_, v_mid_5939_);
v___y_5947_ = v___x_5955_;
goto v___jp_5946_;
}
v___jp_5940_:
{
lean_object* v___x_5942_; lean_object* v___x_5943_; uint8_t v___x_5944_; 
v___x_5942_ = lean_array_fget_borrowed(v___y_5941_, v_mid_5939_);
v___x_5943_ = lean_array_fget_borrowed(v___y_5941_, v_hi_5924_);
lean_inc(v___x_5943_);
lean_inc(v___x_5942_);
v___x_5944_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0_spec__1___redArg___lam__0(v___x_5936_, v___x_5942_, v___x_5943_);
if (v___x_5944_ == 0)
{
lean_dec(v_mid_5939_);
v___y_5926_ = v___y_5941_;
goto v___jp_5925_;
}
else
{
lean_object* v___x_5945_; 
v___x_5945_ = lean_array_fswap(v___y_5941_, v_mid_5939_, v_hi_5924_);
lean_dec(v_mid_5939_);
v___y_5926_ = v___x_5945_;
goto v___jp_5925_;
}
}
v___jp_5946_:
{
lean_object* v___x_5948_; lean_object* v___x_5949_; uint8_t v___x_5950_; 
v___x_5948_ = lean_array_fget_borrowed(v___y_5947_, v_hi_5924_);
v___x_5949_ = lean_array_fget_borrowed(v___y_5947_, v_lo_5923_);
lean_inc(v___x_5949_);
lean_inc(v___x_5948_);
v___x_5950_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0_spec__1___redArg___lam__0(v___x_5936_, v___x_5948_, v___x_5949_);
if (v___x_5950_ == 0)
{
v___y_5941_ = v___y_5947_;
goto v___jp_5940_;
}
else
{
lean_object* v___x_5951_; 
v___x_5951_ = lean_array_fswap(v___y_5947_, v_lo_5923_, v_hi_5924_);
v___y_5941_ = v___x_5951_;
goto v___jp_5940_;
}
}
}
v___jp_5925_:
{
lean_object* v_pivot_5927_; lean_object* v___x_5928_; lean_object* v_fst_5929_; lean_object* v_snd_5930_; uint8_t v___x_5931_; 
v_pivot_5927_ = lean_array_fget(v___y_5926_, v_hi_5924_);
lean_inc_n(v_lo_5923_, 2);
v___x_5928_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0_spec__1_spec__3___redArg(v_hi_5924_, v_pivot_5927_, v___y_5926_, v_lo_5923_, v_lo_5923_);
v_fst_5929_ = lean_ctor_get(v___x_5928_, 0);
lean_inc(v_fst_5929_);
v_snd_5930_ = lean_ctor_get(v___x_5928_, 1);
lean_inc(v_snd_5930_);
lean_dec_ref(v___x_5928_);
v___x_5931_ = lean_nat_dec_le(v_hi_5924_, v_fst_5929_);
if (v___x_5931_ == 0)
{
lean_object* v___x_5932_; lean_object* v___x_5933_; lean_object* v___x_5934_; 
v___x_5932_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0_spec__1___redArg(v_n_5921_, v_snd_5930_, v_lo_5923_, v_fst_5929_);
v___x_5933_ = lean_unsigned_to_nat(1u);
v___x_5934_ = lean_nat_add(v_fst_5929_, v___x_5933_);
lean_dec(v_fst_5929_);
v_as_5922_ = v___x_5932_;
v_lo_5923_ = v___x_5934_;
goto _start;
}
else
{
lean_dec(v_fst_5929_);
lean_dec(v_lo_5923_);
return v_snd_5930_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0_spec__1___redArg___boxed(lean_object* v_n_5956_, lean_object* v_as_5957_, lean_object* v_lo_5958_, lean_object* v_hi_5959_){
_start:
{
lean_object* v_res_5960_; 
v_res_5960_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0_spec__1___redArg(v_n_5956_, v_as_5957_, v_lo_5958_, v_hi_5959_);
lean_dec(v_hi_5959_);
lean_dec(v_n_5956_);
return v_res_5960_;
}
}
LEAN_EXPORT lean_object* l_Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0___redArg(lean_object* v___y_5963_){
_start:
{
lean_object* v___x_5965_; lean_object* v___x_5966_; lean_object* v_env_5967_; lean_object* v___x_5968_; lean_object* v_toEnvExtension_5969_; lean_object* v_asyncMode_5970_; lean_object* v___x_5971_; lean_object* v___x_5972_; lean_object* v___x_5973_; lean_object* v___x_5974_; lean_object* v___x_5975_; lean_object* v___x_5976_; lean_object* v___y_5978_; lean_object* v___y_5979_; uint8_t v___x_5982_; 
v___x_5965_ = lean_box(1);
v___x_5966_ = lean_st_ref_get(v___y_5963_);
v_env_5967_ = lean_ctor_get(v___x_5966_, 0);
lean_inc_ref(v_env_5967_);
lean_dec(v___x_5966_);
v___x_5968_ = l_Lean_errorExplanationExt;
v_toEnvExtension_5969_ = lean_ctor_get(v___x_5968_, 0);
v_asyncMode_5970_ = lean_ctor_get(v_toEnvExtension_5969_, 2);
v___x_5971_ = lean_obj_once(&l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_matchDecl_x3f___redArg___closed__0, &l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_matchDecl_x3f___redArg___closed__0_once, _init_l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_matchDecl_x3f___redArg___closed__0);
v___x_5972_ = l_Lean_SimplePersistentEnvExtension_getState___redArg(v___x_5965_, v___x_5968_, v_env_5967_, v_asyncMode_5970_, v___x_5971_);
v___x_5973_ = lean_unsigned_to_nat(0u);
v___x_5974_ = ((lean_object*)(l_Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0___redArg___closed__0));
v___x_5975_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0_spec__0_spec__1(v___x_5974_, v___x_5972_);
lean_dec(v___x_5972_);
v___x_5976_ = lean_array_get_size(v___x_5975_);
v___x_5982_ = lean_nat_dec_eq(v___x_5976_, v___x_5973_);
if (v___x_5982_ == 0)
{
lean_object* v___x_5983_; lean_object* v___x_5984_; lean_object* v___y_5986_; uint8_t v___x_5988_; 
v___x_5983_ = lean_unsigned_to_nat(1u);
v___x_5984_ = lean_nat_sub(v___x_5976_, v___x_5983_);
v___x_5988_ = lean_nat_dec_le(v___x_5973_, v___x_5984_);
if (v___x_5988_ == 0)
{
lean_inc(v___x_5984_);
v___y_5986_ = v___x_5984_;
goto v___jp_5985_;
}
else
{
v___y_5986_ = v___x_5973_;
goto v___jp_5985_;
}
v___jp_5985_:
{
uint8_t v___x_5987_; 
v___x_5987_ = lean_nat_dec_le(v___y_5986_, v___x_5984_);
if (v___x_5987_ == 0)
{
lean_dec(v___x_5984_);
lean_inc(v___y_5986_);
v___y_5978_ = v___y_5986_;
v___y_5979_ = v___y_5986_;
goto v___jp_5977_;
}
else
{
v___y_5978_ = v___y_5986_;
v___y_5979_ = v___x_5984_;
goto v___jp_5977_;
}
}
}
else
{
lean_object* v___x_5989_; 
v___x_5989_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5989_, 0, v___x_5975_);
return v___x_5989_;
}
v___jp_5977_:
{
lean_object* v___x_5980_; lean_object* v___x_5981_; 
v___x_5980_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0_spec__1___redArg(v___x_5976_, v___x_5975_, v___y_5978_, v___y_5979_);
lean_dec(v___y_5979_);
v___x_5981_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5981_, 0, v___x_5980_);
return v___x_5981_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0___redArg___boxed(lean_object* v___y_5990_, lean_object* v___y_5991_){
_start:
{
lean_object* v_res_5992_; 
v_res_5992_ = l_Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0___redArg(v___y_5990_);
lean_dec(v___y_5990_);
return v_res_5992_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion___at___00Lean_Server_Completion_errorNameCompletion_spec__1_spec__3(lean_object* v_mkItem_5993_, lean_object* v_stx_5994_, lean_object* v_ctx_5995_, uint8_t v_snd_5996_, lean_object* v_fst_5997_, lean_object* v_caps_5998_, lean_object* v_as_5999_, size_t v_sz_6000_, size_t v_i_6001_, lean_object* v_b_6002_){
_start:
{
lean_object* v_a_6004_; uint8_t v___x_6008_; 
v___x_6008_ = lean_usize_dec_lt(v_i_6001_, v_sz_6000_);
if (v___x_6008_ == 0)
{
lean_dec_ref(v_ctx_5995_);
lean_dec_ref(v_mkItem_5993_);
return v_b_6002_;
}
else
{
lean_object* v_a_6009_; lean_object* v_fst_6010_; lean_object* v_snd_6011_; lean_object* v___x_6013_; uint8_t v_isShared_6014_; uint8_t v_isSharedCheck_6054_; 
v_a_6009_ = lean_array_uget(v_as_5999_, v_i_6001_);
v_fst_6010_ = lean_ctor_get(v_a_6009_, 0);
v_snd_6011_ = lean_ctor_get(v_a_6009_, 1);
v_isSharedCheck_6054_ = !lean_is_exclusive(v_a_6009_);
if (v_isSharedCheck_6054_ == 0)
{
v___x_6013_ = v_a_6009_;
v_isShared_6014_ = v_isSharedCheck_6054_;
goto v_resetjp_6012_;
}
else
{
lean_inc(v_snd_6011_);
lean_inc(v_fst_6010_);
lean_dec(v_a_6009_);
v___x_6013_ = lean_box(0);
v_isShared_6014_ = v_isSharedCheck_6054_;
goto v_resetjp_6012_;
}
v_resetjp_6012_:
{
lean_object* v___y_6016_; lean_object* v___x_6019_; lean_object* v___y_6021_; lean_object* v___y_6022_; uint8_t v___y_6033_; uint8_t v___x_6043_; 
lean_inc(v_fst_6010_);
v___x_6019_ = l_Lean_Name_toString(v_fst_6010_, v___x_6008_);
v___x_6043_ = l_Lean_String_charactersIn(v_fst_5997_, v___x_6019_);
if (v___x_6043_ == 0)
{
lean_dec_ref(v___x_6019_);
lean_del_object(v___x_6013_);
lean_dec(v_snd_6011_);
lean_dec(v_fst_6010_);
v_a_6004_ = v_b_6002_;
goto v___jp_6003_;
}
else
{
lean_object* v_textDocument_x3f_6046_; 
v_textDocument_x3f_6046_ = lean_ctor_get(v_caps_5998_, 0);
if (lean_obj_tag(v_textDocument_x3f_6046_) == 0)
{
goto v___jp_6044_;
}
else
{
lean_object* v_val_6047_; lean_object* v_completion_x3f_6048_; 
v_val_6047_ = lean_ctor_get(v_textDocument_x3f_6046_, 0);
v_completion_x3f_6048_ = lean_ctor_get(v_val_6047_, 0);
if (lean_obj_tag(v_completion_x3f_6048_) == 0)
{
goto v___jp_6044_;
}
else
{
lean_object* v_val_6049_; 
v_val_6049_ = lean_ctor_get(v_completion_x3f_6048_, 0);
if (lean_obj_tag(v_val_6049_) == 0)
{
goto v___jp_6044_;
}
else
{
lean_object* v_val_6050_; 
v_val_6050_ = lean_ctor_get(v_val_6049_, 0);
if (lean_obj_tag(v_val_6050_) == 0)
{
goto v___jp_6044_;
}
else
{
lean_object* v_val_6051_; uint8_t v___x_6052_; 
v_val_6051_ = lean_ctor_get(v_val_6050_, 0);
v___x_6052_ = lean_unbox(v_val_6051_);
if (v___x_6052_ == 0)
{
goto v___jp_6044_;
}
else
{
uint8_t v___x_6053_; 
v___x_6053_ = 0;
v___y_6033_ = v___x_6053_;
goto v___jp_6032_;
}
}
}
}
}
}
v___jp_6015_:
{
lean_object* v___x_6017_; lean_object* v_items_6018_; 
lean_inc_ref(v_mkItem_5993_);
v___x_6017_ = lean_apply_3(v_mkItem_5993_, v_fst_6010_, v_snd_6011_, v___y_6016_);
v_items_6018_ = lean_array_push(v_b_6002_, v___x_6017_);
v_a_6004_ = v_items_6018_;
goto v___jp_6003_;
}
v___jp_6020_:
{
lean_object* v_toCommandContextInfo_6023_; lean_object* v_fileMap_6024_; lean_object* v___x_6025_; lean_object* v___x_6026_; lean_object* v_range_6028_; 
v_toCommandContextInfo_6023_ = lean_ctor_get(v_ctx_5995_, 0);
v_fileMap_6024_ = lean_ctor_get(v_toCommandContextInfo_6023_, 2);
lean_inc_ref_n(v_fileMap_6024_, 2);
v___x_6025_ = l_Lean_FileMap_utf8PosToLspPos(v_fileMap_6024_, v___y_6021_);
lean_dec(v___y_6021_);
v___x_6026_ = l_Lean_FileMap_utf8PosToLspPos(v_fileMap_6024_, v___y_6022_);
lean_dec(v___y_6022_);
if (v_isShared_6014_ == 0)
{
lean_ctor_set(v___x_6013_, 1, v___x_6026_);
lean_ctor_set(v___x_6013_, 0, v___x_6025_);
v_range_6028_ = v___x_6013_;
goto v_reusejp_6027_;
}
else
{
lean_object* v_reuseFailAlloc_6031_; 
v_reuseFailAlloc_6031_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6031_, 0, v___x_6025_);
lean_ctor_set(v_reuseFailAlloc_6031_, 1, v___x_6026_);
v_range_6028_ = v_reuseFailAlloc_6031_;
goto v_reusejp_6027_;
}
v_reusejp_6027_:
{
lean_object* v___x_6029_; lean_object* v___x_6030_; 
lean_inc_ref(v_range_6028_);
v___x_6029_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_6029_, 0, v___x_6019_);
lean_ctor_set(v___x_6029_, 1, v_range_6028_);
lean_ctor_set(v___x_6029_, 2, v_range_6028_);
v___x_6030_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6030_, 0, v___x_6029_);
v___y_6016_ = v___x_6030_;
goto v___jp_6015_;
}
}
v___jp_6032_:
{
lean_object* v___x_6034_; 
v___x_6034_ = l_Lean_Syntax_getRange_x3f(v_stx_5994_, v___y_6033_);
if (lean_obj_tag(v___x_6034_) == 1)
{
lean_object* v_val_6035_; 
v_val_6035_ = lean_ctor_get(v___x_6034_, 0);
lean_inc(v_val_6035_);
lean_dec_ref_known(v___x_6034_, 1);
if (v_snd_5996_ == 0)
{
lean_object* v_start_6036_; lean_object* v_stop_6037_; 
v_start_6036_ = lean_ctor_get(v_val_6035_, 0);
lean_inc(v_start_6036_);
v_stop_6037_ = lean_ctor_get(v_val_6035_, 1);
lean_inc(v_stop_6037_);
lean_dec(v_val_6035_);
v___y_6021_ = v_start_6036_;
v___y_6022_ = v_stop_6037_;
goto v___jp_6020_;
}
else
{
lean_object* v_start_6038_; lean_object* v_stop_6039_; lean_object* v___x_6040_; lean_object* v___x_6041_; 
v_start_6038_ = lean_ctor_get(v_val_6035_, 0);
lean_inc(v_start_6038_);
v_stop_6039_ = lean_ctor_get(v_val_6035_, 1);
lean_inc(v_stop_6039_);
lean_dec(v_val_6035_);
v___x_6040_ = lean_obj_once(&l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion___redArg___lam__0___closed__0, &l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion___redArg___lam__0___closed__0_once, _init_l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion___redArg___lam__0___closed__0);
v___x_6041_ = lean_nat_add(v_stop_6039_, v___x_6040_);
lean_dec(v_stop_6039_);
v___y_6021_ = v_start_6038_;
v___y_6022_ = v___x_6041_;
goto v___jp_6020_;
}
}
else
{
lean_object* v___x_6042_; 
lean_dec(v___x_6034_);
lean_dec_ref(v___x_6019_);
lean_del_object(v___x_6013_);
v___x_6042_ = lean_box(0);
v___y_6016_ = v___x_6042_;
goto v___jp_6015_;
}
}
v___jp_6044_:
{
if (v___x_6043_ == 0)
{
v___y_6033_ = v___x_6043_;
goto v___jp_6032_;
}
else
{
lean_object* v___x_6045_; 
lean_dec_ref(v___x_6019_);
lean_del_object(v___x_6013_);
v___x_6045_ = lean_box(0);
v___y_6016_ = v___x_6045_;
goto v___jp_6015_;
}
}
}
}
v___jp_6003_:
{
size_t v___x_6005_; size_t v___x_6006_; 
v___x_6005_ = ((size_t)1ULL);
v___x_6006_ = lean_usize_add(v_i_6001_, v___x_6005_);
v_i_6001_ = v___x_6006_;
v_b_6002_ = v_a_6004_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion___at___00Lean_Server_Completion_errorNameCompletion_spec__1_spec__3___boxed(lean_object* v_mkItem_6055_, lean_object* v_stx_6056_, lean_object* v_ctx_6057_, lean_object* v_snd_6058_, lean_object* v_fst_6059_, lean_object* v_caps_6060_, lean_object* v_as_6061_, lean_object* v_sz_6062_, lean_object* v_i_6063_, lean_object* v_b_6064_){
_start:
{
uint8_t v_snd_1746__boxed_6065_; size_t v_sz_boxed_6066_; size_t v_i_boxed_6067_; lean_object* v_res_6068_; 
v_snd_1746__boxed_6065_ = lean_unbox(v_snd_6058_);
v_sz_boxed_6066_ = lean_unbox_usize(v_sz_6062_);
lean_dec(v_sz_6062_);
v_i_boxed_6067_ = lean_unbox_usize(v_i_6063_);
lean_dec(v_i_6063_);
v_res_6068_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion___at___00Lean_Server_Completion_errorNameCompletion_spec__1_spec__3(v_mkItem_6055_, v_stx_6056_, v_ctx_6057_, v_snd_1746__boxed_6065_, v_fst_6059_, v_caps_6060_, v_as_6061_, v_sz_boxed_6066_, v_i_boxed_6067_, v_b_6064_);
lean_dec_ref(v_as_6061_);
lean_dec_ref(v_caps_6060_);
lean_dec_ref(v_fst_6059_);
lean_dec(v_stx_6056_);
return v_res_6068_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion___at___00Lean_Server_Completion_errorNameCompletion_spec__1(lean_object* v_entries_6069_, lean_object* v_stx_6070_, lean_object* v_caps_6071_, lean_object* v_ctx_6072_, lean_object* v_mkItem_6073_){
_start:
{
lean_object* v_fst_6075_; uint8_t v_snd_6076_; uint8_t v___x_6081_; lean_object* v___x_6082_; 
v___x_6081_ = 0;
v___x_6082_ = l_Lean_Syntax_getSubstring_x3f(v_stx_6070_, v___x_6081_, v___x_6081_);
if (lean_obj_tag(v___x_6082_) == 0)
{
lean_object* v___x_6083_; 
v___x_6083_ = ((lean_object*)(l_Lean_Server_Completion_fieldIdCompletion___closed__0));
v_fst_6075_ = v___x_6083_;
v_snd_6076_ = v___x_6081_;
goto v___jp_6074_;
}
else
{
lean_object* v_val_6084_; lean_object* v_str_6085_; lean_object* v_startPos_6086_; lean_object* v_stopPos_6087_; uint8_t v___y_6089_; uint8_t v___x_6091_; 
v_val_6084_ = lean_ctor_get(v___x_6082_, 0);
lean_inc(v_val_6084_);
lean_dec_ref_known(v___x_6082_, 1);
v_str_6085_ = lean_ctor_get(v_val_6084_, 0);
lean_inc_ref(v_str_6085_);
v_startPos_6086_ = lean_ctor_get(v_val_6084_, 1);
lean_inc(v_startPos_6086_);
v_stopPos_6087_ = lean_ctor_get(v_val_6084_, 2);
lean_inc(v_stopPos_6087_);
lean_dec(v_val_6084_);
v___x_6091_ = lean_string_utf8_at_end(v_str_6085_, v_stopPos_6087_);
if (v___x_6091_ == 0)
{
uint32_t v___x_6092_; uint32_t v___x_6093_; uint8_t v___x_6094_; 
v___x_6092_ = lean_string_utf8_get(v_str_6085_, v_stopPos_6087_);
v___x_6093_ = 46;
v___x_6094_ = lean_uint32_dec_eq(v___x_6092_, v___x_6093_);
if (v___x_6094_ == 0)
{
v___y_6089_ = v___x_6094_;
goto v___jp_6088_;
}
else
{
lean_object* v___x_6095_; lean_object* v___x_6096_; lean_object* v___x_6097_; 
v___x_6095_ = lean_string_utf8_extract(v_str_6085_, v_startPos_6086_, v_stopPos_6087_);
lean_dec(v_stopPos_6087_);
lean_dec(v_startPos_6086_);
lean_dec_ref(v_str_6085_);
v___x_6096_ = ((lean_object*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion___redArg___closed__0));
v___x_6097_ = lean_string_append(v___x_6095_, v___x_6096_);
v_fst_6075_ = v___x_6097_;
v_snd_6076_ = v___x_6094_;
goto v___jp_6074_;
}
}
else
{
v___y_6089_ = v___x_6081_;
goto v___jp_6088_;
}
v___jp_6088_:
{
lean_object* v___x_6090_; 
v___x_6090_ = lean_string_utf8_extract(v_str_6085_, v_startPos_6086_, v_stopPos_6087_);
lean_dec(v_stopPos_6087_);
lean_dec(v_startPos_6086_);
lean_dec_ref(v_str_6085_);
v_fst_6075_ = v___x_6090_;
v_snd_6076_ = v___y_6089_;
goto v___jp_6074_;
}
}
v___jp_6074_:
{
lean_object* v_items_6077_; size_t v_sz_6078_; size_t v___x_6079_; lean_object* v___x_6080_; 
v_items_6077_ = ((lean_object*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_runM___closed__0));
v_sz_6078_ = lean_array_size(v_entries_6069_);
v___x_6079_ = ((size_t)0ULL);
v___x_6080_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion___at___00Lean_Server_Completion_errorNameCompletion_spec__1_spec__3(v_mkItem_6073_, v_stx_6070_, v_ctx_6072_, v_snd_6076_, v_fst_6075_, v_caps_6071_, v_entries_6069_, v_sz_6078_, v___x_6079_, v_items_6077_);
lean_dec_ref(v_fst_6075_);
return v___x_6080_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion___at___00Lean_Server_Completion_errorNameCompletion_spec__1___boxed(lean_object* v_entries_6098_, lean_object* v_stx_6099_, lean_object* v_caps_6100_, lean_object* v_ctx_6101_, lean_object* v_mkItem_6102_){
_start:
{
lean_object* v_res_6103_; 
v_res_6103_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion___at___00Lean_Server_Completion_errorNameCompletion_spec__1(v_entries_6098_, v_stx_6099_, v_caps_6100_, v_ctx_6101_, v_mkItem_6102_);
lean_dec_ref(v_caps_6100_);
lean_dec(v_stx_6099_);
lean_dec_ref(v_entries_6098_);
return v_res_6103_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Completion_errorNameCompletion___lam__1(lean_object* v_partialId_6104_, lean_object* v_caps_6105_, lean_object* v_ctx_6106_, lean_object* v___f_6107_, lean_object* v___y_6108_, lean_object* v___y_6109_, lean_object* v___y_6110_, lean_object* v___y_6111_){
_start:
{
lean_object* v___x_6113_; lean_object* v_a_6114_; lean_object* v___x_6116_; uint8_t v_isShared_6117_; uint8_t v_isSharedCheck_6122_; 
v___x_6113_ = l_Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0___redArg(v___y_6111_);
v_a_6114_ = lean_ctor_get(v___x_6113_, 0);
v_isSharedCheck_6122_ = !lean_is_exclusive(v___x_6113_);
if (v_isSharedCheck_6122_ == 0)
{
v___x_6116_ = v___x_6113_;
v_isShared_6117_ = v_isSharedCheck_6122_;
goto v_resetjp_6115_;
}
else
{
lean_inc(v_a_6114_);
lean_dec(v___x_6113_);
v___x_6116_ = lean_box(0);
v_isShared_6117_ = v_isSharedCheck_6122_;
goto v_resetjp_6115_;
}
v_resetjp_6115_:
{
lean_object* v___x_6118_; lean_object* v___x_6120_; 
v___x_6118_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion___at___00Lean_Server_Completion_errorNameCompletion_spec__1(v_a_6114_, v_partialId_6104_, v_caps_6105_, v_ctx_6106_, v___f_6107_);
lean_dec(v_a_6114_);
if (v_isShared_6117_ == 0)
{
lean_ctor_set(v___x_6116_, 0, v___x_6118_);
v___x_6120_ = v___x_6116_;
goto v_reusejp_6119_;
}
else
{
lean_object* v_reuseFailAlloc_6121_; 
v_reuseFailAlloc_6121_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6121_, 0, v___x_6118_);
v___x_6120_ = v_reuseFailAlloc_6121_;
goto v_reusejp_6119_;
}
v_reusejp_6119_:
{
return v___x_6120_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Completion_errorNameCompletion___lam__1___boxed(lean_object* v_partialId_6123_, lean_object* v_caps_6124_, lean_object* v_ctx_6125_, lean_object* v___f_6126_, lean_object* v___y_6127_, lean_object* v___y_6128_, lean_object* v___y_6129_, lean_object* v___y_6130_, lean_object* v___y_6131_){
_start:
{
lean_object* v_res_6132_; 
v_res_6132_ = l_Lean_Server_Completion_errorNameCompletion___lam__1(v_partialId_6123_, v_caps_6124_, v_ctx_6125_, v___f_6126_, v___y_6127_, v___y_6128_, v___y_6129_, v___y_6130_);
lean_dec(v___y_6130_);
lean_dec_ref(v___y_6129_);
lean_dec(v___y_6128_);
lean_dec_ref(v___y_6127_);
lean_dec_ref(v_caps_6124_);
lean_dec(v_partialId_6123_);
return v_res_6132_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Completion_errorNameCompletion(lean_object* v_uri_6133_, lean_object* v_pos_6134_, lean_object* v_completionInfoPos_6135_, lean_object* v_ctx_6136_, lean_object* v_partialId_6137_, lean_object* v_caps_6138_){
_start:
{
lean_object* v___f_6140_; lean_object* v___f_6141_; lean_object* v___x_6142_; lean_object* v___x_6143_; lean_object* v___x_6144_; lean_object* v___x_6145_; 
v___f_6140_ = lean_alloc_closure((void*)(l_Lean_Server_Completion_errorNameCompletion___lam__0___boxed), 6, 3);
lean_closure_set(v___f_6140_, 0, v_completionInfoPos_6135_);
lean_closure_set(v___f_6140_, 1, v_uri_6133_);
lean_closure_set(v___f_6140_, 2, v_pos_6134_);
lean_inc_ref(v_ctx_6136_);
v___f_6141_ = lean_alloc_closure((void*)(l_Lean_Server_Completion_errorNameCompletion___lam__1___boxed), 9, 4);
lean_closure_set(v___f_6141_, 0, v_partialId_6137_);
lean_closure_set(v___f_6141_, 1, v_caps_6138_);
lean_closure_set(v___f_6141_, 2, v_ctx_6136_);
lean_closure_set(v___f_6141_, 3, v___f_6140_);
v___x_6142_ = lean_unsigned_to_nat(32u);
v___x_6143_ = lean_mk_empty_array_with_capacity(v___x_6142_);
lean_dec_ref(v___x_6143_);
v___x_6144_ = lean_obj_once(&l_Lean_Server_Completion_optionCompletion___closed__4, &l_Lean_Server_Completion_optionCompletion___closed__4_once, _init_l_Lean_Server_Completion_optionCompletion___closed__4);
v___x_6145_ = l_Lean_Elab_ContextInfo_runMetaM___redArg(v_ctx_6136_, v___x_6144_, v___f_6141_);
return v___x_6145_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Completion_errorNameCompletion___boxed(lean_object* v_uri_6146_, lean_object* v_pos_6147_, lean_object* v_completionInfoPos_6148_, lean_object* v_ctx_6149_, lean_object* v_partialId_6150_, lean_object* v_caps_6151_, lean_object* v_a_6152_){
_start:
{
lean_object* v_res_6153_; 
v_res_6153_ = l_Lean_Server_Completion_errorNameCompletion(v_uri_6146_, v_pos_6147_, v_completionInfoPos_6148_, v_ctx_6149_, v_partialId_6150_, v_caps_6151_);
return v_res_6153_;
}
}
LEAN_EXPORT lean_object* l_Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0(lean_object* v___y_6154_, lean_object* v___y_6155_, lean_object* v___y_6156_, lean_object* v___y_6157_){
_start:
{
lean_object* v___x_6159_; 
v___x_6159_ = l_Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0___redArg(v___y_6157_);
return v___x_6159_;
}
}
LEAN_EXPORT lean_object* l_Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0___boxed(lean_object* v___y_6160_, lean_object* v___y_6161_, lean_object* v___y_6162_, lean_object* v___y_6163_, lean_object* v___y_6164_){
_start:
{
lean_object* v_res_6165_; 
v_res_6165_ = l_Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0(v___y_6160_, v___y_6161_, v___y_6162_, v___y_6163_);
lean_dec(v___y_6163_);
lean_dec_ref(v___y_6162_);
lean_dec(v___y_6161_);
lean_dec_ref(v___y_6160_);
return v_res_6165_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0_spec__0(lean_object* v_init_6166_, lean_object* v_t_6167_){
_start:
{
lean_object* v___x_6168_; 
v___x_6168_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0_spec__0_spec__1(v_init_6166_, v_t_6167_);
return v___x_6168_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0_spec__0___boxed(lean_object* v_init_6169_, lean_object* v_t_6170_){
_start:
{
lean_object* v_res_6171_; 
v_res_6171_ = l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0_spec__0(v_init_6169_, v_t_6170_);
lean_dec(v_t_6170_);
return v_res_6171_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0_spec__1(lean_object* v_n_6172_, lean_object* v_as_6173_, lean_object* v_lo_6174_, lean_object* v_hi_6175_, lean_object* v_w_6176_, lean_object* v_hlo_6177_, lean_object* v_hhi_6178_){
_start:
{
lean_object* v___x_6179_; 
v___x_6179_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0_spec__1___redArg(v_n_6172_, v_as_6173_, v_lo_6174_, v_hi_6175_);
return v___x_6179_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0_spec__1___boxed(lean_object* v_n_6180_, lean_object* v_as_6181_, lean_object* v_lo_6182_, lean_object* v_hi_6183_, lean_object* v_w_6184_, lean_object* v_hlo_6185_, lean_object* v_hhi_6186_){
_start:
{
lean_object* v_res_6187_; 
v_res_6187_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0_spec__1(v_n_6180_, v_as_6181_, v_lo_6182_, v_hi_6183_, v_w_6184_, v_hlo_6185_, v_hhi_6186_);
lean_dec(v_hi_6183_);
lean_dec(v_n_6180_);
return v_res_6187_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0_spec__1_spec__3(lean_object* v_n_6188_, lean_object* v_lo_6189_, lean_object* v_hi_6190_, lean_object* v_hhi_6191_, lean_object* v_pivot_6192_, lean_object* v_as_6193_, lean_object* v_i_6194_, lean_object* v_k_6195_, lean_object* v_ilo_6196_, lean_object* v_ik_6197_, lean_object* v_w_6198_){
_start:
{
lean_object* v___x_6199_; 
v___x_6199_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0_spec__1_spec__3___redArg(v_hi_6190_, v_pivot_6192_, v_as_6193_, v_i_6194_, v_k_6195_);
return v___x_6199_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0_spec__1_spec__3___boxed(lean_object* v_n_6200_, lean_object* v_lo_6201_, lean_object* v_hi_6202_, lean_object* v_hhi_6203_, lean_object* v_pivot_6204_, lean_object* v_as_6205_, lean_object* v_i_6206_, lean_object* v_k_6207_, lean_object* v_ilo_6208_, lean_object* v_ik_6209_, lean_object* v_w_6210_){
_start:
{
lean_object* v_res_6211_; 
v_res_6211_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0_spec__1_spec__3(v_n_6200_, v_lo_6201_, v_hi_6202_, v_hhi_6203_, v_pivot_6204_, v_as_6205_, v_i_6206_, v_k_6207_, v_ilo_6208_, v_ik_6209_, v_w_6210_);
lean_dec(v_hi_6202_);
lean_dec(v_lo_6201_);
lean_dec(v_n_6200_);
return v_res_6211_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_Completion_tacticCompletion_spec__0(lean_object* v_completionInfoPos_6212_, lean_object* v_uri_6213_, lean_object* v_pos_6214_, size_t v_sz_6215_, size_t v_i_6216_, lean_object* v_bs_6217_){
_start:
{
uint8_t v___x_6218_; 
v___x_6218_ = lean_usize_dec_lt(v_i_6216_, v_sz_6215_);
if (v___x_6218_ == 0)
{
lean_object* v___x_6219_; 
lean_dec_ref(v_pos_6214_);
lean_dec_ref(v_uri_6213_);
lean_dec(v_completionInfoPos_6212_);
v___x_6219_ = l_unsafeCast___redArg(v_bs_6217_);
lean_dec_ref(v_bs_6217_);
return v___x_6219_;
}
else
{
lean_object* v_v_6220_; lean_object* v___x_6221_; lean_object* v_userName_6222_; lean_object* v_docString_6223_; lean_object* v___x_6224_; lean_object* v_bs_x27_6225_; lean_object* v___x_6226_; lean_object* v___y_6228_; 
v_v_6220_ = lean_array_uget_borrowed(v_bs_6217_, v_i_6216_);
v___x_6221_ = l_unsafeCast___redArg(v_v_6220_);
v_userName_6222_ = lean_ctor_get(v___x_6221_, 1);
lean_inc_ref(v_userName_6222_);
v_docString_6223_ = lean_ctor_get(v___x_6221_, 3);
lean_inc(v_docString_6223_);
lean_dec(v___x_6221_);
v___x_6224_ = lean_unsigned_to_nat(0u);
v_bs_x27_6225_ = lean_array_uset(v_bs_6217_, v_i_6216_, v___x_6224_);
v___x_6226_ = lean_box(0);
if (lean_obj_tag(v_docString_6223_) == 0)
{
v___y_6228_ = v___x_6226_;
goto v___jp_6227_;
}
else
{
lean_object* v_val_6239_; lean_object* v___x_6241_; uint8_t v_isShared_6242_; uint8_t v_isSharedCheck_6248_; 
v_val_6239_ = lean_ctor_get(v_docString_6223_, 0);
v_isSharedCheck_6248_ = !lean_is_exclusive(v_docString_6223_);
if (v_isSharedCheck_6248_ == 0)
{
v___x_6241_ = v_docString_6223_;
v_isShared_6242_ = v_isSharedCheck_6248_;
goto v_resetjp_6240_;
}
else
{
lean_inc(v_val_6239_);
lean_dec(v_docString_6223_);
v___x_6241_ = lean_box(0);
v_isShared_6242_ = v_isSharedCheck_6248_;
goto v_resetjp_6240_;
}
v_resetjp_6240_:
{
uint8_t v___x_6243_; lean_object* v___x_6244_; lean_object* v___x_6246_; 
v___x_6243_ = 1;
v___x_6244_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_6244_, 0, v_val_6239_);
lean_ctor_set_uint8(v___x_6244_, sizeof(void*)*1, v___x_6243_);
if (v_isShared_6242_ == 0)
{
lean_ctor_set(v___x_6241_, 0, v___x_6244_);
v___x_6246_ = v___x_6241_;
goto v_reusejp_6245_;
}
else
{
lean_object* v_reuseFailAlloc_6247_; 
v_reuseFailAlloc_6247_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6247_, 0, v___x_6244_);
v___x_6246_ = v_reuseFailAlloc_6247_;
goto v_reusejp_6245_;
}
v_reusejp_6245_:
{
v___y_6228_ = v___x_6246_;
goto v___jp_6227_;
}
}
}
v___jp_6227_:
{
lean_object* v___x_6229_; lean_object* v___x_6230_; lean_object* v___x_6231_; lean_object* v___x_6232_; lean_object* v___x_6233_; size_t v___x_6234_; size_t v___x_6235_; lean_object* v___x_6236_; lean_object* v___x_6237_; 
v___x_6229_ = ((lean_object*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addKeywordCompletionItem___redArg___closed__2));
lean_inc(v_completionInfoPos_6212_);
v___x_6230_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6230_, 0, v_completionInfoPos_6212_);
lean_inc_ref(v_pos_6214_);
lean_inc_ref(v_uri_6213_);
v___x_6231_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_6231_, 0, v_uri_6213_);
lean_ctor_set(v___x_6231_, 1, v_pos_6214_);
lean_ctor_set(v___x_6231_, 2, v___x_6230_);
lean_ctor_set(v___x_6231_, 3, v___x_6226_);
v___x_6232_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6232_, 0, v___x_6231_);
v___x_6233_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_6233_, 0, v_userName_6222_);
lean_ctor_set(v___x_6233_, 1, v___x_6226_);
lean_ctor_set(v___x_6233_, 2, v___y_6228_);
lean_ctor_set(v___x_6233_, 3, v___x_6229_);
lean_ctor_set(v___x_6233_, 4, v___x_6226_);
lean_ctor_set(v___x_6233_, 5, v___x_6226_);
lean_ctor_set(v___x_6233_, 6, v___x_6232_);
lean_ctor_set(v___x_6233_, 7, v___x_6226_);
v___x_6234_ = ((size_t)1ULL);
v___x_6235_ = lean_usize_add(v_i_6216_, v___x_6234_);
v___x_6236_ = l_unsafeCast___redArg(v___x_6233_);
lean_dec_ref_known(v___x_6233_, 8);
v___x_6237_ = lean_array_uset(v_bs_x27_6225_, v_i_6216_, v___x_6236_);
v_i_6216_ = v___x_6235_;
v_bs_6217_ = v___x_6237_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_Completion_tacticCompletion_spec__0___boxed(lean_object* v_completionInfoPos_6249_, lean_object* v_uri_6250_, lean_object* v_pos_6251_, lean_object* v_sz_6252_, lean_object* v_i_6253_, lean_object* v_bs_6254_){
_start:
{
size_t v_sz_boxed_6255_; size_t v_i_boxed_6256_; lean_object* v_res_6257_; 
v_sz_boxed_6255_ = lean_unbox_usize(v_sz_6252_);
lean_dec(v_sz_6252_);
v_i_boxed_6256_ = lean_unbox_usize(v_i_6253_);
lean_dec(v_i_6253_);
v_res_6257_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_Completion_tacticCompletion_spec__0(v_completionInfoPos_6249_, v_uri_6250_, v_pos_6251_, v_sz_boxed_6255_, v_i_boxed_6256_, v_bs_6254_);
return v_res_6257_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Completion_tacticCompletion___lam__0(uint8_t v___x_6258_, lean_object* v_completionInfoPos_6259_, lean_object* v_uri_6260_, lean_object* v_pos_6261_, lean_object* v___y_6262_, lean_object* v___y_6263_, lean_object* v___y_6264_, lean_object* v___y_6265_){
_start:
{
lean_object* v___x_6267_; 
v___x_6267_ = l_Lean_Elab_Tactic_Doc_allTacticDocs(v___x_6258_, v___y_6262_, v___y_6263_, v___y_6264_, v___y_6265_);
if (lean_obj_tag(v___x_6267_) == 0)
{
lean_object* v_a_6268_; lean_object* v___x_6270_; uint8_t v_isShared_6271_; uint8_t v_isSharedCheck_6280_; 
v_a_6268_ = lean_ctor_get(v___x_6267_, 0);
v_isSharedCheck_6280_ = !lean_is_exclusive(v___x_6267_);
if (v_isSharedCheck_6280_ == 0)
{
v___x_6270_ = v___x_6267_;
v_isShared_6271_ = v_isSharedCheck_6280_;
goto v_resetjp_6269_;
}
else
{
lean_inc(v_a_6268_);
lean_dec(v___x_6267_);
v___x_6270_ = lean_box(0);
v_isShared_6271_ = v_isSharedCheck_6280_;
goto v_resetjp_6269_;
}
v_resetjp_6269_:
{
size_t v_sz_6272_; size_t v___x_6273_; lean_object* v___x_6274_; lean_object* v___x_6275_; lean_object* v___x_6276_; lean_object* v___x_6278_; 
v_sz_6272_ = lean_array_size(v_a_6268_);
v___x_6273_ = ((size_t)0ULL);
v___x_6274_ = l_unsafeCast___redArg(v_a_6268_);
lean_dec(v_a_6268_);
v___x_6275_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_Completion_tacticCompletion_spec__0(v_completionInfoPos_6259_, v_uri_6260_, v_pos_6261_, v_sz_6272_, v___x_6273_, v___x_6274_);
v___x_6276_ = l_unsafeCast___redArg(v___x_6275_);
lean_dec_ref(v___x_6275_);
if (v_isShared_6271_ == 0)
{
lean_ctor_set(v___x_6270_, 0, v___x_6276_);
v___x_6278_ = v___x_6270_;
goto v_reusejp_6277_;
}
else
{
lean_object* v_reuseFailAlloc_6279_; 
v_reuseFailAlloc_6279_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6279_, 0, v___x_6276_);
v___x_6278_ = v_reuseFailAlloc_6279_;
goto v_reusejp_6277_;
}
v_reusejp_6277_:
{
return v___x_6278_;
}
}
}
else
{
lean_object* v_a_6281_; lean_object* v___x_6283_; uint8_t v_isShared_6284_; uint8_t v_isSharedCheck_6288_; 
lean_dec_ref(v_pos_6261_);
lean_dec_ref(v_uri_6260_);
lean_dec(v_completionInfoPos_6259_);
v_a_6281_ = lean_ctor_get(v___x_6267_, 0);
v_isSharedCheck_6288_ = !lean_is_exclusive(v___x_6267_);
if (v_isSharedCheck_6288_ == 0)
{
v___x_6283_ = v___x_6267_;
v_isShared_6284_ = v_isSharedCheck_6288_;
goto v_resetjp_6282_;
}
else
{
lean_inc(v_a_6281_);
lean_dec(v___x_6267_);
v___x_6283_ = lean_box(0);
v_isShared_6284_ = v_isSharedCheck_6288_;
goto v_resetjp_6282_;
}
v_resetjp_6282_:
{
lean_object* v___x_6286_; 
if (v_isShared_6284_ == 0)
{
v___x_6286_ = v___x_6283_;
goto v_reusejp_6285_;
}
else
{
lean_object* v_reuseFailAlloc_6287_; 
v_reuseFailAlloc_6287_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6287_, 0, v_a_6281_);
v___x_6286_ = v_reuseFailAlloc_6287_;
goto v_reusejp_6285_;
}
v_reusejp_6285_:
{
return v___x_6286_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Completion_tacticCompletion___lam__0___boxed(lean_object* v___x_6289_, lean_object* v_completionInfoPos_6290_, lean_object* v_uri_6291_, lean_object* v_pos_6292_, lean_object* v___y_6293_, lean_object* v___y_6294_, lean_object* v___y_6295_, lean_object* v___y_6296_, lean_object* v___y_6297_){
_start:
{
uint8_t v___x_519__boxed_6298_; lean_object* v_res_6299_; 
v___x_519__boxed_6298_ = lean_unbox(v___x_6289_);
v_res_6299_ = l_Lean_Server_Completion_tacticCompletion___lam__0(v___x_519__boxed_6298_, v_completionInfoPos_6290_, v_uri_6291_, v_pos_6292_, v___y_6293_, v___y_6294_, v___y_6295_, v___y_6296_);
lean_dec(v___y_6296_);
lean_dec_ref(v___y_6295_);
lean_dec(v___y_6294_);
lean_dec_ref(v___y_6293_);
return v_res_6299_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Completion_tacticCompletion(lean_object* v_uri_6300_, lean_object* v_pos_6301_, lean_object* v_completionInfoPos_6302_, lean_object* v_ctx_6303_){
_start:
{
lean_object* v___x_6305_; uint8_t v___x_6306_; lean_object* v___x_6307_; lean_object* v___f_6308_; lean_object* v___x_6309_; 
v___x_6305_ = l_Lean_LocalContext_empty;
v___x_6306_ = 0;
v___x_6307_ = lean_box(v___x_6306_);
v___f_6308_ = lean_alloc_closure((void*)(l_Lean_Server_Completion_tacticCompletion___lam__0___boxed), 9, 4);
lean_closure_set(v___f_6308_, 0, v___x_6307_);
lean_closure_set(v___f_6308_, 1, v_completionInfoPos_6302_);
lean_closure_set(v___f_6308_, 2, v_uri_6300_);
lean_closure_set(v___f_6308_, 3, v_pos_6301_);
v___x_6309_ = l_Lean_Elab_ContextInfo_runMetaM___redArg(v_ctx_6303_, v___x_6305_, v___f_6308_);
return v___x_6309_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Completion_tacticCompletion___boxed(lean_object* v_uri_6310_, lean_object* v_pos_6311_, lean_object* v_completionInfoPos_6312_, lean_object* v_ctx_6313_, lean_object* v_a_6314_){
_start:
{
lean_object* v_res_6315_; 
v_res_6315_ = l_Lean_Server_Completion_tacticCompletion(v_uri_6310_, v_pos_6311_, v_completionInfoPos_6312_, v_ctx_6313_);
return v_res_6315_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_findEndSectionCompletionCandidates_mkCandidate_spec__0___redArg(lean_object* v_a_6316_, lean_object* v_b_6317_){
_start:
{
lean_object* v_array_6318_; lean_object* v_start_6319_; lean_object* v_stop_6320_; lean_object* v___x_6322_; uint8_t v_isShared_6323_; uint8_t v_isSharedCheck_6333_; 
v_array_6318_ = lean_ctor_get(v_a_6316_, 0);
v_start_6319_ = lean_ctor_get(v_a_6316_, 1);
v_stop_6320_ = lean_ctor_get(v_a_6316_, 2);
v_isSharedCheck_6333_ = !lean_is_exclusive(v_a_6316_);
if (v_isSharedCheck_6333_ == 0)
{
v___x_6322_ = v_a_6316_;
v_isShared_6323_ = v_isSharedCheck_6333_;
goto v_resetjp_6321_;
}
else
{
lean_inc(v_stop_6320_);
lean_inc(v_start_6319_);
lean_inc(v_array_6318_);
lean_dec(v_a_6316_);
v___x_6322_ = lean_box(0);
v_isShared_6323_ = v_isSharedCheck_6333_;
goto v_resetjp_6321_;
}
v_resetjp_6321_:
{
uint8_t v___x_6324_; 
v___x_6324_ = lean_nat_dec_lt(v_start_6319_, v_stop_6320_);
if (v___x_6324_ == 0)
{
lean_del_object(v___x_6322_);
lean_dec(v_stop_6320_);
lean_dec(v_start_6319_);
lean_dec_ref(v_array_6318_);
return v_b_6317_;
}
else
{
lean_object* v___x_6325_; lean_object* v___x_6326_; lean_object* v___x_6328_; 
v___x_6325_ = lean_unsigned_to_nat(1u);
v___x_6326_ = lean_nat_add(v_start_6319_, v___x_6325_);
lean_inc_ref(v_array_6318_);
if (v_isShared_6323_ == 0)
{
lean_ctor_set(v___x_6322_, 1, v___x_6326_);
v___x_6328_ = v___x_6322_;
goto v_reusejp_6327_;
}
else
{
lean_object* v_reuseFailAlloc_6332_; 
v_reuseFailAlloc_6332_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_6332_, 0, v_array_6318_);
lean_ctor_set(v_reuseFailAlloc_6332_, 1, v___x_6326_);
lean_ctor_set(v_reuseFailAlloc_6332_, 2, v_stop_6320_);
v___x_6328_ = v_reuseFailAlloc_6332_;
goto v_reusejp_6327_;
}
v_reusejp_6327_:
{
lean_object* v___x_6329_; lean_object* v___x_6330_; 
v___x_6329_ = lean_array_fget(v_array_6318_, v_start_6319_);
lean_dec(v_start_6319_);
lean_dec_ref(v_array_6318_);
v___x_6330_ = lean_array_push(v_b_6317_, v___x_6329_);
v_a_6316_ = v___x_6328_;
v_b_6317_ = v___x_6330_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_findEndSectionCompletionCandidates_mkCandidate(lean_object* v_scopeNames_6336_, lean_object* v_idx_6337_){
_start:
{
lean_object* v___x_6338_; lean_object* v___x_6339_; lean_object* v___x_6340_; lean_object* v___x_6341_; lean_object* v___x_6342_; lean_object* v___x_6343_; lean_object* v___x_6344_; 
v___x_6338_ = ((lean_object*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion___redArg___closed__0));
v___x_6339_ = lean_array_get_size(v_scopeNames_6336_);
v___x_6340_ = l_Array_toSubarray___redArg(v_scopeNames_6336_, v_idx_6337_, v___x_6339_);
v___x_6341_ = ((lean_object*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_findEndSectionCompletionCandidates_mkCandidate___closed__0));
v___x_6342_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_findEndSectionCompletionCandidates_mkCandidate_spec__0___redArg(v___x_6340_, v___x_6341_);
v___x_6343_ = lean_array_to_list(v___x_6342_);
v___x_6344_ = l_String_intercalate(v___x_6338_, v___x_6343_);
return v___x_6344_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_findEndSectionCompletionCandidates_mkCandidate_spec__0(lean_object* v_inst_6345_, lean_object* v_R_6346_, lean_object* v_a_6347_, lean_object* v_b_6348_){
_start:
{
lean_object* v___x_6349_; 
v___x_6349_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_findEndSectionCompletionCandidates_mkCandidate_spec__0___redArg(v_a_6347_, v_b_6348_);
return v___x_6349_;
}
}
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_findEndSectionCompletionCandidates_spec__0___redArg(lean_object* v_upperBound_6350_, lean_object* v_next_6351_, lean_object* v_scopeNames_6352_, lean_object* v_idComponents_6353_, lean_object* v_a_6354_, uint8_t v_b_6355_){
_start:
{
uint8_t v___x_6356_; 
v___x_6356_ = lean_nat_dec_lt(v_a_6354_, v_upperBound_6350_);
if (v___x_6356_ == 0)
{
lean_dec(v_a_6354_);
return v_b_6355_;
}
else
{
uint8_t v___x_6357_; lean_object* v___x_6358_; lean_object* v___x_6359_; uint8_t v___x_6360_; 
v___x_6357_ = 0;
v___x_6358_ = lean_nat_add(v_next_6351_, v_a_6354_);
v___x_6359_ = lean_array_get_size(v_scopeNames_6352_);
v___x_6360_ = lean_nat_dec_lt(v___x_6358_, v___x_6359_);
if (v___x_6360_ == 0)
{
lean_dec(v___x_6358_);
lean_dec(v_a_6354_);
return v___x_6357_;
}
else
{
lean_object* v___x_6361_; lean_object* v___x_6362_; lean_object* v___x_6363_; uint8_t v___x_6364_; 
v___x_6361_ = ((lean_object*)(l_Lean_Server_Completion_fieldIdCompletion___closed__0));
v___x_6362_ = lean_array_fget_borrowed(v_scopeNames_6352_, v___x_6358_);
lean_dec(v___x_6358_);
v___x_6363_ = lean_array_get_borrowed(v___x_6361_, v_idComponents_6353_, v_a_6354_);
v___x_6364_ = lean_string_dec_eq(v___x_6363_, v___x_6362_);
if (v___x_6364_ == 0)
{
lean_dec(v_a_6354_);
return v___x_6357_;
}
else
{
lean_object* v___x_6365_; lean_object* v___x_6366_; 
v___x_6365_ = lean_unsigned_to_nat(1u);
v___x_6366_ = lean_nat_add(v_a_6354_, v___x_6365_);
lean_dec(v_a_6354_);
v_a_6354_ = v___x_6366_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_findEndSectionCompletionCandidates_spec__0___redArg___boxed(lean_object* v_upperBound_6368_, lean_object* v_next_6369_, lean_object* v_scopeNames_6370_, lean_object* v_idComponents_6371_, lean_object* v_a_6372_, lean_object* v_b_6373_){
_start:
{
uint8_t v_b_boxed_6374_; uint8_t v_res_6375_; lean_object* v_r_6376_; 
v_b_boxed_6374_ = lean_unbox(v_b_6373_);
v_res_6375_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_findEndSectionCompletionCandidates_spec__0___redArg(v_upperBound_6368_, v_next_6369_, v_scopeNames_6370_, v_idComponents_6371_, v_a_6372_, v_b_boxed_6374_);
lean_dec_ref(v_idComponents_6371_);
lean_dec_ref(v_scopeNames_6370_);
lean_dec(v_next_6369_);
lean_dec(v_upperBound_6368_);
v_r_6376_ = lean_box(v_res_6375_);
return v_r_6376_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_findEndSectionCompletionCandidates_spec__1___redArg(lean_object* v_upperBound_6377_, lean_object* v_idComponents_6378_, lean_object* v_scopeNames_6379_, lean_object* v_a_6380_, lean_object* v_b_6381_){
_start:
{
lean_object* v_a_6383_; uint8_t v___x_6387_; 
v___x_6387_ = lean_nat_dec_lt(v_a_6380_, v_upperBound_6377_);
if (v___x_6387_ == 0)
{
lean_dec(v_a_6380_);
lean_dec_ref(v_scopeNames_6379_);
return v_b_6381_;
}
else
{
lean_object* v___x_6388_; lean_object* v___x_6389_; lean_object* v___x_6390_; uint8_t v___x_6391_; 
v___x_6388_ = lean_array_get_size(v_idComponents_6378_);
v___x_6389_ = lean_unsigned_to_nat(1u);
v___x_6390_ = lean_nat_sub(v___x_6388_, v___x_6389_);
v___x_6391_ = lean_nat_dec_lt(v___x_6390_, v___x_6388_);
if (v___x_6391_ == 0)
{
lean_object* v___x_6392_; lean_object* v___x_6393_; 
lean_dec(v___x_6390_);
lean_inc(v_a_6380_);
lean_inc_ref(v_scopeNames_6379_);
v___x_6392_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_findEndSectionCompletionCandidates_mkCandidate(v_scopeNames_6379_, v_a_6380_);
v___x_6393_ = lean_array_push(v_b_6381_, v___x_6392_);
v_a_6383_ = v___x_6393_;
goto v___jp_6382_;
}
else
{
lean_object* v___x_6394_; lean_object* v___x_6395_; lean_object* v___x_6396_; uint8_t v___x_6397_; 
v___x_6394_ = lean_nat_add(v_a_6380_, v___x_6388_);
v___x_6395_ = lean_nat_sub(v___x_6394_, v___x_6389_);
lean_dec(v___x_6394_);
v___x_6396_ = lean_array_get_size(v_scopeNames_6379_);
v___x_6397_ = lean_nat_dec_lt(v___x_6395_, v___x_6396_);
if (v___x_6397_ == 0)
{
lean_dec(v___x_6395_);
lean_dec(v___x_6390_);
v_a_6383_ = v_b_6381_;
goto v___jp_6382_;
}
else
{
lean_object* v___x_6398_; lean_object* v___x_6399_; uint8_t v___x_6400_; 
v___x_6398_ = lean_array_fget_borrowed(v_idComponents_6378_, v___x_6390_);
v___x_6399_ = lean_array_fget_borrowed(v_scopeNames_6379_, v___x_6395_);
v___x_6400_ = l_Lean_String_charactersIn(v___x_6398_, v___x_6399_);
if (v___x_6400_ == 0)
{
lean_dec(v___x_6395_);
lean_dec(v___x_6390_);
v_a_6383_ = v_b_6381_;
goto v___jp_6382_;
}
else
{
lean_object* v___x_6401_; uint8_t v___x_6402_; 
v___x_6401_ = lean_unsigned_to_nat(0u);
v___x_6402_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_findEndSectionCompletionCandidates_spec__0___redArg(v___x_6390_, v_a_6380_, v_scopeNames_6379_, v_idComponents_6378_, v___x_6401_, v___x_6387_);
lean_dec(v___x_6390_);
if (v___x_6402_ == 0)
{
lean_dec(v___x_6395_);
v_a_6383_ = v_b_6381_;
goto v___jp_6382_;
}
else
{
lean_object* v___x_6403_; lean_object* v___x_6404_; 
lean_inc_ref(v_scopeNames_6379_);
v___x_6403_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_findEndSectionCompletionCandidates_mkCandidate(v_scopeNames_6379_, v___x_6395_);
v___x_6404_ = lean_array_push(v_b_6381_, v___x_6403_);
v_a_6383_ = v___x_6404_;
goto v___jp_6382_;
}
}
}
}
}
v___jp_6382_:
{
lean_object* v___x_6384_; lean_object* v___x_6385_; 
v___x_6384_ = lean_unsigned_to_nat(1u);
v___x_6385_ = lean_nat_add(v_a_6380_, v___x_6384_);
lean_dec(v_a_6380_);
v_a_6380_ = v___x_6385_;
v_b_6381_ = v_a_6383_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_findEndSectionCompletionCandidates_spec__1___redArg___boxed(lean_object* v_upperBound_6405_, lean_object* v_idComponents_6406_, lean_object* v_scopeNames_6407_, lean_object* v_a_6408_, lean_object* v_b_6409_){
_start:
{
lean_object* v_res_6410_; 
v_res_6410_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_findEndSectionCompletionCandidates_spec__1___redArg(v_upperBound_6405_, v_idComponents_6406_, v_scopeNames_6407_, v_a_6408_, v_b_6409_);
lean_dec_ref(v_idComponents_6406_);
lean_dec(v_upperBound_6405_);
return v_res_6410_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_findEndSectionCompletionCandidates(lean_object* v_idComponents_6411_, lean_object* v_scopeNames_6412_){
_start:
{
lean_object* v___x_6413_; lean_object* v___x_6414_; lean_object* v_r_6415_; lean_object* v___x_6416_; 
v___x_6413_ = lean_unsigned_to_nat(0u);
v___x_6414_ = lean_array_get_size(v_scopeNames_6412_);
v_r_6415_ = ((lean_object*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_findEndSectionCompletionCandidates_mkCandidate___closed__0));
v___x_6416_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_findEndSectionCompletionCandidates_spec__1___redArg(v___x_6414_, v_idComponents_6411_, v_scopeNames_6412_, v___x_6413_, v_r_6415_);
return v___x_6416_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_findEndSectionCompletionCandidates___boxed(lean_object* v_idComponents_6417_, lean_object* v_scopeNames_6418_){
_start:
{
lean_object* v_res_6419_; 
v_res_6419_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_findEndSectionCompletionCandidates(v_idComponents_6417_, v_scopeNames_6418_);
lean_dec_ref(v_idComponents_6417_);
return v_res_6419_;
}
}
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_findEndSectionCompletionCandidates_spec__0(lean_object* v_upperBound_6420_, lean_object* v_next_6421_, lean_object* v_scopeNames_6422_, lean_object* v_idComponents_6423_, lean_object* v_inst_6424_, lean_object* v_R_6425_, lean_object* v_a_6426_, uint8_t v_b_6427_, lean_object* v_c_6428_){
_start:
{
uint8_t v___x_6429_; 
v___x_6429_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_findEndSectionCompletionCandidates_spec__0___redArg(v_upperBound_6420_, v_next_6421_, v_scopeNames_6422_, v_idComponents_6423_, v_a_6426_, v_b_6427_);
return v___x_6429_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_findEndSectionCompletionCandidates_spec__0___boxed(lean_object* v_upperBound_6430_, lean_object* v_next_6431_, lean_object* v_scopeNames_6432_, lean_object* v_idComponents_6433_, lean_object* v_inst_6434_, lean_object* v_R_6435_, lean_object* v_a_6436_, lean_object* v_b_6437_, lean_object* v_c_6438_){
_start:
{
uint8_t v_b_boxed_6439_; uint8_t v_res_6440_; lean_object* v_r_6441_; 
v_b_boxed_6439_ = lean_unbox(v_b_6437_);
v_res_6440_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_findEndSectionCompletionCandidates_spec__0(v_upperBound_6430_, v_next_6431_, v_scopeNames_6432_, v_idComponents_6433_, v_inst_6434_, v_R_6435_, v_a_6436_, v_b_boxed_6439_, v_c_6438_);
lean_dec_ref(v_idComponents_6433_);
lean_dec_ref(v_scopeNames_6432_);
lean_dec(v_next_6431_);
lean_dec(v_upperBound_6430_);
v_r_6441_ = lean_box(v_res_6440_);
return v_r_6441_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_findEndSectionCompletionCandidates_spec__1(lean_object* v_upperBound_6442_, lean_object* v_idComponents_6443_, lean_object* v_scopeNames_6444_, lean_object* v_inst_6445_, lean_object* v_R_6446_, lean_object* v_a_6447_, lean_object* v_b_6448_, lean_object* v_c_6449_){
_start:
{
lean_object* v___x_6450_; 
v___x_6450_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_findEndSectionCompletionCandidates_spec__1___redArg(v_upperBound_6442_, v_idComponents_6443_, v_scopeNames_6444_, v_a_6447_, v_b_6448_);
return v___x_6450_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_findEndSectionCompletionCandidates_spec__1___boxed(lean_object* v_upperBound_6451_, lean_object* v_idComponents_6452_, lean_object* v_scopeNames_6453_, lean_object* v_inst_6454_, lean_object* v_R_6455_, lean_object* v_a_6456_, lean_object* v_b_6457_, lean_object* v_c_6458_){
_start:
{
lean_object* v_res_6459_; 
v_res_6459_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_findEndSectionCompletionCandidates_spec__1(v_upperBound_6451_, v_idComponents_6452_, v_scopeNames_6453_, v_inst_6454_, v_R_6455_, v_a_6456_, v_b_6457_, v_c_6458_);
lean_dec_ref(v_idComponents_6452_);
lean_dec(v_upperBound_6451_);
return v_res_6459_;
}
}
LEAN_EXPORT uint8_t l_Lean_Server_Completion_endSectionCompletion___lam__0(lean_object* v_x_6460_){
_start:
{
lean_object* v___x_6461_; lean_object* v___x_6462_; uint8_t v___x_6463_; 
v___x_6461_ = lean_string_utf8_byte_size(v_x_6460_);
v___x_6462_ = lean_unsigned_to_nat(0u);
v___x_6463_ = lean_nat_dec_eq(v___x_6461_, v___x_6462_);
if (v___x_6463_ == 0)
{
uint8_t v___x_6464_; 
v___x_6464_ = 1;
return v___x_6464_;
}
else
{
uint8_t v___x_6465_; 
v___x_6465_ = 0;
return v___x_6465_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Completion_endSectionCompletion___lam__0___boxed(lean_object* v_x_6466_){
_start:
{
uint8_t v_res_6467_; lean_object* v_r_6468_; 
v_res_6467_ = l_Lean_Server_Completion_endSectionCompletion___lam__0(v_x_6466_);
lean_dec_ref(v_x_6466_);
v_r_6468_ = lean_box(v_res_6467_);
return v_r_6468_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_Completion_endSectionCompletion_spec__1(size_t v_sz_6469_, size_t v_i_6470_, lean_object* v_bs_6471_){
_start:
{
uint8_t v___x_6472_; 
v___x_6472_ = lean_usize_dec_lt(v_i_6470_, v_sz_6469_);
if (v___x_6472_ == 0)
{
lean_object* v___x_6473_; 
v___x_6473_ = l_unsafeCast___redArg(v_bs_6471_);
lean_dec_ref(v_bs_6471_);
return v___x_6473_;
}
else
{
lean_object* v_v_6474_; lean_object* v___x_6475_; lean_object* v_bs_x27_6476_; lean_object* v___x_6477_; lean_object* v___x_6478_; size_t v___x_6479_; size_t v___x_6480_; lean_object* v___x_6481_; lean_object* v___x_6482_; 
v_v_6474_ = lean_array_uget(v_bs_6471_, v_i_6470_);
v___x_6475_ = lean_unsigned_to_nat(0u);
v_bs_x27_6476_ = lean_array_uset(v_bs_6471_, v_i_6470_, v___x_6475_);
v___x_6477_ = l_unsafeCast___redArg(v_v_6474_);
lean_dec(v_v_6474_);
v___x_6478_ = l_Lean_Name_toString(v___x_6477_, v___x_6472_);
v___x_6479_ = ((size_t)1ULL);
v___x_6480_ = lean_usize_add(v_i_6470_, v___x_6479_);
v___x_6481_ = l_unsafeCast___redArg(v___x_6478_);
lean_dec_ref(v___x_6478_);
v___x_6482_ = lean_array_uset(v_bs_x27_6476_, v_i_6470_, v___x_6481_);
v_i_6470_ = v___x_6480_;
v_bs_6471_ = v___x_6482_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_Completion_endSectionCompletion_spec__1___boxed(lean_object* v_sz_6484_, lean_object* v_i_6485_, lean_object* v_bs_6486_){
_start:
{
size_t v_sz_boxed_6487_; size_t v_i_boxed_6488_; lean_object* v_res_6489_; 
v_sz_boxed_6487_ = lean_unbox_usize(v_sz_6484_);
lean_dec(v_sz_6484_);
v_i_boxed_6488_ = lean_unbox_usize(v_i_6485_);
lean_dec(v_i_6485_);
v_res_6489_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_Completion_endSectionCompletion_spec__1(v_sz_boxed_6487_, v_i_boxed_6488_, v_bs_6486_);
return v_res_6489_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_Completion_endSectionCompletion_spec__0(lean_object* v_completionInfoPos_6490_, lean_object* v_uri_6491_, lean_object* v_pos_6492_, size_t v_sz_6493_, size_t v_i_6494_, lean_object* v_bs_6495_){
_start:
{
uint8_t v___x_6496_; 
v___x_6496_ = lean_usize_dec_lt(v_i_6494_, v_sz_6493_);
if (v___x_6496_ == 0)
{
lean_object* v___x_6497_; 
lean_dec_ref(v_pos_6492_);
lean_dec_ref(v_uri_6491_);
lean_dec(v_completionInfoPos_6490_);
v___x_6497_ = l_unsafeCast___redArg(v_bs_6495_);
lean_dec_ref(v_bs_6495_);
return v___x_6497_;
}
else
{
lean_object* v_v_6498_; lean_object* v___x_6499_; lean_object* v_bs_x27_6500_; lean_object* v___x_6501_; lean_object* v___x_6502_; lean_object* v___x_6503_; lean_object* v___x_6504_; lean_object* v___x_6505_; lean_object* v___x_6506_; lean_object* v___x_6507_; size_t v___x_6508_; size_t v___x_6509_; lean_object* v___x_6510_; lean_object* v___x_6511_; 
v_v_6498_ = lean_array_uget(v_bs_6495_, v_i_6494_);
v___x_6499_ = lean_unsigned_to_nat(0u);
v_bs_x27_6500_ = lean_array_uset(v_bs_6495_, v_i_6494_, v___x_6499_);
v___x_6501_ = l_unsafeCast___redArg(v_v_6498_);
lean_dec(v_v_6498_);
v___x_6502_ = lean_box(0);
v___x_6503_ = ((lean_object*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addNamespaceCompletionItem___redArg___closed__2));
lean_inc(v_completionInfoPos_6490_);
v___x_6504_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6504_, 0, v_completionInfoPos_6490_);
lean_inc_ref(v_pos_6492_);
lean_inc_ref(v_uri_6491_);
v___x_6505_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_6505_, 0, v_uri_6491_);
lean_ctor_set(v___x_6505_, 1, v_pos_6492_);
lean_ctor_set(v___x_6505_, 2, v___x_6504_);
lean_ctor_set(v___x_6505_, 3, v___x_6502_);
v___x_6506_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6506_, 0, v___x_6505_);
v___x_6507_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_6507_, 0, v___x_6501_);
lean_ctor_set(v___x_6507_, 1, v___x_6502_);
lean_ctor_set(v___x_6507_, 2, v___x_6502_);
lean_ctor_set(v___x_6507_, 3, v___x_6503_);
lean_ctor_set(v___x_6507_, 4, v___x_6502_);
lean_ctor_set(v___x_6507_, 5, v___x_6502_);
lean_ctor_set(v___x_6507_, 6, v___x_6506_);
lean_ctor_set(v___x_6507_, 7, v___x_6502_);
v___x_6508_ = ((size_t)1ULL);
v___x_6509_ = lean_usize_add(v_i_6494_, v___x_6508_);
v___x_6510_ = l_unsafeCast___redArg(v___x_6507_);
lean_dec_ref_known(v___x_6507_, 8);
v___x_6511_ = lean_array_uset(v_bs_x27_6500_, v_i_6494_, v___x_6510_);
v_i_6494_ = v___x_6509_;
v_bs_6495_ = v___x_6511_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_Completion_endSectionCompletion_spec__0___boxed(lean_object* v_completionInfoPos_6513_, lean_object* v_uri_6514_, lean_object* v_pos_6515_, lean_object* v_sz_6516_, lean_object* v_i_6517_, lean_object* v_bs_6518_){
_start:
{
size_t v_sz_boxed_6519_; size_t v_i_boxed_6520_; lean_object* v_res_6521_; 
v_sz_boxed_6519_ = lean_unbox_usize(v_sz_6516_);
lean_dec(v_sz_6516_);
v_i_boxed_6520_ = lean_unbox_usize(v_i_6517_);
lean_dec(v_i_6517_);
v_res_6521_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_Completion_endSectionCompletion_spec__0(v_completionInfoPos_6513_, v_uri_6514_, v_pos_6515_, v_sz_boxed_6519_, v_i_boxed_6520_, v_bs_6518_);
return v_res_6521_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Completion_endSectionCompletion(lean_object* v_uri_6523_, lean_object* v_pos_6524_, lean_object* v_completionInfoPos_6525_, lean_object* v_id_x3f_6526_, uint8_t v_danglingDot_6527_, lean_object* v_scopeNames_6528_){
_start:
{
lean_object* v___f_6530_; lean_object* v_idComponents_6532_; lean_object* v___y_6545_; 
v___f_6530_ = ((lean_object*)(l_Lean_Server_Completion_endSectionCompletion___closed__0));
if (lean_obj_tag(v_id_x3f_6526_) == 0)
{
lean_object* v___x_6548_; 
v___x_6548_ = ((lean_object*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_findEndSectionCompletionCandidates_mkCandidate___closed__0));
v___y_6545_ = v___x_6548_;
goto v___jp_6544_;
}
else
{
lean_object* v_val_6549_; lean_object* v___x_6550_; lean_object* v___x_6551_; size_t v_sz_6552_; size_t v___x_6553_; lean_object* v___x_6554_; lean_object* v___x_6555_; lean_object* v___x_6556_; 
v_val_6549_ = lean_ctor_get(v_id_x3f_6526_, 0);
lean_inc(v_val_6549_);
lean_dec_ref_known(v_id_x3f_6526_, 1);
v___x_6550_ = l_Lean_Name_components(v_val_6549_);
v___x_6551_ = lean_array_mk(v___x_6550_);
v_sz_6552_ = lean_array_size(v___x_6551_);
v___x_6553_ = ((size_t)0ULL);
v___x_6554_ = l_unsafeCast___redArg(v___x_6551_);
lean_dec_ref(v___x_6551_);
v___x_6555_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_Completion_endSectionCompletion_spec__1(v_sz_6552_, v___x_6553_, v___x_6554_);
v___x_6556_ = l_unsafeCast___redArg(v___x_6555_);
lean_dec_ref(v___x_6555_);
v___y_6545_ = v___x_6556_;
goto v___jp_6544_;
}
v___jp_6531_:
{
lean_object* v___x_6533_; lean_object* v___x_6534_; lean_object* v___x_6535_; lean_object* v_scopeNames_6536_; lean_object* v_candidates_6537_; size_t v_sz_6538_; size_t v___x_6539_; lean_object* v___x_6540_; lean_object* v___x_6541_; lean_object* v___x_6542_; lean_object* v___x_6543_; 
v___x_6533_ = lean_array_mk(v_scopeNames_6528_);
v___x_6534_ = lean_array_pop(v___x_6533_);
v___x_6535_ = l_Array_takeWhile___redArg(v___f_6530_, v___x_6534_);
lean_dec_ref(v___x_6534_);
v_scopeNames_6536_ = l_Array_reverse___redArg(v___x_6535_);
v_candidates_6537_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_findEndSectionCompletionCandidates(v_idComponents_6532_, v_scopeNames_6536_);
lean_dec_ref(v_idComponents_6532_);
v_sz_6538_ = lean_array_size(v_candidates_6537_);
v___x_6539_ = ((size_t)0ULL);
v___x_6540_ = l_unsafeCast___redArg(v_candidates_6537_);
lean_dec_ref(v_candidates_6537_);
v___x_6541_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_Completion_endSectionCompletion_spec__0(v_completionInfoPos_6525_, v_uri_6523_, v_pos_6524_, v_sz_6538_, v___x_6539_, v___x_6540_);
v___x_6542_ = l_unsafeCast___redArg(v___x_6541_);
lean_dec_ref(v___x_6541_);
v___x_6543_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6543_, 0, v___x_6542_);
return v___x_6543_;
}
v___jp_6544_:
{
if (v_danglingDot_6527_ == 0)
{
v_idComponents_6532_ = v___y_6545_;
goto v___jp_6531_;
}
else
{
lean_object* v___x_6546_; lean_object* v_idComponents_6547_; 
v___x_6546_ = ((lean_object*)(l_Lean_Server_Completion_fieldIdCompletion___closed__0));
v_idComponents_6547_ = lean_array_push(v___y_6545_, v___x_6546_);
v_idComponents_6532_ = v_idComponents_6547_;
goto v___jp_6531_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Completion_endSectionCompletion___boxed(lean_object* v_uri_6557_, lean_object* v_pos_6558_, lean_object* v_completionInfoPos_6559_, lean_object* v_id_x3f_6560_, lean_object* v_danglingDot_6561_, lean_object* v_scopeNames_6562_, lean_object* v_a_6563_){
_start:
{
uint8_t v_danglingDot_boxed_6564_; lean_object* v_res_6565_; 
v_danglingDot_boxed_6564_ = lean_unbox(v_danglingDot_6561_);
v_res_6565_ = l_Lean_Server_Completion_endSectionCompletion(v_uri_6557_, v_pos_6558_, v_completionInfoPos_6559_, v_id_x3f_6560_, v_danglingDot_boxed_6564_, v_scopeNames_6562_);
return v_res_6565_;
}
}
lean_object* runtime_initialize_Lean_Data_FuzzyMatching(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Tactic_Doc(uint8_t builtin);
lean_object* runtime_initialize_Lean_Server_Completion_CompletionResolution(uint8_t builtin);
lean_object* runtime_initialize_Lean_Server_Completion_EligibleHeaderDecls(uint8_t builtin);
lean_object* runtime_initialize_Lean_Server_RequestCancellation(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Server_Completion_CompletionCollectors(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Data_FuzzyMatching(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Doc(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Server_Completion_CompletionResolution(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Server_Completion_EligibleHeaderDecls(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Server_RequestCancellation(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Server_Completion_CompletionCollectors(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Data_FuzzyMatching(uint8_t builtin);
lean_object* initialize_Lean_Elab_Tactic_Doc(uint8_t builtin);
lean_object* initialize_Lean_Server_Completion_CompletionResolution(uint8_t builtin);
lean_object* initialize_Lean_Server_Completion_EligibleHeaderDecls(uint8_t builtin);
lean_object* initialize_Lean_Server_RequestCancellation(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Server_Completion_CompletionCollectors(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Data_FuzzyMatching(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Tactic_Doc(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Server_Completion_CompletionResolution(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Server_Completion_EligibleHeaderDecls(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Server_RequestCancellation(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Server_Completion_CompletionCollectors(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Server_Completion_CompletionCollectors(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Server_Completion_CompletionCollectors(builtin);
}
#ifdef __cplusplus
}
#endif

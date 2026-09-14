// Lean compiler output
// Module: Lean.DocString.Add
// Imports: import Lean.Elab.DocString public import Lean.DocString.DeferredCheck public import Lean.DocString.Parser public import Lean.Elab.Term.TermElabM
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
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_string_utf8_extract(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Lean_MessageLog_add(lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
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
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
extern lean_object* l_Lean_Doc_deferredCheckExt;
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* l_Lean_PersistentEnvExtension_addEntry___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_pp_macroStack;
lean_object* l_Lean_MessageData_ofSyntax(lean_object*);
lean_object* l_Lean_indentD(lean_object*);
uint8_t l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_maxView___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_minView___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Environment_getModuleIdxFor_x3f(lean_object*, lean_object*);
lean_object* l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(lean_object*, uint8_t);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lean_throwError___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint8_t l_Lean_Parser_InputContext_atEnd(lean_object*, lean_object*);
uint32_t lean_string_utf8_get(lean_object*, lean_object*);
lean_object* lean_string_push(lean_object*, uint32_t);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_Parser_ParserState_allErrors(lean_object*);
lean_object* l_Lean_Parser_Error_toString(lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lean_Doc_Parser_BlockCtxt_forDocString(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_mkParserState(lean_object*);
lean_object* l_Lean_Parser_ParserState_setPos(lean_object*, lean_object*);
lean_object* l_Lean_Doc_Parser_document(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_getTokenTable(lean_object*);
lean_object* l_Lean_Parser_ParserFn_run(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Doc_Parser_block(lean_object*, lean_object*, lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Doc_elabModSnippet___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Doc_DocM_execForModule___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArgs(lean_object*);
lean_object* l_Lean_getMainVersoModuleDocs(lean_object*);
lean_object* l_Lean_VersoModuleDocs_terminalNesting(lean_object*);
lean_object* l_Lean_getMainModuleDoc(lean_object*);
uint8_t l_Lean_PersistentArray_isEmpty___redArg(lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_Elab_getBetterRef(lean_object*, lean_object*);
lean_object* l_Lean_addVersoModuleDocSnippet(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
size_t lean_usize_of_nat(lean_object*);
extern lean_object* l_Lean_versoDocStringExt;
lean_object* l_Lean_MapDeclarationExtension_insert___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
lean_object* l_Lean_TSyntax_getDocString(lean_object*);
lean_object* l_Lean_rewriteManualLinksCore(lean_object*);
lean_object* l_Lean_Syntax_getHeadInfo_x3f(lean_object*);
lean_object* l_Lean_SourceInfo_getPos_x3f(lean_object*, uint8_t);
lean_object* lean_nat_sub(lean_object*, lean_object*);
extern lean_object* l_Lean_docStringExt;
lean_object* l_String_removeLeadingSpaces(lean_object*);
lean_object* l_Lean_MessageData_ofConstName(lean_object*, uint8_t);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_FileMap_ofString(lean_object*);
lean_object* l_Lean_Parser_SyntaxStack_back(lean_object*);
lean_object* l_Lean_Core_getAndEmptyMessageLog___redArg(lean_object*);
lean_object* l_Lean_Core_setMessageLog___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Doc_elabBlocks___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Doc_DocM_exec___redArg(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageLog_toArray(lean_object*);
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lean_getDocStringText___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_logErrorAt___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_logError___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___aux__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_setEnv___redArg(lean_object*, lean_object*);
lean_object* l_Lean_PersistentEnvExtension_modifyState___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getAtomVal(lean_object*);
lean_object* lean_string_utf8_prev(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getKind(lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_throwErrorAt___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_isVersoDocComment(lean_object*);
lean_object* l_Lean_findInternalDocString_x3f(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_removeBuiltinDocString(lean_object*);
lean_object* lean_io_error_to_string(lean_object*);
LEAN_EXPORT lean_object* l_Lean_validateDocComment___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_validateDocComment___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_validateDocComment___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_validateDocComment___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_validateDocComment___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_validateDocComment___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_validateDocComment___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_validateDocComment(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_validateDocComment___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___redArg___lam__2(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_parseVersoDocString___redArg___lam__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_parseVersoDocString___redArg___lam__3___closed__0 = (const lean_object*)&l_Lean_parseVersoDocString___redArg___lam__3___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___redArg___lam__3(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___redArg___lam__4(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_parseVersoDocString___redArg___lam__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "unexpected '"};
static const lean_object* l_Lean_parseVersoDocString___redArg___lam__5___closed__0 = (const lean_object*)&l_Lean_parseVersoDocString___redArg___lam__5___closed__0_value;
static const lean_string_object l_Lean_parseVersoDocString___redArg___lam__5___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "'"};
static const lean_object* l_Lean_parseVersoDocString___redArg___lam__5___closed__1 = (const lean_object*)&l_Lean_parseVersoDocString___redArg___lam__5___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___redArg___lam__5(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___redArg___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___redArg___lam__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___redArg___lam__6___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___redArg___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___redArg___lam__7___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___redArg___lam__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___redArg___lam__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___redArg___lam__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_parseVersoDocString___redArg___lam__11___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 59, .m_capacity = 59, .m_length = 58, .m_data = "Documentation comment has no source location, cannot parse"};
static const lean_object* l_Lean_parseVersoDocString___redArg___lam__11___closed__0 = (const lean_object*)&l_Lean_parseVersoDocString___redArg___lam__11___closed__0_value;
static lean_once_cell_t l_Lean_parseVersoDocString___redArg___lam__11___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_parseVersoDocString___redArg___lam__11___closed__1;
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___redArg___lam__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_parseVersoDocString___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lean_parseVersoDocString___redArg___closed__0 = (const lean_object*)&l_Lean_parseVersoDocString___redArg___closed__0_value;
static const lean_string_object l_Lean_parseVersoDocString___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l_Lean_parseVersoDocString___redArg___closed__1 = (const lean_object*)&l_Lean_parseVersoDocString___redArg___closed__1_value;
static const lean_string_object l_Lean_parseVersoDocString___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "Command"};
static const lean_object* l_Lean_parseVersoDocString___redArg___closed__2 = (const lean_object*)&l_Lean_parseVersoDocString___redArg___closed__2_value;
static const lean_string_object l_Lean_parseVersoDocString___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "docComment"};
static const lean_object* l_Lean_parseVersoDocString___redArg___closed__3 = (const lean_object*)&l_Lean_parseVersoDocString___redArg___closed__3_value;
static const lean_ctor_object l_Lean_parseVersoDocString___redArg___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_parseVersoDocString___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_parseVersoDocString___redArg___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_parseVersoDocString___redArg___closed__4_value_aux_0),((lean_object*)&l_Lean_parseVersoDocString___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_parseVersoDocString___redArg___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_parseVersoDocString___redArg___closed__4_value_aux_1),((lean_object*)&l_Lean_parseVersoDocString___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lean_parseVersoDocString___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_parseVersoDocString___redArg___closed__4_value_aux_2),((lean_object*)&l_Lean_parseVersoDocString___redArg___closed__3_value),LEAN_SCALAR_PTR_LITERAL(44, 76, 179, 33, 27, 4, 201, 125)}};
static const lean_object* l_Lean_parseVersoDocString___redArg___closed__4 = (const lean_object*)&l_Lean_parseVersoDocString___redArg___closed__4_value;
static const lean_string_object l_Lean_parseVersoDocString___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "versoCommentBody"};
static const lean_object* l_Lean_parseVersoDocString___redArg___closed__5 = (const lean_object*)&l_Lean_parseVersoDocString___redArg___closed__5_value;
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_reportVersoParseFailure___redArg___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_reportVersoParseFailure___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_reportVersoParseFailure___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_reportVersoParseFailure___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_reportVersoParseFailure___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_reportVersoParseFailure___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_reportVersoParseFailure___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_reportVersoParseFailure___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_reportVersoParseFailure___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_reportVersoParseFailure___redArg___lam__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_reportVersoParseFailure___redArg___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_reportVersoParseFailure___redArg___lam__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_reportVersoParseFailure___redArg___lam__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_reportVersoParseFailure___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_reportVersoParseFailure___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_reportVersoParseFailure(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_reportVersoParseFailure___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Add_0__Lean_execVersoBlocks___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Add_0__Lean_execVersoBlocks___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2_spec__4___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg___lam__0___closed__0 = (const lean_object*)&l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg___lam__0___closed__0_value;
static const lean_string_object l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg___lam__0___closed__1 = (const lean_object*)&l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg___lam__0___closed__1_value;
static const lean_string_object l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "unsolvedGoals"};
static const lean_object* l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg___lam__0___closed__2 = (const lean_object*)&l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg___lam__0___closed__2_value;
static const lean_string_object l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "synthPlaceholder"};
static const lean_object* l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg___lam__0___closed__3 = (const lean_object*)&l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg___lam__0___closed__3_value;
static const lean_string_object l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "lean"};
static const lean_object* l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg___lam__0___closed__4 = (const lean_object*)&l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg___lam__0___closed__4_value;
static const lean_string_object l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "inductionWithNoAlts"};
static const lean_object* l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg___lam__0___closed__5 = (const lean_object*)&l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg___lam__0___closed__5_value;
static const lean_string_object l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "_namedError"};
static const lean_object* l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg___lam__0___closed__6 = (const lean_object*)&l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg___lam__0___closed__6_value;
static const lean_string_object l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg___lam__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg___lam__0___closed__7 = (const lean_object*)&l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg___lam__0___closed__7_value;
LEAN_EXPORT uint8_t l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg___lam__0(uint8_t, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__3(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_enableInfoTree___at___00Lean_Elab_withEnableInfoTree___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__1_spec__1___redArg(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_enableInfoTree___at___00Lean_Elab_withEnableInfoTree___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__1_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withEnableInfoTree___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__1___redArg(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withEnableInfoTree___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Add_0__Lean_execVersoBlocks(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Add_0__Lean_execVersoBlocks___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_enableInfoTree___at___00Lean_Elab_withEnableInfoTree___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__1_spec__1(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_enableInfoTree___at___00Lean_Elab_withEnableInfoTree___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withEnableInfoTree___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__1(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withEnableInfoTree___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00Lean_versoDocStringOfText_spec__0_spec__0___redArg(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00Lean_versoDocStringOfText_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logError___at___00Lean_versoDocStringOfText_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logError___at___00Lean_versoDocStringOfText_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_versoDocStringOfText_spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_versoDocStringOfText_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_versoDocStringOfText___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_versoDocStringOfText___closed__0 = (const lean_object*)&l_Lean_versoDocStringOfText___closed__0_value;
static const lean_ctor_object l_Lean_versoDocStringOfText___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_versoDocStringOfText___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_versoDocStringOfText___closed__1 = (const lean_object*)&l_Lean_versoDocStringOfText___closed__1_value;
static const lean_closure_object l_Lean_versoDocStringOfText___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Doc_Parser_document, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_versoDocStringOfText___closed__1_value)} };
static const lean_object* l_Lean_versoDocStringOfText___closed__2 = (const lean_object*)&l_Lean_versoDocStringOfText___closed__2_value;
static const lean_array_object l_Lean_versoDocStringOfText___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_versoDocStringOfText___closed__3 = (const lean_object*)&l_Lean_versoDocStringOfText___closed__3_value;
static const lean_ctor_object l_Lean_versoDocStringOfText___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_versoDocStringOfText___closed__3_value),((lean_object*)&l_Lean_versoDocStringOfText___closed__3_value)}};
static const lean_object* l_Lean_versoDocStringOfText___closed__4 = (const lean_object*)&l_Lean_versoDocStringOfText___closed__4_value;
static const lean_ctor_object l_Lean_versoDocStringOfText___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_versoDocStringOfText___closed__4_value),((lean_object*)&l_Lean_versoDocStringOfText___closed__3_value)}};
static const lean_object* l_Lean_versoDocStringOfText___closed__5 = (const lean_object*)&l_Lean_versoDocStringOfText___closed__5_value;
LEAN_EXPORT lean_object* l_Lean_versoDocStringOfText(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_versoDocStringOfText___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00Lean_versoDocStringOfText_spec__0_spec__0(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00Lean_versoDocStringOfText_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_versoDocString_spec__1(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_versoDocString_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0___lam__0(uint8_t, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__0___redArg___lam__0(uint8_t, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__4_spec__5___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__4_spec__5___closed__0;
static const lean_string_object l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__4_spec__5___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "while expanding"};
static const lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__4_spec__5___closed__1 = (const lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__4_spec__5___closed__1_value;
static const lean_ctor_object l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__4_spec__5___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__4_spec__5___closed__1_value)}};
static const lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__4_spec__5___closed__2 = (const lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__4_spec__5___closed__2_value;
static lean_once_cell_t l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__4_spec__5___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__4_spec__5___closed__3;
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__4_spec__5(lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__4___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "with resulting expansion"};
static const lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__4___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__4___redArg___closed__0_value;
static const lean_ctor_object l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__4___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__4___redArg___closed__0_value)}};
static const lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__4___redArg___closed__1 = (const lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__4___redArg___closed__1_value;
static lean_once_cell_t l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__4___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__4___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__4___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_versoDocString___closed__0_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_parseVersoDocString___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_versoDocString___closed__0_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_versoDocString___closed__0_value_aux_0),((lean_object*)&l_Lean_parseVersoDocString___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_versoDocString___closed__0_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_versoDocString___closed__0_value_aux_1),((lean_object*)&l_Lean_parseVersoDocString___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lean_versoDocString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_versoDocString___closed__0_value_aux_2),((lean_object*)&l_Lean_parseVersoDocString___redArg___closed__5_value),LEAN_SCALAR_PTR_LITERAL(13, 150, 193, 173, 39, 149, 4, 235)}};
static const lean_object* l_Lean_versoDocString___closed__0 = (const lean_object*)&l_Lean_versoDocString___closed__0_value;
static const lean_string_object l_Lean_versoDocString___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Doc"};
static const lean_object* l_Lean_versoDocString___closed__1 = (const lean_object*)&l_Lean_versoDocString___closed__1_value;
static const lean_string_object l_Lean_versoDocString___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Syntax"};
static const lean_object* l_Lean_versoDocString___closed__2 = (const lean_object*)&l_Lean_versoDocString___closed__2_value;
static const lean_string_object l_Lean_versoDocString___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "parseFailure"};
static const lean_object* l_Lean_versoDocString___closed__3 = (const lean_object*)&l_Lean_versoDocString___closed__3_value;
static const lean_ctor_object l_Lean_versoDocString___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_parseVersoDocString___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_versoDocString___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_versoDocString___closed__4_value_aux_0),((lean_object*)&l_Lean_versoDocString___closed__1_value),LEAN_SCALAR_PTR_LITERAL(78, 12, 7, 185, 212, 110, 129, 118)}};
static const lean_ctor_object l_Lean_versoDocString___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_versoDocString___closed__4_value_aux_1),((lean_object*)&l_Lean_versoDocString___closed__2_value),LEAN_SCALAR_PTR_LITERAL(133, 108, 207, 58, 1, 109, 247, 255)}};
static const lean_ctor_object l_Lean_versoDocString___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_versoDocString___closed__4_value_aux_2),((lean_object*)&l_Lean_versoDocString___closed__3_value),LEAN_SCALAR_PTR_LITERAL(229, 162, 159, 121, 181, 7, 46, 32)}};
static const lean_object* l_Lean_versoDocString___closed__4 = (const lean_object*)&l_Lean_versoDocString___closed__4_value;
LEAN_EXPORT lean_object* l_Lean_versoDocString(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_versoDocString___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__0(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_versoModDocString(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_versoModDocString___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_versoDocStringFromString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_versoDocStringFromString___closed__0 = (const lean_object*)&l_Lean_versoDocStringFromString___closed__0_value;
static const lean_string_object l_Lean_versoDocStringFromString___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l_Lean_versoDocStringFromString___closed__1 = (const lean_object*)&l_Lean_versoDocStringFromString___closed__1_value;
static const lean_ctor_object l_Lean_versoDocStringFromString___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_versoDocStringFromString___closed__1_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l_Lean_versoDocStringFromString___closed__2 = (const lean_object*)&l_Lean_versoDocStringFromString___closed__2_value;
static const lean_ctor_object l_Lean_versoDocStringFromString___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(2) << 1) | 1)),((lean_object*)&l_Lean_versoDocStringFromString___closed__2_value),((lean_object*)&l_Lean_versoDocStringFromString___closed__0_value)}};
static const lean_object* l_Lean_versoDocStringFromString___closed__3 = (const lean_object*)&l_Lean_versoDocStringFromString___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_versoDocStringFromString(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_versoDocStringFromString___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMarkdownDocString___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMarkdownDocString___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMarkdownDocString___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMarkdownDocString___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMarkdownDocString___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMarkdownDocString___redArg___lam__4(lean_object*, lean_object*);
static const lean_string_object l_Lean_addMarkdownDocString___redArg___lam__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "invalid doc string, declaration `"};
static const lean_object* l_Lean_addMarkdownDocString___redArg___lam__5___closed__0 = (const lean_object*)&l_Lean_addMarkdownDocString___redArg___lam__5___closed__0_value;
static lean_once_cell_t l_Lean_addMarkdownDocString___redArg___lam__5___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMarkdownDocString___redArg___lam__5___closed__1;
static const lean_string_object l_Lean_addMarkdownDocString___redArg___lam__5___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "` is in an imported module"};
static const lean_object* l_Lean_addMarkdownDocString___redArg___lam__5___closed__2 = (const lean_object*)&l_Lean_addMarkdownDocString___redArg___lam__5___closed__2_value;
static lean_once_cell_t l_Lean_addMarkdownDocString___redArg___lam__5___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMarkdownDocString___redArg___lam__5___closed__3;
LEAN_EXPORT lean_object* l_Lean_addMarkdownDocString___redArg___lam__5(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMarkdownDocString___redArg___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMarkdownDocString___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMarkdownDocString(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addVersoDocStringCore___redArg___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addVersoDocStringCore___redArg___lam__0___closed__0;
LEAN_EXPORT lean_object* l_Lean_addVersoDocStringCore___redArg___lam__0(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_addVersoDocStringCore___redArg___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_addVersoDocStringCore___redArg___lam__1___closed__0 = (const lean_object*)&l_Lean_addVersoDocStringCore___redArg___lam__1___closed__0_value;
static const lean_closure_object l_Lean_addVersoDocStringCore___redArg___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_addVersoDocStringCore___redArg___lam__1___closed__1 = (const lean_object*)&l_Lean_addVersoDocStringCore___redArg___lam__1___closed__1_value;
static const lean_closure_object l_Lean_addVersoDocStringCore___redArg___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_addVersoDocStringCore___redArg___lam__1___closed__2 = (const lean_object*)&l_Lean_addVersoDocStringCore___redArg___lam__1___closed__2_value;
static const lean_closure_object l_Lean_addVersoDocStringCore___redArg___lam__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__3, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_addVersoDocStringCore___redArg___lam__1___closed__3 = (const lean_object*)&l_Lean_addVersoDocStringCore___redArg___lam__1___closed__3_value;
static const lean_closure_object l_Lean_addVersoDocStringCore___redArg___lam__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__4___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_addVersoDocStringCore___redArg___lam__1___closed__4 = (const lean_object*)&l_Lean_addVersoDocStringCore___redArg___lam__1___closed__4_value;
static const lean_closure_object l_Lean_addVersoDocStringCore___redArg___lam__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__5___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_addVersoDocStringCore___redArg___lam__1___closed__5 = (const lean_object*)&l_Lean_addVersoDocStringCore___redArg___lam__1___closed__5_value;
static const lean_closure_object l_Lean_addVersoDocStringCore___redArg___lam__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__6, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_addVersoDocStringCore___redArg___lam__1___closed__6 = (const lean_object*)&l_Lean_addVersoDocStringCore___redArg___lam__1___closed__6_value;
static const lean_ctor_object l_Lean_addVersoDocStringCore___redArg___lam__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_addVersoDocStringCore___redArg___lam__1___closed__0_value),((lean_object*)&l_Lean_addVersoDocStringCore___redArg___lam__1___closed__1_value)}};
static const lean_object* l_Lean_addVersoDocStringCore___redArg___lam__1___closed__7 = (const lean_object*)&l_Lean_addVersoDocStringCore___redArg___lam__1___closed__7_value;
static const lean_ctor_object l_Lean_addVersoDocStringCore___redArg___lam__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_addVersoDocStringCore___redArg___lam__1___closed__7_value),((lean_object*)&l_Lean_addVersoDocStringCore___redArg___lam__1___closed__2_value),((lean_object*)&l_Lean_addVersoDocStringCore___redArg___lam__1___closed__3_value),((lean_object*)&l_Lean_addVersoDocStringCore___redArg___lam__1___closed__4_value),((lean_object*)&l_Lean_addVersoDocStringCore___redArg___lam__1___closed__5_value)}};
static const lean_object* l_Lean_addVersoDocStringCore___redArg___lam__1___closed__8 = (const lean_object*)&l_Lean_addVersoDocStringCore___redArg___lam__1___closed__8_value;
static const lean_ctor_object l_Lean_addVersoDocStringCore___redArg___lam__1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_addVersoDocStringCore___redArg___lam__1___closed__8_value),((lean_object*)&l_Lean_addVersoDocStringCore___redArg___lam__1___closed__6_value)}};
static const lean_object* l_Lean_addVersoDocStringCore___redArg___lam__1___closed__9 = (const lean_object*)&l_Lean_addVersoDocStringCore___redArg___lam__1___closed__9_value;
LEAN_EXPORT lean_object* l_Lean_addVersoDocStringCore___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addVersoDocStringCore___redArg___lam__2(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_addVersoDocStringCore___redArg___lam__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "invalid doc string, declaration '"};
static const lean_object* l_Lean_addVersoDocStringCore___redArg___lam__3___closed__0 = (const lean_object*)&l_Lean_addVersoDocStringCore___redArg___lam__3___closed__0_value;
static const lean_string_object l_Lean_addVersoDocStringCore___redArg___lam__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "' is in an imported module"};
static const lean_object* l_Lean_addVersoDocStringCore___redArg___lam__3___closed__1 = (const lean_object*)&l_Lean_addVersoDocStringCore___redArg___lam__3___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_addVersoDocStringCore___redArg___lam__3(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addVersoDocStringCore___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addVersoDocStringCore___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addVersoDocStringCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addVersoDocStringCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addVersoModDocStringCore___redArg___lam__0(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_addVersoModDocStringCore___redArg___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "Error adding module docs: "};
static const lean_object* l_Lean_addVersoModDocStringCore___redArg___lam__1___closed__0 = (const lean_object*)&l_Lean_addVersoModDocStringCore___redArg___lam__1___closed__0_value;
static lean_once_cell_t l_Lean_addVersoModDocStringCore___redArg___lam__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addVersoModDocStringCore___redArg___lam__1___closed__1;
LEAN_EXPORT lean_object* l_Lean_addVersoModDocStringCore___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addVersoModDocStringCore___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_addVersoModDocStringCore___redArg___lam__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 93, .m_capacity = 93, .m_length = 92, .m_data = "Can't add Verso-format module docs because there is already Markdown-format content present."};
static const lean_object* l_Lean_addVersoModDocStringCore___redArg___lam__3___closed__0 = (const lean_object*)&l_Lean_addVersoModDocStringCore___redArg___lam__3___closed__0_value;
static lean_once_cell_t l_Lean_addVersoModDocStringCore___redArg___lam__3___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addVersoModDocStringCore___redArg___lam__3___closed__1;
LEAN_EXPORT lean_object* l_Lean_addVersoModDocStringCore___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addVersoModDocStringCore___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addVersoModDocStringCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addVersoModDocStringCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__0;
static lean_once_cell_t l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__1;
static lean_once_cell_t l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__2;
static lean_once_cell_t l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__3;
LEAN_EXPORT lean_object* l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addVersoDocString(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addVersoDocString___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addVersoDocStringFromString(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addVersoDocStringFromString___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logErrorAt___at___00Lean_validateDocComment___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logErrorAt___at___00Lean_validateDocComment___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_validateDocComment___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__0_spec__2(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_validateDocComment___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_validateDocComment___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_validateDocComment___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_getDocStringText___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "unexpected doc string"};
static const lean_object* l_Lean_getDocStringText___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__1___closed__0 = (const lean_object*)&l_Lean_getDocStringText___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__1___closed__0_value;
static lean_once_cell_t l_Lean_getDocStringText___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_getDocStringText___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__1___closed__1;
LEAN_EXPORT lean_object* l_Lean_getDocStringText___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getDocStringText___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addDocStringOf(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addDocStringOf___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logErrorAt___at___00Lean_validateDocComment___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logErrorAt___at___00Lean_validateDocComment___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0___lam__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 42, .m_capacity = 42, .m_length = 41, .m_data = "invalid doc string removal, declaration `"};
static const lean_object* l_Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0___closed__0 = (const lean_object*)&l_Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0___closed__0_value;
static lean_once_cell_t l_Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0___closed__1;
LEAN_EXPORT lean_object* l_Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_makeDocStringVerso___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "Documentation for `"};
static const lean_object* l_Lean_makeDocStringVerso___closed__0 = (const lean_object*)&l_Lean_makeDocStringVerso___closed__0_value;
static lean_once_cell_t l_Lean_makeDocStringVerso___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_makeDocStringVerso___closed__1;
static const lean_string_object l_Lean_makeDocStringVerso___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "` is already in Verso format"};
static const lean_object* l_Lean_makeDocStringVerso___closed__2 = (const lean_object*)&l_Lean_makeDocStringVerso___closed__2_value;
static lean_once_cell_t l_Lean_makeDocStringVerso___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_makeDocStringVerso___closed__3;
static const lean_string_object l_Lean_makeDocStringVerso___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "No documentation found for `"};
static const lean_object* l_Lean_makeDocStringVerso___closed__4 = (const lean_object*)&l_Lean_makeDocStringVerso___closed__4_value;
static lean_once_cell_t l_Lean_makeDocStringVerso___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_makeDocStringVerso___closed__5;
static const lean_string_object l_Lean_makeDocStringVerso___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l_Lean_makeDocStringVerso___closed__6 = (const lean_object*)&l_Lean_makeDocStringVerso___closed__6_value;
static lean_once_cell_t l_Lean_makeDocStringVerso___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_makeDocStringVerso___closed__7;
LEAN_EXPORT lean_object* l_Lean_makeDocStringVerso(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_makeDocStringVerso___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addDocString(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addDocString___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addDocString_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addDocString_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_addVersoModDocStringCore___at___00Lean_addVersoModDocString_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_addVersoModDocStringCore___at___00Lean_addVersoModDocString_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_addVersoModDocStringCore___at___00Lean_addVersoModDocString_spec__0_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_addVersoModDocStringCore___at___00Lean_addVersoModDocString_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addVersoModDocStringCore___at___00Lean_addVersoModDocString_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addVersoModDocStringCore___at___00Lean_addVersoModDocString_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addVersoModDocString(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addVersoModDocString___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_addVersoModDocStringCore___at___00Lean_addVersoModDocString_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_addVersoModDocStringCore___at___00Lean_addVersoModDocString_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_validateDocComment___redArg___lam__0(lean_object* v_toPure_1_, lean_object* v_____s_2_){
_start:
{
lean_object* v___x_3_; lean_object* v___x_4_; 
v___x_3_ = lean_box(0);
v___x_4_ = lean_apply_2(v_toPure_1_, lean_box(0), v___x_3_);
return v___x_4_;
}
}
LEAN_EXPORT lean_object* l_Lean_validateDocComment___redArg___lam__1(lean_object* v___x_5_, lean_object* v_toPure_6_, lean_object* v_r_7_){
_start:
{
lean_object* v___x_8_; lean_object* v___x_9_; 
v___x_8_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_8_, 0, v___x_5_);
v___x_9_ = lean_apply_2(v_toPure_6_, lean_box(0), v___x_8_);
return v___x_9_;
}
}
LEAN_EXPORT lean_object* l_Lean_validateDocComment___redArg___lam__3(lean_object* v___y_10_, lean_object* v_str_11_, lean_object* v_inst_12_, lean_object* v_inst_13_, lean_object* v_inst_14_, lean_object* v_inst_15_, lean_object* v_toBind_16_, lean_object* v___f_17_, lean_object* v___f_18_, lean_object* v_a_19_, lean_object* v_x_20_, lean_object* v___y_21_){
_start:
{
lean_object* v_fst_22_; 
v_fst_22_ = lean_ctor_get(v_a_19_, 0);
lean_inc(v_fst_22_);
if (lean_obj_tag(v___y_10_) == 1)
{
lean_object* v_snd_23_; lean_object* v_start_24_; lean_object* v_stop_25_; lean_object* v___x_27_; uint8_t v_isShared_28_; uint8_t v_isSharedCheck_48_; 
lean_dec(v___f_18_);
v_snd_23_ = lean_ctor_get(v_a_19_, 1);
lean_inc(v_snd_23_);
lean_dec_ref(v_a_19_);
v_start_24_ = lean_ctor_get(v_fst_22_, 0);
v_stop_25_ = lean_ctor_get(v_fst_22_, 1);
v_isSharedCheck_48_ = !lean_is_exclusive(v_fst_22_);
if (v_isSharedCheck_48_ == 0)
{
v___x_27_ = v_fst_22_;
v_isShared_28_ = v_isSharedCheck_48_;
goto v_resetjp_26_;
}
else
{
lean_inc(v_stop_25_);
lean_inc(v_start_24_);
lean_dec(v_fst_22_);
v___x_27_ = lean_box(0);
v_isShared_28_ = v_isSharedCheck_48_;
goto v_resetjp_26_;
}
v_resetjp_26_:
{
lean_object* v_val_29_; lean_object* v___x_31_; uint8_t v_isShared_32_; uint8_t v_isSharedCheck_47_; 
v_val_29_ = lean_ctor_get(v___y_10_, 0);
v_isSharedCheck_47_ = !lean_is_exclusive(v___y_10_);
if (v_isSharedCheck_47_ == 0)
{
v___x_31_ = v___y_10_;
v_isShared_32_ = v_isSharedCheck_47_;
goto v_resetjp_30_;
}
else
{
lean_inc(v_val_29_);
lean_dec(v___y_10_);
v___x_31_ = lean_box(0);
v_isShared_32_ = v_isSharedCheck_47_;
goto v_resetjp_30_;
}
v_resetjp_30_:
{
lean_object* v___x_33_; lean_object* v___x_34_; uint8_t v___x_35_; lean_object* v___x_36_; lean_object* v___x_37_; lean_object* v___x_39_; 
v___x_33_ = lean_nat_add(v_val_29_, v_start_24_);
v___x_34_ = lean_nat_add(v_val_29_, v_stop_25_);
lean_dec(v_val_29_);
v___x_35_ = 0;
v___x_36_ = lean_alloc_ctor(1, 2, 1);
lean_ctor_set(v___x_36_, 0, v___x_33_);
lean_ctor_set(v___x_36_, 1, v___x_34_);
lean_ctor_set_uint8(v___x_36_, sizeof(void*)*2, v___x_35_);
v___x_37_ = lean_string_utf8_extract(v_str_11_, v_start_24_, v_stop_25_);
lean_dec(v_stop_25_);
lean_dec(v_start_24_);
if (v_isShared_28_ == 0)
{
lean_ctor_set_tag(v___x_27_, 2);
lean_ctor_set(v___x_27_, 1, v___x_37_);
lean_ctor_set(v___x_27_, 0, v___x_36_);
v___x_39_ = v___x_27_;
goto v_reusejp_38_;
}
else
{
lean_object* v_reuseFailAlloc_46_; 
v_reuseFailAlloc_46_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_46_, 0, v___x_36_);
lean_ctor_set(v_reuseFailAlloc_46_, 1, v___x_37_);
v___x_39_ = v_reuseFailAlloc_46_;
goto v_reusejp_38_;
}
v_reusejp_38_:
{
lean_object* v___x_41_; 
if (v_isShared_32_ == 0)
{
lean_ctor_set_tag(v___x_31_, 3);
lean_ctor_set(v___x_31_, 0, v_snd_23_);
v___x_41_ = v___x_31_;
goto v_reusejp_40_;
}
else
{
lean_object* v_reuseFailAlloc_45_; 
v_reuseFailAlloc_45_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_45_, 0, v_snd_23_);
v___x_41_ = v_reuseFailAlloc_45_;
goto v_reusejp_40_;
}
v_reusejp_40_:
{
lean_object* v___x_42_; lean_object* v___x_43_; lean_object* v___x_44_; 
v___x_42_ = l_Lean_MessageData_ofFormat(v___x_41_);
v___x_43_ = l_Lean_logErrorAt___redArg(v_inst_12_, v_inst_13_, v_inst_14_, v_inst_15_, v___x_39_, v___x_42_);
v___x_44_ = lean_apply_4(v_toBind_16_, lean_box(0), lean_box(0), v___x_43_, v___f_17_);
return v___x_44_;
}
}
}
}
}
else
{
lean_object* v_snd_49_; lean_object* v___x_50_; lean_object* v___x_51_; lean_object* v___x_52_; lean_object* v___x_53_; 
lean_dec(v_fst_22_);
lean_dec(v___f_17_);
lean_dec(v___y_10_);
v_snd_49_ = lean_ctor_get(v_a_19_, 1);
lean_inc(v_snd_49_);
lean_dec_ref(v_a_19_);
v___x_50_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_50_, 0, v_snd_49_);
v___x_51_ = l_Lean_MessageData_ofFormat(v___x_50_);
v___x_52_ = l_Lean_logError___redArg(v_inst_12_, v_inst_13_, v_inst_14_, v_inst_15_, v___x_51_);
v___x_53_ = lean_apply_4(v_toBind_16_, lean_box(0), lean_box(0), v___x_52_, v___f_18_);
return v___x_53_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_validateDocComment___redArg___lam__3___boxed(lean_object* v___y_54_, lean_object* v_str_55_, lean_object* v_inst_56_, lean_object* v_inst_57_, lean_object* v_inst_58_, lean_object* v_inst_59_, lean_object* v_toBind_60_, lean_object* v___f_61_, lean_object* v___f_62_, lean_object* v_a_63_, lean_object* v_x_64_, lean_object* v___y_65_){
_start:
{
lean_object* v_res_66_; 
v_res_66_ = l_Lean_validateDocComment___redArg___lam__3(v___y_54_, v_str_55_, v_inst_56_, v_inst_57_, v_inst_58_, v_inst_59_, v_toBind_60_, v___f_61_, v___f_62_, v_a_63_, v_x_64_, v___y_65_);
lean_dec_ref(v_str_55_);
return v_res_66_;
}
}
LEAN_EXPORT lean_object* l_Lean_validateDocComment___redArg___lam__2(lean_object* v_toPure_67_, lean_object* v___y_68_, lean_object* v_str_69_, lean_object* v_inst_70_, lean_object* v_inst_71_, lean_object* v_inst_72_, lean_object* v_inst_73_, lean_object* v_toBind_74_, lean_object* v___f_75_, lean_object* v_____x_76_){
_start:
{
lean_object* v_fst_77_; lean_object* v___x_78_; lean_object* v___f_79_; lean_object* v___f_80_; size_t v_sz_81_; size_t v___x_82_; lean_object* v___x_83_; lean_object* v___x_84_; 
v_fst_77_ = lean_ctor_get(v_____x_76_, 0);
lean_inc(v_fst_77_);
lean_dec_ref(v_____x_76_);
v___x_78_ = lean_box(0);
v___f_79_ = lean_alloc_closure((void*)(l_Lean_validateDocComment___redArg___lam__1), 3, 2);
lean_closure_set(v___f_79_, 0, v___x_78_);
lean_closure_set(v___f_79_, 1, v_toPure_67_);
lean_inc_ref(v___f_79_);
lean_inc(v_toBind_74_);
lean_inc_ref(v_inst_70_);
v___f_80_ = lean_alloc_closure((void*)(l_Lean_validateDocComment___redArg___lam__3___boxed), 12, 9);
lean_closure_set(v___f_80_, 0, v___y_68_);
lean_closure_set(v___f_80_, 1, v_str_69_);
lean_closure_set(v___f_80_, 2, v_inst_70_);
lean_closure_set(v___f_80_, 3, v_inst_71_);
lean_closure_set(v___f_80_, 4, v_inst_72_);
lean_closure_set(v___f_80_, 5, v_inst_73_);
lean_closure_set(v___f_80_, 6, v_toBind_74_);
lean_closure_set(v___f_80_, 7, v___f_79_);
lean_closure_set(v___f_80_, 8, v___f_79_);
v_sz_81_ = lean_array_size(v_fst_77_);
v___x_82_ = ((size_t)0ULL);
v___x_83_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_box(0), lean_box(0), lean_box(0), v_inst_70_, v_fst_77_, v___f_80_, v_sz_81_, v___x_82_, v___x_78_);
v___x_84_ = lean_apply_4(v_toBind_74_, lean_box(0), lean_box(0), v___x_83_, v___f_75_);
return v___x_84_;
}
}
LEAN_EXPORT lean_object* l_Lean_validateDocComment___redArg(lean_object* v_inst_85_, lean_object* v_inst_86_, lean_object* v_inst_87_, lean_object* v_inst_88_, lean_object* v_inst_89_, lean_object* v_docstring_90_){
_start:
{
lean_object* v_toApplicative_91_; lean_object* v_toBind_92_; lean_object* v_toPure_93_; lean_object* v_str_94_; lean_object* v___x_95_; lean_object* v___x_96_; lean_object* v___x_97_; lean_object* v___f_98_; lean_object* v___y_100_; 
v_toApplicative_91_ = lean_ctor_get(v_inst_85_, 0);
v_toBind_92_ = lean_ctor_get(v_inst_85_, 1);
lean_inc(v_toBind_92_);
v_toPure_93_ = lean_ctor_get(v_toApplicative_91_, 1);
lean_inc_n(v_toPure_93_, 2);
v_str_94_ = l_Lean_TSyntax_getDocString(v_docstring_90_);
v___x_95_ = lean_unsigned_to_nat(1u);
v___x_96_ = l_Lean_Syntax_getArg(v_docstring_90_, v___x_95_);
v___x_97_ = l_Lean_Syntax_getHeadInfo_x3f(v___x_96_);
lean_dec(v___x_96_);
v___f_98_ = lean_alloc_closure((void*)(l_Lean_validateDocComment___redArg___lam__0), 2, 1);
lean_closure_set(v___f_98_, 0, v_toPure_93_);
if (lean_obj_tag(v___x_97_) == 0)
{
lean_object* v___x_106_; 
v___x_106_ = lean_box(0);
v___y_100_ = v___x_106_;
goto v___jp_99_;
}
else
{
lean_object* v_val_107_; uint8_t v___x_108_; lean_object* v___x_109_; 
v_val_107_ = lean_ctor_get(v___x_97_, 0);
lean_inc(v_val_107_);
lean_dec_ref_known(v___x_97_, 1);
v___x_108_ = 0;
v___x_109_ = l_Lean_SourceInfo_getPos_x3f(v_val_107_, v___x_108_);
lean_dec(v_val_107_);
v___y_100_ = v___x_109_;
goto v___jp_99_;
}
v___jp_99_:
{
lean_object* v___f_101_; lean_object* v___x_102_; lean_object* v___x_103_; lean_object* v___x_104_; lean_object* v___x_105_; 
lean_inc(v_toBind_92_);
lean_inc_ref(v_str_94_);
v___f_101_ = lean_alloc_closure((void*)(l_Lean_validateDocComment___redArg___lam__2), 10, 9);
lean_closure_set(v___f_101_, 0, v_toPure_93_);
lean_closure_set(v___f_101_, 1, v___y_100_);
lean_closure_set(v___f_101_, 2, v_str_94_);
lean_closure_set(v___f_101_, 3, v_inst_85_);
lean_closure_set(v___f_101_, 4, v_inst_87_);
lean_closure_set(v___f_101_, 5, v_inst_88_);
lean_closure_set(v___f_101_, 6, v_inst_89_);
lean_closure_set(v___f_101_, 7, v_toBind_92_);
lean_closure_set(v___f_101_, 8, v___f_98_);
v___x_102_ = l_Lean_rewriteManualLinksCore(v_str_94_);
v___x_103_ = lean_alloc_closure((void*)(l_instMonadEIO___aux__5___boxed), 4, 3);
lean_closure_set(v___x_103_, 0, lean_box(0));
lean_closure_set(v___x_103_, 1, lean_box(0));
lean_closure_set(v___x_103_, 2, v___x_102_);
v___x_104_ = lean_apply_2(v_inst_86_, lean_box(0), v___x_103_);
v___x_105_ = lean_apply_4(v_toBind_92_, lean_box(0), lean_box(0), v___x_104_, v___f_101_);
return v___x_105_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_validateDocComment___redArg___boxed(lean_object* v_inst_110_, lean_object* v_inst_111_, lean_object* v_inst_112_, lean_object* v_inst_113_, lean_object* v_inst_114_, lean_object* v_docstring_115_){
_start:
{
lean_object* v_res_116_; 
v_res_116_ = l_Lean_validateDocComment___redArg(v_inst_110_, v_inst_111_, v_inst_112_, v_inst_113_, v_inst_114_, v_docstring_115_);
lean_dec(v_docstring_115_);
return v_res_116_;
}
}
LEAN_EXPORT lean_object* l_Lean_validateDocComment(lean_object* v_m_117_, lean_object* v_inst_118_, lean_object* v_inst_119_, lean_object* v_inst_120_, lean_object* v_inst_121_, lean_object* v_inst_122_, lean_object* v_docstring_123_){
_start:
{
lean_object* v___x_124_; 
v___x_124_ = l_Lean_validateDocComment___redArg(v_inst_118_, v_inst_119_, v_inst_120_, v_inst_121_, v_inst_122_, v_docstring_123_);
return v___x_124_;
}
}
LEAN_EXPORT lean_object* l_Lean_validateDocComment___boxed(lean_object* v_m_125_, lean_object* v_inst_126_, lean_object* v_inst_127_, lean_object* v_inst_128_, lean_object* v_inst_129_, lean_object* v_inst_130_, lean_object* v_docstring_131_){
_start:
{
lean_object* v_res_132_; 
v_res_132_ = l_Lean_validateDocComment(v_m_125_, v_inst_126_, v_inst_127_, v_inst_128_, v_inst_129_, v_inst_130_, v_docstring_131_);
lean_dec(v_docstring_131_);
return v_res_132_;
}
}
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___redArg___lam__0(lean_object* v_toPure_133_, lean_object* v_____r_134_){
_start:
{
lean_object* v___x_135_; lean_object* v___x_136_; 
v___x_135_ = lean_box(0);
v___x_136_ = lean_apply_2(v_toPure_133_, lean_box(0), v___x_135_);
return v___x_136_;
}
}
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___redArg___lam__1(lean_object* v_toPure_137_, lean_object* v_____s_138_){
_start:
{
lean_object* v___x_139_; lean_object* v___x_140_; 
v___x_139_ = lean_box(0);
v___x_140_ = lean_apply_2(v_toPure_137_, lean_box(0), v___x_139_);
return v___x_140_;
}
}
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___redArg___lam__2(lean_object* v___x_141_, lean_object* v_toPure_142_, lean_object* v_____r_143_){
_start:
{
lean_object* v___x_144_; lean_object* v___x_145_; 
v___x_144_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_144_, 0, v___x_141_);
v___x_145_ = lean_apply_2(v_toPure_142_, lean_box(0), v___x_144_);
return v___x_145_;
}
}
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___redArg___lam__3(lean_object* v_text_147_, lean_object* v_fst_148_, lean_object* v_snd_149_, uint8_t v___x_150_, lean_object* v_logMessage_151_, lean_object* v_toBind_152_, lean_object* v___f_153_, lean_object* v_____do__lift_154_){
_start:
{
lean_object* v___x_155_; lean_object* v___x_156_; uint8_t v___x_157_; lean_object* v___x_158_; lean_object* v___x_159_; lean_object* v___x_160_; lean_object* v___x_161_; lean_object* v___x_162_; lean_object* v___x_163_; lean_object* v___x_164_; 
v___x_155_ = l_Lean_FileMap_toPosition(v_text_147_, v_fst_148_);
v___x_156_ = lean_box(0);
v___x_157_ = 2;
v___x_158_ = ((lean_object*)(l_Lean_parseVersoDocString___redArg___lam__3___closed__0));
v___x_159_ = l_Lean_Parser_Error_toString(v_snd_149_);
v___x_160_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_160_, 0, v___x_159_);
v___x_161_ = l_Lean_MessageData_ofFormat(v___x_160_);
v___x_162_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_162_, 0, v_____do__lift_154_);
lean_ctor_set(v___x_162_, 1, v___x_155_);
lean_ctor_set(v___x_162_, 2, v___x_156_);
lean_ctor_set(v___x_162_, 3, v___x_158_);
lean_ctor_set(v___x_162_, 4, v___x_161_);
lean_ctor_set_uint8(v___x_162_, sizeof(void*)*5, v___x_150_);
lean_ctor_set_uint8(v___x_162_, sizeof(void*)*5 + 1, v___x_157_);
lean_ctor_set_uint8(v___x_162_, sizeof(void*)*5 + 2, v___x_150_);
v___x_163_ = lean_apply_1(v_logMessage_151_, v___x_162_);
v___x_164_ = lean_apply_4(v_toBind_152_, lean_box(0), lean_box(0), v___x_163_, v___f_153_);
return v___x_164_;
}
}
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___redArg___lam__3___boxed(lean_object* v_text_165_, lean_object* v_fst_166_, lean_object* v_snd_167_, lean_object* v___x_168_, lean_object* v_logMessage_169_, lean_object* v_toBind_170_, lean_object* v___f_171_, lean_object* v_____do__lift_172_){
_start:
{
uint8_t v___x_1478__boxed_173_; lean_object* v_res_174_; 
v___x_1478__boxed_173_ = lean_unbox(v___x_168_);
v_res_174_ = l_Lean_parseVersoDocString___redArg___lam__3(v_text_165_, v_fst_166_, v_snd_167_, v___x_1478__boxed_173_, v_logMessage_169_, v_toBind_170_, v___f_171_, v_____do__lift_172_);
lean_dec(v_fst_166_);
return v_res_174_;
}
}
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___redArg___lam__4(lean_object* v_text_175_, uint8_t v___x_176_, lean_object* v_logMessage_177_, lean_object* v_toBind_178_, lean_object* v___f_179_, lean_object* v_getFileName_180_, lean_object* v_a_181_, lean_object* v_x_182_, lean_object* v___y_183_){
_start:
{
lean_object* v_snd_184_; lean_object* v_fst_185_; lean_object* v_snd_186_; lean_object* v___x_187_; lean_object* v___f_188_; lean_object* v___x_189_; 
v_snd_184_ = lean_ctor_get(v_a_181_, 1);
lean_inc(v_snd_184_);
v_fst_185_ = lean_ctor_get(v_a_181_, 0);
lean_inc(v_fst_185_);
lean_dec_ref(v_a_181_);
v_snd_186_ = lean_ctor_get(v_snd_184_, 1);
lean_inc(v_snd_186_);
lean_dec(v_snd_184_);
v___x_187_ = lean_box(v___x_176_);
lean_inc(v_toBind_178_);
v___f_188_ = lean_alloc_closure((void*)(l_Lean_parseVersoDocString___redArg___lam__3___boxed), 8, 7);
lean_closure_set(v___f_188_, 0, v_text_175_);
lean_closure_set(v___f_188_, 1, v_fst_185_);
lean_closure_set(v___f_188_, 2, v_snd_186_);
lean_closure_set(v___f_188_, 3, v___x_187_);
lean_closure_set(v___f_188_, 4, v_logMessage_177_);
lean_closure_set(v___f_188_, 5, v_toBind_178_);
lean_closure_set(v___f_188_, 6, v___f_179_);
v___x_189_ = lean_apply_4(v_toBind_178_, lean_box(0), lean_box(0), v_getFileName_180_, v___f_188_);
return v___x_189_;
}
}
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___redArg___lam__4___boxed(lean_object* v_text_190_, lean_object* v___x_191_, lean_object* v_logMessage_192_, lean_object* v_toBind_193_, lean_object* v___f_194_, lean_object* v_getFileName_195_, lean_object* v_a_196_, lean_object* v_x_197_, lean_object* v___y_198_){
_start:
{
uint8_t v___x_1512__boxed_199_; lean_object* v_res_200_; 
v___x_1512__boxed_199_ = lean_unbox(v___x_191_);
v_res_200_ = l_Lean_parseVersoDocString___redArg___lam__4(v_text_190_, v___x_1512__boxed_199_, v_logMessage_192_, v_toBind_193_, v___f_194_, v_getFileName_195_, v_a_196_, v_x_197_, v___y_198_);
return v_res_200_;
}
}
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___redArg___lam__5(lean_object* v_text_203_, lean_object* v_pos_204_, lean_object* v_source_205_, uint8_t v___x_206_, lean_object* v_logMessage_207_, lean_object* v_toBind_208_, lean_object* v___f_209_, lean_object* v_____do__lift_210_){
_start:
{
lean_object* v___x_211_; lean_object* v___x_212_; uint8_t v___x_213_; lean_object* v___x_214_; lean_object* v___x_215_; uint32_t v___x_216_; lean_object* v___x_217_; lean_object* v___x_218_; lean_object* v___x_219_; lean_object* v___x_220_; lean_object* v___x_221_; lean_object* v___x_222_; lean_object* v___x_223_; lean_object* v___x_224_; lean_object* v___x_225_; 
v___x_211_ = l_Lean_FileMap_toPosition(v_text_203_, v_pos_204_);
v___x_212_ = lean_box(0);
v___x_213_ = 2;
v___x_214_ = ((lean_object*)(l_Lean_parseVersoDocString___redArg___lam__3___closed__0));
v___x_215_ = ((lean_object*)(l_Lean_parseVersoDocString___redArg___lam__5___closed__0));
v___x_216_ = lean_string_utf8_get(v_source_205_, v_pos_204_);
v___x_217_ = lean_string_push(v___x_214_, v___x_216_);
v___x_218_ = lean_string_append(v___x_215_, v___x_217_);
lean_dec_ref(v___x_217_);
v___x_219_ = ((lean_object*)(l_Lean_parseVersoDocString___redArg___lam__5___closed__1));
v___x_220_ = lean_string_append(v___x_218_, v___x_219_);
v___x_221_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_221_, 0, v___x_220_);
v___x_222_ = l_Lean_MessageData_ofFormat(v___x_221_);
v___x_223_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_223_, 0, v_____do__lift_210_);
lean_ctor_set(v___x_223_, 1, v___x_211_);
lean_ctor_set(v___x_223_, 2, v___x_212_);
lean_ctor_set(v___x_223_, 3, v___x_214_);
lean_ctor_set(v___x_223_, 4, v___x_222_);
lean_ctor_set_uint8(v___x_223_, sizeof(void*)*5, v___x_206_);
lean_ctor_set_uint8(v___x_223_, sizeof(void*)*5 + 1, v___x_213_);
lean_ctor_set_uint8(v___x_223_, sizeof(void*)*5 + 2, v___x_206_);
v___x_224_ = lean_apply_1(v_logMessage_207_, v___x_223_);
v___x_225_ = lean_apply_4(v_toBind_208_, lean_box(0), lean_box(0), v___x_224_, v___f_209_);
return v___x_225_;
}
}
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___redArg___lam__5___boxed(lean_object* v_text_226_, lean_object* v_pos_227_, lean_object* v_source_228_, lean_object* v___x_229_, lean_object* v_logMessage_230_, lean_object* v_toBind_231_, lean_object* v___f_232_, lean_object* v_____do__lift_233_){
_start:
{
uint8_t v___x_1542__boxed_234_; lean_object* v_res_235_; 
v___x_1542__boxed_234_ = lean_unbox(v___x_229_);
v_res_235_ = l_Lean_parseVersoDocString___redArg___lam__5(v_text_226_, v_pos_227_, v_source_228_, v___x_1542__boxed_234_, v_logMessage_230_, v_toBind_231_, v___f_232_, v_____do__lift_233_);
lean_dec_ref(v_source_228_);
lean_dec(v_pos_227_);
return v_res_235_;
}
}
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___redArg___lam__6(lean_object* v_toPure_236_, lean_object* v_text_237_, lean_object* v_logMessage_238_, lean_object* v_toBind_239_, lean_object* v_getFileName_240_, lean_object* v_inst_241_, lean_object* v___f_242_, lean_object* v_ictx_243_, lean_object* v_source_244_, lean_object* v___f_245_, lean_object* v_env_246_, lean_object* v_____do__lift_247_, lean_object* v_____do__lift_248_, lean_object* v_val_249_, lean_object* v___y_250_, lean_object* v___x_251_, lean_object* v_____do__lift_252_){
_start:
{
lean_object* v___y_254_; lean_object* v_pmctx_276_; lean_object* v_blockCtxt_277_; lean_object* v___x_278_; lean_object* v_s_279_; lean_object* v___x_280_; lean_object* v___x_281_; lean_object* v_s_282_; lean_object* v___x_283_; lean_object* v___x_284_; lean_object* v___x_285_; uint8_t v___x_286_; 
lean_inc_ref(v_env_246_);
v_pmctx_276_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_pmctx_276_, 0, v_env_246_);
lean_ctor_set(v_pmctx_276_, 1, v_____do__lift_247_);
lean_ctor_set(v_pmctx_276_, 2, v_____do__lift_248_);
lean_ctor_set(v_pmctx_276_, 3, v_____do__lift_252_);
lean_inc(v_val_249_);
lean_inc_ref(v_text_237_);
v_blockCtxt_277_ = l_Lean_Doc_Parser_BlockCtxt_forDocString(v_text_237_, v_val_249_, v___y_250_);
v___x_278_ = l_Lean_Parser_mkParserState(v_source_244_);
lean_inc_ref(v___x_278_);
v_s_279_ = l_Lean_Parser_ParserState_setPos(v___x_278_, v_val_249_);
v___x_280_ = lean_alloc_closure((void*)(l_Lean_Doc_Parser_document), 3, 1);
lean_closure_set(v___x_280_, 0, v_blockCtxt_277_);
v___x_281_ = l_Lean_Parser_getTokenTable(v_env_246_);
lean_inc_ref(v___x_281_);
lean_inc_ref(v_pmctx_276_);
lean_inc_ref(v_ictx_243_);
v_s_282_ = l_Lean_Parser_ParserFn_run(v___x_280_, v_ictx_243_, v_pmctx_276_, v___x_281_, v_s_279_);
lean_inc_ref(v_s_282_);
v___x_283_ = l_Lean_Parser_ParserState_allErrors(v_s_282_);
v___x_284_ = lean_array_get_size(v___x_283_);
lean_dec_ref(v___x_283_);
v___x_285_ = lean_unsigned_to_nat(0u);
v___x_286_ = lean_nat_dec_eq(v___x_284_, v___x_285_);
if (v___x_286_ == 0)
{
lean_dec_ref(v___x_281_);
lean_dec_ref(v___x_278_);
lean_dec_ref_known(v_pmctx_276_, 4);
lean_dec(v___x_251_);
v___y_254_ = v_s_282_;
goto v___jp_253_;
}
else
{
lean_object* v_pos_287_; uint8_t v___x_288_; 
v_pos_287_ = lean_ctor_get(v_s_282_, 2);
lean_inc(v_pos_287_);
v___x_288_ = l_Lean_Parser_InputContext_atEnd(v_ictx_243_, v_pos_287_);
if (v___x_288_ == 0)
{
lean_object* v___x_289_; lean_object* v___x_290_; lean_object* v___x_291_; lean_object* v___x_292_; lean_object* v___x_293_; lean_object* v___x_294_; lean_object* v___x_295_; 
lean_dec_ref(v_s_282_);
v___x_289_ = lean_box(0);
v___x_290_ = lean_box(0);
v___x_291_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_291_, 0, v___x_251_);
lean_ctor_set(v___x_291_, 1, v___x_285_);
v___x_292_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_292_, 0, v___x_285_);
lean_ctor_set(v___x_292_, 1, v___x_289_);
lean_ctor_set(v___x_292_, 2, v___x_290_);
lean_ctor_set(v___x_292_, 3, v___x_291_);
lean_ctor_set(v___x_292_, 4, v___x_285_);
v___x_293_ = lean_alloc_closure((void*)(l_Lean_Doc_Parser_block), 3, 1);
lean_closure_set(v___x_293_, 0, v___x_292_);
v___x_294_ = l_Lean_Parser_ParserState_setPos(v___x_278_, v_pos_287_);
lean_inc_ref(v_ictx_243_);
v___x_295_ = l_Lean_Parser_ParserFn_run(v___x_293_, v_ictx_243_, v_pmctx_276_, v___x_281_, v___x_294_);
v___y_254_ = v___x_295_;
goto v___jp_253_;
}
else
{
lean_dec(v_pos_287_);
lean_dec_ref(v___x_281_);
lean_dec_ref(v___x_278_);
lean_dec_ref_known(v_pmctx_276_, 4);
lean_dec(v___x_251_);
v___y_254_ = v_s_282_;
goto v___jp_253_;
}
}
v___jp_253_:
{
lean_object* v___x_255_; lean_object* v___x_256_; lean_object* v___x_257_; uint8_t v___x_258_; 
lean_inc_ref(v___y_254_);
v___x_255_ = l_Lean_Parser_ParserState_allErrors(v___y_254_);
v___x_256_ = lean_array_get_size(v___x_255_);
v___x_257_ = lean_unsigned_to_nat(0u);
v___x_258_ = lean_nat_dec_eq(v___x_256_, v___x_257_);
if (v___x_258_ == 0)
{
lean_object* v___x_259_; lean_object* v___f_260_; lean_object* v___x_261_; lean_object* v___f_262_; size_t v_sz_263_; size_t v___x_264_; lean_object* v___x_265_; lean_object* v___x_266_; 
lean_dec_ref(v___y_254_);
lean_dec(v___f_245_);
lean_dec_ref(v_source_244_);
lean_dec_ref(v_ictx_243_);
v___x_259_ = lean_box(0);
v___f_260_ = lean_alloc_closure((void*)(l_Lean_parseVersoDocString___redArg___lam__2), 3, 2);
lean_closure_set(v___f_260_, 0, v___x_259_);
lean_closure_set(v___f_260_, 1, v_toPure_236_);
v___x_261_ = lean_box(v___x_258_);
lean_inc(v_toBind_239_);
v___f_262_ = lean_alloc_closure((void*)(l_Lean_parseVersoDocString___redArg___lam__4___boxed), 9, 6);
lean_closure_set(v___f_262_, 0, v_text_237_);
lean_closure_set(v___f_262_, 1, v___x_261_);
lean_closure_set(v___f_262_, 2, v_logMessage_238_);
lean_closure_set(v___f_262_, 3, v_toBind_239_);
lean_closure_set(v___f_262_, 4, v___f_260_);
lean_closure_set(v___f_262_, 5, v_getFileName_240_);
v_sz_263_ = lean_array_size(v___x_255_);
v___x_264_ = ((size_t)0ULL);
v___x_265_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_box(0), lean_box(0), lean_box(0), v_inst_241_, v___x_255_, v___f_262_, v_sz_263_, v___x_264_, v___x_259_);
v___x_266_ = lean_apply_4(v_toBind_239_, lean_box(0), lean_box(0), v___x_265_, v___f_242_);
return v___x_266_;
}
else
{
lean_object* v_stxStack_267_; lean_object* v_pos_268_; uint8_t v___x_269_; 
lean_dec_ref(v___x_255_);
lean_dec(v___f_242_);
lean_dec_ref(v_inst_241_);
v_stxStack_267_ = lean_ctor_get(v___y_254_, 0);
lean_inc_ref(v_stxStack_267_);
v_pos_268_ = lean_ctor_get(v___y_254_, 2);
lean_inc(v_pos_268_);
lean_dec_ref(v___y_254_);
v___x_269_ = l_Lean_Parser_InputContext_atEnd(v_ictx_243_, v_pos_268_);
lean_dec_ref(v_ictx_243_);
if (v___x_269_ == 0)
{
lean_object* v___x_270_; lean_object* v___f_271_; lean_object* v___x_272_; 
lean_dec_ref(v_stxStack_267_);
lean_dec(v_toPure_236_);
v___x_270_ = lean_box(v___x_269_);
lean_inc(v_toBind_239_);
v___f_271_ = lean_alloc_closure((void*)(l_Lean_parseVersoDocString___redArg___lam__5___boxed), 8, 7);
lean_closure_set(v___f_271_, 0, v_text_237_);
lean_closure_set(v___f_271_, 1, v_pos_268_);
lean_closure_set(v___f_271_, 2, v_source_244_);
lean_closure_set(v___f_271_, 3, v___x_270_);
lean_closure_set(v___f_271_, 4, v_logMessage_238_);
lean_closure_set(v___f_271_, 5, v_toBind_239_);
lean_closure_set(v___f_271_, 6, v___f_245_);
v___x_272_ = lean_apply_4(v_toBind_239_, lean_box(0), lean_box(0), v_getFileName_240_, v___f_271_);
return v___x_272_;
}
else
{
lean_object* v___x_273_; lean_object* v___x_274_; lean_object* v___x_275_; 
lean_dec(v_pos_268_);
lean_dec(v___f_245_);
lean_dec_ref(v_source_244_);
lean_dec(v_getFileName_240_);
lean_dec(v_toBind_239_);
lean_dec(v_logMessage_238_);
lean_dec_ref(v_text_237_);
v___x_273_ = l_Lean_Parser_SyntaxStack_back(v_stxStack_267_);
lean_dec_ref(v_stxStack_267_);
v___x_274_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_274_, 0, v___x_273_);
v___x_275_ = lean_apply_2(v_toPure_236_, lean_box(0), v___x_274_);
return v___x_275_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___redArg___lam__6___boxed(lean_object** _args){
lean_object* v_toPure_296_ = _args[0];
lean_object* v_text_297_ = _args[1];
lean_object* v_logMessage_298_ = _args[2];
lean_object* v_toBind_299_ = _args[3];
lean_object* v_getFileName_300_ = _args[4];
lean_object* v_inst_301_ = _args[5];
lean_object* v___f_302_ = _args[6];
lean_object* v_ictx_303_ = _args[7];
lean_object* v_source_304_ = _args[8];
lean_object* v___f_305_ = _args[9];
lean_object* v_env_306_ = _args[10];
lean_object* v_____do__lift_307_ = _args[11];
lean_object* v_____do__lift_308_ = _args[12];
lean_object* v_val_309_ = _args[13];
lean_object* v___y_310_ = _args[14];
lean_object* v___x_311_ = _args[15];
lean_object* v_____do__lift_312_ = _args[16];
_start:
{
lean_object* v_res_313_; 
v_res_313_ = l_Lean_parseVersoDocString___redArg___lam__6(v_toPure_296_, v_text_297_, v_logMessage_298_, v_toBind_299_, v_getFileName_300_, v_inst_301_, v___f_302_, v_ictx_303_, v_source_304_, v___f_305_, v_env_306_, v_____do__lift_307_, v_____do__lift_308_, v_val_309_, v___y_310_, v___x_311_, v_____do__lift_312_);
return v_res_313_;
}
}
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___redArg___lam__7(lean_object* v_toPure_314_, lean_object* v_text_315_, lean_object* v_logMessage_316_, lean_object* v_toBind_317_, lean_object* v_getFileName_318_, lean_object* v_inst_319_, lean_object* v___f_320_, lean_object* v_ictx_321_, lean_object* v_source_322_, lean_object* v___f_323_, lean_object* v_env_324_, lean_object* v_____do__lift_325_, lean_object* v_val_326_, lean_object* v___y_327_, lean_object* v___x_328_, lean_object* v_getOpenDecls_329_, lean_object* v_____do__lift_330_){
_start:
{
lean_object* v___f_331_; lean_object* v___x_332_; 
lean_inc(v_toBind_317_);
v___f_331_ = lean_alloc_closure((void*)(l_Lean_parseVersoDocString___redArg___lam__6___boxed), 17, 16);
lean_closure_set(v___f_331_, 0, v_toPure_314_);
lean_closure_set(v___f_331_, 1, v_text_315_);
lean_closure_set(v___f_331_, 2, v_logMessage_316_);
lean_closure_set(v___f_331_, 3, v_toBind_317_);
lean_closure_set(v___f_331_, 4, v_getFileName_318_);
lean_closure_set(v___f_331_, 5, v_inst_319_);
lean_closure_set(v___f_331_, 6, v___f_320_);
lean_closure_set(v___f_331_, 7, v_ictx_321_);
lean_closure_set(v___f_331_, 8, v_source_322_);
lean_closure_set(v___f_331_, 9, v___f_323_);
lean_closure_set(v___f_331_, 10, v_env_324_);
lean_closure_set(v___f_331_, 11, v_____do__lift_325_);
lean_closure_set(v___f_331_, 12, v_____do__lift_330_);
lean_closure_set(v___f_331_, 13, v_val_326_);
lean_closure_set(v___f_331_, 14, v___y_327_);
lean_closure_set(v___f_331_, 15, v___x_328_);
v___x_332_ = lean_apply_4(v_toBind_317_, lean_box(0), lean_box(0), v_getOpenDecls_329_, v___f_331_);
return v___x_332_;
}
}
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___redArg___lam__7___boxed(lean_object** _args){
lean_object* v_toPure_333_ = _args[0];
lean_object* v_text_334_ = _args[1];
lean_object* v_logMessage_335_ = _args[2];
lean_object* v_toBind_336_ = _args[3];
lean_object* v_getFileName_337_ = _args[4];
lean_object* v_inst_338_ = _args[5];
lean_object* v___f_339_ = _args[6];
lean_object* v_ictx_340_ = _args[7];
lean_object* v_source_341_ = _args[8];
lean_object* v___f_342_ = _args[9];
lean_object* v_env_343_ = _args[10];
lean_object* v_____do__lift_344_ = _args[11];
lean_object* v_val_345_ = _args[12];
lean_object* v___y_346_ = _args[13];
lean_object* v___x_347_ = _args[14];
lean_object* v_getOpenDecls_348_ = _args[15];
lean_object* v_____do__lift_349_ = _args[16];
_start:
{
lean_object* v_res_350_; 
v_res_350_ = l_Lean_parseVersoDocString___redArg___lam__7(v_toPure_333_, v_text_334_, v_logMessage_335_, v_toBind_336_, v_getFileName_337_, v_inst_338_, v___f_339_, v_ictx_340_, v_source_341_, v___f_342_, v_env_343_, v_____do__lift_344_, v_val_345_, v___y_346_, v___x_347_, v_getOpenDecls_348_, v_____do__lift_349_);
return v_res_350_;
}
}
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___redArg___lam__8(lean_object* v_inst_351_, lean_object* v_toPure_352_, lean_object* v_text_353_, lean_object* v_logMessage_354_, lean_object* v_toBind_355_, lean_object* v_getFileName_356_, lean_object* v_inst_357_, lean_object* v___f_358_, lean_object* v_ictx_359_, lean_object* v_source_360_, lean_object* v___f_361_, lean_object* v_env_362_, lean_object* v_val_363_, lean_object* v___y_364_, lean_object* v___x_365_, lean_object* v_____do__lift_366_){
_start:
{
lean_object* v_getCurrNamespace_367_; lean_object* v_getOpenDecls_368_; lean_object* v___f_369_; lean_object* v___x_370_; 
v_getCurrNamespace_367_ = lean_ctor_get(v_inst_351_, 0);
lean_inc(v_getCurrNamespace_367_);
v_getOpenDecls_368_ = lean_ctor_get(v_inst_351_, 1);
lean_inc(v_getOpenDecls_368_);
lean_dec_ref(v_inst_351_);
lean_inc(v_toBind_355_);
v___f_369_ = lean_alloc_closure((void*)(l_Lean_parseVersoDocString___redArg___lam__7___boxed), 17, 16);
lean_closure_set(v___f_369_, 0, v_toPure_352_);
lean_closure_set(v___f_369_, 1, v_text_353_);
lean_closure_set(v___f_369_, 2, v_logMessage_354_);
lean_closure_set(v___f_369_, 3, v_toBind_355_);
lean_closure_set(v___f_369_, 4, v_getFileName_356_);
lean_closure_set(v___f_369_, 5, v_inst_357_);
lean_closure_set(v___f_369_, 6, v___f_358_);
lean_closure_set(v___f_369_, 7, v_ictx_359_);
lean_closure_set(v___f_369_, 8, v_source_360_);
lean_closure_set(v___f_369_, 9, v___f_361_);
lean_closure_set(v___f_369_, 10, v_env_362_);
lean_closure_set(v___f_369_, 11, v_____do__lift_366_);
lean_closure_set(v___f_369_, 12, v_val_363_);
lean_closure_set(v___f_369_, 13, v___y_364_);
lean_closure_set(v___f_369_, 14, v___x_365_);
lean_closure_set(v___f_369_, 15, v_getOpenDecls_368_);
v___x_370_ = lean_apply_4(v_toBind_355_, lean_box(0), lean_box(0), v_getCurrNamespace_367_, v___f_369_);
return v___x_370_;
}
}
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___redArg___lam__9(lean_object* v_source_371_, lean_object* v_text_372_, lean_object* v___y_373_, lean_object* v_inst_374_, lean_object* v_toPure_375_, lean_object* v_logMessage_376_, lean_object* v_toBind_377_, lean_object* v_getFileName_378_, lean_object* v_inst_379_, lean_object* v___f_380_, lean_object* v___f_381_, lean_object* v_env_382_, lean_object* v_val_383_, lean_object* v___x_384_, lean_object* v_inst_385_, lean_object* v_____do__lift_386_){
_start:
{
lean_object* v_ictx_387_; lean_object* v___f_388_; lean_object* v___x_389_; 
lean_inc(v___y_373_);
lean_inc_ref(v_text_372_);
lean_inc_ref(v_source_371_);
v_ictx_387_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_ictx_387_, 0, v_source_371_);
lean_ctor_set(v_ictx_387_, 1, v_____do__lift_386_);
lean_ctor_set(v_ictx_387_, 2, v_text_372_);
lean_ctor_set(v_ictx_387_, 3, v___y_373_);
lean_inc(v_toBind_377_);
v___f_388_ = lean_alloc_closure((void*)(l_Lean_parseVersoDocString___redArg___lam__8), 16, 15);
lean_closure_set(v___f_388_, 0, v_inst_374_);
lean_closure_set(v___f_388_, 1, v_toPure_375_);
lean_closure_set(v___f_388_, 2, v_text_372_);
lean_closure_set(v___f_388_, 3, v_logMessage_376_);
lean_closure_set(v___f_388_, 4, v_toBind_377_);
lean_closure_set(v___f_388_, 5, v_getFileName_378_);
lean_closure_set(v___f_388_, 6, v_inst_379_);
lean_closure_set(v___f_388_, 7, v___f_380_);
lean_closure_set(v___f_388_, 8, v_ictx_387_);
lean_closure_set(v___f_388_, 9, v_source_371_);
lean_closure_set(v___f_388_, 10, v___f_381_);
lean_closure_set(v___f_388_, 11, v_env_382_);
lean_closure_set(v___f_388_, 12, v_val_383_);
lean_closure_set(v___f_388_, 13, v___y_373_);
lean_closure_set(v___f_388_, 14, v___x_384_);
v___x_389_ = lean_apply_4(v_toBind_377_, lean_box(0), lean_box(0), v_inst_385_, v___f_388_);
return v___x_389_;
}
}
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___redArg___lam__10(lean_object* v_inst_390_, lean_object* v_source_391_, lean_object* v_text_392_, lean_object* v___y_393_, lean_object* v_inst_394_, lean_object* v_toPure_395_, lean_object* v_toBind_396_, lean_object* v_inst_397_, lean_object* v___f_398_, lean_object* v___f_399_, lean_object* v_val_400_, lean_object* v___x_401_, lean_object* v_inst_402_, lean_object* v_env_403_){
_start:
{
lean_object* v_getFileName_404_; lean_object* v_logMessage_405_; lean_object* v___f_406_; lean_object* v___x_407_; 
v_getFileName_404_ = lean_ctor_get(v_inst_390_, 2);
lean_inc_n(v_getFileName_404_, 2);
v_logMessage_405_ = lean_ctor_get(v_inst_390_, 4);
lean_inc(v_logMessage_405_);
lean_dec_ref(v_inst_390_);
lean_inc(v_toBind_396_);
v___f_406_ = lean_alloc_closure((void*)(l_Lean_parseVersoDocString___redArg___lam__9), 16, 15);
lean_closure_set(v___f_406_, 0, v_source_391_);
lean_closure_set(v___f_406_, 1, v_text_392_);
lean_closure_set(v___f_406_, 2, v___y_393_);
lean_closure_set(v___f_406_, 3, v_inst_394_);
lean_closure_set(v___f_406_, 4, v_toPure_395_);
lean_closure_set(v___f_406_, 5, v_logMessage_405_);
lean_closure_set(v___f_406_, 6, v_toBind_396_);
lean_closure_set(v___f_406_, 7, v_getFileName_404_);
lean_closure_set(v___f_406_, 8, v_inst_397_);
lean_closure_set(v___f_406_, 9, v___f_398_);
lean_closure_set(v___f_406_, 10, v___f_399_);
lean_closure_set(v___f_406_, 11, v_env_403_);
lean_closure_set(v___f_406_, 12, v_val_400_);
lean_closure_set(v___f_406_, 13, v___x_401_);
lean_closure_set(v___f_406_, 14, v_inst_402_);
v___x_407_ = lean_apply_4(v_toBind_396_, lean_box(0), lean_box(0), v_getFileName_404_, v___f_406_);
return v___x_407_;
}
}
static lean_object* _init_l_Lean_parseVersoDocString___redArg___lam__11___closed__1(void){
_start:
{
lean_object* v___x_409_; lean_object* v___x_410_; 
v___x_409_ = ((lean_object*)(l_Lean_parseVersoDocString___redArg___lam__11___closed__0));
v___x_410_ = l_Lean_stringToMessageData(v___x_409_);
return v___x_410_;
}
}
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___redArg___lam__11(lean_object* v_docComment_411_, lean_object* v_inst_412_, lean_object* v_inst_413_, lean_object* v_inst_414_, lean_object* v_toPure_415_, lean_object* v_toBind_416_, lean_object* v_inst_417_, lean_object* v___f_418_, lean_object* v___f_419_, lean_object* v_inst_420_, lean_object* v_inst_421_, lean_object* v_text_422_){
_start:
{
lean_object* v___x_423_; lean_object* v___x_424_; uint8_t v___x_425_; lean_object* v___x_426_; 
v___x_423_ = lean_unsigned_to_nat(1u);
v___x_424_ = l_Lean_Syntax_getArg(v_docComment_411_, v___x_423_);
v___x_425_ = 1;
v___x_426_ = l_Lean_Syntax_getPos_x3f(v___x_424_, v___x_425_);
if (lean_obj_tag(v___x_426_) == 1)
{
lean_object* v_val_427_; lean_object* v___x_428_; 
v_val_427_ = lean_ctor_get(v___x_426_, 0);
lean_inc(v_val_427_);
lean_dec_ref_known(v___x_426_, 1);
v___x_428_ = l_Lean_Syntax_getTailPos_x3f(v___x_424_, v___x_425_);
lean_dec(v___x_424_);
if (lean_obj_tag(v___x_428_) == 1)
{
lean_object* v_val_429_; lean_object* v_source_430_; lean_object* v___y_432_; lean_object* v___x_436_; lean_object* v_endPos_437_; lean_object* v___x_438_; uint8_t v___x_439_; 
lean_dec_ref(v_inst_421_);
lean_dec(v_docComment_411_);
v_val_429_ = lean_ctor_get(v___x_428_, 0);
lean_inc(v_val_429_);
lean_dec_ref_known(v___x_428_, 1);
v_source_430_ = lean_ctor_get(v_text_422_, 0);
lean_inc_ref(v_source_430_);
v___x_436_ = lean_string_utf8_prev(v_source_430_, v_val_429_);
lean_dec(v_val_429_);
v_endPos_437_ = lean_string_utf8_prev(v_source_430_, v___x_436_);
lean_dec(v___x_436_);
v___x_438_ = lean_string_utf8_byte_size(v_source_430_);
v___x_439_ = lean_nat_dec_le(v_endPos_437_, v___x_438_);
if (v___x_439_ == 0)
{
lean_dec(v_endPos_437_);
v___y_432_ = v___x_438_;
goto v___jp_431_;
}
else
{
v___y_432_ = v_endPos_437_;
goto v___jp_431_;
}
v___jp_431_:
{
lean_object* v_getEnv_433_; lean_object* v___f_434_; lean_object* v___x_435_; 
v_getEnv_433_ = lean_ctor_get(v_inst_412_, 0);
lean_inc(v_getEnv_433_);
lean_dec_ref(v_inst_412_);
lean_inc(v_toBind_416_);
v___f_434_ = lean_alloc_closure((void*)(l_Lean_parseVersoDocString___redArg___lam__10), 14, 13);
lean_closure_set(v___f_434_, 0, v_inst_413_);
lean_closure_set(v___f_434_, 1, v_source_430_);
lean_closure_set(v___f_434_, 2, v_text_422_);
lean_closure_set(v___f_434_, 3, v___y_432_);
lean_closure_set(v___f_434_, 4, v_inst_414_);
lean_closure_set(v___f_434_, 5, v_toPure_415_);
lean_closure_set(v___f_434_, 6, v_toBind_416_);
lean_closure_set(v___f_434_, 7, v_inst_417_);
lean_closure_set(v___f_434_, 8, v___f_418_);
lean_closure_set(v___f_434_, 9, v___f_419_);
lean_closure_set(v___f_434_, 10, v_val_427_);
lean_closure_set(v___f_434_, 11, v___x_423_);
lean_closure_set(v___f_434_, 12, v_inst_420_);
v___x_435_ = lean_apply_4(v_toBind_416_, lean_box(0), lean_box(0), v_getEnv_433_, v___f_434_);
return v___x_435_;
}
}
else
{
lean_object* v___x_440_; lean_object* v___x_441_; 
lean_dec(v___x_428_);
lean_dec(v_val_427_);
lean_dec_ref(v_text_422_);
lean_dec(v_inst_420_);
lean_dec(v___f_419_);
lean_dec(v___f_418_);
lean_dec(v_toBind_416_);
lean_dec(v_toPure_415_);
lean_dec_ref(v_inst_414_);
lean_dec_ref(v_inst_413_);
lean_dec_ref(v_inst_412_);
v___x_440_ = lean_obj_once(&l_Lean_parseVersoDocString___redArg___lam__11___closed__1, &l_Lean_parseVersoDocString___redArg___lam__11___closed__1_once, _init_l_Lean_parseVersoDocString___redArg___lam__11___closed__1);
v___x_441_ = l_Lean_throwErrorAt___redArg(v_inst_417_, v_inst_421_, v_docComment_411_, v___x_440_);
return v___x_441_;
}
}
else
{
lean_object* v___x_442_; lean_object* v___x_443_; 
lean_dec(v___x_426_);
lean_dec(v___x_424_);
lean_dec_ref(v_text_422_);
lean_dec(v_inst_420_);
lean_dec(v___f_419_);
lean_dec(v___f_418_);
lean_dec(v_toBind_416_);
lean_dec(v_toPure_415_);
lean_dec_ref(v_inst_414_);
lean_dec_ref(v_inst_413_);
lean_dec_ref(v_inst_412_);
v___x_442_ = lean_obj_once(&l_Lean_parseVersoDocString___redArg___lam__11___closed__1, &l_Lean_parseVersoDocString___redArg___lam__11___closed__1_once, _init_l_Lean_parseVersoDocString___redArg___lam__11___closed__1);
v___x_443_ = l_Lean_throwErrorAt___redArg(v_inst_417_, v_inst_421_, v_docComment_411_, v___x_442_);
return v___x_443_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___redArg(lean_object* v_inst_454_, lean_object* v_inst_455_, lean_object* v_inst_456_, lean_object* v_inst_457_, lean_object* v_inst_458_, lean_object* v_inst_459_, lean_object* v_inst_460_, lean_object* v_docComment_461_){
_start:
{
lean_object* v_toApplicative_462_; lean_object* v_toBind_463_; lean_object* v_toPure_464_; lean_object* v___f_465_; lean_object* v___f_466_; lean_object* v___f_467_; lean_object* v___x_468_; lean_object* v___x_469_; lean_object* v___x_470_; lean_object* v___x_471_; lean_object* v___x_472_; uint8_t v___x_473_; 
v_toApplicative_462_ = lean_ctor_get(v_inst_454_, 0);
v_toBind_463_ = lean_ctor_get(v_inst_454_, 1);
lean_inc_n(v_toBind_463_, 2);
v_toPure_464_ = lean_ctor_get(v_toApplicative_462_, 1);
lean_inc_n(v_toPure_464_, 4);
v___f_465_ = lean_alloc_closure((void*)(l_Lean_parseVersoDocString___redArg___lam__0), 2, 1);
lean_closure_set(v___f_465_, 0, v_toPure_464_);
v___f_466_ = lean_alloc_closure((void*)(l_Lean_parseVersoDocString___redArg___lam__1), 2, 1);
lean_closure_set(v___f_466_, 0, v_toPure_464_);
lean_inc_n(v_docComment_461_, 2);
v___f_467_ = lean_alloc_closure((void*)(l_Lean_parseVersoDocString___redArg___lam__11), 12, 11);
lean_closure_set(v___f_467_, 0, v_docComment_461_);
lean_closure_set(v___f_467_, 1, v_inst_457_);
lean_closure_set(v___f_467_, 2, v_inst_459_);
lean_closure_set(v___f_467_, 3, v_inst_460_);
lean_closure_set(v___f_467_, 4, v_toPure_464_);
lean_closure_set(v___f_467_, 5, v_toBind_463_);
lean_closure_set(v___f_467_, 6, v_inst_454_);
lean_closure_set(v___f_467_, 7, v___f_466_);
lean_closure_set(v___f_467_, 8, v___f_465_);
lean_closure_set(v___f_467_, 9, v_inst_458_);
lean_closure_set(v___f_467_, 10, v_inst_456_);
v___x_468_ = l_Lean_Syntax_getKind(v_docComment_461_);
v___x_469_ = ((lean_object*)(l_Lean_parseVersoDocString___redArg___closed__0));
v___x_470_ = ((lean_object*)(l_Lean_parseVersoDocString___redArg___closed__1));
v___x_471_ = ((lean_object*)(l_Lean_parseVersoDocString___redArg___closed__2));
v___x_472_ = ((lean_object*)(l_Lean_parseVersoDocString___redArg___closed__4));
v___x_473_ = lean_name_eq(v___x_468_, v___x_472_);
lean_dec(v___x_468_);
if (v___x_473_ == 0)
{
lean_object* v___x_474_; 
lean_dec(v_toPure_464_);
lean_dec(v_docComment_461_);
v___x_474_ = lean_apply_4(v_toBind_463_, lean_box(0), lean_box(0), v_inst_455_, v___f_467_);
return v___x_474_;
}
else
{
lean_object* v___x_475_; lean_object* v___x_476_; 
v___x_475_ = lean_unsigned_to_nat(0u);
v___x_476_ = l_Lean_Syntax_getArg(v_docComment_461_, v___x_475_);
lean_dec(v_docComment_461_);
if (lean_obj_tag(v___x_476_) == 1)
{
lean_object* v_kind_477_; 
v_kind_477_ = lean_ctor_get(v___x_476_, 1);
lean_inc(v_kind_477_);
if (lean_obj_tag(v_kind_477_) == 1)
{
lean_object* v_pre_478_; 
v_pre_478_ = lean_ctor_get(v_kind_477_, 0);
lean_inc(v_pre_478_);
if (lean_obj_tag(v_pre_478_) == 1)
{
lean_object* v_pre_479_; 
v_pre_479_ = lean_ctor_get(v_pre_478_, 0);
lean_inc(v_pre_479_);
if (lean_obj_tag(v_pre_479_) == 1)
{
lean_object* v_pre_480_; 
v_pre_480_ = lean_ctor_get(v_pre_479_, 0);
lean_inc(v_pre_480_);
if (lean_obj_tag(v_pre_480_) == 1)
{
lean_object* v_pre_481_; 
v_pre_481_ = lean_ctor_get(v_pre_480_, 0);
lean_inc(v_pre_481_);
if (lean_obj_tag(v_pre_481_) == 0)
{
lean_object* v_info_482_; lean_object* v_args_483_; lean_object* v___x_485_; uint8_t v_isShared_486_; uint8_t v_isSharedCheck_511_; 
v_info_482_ = lean_ctor_get(v___x_476_, 0);
v_args_483_ = lean_ctor_get(v___x_476_, 2);
v_isSharedCheck_511_ = !lean_is_exclusive(v___x_476_);
if (v_isSharedCheck_511_ == 0)
{
lean_object* v_unused_512_; 
v_unused_512_ = lean_ctor_get(v___x_476_, 1);
lean_dec(v_unused_512_);
v___x_485_ = v___x_476_;
v_isShared_486_ = v_isSharedCheck_511_;
goto v_resetjp_484_;
}
else
{
lean_inc(v_args_483_);
lean_inc(v_info_482_);
lean_dec(v___x_476_);
v___x_485_ = lean_box(0);
v_isShared_486_ = v_isSharedCheck_511_;
goto v_resetjp_484_;
}
v_resetjp_484_:
{
lean_object* v_str_487_; lean_object* v_str_488_; lean_object* v_str_489_; lean_object* v_str_490_; uint8_t v___x_491_; 
v_str_487_ = lean_ctor_get(v_kind_477_, 1);
lean_inc_ref(v_str_487_);
lean_dec_ref_known(v_kind_477_, 2);
v_str_488_ = lean_ctor_get(v_pre_478_, 1);
lean_inc_ref(v_str_488_);
lean_dec_ref_known(v_pre_478_, 2);
v_str_489_ = lean_ctor_get(v_pre_479_, 1);
lean_inc_ref(v_str_489_);
lean_dec_ref_known(v_pre_479_, 2);
v_str_490_ = lean_ctor_get(v_pre_480_, 1);
lean_inc_ref(v_str_490_);
lean_dec_ref_known(v_pre_480_, 2);
v___x_491_ = lean_string_dec_eq(v_str_490_, v___x_469_);
lean_dec_ref(v_str_490_);
if (v___x_491_ == 0)
{
lean_object* v___x_492_; 
lean_dec_ref(v_str_489_);
lean_dec_ref(v_str_488_);
lean_dec_ref(v_str_487_);
lean_del_object(v___x_485_);
lean_dec_ref(v_args_483_);
lean_dec(v_info_482_);
lean_dec(v_toPure_464_);
v___x_492_ = lean_apply_4(v_toBind_463_, lean_box(0), lean_box(0), v_inst_455_, v___f_467_);
return v___x_492_;
}
else
{
uint8_t v___x_493_; 
v___x_493_ = lean_string_dec_eq(v_str_489_, v___x_470_);
lean_dec_ref(v_str_489_);
if (v___x_493_ == 0)
{
lean_object* v___x_494_; 
lean_dec_ref(v_str_488_);
lean_dec_ref(v_str_487_);
lean_del_object(v___x_485_);
lean_dec_ref(v_args_483_);
lean_dec(v_info_482_);
lean_dec(v_toPure_464_);
v___x_494_ = lean_apply_4(v_toBind_463_, lean_box(0), lean_box(0), v_inst_455_, v___f_467_);
return v___x_494_;
}
else
{
uint8_t v___x_495_; 
v___x_495_ = lean_string_dec_eq(v_str_488_, v___x_471_);
lean_dec_ref(v_str_488_);
if (v___x_495_ == 0)
{
lean_object* v___x_496_; 
lean_dec_ref(v_str_487_);
lean_del_object(v___x_485_);
lean_dec_ref(v_args_483_);
lean_dec(v_info_482_);
lean_dec(v_toPure_464_);
v___x_496_ = lean_apply_4(v_toBind_463_, lean_box(0), lean_box(0), v_inst_455_, v___f_467_);
return v___x_496_;
}
else
{
lean_object* v___x_497_; uint8_t v___x_498_; 
v___x_497_ = ((lean_object*)(l_Lean_parseVersoDocString___redArg___closed__5));
v___x_498_ = lean_string_dec_eq(v_str_487_, v___x_497_);
lean_dec_ref(v_str_487_);
if (v___x_498_ == 0)
{
lean_object* v___x_499_; 
lean_del_object(v___x_485_);
lean_dec_ref(v_args_483_);
lean_dec(v_info_482_);
lean_dec(v_toPure_464_);
v___x_499_ = lean_apply_4(v_toBind_463_, lean_box(0), lean_box(0), v_inst_455_, v___f_467_);
return v___x_499_;
}
else
{
lean_object* v___x_500_; lean_object* v___x_501_; lean_object* v___x_502_; lean_object* v___x_503_; lean_object* v___x_505_; 
lean_dec_ref(v___f_467_);
lean_dec(v_toBind_463_);
lean_dec(v_inst_455_);
v___x_500_ = l_Lean_Name_str___override(v_pre_481_, v___x_469_);
v___x_501_ = l_Lean_Name_str___override(v___x_500_, v___x_470_);
v___x_502_ = l_Lean_Name_str___override(v___x_501_, v___x_471_);
v___x_503_ = l_Lean_Name_str___override(v___x_502_, v___x_497_);
if (v_isShared_486_ == 0)
{
lean_ctor_set(v___x_485_, 1, v___x_503_);
v___x_505_ = v___x_485_;
goto v_reusejp_504_;
}
else
{
lean_object* v_reuseFailAlloc_510_; 
v_reuseFailAlloc_510_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_510_, 0, v_info_482_);
lean_ctor_set(v_reuseFailAlloc_510_, 1, v___x_503_);
lean_ctor_set(v_reuseFailAlloc_510_, 2, v_args_483_);
v___x_505_ = v_reuseFailAlloc_510_;
goto v_reusejp_504_;
}
v_reusejp_504_:
{
lean_object* v___x_506_; lean_object* v___x_507_; lean_object* v___x_508_; lean_object* v___x_509_; 
v___x_506_ = lean_unsigned_to_nat(1u);
v___x_507_ = l_Lean_Syntax_getArg(v___x_505_, v___x_506_);
lean_dec_ref(v___x_505_);
v___x_508_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_508_, 0, v___x_507_);
v___x_509_ = lean_apply_2(v_toPure_464_, lean_box(0), v___x_508_);
return v___x_509_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_513_; 
lean_dec_ref_known(v_pre_480_, 2);
lean_dec(v_pre_481_);
lean_dec_ref_known(v_pre_479_, 2);
lean_dec_ref_known(v_pre_478_, 2);
lean_dec_ref_known(v_kind_477_, 2);
lean_dec_ref_known(v___x_476_, 3);
lean_dec(v_toPure_464_);
v___x_513_ = lean_apply_4(v_toBind_463_, lean_box(0), lean_box(0), v_inst_455_, v___f_467_);
return v___x_513_;
}
}
else
{
lean_object* v___x_514_; 
lean_dec(v_pre_480_);
lean_dec_ref_known(v_pre_479_, 2);
lean_dec_ref_known(v_pre_478_, 2);
lean_dec_ref_known(v_kind_477_, 2);
lean_dec_ref_known(v___x_476_, 3);
lean_dec(v_toPure_464_);
v___x_514_ = lean_apply_4(v_toBind_463_, lean_box(0), lean_box(0), v_inst_455_, v___f_467_);
return v___x_514_;
}
}
else
{
lean_object* v___x_515_; 
lean_dec(v_pre_479_);
lean_dec_ref_known(v_pre_478_, 2);
lean_dec_ref_known(v_kind_477_, 2);
lean_dec_ref_known(v___x_476_, 3);
lean_dec(v_toPure_464_);
v___x_515_ = lean_apply_4(v_toBind_463_, lean_box(0), lean_box(0), v_inst_455_, v___f_467_);
return v___x_515_;
}
}
else
{
lean_object* v___x_516_; 
lean_dec_ref_known(v_kind_477_, 2);
lean_dec(v_pre_478_);
lean_dec_ref_known(v___x_476_, 3);
lean_dec(v_toPure_464_);
v___x_516_ = lean_apply_4(v_toBind_463_, lean_box(0), lean_box(0), v_inst_455_, v___f_467_);
return v___x_516_;
}
}
else
{
lean_object* v___x_517_; 
lean_dec(v_kind_477_);
lean_dec_ref_known(v___x_476_, 3);
lean_dec(v_toPure_464_);
v___x_517_ = lean_apply_4(v_toBind_463_, lean_box(0), lean_box(0), v_inst_455_, v___f_467_);
return v___x_517_;
}
}
else
{
lean_object* v___x_518_; 
lean_dec(v___x_476_);
lean_dec(v_toPure_464_);
v___x_518_ = lean_apply_4(v_toBind_463_, lean_box(0), lean_box(0), v_inst_455_, v___f_467_);
return v___x_518_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString(lean_object* v_m_519_, lean_object* v_inst_520_, lean_object* v_inst_521_, lean_object* v_inst_522_, lean_object* v_inst_523_, lean_object* v_inst_524_, lean_object* v_inst_525_, lean_object* v_inst_526_, lean_object* v_docComment_527_){
_start:
{
lean_object* v___x_528_; 
v___x_528_ = l_Lean_parseVersoDocString___redArg(v_inst_520_, v_inst_521_, v_inst_522_, v_inst_523_, v_inst_524_, v_inst_525_, v_inst_526_, v_docComment_527_);
return v___x_528_;
}
}
LEAN_EXPORT lean_object* l_Lean_reportVersoParseFailure___redArg___lam__0(lean_object* v_text_529_, lean_object* v_pos_530_, lean_object* v_source_531_, uint8_t v___x_532_, lean_object* v_logMessage_533_, lean_object* v_____do__lift_534_){
_start:
{
lean_object* v___x_535_; lean_object* v___x_536_; uint8_t v___x_537_; lean_object* v___x_538_; lean_object* v___x_539_; uint32_t v___x_540_; lean_object* v___x_541_; lean_object* v___x_542_; lean_object* v___x_543_; lean_object* v___x_544_; lean_object* v___x_545_; lean_object* v___x_546_; lean_object* v___x_547_; lean_object* v___x_548_; 
v___x_535_ = l_Lean_FileMap_toPosition(v_text_529_, v_pos_530_);
v___x_536_ = lean_box(0);
v___x_537_ = 2;
v___x_538_ = ((lean_object*)(l_Lean_parseVersoDocString___redArg___lam__3___closed__0));
v___x_539_ = ((lean_object*)(l_Lean_parseVersoDocString___redArg___lam__5___closed__0));
v___x_540_ = lean_string_utf8_get(v_source_531_, v_pos_530_);
v___x_541_ = lean_string_push(v___x_538_, v___x_540_);
v___x_542_ = lean_string_append(v___x_539_, v___x_541_);
lean_dec_ref(v___x_541_);
v___x_543_ = ((lean_object*)(l_Lean_parseVersoDocString___redArg___lam__5___closed__1));
v___x_544_ = lean_string_append(v___x_542_, v___x_543_);
v___x_545_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_545_, 0, v___x_544_);
v___x_546_ = l_Lean_MessageData_ofFormat(v___x_545_);
v___x_547_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_547_, 0, v_____do__lift_534_);
lean_ctor_set(v___x_547_, 1, v___x_535_);
lean_ctor_set(v___x_547_, 2, v___x_536_);
lean_ctor_set(v___x_547_, 3, v___x_538_);
lean_ctor_set(v___x_547_, 4, v___x_546_);
lean_ctor_set_uint8(v___x_547_, sizeof(void*)*5, v___x_532_);
lean_ctor_set_uint8(v___x_547_, sizeof(void*)*5 + 1, v___x_537_);
lean_ctor_set_uint8(v___x_547_, sizeof(void*)*5 + 2, v___x_532_);
v___x_548_ = lean_apply_1(v_logMessage_533_, v___x_547_);
return v___x_548_;
}
}
LEAN_EXPORT lean_object* l_Lean_reportVersoParseFailure___redArg___lam__0___boxed(lean_object* v_text_549_, lean_object* v_pos_550_, lean_object* v_source_551_, lean_object* v___x_552_, lean_object* v_logMessage_553_, lean_object* v_____do__lift_554_){
_start:
{
uint8_t v___x_1167__boxed_555_; lean_object* v_res_556_; 
v___x_1167__boxed_555_ = lean_unbox(v___x_552_);
v_res_556_ = l_Lean_reportVersoParseFailure___redArg___lam__0(v_text_549_, v_pos_550_, v_source_551_, v___x_1167__boxed_555_, v_logMessage_553_, v_____do__lift_554_);
lean_dec_ref(v_source_551_);
lean_dec(v_pos_550_);
return v_res_556_;
}
}
LEAN_EXPORT lean_object* l_Lean_reportVersoParseFailure___redArg___lam__1(lean_object* v_toPure_557_, lean_object* v___x_558_, lean_object* v___x_559_, lean_object* v___y_560_, lean_object* v_ictx_561_, lean_object* v_text_562_, lean_object* v_source_563_, lean_object* v_logMessage_564_, lean_object* v_toBind_565_, lean_object* v_getFileName_566_, lean_object* v_____s_567_){
_start:
{
lean_object* v___x_571_; uint8_t v___x_572_; 
v___x_571_ = lean_array_get_size(v___x_558_);
v___x_572_ = lean_nat_dec_eq(v___x_571_, v___x_559_);
if (v___x_572_ == 0)
{
lean_dec(v_getFileName_566_);
lean_dec(v_toBind_565_);
lean_dec(v_logMessage_564_);
lean_dec_ref(v_source_563_);
lean_dec_ref(v_text_562_);
lean_dec_ref(v___y_560_);
goto v___jp_568_;
}
else
{
lean_object* v_pos_573_; uint8_t v___x_574_; 
v_pos_573_ = lean_ctor_get(v___y_560_, 2);
lean_inc(v_pos_573_);
lean_dec_ref(v___y_560_);
v___x_574_ = l_Lean_Parser_InputContext_atEnd(v_ictx_561_, v_pos_573_);
if (v___x_574_ == 0)
{
lean_object* v___x_575_; lean_object* v___f_576_; lean_object* v___x_577_; 
lean_dec(v_toPure_557_);
v___x_575_ = lean_box(v___x_574_);
v___f_576_ = lean_alloc_closure((void*)(l_Lean_reportVersoParseFailure___redArg___lam__0___boxed), 6, 5);
lean_closure_set(v___f_576_, 0, v_text_562_);
lean_closure_set(v___f_576_, 1, v_pos_573_);
lean_closure_set(v___f_576_, 2, v_source_563_);
lean_closure_set(v___f_576_, 3, v___x_575_);
lean_closure_set(v___f_576_, 4, v_logMessage_564_);
v___x_577_ = lean_apply_4(v_toBind_565_, lean_box(0), lean_box(0), v_getFileName_566_, v___f_576_);
return v___x_577_;
}
else
{
lean_dec(v_pos_573_);
lean_dec(v_getFileName_566_);
lean_dec(v_toBind_565_);
lean_dec(v_logMessage_564_);
lean_dec_ref(v_source_563_);
lean_dec_ref(v_text_562_);
goto v___jp_568_;
}
}
v___jp_568_:
{
lean_object* v___x_569_; lean_object* v___x_570_; 
v___x_569_ = lean_box(0);
v___x_570_ = lean_apply_2(v_toPure_557_, lean_box(0), v___x_569_);
return v___x_570_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_reportVersoParseFailure___redArg___lam__1___boxed(lean_object* v_toPure_578_, lean_object* v___x_579_, lean_object* v___x_580_, lean_object* v___y_581_, lean_object* v_ictx_582_, lean_object* v_text_583_, lean_object* v_source_584_, lean_object* v_logMessage_585_, lean_object* v_toBind_586_, lean_object* v_getFileName_587_, lean_object* v_____s_588_){
_start:
{
lean_object* v_res_589_; 
v_res_589_ = l_Lean_reportVersoParseFailure___redArg___lam__1(v_toPure_578_, v___x_579_, v___x_580_, v___y_581_, v_ictx_582_, v_text_583_, v_source_584_, v_logMessage_585_, v_toBind_586_, v_getFileName_587_, v_____s_588_);
lean_dec_ref(v_ictx_582_);
lean_dec(v___x_580_);
lean_dec_ref(v___x_579_);
return v_res_589_;
}
}
LEAN_EXPORT lean_object* l_Lean_reportVersoParseFailure___redArg___lam__3(lean_object* v_text_590_, lean_object* v_fst_591_, lean_object* v_snd_592_, lean_object* v_logMessage_593_, lean_object* v_toBind_594_, lean_object* v___f_595_, lean_object* v_____do__lift_596_){
_start:
{
lean_object* v___x_597_; lean_object* v___x_598_; uint8_t v___x_599_; uint8_t v___x_600_; lean_object* v___x_601_; lean_object* v___x_602_; lean_object* v___x_603_; lean_object* v___x_604_; lean_object* v___x_605_; lean_object* v___x_606_; lean_object* v___x_607_; 
v___x_597_ = l_Lean_FileMap_toPosition(v_text_590_, v_fst_591_);
v___x_598_ = lean_box(0);
v___x_599_ = 0;
v___x_600_ = 2;
v___x_601_ = ((lean_object*)(l_Lean_parseVersoDocString___redArg___lam__3___closed__0));
v___x_602_ = l_Lean_Parser_Error_toString(v_snd_592_);
v___x_603_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_603_, 0, v___x_602_);
v___x_604_ = l_Lean_MessageData_ofFormat(v___x_603_);
v___x_605_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_605_, 0, v_____do__lift_596_);
lean_ctor_set(v___x_605_, 1, v___x_597_);
lean_ctor_set(v___x_605_, 2, v___x_598_);
lean_ctor_set(v___x_605_, 3, v___x_601_);
lean_ctor_set(v___x_605_, 4, v___x_604_);
lean_ctor_set_uint8(v___x_605_, sizeof(void*)*5, v___x_599_);
lean_ctor_set_uint8(v___x_605_, sizeof(void*)*5 + 1, v___x_600_);
lean_ctor_set_uint8(v___x_605_, sizeof(void*)*5 + 2, v___x_599_);
v___x_606_ = lean_apply_1(v_logMessage_593_, v___x_605_);
v___x_607_ = lean_apply_4(v_toBind_594_, lean_box(0), lean_box(0), v___x_606_, v___f_595_);
return v___x_607_;
}
}
LEAN_EXPORT lean_object* l_Lean_reportVersoParseFailure___redArg___lam__3___boxed(lean_object* v_text_608_, lean_object* v_fst_609_, lean_object* v_snd_610_, lean_object* v_logMessage_611_, lean_object* v_toBind_612_, lean_object* v___f_613_, lean_object* v_____do__lift_614_){
_start:
{
lean_object* v_res_615_; 
v_res_615_ = l_Lean_reportVersoParseFailure___redArg___lam__3(v_text_608_, v_fst_609_, v_snd_610_, v_logMessage_611_, v_toBind_612_, v___f_613_, v_____do__lift_614_);
lean_dec(v_fst_609_);
return v_res_615_;
}
}
LEAN_EXPORT lean_object* l_Lean_reportVersoParseFailure___redArg___lam__2(lean_object* v_text_616_, lean_object* v_logMessage_617_, lean_object* v_toBind_618_, lean_object* v___f_619_, lean_object* v_getFileName_620_, lean_object* v_a_621_, lean_object* v_x_622_, lean_object* v___y_623_){
_start:
{
lean_object* v_snd_624_; lean_object* v_fst_625_; lean_object* v_snd_626_; lean_object* v___f_627_; lean_object* v___x_628_; 
v_snd_624_ = lean_ctor_get(v_a_621_, 1);
lean_inc(v_snd_624_);
v_fst_625_ = lean_ctor_get(v_a_621_, 0);
lean_inc(v_fst_625_);
lean_dec_ref(v_a_621_);
v_snd_626_ = lean_ctor_get(v_snd_624_, 1);
lean_inc(v_snd_626_);
lean_dec(v_snd_624_);
lean_inc(v_toBind_618_);
v___f_627_ = lean_alloc_closure((void*)(l_Lean_reportVersoParseFailure___redArg___lam__3___boxed), 7, 6);
lean_closure_set(v___f_627_, 0, v_text_616_);
lean_closure_set(v___f_627_, 1, v_fst_625_);
lean_closure_set(v___f_627_, 2, v_snd_626_);
lean_closure_set(v___f_627_, 3, v_logMessage_617_);
lean_closure_set(v___f_627_, 4, v_toBind_618_);
lean_closure_set(v___f_627_, 5, v___f_619_);
v___x_628_ = lean_apply_4(v_toBind_618_, lean_box(0), lean_box(0), v_getFileName_620_, v___f_627_);
return v___x_628_;
}
}
LEAN_EXPORT lean_object* l_Lean_reportVersoParseFailure___redArg___lam__4(lean_object* v_toPure_629_, lean_object* v___x_630_, lean_object* v_ictx_631_, lean_object* v_text_632_, lean_object* v_source_633_, lean_object* v_logMessage_634_, lean_object* v_toBind_635_, lean_object* v_getFileName_636_, lean_object* v_inst_637_, lean_object* v_env_638_, lean_object* v_____do__lift_639_, lean_object* v_____do__lift_640_, lean_object* v_val_641_, lean_object* v___y_642_, lean_object* v_____do__lift_643_){
_start:
{
lean_object* v___y_645_; lean_object* v_pmctx_655_; lean_object* v_blockCtxt_656_; lean_object* v___x_657_; lean_object* v_s_658_; lean_object* v___x_659_; lean_object* v___x_660_; lean_object* v_s_661_; lean_object* v___x_662_; lean_object* v___x_663_; uint8_t v___x_664_; 
lean_inc_ref(v_env_638_);
v_pmctx_655_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_pmctx_655_, 0, v_env_638_);
lean_ctor_set(v_pmctx_655_, 1, v_____do__lift_639_);
lean_ctor_set(v_pmctx_655_, 2, v_____do__lift_640_);
lean_ctor_set(v_pmctx_655_, 3, v_____do__lift_643_);
lean_inc(v_val_641_);
lean_inc_ref(v_text_632_);
v_blockCtxt_656_ = l_Lean_Doc_Parser_BlockCtxt_forDocString(v_text_632_, v_val_641_, v___y_642_);
v___x_657_ = l_Lean_Parser_mkParserState(v_source_633_);
lean_inc_ref(v___x_657_);
v_s_658_ = l_Lean_Parser_ParserState_setPos(v___x_657_, v_val_641_);
v___x_659_ = lean_alloc_closure((void*)(l_Lean_Doc_Parser_document), 3, 1);
lean_closure_set(v___x_659_, 0, v_blockCtxt_656_);
v___x_660_ = l_Lean_Parser_getTokenTable(v_env_638_);
lean_inc_ref(v___x_660_);
lean_inc_ref(v_pmctx_655_);
lean_inc_ref(v_ictx_631_);
v_s_661_ = l_Lean_Parser_ParserFn_run(v___x_659_, v_ictx_631_, v_pmctx_655_, v___x_660_, v_s_658_);
lean_inc_ref(v_s_661_);
v___x_662_ = l_Lean_Parser_ParserState_allErrors(v_s_661_);
v___x_663_ = lean_array_get_size(v___x_662_);
lean_dec_ref(v___x_662_);
v___x_664_ = lean_nat_dec_eq(v___x_663_, v___x_630_);
if (v___x_664_ == 0)
{
lean_dec_ref(v___x_660_);
lean_dec_ref(v___x_657_);
lean_dec_ref_known(v_pmctx_655_, 4);
v___y_645_ = v_s_661_;
goto v___jp_644_;
}
else
{
lean_object* v_pos_665_; uint8_t v___x_666_; 
v_pos_665_ = lean_ctor_get(v_s_661_, 2);
lean_inc(v_pos_665_);
v___x_666_ = l_Lean_Parser_InputContext_atEnd(v_ictx_631_, v_pos_665_);
if (v___x_666_ == 0)
{
lean_object* v___x_667_; lean_object* v___x_668_; lean_object* v___x_669_; lean_object* v___x_670_; lean_object* v___x_671_; lean_object* v___x_672_; lean_object* v___x_673_; lean_object* v___x_674_; 
lean_dec_ref(v_s_661_);
v___x_667_ = lean_box(0);
v___x_668_ = lean_box(0);
v___x_669_ = lean_unsigned_to_nat(1u);
lean_inc_n(v___x_630_, 3);
v___x_670_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_670_, 0, v___x_669_);
lean_ctor_set(v___x_670_, 1, v___x_630_);
v___x_671_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_671_, 0, v___x_630_);
lean_ctor_set(v___x_671_, 1, v___x_667_);
lean_ctor_set(v___x_671_, 2, v___x_668_);
lean_ctor_set(v___x_671_, 3, v___x_670_);
lean_ctor_set(v___x_671_, 4, v___x_630_);
v___x_672_ = lean_alloc_closure((void*)(l_Lean_Doc_Parser_block), 3, 1);
lean_closure_set(v___x_672_, 0, v___x_671_);
v___x_673_ = l_Lean_Parser_ParserState_setPos(v___x_657_, v_pos_665_);
lean_inc_ref(v_ictx_631_);
v___x_674_ = l_Lean_Parser_ParserFn_run(v___x_672_, v_ictx_631_, v_pmctx_655_, v___x_660_, v___x_673_);
v___y_645_ = v___x_674_;
goto v___jp_644_;
}
else
{
lean_dec(v_pos_665_);
lean_dec_ref(v___x_660_);
lean_dec_ref(v___x_657_);
lean_dec_ref_known(v_pmctx_655_, 4);
v___y_645_ = v_s_661_;
goto v___jp_644_;
}
}
v___jp_644_:
{
lean_object* v___x_646_; lean_object* v___f_647_; lean_object* v___x_648_; lean_object* v___f_649_; lean_object* v___f_650_; size_t v_sz_651_; size_t v___x_652_; lean_object* v___x_653_; lean_object* v___x_654_; 
lean_inc_ref(v___y_645_);
v___x_646_ = l_Lean_Parser_ParserState_allErrors(v___y_645_);
lean_inc(v_getFileName_636_);
lean_inc_n(v_toBind_635_, 2);
lean_inc(v_logMessage_634_);
lean_inc_ref(v_text_632_);
lean_inc_ref(v___x_646_);
lean_inc(v_toPure_629_);
v___f_647_ = lean_alloc_closure((void*)(l_Lean_reportVersoParseFailure___redArg___lam__1___boxed), 11, 10);
lean_closure_set(v___f_647_, 0, v_toPure_629_);
lean_closure_set(v___f_647_, 1, v___x_646_);
lean_closure_set(v___f_647_, 2, v___x_630_);
lean_closure_set(v___f_647_, 3, v___y_645_);
lean_closure_set(v___f_647_, 4, v_ictx_631_);
lean_closure_set(v___f_647_, 5, v_text_632_);
lean_closure_set(v___f_647_, 6, v_source_633_);
lean_closure_set(v___f_647_, 7, v_logMessage_634_);
lean_closure_set(v___f_647_, 8, v_toBind_635_);
lean_closure_set(v___f_647_, 9, v_getFileName_636_);
v___x_648_ = lean_box(0);
v___f_649_ = lean_alloc_closure((void*)(l_Lean_parseVersoDocString___redArg___lam__2), 3, 2);
lean_closure_set(v___f_649_, 0, v___x_648_);
lean_closure_set(v___f_649_, 1, v_toPure_629_);
v___f_650_ = lean_alloc_closure((void*)(l_Lean_reportVersoParseFailure___redArg___lam__2), 8, 5);
lean_closure_set(v___f_650_, 0, v_text_632_);
lean_closure_set(v___f_650_, 1, v_logMessage_634_);
lean_closure_set(v___f_650_, 2, v_toBind_635_);
lean_closure_set(v___f_650_, 3, v___f_649_);
lean_closure_set(v___f_650_, 4, v_getFileName_636_);
v_sz_651_ = lean_array_size(v___x_646_);
v___x_652_ = ((size_t)0ULL);
v___x_653_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_box(0), lean_box(0), lean_box(0), v_inst_637_, v___x_646_, v___f_650_, v_sz_651_, v___x_652_, v___x_648_);
v___x_654_ = lean_apply_4(v_toBind_635_, lean_box(0), lean_box(0), v___x_653_, v___f_647_);
return v___x_654_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_reportVersoParseFailure___redArg___lam__5(lean_object* v_toPure_675_, lean_object* v___x_676_, lean_object* v_ictx_677_, lean_object* v_text_678_, lean_object* v_source_679_, lean_object* v_logMessage_680_, lean_object* v_toBind_681_, lean_object* v_getFileName_682_, lean_object* v_inst_683_, lean_object* v_env_684_, lean_object* v_____do__lift_685_, lean_object* v_val_686_, lean_object* v___y_687_, lean_object* v_getOpenDecls_688_, lean_object* v_____do__lift_689_){
_start:
{
lean_object* v___f_690_; lean_object* v___x_691_; 
lean_inc(v_toBind_681_);
v___f_690_ = lean_alloc_closure((void*)(l_Lean_reportVersoParseFailure___redArg___lam__4), 15, 14);
lean_closure_set(v___f_690_, 0, v_toPure_675_);
lean_closure_set(v___f_690_, 1, v___x_676_);
lean_closure_set(v___f_690_, 2, v_ictx_677_);
lean_closure_set(v___f_690_, 3, v_text_678_);
lean_closure_set(v___f_690_, 4, v_source_679_);
lean_closure_set(v___f_690_, 5, v_logMessage_680_);
lean_closure_set(v___f_690_, 6, v_toBind_681_);
lean_closure_set(v___f_690_, 7, v_getFileName_682_);
lean_closure_set(v___f_690_, 8, v_inst_683_);
lean_closure_set(v___f_690_, 9, v_env_684_);
lean_closure_set(v___f_690_, 10, v_____do__lift_685_);
lean_closure_set(v___f_690_, 11, v_____do__lift_689_);
lean_closure_set(v___f_690_, 12, v_val_686_);
lean_closure_set(v___f_690_, 13, v___y_687_);
v___x_691_ = lean_apply_4(v_toBind_681_, lean_box(0), lean_box(0), v_getOpenDecls_688_, v___f_690_);
return v___x_691_;
}
}
LEAN_EXPORT lean_object* l_Lean_reportVersoParseFailure___redArg___lam__6(lean_object* v_inst_692_, lean_object* v_toPure_693_, lean_object* v___x_694_, lean_object* v_ictx_695_, lean_object* v_text_696_, lean_object* v_source_697_, lean_object* v_logMessage_698_, lean_object* v_toBind_699_, lean_object* v_getFileName_700_, lean_object* v_inst_701_, lean_object* v_env_702_, lean_object* v_val_703_, lean_object* v___y_704_, lean_object* v_____do__lift_705_){
_start:
{
lean_object* v_getCurrNamespace_706_; lean_object* v_getOpenDecls_707_; lean_object* v___f_708_; lean_object* v___x_709_; 
v_getCurrNamespace_706_ = lean_ctor_get(v_inst_692_, 0);
lean_inc(v_getCurrNamespace_706_);
v_getOpenDecls_707_ = lean_ctor_get(v_inst_692_, 1);
lean_inc(v_getOpenDecls_707_);
lean_dec_ref(v_inst_692_);
lean_inc(v_toBind_699_);
v___f_708_ = lean_alloc_closure((void*)(l_Lean_reportVersoParseFailure___redArg___lam__5), 15, 14);
lean_closure_set(v___f_708_, 0, v_toPure_693_);
lean_closure_set(v___f_708_, 1, v___x_694_);
lean_closure_set(v___f_708_, 2, v_ictx_695_);
lean_closure_set(v___f_708_, 3, v_text_696_);
lean_closure_set(v___f_708_, 4, v_source_697_);
lean_closure_set(v___f_708_, 5, v_logMessage_698_);
lean_closure_set(v___f_708_, 6, v_toBind_699_);
lean_closure_set(v___f_708_, 7, v_getFileName_700_);
lean_closure_set(v___f_708_, 8, v_inst_701_);
lean_closure_set(v___f_708_, 9, v_env_702_);
lean_closure_set(v___f_708_, 10, v_____do__lift_705_);
lean_closure_set(v___f_708_, 11, v_val_703_);
lean_closure_set(v___f_708_, 12, v___y_704_);
lean_closure_set(v___f_708_, 13, v_getOpenDecls_707_);
v___x_709_ = lean_apply_4(v_toBind_699_, lean_box(0), lean_box(0), v_getCurrNamespace_706_, v___f_708_);
return v___x_709_;
}
}
LEAN_EXPORT lean_object* l_Lean_reportVersoParseFailure___redArg___lam__7(lean_object* v_source_710_, lean_object* v_text_711_, lean_object* v___y_712_, lean_object* v_inst_713_, lean_object* v_toPure_714_, lean_object* v___x_715_, lean_object* v_logMessage_716_, lean_object* v_toBind_717_, lean_object* v_getFileName_718_, lean_object* v_inst_719_, lean_object* v_env_720_, lean_object* v_val_721_, lean_object* v_inst_722_, lean_object* v_____do__lift_723_){
_start:
{
lean_object* v_ictx_724_; lean_object* v___f_725_; lean_object* v___x_726_; 
lean_inc(v___y_712_);
lean_inc_ref(v_text_711_);
lean_inc_ref(v_source_710_);
v_ictx_724_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_ictx_724_, 0, v_source_710_);
lean_ctor_set(v_ictx_724_, 1, v_____do__lift_723_);
lean_ctor_set(v_ictx_724_, 2, v_text_711_);
lean_ctor_set(v_ictx_724_, 3, v___y_712_);
lean_inc(v_toBind_717_);
v___f_725_ = lean_alloc_closure((void*)(l_Lean_reportVersoParseFailure___redArg___lam__6), 14, 13);
lean_closure_set(v___f_725_, 0, v_inst_713_);
lean_closure_set(v___f_725_, 1, v_toPure_714_);
lean_closure_set(v___f_725_, 2, v___x_715_);
lean_closure_set(v___f_725_, 3, v_ictx_724_);
lean_closure_set(v___f_725_, 4, v_text_711_);
lean_closure_set(v___f_725_, 5, v_source_710_);
lean_closure_set(v___f_725_, 6, v_logMessage_716_);
lean_closure_set(v___f_725_, 7, v_toBind_717_);
lean_closure_set(v___f_725_, 8, v_getFileName_718_);
lean_closure_set(v___f_725_, 9, v_inst_719_);
lean_closure_set(v___f_725_, 10, v_env_720_);
lean_closure_set(v___f_725_, 11, v_val_721_);
lean_closure_set(v___f_725_, 12, v___y_712_);
v___x_726_ = lean_apply_4(v_toBind_717_, lean_box(0), lean_box(0), v_inst_722_, v___f_725_);
return v___x_726_;
}
}
LEAN_EXPORT lean_object* l_Lean_reportVersoParseFailure___redArg___lam__8(lean_object* v_inst_727_, lean_object* v_source_728_, lean_object* v_text_729_, lean_object* v___y_730_, lean_object* v_inst_731_, lean_object* v_toPure_732_, lean_object* v___x_733_, lean_object* v_toBind_734_, lean_object* v_inst_735_, lean_object* v_val_736_, lean_object* v_inst_737_, lean_object* v_env_738_){
_start:
{
lean_object* v_getFileName_739_; lean_object* v_logMessage_740_; lean_object* v___f_741_; lean_object* v___x_742_; 
v_getFileName_739_ = lean_ctor_get(v_inst_727_, 2);
lean_inc_n(v_getFileName_739_, 2);
v_logMessage_740_ = lean_ctor_get(v_inst_727_, 4);
lean_inc(v_logMessage_740_);
lean_dec_ref(v_inst_727_);
lean_inc(v_toBind_734_);
v___f_741_ = lean_alloc_closure((void*)(l_Lean_reportVersoParseFailure___redArg___lam__7), 14, 13);
lean_closure_set(v___f_741_, 0, v_source_728_);
lean_closure_set(v___f_741_, 1, v_text_729_);
lean_closure_set(v___f_741_, 2, v___y_730_);
lean_closure_set(v___f_741_, 3, v_inst_731_);
lean_closure_set(v___f_741_, 4, v_toPure_732_);
lean_closure_set(v___f_741_, 5, v___x_733_);
lean_closure_set(v___f_741_, 6, v_logMessage_740_);
lean_closure_set(v___f_741_, 7, v_toBind_734_);
lean_closure_set(v___f_741_, 8, v_getFileName_739_);
lean_closure_set(v___f_741_, 9, v_inst_735_);
lean_closure_set(v___f_741_, 10, v_env_738_);
lean_closure_set(v___f_741_, 11, v_val_736_);
lean_closure_set(v___f_741_, 12, v_inst_737_);
v___x_742_ = lean_apply_4(v_toBind_734_, lean_box(0), lean_box(0), v_getFileName_739_, v___f_741_);
return v___x_742_;
}
}
LEAN_EXPORT lean_object* l_Lean_reportVersoParseFailure___redArg___lam__9(lean_object* v_inst_743_, lean_object* v_inst_744_, lean_object* v_inst_745_, lean_object* v_toPure_746_, lean_object* v___x_747_, lean_object* v_toBind_748_, lean_object* v_inst_749_, lean_object* v_val_750_, lean_object* v_inst_751_, lean_object* v_val_752_, lean_object* v_text_753_){
_start:
{
lean_object* v_source_754_; lean_object* v___y_756_; lean_object* v___x_760_; uint8_t v___x_761_; 
v_source_754_ = lean_ctor_get(v_text_753_, 0);
lean_inc_ref(v_source_754_);
v___x_760_ = lean_string_utf8_byte_size(v_source_754_);
v___x_761_ = lean_nat_dec_le(v_val_752_, v___x_760_);
if (v___x_761_ == 0)
{
lean_dec(v_val_752_);
v___y_756_ = v___x_760_;
goto v___jp_755_;
}
else
{
v___y_756_ = v_val_752_;
goto v___jp_755_;
}
v___jp_755_:
{
lean_object* v_getEnv_757_; lean_object* v___f_758_; lean_object* v___x_759_; 
v_getEnv_757_ = lean_ctor_get(v_inst_743_, 0);
lean_inc(v_getEnv_757_);
lean_dec_ref(v_inst_743_);
lean_inc(v_toBind_748_);
v___f_758_ = lean_alloc_closure((void*)(l_Lean_reportVersoParseFailure___redArg___lam__8), 12, 11);
lean_closure_set(v___f_758_, 0, v_inst_744_);
lean_closure_set(v___f_758_, 1, v_source_754_);
lean_closure_set(v___f_758_, 2, v_text_753_);
lean_closure_set(v___f_758_, 3, v___y_756_);
lean_closure_set(v___f_758_, 4, v_inst_745_);
lean_closure_set(v___f_758_, 5, v_toPure_746_);
lean_closure_set(v___f_758_, 6, v___x_747_);
lean_closure_set(v___f_758_, 7, v_toBind_748_);
lean_closure_set(v___f_758_, 8, v_inst_749_);
lean_closure_set(v___f_758_, 9, v_val_750_);
lean_closure_set(v___f_758_, 10, v_inst_751_);
v___x_759_ = lean_apply_4(v_toBind_748_, lean_box(0), lean_box(0), v_getEnv_757_, v___f_758_);
return v___x_759_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_reportVersoParseFailure___redArg(lean_object* v_inst_762_, lean_object* v_inst_763_, lean_object* v_inst_764_, lean_object* v_inst_765_, lean_object* v_inst_766_, lean_object* v_inst_767_, lean_object* v_parseFailure_768_){
_start:
{
lean_object* v_toApplicative_769_; lean_object* v_toBind_770_; lean_object* v_toPure_771_; lean_object* v___x_772_; lean_object* v___x_773_; uint8_t v___x_774_; lean_object* v___x_775_; 
v_toApplicative_769_ = lean_ctor_get(v_inst_762_, 0);
v_toBind_770_ = lean_ctor_get(v_inst_762_, 1);
lean_inc(v_toBind_770_);
v_toPure_771_ = lean_ctor_get(v_toApplicative_769_, 1);
lean_inc(v_toPure_771_);
v___x_772_ = lean_unsigned_to_nat(0u);
v___x_773_ = l_Lean_Syntax_getArg(v_parseFailure_768_, v___x_772_);
v___x_774_ = 1;
v___x_775_ = l_Lean_Syntax_getPos_x3f(v___x_773_, v___x_774_);
if (lean_obj_tag(v___x_775_) == 1)
{
lean_object* v_val_776_; lean_object* v___x_777_; 
v_val_776_ = lean_ctor_get(v___x_775_, 0);
lean_inc(v_val_776_);
lean_dec_ref_known(v___x_775_, 1);
v___x_777_ = l_Lean_Syntax_getTailPos_x3f(v___x_773_, v___x_774_);
lean_dec(v___x_773_);
if (lean_obj_tag(v___x_777_) == 1)
{
lean_object* v_val_778_; lean_object* v___f_779_; lean_object* v___x_780_; 
v_val_778_ = lean_ctor_get(v___x_777_, 0);
lean_inc(v_val_778_);
lean_dec_ref_known(v___x_777_, 1);
lean_inc(v_toBind_770_);
v___f_779_ = lean_alloc_closure((void*)(l_Lean_reportVersoParseFailure___redArg___lam__9), 11, 10);
lean_closure_set(v___f_779_, 0, v_inst_764_);
lean_closure_set(v___f_779_, 1, v_inst_766_);
lean_closure_set(v___f_779_, 2, v_inst_767_);
lean_closure_set(v___f_779_, 3, v_toPure_771_);
lean_closure_set(v___f_779_, 4, v___x_772_);
lean_closure_set(v___f_779_, 5, v_toBind_770_);
lean_closure_set(v___f_779_, 6, v_inst_762_);
lean_closure_set(v___f_779_, 7, v_val_776_);
lean_closure_set(v___f_779_, 8, v_inst_765_);
lean_closure_set(v___f_779_, 9, v_val_778_);
v___x_780_ = lean_apply_4(v_toBind_770_, lean_box(0), lean_box(0), v_inst_763_, v___f_779_);
return v___x_780_;
}
else
{
lean_object* v___x_781_; lean_object* v___x_782_; 
lean_dec(v___x_777_);
lean_dec(v_val_776_);
lean_dec(v_toBind_770_);
lean_dec_ref(v_inst_767_);
lean_dec_ref(v_inst_766_);
lean_dec(v_inst_765_);
lean_dec_ref(v_inst_764_);
lean_dec(v_inst_763_);
lean_dec_ref(v_inst_762_);
v___x_781_ = lean_box(0);
v___x_782_ = lean_apply_2(v_toPure_771_, lean_box(0), v___x_781_);
return v___x_782_;
}
}
else
{
lean_object* v___x_783_; lean_object* v___x_784_; 
lean_dec(v___x_775_);
lean_dec(v___x_773_);
lean_dec(v_toBind_770_);
lean_dec_ref(v_inst_767_);
lean_dec_ref(v_inst_766_);
lean_dec(v_inst_765_);
lean_dec_ref(v_inst_764_);
lean_dec(v_inst_763_);
lean_dec_ref(v_inst_762_);
v___x_783_ = lean_box(0);
v___x_784_ = lean_apply_2(v_toPure_771_, lean_box(0), v___x_783_);
return v___x_784_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_reportVersoParseFailure___redArg___boxed(lean_object* v_inst_785_, lean_object* v_inst_786_, lean_object* v_inst_787_, lean_object* v_inst_788_, lean_object* v_inst_789_, lean_object* v_inst_790_, lean_object* v_parseFailure_791_){
_start:
{
lean_object* v_res_792_; 
v_res_792_ = l_Lean_reportVersoParseFailure___redArg(v_inst_785_, v_inst_786_, v_inst_787_, v_inst_788_, v_inst_789_, v_inst_790_, v_parseFailure_791_);
lean_dec(v_parseFailure_791_);
return v_res_792_;
}
}
LEAN_EXPORT lean_object* l_Lean_reportVersoParseFailure(lean_object* v_m_793_, lean_object* v_inst_794_, lean_object* v_inst_795_, lean_object* v_inst_796_, lean_object* v_inst_797_, lean_object* v_inst_798_, lean_object* v_inst_799_, lean_object* v_inst_800_, lean_object* v_parseFailure_801_){
_start:
{
lean_object* v___x_802_; 
v___x_802_ = l_Lean_reportVersoParseFailure___redArg(v_inst_794_, v_inst_795_, v_inst_797_, v_inst_798_, v_inst_799_, v_inst_800_, v_parseFailure_801_);
return v___x_802_;
}
}
LEAN_EXPORT lean_object* l_Lean_reportVersoParseFailure___boxed(lean_object* v_m_803_, lean_object* v_inst_804_, lean_object* v_inst_805_, lean_object* v_inst_806_, lean_object* v_inst_807_, lean_object* v_inst_808_, lean_object* v_inst_809_, lean_object* v_inst_810_, lean_object* v_parseFailure_811_){
_start:
{
lean_object* v_res_812_; 
v_res_812_ = l_Lean_reportVersoParseFailure(v_m_803_, v_inst_804_, v_inst_805_, v_inst_806_, v_inst_807_, v_inst_808_, v_inst_809_, v_inst_810_, v_parseFailure_811_);
lean_dec(v_parseFailure_811_);
lean_dec_ref(v_inst_806_);
return v_res_812_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Add_0__Lean_execVersoBlocks___lam__0(lean_object* v_fileMap_x3f_813_, lean_object* v_declName_814_, lean_object* v_binders_815_, lean_object* v___x_816_, uint8_t v___x_817_, lean_object* v___y_818_, lean_object* v___y_819_, lean_object* v___y_820_, lean_object* v___y_821_, lean_object* v___y_822_, lean_object* v___y_823_){
_start:
{
if (lean_obj_tag(v_fileMap_x3f_813_) == 0)
{
lean_object* v___x_825_; 
v___x_825_ = l_Lean_Doc_DocM_exec___redArg(v_declName_814_, v_binders_815_, v___x_816_, v___x_817_, v___y_818_, v___y_819_, v___y_820_, v___y_821_, v___y_822_, v___y_823_);
return v___x_825_;
}
else
{
lean_object* v_toCold_826_; lean_object* v_val_827_; lean_object* v_currRecDepth_828_; lean_object* v_ref_829_; uint8_t v_diag_830_; uint8_t v_suppressElabErrors_831_; lean_object* v_fileName_832_; lean_object* v_options_833_; lean_object* v_maxRecDepth_834_; lean_object* v_currNamespace_835_; lean_object* v_openDecls_836_; lean_object* v_initHeartbeats_837_; lean_object* v_maxHeartbeats_838_; lean_object* v_quotContext_839_; lean_object* v_currMacroScope_840_; lean_object* v_cancelTk_x3f_841_; lean_object* v_inheritedTraceOptions_842_; lean_object* v___x_843_; lean_object* v___x_844_; lean_object* v___x_845_; 
v_toCold_826_ = lean_ctor_get(v___y_822_, 0);
v_val_827_ = lean_ctor_get(v_fileMap_x3f_813_, 0);
v_currRecDepth_828_ = lean_ctor_get(v___y_822_, 1);
v_ref_829_ = lean_ctor_get(v___y_822_, 2);
v_diag_830_ = lean_ctor_get_uint8(v___y_822_, sizeof(void*)*3);
v_suppressElabErrors_831_ = lean_ctor_get_uint8(v___y_822_, sizeof(void*)*3 + 1);
v_fileName_832_ = lean_ctor_get(v_toCold_826_, 0);
v_options_833_ = lean_ctor_get(v_toCold_826_, 2);
v_maxRecDepth_834_ = lean_ctor_get(v_toCold_826_, 3);
v_currNamespace_835_ = lean_ctor_get(v_toCold_826_, 4);
v_openDecls_836_ = lean_ctor_get(v_toCold_826_, 5);
v_initHeartbeats_837_ = lean_ctor_get(v_toCold_826_, 6);
v_maxHeartbeats_838_ = lean_ctor_get(v_toCold_826_, 7);
v_quotContext_839_ = lean_ctor_get(v_toCold_826_, 8);
v_currMacroScope_840_ = lean_ctor_get(v_toCold_826_, 9);
v_cancelTk_x3f_841_ = lean_ctor_get(v_toCold_826_, 10);
v_inheritedTraceOptions_842_ = lean_ctor_get(v_toCold_826_, 11);
lean_inc_ref(v_inheritedTraceOptions_842_);
lean_inc(v_cancelTk_x3f_841_);
lean_inc(v_currMacroScope_840_);
lean_inc(v_quotContext_839_);
lean_inc(v_maxHeartbeats_838_);
lean_inc(v_initHeartbeats_837_);
lean_inc(v_openDecls_836_);
lean_inc(v_currNamespace_835_);
lean_inc(v_maxRecDepth_834_);
lean_inc_ref(v_options_833_);
lean_inc(v_val_827_);
lean_inc_ref(v_fileName_832_);
v___x_843_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v___x_843_, 0, v_fileName_832_);
lean_ctor_set(v___x_843_, 1, v_val_827_);
lean_ctor_set(v___x_843_, 2, v_options_833_);
lean_ctor_set(v___x_843_, 3, v_maxRecDepth_834_);
lean_ctor_set(v___x_843_, 4, v_currNamespace_835_);
lean_ctor_set(v___x_843_, 5, v_openDecls_836_);
lean_ctor_set(v___x_843_, 6, v_initHeartbeats_837_);
lean_ctor_set(v___x_843_, 7, v_maxHeartbeats_838_);
lean_ctor_set(v___x_843_, 8, v_quotContext_839_);
lean_ctor_set(v___x_843_, 9, v_currMacroScope_840_);
lean_ctor_set(v___x_843_, 10, v_cancelTk_x3f_841_);
lean_ctor_set(v___x_843_, 11, v_inheritedTraceOptions_842_);
lean_inc(v_ref_829_);
lean_inc(v_currRecDepth_828_);
v___x_844_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_844_, 0, v___x_843_);
lean_ctor_set(v___x_844_, 1, v_currRecDepth_828_);
lean_ctor_set(v___x_844_, 2, v_ref_829_);
lean_ctor_set_uint8(v___x_844_, sizeof(void*)*3, v_diag_830_);
lean_ctor_set_uint8(v___x_844_, sizeof(void*)*3 + 1, v_suppressElabErrors_831_);
v___x_845_ = l_Lean_Doc_DocM_exec___redArg(v_declName_814_, v_binders_815_, v___x_816_, v___x_817_, v___y_818_, v___y_819_, v___y_820_, v___y_821_, v___x_844_, v___y_823_);
lean_dec_ref_known(v___x_844_, 3);
return v___x_845_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Add_0__Lean_execVersoBlocks___lam__0___boxed(lean_object* v_fileMap_x3f_846_, lean_object* v_declName_847_, lean_object* v_binders_848_, lean_object* v___x_849_, lean_object* v___x_850_, lean_object* v___y_851_, lean_object* v___y_852_, lean_object* v___y_853_, lean_object* v___y_854_, lean_object* v___y_855_, lean_object* v___y_856_, lean_object* v___y_857_){
_start:
{
uint8_t v___x_9793__boxed_858_; lean_object* v_res_859_; 
v___x_9793__boxed_858_ = lean_unbox(v___x_850_);
v_res_859_ = l___private_Lean_DocString_Add_0__Lean_execVersoBlocks___lam__0(v_fileMap_x3f_846_, v_declName_847_, v_binders_848_, v___x_849_, v___x_9793__boxed_858_, v___y_851_, v___y_852_, v___y_853_, v___y_854_, v___y_855_, v___y_856_);
lean_dec(v___y_856_);
lean_dec_ref(v___y_855_);
lean_dec(v___y_854_);
lean_dec_ref(v___y_853_);
lean_dec(v___y_852_);
lean_dec_ref(v___y_851_);
lean_dec(v_fileMap_x3f_846_);
return v_res_859_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__0(size_t v_sz_860_, size_t v_i_861_, lean_object* v_bs_862_){
_start:
{
uint8_t v___x_863_; 
v___x_863_ = lean_usize_dec_lt(v_i_861_, v_sz_860_);
if (v___x_863_ == 0)
{
lean_object* v___x_864_; 
v___x_864_ = l_unsafeCast___redArg(v_bs_862_);
lean_dec_ref(v_bs_862_);
return v___x_864_;
}
else
{
lean_object* v_v_865_; lean_object* v___x_866_; lean_object* v_bs_x27_867_; lean_object* v___x_868_; size_t v___x_869_; size_t v___x_870_; lean_object* v___x_871_; lean_object* v___x_872_; 
v_v_865_ = lean_array_uget(v_bs_862_, v_i_861_);
v___x_866_ = lean_unsigned_to_nat(0u);
v_bs_x27_867_ = lean_array_uset(v_bs_862_, v_i_861_, v___x_866_);
v___x_868_ = l_unsafeCast___redArg(v_v_865_);
lean_dec(v_v_865_);
v___x_869_ = ((size_t)1ULL);
v___x_870_ = lean_usize_add(v_i_861_, v___x_869_);
v___x_871_ = l_unsafeCast___redArg(v___x_868_);
lean_dec(v___x_868_);
v___x_872_ = lean_array_uset(v_bs_x27_867_, v_i_861_, v___x_871_);
v_i_861_ = v___x_870_;
v_bs_862_ = v___x_872_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__0___boxed(lean_object* v_sz_874_, lean_object* v_i_875_, lean_object* v_bs_876_){
_start:
{
size_t v_sz_boxed_877_; size_t v_i_boxed_878_; lean_object* v_res_879_; 
v_sz_boxed_877_ = lean_unbox_usize(v_sz_874_);
lean_dec(v_sz_874_);
v_i_boxed_878_ = lean_unbox_usize(v_i_875_);
lean_dec(v_i_875_);
v_res_879_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__0(v_sz_boxed_877_, v_i_boxed_878_, v_bs_876_);
return v_res_879_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2_spec__4(lean_object* v_opts_880_, lean_object* v_opt_881_){
_start:
{
lean_object* v_name_882_; lean_object* v_defValue_883_; lean_object* v_map_884_; lean_object* v___x_885_; 
v_name_882_ = lean_ctor_get(v_opt_881_, 0);
v_defValue_883_ = lean_ctor_get(v_opt_881_, 1);
v_map_884_ = lean_ctor_get(v_opts_880_, 0);
v___x_885_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_884_, v_name_882_);
if (lean_obj_tag(v___x_885_) == 0)
{
uint8_t v___x_886_; 
v___x_886_ = lean_unbox(v_defValue_883_);
return v___x_886_;
}
else
{
lean_object* v_val_887_; 
v_val_887_ = lean_ctor_get(v___x_885_, 0);
lean_inc(v_val_887_);
lean_dec_ref_known(v___x_885_, 1);
if (lean_obj_tag(v_val_887_) == 1)
{
uint8_t v_v_888_; 
v_v_888_ = lean_ctor_get_uint8(v_val_887_, 0);
lean_dec_ref_known(v_val_887_, 0);
return v_v_888_;
}
else
{
uint8_t v___x_889_; 
lean_dec(v_val_887_);
v___x_889_ = lean_unbox(v_defValue_883_);
return v___x_889_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2_spec__4___boxed(lean_object* v_opts_890_, lean_object* v_opt_891_){
_start:
{
uint8_t v_res_892_; lean_object* v_r_893_; 
v_res_892_ = l_Lean_Option_get___at___00Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2_spec__4(v_opts_890_, v_opt_891_);
lean_dec_ref(v_opt_891_);
lean_dec_ref(v_opts_890_);
v_r_893_ = lean_box(v_res_892_);
return v_r_893_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2_spec__3(lean_object* v_msgData_894_, lean_object* v___y_895_, lean_object* v___y_896_, lean_object* v___y_897_, lean_object* v___y_898_){
_start:
{
lean_object* v___x_900_; lean_object* v_env_901_; lean_object* v___x_902_; lean_object* v_toCold_903_; lean_object* v_mctx_904_; lean_object* v_lctx_905_; lean_object* v_options_906_; lean_object* v___x_907_; lean_object* v___x_908_; lean_object* v___x_909_; 
v___x_900_ = lean_st_ref_get(v___y_898_);
v_env_901_ = lean_ctor_get(v___x_900_, 0);
lean_inc_ref(v_env_901_);
lean_dec(v___x_900_);
v___x_902_ = lean_st_ref_get(v___y_896_);
v_toCold_903_ = lean_ctor_get(v___y_897_, 0);
v_mctx_904_ = lean_ctor_get(v___x_902_, 0);
lean_inc_ref(v_mctx_904_);
lean_dec(v___x_902_);
v_lctx_905_ = lean_ctor_get(v___y_895_, 2);
v_options_906_ = lean_ctor_get(v_toCold_903_, 2);
lean_inc_ref(v_options_906_);
lean_inc_ref(v_lctx_905_);
v___x_907_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_907_, 0, v_env_901_);
lean_ctor_set(v___x_907_, 1, v_mctx_904_);
lean_ctor_set(v___x_907_, 2, v_lctx_905_);
lean_ctor_set(v___x_907_, 3, v_options_906_);
v___x_908_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_908_, 0, v___x_907_);
lean_ctor_set(v___x_908_, 1, v_msgData_894_);
v___x_909_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_909_, 0, v___x_908_);
return v___x_909_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2_spec__3___boxed(lean_object* v_msgData_910_, lean_object* v___y_911_, lean_object* v___y_912_, lean_object* v___y_913_, lean_object* v___y_914_, lean_object* v___y_915_){
_start:
{
lean_object* v_res_916_; 
v_res_916_ = l_Lean_addMessageContextFull___at___00Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2_spec__3(v_msgData_910_, v___y_911_, v___y_912_, v___y_913_, v___y_914_);
lean_dec(v___y_914_);
lean_dec_ref(v___y_913_);
lean_dec(v___y_912_);
lean_dec_ref(v___y_911_);
return v_res_916_;
}
}
LEAN_EXPORT uint8_t l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg___lam__0(uint8_t v_suppressElabErrors_925_, uint8_t v___y_926_, lean_object* v_x_927_){
_start:
{
if (lean_obj_tag(v_x_927_) == 1)
{
lean_object* v_pre_928_; 
v_pre_928_ = lean_ctor_get(v_x_927_, 0);
switch(lean_obj_tag(v_pre_928_))
{
case 1:
{
lean_object* v_pre_929_; 
v_pre_929_ = lean_ctor_get(v_pre_928_, 0);
switch(lean_obj_tag(v_pre_929_))
{
case 0:
{
lean_object* v_str_930_; lean_object* v_str_931_; lean_object* v___x_932_; uint8_t v___x_933_; 
v_str_930_ = lean_ctor_get(v_x_927_, 1);
v_str_931_ = lean_ctor_get(v_pre_928_, 1);
v___x_932_ = ((lean_object*)(l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg___lam__0___closed__0));
v___x_933_ = lean_string_dec_eq(v_str_931_, v___x_932_);
if (v___x_933_ == 0)
{
lean_object* v___x_934_; uint8_t v___x_935_; 
v___x_934_ = ((lean_object*)(l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg___lam__0___closed__1));
v___x_935_ = lean_string_dec_eq(v_str_931_, v___x_934_);
if (v___x_935_ == 0)
{
return v___x_935_;
}
else
{
lean_object* v___x_936_; uint8_t v___x_937_; 
v___x_936_ = ((lean_object*)(l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg___lam__0___closed__2));
v___x_937_ = lean_string_dec_eq(v_str_930_, v___x_936_);
if (v___x_937_ == 0)
{
return v___x_937_;
}
else
{
return v_suppressElabErrors_925_;
}
}
}
else
{
lean_object* v___x_938_; uint8_t v___x_939_; 
v___x_938_ = ((lean_object*)(l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg___lam__0___closed__3));
v___x_939_ = lean_string_dec_eq(v_str_930_, v___x_938_);
if (v___x_939_ == 0)
{
return v___x_939_;
}
else
{
return v_suppressElabErrors_925_;
}
}
}
case 1:
{
lean_object* v_pre_940_; 
v_pre_940_ = lean_ctor_get(v_pre_929_, 0);
if (lean_obj_tag(v_pre_940_) == 0)
{
lean_object* v_str_941_; lean_object* v_str_942_; lean_object* v_str_943_; lean_object* v___x_944_; uint8_t v___x_945_; 
v_str_941_ = lean_ctor_get(v_x_927_, 1);
v_str_942_ = lean_ctor_get(v_pre_928_, 1);
v_str_943_ = lean_ctor_get(v_pre_929_, 1);
v___x_944_ = ((lean_object*)(l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg___lam__0___closed__4));
v___x_945_ = lean_string_dec_eq(v_str_943_, v___x_944_);
if (v___x_945_ == 0)
{
return v___x_945_;
}
else
{
lean_object* v___x_946_; uint8_t v___x_947_; 
v___x_946_ = ((lean_object*)(l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg___lam__0___closed__5));
v___x_947_ = lean_string_dec_eq(v_str_942_, v___x_946_);
if (v___x_947_ == 0)
{
return v___x_947_;
}
else
{
lean_object* v___x_948_; uint8_t v___x_949_; 
v___x_948_ = ((lean_object*)(l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg___lam__0___closed__6));
v___x_949_ = lean_string_dec_eq(v_str_941_, v___x_948_);
if (v___x_949_ == 0)
{
return v___x_949_;
}
else
{
return v_suppressElabErrors_925_;
}
}
}
}
else
{
return v___y_926_;
}
}
default: 
{
return v___y_926_;
}
}
}
case 0:
{
lean_object* v_str_950_; lean_object* v___x_951_; uint8_t v___x_952_; 
v_str_950_ = lean_ctor_get(v_x_927_, 1);
v___x_951_ = ((lean_object*)(l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg___lam__0___closed__7));
v___x_952_ = lean_string_dec_eq(v_str_950_, v___x_951_);
if (v___x_952_ == 0)
{
return v___x_952_;
}
else
{
return v_suppressElabErrors_925_;
}
}
default: 
{
return v___y_926_;
}
}
}
else
{
return v___y_926_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg___lam__0___boxed(lean_object* v_suppressElabErrors_953_, lean_object* v___y_954_, lean_object* v_x_955_){
_start:
{
uint8_t v_suppressElabErrors_boxed_956_; uint8_t v___y_9898__boxed_957_; uint8_t v_res_958_; lean_object* v_r_959_; 
v_suppressElabErrors_boxed_956_ = lean_unbox(v_suppressElabErrors_953_);
v___y_9898__boxed_957_ = lean_unbox(v___y_954_);
v_res_958_ = l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg___lam__0(v_suppressElabErrors_boxed_956_, v___y_9898__boxed_957_, v_x_955_);
lean_dec(v_x_955_);
v_r_959_ = lean_box(v_res_958_);
return v_r_959_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg(lean_object* v_ref_960_, lean_object* v_msgData_961_, uint8_t v_severity_962_, uint8_t v_isSilent_963_, lean_object* v___y_964_, lean_object* v___y_965_, lean_object* v___y_966_, lean_object* v___y_967_){
_start:
{
lean_object* v___y_970_; uint8_t v___y_971_; lean_object* v___y_972_; uint8_t v___y_973_; lean_object* v___y_974_; lean_object* v___y_975_; lean_object* v___y_976_; lean_object* v_currNamespace_977_; lean_object* v_openDecls_978_; lean_object* v___y_979_; lean_object* v___y_1005_; lean_object* v___y_1006_; lean_object* v___y_1007_; uint8_t v___y_1008_; uint8_t v___y_1009_; uint8_t v___y_1010_; lean_object* v___y_1011_; lean_object* v___y_1012_; lean_object* v___y_1013_; lean_object* v___y_1014_; lean_object* v___y_1032_; lean_object* v___y_1033_; lean_object* v___y_1034_; lean_object* v___y_1035_; uint8_t v___y_1036_; uint8_t v___y_1037_; uint8_t v___y_1038_; lean_object* v___y_1039_; lean_object* v___y_1040_; lean_object* v___y_1041_; lean_object* v___y_1045_; lean_object* v___y_1046_; lean_object* v___y_1047_; uint8_t v___y_1048_; uint8_t v___y_1049_; lean_object* v___y_1050_; lean_object* v___y_1051_; lean_object* v___y_1052_; uint8_t v___y_1053_; uint8_t v___x_1058_; lean_object* v___y_1060_; lean_object* v___y_1061_; lean_object* v___y_1062_; lean_object* v___y_1063_; lean_object* v___y_1064_; uint8_t v___y_1065_; uint8_t v___y_1066_; lean_object* v___y_1067_; uint8_t v___y_1068_; uint8_t v___y_1070_; uint8_t v___x_1088_; 
v___x_1058_ = 2;
v___x_1088_ = l_Lean_instBEqMessageSeverity_beq(v_severity_962_, v___x_1058_);
if (v___x_1088_ == 0)
{
v___y_1070_ = v___x_1088_;
goto v___jp_1069_;
}
else
{
uint8_t v___x_1089_; 
lean_inc_ref(v_msgData_961_);
v___x_1089_ = l_Lean_MessageData_hasSyntheticSorry(v_msgData_961_);
v___y_1070_ = v___x_1089_;
goto v___jp_1069_;
}
v___jp_969_:
{
lean_object* v___x_980_; lean_object* v___x_981_; lean_object* v___x_982_; lean_object* v___x_983_; lean_object* v_env_984_; lean_object* v_nextMacroScope_985_; lean_object* v_ngen_986_; lean_object* v_auxDeclNGen_987_; lean_object* v_traceState_988_; lean_object* v_cache_989_; lean_object* v_messages_990_; lean_object* v_infoState_991_; lean_object* v_snapshotTasks_992_; lean_object* v___x_994_; uint8_t v_isShared_995_; uint8_t v_isSharedCheck_1003_; 
lean_inc(v_openDecls_978_);
lean_inc(v_currNamespace_977_);
v___x_980_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_980_, 0, v_currNamespace_977_);
lean_ctor_set(v___x_980_, 1, v_openDecls_978_);
v___x_981_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_981_, 0, v___x_980_);
lean_ctor_set(v___x_981_, 1, v___y_970_);
lean_inc_ref(v___y_975_);
lean_inc_ref(v___y_976_);
v___x_982_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_982_, 0, v___y_976_);
lean_ctor_set(v___x_982_, 1, v___y_972_);
lean_ctor_set(v___x_982_, 2, v___y_974_);
lean_ctor_set(v___x_982_, 3, v___y_975_);
lean_ctor_set(v___x_982_, 4, v___x_981_);
lean_ctor_set_uint8(v___x_982_, sizeof(void*)*5, v___y_973_);
lean_ctor_set_uint8(v___x_982_, sizeof(void*)*5 + 1, v___y_971_);
lean_ctor_set_uint8(v___x_982_, sizeof(void*)*5 + 2, v_isSilent_963_);
v___x_983_ = lean_st_ref_take(v___y_979_);
v_env_984_ = lean_ctor_get(v___x_983_, 0);
v_nextMacroScope_985_ = lean_ctor_get(v___x_983_, 1);
v_ngen_986_ = lean_ctor_get(v___x_983_, 2);
v_auxDeclNGen_987_ = lean_ctor_get(v___x_983_, 3);
v_traceState_988_ = lean_ctor_get(v___x_983_, 4);
v_cache_989_ = lean_ctor_get(v___x_983_, 5);
v_messages_990_ = lean_ctor_get(v___x_983_, 6);
v_infoState_991_ = lean_ctor_get(v___x_983_, 7);
v_snapshotTasks_992_ = lean_ctor_get(v___x_983_, 8);
v_isSharedCheck_1003_ = !lean_is_exclusive(v___x_983_);
if (v_isSharedCheck_1003_ == 0)
{
v___x_994_ = v___x_983_;
v_isShared_995_ = v_isSharedCheck_1003_;
goto v_resetjp_993_;
}
else
{
lean_inc(v_snapshotTasks_992_);
lean_inc(v_infoState_991_);
lean_inc(v_messages_990_);
lean_inc(v_cache_989_);
lean_inc(v_traceState_988_);
lean_inc(v_auxDeclNGen_987_);
lean_inc(v_ngen_986_);
lean_inc(v_nextMacroScope_985_);
lean_inc(v_env_984_);
lean_dec(v___x_983_);
v___x_994_ = lean_box(0);
v_isShared_995_ = v_isSharedCheck_1003_;
goto v_resetjp_993_;
}
v_resetjp_993_:
{
lean_object* v___x_996_; lean_object* v___x_997_; lean_object* v___x_999_; 
v___x_996_ = lean_box(0);
v___x_997_ = l_Lean_MessageLog_add(v___x_982_, v_messages_990_);
if (v_isShared_995_ == 0)
{
lean_ctor_set(v___x_994_, 6, v___x_997_);
v___x_999_ = v___x_994_;
goto v_reusejp_998_;
}
else
{
lean_object* v_reuseFailAlloc_1002_; 
v_reuseFailAlloc_1002_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1002_, 0, v_env_984_);
lean_ctor_set(v_reuseFailAlloc_1002_, 1, v_nextMacroScope_985_);
lean_ctor_set(v_reuseFailAlloc_1002_, 2, v_ngen_986_);
lean_ctor_set(v_reuseFailAlloc_1002_, 3, v_auxDeclNGen_987_);
lean_ctor_set(v_reuseFailAlloc_1002_, 4, v_traceState_988_);
lean_ctor_set(v_reuseFailAlloc_1002_, 5, v_cache_989_);
lean_ctor_set(v_reuseFailAlloc_1002_, 6, v___x_997_);
lean_ctor_set(v_reuseFailAlloc_1002_, 7, v_infoState_991_);
lean_ctor_set(v_reuseFailAlloc_1002_, 8, v_snapshotTasks_992_);
v___x_999_ = v_reuseFailAlloc_1002_;
goto v_reusejp_998_;
}
v_reusejp_998_:
{
lean_object* v___x_1000_; lean_object* v___x_1001_; 
v___x_1000_ = lean_st_ref_put(v___y_979_, v___x_999_);
v___x_1001_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1001_, 0, v___x_996_);
return v___x_1001_;
}
}
}
v___jp_1004_:
{
lean_object* v___x_1015_; lean_object* v___x_1016_; lean_object* v_a_1017_; lean_object* v___x_1019_; uint8_t v_isShared_1020_; uint8_t v_isSharedCheck_1030_; 
v___x_1015_ = l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(v_msgData_961_);
v___x_1016_ = l_Lean_addMessageContextFull___at___00Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2_spec__3(v___x_1015_, v___y_964_, v___y_965_, v___y_966_, v___y_967_);
v_a_1017_ = lean_ctor_get(v___x_1016_, 0);
v_isSharedCheck_1030_ = !lean_is_exclusive(v___x_1016_);
if (v_isSharedCheck_1030_ == 0)
{
v___x_1019_ = v___x_1016_;
v_isShared_1020_ = v_isSharedCheck_1030_;
goto v_resetjp_1018_;
}
else
{
lean_inc(v_a_1017_);
lean_dec(v___x_1016_);
v___x_1019_ = lean_box(0);
v_isShared_1020_ = v_isSharedCheck_1030_;
goto v_resetjp_1018_;
}
v_resetjp_1018_:
{
lean_object* v___x_1021_; lean_object* v___x_1022_; lean_object* v___x_1023_; lean_object* v___x_1024_; 
lean_inc_ref_n(v___y_1011_, 2);
v___x_1021_ = l_Lean_FileMap_toPosition(v___y_1011_, v___y_1012_);
lean_dec(v___y_1012_);
v___x_1022_ = l_Lean_FileMap_toPosition(v___y_1011_, v___y_1014_);
lean_dec(v___y_1014_);
v___x_1023_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1023_, 0, v___x_1022_);
v___x_1024_ = ((lean_object*)(l_Lean_parseVersoDocString___redArg___lam__3___closed__0));
if (v___y_1008_ == 0)
{
lean_del_object(v___x_1019_);
lean_dec_ref(v___y_1007_);
v___y_970_ = v_a_1017_;
v___y_971_ = v___y_1009_;
v___y_972_ = v___x_1021_;
v___y_973_ = v___y_1010_;
v___y_974_ = v___x_1023_;
v___y_975_ = v___x_1024_;
v___y_976_ = v___y_1013_;
v_currNamespace_977_ = v___y_1006_;
v_openDecls_978_ = v___y_1005_;
v___y_979_ = v___y_967_;
goto v___jp_969_;
}
else
{
uint8_t v___x_1025_; 
lean_inc(v_a_1017_);
v___x_1025_ = l_Lean_MessageData_hasTag(v___y_1007_, v_a_1017_);
if (v___x_1025_ == 0)
{
lean_object* v___x_1026_; lean_object* v___x_1028_; 
lean_dec_ref_known(v___x_1023_, 1);
lean_dec_ref(v___x_1021_);
lean_dec(v_a_1017_);
v___x_1026_ = lean_box(0);
if (v_isShared_1020_ == 0)
{
lean_ctor_set(v___x_1019_, 0, v___x_1026_);
v___x_1028_ = v___x_1019_;
goto v_reusejp_1027_;
}
else
{
lean_object* v_reuseFailAlloc_1029_; 
v_reuseFailAlloc_1029_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1029_, 0, v___x_1026_);
v___x_1028_ = v_reuseFailAlloc_1029_;
goto v_reusejp_1027_;
}
v_reusejp_1027_:
{
return v___x_1028_;
}
}
else
{
lean_del_object(v___x_1019_);
v___y_970_ = v_a_1017_;
v___y_971_ = v___y_1009_;
v___y_972_ = v___x_1021_;
v___y_973_ = v___y_1010_;
v___y_974_ = v___x_1023_;
v___y_975_ = v___x_1024_;
v___y_976_ = v___y_1013_;
v_currNamespace_977_ = v___y_1006_;
v_openDecls_978_ = v___y_1005_;
v___y_979_ = v___y_967_;
goto v___jp_969_;
}
}
}
}
v___jp_1031_:
{
lean_object* v___x_1042_; 
v___x_1042_ = l_Lean_Syntax_getTailPos_x3f(v___y_1035_, v___y_1038_);
lean_dec(v___y_1035_);
if (lean_obj_tag(v___x_1042_) == 0)
{
lean_inc(v___y_1041_);
v___y_1005_ = v___y_1032_;
v___y_1006_ = v___y_1033_;
v___y_1007_ = v___y_1034_;
v___y_1008_ = v___y_1036_;
v___y_1009_ = v___y_1037_;
v___y_1010_ = v___y_1038_;
v___y_1011_ = v___y_1039_;
v___y_1012_ = v___y_1041_;
v___y_1013_ = v___y_1040_;
v___y_1014_ = v___y_1041_;
goto v___jp_1004_;
}
else
{
lean_object* v_val_1043_; 
v_val_1043_ = lean_ctor_get(v___x_1042_, 0);
lean_inc(v_val_1043_);
lean_dec_ref_known(v___x_1042_, 1);
v___y_1005_ = v___y_1032_;
v___y_1006_ = v___y_1033_;
v___y_1007_ = v___y_1034_;
v___y_1008_ = v___y_1036_;
v___y_1009_ = v___y_1037_;
v___y_1010_ = v___y_1038_;
v___y_1011_ = v___y_1039_;
v___y_1012_ = v___y_1041_;
v___y_1013_ = v___y_1040_;
v___y_1014_ = v_val_1043_;
goto v___jp_1004_;
}
}
v___jp_1044_:
{
lean_object* v_ref_1054_; lean_object* v___x_1055_; 
v_ref_1054_ = l_Lean_replaceRef(v_ref_960_, v___y_1050_);
v___x_1055_ = l_Lean_Syntax_getPos_x3f(v_ref_1054_, v___y_1049_);
if (lean_obj_tag(v___x_1055_) == 0)
{
lean_object* v___x_1056_; 
v___x_1056_ = lean_unsigned_to_nat(0u);
v___y_1032_ = v___y_1045_;
v___y_1033_ = v___y_1046_;
v___y_1034_ = v___y_1047_;
v___y_1035_ = v_ref_1054_;
v___y_1036_ = v___y_1048_;
v___y_1037_ = v___y_1053_;
v___y_1038_ = v___y_1049_;
v___y_1039_ = v___y_1051_;
v___y_1040_ = v___y_1052_;
v___y_1041_ = v___x_1056_;
goto v___jp_1031_;
}
else
{
lean_object* v_val_1057_; 
v_val_1057_ = lean_ctor_get(v___x_1055_, 0);
lean_inc(v_val_1057_);
lean_dec_ref_known(v___x_1055_, 1);
v___y_1032_ = v___y_1045_;
v___y_1033_ = v___y_1046_;
v___y_1034_ = v___y_1047_;
v___y_1035_ = v_ref_1054_;
v___y_1036_ = v___y_1048_;
v___y_1037_ = v___y_1053_;
v___y_1038_ = v___y_1049_;
v___y_1039_ = v___y_1051_;
v___y_1040_ = v___y_1052_;
v___y_1041_ = v_val_1057_;
goto v___jp_1031_;
}
}
v___jp_1059_:
{
if (v___y_1068_ == 0)
{
v___y_1045_ = v___y_1060_;
v___y_1046_ = v___y_1061_;
v___y_1047_ = v___y_1062_;
v___y_1048_ = v___y_1065_;
v___y_1049_ = v___y_1066_;
v___y_1050_ = v___y_1067_;
v___y_1051_ = v___y_1063_;
v___y_1052_ = v___y_1064_;
v___y_1053_ = v_severity_962_;
goto v___jp_1044_;
}
else
{
v___y_1045_ = v___y_1060_;
v___y_1046_ = v___y_1061_;
v___y_1047_ = v___y_1062_;
v___y_1048_ = v___y_1065_;
v___y_1049_ = v___y_1066_;
v___y_1050_ = v___y_1067_;
v___y_1051_ = v___y_1063_;
v___y_1052_ = v___y_1064_;
v___y_1053_ = v___x_1058_;
goto v___jp_1044_;
}
}
v___jp_1069_:
{
if (v___y_1070_ == 0)
{
lean_object* v_toCold_1071_; lean_object* v_ref_1072_; uint8_t v_suppressElabErrors_1073_; lean_object* v_fileName_1074_; lean_object* v_fileMap_1075_; lean_object* v_options_1076_; lean_object* v_currNamespace_1077_; lean_object* v_openDecls_1078_; lean_object* v___x_1079_; lean_object* v___x_1080_; lean_object* v___f_1081_; uint8_t v___x_1082_; uint8_t v___x_1083_; 
v_toCold_1071_ = lean_ctor_get(v___y_966_, 0);
v_ref_1072_ = lean_ctor_get(v___y_966_, 2);
v_suppressElabErrors_1073_ = lean_ctor_get_uint8(v___y_966_, sizeof(void*)*3 + 1);
v_fileName_1074_ = lean_ctor_get(v_toCold_1071_, 0);
v_fileMap_1075_ = lean_ctor_get(v_toCold_1071_, 1);
v_options_1076_ = lean_ctor_get(v_toCold_1071_, 2);
v_currNamespace_1077_ = lean_ctor_get(v_toCold_1071_, 4);
v_openDecls_1078_ = lean_ctor_get(v_toCold_1071_, 5);
v___x_1079_ = lean_box(v_suppressElabErrors_1073_);
v___x_1080_ = lean_box(v___y_1070_);
v___f_1081_ = lean_alloc_closure((void*)(l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_1081_, 0, v___x_1079_);
lean_closure_set(v___f_1081_, 1, v___x_1080_);
v___x_1082_ = 1;
v___x_1083_ = l_Lean_instBEqMessageSeverity_beq(v_severity_962_, v___x_1082_);
if (v___x_1083_ == 0)
{
v___y_1060_ = v_openDecls_1078_;
v___y_1061_ = v_currNamespace_1077_;
v___y_1062_ = v___f_1081_;
v___y_1063_ = v_fileMap_1075_;
v___y_1064_ = v_fileName_1074_;
v___y_1065_ = v_suppressElabErrors_1073_;
v___y_1066_ = v___y_1070_;
v___y_1067_ = v_ref_1072_;
v___y_1068_ = v___x_1083_;
goto v___jp_1059_;
}
else
{
lean_object* v___x_1084_; uint8_t v___x_1085_; 
v___x_1084_ = l_Lean_warningAsError;
v___x_1085_ = l_Lean_Option_get___at___00Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2_spec__4(v_options_1076_, v___x_1084_);
v___y_1060_ = v_openDecls_1078_;
v___y_1061_ = v_currNamespace_1077_;
v___y_1062_ = v___f_1081_;
v___y_1063_ = v_fileMap_1075_;
v___y_1064_ = v_fileName_1074_;
v___y_1065_ = v_suppressElabErrors_1073_;
v___y_1066_ = v___y_1070_;
v___y_1067_ = v_ref_1072_;
v___y_1068_ = v___x_1085_;
goto v___jp_1059_;
}
}
else
{
lean_object* v___x_1086_; lean_object* v___x_1087_; 
lean_dec_ref(v_msgData_961_);
v___x_1086_ = lean_box(0);
v___x_1087_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1087_, 0, v___x_1086_);
return v___x_1087_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg___boxed(lean_object* v_ref_1090_, lean_object* v_msgData_1091_, lean_object* v_severity_1092_, lean_object* v_isSilent_1093_, lean_object* v___y_1094_, lean_object* v___y_1095_, lean_object* v___y_1096_, lean_object* v___y_1097_, lean_object* v___y_1098_){
_start:
{
uint8_t v_severity_boxed_1099_; uint8_t v_isSilent_boxed_1100_; lean_object* v_res_1101_; 
v_severity_boxed_1099_ = lean_unbox(v_severity_1092_);
v_isSilent_boxed_1100_ = lean_unbox(v_isSilent_1093_);
v_res_1101_ = l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg(v_ref_1090_, v_msgData_1091_, v_severity_boxed_1099_, v_isSilent_boxed_1100_, v___y_1094_, v___y_1095_, v___y_1096_, v___y_1097_);
lean_dec(v___y_1097_);
lean_dec_ref(v___y_1096_);
lean_dec(v___y_1095_);
lean_dec_ref(v___y_1094_);
lean_dec(v_ref_1090_);
return v_res_1101_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__3(lean_object* v_as_1102_, size_t v_sz_1103_, size_t v_i_1104_, lean_object* v_b_1105_, lean_object* v___y_1106_, lean_object* v___y_1107_, lean_object* v___y_1108_, lean_object* v___y_1109_, lean_object* v___y_1110_, lean_object* v___y_1111_){
_start:
{
uint8_t v___x_1113_; 
v___x_1113_ = lean_usize_dec_lt(v_i_1104_, v_sz_1103_);
if (v___x_1113_ == 0)
{
lean_object* v___x_1114_; 
v___x_1114_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1114_, 0, v_b_1105_);
return v___x_1114_;
}
else
{
lean_object* v_ref_1115_; lean_object* v_a_1116_; uint8_t v_severity_1117_; uint8_t v_isSilent_1118_; lean_object* v_data_1119_; lean_object* v___x_1120_; lean_object* v___x_1121_; 
v_ref_1115_ = lean_ctor_get(v___y_1110_, 2);
v_a_1116_ = lean_array_uget_borrowed(v_as_1102_, v_i_1104_);
v_severity_1117_ = lean_ctor_get_uint8(v_a_1116_, sizeof(void*)*5 + 1);
v_isSilent_1118_ = lean_ctor_get_uint8(v_a_1116_, sizeof(void*)*5 + 2);
v_data_1119_ = lean_ctor_get(v_a_1116_, 4);
v___x_1120_ = lean_box(0);
lean_inc(v_data_1119_);
v___x_1121_ = l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg(v_ref_1115_, v_data_1119_, v_severity_1117_, v_isSilent_1118_, v___y_1108_, v___y_1109_, v___y_1110_, v___y_1111_);
if (lean_obj_tag(v___x_1121_) == 0)
{
size_t v___x_1122_; size_t v___x_1123_; 
lean_dec_ref_known(v___x_1121_, 1);
v___x_1122_ = ((size_t)1ULL);
v___x_1123_ = lean_usize_add(v_i_1104_, v___x_1122_);
v_i_1104_ = v___x_1123_;
v_b_1105_ = v___x_1120_;
goto _start;
}
else
{
return v___x_1121_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__3___boxed(lean_object* v_as_1125_, lean_object* v_sz_1126_, lean_object* v_i_1127_, lean_object* v_b_1128_, lean_object* v___y_1129_, lean_object* v___y_1130_, lean_object* v___y_1131_, lean_object* v___y_1132_, lean_object* v___y_1133_, lean_object* v___y_1134_, lean_object* v___y_1135_){
_start:
{
size_t v_sz_boxed_1136_; size_t v_i_boxed_1137_; lean_object* v_res_1138_; 
v_sz_boxed_1136_ = lean_unbox_usize(v_sz_1126_);
lean_dec(v_sz_1126_);
v_i_boxed_1137_ = lean_unbox_usize(v_i_1127_);
lean_dec(v_i_1127_);
v_res_1138_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__3(v_as_1125_, v_sz_boxed_1136_, v_i_boxed_1137_, v_b_1128_, v___y_1129_, v___y_1130_, v___y_1131_, v___y_1132_, v___y_1133_, v___y_1134_);
lean_dec(v___y_1134_);
lean_dec_ref(v___y_1133_);
lean_dec(v___y_1132_);
lean_dec_ref(v___y_1131_);
lean_dec(v___y_1130_);
lean_dec_ref(v___y_1129_);
lean_dec_ref(v_as_1125_);
return v_res_1138_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_enableInfoTree___at___00Lean_Elab_withEnableInfoTree___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__1_spec__1___redArg(uint8_t v_flag_1139_, lean_object* v___y_1140_){
_start:
{
lean_object* v___x_1142_; lean_object* v_infoState_1143_; lean_object* v_env_1144_; lean_object* v_nextMacroScope_1145_; lean_object* v_ngen_1146_; lean_object* v_auxDeclNGen_1147_; lean_object* v_traceState_1148_; lean_object* v_cache_1149_; lean_object* v_messages_1150_; lean_object* v_snapshotTasks_1151_; lean_object* v___x_1153_; uint8_t v_isShared_1154_; uint8_t v_isSharedCheck_1171_; 
v___x_1142_ = lean_st_ref_take(v___y_1140_);
v_infoState_1143_ = lean_ctor_get(v___x_1142_, 7);
v_env_1144_ = lean_ctor_get(v___x_1142_, 0);
v_nextMacroScope_1145_ = lean_ctor_get(v___x_1142_, 1);
v_ngen_1146_ = lean_ctor_get(v___x_1142_, 2);
v_auxDeclNGen_1147_ = lean_ctor_get(v___x_1142_, 3);
v_traceState_1148_ = lean_ctor_get(v___x_1142_, 4);
v_cache_1149_ = lean_ctor_get(v___x_1142_, 5);
v_messages_1150_ = lean_ctor_get(v___x_1142_, 6);
v_snapshotTasks_1151_ = lean_ctor_get(v___x_1142_, 8);
v_isSharedCheck_1171_ = !lean_is_exclusive(v___x_1142_);
if (v_isSharedCheck_1171_ == 0)
{
v___x_1153_ = v___x_1142_;
v_isShared_1154_ = v_isSharedCheck_1171_;
goto v_resetjp_1152_;
}
else
{
lean_inc(v_snapshotTasks_1151_);
lean_inc(v_infoState_1143_);
lean_inc(v_messages_1150_);
lean_inc(v_cache_1149_);
lean_inc(v_traceState_1148_);
lean_inc(v_auxDeclNGen_1147_);
lean_inc(v_ngen_1146_);
lean_inc(v_nextMacroScope_1145_);
lean_inc(v_env_1144_);
lean_dec(v___x_1142_);
v___x_1153_ = lean_box(0);
v_isShared_1154_ = v_isSharedCheck_1171_;
goto v_resetjp_1152_;
}
v_resetjp_1152_:
{
lean_object* v_assignment_1155_; lean_object* v_lazyAssignment_1156_; lean_object* v_trees_1157_; lean_object* v___x_1159_; uint8_t v_isShared_1160_; uint8_t v_isSharedCheck_1170_; 
v_assignment_1155_ = lean_ctor_get(v_infoState_1143_, 0);
v_lazyAssignment_1156_ = lean_ctor_get(v_infoState_1143_, 1);
v_trees_1157_ = lean_ctor_get(v_infoState_1143_, 2);
v_isSharedCheck_1170_ = !lean_is_exclusive(v_infoState_1143_);
if (v_isSharedCheck_1170_ == 0)
{
v___x_1159_ = v_infoState_1143_;
v_isShared_1160_ = v_isSharedCheck_1170_;
goto v_resetjp_1158_;
}
else
{
lean_inc(v_trees_1157_);
lean_inc(v_lazyAssignment_1156_);
lean_inc(v_assignment_1155_);
lean_dec(v_infoState_1143_);
v___x_1159_ = lean_box(0);
v_isShared_1160_ = v_isSharedCheck_1170_;
goto v_resetjp_1158_;
}
v_resetjp_1158_:
{
lean_object* v___x_1161_; lean_object* v___x_1163_; 
v___x_1161_ = lean_box(0);
if (v_isShared_1160_ == 0)
{
v___x_1163_ = v___x_1159_;
goto v_reusejp_1162_;
}
else
{
lean_object* v_reuseFailAlloc_1169_; 
v_reuseFailAlloc_1169_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_1169_, 0, v_assignment_1155_);
lean_ctor_set(v_reuseFailAlloc_1169_, 1, v_lazyAssignment_1156_);
lean_ctor_set(v_reuseFailAlloc_1169_, 2, v_trees_1157_);
v___x_1163_ = v_reuseFailAlloc_1169_;
goto v_reusejp_1162_;
}
v_reusejp_1162_:
{
lean_object* v___x_1165_; 
lean_ctor_set_uint8(v___x_1163_, sizeof(void*)*3, v_flag_1139_);
if (v_isShared_1154_ == 0)
{
lean_ctor_set(v___x_1153_, 7, v___x_1163_);
v___x_1165_ = v___x_1153_;
goto v_reusejp_1164_;
}
else
{
lean_object* v_reuseFailAlloc_1168_; 
v_reuseFailAlloc_1168_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1168_, 0, v_env_1144_);
lean_ctor_set(v_reuseFailAlloc_1168_, 1, v_nextMacroScope_1145_);
lean_ctor_set(v_reuseFailAlloc_1168_, 2, v_ngen_1146_);
lean_ctor_set(v_reuseFailAlloc_1168_, 3, v_auxDeclNGen_1147_);
lean_ctor_set(v_reuseFailAlloc_1168_, 4, v_traceState_1148_);
lean_ctor_set(v_reuseFailAlloc_1168_, 5, v_cache_1149_);
lean_ctor_set(v_reuseFailAlloc_1168_, 6, v_messages_1150_);
lean_ctor_set(v_reuseFailAlloc_1168_, 7, v___x_1163_);
lean_ctor_set(v_reuseFailAlloc_1168_, 8, v_snapshotTasks_1151_);
v___x_1165_ = v_reuseFailAlloc_1168_;
goto v_reusejp_1164_;
}
v_reusejp_1164_:
{
lean_object* v___x_1166_; lean_object* v___x_1167_; 
v___x_1166_ = lean_st_ref_put(v___y_1140_, v___x_1165_);
v___x_1167_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1167_, 0, v___x_1161_);
return v___x_1167_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_enableInfoTree___at___00Lean_Elab_withEnableInfoTree___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__1_spec__1___redArg___boxed(lean_object* v_flag_1172_, lean_object* v___y_1173_, lean_object* v___y_1174_){
_start:
{
uint8_t v_flag_boxed_1175_; lean_object* v_res_1176_; 
v_flag_boxed_1175_ = lean_unbox(v_flag_1172_);
v_res_1176_ = l_Lean_Elab_enableInfoTree___at___00Lean_Elab_withEnableInfoTree___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__1_spec__1___redArg(v_flag_boxed_1175_, v___y_1173_);
lean_dec(v___y_1173_);
return v_res_1176_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withEnableInfoTree___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__1___redArg(uint8_t v_flag_1177_, lean_object* v_x_1178_, lean_object* v___y_1179_, lean_object* v___y_1180_, lean_object* v___y_1181_, lean_object* v___y_1182_, lean_object* v___y_1183_, lean_object* v___y_1184_){
_start:
{
lean_object* v___x_1186_; lean_object* v_infoState_1187_; uint8_t v_enabled_1188_; lean_object* v_a_1190_; lean_object* v___x_1200_; lean_object* v___x_1201_; 
v___x_1186_ = lean_st_ref_get(v___y_1184_);
v_infoState_1187_ = lean_ctor_get(v___x_1186_, 7);
lean_inc_ref(v_infoState_1187_);
lean_dec(v___x_1186_);
v_enabled_1188_ = lean_ctor_get_uint8(v_infoState_1187_, sizeof(void*)*3);
lean_dec_ref(v_infoState_1187_);
v___x_1200_ = l_Lean_Elab_enableInfoTree___at___00Lean_Elab_withEnableInfoTree___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__1_spec__1___redArg(v_flag_1177_, v___y_1184_);
lean_dec_ref(v___x_1200_);
lean_inc(v___y_1184_);
lean_inc_ref(v___y_1183_);
lean_inc(v___y_1182_);
lean_inc_ref(v___y_1181_);
lean_inc(v___y_1180_);
lean_inc_ref(v___y_1179_);
v___x_1201_ = lean_apply_7(v_x_1178_, v___y_1179_, v___y_1180_, v___y_1181_, v___y_1182_, v___y_1183_, v___y_1184_, lean_box(0));
if (lean_obj_tag(v___x_1201_) == 0)
{
lean_object* v_a_1202_; lean_object* v___x_1203_; lean_object* v___x_1205_; uint8_t v_isShared_1206_; uint8_t v_isSharedCheck_1210_; 
v_a_1202_ = lean_ctor_get(v___x_1201_, 0);
lean_inc(v_a_1202_);
lean_dec_ref_known(v___x_1201_, 1);
v___x_1203_ = l_Lean_Elab_enableInfoTree___at___00Lean_Elab_withEnableInfoTree___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__1_spec__1___redArg(v_enabled_1188_, v___y_1184_);
v_isSharedCheck_1210_ = !lean_is_exclusive(v___x_1203_);
if (v_isSharedCheck_1210_ == 0)
{
lean_object* v_unused_1211_; 
v_unused_1211_ = lean_ctor_get(v___x_1203_, 0);
lean_dec(v_unused_1211_);
v___x_1205_ = v___x_1203_;
v_isShared_1206_ = v_isSharedCheck_1210_;
goto v_resetjp_1204_;
}
else
{
lean_dec(v___x_1203_);
v___x_1205_ = lean_box(0);
v_isShared_1206_ = v_isSharedCheck_1210_;
goto v_resetjp_1204_;
}
v_resetjp_1204_:
{
lean_object* v___x_1208_; 
if (v_isShared_1206_ == 0)
{
lean_ctor_set(v___x_1205_, 0, v_a_1202_);
v___x_1208_ = v___x_1205_;
goto v_reusejp_1207_;
}
else
{
lean_object* v_reuseFailAlloc_1209_; 
v_reuseFailAlloc_1209_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1209_, 0, v_a_1202_);
v___x_1208_ = v_reuseFailAlloc_1209_;
goto v_reusejp_1207_;
}
v_reusejp_1207_:
{
return v___x_1208_;
}
}
}
else
{
lean_object* v_a_1212_; 
v_a_1212_ = lean_ctor_get(v___x_1201_, 0);
lean_inc(v_a_1212_);
lean_dec_ref_known(v___x_1201_, 1);
v_a_1190_ = v_a_1212_;
goto v___jp_1189_;
}
v___jp_1189_:
{
lean_object* v___x_1191_; lean_object* v___x_1193_; uint8_t v_isShared_1194_; uint8_t v_isSharedCheck_1198_; 
v___x_1191_ = l_Lean_Elab_enableInfoTree___at___00Lean_Elab_withEnableInfoTree___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__1_spec__1___redArg(v_enabled_1188_, v___y_1184_);
v_isSharedCheck_1198_ = !lean_is_exclusive(v___x_1191_);
if (v_isSharedCheck_1198_ == 0)
{
lean_object* v_unused_1199_; 
v_unused_1199_ = lean_ctor_get(v___x_1191_, 0);
lean_dec(v_unused_1199_);
v___x_1193_ = v___x_1191_;
v_isShared_1194_ = v_isSharedCheck_1198_;
goto v_resetjp_1192_;
}
else
{
lean_dec(v___x_1191_);
v___x_1193_ = lean_box(0);
v_isShared_1194_ = v_isSharedCheck_1198_;
goto v_resetjp_1192_;
}
v_resetjp_1192_:
{
lean_object* v___x_1196_; 
if (v_isShared_1194_ == 0)
{
lean_ctor_set_tag(v___x_1193_, 1);
lean_ctor_set(v___x_1193_, 0, v_a_1190_);
v___x_1196_ = v___x_1193_;
goto v_reusejp_1195_;
}
else
{
lean_object* v_reuseFailAlloc_1197_; 
v_reuseFailAlloc_1197_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1197_, 0, v_a_1190_);
v___x_1196_ = v_reuseFailAlloc_1197_;
goto v_reusejp_1195_;
}
v_reusejp_1195_:
{
return v___x_1196_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withEnableInfoTree___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__1___redArg___boxed(lean_object* v_flag_1213_, lean_object* v_x_1214_, lean_object* v___y_1215_, lean_object* v___y_1216_, lean_object* v___y_1217_, lean_object* v___y_1218_, lean_object* v___y_1219_, lean_object* v___y_1220_, lean_object* v___y_1221_){
_start:
{
uint8_t v_flag_boxed_1222_; lean_object* v_res_1223_; 
v_flag_boxed_1222_ = lean_unbox(v_flag_1213_);
v_res_1223_ = l_Lean_Elab_withEnableInfoTree___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__1___redArg(v_flag_boxed_1222_, v_x_1214_, v___y_1215_, v___y_1216_, v___y_1217_, v___y_1218_, v___y_1219_, v___y_1220_);
lean_dec(v___y_1220_);
lean_dec_ref(v___y_1219_);
lean_dec(v___y_1218_);
lean_dec_ref(v___y_1217_);
lean_dec(v___y_1216_);
lean_dec_ref(v___y_1215_);
return v_res_1223_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Add_0__Lean_execVersoBlocks(lean_object* v_declName_1224_, lean_object* v_binders_1225_, lean_object* v_blocks_1226_, lean_object* v_fileMap_x3f_1227_, lean_object* v_a_1228_, lean_object* v_a_1229_, lean_object* v_a_1230_, lean_object* v_a_1231_, lean_object* v_a_1232_, lean_object* v_a_1233_){
_start:
{
lean_object* v___x_1235_; 
v___x_1235_ = l_Lean_Core_getAndEmptyMessageLog___redArg(v_a_1233_);
if (lean_obj_tag(v___x_1235_) == 0)
{
lean_object* v_a_1236_; lean_object* v_a_1238_; size_t v_sz_1256_; size_t v___x_1257_; lean_object* v___x_1258_; lean_object* v___x_1259_; lean_object* v___x_1260_; lean_object* v___x_1261_; uint8_t v___x_1262_; lean_object* v___x_1263_; lean_object* v___y_1264_; uint8_t v___x_1265_; lean_object* v___x_1266_; 
v_a_1236_ = lean_ctor_get(v___x_1235_, 0);
lean_inc(v_a_1236_);
lean_dec_ref_known(v___x_1235_, 1);
v_sz_1256_ = lean_array_size(v_blocks_1226_);
v___x_1257_ = ((size_t)0ULL);
v___x_1258_ = l_unsafeCast___redArg(v_blocks_1226_);
v___x_1259_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__0(v_sz_1256_, v___x_1257_, v___x_1258_);
v___x_1260_ = l_unsafeCast___redArg(v___x_1259_);
lean_dec_ref(v___x_1259_);
v___x_1261_ = lean_alloc_closure((void*)(l_Lean_Doc_elabBlocks___boxed), 11, 1);
lean_closure_set(v___x_1261_, 0, v___x_1260_);
v___x_1262_ = 1;
v___x_1263_ = lean_box(v___x_1262_);
v___y_1264_ = lean_alloc_closure((void*)(l___private_Lean_DocString_Add_0__Lean_execVersoBlocks___lam__0___boxed), 12, 5);
lean_closure_set(v___y_1264_, 0, v_fileMap_x3f_1227_);
lean_closure_set(v___y_1264_, 1, v_declName_1224_);
lean_closure_set(v___y_1264_, 2, v_binders_1225_);
lean_closure_set(v___y_1264_, 3, v___x_1261_);
lean_closure_set(v___y_1264_, 4, v___x_1263_);
v___x_1265_ = 0;
v___x_1266_ = l_Lean_Elab_withEnableInfoTree___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__1___redArg(v___x_1265_, v___y_1264_, v_a_1228_, v_a_1229_, v_a_1230_, v_a_1231_, v_a_1232_, v_a_1233_);
if (lean_obj_tag(v___x_1266_) == 0)
{
lean_object* v_a_1267_; lean_object* v___x_1268_; 
v_a_1267_ = lean_ctor_get(v___x_1266_, 0);
lean_inc(v_a_1267_);
lean_dec_ref_known(v___x_1266_, 1);
v___x_1268_ = l_Lean_Core_getAndEmptyMessageLog___redArg(v_a_1233_);
if (lean_obj_tag(v___x_1268_) == 0)
{
lean_object* v_a_1269_; lean_object* v___x_1270_; 
v_a_1269_ = lean_ctor_get(v___x_1268_, 0);
lean_inc(v_a_1269_);
lean_dec_ref_known(v___x_1268_, 1);
v___x_1270_ = l_Lean_Core_setMessageLog___redArg(v_a_1236_, v_a_1233_);
if (lean_obj_tag(v___x_1270_) == 0)
{
lean_object* v___x_1271_; lean_object* v___x_1272_; size_t v_sz_1273_; lean_object* v___x_1274_; 
lean_dec_ref_known(v___x_1270_, 1);
v___x_1271_ = l_Lean_MessageLog_toArray(v_a_1269_);
lean_dec(v_a_1269_);
v___x_1272_ = lean_box(0);
v_sz_1273_ = lean_array_size(v___x_1271_);
v___x_1274_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__3(v___x_1271_, v_sz_1273_, v___x_1257_, v___x_1272_, v_a_1228_, v_a_1229_, v_a_1230_, v_a_1231_, v_a_1232_, v_a_1233_);
lean_dec_ref(v___x_1271_);
if (lean_obj_tag(v___x_1274_) == 0)
{
lean_object* v___x_1276_; uint8_t v_isShared_1277_; uint8_t v_isSharedCheck_1299_; 
v_isSharedCheck_1299_ = !lean_is_exclusive(v___x_1274_);
if (v_isSharedCheck_1299_ == 0)
{
lean_object* v_unused_1300_; 
v_unused_1300_ = lean_ctor_get(v___x_1274_, 0);
lean_dec(v_unused_1300_);
v___x_1276_ = v___x_1274_;
v_isShared_1277_ = v_isSharedCheck_1299_;
goto v_resetjp_1275_;
}
else
{
lean_dec(v___x_1274_);
v___x_1276_ = lean_box(0);
v_isShared_1277_ = v_isSharedCheck_1299_;
goto v_resetjp_1275_;
}
v_resetjp_1275_:
{
lean_object* v_fst_1278_; lean_object* v_snd_1279_; lean_object* v___x_1281_; uint8_t v_isShared_1282_; uint8_t v_isSharedCheck_1298_; 
v_fst_1278_ = lean_ctor_get(v_a_1267_, 0);
v_snd_1279_ = lean_ctor_get(v_a_1267_, 1);
v_isSharedCheck_1298_ = !lean_is_exclusive(v_a_1267_);
if (v_isSharedCheck_1298_ == 0)
{
v___x_1281_ = v_a_1267_;
v_isShared_1282_ = v_isSharedCheck_1298_;
goto v_resetjp_1280_;
}
else
{
lean_inc(v_snd_1279_);
lean_inc(v_fst_1278_);
lean_dec(v_a_1267_);
v___x_1281_ = lean_box(0);
v_isShared_1282_ = v_isSharedCheck_1298_;
goto v_resetjp_1280_;
}
v_resetjp_1280_:
{
lean_object* v_fst_1283_; lean_object* v_snd_1284_; lean_object* v___x_1286_; uint8_t v_isShared_1287_; uint8_t v_isSharedCheck_1297_; 
v_fst_1283_ = lean_ctor_get(v_fst_1278_, 0);
v_snd_1284_ = lean_ctor_get(v_fst_1278_, 1);
v_isSharedCheck_1297_ = !lean_is_exclusive(v_fst_1278_);
if (v_isSharedCheck_1297_ == 0)
{
v___x_1286_ = v_fst_1278_;
v_isShared_1287_ = v_isSharedCheck_1297_;
goto v_resetjp_1285_;
}
else
{
lean_inc(v_snd_1284_);
lean_inc(v_fst_1283_);
lean_dec(v_fst_1278_);
v___x_1286_ = lean_box(0);
v_isShared_1287_ = v_isSharedCheck_1297_;
goto v_resetjp_1285_;
}
v_resetjp_1285_:
{
lean_object* v___x_1289_; 
if (v_isShared_1287_ == 0)
{
v___x_1289_ = v___x_1286_;
goto v_reusejp_1288_;
}
else
{
lean_object* v_reuseFailAlloc_1296_; 
v_reuseFailAlloc_1296_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1296_, 0, v_fst_1283_);
lean_ctor_set(v_reuseFailAlloc_1296_, 1, v_snd_1284_);
v___x_1289_ = v_reuseFailAlloc_1296_;
goto v_reusejp_1288_;
}
v_reusejp_1288_:
{
lean_object* v___x_1291_; 
if (v_isShared_1282_ == 0)
{
lean_ctor_set(v___x_1281_, 0, v___x_1289_);
v___x_1291_ = v___x_1281_;
goto v_reusejp_1290_;
}
else
{
lean_object* v_reuseFailAlloc_1295_; 
v_reuseFailAlloc_1295_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1295_, 0, v___x_1289_);
lean_ctor_set(v_reuseFailAlloc_1295_, 1, v_snd_1279_);
v___x_1291_ = v_reuseFailAlloc_1295_;
goto v_reusejp_1290_;
}
v_reusejp_1290_:
{
lean_object* v___x_1293_; 
if (v_isShared_1277_ == 0)
{
lean_ctor_set(v___x_1276_, 0, v___x_1291_);
v___x_1293_ = v___x_1276_;
goto v_reusejp_1292_;
}
else
{
lean_object* v_reuseFailAlloc_1294_; 
v_reuseFailAlloc_1294_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1294_, 0, v___x_1291_);
v___x_1293_ = v_reuseFailAlloc_1294_;
goto v_reusejp_1292_;
}
v_reusejp_1292_:
{
return v___x_1293_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_1301_; lean_object* v___x_1303_; uint8_t v_isShared_1304_; uint8_t v_isSharedCheck_1308_; 
lean_dec(v_a_1267_);
v_a_1301_ = lean_ctor_get(v___x_1274_, 0);
v_isSharedCheck_1308_ = !lean_is_exclusive(v___x_1274_);
if (v_isSharedCheck_1308_ == 0)
{
v___x_1303_ = v___x_1274_;
v_isShared_1304_ = v_isSharedCheck_1308_;
goto v_resetjp_1302_;
}
else
{
lean_inc(v_a_1301_);
lean_dec(v___x_1274_);
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
else
{
lean_object* v_a_1309_; lean_object* v___x_1311_; uint8_t v_isShared_1312_; uint8_t v_isSharedCheck_1316_; 
lean_dec(v_a_1269_);
lean_dec(v_a_1267_);
v_a_1309_ = lean_ctor_get(v___x_1270_, 0);
v_isSharedCheck_1316_ = !lean_is_exclusive(v___x_1270_);
if (v_isSharedCheck_1316_ == 0)
{
v___x_1311_ = v___x_1270_;
v_isShared_1312_ = v_isSharedCheck_1316_;
goto v_resetjp_1310_;
}
else
{
lean_inc(v_a_1309_);
lean_dec(v___x_1270_);
v___x_1311_ = lean_box(0);
v_isShared_1312_ = v_isSharedCheck_1316_;
goto v_resetjp_1310_;
}
v_resetjp_1310_:
{
lean_object* v___x_1314_; 
if (v_isShared_1312_ == 0)
{
v___x_1314_ = v___x_1311_;
goto v_reusejp_1313_;
}
else
{
lean_object* v_reuseFailAlloc_1315_; 
v_reuseFailAlloc_1315_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1315_, 0, v_a_1309_);
v___x_1314_ = v_reuseFailAlloc_1315_;
goto v_reusejp_1313_;
}
v_reusejp_1313_:
{
return v___x_1314_;
}
}
}
}
else
{
lean_object* v_a_1317_; 
lean_dec(v_a_1267_);
v_a_1317_ = lean_ctor_get(v___x_1268_, 0);
lean_inc(v_a_1317_);
lean_dec_ref_known(v___x_1268_, 1);
v_a_1238_ = v_a_1317_;
goto v___jp_1237_;
}
}
else
{
lean_object* v_a_1318_; 
v_a_1318_ = lean_ctor_get(v___x_1266_, 0);
lean_inc(v_a_1318_);
lean_dec_ref_known(v___x_1266_, 1);
v_a_1238_ = v_a_1318_;
goto v___jp_1237_;
}
v___jp_1237_:
{
lean_object* v___x_1239_; 
v___x_1239_ = l_Lean_Core_setMessageLog___redArg(v_a_1236_, v_a_1233_);
if (lean_obj_tag(v___x_1239_) == 0)
{
lean_object* v___x_1241_; uint8_t v_isShared_1242_; uint8_t v_isSharedCheck_1246_; 
v_isSharedCheck_1246_ = !lean_is_exclusive(v___x_1239_);
if (v_isSharedCheck_1246_ == 0)
{
lean_object* v_unused_1247_; 
v_unused_1247_ = lean_ctor_get(v___x_1239_, 0);
lean_dec(v_unused_1247_);
v___x_1241_ = v___x_1239_;
v_isShared_1242_ = v_isSharedCheck_1246_;
goto v_resetjp_1240_;
}
else
{
lean_dec(v___x_1239_);
v___x_1241_ = lean_box(0);
v_isShared_1242_ = v_isSharedCheck_1246_;
goto v_resetjp_1240_;
}
v_resetjp_1240_:
{
lean_object* v___x_1244_; 
if (v_isShared_1242_ == 0)
{
lean_ctor_set_tag(v___x_1241_, 1);
lean_ctor_set(v___x_1241_, 0, v_a_1238_);
v___x_1244_ = v___x_1241_;
goto v_reusejp_1243_;
}
else
{
lean_object* v_reuseFailAlloc_1245_; 
v_reuseFailAlloc_1245_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1245_, 0, v_a_1238_);
v___x_1244_ = v_reuseFailAlloc_1245_;
goto v_reusejp_1243_;
}
v_reusejp_1243_:
{
return v___x_1244_;
}
}
}
else
{
lean_object* v_a_1248_; lean_object* v___x_1250_; uint8_t v_isShared_1251_; uint8_t v_isSharedCheck_1255_; 
lean_dec_ref(v_a_1238_);
v_a_1248_ = lean_ctor_get(v___x_1239_, 0);
v_isSharedCheck_1255_ = !lean_is_exclusive(v___x_1239_);
if (v_isSharedCheck_1255_ == 0)
{
v___x_1250_ = v___x_1239_;
v_isShared_1251_ = v_isSharedCheck_1255_;
goto v_resetjp_1249_;
}
else
{
lean_inc(v_a_1248_);
lean_dec(v___x_1239_);
v___x_1250_ = lean_box(0);
v_isShared_1251_ = v_isSharedCheck_1255_;
goto v_resetjp_1249_;
}
v_resetjp_1249_:
{
lean_object* v___x_1253_; 
if (v_isShared_1251_ == 0)
{
v___x_1253_ = v___x_1250_;
goto v_reusejp_1252_;
}
else
{
lean_object* v_reuseFailAlloc_1254_; 
v_reuseFailAlloc_1254_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1254_, 0, v_a_1248_);
v___x_1253_ = v_reuseFailAlloc_1254_;
goto v_reusejp_1252_;
}
v_reusejp_1252_:
{
return v___x_1253_;
}
}
}
}
}
else
{
lean_object* v_a_1319_; lean_object* v___x_1321_; uint8_t v_isShared_1322_; uint8_t v_isSharedCheck_1326_; 
lean_dec(v_fileMap_x3f_1227_);
lean_dec(v_binders_1225_);
lean_dec(v_declName_1224_);
v_a_1319_ = lean_ctor_get(v___x_1235_, 0);
v_isSharedCheck_1326_ = !lean_is_exclusive(v___x_1235_);
if (v_isSharedCheck_1326_ == 0)
{
v___x_1321_ = v___x_1235_;
v_isShared_1322_ = v_isSharedCheck_1326_;
goto v_resetjp_1320_;
}
else
{
lean_inc(v_a_1319_);
lean_dec(v___x_1235_);
v___x_1321_ = lean_box(0);
v_isShared_1322_ = v_isSharedCheck_1326_;
goto v_resetjp_1320_;
}
v_resetjp_1320_:
{
lean_object* v___x_1324_; 
if (v_isShared_1322_ == 0)
{
v___x_1324_ = v___x_1321_;
goto v_reusejp_1323_;
}
else
{
lean_object* v_reuseFailAlloc_1325_; 
v_reuseFailAlloc_1325_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1325_, 0, v_a_1319_);
v___x_1324_ = v_reuseFailAlloc_1325_;
goto v_reusejp_1323_;
}
v_reusejp_1323_:
{
return v___x_1324_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Add_0__Lean_execVersoBlocks___boxed(lean_object* v_declName_1327_, lean_object* v_binders_1328_, lean_object* v_blocks_1329_, lean_object* v_fileMap_x3f_1330_, lean_object* v_a_1331_, lean_object* v_a_1332_, lean_object* v_a_1333_, lean_object* v_a_1334_, lean_object* v_a_1335_, lean_object* v_a_1336_, lean_object* v_a_1337_){
_start:
{
lean_object* v_res_1338_; 
v_res_1338_ = l___private_Lean_DocString_Add_0__Lean_execVersoBlocks(v_declName_1327_, v_binders_1328_, v_blocks_1329_, v_fileMap_x3f_1330_, v_a_1331_, v_a_1332_, v_a_1333_, v_a_1334_, v_a_1335_, v_a_1336_);
lean_dec(v_a_1336_);
lean_dec_ref(v_a_1335_);
lean_dec(v_a_1334_);
lean_dec_ref(v_a_1333_);
lean_dec(v_a_1332_);
lean_dec_ref(v_a_1331_);
lean_dec_ref(v_blocks_1329_);
return v_res_1338_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_enableInfoTree___at___00Lean_Elab_withEnableInfoTree___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__1_spec__1(uint8_t v_flag_1339_, lean_object* v___y_1340_, lean_object* v___y_1341_, lean_object* v___y_1342_, lean_object* v___y_1343_, lean_object* v___y_1344_, lean_object* v___y_1345_){
_start:
{
lean_object* v___x_1347_; 
v___x_1347_ = l_Lean_Elab_enableInfoTree___at___00Lean_Elab_withEnableInfoTree___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__1_spec__1___redArg(v_flag_1339_, v___y_1345_);
return v___x_1347_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_enableInfoTree___at___00Lean_Elab_withEnableInfoTree___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__1_spec__1___boxed(lean_object* v_flag_1348_, lean_object* v___y_1349_, lean_object* v___y_1350_, lean_object* v___y_1351_, lean_object* v___y_1352_, lean_object* v___y_1353_, lean_object* v___y_1354_, lean_object* v___y_1355_){
_start:
{
uint8_t v_flag_boxed_1356_; lean_object* v_res_1357_; 
v_flag_boxed_1356_ = lean_unbox(v_flag_1348_);
v_res_1357_ = l_Lean_Elab_enableInfoTree___at___00Lean_Elab_withEnableInfoTree___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__1_spec__1(v_flag_boxed_1356_, v___y_1349_, v___y_1350_, v___y_1351_, v___y_1352_, v___y_1353_, v___y_1354_);
lean_dec(v___y_1354_);
lean_dec_ref(v___y_1353_);
lean_dec(v___y_1352_);
lean_dec_ref(v___y_1351_);
lean_dec(v___y_1350_);
lean_dec_ref(v___y_1349_);
return v_res_1357_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withEnableInfoTree___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__1(lean_object* v_00_u03b1_1358_, uint8_t v_flag_1359_, lean_object* v_x_1360_, lean_object* v___y_1361_, lean_object* v___y_1362_, lean_object* v___y_1363_, lean_object* v___y_1364_, lean_object* v___y_1365_, lean_object* v___y_1366_){
_start:
{
lean_object* v___x_1368_; 
v___x_1368_ = l_Lean_Elab_withEnableInfoTree___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__1___redArg(v_flag_1359_, v_x_1360_, v___y_1361_, v___y_1362_, v___y_1363_, v___y_1364_, v___y_1365_, v___y_1366_);
return v___x_1368_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withEnableInfoTree___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__1___boxed(lean_object* v_00_u03b1_1369_, lean_object* v_flag_1370_, lean_object* v_x_1371_, lean_object* v___y_1372_, lean_object* v___y_1373_, lean_object* v___y_1374_, lean_object* v___y_1375_, lean_object* v___y_1376_, lean_object* v___y_1377_, lean_object* v___y_1378_){
_start:
{
uint8_t v_flag_boxed_1379_; lean_object* v_res_1380_; 
v_flag_boxed_1379_ = lean_unbox(v_flag_1370_);
v_res_1380_ = l_Lean_Elab_withEnableInfoTree___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__1(v_00_u03b1_1369_, v_flag_boxed_1379_, v_x_1371_, v___y_1372_, v___y_1373_, v___y_1374_, v___y_1375_, v___y_1376_, v___y_1377_);
lean_dec(v___y_1377_);
lean_dec_ref(v___y_1376_);
lean_dec(v___y_1375_);
lean_dec_ref(v___y_1374_);
lean_dec(v___y_1373_);
lean_dec_ref(v___y_1372_);
return v_res_1380_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2(lean_object* v_ref_1381_, lean_object* v_msgData_1382_, uint8_t v_severity_1383_, uint8_t v_isSilent_1384_, lean_object* v___y_1385_, lean_object* v___y_1386_, lean_object* v___y_1387_, lean_object* v___y_1388_, lean_object* v___y_1389_, lean_object* v___y_1390_){
_start:
{
lean_object* v___x_1392_; 
v___x_1392_ = l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg(v_ref_1381_, v_msgData_1382_, v_severity_1383_, v_isSilent_1384_, v___y_1387_, v___y_1388_, v___y_1389_, v___y_1390_);
return v___x_1392_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___boxed(lean_object* v_ref_1393_, lean_object* v_msgData_1394_, lean_object* v_severity_1395_, lean_object* v_isSilent_1396_, lean_object* v___y_1397_, lean_object* v___y_1398_, lean_object* v___y_1399_, lean_object* v___y_1400_, lean_object* v___y_1401_, lean_object* v___y_1402_, lean_object* v___y_1403_){
_start:
{
uint8_t v_severity_boxed_1404_; uint8_t v_isSilent_boxed_1405_; lean_object* v_res_1406_; 
v_severity_boxed_1404_ = lean_unbox(v_severity_1395_);
v_isSilent_boxed_1405_ = lean_unbox(v_isSilent_1396_);
v_res_1406_ = l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2(v_ref_1393_, v_msgData_1394_, v_severity_boxed_1404_, v_isSilent_boxed_1405_, v___y_1397_, v___y_1398_, v___y_1399_, v___y_1400_, v___y_1401_, v___y_1402_);
lean_dec(v___y_1402_);
lean_dec_ref(v___y_1401_);
lean_dec(v___y_1400_);
lean_dec_ref(v___y_1399_);
lean_dec(v___y_1398_);
lean_dec_ref(v___y_1397_);
lean_dec(v_ref_1393_);
return v_res_1406_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00Lean_versoDocStringOfText_spec__0_spec__0___redArg(lean_object* v_msgData_1407_, uint8_t v_severity_1408_, uint8_t v_isSilent_1409_, lean_object* v___y_1410_, lean_object* v___y_1411_, lean_object* v___y_1412_, lean_object* v___y_1413_){
_start:
{
lean_object* v_ref_1415_; lean_object* v___x_1416_; 
v_ref_1415_ = lean_ctor_get(v___y_1412_, 2);
v___x_1416_ = l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg(v_ref_1415_, v_msgData_1407_, v_severity_1408_, v_isSilent_1409_, v___y_1410_, v___y_1411_, v___y_1412_, v___y_1413_);
return v___x_1416_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00Lean_versoDocStringOfText_spec__0_spec__0___redArg___boxed(lean_object* v_msgData_1417_, lean_object* v_severity_1418_, lean_object* v_isSilent_1419_, lean_object* v___y_1420_, lean_object* v___y_1421_, lean_object* v___y_1422_, lean_object* v___y_1423_, lean_object* v___y_1424_){
_start:
{
uint8_t v_severity_boxed_1425_; uint8_t v_isSilent_boxed_1426_; lean_object* v_res_1427_; 
v_severity_boxed_1425_ = lean_unbox(v_severity_1418_);
v_isSilent_boxed_1426_ = lean_unbox(v_isSilent_1419_);
v_res_1427_ = l_Lean_log___at___00Lean_logError___at___00Lean_versoDocStringOfText_spec__0_spec__0___redArg(v_msgData_1417_, v_severity_boxed_1425_, v_isSilent_boxed_1426_, v___y_1420_, v___y_1421_, v___y_1422_, v___y_1423_);
lean_dec(v___y_1423_);
lean_dec_ref(v___y_1422_);
lean_dec(v___y_1421_);
lean_dec_ref(v___y_1420_);
return v_res_1427_;
}
}
LEAN_EXPORT lean_object* l_Lean_logError___at___00Lean_versoDocStringOfText_spec__0(lean_object* v_msgData_1428_, lean_object* v___y_1429_, lean_object* v___y_1430_, lean_object* v___y_1431_, lean_object* v___y_1432_, lean_object* v___y_1433_, lean_object* v___y_1434_){
_start:
{
uint8_t v___x_1436_; uint8_t v___x_1437_; lean_object* v___x_1438_; 
v___x_1436_ = 2;
v___x_1437_ = 0;
v___x_1438_ = l_Lean_log___at___00Lean_logError___at___00Lean_versoDocStringOfText_spec__0_spec__0___redArg(v_msgData_1428_, v___x_1436_, v___x_1437_, v___y_1431_, v___y_1432_, v___y_1433_, v___y_1434_);
return v___x_1438_;
}
}
LEAN_EXPORT lean_object* l_Lean_logError___at___00Lean_versoDocStringOfText_spec__0___boxed(lean_object* v_msgData_1439_, lean_object* v___y_1440_, lean_object* v___y_1441_, lean_object* v___y_1442_, lean_object* v___y_1443_, lean_object* v___y_1444_, lean_object* v___y_1445_, lean_object* v___y_1446_){
_start:
{
lean_object* v_res_1447_; 
v_res_1447_ = l_Lean_logError___at___00Lean_versoDocStringOfText_spec__0(v_msgData_1439_, v___y_1440_, v___y_1441_, v___y_1442_, v___y_1443_, v___y_1444_, v___y_1445_);
lean_dec(v___y_1445_);
lean_dec_ref(v___y_1444_);
lean_dec(v___y_1443_);
lean_dec_ref(v___y_1442_);
lean_dec(v___y_1441_);
lean_dec_ref(v___y_1440_);
return v_res_1447_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_versoDocStringOfText_spec__1(lean_object* v_as_1448_, size_t v_sz_1449_, size_t v_i_1450_, lean_object* v_b_1451_, lean_object* v___y_1452_, lean_object* v___y_1453_, lean_object* v___y_1454_, lean_object* v___y_1455_, lean_object* v___y_1456_, lean_object* v___y_1457_){
_start:
{
uint8_t v___x_1459_; 
v___x_1459_ = lean_usize_dec_lt(v_i_1450_, v_sz_1449_);
if (v___x_1459_ == 0)
{
lean_object* v___x_1460_; 
v___x_1460_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1460_, 0, v_b_1451_);
return v___x_1460_;
}
else
{
lean_object* v_a_1461_; lean_object* v_snd_1462_; lean_object* v_snd_1463_; lean_object* v___x_1464_; lean_object* v___x_1465_; lean_object* v___x_1466_; lean_object* v___x_1467_; lean_object* v___x_1468_; 
v_a_1461_ = lean_array_uget_borrowed(v_as_1448_, v_i_1450_);
v_snd_1462_ = lean_ctor_get(v_a_1461_, 1);
v_snd_1463_ = lean_ctor_get(v_snd_1462_, 1);
v___x_1464_ = lean_box(0);
lean_inc(v_snd_1463_);
v___x_1465_ = l_Lean_Parser_Error_toString(v_snd_1463_);
v___x_1466_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1466_, 0, v___x_1465_);
v___x_1467_ = l_Lean_MessageData_ofFormat(v___x_1466_);
v___x_1468_ = l_Lean_logError___at___00Lean_versoDocStringOfText_spec__0(v___x_1467_, v___y_1452_, v___y_1453_, v___y_1454_, v___y_1455_, v___y_1456_, v___y_1457_);
if (lean_obj_tag(v___x_1468_) == 0)
{
size_t v___x_1469_; size_t v___x_1470_; 
lean_dec_ref_known(v___x_1468_, 1);
v___x_1469_ = ((size_t)1ULL);
v___x_1470_ = lean_usize_add(v_i_1450_, v___x_1469_);
v_i_1450_ = v___x_1470_;
v_b_1451_ = v___x_1464_;
goto _start;
}
else
{
return v___x_1468_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_versoDocStringOfText_spec__1___boxed(lean_object* v_as_1472_, lean_object* v_sz_1473_, lean_object* v_i_1474_, lean_object* v_b_1475_, lean_object* v___y_1476_, lean_object* v___y_1477_, lean_object* v___y_1478_, lean_object* v___y_1479_, lean_object* v___y_1480_, lean_object* v___y_1481_, lean_object* v___y_1482_){
_start:
{
size_t v_sz_boxed_1483_; size_t v_i_boxed_1484_; lean_object* v_res_1485_; 
v_sz_boxed_1483_ = lean_unbox_usize(v_sz_1473_);
lean_dec(v_sz_1473_);
v_i_boxed_1484_ = lean_unbox_usize(v_i_1474_);
lean_dec(v_i_1474_);
v_res_1485_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_versoDocStringOfText_spec__1(v_as_1472_, v_sz_boxed_1483_, v_i_boxed_1484_, v_b_1475_, v___y_1476_, v___y_1477_, v___y_1478_, v___y_1479_, v___y_1480_, v___y_1481_);
lean_dec(v___y_1481_);
lean_dec_ref(v___y_1480_);
lean_dec(v___y_1479_);
lean_dec_ref(v___y_1478_);
lean_dec(v___y_1477_);
lean_dec_ref(v___y_1476_);
lean_dec_ref(v_as_1472_);
return v_res_1485_;
}
}
LEAN_EXPORT lean_object* l_Lean_versoDocStringOfText(lean_object* v_declName_1503_, lean_object* v_binders_1504_, lean_object* v_docComment_1505_, lean_object* v_a_1506_, lean_object* v_a_1507_, lean_object* v_a_1508_, lean_object* v_a_1509_, lean_object* v_a_1510_, lean_object* v_a_1511_){
_start:
{
lean_object* v___x_1513_; lean_object* v_toCold_1514_; lean_object* v_env_1515_; lean_object* v_fileName_1516_; lean_object* v_options_1517_; lean_object* v_currNamespace_1518_; lean_object* v_openDecls_1519_; lean_object* v___x_1520_; lean_object* v___x_1521_; lean_object* v___x_1522_; lean_object* v___x_1523_; lean_object* v___x_1524_; lean_object* v___x_1525_; lean_object* v___x_1526_; lean_object* v___x_1527_; lean_object* v___x_1528_; lean_object* v___x_1529_; lean_object* v___x_1530_; uint8_t v___x_1531_; 
v___x_1513_ = lean_st_ref_get(v_a_1511_);
v_toCold_1514_ = lean_ctor_get(v_a_1510_, 0);
v_env_1515_ = lean_ctor_get(v___x_1513_, 0);
lean_inc_ref_n(v_env_1515_, 2);
lean_dec(v___x_1513_);
v_fileName_1516_ = lean_ctor_get(v_toCold_1514_, 0);
v_options_1517_ = lean_ctor_get(v_toCold_1514_, 2);
v_currNamespace_1518_ = lean_ctor_get(v_toCold_1514_, 4);
v_openDecls_1519_ = lean_ctor_get(v_toCold_1514_, 5);
v___x_1520_ = lean_string_utf8_byte_size(v_docComment_1505_);
lean_inc_ref_n(v_docComment_1505_, 2);
v___x_1521_ = l_Lean_FileMap_ofString(v_docComment_1505_);
lean_inc_ref(v___x_1521_);
lean_inc_ref(v_fileName_1516_);
v___x_1522_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1522_, 0, v_docComment_1505_);
lean_ctor_set(v___x_1522_, 1, v_fileName_1516_);
lean_ctor_set(v___x_1522_, 2, v___x_1521_);
lean_ctor_set(v___x_1522_, 3, v___x_1520_);
lean_inc(v_openDecls_1519_);
lean_inc(v_currNamespace_1518_);
lean_inc_ref(v_options_1517_);
v___x_1523_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1523_, 0, v_env_1515_);
lean_ctor_set(v___x_1523_, 1, v_options_1517_);
lean_ctor_set(v___x_1523_, 2, v_currNamespace_1518_);
lean_ctor_set(v___x_1523_, 3, v_openDecls_1519_);
v___x_1524_ = l_Lean_Parser_mkParserState(v_docComment_1505_);
lean_dec_ref(v_docComment_1505_);
v___x_1525_ = lean_unsigned_to_nat(0u);
v___x_1526_ = ((lean_object*)(l_Lean_versoDocStringOfText___closed__2));
v___x_1527_ = l_Lean_Parser_getTokenTable(v_env_1515_);
v___x_1528_ = l_Lean_Parser_ParserFn_run(v___x_1526_, v___x_1522_, v___x_1523_, v___x_1527_, v___x_1524_);
lean_inc_ref(v___x_1528_);
v___x_1529_ = l_Lean_Parser_ParserState_allErrors(v___x_1528_);
v___x_1530_ = lean_array_get_size(v___x_1529_);
v___x_1531_ = lean_nat_dec_eq(v___x_1530_, v___x_1525_);
if (v___x_1531_ == 0)
{
lean_object* v___x_1532_; size_t v_sz_1533_; size_t v___x_1534_; lean_object* v___x_1535_; 
lean_dec_ref(v___x_1528_);
lean_dec_ref(v___x_1521_);
lean_dec(v_binders_1504_);
lean_dec(v_declName_1503_);
v___x_1532_ = lean_box(0);
v_sz_1533_ = lean_array_size(v___x_1529_);
v___x_1534_ = ((size_t)0ULL);
v___x_1535_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_versoDocStringOfText_spec__1(v___x_1529_, v_sz_1533_, v___x_1534_, v___x_1532_, v_a_1506_, v_a_1507_, v_a_1508_, v_a_1509_, v_a_1510_, v_a_1511_);
lean_dec_ref(v___x_1529_);
if (lean_obj_tag(v___x_1535_) == 0)
{
lean_object* v___x_1537_; uint8_t v_isShared_1538_; uint8_t v_isSharedCheck_1543_; 
v_isSharedCheck_1543_ = !lean_is_exclusive(v___x_1535_);
if (v_isSharedCheck_1543_ == 0)
{
lean_object* v_unused_1544_; 
v_unused_1544_ = lean_ctor_get(v___x_1535_, 0);
lean_dec(v_unused_1544_);
v___x_1537_ = v___x_1535_;
v_isShared_1538_ = v_isSharedCheck_1543_;
goto v_resetjp_1536_;
}
else
{
lean_dec(v___x_1535_);
v___x_1537_ = lean_box(0);
v_isShared_1538_ = v_isSharedCheck_1543_;
goto v_resetjp_1536_;
}
v_resetjp_1536_:
{
lean_object* v___x_1539_; lean_object* v___x_1541_; 
v___x_1539_ = ((lean_object*)(l_Lean_versoDocStringOfText___closed__5));
if (v_isShared_1538_ == 0)
{
lean_ctor_set(v___x_1537_, 0, v___x_1539_);
v___x_1541_ = v___x_1537_;
goto v_reusejp_1540_;
}
else
{
lean_object* v_reuseFailAlloc_1542_; 
v_reuseFailAlloc_1542_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1542_, 0, v___x_1539_);
v___x_1541_ = v_reuseFailAlloc_1542_;
goto v_reusejp_1540_;
}
v_reusejp_1540_:
{
return v___x_1541_;
}
}
}
else
{
lean_object* v_a_1545_; lean_object* v___x_1547_; uint8_t v_isShared_1548_; uint8_t v_isSharedCheck_1552_; 
v_a_1545_ = lean_ctor_get(v___x_1535_, 0);
v_isSharedCheck_1552_ = !lean_is_exclusive(v___x_1535_);
if (v_isSharedCheck_1552_ == 0)
{
v___x_1547_ = v___x_1535_;
v_isShared_1548_ = v_isSharedCheck_1552_;
goto v_resetjp_1546_;
}
else
{
lean_inc(v_a_1545_);
lean_dec(v___x_1535_);
v___x_1547_ = lean_box(0);
v_isShared_1548_ = v_isSharedCheck_1552_;
goto v_resetjp_1546_;
}
v_resetjp_1546_:
{
lean_object* v___x_1550_; 
if (v_isShared_1548_ == 0)
{
v___x_1550_ = v___x_1547_;
goto v_reusejp_1549_;
}
else
{
lean_object* v_reuseFailAlloc_1551_; 
v_reuseFailAlloc_1551_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1551_, 0, v_a_1545_);
v___x_1550_ = v_reuseFailAlloc_1551_;
goto v_reusejp_1549_;
}
v_reusejp_1549_:
{
return v___x_1550_;
}
}
}
}
else
{
lean_object* v_stxStack_1553_; lean_object* v___x_1554_; lean_object* v___x_1555_; lean_object* v___x_1556_; lean_object* v___x_1557_; 
lean_dec_ref(v___x_1529_);
v_stxStack_1553_ = lean_ctor_get(v___x_1528_, 0);
lean_inc_ref(v_stxStack_1553_);
lean_dec_ref(v___x_1528_);
v___x_1554_ = l_Lean_Parser_SyntaxStack_back(v_stxStack_1553_);
lean_dec_ref(v_stxStack_1553_);
v___x_1555_ = l_Lean_Syntax_getArgs(v___x_1554_);
lean_dec(v___x_1554_);
v___x_1556_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1556_, 0, v___x_1521_);
v___x_1557_ = l___private_Lean_DocString_Add_0__Lean_execVersoBlocks(v_declName_1503_, v_binders_1504_, v___x_1555_, v___x_1556_, v_a_1506_, v_a_1507_, v_a_1508_, v_a_1509_, v_a_1510_, v_a_1511_);
lean_dec_ref(v___x_1555_);
return v___x_1557_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_versoDocStringOfText___boxed(lean_object* v_declName_1558_, lean_object* v_binders_1559_, lean_object* v_docComment_1560_, lean_object* v_a_1561_, lean_object* v_a_1562_, lean_object* v_a_1563_, lean_object* v_a_1564_, lean_object* v_a_1565_, lean_object* v_a_1566_, lean_object* v_a_1567_){
_start:
{
lean_object* v_res_1568_; 
v_res_1568_ = l_Lean_versoDocStringOfText(v_declName_1558_, v_binders_1559_, v_docComment_1560_, v_a_1561_, v_a_1562_, v_a_1563_, v_a_1564_, v_a_1565_, v_a_1566_);
lean_dec(v_a_1566_);
lean_dec_ref(v_a_1565_);
lean_dec(v_a_1564_);
lean_dec_ref(v_a_1563_);
lean_dec(v_a_1562_);
lean_dec_ref(v_a_1561_);
return v_res_1568_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00Lean_versoDocStringOfText_spec__0_spec__0(lean_object* v_msgData_1569_, uint8_t v_severity_1570_, uint8_t v_isSilent_1571_, lean_object* v___y_1572_, lean_object* v___y_1573_, lean_object* v___y_1574_, lean_object* v___y_1575_, lean_object* v___y_1576_, lean_object* v___y_1577_){
_start:
{
lean_object* v___x_1579_; 
v___x_1579_ = l_Lean_log___at___00Lean_logError___at___00Lean_versoDocStringOfText_spec__0_spec__0___redArg(v_msgData_1569_, v_severity_1570_, v_isSilent_1571_, v___y_1574_, v___y_1575_, v___y_1576_, v___y_1577_);
return v___x_1579_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00Lean_versoDocStringOfText_spec__0_spec__0___boxed(lean_object* v_msgData_1580_, lean_object* v_severity_1581_, lean_object* v_isSilent_1582_, lean_object* v___y_1583_, lean_object* v___y_1584_, lean_object* v___y_1585_, lean_object* v___y_1586_, lean_object* v___y_1587_, lean_object* v___y_1588_, lean_object* v___y_1589_){
_start:
{
uint8_t v_severity_boxed_1590_; uint8_t v_isSilent_boxed_1591_; lean_object* v_res_1592_; 
v_severity_boxed_1590_ = lean_unbox(v_severity_1581_);
v_isSilent_boxed_1591_ = lean_unbox(v_isSilent_1582_);
v_res_1592_ = l_Lean_log___at___00Lean_logError___at___00Lean_versoDocStringOfText_spec__0_spec__0(v_msgData_1580_, v_severity_boxed_1590_, v_isSilent_boxed_1591_, v___y_1583_, v___y_1584_, v___y_1585_, v___y_1586_, v___y_1587_, v___y_1588_);
lean_dec(v___y_1588_);
lean_dec_ref(v___y_1587_);
lean_dec(v___y_1586_);
lean_dec_ref(v___y_1585_);
lean_dec(v___y_1584_);
lean_dec_ref(v___y_1583_);
return v_res_1592_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_versoDocString_spec__1(size_t v_sz_1593_, size_t v_i_1594_, lean_object* v_bs_1595_){
_start:
{
uint8_t v___x_1596_; 
v___x_1596_ = lean_usize_dec_lt(v_i_1594_, v_sz_1593_);
if (v___x_1596_ == 0)
{
lean_object* v___x_1597_; 
v___x_1597_ = l_unsafeCast___redArg(v_bs_1595_);
lean_dec_ref(v_bs_1595_);
return v___x_1597_;
}
else
{
lean_object* v_v_1598_; lean_object* v___x_1599_; lean_object* v_bs_x27_1600_; lean_object* v___x_1601_; size_t v___x_1602_; size_t v___x_1603_; lean_object* v___x_1604_; lean_object* v___x_1605_; 
v_v_1598_ = lean_array_uget(v_bs_1595_, v_i_1594_);
v___x_1599_ = lean_unsigned_to_nat(0u);
v_bs_x27_1600_ = lean_array_uset(v_bs_1595_, v_i_1594_, v___x_1599_);
v___x_1601_ = l_unsafeCast___redArg(v_v_1598_);
lean_dec(v_v_1598_);
v___x_1602_ = ((size_t)1ULL);
v___x_1603_ = lean_usize_add(v_i_1594_, v___x_1602_);
v___x_1604_ = l_unsafeCast___redArg(v___x_1601_);
lean_dec(v___x_1601_);
v___x_1605_ = lean_array_uset(v_bs_x27_1600_, v_i_1594_, v___x_1604_);
v_i_1594_ = v___x_1603_;
v_bs_1595_ = v___x_1605_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_versoDocString_spec__1___boxed(lean_object* v_sz_1607_, lean_object* v_i_1608_, lean_object* v_bs_1609_){
_start:
{
size_t v_sz_boxed_1610_; size_t v_i_boxed_1611_; lean_object* v_res_1612_; 
v_sz_boxed_1610_ = lean_unbox_usize(v_sz_1607_);
lean_dec(v_sz_1607_);
v_i_boxed_1611_ = lean_unbox_usize(v_i_1608_);
lean_dec(v_i_1608_);
v_res_1612_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_versoDocString_spec__1(v_sz_boxed_1610_, v_i_boxed_1611_, v_bs_1609_);
return v_res_1612_;
}
}
LEAN_EXPORT uint8_t l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0___lam__0(uint8_t v_suppressElabErrors_1613_, uint8_t v___x_1614_, lean_object* v_x_1615_){
_start:
{
if (lean_obj_tag(v_x_1615_) == 1)
{
lean_object* v_pre_1616_; 
v_pre_1616_ = lean_ctor_get(v_x_1615_, 0);
switch(lean_obj_tag(v_pre_1616_))
{
case 1:
{
lean_object* v_pre_1617_; 
v_pre_1617_ = lean_ctor_get(v_pre_1616_, 0);
switch(lean_obj_tag(v_pre_1617_))
{
case 0:
{
lean_object* v_str_1618_; lean_object* v_str_1619_; lean_object* v___x_1620_; uint8_t v___x_1621_; 
v_str_1618_ = lean_ctor_get(v_x_1615_, 1);
v_str_1619_ = lean_ctor_get(v_pre_1616_, 1);
v___x_1620_ = ((lean_object*)(l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg___lam__0___closed__0));
v___x_1621_ = lean_string_dec_eq(v_str_1619_, v___x_1620_);
if (v___x_1621_ == 0)
{
lean_object* v___x_1622_; uint8_t v___x_1623_; 
v___x_1622_ = ((lean_object*)(l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg___lam__0___closed__1));
v___x_1623_ = lean_string_dec_eq(v_str_1619_, v___x_1622_);
if (v___x_1623_ == 0)
{
return v___x_1623_;
}
else
{
lean_object* v___x_1624_; uint8_t v___x_1625_; 
v___x_1624_ = ((lean_object*)(l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg___lam__0___closed__2));
v___x_1625_ = lean_string_dec_eq(v_str_1618_, v___x_1624_);
if (v___x_1625_ == 0)
{
return v___x_1625_;
}
else
{
return v_suppressElabErrors_1613_;
}
}
}
else
{
lean_object* v___x_1626_; uint8_t v___x_1627_; 
v___x_1626_ = ((lean_object*)(l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg___lam__0___closed__3));
v___x_1627_ = lean_string_dec_eq(v_str_1618_, v___x_1626_);
if (v___x_1627_ == 0)
{
return v___x_1627_;
}
else
{
return v_suppressElabErrors_1613_;
}
}
}
case 1:
{
lean_object* v_pre_1628_; 
v_pre_1628_ = lean_ctor_get(v_pre_1617_, 0);
if (lean_obj_tag(v_pre_1628_) == 0)
{
lean_object* v_str_1629_; lean_object* v_str_1630_; lean_object* v_str_1631_; lean_object* v___x_1632_; uint8_t v___x_1633_; 
v_str_1629_ = lean_ctor_get(v_x_1615_, 1);
v_str_1630_ = lean_ctor_get(v_pre_1616_, 1);
v_str_1631_ = lean_ctor_get(v_pre_1617_, 1);
v___x_1632_ = ((lean_object*)(l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg___lam__0___closed__4));
v___x_1633_ = lean_string_dec_eq(v_str_1631_, v___x_1632_);
if (v___x_1633_ == 0)
{
return v___x_1633_;
}
else
{
lean_object* v___x_1634_; uint8_t v___x_1635_; 
v___x_1634_ = ((lean_object*)(l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg___lam__0___closed__5));
v___x_1635_ = lean_string_dec_eq(v_str_1630_, v___x_1634_);
if (v___x_1635_ == 0)
{
return v___x_1635_;
}
else
{
lean_object* v___x_1636_; uint8_t v___x_1637_; 
v___x_1636_ = ((lean_object*)(l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg___lam__0___closed__6));
v___x_1637_ = lean_string_dec_eq(v_str_1629_, v___x_1636_);
if (v___x_1637_ == 0)
{
return v___x_1637_;
}
else
{
return v_suppressElabErrors_1613_;
}
}
}
}
else
{
return v___x_1614_;
}
}
default: 
{
return v___x_1614_;
}
}
}
case 0:
{
lean_object* v_str_1638_; lean_object* v___x_1639_; uint8_t v___x_1640_; 
v_str_1638_ = lean_ctor_get(v_x_1615_, 1);
v___x_1639_ = ((lean_object*)(l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg___lam__0___closed__7));
v___x_1640_ = lean_string_dec_eq(v_str_1638_, v___x_1639_);
if (v___x_1640_ == 0)
{
return v___x_1640_;
}
else
{
return v_suppressElabErrors_1613_;
}
}
default: 
{
return v___x_1614_;
}
}
}
else
{
return v___x_1614_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0___lam__0___boxed(lean_object* v_suppressElabErrors_1641_, lean_object* v___x_1642_, lean_object* v_x_1643_){
_start:
{
uint8_t v_suppressElabErrors_boxed_1644_; uint8_t v___x_11343__boxed_1645_; uint8_t v_res_1646_; lean_object* v_r_1647_; 
v_suppressElabErrors_boxed_1644_ = lean_unbox(v_suppressElabErrors_1641_);
v___x_11343__boxed_1645_ = lean_unbox(v___x_1642_);
v_res_1646_ = l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0___lam__0(v_suppressElabErrors_boxed_1644_, v___x_11343__boxed_1645_, v_x_1643_);
lean_dec(v_x_1643_);
v_r_1647_ = lean_box(v_res_1646_);
return v_r_1647_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__0___redArg___lam__0(uint8_t v_suppressElabErrors_1648_, uint8_t v___x_1649_, lean_object* v_x_1650_){
_start:
{
if (lean_obj_tag(v_x_1650_) == 1)
{
lean_object* v_pre_1651_; 
v_pre_1651_ = lean_ctor_get(v_x_1650_, 0);
switch(lean_obj_tag(v_pre_1651_))
{
case 1:
{
lean_object* v_pre_1652_; 
v_pre_1652_ = lean_ctor_get(v_pre_1651_, 0);
switch(lean_obj_tag(v_pre_1652_))
{
case 0:
{
lean_object* v_str_1653_; lean_object* v_str_1654_; lean_object* v___x_1655_; uint8_t v___x_1656_; 
v_str_1653_ = lean_ctor_get(v_x_1650_, 1);
v_str_1654_ = lean_ctor_get(v_pre_1651_, 1);
v___x_1655_ = ((lean_object*)(l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg___lam__0___closed__0));
v___x_1656_ = lean_string_dec_eq(v_str_1654_, v___x_1655_);
if (v___x_1656_ == 0)
{
lean_object* v___x_1657_; uint8_t v___x_1658_; 
v___x_1657_ = ((lean_object*)(l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg___lam__0___closed__1));
v___x_1658_ = lean_string_dec_eq(v_str_1654_, v___x_1657_);
if (v___x_1658_ == 0)
{
return v___x_1658_;
}
else
{
lean_object* v___x_1659_; uint8_t v___x_1660_; 
v___x_1659_ = ((lean_object*)(l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg___lam__0___closed__2));
v___x_1660_ = lean_string_dec_eq(v_str_1653_, v___x_1659_);
if (v___x_1660_ == 0)
{
return v___x_1660_;
}
else
{
return v_suppressElabErrors_1648_;
}
}
}
else
{
lean_object* v___x_1661_; uint8_t v___x_1662_; 
v___x_1661_ = ((lean_object*)(l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg___lam__0___closed__3));
v___x_1662_ = lean_string_dec_eq(v_str_1653_, v___x_1661_);
if (v___x_1662_ == 0)
{
return v___x_1662_;
}
else
{
return v_suppressElabErrors_1648_;
}
}
}
case 1:
{
lean_object* v_pre_1663_; 
v_pre_1663_ = lean_ctor_get(v_pre_1652_, 0);
if (lean_obj_tag(v_pre_1663_) == 0)
{
lean_object* v_str_1664_; lean_object* v_str_1665_; lean_object* v_str_1666_; lean_object* v___x_1667_; uint8_t v___x_1668_; 
v_str_1664_ = lean_ctor_get(v_x_1650_, 1);
v_str_1665_ = lean_ctor_get(v_pre_1651_, 1);
v_str_1666_ = lean_ctor_get(v_pre_1652_, 1);
v___x_1667_ = ((lean_object*)(l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg___lam__0___closed__4));
v___x_1668_ = lean_string_dec_eq(v_str_1666_, v___x_1667_);
if (v___x_1668_ == 0)
{
return v___x_1668_;
}
else
{
lean_object* v___x_1669_; uint8_t v___x_1670_; 
v___x_1669_ = ((lean_object*)(l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg___lam__0___closed__5));
v___x_1670_ = lean_string_dec_eq(v_str_1665_, v___x_1669_);
if (v___x_1670_ == 0)
{
return v___x_1670_;
}
else
{
lean_object* v___x_1671_; uint8_t v___x_1672_; 
v___x_1671_ = ((lean_object*)(l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg___lam__0___closed__6));
v___x_1672_ = lean_string_dec_eq(v_str_1664_, v___x_1671_);
if (v___x_1672_ == 0)
{
return v___x_1672_;
}
else
{
return v_suppressElabErrors_1648_;
}
}
}
}
else
{
return v___x_1649_;
}
}
default: 
{
return v___x_1649_;
}
}
}
case 0:
{
lean_object* v_str_1673_; lean_object* v___x_1674_; uint8_t v___x_1675_; 
v_str_1673_ = lean_ctor_get(v_x_1650_, 1);
v___x_1674_ = ((lean_object*)(l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg___lam__0___closed__7));
v___x_1675_ = lean_string_dec_eq(v_str_1673_, v___x_1674_);
if (v___x_1675_ == 0)
{
return v___x_1675_;
}
else
{
return v_suppressElabErrors_1648_;
}
}
default: 
{
return v___x_1649_;
}
}
}
else
{
return v___x_1649_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__0___redArg___lam__0___boxed(lean_object* v_suppressElabErrors_1676_, lean_object* v___x_1677_, lean_object* v_x_1678_){
_start:
{
uint8_t v_suppressElabErrors_boxed_1679_; uint8_t v___x_11407__boxed_1680_; uint8_t v_res_1681_; lean_object* v_r_1682_; 
v_suppressElabErrors_boxed_1679_ = lean_unbox(v_suppressElabErrors_1676_);
v___x_11407__boxed_1680_ = lean_unbox(v___x_1677_);
v_res_1681_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__0___redArg___lam__0(v_suppressElabErrors_boxed_1679_, v___x_11407__boxed_1680_, v_x_1678_);
lean_dec(v_x_1678_);
v_r_1682_ = lean_box(v_res_1681_);
return v_r_1682_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__0___redArg(lean_object* v___x_1683_, lean_object* v___x_1684_, lean_object* v_as_1685_, size_t v_sz_1686_, size_t v_i_1687_, lean_object* v_b_1688_, lean_object* v___y_1689_, lean_object* v___y_1690_){
_start:
{
lean_object* v_a_1693_; uint8_t v___x_1697_; 
v___x_1697_ = lean_usize_dec_lt(v_i_1687_, v_sz_1686_);
if (v___x_1697_ == 0)
{
lean_object* v___x_1698_; 
lean_dec_ref(v___x_1683_);
v___x_1698_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1698_, 0, v_b_1688_);
return v___x_1698_;
}
else
{
lean_object* v_a_1699_; lean_object* v_snd_1700_; lean_object* v_toCold_1701_; lean_object* v_fst_1702_; lean_object* v___x_1704_; uint8_t v_isShared_1705_; uint8_t v_isSharedCheck_1760_; 
v_a_1699_ = lean_array_uget(v_as_1685_, v_i_1687_);
v_snd_1700_ = lean_ctor_get(v_a_1699_, 1);
lean_inc(v_snd_1700_);
v_toCold_1701_ = lean_ctor_get(v___y_1689_, 0);
v_fst_1702_ = lean_ctor_get(v_a_1699_, 0);
v_isSharedCheck_1760_ = !lean_is_exclusive(v_a_1699_);
if (v_isSharedCheck_1760_ == 0)
{
lean_object* v_unused_1761_; 
v_unused_1761_ = lean_ctor_get(v_a_1699_, 1);
lean_dec(v_unused_1761_);
v___x_1704_ = v_a_1699_;
v_isShared_1705_ = v_isSharedCheck_1760_;
goto v_resetjp_1703_;
}
else
{
lean_inc(v_fst_1702_);
lean_dec(v_a_1699_);
v___x_1704_ = lean_box(0);
v_isShared_1705_ = v_isSharedCheck_1760_;
goto v_resetjp_1703_;
}
v_resetjp_1703_:
{
lean_object* v_snd_1706_; lean_object* v___x_1708_; uint8_t v_isShared_1709_; uint8_t v_isSharedCheck_1758_; 
v_snd_1706_ = lean_ctor_get(v_snd_1700_, 1);
v_isSharedCheck_1758_ = !lean_is_exclusive(v_snd_1700_);
if (v_isSharedCheck_1758_ == 0)
{
lean_object* v_unused_1759_; 
v_unused_1759_ = lean_ctor_get(v_snd_1700_, 0);
lean_dec(v_unused_1759_);
v___x_1708_ = v_snd_1700_;
v_isShared_1709_ = v_isSharedCheck_1758_;
goto v_resetjp_1707_;
}
else
{
lean_inc(v_snd_1706_);
lean_dec(v_snd_1700_);
v___x_1708_ = lean_box(0);
v_isShared_1709_ = v_isSharedCheck_1758_;
goto v_resetjp_1707_;
}
v_resetjp_1707_:
{
uint8_t v_suppressElabErrors_1710_; lean_object* v_fileName_1711_; lean_object* v_currNamespace_1712_; lean_object* v_openDecls_1713_; lean_object* v___x_1714_; lean_object* v___x_1715_; uint8_t v___x_1716_; lean_object* v___x_1717_; lean_object* v___x_1718_; uint8_t v___x_1719_; lean_object* v___x_1720_; lean_object* v___x_1721_; lean_object* v___x_1722_; lean_object* v___x_1723_; lean_object* v_currNamespace_1725_; lean_object* v_openDecls_1726_; lean_object* v___y_1727_; 
v_suppressElabErrors_1710_ = lean_ctor_get_uint8(v___y_1689_, sizeof(void*)*3 + 1);
v_fileName_1711_ = lean_ctor_get(v_toCold_1701_, 0);
v_currNamespace_1712_ = lean_ctor_get(v_toCold_1701_, 4);
v_openDecls_1713_ = lean_ctor_get(v_toCold_1701_, 5);
v___x_1714_ = lean_box(0);
v___x_1715_ = lean_unsigned_to_nat(0u);
v___x_1716_ = lean_nat_dec_eq(v___x_1684_, v___x_1715_);
lean_inc_ref(v___x_1683_);
v___x_1717_ = l_Lean_FileMap_toPosition(v___x_1683_, v_fst_1702_);
lean_dec(v_fst_1702_);
v___x_1718_ = lean_box(0);
v___x_1719_ = 2;
v___x_1720_ = ((lean_object*)(l_Lean_parseVersoDocString___redArg___lam__3___closed__0));
v___x_1721_ = l_Lean_Parser_Error_toString(v_snd_1706_);
v___x_1722_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1722_, 0, v___x_1721_);
v___x_1723_ = l_Lean_MessageData_ofFormat(v___x_1722_);
if (v_suppressElabErrors_1710_ == 0)
{
v_currNamespace_1725_ = v_currNamespace_1712_;
v_openDecls_1726_ = v_openDecls_1713_;
v___y_1727_ = v___y_1690_;
goto v___jp_1724_;
}
else
{
lean_object* v___x_1754_; lean_object* v___x_1755_; lean_object* v___f_1756_; uint8_t v___x_1757_; 
v___x_1754_ = lean_box(v_suppressElabErrors_1710_);
v___x_1755_ = lean_box(v___x_1716_);
v___f_1756_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__0___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_1756_, 0, v___x_1754_);
lean_closure_set(v___f_1756_, 1, v___x_1755_);
lean_inc_ref(v___x_1723_);
v___x_1757_ = l_Lean_MessageData_hasTag(v___f_1756_, v___x_1723_);
if (v___x_1757_ == 0)
{
lean_dec_ref(v___x_1723_);
lean_dec_ref(v___x_1717_);
lean_del_object(v___x_1708_);
lean_del_object(v___x_1704_);
v_a_1693_ = v___x_1714_;
goto v___jp_1692_;
}
else
{
v_currNamespace_1725_ = v_currNamespace_1712_;
v_openDecls_1726_ = v_openDecls_1713_;
v___y_1727_ = v___y_1690_;
goto v___jp_1724_;
}
}
v___jp_1724_:
{
lean_object* v___x_1729_; 
lean_inc(v_openDecls_1726_);
lean_inc(v_currNamespace_1725_);
if (v_isShared_1709_ == 0)
{
lean_ctor_set(v___x_1708_, 1, v_openDecls_1726_);
lean_ctor_set(v___x_1708_, 0, v_currNamespace_1725_);
v___x_1729_ = v___x_1708_;
goto v_reusejp_1728_;
}
else
{
lean_object* v_reuseFailAlloc_1753_; 
v_reuseFailAlloc_1753_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1753_, 0, v_currNamespace_1725_);
lean_ctor_set(v_reuseFailAlloc_1753_, 1, v_openDecls_1726_);
v___x_1729_ = v_reuseFailAlloc_1753_;
goto v_reusejp_1728_;
}
v_reusejp_1728_:
{
lean_object* v___x_1731_; 
if (v_isShared_1705_ == 0)
{
lean_ctor_set_tag(v___x_1704_, 4);
lean_ctor_set(v___x_1704_, 1, v___x_1723_);
lean_ctor_set(v___x_1704_, 0, v___x_1729_);
v___x_1731_ = v___x_1704_;
goto v_reusejp_1730_;
}
else
{
lean_object* v_reuseFailAlloc_1752_; 
v_reuseFailAlloc_1752_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1752_, 0, v___x_1729_);
lean_ctor_set(v_reuseFailAlloc_1752_, 1, v___x_1723_);
v___x_1731_ = v_reuseFailAlloc_1752_;
goto v_reusejp_1730_;
}
v_reusejp_1730_:
{
lean_object* v___x_1732_; lean_object* v___x_1733_; lean_object* v_env_1734_; lean_object* v_nextMacroScope_1735_; lean_object* v_ngen_1736_; lean_object* v_auxDeclNGen_1737_; lean_object* v_traceState_1738_; lean_object* v_cache_1739_; lean_object* v_messages_1740_; lean_object* v_infoState_1741_; lean_object* v_snapshotTasks_1742_; lean_object* v___x_1744_; uint8_t v_isShared_1745_; uint8_t v_isSharedCheck_1751_; 
lean_inc_ref(v_fileName_1711_);
v___x_1732_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_1732_, 0, v_fileName_1711_);
lean_ctor_set(v___x_1732_, 1, v___x_1717_);
lean_ctor_set(v___x_1732_, 2, v___x_1718_);
lean_ctor_set(v___x_1732_, 3, v___x_1720_);
lean_ctor_set(v___x_1732_, 4, v___x_1731_);
lean_ctor_set_uint8(v___x_1732_, sizeof(void*)*5, v___x_1716_);
lean_ctor_set_uint8(v___x_1732_, sizeof(void*)*5 + 1, v___x_1719_);
lean_ctor_set_uint8(v___x_1732_, sizeof(void*)*5 + 2, v___x_1716_);
v___x_1733_ = lean_st_ref_take(v___y_1727_);
v_env_1734_ = lean_ctor_get(v___x_1733_, 0);
v_nextMacroScope_1735_ = lean_ctor_get(v___x_1733_, 1);
v_ngen_1736_ = lean_ctor_get(v___x_1733_, 2);
v_auxDeclNGen_1737_ = lean_ctor_get(v___x_1733_, 3);
v_traceState_1738_ = lean_ctor_get(v___x_1733_, 4);
v_cache_1739_ = lean_ctor_get(v___x_1733_, 5);
v_messages_1740_ = lean_ctor_get(v___x_1733_, 6);
v_infoState_1741_ = lean_ctor_get(v___x_1733_, 7);
v_snapshotTasks_1742_ = lean_ctor_get(v___x_1733_, 8);
v_isSharedCheck_1751_ = !lean_is_exclusive(v___x_1733_);
if (v_isSharedCheck_1751_ == 0)
{
v___x_1744_ = v___x_1733_;
v_isShared_1745_ = v_isSharedCheck_1751_;
goto v_resetjp_1743_;
}
else
{
lean_inc(v_snapshotTasks_1742_);
lean_inc(v_infoState_1741_);
lean_inc(v_messages_1740_);
lean_inc(v_cache_1739_);
lean_inc(v_traceState_1738_);
lean_inc(v_auxDeclNGen_1737_);
lean_inc(v_ngen_1736_);
lean_inc(v_nextMacroScope_1735_);
lean_inc(v_env_1734_);
lean_dec(v___x_1733_);
v___x_1744_ = lean_box(0);
v_isShared_1745_ = v_isSharedCheck_1751_;
goto v_resetjp_1743_;
}
v_resetjp_1743_:
{
lean_object* v___x_1746_; lean_object* v___x_1748_; 
v___x_1746_ = l_Lean_MessageLog_add(v___x_1732_, v_messages_1740_);
if (v_isShared_1745_ == 0)
{
lean_ctor_set(v___x_1744_, 6, v___x_1746_);
v___x_1748_ = v___x_1744_;
goto v_reusejp_1747_;
}
else
{
lean_object* v_reuseFailAlloc_1750_; 
v_reuseFailAlloc_1750_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1750_, 0, v_env_1734_);
lean_ctor_set(v_reuseFailAlloc_1750_, 1, v_nextMacroScope_1735_);
lean_ctor_set(v_reuseFailAlloc_1750_, 2, v_ngen_1736_);
lean_ctor_set(v_reuseFailAlloc_1750_, 3, v_auxDeclNGen_1737_);
lean_ctor_set(v_reuseFailAlloc_1750_, 4, v_traceState_1738_);
lean_ctor_set(v_reuseFailAlloc_1750_, 5, v_cache_1739_);
lean_ctor_set(v_reuseFailAlloc_1750_, 6, v___x_1746_);
lean_ctor_set(v_reuseFailAlloc_1750_, 7, v_infoState_1741_);
lean_ctor_set(v_reuseFailAlloc_1750_, 8, v_snapshotTasks_1742_);
v___x_1748_ = v_reuseFailAlloc_1750_;
goto v_reusejp_1747_;
}
v_reusejp_1747_:
{
lean_object* v___x_1749_; 
v___x_1749_ = lean_st_ref_put(v___y_1727_, v___x_1748_);
v_a_1693_ = v___x_1714_;
goto v___jp_1692_;
}
}
}
}
}
}
}
}
v___jp_1692_:
{
size_t v___x_1694_; size_t v___x_1695_; 
v___x_1694_ = ((size_t)1ULL);
v___x_1695_ = lean_usize_add(v_i_1687_, v___x_1694_);
v_i_1687_ = v___x_1695_;
v_b_1688_ = v_a_1693_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__0___redArg___boxed(lean_object* v___x_1762_, lean_object* v___x_1763_, lean_object* v_as_1764_, lean_object* v_sz_1765_, lean_object* v_i_1766_, lean_object* v_b_1767_, lean_object* v___y_1768_, lean_object* v___y_1769_, lean_object* v___y_1770_){
_start:
{
size_t v_sz_boxed_1771_; size_t v_i_boxed_1772_; lean_object* v_res_1773_; 
v_sz_boxed_1771_ = lean_unbox_usize(v_sz_1765_);
lean_dec(v_sz_1765_);
v_i_boxed_1772_ = lean_unbox_usize(v_i_1766_);
lean_dec(v_i_1766_);
v_res_1773_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__0___redArg(v___x_1762_, v___x_1763_, v_as_1764_, v_sz_boxed_1771_, v_i_boxed_1772_, v_b_1767_, v___y_1768_, v___y_1769_);
lean_dec(v___y_1769_);
lean_dec_ref(v___y_1768_);
lean_dec_ref(v_as_1764_);
lean_dec(v___x_1763_);
return v_res_1773_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__4_spec__5___closed__0(void){
_start:
{
lean_object* v___x_1774_; lean_object* v___x_1775_; 
v___x_1774_ = lean_box(1);
v___x_1775_ = l_Lean_MessageData_ofFormat(v___x_1774_);
return v___x_1775_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__4_spec__5___closed__3(void){
_start:
{
lean_object* v___x_1779_; lean_object* v___x_1780_; 
v___x_1779_ = ((lean_object*)(l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__4_spec__5___closed__2));
v___x_1780_ = l_Lean_MessageData_ofFormat(v___x_1779_);
return v___x_1780_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__4_spec__5(lean_object* v_x_1781_, lean_object* v_x_1782_){
_start:
{
if (lean_obj_tag(v_x_1782_) == 0)
{
return v_x_1781_;
}
else
{
lean_object* v_head_1783_; lean_object* v_tail_1784_; lean_object* v___x_1786_; uint8_t v_isShared_1787_; uint8_t v_isSharedCheck_1806_; 
v_head_1783_ = lean_ctor_get(v_x_1782_, 0);
v_tail_1784_ = lean_ctor_get(v_x_1782_, 1);
v_isSharedCheck_1806_ = !lean_is_exclusive(v_x_1782_);
if (v_isSharedCheck_1806_ == 0)
{
v___x_1786_ = v_x_1782_;
v_isShared_1787_ = v_isSharedCheck_1806_;
goto v_resetjp_1785_;
}
else
{
lean_inc(v_tail_1784_);
lean_inc(v_head_1783_);
lean_dec(v_x_1782_);
v___x_1786_ = lean_box(0);
v_isShared_1787_ = v_isSharedCheck_1806_;
goto v_resetjp_1785_;
}
v_resetjp_1785_:
{
lean_object* v_before_1788_; lean_object* v___x_1790_; uint8_t v_isShared_1791_; uint8_t v_isSharedCheck_1804_; 
v_before_1788_ = lean_ctor_get(v_head_1783_, 0);
v_isSharedCheck_1804_ = !lean_is_exclusive(v_head_1783_);
if (v_isSharedCheck_1804_ == 0)
{
lean_object* v_unused_1805_; 
v_unused_1805_ = lean_ctor_get(v_head_1783_, 1);
lean_dec(v_unused_1805_);
v___x_1790_ = v_head_1783_;
v_isShared_1791_ = v_isSharedCheck_1804_;
goto v_resetjp_1789_;
}
else
{
lean_inc(v_before_1788_);
lean_dec(v_head_1783_);
v___x_1790_ = lean_box(0);
v_isShared_1791_ = v_isSharedCheck_1804_;
goto v_resetjp_1789_;
}
v_resetjp_1789_:
{
lean_object* v___x_1792_; lean_object* v___x_1794_; 
v___x_1792_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__4_spec__5___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__4_spec__5___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__4_spec__5___closed__0);
if (v_isShared_1791_ == 0)
{
lean_ctor_set_tag(v___x_1790_, 7);
lean_ctor_set(v___x_1790_, 1, v___x_1792_);
lean_ctor_set(v___x_1790_, 0, v_x_1781_);
v___x_1794_ = v___x_1790_;
goto v_reusejp_1793_;
}
else
{
lean_object* v_reuseFailAlloc_1803_; 
v_reuseFailAlloc_1803_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1803_, 0, v_x_1781_);
lean_ctor_set(v_reuseFailAlloc_1803_, 1, v___x_1792_);
v___x_1794_ = v_reuseFailAlloc_1803_;
goto v_reusejp_1793_;
}
v_reusejp_1793_:
{
lean_object* v___x_1795_; lean_object* v___x_1797_; 
v___x_1795_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__4_spec__5___closed__3, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__4_spec__5___closed__3_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__4_spec__5___closed__3);
if (v_isShared_1787_ == 0)
{
lean_ctor_set_tag(v___x_1786_, 7);
lean_ctor_set(v___x_1786_, 1, v___x_1795_);
lean_ctor_set(v___x_1786_, 0, v___x_1794_);
v___x_1797_ = v___x_1786_;
goto v_reusejp_1796_;
}
else
{
lean_object* v_reuseFailAlloc_1802_; 
v_reuseFailAlloc_1802_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1802_, 0, v___x_1794_);
lean_ctor_set(v_reuseFailAlloc_1802_, 1, v___x_1795_);
v___x_1797_ = v_reuseFailAlloc_1802_;
goto v_reusejp_1796_;
}
v_reusejp_1796_:
{
lean_object* v___x_1798_; lean_object* v___x_1799_; lean_object* v___x_1800_; 
v___x_1798_ = l_Lean_MessageData_ofSyntax(v_before_1788_);
v___x_1799_ = l_Lean_indentD(v___x_1798_);
v___x_1800_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1800_, 0, v___x_1797_);
lean_ctor_set(v___x_1800_, 1, v___x_1799_);
v_x_1781_ = v___x_1800_;
v_x_1782_ = v_tail_1784_;
goto _start;
}
}
}
}
}
}
}
static lean_object* _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__4___redArg___closed__2(void){
_start:
{
lean_object* v___x_1810_; lean_object* v___x_1811_; 
v___x_1810_ = ((lean_object*)(l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__4___redArg___closed__1));
v___x_1811_ = l_Lean_MessageData_ofFormat(v___x_1810_);
return v___x_1811_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__4___redArg(lean_object* v_msgData_1812_, lean_object* v_macroStack_1813_, lean_object* v___y_1814_){
_start:
{
lean_object* v_toCold_1816_; lean_object* v_options_1817_; lean_object* v___x_1818_; uint8_t v___x_1819_; 
v_toCold_1816_ = lean_ctor_get(v___y_1814_, 0);
v_options_1817_ = lean_ctor_get(v_toCold_1816_, 2);
v___x_1818_ = l_Lean_Elab_pp_macroStack;
v___x_1819_ = l_Lean_Option_get___at___00Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2_spec__4(v_options_1817_, v___x_1818_);
if (v___x_1819_ == 0)
{
lean_object* v___x_1820_; 
lean_dec(v_macroStack_1813_);
v___x_1820_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1820_, 0, v_msgData_1812_);
return v___x_1820_;
}
else
{
if (lean_obj_tag(v_macroStack_1813_) == 0)
{
lean_object* v___x_1821_; 
v___x_1821_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1821_, 0, v_msgData_1812_);
return v___x_1821_;
}
else
{
lean_object* v_head_1822_; lean_object* v_after_1823_; lean_object* v___x_1825_; uint8_t v_isShared_1826_; uint8_t v_isSharedCheck_1838_; 
v_head_1822_ = lean_ctor_get(v_macroStack_1813_, 0);
lean_inc(v_head_1822_);
v_after_1823_ = lean_ctor_get(v_head_1822_, 1);
v_isSharedCheck_1838_ = !lean_is_exclusive(v_head_1822_);
if (v_isSharedCheck_1838_ == 0)
{
lean_object* v_unused_1839_; 
v_unused_1839_ = lean_ctor_get(v_head_1822_, 0);
lean_dec(v_unused_1839_);
v___x_1825_ = v_head_1822_;
v_isShared_1826_ = v_isSharedCheck_1838_;
goto v_resetjp_1824_;
}
else
{
lean_inc(v_after_1823_);
lean_dec(v_head_1822_);
v___x_1825_ = lean_box(0);
v_isShared_1826_ = v_isSharedCheck_1838_;
goto v_resetjp_1824_;
}
v_resetjp_1824_:
{
lean_object* v___x_1827_; lean_object* v___x_1829_; 
v___x_1827_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__4_spec__5___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__4_spec__5___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__4_spec__5___closed__0);
if (v_isShared_1826_ == 0)
{
lean_ctor_set_tag(v___x_1825_, 7);
lean_ctor_set(v___x_1825_, 1, v___x_1827_);
lean_ctor_set(v___x_1825_, 0, v_msgData_1812_);
v___x_1829_ = v___x_1825_;
goto v_reusejp_1828_;
}
else
{
lean_object* v_reuseFailAlloc_1837_; 
v_reuseFailAlloc_1837_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1837_, 0, v_msgData_1812_);
lean_ctor_set(v_reuseFailAlloc_1837_, 1, v___x_1827_);
v___x_1829_ = v_reuseFailAlloc_1837_;
goto v_reusejp_1828_;
}
v_reusejp_1828_:
{
lean_object* v___x_1830_; lean_object* v___x_1831_; lean_object* v___x_1832_; lean_object* v___x_1833_; lean_object* v_msgData_1834_; lean_object* v___x_1835_; lean_object* v___x_1836_; 
v___x_1830_ = lean_obj_once(&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__4___redArg___closed__2, &l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__4___redArg___closed__2_once, _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__4___redArg___closed__2);
v___x_1831_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1831_, 0, v___x_1829_);
lean_ctor_set(v___x_1831_, 1, v___x_1830_);
v___x_1832_ = l_Lean_MessageData_ofSyntax(v_after_1823_);
v___x_1833_ = l_Lean_indentD(v___x_1832_);
v_msgData_1834_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_msgData_1834_, 0, v___x_1831_);
lean_ctor_set(v_msgData_1834_, 1, v___x_1833_);
v___x_1835_ = l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__4_spec__5(v_msgData_1834_, v_macroStack_1813_);
v___x_1836_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1836_, 0, v___x_1835_);
return v___x_1836_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__4___redArg___boxed(lean_object* v_msgData_1840_, lean_object* v_macroStack_1841_, lean_object* v___y_1842_, lean_object* v___y_1843_){
_start:
{
lean_object* v_res_1844_; 
v_res_1844_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__4___redArg(v_msgData_1840_, v_macroStack_1841_, v___y_1842_);
lean_dec_ref(v___y_1842_);
return v_res_1844_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2___redArg(lean_object* v_msg_1845_, lean_object* v___y_1846_, lean_object* v___y_1847_, lean_object* v___y_1848_, lean_object* v___y_1849_, lean_object* v___y_1850_, lean_object* v___y_1851_){
_start:
{
lean_object* v_ref_1853_; lean_object* v_macroStack_1854_; lean_object* v___x_1855_; lean_object* v___x_1856_; lean_object* v_a_1857_; lean_object* v___x_1858_; lean_object* v_a_1859_; lean_object* v___x_1861_; uint8_t v_isShared_1862_; uint8_t v_isSharedCheck_1867_; 
v_ref_1853_ = lean_ctor_get(v___y_1850_, 2);
v_macroStack_1854_ = lean_ctor_get(v___y_1846_, 1);
v___x_1855_ = l_Lean_Elab_getBetterRef(v_ref_1853_, v_macroStack_1854_);
v___x_1856_ = l_Lean_addMessageContextFull___at___00Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2_spec__3(v_msg_1845_, v___y_1848_, v___y_1849_, v___y_1850_, v___y_1851_);
v_a_1857_ = lean_ctor_get(v___x_1856_, 0);
lean_inc(v_a_1857_);
lean_dec_ref(v___x_1856_);
lean_inc(v_macroStack_1854_);
v___x_1858_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__4___redArg(v_a_1857_, v_macroStack_1854_, v___y_1850_);
v_a_1859_ = lean_ctor_get(v___x_1858_, 0);
v_isSharedCheck_1867_ = !lean_is_exclusive(v___x_1858_);
if (v_isSharedCheck_1867_ == 0)
{
v___x_1861_ = v___x_1858_;
v_isShared_1862_ = v_isSharedCheck_1867_;
goto v_resetjp_1860_;
}
else
{
lean_inc(v_a_1859_);
lean_dec(v___x_1858_);
v___x_1861_ = lean_box(0);
v_isShared_1862_ = v_isSharedCheck_1867_;
goto v_resetjp_1860_;
}
v_resetjp_1860_:
{
lean_object* v___x_1863_; lean_object* v___x_1865_; 
v___x_1863_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1863_, 0, v___x_1855_);
lean_ctor_set(v___x_1863_, 1, v_a_1859_);
if (v_isShared_1862_ == 0)
{
lean_ctor_set_tag(v___x_1861_, 1);
lean_ctor_set(v___x_1861_, 0, v___x_1863_);
v___x_1865_ = v___x_1861_;
goto v_reusejp_1864_;
}
else
{
lean_object* v_reuseFailAlloc_1866_; 
v_reuseFailAlloc_1866_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1866_, 0, v___x_1863_);
v___x_1865_ = v_reuseFailAlloc_1866_;
goto v_reusejp_1864_;
}
v_reusejp_1864_:
{
return v___x_1865_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2___redArg___boxed(lean_object* v_msg_1868_, lean_object* v___y_1869_, lean_object* v___y_1870_, lean_object* v___y_1871_, lean_object* v___y_1872_, lean_object* v___y_1873_, lean_object* v___y_1874_, lean_object* v___y_1875_){
_start:
{
lean_object* v_res_1876_; 
v_res_1876_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2___redArg(v_msg_1868_, v___y_1869_, v___y_1870_, v___y_1871_, v___y_1872_, v___y_1873_, v___y_1874_);
lean_dec(v___y_1874_);
lean_dec_ref(v___y_1873_);
lean_dec(v___y_1872_);
lean_dec_ref(v___y_1871_);
lean_dec(v___y_1870_);
lean_dec_ref(v___y_1869_);
return v_res_1876_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1___redArg(lean_object* v_ref_1877_, lean_object* v_msg_1878_, lean_object* v___y_1879_, lean_object* v___y_1880_, lean_object* v___y_1881_, lean_object* v___y_1882_, lean_object* v___y_1883_, lean_object* v___y_1884_){
_start:
{
lean_object* v_toCold_1886_; lean_object* v_currRecDepth_1887_; lean_object* v_ref_1888_; uint8_t v_diag_1889_; uint8_t v_suppressElabErrors_1890_; lean_object* v_ref_1891_; lean_object* v___x_1892_; lean_object* v___x_1893_; 
v_toCold_1886_ = lean_ctor_get(v___y_1883_, 0);
v_currRecDepth_1887_ = lean_ctor_get(v___y_1883_, 1);
v_ref_1888_ = lean_ctor_get(v___y_1883_, 2);
v_diag_1889_ = lean_ctor_get_uint8(v___y_1883_, sizeof(void*)*3);
v_suppressElabErrors_1890_ = lean_ctor_get_uint8(v___y_1883_, sizeof(void*)*3 + 1);
v_ref_1891_ = l_Lean_replaceRef(v_ref_1877_, v_ref_1888_);
lean_inc(v_currRecDepth_1887_);
lean_inc_ref(v_toCold_1886_);
v___x_1892_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_1892_, 0, v_toCold_1886_);
lean_ctor_set(v___x_1892_, 1, v_currRecDepth_1887_);
lean_ctor_set(v___x_1892_, 2, v_ref_1891_);
lean_ctor_set_uint8(v___x_1892_, sizeof(void*)*3, v_diag_1889_);
lean_ctor_set_uint8(v___x_1892_, sizeof(void*)*3 + 1, v_suppressElabErrors_1890_);
v___x_1893_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2___redArg(v_msg_1878_, v___y_1879_, v___y_1880_, v___y_1881_, v___y_1882_, v___x_1892_, v___y_1884_);
lean_dec_ref_known(v___x_1892_, 3);
return v___x_1893_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1___redArg___boxed(lean_object* v_ref_1894_, lean_object* v_msg_1895_, lean_object* v___y_1896_, lean_object* v___y_1897_, lean_object* v___y_1898_, lean_object* v___y_1899_, lean_object* v___y_1900_, lean_object* v___y_1901_, lean_object* v___y_1902_){
_start:
{
lean_object* v_res_1903_; 
v_res_1903_ = l_Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1___redArg(v_ref_1894_, v_msg_1895_, v___y_1896_, v___y_1897_, v___y_1898_, v___y_1899_, v___y_1900_, v___y_1901_);
lean_dec(v___y_1901_);
lean_dec_ref(v___y_1900_);
lean_dec(v___y_1899_);
lean_dec_ref(v___y_1898_);
lean_dec(v___y_1897_);
lean_dec_ref(v___y_1896_);
lean_dec(v_ref_1894_);
return v_res_1903_;
}
}
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0(lean_object* v_docComment_1904_, lean_object* v___y_1905_, lean_object* v___y_1906_, lean_object* v___y_1907_, lean_object* v___y_1908_, lean_object* v___y_1909_, lean_object* v___y_1910_){
_start:
{
lean_object* v___y_1916_; uint8_t v___y_1917_; lean_object* v___y_1918_; uint8_t v___y_1919_; lean_object* v___y_1920_; lean_object* v___y_1921_; lean_object* v___y_1922_; lean_object* v_currNamespace_1923_; lean_object* v_openDecls_1924_; lean_object* v___y_1925_; uint8_t v___y_1949_; lean_object* v___y_1950_; lean_object* v___y_1951_; uint8_t v___y_1952_; lean_object* v___y_1953_; lean_object* v___y_1954_; lean_object* v___y_1955_; lean_object* v___y_1956_; lean_object* v___y_1957_; uint8_t v___y_2006_; lean_object* v___y_2007_; lean_object* v___y_2008_; lean_object* v___y_2009_; lean_object* v___y_2010_; uint8_t v___y_2011_; lean_object* v___y_2012_; lean_object* v___y_2013_; lean_object* v___y_2014_; lean_object* v___y_2015_; lean_object* v___y_2016_; lean_object* v___y_2017_; lean_object* v___y_2018_; lean_object* v___x_2066_; lean_object* v___x_2067_; lean_object* v___x_2068_; lean_object* v___x_2069_; lean_object* v___x_2070_; uint8_t v___x_2071_; 
lean_inc(v_docComment_1904_);
v___x_2066_ = l_Lean_Syntax_getKind(v_docComment_1904_);
v___x_2067_ = ((lean_object*)(l_Lean_parseVersoDocString___redArg___closed__0));
v___x_2068_ = ((lean_object*)(l_Lean_parseVersoDocString___redArg___closed__1));
v___x_2069_ = ((lean_object*)(l_Lean_parseVersoDocString___redArg___closed__2));
v___x_2070_ = ((lean_object*)(l_Lean_parseVersoDocString___redArg___closed__4));
v___x_2071_ = lean_name_eq(v___x_2066_, v___x_2070_);
lean_dec(v___x_2066_);
if (v___x_2071_ == 0)
{
goto v___jp_2042_;
}
else
{
lean_object* v___x_2072_; lean_object* v___x_2073_; 
v___x_2072_ = lean_unsigned_to_nat(0u);
v___x_2073_ = l_Lean_Syntax_getArg(v_docComment_1904_, v___x_2072_);
if (lean_obj_tag(v___x_2073_) == 1)
{
lean_object* v_kind_2074_; 
v_kind_2074_ = lean_ctor_get(v___x_2073_, 1);
lean_inc(v_kind_2074_);
if (lean_obj_tag(v_kind_2074_) == 1)
{
lean_object* v_pre_2075_; 
v_pre_2075_ = lean_ctor_get(v_kind_2074_, 0);
lean_inc(v_pre_2075_);
if (lean_obj_tag(v_pre_2075_) == 1)
{
lean_object* v_pre_2076_; 
v_pre_2076_ = lean_ctor_get(v_pre_2075_, 0);
lean_inc(v_pre_2076_);
if (lean_obj_tag(v_pre_2076_) == 1)
{
lean_object* v_pre_2077_; 
v_pre_2077_ = lean_ctor_get(v_pre_2076_, 0);
lean_inc(v_pre_2077_);
if (lean_obj_tag(v_pre_2077_) == 1)
{
lean_object* v_pre_2078_; 
v_pre_2078_ = lean_ctor_get(v_pre_2077_, 0);
lean_inc(v_pre_2078_);
if (lean_obj_tag(v_pre_2078_) == 0)
{
lean_object* v_info_2079_; lean_object* v_args_2080_; lean_object* v___x_2082_; uint8_t v_isShared_2083_; uint8_t v_isSharedCheck_2104_; 
v_info_2079_ = lean_ctor_get(v___x_2073_, 0);
v_args_2080_ = lean_ctor_get(v___x_2073_, 2);
v_isSharedCheck_2104_ = !lean_is_exclusive(v___x_2073_);
if (v_isSharedCheck_2104_ == 0)
{
lean_object* v_unused_2105_; 
v_unused_2105_ = lean_ctor_get(v___x_2073_, 1);
lean_dec(v_unused_2105_);
v___x_2082_ = v___x_2073_;
v_isShared_2083_ = v_isSharedCheck_2104_;
goto v_resetjp_2081_;
}
else
{
lean_inc(v_args_2080_);
lean_inc(v_info_2079_);
lean_dec(v___x_2073_);
v___x_2082_ = lean_box(0);
v_isShared_2083_ = v_isSharedCheck_2104_;
goto v_resetjp_2081_;
}
v_resetjp_2081_:
{
lean_object* v_str_2084_; lean_object* v_str_2085_; lean_object* v_str_2086_; lean_object* v_str_2087_; uint8_t v___x_2088_; 
v_str_2084_ = lean_ctor_get(v_kind_2074_, 1);
lean_inc_ref(v_str_2084_);
lean_dec_ref_known(v_kind_2074_, 2);
v_str_2085_ = lean_ctor_get(v_pre_2075_, 1);
lean_inc_ref(v_str_2085_);
lean_dec_ref_known(v_pre_2075_, 2);
v_str_2086_ = lean_ctor_get(v_pre_2076_, 1);
lean_inc_ref(v_str_2086_);
lean_dec_ref_known(v_pre_2076_, 2);
v_str_2087_ = lean_ctor_get(v_pre_2077_, 1);
lean_inc_ref(v_str_2087_);
lean_dec_ref_known(v_pre_2077_, 2);
v___x_2088_ = lean_string_dec_eq(v_str_2087_, v___x_2067_);
lean_dec_ref(v_str_2087_);
if (v___x_2088_ == 0)
{
lean_dec_ref(v_str_2086_);
lean_dec_ref(v_str_2085_);
lean_dec_ref(v_str_2084_);
lean_del_object(v___x_2082_);
lean_dec_ref(v_args_2080_);
lean_dec(v_info_2079_);
goto v___jp_2042_;
}
else
{
uint8_t v___x_2089_; 
v___x_2089_ = lean_string_dec_eq(v_str_2086_, v___x_2068_);
lean_dec_ref(v_str_2086_);
if (v___x_2089_ == 0)
{
lean_dec_ref(v_str_2085_);
lean_dec_ref(v_str_2084_);
lean_del_object(v___x_2082_);
lean_dec_ref(v_args_2080_);
lean_dec(v_info_2079_);
goto v___jp_2042_;
}
else
{
uint8_t v___x_2090_; 
v___x_2090_ = lean_string_dec_eq(v_str_2085_, v___x_2069_);
lean_dec_ref(v_str_2085_);
if (v___x_2090_ == 0)
{
lean_dec_ref(v_str_2084_);
lean_del_object(v___x_2082_);
lean_dec_ref(v_args_2080_);
lean_dec(v_info_2079_);
goto v___jp_2042_;
}
else
{
lean_object* v___x_2091_; uint8_t v___x_2092_; 
v___x_2091_ = ((lean_object*)(l_Lean_parseVersoDocString___redArg___closed__5));
v___x_2092_ = lean_string_dec_eq(v_str_2084_, v___x_2091_);
lean_dec_ref(v_str_2084_);
if (v___x_2092_ == 0)
{
lean_del_object(v___x_2082_);
lean_dec_ref(v_args_2080_);
lean_dec(v_info_2079_);
goto v___jp_2042_;
}
else
{
lean_object* v___x_2093_; lean_object* v___x_2094_; lean_object* v___x_2095_; lean_object* v___x_2096_; lean_object* v___x_2098_; 
lean_dec(v_docComment_1904_);
v___x_2093_ = l_Lean_Name_str___override(v_pre_2078_, v___x_2067_);
v___x_2094_ = l_Lean_Name_str___override(v___x_2093_, v___x_2068_);
v___x_2095_ = l_Lean_Name_str___override(v___x_2094_, v___x_2069_);
v___x_2096_ = l_Lean_Name_str___override(v___x_2095_, v___x_2091_);
if (v_isShared_2083_ == 0)
{
lean_ctor_set(v___x_2082_, 1, v___x_2096_);
v___x_2098_ = v___x_2082_;
goto v_reusejp_2097_;
}
else
{
lean_object* v_reuseFailAlloc_2103_; 
v_reuseFailAlloc_2103_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2103_, 0, v_info_2079_);
lean_ctor_set(v_reuseFailAlloc_2103_, 1, v___x_2096_);
lean_ctor_set(v_reuseFailAlloc_2103_, 2, v_args_2080_);
v___x_2098_ = v_reuseFailAlloc_2103_;
goto v_reusejp_2097_;
}
v_reusejp_2097_:
{
lean_object* v___x_2099_; lean_object* v___x_2100_; lean_object* v___x_2101_; lean_object* v___x_2102_; 
v___x_2099_ = lean_unsigned_to_nat(1u);
v___x_2100_ = l_Lean_Syntax_getArg(v___x_2098_, v___x_2099_);
lean_dec_ref(v___x_2098_);
v___x_2101_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2101_, 0, v___x_2100_);
v___x_2102_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2102_, 0, v___x_2101_);
return v___x_2102_;
}
}
}
}
}
}
}
else
{
lean_dec(v_pre_2078_);
lean_dec_ref_known(v_pre_2077_, 2);
lean_dec_ref_known(v_pre_2076_, 2);
lean_dec_ref_known(v_pre_2075_, 2);
lean_dec_ref_known(v_kind_2074_, 2);
lean_dec_ref_known(v___x_2073_, 3);
goto v___jp_2042_;
}
}
else
{
lean_dec_ref_known(v_pre_2076_, 2);
lean_dec(v_pre_2077_);
lean_dec_ref_known(v_pre_2075_, 2);
lean_dec_ref_known(v_kind_2074_, 2);
lean_dec_ref_known(v___x_2073_, 3);
goto v___jp_2042_;
}
}
else
{
lean_dec(v_pre_2076_);
lean_dec_ref_known(v_pre_2075_, 2);
lean_dec_ref_known(v_kind_2074_, 2);
lean_dec_ref_known(v___x_2073_, 3);
goto v___jp_2042_;
}
}
else
{
lean_dec_ref_known(v_kind_2074_, 2);
lean_dec(v_pre_2075_);
lean_dec_ref_known(v___x_2073_, 3);
goto v___jp_2042_;
}
}
else
{
lean_dec_ref_known(v___x_2073_, 3);
lean_dec(v_kind_2074_);
goto v___jp_2042_;
}
}
else
{
lean_dec(v___x_2073_);
goto v___jp_2042_;
}
}
v___jp_1912_:
{
lean_object* v___x_1913_; lean_object* v___x_1914_; 
v___x_1913_ = lean_box(0);
v___x_1914_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1914_, 0, v___x_1913_);
return v___x_1914_;
}
v___jp_1915_:
{
lean_object* v___x_1926_; lean_object* v___x_1927_; lean_object* v___x_1928_; lean_object* v___x_1929_; lean_object* v_env_1930_; lean_object* v_nextMacroScope_1931_; lean_object* v_ngen_1932_; lean_object* v_auxDeclNGen_1933_; lean_object* v_traceState_1934_; lean_object* v_cache_1935_; lean_object* v_messages_1936_; lean_object* v_infoState_1937_; lean_object* v_snapshotTasks_1938_; lean_object* v___x_1940_; uint8_t v_isShared_1941_; uint8_t v_isSharedCheck_1947_; 
lean_inc(v_openDecls_1924_);
lean_inc(v_currNamespace_1923_);
v___x_1926_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1926_, 0, v_currNamespace_1923_);
lean_ctor_set(v___x_1926_, 1, v_openDecls_1924_);
v___x_1927_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1927_, 0, v___x_1926_);
lean_ctor_set(v___x_1927_, 1, v___y_1921_);
lean_inc(v___y_1920_);
lean_inc_ref(v___y_1918_);
v___x_1928_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_1928_, 0, v___y_1918_);
lean_ctor_set(v___x_1928_, 1, v___y_1916_);
lean_ctor_set(v___x_1928_, 2, v___y_1920_);
lean_ctor_set(v___x_1928_, 3, v___y_1922_);
lean_ctor_set(v___x_1928_, 4, v___x_1927_);
lean_ctor_set_uint8(v___x_1928_, sizeof(void*)*5, v___y_1919_);
lean_ctor_set_uint8(v___x_1928_, sizeof(void*)*5 + 1, v___y_1917_);
lean_ctor_set_uint8(v___x_1928_, sizeof(void*)*5 + 2, v___y_1919_);
v___x_1929_ = lean_st_ref_take(v___y_1925_);
v_env_1930_ = lean_ctor_get(v___x_1929_, 0);
v_nextMacroScope_1931_ = lean_ctor_get(v___x_1929_, 1);
v_ngen_1932_ = lean_ctor_get(v___x_1929_, 2);
v_auxDeclNGen_1933_ = lean_ctor_get(v___x_1929_, 3);
v_traceState_1934_ = lean_ctor_get(v___x_1929_, 4);
v_cache_1935_ = lean_ctor_get(v___x_1929_, 5);
v_messages_1936_ = lean_ctor_get(v___x_1929_, 6);
v_infoState_1937_ = lean_ctor_get(v___x_1929_, 7);
v_snapshotTasks_1938_ = lean_ctor_get(v___x_1929_, 8);
v_isSharedCheck_1947_ = !lean_is_exclusive(v___x_1929_);
if (v_isSharedCheck_1947_ == 0)
{
v___x_1940_ = v___x_1929_;
v_isShared_1941_ = v_isSharedCheck_1947_;
goto v_resetjp_1939_;
}
else
{
lean_inc(v_snapshotTasks_1938_);
lean_inc(v_infoState_1937_);
lean_inc(v_messages_1936_);
lean_inc(v_cache_1935_);
lean_inc(v_traceState_1934_);
lean_inc(v_auxDeclNGen_1933_);
lean_inc(v_ngen_1932_);
lean_inc(v_nextMacroScope_1931_);
lean_inc(v_env_1930_);
lean_dec(v___x_1929_);
v___x_1940_ = lean_box(0);
v_isShared_1941_ = v_isSharedCheck_1947_;
goto v_resetjp_1939_;
}
v_resetjp_1939_:
{
lean_object* v___x_1942_; lean_object* v___x_1944_; 
v___x_1942_ = l_Lean_MessageLog_add(v___x_1928_, v_messages_1936_);
if (v_isShared_1941_ == 0)
{
lean_ctor_set(v___x_1940_, 6, v___x_1942_);
v___x_1944_ = v___x_1940_;
goto v_reusejp_1943_;
}
else
{
lean_object* v_reuseFailAlloc_1946_; 
v_reuseFailAlloc_1946_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1946_, 0, v_env_1930_);
lean_ctor_set(v_reuseFailAlloc_1946_, 1, v_nextMacroScope_1931_);
lean_ctor_set(v_reuseFailAlloc_1946_, 2, v_ngen_1932_);
lean_ctor_set(v_reuseFailAlloc_1946_, 3, v_auxDeclNGen_1933_);
lean_ctor_set(v_reuseFailAlloc_1946_, 4, v_traceState_1934_);
lean_ctor_set(v_reuseFailAlloc_1946_, 5, v_cache_1935_);
lean_ctor_set(v_reuseFailAlloc_1946_, 6, v___x_1942_);
lean_ctor_set(v_reuseFailAlloc_1946_, 7, v_infoState_1937_);
lean_ctor_set(v_reuseFailAlloc_1946_, 8, v_snapshotTasks_1938_);
v___x_1944_ = v_reuseFailAlloc_1946_;
goto v_reusejp_1943_;
}
v_reusejp_1943_:
{
lean_object* v___x_1945_; 
v___x_1945_ = lean_st_ref_put(v___y_1925_, v___x_1944_);
goto v___jp_1912_;
}
}
}
v___jp_1948_:
{
lean_object* v___x_1958_; lean_object* v___x_1959_; lean_object* v___x_1960_; uint8_t v___x_1961_; 
lean_inc_ref(v___y_1957_);
v___x_1958_ = l_Lean_Parser_ParserState_allErrors(v___y_1957_);
v___x_1959_ = lean_array_get_size(v___x_1958_);
v___x_1960_ = lean_unsigned_to_nat(0u);
v___x_1961_ = lean_nat_dec_eq(v___x_1959_, v___x_1960_);
if (v___x_1961_ == 0)
{
lean_object* v___x_1962_; size_t v_sz_1963_; size_t v___x_1964_; lean_object* v___x_1965_; 
lean_dec_ref(v___y_1957_);
lean_dec_ref(v___y_1955_);
v___x_1962_ = lean_box(0);
v_sz_1963_ = lean_array_size(v___x_1958_);
v___x_1964_ = ((size_t)0ULL);
lean_inc_ref(v___y_1954_);
v___x_1965_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__0___redArg(v___y_1954_, v___x_1959_, v___x_1958_, v_sz_1963_, v___x_1964_, v___x_1962_, v___y_1909_, v___y_1910_);
lean_dec_ref(v___x_1958_);
if (lean_obj_tag(v___x_1965_) == 0)
{
lean_object* v___x_1967_; uint8_t v_isShared_1968_; uint8_t v_isSharedCheck_1973_; 
v_isSharedCheck_1973_ = !lean_is_exclusive(v___x_1965_);
if (v_isSharedCheck_1973_ == 0)
{
lean_object* v_unused_1974_; 
v_unused_1974_ = lean_ctor_get(v___x_1965_, 0);
lean_dec(v_unused_1974_);
v___x_1967_ = v___x_1965_;
v_isShared_1968_ = v_isSharedCheck_1973_;
goto v_resetjp_1966_;
}
else
{
lean_dec(v___x_1965_);
v___x_1967_ = lean_box(0);
v_isShared_1968_ = v_isSharedCheck_1973_;
goto v_resetjp_1966_;
}
v_resetjp_1966_:
{
lean_object* v___x_1969_; lean_object* v___x_1971_; 
v___x_1969_ = lean_box(0);
if (v_isShared_1968_ == 0)
{
lean_ctor_set(v___x_1967_, 0, v___x_1969_);
v___x_1971_ = v___x_1967_;
goto v_reusejp_1970_;
}
else
{
lean_object* v_reuseFailAlloc_1972_; 
v_reuseFailAlloc_1972_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1972_, 0, v___x_1969_);
v___x_1971_ = v_reuseFailAlloc_1972_;
goto v_reusejp_1970_;
}
v_reusejp_1970_:
{
return v___x_1971_;
}
}
}
else
{
lean_object* v_a_1975_; lean_object* v___x_1977_; uint8_t v_isShared_1978_; uint8_t v_isSharedCheck_1982_; 
v_a_1975_ = lean_ctor_get(v___x_1965_, 0);
v_isSharedCheck_1982_ = !lean_is_exclusive(v___x_1965_);
if (v_isSharedCheck_1982_ == 0)
{
v___x_1977_ = v___x_1965_;
v_isShared_1978_ = v_isSharedCheck_1982_;
goto v_resetjp_1976_;
}
else
{
lean_inc(v_a_1975_);
lean_dec(v___x_1965_);
v___x_1977_ = lean_box(0);
v_isShared_1978_ = v_isSharedCheck_1982_;
goto v_resetjp_1976_;
}
v_resetjp_1976_:
{
lean_object* v___x_1980_; 
if (v_isShared_1978_ == 0)
{
v___x_1980_ = v___x_1977_;
goto v_reusejp_1979_;
}
else
{
lean_object* v_reuseFailAlloc_1981_; 
v_reuseFailAlloc_1981_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1981_, 0, v_a_1975_);
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
else
{
lean_object* v_stxStack_1983_; lean_object* v_pos_1984_; uint8_t v___x_1985_; 
lean_dec_ref(v___x_1958_);
v_stxStack_1983_ = lean_ctor_get(v___y_1957_, 0);
lean_inc_ref(v_stxStack_1983_);
v_pos_1984_ = lean_ctor_get(v___y_1957_, 2);
lean_inc(v_pos_1984_);
lean_dec_ref(v___y_1957_);
v___x_1985_ = l_Lean_Parser_InputContext_atEnd(v___y_1955_, v_pos_1984_);
lean_dec_ref(v___y_1955_);
if (v___x_1985_ == 0)
{
lean_object* v___x_1986_; lean_object* v___x_1987_; uint8_t v___x_1988_; lean_object* v___x_1989_; lean_object* v___x_1990_; uint32_t v___x_1991_; lean_object* v___x_1992_; lean_object* v___x_1993_; lean_object* v___x_1994_; lean_object* v___x_1995_; lean_object* v___x_1996_; lean_object* v___x_1997_; 
lean_dec_ref(v_stxStack_1983_);
lean_inc_ref(v___y_1954_);
v___x_1986_ = l_Lean_FileMap_toPosition(v___y_1954_, v_pos_1984_);
v___x_1987_ = lean_box(0);
v___x_1988_ = 2;
v___x_1989_ = ((lean_object*)(l_Lean_parseVersoDocString___redArg___lam__3___closed__0));
v___x_1990_ = ((lean_object*)(l_Lean_parseVersoDocString___redArg___lam__5___closed__0));
v___x_1991_ = lean_string_utf8_get(v___y_1956_, v_pos_1984_);
lean_dec(v_pos_1984_);
v___x_1992_ = lean_string_push(v___x_1989_, v___x_1991_);
v___x_1993_ = lean_string_append(v___x_1990_, v___x_1992_);
lean_dec_ref(v___x_1992_);
v___x_1994_ = ((lean_object*)(l_Lean_parseVersoDocString___redArg___lam__5___closed__1));
v___x_1995_ = lean_string_append(v___x_1993_, v___x_1994_);
v___x_1996_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1996_, 0, v___x_1995_);
v___x_1997_ = l_Lean_MessageData_ofFormat(v___x_1996_);
if (v___y_1952_ == 0)
{
v___y_1916_ = v___x_1986_;
v___y_1917_ = v___x_1988_;
v___y_1918_ = v___y_1953_;
v___y_1919_ = v___x_1985_;
v___y_1920_ = v___x_1987_;
v___y_1921_ = v___x_1997_;
v___y_1922_ = v___x_1989_;
v_currNamespace_1923_ = v___y_1951_;
v_openDecls_1924_ = v___y_1950_;
v___y_1925_ = v___y_1910_;
goto v___jp_1915_;
}
else
{
lean_object* v___x_1998_; lean_object* v___x_1999_; lean_object* v___f_2000_; uint8_t v___x_2001_; 
v___x_1998_ = lean_box(v___y_1949_);
v___x_1999_ = lean_box(v___x_1985_);
v___f_2000_ = lean_alloc_closure((void*)(l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0___lam__0___boxed), 3, 2);
lean_closure_set(v___f_2000_, 0, v___x_1998_);
lean_closure_set(v___f_2000_, 1, v___x_1999_);
lean_inc_ref(v___x_1997_);
v___x_2001_ = l_Lean_MessageData_hasTag(v___f_2000_, v___x_1997_);
if (v___x_2001_ == 0)
{
lean_dec_ref(v___x_1997_);
lean_dec_ref(v___x_1986_);
goto v___jp_1912_;
}
else
{
v___y_1916_ = v___x_1986_;
v___y_1917_ = v___x_1988_;
v___y_1918_ = v___y_1953_;
v___y_1919_ = v___x_1985_;
v___y_1920_ = v___x_1987_;
v___y_1921_ = v___x_1997_;
v___y_1922_ = v___x_1989_;
v_currNamespace_1923_ = v___y_1951_;
v_openDecls_1924_ = v___y_1950_;
v___y_1925_ = v___y_1910_;
goto v___jp_1915_;
}
}
}
else
{
lean_object* v___x_2002_; lean_object* v___x_2003_; lean_object* v___x_2004_; 
lean_dec(v_pos_1984_);
v___x_2002_ = l_Lean_Parser_SyntaxStack_back(v_stxStack_1983_);
lean_dec_ref(v_stxStack_1983_);
v___x_2003_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2003_, 0, v___x_2002_);
v___x_2004_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2004_, 0, v___x_2003_);
return v___x_2004_;
}
}
}
v___jp_2005_:
{
lean_object* v___x_2019_; lean_object* v_env_2020_; lean_object* v_ictx_2021_; lean_object* v_pmctx_2022_; lean_object* v_blockCtxt_2023_; lean_object* v___x_2024_; lean_object* v_s_2025_; lean_object* v___x_2026_; lean_object* v___x_2027_; lean_object* v_s_2028_; lean_object* v___x_2029_; lean_object* v___x_2030_; lean_object* v___x_2031_; uint8_t v___x_2032_; 
v___x_2019_ = lean_st_ref_get(v___y_1910_);
v_env_2020_ = lean_ctor_get(v___x_2019_, 0);
lean_inc_ref_n(v_env_2020_, 2);
lean_dec(v___x_2019_);
lean_inc(v___y_2018_);
lean_inc_ref_n(v___y_2014_, 2);
lean_inc_ref(v___y_2013_);
lean_inc_ref(v___y_2009_);
v_ictx_2021_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_ictx_2021_, 0, v___y_2009_);
lean_ctor_set(v_ictx_2021_, 1, v___y_2013_);
lean_ctor_set(v_ictx_2021_, 2, v___y_2014_);
lean_ctor_set(v_ictx_2021_, 3, v___y_2018_);
lean_inc(v___y_2015_);
lean_inc(v___y_2016_);
lean_inc_ref(v___y_2017_);
v_pmctx_2022_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_pmctx_2022_, 0, v_env_2020_);
lean_ctor_set(v_pmctx_2022_, 1, v___y_2017_);
lean_ctor_set(v_pmctx_2022_, 2, v___y_2016_);
lean_ctor_set(v_pmctx_2022_, 3, v___y_2015_);
lean_inc(v___y_2010_);
v_blockCtxt_2023_ = l_Lean_Doc_Parser_BlockCtxt_forDocString(v___y_2014_, v___y_2010_, v___y_2018_);
v___x_2024_ = l_Lean_Parser_mkParserState(v___y_2009_);
lean_inc_ref(v___x_2024_);
v_s_2025_ = l_Lean_Parser_ParserState_setPos(v___x_2024_, v___y_2010_);
v___x_2026_ = lean_alloc_closure((void*)(l_Lean_Doc_Parser_document), 3, 1);
lean_closure_set(v___x_2026_, 0, v_blockCtxt_2023_);
v___x_2027_ = l_Lean_Parser_getTokenTable(v_env_2020_);
lean_inc_ref(v___x_2027_);
lean_inc_ref(v_pmctx_2022_);
lean_inc_ref(v_ictx_2021_);
v_s_2028_ = l_Lean_Parser_ParserFn_run(v___x_2026_, v_ictx_2021_, v_pmctx_2022_, v___x_2027_, v_s_2025_);
lean_inc_ref(v_s_2028_);
v___x_2029_ = l_Lean_Parser_ParserState_allErrors(v_s_2028_);
v___x_2030_ = lean_array_get_size(v___x_2029_);
lean_dec_ref(v___x_2029_);
v___x_2031_ = lean_unsigned_to_nat(0u);
v___x_2032_ = lean_nat_dec_eq(v___x_2030_, v___x_2031_);
if (v___x_2032_ == 0)
{
lean_dec_ref(v___x_2027_);
lean_dec_ref(v___x_2024_);
lean_dec_ref_known(v_pmctx_2022_, 4);
lean_dec(v___y_2012_);
v___y_1949_ = v___y_2006_;
v___y_1950_ = v___y_2007_;
v___y_1951_ = v___y_2008_;
v___y_1952_ = v___y_2011_;
v___y_1953_ = v___y_2013_;
v___y_1954_ = v___y_2014_;
v___y_1955_ = v_ictx_2021_;
v___y_1956_ = v___y_2009_;
v___y_1957_ = v_s_2028_;
goto v___jp_1948_;
}
else
{
lean_object* v_pos_2033_; uint8_t v___x_2034_; 
v_pos_2033_ = lean_ctor_get(v_s_2028_, 2);
lean_inc(v_pos_2033_);
v___x_2034_ = l_Lean_Parser_InputContext_atEnd(v_ictx_2021_, v_pos_2033_);
if (v___x_2034_ == 0)
{
lean_object* v___x_2035_; lean_object* v___x_2036_; lean_object* v___x_2037_; lean_object* v___x_2038_; lean_object* v___x_2039_; lean_object* v___x_2040_; lean_object* v___x_2041_; 
lean_dec_ref(v_s_2028_);
v___x_2035_ = lean_box(0);
v___x_2036_ = lean_box(0);
v___x_2037_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2037_, 0, v___y_2012_);
lean_ctor_set(v___x_2037_, 1, v___x_2031_);
v___x_2038_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2038_, 0, v___x_2031_);
lean_ctor_set(v___x_2038_, 1, v___x_2035_);
lean_ctor_set(v___x_2038_, 2, v___x_2036_);
lean_ctor_set(v___x_2038_, 3, v___x_2037_);
lean_ctor_set(v___x_2038_, 4, v___x_2031_);
v___x_2039_ = lean_alloc_closure((void*)(l_Lean_Doc_Parser_block), 3, 1);
lean_closure_set(v___x_2039_, 0, v___x_2038_);
v___x_2040_ = l_Lean_Parser_ParserState_setPos(v___x_2024_, v_pos_2033_);
lean_inc_ref(v_ictx_2021_);
v___x_2041_ = l_Lean_Parser_ParserFn_run(v___x_2039_, v_ictx_2021_, v_pmctx_2022_, v___x_2027_, v___x_2040_);
v___y_1949_ = v___y_2006_;
v___y_1950_ = v___y_2007_;
v___y_1951_ = v___y_2008_;
v___y_1952_ = v___y_2011_;
v___y_1953_ = v___y_2013_;
v___y_1954_ = v___y_2014_;
v___y_1955_ = v_ictx_2021_;
v___y_1956_ = v___y_2009_;
v___y_1957_ = v___x_2041_;
goto v___jp_1948_;
}
else
{
lean_dec(v_pos_2033_);
lean_dec_ref(v___x_2027_);
lean_dec_ref(v___x_2024_);
lean_dec_ref_known(v_pmctx_2022_, 4);
lean_dec(v___y_2012_);
v___y_1949_ = v___y_2006_;
v___y_1950_ = v___y_2007_;
v___y_1951_ = v___y_2008_;
v___y_1952_ = v___y_2011_;
v___y_1953_ = v___y_2013_;
v___y_1954_ = v___y_2014_;
v___y_1955_ = v_ictx_2021_;
v___y_1956_ = v___y_2009_;
v___y_1957_ = v_s_2028_;
goto v___jp_1948_;
}
}
}
v___jp_2042_:
{
lean_object* v_toCold_2043_; uint8_t v_suppressElabErrors_2044_; lean_object* v_fileName_2045_; lean_object* v_fileMap_2046_; lean_object* v_options_2047_; lean_object* v_currNamespace_2048_; lean_object* v_openDecls_2049_; lean_object* v___x_2050_; lean_object* v___x_2051_; uint8_t v___x_2052_; lean_object* v___x_2053_; 
v_toCold_2043_ = lean_ctor_get(v___y_1909_, 0);
v_suppressElabErrors_2044_ = lean_ctor_get_uint8(v___y_1909_, sizeof(void*)*3 + 1);
v_fileName_2045_ = lean_ctor_get(v_toCold_2043_, 0);
v_fileMap_2046_ = lean_ctor_get(v_toCold_2043_, 1);
v_options_2047_ = lean_ctor_get(v_toCold_2043_, 2);
v_currNamespace_2048_ = lean_ctor_get(v_toCold_2043_, 4);
v_openDecls_2049_ = lean_ctor_get(v_toCold_2043_, 5);
v___x_2050_ = lean_unsigned_to_nat(1u);
v___x_2051_ = l_Lean_Syntax_getArg(v_docComment_1904_, v___x_2050_);
v___x_2052_ = 1;
v___x_2053_ = l_Lean_Syntax_getPos_x3f(v___x_2051_, v___x_2052_);
if (lean_obj_tag(v___x_2053_) == 1)
{
lean_object* v_val_2054_; lean_object* v___x_2055_; 
v_val_2054_ = lean_ctor_get(v___x_2053_, 0);
lean_inc(v_val_2054_);
lean_dec_ref_known(v___x_2053_, 1);
v___x_2055_ = l_Lean_Syntax_getTailPos_x3f(v___x_2051_, v___x_2052_);
lean_dec(v___x_2051_);
if (lean_obj_tag(v___x_2055_) == 1)
{
lean_object* v_val_2056_; lean_object* v_source_2057_; lean_object* v___x_2058_; lean_object* v_endPos_2059_; lean_object* v___x_2060_; uint8_t v___x_2061_; 
lean_dec(v_docComment_1904_);
v_val_2056_ = lean_ctor_get(v___x_2055_, 0);
lean_inc(v_val_2056_);
lean_dec_ref_known(v___x_2055_, 1);
v_source_2057_ = lean_ctor_get(v_fileMap_2046_, 0);
v___x_2058_ = lean_string_utf8_prev(v_source_2057_, v_val_2056_);
lean_dec(v_val_2056_);
v_endPos_2059_ = lean_string_utf8_prev(v_source_2057_, v___x_2058_);
lean_dec(v___x_2058_);
v___x_2060_ = lean_string_utf8_byte_size(v_source_2057_);
v___x_2061_ = lean_nat_dec_le(v_endPos_2059_, v___x_2060_);
if (v___x_2061_ == 0)
{
lean_dec(v_endPos_2059_);
v___y_2006_ = v_suppressElabErrors_2044_;
v___y_2007_ = v_openDecls_2049_;
v___y_2008_ = v_currNamespace_2048_;
v___y_2009_ = v_source_2057_;
v___y_2010_ = v_val_2054_;
v___y_2011_ = v_suppressElabErrors_2044_;
v___y_2012_ = v___x_2050_;
v___y_2013_ = v_fileName_2045_;
v___y_2014_ = v_fileMap_2046_;
v___y_2015_ = v_openDecls_2049_;
v___y_2016_ = v_currNamespace_2048_;
v___y_2017_ = v_options_2047_;
v___y_2018_ = v___x_2060_;
goto v___jp_2005_;
}
else
{
v___y_2006_ = v_suppressElabErrors_2044_;
v___y_2007_ = v_openDecls_2049_;
v___y_2008_ = v_currNamespace_2048_;
v___y_2009_ = v_source_2057_;
v___y_2010_ = v_val_2054_;
v___y_2011_ = v_suppressElabErrors_2044_;
v___y_2012_ = v___x_2050_;
v___y_2013_ = v_fileName_2045_;
v___y_2014_ = v_fileMap_2046_;
v___y_2015_ = v_openDecls_2049_;
v___y_2016_ = v_currNamespace_2048_;
v___y_2017_ = v_options_2047_;
v___y_2018_ = v_endPos_2059_;
goto v___jp_2005_;
}
}
else
{
lean_object* v___x_2062_; lean_object* v___x_2063_; 
lean_dec(v___x_2055_);
lean_dec(v_val_2054_);
v___x_2062_ = lean_obj_once(&l_Lean_parseVersoDocString___redArg___lam__11___closed__1, &l_Lean_parseVersoDocString___redArg___lam__11___closed__1_once, _init_l_Lean_parseVersoDocString___redArg___lam__11___closed__1);
v___x_2063_ = l_Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1___redArg(v_docComment_1904_, v___x_2062_, v___y_1905_, v___y_1906_, v___y_1907_, v___y_1908_, v___y_1909_, v___y_1910_);
lean_dec(v_docComment_1904_);
return v___x_2063_;
}
}
else
{
lean_object* v___x_2064_; lean_object* v___x_2065_; 
lean_dec(v___x_2053_);
lean_dec(v___x_2051_);
v___x_2064_ = lean_obj_once(&l_Lean_parseVersoDocString___redArg___lam__11___closed__1, &l_Lean_parseVersoDocString___redArg___lam__11___closed__1_once, _init_l_Lean_parseVersoDocString___redArg___lam__11___closed__1);
v___x_2065_ = l_Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1___redArg(v_docComment_1904_, v___x_2064_, v___y_1905_, v___y_1906_, v___y_1907_, v___y_1908_, v___y_1909_, v___y_1910_);
lean_dec(v_docComment_1904_);
return v___x_2065_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0___boxed(lean_object* v_docComment_2106_, lean_object* v___y_2107_, lean_object* v___y_2108_, lean_object* v___y_2109_, lean_object* v___y_2110_, lean_object* v___y_2111_, lean_object* v___y_2112_, lean_object* v___y_2113_){
_start:
{
lean_object* v_res_2114_; 
v_res_2114_ = l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0(v_docComment_2106_, v___y_2107_, v___y_2108_, v___y_2109_, v___y_2110_, v___y_2111_, v___y_2112_);
lean_dec(v___y_2112_);
lean_dec_ref(v___y_2111_);
lean_dec(v___y_2110_);
lean_dec_ref(v___y_2109_);
lean_dec(v___y_2108_);
lean_dec_ref(v___y_2107_);
return v_res_2114_;
}
}
LEAN_EXPORT lean_object* l_Lean_versoDocString(lean_object* v_declName_2128_, lean_object* v_binders_2129_, lean_object* v_docComment_2130_, lean_object* v_a_2131_, lean_object* v_a_2132_, lean_object* v_a_2133_, lean_object* v_a_2134_, lean_object* v_a_2135_, lean_object* v_a_2136_){
_start:
{
lean_object* v___x_2138_; lean_object* v_body_2139_; uint8_t v___x_2140_; lean_object* v___x_2141_; 
v___x_2138_ = lean_unsigned_to_nat(1u);
v_body_2139_ = l_Lean_Syntax_getArg(v_docComment_2130_, v___x_2138_);
v___x_2140_ = 1;
v___x_2141_ = l_Lean_Syntax_getPos_x3f(v_body_2139_, v___x_2140_);
if (lean_obj_tag(v___x_2141_) == 0)
{
lean_object* v___x_2142_; uint8_t v___x_2143_; 
v___x_2142_ = ((lean_object*)(l_Lean_versoDocString___closed__0));
lean_inc(v_body_2139_);
v___x_2143_ = l_Lean_Syntax_isOfKind(v_body_2139_, v___x_2142_);
if (v___x_2143_ == 0)
{
lean_object* v___x_2144_; lean_object* v___x_2145_; 
lean_dec(v_body_2139_);
v___x_2144_ = l_Lean_TSyntax_getDocString(v_docComment_2130_);
lean_dec(v_docComment_2130_);
v___x_2145_ = l_Lean_versoDocStringOfText(v_declName_2128_, v_binders_2129_, v___x_2144_, v_a_2131_, v_a_2132_, v_a_2133_, v_a_2134_, v_a_2135_, v_a_2136_);
return v___x_2145_;
}
else
{
lean_object* v___x_2146_; lean_object* v___x_2147_; lean_object* v___x_2148_; uint8_t v___x_2149_; 
lean_dec(v_docComment_2130_);
v___x_2146_ = lean_unsigned_to_nat(0u);
v___x_2147_ = l_Lean_Syntax_getArg(v_body_2139_, v___x_2146_);
lean_dec(v_body_2139_);
v___x_2148_ = ((lean_object*)(l_Lean_versoDocString___closed__4));
lean_inc(v___x_2147_);
v___x_2149_ = l_Lean_Syntax_isOfKind(v___x_2147_, v___x_2148_);
if (v___x_2149_ == 0)
{
lean_object* v___x_2150_; lean_object* v___x_2151_; lean_object* v___x_2152_; 
v___x_2150_ = l_Lean_Syntax_getArgs(v___x_2147_);
lean_dec(v___x_2147_);
v___x_2151_ = lean_box(0);
v___x_2152_ = l___private_Lean_DocString_Add_0__Lean_execVersoBlocks(v_declName_2128_, v_binders_2129_, v___x_2150_, v___x_2151_, v_a_2131_, v_a_2132_, v_a_2133_, v_a_2134_, v_a_2135_, v_a_2136_);
lean_dec_ref(v___x_2150_);
return v___x_2152_;
}
else
{
lean_object* v___x_2153_; lean_object* v___x_2154_; lean_object* v___x_2155_; 
v___x_2153_ = l_Lean_Syntax_getArg(v___x_2147_, v___x_2146_);
lean_dec(v___x_2147_);
v___x_2154_ = l_Lean_Syntax_getAtomVal(v___x_2153_);
lean_dec(v___x_2153_);
v___x_2155_ = l_Lean_versoDocStringOfText(v_declName_2128_, v_binders_2129_, v___x_2154_, v_a_2131_, v_a_2132_, v_a_2133_, v_a_2134_, v_a_2135_, v_a_2136_);
return v___x_2155_;
}
}
}
else
{
lean_object* v___x_2156_; 
lean_dec_ref_known(v___x_2141_, 1);
lean_dec(v_body_2139_);
v___x_2156_ = l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0(v_docComment_2130_, v_a_2131_, v_a_2132_, v_a_2133_, v_a_2134_, v_a_2135_, v_a_2136_);
if (lean_obj_tag(v___x_2156_) == 0)
{
lean_object* v_a_2157_; lean_object* v___x_2159_; uint8_t v_isShared_2160_; uint8_t v_isSharedCheck_2209_; 
v_a_2157_ = lean_ctor_get(v___x_2156_, 0);
v_isSharedCheck_2209_ = !lean_is_exclusive(v___x_2156_);
if (v_isSharedCheck_2209_ == 0)
{
v___x_2159_ = v___x_2156_;
v_isShared_2160_ = v_isSharedCheck_2209_;
goto v_resetjp_2158_;
}
else
{
lean_inc(v_a_2157_);
lean_dec(v___x_2156_);
v___x_2159_ = lean_box(0);
v_isShared_2160_ = v_isSharedCheck_2209_;
goto v_resetjp_2158_;
}
v_resetjp_2158_:
{
if (lean_obj_tag(v_a_2157_) == 1)
{
lean_object* v_val_2161_; lean_object* v___x_2162_; size_t v_sz_2163_; size_t v___x_2164_; lean_object* v___x_2165_; lean_object* v___x_2166_; lean_object* v___x_2167_; lean_object* v___x_2168_; uint8_t v___x_2169_; lean_object* v___x_2170_; 
lean_del_object(v___x_2159_);
v_val_2161_ = lean_ctor_get(v_a_2157_, 0);
lean_inc(v_val_2161_);
lean_dec_ref_known(v_a_2157_, 1);
v___x_2162_ = l_Lean_Syntax_getArgs(v_val_2161_);
lean_dec(v_val_2161_);
v_sz_2163_ = lean_array_size(v___x_2162_);
v___x_2164_ = ((size_t)0ULL);
v___x_2165_ = l_unsafeCast___redArg(v___x_2162_);
lean_dec_ref(v___x_2162_);
v___x_2166_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_versoDocString_spec__1(v_sz_2163_, v___x_2164_, v___x_2165_);
v___x_2167_ = l_unsafeCast___redArg(v___x_2166_);
lean_dec_ref(v___x_2166_);
v___x_2168_ = lean_alloc_closure((void*)(l_Lean_Doc_elabBlocks___boxed), 11, 1);
lean_closure_set(v___x_2168_, 0, v___x_2167_);
v___x_2169_ = 0;
v___x_2170_ = l_Lean_Doc_DocM_exec___redArg(v_declName_2128_, v_binders_2129_, v___x_2168_, v___x_2169_, v_a_2131_, v_a_2132_, v_a_2133_, v_a_2134_, v_a_2135_, v_a_2136_);
if (lean_obj_tag(v___x_2170_) == 0)
{
lean_object* v_a_2171_; lean_object* v___x_2173_; uint8_t v_isShared_2174_; uint8_t v_isSharedCheck_2196_; 
v_a_2171_ = lean_ctor_get(v___x_2170_, 0);
v_isSharedCheck_2196_ = !lean_is_exclusive(v___x_2170_);
if (v_isSharedCheck_2196_ == 0)
{
v___x_2173_ = v___x_2170_;
v_isShared_2174_ = v_isSharedCheck_2196_;
goto v_resetjp_2172_;
}
else
{
lean_inc(v_a_2171_);
lean_dec(v___x_2170_);
v___x_2173_ = lean_box(0);
v_isShared_2174_ = v_isSharedCheck_2196_;
goto v_resetjp_2172_;
}
v_resetjp_2172_:
{
lean_object* v_fst_2175_; lean_object* v_snd_2176_; lean_object* v___x_2178_; uint8_t v_isShared_2179_; uint8_t v_isSharedCheck_2195_; 
v_fst_2175_ = lean_ctor_get(v_a_2171_, 0);
v_snd_2176_ = lean_ctor_get(v_a_2171_, 1);
v_isSharedCheck_2195_ = !lean_is_exclusive(v_a_2171_);
if (v_isSharedCheck_2195_ == 0)
{
v___x_2178_ = v_a_2171_;
v_isShared_2179_ = v_isSharedCheck_2195_;
goto v_resetjp_2177_;
}
else
{
lean_inc(v_snd_2176_);
lean_inc(v_fst_2175_);
lean_dec(v_a_2171_);
v___x_2178_ = lean_box(0);
v_isShared_2179_ = v_isSharedCheck_2195_;
goto v_resetjp_2177_;
}
v_resetjp_2177_:
{
lean_object* v_fst_2180_; lean_object* v_snd_2181_; lean_object* v___x_2183_; uint8_t v_isShared_2184_; uint8_t v_isSharedCheck_2194_; 
v_fst_2180_ = lean_ctor_get(v_fst_2175_, 0);
v_snd_2181_ = lean_ctor_get(v_fst_2175_, 1);
v_isSharedCheck_2194_ = !lean_is_exclusive(v_fst_2175_);
if (v_isSharedCheck_2194_ == 0)
{
v___x_2183_ = v_fst_2175_;
v_isShared_2184_ = v_isSharedCheck_2194_;
goto v_resetjp_2182_;
}
else
{
lean_inc(v_snd_2181_);
lean_inc(v_fst_2180_);
lean_dec(v_fst_2175_);
v___x_2183_ = lean_box(0);
v_isShared_2184_ = v_isSharedCheck_2194_;
goto v_resetjp_2182_;
}
v_resetjp_2182_:
{
lean_object* v___x_2186_; 
if (v_isShared_2184_ == 0)
{
v___x_2186_ = v___x_2183_;
goto v_reusejp_2185_;
}
else
{
lean_object* v_reuseFailAlloc_2193_; 
v_reuseFailAlloc_2193_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2193_, 0, v_fst_2180_);
lean_ctor_set(v_reuseFailAlloc_2193_, 1, v_snd_2181_);
v___x_2186_ = v_reuseFailAlloc_2193_;
goto v_reusejp_2185_;
}
v_reusejp_2185_:
{
lean_object* v___x_2188_; 
if (v_isShared_2179_ == 0)
{
lean_ctor_set(v___x_2178_, 0, v___x_2186_);
v___x_2188_ = v___x_2178_;
goto v_reusejp_2187_;
}
else
{
lean_object* v_reuseFailAlloc_2192_; 
v_reuseFailAlloc_2192_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2192_, 0, v___x_2186_);
lean_ctor_set(v_reuseFailAlloc_2192_, 1, v_snd_2176_);
v___x_2188_ = v_reuseFailAlloc_2192_;
goto v_reusejp_2187_;
}
v_reusejp_2187_:
{
lean_object* v___x_2190_; 
if (v_isShared_2174_ == 0)
{
lean_ctor_set(v___x_2173_, 0, v___x_2188_);
v___x_2190_ = v___x_2173_;
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
lean_object* v_a_2197_; lean_object* v___x_2199_; uint8_t v_isShared_2200_; uint8_t v_isSharedCheck_2204_; 
v_a_2197_ = lean_ctor_get(v___x_2170_, 0);
v_isSharedCheck_2204_ = !lean_is_exclusive(v___x_2170_);
if (v_isSharedCheck_2204_ == 0)
{
v___x_2199_ = v___x_2170_;
v_isShared_2200_ = v_isSharedCheck_2204_;
goto v_resetjp_2198_;
}
else
{
lean_inc(v_a_2197_);
lean_dec(v___x_2170_);
v___x_2199_ = lean_box(0);
v_isShared_2200_ = v_isSharedCheck_2204_;
goto v_resetjp_2198_;
}
v_resetjp_2198_:
{
lean_object* v___x_2202_; 
if (v_isShared_2200_ == 0)
{
v___x_2202_ = v___x_2199_;
goto v_reusejp_2201_;
}
else
{
lean_object* v_reuseFailAlloc_2203_; 
v_reuseFailAlloc_2203_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2203_, 0, v_a_2197_);
v___x_2202_ = v_reuseFailAlloc_2203_;
goto v_reusejp_2201_;
}
v_reusejp_2201_:
{
return v___x_2202_;
}
}
}
}
else
{
lean_object* v___x_2205_; lean_object* v___x_2207_; 
lean_dec(v_a_2157_);
lean_dec(v_binders_2129_);
lean_dec(v_declName_2128_);
v___x_2205_ = ((lean_object*)(l_Lean_versoDocStringOfText___closed__5));
if (v_isShared_2160_ == 0)
{
lean_ctor_set(v___x_2159_, 0, v___x_2205_);
v___x_2207_ = v___x_2159_;
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
else
{
lean_object* v_a_2210_; lean_object* v___x_2212_; uint8_t v_isShared_2213_; uint8_t v_isSharedCheck_2217_; 
lean_dec(v_binders_2129_);
lean_dec(v_declName_2128_);
v_a_2210_ = lean_ctor_get(v___x_2156_, 0);
v_isSharedCheck_2217_ = !lean_is_exclusive(v___x_2156_);
if (v_isSharedCheck_2217_ == 0)
{
v___x_2212_ = v___x_2156_;
v_isShared_2213_ = v_isSharedCheck_2217_;
goto v_resetjp_2211_;
}
else
{
lean_inc(v_a_2210_);
lean_dec(v___x_2156_);
v___x_2212_ = lean_box(0);
v_isShared_2213_ = v_isSharedCheck_2217_;
goto v_resetjp_2211_;
}
v_resetjp_2211_:
{
lean_object* v___x_2215_; 
if (v_isShared_2213_ == 0)
{
v___x_2215_ = v___x_2212_;
goto v_reusejp_2214_;
}
else
{
lean_object* v_reuseFailAlloc_2216_; 
v_reuseFailAlloc_2216_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2216_, 0, v_a_2210_);
v___x_2215_ = v_reuseFailAlloc_2216_;
goto v_reusejp_2214_;
}
v_reusejp_2214_:
{
return v___x_2215_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_versoDocString___boxed(lean_object* v_declName_2218_, lean_object* v_binders_2219_, lean_object* v_docComment_2220_, lean_object* v_a_2221_, lean_object* v_a_2222_, lean_object* v_a_2223_, lean_object* v_a_2224_, lean_object* v_a_2225_, lean_object* v_a_2226_, lean_object* v_a_2227_){
_start:
{
lean_object* v_res_2228_; 
v_res_2228_ = l_Lean_versoDocString(v_declName_2218_, v_binders_2219_, v_docComment_2220_, v_a_2221_, v_a_2222_, v_a_2223_, v_a_2224_, v_a_2225_, v_a_2226_);
lean_dec(v_a_2226_);
lean_dec_ref(v_a_2225_);
lean_dec(v_a_2224_);
lean_dec_ref(v_a_2223_);
lean_dec(v_a_2222_);
lean_dec_ref(v_a_2221_);
return v_res_2228_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__0(lean_object* v___x_2229_, lean_object* v___x_2230_, lean_object* v_as_2231_, size_t v_sz_2232_, size_t v_i_2233_, lean_object* v_b_2234_, lean_object* v___y_2235_, lean_object* v___y_2236_, lean_object* v___y_2237_, lean_object* v___y_2238_, lean_object* v___y_2239_, lean_object* v___y_2240_){
_start:
{
lean_object* v___x_2242_; 
v___x_2242_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__0___redArg(v___x_2229_, v___x_2230_, v_as_2231_, v_sz_2232_, v_i_2233_, v_b_2234_, v___y_2239_, v___y_2240_);
return v___x_2242_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__0___boxed(lean_object* v___x_2243_, lean_object* v___x_2244_, lean_object* v_as_2245_, lean_object* v_sz_2246_, lean_object* v_i_2247_, lean_object* v_b_2248_, lean_object* v___y_2249_, lean_object* v___y_2250_, lean_object* v___y_2251_, lean_object* v___y_2252_, lean_object* v___y_2253_, lean_object* v___y_2254_, lean_object* v___y_2255_){
_start:
{
size_t v_sz_boxed_2256_; size_t v_i_boxed_2257_; lean_object* v_res_2258_; 
v_sz_boxed_2256_ = lean_unbox_usize(v_sz_2246_);
lean_dec(v_sz_2246_);
v_i_boxed_2257_ = lean_unbox_usize(v_i_2247_);
lean_dec(v_i_2247_);
v_res_2258_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__0(v___x_2243_, v___x_2244_, v_as_2245_, v_sz_boxed_2256_, v_i_boxed_2257_, v_b_2248_, v___y_2249_, v___y_2250_, v___y_2251_, v___y_2252_, v___y_2253_, v___y_2254_);
lean_dec(v___y_2254_);
lean_dec_ref(v___y_2253_);
lean_dec(v___y_2252_);
lean_dec_ref(v___y_2251_);
lean_dec(v___y_2250_);
lean_dec_ref(v___y_2249_);
lean_dec_ref(v_as_2245_);
lean_dec(v___x_2244_);
return v_res_2258_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1(lean_object* v_00_u03b1_2259_, lean_object* v_ref_2260_, lean_object* v_msg_2261_, lean_object* v___y_2262_, lean_object* v___y_2263_, lean_object* v___y_2264_, lean_object* v___y_2265_, lean_object* v___y_2266_, lean_object* v___y_2267_){
_start:
{
lean_object* v___x_2269_; 
v___x_2269_ = l_Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1___redArg(v_ref_2260_, v_msg_2261_, v___y_2262_, v___y_2263_, v___y_2264_, v___y_2265_, v___y_2266_, v___y_2267_);
return v___x_2269_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1___boxed(lean_object* v_00_u03b1_2270_, lean_object* v_ref_2271_, lean_object* v_msg_2272_, lean_object* v___y_2273_, lean_object* v___y_2274_, lean_object* v___y_2275_, lean_object* v___y_2276_, lean_object* v___y_2277_, lean_object* v___y_2278_, lean_object* v___y_2279_){
_start:
{
lean_object* v_res_2280_; 
v_res_2280_ = l_Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1(v_00_u03b1_2270_, v_ref_2271_, v_msg_2272_, v___y_2273_, v___y_2274_, v___y_2275_, v___y_2276_, v___y_2277_, v___y_2278_);
lean_dec(v___y_2278_);
lean_dec_ref(v___y_2277_);
lean_dec(v___y_2276_);
lean_dec_ref(v___y_2275_);
lean_dec(v___y_2274_);
lean_dec_ref(v___y_2273_);
lean_dec(v_ref_2271_);
return v_res_2280_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2(lean_object* v_00_u03b1_2281_, lean_object* v_msg_2282_, lean_object* v___y_2283_, lean_object* v___y_2284_, lean_object* v___y_2285_, lean_object* v___y_2286_, lean_object* v___y_2287_, lean_object* v___y_2288_){
_start:
{
lean_object* v___x_2290_; 
v___x_2290_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2___redArg(v_msg_2282_, v___y_2283_, v___y_2284_, v___y_2285_, v___y_2286_, v___y_2287_, v___y_2288_);
return v___x_2290_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2___boxed(lean_object* v_00_u03b1_2291_, lean_object* v_msg_2292_, lean_object* v___y_2293_, lean_object* v___y_2294_, lean_object* v___y_2295_, lean_object* v___y_2296_, lean_object* v___y_2297_, lean_object* v___y_2298_, lean_object* v___y_2299_){
_start:
{
lean_object* v_res_2300_; 
v_res_2300_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2(v_00_u03b1_2291_, v_msg_2292_, v___y_2293_, v___y_2294_, v___y_2295_, v___y_2296_, v___y_2297_, v___y_2298_);
lean_dec(v___y_2298_);
lean_dec_ref(v___y_2297_);
lean_dec(v___y_2296_);
lean_dec_ref(v___y_2295_);
lean_dec(v___y_2294_);
lean_dec_ref(v___y_2293_);
return v_res_2300_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__4(lean_object* v_msgData_2301_, lean_object* v_macroStack_2302_, lean_object* v___y_2303_, lean_object* v___y_2304_, lean_object* v___y_2305_, lean_object* v___y_2306_, lean_object* v___y_2307_, lean_object* v___y_2308_){
_start:
{
lean_object* v___x_2310_; 
v___x_2310_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__4___redArg(v_msgData_2301_, v_macroStack_2302_, v___y_2307_);
return v___x_2310_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__4___boxed(lean_object* v_msgData_2311_, lean_object* v_macroStack_2312_, lean_object* v___y_2313_, lean_object* v___y_2314_, lean_object* v___y_2315_, lean_object* v___y_2316_, lean_object* v___y_2317_, lean_object* v___y_2318_, lean_object* v___y_2319_){
_start:
{
lean_object* v_res_2320_; 
v_res_2320_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__4(v_msgData_2311_, v_macroStack_2312_, v___y_2313_, v___y_2314_, v___y_2315_, v___y_2316_, v___y_2317_, v___y_2318_);
lean_dec(v___y_2318_);
lean_dec_ref(v___y_2317_);
lean_dec(v___y_2316_);
lean_dec_ref(v___y_2315_);
lean_dec(v___y_2314_);
lean_dec_ref(v___y_2313_);
return v_res_2320_;
}
}
LEAN_EXPORT lean_object* l_Lean_versoModDocString(lean_object* v_range_2321_, lean_object* v_doc_2322_, lean_object* v_a_2323_, lean_object* v_a_2324_, lean_object* v_a_2325_, lean_object* v_a_2326_, lean_object* v_a_2327_, lean_object* v_a_2328_){
_start:
{
lean_object* v___x_2330_; lean_object* v___y_2332_; lean_object* v___y_2333_; lean_object* v___y_2338_; lean_object* v_env_2347_; lean_object* v___x_2348_; lean_object* v___x_2349_; 
v___x_2330_ = lean_st_ref_get(v_a_2328_);
v_env_2347_ = lean_ctor_get(v___x_2330_, 0);
lean_inc_ref(v_env_2347_);
lean_dec(v___x_2330_);
v___x_2348_ = l_Lean_getMainVersoModuleDocs(v_env_2347_);
v___x_2349_ = l_Lean_VersoModuleDocs_terminalNesting(v___x_2348_);
lean_dec_ref(v___x_2348_);
if (lean_obj_tag(v___x_2349_) == 0)
{
v___y_2338_ = v___x_2349_;
goto v___jp_2337_;
}
else
{
lean_object* v_val_2350_; lean_object* v___x_2352_; uint8_t v_isShared_2353_; uint8_t v_isSharedCheck_2359_; 
v_val_2350_ = lean_ctor_get(v___x_2349_, 0);
v_isSharedCheck_2359_ = !lean_is_exclusive(v___x_2349_);
if (v_isSharedCheck_2359_ == 0)
{
v___x_2352_ = v___x_2349_;
v_isShared_2353_ = v_isSharedCheck_2359_;
goto v_resetjp_2351_;
}
else
{
lean_inc(v_val_2350_);
lean_dec(v___x_2349_);
v___x_2352_ = lean_box(0);
v_isShared_2353_ = v_isSharedCheck_2359_;
goto v_resetjp_2351_;
}
v_resetjp_2351_:
{
lean_object* v___x_2354_; lean_object* v___x_2355_; lean_object* v___x_2357_; 
v___x_2354_ = lean_unsigned_to_nat(1u);
v___x_2355_ = lean_nat_add(v_val_2350_, v___x_2354_);
lean_dec(v_val_2350_);
if (v_isShared_2353_ == 0)
{
lean_ctor_set(v___x_2352_, 0, v___x_2355_);
v___x_2357_ = v___x_2352_;
goto v_reusejp_2356_;
}
else
{
lean_object* v_reuseFailAlloc_2358_; 
v_reuseFailAlloc_2358_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2358_, 0, v___x_2355_);
v___x_2357_ = v_reuseFailAlloc_2358_;
goto v_reusejp_2356_;
}
v_reusejp_2356_:
{
v___y_2338_ = v___x_2357_;
goto v___jp_2337_;
}
}
}
v___jp_2331_:
{
lean_object* v___x_2334_; uint8_t v___x_2335_; lean_object* v___x_2336_; 
v___x_2334_ = lean_alloc_closure((void*)(l_Lean_Doc_elabModSnippet___boxed), 13, 3);
lean_closure_set(v___x_2334_, 0, v_range_2321_);
lean_closure_set(v___x_2334_, 1, v___y_2332_);
lean_closure_set(v___x_2334_, 2, v___y_2333_);
v___x_2335_ = 0;
v___x_2336_ = l_Lean_Doc_DocM_execForModule___redArg(v___x_2334_, v___x_2335_, v_a_2323_, v_a_2324_, v_a_2325_, v_a_2326_, v_a_2327_, v_a_2328_);
return v___x_2336_;
}
v___jp_2337_:
{
lean_object* v___x_2339_; size_t v_sz_2340_; size_t v___x_2341_; lean_object* v___x_2342_; lean_object* v___x_2343_; lean_object* v___x_2344_; 
v___x_2339_ = l_Lean_Syntax_getArgs(v_doc_2322_);
v_sz_2340_ = lean_array_size(v___x_2339_);
v___x_2341_ = ((size_t)0ULL);
v___x_2342_ = l_unsafeCast___redArg(v___x_2339_);
lean_dec_ref(v___x_2339_);
v___x_2343_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__0(v_sz_2340_, v___x_2341_, v___x_2342_);
v___x_2344_ = l_unsafeCast___redArg(v___x_2343_);
lean_dec_ref(v___x_2343_);
if (lean_obj_tag(v___y_2338_) == 0)
{
lean_object* v___x_2345_; 
v___x_2345_ = lean_unsigned_to_nat(0u);
v___y_2332_ = v___x_2344_;
v___y_2333_ = v___x_2345_;
goto v___jp_2331_;
}
else
{
lean_object* v_val_2346_; 
v_val_2346_ = lean_ctor_get(v___y_2338_, 0);
lean_inc(v_val_2346_);
lean_dec_ref_known(v___y_2338_, 1);
v___y_2332_ = v___x_2344_;
v___y_2333_ = v_val_2346_;
goto v___jp_2331_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_versoModDocString___boxed(lean_object* v_range_2360_, lean_object* v_doc_2361_, lean_object* v_a_2362_, lean_object* v_a_2363_, lean_object* v_a_2364_, lean_object* v_a_2365_, lean_object* v_a_2366_, lean_object* v_a_2367_, lean_object* v_a_2368_){
_start:
{
lean_object* v_res_2369_; 
v_res_2369_ = l_Lean_versoModDocString(v_range_2360_, v_doc_2361_, v_a_2362_, v_a_2363_, v_a_2364_, v_a_2365_, v_a_2366_, v_a_2367_);
lean_dec(v_a_2367_);
lean_dec_ref(v_a_2366_);
lean_dec(v_a_2365_);
lean_dec_ref(v_a_2364_);
lean_dec(v_a_2363_);
lean_dec_ref(v_a_2362_);
lean_dec(v_doc_2361_);
return v_res_2369_;
}
}
LEAN_EXPORT lean_object* l_Lean_versoDocStringFromString(lean_object* v_declName_2379_, lean_object* v_docComment_2380_, lean_object* v_a_2381_, lean_object* v_a_2382_, lean_object* v_a_2383_, lean_object* v_a_2384_, lean_object* v_a_2385_, lean_object* v_a_2386_){
_start:
{
lean_object* v___x_2388_; lean_object* v___x_2389_; 
v___x_2388_ = ((lean_object*)(l_Lean_versoDocStringFromString___closed__3));
v___x_2389_ = l_Lean_versoDocStringOfText(v_declName_2379_, v___x_2388_, v_docComment_2380_, v_a_2381_, v_a_2382_, v_a_2383_, v_a_2384_, v_a_2385_, v_a_2386_);
return v___x_2389_;
}
}
LEAN_EXPORT lean_object* l_Lean_versoDocStringFromString___boxed(lean_object* v_declName_2390_, lean_object* v_docComment_2391_, lean_object* v_a_2392_, lean_object* v_a_2393_, lean_object* v_a_2394_, lean_object* v_a_2395_, lean_object* v_a_2396_, lean_object* v_a_2397_, lean_object* v_a_2398_){
_start:
{
lean_object* v_res_2399_; 
v_res_2399_ = l_Lean_versoDocStringFromString(v_declName_2390_, v_docComment_2391_, v_a_2392_, v_a_2393_, v_a_2394_, v_a_2395_, v_a_2396_, v_a_2397_);
lean_dec(v_a_2397_);
lean_dec_ref(v_a_2396_);
lean_dec(v_a_2395_);
lean_dec_ref(v_a_2394_);
lean_dec(v_a_2393_);
lean_dec_ref(v_a_2392_);
return v_res_2399_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMarkdownDocString___redArg___lam__0(lean_object* v_docString_2400_, lean_object* v_declName_2401_, lean_object* v_env_2402_){
_start:
{
lean_object* v___x_2403_; lean_object* v___x_2404_; lean_object* v___x_2405_; 
v___x_2403_ = l_Lean_docStringExt;
v___x_2404_ = l_String_removeLeadingSpaces(v_docString_2400_);
v___x_2405_ = l_Lean_MapDeclarationExtension_insert___redArg(v___x_2403_, v_env_2402_, v_declName_2401_, v___x_2404_);
return v___x_2405_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMarkdownDocString___redArg___lam__1(lean_object* v_declName_2406_, lean_object* v_modifyEnv_2407_, lean_object* v_docString_2408_){
_start:
{
lean_object* v___f_2409_; lean_object* v___x_2410_; 
v___f_2409_ = lean_alloc_closure((void*)(l_Lean_addMarkdownDocString___redArg___lam__0), 3, 2);
lean_closure_set(v___f_2409_, 0, v_docString_2408_);
lean_closure_set(v___f_2409_, 1, v_declName_2406_);
v___x_2410_ = lean_apply_1(v_modifyEnv_2407_, v___f_2409_);
return v___x_2410_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMarkdownDocString___redArg___lam__2(lean_object* v_inst_2411_, lean_object* v_inst_2412_, lean_object* v_docComment_2413_, lean_object* v_toBind_2414_, lean_object* v___f_2415_, lean_object* v_____r_2416_){
_start:
{
lean_object* v___x_2417_; lean_object* v___x_2418_; 
v___x_2417_ = l_Lean_getDocStringText___redArg(v_inst_2411_, v_inst_2412_, v_docComment_2413_);
v___x_2418_ = lean_apply_4(v_toBind_2414_, lean_box(0), lean_box(0), v___x_2417_, v___f_2415_);
return v___x_2418_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMarkdownDocString___redArg___lam__3(lean_object* v_inst_2419_, lean_object* v_inst_2420_, lean_object* v_inst_2421_, lean_object* v_inst_2422_, lean_object* v_inst_2423_, lean_object* v_docComment_2424_, lean_object* v_toBind_2425_, lean_object* v___f_2426_, lean_object* v_____r_2427_){
_start:
{
lean_object* v___x_2428_; lean_object* v___x_2429_; 
v___x_2428_ = l_Lean_validateDocComment___redArg(v_inst_2419_, v_inst_2420_, v_inst_2421_, v_inst_2422_, v_inst_2423_, v_docComment_2424_);
v___x_2429_ = lean_apply_4(v_toBind_2425_, lean_box(0), lean_box(0), v___x_2428_, v___f_2426_);
return v___x_2429_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMarkdownDocString___redArg___lam__3___boxed(lean_object* v_inst_2430_, lean_object* v_inst_2431_, lean_object* v_inst_2432_, lean_object* v_inst_2433_, lean_object* v_inst_2434_, lean_object* v_docComment_2435_, lean_object* v_toBind_2436_, lean_object* v___f_2437_, lean_object* v_____r_2438_){
_start:
{
lean_object* v_res_2439_; 
v_res_2439_ = l_Lean_addMarkdownDocString___redArg___lam__3(v_inst_2430_, v_inst_2431_, v_inst_2432_, v_inst_2433_, v_inst_2434_, v_docComment_2435_, v_toBind_2436_, v___f_2437_, v_____r_2438_);
lean_dec(v_docComment_2435_);
return v_res_2439_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMarkdownDocString___redArg___lam__4(lean_object* v___f_2440_, lean_object* v_____r_2441_){
_start:
{
lean_object* v___x_2442_; 
v___x_2442_ = lean_apply_1(v___f_2440_, v_____r_2441_);
return v___x_2442_;
}
}
static lean_object* _init_l_Lean_addMarkdownDocString___redArg___lam__5___closed__1(void){
_start:
{
lean_object* v___x_2444_; lean_object* v___x_2445_; 
v___x_2444_ = ((lean_object*)(l_Lean_addMarkdownDocString___redArg___lam__5___closed__0));
v___x_2445_ = l_Lean_stringToMessageData(v___x_2444_);
return v___x_2445_;
}
}
static lean_object* _init_l_Lean_addMarkdownDocString___redArg___lam__5___closed__3(void){
_start:
{
lean_object* v___x_2447_; lean_object* v___x_2448_; 
v___x_2447_ = ((lean_object*)(l_Lean_addMarkdownDocString___redArg___lam__5___closed__2));
v___x_2448_ = l_Lean_stringToMessageData(v___x_2447_);
return v___x_2448_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMarkdownDocString___redArg___lam__5(lean_object* v___f_2449_, lean_object* v_declName_2450_, uint8_t v___x_2451_, lean_object* v_inst_2452_, lean_object* v_inst_2453_, lean_object* v_toBind_2454_, lean_object* v___f_2455_, lean_object* v_____do__lift_2456_){
_start:
{
lean_object* v___x_2460_; 
v___x_2460_ = l_Lean_Environment_getModuleIdxFor_x3f(v_____do__lift_2456_, v_declName_2450_);
if (lean_obj_tag(v___x_2460_) == 0)
{
lean_dec(v___f_2455_);
lean_dec(v_toBind_2454_);
lean_dec_ref(v_inst_2453_);
lean_dec_ref(v_inst_2452_);
lean_dec(v_declName_2450_);
goto v___jp_2457_;
}
else
{
lean_dec_ref_known(v___x_2460_, 1);
if (v___x_2451_ == 0)
{
lean_object* v___x_2461_; lean_object* v___x_2462_; lean_object* v___x_2463_; lean_object* v___x_2464_; lean_object* v___x_2465_; lean_object* v___x_2466_; lean_object* v___x_2467_; 
lean_dec(v___f_2449_);
v___x_2461_ = lean_obj_once(&l_Lean_addMarkdownDocString___redArg___lam__5___closed__1, &l_Lean_addMarkdownDocString___redArg___lam__5___closed__1_once, _init_l_Lean_addMarkdownDocString___redArg___lam__5___closed__1);
v___x_2462_ = l_Lean_MessageData_ofConstName(v_declName_2450_, v___x_2451_);
v___x_2463_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2463_, 0, v___x_2461_);
lean_ctor_set(v___x_2463_, 1, v___x_2462_);
v___x_2464_ = lean_obj_once(&l_Lean_addMarkdownDocString___redArg___lam__5___closed__3, &l_Lean_addMarkdownDocString___redArg___lam__5___closed__3_once, _init_l_Lean_addMarkdownDocString___redArg___lam__5___closed__3);
v___x_2465_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2465_, 0, v___x_2463_);
lean_ctor_set(v___x_2465_, 1, v___x_2464_);
v___x_2466_ = l_Lean_throwError___redArg(v_inst_2452_, v_inst_2453_, v___x_2465_);
v___x_2467_ = lean_apply_4(v_toBind_2454_, lean_box(0), lean_box(0), v___x_2466_, v___f_2455_);
return v___x_2467_;
}
else
{
lean_dec(v___f_2455_);
lean_dec(v_toBind_2454_);
lean_dec_ref(v_inst_2453_);
lean_dec_ref(v_inst_2452_);
lean_dec(v_declName_2450_);
goto v___jp_2457_;
}
}
v___jp_2457_:
{
lean_object* v___x_2458_; lean_object* v___x_2459_; 
v___x_2458_ = lean_box(0);
v___x_2459_ = lean_apply_1(v___f_2449_, v___x_2458_);
return v___x_2459_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_addMarkdownDocString___redArg___lam__5___boxed(lean_object* v___f_2468_, lean_object* v_declName_2469_, lean_object* v___x_2470_, lean_object* v_inst_2471_, lean_object* v_inst_2472_, lean_object* v_toBind_2473_, lean_object* v___f_2474_, lean_object* v_____do__lift_2475_){
_start:
{
uint8_t v___x_247__boxed_2476_; lean_object* v_res_2477_; 
v___x_247__boxed_2476_ = lean_unbox(v___x_2470_);
v_res_2477_ = l_Lean_addMarkdownDocString___redArg___lam__5(v___f_2468_, v_declName_2469_, v___x_247__boxed_2476_, v_inst_2471_, v_inst_2472_, v_toBind_2473_, v___f_2474_, v_____do__lift_2475_);
lean_dec_ref(v_____do__lift_2475_);
return v_res_2477_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMarkdownDocString___redArg(lean_object* v_inst_2478_, lean_object* v_inst_2479_, lean_object* v_inst_2480_, lean_object* v_inst_2481_, lean_object* v_inst_2482_, lean_object* v_inst_2483_, lean_object* v_inst_2484_, lean_object* v_declName_2485_, lean_object* v_docComment_2486_){
_start:
{
lean_object* v_toApplicative_2487_; lean_object* v_toBind_2488_; lean_object* v_toPure_2489_; uint8_t v___x_2490_; 
v_toApplicative_2487_ = lean_ctor_get(v_inst_2478_, 0);
v_toBind_2488_ = lean_ctor_get(v_inst_2478_, 1);
lean_inc(v_toBind_2488_);
v_toPure_2489_ = lean_ctor_get(v_toApplicative_2487_, 1);
v___x_2490_ = l_Lean_Name_isAnonymous(v_declName_2485_);
if (v___x_2490_ == 0)
{
lean_object* v_getEnv_2491_; lean_object* v_modifyEnv_2492_; lean_object* v___f_2493_; lean_object* v___f_2494_; lean_object* v___f_2495_; lean_object* v___f_2496_; lean_object* v___x_2497_; lean_object* v___f_2498_; lean_object* v___x_2499_; 
v_getEnv_2491_ = lean_ctor_get(v_inst_2481_, 0);
lean_inc(v_getEnv_2491_);
v_modifyEnv_2492_ = lean_ctor_get(v_inst_2481_, 1);
lean_inc(v_modifyEnv_2492_);
lean_dec_ref(v_inst_2481_);
lean_inc(v_declName_2485_);
v___f_2493_ = lean_alloc_closure((void*)(l_Lean_addMarkdownDocString___redArg___lam__1), 3, 2);
lean_closure_set(v___f_2493_, 0, v_declName_2485_);
lean_closure_set(v___f_2493_, 1, v_modifyEnv_2492_);
lean_inc_n(v_toBind_2488_, 3);
lean_inc(v_docComment_2486_);
lean_inc_ref(v_inst_2482_);
lean_inc_ref_n(v_inst_2478_, 2);
v___f_2494_ = lean_alloc_closure((void*)(l_Lean_addMarkdownDocString___redArg___lam__2), 6, 5);
lean_closure_set(v___f_2494_, 0, v_inst_2478_);
lean_closure_set(v___f_2494_, 1, v_inst_2482_);
lean_closure_set(v___f_2494_, 2, v_docComment_2486_);
lean_closure_set(v___f_2494_, 3, v_toBind_2488_);
lean_closure_set(v___f_2494_, 4, v___f_2493_);
v___f_2495_ = lean_alloc_closure((void*)(l_Lean_addMarkdownDocString___redArg___lam__3___boxed), 9, 8);
lean_closure_set(v___f_2495_, 0, v_inst_2478_);
lean_closure_set(v___f_2495_, 1, v_inst_2479_);
lean_closure_set(v___f_2495_, 2, v_inst_2483_);
lean_closure_set(v___f_2495_, 3, v_inst_2484_);
lean_closure_set(v___f_2495_, 4, v_inst_2480_);
lean_closure_set(v___f_2495_, 5, v_docComment_2486_);
lean_closure_set(v___f_2495_, 6, v_toBind_2488_);
lean_closure_set(v___f_2495_, 7, v___f_2494_);
lean_inc_ref(v___f_2495_);
v___f_2496_ = lean_alloc_closure((void*)(l_Lean_addMarkdownDocString___redArg___lam__4), 2, 1);
lean_closure_set(v___f_2496_, 0, v___f_2495_);
v___x_2497_ = lean_box(v___x_2490_);
v___f_2498_ = lean_alloc_closure((void*)(l_Lean_addMarkdownDocString___redArg___lam__5___boxed), 8, 7);
lean_closure_set(v___f_2498_, 0, v___f_2495_);
lean_closure_set(v___f_2498_, 1, v_declName_2485_);
lean_closure_set(v___f_2498_, 2, v___x_2497_);
lean_closure_set(v___f_2498_, 3, v_inst_2478_);
lean_closure_set(v___f_2498_, 4, v_inst_2482_);
lean_closure_set(v___f_2498_, 5, v_toBind_2488_);
lean_closure_set(v___f_2498_, 6, v___f_2496_);
v___x_2499_ = lean_apply_4(v_toBind_2488_, lean_box(0), lean_box(0), v_getEnv_2491_, v___f_2498_);
return v___x_2499_;
}
else
{
lean_object* v___x_2500_; lean_object* v___x_2501_; 
lean_inc(v_toPure_2489_);
lean_dec(v_toBind_2488_);
lean_dec(v_docComment_2486_);
lean_dec(v_declName_2485_);
lean_dec(v_inst_2484_);
lean_dec_ref(v_inst_2483_);
lean_dec_ref(v_inst_2482_);
lean_dec_ref(v_inst_2481_);
lean_dec(v_inst_2480_);
lean_dec(v_inst_2479_);
lean_dec_ref(v_inst_2478_);
v___x_2500_ = lean_box(0);
v___x_2501_ = lean_apply_2(v_toPure_2489_, lean_box(0), v___x_2500_);
return v___x_2501_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_addMarkdownDocString(lean_object* v_m_2502_, lean_object* v_inst_2503_, lean_object* v_inst_2504_, lean_object* v_inst_2505_, lean_object* v_inst_2506_, lean_object* v_inst_2507_, lean_object* v_inst_2508_, lean_object* v_inst_2509_, lean_object* v_declName_2510_, lean_object* v_docComment_2511_){
_start:
{
lean_object* v___x_2512_; 
v___x_2512_ = l_Lean_addMarkdownDocString___redArg(v_inst_2503_, v_inst_2504_, v_inst_2505_, v_inst_2506_, v_inst_2507_, v_inst_2508_, v_inst_2509_, v_declName_2510_, v_docComment_2511_);
return v___x_2512_;
}
}
static lean_object* _init_l_Lean_addVersoDocStringCore___redArg___lam__0___closed__0(void){
_start:
{
lean_object* v___x_2513_; lean_object* v___x_2514_; 
v___x_2513_ = lean_box(0);
v___x_2514_ = l_unsafeCast___redArg(v___x_2513_);
return v___x_2514_;
}
}
LEAN_EXPORT lean_object* l_Lean_addVersoDocStringCore___redArg___lam__0(lean_object* v_declName_2515_, lean_object* v_x1_2516_, lean_object* v_x2_2517_){
_start:
{
lean_object* v_index_2518_; lean_object* v_sourceString_2519_; lean_object* v_imports_2520_; lean_object* v_currNamespace_2521_; lean_object* v_openDecls_2522_; lean_object* v_options_2523_; lean_object* v_check_2524_; lean_object* v___x_2526_; uint8_t v_isShared_2527_; uint8_t v_isSharedCheck_2537_; 
v_index_2518_ = lean_ctor_get(v_x2_2517_, 1);
v_sourceString_2519_ = lean_ctor_get(v_x2_2517_, 2);
v_imports_2520_ = lean_ctor_get(v_x2_2517_, 3);
v_currNamespace_2521_ = lean_ctor_get(v_x2_2517_, 4);
v_openDecls_2522_ = lean_ctor_get(v_x2_2517_, 5);
v_options_2523_ = lean_ctor_get(v_x2_2517_, 6);
v_check_2524_ = lean_ctor_get(v_x2_2517_, 7);
v_isSharedCheck_2537_ = !lean_is_exclusive(v_x2_2517_);
if (v_isSharedCheck_2537_ == 0)
{
lean_object* v_unused_2538_; 
v_unused_2538_ = lean_ctor_get(v_x2_2517_, 0);
lean_dec(v_unused_2538_);
v___x_2526_ = v_x2_2517_;
v_isShared_2527_ = v_isSharedCheck_2537_;
goto v_resetjp_2525_;
}
else
{
lean_inc(v_check_2524_);
lean_inc(v_options_2523_);
lean_inc(v_openDecls_2522_);
lean_inc(v_currNamespace_2521_);
lean_inc(v_imports_2520_);
lean_inc(v_sourceString_2519_);
lean_inc(v_index_2518_);
lean_dec(v_x2_2517_);
v___x_2526_ = lean_box(0);
v_isShared_2527_ = v_isSharedCheck_2537_;
goto v_resetjp_2525_;
}
v_resetjp_2525_:
{
lean_object* v___x_2528_; lean_object* v_toEnvExtension_2529_; lean_object* v_asyncMode_2530_; lean_object* v___x_2531_; lean_object* v___x_2533_; 
v___x_2528_ = l_Lean_Doc_deferredCheckExt;
v_toEnvExtension_2529_ = lean_ctor_get(v___x_2528_, 0);
v_asyncMode_2530_ = lean_ctor_get(v_toEnvExtension_2529_, 2);
v___x_2531_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2531_, 0, v_declName_2515_);
if (v_isShared_2527_ == 0)
{
lean_ctor_set(v___x_2526_, 0, v___x_2531_);
v___x_2533_ = v___x_2526_;
goto v_reusejp_2532_;
}
else
{
lean_object* v_reuseFailAlloc_2536_; 
v_reuseFailAlloc_2536_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v_reuseFailAlloc_2536_, 0, v___x_2531_);
lean_ctor_set(v_reuseFailAlloc_2536_, 1, v_index_2518_);
lean_ctor_set(v_reuseFailAlloc_2536_, 2, v_sourceString_2519_);
lean_ctor_set(v_reuseFailAlloc_2536_, 3, v_imports_2520_);
lean_ctor_set(v_reuseFailAlloc_2536_, 4, v_currNamespace_2521_);
lean_ctor_set(v_reuseFailAlloc_2536_, 5, v_openDecls_2522_);
lean_ctor_set(v_reuseFailAlloc_2536_, 6, v_options_2523_);
lean_ctor_set(v_reuseFailAlloc_2536_, 7, v_check_2524_);
v___x_2533_ = v_reuseFailAlloc_2536_;
goto v_reusejp_2532_;
}
v_reusejp_2532_:
{
lean_object* v___x_2534_; lean_object* v___x_2535_; 
v___x_2534_ = lean_obj_once(&l_Lean_addVersoDocStringCore___redArg___lam__0___closed__0, &l_Lean_addVersoDocStringCore___redArg___lam__0___closed__0_once, _init_l_Lean_addVersoDocStringCore___redArg___lam__0___closed__0);
v___x_2535_ = l_Lean_PersistentEnvExtension_addEntry___redArg(v___x_2528_, v_x1_2516_, v___x_2533_, v_asyncMode_2530_, v___x_2534_);
return v___x_2535_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addVersoDocStringCore___redArg___lam__1(lean_object* v_declName_2558_, lean_object* v_docs_2559_, lean_object* v_deferred_2560_, lean_object* v___f_2561_, lean_object* v_env_2562_){
_start:
{
lean_object* v___x_2563_; lean_object* v_env_2564_; lean_object* v___x_2565_; lean_object* v___x_2566_; lean_object* v___x_2567_; uint8_t v___x_2568_; 
v___x_2563_ = l_Lean_versoDocStringExt;
v_env_2564_ = l_Lean_MapDeclarationExtension_insert___redArg(v___x_2563_, v_env_2562_, v_declName_2558_, v_docs_2559_);
v___x_2565_ = lean_unsigned_to_nat(0u);
v___x_2566_ = lean_array_get_size(v_deferred_2560_);
v___x_2567_ = ((lean_object*)(l_Lean_addVersoDocStringCore___redArg___lam__1___closed__9));
v___x_2568_ = lean_nat_dec_lt(v___x_2565_, v___x_2566_);
if (v___x_2568_ == 0)
{
lean_dec_ref(v___f_2561_);
lean_dec_ref(v_deferred_2560_);
return v_env_2564_;
}
else
{
uint8_t v___x_2569_; 
v___x_2569_ = lean_nat_dec_le(v___x_2566_, v___x_2566_);
if (v___x_2569_ == 0)
{
if (v___x_2568_ == 0)
{
lean_dec_ref(v___f_2561_);
lean_dec_ref(v_deferred_2560_);
return v_env_2564_;
}
else
{
size_t v___x_2570_; size_t v___x_2571_; lean_object* v___x_2572_; 
v___x_2570_ = ((size_t)0ULL);
v___x_2571_ = lean_usize_of_nat(v___x_2566_);
v___x_2572_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_2567_, v___f_2561_, v_deferred_2560_, v___x_2570_, v___x_2571_, v_env_2564_);
return v___x_2572_;
}
}
else
{
size_t v___x_2573_; size_t v___x_2574_; lean_object* v___x_2575_; 
v___x_2573_ = ((size_t)0ULL);
v___x_2574_ = lean_usize_of_nat(v___x_2566_);
v___x_2575_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_2567_, v___f_2561_, v_deferred_2560_, v___x_2573_, v___x_2574_, v_env_2564_);
return v___x_2575_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addVersoDocStringCore___redArg___lam__2(lean_object* v_modifyEnv_2576_, lean_object* v___f_2577_, lean_object* v_____r_2578_){
_start:
{
lean_object* v___x_2579_; 
v___x_2579_ = lean_apply_1(v_modifyEnv_2576_, v___f_2577_);
return v___x_2579_;
}
}
LEAN_EXPORT lean_object* l_Lean_addVersoDocStringCore___redArg___lam__3(lean_object* v_declName_2582_, lean_object* v_modifyEnv_2583_, lean_object* v___f_2584_, uint8_t v___x_2585_, lean_object* v_inst_2586_, lean_object* v_inst_2587_, lean_object* v_toBind_2588_, lean_object* v___f_2589_, lean_object* v_____do__lift_2590_){
_start:
{
lean_object* v___x_2591_; 
v___x_2591_ = l_Lean_Environment_getModuleIdxFor_x3f(v_____do__lift_2590_, v_declName_2582_);
if (lean_obj_tag(v___x_2591_) == 0)
{
lean_object* v___x_2592_; 
lean_dec(v___f_2589_);
lean_dec(v_toBind_2588_);
lean_dec_ref(v_inst_2587_);
lean_dec_ref(v_inst_2586_);
lean_dec(v_declName_2582_);
v___x_2592_ = lean_apply_1(v_modifyEnv_2583_, v___f_2584_);
return v___x_2592_;
}
else
{
lean_object* v___x_2594_; uint8_t v_isShared_2595_; uint8_t v_isSharedCheck_2609_; 
v_isSharedCheck_2609_ = !lean_is_exclusive(v___x_2591_);
if (v_isSharedCheck_2609_ == 0)
{
lean_object* v_unused_2610_; 
v_unused_2610_ = lean_ctor_get(v___x_2591_, 0);
lean_dec(v_unused_2610_);
v___x_2594_ = v___x_2591_;
v_isShared_2595_ = v_isSharedCheck_2609_;
goto v_resetjp_2593_;
}
else
{
lean_dec(v___x_2591_);
v___x_2594_ = lean_box(0);
v_isShared_2595_ = v_isSharedCheck_2609_;
goto v_resetjp_2593_;
}
v_resetjp_2593_:
{
if (v___x_2585_ == 0)
{
lean_object* v___x_2596_; uint8_t v___x_2597_; lean_object* v___x_2598_; lean_object* v___x_2599_; lean_object* v___x_2600_; lean_object* v___x_2601_; lean_object* v___x_2603_; 
lean_dec_ref(v___f_2584_);
lean_dec(v_modifyEnv_2583_);
v___x_2596_ = ((lean_object*)(l_Lean_addVersoDocStringCore___redArg___lam__3___closed__0));
v___x_2597_ = 1;
v___x_2598_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_declName_2582_, v___x_2597_);
v___x_2599_ = lean_string_append(v___x_2596_, v___x_2598_);
lean_dec_ref(v___x_2598_);
v___x_2600_ = ((lean_object*)(l_Lean_addVersoDocStringCore___redArg___lam__3___closed__1));
v___x_2601_ = lean_string_append(v___x_2599_, v___x_2600_);
if (v_isShared_2595_ == 0)
{
lean_ctor_set_tag(v___x_2594_, 3);
lean_ctor_set(v___x_2594_, 0, v___x_2601_);
v___x_2603_ = v___x_2594_;
goto v_reusejp_2602_;
}
else
{
lean_object* v_reuseFailAlloc_2607_; 
v_reuseFailAlloc_2607_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2607_, 0, v___x_2601_);
v___x_2603_ = v_reuseFailAlloc_2607_;
goto v_reusejp_2602_;
}
v_reusejp_2602_:
{
lean_object* v___x_2604_; lean_object* v___x_2605_; lean_object* v___x_2606_; 
v___x_2604_ = l_Lean_MessageData_ofFormat(v___x_2603_);
v___x_2605_ = l_Lean_throwError___redArg(v_inst_2586_, v_inst_2587_, v___x_2604_);
v___x_2606_ = lean_apply_4(v_toBind_2588_, lean_box(0), lean_box(0), v___x_2605_, v___f_2589_);
return v___x_2606_;
}
}
else
{
lean_object* v___x_2608_; 
lean_del_object(v___x_2594_);
lean_dec(v___f_2589_);
lean_dec(v_toBind_2588_);
lean_dec_ref(v_inst_2587_);
lean_dec_ref(v_inst_2586_);
lean_dec(v_declName_2582_);
v___x_2608_ = lean_apply_1(v_modifyEnv_2583_, v___f_2584_);
return v___x_2608_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addVersoDocStringCore___redArg___lam__3___boxed(lean_object* v_declName_2611_, lean_object* v_modifyEnv_2612_, lean_object* v___f_2613_, lean_object* v___x_2614_, lean_object* v_inst_2615_, lean_object* v_inst_2616_, lean_object* v_toBind_2617_, lean_object* v___f_2618_, lean_object* v_____do__lift_2619_){
_start:
{
uint8_t v___x_382__boxed_2620_; lean_object* v_res_2621_; 
v___x_382__boxed_2620_ = lean_unbox(v___x_2614_);
v_res_2621_ = l_Lean_addVersoDocStringCore___redArg___lam__3(v_declName_2611_, v_modifyEnv_2612_, v___f_2613_, v___x_382__boxed_2620_, v_inst_2615_, v_inst_2616_, v_toBind_2617_, v___f_2618_, v_____do__lift_2619_);
lean_dec_ref(v_____do__lift_2619_);
return v_res_2621_;
}
}
LEAN_EXPORT lean_object* l_Lean_addVersoDocStringCore___redArg(lean_object* v_inst_2622_, lean_object* v_inst_2623_, lean_object* v_inst_2624_, lean_object* v_declName_2625_, lean_object* v_docs_2626_, lean_object* v_deferred_2627_){
_start:
{
lean_object* v_toApplicative_2628_; lean_object* v_toBind_2629_; lean_object* v_toPure_2630_; uint8_t v___x_2631_; 
v_toApplicative_2628_ = lean_ctor_get(v_inst_2622_, 0);
v_toBind_2629_ = lean_ctor_get(v_inst_2622_, 1);
lean_inc(v_toBind_2629_);
v_toPure_2630_ = lean_ctor_get(v_toApplicative_2628_, 1);
v___x_2631_ = l_Lean_Name_isAnonymous(v_declName_2625_);
if (v___x_2631_ == 0)
{
lean_object* v_getEnv_2632_; lean_object* v_modifyEnv_2633_; lean_object* v___f_2634_; lean_object* v___f_2635_; lean_object* v___f_2636_; lean_object* v___x_2637_; lean_object* v___f_2638_; lean_object* v___x_2639_; 
v_getEnv_2632_ = lean_ctor_get(v_inst_2623_, 0);
lean_inc(v_getEnv_2632_);
v_modifyEnv_2633_ = lean_ctor_get(v_inst_2623_, 1);
lean_inc_n(v_modifyEnv_2633_, 2);
lean_dec_ref(v_inst_2623_);
lean_inc_n(v_declName_2625_, 2);
v___f_2634_ = lean_alloc_closure((void*)(l_Lean_addVersoDocStringCore___redArg___lam__0), 3, 1);
lean_closure_set(v___f_2634_, 0, v_declName_2625_);
v___f_2635_ = lean_alloc_closure((void*)(l_Lean_addVersoDocStringCore___redArg___lam__1), 5, 4);
lean_closure_set(v___f_2635_, 0, v_declName_2625_);
lean_closure_set(v___f_2635_, 1, v_docs_2626_);
lean_closure_set(v___f_2635_, 2, v_deferred_2627_);
lean_closure_set(v___f_2635_, 3, v___f_2634_);
lean_inc_ref(v___f_2635_);
v___f_2636_ = lean_alloc_closure((void*)(l_Lean_addVersoDocStringCore___redArg___lam__2), 3, 2);
lean_closure_set(v___f_2636_, 0, v_modifyEnv_2633_);
lean_closure_set(v___f_2636_, 1, v___f_2635_);
v___x_2637_ = lean_box(v___x_2631_);
lean_inc(v_toBind_2629_);
v___f_2638_ = lean_alloc_closure((void*)(l_Lean_addVersoDocStringCore___redArg___lam__3___boxed), 9, 8);
lean_closure_set(v___f_2638_, 0, v_declName_2625_);
lean_closure_set(v___f_2638_, 1, v_modifyEnv_2633_);
lean_closure_set(v___f_2638_, 2, v___f_2635_);
lean_closure_set(v___f_2638_, 3, v___x_2637_);
lean_closure_set(v___f_2638_, 4, v_inst_2622_);
lean_closure_set(v___f_2638_, 5, v_inst_2624_);
lean_closure_set(v___f_2638_, 6, v_toBind_2629_);
lean_closure_set(v___f_2638_, 7, v___f_2636_);
v___x_2639_ = lean_apply_4(v_toBind_2629_, lean_box(0), lean_box(0), v_getEnv_2632_, v___f_2638_);
return v___x_2639_;
}
else
{
lean_object* v___x_2640_; lean_object* v___x_2641_; 
lean_inc(v_toPure_2630_);
lean_dec(v_toBind_2629_);
lean_dec_ref(v_deferred_2627_);
lean_dec_ref(v_docs_2626_);
lean_dec(v_declName_2625_);
lean_dec_ref(v_inst_2624_);
lean_dec_ref(v_inst_2623_);
lean_dec_ref(v_inst_2622_);
v___x_2640_ = lean_box(0);
v___x_2641_ = lean_apply_2(v_toPure_2630_, lean_box(0), v___x_2640_);
return v___x_2641_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_addVersoDocStringCore(lean_object* v_m_2642_, lean_object* v_inst_2643_, lean_object* v_inst_2644_, lean_object* v_inst_2645_, lean_object* v_inst_2646_, lean_object* v_declName_2647_, lean_object* v_docs_2648_, lean_object* v_deferred_2649_){
_start:
{
lean_object* v___x_2650_; 
v___x_2650_ = l_Lean_addVersoDocStringCore___redArg(v_inst_2643_, v_inst_2644_, v_inst_2646_, v_declName_2647_, v_docs_2648_, v_deferred_2649_);
return v___x_2650_;
}
}
LEAN_EXPORT lean_object* l_Lean_addVersoDocStringCore___boxed(lean_object* v_m_2651_, lean_object* v_inst_2652_, lean_object* v_inst_2653_, lean_object* v_inst_2654_, lean_object* v_inst_2655_, lean_object* v_declName_2656_, lean_object* v_docs_2657_, lean_object* v_deferred_2658_){
_start:
{
lean_object* v_res_2659_; 
v_res_2659_ = l_Lean_addVersoDocStringCore(v_m_2651_, v_inst_2652_, v_inst_2653_, v_inst_2654_, v_inst_2655_, v_declName_2656_, v_docs_2657_, v_deferred_2658_);
lean_dec(v_inst_2654_);
return v_res_2659_;
}
}
LEAN_EXPORT lean_object* l_Lean_addVersoModDocStringCore___redArg___lam__0(lean_object* v_size_2660_, lean_object* v_x1_2661_, lean_object* v_x2_2662_){
_start:
{
lean_object* v_index_2663_; lean_object* v_sourceString_2664_; lean_object* v_imports_2665_; lean_object* v_currNamespace_2666_; lean_object* v_openDecls_2667_; lean_object* v_options_2668_; lean_object* v_check_2669_; lean_object* v___x_2671_; uint8_t v_isShared_2672_; uint8_t v_isSharedCheck_2682_; 
v_index_2663_ = lean_ctor_get(v_x2_2662_, 1);
v_sourceString_2664_ = lean_ctor_get(v_x2_2662_, 2);
v_imports_2665_ = lean_ctor_get(v_x2_2662_, 3);
v_currNamespace_2666_ = lean_ctor_get(v_x2_2662_, 4);
v_openDecls_2667_ = lean_ctor_get(v_x2_2662_, 5);
v_options_2668_ = lean_ctor_get(v_x2_2662_, 6);
v_check_2669_ = lean_ctor_get(v_x2_2662_, 7);
v_isSharedCheck_2682_ = !lean_is_exclusive(v_x2_2662_);
if (v_isSharedCheck_2682_ == 0)
{
lean_object* v_unused_2683_; 
v_unused_2683_ = lean_ctor_get(v_x2_2662_, 0);
lean_dec(v_unused_2683_);
v___x_2671_ = v_x2_2662_;
v_isShared_2672_ = v_isSharedCheck_2682_;
goto v_resetjp_2670_;
}
else
{
lean_inc(v_check_2669_);
lean_inc(v_options_2668_);
lean_inc(v_openDecls_2667_);
lean_inc(v_currNamespace_2666_);
lean_inc(v_imports_2665_);
lean_inc(v_sourceString_2664_);
lean_inc(v_index_2663_);
lean_dec(v_x2_2662_);
v___x_2671_ = lean_box(0);
v_isShared_2672_ = v_isSharedCheck_2682_;
goto v_resetjp_2670_;
}
v_resetjp_2670_:
{
lean_object* v___x_2673_; lean_object* v_toEnvExtension_2674_; lean_object* v_asyncMode_2675_; lean_object* v___x_2676_; lean_object* v___x_2678_; 
v___x_2673_ = l_Lean_Doc_deferredCheckExt;
v_toEnvExtension_2674_ = lean_ctor_get(v___x_2673_, 0);
v_asyncMode_2675_ = lean_ctor_get(v_toEnvExtension_2674_, 2);
v___x_2676_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2676_, 0, v_size_2660_);
if (v_isShared_2672_ == 0)
{
lean_ctor_set(v___x_2671_, 0, v___x_2676_);
v___x_2678_ = v___x_2671_;
goto v_reusejp_2677_;
}
else
{
lean_object* v_reuseFailAlloc_2681_; 
v_reuseFailAlloc_2681_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v_reuseFailAlloc_2681_, 0, v___x_2676_);
lean_ctor_set(v_reuseFailAlloc_2681_, 1, v_index_2663_);
lean_ctor_set(v_reuseFailAlloc_2681_, 2, v_sourceString_2664_);
lean_ctor_set(v_reuseFailAlloc_2681_, 3, v_imports_2665_);
lean_ctor_set(v_reuseFailAlloc_2681_, 4, v_currNamespace_2666_);
lean_ctor_set(v_reuseFailAlloc_2681_, 5, v_openDecls_2667_);
lean_ctor_set(v_reuseFailAlloc_2681_, 6, v_options_2668_);
lean_ctor_set(v_reuseFailAlloc_2681_, 7, v_check_2669_);
v___x_2678_ = v_reuseFailAlloc_2681_;
goto v_reusejp_2677_;
}
v_reusejp_2677_:
{
lean_object* v___x_2679_; lean_object* v___x_2680_; 
v___x_2679_ = lean_obj_once(&l_Lean_addVersoDocStringCore___redArg___lam__0___closed__0, &l_Lean_addVersoDocStringCore___redArg___lam__0___closed__0_once, _init_l_Lean_addVersoDocStringCore___redArg___lam__0___closed__0);
v___x_2680_ = l_Lean_PersistentEnvExtension_addEntry___redArg(v___x_2673_, v_x1_2661_, v___x_2678_, v_asyncMode_2675_, v___x_2679_);
return v___x_2680_;
}
}
}
}
static lean_object* _init_l_Lean_addVersoModDocStringCore___redArg___lam__1___closed__1(void){
_start:
{
lean_object* v___x_2685_; lean_object* v___x_2686_; 
v___x_2685_ = ((lean_object*)(l_Lean_addVersoModDocStringCore___redArg___lam__1___closed__0));
v___x_2686_ = l_Lean_stringToMessageData(v___x_2685_);
return v___x_2686_;
}
}
LEAN_EXPORT lean_object* l_Lean_addVersoModDocStringCore___redArg___lam__1(lean_object* v_docs_2687_, lean_object* v_inst_2688_, lean_object* v_inst_2689_, lean_object* v_deferred_2690_, lean_object* v_inst_2691_, lean_object* v___f_2692_, lean_object* v_____do__lift_2693_){
_start:
{
lean_object* v___x_2694_; 
v___x_2694_ = l_Lean_addVersoModuleDocSnippet(v_____do__lift_2693_, v_docs_2687_);
if (lean_obj_tag(v___x_2694_) == 0)
{
lean_object* v_a_2695_; lean_object* v___x_2696_; lean_object* v___x_2697_; lean_object* v___x_2698_; lean_object* v___x_2699_; lean_object* v___x_2700_; 
lean_dec_ref(v___f_2692_);
lean_dec_ref(v_inst_2691_);
lean_dec_ref(v_deferred_2690_);
v_a_2695_ = lean_ctor_get(v___x_2694_, 0);
lean_inc(v_a_2695_);
lean_dec_ref_known(v___x_2694_, 1);
v___x_2696_ = lean_obj_once(&l_Lean_addVersoModDocStringCore___redArg___lam__1___closed__1, &l_Lean_addVersoModDocStringCore___redArg___lam__1___closed__1_once, _init_l_Lean_addVersoModDocStringCore___redArg___lam__1___closed__1);
v___x_2697_ = l_Lean_stringToMessageData(v_a_2695_);
v___x_2698_ = l_Lean_indentD(v___x_2697_);
v___x_2699_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2699_, 0, v___x_2696_);
lean_ctor_set(v___x_2699_, 1, v___x_2698_);
v___x_2700_ = l_Lean_throwError___redArg(v_inst_2688_, v_inst_2689_, v___x_2699_);
return v___x_2700_;
}
else
{
lean_object* v_a_2701_; lean_object* v___x_2702_; lean_object* v___x_2703_; lean_object* v___x_2704_; uint8_t v___x_2705_; 
lean_dec_ref(v_inst_2689_);
lean_dec_ref(v_inst_2688_);
v_a_2701_ = lean_ctor_get(v___x_2694_, 0);
lean_inc(v_a_2701_);
lean_dec_ref_known(v___x_2694_, 1);
v___x_2702_ = lean_unsigned_to_nat(0u);
v___x_2703_ = lean_array_get_size(v_deferred_2690_);
v___x_2704_ = ((lean_object*)(l_Lean_addVersoDocStringCore___redArg___lam__1___closed__9));
v___x_2705_ = lean_nat_dec_lt(v___x_2702_, v___x_2703_);
if (v___x_2705_ == 0)
{
lean_object* v___x_2706_; 
lean_dec_ref(v___f_2692_);
lean_dec_ref(v_deferred_2690_);
v___x_2706_ = l_Lean_setEnv___redArg(v_inst_2691_, v_a_2701_);
return v___x_2706_;
}
else
{
uint8_t v___x_2707_; 
v___x_2707_ = lean_nat_dec_le(v___x_2703_, v___x_2703_);
if (v___x_2707_ == 0)
{
if (v___x_2705_ == 0)
{
lean_object* v___x_2708_; 
lean_dec_ref(v___f_2692_);
lean_dec_ref(v_deferred_2690_);
v___x_2708_ = l_Lean_setEnv___redArg(v_inst_2691_, v_a_2701_);
return v___x_2708_;
}
else
{
size_t v___x_2709_; size_t v___x_2710_; lean_object* v___x_2711_; lean_object* v___x_2712_; 
v___x_2709_ = ((size_t)0ULL);
v___x_2710_ = lean_usize_of_nat(v___x_2703_);
v___x_2711_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_2704_, v___f_2692_, v_deferred_2690_, v___x_2709_, v___x_2710_, v_a_2701_);
v___x_2712_ = l_Lean_setEnv___redArg(v_inst_2691_, v___x_2711_);
return v___x_2712_;
}
}
else
{
size_t v___x_2713_; size_t v___x_2714_; lean_object* v___x_2715_; lean_object* v___x_2716_; 
v___x_2713_ = ((size_t)0ULL);
v___x_2714_ = lean_usize_of_nat(v___x_2703_);
v___x_2715_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_2704_, v___f_2692_, v_deferred_2690_, v___x_2713_, v___x_2714_, v_a_2701_);
v___x_2716_ = l_Lean_setEnv___redArg(v_inst_2691_, v___x_2715_);
return v___x_2716_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addVersoModDocStringCore___redArg___lam__2(lean_object* v_docs_2717_, lean_object* v_inst_2718_, lean_object* v_inst_2719_, lean_object* v_deferred_2720_, lean_object* v_inst_2721_, lean_object* v_toBind_2722_, lean_object* v_getEnv_2723_, lean_object* v_____do__lift_2724_){
_start:
{
lean_object* v___x_2725_; lean_object* v_size_2726_; lean_object* v___f_2727_; lean_object* v___f_2728_; lean_object* v___x_2729_; 
v___x_2725_ = l_Lean_getMainVersoModuleDocs(v_____do__lift_2724_);
v_size_2726_ = lean_ctor_get(v___x_2725_, 2);
lean_inc(v_size_2726_);
lean_dec_ref(v___x_2725_);
v___f_2727_ = lean_alloc_closure((void*)(l_Lean_addVersoModDocStringCore___redArg___lam__0), 3, 1);
lean_closure_set(v___f_2727_, 0, v_size_2726_);
v___f_2728_ = lean_alloc_closure((void*)(l_Lean_addVersoModDocStringCore___redArg___lam__1), 7, 6);
lean_closure_set(v___f_2728_, 0, v_docs_2717_);
lean_closure_set(v___f_2728_, 1, v_inst_2718_);
lean_closure_set(v___f_2728_, 2, v_inst_2719_);
lean_closure_set(v___f_2728_, 3, v_deferred_2720_);
lean_closure_set(v___f_2728_, 4, v_inst_2721_);
lean_closure_set(v___f_2728_, 5, v___f_2727_);
v___x_2729_ = lean_apply_4(v_toBind_2722_, lean_box(0), lean_box(0), v_getEnv_2723_, v___f_2728_);
return v___x_2729_;
}
}
static lean_object* _init_l_Lean_addVersoModDocStringCore___redArg___lam__3___closed__1(void){
_start:
{
lean_object* v___x_2731_; lean_object* v___x_2732_; 
v___x_2731_ = ((lean_object*)(l_Lean_addVersoModDocStringCore___redArg___lam__3___closed__0));
v___x_2732_ = l_Lean_stringToMessageData(v___x_2731_);
return v___x_2732_;
}
}
LEAN_EXPORT lean_object* l_Lean_addVersoModDocStringCore___redArg___lam__3(lean_object* v_inst_2733_, lean_object* v_inst_2734_, lean_object* v_toBind_2735_, lean_object* v_getEnv_2736_, lean_object* v___f_2737_, lean_object* v_____do__lift_2738_){
_start:
{
lean_object* v___x_2739_; uint8_t v___x_2740_; 
v___x_2739_ = l_Lean_getMainModuleDoc(v_____do__lift_2738_);
v___x_2740_ = l_Lean_PersistentArray_isEmpty___redArg(v___x_2739_);
lean_dec_ref(v___x_2739_);
if (v___x_2740_ == 0)
{
lean_object* v___x_2741_; lean_object* v___x_2742_; 
lean_dec(v___f_2737_);
lean_dec(v_getEnv_2736_);
lean_dec(v_toBind_2735_);
v___x_2741_ = lean_obj_once(&l_Lean_addVersoModDocStringCore___redArg___lam__3___closed__1, &l_Lean_addVersoModDocStringCore___redArg___lam__3___closed__1_once, _init_l_Lean_addVersoModDocStringCore___redArg___lam__3___closed__1);
v___x_2742_ = l_Lean_throwError___redArg(v_inst_2733_, v_inst_2734_, v___x_2741_);
return v___x_2742_;
}
else
{
lean_object* v___x_2743_; 
lean_dec_ref(v_inst_2734_);
lean_dec_ref(v_inst_2733_);
v___x_2743_ = lean_apply_4(v_toBind_2735_, lean_box(0), lean_box(0), v_getEnv_2736_, v___f_2737_);
return v___x_2743_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_addVersoModDocStringCore___redArg(lean_object* v_inst_2744_, lean_object* v_inst_2745_, lean_object* v_inst_2746_, lean_object* v_docs_2747_, lean_object* v_deferred_2748_){
_start:
{
lean_object* v_toBind_2749_; lean_object* v_getEnv_2750_; lean_object* v___f_2751_; lean_object* v___f_2752_; lean_object* v___x_2753_; 
v_toBind_2749_ = lean_ctor_get(v_inst_2744_, 1);
lean_inc_n(v_toBind_2749_, 3);
v_getEnv_2750_ = lean_ctor_get(v_inst_2745_, 0);
lean_inc_n(v_getEnv_2750_, 3);
lean_inc_ref(v_inst_2746_);
lean_inc_ref(v_inst_2744_);
v___f_2751_ = lean_alloc_closure((void*)(l_Lean_addVersoModDocStringCore___redArg___lam__2), 8, 7);
lean_closure_set(v___f_2751_, 0, v_docs_2747_);
lean_closure_set(v___f_2751_, 1, v_inst_2744_);
lean_closure_set(v___f_2751_, 2, v_inst_2746_);
lean_closure_set(v___f_2751_, 3, v_deferred_2748_);
lean_closure_set(v___f_2751_, 4, v_inst_2745_);
lean_closure_set(v___f_2751_, 5, v_toBind_2749_);
lean_closure_set(v___f_2751_, 6, v_getEnv_2750_);
v___f_2752_ = lean_alloc_closure((void*)(l_Lean_addVersoModDocStringCore___redArg___lam__3), 6, 5);
lean_closure_set(v___f_2752_, 0, v_inst_2744_);
lean_closure_set(v___f_2752_, 1, v_inst_2746_);
lean_closure_set(v___f_2752_, 2, v_toBind_2749_);
lean_closure_set(v___f_2752_, 3, v_getEnv_2750_);
lean_closure_set(v___f_2752_, 4, v___f_2751_);
v___x_2753_ = lean_apply_4(v_toBind_2749_, lean_box(0), lean_box(0), v_getEnv_2750_, v___f_2752_);
return v___x_2753_;
}
}
LEAN_EXPORT lean_object* l_Lean_addVersoModDocStringCore(lean_object* v_m_2754_, lean_object* v_inst_2755_, lean_object* v_inst_2756_, lean_object* v_inst_2757_, lean_object* v_inst_2758_, lean_object* v_docs_2759_, lean_object* v_deferred_2760_){
_start:
{
lean_object* v___x_2761_; 
v___x_2761_ = l_Lean_addVersoModDocStringCore___redArg(v_inst_2755_, v_inst_2756_, v_inst_2758_, v_docs_2759_, v_deferred_2760_);
return v___x_2761_;
}
}
LEAN_EXPORT lean_object* l_Lean_addVersoModDocStringCore___boxed(lean_object* v_m_2762_, lean_object* v_inst_2763_, lean_object* v_inst_2764_, lean_object* v_inst_2765_, lean_object* v_inst_2766_, lean_object* v_docs_2767_, lean_object* v_deferred_2768_){
_start:
{
lean_object* v_res_2769_; 
v_res_2769_ = l_Lean_addVersoModDocStringCore(v_m_2762_, v_inst_2763_, v_inst_2764_, v_inst_2765_, v_inst_2766_, v_docs_2767_, v_deferred_2768_);
lean_dec(v_inst_2765_);
return v_res_2769_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0_spec__0(lean_object* v_declName_2770_, lean_object* v_as_2771_, size_t v_i_2772_, size_t v_stop_2773_, lean_object* v_b_2774_){
_start:
{
uint8_t v___x_2775_; 
v___x_2775_ = lean_usize_dec_eq(v_i_2772_, v_stop_2773_);
if (v___x_2775_ == 0)
{
lean_object* v___x_2776_; lean_object* v_index_2777_; lean_object* v_sourceString_2778_; lean_object* v_imports_2779_; lean_object* v_currNamespace_2780_; lean_object* v_openDecls_2781_; lean_object* v_options_2782_; lean_object* v_check_2783_; lean_object* v___x_2785_; uint8_t v_isShared_2786_; uint8_t v_isSharedCheck_2799_; 
v___x_2776_ = lean_array_uget(v_as_2771_, v_i_2772_);
v_index_2777_ = lean_ctor_get(v___x_2776_, 1);
v_sourceString_2778_ = lean_ctor_get(v___x_2776_, 2);
v_imports_2779_ = lean_ctor_get(v___x_2776_, 3);
v_currNamespace_2780_ = lean_ctor_get(v___x_2776_, 4);
v_openDecls_2781_ = lean_ctor_get(v___x_2776_, 5);
v_options_2782_ = lean_ctor_get(v___x_2776_, 6);
v_check_2783_ = lean_ctor_get(v___x_2776_, 7);
v_isSharedCheck_2799_ = !lean_is_exclusive(v___x_2776_);
if (v_isSharedCheck_2799_ == 0)
{
lean_object* v_unused_2800_; 
v_unused_2800_ = lean_ctor_get(v___x_2776_, 0);
lean_dec(v_unused_2800_);
v___x_2785_ = v___x_2776_;
v_isShared_2786_ = v_isSharedCheck_2799_;
goto v_resetjp_2784_;
}
else
{
lean_inc(v_check_2783_);
lean_inc(v_options_2782_);
lean_inc(v_openDecls_2781_);
lean_inc(v_currNamespace_2780_);
lean_inc(v_imports_2779_);
lean_inc(v_sourceString_2778_);
lean_inc(v_index_2777_);
lean_dec(v___x_2776_);
v___x_2785_ = lean_box(0);
v_isShared_2786_ = v_isSharedCheck_2799_;
goto v_resetjp_2784_;
}
v_resetjp_2784_:
{
lean_object* v___x_2787_; lean_object* v_toEnvExtension_2788_; lean_object* v_asyncMode_2789_; lean_object* v___x_2790_; lean_object* v___x_2792_; 
v___x_2787_ = l_Lean_Doc_deferredCheckExt;
v_toEnvExtension_2788_ = lean_ctor_get(v___x_2787_, 0);
v_asyncMode_2789_ = lean_ctor_get(v_toEnvExtension_2788_, 2);
lean_inc(v_declName_2770_);
v___x_2790_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2790_, 0, v_declName_2770_);
if (v_isShared_2786_ == 0)
{
lean_ctor_set(v___x_2785_, 0, v___x_2790_);
v___x_2792_ = v___x_2785_;
goto v_reusejp_2791_;
}
else
{
lean_object* v_reuseFailAlloc_2798_; 
v_reuseFailAlloc_2798_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v_reuseFailAlloc_2798_, 0, v___x_2790_);
lean_ctor_set(v_reuseFailAlloc_2798_, 1, v_index_2777_);
lean_ctor_set(v_reuseFailAlloc_2798_, 2, v_sourceString_2778_);
lean_ctor_set(v_reuseFailAlloc_2798_, 3, v_imports_2779_);
lean_ctor_set(v_reuseFailAlloc_2798_, 4, v_currNamespace_2780_);
lean_ctor_set(v_reuseFailAlloc_2798_, 5, v_openDecls_2781_);
lean_ctor_set(v_reuseFailAlloc_2798_, 6, v_options_2782_);
lean_ctor_set(v_reuseFailAlloc_2798_, 7, v_check_2783_);
v___x_2792_ = v_reuseFailAlloc_2798_;
goto v_reusejp_2791_;
}
v_reusejp_2791_:
{
lean_object* v___x_2793_; lean_object* v___x_2794_; size_t v___x_2795_; size_t v___x_2796_; 
v___x_2793_ = lean_obj_once(&l_Lean_addVersoDocStringCore___redArg___lam__0___closed__0, &l_Lean_addVersoDocStringCore___redArg___lam__0___closed__0_once, _init_l_Lean_addVersoDocStringCore___redArg___lam__0___closed__0);
v___x_2794_ = l_Lean_PersistentEnvExtension_addEntry___redArg(v___x_2787_, v_b_2774_, v___x_2792_, v_asyncMode_2789_, v___x_2793_);
v___x_2795_ = ((size_t)1ULL);
v___x_2796_ = lean_usize_add(v_i_2772_, v___x_2795_);
v_i_2772_ = v___x_2796_;
v_b_2774_ = v___x_2794_;
goto _start;
}
}
}
else
{
lean_dec(v_declName_2770_);
return v_b_2774_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0_spec__0___boxed(lean_object* v_declName_2801_, lean_object* v_as_2802_, lean_object* v_i_2803_, lean_object* v_stop_2804_, lean_object* v_b_2805_){
_start:
{
size_t v_i_boxed_2806_; size_t v_stop_boxed_2807_; lean_object* v_res_2808_; 
v_i_boxed_2806_ = lean_unbox_usize(v_i_2803_);
lean_dec(v_i_2803_);
v_stop_boxed_2807_ = lean_unbox_usize(v_stop_2804_);
lean_dec(v_stop_2804_);
v_res_2808_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0_spec__0(v_declName_2801_, v_as_2802_, v_i_boxed_2806_, v_stop_boxed_2807_, v_b_2805_);
lean_dec_ref(v_as_2802_);
return v_res_2808_;
}
}
static lean_object* _init_l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__0(void){
_start:
{
lean_object* v___x_2809_; 
v___x_2809_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_2809_;
}
}
static lean_object* _init_l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__1(void){
_start:
{
lean_object* v___x_2810_; lean_object* v___x_2811_; 
v___x_2810_ = lean_obj_once(&l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__0, &l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__0_once, _init_l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__0);
v___x_2811_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2811_, 0, v___x_2810_);
return v___x_2811_;
}
}
static lean_object* _init_l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__2(void){
_start:
{
lean_object* v___x_2812_; lean_object* v___x_2813_; 
v___x_2812_ = lean_obj_once(&l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__1, &l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__1_once, _init_l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__1);
v___x_2813_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2813_, 0, v___x_2812_);
lean_ctor_set(v___x_2813_, 1, v___x_2812_);
return v___x_2813_;
}
}
static lean_object* _init_l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__3(void){
_start:
{
lean_object* v___x_2814_; lean_object* v___x_2815_; 
v___x_2814_ = lean_obj_once(&l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__1, &l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__1_once, _init_l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__1);
v___x_2815_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_2815_, 0, v___x_2814_);
lean_ctor_set(v___x_2815_, 1, v___x_2814_);
lean_ctor_set(v___x_2815_, 2, v___x_2814_);
lean_ctor_set(v___x_2815_, 3, v___x_2814_);
lean_ctor_set(v___x_2815_, 4, v___x_2814_);
lean_ctor_set(v___x_2815_, 5, v___x_2814_);
return v___x_2815_;
}
}
LEAN_EXPORT lean_object* l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0(lean_object* v_declName_2816_, lean_object* v_docs_2817_, lean_object* v_deferred_2818_, lean_object* v___y_2819_, lean_object* v___y_2820_, lean_object* v___y_2821_, lean_object* v___y_2822_, lean_object* v___y_2823_, lean_object* v___y_2824_){
_start:
{
lean_object* v___y_2827_; lean_object* v___y_2828_; lean_object* v___y_2829_; lean_object* v___y_2830_; lean_object* v___y_2831_; lean_object* v___y_2832_; lean_object* v___y_2833_; lean_object* v___y_2834_; lean_object* v___y_2835_; lean_object* v___y_2836_; lean_object* v___y_2858_; lean_object* v___y_2859_; uint8_t v___x_2877_; 
v___x_2877_ = l_Lean_Name_isAnonymous(v_declName_2816_);
if (v___x_2877_ == 0)
{
lean_object* v___x_2878_; lean_object* v_env_2879_; lean_object* v___x_2880_; 
v___x_2878_ = lean_st_ref_get(v___y_2824_);
v_env_2879_ = lean_ctor_get(v___x_2878_, 0);
lean_inc_ref(v_env_2879_);
lean_dec(v___x_2878_);
v___x_2880_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_2879_, v_declName_2816_);
lean_dec_ref(v_env_2879_);
if (lean_obj_tag(v___x_2880_) == 0)
{
v___y_2858_ = v___y_2822_;
v___y_2859_ = v___y_2824_;
goto v___jp_2857_;
}
else
{
lean_object* v___x_2882_; uint8_t v_isShared_2883_; uint8_t v_isSharedCheck_2895_; 
v_isSharedCheck_2895_ = !lean_is_exclusive(v___x_2880_);
if (v_isSharedCheck_2895_ == 0)
{
lean_object* v_unused_2896_; 
v_unused_2896_ = lean_ctor_get(v___x_2880_, 0);
lean_dec(v_unused_2896_);
v___x_2882_ = v___x_2880_;
v_isShared_2883_ = v_isSharedCheck_2895_;
goto v_resetjp_2881_;
}
else
{
lean_dec(v___x_2880_);
v___x_2882_ = lean_box(0);
v_isShared_2883_ = v_isSharedCheck_2895_;
goto v_resetjp_2881_;
}
v_resetjp_2881_:
{
if (v___x_2877_ == 0)
{
lean_object* v___x_2884_; uint8_t v___x_2885_; lean_object* v___x_2886_; lean_object* v___x_2887_; lean_object* v___x_2888_; lean_object* v___x_2889_; lean_object* v___x_2891_; 
lean_dec_ref(v_docs_2817_);
v___x_2884_ = ((lean_object*)(l_Lean_addVersoDocStringCore___redArg___lam__3___closed__0));
v___x_2885_ = 1;
v___x_2886_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_declName_2816_, v___x_2885_);
v___x_2887_ = lean_string_append(v___x_2884_, v___x_2886_);
lean_dec_ref(v___x_2886_);
v___x_2888_ = ((lean_object*)(l_Lean_addVersoDocStringCore___redArg___lam__3___closed__1));
v___x_2889_ = lean_string_append(v___x_2887_, v___x_2888_);
if (v_isShared_2883_ == 0)
{
lean_ctor_set_tag(v___x_2882_, 3);
lean_ctor_set(v___x_2882_, 0, v___x_2889_);
v___x_2891_ = v___x_2882_;
goto v_reusejp_2890_;
}
else
{
lean_object* v_reuseFailAlloc_2894_; 
v_reuseFailAlloc_2894_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2894_, 0, v___x_2889_);
v___x_2891_ = v_reuseFailAlloc_2894_;
goto v_reusejp_2890_;
}
v_reusejp_2890_:
{
lean_object* v___x_2892_; lean_object* v___x_2893_; 
v___x_2892_ = l_Lean_MessageData_ofFormat(v___x_2891_);
v___x_2893_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2___redArg(v___x_2892_, v___y_2819_, v___y_2820_, v___y_2821_, v___y_2822_, v___y_2823_, v___y_2824_);
return v___x_2893_;
}
}
else
{
lean_del_object(v___x_2882_);
v___y_2858_ = v___y_2822_;
v___y_2859_ = v___y_2824_;
goto v___jp_2857_;
}
}
}
}
else
{
lean_object* v___x_2897_; lean_object* v___x_2898_; 
lean_dec_ref(v_docs_2817_);
lean_dec(v_declName_2816_);
v___x_2897_ = lean_box(0);
v___x_2898_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2898_, 0, v___x_2897_);
return v___x_2898_;
}
v___jp_2826_:
{
lean_object* v___x_2837_; lean_object* v___x_2838_; lean_object* v___x_2839_; lean_object* v___x_2840_; lean_object* v_mctx_2841_; lean_object* v_zetaDeltaFVarIds_2842_; lean_object* v_postponed_2843_; lean_object* v_diag_2844_; lean_object* v___x_2846_; uint8_t v_isShared_2847_; uint8_t v_isSharedCheck_2855_; 
v___x_2837_ = lean_obj_once(&l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__2, &l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__2_once, _init_l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__2);
v___x_2838_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v___x_2838_, 0, v___y_2836_);
lean_ctor_set(v___x_2838_, 1, v___y_2831_);
lean_ctor_set(v___x_2838_, 2, v___y_2835_);
lean_ctor_set(v___x_2838_, 3, v___y_2833_);
lean_ctor_set(v___x_2838_, 4, v___y_2832_);
lean_ctor_set(v___x_2838_, 5, v___x_2837_);
lean_ctor_set(v___x_2838_, 6, v___y_2829_);
lean_ctor_set(v___x_2838_, 7, v___y_2828_);
lean_ctor_set(v___x_2838_, 8, v___y_2834_);
v___x_2839_ = lean_st_ref_put(v___y_2827_, v___x_2838_);
v___x_2840_ = lean_st_ref_take(v___y_2830_);
v_mctx_2841_ = lean_ctor_get(v___x_2840_, 0);
v_zetaDeltaFVarIds_2842_ = lean_ctor_get(v___x_2840_, 2);
v_postponed_2843_ = lean_ctor_get(v___x_2840_, 3);
v_diag_2844_ = lean_ctor_get(v___x_2840_, 4);
v_isSharedCheck_2855_ = !lean_is_exclusive(v___x_2840_);
if (v_isSharedCheck_2855_ == 0)
{
lean_object* v_unused_2856_; 
v_unused_2856_ = lean_ctor_get(v___x_2840_, 1);
lean_dec(v_unused_2856_);
v___x_2846_ = v___x_2840_;
v_isShared_2847_ = v_isSharedCheck_2855_;
goto v_resetjp_2845_;
}
else
{
lean_inc(v_diag_2844_);
lean_inc(v_postponed_2843_);
lean_inc(v_zetaDeltaFVarIds_2842_);
lean_inc(v_mctx_2841_);
lean_dec(v___x_2840_);
v___x_2846_ = lean_box(0);
v_isShared_2847_ = v_isSharedCheck_2855_;
goto v_resetjp_2845_;
}
v_resetjp_2845_:
{
lean_object* v___x_2848_; lean_object* v___x_2849_; lean_object* v___x_2851_; 
v___x_2848_ = lean_box(0);
v___x_2849_ = lean_obj_once(&l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__3, &l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__3_once, _init_l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__3);
if (v_isShared_2847_ == 0)
{
lean_ctor_set(v___x_2846_, 1, v___x_2849_);
v___x_2851_ = v___x_2846_;
goto v_reusejp_2850_;
}
else
{
lean_object* v_reuseFailAlloc_2854_; 
v_reuseFailAlloc_2854_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2854_, 0, v_mctx_2841_);
lean_ctor_set(v_reuseFailAlloc_2854_, 1, v___x_2849_);
lean_ctor_set(v_reuseFailAlloc_2854_, 2, v_zetaDeltaFVarIds_2842_);
lean_ctor_set(v_reuseFailAlloc_2854_, 3, v_postponed_2843_);
lean_ctor_set(v_reuseFailAlloc_2854_, 4, v_diag_2844_);
v___x_2851_ = v_reuseFailAlloc_2854_;
goto v_reusejp_2850_;
}
v_reusejp_2850_:
{
lean_object* v___x_2852_; lean_object* v___x_2853_; 
v___x_2852_ = lean_st_ref_put(v___y_2830_, v___x_2851_);
v___x_2853_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2853_, 0, v___x_2848_);
return v___x_2853_;
}
}
}
v___jp_2857_:
{
lean_object* v___x_2860_; lean_object* v_env_2861_; lean_object* v_nextMacroScope_2862_; lean_object* v_ngen_2863_; lean_object* v_auxDeclNGen_2864_; lean_object* v_traceState_2865_; lean_object* v_messages_2866_; lean_object* v_infoState_2867_; lean_object* v_snapshotTasks_2868_; lean_object* v___x_2869_; lean_object* v_env_2870_; lean_object* v___x_2871_; lean_object* v___x_2872_; uint8_t v___x_2873_; 
v___x_2860_ = lean_st_ref_take(v___y_2859_);
v_env_2861_ = lean_ctor_get(v___x_2860_, 0);
lean_inc_ref(v_env_2861_);
v_nextMacroScope_2862_ = lean_ctor_get(v___x_2860_, 1);
lean_inc(v_nextMacroScope_2862_);
v_ngen_2863_ = lean_ctor_get(v___x_2860_, 2);
lean_inc_ref(v_ngen_2863_);
v_auxDeclNGen_2864_ = lean_ctor_get(v___x_2860_, 3);
lean_inc_ref(v_auxDeclNGen_2864_);
v_traceState_2865_ = lean_ctor_get(v___x_2860_, 4);
lean_inc_ref(v_traceState_2865_);
v_messages_2866_ = lean_ctor_get(v___x_2860_, 6);
lean_inc_ref(v_messages_2866_);
v_infoState_2867_ = lean_ctor_get(v___x_2860_, 7);
lean_inc_ref(v_infoState_2867_);
v_snapshotTasks_2868_ = lean_ctor_get(v___x_2860_, 8);
lean_inc_ref(v_snapshotTasks_2868_);
lean_dec(v___x_2860_);
v___x_2869_ = l_Lean_versoDocStringExt;
lean_inc(v_declName_2816_);
v_env_2870_ = l_Lean_MapDeclarationExtension_insert___redArg(v___x_2869_, v_env_2861_, v_declName_2816_, v_docs_2817_);
v___x_2871_ = lean_unsigned_to_nat(0u);
v___x_2872_ = lean_array_get_size(v_deferred_2818_);
v___x_2873_ = lean_nat_dec_lt(v___x_2871_, v___x_2872_);
if (v___x_2873_ == 0)
{
lean_dec(v_declName_2816_);
v___y_2827_ = v___y_2859_;
v___y_2828_ = v_infoState_2867_;
v___y_2829_ = v_messages_2866_;
v___y_2830_ = v___y_2858_;
v___y_2831_ = v_nextMacroScope_2862_;
v___y_2832_ = v_traceState_2865_;
v___y_2833_ = v_auxDeclNGen_2864_;
v___y_2834_ = v_snapshotTasks_2868_;
v___y_2835_ = v_ngen_2863_;
v___y_2836_ = v_env_2870_;
goto v___jp_2826_;
}
else
{
size_t v___x_2874_; size_t v___x_2875_; lean_object* v___x_2876_; 
v___x_2874_ = ((size_t)0ULL);
v___x_2875_ = lean_usize_of_nat(v___x_2872_);
v___x_2876_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0_spec__0(v_declName_2816_, v_deferred_2818_, v___x_2874_, v___x_2875_, v_env_2870_);
v___y_2827_ = v___y_2859_;
v___y_2828_ = v_infoState_2867_;
v___y_2829_ = v_messages_2866_;
v___y_2830_ = v___y_2858_;
v___y_2831_ = v_nextMacroScope_2862_;
v___y_2832_ = v_traceState_2865_;
v___y_2833_ = v_auxDeclNGen_2864_;
v___y_2834_ = v_snapshotTasks_2868_;
v___y_2835_ = v_ngen_2863_;
v___y_2836_ = v___x_2876_;
goto v___jp_2826_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___boxed(lean_object* v_declName_2899_, lean_object* v_docs_2900_, lean_object* v_deferred_2901_, lean_object* v___y_2902_, lean_object* v___y_2903_, lean_object* v___y_2904_, lean_object* v___y_2905_, lean_object* v___y_2906_, lean_object* v___y_2907_, lean_object* v___y_2908_){
_start:
{
lean_object* v_res_2909_; 
v_res_2909_ = l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0(v_declName_2899_, v_docs_2900_, v_deferred_2901_, v___y_2902_, v___y_2903_, v___y_2904_, v___y_2905_, v___y_2906_, v___y_2907_);
lean_dec(v___y_2907_);
lean_dec_ref(v___y_2906_);
lean_dec(v___y_2905_);
lean_dec_ref(v___y_2904_);
lean_dec(v___y_2903_);
lean_dec_ref(v___y_2902_);
lean_dec_ref(v_deferred_2901_);
return v_res_2909_;
}
}
LEAN_EXPORT lean_object* l_Lean_addVersoDocString(lean_object* v_declName_2910_, lean_object* v_binders_2911_, lean_object* v_docComment_2912_, lean_object* v_a_2913_, lean_object* v_a_2914_, lean_object* v_a_2915_, lean_object* v_a_2916_, lean_object* v_a_2917_, lean_object* v_a_2918_){
_start:
{
lean_object* v___y_2921_; lean_object* v___y_2922_; lean_object* v___y_2923_; lean_object* v___y_2924_; lean_object* v___y_2925_; lean_object* v___y_2926_; lean_object* v___x_2940_; lean_object* v_env_2941_; lean_object* v___x_2942_; 
v___x_2940_ = lean_st_ref_get(v_a_2918_);
v_env_2941_ = lean_ctor_get(v___x_2940_, 0);
lean_inc_ref(v_env_2941_);
lean_dec(v___x_2940_);
v___x_2942_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_2941_, v_declName_2910_);
lean_dec_ref(v_env_2941_);
if (lean_obj_tag(v___x_2942_) == 0)
{
v___y_2921_ = v_a_2913_;
v___y_2922_ = v_a_2914_;
v___y_2923_ = v_a_2915_;
v___y_2924_ = v_a_2916_;
v___y_2925_ = v_a_2917_;
v___y_2926_ = v_a_2918_;
goto v___jp_2920_;
}
else
{
lean_object* v___x_2944_; uint8_t v_isShared_2945_; uint8_t v_isSharedCheck_2957_; 
lean_dec(v_docComment_2912_);
lean_dec(v_binders_2911_);
v_isSharedCheck_2957_ = !lean_is_exclusive(v___x_2942_);
if (v_isSharedCheck_2957_ == 0)
{
lean_object* v_unused_2958_; 
v_unused_2958_ = lean_ctor_get(v___x_2942_, 0);
lean_dec(v_unused_2958_);
v___x_2944_ = v___x_2942_;
v_isShared_2945_ = v_isSharedCheck_2957_;
goto v_resetjp_2943_;
}
else
{
lean_dec(v___x_2942_);
v___x_2944_ = lean_box(0);
v_isShared_2945_ = v_isSharedCheck_2957_;
goto v_resetjp_2943_;
}
v_resetjp_2943_:
{
lean_object* v___x_2946_; uint8_t v___x_2947_; lean_object* v___x_2948_; lean_object* v___x_2949_; lean_object* v___x_2950_; lean_object* v___x_2951_; lean_object* v___x_2953_; 
v___x_2946_ = ((lean_object*)(l_Lean_addVersoDocStringCore___redArg___lam__3___closed__0));
v___x_2947_ = 1;
v___x_2948_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_declName_2910_, v___x_2947_);
v___x_2949_ = lean_string_append(v___x_2946_, v___x_2948_);
lean_dec_ref(v___x_2948_);
v___x_2950_ = ((lean_object*)(l_Lean_addVersoDocStringCore___redArg___lam__3___closed__1));
v___x_2951_ = lean_string_append(v___x_2949_, v___x_2950_);
if (v_isShared_2945_ == 0)
{
lean_ctor_set_tag(v___x_2944_, 3);
lean_ctor_set(v___x_2944_, 0, v___x_2951_);
v___x_2953_ = v___x_2944_;
goto v_reusejp_2952_;
}
else
{
lean_object* v_reuseFailAlloc_2956_; 
v_reuseFailAlloc_2956_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2956_, 0, v___x_2951_);
v___x_2953_ = v_reuseFailAlloc_2956_;
goto v_reusejp_2952_;
}
v_reusejp_2952_:
{
lean_object* v___x_2954_; lean_object* v___x_2955_; 
v___x_2954_ = l_Lean_MessageData_ofFormat(v___x_2953_);
v___x_2955_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2___redArg(v___x_2954_, v_a_2913_, v_a_2914_, v_a_2915_, v_a_2916_, v_a_2917_, v_a_2918_);
return v___x_2955_;
}
}
}
v___jp_2920_:
{
lean_object* v___x_2927_; 
lean_inc(v_declName_2910_);
v___x_2927_ = l_Lean_versoDocString(v_declName_2910_, v_binders_2911_, v_docComment_2912_, v___y_2921_, v___y_2922_, v___y_2923_, v___y_2924_, v___y_2925_, v___y_2926_);
if (lean_obj_tag(v___x_2927_) == 0)
{
lean_object* v_a_2928_; lean_object* v_toVersoDocString_2929_; lean_object* v_deferredChecks_2930_; lean_object* v___x_2931_; 
v_a_2928_ = lean_ctor_get(v___x_2927_, 0);
lean_inc(v_a_2928_);
lean_dec_ref_known(v___x_2927_, 1);
v_toVersoDocString_2929_ = lean_ctor_get(v_a_2928_, 0);
lean_inc_ref(v_toVersoDocString_2929_);
v_deferredChecks_2930_ = lean_ctor_get(v_a_2928_, 1);
lean_inc_ref(v_deferredChecks_2930_);
lean_dec(v_a_2928_);
v___x_2931_ = l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0(v_declName_2910_, v_toVersoDocString_2929_, v_deferredChecks_2930_, v___y_2921_, v___y_2922_, v___y_2923_, v___y_2924_, v___y_2925_, v___y_2926_);
lean_dec_ref(v_deferredChecks_2930_);
return v___x_2931_;
}
else
{
lean_object* v_a_2932_; lean_object* v___x_2934_; uint8_t v_isShared_2935_; uint8_t v_isSharedCheck_2939_; 
lean_dec(v_declName_2910_);
v_a_2932_ = lean_ctor_get(v___x_2927_, 0);
v_isSharedCheck_2939_ = !lean_is_exclusive(v___x_2927_);
if (v_isSharedCheck_2939_ == 0)
{
v___x_2934_ = v___x_2927_;
v_isShared_2935_ = v_isSharedCheck_2939_;
goto v_resetjp_2933_;
}
else
{
lean_inc(v_a_2932_);
lean_dec(v___x_2927_);
v___x_2934_ = lean_box(0);
v_isShared_2935_ = v_isSharedCheck_2939_;
goto v_resetjp_2933_;
}
v_resetjp_2933_:
{
lean_object* v___x_2937_; 
if (v_isShared_2935_ == 0)
{
v___x_2937_ = v___x_2934_;
goto v_reusejp_2936_;
}
else
{
lean_object* v_reuseFailAlloc_2938_; 
v_reuseFailAlloc_2938_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2938_, 0, v_a_2932_);
v___x_2937_ = v_reuseFailAlloc_2938_;
goto v_reusejp_2936_;
}
v_reusejp_2936_:
{
return v___x_2937_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addVersoDocString___boxed(lean_object* v_declName_2959_, lean_object* v_binders_2960_, lean_object* v_docComment_2961_, lean_object* v_a_2962_, lean_object* v_a_2963_, lean_object* v_a_2964_, lean_object* v_a_2965_, lean_object* v_a_2966_, lean_object* v_a_2967_, lean_object* v_a_2968_){
_start:
{
lean_object* v_res_2969_; 
v_res_2969_ = l_Lean_addVersoDocString(v_declName_2959_, v_binders_2960_, v_docComment_2961_, v_a_2962_, v_a_2963_, v_a_2964_, v_a_2965_, v_a_2966_, v_a_2967_);
lean_dec(v_a_2967_);
lean_dec_ref(v_a_2966_);
lean_dec(v_a_2965_);
lean_dec_ref(v_a_2964_);
lean_dec(v_a_2963_);
lean_dec_ref(v_a_2962_);
return v_res_2969_;
}
}
LEAN_EXPORT lean_object* l_Lean_addVersoDocStringFromString(lean_object* v_declName_2970_, lean_object* v_docComment_2971_, lean_object* v_a_2972_, lean_object* v_a_2973_, lean_object* v_a_2974_, lean_object* v_a_2975_, lean_object* v_a_2976_, lean_object* v_a_2977_){
_start:
{
lean_object* v___y_2980_; lean_object* v___y_2981_; lean_object* v___y_2982_; lean_object* v___y_2983_; lean_object* v___y_2984_; lean_object* v___y_2985_; lean_object* v___x_2999_; lean_object* v_env_3000_; lean_object* v___x_3001_; 
v___x_2999_ = lean_st_ref_get(v_a_2977_);
v_env_3000_ = lean_ctor_get(v___x_2999_, 0);
lean_inc_ref(v_env_3000_);
lean_dec(v___x_2999_);
v___x_3001_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_3000_, v_declName_2970_);
lean_dec_ref(v_env_3000_);
if (lean_obj_tag(v___x_3001_) == 0)
{
v___y_2980_ = v_a_2972_;
v___y_2981_ = v_a_2973_;
v___y_2982_ = v_a_2974_;
v___y_2983_ = v_a_2975_;
v___y_2984_ = v_a_2976_;
v___y_2985_ = v_a_2977_;
goto v___jp_2979_;
}
else
{
lean_object* v___x_3003_; uint8_t v_isShared_3004_; uint8_t v_isSharedCheck_3016_; 
lean_dec_ref(v_docComment_2971_);
v_isSharedCheck_3016_ = !lean_is_exclusive(v___x_3001_);
if (v_isSharedCheck_3016_ == 0)
{
lean_object* v_unused_3017_; 
v_unused_3017_ = lean_ctor_get(v___x_3001_, 0);
lean_dec(v_unused_3017_);
v___x_3003_ = v___x_3001_;
v_isShared_3004_ = v_isSharedCheck_3016_;
goto v_resetjp_3002_;
}
else
{
lean_dec(v___x_3001_);
v___x_3003_ = lean_box(0);
v_isShared_3004_ = v_isSharedCheck_3016_;
goto v_resetjp_3002_;
}
v_resetjp_3002_:
{
lean_object* v___x_3005_; uint8_t v___x_3006_; lean_object* v___x_3007_; lean_object* v___x_3008_; lean_object* v___x_3009_; lean_object* v___x_3010_; lean_object* v___x_3012_; 
v___x_3005_ = ((lean_object*)(l_Lean_addVersoDocStringCore___redArg___lam__3___closed__0));
v___x_3006_ = 1;
v___x_3007_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_declName_2970_, v___x_3006_);
v___x_3008_ = lean_string_append(v___x_3005_, v___x_3007_);
lean_dec_ref(v___x_3007_);
v___x_3009_ = ((lean_object*)(l_Lean_addVersoDocStringCore___redArg___lam__3___closed__1));
v___x_3010_ = lean_string_append(v___x_3008_, v___x_3009_);
if (v_isShared_3004_ == 0)
{
lean_ctor_set_tag(v___x_3003_, 3);
lean_ctor_set(v___x_3003_, 0, v___x_3010_);
v___x_3012_ = v___x_3003_;
goto v_reusejp_3011_;
}
else
{
lean_object* v_reuseFailAlloc_3015_; 
v_reuseFailAlloc_3015_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3015_, 0, v___x_3010_);
v___x_3012_ = v_reuseFailAlloc_3015_;
goto v_reusejp_3011_;
}
v_reusejp_3011_:
{
lean_object* v___x_3013_; lean_object* v___x_3014_; 
v___x_3013_ = l_Lean_MessageData_ofFormat(v___x_3012_);
v___x_3014_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2___redArg(v___x_3013_, v_a_2972_, v_a_2973_, v_a_2974_, v_a_2975_, v_a_2976_, v_a_2977_);
return v___x_3014_;
}
}
}
v___jp_2979_:
{
lean_object* v___x_2986_; 
lean_inc(v_declName_2970_);
v___x_2986_ = l_Lean_versoDocStringFromString(v_declName_2970_, v_docComment_2971_, v___y_2980_, v___y_2981_, v___y_2982_, v___y_2983_, v___y_2984_, v___y_2985_);
if (lean_obj_tag(v___x_2986_) == 0)
{
lean_object* v_a_2987_; lean_object* v_toVersoDocString_2988_; lean_object* v_deferredChecks_2989_; lean_object* v___x_2990_; 
v_a_2987_ = lean_ctor_get(v___x_2986_, 0);
lean_inc(v_a_2987_);
lean_dec_ref_known(v___x_2986_, 1);
v_toVersoDocString_2988_ = lean_ctor_get(v_a_2987_, 0);
lean_inc_ref(v_toVersoDocString_2988_);
v_deferredChecks_2989_ = lean_ctor_get(v_a_2987_, 1);
lean_inc_ref(v_deferredChecks_2989_);
lean_dec(v_a_2987_);
v___x_2990_ = l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0(v_declName_2970_, v_toVersoDocString_2988_, v_deferredChecks_2989_, v___y_2980_, v___y_2981_, v___y_2982_, v___y_2983_, v___y_2984_, v___y_2985_);
lean_dec_ref(v_deferredChecks_2989_);
return v___x_2990_;
}
else
{
lean_object* v_a_2991_; lean_object* v___x_2993_; uint8_t v_isShared_2994_; uint8_t v_isSharedCheck_2998_; 
lean_dec(v_declName_2970_);
v_a_2991_ = lean_ctor_get(v___x_2986_, 0);
v_isSharedCheck_2998_ = !lean_is_exclusive(v___x_2986_);
if (v_isSharedCheck_2998_ == 0)
{
v___x_2993_ = v___x_2986_;
v_isShared_2994_ = v_isSharedCheck_2998_;
goto v_resetjp_2992_;
}
else
{
lean_inc(v_a_2991_);
lean_dec(v___x_2986_);
v___x_2993_ = lean_box(0);
v_isShared_2994_ = v_isSharedCheck_2998_;
goto v_resetjp_2992_;
}
v_resetjp_2992_:
{
lean_object* v___x_2996_; 
if (v_isShared_2994_ == 0)
{
v___x_2996_ = v___x_2993_;
goto v_reusejp_2995_;
}
else
{
lean_object* v_reuseFailAlloc_2997_; 
v_reuseFailAlloc_2997_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2997_, 0, v_a_2991_);
v___x_2996_ = v_reuseFailAlloc_2997_;
goto v_reusejp_2995_;
}
v_reusejp_2995_:
{
return v___x_2996_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addVersoDocStringFromString___boxed(lean_object* v_declName_3018_, lean_object* v_docComment_3019_, lean_object* v_a_3020_, lean_object* v_a_3021_, lean_object* v_a_3022_, lean_object* v_a_3023_, lean_object* v_a_3024_, lean_object* v_a_3025_, lean_object* v_a_3026_){
_start:
{
lean_object* v_res_3027_; 
v_res_3027_ = l_Lean_addVersoDocStringFromString(v_declName_3018_, v_docComment_3019_, v_a_3020_, v_a_3021_, v_a_3022_, v_a_3023_, v_a_3024_, v_a_3025_);
lean_dec(v_a_3025_);
lean_dec_ref(v_a_3024_);
lean_dec(v_a_3023_);
lean_dec_ref(v_a_3022_);
lean_dec(v_a_3021_);
lean_dec_ref(v_a_3020_);
return v_res_3027_;
}
}
LEAN_EXPORT lean_object* l_Lean_logErrorAt___at___00Lean_validateDocComment___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__0_spec__1___redArg(lean_object* v_ref_3028_, lean_object* v_msgData_3029_, lean_object* v___y_3030_, lean_object* v___y_3031_, lean_object* v___y_3032_, lean_object* v___y_3033_){
_start:
{
uint8_t v___x_3035_; uint8_t v___x_3036_; lean_object* v___x_3037_; 
v___x_3035_ = 2;
v___x_3036_ = 0;
v___x_3037_ = l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg(v_ref_3028_, v_msgData_3029_, v___x_3035_, v___x_3036_, v___y_3030_, v___y_3031_, v___y_3032_, v___y_3033_);
return v___x_3037_;
}
}
LEAN_EXPORT lean_object* l_Lean_logErrorAt___at___00Lean_validateDocComment___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_ref_3038_, lean_object* v_msgData_3039_, lean_object* v___y_3040_, lean_object* v___y_3041_, lean_object* v___y_3042_, lean_object* v___y_3043_, lean_object* v___y_3044_){
_start:
{
lean_object* v_res_3045_; 
v_res_3045_ = l_Lean_logErrorAt___at___00Lean_validateDocComment___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__0_spec__1___redArg(v_ref_3038_, v_msgData_3039_, v___y_3040_, v___y_3041_, v___y_3042_, v___y_3043_);
lean_dec(v___y_3043_);
lean_dec_ref(v___y_3042_);
lean_dec(v___y_3041_);
lean_dec_ref(v___y_3040_);
lean_dec(v_ref_3038_);
return v_res_3045_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_validateDocComment___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__0_spec__2(lean_object* v___y_3046_, lean_object* v_str_3047_, lean_object* v_as_3048_, size_t v_sz_3049_, size_t v_i_3050_, lean_object* v_b_3051_, lean_object* v___y_3052_, lean_object* v___y_3053_, lean_object* v___y_3054_, lean_object* v___y_3055_, lean_object* v___y_3056_, lean_object* v___y_3057_){
_start:
{
lean_object* v_a_3060_; uint8_t v___x_3064_; 
v___x_3064_ = lean_usize_dec_lt(v_i_3050_, v_sz_3049_);
if (v___x_3064_ == 0)
{
lean_object* v___x_3065_; 
v___x_3065_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3065_, 0, v_b_3051_);
return v___x_3065_;
}
else
{
lean_object* v_a_3066_; lean_object* v_fst_3067_; lean_object* v_snd_3068_; lean_object* v_start_3069_; lean_object* v_stop_3070_; lean_object* v___x_3072_; uint8_t v_isShared_3073_; uint8_t v_isSharedCheck_3090_; 
v_a_3066_ = lean_array_uget_borrowed(v_as_3048_, v_i_3050_);
v_fst_3067_ = lean_ctor_get(v_a_3066_, 0);
lean_inc(v_fst_3067_);
v_snd_3068_ = lean_ctor_get(v_a_3066_, 1);
v_start_3069_ = lean_ctor_get(v_fst_3067_, 0);
v_stop_3070_ = lean_ctor_get(v_fst_3067_, 1);
v_isSharedCheck_3090_ = !lean_is_exclusive(v_fst_3067_);
if (v_isSharedCheck_3090_ == 0)
{
v___x_3072_ = v_fst_3067_;
v_isShared_3073_ = v_isSharedCheck_3090_;
goto v_resetjp_3071_;
}
else
{
lean_inc(v_stop_3070_);
lean_inc(v_start_3069_);
lean_dec(v_fst_3067_);
v___x_3072_ = lean_box(0);
v_isShared_3073_ = v_isSharedCheck_3090_;
goto v_resetjp_3071_;
}
v_resetjp_3071_:
{
lean_object* v___x_3074_; 
v___x_3074_ = lean_box(0);
if (lean_obj_tag(v___y_3046_) == 1)
{
lean_object* v_val_3075_; lean_object* v___x_3076_; lean_object* v___x_3077_; uint8_t v___x_3078_; lean_object* v___x_3079_; lean_object* v___x_3080_; lean_object* v___x_3082_; 
v_val_3075_ = lean_ctor_get(v___y_3046_, 0);
v___x_3076_ = lean_nat_add(v_val_3075_, v_start_3069_);
v___x_3077_ = lean_nat_add(v_val_3075_, v_stop_3070_);
v___x_3078_ = 0;
v___x_3079_ = lean_alloc_ctor(1, 2, 1);
lean_ctor_set(v___x_3079_, 0, v___x_3076_);
lean_ctor_set(v___x_3079_, 1, v___x_3077_);
lean_ctor_set_uint8(v___x_3079_, sizeof(void*)*2, v___x_3078_);
v___x_3080_ = lean_string_utf8_extract(v_str_3047_, v_start_3069_, v_stop_3070_);
lean_dec(v_stop_3070_);
lean_dec(v_start_3069_);
if (v_isShared_3073_ == 0)
{
lean_ctor_set_tag(v___x_3072_, 2);
lean_ctor_set(v___x_3072_, 1, v___x_3080_);
lean_ctor_set(v___x_3072_, 0, v___x_3079_);
v___x_3082_ = v___x_3072_;
goto v_reusejp_3081_;
}
else
{
lean_object* v_reuseFailAlloc_3086_; 
v_reuseFailAlloc_3086_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3086_, 0, v___x_3079_);
lean_ctor_set(v_reuseFailAlloc_3086_, 1, v___x_3080_);
v___x_3082_ = v_reuseFailAlloc_3086_;
goto v_reusejp_3081_;
}
v_reusejp_3081_:
{
lean_object* v___x_3083_; lean_object* v___x_3084_; lean_object* v___x_3085_; 
lean_inc(v_snd_3068_);
v___x_3083_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3083_, 0, v_snd_3068_);
v___x_3084_ = l_Lean_MessageData_ofFormat(v___x_3083_);
v___x_3085_ = l_Lean_logErrorAt___at___00Lean_validateDocComment___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__0_spec__1___redArg(v___x_3082_, v___x_3084_, v___y_3054_, v___y_3055_, v___y_3056_, v___y_3057_);
lean_dec_ref(v___x_3082_);
if (lean_obj_tag(v___x_3085_) == 0)
{
lean_dec_ref_known(v___x_3085_, 1);
v_a_3060_ = v___x_3074_;
goto v___jp_3059_;
}
else
{
return v___x_3085_;
}
}
}
else
{
lean_object* v___x_3087_; lean_object* v___x_3088_; lean_object* v___x_3089_; 
lean_del_object(v___x_3072_);
lean_dec(v_stop_3070_);
lean_dec(v_start_3069_);
lean_inc(v_snd_3068_);
v___x_3087_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3087_, 0, v_snd_3068_);
v___x_3088_ = l_Lean_MessageData_ofFormat(v___x_3087_);
v___x_3089_ = l_Lean_logError___at___00Lean_versoDocStringOfText_spec__0(v___x_3088_, v___y_3052_, v___y_3053_, v___y_3054_, v___y_3055_, v___y_3056_, v___y_3057_);
if (lean_obj_tag(v___x_3089_) == 0)
{
lean_dec_ref_known(v___x_3089_, 1);
v_a_3060_ = v___x_3074_;
goto v___jp_3059_;
}
else
{
return v___x_3089_;
}
}
}
}
v___jp_3059_:
{
size_t v___x_3061_; size_t v___x_3062_; 
v___x_3061_ = ((size_t)1ULL);
v___x_3062_ = lean_usize_add(v_i_3050_, v___x_3061_);
v_i_3050_ = v___x_3062_;
v_b_3051_ = v_a_3060_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_validateDocComment___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__0_spec__2___boxed(lean_object* v___y_3091_, lean_object* v_str_3092_, lean_object* v_as_3093_, lean_object* v_sz_3094_, lean_object* v_i_3095_, lean_object* v_b_3096_, lean_object* v___y_3097_, lean_object* v___y_3098_, lean_object* v___y_3099_, lean_object* v___y_3100_, lean_object* v___y_3101_, lean_object* v___y_3102_, lean_object* v___y_3103_){
_start:
{
size_t v_sz_boxed_3104_; size_t v_i_boxed_3105_; lean_object* v_res_3106_; 
v_sz_boxed_3104_ = lean_unbox_usize(v_sz_3094_);
lean_dec(v_sz_3094_);
v_i_boxed_3105_ = lean_unbox_usize(v_i_3095_);
lean_dec(v_i_3095_);
v_res_3106_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_validateDocComment___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__0_spec__2(v___y_3091_, v_str_3092_, v_as_3093_, v_sz_boxed_3104_, v_i_boxed_3105_, v_b_3096_, v___y_3097_, v___y_3098_, v___y_3099_, v___y_3100_, v___y_3101_, v___y_3102_);
lean_dec(v___y_3102_);
lean_dec_ref(v___y_3101_);
lean_dec(v___y_3100_);
lean_dec_ref(v___y_3099_);
lean_dec(v___y_3098_);
lean_dec_ref(v___y_3097_);
lean_dec_ref(v_as_3093_);
lean_dec_ref(v_str_3092_);
lean_dec(v___y_3091_);
return v_res_3106_;
}
}
LEAN_EXPORT lean_object* l_Lean_validateDocComment___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__0(lean_object* v_docstring_3107_, lean_object* v___y_3108_, lean_object* v___y_3109_, lean_object* v___y_3110_, lean_object* v___y_3111_, lean_object* v___y_3112_, lean_object* v___y_3113_){
_start:
{
lean_object* v_str_3115_; lean_object* v___y_3117_; lean_object* v___x_3132_; lean_object* v___x_3133_; lean_object* v___x_3134_; 
v_str_3115_ = l_Lean_TSyntax_getDocString(v_docstring_3107_);
v___x_3132_ = lean_unsigned_to_nat(1u);
v___x_3133_ = l_Lean_Syntax_getArg(v_docstring_3107_, v___x_3132_);
v___x_3134_ = l_Lean_Syntax_getHeadInfo_x3f(v___x_3133_);
lean_dec(v___x_3133_);
if (lean_obj_tag(v___x_3134_) == 0)
{
lean_object* v___x_3135_; 
v___x_3135_ = lean_box(0);
v___y_3117_ = v___x_3135_;
goto v___jp_3116_;
}
else
{
lean_object* v_val_3136_; uint8_t v___x_3137_; lean_object* v___x_3138_; 
v_val_3136_ = lean_ctor_get(v___x_3134_, 0);
lean_inc(v_val_3136_);
lean_dec_ref_known(v___x_3134_, 1);
v___x_3137_ = 0;
v___x_3138_ = l_Lean_SourceInfo_getPos_x3f(v_val_3136_, v___x_3137_);
lean_dec(v_val_3136_);
v___y_3117_ = v___x_3138_;
goto v___jp_3116_;
}
v___jp_3116_:
{
lean_object* v___x_3118_; lean_object* v_fst_3119_; lean_object* v___x_3120_; size_t v_sz_3121_; size_t v___x_3122_; lean_object* v___x_3123_; 
lean_inc_ref(v_str_3115_);
v___x_3118_ = l_Lean_rewriteManualLinksCore(v_str_3115_);
v_fst_3119_ = lean_ctor_get(v___x_3118_, 0);
lean_inc(v_fst_3119_);
lean_dec_ref(v___x_3118_);
v___x_3120_ = lean_box(0);
v_sz_3121_ = lean_array_size(v_fst_3119_);
v___x_3122_ = ((size_t)0ULL);
v___x_3123_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_validateDocComment___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__0_spec__2(v___y_3117_, v_str_3115_, v_fst_3119_, v_sz_3121_, v___x_3122_, v___x_3120_, v___y_3108_, v___y_3109_, v___y_3110_, v___y_3111_, v___y_3112_, v___y_3113_);
lean_dec(v_fst_3119_);
lean_dec_ref(v_str_3115_);
lean_dec(v___y_3117_);
if (lean_obj_tag(v___x_3123_) == 0)
{
lean_object* v___x_3125_; uint8_t v_isShared_3126_; uint8_t v_isSharedCheck_3130_; 
v_isSharedCheck_3130_ = !lean_is_exclusive(v___x_3123_);
if (v_isSharedCheck_3130_ == 0)
{
lean_object* v_unused_3131_; 
v_unused_3131_ = lean_ctor_get(v___x_3123_, 0);
lean_dec(v_unused_3131_);
v___x_3125_ = v___x_3123_;
v_isShared_3126_ = v_isSharedCheck_3130_;
goto v_resetjp_3124_;
}
else
{
lean_dec(v___x_3123_);
v___x_3125_ = lean_box(0);
v_isShared_3126_ = v_isSharedCheck_3130_;
goto v_resetjp_3124_;
}
v_resetjp_3124_:
{
lean_object* v___x_3128_; 
if (v_isShared_3126_ == 0)
{
lean_ctor_set(v___x_3125_, 0, v___x_3120_);
v___x_3128_ = v___x_3125_;
goto v_reusejp_3127_;
}
else
{
lean_object* v_reuseFailAlloc_3129_; 
v_reuseFailAlloc_3129_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3129_, 0, v___x_3120_);
v___x_3128_ = v_reuseFailAlloc_3129_;
goto v_reusejp_3127_;
}
v_reusejp_3127_:
{
return v___x_3128_;
}
}
}
else
{
return v___x_3123_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_validateDocComment___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__0___boxed(lean_object* v_docstring_3139_, lean_object* v___y_3140_, lean_object* v___y_3141_, lean_object* v___y_3142_, lean_object* v___y_3143_, lean_object* v___y_3144_, lean_object* v___y_3145_, lean_object* v___y_3146_){
_start:
{
lean_object* v_res_3147_; 
v_res_3147_ = l_Lean_validateDocComment___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__0(v_docstring_3139_, v___y_3140_, v___y_3141_, v___y_3142_, v___y_3143_, v___y_3144_, v___y_3145_);
lean_dec(v___y_3145_);
lean_dec_ref(v___y_3144_);
lean_dec(v___y_3143_);
lean_dec_ref(v___y_3142_);
lean_dec(v___y_3141_);
lean_dec_ref(v___y_3140_);
lean_dec(v_docstring_3139_);
return v_res_3147_;
}
}
static lean_object* _init_l_Lean_getDocStringText___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__1___closed__1(void){
_start:
{
lean_object* v___x_3149_; lean_object* v___x_3150_; 
v___x_3149_ = ((lean_object*)(l_Lean_getDocStringText___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__1___closed__0));
v___x_3150_ = l_Lean_stringToMessageData(v___x_3149_);
return v___x_3150_;
}
}
LEAN_EXPORT lean_object* l_Lean_getDocStringText___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__1(lean_object* v_stx_3151_, lean_object* v___y_3152_, lean_object* v___y_3153_, lean_object* v___y_3154_, lean_object* v___y_3155_, lean_object* v___y_3156_, lean_object* v___y_3157_){
_start:
{
lean_object* v_val_3166_; lean_object* v___x_3173_; lean_object* v___x_3174_; 
v___x_3173_ = lean_unsigned_to_nat(1u);
v___x_3174_ = l_Lean_Syntax_getArg(v_stx_3151_, v___x_3173_);
switch(lean_obj_tag(v___x_3174_))
{
case 2:
{
lean_object* v_val_3175_; 
lean_dec(v_stx_3151_);
v_val_3175_ = lean_ctor_get(v___x_3174_, 1);
lean_inc_ref(v_val_3175_);
lean_dec_ref_known(v___x_3174_, 2);
v_val_3166_ = v_val_3175_;
goto v___jp_3165_;
}
case 1:
{
lean_object* v_kind_3176_; 
v_kind_3176_ = lean_ctor_get(v___x_3174_, 1);
lean_inc(v_kind_3176_);
if (lean_obj_tag(v_kind_3176_) == 1)
{
lean_object* v_pre_3177_; 
v_pre_3177_ = lean_ctor_get(v_kind_3176_, 0);
lean_inc(v_pre_3177_);
if (lean_obj_tag(v_pre_3177_) == 1)
{
lean_object* v_pre_3178_; 
v_pre_3178_ = lean_ctor_get(v_pre_3177_, 0);
lean_inc(v_pre_3178_);
if (lean_obj_tag(v_pre_3178_) == 1)
{
lean_object* v_pre_3179_; 
v_pre_3179_ = lean_ctor_get(v_pre_3178_, 0);
lean_inc(v_pre_3179_);
if (lean_obj_tag(v_pre_3179_) == 1)
{
lean_object* v_pre_3180_; 
v_pre_3180_ = lean_ctor_get(v_pre_3179_, 0);
if (lean_obj_tag(v_pre_3180_) == 0)
{
lean_object* v_str_3181_; lean_object* v_str_3182_; lean_object* v_str_3183_; lean_object* v_str_3184_; lean_object* v___x_3185_; uint8_t v___x_3186_; 
v_str_3181_ = lean_ctor_get(v_kind_3176_, 1);
lean_inc_ref(v_str_3181_);
lean_dec_ref_known(v_kind_3176_, 2);
v_str_3182_ = lean_ctor_get(v_pre_3177_, 1);
lean_inc_ref(v_str_3182_);
lean_dec_ref_known(v_pre_3177_, 2);
v_str_3183_ = lean_ctor_get(v_pre_3178_, 1);
lean_inc_ref(v_str_3183_);
lean_dec_ref_known(v_pre_3178_, 2);
v_str_3184_ = lean_ctor_get(v_pre_3179_, 1);
lean_inc_ref(v_str_3184_);
lean_dec_ref_known(v_pre_3179_, 2);
v___x_3185_ = ((lean_object*)(l_Lean_parseVersoDocString___redArg___closed__0));
v___x_3186_ = lean_string_dec_eq(v_str_3184_, v___x_3185_);
lean_dec_ref(v_str_3184_);
if (v___x_3186_ == 0)
{
lean_dec_ref(v_str_3183_);
lean_dec_ref(v_str_3182_);
lean_dec_ref(v_str_3181_);
lean_dec_ref_known(v___x_3174_, 3);
goto v___jp_3159_;
}
else
{
lean_object* v___x_3187_; uint8_t v___x_3188_; 
v___x_3187_ = ((lean_object*)(l_Lean_parseVersoDocString___redArg___closed__1));
v___x_3188_ = lean_string_dec_eq(v_str_3183_, v___x_3187_);
lean_dec_ref(v_str_3183_);
if (v___x_3188_ == 0)
{
lean_dec_ref(v_str_3182_);
lean_dec_ref(v_str_3181_);
lean_dec_ref_known(v___x_3174_, 3);
goto v___jp_3159_;
}
else
{
lean_object* v___x_3189_; uint8_t v___x_3190_; 
v___x_3189_ = ((lean_object*)(l_Lean_parseVersoDocString___redArg___closed__2));
v___x_3190_ = lean_string_dec_eq(v_str_3182_, v___x_3189_);
lean_dec_ref(v_str_3182_);
if (v___x_3190_ == 0)
{
lean_dec_ref(v_str_3181_);
lean_dec_ref_known(v___x_3174_, 3);
goto v___jp_3159_;
}
else
{
lean_object* v___x_3191_; uint8_t v___x_3192_; 
v___x_3191_ = ((lean_object*)(l_Lean_parseVersoDocString___redArg___closed__5));
v___x_3192_ = lean_string_dec_eq(v_str_3181_, v___x_3191_);
lean_dec_ref(v_str_3181_);
if (v___x_3192_ == 0)
{
lean_dec_ref_known(v___x_3174_, 3);
goto v___jp_3159_;
}
else
{
lean_object* v___x_3193_; lean_object* v___x_3194_; 
v___x_3193_ = lean_unsigned_to_nat(0u);
v___x_3194_ = l_Lean_Syntax_getArg(v___x_3174_, v___x_3193_);
lean_dec_ref_known(v___x_3174_, 3);
if (lean_obj_tag(v___x_3194_) == 2)
{
lean_object* v_val_3195_; 
lean_dec(v_stx_3151_);
v_val_3195_ = lean_ctor_get(v___x_3194_, 1);
lean_inc_ref(v_val_3195_);
lean_dec_ref_known(v___x_3194_, 2);
v_val_3166_ = v_val_3195_;
goto v___jp_3165_;
}
else
{
lean_object* v___x_3196_; lean_object* v___x_3197_; lean_object* v___x_3198_; lean_object* v___x_3199_; lean_object* v___x_3200_; 
lean_dec(v___x_3194_);
v___x_3196_ = lean_obj_once(&l_Lean_getDocStringText___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__1___closed__1, &l_Lean_getDocStringText___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__1___closed__1_once, _init_l_Lean_getDocStringText___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__1___closed__1);
lean_inc(v_stx_3151_);
v___x_3197_ = l_Lean_MessageData_ofSyntax(v_stx_3151_);
v___x_3198_ = l_Lean_indentD(v___x_3197_);
v___x_3199_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3199_, 0, v___x_3196_);
lean_ctor_set(v___x_3199_, 1, v___x_3198_);
v___x_3200_ = l_Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1___redArg(v_stx_3151_, v___x_3199_, v___y_3152_, v___y_3153_, v___y_3154_, v___y_3155_, v___y_3156_, v___y_3157_);
lean_dec(v_stx_3151_);
return v___x_3200_;
}
}
}
}
}
}
else
{
lean_dec_ref_known(v_pre_3179_, 2);
lean_dec_ref_known(v_pre_3178_, 2);
lean_dec_ref_known(v_pre_3177_, 2);
lean_dec_ref_known(v_kind_3176_, 2);
lean_dec_ref_known(v___x_3174_, 3);
goto v___jp_3159_;
}
}
else
{
lean_dec_ref_known(v_pre_3178_, 2);
lean_dec(v_pre_3179_);
lean_dec_ref_known(v_pre_3177_, 2);
lean_dec_ref_known(v_kind_3176_, 2);
lean_dec_ref_known(v___x_3174_, 3);
goto v___jp_3159_;
}
}
else
{
lean_dec_ref_known(v_pre_3177_, 2);
lean_dec(v_pre_3178_);
lean_dec_ref_known(v_kind_3176_, 2);
lean_dec_ref_known(v___x_3174_, 3);
goto v___jp_3159_;
}
}
else
{
lean_dec_ref_known(v_kind_3176_, 2);
lean_dec(v_pre_3177_);
lean_dec_ref_known(v___x_3174_, 3);
goto v___jp_3159_;
}
}
else
{
lean_dec(v_kind_3176_);
lean_dec_ref_known(v___x_3174_, 3);
goto v___jp_3159_;
}
}
default: 
{
lean_dec(v___x_3174_);
goto v___jp_3159_;
}
}
v___jp_3159_:
{
lean_object* v___x_3160_; lean_object* v___x_3161_; lean_object* v___x_3162_; lean_object* v___x_3163_; lean_object* v___x_3164_; 
v___x_3160_ = lean_obj_once(&l_Lean_getDocStringText___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__1___closed__1, &l_Lean_getDocStringText___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__1___closed__1_once, _init_l_Lean_getDocStringText___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__1___closed__1);
lean_inc(v_stx_3151_);
v___x_3161_ = l_Lean_MessageData_ofSyntax(v_stx_3151_);
v___x_3162_ = l_Lean_indentD(v___x_3161_);
v___x_3163_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3163_, 0, v___x_3160_);
lean_ctor_set(v___x_3163_, 1, v___x_3162_);
v___x_3164_ = l_Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1___redArg(v_stx_3151_, v___x_3163_, v___y_3152_, v___y_3153_, v___y_3154_, v___y_3155_, v___y_3156_, v___y_3157_);
lean_dec(v_stx_3151_);
return v___x_3164_;
}
v___jp_3165_:
{
lean_object* v___x_3167_; lean_object* v___x_3168_; lean_object* v___x_3169_; lean_object* v___x_3170_; lean_object* v___x_3171_; lean_object* v___x_3172_; 
v___x_3167_ = lean_unsigned_to_nat(0u);
v___x_3168_ = lean_string_utf8_byte_size(v_val_3166_);
v___x_3169_ = lean_unsigned_to_nat(2u);
v___x_3170_ = lean_nat_sub(v___x_3168_, v___x_3169_);
v___x_3171_ = lean_string_utf8_extract(v_val_3166_, v___x_3167_, v___x_3170_);
lean_dec(v___x_3170_);
lean_dec_ref(v_val_3166_);
v___x_3172_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3172_, 0, v___x_3171_);
return v___x_3172_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_getDocStringText___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__1___boxed(lean_object* v_stx_3201_, lean_object* v___y_3202_, lean_object* v___y_3203_, lean_object* v___y_3204_, lean_object* v___y_3205_, lean_object* v___y_3206_, lean_object* v___y_3207_, lean_object* v___y_3208_){
_start:
{
lean_object* v_res_3209_; 
v_res_3209_ = l_Lean_getDocStringText___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__1(v_stx_3201_, v___y_3202_, v___y_3203_, v___y_3204_, v___y_3205_, v___y_3206_, v___y_3207_);
lean_dec(v___y_3207_);
lean_dec_ref(v___y_3206_);
lean_dec(v___y_3205_);
lean_dec_ref(v___y_3204_);
lean_dec(v___y_3203_);
lean_dec_ref(v___y_3202_);
return v_res_3209_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0(lean_object* v_declName_3210_, lean_object* v_docComment_3211_, lean_object* v___y_3212_, lean_object* v___y_3213_, lean_object* v___y_3214_, lean_object* v___y_3215_, lean_object* v___y_3216_, lean_object* v___y_3217_){
_start:
{
lean_object* v___y_3220_; lean_object* v___y_3221_; lean_object* v___y_3222_; lean_object* v___y_3223_; lean_object* v___y_3224_; lean_object* v___y_3225_; uint8_t v___x_3282_; 
v___x_3282_ = l_Lean_Name_isAnonymous(v_declName_3210_);
if (v___x_3282_ == 0)
{
lean_object* v___x_3283_; lean_object* v_env_3284_; lean_object* v___x_3285_; 
v___x_3283_ = lean_st_ref_get(v___y_3217_);
v_env_3284_ = lean_ctor_get(v___x_3283_, 0);
lean_inc_ref(v_env_3284_);
lean_dec(v___x_3283_);
v___x_3285_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_3284_, v_declName_3210_);
lean_dec_ref(v_env_3284_);
if (lean_obj_tag(v___x_3285_) == 0)
{
v___y_3220_ = v___y_3212_;
v___y_3221_ = v___y_3213_;
v___y_3222_ = v___y_3214_;
v___y_3223_ = v___y_3215_;
v___y_3224_ = v___y_3216_;
v___y_3225_ = v___y_3217_;
goto v___jp_3219_;
}
else
{
lean_dec_ref_known(v___x_3285_, 1);
if (v___x_3282_ == 0)
{
lean_object* v___x_3286_; lean_object* v___x_3287_; lean_object* v___x_3288_; lean_object* v___x_3289_; lean_object* v___x_3290_; lean_object* v___x_3291_; 
lean_dec(v_docComment_3211_);
v___x_3286_ = lean_obj_once(&l_Lean_addMarkdownDocString___redArg___lam__5___closed__1, &l_Lean_addMarkdownDocString___redArg___lam__5___closed__1_once, _init_l_Lean_addMarkdownDocString___redArg___lam__5___closed__1);
v___x_3287_ = l_Lean_MessageData_ofConstName(v_declName_3210_, v___x_3282_);
v___x_3288_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3288_, 0, v___x_3286_);
lean_ctor_set(v___x_3288_, 1, v___x_3287_);
v___x_3289_ = lean_obj_once(&l_Lean_addMarkdownDocString___redArg___lam__5___closed__3, &l_Lean_addMarkdownDocString___redArg___lam__5___closed__3_once, _init_l_Lean_addMarkdownDocString___redArg___lam__5___closed__3);
v___x_3290_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3290_, 0, v___x_3288_);
lean_ctor_set(v___x_3290_, 1, v___x_3289_);
v___x_3291_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2___redArg(v___x_3290_, v___y_3212_, v___y_3213_, v___y_3214_, v___y_3215_, v___y_3216_, v___y_3217_);
return v___x_3291_;
}
else
{
v___y_3220_ = v___y_3212_;
v___y_3221_ = v___y_3213_;
v___y_3222_ = v___y_3214_;
v___y_3223_ = v___y_3215_;
v___y_3224_ = v___y_3216_;
v___y_3225_ = v___y_3217_;
goto v___jp_3219_;
}
}
}
else
{
lean_object* v___x_3292_; lean_object* v___x_3293_; 
lean_dec(v_docComment_3211_);
lean_dec(v_declName_3210_);
v___x_3292_ = lean_box(0);
v___x_3293_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3293_, 0, v___x_3292_);
return v___x_3293_;
}
v___jp_3219_:
{
lean_object* v___x_3226_; 
v___x_3226_ = l_Lean_validateDocComment___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__0(v_docComment_3211_, v___y_3220_, v___y_3221_, v___y_3222_, v___y_3223_, v___y_3224_, v___y_3225_);
if (lean_obj_tag(v___x_3226_) == 0)
{
lean_object* v___x_3227_; 
lean_dec_ref_known(v___x_3226_, 1);
v___x_3227_ = l_Lean_getDocStringText___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__1(v_docComment_3211_, v___y_3220_, v___y_3221_, v___y_3222_, v___y_3223_, v___y_3224_, v___y_3225_);
if (lean_obj_tag(v___x_3227_) == 0)
{
lean_object* v_a_3228_; lean_object* v___x_3230_; uint8_t v_isShared_3231_; uint8_t v_isSharedCheck_3273_; 
v_a_3228_ = lean_ctor_get(v___x_3227_, 0);
v_isSharedCheck_3273_ = !lean_is_exclusive(v___x_3227_);
if (v_isSharedCheck_3273_ == 0)
{
v___x_3230_ = v___x_3227_;
v_isShared_3231_ = v_isSharedCheck_3273_;
goto v_resetjp_3229_;
}
else
{
lean_inc(v_a_3228_);
lean_dec(v___x_3227_);
v___x_3230_ = lean_box(0);
v_isShared_3231_ = v_isSharedCheck_3273_;
goto v_resetjp_3229_;
}
v_resetjp_3229_:
{
lean_object* v___x_3232_; lean_object* v_env_3233_; lean_object* v_nextMacroScope_3234_; lean_object* v_ngen_3235_; lean_object* v_auxDeclNGen_3236_; lean_object* v_traceState_3237_; lean_object* v_messages_3238_; lean_object* v_infoState_3239_; lean_object* v_snapshotTasks_3240_; lean_object* v___x_3242_; uint8_t v_isShared_3243_; uint8_t v_isSharedCheck_3271_; 
v___x_3232_ = lean_st_ref_take(v___y_3225_);
v_env_3233_ = lean_ctor_get(v___x_3232_, 0);
v_nextMacroScope_3234_ = lean_ctor_get(v___x_3232_, 1);
v_ngen_3235_ = lean_ctor_get(v___x_3232_, 2);
v_auxDeclNGen_3236_ = lean_ctor_get(v___x_3232_, 3);
v_traceState_3237_ = lean_ctor_get(v___x_3232_, 4);
v_messages_3238_ = lean_ctor_get(v___x_3232_, 6);
v_infoState_3239_ = lean_ctor_get(v___x_3232_, 7);
v_snapshotTasks_3240_ = lean_ctor_get(v___x_3232_, 8);
v_isSharedCheck_3271_ = !lean_is_exclusive(v___x_3232_);
if (v_isSharedCheck_3271_ == 0)
{
lean_object* v_unused_3272_; 
v_unused_3272_ = lean_ctor_get(v___x_3232_, 5);
lean_dec(v_unused_3272_);
v___x_3242_ = v___x_3232_;
v_isShared_3243_ = v_isSharedCheck_3271_;
goto v_resetjp_3241_;
}
else
{
lean_inc(v_snapshotTasks_3240_);
lean_inc(v_infoState_3239_);
lean_inc(v_messages_3238_);
lean_inc(v_traceState_3237_);
lean_inc(v_auxDeclNGen_3236_);
lean_inc(v_ngen_3235_);
lean_inc(v_nextMacroScope_3234_);
lean_inc(v_env_3233_);
lean_dec(v___x_3232_);
v___x_3242_ = lean_box(0);
v_isShared_3243_ = v_isSharedCheck_3271_;
goto v_resetjp_3241_;
}
v_resetjp_3241_:
{
lean_object* v___x_3244_; lean_object* v___x_3245_; lean_object* v___x_3246_; lean_object* v___x_3247_; lean_object* v___x_3249_; 
v___x_3244_ = l_Lean_docStringExt;
v___x_3245_ = l_String_removeLeadingSpaces(v_a_3228_);
v___x_3246_ = l_Lean_MapDeclarationExtension_insert___redArg(v___x_3244_, v_env_3233_, v_declName_3210_, v___x_3245_);
v___x_3247_ = lean_obj_once(&l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__2, &l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__2_once, _init_l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__2);
if (v_isShared_3243_ == 0)
{
lean_ctor_set(v___x_3242_, 5, v___x_3247_);
lean_ctor_set(v___x_3242_, 0, v___x_3246_);
v___x_3249_ = v___x_3242_;
goto v_reusejp_3248_;
}
else
{
lean_object* v_reuseFailAlloc_3270_; 
v_reuseFailAlloc_3270_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_3270_, 0, v___x_3246_);
lean_ctor_set(v_reuseFailAlloc_3270_, 1, v_nextMacroScope_3234_);
lean_ctor_set(v_reuseFailAlloc_3270_, 2, v_ngen_3235_);
lean_ctor_set(v_reuseFailAlloc_3270_, 3, v_auxDeclNGen_3236_);
lean_ctor_set(v_reuseFailAlloc_3270_, 4, v_traceState_3237_);
lean_ctor_set(v_reuseFailAlloc_3270_, 5, v___x_3247_);
lean_ctor_set(v_reuseFailAlloc_3270_, 6, v_messages_3238_);
lean_ctor_set(v_reuseFailAlloc_3270_, 7, v_infoState_3239_);
lean_ctor_set(v_reuseFailAlloc_3270_, 8, v_snapshotTasks_3240_);
v___x_3249_ = v_reuseFailAlloc_3270_;
goto v_reusejp_3248_;
}
v_reusejp_3248_:
{
lean_object* v___x_3250_; lean_object* v___x_3251_; lean_object* v_mctx_3252_; lean_object* v_zetaDeltaFVarIds_3253_; lean_object* v_postponed_3254_; lean_object* v_diag_3255_; lean_object* v___x_3257_; uint8_t v_isShared_3258_; uint8_t v_isSharedCheck_3268_; 
v___x_3250_ = lean_st_ref_put(v___y_3225_, v___x_3249_);
v___x_3251_ = lean_st_ref_take(v___y_3223_);
v_mctx_3252_ = lean_ctor_get(v___x_3251_, 0);
v_zetaDeltaFVarIds_3253_ = lean_ctor_get(v___x_3251_, 2);
v_postponed_3254_ = lean_ctor_get(v___x_3251_, 3);
v_diag_3255_ = lean_ctor_get(v___x_3251_, 4);
v_isSharedCheck_3268_ = !lean_is_exclusive(v___x_3251_);
if (v_isSharedCheck_3268_ == 0)
{
lean_object* v_unused_3269_; 
v_unused_3269_ = lean_ctor_get(v___x_3251_, 1);
lean_dec(v_unused_3269_);
v___x_3257_ = v___x_3251_;
v_isShared_3258_ = v_isSharedCheck_3268_;
goto v_resetjp_3256_;
}
else
{
lean_inc(v_diag_3255_);
lean_inc(v_postponed_3254_);
lean_inc(v_zetaDeltaFVarIds_3253_);
lean_inc(v_mctx_3252_);
lean_dec(v___x_3251_);
v___x_3257_ = lean_box(0);
v_isShared_3258_ = v_isSharedCheck_3268_;
goto v_resetjp_3256_;
}
v_resetjp_3256_:
{
lean_object* v___x_3259_; lean_object* v___x_3260_; lean_object* v___x_3262_; 
v___x_3259_ = lean_box(0);
v___x_3260_ = lean_obj_once(&l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__3, &l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__3_once, _init_l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__3);
if (v_isShared_3258_ == 0)
{
lean_ctor_set(v___x_3257_, 1, v___x_3260_);
v___x_3262_ = v___x_3257_;
goto v_reusejp_3261_;
}
else
{
lean_object* v_reuseFailAlloc_3267_; 
v_reuseFailAlloc_3267_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3267_, 0, v_mctx_3252_);
lean_ctor_set(v_reuseFailAlloc_3267_, 1, v___x_3260_);
lean_ctor_set(v_reuseFailAlloc_3267_, 2, v_zetaDeltaFVarIds_3253_);
lean_ctor_set(v_reuseFailAlloc_3267_, 3, v_postponed_3254_);
lean_ctor_set(v_reuseFailAlloc_3267_, 4, v_diag_3255_);
v___x_3262_ = v_reuseFailAlloc_3267_;
goto v_reusejp_3261_;
}
v_reusejp_3261_:
{
lean_object* v___x_3263_; lean_object* v___x_3265_; 
v___x_3263_ = lean_st_ref_put(v___y_3223_, v___x_3262_);
if (v_isShared_3231_ == 0)
{
lean_ctor_set(v___x_3230_, 0, v___x_3259_);
v___x_3265_ = v___x_3230_;
goto v_reusejp_3264_;
}
else
{
lean_object* v_reuseFailAlloc_3266_; 
v_reuseFailAlloc_3266_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3266_, 0, v___x_3259_);
v___x_3265_ = v_reuseFailAlloc_3266_;
goto v_reusejp_3264_;
}
v_reusejp_3264_:
{
return v___x_3265_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_3274_; lean_object* v___x_3276_; uint8_t v_isShared_3277_; uint8_t v_isSharedCheck_3281_; 
lean_dec(v_declName_3210_);
v_a_3274_ = lean_ctor_get(v___x_3227_, 0);
v_isSharedCheck_3281_ = !lean_is_exclusive(v___x_3227_);
if (v_isSharedCheck_3281_ == 0)
{
v___x_3276_ = v___x_3227_;
v_isShared_3277_ = v_isSharedCheck_3281_;
goto v_resetjp_3275_;
}
else
{
lean_inc(v_a_3274_);
lean_dec(v___x_3227_);
v___x_3276_ = lean_box(0);
v_isShared_3277_ = v_isSharedCheck_3281_;
goto v_resetjp_3275_;
}
v_resetjp_3275_:
{
lean_object* v___x_3279_; 
if (v_isShared_3277_ == 0)
{
v___x_3279_ = v___x_3276_;
goto v_reusejp_3278_;
}
else
{
lean_object* v_reuseFailAlloc_3280_; 
v_reuseFailAlloc_3280_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3280_, 0, v_a_3274_);
v___x_3279_ = v_reuseFailAlloc_3280_;
goto v_reusejp_3278_;
}
v_reusejp_3278_:
{
return v___x_3279_;
}
}
}
}
else
{
lean_dec(v_docComment_3211_);
lean_dec(v_declName_3210_);
return v___x_3226_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0___boxed(lean_object* v_declName_3294_, lean_object* v_docComment_3295_, lean_object* v___y_3296_, lean_object* v___y_3297_, lean_object* v___y_3298_, lean_object* v___y_3299_, lean_object* v___y_3300_, lean_object* v___y_3301_, lean_object* v___y_3302_){
_start:
{
lean_object* v_res_3303_; 
v_res_3303_ = l_Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0(v_declName_3294_, v_docComment_3295_, v___y_3296_, v___y_3297_, v___y_3298_, v___y_3299_, v___y_3300_, v___y_3301_);
lean_dec(v___y_3301_);
lean_dec_ref(v___y_3300_);
lean_dec(v___y_3299_);
lean_dec_ref(v___y_3298_);
lean_dec(v___y_3297_);
lean_dec_ref(v___y_3296_);
return v_res_3303_;
}
}
LEAN_EXPORT lean_object* l_Lean_addDocStringOf(uint8_t v_isVerso_3304_, lean_object* v_declName_3305_, lean_object* v_binders_3306_, lean_object* v_docComment_3307_, lean_object* v_a_3308_, lean_object* v_a_3309_, lean_object* v_a_3310_, lean_object* v_a_3311_, lean_object* v_a_3312_, lean_object* v_a_3313_){
_start:
{
if (v_isVerso_3304_ == 0)
{
lean_object* v___x_3315_; 
lean_dec(v_binders_3306_);
v___x_3315_ = l_Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0(v_declName_3305_, v_docComment_3307_, v_a_3308_, v_a_3309_, v_a_3310_, v_a_3311_, v_a_3312_, v_a_3313_);
return v___x_3315_;
}
else
{
lean_object* v___x_3316_; 
v___x_3316_ = l_Lean_addVersoDocString(v_declName_3305_, v_binders_3306_, v_docComment_3307_, v_a_3308_, v_a_3309_, v_a_3310_, v_a_3311_, v_a_3312_, v_a_3313_);
return v___x_3316_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_addDocStringOf___boxed(lean_object* v_isVerso_3317_, lean_object* v_declName_3318_, lean_object* v_binders_3319_, lean_object* v_docComment_3320_, lean_object* v_a_3321_, lean_object* v_a_3322_, lean_object* v_a_3323_, lean_object* v_a_3324_, lean_object* v_a_3325_, lean_object* v_a_3326_, lean_object* v_a_3327_){
_start:
{
uint8_t v_isVerso_boxed_3328_; lean_object* v_res_3329_; 
v_isVerso_boxed_3328_ = lean_unbox(v_isVerso_3317_);
v_res_3329_ = l_Lean_addDocStringOf(v_isVerso_boxed_3328_, v_declName_3318_, v_binders_3319_, v_docComment_3320_, v_a_3321_, v_a_3322_, v_a_3323_, v_a_3324_, v_a_3325_, v_a_3326_);
lean_dec(v_a_3326_);
lean_dec_ref(v_a_3325_);
lean_dec(v_a_3324_);
lean_dec_ref(v_a_3323_);
lean_dec(v_a_3322_);
lean_dec_ref(v_a_3321_);
return v_res_3329_;
}
}
LEAN_EXPORT lean_object* l_Lean_logErrorAt___at___00Lean_validateDocComment___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__0_spec__1(lean_object* v_ref_3330_, lean_object* v_msgData_3331_, lean_object* v___y_3332_, lean_object* v___y_3333_, lean_object* v___y_3334_, lean_object* v___y_3335_, lean_object* v___y_3336_, lean_object* v___y_3337_){
_start:
{
lean_object* v___x_3339_; 
v___x_3339_ = l_Lean_logErrorAt___at___00Lean_validateDocComment___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__0_spec__1___redArg(v_ref_3330_, v_msgData_3331_, v___y_3334_, v___y_3335_, v___y_3336_, v___y_3337_);
return v___x_3339_;
}
}
LEAN_EXPORT lean_object* l_Lean_logErrorAt___at___00Lean_validateDocComment___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__0_spec__1___boxed(lean_object* v_ref_3340_, lean_object* v_msgData_3341_, lean_object* v___y_3342_, lean_object* v___y_3343_, lean_object* v___y_3344_, lean_object* v___y_3345_, lean_object* v___y_3346_, lean_object* v___y_3347_, lean_object* v___y_3348_){
_start:
{
lean_object* v_res_3349_; 
v_res_3349_ = l_Lean_logErrorAt___at___00Lean_validateDocComment___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__0_spec__1(v_ref_3340_, v_msgData_3341_, v___y_3342_, v___y_3343_, v___y_3344_, v___y_3345_, v___y_3346_, v___y_3347_);
lean_dec(v___y_3347_);
lean_dec_ref(v___y_3346_);
lean_dec(v___y_3345_);
lean_dec_ref(v___y_3344_);
lean_dec(v___y_3343_);
lean_dec_ref(v___y_3342_);
lean_dec(v_ref_3340_);
return v_res_3349_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0_spec__0___redArg(lean_object* v_k_3350_, lean_object* v_t_3351_){
_start:
{
if (lean_obj_tag(v_t_3351_) == 0)
{
lean_object* v_k_3352_; lean_object* v_v_3353_; lean_object* v_l_3354_; lean_object* v_r_3355_; lean_object* v___x_3357_; uint8_t v_isShared_3358_; uint8_t v_isSharedCheck_4009_; 
v_k_3352_ = lean_ctor_get(v_t_3351_, 1);
v_v_3353_ = lean_ctor_get(v_t_3351_, 2);
v_l_3354_ = lean_ctor_get(v_t_3351_, 3);
v_r_3355_ = lean_ctor_get(v_t_3351_, 4);
v_isSharedCheck_4009_ = !lean_is_exclusive(v_t_3351_);
if (v_isSharedCheck_4009_ == 0)
{
lean_object* v_unused_4010_; 
v_unused_4010_ = lean_ctor_get(v_t_3351_, 0);
lean_dec(v_unused_4010_);
v___x_3357_ = v_t_3351_;
v_isShared_3358_ = v_isSharedCheck_4009_;
goto v_resetjp_3356_;
}
else
{
lean_inc(v_r_3355_);
lean_inc(v_l_3354_);
lean_inc(v_v_3353_);
lean_inc(v_k_3352_);
lean_dec(v_t_3351_);
v___x_3357_ = lean_box(0);
v_isShared_3358_ = v_isSharedCheck_4009_;
goto v_resetjp_3356_;
}
v_resetjp_3356_:
{
uint8_t v___x_3359_; 
v___x_3359_ = l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(v_k_3350_, v_k_3352_);
switch(v___x_3359_)
{
case 0:
{
lean_object* v_impl_3360_; lean_object* v___x_3361_; 
v_impl_3360_ = l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0_spec__0___redArg(v_k_3350_, v_l_3354_);
v___x_3361_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_impl_3360_) == 0)
{
if (lean_obj_tag(v_r_3355_) == 0)
{
lean_object* v_size_3362_; lean_object* v_size_3363_; lean_object* v_k_3364_; lean_object* v_v_3365_; lean_object* v_l_3366_; lean_object* v_r_3367_; lean_object* v___x_3368_; lean_object* v___x_3369_; uint8_t v___x_3370_; 
v_size_3362_ = lean_ctor_get(v_impl_3360_, 0);
lean_inc(v_size_3362_);
v_size_3363_ = lean_ctor_get(v_r_3355_, 0);
v_k_3364_ = lean_ctor_get(v_r_3355_, 1);
v_v_3365_ = lean_ctor_get(v_r_3355_, 2);
v_l_3366_ = lean_ctor_get(v_r_3355_, 3);
lean_inc(v_l_3366_);
v_r_3367_ = lean_ctor_get(v_r_3355_, 4);
v___x_3368_ = lean_unsigned_to_nat(3u);
v___x_3369_ = lean_nat_mul(v___x_3368_, v_size_3362_);
v___x_3370_ = lean_nat_dec_lt(v___x_3369_, v_size_3363_);
lean_dec(v___x_3369_);
if (v___x_3370_ == 0)
{
lean_object* v___x_3371_; lean_object* v___x_3372_; lean_object* v___x_3374_; 
lean_dec(v_l_3366_);
v___x_3371_ = lean_nat_add(v___x_3361_, v_size_3362_);
lean_dec(v_size_3362_);
v___x_3372_ = lean_nat_add(v___x_3371_, v_size_3363_);
lean_dec(v___x_3371_);
if (v_isShared_3358_ == 0)
{
lean_ctor_set(v___x_3357_, 3, v_impl_3360_);
lean_ctor_set(v___x_3357_, 0, v___x_3372_);
v___x_3374_ = v___x_3357_;
goto v_reusejp_3373_;
}
else
{
lean_object* v_reuseFailAlloc_3375_; 
v_reuseFailAlloc_3375_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3375_, 0, v___x_3372_);
lean_ctor_set(v_reuseFailAlloc_3375_, 1, v_k_3352_);
lean_ctor_set(v_reuseFailAlloc_3375_, 2, v_v_3353_);
lean_ctor_set(v_reuseFailAlloc_3375_, 3, v_impl_3360_);
lean_ctor_set(v_reuseFailAlloc_3375_, 4, v_r_3355_);
v___x_3374_ = v_reuseFailAlloc_3375_;
goto v_reusejp_3373_;
}
v_reusejp_3373_:
{
return v___x_3374_;
}
}
else
{
lean_object* v___x_3377_; uint8_t v_isShared_3378_; uint8_t v_isSharedCheck_3439_; 
lean_inc(v_r_3367_);
lean_inc(v_v_3365_);
lean_inc(v_k_3364_);
lean_inc(v_size_3363_);
v_isSharedCheck_3439_ = !lean_is_exclusive(v_r_3355_);
if (v_isSharedCheck_3439_ == 0)
{
lean_object* v_unused_3440_; lean_object* v_unused_3441_; lean_object* v_unused_3442_; lean_object* v_unused_3443_; lean_object* v_unused_3444_; 
v_unused_3440_ = lean_ctor_get(v_r_3355_, 4);
lean_dec(v_unused_3440_);
v_unused_3441_ = lean_ctor_get(v_r_3355_, 3);
lean_dec(v_unused_3441_);
v_unused_3442_ = lean_ctor_get(v_r_3355_, 2);
lean_dec(v_unused_3442_);
v_unused_3443_ = lean_ctor_get(v_r_3355_, 1);
lean_dec(v_unused_3443_);
v_unused_3444_ = lean_ctor_get(v_r_3355_, 0);
lean_dec(v_unused_3444_);
v___x_3377_ = v_r_3355_;
v_isShared_3378_ = v_isSharedCheck_3439_;
goto v_resetjp_3376_;
}
else
{
lean_dec(v_r_3355_);
v___x_3377_ = lean_box(0);
v_isShared_3378_ = v_isSharedCheck_3439_;
goto v_resetjp_3376_;
}
v_resetjp_3376_:
{
lean_object* v_size_3379_; lean_object* v_k_3380_; lean_object* v_v_3381_; lean_object* v_l_3382_; lean_object* v_r_3383_; lean_object* v_size_3384_; lean_object* v___x_3385_; lean_object* v___x_3386_; uint8_t v___x_3387_; 
v_size_3379_ = lean_ctor_get(v_l_3366_, 0);
v_k_3380_ = lean_ctor_get(v_l_3366_, 1);
v_v_3381_ = lean_ctor_get(v_l_3366_, 2);
v_l_3382_ = lean_ctor_get(v_l_3366_, 3);
v_r_3383_ = lean_ctor_get(v_l_3366_, 4);
v_size_3384_ = lean_ctor_get(v_r_3367_, 0);
v___x_3385_ = lean_unsigned_to_nat(2u);
v___x_3386_ = lean_nat_mul(v___x_3385_, v_size_3384_);
v___x_3387_ = lean_nat_dec_lt(v_size_3379_, v___x_3386_);
lean_dec(v___x_3386_);
if (v___x_3387_ == 0)
{
lean_object* v___x_3389_; uint8_t v_isShared_3390_; uint8_t v_isSharedCheck_3415_; 
lean_inc(v_r_3383_);
lean_inc(v_l_3382_);
lean_inc(v_v_3381_);
lean_inc(v_k_3380_);
v_isSharedCheck_3415_ = !lean_is_exclusive(v_l_3366_);
if (v_isSharedCheck_3415_ == 0)
{
lean_object* v_unused_3416_; lean_object* v_unused_3417_; lean_object* v_unused_3418_; lean_object* v_unused_3419_; lean_object* v_unused_3420_; 
v_unused_3416_ = lean_ctor_get(v_l_3366_, 4);
lean_dec(v_unused_3416_);
v_unused_3417_ = lean_ctor_get(v_l_3366_, 3);
lean_dec(v_unused_3417_);
v_unused_3418_ = lean_ctor_get(v_l_3366_, 2);
lean_dec(v_unused_3418_);
v_unused_3419_ = lean_ctor_get(v_l_3366_, 1);
lean_dec(v_unused_3419_);
v_unused_3420_ = lean_ctor_get(v_l_3366_, 0);
lean_dec(v_unused_3420_);
v___x_3389_ = v_l_3366_;
v_isShared_3390_ = v_isSharedCheck_3415_;
goto v_resetjp_3388_;
}
else
{
lean_dec(v_l_3366_);
v___x_3389_ = lean_box(0);
v_isShared_3390_ = v_isSharedCheck_3415_;
goto v_resetjp_3388_;
}
v_resetjp_3388_:
{
lean_object* v___x_3391_; lean_object* v___x_3392_; lean_object* v___y_3394_; lean_object* v___y_3395_; lean_object* v___y_3396_; lean_object* v___y_3405_; 
v___x_3391_ = lean_nat_add(v___x_3361_, v_size_3362_);
lean_dec(v_size_3362_);
v___x_3392_ = lean_nat_add(v___x_3391_, v_size_3363_);
lean_dec(v_size_3363_);
if (lean_obj_tag(v_l_3382_) == 0)
{
lean_object* v_size_3413_; 
v_size_3413_ = lean_ctor_get(v_l_3382_, 0);
lean_inc(v_size_3413_);
v___y_3405_ = v_size_3413_;
goto v___jp_3404_;
}
else
{
lean_object* v___x_3414_; 
v___x_3414_ = lean_unsigned_to_nat(0u);
v___y_3405_ = v___x_3414_;
goto v___jp_3404_;
}
v___jp_3393_:
{
lean_object* v___x_3397_; lean_object* v___x_3399_; 
v___x_3397_ = lean_nat_add(v___y_3395_, v___y_3396_);
lean_dec(v___y_3396_);
lean_dec(v___y_3395_);
if (v_isShared_3390_ == 0)
{
lean_ctor_set(v___x_3389_, 4, v_r_3367_);
lean_ctor_set(v___x_3389_, 3, v_r_3383_);
lean_ctor_set(v___x_3389_, 2, v_v_3365_);
lean_ctor_set(v___x_3389_, 1, v_k_3364_);
lean_ctor_set(v___x_3389_, 0, v___x_3397_);
v___x_3399_ = v___x_3389_;
goto v_reusejp_3398_;
}
else
{
lean_object* v_reuseFailAlloc_3403_; 
v_reuseFailAlloc_3403_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3403_, 0, v___x_3397_);
lean_ctor_set(v_reuseFailAlloc_3403_, 1, v_k_3364_);
lean_ctor_set(v_reuseFailAlloc_3403_, 2, v_v_3365_);
lean_ctor_set(v_reuseFailAlloc_3403_, 3, v_r_3383_);
lean_ctor_set(v_reuseFailAlloc_3403_, 4, v_r_3367_);
v___x_3399_ = v_reuseFailAlloc_3403_;
goto v_reusejp_3398_;
}
v_reusejp_3398_:
{
lean_object* v___x_3401_; 
if (v_isShared_3378_ == 0)
{
lean_ctor_set(v___x_3377_, 4, v___x_3399_);
lean_ctor_set(v___x_3377_, 3, v___y_3394_);
lean_ctor_set(v___x_3377_, 2, v_v_3381_);
lean_ctor_set(v___x_3377_, 1, v_k_3380_);
lean_ctor_set(v___x_3377_, 0, v___x_3392_);
v___x_3401_ = v___x_3377_;
goto v_reusejp_3400_;
}
else
{
lean_object* v_reuseFailAlloc_3402_; 
v_reuseFailAlloc_3402_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3402_, 0, v___x_3392_);
lean_ctor_set(v_reuseFailAlloc_3402_, 1, v_k_3380_);
lean_ctor_set(v_reuseFailAlloc_3402_, 2, v_v_3381_);
lean_ctor_set(v_reuseFailAlloc_3402_, 3, v___y_3394_);
lean_ctor_set(v_reuseFailAlloc_3402_, 4, v___x_3399_);
v___x_3401_ = v_reuseFailAlloc_3402_;
goto v_reusejp_3400_;
}
v_reusejp_3400_:
{
return v___x_3401_;
}
}
}
v___jp_3404_:
{
lean_object* v___x_3406_; lean_object* v___x_3408_; 
v___x_3406_ = lean_nat_add(v___x_3391_, v___y_3405_);
lean_dec(v___y_3405_);
lean_dec(v___x_3391_);
if (v_isShared_3358_ == 0)
{
lean_ctor_set(v___x_3357_, 4, v_l_3382_);
lean_ctor_set(v___x_3357_, 3, v_impl_3360_);
lean_ctor_set(v___x_3357_, 0, v___x_3406_);
v___x_3408_ = v___x_3357_;
goto v_reusejp_3407_;
}
else
{
lean_object* v_reuseFailAlloc_3412_; 
v_reuseFailAlloc_3412_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3412_, 0, v___x_3406_);
lean_ctor_set(v_reuseFailAlloc_3412_, 1, v_k_3352_);
lean_ctor_set(v_reuseFailAlloc_3412_, 2, v_v_3353_);
lean_ctor_set(v_reuseFailAlloc_3412_, 3, v_impl_3360_);
lean_ctor_set(v_reuseFailAlloc_3412_, 4, v_l_3382_);
v___x_3408_ = v_reuseFailAlloc_3412_;
goto v_reusejp_3407_;
}
v_reusejp_3407_:
{
lean_object* v___x_3409_; 
v___x_3409_ = lean_nat_add(v___x_3361_, v_size_3384_);
if (lean_obj_tag(v_r_3383_) == 0)
{
lean_object* v_size_3410_; 
v_size_3410_ = lean_ctor_get(v_r_3383_, 0);
lean_inc(v_size_3410_);
v___y_3394_ = v___x_3408_;
v___y_3395_ = v___x_3409_;
v___y_3396_ = v_size_3410_;
goto v___jp_3393_;
}
else
{
lean_object* v___x_3411_; 
v___x_3411_ = lean_unsigned_to_nat(0u);
v___y_3394_ = v___x_3408_;
v___y_3395_ = v___x_3409_;
v___y_3396_ = v___x_3411_;
goto v___jp_3393_;
}
}
}
}
}
else
{
lean_object* v___x_3421_; lean_object* v___x_3422_; lean_object* v___x_3423_; lean_object* v___x_3425_; 
lean_del_object(v___x_3357_);
v___x_3421_ = lean_nat_add(v___x_3361_, v_size_3362_);
lean_dec(v_size_3362_);
v___x_3422_ = lean_nat_add(v___x_3421_, v_size_3363_);
lean_dec(v_size_3363_);
v___x_3423_ = lean_nat_add(v___x_3421_, v_size_3379_);
lean_dec(v___x_3421_);
lean_inc_ref(v_impl_3360_);
if (v_isShared_3378_ == 0)
{
lean_ctor_set(v___x_3377_, 4, v_l_3366_);
lean_ctor_set(v___x_3377_, 3, v_impl_3360_);
lean_ctor_set(v___x_3377_, 2, v_v_3353_);
lean_ctor_set(v___x_3377_, 1, v_k_3352_);
lean_ctor_set(v___x_3377_, 0, v___x_3423_);
v___x_3425_ = v___x_3377_;
goto v_reusejp_3424_;
}
else
{
lean_object* v_reuseFailAlloc_3438_; 
v_reuseFailAlloc_3438_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3438_, 0, v___x_3423_);
lean_ctor_set(v_reuseFailAlloc_3438_, 1, v_k_3352_);
lean_ctor_set(v_reuseFailAlloc_3438_, 2, v_v_3353_);
lean_ctor_set(v_reuseFailAlloc_3438_, 3, v_impl_3360_);
lean_ctor_set(v_reuseFailAlloc_3438_, 4, v_l_3366_);
v___x_3425_ = v_reuseFailAlloc_3438_;
goto v_reusejp_3424_;
}
v_reusejp_3424_:
{
lean_object* v___x_3427_; uint8_t v_isShared_3428_; uint8_t v_isSharedCheck_3432_; 
v_isSharedCheck_3432_ = !lean_is_exclusive(v_impl_3360_);
if (v_isSharedCheck_3432_ == 0)
{
lean_object* v_unused_3433_; lean_object* v_unused_3434_; lean_object* v_unused_3435_; lean_object* v_unused_3436_; lean_object* v_unused_3437_; 
v_unused_3433_ = lean_ctor_get(v_impl_3360_, 4);
lean_dec(v_unused_3433_);
v_unused_3434_ = lean_ctor_get(v_impl_3360_, 3);
lean_dec(v_unused_3434_);
v_unused_3435_ = lean_ctor_get(v_impl_3360_, 2);
lean_dec(v_unused_3435_);
v_unused_3436_ = lean_ctor_get(v_impl_3360_, 1);
lean_dec(v_unused_3436_);
v_unused_3437_ = lean_ctor_get(v_impl_3360_, 0);
lean_dec(v_unused_3437_);
v___x_3427_ = v_impl_3360_;
v_isShared_3428_ = v_isSharedCheck_3432_;
goto v_resetjp_3426_;
}
else
{
lean_dec(v_impl_3360_);
v___x_3427_ = lean_box(0);
v_isShared_3428_ = v_isSharedCheck_3432_;
goto v_resetjp_3426_;
}
v_resetjp_3426_:
{
lean_object* v___x_3430_; 
if (v_isShared_3428_ == 0)
{
lean_ctor_set(v___x_3427_, 4, v_r_3367_);
lean_ctor_set(v___x_3427_, 3, v___x_3425_);
lean_ctor_set(v___x_3427_, 2, v_v_3365_);
lean_ctor_set(v___x_3427_, 1, v_k_3364_);
lean_ctor_set(v___x_3427_, 0, v___x_3422_);
v___x_3430_ = v___x_3427_;
goto v_reusejp_3429_;
}
else
{
lean_object* v_reuseFailAlloc_3431_; 
v_reuseFailAlloc_3431_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3431_, 0, v___x_3422_);
lean_ctor_set(v_reuseFailAlloc_3431_, 1, v_k_3364_);
lean_ctor_set(v_reuseFailAlloc_3431_, 2, v_v_3365_);
lean_ctor_set(v_reuseFailAlloc_3431_, 3, v___x_3425_);
lean_ctor_set(v_reuseFailAlloc_3431_, 4, v_r_3367_);
v___x_3430_ = v_reuseFailAlloc_3431_;
goto v_reusejp_3429_;
}
v_reusejp_3429_:
{
return v___x_3430_;
}
}
}
}
}
}
}
else
{
lean_object* v_size_3445_; lean_object* v___x_3446_; lean_object* v___x_3448_; 
v_size_3445_ = lean_ctor_get(v_impl_3360_, 0);
lean_inc(v_size_3445_);
v___x_3446_ = lean_nat_add(v___x_3361_, v_size_3445_);
lean_dec(v_size_3445_);
if (v_isShared_3358_ == 0)
{
lean_ctor_set(v___x_3357_, 3, v_impl_3360_);
lean_ctor_set(v___x_3357_, 0, v___x_3446_);
v___x_3448_ = v___x_3357_;
goto v_reusejp_3447_;
}
else
{
lean_object* v_reuseFailAlloc_3449_; 
v_reuseFailAlloc_3449_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3449_, 0, v___x_3446_);
lean_ctor_set(v_reuseFailAlloc_3449_, 1, v_k_3352_);
lean_ctor_set(v_reuseFailAlloc_3449_, 2, v_v_3353_);
lean_ctor_set(v_reuseFailAlloc_3449_, 3, v_impl_3360_);
lean_ctor_set(v_reuseFailAlloc_3449_, 4, v_r_3355_);
v___x_3448_ = v_reuseFailAlloc_3449_;
goto v_reusejp_3447_;
}
v_reusejp_3447_:
{
return v___x_3448_;
}
}
}
else
{
if (lean_obj_tag(v_r_3355_) == 0)
{
lean_object* v_l_3450_; 
v_l_3450_ = lean_ctor_get(v_r_3355_, 3);
lean_inc(v_l_3450_);
if (lean_obj_tag(v_l_3450_) == 0)
{
lean_object* v_r_3451_; 
v_r_3451_ = lean_ctor_get(v_r_3355_, 4);
lean_inc(v_r_3451_);
if (lean_obj_tag(v_r_3451_) == 0)
{
lean_object* v_size_3452_; lean_object* v_k_3453_; lean_object* v_v_3454_; lean_object* v___x_3456_; uint8_t v_isShared_3457_; uint8_t v_isSharedCheck_3467_; 
v_size_3452_ = lean_ctor_get(v_r_3355_, 0);
v_k_3453_ = lean_ctor_get(v_r_3355_, 1);
v_v_3454_ = lean_ctor_get(v_r_3355_, 2);
v_isSharedCheck_3467_ = !lean_is_exclusive(v_r_3355_);
if (v_isSharedCheck_3467_ == 0)
{
lean_object* v_unused_3468_; lean_object* v_unused_3469_; 
v_unused_3468_ = lean_ctor_get(v_r_3355_, 4);
lean_dec(v_unused_3468_);
v_unused_3469_ = lean_ctor_get(v_r_3355_, 3);
lean_dec(v_unused_3469_);
v___x_3456_ = v_r_3355_;
v_isShared_3457_ = v_isSharedCheck_3467_;
goto v_resetjp_3455_;
}
else
{
lean_inc(v_v_3454_);
lean_inc(v_k_3453_);
lean_inc(v_size_3452_);
lean_dec(v_r_3355_);
v___x_3456_ = lean_box(0);
v_isShared_3457_ = v_isSharedCheck_3467_;
goto v_resetjp_3455_;
}
v_resetjp_3455_:
{
lean_object* v_size_3458_; lean_object* v___x_3459_; lean_object* v___x_3460_; lean_object* v___x_3462_; 
v_size_3458_ = lean_ctor_get(v_l_3450_, 0);
v___x_3459_ = lean_nat_add(v___x_3361_, v_size_3452_);
lean_dec(v_size_3452_);
v___x_3460_ = lean_nat_add(v___x_3361_, v_size_3458_);
if (v_isShared_3457_ == 0)
{
lean_ctor_set(v___x_3456_, 4, v_l_3450_);
lean_ctor_set(v___x_3456_, 3, v_impl_3360_);
lean_ctor_set(v___x_3456_, 2, v_v_3353_);
lean_ctor_set(v___x_3456_, 1, v_k_3352_);
lean_ctor_set(v___x_3456_, 0, v___x_3460_);
v___x_3462_ = v___x_3456_;
goto v_reusejp_3461_;
}
else
{
lean_object* v_reuseFailAlloc_3466_; 
v_reuseFailAlloc_3466_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3466_, 0, v___x_3460_);
lean_ctor_set(v_reuseFailAlloc_3466_, 1, v_k_3352_);
lean_ctor_set(v_reuseFailAlloc_3466_, 2, v_v_3353_);
lean_ctor_set(v_reuseFailAlloc_3466_, 3, v_impl_3360_);
lean_ctor_set(v_reuseFailAlloc_3466_, 4, v_l_3450_);
v___x_3462_ = v_reuseFailAlloc_3466_;
goto v_reusejp_3461_;
}
v_reusejp_3461_:
{
lean_object* v___x_3464_; 
if (v_isShared_3358_ == 0)
{
lean_ctor_set(v___x_3357_, 4, v_r_3451_);
lean_ctor_set(v___x_3357_, 3, v___x_3462_);
lean_ctor_set(v___x_3357_, 2, v_v_3454_);
lean_ctor_set(v___x_3357_, 1, v_k_3453_);
lean_ctor_set(v___x_3357_, 0, v___x_3459_);
v___x_3464_ = v___x_3357_;
goto v_reusejp_3463_;
}
else
{
lean_object* v_reuseFailAlloc_3465_; 
v_reuseFailAlloc_3465_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3465_, 0, v___x_3459_);
lean_ctor_set(v_reuseFailAlloc_3465_, 1, v_k_3453_);
lean_ctor_set(v_reuseFailAlloc_3465_, 2, v_v_3454_);
lean_ctor_set(v_reuseFailAlloc_3465_, 3, v___x_3462_);
lean_ctor_set(v_reuseFailAlloc_3465_, 4, v_r_3451_);
v___x_3464_ = v_reuseFailAlloc_3465_;
goto v_reusejp_3463_;
}
v_reusejp_3463_:
{
return v___x_3464_;
}
}
}
}
else
{
lean_object* v_k_3470_; lean_object* v_v_3471_; lean_object* v___x_3473_; uint8_t v_isShared_3474_; uint8_t v_isSharedCheck_3494_; 
v_k_3470_ = lean_ctor_get(v_r_3355_, 1);
v_v_3471_ = lean_ctor_get(v_r_3355_, 2);
v_isSharedCheck_3494_ = !lean_is_exclusive(v_r_3355_);
if (v_isSharedCheck_3494_ == 0)
{
lean_object* v_unused_3495_; lean_object* v_unused_3496_; lean_object* v_unused_3497_; 
v_unused_3495_ = lean_ctor_get(v_r_3355_, 4);
lean_dec(v_unused_3495_);
v_unused_3496_ = lean_ctor_get(v_r_3355_, 3);
lean_dec(v_unused_3496_);
v_unused_3497_ = lean_ctor_get(v_r_3355_, 0);
lean_dec(v_unused_3497_);
v___x_3473_ = v_r_3355_;
v_isShared_3474_ = v_isSharedCheck_3494_;
goto v_resetjp_3472_;
}
else
{
lean_inc(v_v_3471_);
lean_inc(v_k_3470_);
lean_dec(v_r_3355_);
v___x_3473_ = lean_box(0);
v_isShared_3474_ = v_isSharedCheck_3494_;
goto v_resetjp_3472_;
}
v_resetjp_3472_:
{
lean_object* v_k_3475_; lean_object* v_v_3476_; lean_object* v___x_3478_; uint8_t v_isShared_3479_; uint8_t v_isSharedCheck_3490_; 
v_k_3475_ = lean_ctor_get(v_l_3450_, 1);
v_v_3476_ = lean_ctor_get(v_l_3450_, 2);
v_isSharedCheck_3490_ = !lean_is_exclusive(v_l_3450_);
if (v_isSharedCheck_3490_ == 0)
{
lean_object* v_unused_3491_; lean_object* v_unused_3492_; lean_object* v_unused_3493_; 
v_unused_3491_ = lean_ctor_get(v_l_3450_, 4);
lean_dec(v_unused_3491_);
v_unused_3492_ = lean_ctor_get(v_l_3450_, 3);
lean_dec(v_unused_3492_);
v_unused_3493_ = lean_ctor_get(v_l_3450_, 0);
lean_dec(v_unused_3493_);
v___x_3478_ = v_l_3450_;
v_isShared_3479_ = v_isSharedCheck_3490_;
goto v_resetjp_3477_;
}
else
{
lean_inc(v_v_3476_);
lean_inc(v_k_3475_);
lean_dec(v_l_3450_);
v___x_3478_ = lean_box(0);
v_isShared_3479_ = v_isSharedCheck_3490_;
goto v_resetjp_3477_;
}
v_resetjp_3477_:
{
lean_object* v___x_3480_; lean_object* v___x_3482_; 
v___x_3480_ = lean_unsigned_to_nat(3u);
if (v_isShared_3479_ == 0)
{
lean_ctor_set(v___x_3478_, 4, v_r_3451_);
lean_ctor_set(v___x_3478_, 3, v_r_3451_);
lean_ctor_set(v___x_3478_, 2, v_v_3353_);
lean_ctor_set(v___x_3478_, 1, v_k_3352_);
lean_ctor_set(v___x_3478_, 0, v___x_3361_);
v___x_3482_ = v___x_3478_;
goto v_reusejp_3481_;
}
else
{
lean_object* v_reuseFailAlloc_3489_; 
v_reuseFailAlloc_3489_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3489_, 0, v___x_3361_);
lean_ctor_set(v_reuseFailAlloc_3489_, 1, v_k_3352_);
lean_ctor_set(v_reuseFailAlloc_3489_, 2, v_v_3353_);
lean_ctor_set(v_reuseFailAlloc_3489_, 3, v_r_3451_);
lean_ctor_set(v_reuseFailAlloc_3489_, 4, v_r_3451_);
v___x_3482_ = v_reuseFailAlloc_3489_;
goto v_reusejp_3481_;
}
v_reusejp_3481_:
{
lean_object* v___x_3484_; 
if (v_isShared_3474_ == 0)
{
lean_ctor_set(v___x_3473_, 3, v_r_3451_);
lean_ctor_set(v___x_3473_, 0, v___x_3361_);
v___x_3484_ = v___x_3473_;
goto v_reusejp_3483_;
}
else
{
lean_object* v_reuseFailAlloc_3488_; 
v_reuseFailAlloc_3488_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3488_, 0, v___x_3361_);
lean_ctor_set(v_reuseFailAlloc_3488_, 1, v_k_3470_);
lean_ctor_set(v_reuseFailAlloc_3488_, 2, v_v_3471_);
lean_ctor_set(v_reuseFailAlloc_3488_, 3, v_r_3451_);
lean_ctor_set(v_reuseFailAlloc_3488_, 4, v_r_3451_);
v___x_3484_ = v_reuseFailAlloc_3488_;
goto v_reusejp_3483_;
}
v_reusejp_3483_:
{
lean_object* v___x_3486_; 
if (v_isShared_3358_ == 0)
{
lean_ctor_set(v___x_3357_, 4, v___x_3484_);
lean_ctor_set(v___x_3357_, 3, v___x_3482_);
lean_ctor_set(v___x_3357_, 2, v_v_3476_);
lean_ctor_set(v___x_3357_, 1, v_k_3475_);
lean_ctor_set(v___x_3357_, 0, v___x_3480_);
v___x_3486_ = v___x_3357_;
goto v_reusejp_3485_;
}
else
{
lean_object* v_reuseFailAlloc_3487_; 
v_reuseFailAlloc_3487_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3487_, 0, v___x_3480_);
lean_ctor_set(v_reuseFailAlloc_3487_, 1, v_k_3475_);
lean_ctor_set(v_reuseFailAlloc_3487_, 2, v_v_3476_);
lean_ctor_set(v_reuseFailAlloc_3487_, 3, v___x_3482_);
lean_ctor_set(v_reuseFailAlloc_3487_, 4, v___x_3484_);
v___x_3486_ = v_reuseFailAlloc_3487_;
goto v_reusejp_3485_;
}
v_reusejp_3485_:
{
return v___x_3486_;
}
}
}
}
}
}
}
else
{
lean_object* v_r_3498_; 
v_r_3498_ = lean_ctor_get(v_r_3355_, 4);
lean_inc(v_r_3498_);
if (lean_obj_tag(v_r_3498_) == 0)
{
lean_object* v_k_3499_; lean_object* v_v_3500_; lean_object* v___x_3502_; uint8_t v_isShared_3503_; uint8_t v_isSharedCheck_3511_; 
v_k_3499_ = lean_ctor_get(v_r_3355_, 1);
v_v_3500_ = lean_ctor_get(v_r_3355_, 2);
v_isSharedCheck_3511_ = !lean_is_exclusive(v_r_3355_);
if (v_isSharedCheck_3511_ == 0)
{
lean_object* v_unused_3512_; lean_object* v_unused_3513_; lean_object* v_unused_3514_; 
v_unused_3512_ = lean_ctor_get(v_r_3355_, 4);
lean_dec(v_unused_3512_);
v_unused_3513_ = lean_ctor_get(v_r_3355_, 3);
lean_dec(v_unused_3513_);
v_unused_3514_ = lean_ctor_get(v_r_3355_, 0);
lean_dec(v_unused_3514_);
v___x_3502_ = v_r_3355_;
v_isShared_3503_ = v_isSharedCheck_3511_;
goto v_resetjp_3501_;
}
else
{
lean_inc(v_v_3500_);
lean_inc(v_k_3499_);
lean_dec(v_r_3355_);
v___x_3502_ = lean_box(0);
v_isShared_3503_ = v_isSharedCheck_3511_;
goto v_resetjp_3501_;
}
v_resetjp_3501_:
{
lean_object* v___x_3504_; lean_object* v___x_3506_; 
v___x_3504_ = lean_unsigned_to_nat(3u);
if (v_isShared_3503_ == 0)
{
lean_ctor_set(v___x_3502_, 4, v_l_3450_);
lean_ctor_set(v___x_3502_, 2, v_v_3353_);
lean_ctor_set(v___x_3502_, 1, v_k_3352_);
lean_ctor_set(v___x_3502_, 0, v___x_3361_);
v___x_3506_ = v___x_3502_;
goto v_reusejp_3505_;
}
else
{
lean_object* v_reuseFailAlloc_3510_; 
v_reuseFailAlloc_3510_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3510_, 0, v___x_3361_);
lean_ctor_set(v_reuseFailAlloc_3510_, 1, v_k_3352_);
lean_ctor_set(v_reuseFailAlloc_3510_, 2, v_v_3353_);
lean_ctor_set(v_reuseFailAlloc_3510_, 3, v_l_3450_);
lean_ctor_set(v_reuseFailAlloc_3510_, 4, v_l_3450_);
v___x_3506_ = v_reuseFailAlloc_3510_;
goto v_reusejp_3505_;
}
v_reusejp_3505_:
{
lean_object* v___x_3508_; 
if (v_isShared_3358_ == 0)
{
lean_ctor_set(v___x_3357_, 4, v_r_3498_);
lean_ctor_set(v___x_3357_, 3, v___x_3506_);
lean_ctor_set(v___x_3357_, 2, v_v_3500_);
lean_ctor_set(v___x_3357_, 1, v_k_3499_);
lean_ctor_set(v___x_3357_, 0, v___x_3504_);
v___x_3508_ = v___x_3357_;
goto v_reusejp_3507_;
}
else
{
lean_object* v_reuseFailAlloc_3509_; 
v_reuseFailAlloc_3509_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3509_, 0, v___x_3504_);
lean_ctor_set(v_reuseFailAlloc_3509_, 1, v_k_3499_);
lean_ctor_set(v_reuseFailAlloc_3509_, 2, v_v_3500_);
lean_ctor_set(v_reuseFailAlloc_3509_, 3, v___x_3506_);
lean_ctor_set(v_reuseFailAlloc_3509_, 4, v_r_3498_);
v___x_3508_ = v_reuseFailAlloc_3509_;
goto v_reusejp_3507_;
}
v_reusejp_3507_:
{
return v___x_3508_;
}
}
}
}
else
{
lean_object* v_size_3515_; lean_object* v_k_3516_; lean_object* v_v_3517_; lean_object* v___x_3519_; uint8_t v_isShared_3520_; uint8_t v_isSharedCheck_3528_; 
v_size_3515_ = lean_ctor_get(v_r_3355_, 0);
v_k_3516_ = lean_ctor_get(v_r_3355_, 1);
v_v_3517_ = lean_ctor_get(v_r_3355_, 2);
v_isSharedCheck_3528_ = !lean_is_exclusive(v_r_3355_);
if (v_isSharedCheck_3528_ == 0)
{
lean_object* v_unused_3529_; lean_object* v_unused_3530_; 
v_unused_3529_ = lean_ctor_get(v_r_3355_, 4);
lean_dec(v_unused_3529_);
v_unused_3530_ = lean_ctor_get(v_r_3355_, 3);
lean_dec(v_unused_3530_);
v___x_3519_ = v_r_3355_;
v_isShared_3520_ = v_isSharedCheck_3528_;
goto v_resetjp_3518_;
}
else
{
lean_inc(v_v_3517_);
lean_inc(v_k_3516_);
lean_inc(v_size_3515_);
lean_dec(v_r_3355_);
v___x_3519_ = lean_box(0);
v_isShared_3520_ = v_isSharedCheck_3528_;
goto v_resetjp_3518_;
}
v_resetjp_3518_:
{
lean_object* v___x_3522_; 
if (v_isShared_3520_ == 0)
{
lean_ctor_set(v___x_3519_, 3, v_r_3498_);
v___x_3522_ = v___x_3519_;
goto v_reusejp_3521_;
}
else
{
lean_object* v_reuseFailAlloc_3527_; 
v_reuseFailAlloc_3527_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3527_, 0, v_size_3515_);
lean_ctor_set(v_reuseFailAlloc_3527_, 1, v_k_3516_);
lean_ctor_set(v_reuseFailAlloc_3527_, 2, v_v_3517_);
lean_ctor_set(v_reuseFailAlloc_3527_, 3, v_r_3498_);
lean_ctor_set(v_reuseFailAlloc_3527_, 4, v_r_3498_);
v___x_3522_ = v_reuseFailAlloc_3527_;
goto v_reusejp_3521_;
}
v_reusejp_3521_:
{
lean_object* v___x_3523_; lean_object* v___x_3525_; 
v___x_3523_ = lean_unsigned_to_nat(2u);
if (v_isShared_3358_ == 0)
{
lean_ctor_set(v___x_3357_, 4, v___x_3522_);
lean_ctor_set(v___x_3357_, 3, v_r_3498_);
lean_ctor_set(v___x_3357_, 0, v___x_3523_);
v___x_3525_ = v___x_3357_;
goto v_reusejp_3524_;
}
else
{
lean_object* v_reuseFailAlloc_3526_; 
v_reuseFailAlloc_3526_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3526_, 0, v___x_3523_);
lean_ctor_set(v_reuseFailAlloc_3526_, 1, v_k_3352_);
lean_ctor_set(v_reuseFailAlloc_3526_, 2, v_v_3353_);
lean_ctor_set(v_reuseFailAlloc_3526_, 3, v_r_3498_);
lean_ctor_set(v_reuseFailAlloc_3526_, 4, v___x_3522_);
v___x_3525_ = v_reuseFailAlloc_3526_;
goto v_reusejp_3524_;
}
v_reusejp_3524_:
{
return v___x_3525_;
}
}
}
}
}
}
else
{
lean_object* v___x_3532_; 
if (v_isShared_3358_ == 0)
{
lean_ctor_set(v___x_3357_, 3, v_r_3355_);
lean_ctor_set(v___x_3357_, 0, v___x_3361_);
v___x_3532_ = v___x_3357_;
goto v_reusejp_3531_;
}
else
{
lean_object* v_reuseFailAlloc_3533_; 
v_reuseFailAlloc_3533_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3533_, 0, v___x_3361_);
lean_ctor_set(v_reuseFailAlloc_3533_, 1, v_k_3352_);
lean_ctor_set(v_reuseFailAlloc_3533_, 2, v_v_3353_);
lean_ctor_set(v_reuseFailAlloc_3533_, 3, v_r_3355_);
lean_ctor_set(v_reuseFailAlloc_3533_, 4, v_r_3355_);
v___x_3532_ = v_reuseFailAlloc_3533_;
goto v_reusejp_3531_;
}
v_reusejp_3531_:
{
return v___x_3532_;
}
}
}
}
case 1:
{
lean_del_object(v___x_3357_);
lean_dec(v_v_3353_);
lean_dec(v_k_3352_);
if (lean_obj_tag(v_l_3354_) == 0)
{
if (lean_obj_tag(v_r_3355_) == 0)
{
lean_object* v_size_3534_; lean_object* v_k_3535_; lean_object* v_v_3536_; lean_object* v_l_3537_; lean_object* v_r_3538_; lean_object* v_size_3539_; lean_object* v_k_3540_; lean_object* v_v_3541_; lean_object* v_l_3542_; lean_object* v_r_3543_; lean_object* v___x_3544_; uint8_t v___x_3545_; 
v_size_3534_ = lean_ctor_get(v_l_3354_, 0);
v_k_3535_ = lean_ctor_get(v_l_3354_, 1);
v_v_3536_ = lean_ctor_get(v_l_3354_, 2);
v_l_3537_ = lean_ctor_get(v_l_3354_, 3);
v_r_3538_ = lean_ctor_get(v_l_3354_, 4);
lean_inc(v_r_3538_);
v_size_3539_ = lean_ctor_get(v_r_3355_, 0);
v_k_3540_ = lean_ctor_get(v_r_3355_, 1);
v_v_3541_ = lean_ctor_get(v_r_3355_, 2);
v_l_3542_ = lean_ctor_get(v_r_3355_, 3);
lean_inc(v_l_3542_);
v_r_3543_ = lean_ctor_get(v_r_3355_, 4);
v___x_3544_ = lean_unsigned_to_nat(1u);
v___x_3545_ = lean_nat_dec_lt(v_size_3534_, v_size_3539_);
if (v___x_3545_ == 0)
{
lean_object* v___x_3547_; uint8_t v_isShared_3548_; uint8_t v_isSharedCheck_3681_; 
lean_inc(v_l_3537_);
lean_inc(v_v_3536_);
lean_inc(v_k_3535_);
v_isSharedCheck_3681_ = !lean_is_exclusive(v_l_3354_);
if (v_isSharedCheck_3681_ == 0)
{
lean_object* v_unused_3682_; lean_object* v_unused_3683_; lean_object* v_unused_3684_; lean_object* v_unused_3685_; lean_object* v_unused_3686_; 
v_unused_3682_ = lean_ctor_get(v_l_3354_, 4);
lean_dec(v_unused_3682_);
v_unused_3683_ = lean_ctor_get(v_l_3354_, 3);
lean_dec(v_unused_3683_);
v_unused_3684_ = lean_ctor_get(v_l_3354_, 2);
lean_dec(v_unused_3684_);
v_unused_3685_ = lean_ctor_get(v_l_3354_, 1);
lean_dec(v_unused_3685_);
v_unused_3686_ = lean_ctor_get(v_l_3354_, 0);
lean_dec(v_unused_3686_);
v___x_3547_ = v_l_3354_;
v_isShared_3548_ = v_isSharedCheck_3681_;
goto v_resetjp_3546_;
}
else
{
lean_dec(v_l_3354_);
v___x_3547_ = lean_box(0);
v_isShared_3548_ = v_isSharedCheck_3681_;
goto v_resetjp_3546_;
}
v_resetjp_3546_:
{
lean_object* v___x_3549_; lean_object* v_tree_3550_; 
v___x_3549_ = l_Std_DTreeMap_Internal_Impl_maxView___redArg(v_k_3535_, v_v_3536_, v_l_3537_, v_r_3538_);
v_tree_3550_ = lean_ctor_get(v___x_3549_, 2);
lean_inc(v_tree_3550_);
if (lean_obj_tag(v_tree_3550_) == 0)
{
lean_object* v_k_3551_; lean_object* v_v_3552_; lean_object* v_size_3553_; lean_object* v___x_3554_; lean_object* v___x_3555_; uint8_t v___x_3556_; 
v_k_3551_ = lean_ctor_get(v___x_3549_, 0);
lean_inc(v_k_3551_);
v_v_3552_ = lean_ctor_get(v___x_3549_, 1);
lean_inc(v_v_3552_);
lean_dec_ref(v___x_3549_);
v_size_3553_ = lean_ctor_get(v_tree_3550_, 0);
v___x_3554_ = lean_unsigned_to_nat(3u);
v___x_3555_ = lean_nat_mul(v___x_3554_, v_size_3553_);
v___x_3556_ = lean_nat_dec_lt(v___x_3555_, v_size_3539_);
lean_dec(v___x_3555_);
if (v___x_3556_ == 0)
{
lean_object* v___x_3557_; lean_object* v___x_3558_; lean_object* v___x_3560_; 
lean_dec(v_l_3542_);
v___x_3557_ = lean_nat_add(v___x_3544_, v_size_3553_);
v___x_3558_ = lean_nat_add(v___x_3557_, v_size_3539_);
lean_dec(v___x_3557_);
if (v_isShared_3548_ == 0)
{
lean_ctor_set(v___x_3547_, 4, v_r_3355_);
lean_ctor_set(v___x_3547_, 3, v_tree_3550_);
lean_ctor_set(v___x_3547_, 2, v_v_3552_);
lean_ctor_set(v___x_3547_, 1, v_k_3551_);
lean_ctor_set(v___x_3547_, 0, v___x_3558_);
v___x_3560_ = v___x_3547_;
goto v_reusejp_3559_;
}
else
{
lean_object* v_reuseFailAlloc_3561_; 
v_reuseFailAlloc_3561_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3561_, 0, v___x_3558_);
lean_ctor_set(v_reuseFailAlloc_3561_, 1, v_k_3551_);
lean_ctor_set(v_reuseFailAlloc_3561_, 2, v_v_3552_);
lean_ctor_set(v_reuseFailAlloc_3561_, 3, v_tree_3550_);
lean_ctor_set(v_reuseFailAlloc_3561_, 4, v_r_3355_);
v___x_3560_ = v_reuseFailAlloc_3561_;
goto v_reusejp_3559_;
}
v_reusejp_3559_:
{
return v___x_3560_;
}
}
else
{
lean_object* v___x_3563_; uint8_t v_isShared_3564_; uint8_t v_isSharedCheck_3616_; 
lean_inc(v_r_3543_);
lean_inc(v_v_3541_);
lean_inc(v_k_3540_);
lean_inc(v_size_3539_);
v_isSharedCheck_3616_ = !lean_is_exclusive(v_r_3355_);
if (v_isSharedCheck_3616_ == 0)
{
lean_object* v_unused_3617_; lean_object* v_unused_3618_; lean_object* v_unused_3619_; lean_object* v_unused_3620_; lean_object* v_unused_3621_; 
v_unused_3617_ = lean_ctor_get(v_r_3355_, 4);
lean_dec(v_unused_3617_);
v_unused_3618_ = lean_ctor_get(v_r_3355_, 3);
lean_dec(v_unused_3618_);
v_unused_3619_ = lean_ctor_get(v_r_3355_, 2);
lean_dec(v_unused_3619_);
v_unused_3620_ = lean_ctor_get(v_r_3355_, 1);
lean_dec(v_unused_3620_);
v_unused_3621_ = lean_ctor_get(v_r_3355_, 0);
lean_dec(v_unused_3621_);
v___x_3563_ = v_r_3355_;
v_isShared_3564_ = v_isSharedCheck_3616_;
goto v_resetjp_3562_;
}
else
{
lean_dec(v_r_3355_);
v___x_3563_ = lean_box(0);
v_isShared_3564_ = v_isSharedCheck_3616_;
goto v_resetjp_3562_;
}
v_resetjp_3562_:
{
lean_object* v_size_3565_; lean_object* v_k_3566_; lean_object* v_v_3567_; lean_object* v_l_3568_; lean_object* v_r_3569_; lean_object* v_size_3570_; lean_object* v___x_3571_; lean_object* v___x_3572_; uint8_t v___x_3573_; 
v_size_3565_ = lean_ctor_get(v_l_3542_, 0);
v_k_3566_ = lean_ctor_get(v_l_3542_, 1);
v_v_3567_ = lean_ctor_get(v_l_3542_, 2);
v_l_3568_ = lean_ctor_get(v_l_3542_, 3);
v_r_3569_ = lean_ctor_get(v_l_3542_, 4);
v_size_3570_ = lean_ctor_get(v_r_3543_, 0);
v___x_3571_ = lean_unsigned_to_nat(2u);
v___x_3572_ = lean_nat_mul(v___x_3571_, v_size_3570_);
v___x_3573_ = lean_nat_dec_lt(v_size_3565_, v___x_3572_);
lean_dec(v___x_3572_);
if (v___x_3573_ == 0)
{
lean_object* v___x_3575_; uint8_t v_isShared_3576_; uint8_t v_isSharedCheck_3601_; 
lean_inc(v_r_3569_);
lean_inc(v_l_3568_);
lean_inc(v_v_3567_);
lean_inc(v_k_3566_);
v_isSharedCheck_3601_ = !lean_is_exclusive(v_l_3542_);
if (v_isSharedCheck_3601_ == 0)
{
lean_object* v_unused_3602_; lean_object* v_unused_3603_; lean_object* v_unused_3604_; lean_object* v_unused_3605_; lean_object* v_unused_3606_; 
v_unused_3602_ = lean_ctor_get(v_l_3542_, 4);
lean_dec(v_unused_3602_);
v_unused_3603_ = lean_ctor_get(v_l_3542_, 3);
lean_dec(v_unused_3603_);
v_unused_3604_ = lean_ctor_get(v_l_3542_, 2);
lean_dec(v_unused_3604_);
v_unused_3605_ = lean_ctor_get(v_l_3542_, 1);
lean_dec(v_unused_3605_);
v_unused_3606_ = lean_ctor_get(v_l_3542_, 0);
lean_dec(v_unused_3606_);
v___x_3575_ = v_l_3542_;
v_isShared_3576_ = v_isSharedCheck_3601_;
goto v_resetjp_3574_;
}
else
{
lean_dec(v_l_3542_);
v___x_3575_ = lean_box(0);
v_isShared_3576_ = v_isSharedCheck_3601_;
goto v_resetjp_3574_;
}
v_resetjp_3574_:
{
lean_object* v___x_3577_; lean_object* v___x_3578_; lean_object* v___y_3580_; lean_object* v___y_3581_; lean_object* v___y_3582_; lean_object* v___y_3591_; 
v___x_3577_ = lean_nat_add(v___x_3544_, v_size_3553_);
v___x_3578_ = lean_nat_add(v___x_3577_, v_size_3539_);
lean_dec(v_size_3539_);
if (lean_obj_tag(v_l_3568_) == 0)
{
lean_object* v_size_3599_; 
v_size_3599_ = lean_ctor_get(v_l_3568_, 0);
lean_inc(v_size_3599_);
v___y_3591_ = v_size_3599_;
goto v___jp_3590_;
}
else
{
lean_object* v___x_3600_; 
v___x_3600_ = lean_unsigned_to_nat(0u);
v___y_3591_ = v___x_3600_;
goto v___jp_3590_;
}
v___jp_3579_:
{
lean_object* v___x_3583_; lean_object* v___x_3585_; 
v___x_3583_ = lean_nat_add(v___y_3581_, v___y_3582_);
lean_dec(v___y_3582_);
lean_dec(v___y_3581_);
if (v_isShared_3576_ == 0)
{
lean_ctor_set(v___x_3575_, 4, v_r_3543_);
lean_ctor_set(v___x_3575_, 3, v_r_3569_);
lean_ctor_set(v___x_3575_, 2, v_v_3541_);
lean_ctor_set(v___x_3575_, 1, v_k_3540_);
lean_ctor_set(v___x_3575_, 0, v___x_3583_);
v___x_3585_ = v___x_3575_;
goto v_reusejp_3584_;
}
else
{
lean_object* v_reuseFailAlloc_3589_; 
v_reuseFailAlloc_3589_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3589_, 0, v___x_3583_);
lean_ctor_set(v_reuseFailAlloc_3589_, 1, v_k_3540_);
lean_ctor_set(v_reuseFailAlloc_3589_, 2, v_v_3541_);
lean_ctor_set(v_reuseFailAlloc_3589_, 3, v_r_3569_);
lean_ctor_set(v_reuseFailAlloc_3589_, 4, v_r_3543_);
v___x_3585_ = v_reuseFailAlloc_3589_;
goto v_reusejp_3584_;
}
v_reusejp_3584_:
{
lean_object* v___x_3587_; 
if (v_isShared_3564_ == 0)
{
lean_ctor_set(v___x_3563_, 4, v___x_3585_);
lean_ctor_set(v___x_3563_, 3, v___y_3580_);
lean_ctor_set(v___x_3563_, 2, v_v_3567_);
lean_ctor_set(v___x_3563_, 1, v_k_3566_);
lean_ctor_set(v___x_3563_, 0, v___x_3578_);
v___x_3587_ = v___x_3563_;
goto v_reusejp_3586_;
}
else
{
lean_object* v_reuseFailAlloc_3588_; 
v_reuseFailAlloc_3588_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3588_, 0, v___x_3578_);
lean_ctor_set(v_reuseFailAlloc_3588_, 1, v_k_3566_);
lean_ctor_set(v_reuseFailAlloc_3588_, 2, v_v_3567_);
lean_ctor_set(v_reuseFailAlloc_3588_, 3, v___y_3580_);
lean_ctor_set(v_reuseFailAlloc_3588_, 4, v___x_3585_);
v___x_3587_ = v_reuseFailAlloc_3588_;
goto v_reusejp_3586_;
}
v_reusejp_3586_:
{
return v___x_3587_;
}
}
}
v___jp_3590_:
{
lean_object* v___x_3592_; lean_object* v___x_3594_; 
v___x_3592_ = lean_nat_add(v___x_3577_, v___y_3591_);
lean_dec(v___y_3591_);
lean_dec(v___x_3577_);
if (v_isShared_3548_ == 0)
{
lean_ctor_set(v___x_3547_, 4, v_l_3568_);
lean_ctor_set(v___x_3547_, 3, v_tree_3550_);
lean_ctor_set(v___x_3547_, 2, v_v_3552_);
lean_ctor_set(v___x_3547_, 1, v_k_3551_);
lean_ctor_set(v___x_3547_, 0, v___x_3592_);
v___x_3594_ = v___x_3547_;
goto v_reusejp_3593_;
}
else
{
lean_object* v_reuseFailAlloc_3598_; 
v_reuseFailAlloc_3598_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3598_, 0, v___x_3592_);
lean_ctor_set(v_reuseFailAlloc_3598_, 1, v_k_3551_);
lean_ctor_set(v_reuseFailAlloc_3598_, 2, v_v_3552_);
lean_ctor_set(v_reuseFailAlloc_3598_, 3, v_tree_3550_);
lean_ctor_set(v_reuseFailAlloc_3598_, 4, v_l_3568_);
v___x_3594_ = v_reuseFailAlloc_3598_;
goto v_reusejp_3593_;
}
v_reusejp_3593_:
{
lean_object* v___x_3595_; 
v___x_3595_ = lean_nat_add(v___x_3544_, v_size_3570_);
if (lean_obj_tag(v_r_3569_) == 0)
{
lean_object* v_size_3596_; 
v_size_3596_ = lean_ctor_get(v_r_3569_, 0);
lean_inc(v_size_3596_);
v___y_3580_ = v___x_3594_;
v___y_3581_ = v___x_3595_;
v___y_3582_ = v_size_3596_;
goto v___jp_3579_;
}
else
{
lean_object* v___x_3597_; 
v___x_3597_ = lean_unsigned_to_nat(0u);
v___y_3580_ = v___x_3594_;
v___y_3581_ = v___x_3595_;
v___y_3582_ = v___x_3597_;
goto v___jp_3579_;
}
}
}
}
}
else
{
lean_object* v___x_3607_; lean_object* v___x_3608_; lean_object* v___x_3609_; lean_object* v___x_3611_; 
v___x_3607_ = lean_nat_add(v___x_3544_, v_size_3553_);
v___x_3608_ = lean_nat_add(v___x_3607_, v_size_3539_);
lean_dec(v_size_3539_);
v___x_3609_ = lean_nat_add(v___x_3607_, v_size_3565_);
lean_dec(v___x_3607_);
if (v_isShared_3564_ == 0)
{
lean_ctor_set(v___x_3563_, 4, v_l_3542_);
lean_ctor_set(v___x_3563_, 3, v_tree_3550_);
lean_ctor_set(v___x_3563_, 2, v_v_3552_);
lean_ctor_set(v___x_3563_, 1, v_k_3551_);
lean_ctor_set(v___x_3563_, 0, v___x_3609_);
v___x_3611_ = v___x_3563_;
goto v_reusejp_3610_;
}
else
{
lean_object* v_reuseFailAlloc_3615_; 
v_reuseFailAlloc_3615_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3615_, 0, v___x_3609_);
lean_ctor_set(v_reuseFailAlloc_3615_, 1, v_k_3551_);
lean_ctor_set(v_reuseFailAlloc_3615_, 2, v_v_3552_);
lean_ctor_set(v_reuseFailAlloc_3615_, 3, v_tree_3550_);
lean_ctor_set(v_reuseFailAlloc_3615_, 4, v_l_3542_);
v___x_3611_ = v_reuseFailAlloc_3615_;
goto v_reusejp_3610_;
}
v_reusejp_3610_:
{
lean_object* v___x_3613_; 
if (v_isShared_3548_ == 0)
{
lean_ctor_set(v___x_3547_, 4, v_r_3543_);
lean_ctor_set(v___x_3547_, 3, v___x_3611_);
lean_ctor_set(v___x_3547_, 2, v_v_3541_);
lean_ctor_set(v___x_3547_, 1, v_k_3540_);
lean_ctor_set(v___x_3547_, 0, v___x_3608_);
v___x_3613_ = v___x_3547_;
goto v_reusejp_3612_;
}
else
{
lean_object* v_reuseFailAlloc_3614_; 
v_reuseFailAlloc_3614_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3614_, 0, v___x_3608_);
lean_ctor_set(v_reuseFailAlloc_3614_, 1, v_k_3540_);
lean_ctor_set(v_reuseFailAlloc_3614_, 2, v_v_3541_);
lean_ctor_set(v_reuseFailAlloc_3614_, 3, v___x_3611_);
lean_ctor_set(v_reuseFailAlloc_3614_, 4, v_r_3543_);
v___x_3613_ = v_reuseFailAlloc_3614_;
goto v_reusejp_3612_;
}
v_reusejp_3612_:
{
return v___x_3613_;
}
}
}
}
}
}
else
{
lean_object* v___x_3623_; uint8_t v_isShared_3624_; uint8_t v_isSharedCheck_3675_; 
lean_inc(v_r_3543_);
lean_inc(v_v_3541_);
lean_inc(v_k_3540_);
lean_inc(v_size_3539_);
v_isSharedCheck_3675_ = !lean_is_exclusive(v_r_3355_);
if (v_isSharedCheck_3675_ == 0)
{
lean_object* v_unused_3676_; lean_object* v_unused_3677_; lean_object* v_unused_3678_; lean_object* v_unused_3679_; lean_object* v_unused_3680_; 
v_unused_3676_ = lean_ctor_get(v_r_3355_, 4);
lean_dec(v_unused_3676_);
v_unused_3677_ = lean_ctor_get(v_r_3355_, 3);
lean_dec(v_unused_3677_);
v_unused_3678_ = lean_ctor_get(v_r_3355_, 2);
lean_dec(v_unused_3678_);
v_unused_3679_ = lean_ctor_get(v_r_3355_, 1);
lean_dec(v_unused_3679_);
v_unused_3680_ = lean_ctor_get(v_r_3355_, 0);
lean_dec(v_unused_3680_);
v___x_3623_ = v_r_3355_;
v_isShared_3624_ = v_isSharedCheck_3675_;
goto v_resetjp_3622_;
}
else
{
lean_dec(v_r_3355_);
v___x_3623_ = lean_box(0);
v_isShared_3624_ = v_isSharedCheck_3675_;
goto v_resetjp_3622_;
}
v_resetjp_3622_:
{
if (lean_obj_tag(v_l_3542_) == 0)
{
if (lean_obj_tag(v_r_3543_) == 0)
{
lean_object* v_k_3625_; lean_object* v_v_3626_; lean_object* v_size_3627_; lean_object* v___x_3628_; lean_object* v___x_3629_; lean_object* v___x_3631_; 
v_k_3625_ = lean_ctor_get(v___x_3549_, 0);
lean_inc(v_k_3625_);
v_v_3626_ = lean_ctor_get(v___x_3549_, 1);
lean_inc(v_v_3626_);
lean_dec_ref(v___x_3549_);
v_size_3627_ = lean_ctor_get(v_l_3542_, 0);
v___x_3628_ = lean_nat_add(v___x_3544_, v_size_3539_);
lean_dec(v_size_3539_);
v___x_3629_ = lean_nat_add(v___x_3544_, v_size_3627_);
if (v_isShared_3624_ == 0)
{
lean_ctor_set(v___x_3623_, 4, v_l_3542_);
lean_ctor_set(v___x_3623_, 3, v_tree_3550_);
lean_ctor_set(v___x_3623_, 2, v_v_3626_);
lean_ctor_set(v___x_3623_, 1, v_k_3625_);
lean_ctor_set(v___x_3623_, 0, v___x_3629_);
v___x_3631_ = v___x_3623_;
goto v_reusejp_3630_;
}
else
{
lean_object* v_reuseFailAlloc_3635_; 
v_reuseFailAlloc_3635_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3635_, 0, v___x_3629_);
lean_ctor_set(v_reuseFailAlloc_3635_, 1, v_k_3625_);
lean_ctor_set(v_reuseFailAlloc_3635_, 2, v_v_3626_);
lean_ctor_set(v_reuseFailAlloc_3635_, 3, v_tree_3550_);
lean_ctor_set(v_reuseFailAlloc_3635_, 4, v_l_3542_);
v___x_3631_ = v_reuseFailAlloc_3635_;
goto v_reusejp_3630_;
}
v_reusejp_3630_:
{
lean_object* v___x_3633_; 
if (v_isShared_3548_ == 0)
{
lean_ctor_set(v___x_3547_, 4, v_r_3543_);
lean_ctor_set(v___x_3547_, 3, v___x_3631_);
lean_ctor_set(v___x_3547_, 2, v_v_3541_);
lean_ctor_set(v___x_3547_, 1, v_k_3540_);
lean_ctor_set(v___x_3547_, 0, v___x_3628_);
v___x_3633_ = v___x_3547_;
goto v_reusejp_3632_;
}
else
{
lean_object* v_reuseFailAlloc_3634_; 
v_reuseFailAlloc_3634_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3634_, 0, v___x_3628_);
lean_ctor_set(v_reuseFailAlloc_3634_, 1, v_k_3540_);
lean_ctor_set(v_reuseFailAlloc_3634_, 2, v_v_3541_);
lean_ctor_set(v_reuseFailAlloc_3634_, 3, v___x_3631_);
lean_ctor_set(v_reuseFailAlloc_3634_, 4, v_r_3543_);
v___x_3633_ = v_reuseFailAlloc_3634_;
goto v_reusejp_3632_;
}
v_reusejp_3632_:
{
return v___x_3633_;
}
}
}
else
{
lean_object* v_k_3636_; lean_object* v_v_3637_; lean_object* v_k_3638_; lean_object* v_v_3639_; lean_object* v___x_3641_; uint8_t v_isShared_3642_; uint8_t v_isSharedCheck_3653_; 
lean_dec(v_size_3539_);
v_k_3636_ = lean_ctor_get(v___x_3549_, 0);
lean_inc(v_k_3636_);
v_v_3637_ = lean_ctor_get(v___x_3549_, 1);
lean_inc(v_v_3637_);
lean_dec_ref(v___x_3549_);
v_k_3638_ = lean_ctor_get(v_l_3542_, 1);
v_v_3639_ = lean_ctor_get(v_l_3542_, 2);
v_isSharedCheck_3653_ = !lean_is_exclusive(v_l_3542_);
if (v_isSharedCheck_3653_ == 0)
{
lean_object* v_unused_3654_; lean_object* v_unused_3655_; lean_object* v_unused_3656_; 
v_unused_3654_ = lean_ctor_get(v_l_3542_, 4);
lean_dec(v_unused_3654_);
v_unused_3655_ = lean_ctor_get(v_l_3542_, 3);
lean_dec(v_unused_3655_);
v_unused_3656_ = lean_ctor_get(v_l_3542_, 0);
lean_dec(v_unused_3656_);
v___x_3641_ = v_l_3542_;
v_isShared_3642_ = v_isSharedCheck_3653_;
goto v_resetjp_3640_;
}
else
{
lean_inc(v_v_3639_);
lean_inc(v_k_3638_);
lean_dec(v_l_3542_);
v___x_3641_ = lean_box(0);
v_isShared_3642_ = v_isSharedCheck_3653_;
goto v_resetjp_3640_;
}
v_resetjp_3640_:
{
lean_object* v___x_3643_; lean_object* v___x_3645_; 
v___x_3643_ = lean_unsigned_to_nat(3u);
if (v_isShared_3642_ == 0)
{
lean_ctor_set(v___x_3641_, 4, v_r_3543_);
lean_ctor_set(v___x_3641_, 3, v_r_3543_);
lean_ctor_set(v___x_3641_, 2, v_v_3637_);
lean_ctor_set(v___x_3641_, 1, v_k_3636_);
lean_ctor_set(v___x_3641_, 0, v___x_3544_);
v___x_3645_ = v___x_3641_;
goto v_reusejp_3644_;
}
else
{
lean_object* v_reuseFailAlloc_3652_; 
v_reuseFailAlloc_3652_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3652_, 0, v___x_3544_);
lean_ctor_set(v_reuseFailAlloc_3652_, 1, v_k_3636_);
lean_ctor_set(v_reuseFailAlloc_3652_, 2, v_v_3637_);
lean_ctor_set(v_reuseFailAlloc_3652_, 3, v_r_3543_);
lean_ctor_set(v_reuseFailAlloc_3652_, 4, v_r_3543_);
v___x_3645_ = v_reuseFailAlloc_3652_;
goto v_reusejp_3644_;
}
v_reusejp_3644_:
{
lean_object* v___x_3647_; 
if (v_isShared_3624_ == 0)
{
lean_ctor_set(v___x_3623_, 3, v_r_3543_);
lean_ctor_set(v___x_3623_, 0, v___x_3544_);
v___x_3647_ = v___x_3623_;
goto v_reusejp_3646_;
}
else
{
lean_object* v_reuseFailAlloc_3651_; 
v_reuseFailAlloc_3651_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3651_, 0, v___x_3544_);
lean_ctor_set(v_reuseFailAlloc_3651_, 1, v_k_3540_);
lean_ctor_set(v_reuseFailAlloc_3651_, 2, v_v_3541_);
lean_ctor_set(v_reuseFailAlloc_3651_, 3, v_r_3543_);
lean_ctor_set(v_reuseFailAlloc_3651_, 4, v_r_3543_);
v___x_3647_ = v_reuseFailAlloc_3651_;
goto v_reusejp_3646_;
}
v_reusejp_3646_:
{
lean_object* v___x_3649_; 
if (v_isShared_3548_ == 0)
{
lean_ctor_set(v___x_3547_, 4, v___x_3647_);
lean_ctor_set(v___x_3547_, 3, v___x_3645_);
lean_ctor_set(v___x_3547_, 2, v_v_3639_);
lean_ctor_set(v___x_3547_, 1, v_k_3638_);
lean_ctor_set(v___x_3547_, 0, v___x_3643_);
v___x_3649_ = v___x_3547_;
goto v_reusejp_3648_;
}
else
{
lean_object* v_reuseFailAlloc_3650_; 
v_reuseFailAlloc_3650_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3650_, 0, v___x_3643_);
lean_ctor_set(v_reuseFailAlloc_3650_, 1, v_k_3638_);
lean_ctor_set(v_reuseFailAlloc_3650_, 2, v_v_3639_);
lean_ctor_set(v_reuseFailAlloc_3650_, 3, v___x_3645_);
lean_ctor_set(v_reuseFailAlloc_3650_, 4, v___x_3647_);
v___x_3649_ = v_reuseFailAlloc_3650_;
goto v_reusejp_3648_;
}
v_reusejp_3648_:
{
return v___x_3649_;
}
}
}
}
}
}
else
{
if (lean_obj_tag(v_r_3543_) == 0)
{
lean_object* v_k_3657_; lean_object* v_v_3658_; lean_object* v___x_3659_; lean_object* v___x_3661_; 
lean_dec(v_size_3539_);
v_k_3657_ = lean_ctor_get(v___x_3549_, 0);
lean_inc(v_k_3657_);
v_v_3658_ = lean_ctor_get(v___x_3549_, 1);
lean_inc(v_v_3658_);
lean_dec_ref(v___x_3549_);
v___x_3659_ = lean_unsigned_to_nat(3u);
if (v_isShared_3624_ == 0)
{
lean_ctor_set(v___x_3623_, 4, v_l_3542_);
lean_ctor_set(v___x_3623_, 2, v_v_3658_);
lean_ctor_set(v___x_3623_, 1, v_k_3657_);
lean_ctor_set(v___x_3623_, 0, v___x_3544_);
v___x_3661_ = v___x_3623_;
goto v_reusejp_3660_;
}
else
{
lean_object* v_reuseFailAlloc_3665_; 
v_reuseFailAlloc_3665_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3665_, 0, v___x_3544_);
lean_ctor_set(v_reuseFailAlloc_3665_, 1, v_k_3657_);
lean_ctor_set(v_reuseFailAlloc_3665_, 2, v_v_3658_);
lean_ctor_set(v_reuseFailAlloc_3665_, 3, v_l_3542_);
lean_ctor_set(v_reuseFailAlloc_3665_, 4, v_l_3542_);
v___x_3661_ = v_reuseFailAlloc_3665_;
goto v_reusejp_3660_;
}
v_reusejp_3660_:
{
lean_object* v___x_3663_; 
if (v_isShared_3548_ == 0)
{
lean_ctor_set(v___x_3547_, 4, v_r_3543_);
lean_ctor_set(v___x_3547_, 3, v___x_3661_);
lean_ctor_set(v___x_3547_, 2, v_v_3541_);
lean_ctor_set(v___x_3547_, 1, v_k_3540_);
lean_ctor_set(v___x_3547_, 0, v___x_3659_);
v___x_3663_ = v___x_3547_;
goto v_reusejp_3662_;
}
else
{
lean_object* v_reuseFailAlloc_3664_; 
v_reuseFailAlloc_3664_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3664_, 0, v___x_3659_);
lean_ctor_set(v_reuseFailAlloc_3664_, 1, v_k_3540_);
lean_ctor_set(v_reuseFailAlloc_3664_, 2, v_v_3541_);
lean_ctor_set(v_reuseFailAlloc_3664_, 3, v___x_3661_);
lean_ctor_set(v_reuseFailAlloc_3664_, 4, v_r_3543_);
v___x_3663_ = v_reuseFailAlloc_3664_;
goto v_reusejp_3662_;
}
v_reusejp_3662_:
{
return v___x_3663_;
}
}
}
else
{
lean_object* v_k_3666_; lean_object* v_v_3667_; lean_object* v___x_3669_; 
v_k_3666_ = lean_ctor_get(v___x_3549_, 0);
lean_inc(v_k_3666_);
v_v_3667_ = lean_ctor_get(v___x_3549_, 1);
lean_inc(v_v_3667_);
lean_dec_ref(v___x_3549_);
if (v_isShared_3624_ == 0)
{
lean_ctor_set(v___x_3623_, 3, v_r_3543_);
v___x_3669_ = v___x_3623_;
goto v_reusejp_3668_;
}
else
{
lean_object* v_reuseFailAlloc_3674_; 
v_reuseFailAlloc_3674_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3674_, 0, v_size_3539_);
lean_ctor_set(v_reuseFailAlloc_3674_, 1, v_k_3540_);
lean_ctor_set(v_reuseFailAlloc_3674_, 2, v_v_3541_);
lean_ctor_set(v_reuseFailAlloc_3674_, 3, v_r_3543_);
lean_ctor_set(v_reuseFailAlloc_3674_, 4, v_r_3543_);
v___x_3669_ = v_reuseFailAlloc_3674_;
goto v_reusejp_3668_;
}
v_reusejp_3668_:
{
lean_object* v___x_3670_; lean_object* v___x_3672_; 
v___x_3670_ = lean_unsigned_to_nat(2u);
if (v_isShared_3548_ == 0)
{
lean_ctor_set(v___x_3547_, 4, v___x_3669_);
lean_ctor_set(v___x_3547_, 3, v_r_3543_);
lean_ctor_set(v___x_3547_, 2, v_v_3667_);
lean_ctor_set(v___x_3547_, 1, v_k_3666_);
lean_ctor_set(v___x_3547_, 0, v___x_3670_);
v___x_3672_ = v___x_3547_;
goto v_reusejp_3671_;
}
else
{
lean_object* v_reuseFailAlloc_3673_; 
v_reuseFailAlloc_3673_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3673_, 0, v___x_3670_);
lean_ctor_set(v_reuseFailAlloc_3673_, 1, v_k_3666_);
lean_ctor_set(v_reuseFailAlloc_3673_, 2, v_v_3667_);
lean_ctor_set(v_reuseFailAlloc_3673_, 3, v_r_3543_);
lean_ctor_set(v_reuseFailAlloc_3673_, 4, v___x_3669_);
v___x_3672_ = v_reuseFailAlloc_3673_;
goto v_reusejp_3671_;
}
v_reusejp_3671_:
{
return v___x_3672_;
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
lean_object* v___x_3688_; uint8_t v_isShared_3689_; uint8_t v_isSharedCheck_3839_; 
lean_inc(v_r_3543_);
lean_inc(v_v_3541_);
lean_inc(v_k_3540_);
v_isSharedCheck_3839_ = !lean_is_exclusive(v_r_3355_);
if (v_isSharedCheck_3839_ == 0)
{
lean_object* v_unused_3840_; lean_object* v_unused_3841_; lean_object* v_unused_3842_; lean_object* v_unused_3843_; lean_object* v_unused_3844_; 
v_unused_3840_ = lean_ctor_get(v_r_3355_, 4);
lean_dec(v_unused_3840_);
v_unused_3841_ = lean_ctor_get(v_r_3355_, 3);
lean_dec(v_unused_3841_);
v_unused_3842_ = lean_ctor_get(v_r_3355_, 2);
lean_dec(v_unused_3842_);
v_unused_3843_ = lean_ctor_get(v_r_3355_, 1);
lean_dec(v_unused_3843_);
v_unused_3844_ = lean_ctor_get(v_r_3355_, 0);
lean_dec(v_unused_3844_);
v___x_3688_ = v_r_3355_;
v_isShared_3689_ = v_isSharedCheck_3839_;
goto v_resetjp_3687_;
}
else
{
lean_dec(v_r_3355_);
v___x_3688_ = lean_box(0);
v_isShared_3689_ = v_isSharedCheck_3839_;
goto v_resetjp_3687_;
}
v_resetjp_3687_:
{
lean_object* v___x_3690_; lean_object* v_tree_3691_; 
v___x_3690_ = l_Std_DTreeMap_Internal_Impl_minView___redArg(v_k_3540_, v_v_3541_, v_l_3542_, v_r_3543_);
v_tree_3691_ = lean_ctor_get(v___x_3690_, 2);
lean_inc(v_tree_3691_);
if (lean_obj_tag(v_tree_3691_) == 0)
{
lean_object* v_k_3692_; lean_object* v_v_3693_; lean_object* v_size_3694_; lean_object* v___x_3695_; lean_object* v___x_3696_; uint8_t v___x_3697_; 
v_k_3692_ = lean_ctor_get(v___x_3690_, 0);
lean_inc(v_k_3692_);
v_v_3693_ = lean_ctor_get(v___x_3690_, 1);
lean_inc(v_v_3693_);
lean_dec_ref(v___x_3690_);
v_size_3694_ = lean_ctor_get(v_tree_3691_, 0);
v___x_3695_ = lean_unsigned_to_nat(3u);
v___x_3696_ = lean_nat_mul(v___x_3695_, v_size_3694_);
v___x_3697_ = lean_nat_dec_lt(v___x_3696_, v_size_3534_);
lean_dec(v___x_3696_);
if (v___x_3697_ == 0)
{
lean_object* v___x_3698_; lean_object* v___x_3699_; lean_object* v___x_3701_; 
lean_dec(v_r_3538_);
v___x_3698_ = lean_nat_add(v___x_3544_, v_size_3534_);
v___x_3699_ = lean_nat_add(v___x_3698_, v_size_3694_);
lean_dec(v___x_3698_);
if (v_isShared_3689_ == 0)
{
lean_ctor_set(v___x_3688_, 4, v_tree_3691_);
lean_ctor_set(v___x_3688_, 3, v_l_3354_);
lean_ctor_set(v___x_3688_, 2, v_v_3693_);
lean_ctor_set(v___x_3688_, 1, v_k_3692_);
lean_ctor_set(v___x_3688_, 0, v___x_3699_);
v___x_3701_ = v___x_3688_;
goto v_reusejp_3700_;
}
else
{
lean_object* v_reuseFailAlloc_3702_; 
v_reuseFailAlloc_3702_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3702_, 0, v___x_3699_);
lean_ctor_set(v_reuseFailAlloc_3702_, 1, v_k_3692_);
lean_ctor_set(v_reuseFailAlloc_3702_, 2, v_v_3693_);
lean_ctor_set(v_reuseFailAlloc_3702_, 3, v_l_3354_);
lean_ctor_set(v_reuseFailAlloc_3702_, 4, v_tree_3691_);
v___x_3701_ = v_reuseFailAlloc_3702_;
goto v_reusejp_3700_;
}
v_reusejp_3700_:
{
return v___x_3701_;
}
}
else
{
lean_object* v___x_3704_; uint8_t v_isShared_3705_; uint8_t v_isSharedCheck_3768_; 
lean_inc(v_l_3537_);
lean_inc(v_v_3536_);
lean_inc(v_k_3535_);
lean_inc(v_size_3534_);
v_isSharedCheck_3768_ = !lean_is_exclusive(v_l_3354_);
if (v_isSharedCheck_3768_ == 0)
{
lean_object* v_unused_3769_; lean_object* v_unused_3770_; lean_object* v_unused_3771_; lean_object* v_unused_3772_; lean_object* v_unused_3773_; 
v_unused_3769_ = lean_ctor_get(v_l_3354_, 4);
lean_dec(v_unused_3769_);
v_unused_3770_ = lean_ctor_get(v_l_3354_, 3);
lean_dec(v_unused_3770_);
v_unused_3771_ = lean_ctor_get(v_l_3354_, 2);
lean_dec(v_unused_3771_);
v_unused_3772_ = lean_ctor_get(v_l_3354_, 1);
lean_dec(v_unused_3772_);
v_unused_3773_ = lean_ctor_get(v_l_3354_, 0);
lean_dec(v_unused_3773_);
v___x_3704_ = v_l_3354_;
v_isShared_3705_ = v_isSharedCheck_3768_;
goto v_resetjp_3703_;
}
else
{
lean_dec(v_l_3354_);
v___x_3704_ = lean_box(0);
v_isShared_3705_ = v_isSharedCheck_3768_;
goto v_resetjp_3703_;
}
v_resetjp_3703_:
{
lean_object* v_size_3706_; lean_object* v_size_3707_; lean_object* v_k_3708_; lean_object* v_v_3709_; lean_object* v_l_3710_; lean_object* v_r_3711_; lean_object* v___x_3712_; lean_object* v___x_3713_; uint8_t v___x_3714_; 
v_size_3706_ = lean_ctor_get(v_l_3537_, 0);
v_size_3707_ = lean_ctor_get(v_r_3538_, 0);
v_k_3708_ = lean_ctor_get(v_r_3538_, 1);
v_v_3709_ = lean_ctor_get(v_r_3538_, 2);
v_l_3710_ = lean_ctor_get(v_r_3538_, 3);
v_r_3711_ = lean_ctor_get(v_r_3538_, 4);
v___x_3712_ = lean_unsigned_to_nat(2u);
v___x_3713_ = lean_nat_mul(v___x_3712_, v_size_3706_);
v___x_3714_ = lean_nat_dec_lt(v_size_3707_, v___x_3713_);
lean_dec(v___x_3713_);
if (v___x_3714_ == 0)
{
lean_object* v___x_3716_; uint8_t v_isShared_3717_; uint8_t v_isSharedCheck_3752_; 
lean_inc(v_r_3711_);
lean_inc(v_l_3710_);
lean_inc(v_v_3709_);
lean_inc(v_k_3708_);
lean_del_object(v___x_3704_);
v_isSharedCheck_3752_ = !lean_is_exclusive(v_r_3538_);
if (v_isSharedCheck_3752_ == 0)
{
lean_object* v_unused_3753_; lean_object* v_unused_3754_; lean_object* v_unused_3755_; lean_object* v_unused_3756_; lean_object* v_unused_3757_; 
v_unused_3753_ = lean_ctor_get(v_r_3538_, 4);
lean_dec(v_unused_3753_);
v_unused_3754_ = lean_ctor_get(v_r_3538_, 3);
lean_dec(v_unused_3754_);
v_unused_3755_ = lean_ctor_get(v_r_3538_, 2);
lean_dec(v_unused_3755_);
v_unused_3756_ = lean_ctor_get(v_r_3538_, 1);
lean_dec(v_unused_3756_);
v_unused_3757_ = lean_ctor_get(v_r_3538_, 0);
lean_dec(v_unused_3757_);
v___x_3716_ = v_r_3538_;
v_isShared_3717_ = v_isSharedCheck_3752_;
goto v_resetjp_3715_;
}
else
{
lean_dec(v_r_3538_);
v___x_3716_ = lean_box(0);
v_isShared_3717_ = v_isSharedCheck_3752_;
goto v_resetjp_3715_;
}
v_resetjp_3715_:
{
lean_object* v___x_3718_; lean_object* v___x_3719_; lean_object* v___y_3721_; lean_object* v___y_3722_; lean_object* v___y_3723_; lean_object* v___x_3740_; lean_object* v___y_3742_; 
v___x_3718_ = lean_nat_add(v___x_3544_, v_size_3534_);
lean_dec(v_size_3534_);
v___x_3719_ = lean_nat_add(v___x_3718_, v_size_3694_);
lean_dec(v___x_3718_);
v___x_3740_ = lean_nat_add(v___x_3544_, v_size_3706_);
if (lean_obj_tag(v_l_3710_) == 0)
{
lean_object* v_size_3750_; 
v_size_3750_ = lean_ctor_get(v_l_3710_, 0);
lean_inc(v_size_3750_);
v___y_3742_ = v_size_3750_;
goto v___jp_3741_;
}
else
{
lean_object* v___x_3751_; 
v___x_3751_ = lean_unsigned_to_nat(0u);
v___y_3742_ = v___x_3751_;
goto v___jp_3741_;
}
v___jp_3720_:
{
lean_object* v___x_3724_; lean_object* v___x_3726_; 
v___x_3724_ = lean_nat_add(v___y_3721_, v___y_3723_);
lean_dec(v___y_3723_);
lean_dec(v___y_3721_);
lean_inc_ref(v_tree_3691_);
if (v_isShared_3717_ == 0)
{
lean_ctor_set(v___x_3716_, 4, v_tree_3691_);
lean_ctor_set(v___x_3716_, 3, v_r_3711_);
lean_ctor_set(v___x_3716_, 2, v_v_3693_);
lean_ctor_set(v___x_3716_, 1, v_k_3692_);
lean_ctor_set(v___x_3716_, 0, v___x_3724_);
v___x_3726_ = v___x_3716_;
goto v_reusejp_3725_;
}
else
{
lean_object* v_reuseFailAlloc_3739_; 
v_reuseFailAlloc_3739_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3739_, 0, v___x_3724_);
lean_ctor_set(v_reuseFailAlloc_3739_, 1, v_k_3692_);
lean_ctor_set(v_reuseFailAlloc_3739_, 2, v_v_3693_);
lean_ctor_set(v_reuseFailAlloc_3739_, 3, v_r_3711_);
lean_ctor_set(v_reuseFailAlloc_3739_, 4, v_tree_3691_);
v___x_3726_ = v_reuseFailAlloc_3739_;
goto v_reusejp_3725_;
}
v_reusejp_3725_:
{
lean_object* v___x_3728_; uint8_t v_isShared_3729_; uint8_t v_isSharedCheck_3733_; 
v_isSharedCheck_3733_ = !lean_is_exclusive(v_tree_3691_);
if (v_isSharedCheck_3733_ == 0)
{
lean_object* v_unused_3734_; lean_object* v_unused_3735_; lean_object* v_unused_3736_; lean_object* v_unused_3737_; lean_object* v_unused_3738_; 
v_unused_3734_ = lean_ctor_get(v_tree_3691_, 4);
lean_dec(v_unused_3734_);
v_unused_3735_ = lean_ctor_get(v_tree_3691_, 3);
lean_dec(v_unused_3735_);
v_unused_3736_ = lean_ctor_get(v_tree_3691_, 2);
lean_dec(v_unused_3736_);
v_unused_3737_ = lean_ctor_get(v_tree_3691_, 1);
lean_dec(v_unused_3737_);
v_unused_3738_ = lean_ctor_get(v_tree_3691_, 0);
lean_dec(v_unused_3738_);
v___x_3728_ = v_tree_3691_;
v_isShared_3729_ = v_isSharedCheck_3733_;
goto v_resetjp_3727_;
}
else
{
lean_dec(v_tree_3691_);
v___x_3728_ = lean_box(0);
v_isShared_3729_ = v_isSharedCheck_3733_;
goto v_resetjp_3727_;
}
v_resetjp_3727_:
{
lean_object* v___x_3731_; 
if (v_isShared_3729_ == 0)
{
lean_ctor_set(v___x_3728_, 4, v___x_3726_);
lean_ctor_set(v___x_3728_, 3, v___y_3722_);
lean_ctor_set(v___x_3728_, 2, v_v_3709_);
lean_ctor_set(v___x_3728_, 1, v_k_3708_);
lean_ctor_set(v___x_3728_, 0, v___x_3719_);
v___x_3731_ = v___x_3728_;
goto v_reusejp_3730_;
}
else
{
lean_object* v_reuseFailAlloc_3732_; 
v_reuseFailAlloc_3732_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3732_, 0, v___x_3719_);
lean_ctor_set(v_reuseFailAlloc_3732_, 1, v_k_3708_);
lean_ctor_set(v_reuseFailAlloc_3732_, 2, v_v_3709_);
lean_ctor_set(v_reuseFailAlloc_3732_, 3, v___y_3722_);
lean_ctor_set(v_reuseFailAlloc_3732_, 4, v___x_3726_);
v___x_3731_ = v_reuseFailAlloc_3732_;
goto v_reusejp_3730_;
}
v_reusejp_3730_:
{
return v___x_3731_;
}
}
}
}
v___jp_3741_:
{
lean_object* v___x_3743_; lean_object* v___x_3745_; 
v___x_3743_ = lean_nat_add(v___x_3740_, v___y_3742_);
lean_dec(v___y_3742_);
lean_dec(v___x_3740_);
if (v_isShared_3689_ == 0)
{
lean_ctor_set(v___x_3688_, 4, v_l_3710_);
lean_ctor_set(v___x_3688_, 3, v_l_3537_);
lean_ctor_set(v___x_3688_, 2, v_v_3536_);
lean_ctor_set(v___x_3688_, 1, v_k_3535_);
lean_ctor_set(v___x_3688_, 0, v___x_3743_);
v___x_3745_ = v___x_3688_;
goto v_reusejp_3744_;
}
else
{
lean_object* v_reuseFailAlloc_3749_; 
v_reuseFailAlloc_3749_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3749_, 0, v___x_3743_);
lean_ctor_set(v_reuseFailAlloc_3749_, 1, v_k_3535_);
lean_ctor_set(v_reuseFailAlloc_3749_, 2, v_v_3536_);
lean_ctor_set(v_reuseFailAlloc_3749_, 3, v_l_3537_);
lean_ctor_set(v_reuseFailAlloc_3749_, 4, v_l_3710_);
v___x_3745_ = v_reuseFailAlloc_3749_;
goto v_reusejp_3744_;
}
v_reusejp_3744_:
{
lean_object* v___x_3746_; 
v___x_3746_ = lean_nat_add(v___x_3544_, v_size_3694_);
if (lean_obj_tag(v_r_3711_) == 0)
{
lean_object* v_size_3747_; 
v_size_3747_ = lean_ctor_get(v_r_3711_, 0);
lean_inc(v_size_3747_);
v___y_3721_ = v___x_3746_;
v___y_3722_ = v___x_3745_;
v___y_3723_ = v_size_3747_;
goto v___jp_3720_;
}
else
{
lean_object* v___x_3748_; 
v___x_3748_ = lean_unsigned_to_nat(0u);
v___y_3721_ = v___x_3746_;
v___y_3722_ = v___x_3745_;
v___y_3723_ = v___x_3748_;
goto v___jp_3720_;
}
}
}
}
}
else
{
lean_object* v___x_3758_; lean_object* v___x_3759_; lean_object* v___x_3760_; lean_object* v___x_3761_; lean_object* v___x_3763_; 
v___x_3758_ = lean_nat_add(v___x_3544_, v_size_3534_);
lean_dec(v_size_3534_);
v___x_3759_ = lean_nat_add(v___x_3758_, v_size_3694_);
lean_dec(v___x_3758_);
v___x_3760_ = lean_nat_add(v___x_3544_, v_size_3694_);
v___x_3761_ = lean_nat_add(v___x_3760_, v_size_3707_);
lean_dec(v___x_3760_);
if (v_isShared_3689_ == 0)
{
lean_ctor_set(v___x_3688_, 4, v_tree_3691_);
lean_ctor_set(v___x_3688_, 3, v_r_3538_);
lean_ctor_set(v___x_3688_, 2, v_v_3693_);
lean_ctor_set(v___x_3688_, 1, v_k_3692_);
lean_ctor_set(v___x_3688_, 0, v___x_3761_);
v___x_3763_ = v___x_3688_;
goto v_reusejp_3762_;
}
else
{
lean_object* v_reuseFailAlloc_3767_; 
v_reuseFailAlloc_3767_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3767_, 0, v___x_3761_);
lean_ctor_set(v_reuseFailAlloc_3767_, 1, v_k_3692_);
lean_ctor_set(v_reuseFailAlloc_3767_, 2, v_v_3693_);
lean_ctor_set(v_reuseFailAlloc_3767_, 3, v_r_3538_);
lean_ctor_set(v_reuseFailAlloc_3767_, 4, v_tree_3691_);
v___x_3763_ = v_reuseFailAlloc_3767_;
goto v_reusejp_3762_;
}
v_reusejp_3762_:
{
lean_object* v___x_3765_; 
if (v_isShared_3705_ == 0)
{
lean_ctor_set(v___x_3704_, 4, v___x_3763_);
lean_ctor_set(v___x_3704_, 0, v___x_3759_);
v___x_3765_ = v___x_3704_;
goto v_reusejp_3764_;
}
else
{
lean_object* v_reuseFailAlloc_3766_; 
v_reuseFailAlloc_3766_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3766_, 0, v___x_3759_);
lean_ctor_set(v_reuseFailAlloc_3766_, 1, v_k_3535_);
lean_ctor_set(v_reuseFailAlloc_3766_, 2, v_v_3536_);
lean_ctor_set(v_reuseFailAlloc_3766_, 3, v_l_3537_);
lean_ctor_set(v_reuseFailAlloc_3766_, 4, v___x_3763_);
v___x_3765_ = v_reuseFailAlloc_3766_;
goto v_reusejp_3764_;
}
v_reusejp_3764_:
{
return v___x_3765_;
}
}
}
}
}
}
else
{
if (lean_obj_tag(v_l_3537_) == 0)
{
lean_object* v___x_3775_; uint8_t v_isShared_3776_; uint8_t v_isSharedCheck_3797_; 
lean_inc_ref(v_l_3537_);
lean_inc(v_v_3536_);
lean_inc(v_k_3535_);
lean_inc(v_size_3534_);
v_isSharedCheck_3797_ = !lean_is_exclusive(v_l_3354_);
if (v_isSharedCheck_3797_ == 0)
{
lean_object* v_unused_3798_; lean_object* v_unused_3799_; lean_object* v_unused_3800_; lean_object* v_unused_3801_; lean_object* v_unused_3802_; 
v_unused_3798_ = lean_ctor_get(v_l_3354_, 4);
lean_dec(v_unused_3798_);
v_unused_3799_ = lean_ctor_get(v_l_3354_, 3);
lean_dec(v_unused_3799_);
v_unused_3800_ = lean_ctor_get(v_l_3354_, 2);
lean_dec(v_unused_3800_);
v_unused_3801_ = lean_ctor_get(v_l_3354_, 1);
lean_dec(v_unused_3801_);
v_unused_3802_ = lean_ctor_get(v_l_3354_, 0);
lean_dec(v_unused_3802_);
v___x_3775_ = v_l_3354_;
v_isShared_3776_ = v_isSharedCheck_3797_;
goto v_resetjp_3774_;
}
else
{
lean_dec(v_l_3354_);
v___x_3775_ = lean_box(0);
v_isShared_3776_ = v_isSharedCheck_3797_;
goto v_resetjp_3774_;
}
v_resetjp_3774_:
{
if (lean_obj_tag(v_r_3538_) == 0)
{
lean_object* v_k_3777_; lean_object* v_v_3778_; lean_object* v_size_3779_; lean_object* v___x_3780_; lean_object* v___x_3781_; lean_object* v___x_3783_; 
v_k_3777_ = lean_ctor_get(v___x_3690_, 0);
lean_inc(v_k_3777_);
v_v_3778_ = lean_ctor_get(v___x_3690_, 1);
lean_inc(v_v_3778_);
lean_dec_ref(v___x_3690_);
v_size_3779_ = lean_ctor_get(v_r_3538_, 0);
v___x_3780_ = lean_nat_add(v___x_3544_, v_size_3534_);
lean_dec(v_size_3534_);
v___x_3781_ = lean_nat_add(v___x_3544_, v_size_3779_);
if (v_isShared_3689_ == 0)
{
lean_ctor_set(v___x_3688_, 4, v_tree_3691_);
lean_ctor_set(v___x_3688_, 3, v_r_3538_);
lean_ctor_set(v___x_3688_, 2, v_v_3778_);
lean_ctor_set(v___x_3688_, 1, v_k_3777_);
lean_ctor_set(v___x_3688_, 0, v___x_3781_);
v___x_3783_ = v___x_3688_;
goto v_reusejp_3782_;
}
else
{
lean_object* v_reuseFailAlloc_3787_; 
v_reuseFailAlloc_3787_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3787_, 0, v___x_3781_);
lean_ctor_set(v_reuseFailAlloc_3787_, 1, v_k_3777_);
lean_ctor_set(v_reuseFailAlloc_3787_, 2, v_v_3778_);
lean_ctor_set(v_reuseFailAlloc_3787_, 3, v_r_3538_);
lean_ctor_set(v_reuseFailAlloc_3787_, 4, v_tree_3691_);
v___x_3783_ = v_reuseFailAlloc_3787_;
goto v_reusejp_3782_;
}
v_reusejp_3782_:
{
lean_object* v___x_3785_; 
if (v_isShared_3776_ == 0)
{
lean_ctor_set(v___x_3775_, 4, v___x_3783_);
lean_ctor_set(v___x_3775_, 0, v___x_3780_);
v___x_3785_ = v___x_3775_;
goto v_reusejp_3784_;
}
else
{
lean_object* v_reuseFailAlloc_3786_; 
v_reuseFailAlloc_3786_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3786_, 0, v___x_3780_);
lean_ctor_set(v_reuseFailAlloc_3786_, 1, v_k_3535_);
lean_ctor_set(v_reuseFailAlloc_3786_, 2, v_v_3536_);
lean_ctor_set(v_reuseFailAlloc_3786_, 3, v_l_3537_);
lean_ctor_set(v_reuseFailAlloc_3786_, 4, v___x_3783_);
v___x_3785_ = v_reuseFailAlloc_3786_;
goto v_reusejp_3784_;
}
v_reusejp_3784_:
{
return v___x_3785_;
}
}
}
else
{
lean_object* v_k_3788_; lean_object* v_v_3789_; lean_object* v___x_3790_; lean_object* v___x_3792_; 
lean_dec(v_size_3534_);
v_k_3788_ = lean_ctor_get(v___x_3690_, 0);
lean_inc(v_k_3788_);
v_v_3789_ = lean_ctor_get(v___x_3690_, 1);
lean_inc(v_v_3789_);
lean_dec_ref(v___x_3690_);
v___x_3790_ = lean_unsigned_to_nat(3u);
if (v_isShared_3689_ == 0)
{
lean_ctor_set(v___x_3688_, 4, v_r_3538_);
lean_ctor_set(v___x_3688_, 3, v_r_3538_);
lean_ctor_set(v___x_3688_, 2, v_v_3789_);
lean_ctor_set(v___x_3688_, 1, v_k_3788_);
lean_ctor_set(v___x_3688_, 0, v___x_3544_);
v___x_3792_ = v___x_3688_;
goto v_reusejp_3791_;
}
else
{
lean_object* v_reuseFailAlloc_3796_; 
v_reuseFailAlloc_3796_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3796_, 0, v___x_3544_);
lean_ctor_set(v_reuseFailAlloc_3796_, 1, v_k_3788_);
lean_ctor_set(v_reuseFailAlloc_3796_, 2, v_v_3789_);
lean_ctor_set(v_reuseFailAlloc_3796_, 3, v_r_3538_);
lean_ctor_set(v_reuseFailAlloc_3796_, 4, v_r_3538_);
v___x_3792_ = v_reuseFailAlloc_3796_;
goto v_reusejp_3791_;
}
v_reusejp_3791_:
{
lean_object* v___x_3794_; 
if (v_isShared_3776_ == 0)
{
lean_ctor_set(v___x_3775_, 4, v___x_3792_);
lean_ctor_set(v___x_3775_, 0, v___x_3790_);
v___x_3794_ = v___x_3775_;
goto v_reusejp_3793_;
}
else
{
lean_object* v_reuseFailAlloc_3795_; 
v_reuseFailAlloc_3795_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3795_, 0, v___x_3790_);
lean_ctor_set(v_reuseFailAlloc_3795_, 1, v_k_3535_);
lean_ctor_set(v_reuseFailAlloc_3795_, 2, v_v_3536_);
lean_ctor_set(v_reuseFailAlloc_3795_, 3, v_l_3537_);
lean_ctor_set(v_reuseFailAlloc_3795_, 4, v___x_3792_);
v___x_3794_ = v_reuseFailAlloc_3795_;
goto v_reusejp_3793_;
}
v_reusejp_3793_:
{
return v___x_3794_;
}
}
}
}
}
else
{
if (lean_obj_tag(v_r_3538_) == 0)
{
lean_object* v___x_3804_; uint8_t v_isShared_3805_; uint8_t v_isSharedCheck_3827_; 
lean_inc(v_l_3537_);
lean_inc(v_v_3536_);
lean_inc(v_k_3535_);
v_isSharedCheck_3827_ = !lean_is_exclusive(v_l_3354_);
if (v_isSharedCheck_3827_ == 0)
{
lean_object* v_unused_3828_; lean_object* v_unused_3829_; lean_object* v_unused_3830_; lean_object* v_unused_3831_; lean_object* v_unused_3832_; 
v_unused_3828_ = lean_ctor_get(v_l_3354_, 4);
lean_dec(v_unused_3828_);
v_unused_3829_ = lean_ctor_get(v_l_3354_, 3);
lean_dec(v_unused_3829_);
v_unused_3830_ = lean_ctor_get(v_l_3354_, 2);
lean_dec(v_unused_3830_);
v_unused_3831_ = lean_ctor_get(v_l_3354_, 1);
lean_dec(v_unused_3831_);
v_unused_3832_ = lean_ctor_get(v_l_3354_, 0);
lean_dec(v_unused_3832_);
v___x_3804_ = v_l_3354_;
v_isShared_3805_ = v_isSharedCheck_3827_;
goto v_resetjp_3803_;
}
else
{
lean_dec(v_l_3354_);
v___x_3804_ = lean_box(0);
v_isShared_3805_ = v_isSharedCheck_3827_;
goto v_resetjp_3803_;
}
v_resetjp_3803_:
{
lean_object* v_k_3806_; lean_object* v_v_3807_; lean_object* v_k_3808_; lean_object* v_v_3809_; lean_object* v___x_3811_; uint8_t v_isShared_3812_; uint8_t v_isSharedCheck_3823_; 
v_k_3806_ = lean_ctor_get(v___x_3690_, 0);
lean_inc(v_k_3806_);
v_v_3807_ = lean_ctor_get(v___x_3690_, 1);
lean_inc(v_v_3807_);
lean_dec_ref(v___x_3690_);
v_k_3808_ = lean_ctor_get(v_r_3538_, 1);
v_v_3809_ = lean_ctor_get(v_r_3538_, 2);
v_isSharedCheck_3823_ = !lean_is_exclusive(v_r_3538_);
if (v_isSharedCheck_3823_ == 0)
{
lean_object* v_unused_3824_; lean_object* v_unused_3825_; lean_object* v_unused_3826_; 
v_unused_3824_ = lean_ctor_get(v_r_3538_, 4);
lean_dec(v_unused_3824_);
v_unused_3825_ = lean_ctor_get(v_r_3538_, 3);
lean_dec(v_unused_3825_);
v_unused_3826_ = lean_ctor_get(v_r_3538_, 0);
lean_dec(v_unused_3826_);
v___x_3811_ = v_r_3538_;
v_isShared_3812_ = v_isSharedCheck_3823_;
goto v_resetjp_3810_;
}
else
{
lean_inc(v_v_3809_);
lean_inc(v_k_3808_);
lean_dec(v_r_3538_);
v___x_3811_ = lean_box(0);
v_isShared_3812_ = v_isSharedCheck_3823_;
goto v_resetjp_3810_;
}
v_resetjp_3810_:
{
lean_object* v___x_3813_; lean_object* v___x_3815_; 
v___x_3813_ = lean_unsigned_to_nat(3u);
if (v_isShared_3812_ == 0)
{
lean_ctor_set(v___x_3811_, 4, v_l_3537_);
lean_ctor_set(v___x_3811_, 3, v_l_3537_);
lean_ctor_set(v___x_3811_, 2, v_v_3536_);
lean_ctor_set(v___x_3811_, 1, v_k_3535_);
lean_ctor_set(v___x_3811_, 0, v___x_3544_);
v___x_3815_ = v___x_3811_;
goto v_reusejp_3814_;
}
else
{
lean_object* v_reuseFailAlloc_3822_; 
v_reuseFailAlloc_3822_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3822_, 0, v___x_3544_);
lean_ctor_set(v_reuseFailAlloc_3822_, 1, v_k_3535_);
lean_ctor_set(v_reuseFailAlloc_3822_, 2, v_v_3536_);
lean_ctor_set(v_reuseFailAlloc_3822_, 3, v_l_3537_);
lean_ctor_set(v_reuseFailAlloc_3822_, 4, v_l_3537_);
v___x_3815_ = v_reuseFailAlloc_3822_;
goto v_reusejp_3814_;
}
v_reusejp_3814_:
{
lean_object* v___x_3817_; 
if (v_isShared_3689_ == 0)
{
lean_ctor_set(v___x_3688_, 4, v_l_3537_);
lean_ctor_set(v___x_3688_, 3, v_l_3537_);
lean_ctor_set(v___x_3688_, 2, v_v_3807_);
lean_ctor_set(v___x_3688_, 1, v_k_3806_);
lean_ctor_set(v___x_3688_, 0, v___x_3544_);
v___x_3817_ = v___x_3688_;
goto v_reusejp_3816_;
}
else
{
lean_object* v_reuseFailAlloc_3821_; 
v_reuseFailAlloc_3821_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3821_, 0, v___x_3544_);
lean_ctor_set(v_reuseFailAlloc_3821_, 1, v_k_3806_);
lean_ctor_set(v_reuseFailAlloc_3821_, 2, v_v_3807_);
lean_ctor_set(v_reuseFailAlloc_3821_, 3, v_l_3537_);
lean_ctor_set(v_reuseFailAlloc_3821_, 4, v_l_3537_);
v___x_3817_ = v_reuseFailAlloc_3821_;
goto v_reusejp_3816_;
}
v_reusejp_3816_:
{
lean_object* v___x_3819_; 
if (v_isShared_3805_ == 0)
{
lean_ctor_set(v___x_3804_, 4, v___x_3817_);
lean_ctor_set(v___x_3804_, 3, v___x_3815_);
lean_ctor_set(v___x_3804_, 2, v_v_3809_);
lean_ctor_set(v___x_3804_, 1, v_k_3808_);
lean_ctor_set(v___x_3804_, 0, v___x_3813_);
v___x_3819_ = v___x_3804_;
goto v_reusejp_3818_;
}
else
{
lean_object* v_reuseFailAlloc_3820_; 
v_reuseFailAlloc_3820_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3820_, 0, v___x_3813_);
lean_ctor_set(v_reuseFailAlloc_3820_, 1, v_k_3808_);
lean_ctor_set(v_reuseFailAlloc_3820_, 2, v_v_3809_);
lean_ctor_set(v_reuseFailAlloc_3820_, 3, v___x_3815_);
lean_ctor_set(v_reuseFailAlloc_3820_, 4, v___x_3817_);
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
}
}
else
{
lean_object* v_k_3833_; lean_object* v_v_3834_; lean_object* v___x_3835_; lean_object* v___x_3837_; 
v_k_3833_ = lean_ctor_get(v___x_3690_, 0);
lean_inc(v_k_3833_);
v_v_3834_ = lean_ctor_get(v___x_3690_, 1);
lean_inc(v_v_3834_);
lean_dec_ref(v___x_3690_);
v___x_3835_ = lean_unsigned_to_nat(2u);
if (v_isShared_3689_ == 0)
{
lean_ctor_set(v___x_3688_, 4, v_r_3538_);
lean_ctor_set(v___x_3688_, 3, v_l_3354_);
lean_ctor_set(v___x_3688_, 2, v_v_3834_);
lean_ctor_set(v___x_3688_, 1, v_k_3833_);
lean_ctor_set(v___x_3688_, 0, v___x_3835_);
v___x_3837_ = v___x_3688_;
goto v_reusejp_3836_;
}
else
{
lean_object* v_reuseFailAlloc_3838_; 
v_reuseFailAlloc_3838_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3838_, 0, v___x_3835_);
lean_ctor_set(v_reuseFailAlloc_3838_, 1, v_k_3833_);
lean_ctor_set(v_reuseFailAlloc_3838_, 2, v_v_3834_);
lean_ctor_set(v_reuseFailAlloc_3838_, 3, v_l_3354_);
lean_ctor_set(v_reuseFailAlloc_3838_, 4, v_r_3538_);
v___x_3837_ = v_reuseFailAlloc_3838_;
goto v_reusejp_3836_;
}
v_reusejp_3836_:
{
return v___x_3837_;
}
}
}
}
}
}
}
else
{
return v_l_3354_;
}
}
else
{
return v_r_3355_;
}
}
default: 
{
lean_object* v_impl_3845_; lean_object* v___x_3846_; 
v_impl_3845_ = l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0_spec__0___redArg(v_k_3350_, v_r_3355_);
v___x_3846_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_impl_3845_) == 0)
{
if (lean_obj_tag(v_l_3354_) == 0)
{
lean_object* v_size_3847_; lean_object* v_size_3848_; lean_object* v_k_3849_; lean_object* v_v_3850_; lean_object* v_l_3851_; lean_object* v_r_3852_; lean_object* v___x_3853_; lean_object* v___x_3854_; uint8_t v___x_3855_; 
v_size_3847_ = lean_ctor_get(v_impl_3845_, 0);
lean_inc(v_size_3847_);
v_size_3848_ = lean_ctor_get(v_l_3354_, 0);
v_k_3849_ = lean_ctor_get(v_l_3354_, 1);
v_v_3850_ = lean_ctor_get(v_l_3354_, 2);
v_l_3851_ = lean_ctor_get(v_l_3354_, 3);
v_r_3852_ = lean_ctor_get(v_l_3354_, 4);
lean_inc(v_r_3852_);
v___x_3853_ = lean_unsigned_to_nat(3u);
v___x_3854_ = lean_nat_mul(v___x_3853_, v_size_3847_);
v___x_3855_ = lean_nat_dec_lt(v___x_3854_, v_size_3848_);
lean_dec(v___x_3854_);
if (v___x_3855_ == 0)
{
lean_object* v___x_3856_; lean_object* v___x_3857_; lean_object* v___x_3859_; 
lean_dec(v_r_3852_);
v___x_3856_ = lean_nat_add(v___x_3846_, v_size_3848_);
v___x_3857_ = lean_nat_add(v___x_3856_, v_size_3847_);
lean_dec(v_size_3847_);
lean_dec(v___x_3856_);
if (v_isShared_3358_ == 0)
{
lean_ctor_set(v___x_3357_, 4, v_impl_3845_);
lean_ctor_set(v___x_3357_, 0, v___x_3857_);
v___x_3859_ = v___x_3357_;
goto v_reusejp_3858_;
}
else
{
lean_object* v_reuseFailAlloc_3860_; 
v_reuseFailAlloc_3860_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3860_, 0, v___x_3857_);
lean_ctor_set(v_reuseFailAlloc_3860_, 1, v_k_3352_);
lean_ctor_set(v_reuseFailAlloc_3860_, 2, v_v_3353_);
lean_ctor_set(v_reuseFailAlloc_3860_, 3, v_l_3354_);
lean_ctor_set(v_reuseFailAlloc_3860_, 4, v_impl_3845_);
v___x_3859_ = v_reuseFailAlloc_3860_;
goto v_reusejp_3858_;
}
v_reusejp_3858_:
{
return v___x_3859_;
}
}
else
{
lean_object* v___x_3862_; uint8_t v_isShared_3863_; uint8_t v_isSharedCheck_3926_; 
lean_inc(v_l_3851_);
lean_inc(v_v_3850_);
lean_inc(v_k_3849_);
lean_inc(v_size_3848_);
v_isSharedCheck_3926_ = !lean_is_exclusive(v_l_3354_);
if (v_isSharedCheck_3926_ == 0)
{
lean_object* v_unused_3927_; lean_object* v_unused_3928_; lean_object* v_unused_3929_; lean_object* v_unused_3930_; lean_object* v_unused_3931_; 
v_unused_3927_ = lean_ctor_get(v_l_3354_, 4);
lean_dec(v_unused_3927_);
v_unused_3928_ = lean_ctor_get(v_l_3354_, 3);
lean_dec(v_unused_3928_);
v_unused_3929_ = lean_ctor_get(v_l_3354_, 2);
lean_dec(v_unused_3929_);
v_unused_3930_ = lean_ctor_get(v_l_3354_, 1);
lean_dec(v_unused_3930_);
v_unused_3931_ = lean_ctor_get(v_l_3354_, 0);
lean_dec(v_unused_3931_);
v___x_3862_ = v_l_3354_;
v_isShared_3863_ = v_isSharedCheck_3926_;
goto v_resetjp_3861_;
}
else
{
lean_dec(v_l_3354_);
v___x_3862_ = lean_box(0);
v_isShared_3863_ = v_isSharedCheck_3926_;
goto v_resetjp_3861_;
}
v_resetjp_3861_:
{
lean_object* v_size_3864_; lean_object* v_size_3865_; lean_object* v_k_3866_; lean_object* v_v_3867_; lean_object* v_l_3868_; lean_object* v_r_3869_; lean_object* v___x_3870_; lean_object* v___x_3871_; uint8_t v___x_3872_; 
v_size_3864_ = lean_ctor_get(v_l_3851_, 0);
v_size_3865_ = lean_ctor_get(v_r_3852_, 0);
v_k_3866_ = lean_ctor_get(v_r_3852_, 1);
v_v_3867_ = lean_ctor_get(v_r_3852_, 2);
v_l_3868_ = lean_ctor_get(v_r_3852_, 3);
v_r_3869_ = lean_ctor_get(v_r_3852_, 4);
v___x_3870_ = lean_unsigned_to_nat(2u);
v___x_3871_ = lean_nat_mul(v___x_3870_, v_size_3864_);
v___x_3872_ = lean_nat_dec_lt(v_size_3865_, v___x_3871_);
lean_dec(v___x_3871_);
if (v___x_3872_ == 0)
{
lean_object* v___x_3874_; uint8_t v_isShared_3875_; uint8_t v_isSharedCheck_3901_; 
lean_inc(v_r_3869_);
lean_inc(v_l_3868_);
lean_inc(v_v_3867_);
lean_inc(v_k_3866_);
v_isSharedCheck_3901_ = !lean_is_exclusive(v_r_3852_);
if (v_isSharedCheck_3901_ == 0)
{
lean_object* v_unused_3902_; lean_object* v_unused_3903_; lean_object* v_unused_3904_; lean_object* v_unused_3905_; lean_object* v_unused_3906_; 
v_unused_3902_ = lean_ctor_get(v_r_3852_, 4);
lean_dec(v_unused_3902_);
v_unused_3903_ = lean_ctor_get(v_r_3852_, 3);
lean_dec(v_unused_3903_);
v_unused_3904_ = lean_ctor_get(v_r_3852_, 2);
lean_dec(v_unused_3904_);
v_unused_3905_ = lean_ctor_get(v_r_3852_, 1);
lean_dec(v_unused_3905_);
v_unused_3906_ = lean_ctor_get(v_r_3852_, 0);
lean_dec(v_unused_3906_);
v___x_3874_ = v_r_3852_;
v_isShared_3875_ = v_isSharedCheck_3901_;
goto v_resetjp_3873_;
}
else
{
lean_dec(v_r_3852_);
v___x_3874_ = lean_box(0);
v_isShared_3875_ = v_isSharedCheck_3901_;
goto v_resetjp_3873_;
}
v_resetjp_3873_:
{
lean_object* v___x_3876_; lean_object* v___x_3877_; lean_object* v___y_3879_; lean_object* v___y_3880_; lean_object* v___y_3881_; lean_object* v___x_3889_; lean_object* v___y_3891_; 
v___x_3876_ = lean_nat_add(v___x_3846_, v_size_3848_);
lean_dec(v_size_3848_);
v___x_3877_ = lean_nat_add(v___x_3876_, v_size_3847_);
lean_dec(v___x_3876_);
v___x_3889_ = lean_nat_add(v___x_3846_, v_size_3864_);
if (lean_obj_tag(v_l_3868_) == 0)
{
lean_object* v_size_3899_; 
v_size_3899_ = lean_ctor_get(v_l_3868_, 0);
lean_inc(v_size_3899_);
v___y_3891_ = v_size_3899_;
goto v___jp_3890_;
}
else
{
lean_object* v___x_3900_; 
v___x_3900_ = lean_unsigned_to_nat(0u);
v___y_3891_ = v___x_3900_;
goto v___jp_3890_;
}
v___jp_3878_:
{
lean_object* v___x_3882_; lean_object* v___x_3884_; 
v___x_3882_ = lean_nat_add(v___y_3880_, v___y_3881_);
lean_dec(v___y_3881_);
lean_dec(v___y_3880_);
if (v_isShared_3875_ == 0)
{
lean_ctor_set(v___x_3874_, 4, v_impl_3845_);
lean_ctor_set(v___x_3874_, 3, v_r_3869_);
lean_ctor_set(v___x_3874_, 2, v_v_3353_);
lean_ctor_set(v___x_3874_, 1, v_k_3352_);
lean_ctor_set(v___x_3874_, 0, v___x_3882_);
v___x_3884_ = v___x_3874_;
goto v_reusejp_3883_;
}
else
{
lean_object* v_reuseFailAlloc_3888_; 
v_reuseFailAlloc_3888_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3888_, 0, v___x_3882_);
lean_ctor_set(v_reuseFailAlloc_3888_, 1, v_k_3352_);
lean_ctor_set(v_reuseFailAlloc_3888_, 2, v_v_3353_);
lean_ctor_set(v_reuseFailAlloc_3888_, 3, v_r_3869_);
lean_ctor_set(v_reuseFailAlloc_3888_, 4, v_impl_3845_);
v___x_3884_ = v_reuseFailAlloc_3888_;
goto v_reusejp_3883_;
}
v_reusejp_3883_:
{
lean_object* v___x_3886_; 
if (v_isShared_3863_ == 0)
{
lean_ctor_set(v___x_3862_, 4, v___x_3884_);
lean_ctor_set(v___x_3862_, 3, v___y_3879_);
lean_ctor_set(v___x_3862_, 2, v_v_3867_);
lean_ctor_set(v___x_3862_, 1, v_k_3866_);
lean_ctor_set(v___x_3862_, 0, v___x_3877_);
v___x_3886_ = v___x_3862_;
goto v_reusejp_3885_;
}
else
{
lean_object* v_reuseFailAlloc_3887_; 
v_reuseFailAlloc_3887_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3887_, 0, v___x_3877_);
lean_ctor_set(v_reuseFailAlloc_3887_, 1, v_k_3866_);
lean_ctor_set(v_reuseFailAlloc_3887_, 2, v_v_3867_);
lean_ctor_set(v_reuseFailAlloc_3887_, 3, v___y_3879_);
lean_ctor_set(v_reuseFailAlloc_3887_, 4, v___x_3884_);
v___x_3886_ = v_reuseFailAlloc_3887_;
goto v_reusejp_3885_;
}
v_reusejp_3885_:
{
return v___x_3886_;
}
}
}
v___jp_3890_:
{
lean_object* v___x_3892_; lean_object* v___x_3894_; 
v___x_3892_ = lean_nat_add(v___x_3889_, v___y_3891_);
lean_dec(v___y_3891_);
lean_dec(v___x_3889_);
if (v_isShared_3358_ == 0)
{
lean_ctor_set(v___x_3357_, 4, v_l_3868_);
lean_ctor_set(v___x_3357_, 3, v_l_3851_);
lean_ctor_set(v___x_3357_, 2, v_v_3850_);
lean_ctor_set(v___x_3357_, 1, v_k_3849_);
lean_ctor_set(v___x_3357_, 0, v___x_3892_);
v___x_3894_ = v___x_3357_;
goto v_reusejp_3893_;
}
else
{
lean_object* v_reuseFailAlloc_3898_; 
v_reuseFailAlloc_3898_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3898_, 0, v___x_3892_);
lean_ctor_set(v_reuseFailAlloc_3898_, 1, v_k_3849_);
lean_ctor_set(v_reuseFailAlloc_3898_, 2, v_v_3850_);
lean_ctor_set(v_reuseFailAlloc_3898_, 3, v_l_3851_);
lean_ctor_set(v_reuseFailAlloc_3898_, 4, v_l_3868_);
v___x_3894_ = v_reuseFailAlloc_3898_;
goto v_reusejp_3893_;
}
v_reusejp_3893_:
{
lean_object* v___x_3895_; 
v___x_3895_ = lean_nat_add(v___x_3846_, v_size_3847_);
lean_dec(v_size_3847_);
if (lean_obj_tag(v_r_3869_) == 0)
{
lean_object* v_size_3896_; 
v_size_3896_ = lean_ctor_get(v_r_3869_, 0);
lean_inc(v_size_3896_);
v___y_3879_ = v___x_3894_;
v___y_3880_ = v___x_3895_;
v___y_3881_ = v_size_3896_;
goto v___jp_3878_;
}
else
{
lean_object* v___x_3897_; 
v___x_3897_ = lean_unsigned_to_nat(0u);
v___y_3879_ = v___x_3894_;
v___y_3880_ = v___x_3895_;
v___y_3881_ = v___x_3897_;
goto v___jp_3878_;
}
}
}
}
}
else
{
lean_object* v___x_3907_; lean_object* v___x_3908_; lean_object* v___x_3909_; lean_object* v___x_3910_; lean_object* v___x_3912_; 
lean_del_object(v___x_3357_);
v___x_3907_ = lean_nat_add(v___x_3846_, v_size_3848_);
lean_dec(v_size_3848_);
v___x_3908_ = lean_nat_add(v___x_3907_, v_size_3847_);
lean_dec(v___x_3907_);
v___x_3909_ = lean_nat_add(v___x_3846_, v_size_3847_);
lean_dec(v_size_3847_);
v___x_3910_ = lean_nat_add(v___x_3909_, v_size_3865_);
lean_dec(v___x_3909_);
lean_inc_ref(v_impl_3845_);
if (v_isShared_3863_ == 0)
{
lean_ctor_set(v___x_3862_, 4, v_impl_3845_);
lean_ctor_set(v___x_3862_, 3, v_r_3852_);
lean_ctor_set(v___x_3862_, 2, v_v_3353_);
lean_ctor_set(v___x_3862_, 1, v_k_3352_);
lean_ctor_set(v___x_3862_, 0, v___x_3910_);
v___x_3912_ = v___x_3862_;
goto v_reusejp_3911_;
}
else
{
lean_object* v_reuseFailAlloc_3925_; 
v_reuseFailAlloc_3925_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3925_, 0, v___x_3910_);
lean_ctor_set(v_reuseFailAlloc_3925_, 1, v_k_3352_);
lean_ctor_set(v_reuseFailAlloc_3925_, 2, v_v_3353_);
lean_ctor_set(v_reuseFailAlloc_3925_, 3, v_r_3852_);
lean_ctor_set(v_reuseFailAlloc_3925_, 4, v_impl_3845_);
v___x_3912_ = v_reuseFailAlloc_3925_;
goto v_reusejp_3911_;
}
v_reusejp_3911_:
{
lean_object* v___x_3914_; uint8_t v_isShared_3915_; uint8_t v_isSharedCheck_3919_; 
v_isSharedCheck_3919_ = !lean_is_exclusive(v_impl_3845_);
if (v_isSharedCheck_3919_ == 0)
{
lean_object* v_unused_3920_; lean_object* v_unused_3921_; lean_object* v_unused_3922_; lean_object* v_unused_3923_; lean_object* v_unused_3924_; 
v_unused_3920_ = lean_ctor_get(v_impl_3845_, 4);
lean_dec(v_unused_3920_);
v_unused_3921_ = lean_ctor_get(v_impl_3845_, 3);
lean_dec(v_unused_3921_);
v_unused_3922_ = lean_ctor_get(v_impl_3845_, 2);
lean_dec(v_unused_3922_);
v_unused_3923_ = lean_ctor_get(v_impl_3845_, 1);
lean_dec(v_unused_3923_);
v_unused_3924_ = lean_ctor_get(v_impl_3845_, 0);
lean_dec(v_unused_3924_);
v___x_3914_ = v_impl_3845_;
v_isShared_3915_ = v_isSharedCheck_3919_;
goto v_resetjp_3913_;
}
else
{
lean_dec(v_impl_3845_);
v___x_3914_ = lean_box(0);
v_isShared_3915_ = v_isSharedCheck_3919_;
goto v_resetjp_3913_;
}
v_resetjp_3913_:
{
lean_object* v___x_3917_; 
if (v_isShared_3915_ == 0)
{
lean_ctor_set(v___x_3914_, 4, v___x_3912_);
lean_ctor_set(v___x_3914_, 3, v_l_3851_);
lean_ctor_set(v___x_3914_, 2, v_v_3850_);
lean_ctor_set(v___x_3914_, 1, v_k_3849_);
lean_ctor_set(v___x_3914_, 0, v___x_3908_);
v___x_3917_ = v___x_3914_;
goto v_reusejp_3916_;
}
else
{
lean_object* v_reuseFailAlloc_3918_; 
v_reuseFailAlloc_3918_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3918_, 0, v___x_3908_);
lean_ctor_set(v_reuseFailAlloc_3918_, 1, v_k_3849_);
lean_ctor_set(v_reuseFailAlloc_3918_, 2, v_v_3850_);
lean_ctor_set(v_reuseFailAlloc_3918_, 3, v_l_3851_);
lean_ctor_set(v_reuseFailAlloc_3918_, 4, v___x_3912_);
v___x_3917_ = v_reuseFailAlloc_3918_;
goto v_reusejp_3916_;
}
v_reusejp_3916_:
{
return v___x_3917_;
}
}
}
}
}
}
}
else
{
lean_object* v_size_3932_; lean_object* v___x_3933_; lean_object* v___x_3935_; 
v_size_3932_ = lean_ctor_get(v_impl_3845_, 0);
lean_inc(v_size_3932_);
v___x_3933_ = lean_nat_add(v___x_3846_, v_size_3932_);
lean_dec(v_size_3932_);
if (v_isShared_3358_ == 0)
{
lean_ctor_set(v___x_3357_, 4, v_impl_3845_);
lean_ctor_set(v___x_3357_, 0, v___x_3933_);
v___x_3935_ = v___x_3357_;
goto v_reusejp_3934_;
}
else
{
lean_object* v_reuseFailAlloc_3936_; 
v_reuseFailAlloc_3936_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3936_, 0, v___x_3933_);
lean_ctor_set(v_reuseFailAlloc_3936_, 1, v_k_3352_);
lean_ctor_set(v_reuseFailAlloc_3936_, 2, v_v_3353_);
lean_ctor_set(v_reuseFailAlloc_3936_, 3, v_l_3354_);
lean_ctor_set(v_reuseFailAlloc_3936_, 4, v_impl_3845_);
v___x_3935_ = v_reuseFailAlloc_3936_;
goto v_reusejp_3934_;
}
v_reusejp_3934_:
{
return v___x_3935_;
}
}
}
else
{
if (lean_obj_tag(v_l_3354_) == 0)
{
lean_object* v_l_3937_; 
v_l_3937_ = lean_ctor_get(v_l_3354_, 3);
if (lean_obj_tag(v_l_3937_) == 0)
{
lean_object* v_r_3938_; 
lean_inc_ref(v_l_3937_);
v_r_3938_ = lean_ctor_get(v_l_3354_, 4);
lean_inc(v_r_3938_);
if (lean_obj_tag(v_r_3938_) == 0)
{
lean_object* v_size_3939_; lean_object* v_k_3940_; lean_object* v_v_3941_; lean_object* v___x_3943_; uint8_t v_isShared_3944_; uint8_t v_isSharedCheck_3954_; 
v_size_3939_ = lean_ctor_get(v_l_3354_, 0);
v_k_3940_ = lean_ctor_get(v_l_3354_, 1);
v_v_3941_ = lean_ctor_get(v_l_3354_, 2);
v_isSharedCheck_3954_ = !lean_is_exclusive(v_l_3354_);
if (v_isSharedCheck_3954_ == 0)
{
lean_object* v_unused_3955_; lean_object* v_unused_3956_; 
v_unused_3955_ = lean_ctor_get(v_l_3354_, 4);
lean_dec(v_unused_3955_);
v_unused_3956_ = lean_ctor_get(v_l_3354_, 3);
lean_dec(v_unused_3956_);
v___x_3943_ = v_l_3354_;
v_isShared_3944_ = v_isSharedCheck_3954_;
goto v_resetjp_3942_;
}
else
{
lean_inc(v_v_3941_);
lean_inc(v_k_3940_);
lean_inc(v_size_3939_);
lean_dec(v_l_3354_);
v___x_3943_ = lean_box(0);
v_isShared_3944_ = v_isSharedCheck_3954_;
goto v_resetjp_3942_;
}
v_resetjp_3942_:
{
lean_object* v_size_3945_; lean_object* v___x_3946_; lean_object* v___x_3947_; lean_object* v___x_3949_; 
v_size_3945_ = lean_ctor_get(v_r_3938_, 0);
v___x_3946_ = lean_nat_add(v___x_3846_, v_size_3939_);
lean_dec(v_size_3939_);
v___x_3947_ = lean_nat_add(v___x_3846_, v_size_3945_);
if (v_isShared_3944_ == 0)
{
lean_ctor_set(v___x_3943_, 4, v_impl_3845_);
lean_ctor_set(v___x_3943_, 3, v_r_3938_);
lean_ctor_set(v___x_3943_, 2, v_v_3353_);
lean_ctor_set(v___x_3943_, 1, v_k_3352_);
lean_ctor_set(v___x_3943_, 0, v___x_3947_);
v___x_3949_ = v___x_3943_;
goto v_reusejp_3948_;
}
else
{
lean_object* v_reuseFailAlloc_3953_; 
v_reuseFailAlloc_3953_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3953_, 0, v___x_3947_);
lean_ctor_set(v_reuseFailAlloc_3953_, 1, v_k_3352_);
lean_ctor_set(v_reuseFailAlloc_3953_, 2, v_v_3353_);
lean_ctor_set(v_reuseFailAlloc_3953_, 3, v_r_3938_);
lean_ctor_set(v_reuseFailAlloc_3953_, 4, v_impl_3845_);
v___x_3949_ = v_reuseFailAlloc_3953_;
goto v_reusejp_3948_;
}
v_reusejp_3948_:
{
lean_object* v___x_3951_; 
if (v_isShared_3358_ == 0)
{
lean_ctor_set(v___x_3357_, 4, v___x_3949_);
lean_ctor_set(v___x_3357_, 3, v_l_3937_);
lean_ctor_set(v___x_3357_, 2, v_v_3941_);
lean_ctor_set(v___x_3357_, 1, v_k_3940_);
lean_ctor_set(v___x_3357_, 0, v___x_3946_);
v___x_3951_ = v___x_3357_;
goto v_reusejp_3950_;
}
else
{
lean_object* v_reuseFailAlloc_3952_; 
v_reuseFailAlloc_3952_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3952_, 0, v___x_3946_);
lean_ctor_set(v_reuseFailAlloc_3952_, 1, v_k_3940_);
lean_ctor_set(v_reuseFailAlloc_3952_, 2, v_v_3941_);
lean_ctor_set(v_reuseFailAlloc_3952_, 3, v_l_3937_);
lean_ctor_set(v_reuseFailAlloc_3952_, 4, v___x_3949_);
v___x_3951_ = v_reuseFailAlloc_3952_;
goto v_reusejp_3950_;
}
v_reusejp_3950_:
{
return v___x_3951_;
}
}
}
}
else
{
lean_object* v_k_3957_; lean_object* v_v_3958_; lean_object* v___x_3960_; uint8_t v_isShared_3961_; uint8_t v_isSharedCheck_3969_; 
v_k_3957_ = lean_ctor_get(v_l_3354_, 1);
v_v_3958_ = lean_ctor_get(v_l_3354_, 2);
v_isSharedCheck_3969_ = !lean_is_exclusive(v_l_3354_);
if (v_isSharedCheck_3969_ == 0)
{
lean_object* v_unused_3970_; lean_object* v_unused_3971_; lean_object* v_unused_3972_; 
v_unused_3970_ = lean_ctor_get(v_l_3354_, 4);
lean_dec(v_unused_3970_);
v_unused_3971_ = lean_ctor_get(v_l_3354_, 3);
lean_dec(v_unused_3971_);
v_unused_3972_ = lean_ctor_get(v_l_3354_, 0);
lean_dec(v_unused_3972_);
v___x_3960_ = v_l_3354_;
v_isShared_3961_ = v_isSharedCheck_3969_;
goto v_resetjp_3959_;
}
else
{
lean_inc(v_v_3958_);
lean_inc(v_k_3957_);
lean_dec(v_l_3354_);
v___x_3960_ = lean_box(0);
v_isShared_3961_ = v_isSharedCheck_3969_;
goto v_resetjp_3959_;
}
v_resetjp_3959_:
{
lean_object* v___x_3962_; lean_object* v___x_3964_; 
v___x_3962_ = lean_unsigned_to_nat(3u);
if (v_isShared_3961_ == 0)
{
lean_ctor_set(v___x_3960_, 3, v_r_3938_);
lean_ctor_set(v___x_3960_, 2, v_v_3353_);
lean_ctor_set(v___x_3960_, 1, v_k_3352_);
lean_ctor_set(v___x_3960_, 0, v___x_3846_);
v___x_3964_ = v___x_3960_;
goto v_reusejp_3963_;
}
else
{
lean_object* v_reuseFailAlloc_3968_; 
v_reuseFailAlloc_3968_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3968_, 0, v___x_3846_);
lean_ctor_set(v_reuseFailAlloc_3968_, 1, v_k_3352_);
lean_ctor_set(v_reuseFailAlloc_3968_, 2, v_v_3353_);
lean_ctor_set(v_reuseFailAlloc_3968_, 3, v_r_3938_);
lean_ctor_set(v_reuseFailAlloc_3968_, 4, v_r_3938_);
v___x_3964_ = v_reuseFailAlloc_3968_;
goto v_reusejp_3963_;
}
v_reusejp_3963_:
{
lean_object* v___x_3966_; 
if (v_isShared_3358_ == 0)
{
lean_ctor_set(v___x_3357_, 4, v___x_3964_);
lean_ctor_set(v___x_3357_, 3, v_l_3937_);
lean_ctor_set(v___x_3357_, 2, v_v_3958_);
lean_ctor_set(v___x_3357_, 1, v_k_3957_);
lean_ctor_set(v___x_3357_, 0, v___x_3962_);
v___x_3966_ = v___x_3357_;
goto v_reusejp_3965_;
}
else
{
lean_object* v_reuseFailAlloc_3967_; 
v_reuseFailAlloc_3967_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3967_, 0, v___x_3962_);
lean_ctor_set(v_reuseFailAlloc_3967_, 1, v_k_3957_);
lean_ctor_set(v_reuseFailAlloc_3967_, 2, v_v_3958_);
lean_ctor_set(v_reuseFailAlloc_3967_, 3, v_l_3937_);
lean_ctor_set(v_reuseFailAlloc_3967_, 4, v___x_3964_);
v___x_3966_ = v_reuseFailAlloc_3967_;
goto v_reusejp_3965_;
}
v_reusejp_3965_:
{
return v___x_3966_;
}
}
}
}
}
else
{
lean_object* v_r_3973_; 
v_r_3973_ = lean_ctor_get(v_l_3354_, 4);
lean_inc(v_r_3973_);
if (lean_obj_tag(v_r_3973_) == 0)
{
lean_object* v_k_3974_; lean_object* v_v_3975_; lean_object* v___x_3977_; uint8_t v_isShared_3978_; uint8_t v_isSharedCheck_3998_; 
lean_inc(v_l_3937_);
v_k_3974_ = lean_ctor_get(v_l_3354_, 1);
v_v_3975_ = lean_ctor_get(v_l_3354_, 2);
v_isSharedCheck_3998_ = !lean_is_exclusive(v_l_3354_);
if (v_isSharedCheck_3998_ == 0)
{
lean_object* v_unused_3999_; lean_object* v_unused_4000_; lean_object* v_unused_4001_; 
v_unused_3999_ = lean_ctor_get(v_l_3354_, 4);
lean_dec(v_unused_3999_);
v_unused_4000_ = lean_ctor_get(v_l_3354_, 3);
lean_dec(v_unused_4000_);
v_unused_4001_ = lean_ctor_get(v_l_3354_, 0);
lean_dec(v_unused_4001_);
v___x_3977_ = v_l_3354_;
v_isShared_3978_ = v_isSharedCheck_3998_;
goto v_resetjp_3976_;
}
else
{
lean_inc(v_v_3975_);
lean_inc(v_k_3974_);
lean_dec(v_l_3354_);
v___x_3977_ = lean_box(0);
v_isShared_3978_ = v_isSharedCheck_3998_;
goto v_resetjp_3976_;
}
v_resetjp_3976_:
{
lean_object* v_k_3979_; lean_object* v_v_3980_; lean_object* v___x_3982_; uint8_t v_isShared_3983_; uint8_t v_isSharedCheck_3994_; 
v_k_3979_ = lean_ctor_get(v_r_3973_, 1);
v_v_3980_ = lean_ctor_get(v_r_3973_, 2);
v_isSharedCheck_3994_ = !lean_is_exclusive(v_r_3973_);
if (v_isSharedCheck_3994_ == 0)
{
lean_object* v_unused_3995_; lean_object* v_unused_3996_; lean_object* v_unused_3997_; 
v_unused_3995_ = lean_ctor_get(v_r_3973_, 4);
lean_dec(v_unused_3995_);
v_unused_3996_ = lean_ctor_get(v_r_3973_, 3);
lean_dec(v_unused_3996_);
v_unused_3997_ = lean_ctor_get(v_r_3973_, 0);
lean_dec(v_unused_3997_);
v___x_3982_ = v_r_3973_;
v_isShared_3983_ = v_isSharedCheck_3994_;
goto v_resetjp_3981_;
}
else
{
lean_inc(v_v_3980_);
lean_inc(v_k_3979_);
lean_dec(v_r_3973_);
v___x_3982_ = lean_box(0);
v_isShared_3983_ = v_isSharedCheck_3994_;
goto v_resetjp_3981_;
}
v_resetjp_3981_:
{
lean_object* v___x_3984_; lean_object* v___x_3986_; 
v___x_3984_ = lean_unsigned_to_nat(3u);
if (v_isShared_3983_ == 0)
{
lean_ctor_set(v___x_3982_, 4, v_l_3937_);
lean_ctor_set(v___x_3982_, 3, v_l_3937_);
lean_ctor_set(v___x_3982_, 2, v_v_3975_);
lean_ctor_set(v___x_3982_, 1, v_k_3974_);
lean_ctor_set(v___x_3982_, 0, v___x_3846_);
v___x_3986_ = v___x_3982_;
goto v_reusejp_3985_;
}
else
{
lean_object* v_reuseFailAlloc_3993_; 
v_reuseFailAlloc_3993_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3993_, 0, v___x_3846_);
lean_ctor_set(v_reuseFailAlloc_3993_, 1, v_k_3974_);
lean_ctor_set(v_reuseFailAlloc_3993_, 2, v_v_3975_);
lean_ctor_set(v_reuseFailAlloc_3993_, 3, v_l_3937_);
lean_ctor_set(v_reuseFailAlloc_3993_, 4, v_l_3937_);
v___x_3986_ = v_reuseFailAlloc_3993_;
goto v_reusejp_3985_;
}
v_reusejp_3985_:
{
lean_object* v___x_3988_; 
if (v_isShared_3978_ == 0)
{
lean_ctor_set(v___x_3977_, 4, v_l_3937_);
lean_ctor_set(v___x_3977_, 2, v_v_3353_);
lean_ctor_set(v___x_3977_, 1, v_k_3352_);
lean_ctor_set(v___x_3977_, 0, v___x_3846_);
v___x_3988_ = v___x_3977_;
goto v_reusejp_3987_;
}
else
{
lean_object* v_reuseFailAlloc_3992_; 
v_reuseFailAlloc_3992_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3992_, 0, v___x_3846_);
lean_ctor_set(v_reuseFailAlloc_3992_, 1, v_k_3352_);
lean_ctor_set(v_reuseFailAlloc_3992_, 2, v_v_3353_);
lean_ctor_set(v_reuseFailAlloc_3992_, 3, v_l_3937_);
lean_ctor_set(v_reuseFailAlloc_3992_, 4, v_l_3937_);
v___x_3988_ = v_reuseFailAlloc_3992_;
goto v_reusejp_3987_;
}
v_reusejp_3987_:
{
lean_object* v___x_3990_; 
if (v_isShared_3358_ == 0)
{
lean_ctor_set(v___x_3357_, 4, v___x_3988_);
lean_ctor_set(v___x_3357_, 3, v___x_3986_);
lean_ctor_set(v___x_3357_, 2, v_v_3980_);
lean_ctor_set(v___x_3357_, 1, v_k_3979_);
lean_ctor_set(v___x_3357_, 0, v___x_3984_);
v___x_3990_ = v___x_3357_;
goto v_reusejp_3989_;
}
else
{
lean_object* v_reuseFailAlloc_3991_; 
v_reuseFailAlloc_3991_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3991_, 0, v___x_3984_);
lean_ctor_set(v_reuseFailAlloc_3991_, 1, v_k_3979_);
lean_ctor_set(v_reuseFailAlloc_3991_, 2, v_v_3980_);
lean_ctor_set(v_reuseFailAlloc_3991_, 3, v___x_3986_);
lean_ctor_set(v_reuseFailAlloc_3991_, 4, v___x_3988_);
v___x_3990_ = v_reuseFailAlloc_3991_;
goto v_reusejp_3989_;
}
v_reusejp_3989_:
{
return v___x_3990_;
}
}
}
}
}
}
else
{
lean_object* v___x_4002_; lean_object* v___x_4004_; 
v___x_4002_ = lean_unsigned_to_nat(2u);
if (v_isShared_3358_ == 0)
{
lean_ctor_set(v___x_3357_, 4, v_r_3973_);
lean_ctor_set(v___x_3357_, 0, v___x_4002_);
v___x_4004_ = v___x_3357_;
goto v_reusejp_4003_;
}
else
{
lean_object* v_reuseFailAlloc_4005_; 
v_reuseFailAlloc_4005_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4005_, 0, v___x_4002_);
lean_ctor_set(v_reuseFailAlloc_4005_, 1, v_k_3352_);
lean_ctor_set(v_reuseFailAlloc_4005_, 2, v_v_3353_);
lean_ctor_set(v_reuseFailAlloc_4005_, 3, v_l_3354_);
lean_ctor_set(v_reuseFailAlloc_4005_, 4, v_r_3973_);
v___x_4004_ = v_reuseFailAlloc_4005_;
goto v_reusejp_4003_;
}
v_reusejp_4003_:
{
return v___x_4004_;
}
}
}
}
else
{
lean_object* v___x_4007_; 
if (v_isShared_3358_ == 0)
{
lean_ctor_set(v___x_3357_, 4, v_l_3354_);
lean_ctor_set(v___x_3357_, 0, v___x_3846_);
v___x_4007_ = v___x_3357_;
goto v_reusejp_4006_;
}
else
{
lean_object* v_reuseFailAlloc_4008_; 
v_reuseFailAlloc_4008_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4008_, 0, v___x_3846_);
lean_ctor_set(v_reuseFailAlloc_4008_, 1, v_k_3352_);
lean_ctor_set(v_reuseFailAlloc_4008_, 2, v_v_3353_);
lean_ctor_set(v_reuseFailAlloc_4008_, 3, v_l_3354_);
lean_ctor_set(v_reuseFailAlloc_4008_, 4, v_l_3354_);
v___x_4007_ = v_reuseFailAlloc_4008_;
goto v_reusejp_4006_;
}
v_reusejp_4006_:
{
return v___x_4007_;
}
}
}
}
}
}
}
else
{
return v_t_3351_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0_spec__0___redArg___boxed(lean_object* v_k_4011_, lean_object* v_t_4012_){
_start:
{
lean_object* v_res_4013_; 
v_res_4013_ = l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0_spec__0___redArg(v_k_4011_, v_t_4012_);
lean_dec(v_k_4011_);
return v_res_4013_;
}
}
LEAN_EXPORT lean_object* l_Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0___lam__0(lean_object* v_declName_4014_, lean_object* v_x_4015_){
_start:
{
lean_object* v___x_4016_; 
v___x_4016_ = l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0_spec__0___redArg(v_declName_4014_, v_x_4015_);
return v___x_4016_;
}
}
LEAN_EXPORT lean_object* l_Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0___lam__0___boxed(lean_object* v_declName_4017_, lean_object* v_x_4018_){
_start:
{
lean_object* v_res_4019_; 
v_res_4019_ = l_Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0___lam__0(v_declName_4017_, v_x_4018_);
lean_dec(v_declName_4017_);
return v_res_4019_;
}
}
static lean_object* _init_l_Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0___closed__1(void){
_start:
{
lean_object* v___x_4021_; lean_object* v___x_4022_; 
v___x_4021_ = ((lean_object*)(l_Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0___closed__0));
v___x_4022_ = l_Lean_stringToMessageData(v___x_4021_);
return v___x_4022_;
}
}
LEAN_EXPORT lean_object* l_Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0(lean_object* v_declName_4023_, lean_object* v___y_4024_, lean_object* v___y_4025_, lean_object* v___y_4026_, lean_object* v___y_4027_, lean_object* v___y_4028_, lean_object* v___y_4029_){
_start:
{
lean_object* v___f_4031_; lean_object* v___y_4033_; lean_object* v___y_4034_; lean_object* v___x_4075_; lean_object* v_env_4076_; lean_object* v___x_4077_; 
lean_inc(v_declName_4023_);
v___f_4031_ = lean_alloc_closure((void*)(l_Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0___lam__0___boxed), 2, 1);
lean_closure_set(v___f_4031_, 0, v_declName_4023_);
v___x_4075_ = lean_st_ref_get(v___y_4029_);
v_env_4076_ = lean_ctor_get(v___x_4075_, 0);
lean_inc_ref(v_env_4076_);
lean_dec(v___x_4075_);
v___x_4077_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_4076_, v_declName_4023_);
lean_dec_ref(v_env_4076_);
if (lean_obj_tag(v___x_4077_) == 0)
{
lean_dec(v_declName_4023_);
v___y_4033_ = v___y_4027_;
v___y_4034_ = v___y_4029_;
goto v___jp_4032_;
}
else
{
uint8_t v___x_4078_; lean_object* v___x_4079_; lean_object* v___x_4080_; lean_object* v___x_4081_; lean_object* v___x_4082_; lean_object* v___x_4083_; lean_object* v___x_4084_; 
lean_dec_ref_known(v___x_4077_, 1);
lean_dec_ref(v___f_4031_);
v___x_4078_ = 0;
v___x_4079_ = lean_obj_once(&l_Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0___closed__1, &l_Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0___closed__1_once, _init_l_Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0___closed__1);
v___x_4080_ = l_Lean_MessageData_ofConstName(v_declName_4023_, v___x_4078_);
v___x_4081_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4081_, 0, v___x_4079_);
lean_ctor_set(v___x_4081_, 1, v___x_4080_);
v___x_4082_ = lean_obj_once(&l_Lean_addMarkdownDocString___redArg___lam__5___closed__3, &l_Lean_addMarkdownDocString___redArg___lam__5___closed__3_once, _init_l_Lean_addMarkdownDocString___redArg___lam__5___closed__3);
v___x_4083_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4083_, 0, v___x_4081_);
lean_ctor_set(v___x_4083_, 1, v___x_4082_);
v___x_4084_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2___redArg(v___x_4083_, v___y_4024_, v___y_4025_, v___y_4026_, v___y_4027_, v___y_4028_, v___y_4029_);
return v___x_4084_;
}
v___jp_4032_:
{
lean_object* v___x_4035_; lean_object* v_env_4036_; lean_object* v_nextMacroScope_4037_; lean_object* v_ngen_4038_; lean_object* v_auxDeclNGen_4039_; lean_object* v_traceState_4040_; lean_object* v_messages_4041_; lean_object* v_infoState_4042_; lean_object* v_snapshotTasks_4043_; lean_object* v___x_4045_; uint8_t v_isShared_4046_; uint8_t v_isSharedCheck_4073_; 
v___x_4035_ = lean_st_ref_take(v___y_4034_);
v_env_4036_ = lean_ctor_get(v___x_4035_, 0);
v_nextMacroScope_4037_ = lean_ctor_get(v___x_4035_, 1);
v_ngen_4038_ = lean_ctor_get(v___x_4035_, 2);
v_auxDeclNGen_4039_ = lean_ctor_get(v___x_4035_, 3);
v_traceState_4040_ = lean_ctor_get(v___x_4035_, 4);
v_messages_4041_ = lean_ctor_get(v___x_4035_, 6);
v_infoState_4042_ = lean_ctor_get(v___x_4035_, 7);
v_snapshotTasks_4043_ = lean_ctor_get(v___x_4035_, 8);
v_isSharedCheck_4073_ = !lean_is_exclusive(v___x_4035_);
if (v_isSharedCheck_4073_ == 0)
{
lean_object* v_unused_4074_; 
v_unused_4074_ = lean_ctor_get(v___x_4035_, 5);
lean_dec(v_unused_4074_);
v___x_4045_ = v___x_4035_;
v_isShared_4046_ = v_isSharedCheck_4073_;
goto v_resetjp_4044_;
}
else
{
lean_inc(v_snapshotTasks_4043_);
lean_inc(v_infoState_4042_);
lean_inc(v_messages_4041_);
lean_inc(v_traceState_4040_);
lean_inc(v_auxDeclNGen_4039_);
lean_inc(v_ngen_4038_);
lean_inc(v_nextMacroScope_4037_);
lean_inc(v_env_4036_);
lean_dec(v___x_4035_);
v___x_4045_ = lean_box(0);
v_isShared_4046_ = v_isSharedCheck_4073_;
goto v_resetjp_4044_;
}
v_resetjp_4044_:
{
lean_object* v___x_4047_; lean_object* v___x_4048_; lean_object* v___x_4049_; lean_object* v___x_4050_; lean_object* v___x_4051_; lean_object* v___x_4053_; 
v___x_4047_ = l_Lean_docStringExt;
v___x_4048_ = lean_box(2);
v___x_4049_ = lean_obj_once(&l_Lean_addVersoDocStringCore___redArg___lam__0___closed__0, &l_Lean_addVersoDocStringCore___redArg___lam__0___closed__0_once, _init_l_Lean_addVersoDocStringCore___redArg___lam__0___closed__0);
v___x_4050_ = l_Lean_PersistentEnvExtension_modifyState___redArg(v___x_4047_, v_env_4036_, v___f_4031_, v___x_4048_, v___x_4049_);
v___x_4051_ = lean_obj_once(&l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__2, &l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__2_once, _init_l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__2);
if (v_isShared_4046_ == 0)
{
lean_ctor_set(v___x_4045_, 5, v___x_4051_);
lean_ctor_set(v___x_4045_, 0, v___x_4050_);
v___x_4053_ = v___x_4045_;
goto v_reusejp_4052_;
}
else
{
lean_object* v_reuseFailAlloc_4072_; 
v_reuseFailAlloc_4072_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_4072_, 0, v___x_4050_);
lean_ctor_set(v_reuseFailAlloc_4072_, 1, v_nextMacroScope_4037_);
lean_ctor_set(v_reuseFailAlloc_4072_, 2, v_ngen_4038_);
lean_ctor_set(v_reuseFailAlloc_4072_, 3, v_auxDeclNGen_4039_);
lean_ctor_set(v_reuseFailAlloc_4072_, 4, v_traceState_4040_);
lean_ctor_set(v_reuseFailAlloc_4072_, 5, v___x_4051_);
lean_ctor_set(v_reuseFailAlloc_4072_, 6, v_messages_4041_);
lean_ctor_set(v_reuseFailAlloc_4072_, 7, v_infoState_4042_);
lean_ctor_set(v_reuseFailAlloc_4072_, 8, v_snapshotTasks_4043_);
v___x_4053_ = v_reuseFailAlloc_4072_;
goto v_reusejp_4052_;
}
v_reusejp_4052_:
{
lean_object* v___x_4054_; lean_object* v___x_4055_; lean_object* v_mctx_4056_; lean_object* v_zetaDeltaFVarIds_4057_; lean_object* v_postponed_4058_; lean_object* v_diag_4059_; lean_object* v___x_4061_; uint8_t v_isShared_4062_; uint8_t v_isSharedCheck_4070_; 
v___x_4054_ = lean_st_ref_put(v___y_4034_, v___x_4053_);
v___x_4055_ = lean_st_ref_take(v___y_4033_);
v_mctx_4056_ = lean_ctor_get(v___x_4055_, 0);
v_zetaDeltaFVarIds_4057_ = lean_ctor_get(v___x_4055_, 2);
v_postponed_4058_ = lean_ctor_get(v___x_4055_, 3);
v_diag_4059_ = lean_ctor_get(v___x_4055_, 4);
v_isSharedCheck_4070_ = !lean_is_exclusive(v___x_4055_);
if (v_isSharedCheck_4070_ == 0)
{
lean_object* v_unused_4071_; 
v_unused_4071_ = lean_ctor_get(v___x_4055_, 1);
lean_dec(v_unused_4071_);
v___x_4061_ = v___x_4055_;
v_isShared_4062_ = v_isSharedCheck_4070_;
goto v_resetjp_4060_;
}
else
{
lean_inc(v_diag_4059_);
lean_inc(v_postponed_4058_);
lean_inc(v_zetaDeltaFVarIds_4057_);
lean_inc(v_mctx_4056_);
lean_dec(v___x_4055_);
v___x_4061_ = lean_box(0);
v_isShared_4062_ = v_isSharedCheck_4070_;
goto v_resetjp_4060_;
}
v_resetjp_4060_:
{
lean_object* v___x_4063_; lean_object* v___x_4064_; lean_object* v___x_4066_; 
v___x_4063_ = lean_box(0);
v___x_4064_ = lean_obj_once(&l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__3, &l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__3_once, _init_l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__3);
if (v_isShared_4062_ == 0)
{
lean_ctor_set(v___x_4061_, 1, v___x_4064_);
v___x_4066_ = v___x_4061_;
goto v_reusejp_4065_;
}
else
{
lean_object* v_reuseFailAlloc_4069_; 
v_reuseFailAlloc_4069_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4069_, 0, v_mctx_4056_);
lean_ctor_set(v_reuseFailAlloc_4069_, 1, v___x_4064_);
lean_ctor_set(v_reuseFailAlloc_4069_, 2, v_zetaDeltaFVarIds_4057_);
lean_ctor_set(v_reuseFailAlloc_4069_, 3, v_postponed_4058_);
lean_ctor_set(v_reuseFailAlloc_4069_, 4, v_diag_4059_);
v___x_4066_ = v_reuseFailAlloc_4069_;
goto v_reusejp_4065_;
}
v_reusejp_4065_:
{
lean_object* v___x_4067_; lean_object* v___x_4068_; 
v___x_4067_ = lean_st_ref_put(v___y_4033_, v___x_4066_);
v___x_4068_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4068_, 0, v___x_4063_);
return v___x_4068_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0___boxed(lean_object* v_declName_4085_, lean_object* v___y_4086_, lean_object* v___y_4087_, lean_object* v___y_4088_, lean_object* v___y_4089_, lean_object* v___y_4090_, lean_object* v___y_4091_, lean_object* v___y_4092_){
_start:
{
lean_object* v_res_4093_; 
v_res_4093_ = l_Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0(v_declName_4085_, v___y_4086_, v___y_4087_, v___y_4088_, v___y_4089_, v___y_4090_, v___y_4091_);
lean_dec(v___y_4091_);
lean_dec_ref(v___y_4090_);
lean_dec(v___y_4089_);
lean_dec_ref(v___y_4088_);
lean_dec(v___y_4087_);
lean_dec_ref(v___y_4086_);
return v_res_4093_;
}
}
static lean_object* _init_l_Lean_makeDocStringVerso___closed__1(void){
_start:
{
lean_object* v___x_4095_; lean_object* v___x_4096_; 
v___x_4095_ = ((lean_object*)(l_Lean_makeDocStringVerso___closed__0));
v___x_4096_ = l_Lean_stringToMessageData(v___x_4095_);
return v___x_4096_;
}
}
static lean_object* _init_l_Lean_makeDocStringVerso___closed__3(void){
_start:
{
lean_object* v___x_4098_; lean_object* v___x_4099_; 
v___x_4098_ = ((lean_object*)(l_Lean_makeDocStringVerso___closed__2));
v___x_4099_ = l_Lean_stringToMessageData(v___x_4098_);
return v___x_4099_;
}
}
static lean_object* _init_l_Lean_makeDocStringVerso___closed__5(void){
_start:
{
lean_object* v___x_4101_; lean_object* v___x_4102_; 
v___x_4101_ = ((lean_object*)(l_Lean_makeDocStringVerso___closed__4));
v___x_4102_ = l_Lean_stringToMessageData(v___x_4101_);
return v___x_4102_;
}
}
static lean_object* _init_l_Lean_makeDocStringVerso___closed__7(void){
_start:
{
lean_object* v___x_4104_; lean_object* v___x_4105_; 
v___x_4104_ = ((lean_object*)(l_Lean_makeDocStringVerso___closed__6));
v___x_4105_ = l_Lean_stringToMessageData(v___x_4104_);
return v___x_4105_;
}
}
LEAN_EXPORT lean_object* l_Lean_makeDocStringVerso(lean_object* v_declName_4106_, lean_object* v_a_4107_, lean_object* v_a_4108_, lean_object* v_a_4109_, lean_object* v_a_4110_, lean_object* v_a_4111_, lean_object* v_a_4112_){
_start:
{
lean_object* v___x_4114_; lean_object* v_env_4115_; lean_object* v_ref_4116_; uint8_t v___x_4117_; lean_object* v___x_4118_; 
v___x_4114_ = lean_st_ref_get(v_a_4112_);
v_env_4115_ = lean_ctor_get(v___x_4114_, 0);
lean_inc_ref(v_env_4115_);
lean_dec(v___x_4114_);
v_ref_4116_ = lean_ctor_get(v_a_4111_, 2);
v___x_4117_ = 1;
lean_inc(v_declName_4106_);
v___x_4118_ = l_Lean_findInternalDocString_x3f(v_env_4115_, v_declName_4106_, v___x_4117_);
if (lean_obj_tag(v___x_4118_) == 0)
{
lean_object* v_a_4119_; 
v_a_4119_ = lean_ctor_get(v___x_4118_, 0);
lean_inc(v_a_4119_);
lean_dec_ref_known(v___x_4118_, 1);
if (lean_obj_tag(v_a_4119_) == 1)
{
lean_object* v_val_4120_; 
v_val_4120_ = lean_ctor_get(v_a_4119_, 0);
lean_inc(v_val_4120_);
lean_dec_ref_known(v_a_4119_, 1);
if (lean_obj_tag(v_val_4120_) == 0)
{
lean_object* v_val_4121_; lean_object* v___x_4123_; uint8_t v_isShared_4124_; uint8_t v_isSharedCheck_4142_; 
v_val_4121_ = lean_ctor_get(v_val_4120_, 0);
v_isSharedCheck_4142_ = !lean_is_exclusive(v_val_4120_);
if (v_isSharedCheck_4142_ == 0)
{
v___x_4123_ = v_val_4120_;
v_isShared_4124_ = v_isSharedCheck_4142_;
goto v_resetjp_4122_;
}
else
{
lean_inc(v_val_4121_);
lean_dec(v_val_4120_);
v___x_4123_ = lean_box(0);
v_isShared_4124_ = v_isSharedCheck_4142_;
goto v_resetjp_4122_;
}
v_resetjp_4122_:
{
lean_object* v___x_4125_; 
v___x_4125_ = l_Lean_removeBuiltinDocString(v_declName_4106_);
if (lean_obj_tag(v___x_4125_) == 0)
{
lean_object* v___x_4126_; 
lean_dec_ref_known(v___x_4125_, 1);
lean_del_object(v___x_4123_);
lean_inc(v_declName_4106_);
v___x_4126_ = l_Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0(v_declName_4106_, v_a_4107_, v_a_4108_, v_a_4109_, v_a_4110_, v_a_4111_, v_a_4112_);
if (lean_obj_tag(v___x_4126_) == 0)
{
lean_object* v___x_4127_; 
lean_dec_ref_known(v___x_4126_, 1);
v___x_4127_ = l_Lean_addVersoDocStringFromString(v_declName_4106_, v_val_4121_, v_a_4107_, v_a_4108_, v_a_4109_, v_a_4110_, v_a_4111_, v_a_4112_);
return v___x_4127_;
}
else
{
lean_dec(v_val_4121_);
lean_dec(v_declName_4106_);
return v___x_4126_;
}
}
else
{
lean_object* v_a_4128_; lean_object* v___x_4130_; uint8_t v_isShared_4131_; uint8_t v_isSharedCheck_4141_; 
lean_dec(v_val_4121_);
lean_dec(v_declName_4106_);
v_a_4128_ = lean_ctor_get(v___x_4125_, 0);
v_isSharedCheck_4141_ = !lean_is_exclusive(v___x_4125_);
if (v_isSharedCheck_4141_ == 0)
{
v___x_4130_ = v___x_4125_;
v_isShared_4131_ = v_isSharedCheck_4141_;
goto v_resetjp_4129_;
}
else
{
lean_inc(v_a_4128_);
lean_dec(v___x_4125_);
v___x_4130_ = lean_box(0);
v_isShared_4131_ = v_isSharedCheck_4141_;
goto v_resetjp_4129_;
}
v_resetjp_4129_:
{
lean_object* v___x_4132_; lean_object* v___x_4134_; 
v___x_4132_ = lean_io_error_to_string(v_a_4128_);
if (v_isShared_4124_ == 0)
{
lean_ctor_set_tag(v___x_4123_, 3);
lean_ctor_set(v___x_4123_, 0, v___x_4132_);
v___x_4134_ = v___x_4123_;
goto v_reusejp_4133_;
}
else
{
lean_object* v_reuseFailAlloc_4140_; 
v_reuseFailAlloc_4140_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4140_, 0, v___x_4132_);
v___x_4134_ = v_reuseFailAlloc_4140_;
goto v_reusejp_4133_;
}
v_reusejp_4133_:
{
lean_object* v___x_4135_; lean_object* v___x_4136_; lean_object* v___x_4138_; 
v___x_4135_ = l_Lean_MessageData_ofFormat(v___x_4134_);
lean_inc(v_ref_4116_);
v___x_4136_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4136_, 0, v_ref_4116_);
lean_ctor_set(v___x_4136_, 1, v___x_4135_);
if (v_isShared_4131_ == 0)
{
lean_ctor_set(v___x_4130_, 0, v___x_4136_);
v___x_4138_ = v___x_4130_;
goto v_reusejp_4137_;
}
else
{
lean_object* v_reuseFailAlloc_4139_; 
v_reuseFailAlloc_4139_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4139_, 0, v___x_4136_);
v___x_4138_ = v_reuseFailAlloc_4139_;
goto v_reusejp_4137_;
}
v_reusejp_4137_:
{
return v___x_4138_;
}
}
}
}
}
}
else
{
lean_object* v___x_4143_; uint8_t v___x_4144_; lean_object* v___x_4145_; lean_object* v___x_4146_; lean_object* v___x_4147_; lean_object* v___x_4148_; lean_object* v___x_4149_; 
lean_dec(v_val_4120_);
v___x_4143_ = lean_obj_once(&l_Lean_makeDocStringVerso___closed__1, &l_Lean_makeDocStringVerso___closed__1_once, _init_l_Lean_makeDocStringVerso___closed__1);
v___x_4144_ = 0;
v___x_4145_ = l_Lean_MessageData_ofConstName(v_declName_4106_, v___x_4144_);
v___x_4146_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4146_, 0, v___x_4143_);
lean_ctor_set(v___x_4146_, 1, v___x_4145_);
v___x_4147_ = lean_obj_once(&l_Lean_makeDocStringVerso___closed__3, &l_Lean_makeDocStringVerso___closed__3_once, _init_l_Lean_makeDocStringVerso___closed__3);
v___x_4148_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4148_, 0, v___x_4146_);
lean_ctor_set(v___x_4148_, 1, v___x_4147_);
v___x_4149_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2___redArg(v___x_4148_, v_a_4107_, v_a_4108_, v_a_4109_, v_a_4110_, v_a_4111_, v_a_4112_);
return v___x_4149_;
}
}
else
{
lean_object* v___x_4150_; uint8_t v___x_4151_; lean_object* v___x_4152_; lean_object* v___x_4153_; lean_object* v___x_4154_; lean_object* v___x_4155_; lean_object* v___x_4156_; 
lean_dec(v_a_4119_);
v___x_4150_ = lean_obj_once(&l_Lean_makeDocStringVerso___closed__5, &l_Lean_makeDocStringVerso___closed__5_once, _init_l_Lean_makeDocStringVerso___closed__5);
v___x_4151_ = 0;
v___x_4152_ = l_Lean_MessageData_ofConstName(v_declName_4106_, v___x_4151_);
v___x_4153_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4153_, 0, v___x_4150_);
lean_ctor_set(v___x_4153_, 1, v___x_4152_);
v___x_4154_ = lean_obj_once(&l_Lean_makeDocStringVerso___closed__7, &l_Lean_makeDocStringVerso___closed__7_once, _init_l_Lean_makeDocStringVerso___closed__7);
v___x_4155_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4155_, 0, v___x_4153_);
lean_ctor_set(v___x_4155_, 1, v___x_4154_);
v___x_4156_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2___redArg(v___x_4155_, v_a_4107_, v_a_4108_, v_a_4109_, v_a_4110_, v_a_4111_, v_a_4112_);
return v___x_4156_;
}
}
else
{
lean_object* v_a_4157_; lean_object* v___x_4159_; uint8_t v_isShared_4160_; uint8_t v_isSharedCheck_4168_; 
lean_dec(v_declName_4106_);
v_a_4157_ = lean_ctor_get(v___x_4118_, 0);
v_isSharedCheck_4168_ = !lean_is_exclusive(v___x_4118_);
if (v_isSharedCheck_4168_ == 0)
{
v___x_4159_ = v___x_4118_;
v_isShared_4160_ = v_isSharedCheck_4168_;
goto v_resetjp_4158_;
}
else
{
lean_inc(v_a_4157_);
lean_dec(v___x_4118_);
v___x_4159_ = lean_box(0);
v_isShared_4160_ = v_isSharedCheck_4168_;
goto v_resetjp_4158_;
}
v_resetjp_4158_:
{
lean_object* v___x_4161_; lean_object* v___x_4162_; lean_object* v___x_4163_; lean_object* v___x_4164_; lean_object* v___x_4166_; 
v___x_4161_ = lean_io_error_to_string(v_a_4157_);
v___x_4162_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_4162_, 0, v___x_4161_);
v___x_4163_ = l_Lean_MessageData_ofFormat(v___x_4162_);
lean_inc(v_ref_4116_);
v___x_4164_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4164_, 0, v_ref_4116_);
lean_ctor_set(v___x_4164_, 1, v___x_4163_);
if (v_isShared_4160_ == 0)
{
lean_ctor_set(v___x_4159_, 0, v___x_4164_);
v___x_4166_ = v___x_4159_;
goto v_reusejp_4165_;
}
else
{
lean_object* v_reuseFailAlloc_4167_; 
v_reuseFailAlloc_4167_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4167_, 0, v___x_4164_);
v___x_4166_ = v_reuseFailAlloc_4167_;
goto v_reusejp_4165_;
}
v_reusejp_4165_:
{
return v___x_4166_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_makeDocStringVerso___boxed(lean_object* v_declName_4169_, lean_object* v_a_4170_, lean_object* v_a_4171_, lean_object* v_a_4172_, lean_object* v_a_4173_, lean_object* v_a_4174_, lean_object* v_a_4175_, lean_object* v_a_4176_){
_start:
{
lean_object* v_res_4177_; 
v_res_4177_ = l_Lean_makeDocStringVerso(v_declName_4169_, v_a_4170_, v_a_4171_, v_a_4172_, v_a_4173_, v_a_4174_, v_a_4175_);
lean_dec(v_a_4175_);
lean_dec_ref(v_a_4174_);
lean_dec(v_a_4173_);
lean_dec_ref(v_a_4172_);
lean_dec(v_a_4171_);
lean_dec_ref(v_a_4170_);
return v_res_4177_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0_spec__0(lean_object* v_00_u03b2_4178_, lean_object* v_k_4179_, lean_object* v_t_4180_, lean_object* v_h_4181_){
_start:
{
lean_object* v___x_4182_; 
v___x_4182_ = l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0_spec__0___redArg(v_k_4179_, v_t_4180_);
return v___x_4182_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0_spec__0___boxed(lean_object* v_00_u03b2_4183_, lean_object* v_k_4184_, lean_object* v_t_4185_, lean_object* v_h_4186_){
_start:
{
lean_object* v_res_4187_; 
v_res_4187_ = l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0_spec__0(v_00_u03b2_4183_, v_k_4184_, v_t_4185_, v_h_4186_);
lean_dec(v_k_4184_);
return v_res_4187_;
}
}
LEAN_EXPORT lean_object* l_Lean_addDocString(lean_object* v_declName_4188_, lean_object* v_binders_4189_, lean_object* v_docComment_4190_, lean_object* v_a_4191_, lean_object* v_a_4192_, lean_object* v_a_4193_, lean_object* v_a_4194_, lean_object* v_a_4195_, lean_object* v_a_4196_){
_start:
{
uint8_t v___x_4198_; lean_object* v___x_4199_; 
v___x_4198_ = l_Lean_isVersoDocComment(v_docComment_4190_);
v___x_4199_ = l_Lean_addDocStringOf(v___x_4198_, v_declName_4188_, v_binders_4189_, v_docComment_4190_, v_a_4191_, v_a_4192_, v_a_4193_, v_a_4194_, v_a_4195_, v_a_4196_);
return v___x_4199_;
}
}
LEAN_EXPORT lean_object* l_Lean_addDocString___boxed(lean_object* v_declName_4200_, lean_object* v_binders_4201_, lean_object* v_docComment_4202_, lean_object* v_a_4203_, lean_object* v_a_4204_, lean_object* v_a_4205_, lean_object* v_a_4206_, lean_object* v_a_4207_, lean_object* v_a_4208_, lean_object* v_a_4209_){
_start:
{
lean_object* v_res_4210_; 
v_res_4210_ = l_Lean_addDocString(v_declName_4200_, v_binders_4201_, v_docComment_4202_, v_a_4203_, v_a_4204_, v_a_4205_, v_a_4206_, v_a_4207_, v_a_4208_);
lean_dec(v_a_4208_);
lean_dec_ref(v_a_4207_);
lean_dec(v_a_4206_);
lean_dec_ref(v_a_4205_);
lean_dec(v_a_4204_);
lean_dec_ref(v_a_4203_);
return v_res_4210_;
}
}
LEAN_EXPORT lean_object* l_Lean_addDocString_x27(lean_object* v_declName_4211_, lean_object* v_binders_4212_, lean_object* v_docString_x3f_4213_, lean_object* v_a_4214_, lean_object* v_a_4215_, lean_object* v_a_4216_, lean_object* v_a_4217_, lean_object* v_a_4218_, lean_object* v_a_4219_){
_start:
{
if (lean_obj_tag(v_docString_x3f_4213_) == 0)
{
lean_object* v___x_4221_; lean_object* v___x_4222_; 
lean_dec(v_binders_4212_);
lean_dec(v_declName_4211_);
v___x_4221_ = lean_box(0);
v___x_4222_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4222_, 0, v___x_4221_);
return v___x_4222_;
}
else
{
lean_object* v_val_4223_; lean_object* v___x_4224_; 
v_val_4223_ = lean_ctor_get(v_docString_x3f_4213_, 0);
lean_inc(v_val_4223_);
lean_dec_ref_known(v_docString_x3f_4213_, 1);
v___x_4224_ = l_Lean_addDocString(v_declName_4211_, v_binders_4212_, v_val_4223_, v_a_4214_, v_a_4215_, v_a_4216_, v_a_4217_, v_a_4218_, v_a_4219_);
return v___x_4224_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_addDocString_x27___boxed(lean_object* v_declName_4225_, lean_object* v_binders_4226_, lean_object* v_docString_x3f_4227_, lean_object* v_a_4228_, lean_object* v_a_4229_, lean_object* v_a_4230_, lean_object* v_a_4231_, lean_object* v_a_4232_, lean_object* v_a_4233_, lean_object* v_a_4234_){
_start:
{
lean_object* v_res_4235_; 
v_res_4235_ = l_Lean_addDocString_x27(v_declName_4225_, v_binders_4226_, v_docString_x3f_4227_, v_a_4228_, v_a_4229_, v_a_4230_, v_a_4231_, v_a_4232_, v_a_4233_);
lean_dec(v_a_4233_);
lean_dec_ref(v_a_4232_);
lean_dec(v_a_4231_);
lean_dec_ref(v_a_4230_);
lean_dec(v_a_4229_);
lean_dec_ref(v_a_4228_);
return v_res_4235_;
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_addVersoModDocStringCore___at___00Lean_addVersoModDocString_spec__0_spec__0___redArg(lean_object* v_env_4236_, lean_object* v___y_4237_, lean_object* v___y_4238_){
_start:
{
lean_object* v___x_4240_; lean_object* v_nextMacroScope_4241_; lean_object* v_ngen_4242_; lean_object* v_auxDeclNGen_4243_; lean_object* v_traceState_4244_; lean_object* v_messages_4245_; lean_object* v_infoState_4246_; lean_object* v_snapshotTasks_4247_; lean_object* v___x_4249_; uint8_t v_isShared_4250_; uint8_t v_isSharedCheck_4273_; 
v___x_4240_ = lean_st_ref_take(v___y_4238_);
v_nextMacroScope_4241_ = lean_ctor_get(v___x_4240_, 1);
v_ngen_4242_ = lean_ctor_get(v___x_4240_, 2);
v_auxDeclNGen_4243_ = lean_ctor_get(v___x_4240_, 3);
v_traceState_4244_ = lean_ctor_get(v___x_4240_, 4);
v_messages_4245_ = lean_ctor_get(v___x_4240_, 6);
v_infoState_4246_ = lean_ctor_get(v___x_4240_, 7);
v_snapshotTasks_4247_ = lean_ctor_get(v___x_4240_, 8);
v_isSharedCheck_4273_ = !lean_is_exclusive(v___x_4240_);
if (v_isSharedCheck_4273_ == 0)
{
lean_object* v_unused_4274_; lean_object* v_unused_4275_; 
v_unused_4274_ = lean_ctor_get(v___x_4240_, 5);
lean_dec(v_unused_4274_);
v_unused_4275_ = lean_ctor_get(v___x_4240_, 0);
lean_dec(v_unused_4275_);
v___x_4249_ = v___x_4240_;
v_isShared_4250_ = v_isSharedCheck_4273_;
goto v_resetjp_4248_;
}
else
{
lean_inc(v_snapshotTasks_4247_);
lean_inc(v_infoState_4246_);
lean_inc(v_messages_4245_);
lean_inc(v_traceState_4244_);
lean_inc(v_auxDeclNGen_4243_);
lean_inc(v_ngen_4242_);
lean_inc(v_nextMacroScope_4241_);
lean_dec(v___x_4240_);
v___x_4249_ = lean_box(0);
v_isShared_4250_ = v_isSharedCheck_4273_;
goto v_resetjp_4248_;
}
v_resetjp_4248_:
{
lean_object* v___x_4251_; lean_object* v___x_4253_; 
v___x_4251_ = lean_obj_once(&l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__2, &l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__2_once, _init_l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__2);
if (v_isShared_4250_ == 0)
{
lean_ctor_set(v___x_4249_, 5, v___x_4251_);
lean_ctor_set(v___x_4249_, 0, v_env_4236_);
v___x_4253_ = v___x_4249_;
goto v_reusejp_4252_;
}
else
{
lean_object* v_reuseFailAlloc_4272_; 
v_reuseFailAlloc_4272_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_4272_, 0, v_env_4236_);
lean_ctor_set(v_reuseFailAlloc_4272_, 1, v_nextMacroScope_4241_);
lean_ctor_set(v_reuseFailAlloc_4272_, 2, v_ngen_4242_);
lean_ctor_set(v_reuseFailAlloc_4272_, 3, v_auxDeclNGen_4243_);
lean_ctor_set(v_reuseFailAlloc_4272_, 4, v_traceState_4244_);
lean_ctor_set(v_reuseFailAlloc_4272_, 5, v___x_4251_);
lean_ctor_set(v_reuseFailAlloc_4272_, 6, v_messages_4245_);
lean_ctor_set(v_reuseFailAlloc_4272_, 7, v_infoState_4246_);
lean_ctor_set(v_reuseFailAlloc_4272_, 8, v_snapshotTasks_4247_);
v___x_4253_ = v_reuseFailAlloc_4272_;
goto v_reusejp_4252_;
}
v_reusejp_4252_:
{
lean_object* v___x_4254_; lean_object* v___x_4255_; lean_object* v_mctx_4256_; lean_object* v_zetaDeltaFVarIds_4257_; lean_object* v_postponed_4258_; lean_object* v_diag_4259_; lean_object* v___x_4261_; uint8_t v_isShared_4262_; uint8_t v_isSharedCheck_4270_; 
v___x_4254_ = lean_st_ref_put(v___y_4238_, v___x_4253_);
v___x_4255_ = lean_st_ref_take(v___y_4237_);
v_mctx_4256_ = lean_ctor_get(v___x_4255_, 0);
v_zetaDeltaFVarIds_4257_ = lean_ctor_get(v___x_4255_, 2);
v_postponed_4258_ = lean_ctor_get(v___x_4255_, 3);
v_diag_4259_ = lean_ctor_get(v___x_4255_, 4);
v_isSharedCheck_4270_ = !lean_is_exclusive(v___x_4255_);
if (v_isSharedCheck_4270_ == 0)
{
lean_object* v_unused_4271_; 
v_unused_4271_ = lean_ctor_get(v___x_4255_, 1);
lean_dec(v_unused_4271_);
v___x_4261_ = v___x_4255_;
v_isShared_4262_ = v_isSharedCheck_4270_;
goto v_resetjp_4260_;
}
else
{
lean_inc(v_diag_4259_);
lean_inc(v_postponed_4258_);
lean_inc(v_zetaDeltaFVarIds_4257_);
lean_inc(v_mctx_4256_);
lean_dec(v___x_4255_);
v___x_4261_ = lean_box(0);
v_isShared_4262_ = v_isSharedCheck_4270_;
goto v_resetjp_4260_;
}
v_resetjp_4260_:
{
lean_object* v___x_4263_; lean_object* v___x_4264_; lean_object* v___x_4266_; 
v___x_4263_ = lean_box(0);
v___x_4264_ = lean_obj_once(&l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__3, &l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__3_once, _init_l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__3);
if (v_isShared_4262_ == 0)
{
lean_ctor_set(v___x_4261_, 1, v___x_4264_);
v___x_4266_ = v___x_4261_;
goto v_reusejp_4265_;
}
else
{
lean_object* v_reuseFailAlloc_4269_; 
v_reuseFailAlloc_4269_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4269_, 0, v_mctx_4256_);
lean_ctor_set(v_reuseFailAlloc_4269_, 1, v___x_4264_);
lean_ctor_set(v_reuseFailAlloc_4269_, 2, v_zetaDeltaFVarIds_4257_);
lean_ctor_set(v_reuseFailAlloc_4269_, 3, v_postponed_4258_);
lean_ctor_set(v_reuseFailAlloc_4269_, 4, v_diag_4259_);
v___x_4266_ = v_reuseFailAlloc_4269_;
goto v_reusejp_4265_;
}
v_reusejp_4265_:
{
lean_object* v___x_4267_; lean_object* v___x_4268_; 
v___x_4267_ = lean_st_ref_put(v___y_4237_, v___x_4266_);
v___x_4268_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4268_, 0, v___x_4263_);
return v___x_4268_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_addVersoModDocStringCore___at___00Lean_addVersoModDocString_spec__0_spec__0___redArg___boxed(lean_object* v_env_4276_, lean_object* v___y_4277_, lean_object* v___y_4278_, lean_object* v___y_4279_){
_start:
{
lean_object* v_res_4280_; 
v_res_4280_ = l_Lean_setEnv___at___00Lean_addVersoModDocStringCore___at___00Lean_addVersoModDocString_spec__0_spec__0___redArg(v_env_4276_, v___y_4277_, v___y_4278_);
lean_dec(v___y_4278_);
lean_dec(v___y_4277_);
return v_res_4280_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_addVersoModDocStringCore___at___00Lean_addVersoModDocString_spec__0_spec__1(lean_object* v_n_4281_, lean_object* v_as_4282_, size_t v_i_4283_, size_t v_stop_4284_, lean_object* v_b_4285_){
_start:
{
uint8_t v___x_4286_; 
v___x_4286_ = lean_usize_dec_eq(v_i_4283_, v_stop_4284_);
if (v___x_4286_ == 0)
{
lean_object* v___x_4287_; lean_object* v_index_4288_; lean_object* v_sourceString_4289_; lean_object* v_imports_4290_; lean_object* v_currNamespace_4291_; lean_object* v_openDecls_4292_; lean_object* v_options_4293_; lean_object* v_check_4294_; lean_object* v___x_4296_; uint8_t v_isShared_4297_; uint8_t v_isSharedCheck_4310_; 
v___x_4287_ = lean_array_uget(v_as_4282_, v_i_4283_);
v_index_4288_ = lean_ctor_get(v___x_4287_, 1);
v_sourceString_4289_ = lean_ctor_get(v___x_4287_, 2);
v_imports_4290_ = lean_ctor_get(v___x_4287_, 3);
v_currNamespace_4291_ = lean_ctor_get(v___x_4287_, 4);
v_openDecls_4292_ = lean_ctor_get(v___x_4287_, 5);
v_options_4293_ = lean_ctor_get(v___x_4287_, 6);
v_check_4294_ = lean_ctor_get(v___x_4287_, 7);
v_isSharedCheck_4310_ = !lean_is_exclusive(v___x_4287_);
if (v_isSharedCheck_4310_ == 0)
{
lean_object* v_unused_4311_; 
v_unused_4311_ = lean_ctor_get(v___x_4287_, 0);
lean_dec(v_unused_4311_);
v___x_4296_ = v___x_4287_;
v_isShared_4297_ = v_isSharedCheck_4310_;
goto v_resetjp_4295_;
}
else
{
lean_inc(v_check_4294_);
lean_inc(v_options_4293_);
lean_inc(v_openDecls_4292_);
lean_inc(v_currNamespace_4291_);
lean_inc(v_imports_4290_);
lean_inc(v_sourceString_4289_);
lean_inc(v_index_4288_);
lean_dec(v___x_4287_);
v___x_4296_ = lean_box(0);
v_isShared_4297_ = v_isSharedCheck_4310_;
goto v_resetjp_4295_;
}
v_resetjp_4295_:
{
lean_object* v___x_4298_; lean_object* v_toEnvExtension_4299_; lean_object* v_asyncMode_4300_; lean_object* v___x_4301_; lean_object* v___x_4303_; 
v___x_4298_ = l_Lean_Doc_deferredCheckExt;
v_toEnvExtension_4299_ = lean_ctor_get(v___x_4298_, 0);
v_asyncMode_4300_ = lean_ctor_get(v_toEnvExtension_4299_, 2);
lean_inc(v_n_4281_);
v___x_4301_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4301_, 0, v_n_4281_);
if (v_isShared_4297_ == 0)
{
lean_ctor_set(v___x_4296_, 0, v___x_4301_);
v___x_4303_ = v___x_4296_;
goto v_reusejp_4302_;
}
else
{
lean_object* v_reuseFailAlloc_4309_; 
v_reuseFailAlloc_4309_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v_reuseFailAlloc_4309_, 0, v___x_4301_);
lean_ctor_set(v_reuseFailAlloc_4309_, 1, v_index_4288_);
lean_ctor_set(v_reuseFailAlloc_4309_, 2, v_sourceString_4289_);
lean_ctor_set(v_reuseFailAlloc_4309_, 3, v_imports_4290_);
lean_ctor_set(v_reuseFailAlloc_4309_, 4, v_currNamespace_4291_);
lean_ctor_set(v_reuseFailAlloc_4309_, 5, v_openDecls_4292_);
lean_ctor_set(v_reuseFailAlloc_4309_, 6, v_options_4293_);
lean_ctor_set(v_reuseFailAlloc_4309_, 7, v_check_4294_);
v___x_4303_ = v_reuseFailAlloc_4309_;
goto v_reusejp_4302_;
}
v_reusejp_4302_:
{
lean_object* v___x_4304_; lean_object* v___x_4305_; size_t v___x_4306_; size_t v___x_4307_; 
v___x_4304_ = lean_obj_once(&l_Lean_addVersoDocStringCore___redArg___lam__0___closed__0, &l_Lean_addVersoDocStringCore___redArg___lam__0___closed__0_once, _init_l_Lean_addVersoDocStringCore___redArg___lam__0___closed__0);
v___x_4305_ = l_Lean_PersistentEnvExtension_addEntry___redArg(v___x_4298_, v_b_4285_, v___x_4303_, v_asyncMode_4300_, v___x_4304_);
v___x_4306_ = ((size_t)1ULL);
v___x_4307_ = lean_usize_add(v_i_4283_, v___x_4306_);
v_i_4283_ = v___x_4307_;
v_b_4285_ = v___x_4305_;
goto _start;
}
}
}
else
{
lean_dec(v_n_4281_);
return v_b_4285_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_addVersoModDocStringCore___at___00Lean_addVersoModDocString_spec__0_spec__1___boxed(lean_object* v_n_4312_, lean_object* v_as_4313_, lean_object* v_i_4314_, lean_object* v_stop_4315_, lean_object* v_b_4316_){
_start:
{
size_t v_i_boxed_4317_; size_t v_stop_boxed_4318_; lean_object* v_res_4319_; 
v_i_boxed_4317_ = lean_unbox_usize(v_i_4314_);
lean_dec(v_i_4314_);
v_stop_boxed_4318_ = lean_unbox_usize(v_stop_4315_);
lean_dec(v_stop_4315_);
v_res_4319_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_addVersoModDocStringCore___at___00Lean_addVersoModDocString_spec__0_spec__1(v_n_4312_, v_as_4313_, v_i_boxed_4317_, v_stop_boxed_4318_, v_b_4316_);
lean_dec_ref(v_as_4313_);
return v_res_4319_;
}
}
LEAN_EXPORT lean_object* l_Lean_addVersoModDocStringCore___at___00Lean_addVersoModDocString_spec__0(lean_object* v_docs_4320_, lean_object* v_deferred_4321_, lean_object* v___y_4322_, lean_object* v___y_4323_, lean_object* v___y_4324_, lean_object* v___y_4325_, lean_object* v___y_4326_, lean_object* v___y_4327_){
_start:
{
lean_object* v___x_4329_; lean_object* v_env_4330_; lean_object* v___x_4331_; uint8_t v___x_4332_; 
v___x_4329_ = lean_st_ref_get(v___y_4327_);
v_env_4330_ = lean_ctor_get(v___x_4329_, 0);
lean_inc_ref(v_env_4330_);
lean_dec(v___x_4329_);
v___x_4331_ = l_Lean_getMainModuleDoc(v_env_4330_);
v___x_4332_ = l_Lean_PersistentArray_isEmpty___redArg(v___x_4331_);
lean_dec_ref(v___x_4331_);
if (v___x_4332_ == 0)
{
lean_object* v___x_4333_; lean_object* v___x_4334_; 
lean_dec_ref(v_docs_4320_);
v___x_4333_ = lean_obj_once(&l_Lean_addVersoModDocStringCore___redArg___lam__3___closed__1, &l_Lean_addVersoModDocStringCore___redArg___lam__3___closed__1_once, _init_l_Lean_addVersoModDocStringCore___redArg___lam__3___closed__1);
v___x_4334_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2___redArg(v___x_4333_, v___y_4322_, v___y_4323_, v___y_4324_, v___y_4325_, v___y_4326_, v___y_4327_);
return v___x_4334_;
}
else
{
lean_object* v___x_4335_; lean_object* v_env_4336_; lean_object* v___x_4337_; lean_object* v_size_4338_; lean_object* v___x_4339_; lean_object* v_env_4340_; lean_object* v___x_4341_; 
v___x_4335_ = lean_st_ref_get(v___y_4327_);
v_env_4336_ = lean_ctor_get(v___x_4335_, 0);
lean_inc_ref(v_env_4336_);
lean_dec(v___x_4335_);
v___x_4337_ = l_Lean_getMainVersoModuleDocs(v_env_4336_);
v_size_4338_ = lean_ctor_get(v___x_4337_, 2);
lean_inc(v_size_4338_);
lean_dec_ref(v___x_4337_);
v___x_4339_ = lean_st_ref_get(v___y_4327_);
v_env_4340_ = lean_ctor_get(v___x_4339_, 0);
lean_inc_ref(v_env_4340_);
lean_dec(v___x_4339_);
v___x_4341_ = l_Lean_addVersoModuleDocSnippet(v_env_4340_, v_docs_4320_);
if (lean_obj_tag(v___x_4341_) == 0)
{
lean_object* v_a_4342_; lean_object* v___x_4343_; lean_object* v___x_4344_; lean_object* v___x_4345_; lean_object* v___x_4346_; lean_object* v___x_4347_; 
lean_dec(v_size_4338_);
v_a_4342_ = lean_ctor_get(v___x_4341_, 0);
lean_inc(v_a_4342_);
lean_dec_ref_known(v___x_4341_, 1);
v___x_4343_ = lean_obj_once(&l_Lean_addVersoModDocStringCore___redArg___lam__1___closed__1, &l_Lean_addVersoModDocStringCore___redArg___lam__1___closed__1_once, _init_l_Lean_addVersoModDocStringCore___redArg___lam__1___closed__1);
v___x_4344_ = l_Lean_stringToMessageData(v_a_4342_);
v___x_4345_ = l_Lean_indentD(v___x_4344_);
v___x_4346_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4346_, 0, v___x_4343_);
lean_ctor_set(v___x_4346_, 1, v___x_4345_);
v___x_4347_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2___redArg(v___x_4346_, v___y_4322_, v___y_4323_, v___y_4324_, v___y_4325_, v___y_4326_, v___y_4327_);
return v___x_4347_;
}
else
{
lean_object* v_a_4348_; lean_object* v___x_4349_; lean_object* v___x_4350_; uint8_t v___x_4351_; 
v_a_4348_ = lean_ctor_get(v___x_4341_, 0);
lean_inc(v_a_4348_);
lean_dec_ref_known(v___x_4341_, 1);
v___x_4349_ = lean_unsigned_to_nat(0u);
v___x_4350_ = lean_array_get_size(v_deferred_4321_);
v___x_4351_ = lean_nat_dec_lt(v___x_4349_, v___x_4350_);
if (v___x_4351_ == 0)
{
lean_object* v___x_4352_; 
lean_dec(v_size_4338_);
v___x_4352_ = l_Lean_setEnv___at___00Lean_addVersoModDocStringCore___at___00Lean_addVersoModDocString_spec__0_spec__0___redArg(v_a_4348_, v___y_4325_, v___y_4327_);
return v___x_4352_;
}
else
{
size_t v___x_4353_; size_t v___x_4354_; lean_object* v___x_4355_; lean_object* v___x_4356_; 
v___x_4353_ = ((size_t)0ULL);
v___x_4354_ = lean_usize_of_nat(v___x_4350_);
v___x_4355_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_addVersoModDocStringCore___at___00Lean_addVersoModDocString_spec__0_spec__1(v_size_4338_, v_deferred_4321_, v___x_4353_, v___x_4354_, v_a_4348_);
v___x_4356_ = l_Lean_setEnv___at___00Lean_addVersoModDocStringCore___at___00Lean_addVersoModDocString_spec__0_spec__0___redArg(v___x_4355_, v___y_4325_, v___y_4327_);
return v___x_4356_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addVersoModDocStringCore___at___00Lean_addVersoModDocString_spec__0___boxed(lean_object* v_docs_4357_, lean_object* v_deferred_4358_, lean_object* v___y_4359_, lean_object* v___y_4360_, lean_object* v___y_4361_, lean_object* v___y_4362_, lean_object* v___y_4363_, lean_object* v___y_4364_, lean_object* v___y_4365_){
_start:
{
lean_object* v_res_4366_; 
v_res_4366_ = l_Lean_addVersoModDocStringCore___at___00Lean_addVersoModDocString_spec__0(v_docs_4357_, v_deferred_4358_, v___y_4359_, v___y_4360_, v___y_4361_, v___y_4362_, v___y_4363_, v___y_4364_);
lean_dec(v___y_4364_);
lean_dec_ref(v___y_4363_);
lean_dec(v___y_4362_);
lean_dec_ref(v___y_4361_);
lean_dec(v___y_4360_);
lean_dec_ref(v___y_4359_);
lean_dec_ref(v_deferred_4358_);
return v_res_4366_;
}
}
LEAN_EXPORT lean_object* l_Lean_addVersoModDocString(lean_object* v_range_4367_, lean_object* v_docComment_4368_, lean_object* v_a_4369_, lean_object* v_a_4370_, lean_object* v_a_4371_, lean_object* v_a_4372_, lean_object* v_a_4373_, lean_object* v_a_4374_){
_start:
{
lean_object* v___x_4376_; 
v___x_4376_ = l_Lean_versoModDocString(v_range_4367_, v_docComment_4368_, v_a_4369_, v_a_4370_, v_a_4371_, v_a_4372_, v_a_4373_, v_a_4374_);
if (lean_obj_tag(v___x_4376_) == 0)
{
lean_object* v_a_4377_; lean_object* v_fst_4378_; lean_object* v_snd_4379_; lean_object* v___x_4380_; 
v_a_4377_ = lean_ctor_get(v___x_4376_, 0);
lean_inc(v_a_4377_);
lean_dec_ref_known(v___x_4376_, 1);
v_fst_4378_ = lean_ctor_get(v_a_4377_, 0);
lean_inc(v_fst_4378_);
v_snd_4379_ = lean_ctor_get(v_a_4377_, 1);
lean_inc(v_snd_4379_);
lean_dec(v_a_4377_);
v___x_4380_ = l_Lean_addVersoModDocStringCore___at___00Lean_addVersoModDocString_spec__0(v_fst_4378_, v_snd_4379_, v_a_4369_, v_a_4370_, v_a_4371_, v_a_4372_, v_a_4373_, v_a_4374_);
lean_dec(v_snd_4379_);
return v___x_4380_;
}
else
{
lean_object* v_a_4381_; lean_object* v___x_4383_; uint8_t v_isShared_4384_; uint8_t v_isSharedCheck_4388_; 
v_a_4381_ = lean_ctor_get(v___x_4376_, 0);
v_isSharedCheck_4388_ = !lean_is_exclusive(v___x_4376_);
if (v_isSharedCheck_4388_ == 0)
{
v___x_4383_ = v___x_4376_;
v_isShared_4384_ = v_isSharedCheck_4388_;
goto v_resetjp_4382_;
}
else
{
lean_inc(v_a_4381_);
lean_dec(v___x_4376_);
v___x_4383_ = lean_box(0);
v_isShared_4384_ = v_isSharedCheck_4388_;
goto v_resetjp_4382_;
}
v_resetjp_4382_:
{
lean_object* v___x_4386_; 
if (v_isShared_4384_ == 0)
{
v___x_4386_ = v___x_4383_;
goto v_reusejp_4385_;
}
else
{
lean_object* v_reuseFailAlloc_4387_; 
v_reuseFailAlloc_4387_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4387_, 0, v_a_4381_);
v___x_4386_ = v_reuseFailAlloc_4387_;
goto v_reusejp_4385_;
}
v_reusejp_4385_:
{
return v___x_4386_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addVersoModDocString___boxed(lean_object* v_range_4389_, lean_object* v_docComment_4390_, lean_object* v_a_4391_, lean_object* v_a_4392_, lean_object* v_a_4393_, lean_object* v_a_4394_, lean_object* v_a_4395_, lean_object* v_a_4396_, lean_object* v_a_4397_){
_start:
{
lean_object* v_res_4398_; 
v_res_4398_ = l_Lean_addVersoModDocString(v_range_4389_, v_docComment_4390_, v_a_4391_, v_a_4392_, v_a_4393_, v_a_4394_, v_a_4395_, v_a_4396_);
lean_dec(v_a_4396_);
lean_dec_ref(v_a_4395_);
lean_dec(v_a_4394_);
lean_dec_ref(v_a_4393_);
lean_dec(v_a_4392_);
lean_dec_ref(v_a_4391_);
lean_dec(v_docComment_4390_);
return v_res_4398_;
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_addVersoModDocStringCore___at___00Lean_addVersoModDocString_spec__0_spec__0(lean_object* v_env_4399_, lean_object* v___y_4400_, lean_object* v___y_4401_, lean_object* v___y_4402_, lean_object* v___y_4403_, lean_object* v___y_4404_, lean_object* v___y_4405_){
_start:
{
lean_object* v___x_4407_; 
v___x_4407_ = l_Lean_setEnv___at___00Lean_addVersoModDocStringCore___at___00Lean_addVersoModDocString_spec__0_spec__0___redArg(v_env_4399_, v___y_4403_, v___y_4405_);
return v___x_4407_;
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_addVersoModDocStringCore___at___00Lean_addVersoModDocString_spec__0_spec__0___boxed(lean_object* v_env_4408_, lean_object* v___y_4409_, lean_object* v___y_4410_, lean_object* v___y_4411_, lean_object* v___y_4412_, lean_object* v___y_4413_, lean_object* v___y_4414_, lean_object* v___y_4415_){
_start:
{
lean_object* v_res_4416_; 
v_res_4416_ = l_Lean_setEnv___at___00Lean_addVersoModDocStringCore___at___00Lean_addVersoModDocString_spec__0_spec__0(v_env_4408_, v___y_4409_, v___y_4410_, v___y_4411_, v___y_4412_, v___y_4413_, v___y_4414_);
lean_dec(v___y_4414_);
lean_dec_ref(v___y_4413_);
lean_dec(v___y_4412_);
lean_dec_ref(v___y_4411_);
lean_dec(v___y_4410_);
lean_dec_ref(v___y_4409_);
return v_res_4416_;
}
}
lean_object* runtime_initialize_Lean_Elab_DocString(uint8_t builtin);
lean_object* runtime_initialize_Lean_DocString_DeferredCheck(uint8_t builtin);
lean_object* runtime_initialize_Lean_DocString_Parser(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Term_TermElabM(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_DocString_Add(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Elab_DocString(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_DocString_DeferredCheck(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_DocString_Parser(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Term_TermElabM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_DocString_Add(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Elab_DocString(uint8_t builtin);
lean_object* initialize_Lean_DocString_DeferredCheck(uint8_t builtin);
lean_object* initialize_Lean_DocString_Parser(uint8_t builtin);
lean_object* initialize_Lean_Elab_Term_TermElabM(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_DocString_Add(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Elab_DocString(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_DocString_DeferredCheck(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_DocString_Parser(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Term_TermElabM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_DocString_Add(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_DocString_Add(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_DocString_Add(builtin);
}
#ifdef __cplusplus
}
#endif

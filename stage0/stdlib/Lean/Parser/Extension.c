// Lean compiler output
// Module: Lean.Parser.Extension
// Imports: public import Lean.Parser.Basic public import Lean.ScopedEnvExtension import Lean.BuiltinDocAttr
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
lean_object* l_Lean_Name_beq___boxed(lean_object*, lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(lean_object*, uint8_t);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* lean_mk_io_user_error(lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_Parser_SyntaxStack_size(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Lean_Parser_SyntaxStack_get_x21(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_formatStx(lean_object*, lean_object*, uint8_t);
extern lean_object* l_Std_Format_defWidth;
lean_object* l_Std_Format_pretty(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_ParserState_mkUnexpectedError(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Environment_find_x3f(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_ConstantInfo_type(lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Name_eraseMacroScopes(lean_object*);
lean_object* l_Lean_Data_Trie_find_x3f___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Data_Trie_insert___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* l_Lean_Data_Trie_empty___redArg();
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Parser_SyntaxNodeKindSet_insert(lean_object*, lean_object*);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
lean_object* lean_array_get_size(lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_push(lean_object*, lean_object*);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_mul(size_t, size_t);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_List_eraseDupsBy___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Parser_TokenMap_insert___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_leadingNode(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_trailingNode(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_symbol(lean_object*);
lean_object* l_Lean_Parser_nonReservedSymbol(lean_object*, uint8_t);
lean_object* l_Lean_Parser_categoryParser(lean_object*, lean_object*);
lean_object* l_Lean_Environment_evalConst___redArg(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Parser_nodeWithAntiquot(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Parser_withCache(lean_object*, lean_object*);
lean_object* l_Lean_Parser_sepBy(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Parser_sepBy1(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Parser_unicodeSymbol___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_registerScopedEnvExtensionUnsafe___redArg(lean_object*);
lean_object* l_Lean_ScopedEnvExtension_getState___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ResolveName_resolveGlobalName(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_to_list(lean_object*);
uint8_t l_List_isEmpty___redArg(lean_object*);
lean_object* l_Lean_registerEnvExtension___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Environment_0__Lean_EnvExtension_getStateUnsafe___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Environment_setExporting(lean_object*, uint8_t);
lean_object* l_Lean_Parser_ParserState_stackSize(lean_object*);
uint8_t l_Lean_Parser_instBEqError_beq(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Parser_categoryParserFn(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
uint8_t l_Lean_Name_isPrefixOf(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_register_option(lean_object*, lean_object*);
lean_object* l_Lean_Parser_adaptUncacheableContextFn(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_io_error_to_string(lean_object*);
lean_object* l_unsafeBaseIO___redArg(lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Lean_ScopedEnvExtension_addEntry___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_Attribute_Builtin_getPrio(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ScopedEnvExtension_addCore___redArg(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
lean_object* l_Lean_MessageData_ofConstName(lean_object*, uint8_t);
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
uint8_t l_Lean_Exception_isRuntime(lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
lean_object* l_Lean_registerBuiltinAttribute(lean_object*);
lean_object* l_Lean_registerAttributeImplBuilder(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getNumArgs(lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_isNatLit_x3f(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Lean_Parser_SyntaxStack_back(lean_object*);
lean_object* l_Lean_Syntax_isStrLit_x3f(lean_object*);
lean_object* l_Lean_Syntax_getId(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_mkAtom(lean_object*);
lean_object* l_Lean_Name_hash___override___boxed(lean_object*);
lean_object* l_Lean_PersistentHashMap_find_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_toString(lean_object*, uint8_t);
lean_object* l_Lean_Parser_mkAntiquot(lean_object*, lean_object*, uint8_t, uint8_t);
lean_object* l_Lean_Parser_prattParser(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_declareBuiltinDocStringAndRanges(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
extern lean_object* l_Lean_instInhabitedName;
uint8_t l_Lean_Name_isAnonymous(lean_object*);
uint8_t l_Lean_Environment_contains(lean_object*, lean_object*, uint8_t);
extern lean_object* l_Lean_Options_empty;
lean_object* l_Lean_Environment_getModuleIdxFor_x3f(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_note(lean_object*);
lean_object* l_Lean_Environment_header(lean_object*);
lean_object* l_Lean_EnvironmentHeader_moduleNames(lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_isPrivateName(lean_object*);
extern lean_object* l_Lean_unknownIdentifierMessageTag;
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l___private_Lean_ToExpr_0__Lean_Name_toExprAux(lean_object*);
lean_object* l_Lean_mkRawNatLit(lean_object*);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
lean_object* l_Lean_declareBuiltin(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_instBEqAttributeKind_beq(uint8_t, uint8_t);
lean_object* l_Lean_Attribute_Builtin_ensureNoArgs(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_initializing();
uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_NameMap_contains_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_ScopedEnvExtension_activateScoped___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ResolveName_resolveNamespace(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_swap(lean_object*, lean_object*);
lean_object* l_Lean_privateToUserName(lean_object*);
lean_object* l_Lean_Parser_whitespace(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getKind(lean_object*);
lean_object* l_Lean_Syntax_getArgs(lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
extern lean_object* l_Lean_Parser_categoryParserFnRef;
uint8_t l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(lean_object*, lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Lean_FileMap_ofString(lean_object*);
lean_object* l_Lean_FileMap_toPosition(lean_object*, lean_object*);
lean_object* l_String_crlfToLf(lean_object*);
lean_object* l_Lean_FileMap_ofPosition(lean_object*, lean_object*);
uint8_t lean_internal_is_stage0(lean_object*);
extern lean_object* l_Lean_Parser_SyntaxStack_empty;
lean_object* l_Lean_Parser_initCacheForInput(lean_object*);
lean_object* l_Lean_Parser_adaptCacheableContextFn(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_registerAttributeOfBuilder(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_andthenFn(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_ParserFn_run(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_ParserState_allErrors(lean_object*);
lean_object* l_Lean_Parser_ParserState_toErrorMsg(lean_object*, lean_object*);
uint8_t l_Lean_Parser_InputContext_atEnd(lean_object*, lean_object*);
lean_object* l_Lean_Parser_ParserState_mkError(lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__0_00___x40_Lean_Parser_Extension_3332318574____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__0_00___x40_Lean_Parser_Extension_3332318574____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn_00___x40_Lean_Parser_Extension_3332318574____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn_00___x40_Lean_Parser_Extension_3332318574____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_builtinTokenTable;
static lean_once_cell_t l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__0_00___x40_Lean_Parser_Extension_848551512____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__0_00___x40_Lean_Parser_Extension_848551512____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__1_00___x40_Lean_Parser_Extension_848551512____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__1_00___x40_Lean_Parser_Extension_848551512____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn_00___x40_Lean_Parser_Extension_848551512____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn_00___x40_Lean_Parser_Extension_848551512____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_builtinSyntaxNodeKindSetRef;
LEAN_EXPORT lean_object* l_Lean_Parser_registerBuiltinNodeKind(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_registerBuiltinNodeKind___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__0_00___x40_Lean_Parser_Extension_3496418232____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "choice"};
static const lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__0_00___x40_Lean_Parser_Extension_3496418232____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__0_00___x40_Lean_Parser_Extension_3496418232____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__1_00___x40_Lean_Parser_Extension_3496418232____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__0_00___x40_Lean_Parser_Extension_3496418232____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(59, 66, 148, 42, 181, 100, 85, 166)}};
static const lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__1_00___x40_Lean_Parser_Extension_3496418232____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__1_00___x40_Lean_Parser_Extension_3496418232____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Extension_3496418232____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ident"};
static const lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Extension_3496418232____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Extension_3496418232____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Extension_3496418232____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Extension_3496418232____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(52, 159, 208, 51, 14, 60, 6, 71)}};
static const lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Extension_3496418232____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Extension_3496418232____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__4_00___x40_Lean_Parser_Extension_3496418232____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "str"};
static const lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__4_00___x40_Lean_Parser_Extension_3496418232____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__4_00___x40_Lean_Parser_Extension_3496418232____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__5_00___x40_Lean_Parser_Extension_3496418232____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__4_00___x40_Lean_Parser_Extension_3496418232____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(255, 188, 142, 1, 190, 33, 34, 128)}};
static const lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__5_00___x40_Lean_Parser_Extension_3496418232____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__5_00___x40_Lean_Parser_Extension_3496418232____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__6_00___x40_Lean_Parser_Extension_3496418232____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "num"};
static const lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__6_00___x40_Lean_Parser_Extension_3496418232____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__6_00___x40_Lean_Parser_Extension_3496418232____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__7_00___x40_Lean_Parser_Extension_3496418232____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__6_00___x40_Lean_Parser_Extension_3496418232____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(227, 68, 22, 222, 47, 51, 204, 84)}};
static const lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__7_00___x40_Lean_Parser_Extension_3496418232____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__7_00___x40_Lean_Parser_Extension_3496418232____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__8_00___x40_Lean_Parser_Extension_3496418232____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "scientific"};
static const lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__8_00___x40_Lean_Parser_Extension_3496418232____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__8_00___x40_Lean_Parser_Extension_3496418232____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__9_00___x40_Lean_Parser_Extension_3496418232____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__8_00___x40_Lean_Parser_Extension_3496418232____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(219, 104, 254, 176, 65, 57, 101, 179)}};
static const lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__9_00___x40_Lean_Parser_Extension_3496418232____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__9_00___x40_Lean_Parser_Extension_3496418232____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__10_00___x40_Lean_Parser_Extension_3496418232____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "char"};
static const lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__10_00___x40_Lean_Parser_Extension_3496418232____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__10_00___x40_Lean_Parser_Extension_3496418232____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__11_00___x40_Lean_Parser_Extension_3496418232____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__10_00___x40_Lean_Parser_Extension_3496418232____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(43, 243, 213, 66, 253, 140, 152, 232)}};
static const lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__11_00___x40_Lean_Parser_Extension_3496418232____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__11_00___x40_Lean_Parser_Extension_3496418232____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__12_00___x40_Lean_Parser_Extension_3496418232____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "name"};
static const lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__12_00___x40_Lean_Parser_Extension_3496418232____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__12_00___x40_Lean_Parser_Extension_3496418232____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__13_00___x40_Lean_Parser_Extension_3496418232____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__12_00___x40_Lean_Parser_Extension_3496418232____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(84, 246, 234, 130, 97, 205, 144, 82)}};
static const lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__13_00___x40_Lean_Parser_Extension_3496418232____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__13_00___x40_Lean_Parser_Extension_3496418232____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__14_00___x40_Lean_Parser_Extension_3496418232____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "fieldIdx"};
static const lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__14_00___x40_Lean_Parser_Extension_3496418232____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__14_00___x40_Lean_Parser_Extension_3496418232____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__15_00___x40_Lean_Parser_Extension_3496418232____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__14_00___x40_Lean_Parser_Extension_3496418232____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(243, 141, 165, 29, 238, 211, 61, 163)}};
static const lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__15_00___x40_Lean_Parser_Extension_3496418232____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__15_00___x40_Lean_Parser_Extension_3496418232____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__16_00___x40_Lean_Parser_Extension_3496418232____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "hexnum"};
static const lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__16_00___x40_Lean_Parser_Extension_3496418232____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__16_00___x40_Lean_Parser_Extension_3496418232____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__17_00___x40_Lean_Parser_Extension_3496418232____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__16_00___x40_Lean_Parser_Extension_3496418232____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(152, 252, 51, 178, 203, 245, 189, 159)}};
static const lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__17_00___x40_Lean_Parser_Extension_3496418232____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__17_00___x40_Lean_Parser_Extension_3496418232____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__18_00___x40_Lean_Parser_Extension_3496418232____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "interpolatedStrKind"};
static const lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__18_00___x40_Lean_Parser_Extension_3496418232____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__18_00___x40_Lean_Parser_Extension_3496418232____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__19_00___x40_Lean_Parser_Extension_3496418232____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__18_00___x40_Lean_Parser_Extension_3496418232____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(239, 118, 32, 248, 73, 51, 110, 198)}};
static const lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__19_00___x40_Lean_Parser_Extension_3496418232____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__19_00___x40_Lean_Parser_Extension_3496418232____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn_00___x40_Lean_Parser_Extension_3496418232____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn_00___x40_Lean_Parser_Extension_3496418232____hygCtx___hyg_2____boxed(lean_object*);
static lean_once_cell_t l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__0_00___x40_Lean_Parser_Extension_3941088830____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__0_00___x40_Lean_Parser_Extension_3941088830____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn_00___x40_Lean_Parser_Extension_3941088830____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn_00___x40_Lean_Parser_Extension_3941088830____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_builtinParserCategoriesRef;
static const lean_string_object l___private_Lean_Parser_Extension_0__Lean_Parser_throwParserCategoryAlreadyDefined___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "parser category `"};
static const lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_throwParserCategoryAlreadyDefined___redArg___closed__0 = (const lean_object*)&l___private_Lean_Parser_Extension_0__Lean_Parser_throwParserCategoryAlreadyDefined___redArg___closed__0_value;
static const lean_string_object l___private_Lean_Parser_Extension_0__Lean_Parser_throwParserCategoryAlreadyDefined___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "` has already been defined"};
static const lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_throwParserCategoryAlreadyDefined___redArg___closed__1 = (const lean_object*)&l___private_Lean_Parser_Extension_0__Lean_Parser_throwParserCategoryAlreadyDefined___redArg___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_throwParserCategoryAlreadyDefined___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_throwParserCategoryAlreadyDefined(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Parser_Extension_0__Lean_Parser_addParserCategoryCore_spec__1_spec__2_spec__4_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Parser_Extension_0__Lean_Parser_addParserCategoryCore_spec__1_spec__2_spec__4___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Parser_Extension_0__Lean_Parser_addParserCategoryCore_spec__1_spec__2___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Parser_Extension_0__Lean_Parser_addParserCategoryCore_spec__1_spec__2___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Parser_Extension_0__Lean_Parser_addParserCategoryCore_spec__1_spec__2___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Parser_Extension_0__Lean_Parser_addParserCategoryCore_spec__1_spec__2___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Parser_Extension_0__Lean_Parser_addParserCategoryCore_spec__1_spec__2___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Parser_Extension_0__Lean_Parser_addParserCategoryCore_spec__1_spec__2_spec__5___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Parser_Extension_0__Lean_Parser_addParserCategoryCore_spec__1_spec__2_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Parser_Extension_0__Lean_Parser_addParserCategoryCore_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Parser_Extension_0__Lean_Parser_addParserCategoryCore_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Parser_Extension_0__Lean_Parser_addParserCategoryCore_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Parser_Extension_0__Lean_Parser_addParserCategoryCore_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Parser_Extension_0__Lean_Parser_addParserCategoryCore_spec__0_spec__0___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Parser_Extension_0__Lean_Parser_addParserCategoryCore_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_Parser_Extension_0__Lean_Parser_addParserCategoryCore_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_Parser_Extension_0__Lean_Parser_addParserCategoryCore_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_addParserCategoryCore(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_Parser_Extension_0__Lean_Parser_addParserCategoryCore_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_Parser_Extension_0__Lean_Parser_addParserCategoryCore_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Parser_Extension_0__Lean_Parser_addParserCategoryCore_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Parser_Extension_0__Lean_Parser_addParserCategoryCore_spec__0_spec__0(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Parser_Extension_0__Lean_Parser_addParserCategoryCore_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Parser_Extension_0__Lean_Parser_addParserCategoryCore_spec__1_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Parser_Extension_0__Lean_Parser_addParserCategoryCore_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Parser_Extension_0__Lean_Parser_addParserCategoryCore_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Parser_Extension_0__Lean_Parser_addParserCategoryCore_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Parser_Extension_0__Lean_Parser_addParserCategoryCore_spec__1_spec__2_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Parser_Extension_0__Lean_Parser_addParserCategoryCore_spec__1_spec__2_spec__5(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Parser_Extension_0__Lean_Parser_addParserCategoryCore_spec__1_spec__2_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Parser_Extension_0__Lean_Parser_addParserCategoryCore_spec__1_spec__2_spec__4_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_ofExcept___at___00__private_Lean_Parser_Extension_0__Lean_Parser_addBuiltinParserCategory_spec__0___redArg(lean_object*);
LEAN_EXPORT lean_object* l_IO_ofExcept___at___00__private_Lean_Parser_Extension_0__Lean_Parser_addBuiltinParserCategory_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_ofExcept___at___00__private_Lean_Parser_Extension_0__Lean_Parser_addBuiltinParserCategory_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_ofExcept___at___00__private_Lean_Parser_Extension_0__Lean_Parser_addBuiltinParserCategory_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Parser_Extension_0__Lean_Parser_addBuiltinParserCategory___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_addBuiltinParserCategory___closed__0 = (const lean_object*)&l___private_Lean_Parser_Extension_0__Lean_Parser_addBuiltinParserCategory___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_addBuiltinParserCategory(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_addBuiltinParserCategory___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ParserExtension_OLeanEntry_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ParserExtension_OLeanEntry_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ParserExtension_OLeanEntry_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ParserExtension_OLeanEntry_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ParserExtension_OLeanEntry_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ParserExtension_OLeanEntry_token_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ParserExtension_OLeanEntry_token_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ParserExtension_OLeanEntry_kind_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ParserExtension_OLeanEntry_kind_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ParserExtension_OLeanEntry_category_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ParserExtension_OLeanEntry_category_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ParserExtension_OLeanEntry_parser_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ParserExtension_OLeanEntry_parser_elim(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Parser_ParserExtension_instInhabitedOLeanEntry_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_Parser_ParserExtension_instInhabitedOLeanEntry_default___closed__0 = (const lean_object*)&l_Lean_Parser_ParserExtension_instInhabitedOLeanEntry_default___closed__0_value;
static const lean_ctor_object l_Lean_Parser_ParserExtension_instInhabitedOLeanEntry_default___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Parser_ParserExtension_instInhabitedOLeanEntry_default___closed__0_value)}};
static const lean_object* l_Lean_Parser_ParserExtension_instInhabitedOLeanEntry_default___closed__1 = (const lean_object*)&l_Lean_Parser_ParserExtension_instInhabitedOLeanEntry_default___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_Parser_ParserExtension_instInhabitedOLeanEntry_default = (const lean_object*)&l_Lean_Parser_ParserExtension_instInhabitedOLeanEntry_default___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_Parser_ParserExtension_instInhabitedOLeanEntry = (const lean_object*)&l_Lean_Parser_ParserExtension_instInhabitedOLeanEntry_default___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Parser_ParserExtension_Entry_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ParserExtension_Entry_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ParserExtension_Entry_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ParserExtension_Entry_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ParserExtension_Entry_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ParserExtension_Entry_token_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ParserExtension_Entry_token_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ParserExtension_Entry_kind_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ParserExtension_Entry_kind_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ParserExtension_Entry_category_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ParserExtension_Entry_category_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ParserExtension_Entry_parser_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ParserExtension_Entry_parser_elim(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Parser_ParserExtension_instInhabitedEntry_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Parser_ParserExtension_instInhabitedOLeanEntry_default___closed__0_value)}};
static const lean_object* l_Lean_Parser_ParserExtension_instInhabitedEntry_default___closed__0 = (const lean_object*)&l_Lean_Parser_ParserExtension_instInhabitedEntry_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Parser_ParserExtension_instInhabitedEntry_default = (const lean_object*)&l_Lean_Parser_ParserExtension_instInhabitedEntry_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Parser_ParserExtension_instInhabitedEntry = (const lean_object*)&l_Lean_Parser_ParserExtension_instInhabitedEntry_default___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Parser_ParserExtension_Entry_toOLeanEntry(lean_object*);
static lean_once_cell_t l_Lean_Parser_ParserExtension_instInhabitedState_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_ParserExtension_instInhabitedState_default___closed__0;
LEAN_EXPORT lean_object* l_Lean_Parser_ParserExtension_instInhabitedState_default;
LEAN_EXPORT lean_object* l_Lean_Parser_ParserExtension_instInhabitedState;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_ParserExtension_mkInitial();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_ParserExtension_mkInitial___boxed(lean_object*);
static const lean_string_object l___private_Lean_Parser_Extension_0__Lean_Parser_addTokenConfig___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "invalid empty symbol"};
static const lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_addTokenConfig___closed__0 = (const lean_object*)&l___private_Lean_Parser_Extension_0__Lean_Parser_addTokenConfig___closed__0_value;
static const lean_ctor_object l___private_Lean_Parser_Extension_0__Lean_Parser_addTokenConfig___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Extension_0__Lean_Parser_addTokenConfig___closed__0_value)}};
static const lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_addTokenConfig___closed__1 = (const lean_object*)&l___private_Lean_Parser_Extension_0__Lean_Parser_addTokenConfig___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_addTokenConfig(lean_object*, lean_object*);
static const lean_string_object l_Lean_Parser_throwUnknownParserCategory___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "unknown parser category `"};
static const lean_object* l_Lean_Parser_throwUnknownParserCategory___redArg___closed__0 = (const lean_object*)&l_Lean_Parser_throwUnknownParserCategory___redArg___closed__0_value;
static const lean_string_object l_Lean_Parser_throwUnknownParserCategory___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l_Lean_Parser_throwUnknownParserCategory___redArg___closed__1 = (const lean_object*)&l_Lean_Parser_throwUnknownParserCategory___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Parser_throwUnknownParserCategory___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_throwUnknownParserCategory(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Parser_getCategory___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Name_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Parser_getCategory___closed__0 = (const lean_object*)&l_Lean_Parser_getCategory___closed__0_value;
static const lean_closure_object l_Lean_Parser_getCategory___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Name_hash___override___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Parser_getCategory___closed__1 = (const lean_object*)&l_Lean_Parser_getCategory___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Parser_getCategory(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_getCategory___boxed(lean_object*, lean_object*);
static const lean_closure_object l_List_eraseDups___at___00Lean_Parser_addLeadingParser_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Name_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_List_eraseDups___at___00Lean_Parser_addLeadingParser_spec__2___closed__0 = (const lean_object*)&l_List_eraseDups___at___00Lean_Parser_addLeadingParser_spec__2___closed__0_value;
LEAN_EXPORT lean_object* l_List_eraseDups___at___00Lean_Parser_addLeadingParser_spec__2(lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Parser_addLeadingParser_spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Parser_addLeadingParser_spec__0_spec__0_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Parser_addLeadingParser_spec__0_spec__0_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Parser_addLeadingParser_spec__0_spec__0___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Parser_addLeadingParser_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Parser_addLeadingParser_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Parser_addLeadingParser_spec__0___redArg___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_List_mapTR_loop___at___00Lean_Parser_addLeadingParser_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_mapTR_loop___at___00Lean_Parser_addLeadingParser_spec__1___closed__0;
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Parser_addLeadingParser_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_addLeadingParser(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Parser_addLeadingParser_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Parser_addLeadingParser_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Parser_addLeadingParser_spec__0_spec__0(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Parser_addLeadingParser_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Parser_addLeadingParser_spec__0_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Parser_addLeadingParser_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00__private_Lean_Parser_Extension_0__Lean_Parser_addTrailingParserAux_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_addTrailingParserAux(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_addTrailingParser(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_addParser(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_addParser___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldlM___at___00Lean_Parser_addParserTokens_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_addParserTokens(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Parser_Extension_0__Lean_Parser_updateBuiltinTokens___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "invalid builtin parser `"};
static const lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_updateBuiltinTokens___closed__0 = (const lean_object*)&l___private_Lean_Parser_Extension_0__Lean_Parser_updateBuiltinTokens___closed__0_value;
static const lean_string_object l___private_Lean_Parser_Extension_0__Lean_Parser_updateBuiltinTokens___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "`, "};
static const lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_updateBuiltinTokens___closed__1 = (const lean_object*)&l___private_Lean_Parser_Extension_0__Lean_Parser_updateBuiltinTokens___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_updateBuiltinTokens(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_updateBuiltinTokens___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Parser_ParserExtension_addEntryImpl_spec__0(lean_object*);
static const lean_string_object l_Lean_Parser_ParserExtension_addEntryImpl___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "Lean.Parser.Extension"};
static const lean_object* l_Lean_Parser_ParserExtension_addEntryImpl___closed__0 = (const lean_object*)&l_Lean_Parser_ParserExtension_addEntryImpl___closed__0_value;
static const lean_string_object l_Lean_Parser_ParserExtension_addEntryImpl___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 41, .m_capacity = 41, .m_length = 40, .m_data = "Lean.Parser.ParserExtension.addEntryImpl"};
static const lean_object* l_Lean_Parser_ParserExtension_addEntryImpl___closed__1 = (const lean_object*)&l_Lean_Parser_ParserExtension_addEntryImpl___closed__1_value;
static const lean_string_object l_Lean_Parser_ParserExtension_addEntryImpl___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "ParserExtension.addEntryImpl: "};
static const lean_object* l_Lean_Parser_ParserExtension_addEntryImpl___closed__2 = (const lean_object*)&l_Lean_Parser_ParserExtension_addEntryImpl___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Parser_ParserExtension_addEntryImpl(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_AliasValue_ctorIdx___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_AliasValue_ctorIdx___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_AliasValue_ctorIdx(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_AliasValue_ctorIdx___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_AliasValue_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_AliasValue_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_AliasValue_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_AliasValue_const_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_AliasValue_const_elim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_AliasValue_unary_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_AliasValue_unary_elim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_AliasValue_binary_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_AliasValue_binary_elim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Parser_registerAliasCore___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 53, .m_capacity = 53, .m_length = 52, .m_data = "aliases can only be registered during initialization"};
static const lean_object* l_Lean_Parser_registerAliasCore___redArg___closed__0 = (const lean_object*)&l_Lean_Parser_registerAliasCore___redArg___closed__0_value;
static lean_once_cell_t l_Lean_Parser_registerAliasCore___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_registerAliasCore___redArg___closed__1;
static const lean_string_object l_Lean_Parser_registerAliasCore___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "alias `"};
static const lean_object* l_Lean_Parser_registerAliasCore___redArg___closed__2 = (const lean_object*)&l_Lean_Parser_registerAliasCore___redArg___closed__2_value;
static const lean_string_object l_Lean_Parser_registerAliasCore___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "` has already been declared"};
static const lean_object* l_Lean_Parser_registerAliasCore___redArg___closed__3 = (const lean_object*)&l_Lean_Parser_registerAliasCore___redArg___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_Parser_registerAliasCore___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_registerAliasCore___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_registerAliasCore(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_registerAliasCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_getAlias___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_getAlias___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_getAlias(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_getAlias___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Parser_getConstAlias___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "parser `"};
static const lean_object* l_Lean_Parser_getConstAlias___redArg___closed__0 = (const lean_object*)&l_Lean_Parser_getConstAlias___redArg___closed__0_value;
static const lean_string_object l_Lean_Parser_getConstAlias___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "` was not found"};
static const lean_object* l_Lean_Parser_getConstAlias___redArg___closed__1 = (const lean_object*)&l_Lean_Parser_getConstAlias___redArg___closed__1_value;
static const lean_string_object l_Lean_Parser_getConstAlias___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 43, .m_capacity = 43, .m_length = 42, .m_data = "` is not a constant, it takes one argument"};
static const lean_object* l_Lean_Parser_getConstAlias___redArg___closed__2 = (const lean_object*)&l_Lean_Parser_getConstAlias___redArg___closed__2_value;
static const lean_string_object l_Lean_Parser_getConstAlias___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 44, .m_capacity = 44, .m_length = 43, .m_data = "` is not a constant, it takes two arguments"};
static const lean_object* l_Lean_Parser_getConstAlias___redArg___closed__3 = (const lean_object*)&l_Lean_Parser_getConstAlias___redArg___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_Parser_getConstAlias___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_getConstAlias___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_getConstAlias(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_getConstAlias___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Parser_getUnaryAlias___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "` does not take one argument"};
static const lean_object* l_Lean_Parser_getUnaryAlias___redArg___closed__0 = (const lean_object*)&l_Lean_Parser_getUnaryAlias___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Parser_getUnaryAlias___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_getUnaryAlias___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_getUnaryAlias(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_getUnaryAlias___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Parser_getBinaryAlias___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "` does not take two arguments"};
static const lean_object* l_Lean_Parser_getBinaryAlias___redArg___closed__0 = (const lean_object*)&l_Lean_Parser_getBinaryAlias___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Parser_getBinaryAlias___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_getBinaryAlias___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_getBinaryAlias(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_getBinaryAlias___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn_00___x40_Lean_Parser_Extension_1840072248____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn_00___x40_Lean_Parser_Extension_1840072248____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_parserAliasesRef;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn_00___x40_Lean_Parser_Extension_1409780179____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn_00___x40_Lean_Parser_Extension_1409780179____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_parserAlias2kindRef;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn_00___x40_Lean_Parser_Extension_1856488369____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn_00___x40_Lean_Parser_Extension_1856488369____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_parserAliases2infoRef;
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_Parser_getParserAliasInfo_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_Parser_getParserAliasInfo_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Parser_getParserAliasInfo___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Parser_getParserAliasInfo___closed__0 = (const lean_object*)&l_Lean_Parser_getParserAliasInfo___closed__0_value;
static lean_once_cell_t l_Lean_Parser_getParserAliasInfo___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_getParserAliasInfo___closed__1;
LEAN_EXPORT lean_object* l_Lean_Parser_getParserAliasInfo(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_getParserAliasInfo___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_Parser_getParserAliasInfo_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_Parser_getParserAliasInfo_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_registerAlias(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_registerAlias___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_instCoeParserParserAliasValue___lam__0(lean_object*);
static const lean_closure_object l_Lean_Parser_instCoeParserParserAliasValue___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_instCoeParserParserAliasValue___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Parser_instCoeParserParserAliasValue___closed__0 = (const lean_object*)&l_Lean_Parser_instCoeParserParserAliasValue___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Parser_instCoeParserParserAliasValue = (const lean_object*)&l_Lean_Parser_instCoeParserParserAliasValue___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Parser_instCoeForallParserParserAliasValue___lam__0(lean_object*);
static const lean_closure_object l_Lean_Parser_instCoeForallParserParserAliasValue___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_instCoeForallParserParserAliasValue___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Parser_instCoeForallParserParserAliasValue___closed__0 = (const lean_object*)&l_Lean_Parser_instCoeForallParserParserAliasValue___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Parser_instCoeForallParserParserAliasValue = (const lean_object*)&l_Lean_Parser_instCoeForallParserParserAliasValue___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Parser_instCoeForallParserForallParserAliasValue___lam__0(lean_object*);
static const lean_closure_object l_Lean_Parser_instCoeForallParserForallParserAliasValue___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_instCoeForallParserForallParserAliasValue___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Parser_instCoeForallParserForallParserAliasValue___closed__0 = (const lean_object*)&l_Lean_Parser_instCoeForallParserForallParserAliasValue___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Parser_instCoeForallParserForallParserAliasValue = (const lean_object*)&l_Lean_Parser_instCoeForallParserForallParserAliasValue___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Parser_isParserAlias(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_isParserAlias___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_getSyntaxKindOfParserAlias_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_getSyntaxKindOfParserAlias_x3f___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ensureUnaryParserAlias(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ensureUnaryParserAlias___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ensureBinaryParserAlias(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ensureBinaryParserAlias___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ensureConstantParserAlias(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ensureConstantParserAlias___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Parser_mkParserOfConstantUnsafe___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "unexpected parser type at `"};
static const lean_object* l_Lean_Parser_mkParserOfConstantUnsafe___closed__0 = (const lean_object*)&l_Lean_Parser_mkParserOfConstantUnsafe___closed__0_value;
static const lean_string_object l_Lean_Parser_mkParserOfConstantUnsafe___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 80, .m_capacity = 80, .m_length = 79, .m_data = "` (`ParserDescr`, `TrailingParserDescr`, `Parser` or `TrailingParser` expected)"};
static const lean_object* l_Lean_Parser_mkParserOfConstantUnsafe___closed__1 = (const lean_object*)&l_Lean_Parser_mkParserOfConstantUnsafe___closed__1_value;
static const lean_string_object l_Lean_Parser_mkParserOfConstantUnsafe___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Unknown constant `"};
static const lean_object* l_Lean_Parser_mkParserOfConstantUnsafe___closed__2 = (const lean_object*)&l_Lean_Parser_mkParserOfConstantUnsafe___closed__2_value;
static const lean_string_object l_Lean_Parser_mkParserOfConstantUnsafe___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lean_Parser_mkParserOfConstantUnsafe___closed__3 = (const lean_object*)&l_Lean_Parser_mkParserOfConstantUnsafe___closed__3_value;
static const lean_string_object l_Lean_Parser_mkParserOfConstantUnsafe___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l_Lean_Parser_mkParserOfConstantUnsafe___closed__4 = (const lean_object*)&l_Lean_Parser_mkParserOfConstantUnsafe___closed__4_value;
static const lean_string_object l_Lean_Parser_mkParserOfConstantUnsafe___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "TrailingParser"};
static const lean_object* l_Lean_Parser_mkParserOfConstantUnsafe___closed__5 = (const lean_object*)&l_Lean_Parser_mkParserOfConstantUnsafe___closed__5_value;
static const lean_string_object l_Lean_Parser_mkParserOfConstantUnsafe___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "ParserDescr"};
static const lean_object* l_Lean_Parser_mkParserOfConstantUnsafe___closed__6 = (const lean_object*)&l_Lean_Parser_mkParserOfConstantUnsafe___closed__6_value;
static const lean_string_object l_Lean_Parser_mkParserOfConstantUnsafe___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "TrailingParserDescr"};
static const lean_object* l_Lean_Parser_mkParserOfConstantUnsafe___closed__7 = (const lean_object*)&l_Lean_Parser_mkParserOfConstantUnsafe___closed__7_value;
LEAN_EXPORT lean_object* l_Lean_Parser_mkParserOfConstantUnsafe(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_mkParserOfConstantUnsafe___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_compileParserDescr_visit___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_compileParserDescr_visit(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_compileParserDescr(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_compileParserDescr___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_mkParserOfConstant___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_mkParserOfConstant___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_mkParserOfConstant(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_mkParserOfConstant___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn_00___x40_Lean_Parser_Extension_917526378____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn_00___x40_Lean_Parser_Extension_917526378____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_parserAttributeHooks;
LEAN_EXPORT lean_object* l_Lean_Parser_registerParserAttributeHook(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_registerParserAttributeHook___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forM___at___00Lean_Parser_runParserAttributeHooks_spec__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forM___at___00Lean_Parser_runParserAttributeHooks_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_runParserAttributeHooks(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_runParserAttributeHooks___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___lam__0_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___lam__0_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Parser_Extension_0__Lean_Parser_initFn_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2__spec__0_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Parser_Extension_0__Lean_Parser_initFn_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2__spec__0_spec__0___closed__0;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Parser_Extension_0__Lean_Parser_initFn_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2__spec__0_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Parser_Extension_0__Lean_Parser_initFn_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2__spec__0_spec__0___closed__1;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Parser_Extension_0__Lean_Parser_initFn_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2__spec__0_spec__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Parser_Extension_0__Lean_Parser_initFn_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2__spec__0_spec__0___closed__2;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Parser_Extension_0__Lean_Parser_initFn_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2__spec__0_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Parser_Extension_0__Lean_Parser_initFn_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2__spec__0_spec__0___closed__3;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Parser_Extension_0__Lean_Parser_initFn_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2__spec__0_spec__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Parser_Extension_0__Lean_Parser_initFn_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2__spec__0_spec__0___closed__4;
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Parser_Extension_0__Lean_Parser_initFn_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2__spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Parser_Extension_0__Lean_Parser_initFn_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2__spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Parser_Extension_0__Lean_Parser_initFn_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2__spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Parser_Extension_0__Lean_Parser_initFn_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2__spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___lam__1___closed__0_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "Attribute `["};
static const lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___lam__1___closed__0_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___lam__1___closed__0_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___lam__1___closed__1_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___lam__1___closed__1_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___lam__1___closed__2_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "]` cannot be erased"};
static const lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___lam__1___closed__2_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___lam__1___closed__2_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___lam__1___closed__3_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___lam__1___closed__3_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___lam__1_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___lam__1_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__0_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__0_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__1_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__1_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__1_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__4_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__4_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__5_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Extension"};
static const lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__5_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__5_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__6_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__6_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__7_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__7_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__8_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__8_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__9_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__9_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__10_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "initFn"};
static const lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__10_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__10_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__11_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__11_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__12_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_@"};
static const lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__12_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__12_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__13_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__13_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__14_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__14_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__15_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__15_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__16_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__16_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__17_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__17_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__18_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "_hygCtx"};
static const lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__18_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__18_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__19_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__19_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__20_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "_hyg"};
static const lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__20_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__20_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__21_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__21_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__22_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__22_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__23_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "run_builtin_parser_attribute_hooks"};
static const lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__23_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__23_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__24_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__23_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(129, 253, 249, 46, 168, 175, 6, 195)}};
static const lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__24_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__24_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__25_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___lam__1_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2____boxed, .m_arity = 5, .m_num_fixed = 1, .m_objs = {((lean_object*)&l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__24_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2__value)} };
static const lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__25_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__25_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__26_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 69, .m_capacity = 69, .m_length = 68, .m_data = "explicitly run hooks normally activated by builtin parser attributes"};
static const lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__26_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__26_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__27_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__27_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__28_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__28_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Parser_Extension_0__Lean_Parser_initFn_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2__spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Parser_Extension_0__Lean_Parser_initFn_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2__spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___lam__0_00___x40_Lean_Parser_Extension_3789407938____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___lam__0_00___x40_Lean_Parser_Extension_3789407938____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__0_00___x40_Lean_Parser_Extension_3789407938____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__0_00___x40_Lean_Parser_Extension_3789407938____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__1_00___x40_Lean_Parser_Extension_3789407938____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__1_00___x40_Lean_Parser_Extension_3789407938____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Extension_3789407938____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Extension_3789407938____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Extension_3789407938____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Extension_3789407938____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__4_00___x40_Lean_Parser_Extension_3789407938____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__4_00___x40_Lean_Parser_Extension_3789407938____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__5_00___x40_Lean_Parser_Extension_3789407938____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "run_parser_attribute_hooks"};
static const lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__5_00___x40_Lean_Parser_Extension_3789407938____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__5_00___x40_Lean_Parser_Extension_3789407938____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__6_00___x40_Lean_Parser_Extension_3789407938____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__5_00___x40_Lean_Parser_Extension_3789407938____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(40, 66, 27, 152, 146, 188, 80, 181)}};
static const lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__6_00___x40_Lean_Parser_Extension_3789407938____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__6_00___x40_Lean_Parser_Extension_3789407938____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__7_00___x40_Lean_Parser_Extension_3789407938____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___lam__1_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2____boxed, .m_arity = 5, .m_num_fixed = 1, .m_objs = {((lean_object*)&l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__6_00___x40_Lean_Parser_Extension_3789407938____hygCtx___hyg_2__value)} };
static const lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__7_00___x40_Lean_Parser_Extension_3789407938____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__7_00___x40_Lean_Parser_Extension_3789407938____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__8_00___x40_Lean_Parser_Extension_3789407938____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 61, .m_capacity = 61, .m_length = 60, .m_data = "explicitly run hooks normally activated by parser attributes"};
static const lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__8_00___x40_Lean_Parser_Extension_3789407938____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__8_00___x40_Lean_Parser_Extension_3789407938____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__9_00___x40_Lean_Parser_Extension_3789407938____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__9_00___x40_Lean_Parser_Extension_3789407938____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__10_00___x40_Lean_Parser_Extension_3789407938____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__10_00___x40_Lean_Parser_Extension_3789407938____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn_00___x40_Lean_Parser_Extension_3789407938____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn_00___x40_Lean_Parser_Extension_3789407938____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_ParserExtension_OLeanEntry_toEntry(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_ParserExtension_OLeanEntry_toEntry___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___lam__0_00___x40_Lean_Parser_Extension_227734417____hygCtx___hyg_2_(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___lam__0_00___x40_Lean_Parser_Extension_227734417____hygCtx___hyg_2____boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___lam__1_00___x40_Lean_Parser_Extension_227734417____hygCtx___hyg_2_(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___lam__1_00___x40_Lean_Parser_Extension_227734417____hygCtx___hyg_2____boxed(lean_object*);
static const lean_closure_object l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__0_00___x40_Lean_Parser_Extension_227734417____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___lam__0_00___x40_Lean_Parser_Extension_227734417____hygCtx___hyg_2____boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__0_00___x40_Lean_Parser_Extension_227734417____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__0_00___x40_Lean_Parser_Extension_227734417____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__1_00___x40_Lean_Parser_Extension_227734417____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___lam__1_00___x40_Lean_Parser_Extension_227734417____hygCtx___hyg_2____boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__1_00___x40_Lean_Parser_Extension_227734417____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__1_00___x40_Lean_Parser_Extension_227734417____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Extension_227734417____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "parserExtension"};
static const lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Extension_227734417____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Extension_227734417____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Extension_227734417____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_mkParserOfConstantUnsafe___closed__3_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Extension_227734417____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Extension_227734417____hygCtx___hyg_2__value_aux_0),((lean_object*)&l_Lean_Parser_mkParserOfConstantUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Extension_227734417____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Extension_227734417____hygCtx___hyg_2__value_aux_1),((lean_object*)&l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Extension_227734417____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(174, 242, 71, 245, 68, 132, 173, 111)}};
static const lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Extension_227734417____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Extension_227734417____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__4_00___x40_Lean_Parser_Extension_227734417____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Parser_Extension_0__Lean_Parser_ParserExtension_OLeanEntry_toEntry___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__4_00___x40_Lean_Parser_Extension_227734417____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__4_00___x40_Lean_Parser_Extension_227734417____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__5_00___x40_Lean_Parser_Extension_227734417____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_ParserExtension_Entry_toOLeanEntry, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__5_00___x40_Lean_Parser_Extension_227734417____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__5_00___x40_Lean_Parser_Extension_227734417____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__6_00___x40_Lean_Parser_Extension_227734417____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_ParserExtension_addEntryImpl, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__6_00___x40_Lean_Parser_Extension_227734417____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__6_00___x40_Lean_Parser_Extension_227734417____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__7_00___x40_Lean_Parser_Extension_227734417____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__7_00___x40_Lean_Parser_Extension_227734417____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn_00___x40_Lean_Parser_Extension_227734417____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn_00___x40_Lean_Parser_Extension_227734417____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_parserExtension;
LEAN_EXPORT lean_object* l_Lean_Parser_getParserCategory_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_getParserCategory_x3f___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Parser_isParserCategory(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_isParserCategory___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_addParserCategory(lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Parser_addParserCategory___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Parser_leadingIdentBehavior(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_leadingIdentBehavior___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Parser_evalParserConstUnsafe_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_evalParserConstUnsafe___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_evalParserConstUnsafe___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_evalParserConstUnsafe___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_evalParserConstUnsafe(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Parser_Extension_0__Lean_Parser_initFn_00___x40_Lean_Parser_Extension_4243742150____hygCtx___hyg_4__spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Parser_Extension_0__Lean_Parser_initFn_00___x40_Lean_Parser_Extension_4243742150____hygCtx___hyg_4__spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__0_00___x40_Lean_Parser_Extension_4243742150____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "internal"};
static const lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__0_00___x40_Lean_Parser_Extension_4243742150____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__0_00___x40_Lean_Parser_Extension_4243742150____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__1_00___x40_Lean_Parser_Extension_4243742150____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "parseQuotWithCurrentStage"};
static const lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__1_00___x40_Lean_Parser_Extension_4243742150____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__1_00___x40_Lean_Parser_Extension_4243742150____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Extension_4243742150____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__0_00___x40_Lean_Parser_Extension_4243742150____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(177, 49, 45, 44, 152, 148, 209, 41)}};
static const lean_ctor_object l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Extension_4243742150____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Extension_4243742150____hygCtx___hyg_4__value_aux_0),((lean_object*)&l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__1_00___x40_Lean_Parser_Extension_4243742150____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(208, 253, 75, 217, 201, 67, 21, 43)}};
static const lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Extension_4243742150____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Extension_4243742150____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Extension_4243742150____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 74, .m_capacity = 74, .m_length = 73, .m_data = "(Lean bootstrapping) use parsers from the current stage inside quotations"};
static const lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Extension_4243742150____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Extension_4243742150____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__4_00___x40_Lean_Parser_Extension_4243742150____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Extension_4243742150____hygCtx___hyg_4__value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__4_00___x40_Lean_Parser_Extension_4243742150____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__4_00___x40_Lean_Parser_Extension_4243742150____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__5_00___x40_Lean_Parser_Extension_4243742150____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_mkParserOfConstantUnsafe___closed__3_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__5_00___x40_Lean_Parser_Extension_4243742150____hygCtx___hyg_4__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__5_00___x40_Lean_Parser_Extension_4243742150____hygCtx___hyg_4__value_aux_0),((lean_object*)&l_Lean_Parser_mkParserOfConstantUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__5_00___x40_Lean_Parser_Extension_4243742150____hygCtx___hyg_4__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__5_00___x40_Lean_Parser_Extension_4243742150____hygCtx___hyg_4__value_aux_1),((lean_object*)&l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__0_00___x40_Lean_Parser_Extension_4243742150____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(197, 200, 93, 246, 219, 188, 139, 219)}};
static const lean_ctor_object l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__5_00___x40_Lean_Parser_Extension_4243742150____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__5_00___x40_Lean_Parser_Extension_4243742150____hygCtx___hyg_4__value_aux_2),((lean_object*)&l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__1_00___x40_Lean_Parser_Extension_4243742150____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(180, 175, 65, 251, 248, 238, 117, 156)}};
static const lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__5_00___x40_Lean_Parser_Extension_4243742150____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__5_00___x40_Lean_Parser_Extension_4243742150____hygCtx___hyg_4__value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn_00___x40_Lean_Parser_Extension_4243742150____hygCtx___hyg_4_();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn_00___x40_Lean_Parser_Extension_4243742150____hygCtx___hyg_4____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_internal_parseQuotWithCurrentStage;
static const lean_string_object l_Lean_Options_set___at___00Lean_Parser_evalInsideQuot_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_Options_set___at___00Lean_Parser_evalInsideQuot_spec__0___closed__0 = (const lean_object*)&l_Lean_Options_set___at___00Lean_Parser_evalInsideQuot_spec__0___closed__0_value;
static const lean_ctor_object l_Lean_Options_set___at___00Lean_Parser_evalInsideQuot_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Options_set___at___00Lean_Parser_evalInsideQuot_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l_Lean_Options_set___at___00Lean_Parser_evalInsideQuot_spec__0___closed__1 = (const lean_object*)&l_Lean_Options_set___at___00Lean_Parser_evalInsideQuot_spec__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Parser_evalInsideQuot_spec__0(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Parser_evalInsideQuot_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Parser_evalInsideQuot_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Parser_evalInsideQuot_spec__1___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Parser_evalInsideQuot___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "interpreter"};
static const lean_object* l_Lean_Parser_evalInsideQuot___lam__0___closed__0 = (const lean_object*)&l_Lean_Parser_evalInsideQuot___lam__0___closed__0_value;
static const lean_string_object l_Lean_Parser_evalInsideQuot___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "prefer_native"};
static const lean_object* l_Lean_Parser_evalInsideQuot___lam__0___closed__1 = (const lean_object*)&l_Lean_Parser_evalInsideQuot___lam__0___closed__1_value;
static const lean_ctor_object l_Lean_Parser_evalInsideQuot___lam__0___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_evalInsideQuot___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(52, 89, 165, 10, 241, 76, 182, 215)}};
static const lean_ctor_object l_Lean_Parser_evalInsideQuot___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_evalInsideQuot___lam__0___closed__2_value_aux_0),((lean_object*)&l_Lean_Parser_evalInsideQuot___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(9, 111, 178, 130, 77, 52, 174, 36)}};
static const lean_object* l_Lean_Parser_evalInsideQuot___lam__0___closed__2 = (const lean_object*)&l_Lean_Parser_evalInsideQuot___lam__0___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Parser_evalInsideQuot___lam__0(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_evalInsideQuot___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_evalInsideQuot___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_evalInsideQuot(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_addBuiltinParser(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_addBuiltinParser___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_addBuiltinLeadingParser(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_addBuiltinLeadingParser___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_addBuiltinTrailingParser(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_addBuiltinTrailingParser___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_mkCategoryAntiquotParser(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_mkCategoryAntiquotParserFn(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_categoryParserFnImpl___lam__0(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Parser_categoryParserFnImpl___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "syntax"};
static const lean_object* l_Lean_Parser_categoryParserFnImpl___closed__0 = (const lean_object*)&l_Lean_Parser_categoryParserFnImpl___closed__0_value;
static const lean_ctor_object l_Lean_Parser_categoryParserFnImpl___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_categoryParserFnImpl___closed__0_value),LEAN_SCALAR_PTR_LITERAL(158, 107, 139, 89, 122, 253, 8, 100)}};
static const lean_object* l_Lean_Parser_categoryParserFnImpl___closed__1 = (const lean_object*)&l_Lean_Parser_categoryParserFnImpl___closed__1_value;
static const lean_string_object l_Lean_Parser_categoryParserFnImpl___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "unknown parser category '"};
static const lean_object* l_Lean_Parser_categoryParserFnImpl___closed__2 = (const lean_object*)&l_Lean_Parser_categoryParserFnImpl___closed__2_value;
static const lean_string_object l_Lean_Parser_categoryParserFnImpl___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "'"};
static const lean_object* l_Lean_Parser_categoryParserFnImpl___closed__3 = (const lean_object*)&l_Lean_Parser_categoryParserFnImpl___closed__3_value;
static const lean_string_object l_Lean_Parser_categoryParserFnImpl___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "stx"};
static const lean_object* l_Lean_Parser_categoryParserFnImpl___closed__4 = (const lean_object*)&l_Lean_Parser_categoryParserFnImpl___closed__4_value;
static const lean_ctor_object l_Lean_Parser_categoryParserFnImpl___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_categoryParserFnImpl___closed__4_value),LEAN_SCALAR_PTR_LITERAL(89, 124, 230, 186, 154, 11, 21, 78)}};
static const lean_object* l_Lean_Parser_categoryParserFnImpl___closed__5 = (const lean_object*)&l_Lean_Parser_categoryParserFnImpl___closed__5_value;
LEAN_EXPORT lean_object* l_Lean_Parser_categoryParserFnImpl(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__0_00___x40_Lean_Parser_Extension_767730617____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_categoryParserFnImpl, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__0_00___x40_Lean_Parser_Extension_767730617____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__0_00___x40_Lean_Parser_Extension_767730617____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn_00___x40_Lean_Parser_Extension_767730617____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn_00___x40_Lean_Parser_Extension_767730617____hygCtx___hyg_2____boxed(lean_object*);
static lean_once_cell_t l_Lean_ScopedEnvExtension_add___at___00Lean_Parser_addToken_spec__1___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ScopedEnvExtension_add___at___00Lean_Parser_addToken_spec__1___redArg___closed__0;
static lean_once_cell_t l_Lean_ScopedEnvExtension_add___at___00Lean_Parser_addToken_spec__1___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ScopedEnvExtension_add___at___00Lean_Parser_addToken_spec__1___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___at___00Lean_Parser_addToken_spec__1___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___at___00Lean_Parser_addToken_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___at___00Lean_Parser_addToken_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___at___00Lean_Parser_addToken_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ofExcept___at___00Lean_Parser_addToken_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ofExcept___at___00Lean_Parser_addToken_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_addToken(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_addToken___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ofExcept___at___00Lean_Parser_addToken_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ofExcept___at___00Lean_Parser_addToken_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_addSyntaxNodeKind(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Parser_isValidSyntaxNodeKind___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l_Lean_Parser_isValidSyntaxNodeKind___closed__0;
LEAN_EXPORT uint8_t l_Lean_Parser_isValidSyntaxNodeKind(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_isValidSyntaxNodeKind___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_getSyntaxNodeKinds___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_Parser_getSyntaxNodeKinds_spec__0_spec__0_spec__1_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_Parser_getSyntaxNodeKinds_spec__0_spec__0_spec__1_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_Parser_getSyntaxNodeKinds_spec__0_spec__0_spec__1_spec__2___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_Parser_getSyntaxNodeKinds_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_Parser_getSyntaxNodeKinds_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_Parser_getSyntaxNodeKinds_spec__0_spec__0_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_Parser_getSyntaxNodeKinds_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_Parser_getSyntaxNodeKinds_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_Parser_getSyntaxNodeKinds_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Parser_getSyntaxNodeKinds___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_getSyntaxNodeKinds___lam__0, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Parser_getSyntaxNodeKinds___closed__0 = (const lean_object*)&l_Lean_Parser_getSyntaxNodeKinds___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Parser_getSyntaxNodeKinds(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_Parser_getSyntaxNodeKinds_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_Parser_getSyntaxNodeKinds_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_Parser_getSyntaxNodeKinds_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_Parser_getSyntaxNodeKinds_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_Parser_getSyntaxNodeKinds_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_Parser_getSyntaxNodeKinds_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_Parser_getSyntaxNodeKinds_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_Parser_getSyntaxNodeKinds_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_Parser_getSyntaxNodeKinds_spec__0_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_Parser_getSyntaxNodeKinds_spec__0_spec__0_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_Parser_getSyntaxNodeKinds_spec__0_spec__0_spec__1_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_Parser_getSyntaxNodeKinds_spec__0_spec__0_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_getTokenTable(lean_object*);
static const lean_string_object l_Lean_Parser_mkInputContext___auto__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l_Lean_Parser_mkInputContext___auto__1___closed__0 = (const lean_object*)&l_Lean_Parser_mkInputContext___auto__1___closed__0_value;
static const lean_string_object l_Lean_Parser_mkInputContext___auto__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "tacticSeq"};
static const lean_object* l_Lean_Parser_mkInputContext___auto__1___closed__1 = (const lean_object*)&l_Lean_Parser_mkInputContext___auto__1___closed__1_value;
static const lean_ctor_object l_Lean_Parser_mkInputContext___auto__1___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_mkParserOfConstantUnsafe___closed__3_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_mkInputContext___auto__1___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_mkInputContext___auto__1___closed__2_value_aux_0),((lean_object*)&l_Lean_Parser_mkParserOfConstantUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_mkInputContext___auto__1___closed__2_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_mkInputContext___auto__1___closed__2_value_aux_1),((lean_object*)&l_Lean_Parser_mkInputContext___auto__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Parser_mkInputContext___auto__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_mkInputContext___auto__1___closed__2_value_aux_2),((lean_object*)&l_Lean_Parser_mkInputContext___auto__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(212, 140, 85, 215, 241, 69, 7, 118)}};
static const lean_object* l_Lean_Parser_mkInputContext___auto__1___closed__2 = (const lean_object*)&l_Lean_Parser_mkInputContext___auto__1___closed__2_value;
static const lean_array_object l_Lean_Parser_mkInputContext___auto__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Parser_mkInputContext___auto__1___closed__3 = (const lean_object*)&l_Lean_Parser_mkInputContext___auto__1___closed__3_value;
static const lean_string_object l_Lean_Parser_mkInputContext___auto__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "tacticSeq1Indented"};
static const lean_object* l_Lean_Parser_mkInputContext___auto__1___closed__4 = (const lean_object*)&l_Lean_Parser_mkInputContext___auto__1___closed__4_value;
static const lean_ctor_object l_Lean_Parser_mkInputContext___auto__1___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_mkParserOfConstantUnsafe___closed__3_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_mkInputContext___auto__1___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_mkInputContext___auto__1___closed__5_value_aux_0),((lean_object*)&l_Lean_Parser_mkParserOfConstantUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_mkInputContext___auto__1___closed__5_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_mkInputContext___auto__1___closed__5_value_aux_1),((lean_object*)&l_Lean_Parser_mkInputContext___auto__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Parser_mkInputContext___auto__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_mkInputContext___auto__1___closed__5_value_aux_2),((lean_object*)&l_Lean_Parser_mkInputContext___auto__1___closed__4_value),LEAN_SCALAR_PTR_LITERAL(223, 90, 160, 238, 133, 180, 23, 239)}};
static const lean_object* l_Lean_Parser_mkInputContext___auto__1___closed__5 = (const lean_object*)&l_Lean_Parser_mkInputContext___auto__1___closed__5_value;
static const lean_string_object l_Lean_Parser_mkInputContext___auto__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l_Lean_Parser_mkInputContext___auto__1___closed__6 = (const lean_object*)&l_Lean_Parser_mkInputContext___auto__1___closed__6_value;
static const lean_ctor_object l_Lean_Parser_mkInputContext___auto__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_mkInputContext___auto__1___closed__6_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l_Lean_Parser_mkInputContext___auto__1___closed__7 = (const lean_object*)&l_Lean_Parser_mkInputContext___auto__1___closed__7_value;
static const lean_string_object l_Lean_Parser_mkInputContext___auto__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "simp"};
static const lean_object* l_Lean_Parser_mkInputContext___auto__1___closed__8 = (const lean_object*)&l_Lean_Parser_mkInputContext___auto__1___closed__8_value;
static const lean_ctor_object l_Lean_Parser_mkInputContext___auto__1___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_mkParserOfConstantUnsafe___closed__3_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_mkInputContext___auto__1___closed__9_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_mkInputContext___auto__1___closed__9_value_aux_0),((lean_object*)&l_Lean_Parser_mkParserOfConstantUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_mkInputContext___auto__1___closed__9_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_mkInputContext___auto__1___closed__9_value_aux_1),((lean_object*)&l_Lean_Parser_mkInputContext___auto__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Parser_mkInputContext___auto__1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_mkInputContext___auto__1___closed__9_value_aux_2),((lean_object*)&l_Lean_Parser_mkInputContext___auto__1___closed__8_value),LEAN_SCALAR_PTR_LITERAL(50, 13, 241, 145, 67, 153, 105, 177)}};
static const lean_object* l_Lean_Parser_mkInputContext___auto__1___closed__9 = (const lean_object*)&l_Lean_Parser_mkInputContext___auto__1___closed__9_value;
static lean_once_cell_t l_Lean_Parser_mkInputContext___auto__1___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_mkInputContext___auto__1___closed__10;
static lean_once_cell_t l_Lean_Parser_mkInputContext___auto__1___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_mkInputContext___auto__1___closed__11;
static const lean_string_object l_Lean_Parser_mkInputContext___auto__1___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "optConfig"};
static const lean_object* l_Lean_Parser_mkInputContext___auto__1___closed__12 = (const lean_object*)&l_Lean_Parser_mkInputContext___auto__1___closed__12_value;
static const lean_ctor_object l_Lean_Parser_mkInputContext___auto__1___closed__13_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_mkParserOfConstantUnsafe___closed__3_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_mkInputContext___auto__1___closed__13_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_mkInputContext___auto__1___closed__13_value_aux_0),((lean_object*)&l_Lean_Parser_mkParserOfConstantUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_mkInputContext___auto__1___closed__13_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_mkInputContext___auto__1___closed__13_value_aux_1),((lean_object*)&l_Lean_Parser_mkInputContext___auto__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Parser_mkInputContext___auto__1___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_mkInputContext___auto__1___closed__13_value_aux_2),((lean_object*)&l_Lean_Parser_mkInputContext___auto__1___closed__12_value),LEAN_SCALAR_PTR_LITERAL(137, 208, 10, 74, 108, 50, 106, 48)}};
static const lean_object* l_Lean_Parser_mkInputContext___auto__1___closed__13 = (const lean_object*)&l_Lean_Parser_mkInputContext___auto__1___closed__13_value;
static const lean_ctor_object l_Lean_Parser_mkInputContext___auto__1___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(2) << 1) | 1)),((lean_object*)&l_Lean_Parser_mkInputContext___auto__1___closed__7_value),((lean_object*)&l_Lean_Parser_mkInputContext___auto__1___closed__3_value)}};
static const lean_object* l_Lean_Parser_mkInputContext___auto__1___closed__14 = (const lean_object*)&l_Lean_Parser_mkInputContext___auto__1___closed__14_value;
static lean_once_cell_t l_Lean_Parser_mkInputContext___auto__1___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_mkInputContext___auto__1___closed__15;
static lean_once_cell_t l_Lean_Parser_mkInputContext___auto__1___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_mkInputContext___auto__1___closed__16;
static lean_once_cell_t l_Lean_Parser_mkInputContext___auto__1___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_mkInputContext___auto__1___closed__17;
static lean_once_cell_t l_Lean_Parser_mkInputContext___auto__1___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_mkInputContext___auto__1___closed__18;
static lean_once_cell_t l_Lean_Parser_mkInputContext___auto__1___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_mkInputContext___auto__1___closed__19;
static lean_once_cell_t l_Lean_Parser_mkInputContext___auto__1___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_mkInputContext___auto__1___closed__20;
static lean_once_cell_t l_Lean_Parser_mkInputContext___auto__1___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_mkInputContext___auto__1___closed__21;
static lean_once_cell_t l_Lean_Parser_mkInputContext___auto__1___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_mkInputContext___auto__1___closed__22;
static lean_once_cell_t l_Lean_Parser_mkInputContext___auto__1___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_mkInputContext___auto__1___closed__23;
static lean_once_cell_t l_Lean_Parser_mkInputContext___auto__1___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_mkInputContext___auto__1___closed__24;
static lean_once_cell_t l_Lean_Parser_mkInputContext___auto__1___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_mkInputContext___auto__1___closed__25;
static lean_once_cell_t l_Lean_Parser_mkInputContext___auto__1___closed__26_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_mkInputContext___auto__1___closed__26;
static lean_once_cell_t l_Lean_Parser_mkInputContext___auto__1___closed__27_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_mkInputContext___auto__1___closed__27;
static lean_once_cell_t l_Lean_Parser_mkInputContext___auto__1___closed__28_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_mkInputContext___auto__1___closed__28;
LEAN_EXPORT lean_object* l_Lean_Parser_mkInputContext___auto__1;
LEAN_EXPORT lean_object* l_Lean_Parser_mkInputContext___redArg(lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_mkInputContext___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_mkInputContext(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_mkInputContext___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Parser_mkParserState___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Parser_mkParserState___closed__0 = (const lean_object*)&l_Lean_Parser_mkParserState___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Parser_mkParserState(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_mkParserState___boxed(lean_object*);
static const lean_closure_object l_Lean_Parser_runParserCategory___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_whitespace, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Parser_runParserCategory___closed__0 = (const lean_object*)&l_Lean_Parser_runParserCategory___closed__0_value;
static const lean_string_object l_Lean_Parser_runParserCategory___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "end of input"};
static const lean_object* l_Lean_Parser_runParserCategory___closed__1 = (const lean_object*)&l_Lean_Parser_runParserCategory___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Parser_runParserCategory(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_declareBuiltinParser(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_declareBuiltinParser___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Parser_declareLeadingBuiltinParser___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "addBuiltinLeadingParser"};
static const lean_object* l_Lean_Parser_declareLeadingBuiltinParser___closed__0 = (const lean_object*)&l_Lean_Parser_declareLeadingBuiltinParser___closed__0_value;
static const lean_ctor_object l_Lean_Parser_declareLeadingBuiltinParser___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_mkParserOfConstantUnsafe___closed__3_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_declareLeadingBuiltinParser___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_declareLeadingBuiltinParser___closed__1_value_aux_0),((lean_object*)&l_Lean_Parser_mkParserOfConstantUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_declareLeadingBuiltinParser___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_declareLeadingBuiltinParser___closed__1_value_aux_1),((lean_object*)&l_Lean_Parser_declareLeadingBuiltinParser___closed__0_value),LEAN_SCALAR_PTR_LITERAL(198, 143, 237, 9, 185, 72, 31, 190)}};
static const lean_object* l_Lean_Parser_declareLeadingBuiltinParser___closed__1 = (const lean_object*)&l_Lean_Parser_declareLeadingBuiltinParser___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Parser_declareLeadingBuiltinParser(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_declareLeadingBuiltinParser___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Parser_declareTrailingBuiltinParser___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "addBuiltinTrailingParser"};
static const lean_object* l_Lean_Parser_declareTrailingBuiltinParser___closed__0 = (const lean_object*)&l_Lean_Parser_declareTrailingBuiltinParser___closed__0_value;
static const lean_ctor_object l_Lean_Parser_declareTrailingBuiltinParser___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_mkParserOfConstantUnsafe___closed__3_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_declareTrailingBuiltinParser___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_declareTrailingBuiltinParser___closed__1_value_aux_0),((lean_object*)&l_Lean_Parser_mkParserOfConstantUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_declareTrailingBuiltinParser___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_declareTrailingBuiltinParser___closed__1_value_aux_1),((lean_object*)&l_Lean_Parser_declareTrailingBuiltinParser___closed__0_value),LEAN_SCALAR_PTR_LITERAL(196, 81, 8, 5, 195, 158, 30, 32)}};
static const lean_object* l_Lean_Parser_declareTrailingBuiltinParser___closed__1 = (const lean_object*)&l_Lean_Parser_declareTrailingBuiltinParser___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Parser_declareTrailingBuiltinParser(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_declareTrailingBuiltinParser___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Parser_getParserPriority___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 58, .m_capacity = 58, .m_length = 57, .m_data = "Invalid parser attribute: No argument or numeral expected"};
static const lean_object* l_Lean_Parser_getParserPriority___closed__0 = (const lean_object*)&l_Lean_Parser_getParserPriority___closed__0_value;
static const lean_ctor_object l_Lean_Parser_getParserPriority___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Parser_getParserPriority___closed__0_value)}};
static const lean_object* l_Lean_Parser_getParserPriority___closed__1 = (const lean_object*)&l_Lean_Parser_getParserPriority___closed__1_value;
static const lean_string_object l_Lean_Parser_getParserPriority___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 56, .m_capacity = 56, .m_length = 55, .m_data = "Invalid parser attribute: Numeral expected, but found `"};
static const lean_object* l_Lean_Parser_getParserPriority___closed__2 = (const lean_object*)&l_Lean_Parser_getParserPriority___closed__2_value;
static const lean_ctor_object l_Lean_Parser_getParserPriority___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Parser_getParserPriority___closed__3 = (const lean_object*)&l_Lean_Parser_getParserPriority___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_Parser_getParserPriority(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_getParserPriority___boxed(lean_object*);
static const lean_string_object l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 38, .m_capacity = 38, .m_length = 37, .m_data = "Invalid attribute scope: Attribute `["};
static const lean_object* l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__1___redArg___closed__0 = (const lean_object*)&l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__1___redArg___closed__0_value;
static lean_once_cell_t l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__1___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__1___redArg___closed__1;
static const lean_string_object l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__1___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "]` must be global, not `"};
static const lean_object* l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__1___redArg___closed__2 = (const lean_object*)&l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__1___redArg___closed__2_value;
static lean_once_cell_t l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__1___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__1___redArg___closed__3;
static lean_once_cell_t l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__1___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__1___redArg___closed__4;
static const lean_string_object l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__1___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "global"};
static const lean_object* l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__1___redArg___closed__5 = (const lean_object*)&l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__1___redArg___closed__5_value;
static const lean_string_object l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__1___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "local"};
static const lean_object* l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__1___redArg___closed__6 = (const lean_object*)&l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__1___redArg___closed__6_value;
static const lean_string_object l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__1___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "scoped"};
static const lean_object* l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__1___redArg___closed__7 = (const lean_object*)&l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__1___redArg___closed__7_value;
LEAN_EXPORT lean_object* l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__1___redArg(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__0_spec__0_spec__1_spec__3_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__0_spec__0_spec__1_spec__3_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "A private declaration `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___redArg___closed__0 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___redArg___closed__0_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___redArg___closed__1;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 79, .m_capacity = 79, .m_length = 78, .m_data = "` (from the current module) exists but would need to be public to access here."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___redArg___closed__2 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___redArg___closed__2_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___redArg___closed__3;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "A public declaration `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___redArg___closed__4 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___redArg___closed__4_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___redArg___closed__5;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 68, .m_capacity = 68, .m_length = 67, .m_data = "` exists but is imported privately; consider adding `public import "};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___redArg___closed__6 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___redArg___closed__6_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___redArg___closed__7;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "`."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___redArg___closed__8 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___redArg___closed__8_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___redArg___closed__9;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "` (from `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___redArg___closed__10 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___redArg___closed__10_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___redArg___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___redArg___closed__11;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "`) exists but would need to be public to access here."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___redArg___closed__12 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___redArg___closed__12_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___redArg___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___redArg___closed__13;
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__0_spec__0_spec__1_spec__3_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__0_spec__0_spec__1_spec__3_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__0_spec__0_spec__1_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__0_spec__0_spec__1_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__0_spec__0_spec__1___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__0_spec__0_spec__1___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 99, .m_capacity = 99, .m_length = 98, .m_data = "Unexpected type for parser declaration: Parsers must have type `Parser` or `TrailingParser`, but `"};
static const lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add___closed__0 = (const lean_object*)&l___private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add___closed__0_value;
static lean_once_cell_t l___private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add___closed__1;
static const lean_string_object l___private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "` has type"};
static const lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add___closed__2 = (const lean_object*)&l___private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add___closed__2_value;
static lean_once_cell_t l___private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__1(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__0_spec__0_spec__1_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__0_spec__0_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__0_spec__0_spec__1_spec__3_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__0_spec__0_spec__1_spec__3_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Parser_registerBuiltinParserAttribute___auto__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "exact"};
static const lean_object* l_Lean_Parser_registerBuiltinParserAttribute___auto__1___closed__0 = (const lean_object*)&l_Lean_Parser_registerBuiltinParserAttribute___auto__1___closed__0_value;
static const lean_ctor_object l_Lean_Parser_registerBuiltinParserAttribute___auto__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_mkParserOfConstantUnsafe___closed__3_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_registerBuiltinParserAttribute___auto__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_registerBuiltinParserAttribute___auto__1___closed__1_value_aux_0),((lean_object*)&l_Lean_Parser_mkParserOfConstantUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_registerBuiltinParserAttribute___auto__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_registerBuiltinParserAttribute___auto__1___closed__1_value_aux_1),((lean_object*)&l_Lean_Parser_mkInputContext___auto__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Parser_registerBuiltinParserAttribute___auto__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_registerBuiltinParserAttribute___auto__1___closed__1_value_aux_2),((lean_object*)&l_Lean_Parser_registerBuiltinParserAttribute___auto__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(108, 106, 111, 83, 219, 207, 32, 208)}};
static const lean_object* l_Lean_Parser_registerBuiltinParserAttribute___auto__1___closed__1 = (const lean_object*)&l_Lean_Parser_registerBuiltinParserAttribute___auto__1___closed__1_value;
static lean_once_cell_t l_Lean_Parser_registerBuiltinParserAttribute___auto__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_registerBuiltinParserAttribute___auto__1___closed__2;
static lean_once_cell_t l_Lean_Parser_registerBuiltinParserAttribute___auto__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_registerBuiltinParserAttribute___auto__1___closed__3;
static const lean_string_object l_Lean_Parser_registerBuiltinParserAttribute___auto__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Term"};
static const lean_object* l_Lean_Parser_registerBuiltinParserAttribute___auto__1___closed__4 = (const lean_object*)&l_Lean_Parser_registerBuiltinParserAttribute___auto__1___closed__4_value;
static const lean_string_object l_Lean_Parser_registerBuiltinParserAttribute___auto__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "declName"};
static const lean_object* l_Lean_Parser_registerBuiltinParserAttribute___auto__1___closed__5 = (const lean_object*)&l_Lean_Parser_registerBuiltinParserAttribute___auto__1___closed__5_value;
static const lean_ctor_object l_Lean_Parser_registerBuiltinParserAttribute___auto__1___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_mkParserOfConstantUnsafe___closed__3_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_registerBuiltinParserAttribute___auto__1___closed__6_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_registerBuiltinParserAttribute___auto__1___closed__6_value_aux_0),((lean_object*)&l_Lean_Parser_mkParserOfConstantUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_registerBuiltinParserAttribute___auto__1___closed__6_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_registerBuiltinParserAttribute___auto__1___closed__6_value_aux_1),((lean_object*)&l_Lean_Parser_registerBuiltinParserAttribute___auto__1___closed__4_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Parser_registerBuiltinParserAttribute___auto__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_registerBuiltinParserAttribute___auto__1___closed__6_value_aux_2),((lean_object*)&l_Lean_Parser_registerBuiltinParserAttribute___auto__1___closed__5_value),LEAN_SCALAR_PTR_LITERAL(113, 211, 58, 33, 138, 196, 138, 106)}};
static const lean_object* l_Lean_Parser_registerBuiltinParserAttribute___auto__1___closed__6 = (const lean_object*)&l_Lean_Parser_registerBuiltinParserAttribute___auto__1___closed__6_value;
static const lean_string_object l_Lean_Parser_registerBuiltinParserAttribute___auto__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "decl_name%"};
static const lean_object* l_Lean_Parser_registerBuiltinParserAttribute___auto__1___closed__7 = (const lean_object*)&l_Lean_Parser_registerBuiltinParserAttribute___auto__1___closed__7_value;
static lean_once_cell_t l_Lean_Parser_registerBuiltinParserAttribute___auto__1___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_registerBuiltinParserAttribute___auto__1___closed__8;
static lean_once_cell_t l_Lean_Parser_registerBuiltinParserAttribute___auto__1___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_registerBuiltinParserAttribute___auto__1___closed__9;
static lean_once_cell_t l_Lean_Parser_registerBuiltinParserAttribute___auto__1___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_registerBuiltinParserAttribute___auto__1___closed__10;
static lean_once_cell_t l_Lean_Parser_registerBuiltinParserAttribute___auto__1___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_registerBuiltinParserAttribute___auto__1___closed__11;
static lean_once_cell_t l_Lean_Parser_registerBuiltinParserAttribute___auto__1___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_registerBuiltinParserAttribute___auto__1___closed__12;
static lean_once_cell_t l_Lean_Parser_registerBuiltinParserAttribute___auto__1___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_registerBuiltinParserAttribute___auto__1___closed__13;
static lean_once_cell_t l_Lean_Parser_registerBuiltinParserAttribute___auto__1___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_registerBuiltinParserAttribute___auto__1___closed__14;
static lean_once_cell_t l_Lean_Parser_registerBuiltinParserAttribute___auto__1___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_registerBuiltinParserAttribute___auto__1___closed__15;
static lean_once_cell_t l_Lean_Parser_registerBuiltinParserAttribute___auto__1___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_registerBuiltinParserAttribute___auto__1___closed__16;
static lean_once_cell_t l_Lean_Parser_registerBuiltinParserAttribute___auto__1___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_registerBuiltinParserAttribute___auto__1___closed__17;
static lean_once_cell_t l_Lean_Parser_registerBuiltinParserAttribute___auto__1___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_registerBuiltinParserAttribute___auto__1___closed__18;
LEAN_EXPORT lean_object* l_Lean_Parser_registerBuiltinParserAttribute___auto__1;
LEAN_EXPORT lean_object* l_Lean_Parser_registerBuiltinParserAttribute___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_registerBuiltinParserAttribute___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_registerBuiltinParserAttribute___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_registerBuiltinParserAttribute___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Parser_registerBuiltinParserAttribute___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 45, .m_capacity = 45, .m_length = 44, .m_data = "`declName` should be in Lean.Parser.Category"};
static const lean_object* l_Lean_Parser_registerBuiltinParserAttribute___closed__0 = (const lean_object*)&l_Lean_Parser_registerBuiltinParserAttribute___closed__0_value;
static lean_once_cell_t l_Lean_Parser_registerBuiltinParserAttribute___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_registerBuiltinParserAttribute___closed__1;
static const lean_string_object l_Lean_Parser_registerBuiltinParserAttribute___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Category"};
static const lean_object* l_Lean_Parser_registerBuiltinParserAttribute___closed__2 = (const lean_object*)&l_Lean_Parser_registerBuiltinParserAttribute___closed__2_value;
static const lean_string_object l_Lean_Parser_registerBuiltinParserAttribute___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "Builtin parser"};
static const lean_object* l_Lean_Parser_registerBuiltinParserAttribute___closed__3 = (const lean_object*)&l_Lean_Parser_registerBuiltinParserAttribute___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_Parser_registerBuiltinParserAttribute(lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_registerBuiltinParserAttribute___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00__private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add_spec__1_spec__1_spec__2_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00__private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add_spec__1_spec__1_spec__2_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00__private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add_spec__1_spec__1_spec__2_spec__3___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00__private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add_spec__1_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00__private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add_spec__1_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00__private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add_spec__1_spec__1_spec__2_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forM___at___00__private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add_spec__1___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forM___at___00__private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add_spec__1___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forM___at___00__private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forM___at___00__private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_List_forM___at___00__private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "invalid parser `"};
static const lean_object* l_List_forM___at___00__private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add_spec__0___closed__0 = (const lean_object*)&l_List_forM___at___00__private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add_spec__0___closed__0_value;
static lean_once_cell_t l_List_forM___at___00__private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_forM___at___00__private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add_spec__0___closed__1;
static lean_once_cell_t l_List_forM___at___00__private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add_spec__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_forM___at___00__private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add_spec__0___closed__2;
LEAN_EXPORT lean_object* l_List_forM___at___00__private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add_spec__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forM___at___00__private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add___redArg___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add___redArg___closed__0 = (const lean_object*)&l___private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add___redArg___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add___redArg(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forM___at___00__private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forM___at___00__private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00__private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add_spec__1_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00__private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add_spec__1_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00__private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00__private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00__private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add_spec__1_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00__private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add_spec__1_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00__private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add_spec__1_spec__1_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00__private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add_spec__1_spec__1_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00__private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add_spec__1_spec__1_spec__2_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00__private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add_spec__1_spec__1_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_mkParserAttributeImpl___auto__1;
LEAN_EXPORT lean_object* l_Lean_Parser_mkParserAttributeImpl___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_mkParserAttributeImpl___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Parser_mkParserAttributeImpl___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "parser"};
static const lean_object* l_Lean_Parser_mkParserAttributeImpl___closed__0 = (const lean_object*)&l_Lean_Parser_mkParserAttributeImpl___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Parser_mkParserAttributeImpl(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_registerBuiltinDynamicParserAttribute___auto__1;
LEAN_EXPORT lean_object* l_Lean_Parser_registerBuiltinDynamicParserAttribute(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_registerBuiltinDynamicParserAttribute___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___lam__0___closed__0_00___x40_Lean_Parser_Extension_3896994716____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 58, .m_capacity = 58, .m_length = 57, .m_data = "invalid parser attribute implementation builder arguments"};
static const lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___lam__0___closed__0_00___x40_Lean_Parser_Extension_3896994716____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___lam__0___closed__0_00___x40_Lean_Parser_Extension_3896994716____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___lam__0___closed__1_00___x40_Lean_Parser_Extension_3896994716____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___lam__0___closed__0_00___x40_Lean_Parser_Extension_3896994716____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___lam__0___closed__1_00___x40_Lean_Parser_Extension_3896994716____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___lam__0___closed__1_00___x40_Lean_Parser_Extension_3896994716____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___lam__0_00___x40_Lean_Parser_Extension_3896994716____hygCtx___hyg_2_(lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__0_00___x40_Lean_Parser_Extension_3896994716____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___lam__0_00___x40_Lean_Parser_Extension_3896994716____hygCtx___hyg_2_, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__0_00___x40_Lean_Parser_Extension_3896994716____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__0_00___x40_Lean_Parser_Extension_3896994716____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__1_00___x40_Lean_Parser_Extension_3896994716____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "parserAttr"};
static const lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__1_00___x40_Lean_Parser_Extension_3896994716____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__1_00___x40_Lean_Parser_Extension_3896994716____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Extension_3896994716____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__1_00___x40_Lean_Parser_Extension_3896994716____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(126, 245, 154, 169, 111, 55, 1, 167)}};
static const lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Extension_3896994716____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Extension_3896994716____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn_00___x40_Lean_Parser_Extension_3896994716____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn_00___x40_Lean_Parser_Extension_3896994716____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_registerParserCategory___auto__1;
LEAN_EXPORT lean_object* l_Lean_Parser_registerParserCategory(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_registerParserCategory___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__0_00___x40_Lean_Parser_Extension_346849000____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "builtin_term_parser"};
static const lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__0_00___x40_Lean_Parser_Extension_346849000____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__0_00___x40_Lean_Parser_Extension_346849000____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__1_00___x40_Lean_Parser_Extension_346849000____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__0_00___x40_Lean_Parser_Extension_346849000____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(47, 207, 87, 145, 239, 20, 239, 169)}};
static const lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__1_00___x40_Lean_Parser_Extension_346849000____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__1_00___x40_Lean_Parser_Extension_346849000____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Extension_346849000____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "term"};
static const lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Extension_346849000____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Extension_346849000____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Extension_346849000____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_mkParserOfConstantUnsafe___closed__3_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Extension_346849000____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Extension_346849000____hygCtx___hyg_2__value_aux_0),((lean_object*)&l_Lean_Parser_mkParserOfConstantUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Extension_346849000____hygCtx___hyg_2__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Extension_346849000____hygCtx___hyg_2__value_aux_1),((lean_object*)&l_Lean_Parser_registerBuiltinParserAttribute___closed__2_value),LEAN_SCALAR_PTR_LITERAL(36, 45, 52, 71, 90, 26, 52, 161)}};
static const lean_ctor_object l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Extension_346849000____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Extension_346849000____hygCtx___hyg_2__value_aux_2),((lean_object*)&l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Extension_346849000____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(208, 211, 65, 28, 248, 161, 130, 58)}};
static const lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Extension_346849000____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Extension_346849000____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__4_00___x40_Lean_Parser_Extension_346849000____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__4_00___x40_Lean_Parser_Extension_346849000____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__5_00___x40_Lean_Parser_Extension_346849000____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__5_00___x40_Lean_Parser_Extension_346849000____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__6_00___x40_Lean_Parser_Extension_346849000____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__6_00___x40_Lean_Parser_Extension_346849000____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__7_00___x40_Lean_Parser_Extension_346849000____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__7_00___x40_Lean_Parser_Extension_346849000____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn_00___x40_Lean_Parser_Extension_346849000____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn_00___x40_Lean_Parser_Extension_346849000____hygCtx___hyg_2____boxed(lean_object*);
static const lean_string_object l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__0_00___x40_Lean_Parser_Extension_3431364690____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "term_parser"};
static const lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__0_00___x40_Lean_Parser_Extension_3431364690____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__0_00___x40_Lean_Parser_Extension_3431364690____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__1_00___x40_Lean_Parser_Extension_3431364690____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__0_00___x40_Lean_Parser_Extension_3431364690____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(97, 63, 227, 232, 74, 240, 13, 112)}};
static const lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__1_00___x40_Lean_Parser_Extension_3431364690____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__1_00___x40_Lean_Parser_Extension_3431364690____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Extension_3431364690____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Extension_346849000____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(187, 230, 181, 162, 253, 146, 122, 119)}};
static const lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Extension_3431364690____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Extension_3431364690____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Extension_3431364690____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Extension_3431364690____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__4_00___x40_Lean_Parser_Extension_3431364690____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__4_00___x40_Lean_Parser_Extension_3431364690____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__5_00___x40_Lean_Parser_Extension_3431364690____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__5_00___x40_Lean_Parser_Extension_3431364690____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__6_00___x40_Lean_Parser_Extension_3431364690____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__6_00___x40_Lean_Parser_Extension_3431364690____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn_00___x40_Lean_Parser_Extension_3431364690____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn_00___x40_Lean_Parser_Extension_3431364690____hygCtx___hyg_2____boxed(lean_object*);
static const lean_string_object l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__0_00___x40_Lean_Parser_Extension_2342493449____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "builtin_command_parser"};
static const lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__0_00___x40_Lean_Parser_Extension_2342493449____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__0_00___x40_Lean_Parser_Extension_2342493449____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__1_00___x40_Lean_Parser_Extension_2342493449____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__0_00___x40_Lean_Parser_Extension_2342493449____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(84, 82, 248, 24, 98, 200, 69, 241)}};
static const lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__1_00___x40_Lean_Parser_Extension_2342493449____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__1_00___x40_Lean_Parser_Extension_2342493449____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Extension_2342493449____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "command"};
static const lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Extension_2342493449____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Extension_2342493449____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Extension_2342493449____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_mkParserOfConstantUnsafe___closed__3_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Extension_2342493449____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Extension_2342493449____hygCtx___hyg_2__value_aux_0),((lean_object*)&l_Lean_Parser_mkParserOfConstantUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Extension_2342493449____hygCtx___hyg_2__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Extension_2342493449____hygCtx___hyg_2__value_aux_1),((lean_object*)&l_Lean_Parser_registerBuiltinParserAttribute___closed__2_value),LEAN_SCALAR_PTR_LITERAL(36, 45, 52, 71, 90, 26, 52, 161)}};
static const lean_ctor_object l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Extension_2342493449____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Extension_2342493449____hygCtx___hyg_2__value_aux_2),((lean_object*)&l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Extension_2342493449____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(46, 37, 169, 7, 189, 210, 168, 21)}};
static const lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Extension_2342493449____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Extension_2342493449____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__4_00___x40_Lean_Parser_Extension_2342493449____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__4_00___x40_Lean_Parser_Extension_2342493449____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__5_00___x40_Lean_Parser_Extension_2342493449____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__5_00___x40_Lean_Parser_Extension_2342493449____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__6_00___x40_Lean_Parser_Extension_2342493449____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__6_00___x40_Lean_Parser_Extension_2342493449____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__7_00___x40_Lean_Parser_Extension_2342493449____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__7_00___x40_Lean_Parser_Extension_2342493449____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn_00___x40_Lean_Parser_Extension_2342493449____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn_00___x40_Lean_Parser_Extension_2342493449____hygCtx___hyg_2____boxed(lean_object*);
static const lean_string_object l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__0_00___x40_Lean_Parser_Extension_3226070615____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "command_parser"};
static const lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__0_00___x40_Lean_Parser_Extension_3226070615____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__0_00___x40_Lean_Parser_Extension_3226070615____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__1_00___x40_Lean_Parser_Extension_3226070615____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__0_00___x40_Lean_Parser_Extension_3226070615____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(87, 48, 168, 200, 51, 243, 130, 78)}};
static const lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__1_00___x40_Lean_Parser_Extension_3226070615____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__1_00___x40_Lean_Parser_Extension_3226070615____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Extension_3226070615____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Extension_2342493449____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(29, 69, 134, 125, 237, 175, 69, 70)}};
static const lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Extension_3226070615____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Extension_3226070615____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Extension_3226070615____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Extension_3226070615____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__4_00___x40_Lean_Parser_Extension_3226070615____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__4_00___x40_Lean_Parser_Extension_3226070615____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__5_00___x40_Lean_Parser_Extension_3226070615____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__5_00___x40_Lean_Parser_Extension_3226070615____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__6_00___x40_Lean_Parser_Extension_3226070615____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__6_00___x40_Lean_Parser_Extension_3226070615____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn_00___x40_Lean_Parser_Extension_3226070615____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn_00___x40_Lean_Parser_Extension_3226070615____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_commandParser(lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00__private_Lean_Parser_Extension_0__Lean_Parser_withNamespaces_spec__0(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00__private_Lean_Parser_Extension_0__Lean_Parser_withNamespaces_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Parser_Extension_0__Lean_Parser_withNamespaces_spec__1(uint8_t, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Parser_Extension_0__Lean_Parser_withNamespaces_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_withNamespaces___lam__0(lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_withNamespaces___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_withNamespaces(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_withNamespaces___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Parser_withOpenDeclFnCore_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Parser_withOpenDeclFnCore_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Parser_withOpenDeclFnCore___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "Command"};
static const lean_object* l_Lean_Parser_withOpenDeclFnCore___closed__0 = (const lean_object*)&l_Lean_Parser_withOpenDeclFnCore___closed__0_value;
static const lean_string_object l_Lean_Parser_withOpenDeclFnCore___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "openSimple"};
static const lean_object* l_Lean_Parser_withOpenDeclFnCore___closed__1 = (const lean_object*)&l_Lean_Parser_withOpenDeclFnCore___closed__1_value;
static const lean_ctor_object l_Lean_Parser_withOpenDeclFnCore___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_mkParserOfConstantUnsafe___closed__3_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_withOpenDeclFnCore___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_withOpenDeclFnCore___closed__2_value_aux_0),((lean_object*)&l_Lean_Parser_mkParserOfConstantUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_withOpenDeclFnCore___closed__2_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_withOpenDeclFnCore___closed__2_value_aux_1),((lean_object*)&l_Lean_Parser_withOpenDeclFnCore___closed__0_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lean_Parser_withOpenDeclFnCore___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_withOpenDeclFnCore___closed__2_value_aux_2),((lean_object*)&l_Lean_Parser_withOpenDeclFnCore___closed__1_value),LEAN_SCALAR_PTR_LITERAL(171, 238, 134, 92, 162, 110, 43, 67)}};
static const lean_object* l_Lean_Parser_withOpenDeclFnCore___closed__2 = (const lean_object*)&l_Lean_Parser_withOpenDeclFnCore___closed__2_value;
static const lean_string_object l_Lean_Parser_withOpenDeclFnCore___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "openScoped"};
static const lean_object* l_Lean_Parser_withOpenDeclFnCore___closed__3 = (const lean_object*)&l_Lean_Parser_withOpenDeclFnCore___closed__3_value;
static const lean_ctor_object l_Lean_Parser_withOpenDeclFnCore___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_mkParserOfConstantUnsafe___closed__3_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_withOpenDeclFnCore___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_withOpenDeclFnCore___closed__4_value_aux_0),((lean_object*)&l_Lean_Parser_mkParserOfConstantUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_withOpenDeclFnCore___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_withOpenDeclFnCore___closed__4_value_aux_1),((lean_object*)&l_Lean_Parser_withOpenDeclFnCore___closed__0_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lean_Parser_withOpenDeclFnCore___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_withOpenDeclFnCore___closed__4_value_aux_2),((lean_object*)&l_Lean_Parser_withOpenDeclFnCore___closed__3_value),LEAN_SCALAR_PTR_LITERAL(55, 166, 237, 23, 37, 47, 5, 133)}};
static const lean_object* l_Lean_Parser_withOpenDeclFnCore___closed__4 = (const lean_object*)&l_Lean_Parser_withOpenDeclFnCore___closed__4_value;
LEAN_EXPORT lean_object* l_Lean_Parser_withOpenDeclFnCore(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Parser_withOpenFn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "open"};
static const lean_object* l_Lean_Parser_withOpenFn___closed__0 = (const lean_object*)&l_Lean_Parser_withOpenFn___closed__0_value;
static const lean_ctor_object l_Lean_Parser_withOpenFn___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_mkParserOfConstantUnsafe___closed__3_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_withOpenFn___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_withOpenFn___closed__1_value_aux_0),((lean_object*)&l_Lean_Parser_mkParserOfConstantUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_withOpenFn___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_withOpenFn___closed__1_value_aux_1),((lean_object*)&l_Lean_Parser_withOpenDeclFnCore___closed__0_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lean_Parser_withOpenFn___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_withOpenFn___closed__1_value_aux_2),((lean_object*)&l_Lean_Parser_withOpenFn___closed__0_value),LEAN_SCALAR_PTR_LITERAL(148, 8, 226, 43, 107, 167, 95, 157)}};
static const lean_object* l_Lean_Parser_withOpenFn___closed__1 = (const lean_object*)&l_Lean_Parser_withOpenFn___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Parser_withOpenFn(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_withOpen(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_withOpenDeclFn(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_withOpenDecl(lean_object*);
static const lean_string_object l___private_Lean_Parser_Extension_0__Lean_Parser_optionValueToDataValue_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "false"};
static const lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_optionValueToDataValue_x3f___closed__0 = (const lean_object*)&l___private_Lean_Parser_Extension_0__Lean_Parser_optionValueToDataValue_x3f___closed__0_value;
static const lean_ctor_object l___private_Lean_Parser_Extension_0__Lean_Parser_optionValueToDataValue_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 1}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_optionValueToDataValue_x3f___closed__1 = (const lean_object*)&l___private_Lean_Parser_Extension_0__Lean_Parser_optionValueToDataValue_x3f___closed__1_value;
static const lean_ctor_object l___private_Lean_Parser_Extension_0__Lean_Parser_optionValueToDataValue_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Extension_0__Lean_Parser_optionValueToDataValue_x3f___closed__1_value)}};
static const lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_optionValueToDataValue_x3f___closed__2 = (const lean_object*)&l___private_Lean_Parser_Extension_0__Lean_Parser_optionValueToDataValue_x3f___closed__2_value;
static const lean_string_object l___private_Lean_Parser_Extension_0__Lean_Parser_optionValueToDataValue_x3f___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "true"};
static const lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_optionValueToDataValue_x3f___closed__3 = (const lean_object*)&l___private_Lean_Parser_Extension_0__Lean_Parser_optionValueToDataValue_x3f___closed__3_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_optionValueToDataValue_x3f(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_optionValueToDataValue_x3f___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_withSetOptionValueFnCore_insertOption(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_withSetOptionValueFnCore_insertOption___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_withSetOptionValueFnCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_withSetOptionValueFnCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Parser_withSetOptionFn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "set_option"};
static const lean_object* l_Lean_Parser_withSetOptionFn___closed__0 = (const lean_object*)&l_Lean_Parser_withSetOptionFn___closed__0_value;
static const lean_ctor_object l_Lean_Parser_withSetOptionFn___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_mkParserOfConstantUnsafe___closed__3_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_withSetOptionFn___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_withSetOptionFn___closed__1_value_aux_0),((lean_object*)&l_Lean_Parser_mkParserOfConstantUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_withSetOptionFn___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_withSetOptionFn___closed__1_value_aux_1),((lean_object*)&l_Lean_Parser_withOpenDeclFnCore___closed__0_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lean_Parser_withSetOptionFn___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_withSetOptionFn___closed__1_value_aux_2),((lean_object*)&l_Lean_Parser_withSetOptionFn___closed__0_value),LEAN_SCALAR_PTR_LITERAL(216, 223, 149, 245, 150, 86, 134, 198)}};
static const lean_object* l_Lean_Parser_withSetOptionFn___closed__1 = (const lean_object*)&l_Lean_Parser_withSetOptionFn___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Parser_withSetOptionFn(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_withSetOption(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_withSetOptionValueFn(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_withSetOptionValue(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___lam__0_00___x40_Lean_Parser_Extension_1918044636____hygCtx___hyg_2_(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___lam__0_00___x40_Lean_Parser_Extension_1918044636____hygCtx___hyg_2____boxed(lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__0_00___x40_Lean_Parser_Extension_1918044636____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__0_00___x40_Lean_Parser_Extension_1918044636____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn_00___x40_Lean_Parser_Extension_1918044636____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn_00___x40_Lean_Parser_Extension_1918044636____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_aliasExtension;
LEAN_EXPORT lean_object* l_Lean_Parser_ParserResolution_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ParserResolution_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ParserResolution_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ParserResolution_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ParserResolution_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ParserResolution_category_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ParserResolution_category_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ParserResolution_parser_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ParserResolution_parser_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ParserResolution_alias_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ParserResolution_alias_elim(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Parser_Extension_0__Lean_Parser_resolveParserNameCore_isParser___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_resolveParserNameCore_isParser___closed__0 = (const lean_object*)&l___private_Lean_Parser_Extension_0__Lean_Parser_resolveParserNameCore_isParser___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_resolveParserNameCore_isParser(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterMapTR_go___at___00__private_Lean_Parser_Extension_0__Lean_Parser_resolveParserNameCore_spec__1(lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_List_forIn_x27_loop___at___00__private_Lean_Parser_Extension_0__Lean_Parser_resolveParserNameCore_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Parser_Extension_0__Lean_Parser_resolveParserNameCore_spec__0___redArg___closed__0 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Parser_Extension_0__Lean_Parser_resolveParserNameCore_spec__0___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Parser_Extension_0__Lean_Parser_resolveParserNameCore_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Parser_Extension_0__Lean_Parser_resolveParserNameCore_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Parser_Extension_0__Lean_Parser_resolveParserNameCore___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_resolveParserNameCore___closed__0 = (const lean_object*)&l___private_Lean_Parser_Extension_0__Lean_Parser_resolveParserNameCore___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_resolveParserNameCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_resolveParserNameCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Parser_Extension_0__Lean_Parser_resolveParserNameCore_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Parser_Extension_0__Lean_Parser_resolveParserNameCore_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ParserContext_resolveParserName(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Parser_ParserContext_resolveParserName___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_resolveParserName(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_resolveParserName___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Option_instBEq_beq___at___00Lean_Parser_parserOfStackFn_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Option_instBEq_beq___at___00Lean_Parser_parserOfStackFn_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_parserOfStackFn___lam__0(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_parserOfStackFn___lam__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Parser_parserOfStackFn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "ambiguous parser name "};
static const lean_object* l_Lean_Parser_parserOfStackFn___closed__0 = (const lean_object*)&l_Lean_Parser_parserOfStackFn___closed__0_value;
static const lean_string_object l_Lean_Parser_parserOfStackFn___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "unknown parser "};
static const lean_object* l_Lean_Parser_parserOfStackFn___closed__1 = (const lean_object*)&l_Lean_Parser_parserOfStackFn___closed__1_value;
static const lean_string_object l_Lean_Parser_parserOfStackFn___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 52, .m_capacity = 52, .m_length = 51, .m_data = "expected parser to return exactly one syntax object"};
static const lean_object* l_Lean_Parser_parserOfStackFn___closed__2 = (const lean_object*)&l_Lean_Parser_parserOfStackFn___closed__2_value;
static const lean_string_object l_Lean_Parser_parserOfStackFn___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "parser alias "};
static const lean_object* l_Lean_Parser_parserOfStackFn___closed__3 = (const lean_object*)&l_Lean_Parser_parserOfStackFn___closed__3_value;
static const lean_string_object l_Lean_Parser_parserOfStackFn___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = ", must not take parameters"};
static const lean_object* l_Lean_Parser_parserOfStackFn___closed__4 = (const lean_object*)&l_Lean_Parser_parserOfStackFn___closed__4_value;
static const lean_string_object l_Lean_Parser_parserOfStackFn___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 103, .m_capacity = 103, .m_length = 102, .m_data = "failed to determine parser using syntax stack, the specified element on the stack is not an identifier"};
static const lean_object* l_Lean_Parser_parserOfStackFn___closed__5 = (const lean_object*)&l_Lean_Parser_parserOfStackFn___closed__5_value;
static const lean_string_object l_Lean_Parser_parserOfStackFn___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 66, .m_capacity = 66, .m_length = 65, .m_data = "failed to determine parser using syntax stack, stack is too small"};
static const lean_object* l_Lean_Parser_parserOfStackFn___closed__6 = (const lean_object*)&l_Lean_Parser_parserOfStackFn___closed__6_value;
LEAN_EXPORT lean_object* l_Lean_Parser_parserOfStackFn(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_parserOfStackFn___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_parserOfStack___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_parserOfStack___lam__1(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_parserOfStack___lam__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_parserOfStack___lam__2(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_parserOfStack___lam__2___boxed(lean_object*);
static const lean_closure_object l_Lean_Parser_parserOfStack___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_parserOfStack___lam__1___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Parser_parserOfStack___closed__0 = (const lean_object*)&l_Lean_Parser_parserOfStack___closed__0_value;
static const lean_closure_object l_Lean_Parser_parserOfStack___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_parserOfStack___lam__2___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Parser_parserOfStack___closed__1 = (const lean_object*)&l_Lean_Parser_parserOfStack___closed__1_value;
static const lean_ctor_object l_Lean_Parser_parserOfStack___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Parser_parserOfStack___closed__0_value),((lean_object*)&l_Lean_Parser_parserOfStack___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Parser_parserOfStack___closed__2 = (const lean_object*)&l_Lean_Parser_parserOfStack___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Parser_parserOfStack(lean_object*, lean_object*);
static lean_object* _init_l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__0_00___x40_Lean_Parser_Extension_3332318574____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1_; 
v___x_1_ = l_Lean_Data_Trie_empty___redArg();
return v___x_1_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn_00___x40_Lean_Parser_Extension_3332318574____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_3_; lean_object* v___x_4_; lean_object* v___x_5_; 
v___x_3_ = lean_obj_once(&l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__0_00___x40_Lean_Parser_Extension_3332318574____hygCtx___hyg_2_, &l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__0_00___x40_Lean_Parser_Extension_3332318574____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__0_00___x40_Lean_Parser_Extension_3332318574____hygCtx___hyg_2_);
v___x_4_ = lean_st_mk_ref(v___x_3_);
v___x_5_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5_, 0, v___x_4_);
return v___x_5_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn_00___x40_Lean_Parser_Extension_3332318574____hygCtx___hyg_2____boxed(lean_object* v_a_6_){
_start:
{
lean_object* v_res_7_; 
v_res_7_ = l___private_Lean_Parser_Extension_0__Lean_Parser_initFn_00___x40_Lean_Parser_Extension_3332318574____hygCtx___hyg_2_();
return v_res_7_;
}
}
static lean_object* _init_l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__0_00___x40_Lean_Parser_Extension_848551512____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_8_; 
v___x_8_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_8_;
}
}
static lean_object* _init_l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__1_00___x40_Lean_Parser_Extension_848551512____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_9_; lean_object* v___x_10_; 
v___x_9_ = lean_obj_once(&l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__0_00___x40_Lean_Parser_Extension_848551512____hygCtx___hyg_2_, &l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__0_00___x40_Lean_Parser_Extension_848551512____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__0_00___x40_Lean_Parser_Extension_848551512____hygCtx___hyg_2_);
v___x_10_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_10_, 0, v___x_9_);
return v___x_10_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn_00___x40_Lean_Parser_Extension_848551512____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_12_; lean_object* v___x_13_; lean_object* v___x_14_; 
v___x_12_ = lean_obj_once(&l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__1_00___x40_Lean_Parser_Extension_848551512____hygCtx___hyg_2_, &l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__1_00___x40_Lean_Parser_Extension_848551512____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__1_00___x40_Lean_Parser_Extension_848551512____hygCtx___hyg_2_);
v___x_13_ = lean_st_mk_ref(v___x_12_);
v___x_14_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_14_, 0, v___x_13_);
return v___x_14_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn_00___x40_Lean_Parser_Extension_848551512____hygCtx___hyg_2____boxed(lean_object* v_a_15_){
_start:
{
lean_object* v_res_16_; 
v_res_16_ = l___private_Lean_Parser_Extension_0__Lean_Parser_initFn_00___x40_Lean_Parser_Extension_848551512____hygCtx___hyg_2_();
return v_res_16_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_registerBuiltinNodeKind(lean_object* v_k_17_){
_start:
{
lean_object* v___x_19_; lean_object* v___x_20_; lean_object* v___x_21_; lean_object* v___x_22_; lean_object* v___x_23_; 
v___x_19_ = l_Lean_Parser_builtinSyntaxNodeKindSetRef;
v___x_20_ = lean_st_ref_take(v___x_19_);
v___x_21_ = l_Lean_Parser_SyntaxNodeKindSet_insert(v___x_20_, v_k_17_);
v___x_22_ = lean_st_ref_put(v___x_19_, v___x_21_);
v___x_23_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_23_, 0, v___x_22_);
return v___x_23_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_registerBuiltinNodeKind___boxed(lean_object* v_k_24_, lean_object* v_a_25_){
_start:
{
lean_object* v_res_26_; 
v_res_26_ = l_Lean_Parser_registerBuiltinNodeKind(v_k_24_);
return v_res_26_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn_00___x40_Lean_Parser_Extension_3496418232____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_58_; lean_object* v___x_59_; lean_object* v___x_60_; lean_object* v___x_61_; lean_object* v___x_62_; lean_object* v___x_63_; lean_object* v___x_64_; lean_object* v___x_65_; lean_object* v___x_66_; lean_object* v___x_67_; lean_object* v___x_68_; lean_object* v___x_69_; lean_object* v___x_70_; lean_object* v___x_71_; lean_object* v___x_72_; lean_object* v___x_73_; lean_object* v___x_74_; lean_object* v___x_75_; lean_object* v___x_76_; lean_object* v___x_77_; 
v___x_58_ = ((lean_object*)(l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__1_00___x40_Lean_Parser_Extension_3496418232____hygCtx___hyg_2_));
v___x_59_ = l_Lean_Parser_registerBuiltinNodeKind(v___x_58_);
lean_dec_ref(v___x_59_);
v___x_60_ = ((lean_object*)(l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Extension_3496418232____hygCtx___hyg_2_));
v___x_61_ = l_Lean_Parser_registerBuiltinNodeKind(v___x_60_);
lean_dec_ref(v___x_61_);
v___x_62_ = ((lean_object*)(l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__5_00___x40_Lean_Parser_Extension_3496418232____hygCtx___hyg_2_));
v___x_63_ = l_Lean_Parser_registerBuiltinNodeKind(v___x_62_);
lean_dec_ref(v___x_63_);
v___x_64_ = ((lean_object*)(l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__7_00___x40_Lean_Parser_Extension_3496418232____hygCtx___hyg_2_));
v___x_65_ = l_Lean_Parser_registerBuiltinNodeKind(v___x_64_);
lean_dec_ref(v___x_65_);
v___x_66_ = ((lean_object*)(l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__9_00___x40_Lean_Parser_Extension_3496418232____hygCtx___hyg_2_));
v___x_67_ = l_Lean_Parser_registerBuiltinNodeKind(v___x_66_);
lean_dec_ref(v___x_67_);
v___x_68_ = ((lean_object*)(l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__11_00___x40_Lean_Parser_Extension_3496418232____hygCtx___hyg_2_));
v___x_69_ = l_Lean_Parser_registerBuiltinNodeKind(v___x_68_);
lean_dec_ref(v___x_69_);
v___x_70_ = ((lean_object*)(l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__13_00___x40_Lean_Parser_Extension_3496418232____hygCtx___hyg_2_));
v___x_71_ = l_Lean_Parser_registerBuiltinNodeKind(v___x_70_);
lean_dec_ref(v___x_71_);
v___x_72_ = ((lean_object*)(l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__15_00___x40_Lean_Parser_Extension_3496418232____hygCtx___hyg_2_));
v___x_73_ = l_Lean_Parser_registerBuiltinNodeKind(v___x_72_);
lean_dec_ref(v___x_73_);
v___x_74_ = ((lean_object*)(l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__17_00___x40_Lean_Parser_Extension_3496418232____hygCtx___hyg_2_));
v___x_75_ = l_Lean_Parser_registerBuiltinNodeKind(v___x_74_);
lean_dec_ref(v___x_75_);
v___x_76_ = ((lean_object*)(l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__19_00___x40_Lean_Parser_Extension_3496418232____hygCtx___hyg_2_));
v___x_77_ = l_Lean_Parser_registerBuiltinNodeKind(v___x_76_);
return v___x_77_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn_00___x40_Lean_Parser_Extension_3496418232____hygCtx___hyg_2____boxed(lean_object* v_a_78_){
_start:
{
lean_object* v_res_79_; 
v_res_79_ = l___private_Lean_Parser_Extension_0__Lean_Parser_initFn_00___x40_Lean_Parser_Extension_3496418232____hygCtx___hyg_2_();
return v_res_79_;
}
}
static lean_object* _init_l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__0_00___x40_Lean_Parser_Extension_3941088830____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_80_; lean_object* v___x_81_; 
v___x_80_ = lean_obj_once(&l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__0_00___x40_Lean_Parser_Extension_848551512____hygCtx___hyg_2_, &l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__0_00___x40_Lean_Parser_Extension_848551512____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__0_00___x40_Lean_Parser_Extension_848551512____hygCtx___hyg_2_);
v___x_81_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_81_, 0, v___x_80_);
return v___x_81_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn_00___x40_Lean_Parser_Extension_3941088830____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_83_; lean_object* v___x_84_; lean_object* v___x_85_; 
v___x_83_ = lean_obj_once(&l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__0_00___x40_Lean_Parser_Extension_3941088830____hygCtx___hyg_2_, &l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__0_00___x40_Lean_Parser_Extension_3941088830____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__0_00___x40_Lean_Parser_Extension_3941088830____hygCtx___hyg_2_);
v___x_84_ = lean_st_mk_ref(v___x_83_);
v___x_85_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_85_, 0, v___x_84_);
return v___x_85_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn_00___x40_Lean_Parser_Extension_3941088830____hygCtx___hyg_2____boxed(lean_object* v_a_86_){
_start:
{
lean_object* v_res_87_; 
v_res_87_ = l___private_Lean_Parser_Extension_0__Lean_Parser_initFn_00___x40_Lean_Parser_Extension_3941088830____hygCtx___hyg_2_();
return v_res_87_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_throwParserCategoryAlreadyDefined___redArg(lean_object* v_catName_90_){
_start:
{
lean_object* v___x_91_; uint8_t v___x_92_; lean_object* v___x_93_; lean_object* v___x_94_; lean_object* v___x_95_; lean_object* v___x_96_; lean_object* v___x_97_; 
v___x_91_ = ((lean_object*)(l___private_Lean_Parser_Extension_0__Lean_Parser_throwParserCategoryAlreadyDefined___redArg___closed__0));
v___x_92_ = 1;
v___x_93_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_catName_90_, v___x_92_);
v___x_94_ = lean_string_append(v___x_91_, v___x_93_);
lean_dec_ref(v___x_93_);
v___x_95_ = ((lean_object*)(l___private_Lean_Parser_Extension_0__Lean_Parser_throwParserCategoryAlreadyDefined___redArg___closed__1));
v___x_96_ = lean_string_append(v___x_94_, v___x_95_);
v___x_97_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_97_, 0, v___x_96_);
return v___x_97_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_throwParserCategoryAlreadyDefined(lean_object* v_00_u03b1_98_, lean_object* v_catName_99_){
_start:
{
lean_object* v___x_100_; 
v___x_100_ = l___private_Lean_Parser_Extension_0__Lean_Parser_throwParserCategoryAlreadyDefined___redArg(v_catName_99_);
return v___x_100_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Parser_Extension_0__Lean_Parser_addParserCategoryCore_spec__1_spec__2_spec__4_spec__5___redArg(lean_object* v_x_101_, lean_object* v_x_102_, lean_object* v_x_103_, lean_object* v_x_104_){
_start:
{
lean_object* v_ks_105_; lean_object* v_vs_106_; lean_object* v___x_108_; uint8_t v_isShared_109_; uint8_t v_isSharedCheck_130_; 
v_ks_105_ = lean_ctor_get(v_x_101_, 0);
v_vs_106_ = lean_ctor_get(v_x_101_, 1);
v_isSharedCheck_130_ = !lean_is_exclusive(v_x_101_);
if (v_isSharedCheck_130_ == 0)
{
v___x_108_ = v_x_101_;
v_isShared_109_ = v_isSharedCheck_130_;
goto v_resetjp_107_;
}
else
{
lean_inc(v_vs_106_);
lean_inc(v_ks_105_);
lean_dec(v_x_101_);
v___x_108_ = lean_box(0);
v_isShared_109_ = v_isSharedCheck_130_;
goto v_resetjp_107_;
}
v_resetjp_107_:
{
lean_object* v___x_110_; uint8_t v___x_111_; 
v___x_110_ = lean_array_get_size(v_ks_105_);
v___x_111_ = lean_nat_dec_lt(v_x_102_, v___x_110_);
if (v___x_111_ == 0)
{
lean_object* v___x_112_; lean_object* v___x_113_; lean_object* v___x_115_; 
lean_dec(v_x_102_);
v___x_112_ = lean_array_push(v_ks_105_, v_x_103_);
v___x_113_ = lean_array_push(v_vs_106_, v_x_104_);
if (v_isShared_109_ == 0)
{
lean_ctor_set(v___x_108_, 1, v___x_113_);
lean_ctor_set(v___x_108_, 0, v___x_112_);
v___x_115_ = v___x_108_;
goto v_reusejp_114_;
}
else
{
lean_object* v_reuseFailAlloc_116_; 
v_reuseFailAlloc_116_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_116_, 0, v___x_112_);
lean_ctor_set(v_reuseFailAlloc_116_, 1, v___x_113_);
v___x_115_ = v_reuseFailAlloc_116_;
goto v_reusejp_114_;
}
v_reusejp_114_:
{
return v___x_115_;
}
}
else
{
lean_object* v_k_x27_117_; uint8_t v___x_118_; 
v_k_x27_117_ = lean_array_fget_borrowed(v_ks_105_, v_x_102_);
v___x_118_ = lean_name_eq(v_x_103_, v_k_x27_117_);
if (v___x_118_ == 0)
{
lean_object* v___x_120_; 
if (v_isShared_109_ == 0)
{
v___x_120_ = v___x_108_;
goto v_reusejp_119_;
}
else
{
lean_object* v_reuseFailAlloc_124_; 
v_reuseFailAlloc_124_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_124_, 0, v_ks_105_);
lean_ctor_set(v_reuseFailAlloc_124_, 1, v_vs_106_);
v___x_120_ = v_reuseFailAlloc_124_;
goto v_reusejp_119_;
}
v_reusejp_119_:
{
lean_object* v___x_121_; lean_object* v___x_122_; 
v___x_121_ = lean_unsigned_to_nat(1u);
v___x_122_ = lean_nat_add(v_x_102_, v___x_121_);
lean_dec(v_x_102_);
v_x_101_ = v___x_120_;
v_x_102_ = v___x_122_;
goto _start;
}
}
else
{
lean_object* v___x_125_; lean_object* v___x_126_; lean_object* v___x_128_; 
v___x_125_ = lean_array_fset(v_ks_105_, v_x_102_, v_x_103_);
v___x_126_ = lean_array_fset(v_vs_106_, v_x_102_, v_x_104_);
lean_dec(v_x_102_);
if (v_isShared_109_ == 0)
{
lean_ctor_set(v___x_108_, 1, v___x_126_);
lean_ctor_set(v___x_108_, 0, v___x_125_);
v___x_128_ = v___x_108_;
goto v_reusejp_127_;
}
else
{
lean_object* v_reuseFailAlloc_129_; 
v_reuseFailAlloc_129_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_129_, 0, v___x_125_);
lean_ctor_set(v_reuseFailAlloc_129_, 1, v___x_126_);
v___x_128_ = v_reuseFailAlloc_129_;
goto v_reusejp_127_;
}
v_reusejp_127_:
{
return v___x_128_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Parser_Extension_0__Lean_Parser_addParserCategoryCore_spec__1_spec__2_spec__4___redArg(lean_object* v_n_131_, lean_object* v_k_132_, lean_object* v_v_133_){
_start:
{
lean_object* v___x_134_; lean_object* v___x_135_; 
v___x_134_ = lean_unsigned_to_nat(0u);
v___x_135_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Parser_Extension_0__Lean_Parser_addParserCategoryCore_spec__1_spec__2_spec__4_spec__5___redArg(v_n_131_, v___x_134_, v_k_132_, v_v_133_);
return v___x_135_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Parser_Extension_0__Lean_Parser_addParserCategoryCore_spec__1_spec__2___redArg___closed__0(void){
_start:
{
lean_object* v___x_136_; lean_object* v___x_137_; 
v___x_136_ = lean_box(0);
v___x_137_ = l_unsafeCast___redArg(v___x_136_);
return v___x_137_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Parser_Extension_0__Lean_Parser_addParserCategoryCore_spec__1_spec__2___redArg___closed__1(void){
_start:
{
lean_object* v___x_138_; 
v___x_138_ = l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
return v___x_138_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Parser_Extension_0__Lean_Parser_addParserCategoryCore_spec__1_spec__2___redArg(lean_object* v_x_139_, size_t v_x_140_, size_t v_x_141_, lean_object* v_x_142_, lean_object* v_x_143_){
_start:
{
if (lean_obj_tag(v_x_139_) == 0)
{
lean_object* v_es_144_; size_t v___x_145_; size_t v___x_146_; lean_object* v_j_147_; lean_object* v___x_148_; uint8_t v___x_149_; 
v_es_144_ = lean_ctor_get(v_x_139_, 0);
v___x_145_ = ((size_t)31ULL);
v___x_146_ = lean_usize_land(v_x_140_, v___x_145_);
v_j_147_ = lean_usize_to_nat(v___x_146_);
v___x_148_ = lean_array_get_size(v_es_144_);
v___x_149_ = lean_nat_dec_lt(v_j_147_, v___x_148_);
if (v___x_149_ == 0)
{
lean_dec(v_j_147_);
lean_dec(v_x_143_);
lean_dec(v_x_142_);
return v_x_139_;
}
else
{
lean_object* v___x_151_; uint8_t v_isShared_152_; uint8_t v_isSharedCheck_188_; 
lean_inc_ref(v_es_144_);
v_isSharedCheck_188_ = !lean_is_exclusive(v_x_139_);
if (v_isSharedCheck_188_ == 0)
{
lean_object* v_unused_189_; 
v_unused_189_ = lean_ctor_get(v_x_139_, 0);
lean_dec(v_unused_189_);
v___x_151_ = v_x_139_;
v_isShared_152_ = v_isSharedCheck_188_;
goto v_resetjp_150_;
}
else
{
lean_dec(v_x_139_);
v___x_151_ = lean_box(0);
v_isShared_152_ = v_isSharedCheck_188_;
goto v_resetjp_150_;
}
v_resetjp_150_:
{
lean_object* v_v_153_; lean_object* v___x_154_; lean_object* v_xs_x27_155_; lean_object* v___y_157_; 
v_v_153_ = lean_array_fget(v_es_144_, v_j_147_);
v___x_154_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Parser_Extension_0__Lean_Parser_addParserCategoryCore_spec__1_spec__2___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Parser_Extension_0__Lean_Parser_addParserCategoryCore_spec__1_spec__2___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Parser_Extension_0__Lean_Parser_addParserCategoryCore_spec__1_spec__2___redArg___closed__0);
v_xs_x27_155_ = lean_array_fset(v_es_144_, v_j_147_, v___x_154_);
switch(lean_obj_tag(v_v_153_))
{
case 0:
{
lean_object* v_key_162_; lean_object* v_val_163_; lean_object* v___x_165_; uint8_t v_isShared_166_; uint8_t v_isSharedCheck_173_; 
v_key_162_ = lean_ctor_get(v_v_153_, 0);
v_val_163_ = lean_ctor_get(v_v_153_, 1);
v_isSharedCheck_173_ = !lean_is_exclusive(v_v_153_);
if (v_isSharedCheck_173_ == 0)
{
v___x_165_ = v_v_153_;
v_isShared_166_ = v_isSharedCheck_173_;
goto v_resetjp_164_;
}
else
{
lean_inc(v_val_163_);
lean_inc(v_key_162_);
lean_dec(v_v_153_);
v___x_165_ = lean_box(0);
v_isShared_166_ = v_isSharedCheck_173_;
goto v_resetjp_164_;
}
v_resetjp_164_:
{
uint8_t v___x_167_; 
v___x_167_ = lean_name_eq(v_x_142_, v_key_162_);
if (v___x_167_ == 0)
{
lean_object* v___x_168_; lean_object* v___x_169_; 
lean_del_object(v___x_165_);
v___x_168_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_162_, v_val_163_, v_x_142_, v_x_143_);
v___x_169_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_169_, 0, v___x_168_);
v___y_157_ = v___x_169_;
goto v___jp_156_;
}
else
{
lean_object* v___x_171_; 
lean_dec(v_val_163_);
lean_dec(v_key_162_);
if (v_isShared_166_ == 0)
{
lean_ctor_set(v___x_165_, 1, v_x_143_);
lean_ctor_set(v___x_165_, 0, v_x_142_);
v___x_171_ = v___x_165_;
goto v_reusejp_170_;
}
else
{
lean_object* v_reuseFailAlloc_172_; 
v_reuseFailAlloc_172_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_172_, 0, v_x_142_);
lean_ctor_set(v_reuseFailAlloc_172_, 1, v_x_143_);
v___x_171_ = v_reuseFailAlloc_172_;
goto v_reusejp_170_;
}
v_reusejp_170_:
{
v___y_157_ = v___x_171_;
goto v___jp_156_;
}
}
}
}
case 1:
{
lean_object* v_node_174_; lean_object* v___x_176_; uint8_t v_isShared_177_; uint8_t v_isSharedCheck_186_; 
v_node_174_ = lean_ctor_get(v_v_153_, 0);
v_isSharedCheck_186_ = !lean_is_exclusive(v_v_153_);
if (v_isSharedCheck_186_ == 0)
{
v___x_176_ = v_v_153_;
v_isShared_177_ = v_isSharedCheck_186_;
goto v_resetjp_175_;
}
else
{
lean_inc(v_node_174_);
lean_dec(v_v_153_);
v___x_176_ = lean_box(0);
v_isShared_177_ = v_isSharedCheck_186_;
goto v_resetjp_175_;
}
v_resetjp_175_:
{
size_t v___x_178_; size_t v___x_179_; size_t v___x_180_; size_t v___x_181_; lean_object* v___x_182_; lean_object* v___x_184_; 
v___x_178_ = ((size_t)5ULL);
v___x_179_ = lean_usize_shift_right(v_x_140_, v___x_178_);
v___x_180_ = ((size_t)1ULL);
v___x_181_ = lean_usize_add(v_x_141_, v___x_180_);
v___x_182_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Parser_Extension_0__Lean_Parser_addParserCategoryCore_spec__1_spec__2___redArg(v_node_174_, v___x_179_, v___x_181_, v_x_142_, v_x_143_);
if (v_isShared_177_ == 0)
{
lean_ctor_set(v___x_176_, 0, v___x_182_);
v___x_184_ = v___x_176_;
goto v_reusejp_183_;
}
else
{
lean_object* v_reuseFailAlloc_185_; 
v_reuseFailAlloc_185_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_185_, 0, v___x_182_);
v___x_184_ = v_reuseFailAlloc_185_;
goto v_reusejp_183_;
}
v_reusejp_183_:
{
v___y_157_ = v___x_184_;
goto v___jp_156_;
}
}
}
default: 
{
lean_object* v___x_187_; 
v___x_187_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_187_, 0, v_x_142_);
lean_ctor_set(v___x_187_, 1, v_x_143_);
v___y_157_ = v___x_187_;
goto v___jp_156_;
}
}
v___jp_156_:
{
lean_object* v___x_158_; lean_object* v___x_160_; 
v___x_158_ = lean_array_fset(v_xs_x27_155_, v_j_147_, v___y_157_);
lean_dec(v_j_147_);
if (v_isShared_152_ == 0)
{
lean_ctor_set(v___x_151_, 0, v___x_158_);
v___x_160_ = v___x_151_;
goto v_reusejp_159_;
}
else
{
lean_object* v_reuseFailAlloc_161_; 
v_reuseFailAlloc_161_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_161_, 0, v___x_158_);
v___x_160_ = v_reuseFailAlloc_161_;
goto v_reusejp_159_;
}
v_reusejp_159_:
{
return v___x_160_;
}
}
}
}
}
else
{
lean_object* v_ks_190_; lean_object* v_vs_191_; lean_object* v___x_193_; uint8_t v_isShared_194_; uint8_t v_isSharedCheck_209_; 
v_ks_190_ = lean_ctor_get(v_x_139_, 0);
v_vs_191_ = lean_ctor_get(v_x_139_, 1);
v_isSharedCheck_209_ = !lean_is_exclusive(v_x_139_);
if (v_isSharedCheck_209_ == 0)
{
v___x_193_ = v_x_139_;
v_isShared_194_ = v_isSharedCheck_209_;
goto v_resetjp_192_;
}
else
{
lean_inc(v_vs_191_);
lean_inc(v_ks_190_);
lean_dec(v_x_139_);
v___x_193_ = lean_box(0);
v_isShared_194_ = v_isSharedCheck_209_;
goto v_resetjp_192_;
}
v_resetjp_192_:
{
lean_object* v___x_196_; 
if (v_isShared_194_ == 0)
{
v___x_196_ = v___x_193_;
goto v_reusejp_195_;
}
else
{
lean_object* v_reuseFailAlloc_208_; 
v_reuseFailAlloc_208_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_208_, 0, v_ks_190_);
lean_ctor_set(v_reuseFailAlloc_208_, 1, v_vs_191_);
v___x_196_ = v_reuseFailAlloc_208_;
goto v_reusejp_195_;
}
v_reusejp_195_:
{
lean_object* v_newNode_197_; size_t v___x_198_; uint8_t v___x_199_; 
v_newNode_197_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Parser_Extension_0__Lean_Parser_addParserCategoryCore_spec__1_spec__2_spec__4___redArg(v___x_196_, v_x_142_, v_x_143_);
v___x_198_ = ((size_t)7ULL);
v___x_199_ = lean_usize_dec_le(v___x_198_, v_x_141_);
if (v___x_199_ == 0)
{
lean_object* v___x_200_; lean_object* v___x_201_; uint8_t v___x_202_; 
v___x_200_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_197_);
v___x_201_ = lean_unsigned_to_nat(4u);
v___x_202_ = lean_nat_dec_lt(v___x_200_, v___x_201_);
lean_dec(v___x_200_);
if (v___x_202_ == 0)
{
lean_object* v_ks_203_; lean_object* v_vs_204_; lean_object* v___x_205_; lean_object* v___x_206_; lean_object* v___x_207_; 
v_ks_203_ = lean_ctor_get(v_newNode_197_, 0);
lean_inc_ref(v_ks_203_);
v_vs_204_ = lean_ctor_get(v_newNode_197_, 1);
lean_inc_ref(v_vs_204_);
lean_dec_ref(v_newNode_197_);
v___x_205_ = lean_unsigned_to_nat(0u);
v___x_206_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Parser_Extension_0__Lean_Parser_addParserCategoryCore_spec__1_spec__2___redArg___closed__1, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Parser_Extension_0__Lean_Parser_addParserCategoryCore_spec__1_spec__2___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Parser_Extension_0__Lean_Parser_addParserCategoryCore_spec__1_spec__2___redArg___closed__1);
v___x_207_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Parser_Extension_0__Lean_Parser_addParserCategoryCore_spec__1_spec__2_spec__5___redArg(v_x_141_, v_ks_203_, v_vs_204_, v___x_205_, v___x_206_);
lean_dec_ref(v_vs_204_);
lean_dec_ref(v_ks_203_);
return v___x_207_;
}
else
{
return v_newNode_197_;
}
}
else
{
return v_newNode_197_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Parser_Extension_0__Lean_Parser_addParserCategoryCore_spec__1_spec__2_spec__5___redArg(size_t v_depth_210_, lean_object* v_keys_211_, lean_object* v_vals_212_, lean_object* v_i_213_, lean_object* v_entries_214_){
_start:
{
lean_object* v___x_215_; uint8_t v___x_216_; 
v___x_215_ = lean_array_get_size(v_keys_211_);
v___x_216_ = lean_nat_dec_lt(v_i_213_, v___x_215_);
if (v___x_216_ == 0)
{
lean_dec(v_i_213_);
return v_entries_214_;
}
else
{
lean_object* v_k_217_; lean_object* v_v_218_; uint64_t v___y_220_; lean_object* v___x_231_; 
v_k_217_ = lean_array_fget_borrowed(v_keys_211_, v_i_213_);
v_v_218_ = lean_array_fget_borrowed(v_vals_212_, v_i_213_);
v___x_231_ = l_unsafeCast___redArg(v_k_217_);
if (lean_obj_tag(v___x_231_) == 0)
{
uint64_t v___x_232_; 
v___x_232_ = 1723ULL;
v___y_220_ = v___x_232_;
goto v___jp_219_;
}
else
{
uint64_t v_hash_233_; 
v_hash_233_ = lean_ctor_get_uint64(v___x_231_, sizeof(void*)*2);
lean_dec(v___x_231_);
v___y_220_ = v_hash_233_;
goto v___jp_219_;
}
v___jp_219_:
{
size_t v_h_221_; size_t v___x_222_; lean_object* v___x_223_; size_t v___x_224_; size_t v___x_225_; size_t v___x_226_; size_t v_h_227_; lean_object* v___x_228_; lean_object* v___x_229_; 
v_h_221_ = lean_uint64_to_usize(v___y_220_);
v___x_222_ = ((size_t)5ULL);
v___x_223_ = lean_unsigned_to_nat(1u);
v___x_224_ = ((size_t)1ULL);
v___x_225_ = lean_usize_sub(v_depth_210_, v___x_224_);
v___x_226_ = lean_usize_mul(v___x_222_, v___x_225_);
v_h_227_ = lean_usize_shift_right(v_h_221_, v___x_226_);
v___x_228_ = lean_nat_add(v_i_213_, v___x_223_);
lean_dec(v_i_213_);
lean_inc(v_v_218_);
lean_inc(v_k_217_);
v___x_229_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Parser_Extension_0__Lean_Parser_addParserCategoryCore_spec__1_spec__2___redArg(v_entries_214_, v_h_227_, v_depth_210_, v_k_217_, v_v_218_);
v_i_213_ = v___x_228_;
v_entries_214_ = v___x_229_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Parser_Extension_0__Lean_Parser_addParserCategoryCore_spec__1_spec__2_spec__5___redArg___boxed(lean_object* v_depth_234_, lean_object* v_keys_235_, lean_object* v_vals_236_, lean_object* v_i_237_, lean_object* v_entries_238_){
_start:
{
size_t v_depth_boxed_239_; lean_object* v_res_240_; 
v_depth_boxed_239_ = lean_unbox_usize(v_depth_234_);
lean_dec(v_depth_234_);
v_res_240_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Parser_Extension_0__Lean_Parser_addParserCategoryCore_spec__1_spec__2_spec__5___redArg(v_depth_boxed_239_, v_keys_235_, v_vals_236_, v_i_237_, v_entries_238_);
lean_dec_ref(v_vals_236_);
lean_dec_ref(v_keys_235_);
return v_res_240_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Parser_Extension_0__Lean_Parser_addParserCategoryCore_spec__1_spec__2___redArg___boxed(lean_object* v_x_241_, lean_object* v_x_242_, lean_object* v_x_243_, lean_object* v_x_244_, lean_object* v_x_245_){
_start:
{
size_t v_x_538__boxed_246_; size_t v_x_539__boxed_247_; lean_object* v_res_248_; 
v_x_538__boxed_246_ = lean_unbox_usize(v_x_242_);
lean_dec(v_x_242_);
v_x_539__boxed_247_ = lean_unbox_usize(v_x_243_);
lean_dec(v_x_243_);
v_res_248_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Parser_Extension_0__Lean_Parser_addParserCategoryCore_spec__1_spec__2___redArg(v_x_241_, v_x_538__boxed_246_, v_x_539__boxed_247_, v_x_244_, v_x_245_);
return v_res_248_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Parser_Extension_0__Lean_Parser_addParserCategoryCore_spec__1___redArg(lean_object* v_x_249_, lean_object* v_x_250_, lean_object* v_x_251_){
_start:
{
uint64_t v___y_253_; lean_object* v___x_257_; 
v___x_257_ = l_unsafeCast___redArg(v_x_250_);
if (lean_obj_tag(v___x_257_) == 0)
{
uint64_t v___x_258_; 
v___x_258_ = 1723ULL;
v___y_253_ = v___x_258_;
goto v___jp_252_;
}
else
{
uint64_t v_hash_259_; 
v_hash_259_ = lean_ctor_get_uint64(v___x_257_, sizeof(void*)*2);
lean_dec(v___x_257_);
v___y_253_ = v_hash_259_;
goto v___jp_252_;
}
v___jp_252_:
{
size_t v___x_254_; size_t v___x_255_; lean_object* v___x_256_; 
v___x_254_ = lean_uint64_to_usize(v___y_253_);
v___x_255_ = ((size_t)1ULL);
v___x_256_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Parser_Extension_0__Lean_Parser_addParserCategoryCore_spec__1_spec__2___redArg(v_x_249_, v___x_254_, v___x_255_, v_x_250_, v_x_251_);
return v___x_256_;
}
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Parser_Extension_0__Lean_Parser_addParserCategoryCore_spec__0_spec__0_spec__1___redArg(lean_object* v_keys_260_, lean_object* v_i_261_, lean_object* v_k_262_){
_start:
{
lean_object* v___x_263_; uint8_t v___x_264_; 
v___x_263_ = lean_array_get_size(v_keys_260_);
v___x_264_ = lean_nat_dec_lt(v_i_261_, v___x_263_);
if (v___x_264_ == 0)
{
lean_dec(v_i_261_);
return v___x_264_;
}
else
{
lean_object* v_k_x27_265_; uint8_t v___x_266_; 
v_k_x27_265_ = lean_array_fget_borrowed(v_keys_260_, v_i_261_);
v___x_266_ = lean_name_eq(v_k_262_, v_k_x27_265_);
if (v___x_266_ == 0)
{
lean_object* v___x_267_; lean_object* v___x_268_; 
v___x_267_ = lean_unsigned_to_nat(1u);
v___x_268_ = lean_nat_add(v_i_261_, v___x_267_);
lean_dec(v_i_261_);
v_i_261_ = v___x_268_;
goto _start;
}
else
{
lean_dec(v_i_261_);
return v___x_264_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Parser_Extension_0__Lean_Parser_addParserCategoryCore_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_keys_270_, lean_object* v_i_271_, lean_object* v_k_272_){
_start:
{
uint8_t v_res_273_; lean_object* v_r_274_; 
v_res_273_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Parser_Extension_0__Lean_Parser_addParserCategoryCore_spec__0_spec__0_spec__1___redArg(v_keys_270_, v_i_271_, v_k_272_);
lean_dec(v_k_272_);
lean_dec_ref(v_keys_270_);
v_r_274_ = lean_box(v_res_273_);
return v_r_274_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Parser_Extension_0__Lean_Parser_addParserCategoryCore_spec__0_spec__0___redArg(lean_object* v_x_275_, size_t v_x_276_, lean_object* v_x_277_){
_start:
{
if (lean_obj_tag(v_x_275_) == 0)
{
lean_object* v_es_278_; lean_object* v___x_279_; size_t v___x_280_; size_t v___x_281_; lean_object* v_j_282_; lean_object* v___x_283_; 
v_es_278_ = lean_ctor_get(v_x_275_, 0);
v___x_279_ = lean_box(2);
v___x_280_ = ((size_t)31ULL);
v___x_281_ = lean_usize_land(v_x_276_, v___x_280_);
v_j_282_ = lean_usize_to_nat(v___x_281_);
v___x_283_ = lean_array_get_borrowed(v___x_279_, v_es_278_, v_j_282_);
lean_dec(v_j_282_);
switch(lean_obj_tag(v___x_283_))
{
case 0:
{
lean_object* v_key_284_; uint8_t v___x_285_; 
v_key_284_ = lean_ctor_get(v___x_283_, 0);
v___x_285_ = lean_name_eq(v_x_277_, v_key_284_);
return v___x_285_;
}
case 1:
{
lean_object* v_node_286_; size_t v___x_287_; size_t v___x_288_; 
v_node_286_ = lean_ctor_get(v___x_283_, 0);
v___x_287_ = ((size_t)5ULL);
v___x_288_ = lean_usize_shift_right(v_x_276_, v___x_287_);
v_x_275_ = v_node_286_;
v_x_276_ = v___x_288_;
goto _start;
}
default: 
{
uint8_t v___x_290_; 
v___x_290_ = 0;
return v___x_290_;
}
}
}
else
{
lean_object* v_ks_291_; lean_object* v___x_292_; uint8_t v___x_293_; 
v_ks_291_ = lean_ctor_get(v_x_275_, 0);
v___x_292_ = lean_unsigned_to_nat(0u);
v___x_293_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Parser_Extension_0__Lean_Parser_addParserCategoryCore_spec__0_spec__0_spec__1___redArg(v_ks_291_, v___x_292_, v_x_277_);
return v___x_293_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Parser_Extension_0__Lean_Parser_addParserCategoryCore_spec__0_spec__0___redArg___boxed(lean_object* v_x_294_, lean_object* v_x_295_, lean_object* v_x_296_){
_start:
{
size_t v_x_727__boxed_297_; uint8_t v_res_298_; lean_object* v_r_299_; 
v_x_727__boxed_297_ = lean_unbox_usize(v_x_295_);
lean_dec(v_x_295_);
v_res_298_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Parser_Extension_0__Lean_Parser_addParserCategoryCore_spec__0_spec__0___redArg(v_x_294_, v_x_727__boxed_297_, v_x_296_);
lean_dec(v_x_296_);
lean_dec_ref(v_x_294_);
v_r_299_ = lean_box(v_res_298_);
return v_r_299_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_Parser_Extension_0__Lean_Parser_addParserCategoryCore_spec__0___redArg(lean_object* v_x_300_, lean_object* v_x_301_){
_start:
{
uint64_t v___y_303_; lean_object* v___x_306_; 
v___x_306_ = l_unsafeCast___redArg(v_x_301_);
if (lean_obj_tag(v___x_306_) == 0)
{
uint64_t v___x_307_; 
v___x_307_ = 1723ULL;
v___y_303_ = v___x_307_;
goto v___jp_302_;
}
else
{
uint64_t v_hash_308_; 
v_hash_308_ = lean_ctor_get_uint64(v___x_306_, sizeof(void*)*2);
lean_dec(v___x_306_);
v___y_303_ = v_hash_308_;
goto v___jp_302_;
}
v___jp_302_:
{
size_t v___x_304_; uint8_t v___x_305_; 
v___x_304_ = lean_uint64_to_usize(v___y_303_);
v___x_305_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Parser_Extension_0__Lean_Parser_addParserCategoryCore_spec__0_spec__0___redArg(v_x_300_, v___x_304_, v_x_301_);
return v___x_305_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_Parser_Extension_0__Lean_Parser_addParserCategoryCore_spec__0___redArg___boxed(lean_object* v_x_309_, lean_object* v_x_310_){
_start:
{
uint8_t v_res_311_; lean_object* v_r_312_; 
v_res_311_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_Parser_Extension_0__Lean_Parser_addParserCategoryCore_spec__0___redArg(v_x_309_, v_x_310_);
lean_dec(v_x_310_);
lean_dec_ref(v_x_309_);
v_r_312_ = lean_box(v_res_311_);
return v_r_312_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_addParserCategoryCore(lean_object* v_categories_313_, lean_object* v_catName_314_, lean_object* v_initial_315_){
_start:
{
uint8_t v___x_316_; 
v___x_316_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_Parser_Extension_0__Lean_Parser_addParserCategoryCore_spec__0___redArg(v_categories_313_, v_catName_314_);
if (v___x_316_ == 0)
{
lean_object* v___x_317_; lean_object* v___x_318_; 
v___x_317_ = l_Lean_PersistentHashMap_insert___at___00__private_Lean_Parser_Extension_0__Lean_Parser_addParserCategoryCore_spec__1___redArg(v_categories_313_, v_catName_314_, v_initial_315_);
v___x_318_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_318_, 0, v___x_317_);
return v___x_318_;
}
else
{
lean_object* v___x_319_; 
lean_dec_ref(v_initial_315_);
lean_dec_ref(v_categories_313_);
v___x_319_ = l___private_Lean_Parser_Extension_0__Lean_Parser_throwParserCategoryAlreadyDefined___redArg(v_catName_314_);
return v___x_319_;
}
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_Parser_Extension_0__Lean_Parser_addParserCategoryCore_spec__0(lean_object* v_00_u03b2_320_, lean_object* v_x_321_, lean_object* v_x_322_){
_start:
{
uint8_t v___x_323_; 
v___x_323_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_Parser_Extension_0__Lean_Parser_addParserCategoryCore_spec__0___redArg(v_x_321_, v_x_322_);
return v___x_323_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_Parser_Extension_0__Lean_Parser_addParserCategoryCore_spec__0___boxed(lean_object* v_00_u03b2_324_, lean_object* v_x_325_, lean_object* v_x_326_){
_start:
{
uint8_t v_res_327_; lean_object* v_r_328_; 
v_res_327_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_Parser_Extension_0__Lean_Parser_addParserCategoryCore_spec__0(v_00_u03b2_324_, v_x_325_, v_x_326_);
lean_dec(v_x_326_);
lean_dec_ref(v_x_325_);
v_r_328_ = lean_box(v_res_327_);
return v_r_328_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Parser_Extension_0__Lean_Parser_addParserCategoryCore_spec__1(lean_object* v_00_u03b2_329_, lean_object* v_x_330_, lean_object* v_x_331_, lean_object* v_x_332_){
_start:
{
lean_object* v___x_333_; 
v___x_333_ = l_Lean_PersistentHashMap_insert___at___00__private_Lean_Parser_Extension_0__Lean_Parser_addParserCategoryCore_spec__1___redArg(v_x_330_, v_x_331_, v_x_332_);
return v___x_333_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Parser_Extension_0__Lean_Parser_addParserCategoryCore_spec__0_spec__0(lean_object* v_00_u03b2_334_, lean_object* v_x_335_, size_t v_x_336_, lean_object* v_x_337_){
_start:
{
uint8_t v___x_338_; 
v___x_338_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Parser_Extension_0__Lean_Parser_addParserCategoryCore_spec__0_spec__0___redArg(v_x_335_, v_x_336_, v_x_337_);
return v___x_338_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Parser_Extension_0__Lean_Parser_addParserCategoryCore_spec__0_spec__0___boxed(lean_object* v_00_u03b2_339_, lean_object* v_x_340_, lean_object* v_x_341_, lean_object* v_x_342_){
_start:
{
size_t v_x_810__boxed_343_; uint8_t v_res_344_; lean_object* v_r_345_; 
v_x_810__boxed_343_ = lean_unbox_usize(v_x_341_);
lean_dec(v_x_341_);
v_res_344_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Parser_Extension_0__Lean_Parser_addParserCategoryCore_spec__0_spec__0(v_00_u03b2_339_, v_x_340_, v_x_810__boxed_343_, v_x_342_);
lean_dec(v_x_342_);
lean_dec_ref(v_x_340_);
v_r_345_ = lean_box(v_res_344_);
return v_r_345_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Parser_Extension_0__Lean_Parser_addParserCategoryCore_spec__1_spec__2(lean_object* v_00_u03b2_346_, lean_object* v_x_347_, size_t v_x_348_, size_t v_x_349_, lean_object* v_x_350_, lean_object* v_x_351_){
_start:
{
lean_object* v___x_352_; 
v___x_352_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Parser_Extension_0__Lean_Parser_addParserCategoryCore_spec__1_spec__2___redArg(v_x_347_, v_x_348_, v_x_349_, v_x_350_, v_x_351_);
return v___x_352_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Parser_Extension_0__Lean_Parser_addParserCategoryCore_spec__1_spec__2___boxed(lean_object* v_00_u03b2_353_, lean_object* v_x_354_, lean_object* v_x_355_, lean_object* v_x_356_, lean_object* v_x_357_, lean_object* v_x_358_){
_start:
{
size_t v_x_821__boxed_359_; size_t v_x_822__boxed_360_; lean_object* v_res_361_; 
v_x_821__boxed_359_ = lean_unbox_usize(v_x_355_);
lean_dec(v_x_355_);
v_x_822__boxed_360_ = lean_unbox_usize(v_x_356_);
lean_dec(v_x_356_);
v_res_361_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Parser_Extension_0__Lean_Parser_addParserCategoryCore_spec__1_spec__2(v_00_u03b2_353_, v_x_354_, v_x_821__boxed_359_, v_x_822__boxed_360_, v_x_357_, v_x_358_);
return v_res_361_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Parser_Extension_0__Lean_Parser_addParserCategoryCore_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_362_, lean_object* v_keys_363_, lean_object* v_vals_364_, lean_object* v_heq_365_, lean_object* v_i_366_, lean_object* v_k_367_){
_start:
{
uint8_t v___x_368_; 
v___x_368_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Parser_Extension_0__Lean_Parser_addParserCategoryCore_spec__0_spec__0_spec__1___redArg(v_keys_363_, v_i_366_, v_k_367_);
return v___x_368_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Parser_Extension_0__Lean_Parser_addParserCategoryCore_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b2_369_, lean_object* v_keys_370_, lean_object* v_vals_371_, lean_object* v_heq_372_, lean_object* v_i_373_, lean_object* v_k_374_){
_start:
{
uint8_t v_res_375_; lean_object* v_r_376_; 
v_res_375_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Parser_Extension_0__Lean_Parser_addParserCategoryCore_spec__0_spec__0_spec__1(v_00_u03b2_369_, v_keys_370_, v_vals_371_, v_heq_372_, v_i_373_, v_k_374_);
lean_dec(v_k_374_);
lean_dec_ref(v_vals_371_);
lean_dec_ref(v_keys_370_);
v_r_376_ = lean_box(v_res_375_);
return v_r_376_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Parser_Extension_0__Lean_Parser_addParserCategoryCore_spec__1_spec__2_spec__4(lean_object* v_00_u03b2_377_, lean_object* v_n_378_, lean_object* v_k_379_, lean_object* v_v_380_){
_start:
{
lean_object* v___x_381_; 
v___x_381_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Parser_Extension_0__Lean_Parser_addParserCategoryCore_spec__1_spec__2_spec__4___redArg(v_n_378_, v_k_379_, v_v_380_);
return v___x_381_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Parser_Extension_0__Lean_Parser_addParserCategoryCore_spec__1_spec__2_spec__5(lean_object* v_00_u03b2_382_, size_t v_depth_383_, lean_object* v_keys_384_, lean_object* v_vals_385_, lean_object* v_heq_386_, lean_object* v_i_387_, lean_object* v_entries_388_){
_start:
{
lean_object* v___x_389_; 
v___x_389_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Parser_Extension_0__Lean_Parser_addParserCategoryCore_spec__1_spec__2_spec__5___redArg(v_depth_383_, v_keys_384_, v_vals_385_, v_i_387_, v_entries_388_);
return v___x_389_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Parser_Extension_0__Lean_Parser_addParserCategoryCore_spec__1_spec__2_spec__5___boxed(lean_object* v_00_u03b2_390_, lean_object* v_depth_391_, lean_object* v_keys_392_, lean_object* v_vals_393_, lean_object* v_heq_394_, lean_object* v_i_395_, lean_object* v_entries_396_){
_start:
{
size_t v_depth_boxed_397_; lean_object* v_res_398_; 
v_depth_boxed_397_ = lean_unbox_usize(v_depth_391_);
lean_dec(v_depth_391_);
v_res_398_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Parser_Extension_0__Lean_Parser_addParserCategoryCore_spec__1_spec__2_spec__5(v_00_u03b2_390_, v_depth_boxed_397_, v_keys_392_, v_vals_393_, v_heq_394_, v_i_395_, v_entries_396_);
lean_dec_ref(v_vals_393_);
lean_dec_ref(v_keys_392_);
return v_res_398_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Parser_Extension_0__Lean_Parser_addParserCategoryCore_spec__1_spec__2_spec__4_spec__5(lean_object* v_00_u03b2_399_, lean_object* v_x_400_, lean_object* v_x_401_, lean_object* v_x_402_, lean_object* v_x_403_){
_start:
{
lean_object* v___x_404_; 
v___x_404_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Parser_Extension_0__Lean_Parser_addParserCategoryCore_spec__1_spec__2_spec__4_spec__5___redArg(v_x_400_, v_x_401_, v_x_402_, v_x_403_);
return v___x_404_;
}
}
LEAN_EXPORT lean_object* l_IO_ofExcept___at___00__private_Lean_Parser_Extension_0__Lean_Parser_addBuiltinParserCategory_spec__0___redArg(lean_object* v_e_405_){
_start:
{
if (lean_obj_tag(v_e_405_) == 0)
{
lean_object* v_a_407_; lean_object* v___x_409_; uint8_t v_isShared_410_; uint8_t v_isSharedCheck_415_; 
v_a_407_ = lean_ctor_get(v_e_405_, 0);
v_isSharedCheck_415_ = !lean_is_exclusive(v_e_405_);
if (v_isSharedCheck_415_ == 0)
{
v___x_409_ = v_e_405_;
v_isShared_410_ = v_isSharedCheck_415_;
goto v_resetjp_408_;
}
else
{
lean_inc(v_a_407_);
lean_dec(v_e_405_);
v___x_409_ = lean_box(0);
v_isShared_410_ = v_isSharedCheck_415_;
goto v_resetjp_408_;
}
v_resetjp_408_:
{
lean_object* v___x_411_; lean_object* v___x_413_; 
v___x_411_ = lean_mk_io_user_error(v_a_407_);
if (v_isShared_410_ == 0)
{
lean_ctor_set_tag(v___x_409_, 1);
lean_ctor_set(v___x_409_, 0, v___x_411_);
v___x_413_ = v___x_409_;
goto v_reusejp_412_;
}
else
{
lean_object* v_reuseFailAlloc_414_; 
v_reuseFailAlloc_414_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_414_, 0, v___x_411_);
v___x_413_ = v_reuseFailAlloc_414_;
goto v_reusejp_412_;
}
v_reusejp_412_:
{
return v___x_413_;
}
}
}
else
{
lean_object* v_a_416_; lean_object* v___x_418_; uint8_t v_isShared_419_; uint8_t v_isSharedCheck_423_; 
v_a_416_ = lean_ctor_get(v_e_405_, 0);
v_isSharedCheck_423_ = !lean_is_exclusive(v_e_405_);
if (v_isSharedCheck_423_ == 0)
{
v___x_418_ = v_e_405_;
v_isShared_419_ = v_isSharedCheck_423_;
goto v_resetjp_417_;
}
else
{
lean_inc(v_a_416_);
lean_dec(v_e_405_);
v___x_418_ = lean_box(0);
v_isShared_419_ = v_isSharedCheck_423_;
goto v_resetjp_417_;
}
v_resetjp_417_:
{
lean_object* v___x_421_; 
if (v_isShared_419_ == 0)
{
lean_ctor_set_tag(v___x_418_, 0);
v___x_421_ = v___x_418_;
goto v_reusejp_420_;
}
else
{
lean_object* v_reuseFailAlloc_422_; 
v_reuseFailAlloc_422_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_422_, 0, v_a_416_);
v___x_421_ = v_reuseFailAlloc_422_;
goto v_reusejp_420_;
}
v_reusejp_420_:
{
return v___x_421_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_IO_ofExcept___at___00__private_Lean_Parser_Extension_0__Lean_Parser_addBuiltinParserCategory_spec__0___redArg___boxed(lean_object* v_e_424_, lean_object* v_a_425_){
_start:
{
lean_object* v_res_426_; 
v_res_426_ = l_IO_ofExcept___at___00__private_Lean_Parser_Extension_0__Lean_Parser_addBuiltinParserCategory_spec__0___redArg(v_e_424_);
return v_res_426_;
}
}
LEAN_EXPORT lean_object* l_IO_ofExcept___at___00__private_Lean_Parser_Extension_0__Lean_Parser_addBuiltinParserCategory_spec__0(lean_object* v_00_u03b1_427_, lean_object* v_e_428_){
_start:
{
lean_object* v___x_430_; 
v___x_430_ = l_IO_ofExcept___at___00__private_Lean_Parser_Extension_0__Lean_Parser_addBuiltinParserCategory_spec__0___redArg(v_e_428_);
return v___x_430_;
}
}
LEAN_EXPORT lean_object* l_IO_ofExcept___at___00__private_Lean_Parser_Extension_0__Lean_Parser_addBuiltinParserCategory_spec__0___boxed(lean_object* v_00_u03b1_431_, lean_object* v_e_432_, lean_object* v_a_433_){
_start:
{
lean_object* v_res_434_; 
v_res_434_ = l_IO_ofExcept___at___00__private_Lean_Parser_Extension_0__Lean_Parser_addBuiltinParserCategory_spec__0(v_00_u03b1_431_, v_e_432_);
return v_res_434_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_addBuiltinParserCategory(lean_object* v_catName_438_, lean_object* v_declName_439_, uint8_t v_behavior_440_){
_start:
{
lean_object* v___x_442_; lean_object* v___x_443_; lean_object* v___x_444_; lean_object* v___x_445_; lean_object* v___x_446_; lean_object* v___x_447_; lean_object* v___x_448_; 
v___x_442_ = l_Lean_Parser_builtinParserCategoriesRef;
v___x_443_ = lean_st_ref_get(v___x_442_);
v___x_444_ = lean_obj_once(&l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__1_00___x40_Lean_Parser_Extension_848551512____hygCtx___hyg_2_, &l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__1_00___x40_Lean_Parser_Extension_848551512____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__1_00___x40_Lean_Parser_Extension_848551512____hygCtx___hyg_2_);
v___x_445_ = ((lean_object*)(l___private_Lean_Parser_Extension_0__Lean_Parser_addBuiltinParserCategory___closed__0));
v___x_446_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_446_, 0, v_declName_439_);
lean_ctor_set(v___x_446_, 1, v___x_444_);
lean_ctor_set(v___x_446_, 2, v___x_445_);
lean_ctor_set_uint8(v___x_446_, sizeof(void*)*3, v_behavior_440_);
v___x_447_ = l___private_Lean_Parser_Extension_0__Lean_Parser_addParserCategoryCore(v___x_443_, v_catName_438_, v___x_446_);
v___x_448_ = l_IO_ofExcept___at___00__private_Lean_Parser_Extension_0__Lean_Parser_addBuiltinParserCategory_spec__0___redArg(v___x_447_);
if (lean_obj_tag(v___x_448_) == 0)
{
lean_object* v_a_449_; lean_object* v___x_451_; uint8_t v_isShared_452_; uint8_t v_isSharedCheck_458_; 
v_a_449_ = lean_ctor_get(v___x_448_, 0);
v_isSharedCheck_458_ = !lean_is_exclusive(v___x_448_);
if (v_isSharedCheck_458_ == 0)
{
v___x_451_ = v___x_448_;
v_isShared_452_ = v_isSharedCheck_458_;
goto v_resetjp_450_;
}
else
{
lean_inc(v_a_449_);
lean_dec(v___x_448_);
v___x_451_ = lean_box(0);
v_isShared_452_ = v_isSharedCheck_458_;
goto v_resetjp_450_;
}
v_resetjp_450_:
{
lean_object* v___x_453_; lean_object* v___x_454_; lean_object* v___x_456_; 
v___x_453_ = lean_box(0);
v___x_454_ = lean_st_ref_swap(v___x_442_, v_a_449_);
lean_dec(v___x_454_);
if (v_isShared_452_ == 0)
{
lean_ctor_set(v___x_451_, 0, v___x_453_);
v___x_456_ = v___x_451_;
goto v_reusejp_455_;
}
else
{
lean_object* v_reuseFailAlloc_457_; 
v_reuseFailAlloc_457_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_457_, 0, v___x_453_);
v___x_456_ = v_reuseFailAlloc_457_;
goto v_reusejp_455_;
}
v_reusejp_455_:
{
return v___x_456_;
}
}
}
else
{
lean_object* v_a_459_; lean_object* v___x_461_; uint8_t v_isShared_462_; uint8_t v_isSharedCheck_466_; 
v_a_459_ = lean_ctor_get(v___x_448_, 0);
v_isSharedCheck_466_ = !lean_is_exclusive(v___x_448_);
if (v_isSharedCheck_466_ == 0)
{
v___x_461_ = v___x_448_;
v_isShared_462_ = v_isSharedCheck_466_;
goto v_resetjp_460_;
}
else
{
lean_inc(v_a_459_);
lean_dec(v___x_448_);
v___x_461_ = lean_box(0);
v_isShared_462_ = v_isSharedCheck_466_;
goto v_resetjp_460_;
}
v_resetjp_460_:
{
lean_object* v___x_464_; 
if (v_isShared_462_ == 0)
{
v___x_464_ = v___x_461_;
goto v_reusejp_463_;
}
else
{
lean_object* v_reuseFailAlloc_465_; 
v_reuseFailAlloc_465_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_465_, 0, v_a_459_);
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
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_addBuiltinParserCategory___boxed(lean_object* v_catName_467_, lean_object* v_declName_468_, lean_object* v_behavior_469_, lean_object* v_a_470_){
_start:
{
uint8_t v_behavior_boxed_471_; lean_object* v_res_472_; 
v_behavior_boxed_471_ = lean_unbox(v_behavior_469_);
v_res_472_ = l___private_Lean_Parser_Extension_0__Lean_Parser_addBuiltinParserCategory(v_catName_467_, v_declName_468_, v_behavior_boxed_471_);
return v_res_472_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserExtension_OLeanEntry_ctorIdx(lean_object* v_x_473_){
_start:
{
switch(lean_obj_tag(v_x_473_))
{
case 0:
{
lean_object* v___x_474_; 
v___x_474_ = lean_unsigned_to_nat(0u);
return v___x_474_;
}
case 1:
{
lean_object* v___x_475_; 
v___x_475_ = lean_unsigned_to_nat(1u);
return v___x_475_;
}
case 2:
{
lean_object* v___x_476_; 
v___x_476_ = lean_unsigned_to_nat(2u);
return v___x_476_;
}
default: 
{
lean_object* v___x_477_; 
v___x_477_ = lean_unsigned_to_nat(3u);
return v___x_477_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserExtension_OLeanEntry_ctorIdx___boxed(lean_object* v_x_478_){
_start:
{
lean_object* v_res_479_; 
v_res_479_ = l_Lean_Parser_ParserExtension_OLeanEntry_ctorIdx(v_x_478_);
lean_dec_ref(v_x_478_);
return v_res_479_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserExtension_OLeanEntry_ctorElim___redArg(lean_object* v_t_480_, lean_object* v_k_481_){
_start:
{
switch(lean_obj_tag(v_t_480_))
{
case 0:
{
lean_object* v_val_482_; lean_object* v___x_483_; 
v_val_482_ = lean_ctor_get(v_t_480_, 0);
lean_inc_ref(v_val_482_);
lean_dec_ref_known(v_t_480_, 1);
v___x_483_ = lean_apply_1(v_k_481_, v_val_482_);
return v___x_483_;
}
case 1:
{
lean_object* v_val_484_; lean_object* v___x_485_; 
v_val_484_ = lean_ctor_get(v_t_480_, 0);
lean_inc(v_val_484_);
lean_dec_ref_known(v_t_480_, 1);
v___x_485_ = lean_apply_1(v_k_481_, v_val_484_);
return v___x_485_;
}
case 2:
{
lean_object* v_catName_486_; lean_object* v_declName_487_; uint8_t v_behavior_488_; lean_object* v___x_489_; lean_object* v___x_490_; 
v_catName_486_ = lean_ctor_get(v_t_480_, 0);
lean_inc(v_catName_486_);
v_declName_487_ = lean_ctor_get(v_t_480_, 1);
lean_inc(v_declName_487_);
v_behavior_488_ = lean_ctor_get_uint8(v_t_480_, sizeof(void*)*2);
lean_dec_ref_known(v_t_480_, 2);
v___x_489_ = lean_box(v_behavior_488_);
v___x_490_ = lean_apply_3(v_k_481_, v_catName_486_, v_declName_487_, v___x_489_);
return v___x_490_;
}
default: 
{
lean_object* v_catName_491_; lean_object* v_declName_492_; lean_object* v_prio_493_; lean_object* v___x_494_; 
v_catName_491_ = lean_ctor_get(v_t_480_, 0);
lean_inc(v_catName_491_);
v_declName_492_ = lean_ctor_get(v_t_480_, 1);
lean_inc(v_declName_492_);
v_prio_493_ = lean_ctor_get(v_t_480_, 2);
lean_inc(v_prio_493_);
lean_dec_ref_known(v_t_480_, 3);
v___x_494_ = lean_apply_3(v_k_481_, v_catName_491_, v_declName_492_, v_prio_493_);
return v___x_494_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserExtension_OLeanEntry_ctorElim(lean_object* v_motive_495_, lean_object* v_ctorIdx_496_, lean_object* v_t_497_, lean_object* v_h_498_, lean_object* v_k_499_){
_start:
{
lean_object* v___x_500_; 
v___x_500_ = l_Lean_Parser_ParserExtension_OLeanEntry_ctorElim___redArg(v_t_497_, v_k_499_);
return v___x_500_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserExtension_OLeanEntry_ctorElim___boxed(lean_object* v_motive_501_, lean_object* v_ctorIdx_502_, lean_object* v_t_503_, lean_object* v_h_504_, lean_object* v_k_505_){
_start:
{
lean_object* v_res_506_; 
v_res_506_ = l_Lean_Parser_ParserExtension_OLeanEntry_ctorElim(v_motive_501_, v_ctorIdx_502_, v_t_503_, v_h_504_, v_k_505_);
lean_dec(v_ctorIdx_502_);
return v_res_506_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserExtension_OLeanEntry_token_elim___redArg(lean_object* v_t_507_, lean_object* v_token_508_){
_start:
{
lean_object* v___x_509_; 
v___x_509_ = l_Lean_Parser_ParserExtension_OLeanEntry_ctorElim___redArg(v_t_507_, v_token_508_);
return v___x_509_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserExtension_OLeanEntry_token_elim(lean_object* v_motive_510_, lean_object* v_t_511_, lean_object* v_h_512_, lean_object* v_token_513_){
_start:
{
lean_object* v___x_514_; 
v___x_514_ = l_Lean_Parser_ParserExtension_OLeanEntry_ctorElim___redArg(v_t_511_, v_token_513_);
return v___x_514_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserExtension_OLeanEntry_kind_elim___redArg(lean_object* v_t_515_, lean_object* v_kind_516_){
_start:
{
lean_object* v___x_517_; 
v___x_517_ = l_Lean_Parser_ParserExtension_OLeanEntry_ctorElim___redArg(v_t_515_, v_kind_516_);
return v___x_517_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserExtension_OLeanEntry_kind_elim(lean_object* v_motive_518_, lean_object* v_t_519_, lean_object* v_h_520_, lean_object* v_kind_521_){
_start:
{
lean_object* v___x_522_; 
v___x_522_ = l_Lean_Parser_ParserExtension_OLeanEntry_ctorElim___redArg(v_t_519_, v_kind_521_);
return v___x_522_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserExtension_OLeanEntry_category_elim___redArg(lean_object* v_t_523_, lean_object* v_category_524_){
_start:
{
lean_object* v___x_525_; 
v___x_525_ = l_Lean_Parser_ParserExtension_OLeanEntry_ctorElim___redArg(v_t_523_, v_category_524_);
return v___x_525_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserExtension_OLeanEntry_category_elim(lean_object* v_motive_526_, lean_object* v_t_527_, lean_object* v_h_528_, lean_object* v_category_529_){
_start:
{
lean_object* v___x_530_; 
v___x_530_ = l_Lean_Parser_ParserExtension_OLeanEntry_ctorElim___redArg(v_t_527_, v_category_529_);
return v___x_530_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserExtension_OLeanEntry_parser_elim___redArg(lean_object* v_t_531_, lean_object* v_parser_532_){
_start:
{
lean_object* v___x_533_; 
v___x_533_ = l_Lean_Parser_ParserExtension_OLeanEntry_ctorElim___redArg(v_t_531_, v_parser_532_);
return v___x_533_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserExtension_OLeanEntry_parser_elim(lean_object* v_motive_534_, lean_object* v_t_535_, lean_object* v_h_536_, lean_object* v_parser_537_){
_start:
{
lean_object* v___x_538_; 
v___x_538_ = l_Lean_Parser_ParserExtension_OLeanEntry_ctorElim___redArg(v_t_535_, v_parser_537_);
return v___x_538_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserExtension_Entry_ctorIdx(lean_object* v_x_544_){
_start:
{
switch(lean_obj_tag(v_x_544_))
{
case 0:
{
lean_object* v___x_545_; 
v___x_545_ = lean_unsigned_to_nat(0u);
return v___x_545_;
}
case 1:
{
lean_object* v___x_546_; 
v___x_546_ = lean_unsigned_to_nat(1u);
return v___x_546_;
}
case 2:
{
lean_object* v___x_547_; 
v___x_547_ = lean_unsigned_to_nat(2u);
return v___x_547_;
}
default: 
{
lean_object* v___x_548_; 
v___x_548_ = lean_unsigned_to_nat(3u);
return v___x_548_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserExtension_Entry_ctorIdx___boxed(lean_object* v_x_549_){
_start:
{
lean_object* v_res_550_; 
v_res_550_ = l_Lean_Parser_ParserExtension_Entry_ctorIdx(v_x_549_);
lean_dec_ref(v_x_549_);
return v_res_550_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserExtension_Entry_ctorElim___redArg(lean_object* v_t_551_, lean_object* v_k_552_){
_start:
{
switch(lean_obj_tag(v_t_551_))
{
case 0:
{
lean_object* v_val_553_; lean_object* v___x_554_; 
v_val_553_ = lean_ctor_get(v_t_551_, 0);
lean_inc_ref(v_val_553_);
lean_dec_ref_known(v_t_551_, 1);
v___x_554_ = lean_apply_1(v_k_552_, v_val_553_);
return v___x_554_;
}
case 1:
{
lean_object* v_val_555_; lean_object* v___x_556_; 
v_val_555_ = lean_ctor_get(v_t_551_, 0);
lean_inc(v_val_555_);
lean_dec_ref_known(v_t_551_, 1);
v___x_556_ = lean_apply_1(v_k_552_, v_val_555_);
return v___x_556_;
}
case 2:
{
lean_object* v_catName_557_; lean_object* v_declName_558_; uint8_t v_behavior_559_; lean_object* v___x_560_; lean_object* v___x_561_; 
v_catName_557_ = lean_ctor_get(v_t_551_, 0);
lean_inc(v_catName_557_);
v_declName_558_ = lean_ctor_get(v_t_551_, 1);
lean_inc(v_declName_558_);
v_behavior_559_ = lean_ctor_get_uint8(v_t_551_, sizeof(void*)*2);
lean_dec_ref_known(v_t_551_, 2);
v___x_560_ = lean_box(v_behavior_559_);
v___x_561_ = lean_apply_3(v_k_552_, v_catName_557_, v_declName_558_, v___x_560_);
return v___x_561_;
}
default: 
{
lean_object* v_catName_562_; lean_object* v_declName_563_; uint8_t v_leading_564_; lean_object* v_p_565_; lean_object* v_prio_566_; lean_object* v___x_567_; lean_object* v___x_568_; 
v_catName_562_ = lean_ctor_get(v_t_551_, 0);
lean_inc(v_catName_562_);
v_declName_563_ = lean_ctor_get(v_t_551_, 1);
lean_inc(v_declName_563_);
v_leading_564_ = lean_ctor_get_uint8(v_t_551_, sizeof(void*)*4);
v_p_565_ = lean_ctor_get(v_t_551_, 2);
lean_inc_ref(v_p_565_);
v_prio_566_ = lean_ctor_get(v_t_551_, 3);
lean_inc(v_prio_566_);
lean_dec_ref_known(v_t_551_, 4);
v___x_567_ = lean_box(v_leading_564_);
v___x_568_ = lean_apply_5(v_k_552_, v_catName_562_, v_declName_563_, v___x_567_, v_p_565_, v_prio_566_);
return v___x_568_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserExtension_Entry_ctorElim(lean_object* v_motive_569_, lean_object* v_ctorIdx_570_, lean_object* v_t_571_, lean_object* v_h_572_, lean_object* v_k_573_){
_start:
{
lean_object* v___x_574_; 
v___x_574_ = l_Lean_Parser_ParserExtension_Entry_ctorElim___redArg(v_t_571_, v_k_573_);
return v___x_574_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserExtension_Entry_ctorElim___boxed(lean_object* v_motive_575_, lean_object* v_ctorIdx_576_, lean_object* v_t_577_, lean_object* v_h_578_, lean_object* v_k_579_){
_start:
{
lean_object* v_res_580_; 
v_res_580_ = l_Lean_Parser_ParserExtension_Entry_ctorElim(v_motive_575_, v_ctorIdx_576_, v_t_577_, v_h_578_, v_k_579_);
lean_dec(v_ctorIdx_576_);
return v_res_580_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserExtension_Entry_token_elim___redArg(lean_object* v_t_581_, lean_object* v_token_582_){
_start:
{
lean_object* v___x_583_; 
v___x_583_ = l_Lean_Parser_ParserExtension_Entry_ctorElim___redArg(v_t_581_, v_token_582_);
return v___x_583_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserExtension_Entry_token_elim(lean_object* v_motive_584_, lean_object* v_t_585_, lean_object* v_h_586_, lean_object* v_token_587_){
_start:
{
lean_object* v___x_588_; 
v___x_588_ = l_Lean_Parser_ParserExtension_Entry_ctorElim___redArg(v_t_585_, v_token_587_);
return v___x_588_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserExtension_Entry_kind_elim___redArg(lean_object* v_t_589_, lean_object* v_kind_590_){
_start:
{
lean_object* v___x_591_; 
v___x_591_ = l_Lean_Parser_ParserExtension_Entry_ctorElim___redArg(v_t_589_, v_kind_590_);
return v___x_591_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserExtension_Entry_kind_elim(lean_object* v_motive_592_, lean_object* v_t_593_, lean_object* v_h_594_, lean_object* v_kind_595_){
_start:
{
lean_object* v___x_596_; 
v___x_596_ = l_Lean_Parser_ParserExtension_Entry_ctorElim___redArg(v_t_593_, v_kind_595_);
return v___x_596_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserExtension_Entry_category_elim___redArg(lean_object* v_t_597_, lean_object* v_category_598_){
_start:
{
lean_object* v___x_599_; 
v___x_599_ = l_Lean_Parser_ParserExtension_Entry_ctorElim___redArg(v_t_597_, v_category_598_);
return v___x_599_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserExtension_Entry_category_elim(lean_object* v_motive_600_, lean_object* v_t_601_, lean_object* v_h_602_, lean_object* v_category_603_){
_start:
{
lean_object* v___x_604_; 
v___x_604_ = l_Lean_Parser_ParserExtension_Entry_ctorElim___redArg(v_t_601_, v_category_603_);
return v___x_604_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserExtension_Entry_parser_elim___redArg(lean_object* v_t_605_, lean_object* v_parser_606_){
_start:
{
lean_object* v___x_607_; 
v___x_607_ = l_Lean_Parser_ParserExtension_Entry_ctorElim___redArg(v_t_605_, v_parser_606_);
return v___x_607_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserExtension_Entry_parser_elim(lean_object* v_motive_608_, lean_object* v_t_609_, lean_object* v_h_610_, lean_object* v_parser_611_){
_start:
{
lean_object* v___x_612_; 
v___x_612_ = l_Lean_Parser_ParserExtension_Entry_ctorElim___redArg(v_t_609_, v_parser_611_);
return v___x_612_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserExtension_Entry_toOLeanEntry(lean_object* v_x_617_){
_start:
{
switch(lean_obj_tag(v_x_617_))
{
case 0:
{
lean_object* v_val_618_; lean_object* v___x_620_; uint8_t v_isShared_621_; uint8_t v_isSharedCheck_625_; 
v_val_618_ = lean_ctor_get(v_x_617_, 0);
v_isSharedCheck_625_ = !lean_is_exclusive(v_x_617_);
if (v_isSharedCheck_625_ == 0)
{
v___x_620_ = v_x_617_;
v_isShared_621_ = v_isSharedCheck_625_;
goto v_resetjp_619_;
}
else
{
lean_inc(v_val_618_);
lean_dec(v_x_617_);
v___x_620_ = lean_box(0);
v_isShared_621_ = v_isSharedCheck_625_;
goto v_resetjp_619_;
}
v_resetjp_619_:
{
lean_object* v___x_623_; 
if (v_isShared_621_ == 0)
{
v___x_623_ = v___x_620_;
goto v_reusejp_622_;
}
else
{
lean_object* v_reuseFailAlloc_624_; 
v_reuseFailAlloc_624_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_624_, 0, v_val_618_);
v___x_623_ = v_reuseFailAlloc_624_;
goto v_reusejp_622_;
}
v_reusejp_622_:
{
return v___x_623_;
}
}
}
case 1:
{
lean_object* v_val_626_; lean_object* v___x_628_; uint8_t v_isShared_629_; uint8_t v_isSharedCheck_633_; 
v_val_626_ = lean_ctor_get(v_x_617_, 0);
v_isSharedCheck_633_ = !lean_is_exclusive(v_x_617_);
if (v_isSharedCheck_633_ == 0)
{
v___x_628_ = v_x_617_;
v_isShared_629_ = v_isSharedCheck_633_;
goto v_resetjp_627_;
}
else
{
lean_inc(v_val_626_);
lean_dec(v_x_617_);
v___x_628_ = lean_box(0);
v_isShared_629_ = v_isSharedCheck_633_;
goto v_resetjp_627_;
}
v_resetjp_627_:
{
lean_object* v___x_631_; 
if (v_isShared_629_ == 0)
{
v___x_631_ = v___x_628_;
goto v_reusejp_630_;
}
else
{
lean_object* v_reuseFailAlloc_632_; 
v_reuseFailAlloc_632_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_632_, 0, v_val_626_);
v___x_631_ = v_reuseFailAlloc_632_;
goto v_reusejp_630_;
}
v_reusejp_630_:
{
return v___x_631_;
}
}
}
case 2:
{
lean_object* v_catName_634_; lean_object* v_declName_635_; uint8_t v_behavior_636_; lean_object* v___x_638_; uint8_t v_isShared_639_; uint8_t v_isSharedCheck_643_; 
v_catName_634_ = lean_ctor_get(v_x_617_, 0);
v_declName_635_ = lean_ctor_get(v_x_617_, 1);
v_behavior_636_ = lean_ctor_get_uint8(v_x_617_, sizeof(void*)*2);
v_isSharedCheck_643_ = !lean_is_exclusive(v_x_617_);
if (v_isSharedCheck_643_ == 0)
{
v___x_638_ = v_x_617_;
v_isShared_639_ = v_isSharedCheck_643_;
goto v_resetjp_637_;
}
else
{
lean_inc(v_declName_635_);
lean_inc(v_catName_634_);
lean_dec(v_x_617_);
v___x_638_ = lean_box(0);
v_isShared_639_ = v_isSharedCheck_643_;
goto v_resetjp_637_;
}
v_resetjp_637_:
{
lean_object* v___x_641_; 
if (v_isShared_639_ == 0)
{
v___x_641_ = v___x_638_;
goto v_reusejp_640_;
}
else
{
lean_object* v_reuseFailAlloc_642_; 
v_reuseFailAlloc_642_ = lean_alloc_ctor(2, 2, 1);
lean_ctor_set(v_reuseFailAlloc_642_, 0, v_catName_634_);
lean_ctor_set(v_reuseFailAlloc_642_, 1, v_declName_635_);
lean_ctor_set_uint8(v_reuseFailAlloc_642_, sizeof(void*)*2, v_behavior_636_);
v___x_641_ = v_reuseFailAlloc_642_;
goto v_reusejp_640_;
}
v_reusejp_640_:
{
return v___x_641_;
}
}
}
default: 
{
lean_object* v_catName_644_; lean_object* v_declName_645_; lean_object* v_prio_646_; lean_object* v___x_647_; 
v_catName_644_ = lean_ctor_get(v_x_617_, 0);
lean_inc(v_catName_644_);
v_declName_645_ = lean_ctor_get(v_x_617_, 1);
lean_inc(v_declName_645_);
v_prio_646_ = lean_ctor_get(v_x_617_, 3);
lean_inc(v_prio_646_);
lean_dec_ref_known(v_x_617_, 4);
v___x_647_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v___x_647_, 0, v_catName_644_);
lean_ctor_set(v___x_647_, 1, v_declName_645_);
lean_ctor_set(v___x_647_, 2, v_prio_646_);
return v___x_647_;
}
}
}
}
static lean_object* _init_l_Lean_Parser_ParserExtension_instInhabitedState_default___closed__0(void){
_start:
{
lean_object* v___x_648_; lean_object* v___x_649_; lean_object* v___x_650_; 
v___x_648_ = lean_obj_once(&l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__1_00___x40_Lean_Parser_Extension_848551512____hygCtx___hyg_2_, &l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__1_00___x40_Lean_Parser_Extension_848551512____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__1_00___x40_Lean_Parser_Extension_848551512____hygCtx___hyg_2_);
v___x_649_ = lean_obj_once(&l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__0_00___x40_Lean_Parser_Extension_3332318574____hygCtx___hyg_2_, &l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__0_00___x40_Lean_Parser_Extension_3332318574____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__0_00___x40_Lean_Parser_Extension_3332318574____hygCtx___hyg_2_);
v___x_650_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_650_, 0, v___x_649_);
lean_ctor_set(v___x_650_, 1, v___x_648_);
lean_ctor_set(v___x_650_, 2, v___x_648_);
return v___x_650_;
}
}
static lean_object* _init_l_Lean_Parser_ParserExtension_instInhabitedState_default(void){
_start:
{
lean_object* v___x_651_; 
v___x_651_ = lean_obj_once(&l_Lean_Parser_ParserExtension_instInhabitedState_default___closed__0, &l_Lean_Parser_ParserExtension_instInhabitedState_default___closed__0_once, _init_l_Lean_Parser_ParserExtension_instInhabitedState_default___closed__0);
return v___x_651_;
}
}
static lean_object* _init_l_Lean_Parser_ParserExtension_instInhabitedState(void){
_start:
{
lean_object* v___x_652_; 
v___x_652_ = l_Lean_Parser_ParserExtension_instInhabitedState_default;
return v___x_652_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_ParserExtension_mkInitial(){
_start:
{
lean_object* v___x_654_; lean_object* v___x_655_; lean_object* v___x_656_; lean_object* v___x_657_; lean_object* v___x_658_; lean_object* v___x_659_; lean_object* v___x_660_; lean_object* v___x_661_; 
v___x_654_ = l_Lean_Parser_builtinTokenTable;
v___x_655_ = lean_st_ref_get(v___x_654_);
v___x_656_ = l_Lean_Parser_builtinSyntaxNodeKindSetRef;
v___x_657_ = lean_st_ref_get(v___x_656_);
v___x_658_ = l_Lean_Parser_builtinParserCategoriesRef;
v___x_659_ = lean_st_ref_get(v___x_658_);
v___x_660_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_660_, 0, v___x_655_);
lean_ctor_set(v___x_660_, 1, v___x_657_);
lean_ctor_set(v___x_660_, 2, v___x_659_);
v___x_661_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_661_, 0, v___x_660_);
return v___x_661_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_ParserExtension_mkInitial___boxed(lean_object* v_a_662_){
_start:
{
lean_object* v_res_663_; 
v_res_663_ = l___private_Lean_Parser_Extension_0__Lean_Parser_ParserExtension_mkInitial();
return v_res_663_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_addTokenConfig(lean_object* v_tokens_667_, lean_object* v_tk_668_){
_start:
{
lean_object* v___x_669_; uint8_t v___x_670_; 
v___x_669_ = ((lean_object*)(l_Lean_Parser_ParserExtension_instInhabitedOLeanEntry_default___closed__0));
v___x_670_ = lean_string_dec_eq(v_tk_668_, v___x_669_);
if (v___x_670_ == 0)
{
lean_object* v___x_671_; 
v___x_671_ = l_Lean_Data_Trie_find_x3f___redArg(v_tokens_667_, v_tk_668_);
if (lean_obj_tag(v___x_671_) == 0)
{
lean_object* v___x_672_; lean_object* v___x_673_; 
lean_inc_ref(v_tk_668_);
v___x_672_ = l_Lean_Data_Trie_insert___redArg(v_tokens_667_, v_tk_668_, v_tk_668_);
lean_dec_ref(v_tk_668_);
v___x_673_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_673_, 0, v___x_672_);
return v___x_673_;
}
else
{
lean_object* v___x_675_; uint8_t v_isShared_676_; uint8_t v_isSharedCheck_680_; 
lean_dec_ref(v_tk_668_);
v_isSharedCheck_680_ = !lean_is_exclusive(v___x_671_);
if (v_isSharedCheck_680_ == 0)
{
lean_object* v_unused_681_; 
v_unused_681_ = lean_ctor_get(v___x_671_, 0);
lean_dec(v_unused_681_);
v___x_675_ = v___x_671_;
v_isShared_676_ = v_isSharedCheck_680_;
goto v_resetjp_674_;
}
else
{
lean_dec(v___x_671_);
v___x_675_ = lean_box(0);
v_isShared_676_ = v_isSharedCheck_680_;
goto v_resetjp_674_;
}
v_resetjp_674_:
{
lean_object* v___x_678_; 
if (v_isShared_676_ == 0)
{
lean_ctor_set(v___x_675_, 0, v_tokens_667_);
v___x_678_ = v___x_675_;
goto v_reusejp_677_;
}
else
{
lean_object* v_reuseFailAlloc_679_; 
v_reuseFailAlloc_679_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_679_, 0, v_tokens_667_);
v___x_678_ = v_reuseFailAlloc_679_;
goto v_reusejp_677_;
}
v_reusejp_677_:
{
return v___x_678_;
}
}
}
}
else
{
lean_object* v___x_682_; 
lean_dec_ref(v_tk_668_);
lean_dec_ref(v_tokens_667_);
v___x_682_ = ((lean_object*)(l___private_Lean_Parser_Extension_0__Lean_Parser_addTokenConfig___closed__1));
return v___x_682_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_throwUnknownParserCategory___redArg(lean_object* v_catName_685_){
_start:
{
lean_object* v___x_686_; uint8_t v___x_687_; lean_object* v___x_688_; lean_object* v___x_689_; lean_object* v___x_690_; lean_object* v___x_691_; lean_object* v___x_692_; 
v___x_686_ = ((lean_object*)(l_Lean_Parser_throwUnknownParserCategory___redArg___closed__0));
v___x_687_ = 1;
v___x_688_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_catName_685_, v___x_687_);
v___x_689_ = lean_string_append(v___x_686_, v___x_688_);
lean_dec_ref(v___x_688_);
v___x_690_ = ((lean_object*)(l_Lean_Parser_throwUnknownParserCategory___redArg___closed__1));
v___x_691_ = lean_string_append(v___x_689_, v___x_690_);
v___x_692_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_692_, 0, v___x_691_);
return v___x_692_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_throwUnknownParserCategory(lean_object* v_00_u03b1_693_, lean_object* v_catName_694_){
_start:
{
lean_object* v___x_695_; 
v___x_695_ = l_Lean_Parser_throwUnknownParserCategory___redArg(v_catName_694_);
return v___x_695_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_getCategory(lean_object* v_categories_698_, lean_object* v_catName_699_){
_start:
{
lean_object* v___x_700_; lean_object* v___x_701_; lean_object* v___x_702_; 
v___x_700_ = ((lean_object*)(l_Lean_Parser_getCategory___closed__0));
v___x_701_ = ((lean_object*)(l_Lean_Parser_getCategory___closed__1));
v___x_702_ = l_Lean_PersistentHashMap_find_x3f___redArg(v___x_700_, v___x_701_, v_categories_698_, v_catName_699_);
return v___x_702_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_getCategory___boxed(lean_object* v_categories_703_, lean_object* v_catName_704_){
_start:
{
lean_object* v_res_705_; 
v_res_705_ = l_Lean_Parser_getCategory(v_categories_703_, v_catName_704_);
lean_dec_ref(v_categories_703_);
return v_res_705_;
}
}
LEAN_EXPORT lean_object* l_List_eraseDups___at___00Lean_Parser_addLeadingParser_spec__2(lean_object* v_as_707_){
_start:
{
lean_object* v___f_708_; lean_object* v___x_709_; 
v___f_708_ = ((lean_object*)(l_List_eraseDups___at___00Lean_Parser_addLeadingParser_spec__2___closed__0));
v___x_709_ = l_List_eraseDupsBy___redArg(v___f_708_, v_as_707_);
return v___x_709_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Parser_addLeadingParser_spec__3(lean_object* v_p_710_, lean_object* v_prio_711_, lean_object* v_x_712_, lean_object* v_x_713_){
_start:
{
if (lean_obj_tag(v_x_713_) == 0)
{
lean_dec(v_prio_711_);
lean_dec_ref(v_p_710_);
return v_x_712_;
}
else
{
lean_object* v_head_714_; lean_object* v_tail_715_; lean_object* v___x_717_; uint8_t v_isShared_718_; uint8_t v_isSharedCheck_735_; 
v_head_714_ = lean_ctor_get(v_x_713_, 0);
v_tail_715_ = lean_ctor_get(v_x_713_, 1);
v_isSharedCheck_735_ = !lean_is_exclusive(v_x_713_);
if (v_isSharedCheck_735_ == 0)
{
v___x_717_ = v_x_713_;
v_isShared_718_ = v_isSharedCheck_735_;
goto v_resetjp_716_;
}
else
{
lean_inc(v_tail_715_);
lean_inc(v_head_714_);
lean_dec(v_x_713_);
v___x_717_ = lean_box(0);
v_isShared_718_ = v_isSharedCheck_735_;
goto v_resetjp_716_;
}
v_resetjp_716_:
{
lean_object* v_leadingTable_719_; lean_object* v_leadingParsers_720_; lean_object* v_trailingTable_721_; lean_object* v_trailingParsers_722_; lean_object* v___x_724_; uint8_t v_isShared_725_; uint8_t v_isSharedCheck_734_; 
v_leadingTable_719_ = lean_ctor_get(v_x_712_, 0);
v_leadingParsers_720_ = lean_ctor_get(v_x_712_, 1);
v_trailingTable_721_ = lean_ctor_get(v_x_712_, 2);
v_trailingParsers_722_ = lean_ctor_get(v_x_712_, 3);
v_isSharedCheck_734_ = !lean_is_exclusive(v_x_712_);
if (v_isSharedCheck_734_ == 0)
{
v___x_724_ = v_x_712_;
v_isShared_725_ = v_isSharedCheck_734_;
goto v_resetjp_723_;
}
else
{
lean_inc(v_trailingParsers_722_);
lean_inc(v_trailingTable_721_);
lean_inc(v_leadingParsers_720_);
lean_inc(v_leadingTable_719_);
lean_dec(v_x_712_);
v___x_724_ = lean_box(0);
v_isShared_725_ = v_isSharedCheck_734_;
goto v_resetjp_723_;
}
v_resetjp_723_:
{
lean_object* v___x_727_; 
lean_inc(v_prio_711_);
lean_inc_ref(v_p_710_);
if (v_isShared_718_ == 0)
{
lean_ctor_set_tag(v___x_717_, 0);
lean_ctor_set(v___x_717_, 1, v_prio_711_);
lean_ctor_set(v___x_717_, 0, v_p_710_);
v___x_727_ = v___x_717_;
goto v_reusejp_726_;
}
else
{
lean_object* v_reuseFailAlloc_733_; 
v_reuseFailAlloc_733_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_733_, 0, v_p_710_);
lean_ctor_set(v_reuseFailAlloc_733_, 1, v_prio_711_);
v___x_727_ = v_reuseFailAlloc_733_;
goto v_reusejp_726_;
}
v_reusejp_726_:
{
lean_object* v___x_728_; lean_object* v___x_730_; 
v___x_728_ = l_Lean_Parser_TokenMap_insert___redArg(v_leadingTable_719_, v_head_714_, v___x_727_);
if (v_isShared_725_ == 0)
{
lean_ctor_set(v___x_724_, 0, v___x_728_);
v___x_730_ = v___x_724_;
goto v_reusejp_729_;
}
else
{
lean_object* v_reuseFailAlloc_732_; 
v_reuseFailAlloc_732_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_732_, 0, v___x_728_);
lean_ctor_set(v_reuseFailAlloc_732_, 1, v_leadingParsers_720_);
lean_ctor_set(v_reuseFailAlloc_732_, 2, v_trailingTable_721_);
lean_ctor_set(v_reuseFailAlloc_732_, 3, v_trailingParsers_722_);
v___x_730_ = v_reuseFailAlloc_732_;
goto v_reusejp_729_;
}
v_reusejp_729_:
{
v_x_712_ = v___x_730_;
v_x_713_ = v_tail_715_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Parser_addLeadingParser_spec__0_spec__0_spec__2___redArg(lean_object* v_keys_736_, lean_object* v_vals_737_, lean_object* v_i_738_, lean_object* v_k_739_){
_start:
{
lean_object* v___x_740_; uint8_t v___x_741_; 
v___x_740_ = lean_array_get_size(v_keys_736_);
v___x_741_ = lean_nat_dec_lt(v_i_738_, v___x_740_);
if (v___x_741_ == 0)
{
lean_object* v___x_742_; 
lean_dec(v_i_738_);
v___x_742_ = lean_box(0);
return v___x_742_;
}
else
{
lean_object* v_k_x27_743_; uint8_t v___x_744_; 
v_k_x27_743_ = lean_array_fget_borrowed(v_keys_736_, v_i_738_);
v___x_744_ = lean_name_eq(v_k_739_, v_k_x27_743_);
if (v___x_744_ == 0)
{
lean_object* v___x_745_; lean_object* v___x_746_; 
v___x_745_ = lean_unsigned_to_nat(1u);
v___x_746_ = lean_nat_add(v_i_738_, v___x_745_);
lean_dec(v_i_738_);
v_i_738_ = v___x_746_;
goto _start;
}
else
{
lean_object* v___x_748_; lean_object* v___x_749_; 
v___x_748_ = lean_array_fget_borrowed(v_vals_737_, v_i_738_);
lean_dec(v_i_738_);
lean_inc(v___x_748_);
v___x_749_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_749_, 0, v___x_748_);
return v___x_749_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Parser_addLeadingParser_spec__0_spec__0_spec__2___redArg___boxed(lean_object* v_keys_750_, lean_object* v_vals_751_, lean_object* v_i_752_, lean_object* v_k_753_){
_start:
{
lean_object* v_res_754_; 
v_res_754_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Parser_addLeadingParser_spec__0_spec__0_spec__2___redArg(v_keys_750_, v_vals_751_, v_i_752_, v_k_753_);
lean_dec(v_k_753_);
lean_dec_ref(v_vals_751_);
lean_dec_ref(v_keys_750_);
return v_res_754_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Parser_addLeadingParser_spec__0_spec__0___redArg(lean_object* v_x_755_, size_t v_x_756_, lean_object* v_x_757_){
_start:
{
if (lean_obj_tag(v_x_755_) == 0)
{
lean_object* v_es_758_; lean_object* v___x_759_; size_t v___x_760_; size_t v___x_761_; lean_object* v_j_762_; lean_object* v___x_763_; 
v_es_758_ = lean_ctor_get(v_x_755_, 0);
v___x_759_ = lean_box(2);
v___x_760_ = ((size_t)31ULL);
v___x_761_ = lean_usize_land(v_x_756_, v___x_760_);
v_j_762_ = lean_usize_to_nat(v___x_761_);
v___x_763_ = lean_array_get_borrowed(v___x_759_, v_es_758_, v_j_762_);
lean_dec(v_j_762_);
switch(lean_obj_tag(v___x_763_))
{
case 0:
{
lean_object* v_key_764_; lean_object* v_val_765_; uint8_t v___x_766_; 
v_key_764_ = lean_ctor_get(v___x_763_, 0);
v_val_765_ = lean_ctor_get(v___x_763_, 1);
v___x_766_ = lean_name_eq(v_x_757_, v_key_764_);
if (v___x_766_ == 0)
{
lean_object* v___x_767_; 
v___x_767_ = lean_box(0);
return v___x_767_;
}
else
{
lean_object* v___x_768_; 
lean_inc(v_val_765_);
v___x_768_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_768_, 0, v_val_765_);
return v___x_768_;
}
}
case 1:
{
lean_object* v_node_769_; size_t v___x_770_; size_t v___x_771_; 
v_node_769_ = lean_ctor_get(v___x_763_, 0);
v___x_770_ = ((size_t)5ULL);
v___x_771_ = lean_usize_shift_right(v_x_756_, v___x_770_);
v_x_755_ = v_node_769_;
v_x_756_ = v___x_771_;
goto _start;
}
default: 
{
lean_object* v___x_773_; 
v___x_773_ = lean_box(0);
return v___x_773_;
}
}
}
else
{
lean_object* v_ks_774_; lean_object* v_vs_775_; lean_object* v___x_776_; lean_object* v___x_777_; 
v_ks_774_ = lean_ctor_get(v_x_755_, 0);
v_vs_775_ = lean_ctor_get(v_x_755_, 1);
v___x_776_ = lean_unsigned_to_nat(0u);
v___x_777_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Parser_addLeadingParser_spec__0_spec__0_spec__2___redArg(v_ks_774_, v_vs_775_, v___x_776_, v_x_757_);
return v___x_777_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Parser_addLeadingParser_spec__0_spec__0___redArg___boxed(lean_object* v_x_778_, lean_object* v_x_779_, lean_object* v_x_780_){
_start:
{
size_t v_x_498__boxed_781_; lean_object* v_res_782_; 
v_x_498__boxed_781_ = lean_unbox_usize(v_x_779_);
lean_dec(v_x_779_);
v_res_782_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Parser_addLeadingParser_spec__0_spec__0___redArg(v_x_778_, v_x_498__boxed_781_, v_x_780_);
lean_dec(v_x_780_);
lean_dec_ref(v_x_778_);
return v_res_782_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Parser_addLeadingParser_spec__0___redArg(lean_object* v_x_783_, lean_object* v_x_784_){
_start:
{
uint64_t v___y_786_; lean_object* v___x_789_; 
v___x_789_ = l_unsafeCast___redArg(v_x_784_);
if (lean_obj_tag(v___x_789_) == 0)
{
uint64_t v___x_790_; 
v___x_790_ = 1723ULL;
v___y_786_ = v___x_790_;
goto v___jp_785_;
}
else
{
uint64_t v_hash_791_; 
v_hash_791_ = lean_ctor_get_uint64(v___x_789_, sizeof(void*)*2);
lean_dec(v___x_789_);
v___y_786_ = v_hash_791_;
goto v___jp_785_;
}
v___jp_785_:
{
size_t v___x_787_; lean_object* v___x_788_; 
v___x_787_ = lean_uint64_to_usize(v___y_786_);
v___x_788_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Parser_addLeadingParser_spec__0_spec__0___redArg(v_x_783_, v___x_787_, v_x_784_);
return v___x_788_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Parser_addLeadingParser_spec__0___redArg___boxed(lean_object* v_x_792_, lean_object* v_x_793_){
_start:
{
lean_object* v_res_794_; 
v_res_794_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Parser_addLeadingParser_spec__0___redArg(v_x_792_, v_x_793_);
lean_dec(v_x_793_);
lean_dec_ref(v_x_792_);
return v_res_794_;
}
}
static lean_object* _init_l_List_mapTR_loop___at___00Lean_Parser_addLeadingParser_spec__1___closed__0(void){
_start:
{
lean_object* v___x_795_; lean_object* v___x_796_; 
v___x_795_ = lean_box(0);
v___x_796_ = l_unsafeCast___redArg(v___x_795_);
return v___x_796_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Parser_addLeadingParser_spec__1(lean_object* v_a_797_, lean_object* v_a_798_){
_start:
{
if (lean_obj_tag(v_a_797_) == 0)
{
lean_object* v___x_799_; 
v___x_799_ = l_List_reverse___redArg(v_a_798_);
return v___x_799_;
}
else
{
lean_object* v_head_800_; lean_object* v_tail_801_; lean_object* v___x_803_; uint8_t v_isShared_804_; uint8_t v_isSharedCheck_811_; 
v_head_800_ = lean_ctor_get(v_a_797_, 0);
v_tail_801_ = lean_ctor_get(v_a_797_, 1);
v_isSharedCheck_811_ = !lean_is_exclusive(v_a_797_);
if (v_isSharedCheck_811_ == 0)
{
v___x_803_ = v_a_797_;
v_isShared_804_ = v_isSharedCheck_811_;
goto v_resetjp_802_;
}
else
{
lean_inc(v_tail_801_);
lean_inc(v_head_800_);
lean_dec(v_a_797_);
v___x_803_ = lean_box(0);
v_isShared_804_ = v_isSharedCheck_811_;
goto v_resetjp_802_;
}
v_resetjp_802_:
{
lean_object* v___x_805_; lean_object* v___x_806_; lean_object* v___x_808_; 
v___x_805_ = lean_obj_once(&l_List_mapTR_loop___at___00Lean_Parser_addLeadingParser_spec__1___closed__0, &l_List_mapTR_loop___at___00Lean_Parser_addLeadingParser_spec__1___closed__0_once, _init_l_List_mapTR_loop___at___00Lean_Parser_addLeadingParser_spec__1___closed__0);
v___x_806_ = l_Lean_Name_str___override(v___x_805_, v_head_800_);
if (v_isShared_804_ == 0)
{
lean_ctor_set(v___x_803_, 1, v_a_798_);
lean_ctor_set(v___x_803_, 0, v___x_806_);
v___x_808_ = v___x_803_;
goto v_reusejp_807_;
}
else
{
lean_object* v_reuseFailAlloc_810_; 
v_reuseFailAlloc_810_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_810_, 0, v___x_806_);
lean_ctor_set(v_reuseFailAlloc_810_, 1, v_a_798_);
v___x_808_ = v_reuseFailAlloc_810_;
goto v_reusejp_807_;
}
v_reusejp_807_:
{
v_a_797_ = v_tail_801_;
v_a_798_ = v___x_808_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_addLeadingParser(lean_object* v_categories_812_, lean_object* v_catName_813_, lean_object* v_declName_814_, lean_object* v_p_815_, lean_object* v_prio_816_){
_start:
{
lean_object* v___x_817_; 
v___x_817_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Parser_addLeadingParser_spec__0___redArg(v_categories_812_, v_catName_813_);
if (lean_obj_tag(v___x_817_) == 0)
{
lean_object* v___x_818_; 
lean_dec(v_prio_816_);
lean_dec_ref(v_p_815_);
lean_dec(v_declName_814_);
lean_dec_ref(v_categories_812_);
v___x_818_ = l_Lean_Parser_throwUnknownParserCategory___redArg(v_catName_813_);
return v___x_818_;
}
else
{
lean_object* v_val_819_; lean_object* v___x_821_; uint8_t v_isShared_822_; uint8_t v_isSharedCheck_865_; 
v_val_819_ = lean_ctor_get(v___x_817_, 0);
v_isSharedCheck_865_ = !lean_is_exclusive(v___x_817_);
if (v_isSharedCheck_865_ == 0)
{
v___x_821_ = v___x_817_;
v_isShared_822_ = v_isSharedCheck_865_;
goto v_resetjp_820_;
}
else
{
lean_inc(v_val_819_);
lean_dec(v___x_817_);
v___x_821_ = lean_box(0);
v_isShared_822_ = v_isSharedCheck_865_;
goto v_resetjp_820_;
}
v_resetjp_820_:
{
lean_object* v_info_823_; lean_object* v_declName_824_; lean_object* v_kinds_825_; lean_object* v_tables_826_; uint8_t v_behavior_827_; lean_object* v___x_829_; uint8_t v_isShared_830_; uint8_t v_isSharedCheck_864_; 
v_info_823_ = lean_ctor_get(v_p_815_, 0);
v_declName_824_ = lean_ctor_get(v_val_819_, 0);
v_kinds_825_ = lean_ctor_get(v_val_819_, 1);
v_tables_826_ = lean_ctor_get(v_val_819_, 2);
v_behavior_827_ = lean_ctor_get_uint8(v_val_819_, sizeof(void*)*3);
v_isSharedCheck_864_ = !lean_is_exclusive(v_val_819_);
if (v_isSharedCheck_864_ == 0)
{
v___x_829_ = v_val_819_;
v_isShared_830_ = v_isSharedCheck_864_;
goto v_resetjp_828_;
}
else
{
lean_inc(v_tables_826_);
lean_inc(v_kinds_825_);
lean_inc(v_declName_824_);
lean_dec(v_val_819_);
v___x_829_ = lean_box(0);
v_isShared_830_ = v_isSharedCheck_864_;
goto v_resetjp_828_;
}
v_resetjp_828_:
{
lean_object* v_firstTokens_831_; lean_object* v_kinds_832_; lean_object* v_tks_834_; 
v_firstTokens_831_ = lean_ctor_get(v_info_823_, 2);
v_kinds_832_ = l_Lean_Parser_SyntaxNodeKindSet_insert(v_kinds_825_, v_declName_814_);
switch(lean_obj_tag(v_firstTokens_831_))
{
case 2:
{
lean_object* v_a_846_; 
v_a_846_ = lean_ctor_get(v_firstTokens_831_, 0);
lean_inc(v_a_846_);
v_tks_834_ = v_a_846_;
goto v___jp_833_;
}
case 3:
{
lean_object* v_a_847_; 
v_a_847_ = lean_ctor_get(v_firstTokens_831_, 0);
lean_inc(v_a_847_);
v_tks_834_ = v_a_847_;
goto v___jp_833_;
}
default: 
{
lean_object* v_leadingTable_848_; lean_object* v_leadingParsers_849_; lean_object* v_trailingTable_850_; lean_object* v_trailingParsers_851_; lean_object* v___x_853_; uint8_t v_isShared_854_; uint8_t v_isSharedCheck_863_; 
lean_del_object(v___x_829_);
lean_del_object(v___x_821_);
v_leadingTable_848_ = lean_ctor_get(v_tables_826_, 0);
v_leadingParsers_849_ = lean_ctor_get(v_tables_826_, 1);
v_trailingTable_850_ = lean_ctor_get(v_tables_826_, 2);
v_trailingParsers_851_ = lean_ctor_get(v_tables_826_, 3);
v_isSharedCheck_863_ = !lean_is_exclusive(v_tables_826_);
if (v_isSharedCheck_863_ == 0)
{
v___x_853_ = v_tables_826_;
v_isShared_854_ = v_isSharedCheck_863_;
goto v_resetjp_852_;
}
else
{
lean_inc(v_trailingParsers_851_);
lean_inc(v_trailingTable_850_);
lean_inc(v_leadingParsers_849_);
lean_inc(v_leadingTable_848_);
lean_dec(v_tables_826_);
v___x_853_ = lean_box(0);
v_isShared_854_ = v_isSharedCheck_863_;
goto v_resetjp_852_;
}
v_resetjp_852_:
{
lean_object* v___x_855_; lean_object* v___x_856_; lean_object* v_tables_858_; 
v___x_855_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_855_, 0, v_p_815_);
lean_ctor_set(v___x_855_, 1, v_prio_816_);
v___x_856_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_856_, 0, v___x_855_);
lean_ctor_set(v___x_856_, 1, v_leadingParsers_849_);
if (v_isShared_854_ == 0)
{
lean_ctor_set(v___x_853_, 1, v___x_856_);
v_tables_858_ = v___x_853_;
goto v_reusejp_857_;
}
else
{
lean_object* v_reuseFailAlloc_862_; 
v_reuseFailAlloc_862_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_862_, 0, v_leadingTable_848_);
lean_ctor_set(v_reuseFailAlloc_862_, 1, v___x_856_);
lean_ctor_set(v_reuseFailAlloc_862_, 2, v_trailingTable_850_);
lean_ctor_set(v_reuseFailAlloc_862_, 3, v_trailingParsers_851_);
v_tables_858_ = v_reuseFailAlloc_862_;
goto v_reusejp_857_;
}
v_reusejp_857_:
{
lean_object* v___x_859_; lean_object* v___x_860_; lean_object* v___x_861_; 
v___x_859_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_859_, 0, v_declName_824_);
lean_ctor_set(v___x_859_, 1, v_kinds_832_);
lean_ctor_set(v___x_859_, 2, v_tables_858_);
lean_ctor_set_uint8(v___x_859_, sizeof(void*)*3, v_behavior_827_);
v___x_860_ = l_Lean_PersistentHashMap_insert___at___00__private_Lean_Parser_Extension_0__Lean_Parser_addParserCategoryCore_spec__1___redArg(v_categories_812_, v_catName_813_, v___x_859_);
v___x_861_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_861_, 0, v___x_860_);
return v___x_861_;
}
}
}
}
v___jp_833_:
{
lean_object* v___x_835_; lean_object* v_tks_836_; lean_object* v___x_837_; lean_object* v_tables_838_; lean_object* v___x_840_; 
v___x_835_ = lean_box(0);
v_tks_836_ = l_List_mapTR_loop___at___00Lean_Parser_addLeadingParser_spec__1(v_tks_834_, v___x_835_);
v___x_837_ = l_List_eraseDups___at___00Lean_Parser_addLeadingParser_spec__2(v_tks_836_);
v_tables_838_ = l_List_foldl___at___00Lean_Parser_addLeadingParser_spec__3(v_p_815_, v_prio_816_, v_tables_826_, v___x_837_);
if (v_isShared_830_ == 0)
{
lean_ctor_set(v___x_829_, 2, v_tables_838_);
lean_ctor_set(v___x_829_, 1, v_kinds_832_);
v___x_840_ = v___x_829_;
goto v_reusejp_839_;
}
else
{
lean_object* v_reuseFailAlloc_845_; 
v_reuseFailAlloc_845_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_845_, 0, v_declName_824_);
lean_ctor_set(v_reuseFailAlloc_845_, 1, v_kinds_832_);
lean_ctor_set(v_reuseFailAlloc_845_, 2, v_tables_838_);
lean_ctor_set_uint8(v_reuseFailAlloc_845_, sizeof(void*)*3, v_behavior_827_);
v___x_840_ = v_reuseFailAlloc_845_;
goto v_reusejp_839_;
}
v_reusejp_839_:
{
lean_object* v___x_841_; lean_object* v___x_843_; 
v___x_841_ = l_Lean_PersistentHashMap_insert___at___00__private_Lean_Parser_Extension_0__Lean_Parser_addParserCategoryCore_spec__1___redArg(v_categories_812_, v_catName_813_, v___x_840_);
if (v_isShared_822_ == 0)
{
lean_ctor_set(v___x_821_, 0, v___x_841_);
v___x_843_ = v___x_821_;
goto v_reusejp_842_;
}
else
{
lean_object* v_reuseFailAlloc_844_; 
v_reuseFailAlloc_844_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_844_, 0, v___x_841_);
v___x_843_ = v_reuseFailAlloc_844_;
goto v_reusejp_842_;
}
v_reusejp_842_:
{
return v___x_843_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Parser_addLeadingParser_spec__0(lean_object* v_00_u03b2_866_, lean_object* v_x_867_, lean_object* v_x_868_){
_start:
{
lean_object* v___x_869_; 
v___x_869_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Parser_addLeadingParser_spec__0___redArg(v_x_867_, v_x_868_);
return v___x_869_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Parser_addLeadingParser_spec__0___boxed(lean_object* v_00_u03b2_870_, lean_object* v_x_871_, lean_object* v_x_872_){
_start:
{
lean_object* v_res_873_; 
v_res_873_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Parser_addLeadingParser_spec__0(v_00_u03b2_870_, v_x_871_, v_x_872_);
lean_dec(v_x_872_);
lean_dec_ref(v_x_871_);
return v_res_873_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Parser_addLeadingParser_spec__0_spec__0(lean_object* v_00_u03b2_874_, lean_object* v_x_875_, size_t v_x_876_, lean_object* v_x_877_){
_start:
{
lean_object* v___x_878_; 
v___x_878_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Parser_addLeadingParser_spec__0_spec__0___redArg(v_x_875_, v_x_876_, v_x_877_);
return v___x_878_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Parser_addLeadingParser_spec__0_spec__0___boxed(lean_object* v_00_u03b2_879_, lean_object* v_x_880_, lean_object* v_x_881_, lean_object* v_x_882_){
_start:
{
size_t v_x_675__boxed_883_; lean_object* v_res_884_; 
v_x_675__boxed_883_ = lean_unbox_usize(v_x_881_);
lean_dec(v_x_881_);
v_res_884_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Parser_addLeadingParser_spec__0_spec__0(v_00_u03b2_879_, v_x_880_, v_x_675__boxed_883_, v_x_882_);
lean_dec(v_x_882_);
lean_dec_ref(v_x_880_);
return v_res_884_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Parser_addLeadingParser_spec__0_spec__0_spec__2(lean_object* v_00_u03b2_885_, lean_object* v_keys_886_, lean_object* v_vals_887_, lean_object* v_heq_888_, lean_object* v_i_889_, lean_object* v_k_890_){
_start:
{
lean_object* v___x_891_; 
v___x_891_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Parser_addLeadingParser_spec__0_spec__0_spec__2___redArg(v_keys_886_, v_vals_887_, v_i_889_, v_k_890_);
return v___x_891_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Parser_addLeadingParser_spec__0_spec__0_spec__2___boxed(lean_object* v_00_u03b2_892_, lean_object* v_keys_893_, lean_object* v_vals_894_, lean_object* v_heq_895_, lean_object* v_i_896_, lean_object* v_k_897_){
_start:
{
lean_object* v_res_898_; 
v_res_898_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Parser_addLeadingParser_spec__0_spec__0_spec__2(v_00_u03b2_892_, v_keys_893_, v_vals_894_, v_heq_895_, v_i_896_, v_k_897_);
lean_dec(v_k_897_);
lean_dec_ref(v_vals_894_);
lean_dec_ref(v_keys_893_);
return v_res_898_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00__private_Lean_Parser_Extension_0__Lean_Parser_addTrailingParserAux_spec__0(lean_object* v_p_899_, lean_object* v_prio_900_, lean_object* v_x_901_, lean_object* v_x_902_){
_start:
{
if (lean_obj_tag(v_x_902_) == 0)
{
lean_dec(v_prio_900_);
lean_dec_ref(v_p_899_);
return v_x_901_;
}
else
{
lean_object* v_head_903_; lean_object* v_tail_904_; lean_object* v___x_906_; uint8_t v_isShared_907_; uint8_t v_isSharedCheck_924_; 
v_head_903_ = lean_ctor_get(v_x_902_, 0);
v_tail_904_ = lean_ctor_get(v_x_902_, 1);
v_isSharedCheck_924_ = !lean_is_exclusive(v_x_902_);
if (v_isSharedCheck_924_ == 0)
{
v___x_906_ = v_x_902_;
v_isShared_907_ = v_isSharedCheck_924_;
goto v_resetjp_905_;
}
else
{
lean_inc(v_tail_904_);
lean_inc(v_head_903_);
lean_dec(v_x_902_);
v___x_906_ = lean_box(0);
v_isShared_907_ = v_isSharedCheck_924_;
goto v_resetjp_905_;
}
v_resetjp_905_:
{
lean_object* v_leadingTable_908_; lean_object* v_leadingParsers_909_; lean_object* v_trailingTable_910_; lean_object* v_trailingParsers_911_; lean_object* v___x_913_; uint8_t v_isShared_914_; uint8_t v_isSharedCheck_923_; 
v_leadingTable_908_ = lean_ctor_get(v_x_901_, 0);
v_leadingParsers_909_ = lean_ctor_get(v_x_901_, 1);
v_trailingTable_910_ = lean_ctor_get(v_x_901_, 2);
v_trailingParsers_911_ = lean_ctor_get(v_x_901_, 3);
v_isSharedCheck_923_ = !lean_is_exclusive(v_x_901_);
if (v_isSharedCheck_923_ == 0)
{
v___x_913_ = v_x_901_;
v_isShared_914_ = v_isSharedCheck_923_;
goto v_resetjp_912_;
}
else
{
lean_inc(v_trailingParsers_911_);
lean_inc(v_trailingTable_910_);
lean_inc(v_leadingParsers_909_);
lean_inc(v_leadingTable_908_);
lean_dec(v_x_901_);
v___x_913_ = lean_box(0);
v_isShared_914_ = v_isSharedCheck_923_;
goto v_resetjp_912_;
}
v_resetjp_912_:
{
lean_object* v___x_916_; 
lean_inc(v_prio_900_);
lean_inc_ref(v_p_899_);
if (v_isShared_907_ == 0)
{
lean_ctor_set_tag(v___x_906_, 0);
lean_ctor_set(v___x_906_, 1, v_prio_900_);
lean_ctor_set(v___x_906_, 0, v_p_899_);
v___x_916_ = v___x_906_;
goto v_reusejp_915_;
}
else
{
lean_object* v_reuseFailAlloc_922_; 
v_reuseFailAlloc_922_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_922_, 0, v_p_899_);
lean_ctor_set(v_reuseFailAlloc_922_, 1, v_prio_900_);
v___x_916_ = v_reuseFailAlloc_922_;
goto v_reusejp_915_;
}
v_reusejp_915_:
{
lean_object* v___x_917_; lean_object* v___x_919_; 
v___x_917_ = l_Lean_Parser_TokenMap_insert___redArg(v_trailingTable_910_, v_head_903_, v___x_916_);
if (v_isShared_914_ == 0)
{
lean_ctor_set(v___x_913_, 2, v___x_917_);
v___x_919_ = v___x_913_;
goto v_reusejp_918_;
}
else
{
lean_object* v_reuseFailAlloc_921_; 
v_reuseFailAlloc_921_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_921_, 0, v_leadingTable_908_);
lean_ctor_set(v_reuseFailAlloc_921_, 1, v_leadingParsers_909_);
lean_ctor_set(v_reuseFailAlloc_921_, 2, v___x_917_);
lean_ctor_set(v_reuseFailAlloc_921_, 3, v_trailingParsers_911_);
v___x_919_ = v_reuseFailAlloc_921_;
goto v_reusejp_918_;
}
v_reusejp_918_:
{
v_x_901_ = v___x_919_;
v_x_902_ = v_tail_904_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_addTrailingParserAux(lean_object* v_tables_925_, lean_object* v_p_926_, lean_object* v_prio_927_){
_start:
{
lean_object* v_tks_929_; lean_object* v_info_934_; lean_object* v_firstTokens_935_; 
v_info_934_ = lean_ctor_get(v_p_926_, 0);
v_firstTokens_935_ = lean_ctor_get(v_info_934_, 2);
switch(lean_obj_tag(v_firstTokens_935_))
{
case 2:
{
lean_object* v_a_936_; 
v_a_936_ = lean_ctor_get(v_firstTokens_935_, 0);
lean_inc(v_a_936_);
v_tks_929_ = v_a_936_;
goto v___jp_928_;
}
case 3:
{
lean_object* v_a_937_; 
v_a_937_ = lean_ctor_get(v_firstTokens_935_, 0);
lean_inc(v_a_937_);
v_tks_929_ = v_a_937_;
goto v___jp_928_;
}
default: 
{
lean_object* v_leadingTable_938_; lean_object* v_leadingParsers_939_; lean_object* v_trailingTable_940_; lean_object* v_trailingParsers_941_; lean_object* v___x_943_; uint8_t v_isShared_944_; uint8_t v_isSharedCheck_950_; 
v_leadingTable_938_ = lean_ctor_get(v_tables_925_, 0);
v_leadingParsers_939_ = lean_ctor_get(v_tables_925_, 1);
v_trailingTable_940_ = lean_ctor_get(v_tables_925_, 2);
v_trailingParsers_941_ = lean_ctor_get(v_tables_925_, 3);
v_isSharedCheck_950_ = !lean_is_exclusive(v_tables_925_);
if (v_isSharedCheck_950_ == 0)
{
v___x_943_ = v_tables_925_;
v_isShared_944_ = v_isSharedCheck_950_;
goto v_resetjp_942_;
}
else
{
lean_inc(v_trailingParsers_941_);
lean_inc(v_trailingTable_940_);
lean_inc(v_leadingParsers_939_);
lean_inc(v_leadingTable_938_);
lean_dec(v_tables_925_);
v___x_943_ = lean_box(0);
v_isShared_944_ = v_isSharedCheck_950_;
goto v_resetjp_942_;
}
v_resetjp_942_:
{
lean_object* v___x_945_; lean_object* v___x_946_; lean_object* v___x_948_; 
v___x_945_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_945_, 0, v_p_926_);
lean_ctor_set(v___x_945_, 1, v_prio_927_);
v___x_946_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_946_, 0, v___x_945_);
lean_ctor_set(v___x_946_, 1, v_trailingParsers_941_);
if (v_isShared_944_ == 0)
{
lean_ctor_set(v___x_943_, 3, v___x_946_);
v___x_948_ = v___x_943_;
goto v_reusejp_947_;
}
else
{
lean_object* v_reuseFailAlloc_949_; 
v_reuseFailAlloc_949_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_949_, 0, v_leadingTable_938_);
lean_ctor_set(v_reuseFailAlloc_949_, 1, v_leadingParsers_939_);
lean_ctor_set(v_reuseFailAlloc_949_, 2, v_trailingTable_940_);
lean_ctor_set(v_reuseFailAlloc_949_, 3, v___x_946_);
v___x_948_ = v_reuseFailAlloc_949_;
goto v_reusejp_947_;
}
v_reusejp_947_:
{
return v___x_948_;
}
}
}
}
v___jp_928_:
{
lean_object* v___x_930_; lean_object* v_tks_931_; lean_object* v___x_932_; lean_object* v___x_933_; 
v___x_930_ = lean_box(0);
v_tks_931_ = l_List_mapTR_loop___at___00Lean_Parser_addLeadingParser_spec__1(v_tks_929_, v___x_930_);
v___x_932_ = l_List_eraseDups___at___00Lean_Parser_addLeadingParser_spec__2(v_tks_931_);
v___x_933_ = l_List_foldl___at___00__private_Lean_Parser_Extension_0__Lean_Parser_addTrailingParserAux_spec__0(v_p_926_, v_prio_927_, v_tables_925_, v___x_932_);
return v___x_933_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_addTrailingParser(lean_object* v_categories_951_, lean_object* v_catName_952_, lean_object* v_declName_953_, lean_object* v_p_954_, lean_object* v_prio_955_){
_start:
{
lean_object* v___x_956_; 
v___x_956_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Parser_addLeadingParser_spec__0___redArg(v_categories_951_, v_catName_952_);
if (lean_obj_tag(v___x_956_) == 0)
{
lean_object* v___x_957_; 
lean_dec(v_prio_955_);
lean_dec_ref(v_p_954_);
lean_dec(v_declName_953_);
lean_dec_ref(v_categories_951_);
v___x_957_ = l_Lean_Parser_throwUnknownParserCategory___redArg(v_catName_952_);
return v___x_957_;
}
else
{
lean_object* v_val_958_; lean_object* v___x_960_; uint8_t v_isShared_961_; uint8_t v_isSharedCheck_979_; 
v_val_958_ = lean_ctor_get(v___x_956_, 0);
v_isSharedCheck_979_ = !lean_is_exclusive(v___x_956_);
if (v_isSharedCheck_979_ == 0)
{
v___x_960_ = v___x_956_;
v_isShared_961_ = v_isSharedCheck_979_;
goto v_resetjp_959_;
}
else
{
lean_inc(v_val_958_);
lean_dec(v___x_956_);
v___x_960_ = lean_box(0);
v_isShared_961_ = v_isSharedCheck_979_;
goto v_resetjp_959_;
}
v_resetjp_959_:
{
lean_object* v_declName_962_; lean_object* v_kinds_963_; lean_object* v_tables_964_; uint8_t v_behavior_965_; lean_object* v___x_967_; uint8_t v_isShared_968_; uint8_t v_isSharedCheck_978_; 
v_declName_962_ = lean_ctor_get(v_val_958_, 0);
v_kinds_963_ = lean_ctor_get(v_val_958_, 1);
v_tables_964_ = lean_ctor_get(v_val_958_, 2);
v_behavior_965_ = lean_ctor_get_uint8(v_val_958_, sizeof(void*)*3);
v_isSharedCheck_978_ = !lean_is_exclusive(v_val_958_);
if (v_isSharedCheck_978_ == 0)
{
v___x_967_ = v_val_958_;
v_isShared_968_ = v_isSharedCheck_978_;
goto v_resetjp_966_;
}
else
{
lean_inc(v_tables_964_);
lean_inc(v_kinds_963_);
lean_inc(v_declName_962_);
lean_dec(v_val_958_);
v___x_967_ = lean_box(0);
v_isShared_968_ = v_isSharedCheck_978_;
goto v_resetjp_966_;
}
v_resetjp_966_:
{
lean_object* v_kinds_969_; lean_object* v_tables_970_; lean_object* v___x_972_; 
v_kinds_969_ = l_Lean_Parser_SyntaxNodeKindSet_insert(v_kinds_963_, v_declName_953_);
v_tables_970_ = l___private_Lean_Parser_Extension_0__Lean_Parser_addTrailingParserAux(v_tables_964_, v_p_954_, v_prio_955_);
if (v_isShared_968_ == 0)
{
lean_ctor_set(v___x_967_, 2, v_tables_970_);
lean_ctor_set(v___x_967_, 1, v_kinds_969_);
v___x_972_ = v___x_967_;
goto v_reusejp_971_;
}
else
{
lean_object* v_reuseFailAlloc_977_; 
v_reuseFailAlloc_977_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_977_, 0, v_declName_962_);
lean_ctor_set(v_reuseFailAlloc_977_, 1, v_kinds_969_);
lean_ctor_set(v_reuseFailAlloc_977_, 2, v_tables_970_);
lean_ctor_set_uint8(v_reuseFailAlloc_977_, sizeof(void*)*3, v_behavior_965_);
v___x_972_ = v_reuseFailAlloc_977_;
goto v_reusejp_971_;
}
v_reusejp_971_:
{
lean_object* v___x_973_; lean_object* v___x_975_; 
v___x_973_ = l_Lean_PersistentHashMap_insert___at___00__private_Lean_Parser_Extension_0__Lean_Parser_addParserCategoryCore_spec__1___redArg(v_categories_951_, v_catName_952_, v___x_972_);
if (v_isShared_961_ == 0)
{
lean_ctor_set(v___x_960_, 0, v___x_973_);
v___x_975_ = v___x_960_;
goto v_reusejp_974_;
}
else
{
lean_object* v_reuseFailAlloc_976_; 
v_reuseFailAlloc_976_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_976_, 0, v___x_973_);
v___x_975_ = v_reuseFailAlloc_976_;
goto v_reusejp_974_;
}
v_reusejp_974_:
{
return v___x_975_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_addParser(lean_object* v_categories_980_, lean_object* v_catName_981_, lean_object* v_declName_982_, uint8_t v_leading_983_, lean_object* v_p_984_, lean_object* v_prio_985_){
_start:
{
if (v_leading_983_ == 0)
{
lean_object* v___x_986_; 
v___x_986_ = l_Lean_Parser_addTrailingParser(v_categories_980_, v_catName_981_, v_declName_982_, v_p_984_, v_prio_985_);
return v___x_986_;
}
else
{
lean_object* v___x_987_; 
v___x_987_ = l_Lean_Parser_addLeadingParser(v_categories_980_, v_catName_981_, v_declName_982_, v_p_984_, v_prio_985_);
return v___x_987_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_addParser___boxed(lean_object* v_categories_988_, lean_object* v_catName_989_, lean_object* v_declName_990_, lean_object* v_leading_991_, lean_object* v_p_992_, lean_object* v_prio_993_){
_start:
{
uint8_t v_leading_boxed_994_; lean_object* v_res_995_; 
v_leading_boxed_994_ = lean_unbox(v_leading_991_);
v_res_995_ = l_Lean_Parser_addParser(v_categories_988_, v_catName_989_, v_declName_990_, v_leading_boxed_994_, v_p_992_, v_prio_993_);
return v_res_995_;
}
}
LEAN_EXPORT lean_object* l_List_foldlM___at___00Lean_Parser_addParserTokens_spec__0(lean_object* v_x_996_, lean_object* v_x_997_){
_start:
{
if (lean_obj_tag(v_x_997_) == 0)
{
lean_object* v___x_998_; 
v___x_998_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_998_, 0, v_x_996_);
return v___x_998_;
}
else
{
lean_object* v_head_999_; lean_object* v_tail_1000_; lean_object* v___x_1001_; 
v_head_999_ = lean_ctor_get(v_x_997_, 0);
lean_inc(v_head_999_);
v_tail_1000_ = lean_ctor_get(v_x_997_, 1);
lean_inc(v_tail_1000_);
lean_dec_ref_known(v_x_997_, 2);
v___x_1001_ = l___private_Lean_Parser_Extension_0__Lean_Parser_addTokenConfig(v_x_996_, v_head_999_);
if (lean_obj_tag(v___x_1001_) == 0)
{
lean_dec(v_tail_1000_);
return v___x_1001_;
}
else
{
lean_object* v_a_1002_; 
v_a_1002_ = lean_ctor_get(v___x_1001_, 0);
lean_inc(v_a_1002_);
lean_dec_ref_known(v___x_1001_, 1);
v_x_996_ = v_a_1002_;
v_x_997_ = v_tail_1000_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_addParserTokens(lean_object* v_tokenTable_1004_, lean_object* v_info_1005_){
_start:
{
lean_object* v_collectTokens_1006_; lean_object* v___x_1007_; lean_object* v_newTokens_1008_; lean_object* v___x_1009_; 
v_collectTokens_1006_ = lean_ctor_get(v_info_1005_, 0);
lean_inc_ref(v_collectTokens_1006_);
lean_dec_ref(v_info_1005_);
v___x_1007_ = lean_box(0);
v_newTokens_1008_ = lean_apply_1(v_collectTokens_1006_, v___x_1007_);
v___x_1009_ = l_List_foldlM___at___00Lean_Parser_addParserTokens_spec__0(v_tokenTable_1004_, v_newTokens_1008_);
return v___x_1009_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_updateBuiltinTokens(lean_object* v_info_1012_, lean_object* v_declName_1013_){
_start:
{
lean_object* v___x_1015_; lean_object* v___x_1016_; lean_object* v___x_1017_; lean_object* v___x_1018_; 
v___x_1015_ = l_Lean_Parser_builtinTokenTable;
v___x_1016_ = lean_obj_once(&l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__0_00___x40_Lean_Parser_Extension_3332318574____hygCtx___hyg_2_, &l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__0_00___x40_Lean_Parser_Extension_3332318574____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__0_00___x40_Lean_Parser_Extension_3332318574____hygCtx___hyg_2_);
v___x_1017_ = lean_st_ref_swap(v___x_1015_, v___x_1016_);
v___x_1018_ = l_Lean_Parser_addParserTokens(v___x_1017_, v_info_1012_);
if (lean_obj_tag(v___x_1018_) == 0)
{
lean_object* v_a_1019_; lean_object* v___x_1021_; uint8_t v_isShared_1022_; uint8_t v_isSharedCheck_1035_; 
v_a_1019_ = lean_ctor_get(v___x_1018_, 0);
v_isSharedCheck_1035_ = !lean_is_exclusive(v___x_1018_);
if (v_isSharedCheck_1035_ == 0)
{
v___x_1021_ = v___x_1018_;
v_isShared_1022_ = v_isSharedCheck_1035_;
goto v_resetjp_1020_;
}
else
{
lean_inc(v_a_1019_);
lean_dec(v___x_1018_);
v___x_1021_ = lean_box(0);
v_isShared_1022_ = v_isSharedCheck_1035_;
goto v_resetjp_1020_;
}
v_resetjp_1020_:
{
lean_object* v___x_1023_; lean_object* v___x_1024_; uint8_t v___x_1025_; lean_object* v___x_1026_; lean_object* v___x_1027_; lean_object* v___x_1028_; lean_object* v___x_1029_; lean_object* v___x_1030_; lean_object* v___x_1031_; lean_object* v___x_1033_; 
v___x_1023_ = ((lean_object*)(l___private_Lean_Parser_Extension_0__Lean_Parser_updateBuiltinTokens___closed__0));
v___x_1024_ = l_Lean_privateToUserName(v_declName_1013_);
v___x_1025_ = 1;
v___x_1026_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_1024_, v___x_1025_);
v___x_1027_ = lean_string_append(v___x_1023_, v___x_1026_);
lean_dec_ref(v___x_1026_);
v___x_1028_ = ((lean_object*)(l___private_Lean_Parser_Extension_0__Lean_Parser_updateBuiltinTokens___closed__1));
v___x_1029_ = lean_string_append(v___x_1027_, v___x_1028_);
v___x_1030_ = lean_string_append(v___x_1029_, v_a_1019_);
lean_dec(v_a_1019_);
v___x_1031_ = lean_mk_io_user_error(v___x_1030_);
if (v_isShared_1022_ == 0)
{
lean_ctor_set_tag(v___x_1021_, 1);
lean_ctor_set(v___x_1021_, 0, v___x_1031_);
v___x_1033_ = v___x_1021_;
goto v_reusejp_1032_;
}
else
{
lean_object* v_reuseFailAlloc_1034_; 
v_reuseFailAlloc_1034_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1034_, 0, v___x_1031_);
v___x_1033_ = v_reuseFailAlloc_1034_;
goto v_reusejp_1032_;
}
v_reusejp_1032_:
{
return v___x_1033_;
}
}
}
else
{
lean_object* v_a_1036_; lean_object* v___x_1038_; uint8_t v_isShared_1039_; uint8_t v_isSharedCheck_1045_; 
lean_dec(v_declName_1013_);
v_a_1036_ = lean_ctor_get(v___x_1018_, 0);
v_isSharedCheck_1045_ = !lean_is_exclusive(v___x_1018_);
if (v_isSharedCheck_1045_ == 0)
{
v___x_1038_ = v___x_1018_;
v_isShared_1039_ = v_isSharedCheck_1045_;
goto v_resetjp_1037_;
}
else
{
lean_inc(v_a_1036_);
lean_dec(v___x_1018_);
v___x_1038_ = lean_box(0);
v_isShared_1039_ = v_isSharedCheck_1045_;
goto v_resetjp_1037_;
}
v_resetjp_1037_:
{
lean_object* v___x_1040_; lean_object* v___x_1041_; lean_object* v___x_1043_; 
v___x_1040_ = lean_box(0);
v___x_1041_ = lean_st_ref_swap(v___x_1015_, v_a_1036_);
lean_dec(v___x_1041_);
if (v_isShared_1039_ == 0)
{
lean_ctor_set_tag(v___x_1038_, 0);
lean_ctor_set(v___x_1038_, 0, v___x_1040_);
v___x_1043_ = v___x_1038_;
goto v_reusejp_1042_;
}
else
{
lean_object* v_reuseFailAlloc_1044_; 
v_reuseFailAlloc_1044_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1044_, 0, v___x_1040_);
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
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_updateBuiltinTokens___boxed(lean_object* v_info_1046_, lean_object* v_declName_1047_, lean_object* v_a_1048_){
_start:
{
lean_object* v_res_1049_; 
v_res_1049_ = l___private_Lean_Parser_Extension_0__Lean_Parser_updateBuiltinTokens(v_info_1046_, v_declName_1047_);
return v_res_1049_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Parser_ParserExtension_addEntryImpl_spec__0(lean_object* v_msg_1050_){
_start:
{
lean_object* v___x_1051_; lean_object* v___x_1052_; 
v___x_1051_ = l_Lean_Parser_ParserExtension_instInhabitedState_default;
v___x_1052_ = lean_panic_fn_borrowed(v___x_1051_, v_msg_1050_);
return v___x_1052_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserExtension_addEntryImpl(lean_object* v_s_1056_, lean_object* v_e_1057_){
_start:
{
switch(lean_obj_tag(v_e_1057_))
{
case 0:
{
lean_object* v_val_1058_; lean_object* v_tokens_1059_; lean_object* v_kinds_1060_; lean_object* v_categories_1061_; lean_object* v___x_1063_; uint8_t v_isShared_1064_; uint8_t v_isSharedCheck_1079_; 
v_val_1058_ = lean_ctor_get(v_e_1057_, 0);
lean_inc_ref(v_val_1058_);
lean_dec_ref_known(v_e_1057_, 1);
v_tokens_1059_ = lean_ctor_get(v_s_1056_, 0);
v_kinds_1060_ = lean_ctor_get(v_s_1056_, 1);
v_categories_1061_ = lean_ctor_get(v_s_1056_, 2);
v_isSharedCheck_1079_ = !lean_is_exclusive(v_s_1056_);
if (v_isSharedCheck_1079_ == 0)
{
v___x_1063_ = v_s_1056_;
v_isShared_1064_ = v_isSharedCheck_1079_;
goto v_resetjp_1062_;
}
else
{
lean_inc(v_categories_1061_);
lean_inc(v_kinds_1060_);
lean_inc(v_tokens_1059_);
lean_dec(v_s_1056_);
v___x_1063_ = lean_box(0);
v_isShared_1064_ = v_isSharedCheck_1079_;
goto v_resetjp_1062_;
}
v_resetjp_1062_:
{
lean_object* v___x_1065_; 
v___x_1065_ = l___private_Lean_Parser_Extension_0__Lean_Parser_addTokenConfig(v_tokens_1059_, v_val_1058_);
if (lean_obj_tag(v___x_1065_) == 0)
{
lean_object* v_a_1066_; lean_object* v___x_1067_; lean_object* v___x_1068_; lean_object* v___x_1069_; lean_object* v___x_1070_; lean_object* v___x_1071_; lean_object* v___x_1072_; lean_object* v___x_1073_; lean_object* v___x_1074_; 
lean_del_object(v___x_1063_);
lean_dec_ref(v_categories_1061_);
lean_dec_ref(v_kinds_1060_);
v_a_1066_ = lean_ctor_get(v___x_1065_, 0);
lean_inc(v_a_1066_);
lean_dec_ref_known(v___x_1065_, 1);
v___x_1067_ = ((lean_object*)(l_Lean_Parser_ParserExtension_addEntryImpl___closed__0));
v___x_1068_ = ((lean_object*)(l_Lean_Parser_ParserExtension_addEntryImpl___closed__1));
v___x_1069_ = lean_unsigned_to_nat(166u);
v___x_1070_ = lean_unsigned_to_nat(26u);
v___x_1071_ = ((lean_object*)(l_Lean_Parser_ParserExtension_addEntryImpl___closed__2));
v___x_1072_ = lean_string_append(v___x_1071_, v_a_1066_);
lean_dec(v_a_1066_);
v___x_1073_ = l_mkPanicMessageWithDecl(v___x_1067_, v___x_1068_, v___x_1069_, v___x_1070_, v___x_1072_);
lean_dec_ref(v___x_1072_);
v___x_1074_ = l_panic___at___00Lean_Parser_ParserExtension_addEntryImpl_spec__0(v___x_1073_);
return v___x_1074_;
}
else
{
lean_object* v_a_1075_; lean_object* v___x_1077_; 
v_a_1075_ = lean_ctor_get(v___x_1065_, 0);
lean_inc(v_a_1075_);
lean_dec_ref_known(v___x_1065_, 1);
if (v_isShared_1064_ == 0)
{
lean_ctor_set(v___x_1063_, 0, v_a_1075_);
v___x_1077_ = v___x_1063_;
goto v_reusejp_1076_;
}
else
{
lean_object* v_reuseFailAlloc_1078_; 
v_reuseFailAlloc_1078_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1078_, 0, v_a_1075_);
lean_ctor_set(v_reuseFailAlloc_1078_, 1, v_kinds_1060_);
lean_ctor_set(v_reuseFailAlloc_1078_, 2, v_categories_1061_);
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
case 1:
{
lean_object* v_val_1080_; lean_object* v_tokens_1081_; lean_object* v_kinds_1082_; lean_object* v_categories_1083_; lean_object* v___x_1085_; uint8_t v_isShared_1086_; uint8_t v_isSharedCheck_1091_; 
v_val_1080_ = lean_ctor_get(v_e_1057_, 0);
lean_inc(v_val_1080_);
lean_dec_ref_known(v_e_1057_, 1);
v_tokens_1081_ = lean_ctor_get(v_s_1056_, 0);
v_kinds_1082_ = lean_ctor_get(v_s_1056_, 1);
v_categories_1083_ = lean_ctor_get(v_s_1056_, 2);
v_isSharedCheck_1091_ = !lean_is_exclusive(v_s_1056_);
if (v_isSharedCheck_1091_ == 0)
{
v___x_1085_ = v_s_1056_;
v_isShared_1086_ = v_isSharedCheck_1091_;
goto v_resetjp_1084_;
}
else
{
lean_inc(v_categories_1083_);
lean_inc(v_kinds_1082_);
lean_inc(v_tokens_1081_);
lean_dec(v_s_1056_);
v___x_1085_ = lean_box(0);
v_isShared_1086_ = v_isSharedCheck_1091_;
goto v_resetjp_1084_;
}
v_resetjp_1084_:
{
lean_object* v___x_1087_; lean_object* v___x_1089_; 
v___x_1087_ = l_Lean_Parser_SyntaxNodeKindSet_insert(v_kinds_1082_, v_val_1080_);
if (v_isShared_1086_ == 0)
{
lean_ctor_set(v___x_1085_, 1, v___x_1087_);
v___x_1089_ = v___x_1085_;
goto v_reusejp_1088_;
}
else
{
lean_object* v_reuseFailAlloc_1090_; 
v_reuseFailAlloc_1090_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1090_, 0, v_tokens_1081_);
lean_ctor_set(v_reuseFailAlloc_1090_, 1, v___x_1087_);
lean_ctor_set(v_reuseFailAlloc_1090_, 2, v_categories_1083_);
v___x_1089_ = v_reuseFailAlloc_1090_;
goto v_reusejp_1088_;
}
v_reusejp_1088_:
{
return v___x_1089_;
}
}
}
case 2:
{
lean_object* v_catName_1092_; lean_object* v_declName_1093_; uint8_t v_behavior_1094_; lean_object* v_tokens_1095_; lean_object* v_kinds_1096_; lean_object* v_categories_1097_; uint8_t v___x_1098_; 
v_catName_1092_ = lean_ctor_get(v_e_1057_, 0);
lean_inc(v_catName_1092_);
v_declName_1093_ = lean_ctor_get(v_e_1057_, 1);
lean_inc(v_declName_1093_);
v_behavior_1094_ = lean_ctor_get_uint8(v_e_1057_, sizeof(void*)*2);
lean_dec_ref_known(v_e_1057_, 2);
v_tokens_1095_ = lean_ctor_get(v_s_1056_, 0);
v_kinds_1096_ = lean_ctor_get(v_s_1056_, 1);
v_categories_1097_ = lean_ctor_get(v_s_1056_, 2);
v___x_1098_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_Parser_Extension_0__Lean_Parser_addParserCategoryCore_spec__0___redArg(v_categories_1097_, v_catName_1092_);
if (v___x_1098_ == 0)
{
lean_object* v___x_1100_; uint8_t v_isShared_1101_; uint8_t v_isSharedCheck_1109_; 
lean_inc_ref(v_categories_1097_);
lean_inc_ref(v_kinds_1096_);
lean_inc_ref(v_tokens_1095_);
v_isSharedCheck_1109_ = !lean_is_exclusive(v_s_1056_);
if (v_isSharedCheck_1109_ == 0)
{
lean_object* v_unused_1110_; lean_object* v_unused_1111_; lean_object* v_unused_1112_; 
v_unused_1110_ = lean_ctor_get(v_s_1056_, 2);
lean_dec(v_unused_1110_);
v_unused_1111_ = lean_ctor_get(v_s_1056_, 1);
lean_dec(v_unused_1111_);
v_unused_1112_ = lean_ctor_get(v_s_1056_, 0);
lean_dec(v_unused_1112_);
v___x_1100_ = v_s_1056_;
v_isShared_1101_ = v_isSharedCheck_1109_;
goto v_resetjp_1099_;
}
else
{
lean_dec(v_s_1056_);
v___x_1100_ = lean_box(0);
v_isShared_1101_ = v_isSharedCheck_1109_;
goto v_resetjp_1099_;
}
v_resetjp_1099_:
{
lean_object* v___x_1102_; lean_object* v___x_1103_; lean_object* v___x_1104_; lean_object* v___x_1105_; lean_object* v___x_1107_; 
v___x_1102_ = lean_obj_once(&l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__1_00___x40_Lean_Parser_Extension_848551512____hygCtx___hyg_2_, &l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__1_00___x40_Lean_Parser_Extension_848551512____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__1_00___x40_Lean_Parser_Extension_848551512____hygCtx___hyg_2_);
v___x_1103_ = ((lean_object*)(l___private_Lean_Parser_Extension_0__Lean_Parser_addBuiltinParserCategory___closed__0));
v___x_1104_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_1104_, 0, v_declName_1093_);
lean_ctor_set(v___x_1104_, 1, v___x_1102_);
lean_ctor_set(v___x_1104_, 2, v___x_1103_);
lean_ctor_set_uint8(v___x_1104_, sizeof(void*)*3, v_behavior_1094_);
v___x_1105_ = l_Lean_PersistentHashMap_insert___at___00__private_Lean_Parser_Extension_0__Lean_Parser_addParserCategoryCore_spec__1___redArg(v_categories_1097_, v_catName_1092_, v___x_1104_);
if (v_isShared_1101_ == 0)
{
lean_ctor_set(v___x_1100_, 2, v___x_1105_);
v___x_1107_ = v___x_1100_;
goto v_reusejp_1106_;
}
else
{
lean_object* v_reuseFailAlloc_1108_; 
v_reuseFailAlloc_1108_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1108_, 0, v_tokens_1095_);
lean_ctor_set(v_reuseFailAlloc_1108_, 1, v_kinds_1096_);
lean_ctor_set(v_reuseFailAlloc_1108_, 2, v___x_1105_);
v___x_1107_ = v_reuseFailAlloc_1108_;
goto v_reusejp_1106_;
}
v_reusejp_1106_:
{
return v___x_1107_;
}
}
}
else
{
lean_dec(v_declName_1093_);
lean_dec(v_catName_1092_);
return v_s_1056_;
}
}
default: 
{
lean_object* v_catName_1113_; lean_object* v_declName_1114_; uint8_t v_leading_1115_; lean_object* v_p_1116_; lean_object* v_prio_1117_; lean_object* v_tokens_1118_; lean_object* v_kinds_1119_; lean_object* v_categories_1120_; lean_object* v___x_1122_; uint8_t v_isShared_1123_; uint8_t v_isSharedCheck_1138_; 
v_catName_1113_ = lean_ctor_get(v_e_1057_, 0);
lean_inc(v_catName_1113_);
v_declName_1114_ = lean_ctor_get(v_e_1057_, 1);
lean_inc(v_declName_1114_);
v_leading_1115_ = lean_ctor_get_uint8(v_e_1057_, sizeof(void*)*4);
v_p_1116_ = lean_ctor_get(v_e_1057_, 2);
lean_inc_ref(v_p_1116_);
v_prio_1117_ = lean_ctor_get(v_e_1057_, 3);
lean_inc(v_prio_1117_);
lean_dec_ref_known(v_e_1057_, 4);
v_tokens_1118_ = lean_ctor_get(v_s_1056_, 0);
v_kinds_1119_ = lean_ctor_get(v_s_1056_, 1);
v_categories_1120_ = lean_ctor_get(v_s_1056_, 2);
v_isSharedCheck_1138_ = !lean_is_exclusive(v_s_1056_);
if (v_isSharedCheck_1138_ == 0)
{
v___x_1122_ = v_s_1056_;
v_isShared_1123_ = v_isSharedCheck_1138_;
goto v_resetjp_1121_;
}
else
{
lean_inc(v_categories_1120_);
lean_inc(v_kinds_1119_);
lean_inc(v_tokens_1118_);
lean_dec(v_s_1056_);
v___x_1122_ = lean_box(0);
v_isShared_1123_ = v_isSharedCheck_1138_;
goto v_resetjp_1121_;
}
v_resetjp_1121_:
{
lean_object* v___x_1124_; 
v___x_1124_ = l_Lean_Parser_addParser(v_categories_1120_, v_catName_1113_, v_declName_1114_, v_leading_1115_, v_p_1116_, v_prio_1117_);
if (lean_obj_tag(v___x_1124_) == 0)
{
lean_object* v_a_1125_; lean_object* v___x_1126_; lean_object* v___x_1127_; lean_object* v___x_1128_; lean_object* v___x_1129_; lean_object* v___x_1130_; lean_object* v___x_1131_; lean_object* v___x_1132_; lean_object* v___x_1133_; 
lean_del_object(v___x_1122_);
lean_dec_ref(v_kinds_1119_);
lean_dec_ref(v_tokens_1118_);
v_a_1125_ = lean_ctor_get(v___x_1124_, 0);
lean_inc(v_a_1125_);
lean_dec_ref_known(v___x_1124_, 1);
v___x_1126_ = ((lean_object*)(l_Lean_Parser_ParserExtension_addEntryImpl___closed__0));
v___x_1127_ = ((lean_object*)(l_Lean_Parser_ParserExtension_addEntryImpl___closed__1));
v___x_1128_ = lean_unsigned_to_nat(176u);
v___x_1129_ = lean_unsigned_to_nat(30u);
v___x_1130_ = ((lean_object*)(l_Lean_Parser_ParserExtension_addEntryImpl___closed__2));
v___x_1131_ = lean_string_append(v___x_1130_, v_a_1125_);
lean_dec(v_a_1125_);
v___x_1132_ = l_mkPanicMessageWithDecl(v___x_1126_, v___x_1127_, v___x_1128_, v___x_1129_, v___x_1131_);
lean_dec_ref(v___x_1131_);
v___x_1133_ = l_panic___at___00Lean_Parser_ParserExtension_addEntryImpl_spec__0(v___x_1132_);
return v___x_1133_;
}
else
{
lean_object* v_a_1134_; lean_object* v___x_1136_; 
v_a_1134_ = lean_ctor_get(v___x_1124_, 0);
lean_inc(v_a_1134_);
lean_dec_ref_known(v___x_1124_, 1);
if (v_isShared_1123_ == 0)
{
lean_ctor_set(v___x_1122_, 2, v_a_1134_);
v___x_1136_ = v___x_1122_;
goto v_reusejp_1135_;
}
else
{
lean_object* v_reuseFailAlloc_1137_; 
v_reuseFailAlloc_1137_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1137_, 0, v_tokens_1118_);
lean_ctor_set(v_reuseFailAlloc_1137_, 1, v_kinds_1119_);
lean_ctor_set(v_reuseFailAlloc_1137_, 2, v_a_1134_);
v___x_1136_ = v_reuseFailAlloc_1137_;
goto v_reusejp_1135_;
}
v_reusejp_1135_:
{
return v___x_1136_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_AliasValue_ctorIdx___redArg(lean_object* v_x_1139_){
_start:
{
switch(lean_obj_tag(v_x_1139_))
{
case 0:
{
lean_object* v___x_1140_; 
v___x_1140_ = lean_unsigned_to_nat(0u);
return v___x_1140_;
}
case 1:
{
lean_object* v___x_1141_; 
v___x_1141_ = lean_unsigned_to_nat(1u);
return v___x_1141_;
}
default: 
{
lean_object* v___x_1142_; 
v___x_1142_ = lean_unsigned_to_nat(2u);
return v___x_1142_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_AliasValue_ctorIdx___redArg___boxed(lean_object* v_x_1143_){
_start:
{
lean_object* v_res_1144_; 
v_res_1144_ = l_Lean_Parser_AliasValue_ctorIdx___redArg(v_x_1143_);
lean_dec_ref(v_x_1143_);
return v_res_1144_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_AliasValue_ctorIdx(lean_object* v_00_u03b1_1145_, lean_object* v_x_1146_){
_start:
{
lean_object* v___x_1147_; 
v___x_1147_ = l_Lean_Parser_AliasValue_ctorIdx___redArg(v_x_1146_);
return v___x_1147_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_AliasValue_ctorIdx___boxed(lean_object* v_00_u03b1_1148_, lean_object* v_x_1149_){
_start:
{
lean_object* v_res_1150_; 
v_res_1150_ = l_Lean_Parser_AliasValue_ctorIdx(v_00_u03b1_1148_, v_x_1149_);
lean_dec_ref(v_x_1149_);
return v_res_1150_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_AliasValue_ctorElim___redArg(lean_object* v_t_1151_, lean_object* v_k_1152_){
_start:
{
lean_object* v_p_1153_; lean_object* v___x_1154_; 
v_p_1153_ = lean_ctor_get(v_t_1151_, 0);
lean_inc(v_p_1153_);
lean_dec_ref(v_t_1151_);
v___x_1154_ = lean_apply_1(v_k_1152_, v_p_1153_);
return v___x_1154_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_AliasValue_ctorElim(lean_object* v_00_u03b1_1155_, lean_object* v_motive_1156_, lean_object* v_ctorIdx_1157_, lean_object* v_t_1158_, lean_object* v_h_1159_, lean_object* v_k_1160_){
_start:
{
lean_object* v___x_1161_; 
v___x_1161_ = l_Lean_Parser_AliasValue_ctorElim___redArg(v_t_1158_, v_k_1160_);
return v___x_1161_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_AliasValue_ctorElim___boxed(lean_object* v_00_u03b1_1162_, lean_object* v_motive_1163_, lean_object* v_ctorIdx_1164_, lean_object* v_t_1165_, lean_object* v_h_1166_, lean_object* v_k_1167_){
_start:
{
lean_object* v_res_1168_; 
v_res_1168_ = l_Lean_Parser_AliasValue_ctorElim(v_00_u03b1_1162_, v_motive_1163_, v_ctorIdx_1164_, v_t_1165_, v_h_1166_, v_k_1167_);
lean_dec(v_ctorIdx_1164_);
return v_res_1168_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_AliasValue_const_elim___redArg(lean_object* v_t_1169_, lean_object* v_const_1170_){
_start:
{
lean_object* v___x_1171_; 
v___x_1171_ = l_Lean_Parser_AliasValue_ctorElim___redArg(v_t_1169_, v_const_1170_);
return v___x_1171_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_AliasValue_const_elim(lean_object* v_00_u03b1_1172_, lean_object* v_motive_1173_, lean_object* v_t_1174_, lean_object* v_h_1175_, lean_object* v_const_1176_){
_start:
{
lean_object* v___x_1177_; 
v___x_1177_ = l_Lean_Parser_AliasValue_ctorElim___redArg(v_t_1174_, v_const_1176_);
return v___x_1177_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_AliasValue_unary_elim___redArg(lean_object* v_t_1178_, lean_object* v_unary_1179_){
_start:
{
lean_object* v___x_1180_; 
v___x_1180_ = l_Lean_Parser_AliasValue_ctorElim___redArg(v_t_1178_, v_unary_1179_);
return v___x_1180_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_AliasValue_unary_elim(lean_object* v_00_u03b1_1181_, lean_object* v_motive_1182_, lean_object* v_t_1183_, lean_object* v_h_1184_, lean_object* v_unary_1185_){
_start:
{
lean_object* v___x_1186_; 
v___x_1186_ = l_Lean_Parser_AliasValue_ctorElim___redArg(v_t_1183_, v_unary_1185_);
return v___x_1186_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_AliasValue_binary_elim___redArg(lean_object* v_t_1187_, lean_object* v_binary_1188_){
_start:
{
lean_object* v___x_1189_; 
v___x_1189_ = l_Lean_Parser_AliasValue_ctorElim___redArg(v_t_1187_, v_binary_1188_);
return v___x_1189_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_AliasValue_binary_elim(lean_object* v_00_u03b1_1190_, lean_object* v_motive_1191_, lean_object* v_t_1192_, lean_object* v_h_1193_, lean_object* v_binary_1194_){
_start:
{
lean_object* v___x_1195_; 
v___x_1195_ = l_Lean_Parser_AliasValue_ctorElim___redArg(v_t_1192_, v_binary_1194_);
return v___x_1195_;
}
}
static lean_object* _init_l_Lean_Parser_registerAliasCore___redArg___closed__1(void){
_start:
{
lean_object* v___x_1197_; lean_object* v___x_1198_; 
v___x_1197_ = ((lean_object*)(l_Lean_Parser_registerAliasCore___redArg___closed__0));
v___x_1198_ = lean_mk_io_user_error(v___x_1197_);
return v___x_1198_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_registerAliasCore___redArg(lean_object* v_mapRef_1201_, lean_object* v_aliasName_1202_, lean_object* v_value_1203_){
_start:
{
uint8_t v___x_1205_; 
v___x_1205_ = l_Lean_initializing();
if (v___x_1205_ == 0)
{
lean_object* v___x_1206_; lean_object* v___x_1207_; 
lean_dec_ref(v_value_1203_);
lean_dec(v_aliasName_1202_);
v___x_1206_ = lean_obj_once(&l_Lean_Parser_registerAliasCore___redArg___closed__1, &l_Lean_Parser_registerAliasCore___redArg___closed__1_once, _init_l_Lean_Parser_registerAliasCore___redArg___closed__1);
v___x_1207_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1207_, 0, v___x_1206_);
return v___x_1207_;
}
else
{
lean_object* v___x_1208_; uint8_t v___x_1209_; 
v___x_1208_ = lean_st_ref_get(v_mapRef_1201_);
v___x_1209_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_NameMap_contains_spec__0___redArg(v_aliasName_1202_, v___x_1208_);
lean_dec(v___x_1208_);
if (v___x_1209_ == 0)
{
lean_object* v___x_1210_; lean_object* v___x_1211_; lean_object* v___x_1212_; lean_object* v___x_1213_; 
v___x_1210_ = lean_st_ref_take(v_mapRef_1201_);
v___x_1211_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_aliasName_1202_, v_value_1203_, v___x_1210_);
v___x_1212_ = lean_st_ref_put(v_mapRef_1201_, v___x_1211_);
v___x_1213_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1213_, 0, v___x_1212_);
return v___x_1213_;
}
else
{
lean_object* v___x_1214_; lean_object* v___x_1215_; lean_object* v___x_1216_; lean_object* v___x_1217_; lean_object* v___x_1218_; lean_object* v___x_1219_; lean_object* v___x_1220_; 
lean_dec_ref(v_value_1203_);
v___x_1214_ = ((lean_object*)(l_Lean_Parser_registerAliasCore___redArg___closed__2));
v___x_1215_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_aliasName_1202_, v___x_1209_);
v___x_1216_ = lean_string_append(v___x_1214_, v___x_1215_);
lean_dec_ref(v___x_1215_);
v___x_1217_ = ((lean_object*)(l_Lean_Parser_registerAliasCore___redArg___closed__3));
v___x_1218_ = lean_string_append(v___x_1216_, v___x_1217_);
v___x_1219_ = lean_mk_io_user_error(v___x_1218_);
v___x_1220_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1220_, 0, v___x_1219_);
return v___x_1220_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_registerAliasCore___redArg___boxed(lean_object* v_mapRef_1221_, lean_object* v_aliasName_1222_, lean_object* v_value_1223_, lean_object* v_a_1224_){
_start:
{
lean_object* v_res_1225_; 
v_res_1225_ = l_Lean_Parser_registerAliasCore___redArg(v_mapRef_1221_, v_aliasName_1222_, v_value_1223_);
lean_dec(v_mapRef_1221_);
return v_res_1225_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_registerAliasCore(lean_object* v_00_u03b1_1226_, lean_object* v_mapRef_1227_, lean_object* v_aliasName_1228_, lean_object* v_value_1229_){
_start:
{
lean_object* v___x_1231_; 
v___x_1231_ = l_Lean_Parser_registerAliasCore___redArg(v_mapRef_1227_, v_aliasName_1228_, v_value_1229_);
return v___x_1231_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_registerAliasCore___boxed(lean_object* v_00_u03b1_1232_, lean_object* v_mapRef_1233_, lean_object* v_aliasName_1234_, lean_object* v_value_1235_, lean_object* v_a_1236_){
_start:
{
lean_object* v_res_1237_; 
v_res_1237_ = l_Lean_Parser_registerAliasCore(v_00_u03b1_1232_, v_mapRef_1233_, v_aliasName_1234_, v_value_1235_);
lean_dec(v_mapRef_1233_);
return v_res_1237_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_getAlias___redArg(lean_object* v_mapRef_1238_, lean_object* v_aliasName_1239_){
_start:
{
lean_object* v___x_1241_; lean_object* v___x_1242_; lean_object* v___x_1243_; 
v___x_1241_ = lean_st_ref_get(v_mapRef_1238_);
v___x_1242_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v___x_1241_, v_aliasName_1239_);
lean_dec(v___x_1241_);
v___x_1243_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1243_, 0, v___x_1242_);
return v___x_1243_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_getAlias___redArg___boxed(lean_object* v_mapRef_1244_, lean_object* v_aliasName_1245_, lean_object* v_a_1246_){
_start:
{
lean_object* v_res_1247_; 
v_res_1247_ = l_Lean_Parser_getAlias___redArg(v_mapRef_1244_, v_aliasName_1245_);
lean_dec(v_aliasName_1245_);
lean_dec(v_mapRef_1244_);
return v_res_1247_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_getAlias(lean_object* v_00_u03b1_1248_, lean_object* v_mapRef_1249_, lean_object* v_aliasName_1250_){
_start:
{
lean_object* v___x_1252_; 
v___x_1252_ = l_Lean_Parser_getAlias___redArg(v_mapRef_1249_, v_aliasName_1250_);
return v___x_1252_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_getAlias___boxed(lean_object* v_00_u03b1_1253_, lean_object* v_mapRef_1254_, lean_object* v_aliasName_1255_, lean_object* v_a_1256_){
_start:
{
lean_object* v_res_1257_; 
v_res_1257_ = l_Lean_Parser_getAlias(v_00_u03b1_1253_, v_mapRef_1254_, v_aliasName_1255_);
lean_dec(v_aliasName_1255_);
lean_dec(v_mapRef_1254_);
return v_res_1257_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_getConstAlias___redArg(lean_object* v_mapRef_1262_, lean_object* v_aliasName_1263_){
_start:
{
lean_object* v___x_1265_; lean_object* v_a_1266_; lean_object* v___x_1268_; uint8_t v_isShared_1269_; uint8_t v_isSharedCheck_1305_; 
v___x_1265_ = l_Lean_Parser_getAlias___redArg(v_mapRef_1262_, v_aliasName_1263_);
v_a_1266_ = lean_ctor_get(v___x_1265_, 0);
v_isSharedCheck_1305_ = !lean_is_exclusive(v___x_1265_);
if (v_isSharedCheck_1305_ == 0)
{
v___x_1268_ = v___x_1265_;
v_isShared_1269_ = v_isSharedCheck_1305_;
goto v_resetjp_1267_;
}
else
{
lean_inc(v_a_1266_);
lean_dec(v___x_1265_);
v___x_1268_ = lean_box(0);
v_isShared_1269_ = v_isSharedCheck_1305_;
goto v_resetjp_1267_;
}
v_resetjp_1267_:
{
if (lean_obj_tag(v_a_1266_) == 0)
{
lean_object* v___x_1270_; uint8_t v___x_1271_; lean_object* v___x_1272_; lean_object* v___x_1273_; lean_object* v___x_1274_; lean_object* v___x_1275_; lean_object* v___x_1276_; lean_object* v___x_1278_; 
v___x_1270_ = ((lean_object*)(l_Lean_Parser_getConstAlias___redArg___closed__0));
v___x_1271_ = 1;
v___x_1272_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_aliasName_1263_, v___x_1271_);
v___x_1273_ = lean_string_append(v___x_1270_, v___x_1272_);
lean_dec_ref(v___x_1272_);
v___x_1274_ = ((lean_object*)(l_Lean_Parser_getConstAlias___redArg___closed__1));
v___x_1275_ = lean_string_append(v___x_1273_, v___x_1274_);
v___x_1276_ = lean_mk_io_user_error(v___x_1275_);
if (v_isShared_1269_ == 0)
{
lean_ctor_set_tag(v___x_1268_, 1);
lean_ctor_set(v___x_1268_, 0, v___x_1276_);
v___x_1278_ = v___x_1268_;
goto v_reusejp_1277_;
}
else
{
lean_object* v_reuseFailAlloc_1279_; 
v_reuseFailAlloc_1279_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1279_, 0, v___x_1276_);
v___x_1278_ = v_reuseFailAlloc_1279_;
goto v_reusejp_1277_;
}
v_reusejp_1277_:
{
return v___x_1278_;
}
}
else
{
lean_object* v_val_1280_; 
v_val_1280_ = lean_ctor_get(v_a_1266_, 0);
lean_inc(v_val_1280_);
lean_dec_ref_known(v_a_1266_, 1);
switch(lean_obj_tag(v_val_1280_))
{
case 0:
{
lean_object* v_p_1281_; lean_object* v___x_1283_; 
lean_dec(v_aliasName_1263_);
v_p_1281_ = lean_ctor_get(v_val_1280_, 0);
lean_inc(v_p_1281_);
lean_dec_ref_known(v_val_1280_, 1);
if (v_isShared_1269_ == 0)
{
lean_ctor_set(v___x_1268_, 0, v_p_1281_);
v___x_1283_ = v___x_1268_;
goto v_reusejp_1282_;
}
else
{
lean_object* v_reuseFailAlloc_1284_; 
v_reuseFailAlloc_1284_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1284_, 0, v_p_1281_);
v___x_1283_ = v_reuseFailAlloc_1284_;
goto v_reusejp_1282_;
}
v_reusejp_1282_:
{
return v___x_1283_;
}
}
case 1:
{
lean_object* v___x_1285_; uint8_t v___x_1286_; lean_object* v___x_1287_; lean_object* v___x_1288_; lean_object* v___x_1289_; lean_object* v___x_1290_; lean_object* v___x_1291_; lean_object* v___x_1293_; 
lean_dec_ref_known(v_val_1280_, 1);
v___x_1285_ = ((lean_object*)(l_Lean_Parser_getConstAlias___redArg___closed__0));
v___x_1286_ = 1;
v___x_1287_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_aliasName_1263_, v___x_1286_);
v___x_1288_ = lean_string_append(v___x_1285_, v___x_1287_);
lean_dec_ref(v___x_1287_);
v___x_1289_ = ((lean_object*)(l_Lean_Parser_getConstAlias___redArg___closed__2));
v___x_1290_ = lean_string_append(v___x_1288_, v___x_1289_);
v___x_1291_ = lean_mk_io_user_error(v___x_1290_);
if (v_isShared_1269_ == 0)
{
lean_ctor_set_tag(v___x_1268_, 1);
lean_ctor_set(v___x_1268_, 0, v___x_1291_);
v___x_1293_ = v___x_1268_;
goto v_reusejp_1292_;
}
else
{
lean_object* v_reuseFailAlloc_1294_; 
v_reuseFailAlloc_1294_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1294_, 0, v___x_1291_);
v___x_1293_ = v_reuseFailAlloc_1294_;
goto v_reusejp_1292_;
}
v_reusejp_1292_:
{
return v___x_1293_;
}
}
default: 
{
lean_object* v___x_1295_; uint8_t v___x_1296_; lean_object* v___x_1297_; lean_object* v___x_1298_; lean_object* v___x_1299_; lean_object* v___x_1300_; lean_object* v___x_1301_; lean_object* v___x_1303_; 
lean_dec_ref_known(v_val_1280_, 1);
v___x_1295_ = ((lean_object*)(l_Lean_Parser_getConstAlias___redArg___closed__0));
v___x_1296_ = 1;
v___x_1297_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_aliasName_1263_, v___x_1296_);
v___x_1298_ = lean_string_append(v___x_1295_, v___x_1297_);
lean_dec_ref(v___x_1297_);
v___x_1299_ = ((lean_object*)(l_Lean_Parser_getConstAlias___redArg___closed__3));
v___x_1300_ = lean_string_append(v___x_1298_, v___x_1299_);
v___x_1301_ = lean_mk_io_user_error(v___x_1300_);
if (v_isShared_1269_ == 0)
{
lean_ctor_set_tag(v___x_1268_, 1);
lean_ctor_set(v___x_1268_, 0, v___x_1301_);
v___x_1303_ = v___x_1268_;
goto v_reusejp_1302_;
}
else
{
lean_object* v_reuseFailAlloc_1304_; 
v_reuseFailAlloc_1304_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1304_, 0, v___x_1301_);
v___x_1303_ = v_reuseFailAlloc_1304_;
goto v_reusejp_1302_;
}
v_reusejp_1302_:
{
return v___x_1303_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_getConstAlias___redArg___boxed(lean_object* v_mapRef_1306_, lean_object* v_aliasName_1307_, lean_object* v_a_1308_){
_start:
{
lean_object* v_res_1309_; 
v_res_1309_ = l_Lean_Parser_getConstAlias___redArg(v_mapRef_1306_, v_aliasName_1307_);
lean_dec(v_mapRef_1306_);
return v_res_1309_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_getConstAlias(lean_object* v_00_u03b1_1310_, lean_object* v_mapRef_1311_, lean_object* v_aliasName_1312_){
_start:
{
lean_object* v___x_1314_; 
v___x_1314_ = l_Lean_Parser_getConstAlias___redArg(v_mapRef_1311_, v_aliasName_1312_);
return v___x_1314_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_getConstAlias___boxed(lean_object* v_00_u03b1_1315_, lean_object* v_mapRef_1316_, lean_object* v_aliasName_1317_, lean_object* v_a_1318_){
_start:
{
lean_object* v_res_1319_; 
v_res_1319_ = l_Lean_Parser_getConstAlias(v_00_u03b1_1315_, v_mapRef_1316_, v_aliasName_1317_);
lean_dec(v_mapRef_1316_);
return v_res_1319_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_getUnaryAlias___redArg(lean_object* v_mapRef_1321_, lean_object* v_aliasName_1322_){
_start:
{
lean_object* v___x_1324_; lean_object* v_a_1325_; lean_object* v___x_1327_; uint8_t v_isShared_1328_; uint8_t v_isSharedCheck_1354_; 
v___x_1324_ = l_Lean_Parser_getAlias___redArg(v_mapRef_1321_, v_aliasName_1322_);
v_a_1325_ = lean_ctor_get(v___x_1324_, 0);
v_isSharedCheck_1354_ = !lean_is_exclusive(v___x_1324_);
if (v_isSharedCheck_1354_ == 0)
{
v___x_1327_ = v___x_1324_;
v_isShared_1328_ = v_isSharedCheck_1354_;
goto v_resetjp_1326_;
}
else
{
lean_inc(v_a_1325_);
lean_dec(v___x_1324_);
v___x_1327_ = lean_box(0);
v_isShared_1328_ = v_isSharedCheck_1354_;
goto v_resetjp_1326_;
}
v_resetjp_1326_:
{
if (lean_obj_tag(v_a_1325_) == 0)
{
lean_object* v___x_1329_; uint8_t v___x_1330_; lean_object* v___x_1331_; lean_object* v___x_1332_; lean_object* v___x_1333_; lean_object* v___x_1334_; lean_object* v___x_1335_; lean_object* v___x_1337_; 
v___x_1329_ = ((lean_object*)(l_Lean_Parser_getConstAlias___redArg___closed__0));
v___x_1330_ = 1;
v___x_1331_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_aliasName_1322_, v___x_1330_);
v___x_1332_ = lean_string_append(v___x_1329_, v___x_1331_);
lean_dec_ref(v___x_1331_);
v___x_1333_ = ((lean_object*)(l_Lean_Parser_getConstAlias___redArg___closed__1));
v___x_1334_ = lean_string_append(v___x_1332_, v___x_1333_);
v___x_1335_ = lean_mk_io_user_error(v___x_1334_);
if (v_isShared_1328_ == 0)
{
lean_ctor_set_tag(v___x_1327_, 1);
lean_ctor_set(v___x_1327_, 0, v___x_1335_);
v___x_1337_ = v___x_1327_;
goto v_reusejp_1336_;
}
else
{
lean_object* v_reuseFailAlloc_1338_; 
v_reuseFailAlloc_1338_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1338_, 0, v___x_1335_);
v___x_1337_ = v_reuseFailAlloc_1338_;
goto v_reusejp_1336_;
}
v_reusejp_1336_:
{
return v___x_1337_;
}
}
else
{
lean_object* v_val_1339_; 
v_val_1339_ = lean_ctor_get(v_a_1325_, 0);
lean_inc(v_val_1339_);
lean_dec_ref_known(v_a_1325_, 1);
if (lean_obj_tag(v_val_1339_) == 1)
{
lean_object* v_p_1340_; lean_object* v___x_1342_; 
lean_dec(v_aliasName_1322_);
v_p_1340_ = lean_ctor_get(v_val_1339_, 0);
lean_inc(v_p_1340_);
lean_dec_ref_known(v_val_1339_, 1);
if (v_isShared_1328_ == 0)
{
lean_ctor_set(v___x_1327_, 0, v_p_1340_);
v___x_1342_ = v___x_1327_;
goto v_reusejp_1341_;
}
else
{
lean_object* v_reuseFailAlloc_1343_; 
v_reuseFailAlloc_1343_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1343_, 0, v_p_1340_);
v___x_1342_ = v_reuseFailAlloc_1343_;
goto v_reusejp_1341_;
}
v_reusejp_1341_:
{
return v___x_1342_;
}
}
else
{
lean_object* v___x_1344_; uint8_t v___x_1345_; lean_object* v___x_1346_; lean_object* v___x_1347_; lean_object* v___x_1348_; lean_object* v___x_1349_; lean_object* v___x_1350_; lean_object* v___x_1352_; 
lean_dec(v_val_1339_);
v___x_1344_ = ((lean_object*)(l_Lean_Parser_getConstAlias___redArg___closed__0));
v___x_1345_ = 1;
v___x_1346_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_aliasName_1322_, v___x_1345_);
v___x_1347_ = lean_string_append(v___x_1344_, v___x_1346_);
lean_dec_ref(v___x_1346_);
v___x_1348_ = ((lean_object*)(l_Lean_Parser_getUnaryAlias___redArg___closed__0));
v___x_1349_ = lean_string_append(v___x_1347_, v___x_1348_);
v___x_1350_ = lean_mk_io_user_error(v___x_1349_);
if (v_isShared_1328_ == 0)
{
lean_ctor_set_tag(v___x_1327_, 1);
lean_ctor_set(v___x_1327_, 0, v___x_1350_);
v___x_1352_ = v___x_1327_;
goto v_reusejp_1351_;
}
else
{
lean_object* v_reuseFailAlloc_1353_; 
v_reuseFailAlloc_1353_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1353_, 0, v___x_1350_);
v___x_1352_ = v_reuseFailAlloc_1353_;
goto v_reusejp_1351_;
}
v_reusejp_1351_:
{
return v___x_1352_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_getUnaryAlias___redArg___boxed(lean_object* v_mapRef_1355_, lean_object* v_aliasName_1356_, lean_object* v_a_1357_){
_start:
{
lean_object* v_res_1358_; 
v_res_1358_ = l_Lean_Parser_getUnaryAlias___redArg(v_mapRef_1355_, v_aliasName_1356_);
lean_dec(v_mapRef_1355_);
return v_res_1358_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_getUnaryAlias(lean_object* v_00_u03b1_1359_, lean_object* v_mapRef_1360_, lean_object* v_aliasName_1361_){
_start:
{
lean_object* v___x_1363_; 
v___x_1363_ = l_Lean_Parser_getUnaryAlias___redArg(v_mapRef_1360_, v_aliasName_1361_);
return v___x_1363_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_getUnaryAlias___boxed(lean_object* v_00_u03b1_1364_, lean_object* v_mapRef_1365_, lean_object* v_aliasName_1366_, lean_object* v_a_1367_){
_start:
{
lean_object* v_res_1368_; 
v_res_1368_ = l_Lean_Parser_getUnaryAlias(v_00_u03b1_1364_, v_mapRef_1365_, v_aliasName_1366_);
lean_dec(v_mapRef_1365_);
return v_res_1368_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_getBinaryAlias___redArg(lean_object* v_mapRef_1370_, lean_object* v_aliasName_1371_){
_start:
{
lean_object* v___x_1373_; lean_object* v_a_1374_; lean_object* v___x_1376_; uint8_t v_isShared_1377_; uint8_t v_isSharedCheck_1403_; 
v___x_1373_ = l_Lean_Parser_getAlias___redArg(v_mapRef_1370_, v_aliasName_1371_);
v_a_1374_ = lean_ctor_get(v___x_1373_, 0);
v_isSharedCheck_1403_ = !lean_is_exclusive(v___x_1373_);
if (v_isSharedCheck_1403_ == 0)
{
v___x_1376_ = v___x_1373_;
v_isShared_1377_ = v_isSharedCheck_1403_;
goto v_resetjp_1375_;
}
else
{
lean_inc(v_a_1374_);
lean_dec(v___x_1373_);
v___x_1376_ = lean_box(0);
v_isShared_1377_ = v_isSharedCheck_1403_;
goto v_resetjp_1375_;
}
v_resetjp_1375_:
{
if (lean_obj_tag(v_a_1374_) == 0)
{
lean_object* v___x_1378_; uint8_t v___x_1379_; lean_object* v___x_1380_; lean_object* v___x_1381_; lean_object* v___x_1382_; lean_object* v___x_1383_; lean_object* v___x_1384_; lean_object* v___x_1386_; 
v___x_1378_ = ((lean_object*)(l_Lean_Parser_getConstAlias___redArg___closed__0));
v___x_1379_ = 1;
v___x_1380_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_aliasName_1371_, v___x_1379_);
v___x_1381_ = lean_string_append(v___x_1378_, v___x_1380_);
lean_dec_ref(v___x_1380_);
v___x_1382_ = ((lean_object*)(l_Lean_Parser_getConstAlias___redArg___closed__1));
v___x_1383_ = lean_string_append(v___x_1381_, v___x_1382_);
v___x_1384_ = lean_mk_io_user_error(v___x_1383_);
if (v_isShared_1377_ == 0)
{
lean_ctor_set_tag(v___x_1376_, 1);
lean_ctor_set(v___x_1376_, 0, v___x_1384_);
v___x_1386_ = v___x_1376_;
goto v_reusejp_1385_;
}
else
{
lean_object* v_reuseFailAlloc_1387_; 
v_reuseFailAlloc_1387_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1387_, 0, v___x_1384_);
v___x_1386_ = v_reuseFailAlloc_1387_;
goto v_reusejp_1385_;
}
v_reusejp_1385_:
{
return v___x_1386_;
}
}
else
{
lean_object* v_val_1388_; 
v_val_1388_ = lean_ctor_get(v_a_1374_, 0);
lean_inc(v_val_1388_);
lean_dec_ref_known(v_a_1374_, 1);
if (lean_obj_tag(v_val_1388_) == 2)
{
lean_object* v_p_1389_; lean_object* v___x_1391_; 
lean_dec(v_aliasName_1371_);
v_p_1389_ = lean_ctor_get(v_val_1388_, 0);
lean_inc(v_p_1389_);
lean_dec_ref_known(v_val_1388_, 1);
if (v_isShared_1377_ == 0)
{
lean_ctor_set(v___x_1376_, 0, v_p_1389_);
v___x_1391_ = v___x_1376_;
goto v_reusejp_1390_;
}
else
{
lean_object* v_reuseFailAlloc_1392_; 
v_reuseFailAlloc_1392_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1392_, 0, v_p_1389_);
v___x_1391_ = v_reuseFailAlloc_1392_;
goto v_reusejp_1390_;
}
v_reusejp_1390_:
{
return v___x_1391_;
}
}
else
{
lean_object* v___x_1393_; uint8_t v___x_1394_; lean_object* v___x_1395_; lean_object* v___x_1396_; lean_object* v___x_1397_; lean_object* v___x_1398_; lean_object* v___x_1399_; lean_object* v___x_1401_; 
lean_dec(v_val_1388_);
v___x_1393_ = ((lean_object*)(l_Lean_Parser_getConstAlias___redArg___closed__0));
v___x_1394_ = 1;
v___x_1395_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_aliasName_1371_, v___x_1394_);
v___x_1396_ = lean_string_append(v___x_1393_, v___x_1395_);
lean_dec_ref(v___x_1395_);
v___x_1397_ = ((lean_object*)(l_Lean_Parser_getBinaryAlias___redArg___closed__0));
v___x_1398_ = lean_string_append(v___x_1396_, v___x_1397_);
v___x_1399_ = lean_mk_io_user_error(v___x_1398_);
if (v_isShared_1377_ == 0)
{
lean_ctor_set_tag(v___x_1376_, 1);
lean_ctor_set(v___x_1376_, 0, v___x_1399_);
v___x_1401_ = v___x_1376_;
goto v_reusejp_1400_;
}
else
{
lean_object* v_reuseFailAlloc_1402_; 
v_reuseFailAlloc_1402_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1402_, 0, v___x_1399_);
v___x_1401_ = v_reuseFailAlloc_1402_;
goto v_reusejp_1400_;
}
v_reusejp_1400_:
{
return v___x_1401_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_getBinaryAlias___redArg___boxed(lean_object* v_mapRef_1404_, lean_object* v_aliasName_1405_, lean_object* v_a_1406_){
_start:
{
lean_object* v_res_1407_; 
v_res_1407_ = l_Lean_Parser_getBinaryAlias___redArg(v_mapRef_1404_, v_aliasName_1405_);
lean_dec(v_mapRef_1404_);
return v_res_1407_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_getBinaryAlias(lean_object* v_00_u03b1_1408_, lean_object* v_mapRef_1409_, lean_object* v_aliasName_1410_){
_start:
{
lean_object* v___x_1412_; 
v___x_1412_ = l_Lean_Parser_getBinaryAlias___redArg(v_mapRef_1409_, v_aliasName_1410_);
return v___x_1412_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_getBinaryAlias___boxed(lean_object* v_00_u03b1_1413_, lean_object* v_mapRef_1414_, lean_object* v_aliasName_1415_, lean_object* v_a_1416_){
_start:
{
lean_object* v_res_1417_; 
v_res_1417_ = l_Lean_Parser_getBinaryAlias(v_00_u03b1_1413_, v_mapRef_1414_, v_aliasName_1415_);
lean_dec(v_mapRef_1414_);
return v_res_1417_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn_00___x40_Lean_Parser_Extension_1840072248____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_1419_; lean_object* v___x_1420_; lean_object* v___x_1421_; 
v___x_1419_ = lean_box(1);
v___x_1420_ = lean_st_mk_ref(v___x_1419_);
v___x_1421_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1421_, 0, v___x_1420_);
return v___x_1421_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn_00___x40_Lean_Parser_Extension_1840072248____hygCtx___hyg_2____boxed(lean_object* v_a_1422_){
_start:
{
lean_object* v_res_1423_; 
v_res_1423_ = l___private_Lean_Parser_Extension_0__Lean_Parser_initFn_00___x40_Lean_Parser_Extension_1840072248____hygCtx___hyg_2_();
return v_res_1423_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn_00___x40_Lean_Parser_Extension_1409780179____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_1425_; lean_object* v___x_1426_; lean_object* v___x_1427_; 
v___x_1425_ = lean_box(1);
v___x_1426_ = lean_st_mk_ref(v___x_1425_);
v___x_1427_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1427_, 0, v___x_1426_);
return v___x_1427_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn_00___x40_Lean_Parser_Extension_1409780179____hygCtx___hyg_2____boxed(lean_object* v_a_1428_){
_start:
{
lean_object* v_res_1429_; 
v_res_1429_ = l___private_Lean_Parser_Extension_0__Lean_Parser_initFn_00___x40_Lean_Parser_Extension_1409780179____hygCtx___hyg_2_();
return v_res_1429_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn_00___x40_Lean_Parser_Extension_1856488369____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_1431_; lean_object* v___x_1432_; lean_object* v___x_1433_; 
v___x_1431_ = lean_box(1);
v___x_1432_ = lean_st_mk_ref(v___x_1431_);
v___x_1433_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1433_, 0, v___x_1432_);
return v___x_1433_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn_00___x40_Lean_Parser_Extension_1856488369____hygCtx___hyg_2____boxed(lean_object* v_a_1434_){
_start:
{
lean_object* v_res_1435_; 
v_res_1435_ = l___private_Lean_Parser_Extension_0__Lean_Parser_initFn_00___x40_Lean_Parser_Extension_1856488369____hygCtx___hyg_2_();
return v_res_1435_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_Parser_getParserAliasInfo_spec__0___redArg(lean_object* v_t_1436_, lean_object* v_k_1437_, lean_object* v_fallback_1438_){
_start:
{
if (lean_obj_tag(v_t_1436_) == 0)
{
lean_object* v_k_1439_; lean_object* v_v_1440_; lean_object* v_l_1441_; lean_object* v_r_1442_; uint8_t v___x_1443_; 
v_k_1439_ = lean_ctor_get(v_t_1436_, 1);
v_v_1440_ = lean_ctor_get(v_t_1436_, 2);
v_l_1441_ = lean_ctor_get(v_t_1436_, 3);
v_r_1442_ = lean_ctor_get(v_t_1436_, 4);
v___x_1443_ = l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(v_k_1437_, v_k_1439_);
switch(v___x_1443_)
{
case 0:
{
v_t_1436_ = v_l_1441_;
goto _start;
}
case 1:
{
lean_inc(v_v_1440_);
return v_v_1440_;
}
default: 
{
v_t_1436_ = v_r_1442_;
goto _start;
}
}
}
else
{
lean_inc(v_fallback_1438_);
return v_fallback_1438_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_Parser_getParserAliasInfo_spec__0___redArg___boxed(lean_object* v_t_1446_, lean_object* v_k_1447_, lean_object* v_fallback_1448_){
_start:
{
lean_object* v_res_1449_; 
v_res_1449_ = l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_Parser_getParserAliasInfo_spec__0___redArg(v_t_1446_, v_k_1447_, v_fallback_1448_);
lean_dec(v_fallback_1448_);
lean_dec(v_k_1447_);
lean_dec(v_t_1446_);
return v_res_1449_;
}
}
static lean_object* _init_l_Lean_Parser_getParserAliasInfo___closed__1(void){
_start:
{
uint8_t v___x_1452_; lean_object* v___x_1453_; lean_object* v___x_1454_; lean_object* v___x_1455_; 
v___x_1452_ = 1;
v___x_1453_ = ((lean_object*)(l_Lean_Parser_getParserAliasInfo___closed__0));
v___x_1454_ = lean_obj_once(&l_List_mapTR_loop___at___00Lean_Parser_addLeadingParser_spec__1___closed__0, &l_List_mapTR_loop___at___00Lean_Parser_addLeadingParser_spec__1___closed__0_once, _init_l_List_mapTR_loop___at___00Lean_Parser_addLeadingParser_spec__1___closed__0);
v___x_1455_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1455_, 0, v___x_1454_);
lean_ctor_set(v___x_1455_, 1, v___x_1453_);
lean_ctor_set_uint8(v___x_1455_, sizeof(void*)*2, v___x_1452_);
return v___x_1455_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_getParserAliasInfo(lean_object* v_aliasName_1456_){
_start:
{
lean_object* v___x_1458_; lean_object* v___x_1459_; lean_object* v___x_1460_; lean_object* v___x_1461_; lean_object* v___x_1462_; 
v___x_1458_ = l_Lean_Parser_parserAliases2infoRef;
v___x_1459_ = lean_st_ref_get(v___x_1458_);
v___x_1460_ = lean_obj_once(&l_Lean_Parser_getParserAliasInfo___closed__1, &l_Lean_Parser_getParserAliasInfo___closed__1_once, _init_l_Lean_Parser_getParserAliasInfo___closed__1);
v___x_1461_ = l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_Parser_getParserAliasInfo_spec__0___redArg(v___x_1459_, v_aliasName_1456_, v___x_1460_);
lean_dec(v___x_1459_);
v___x_1462_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1462_, 0, v___x_1461_);
return v___x_1462_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_getParserAliasInfo___boxed(lean_object* v_aliasName_1463_, lean_object* v_a_1464_){
_start:
{
lean_object* v_res_1465_; 
v_res_1465_ = l_Lean_Parser_getParserAliasInfo(v_aliasName_1463_);
lean_dec(v_aliasName_1463_);
return v_res_1465_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_Parser_getParserAliasInfo_spec__0(lean_object* v_00_u03b4_1466_, lean_object* v_t_1467_, lean_object* v_k_1468_, lean_object* v_fallback_1469_){
_start:
{
lean_object* v___x_1470_; 
v___x_1470_ = l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_Parser_getParserAliasInfo_spec__0___redArg(v_t_1467_, v_k_1468_, v_fallback_1469_);
return v___x_1470_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_Parser_getParserAliasInfo_spec__0___boxed(lean_object* v_00_u03b4_1471_, lean_object* v_t_1472_, lean_object* v_k_1473_, lean_object* v_fallback_1474_){
_start:
{
lean_object* v_res_1475_; 
v_res_1475_ = l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_Parser_getParserAliasInfo_spec__0(v_00_u03b4_1471_, v_t_1472_, v_k_1473_, v_fallback_1474_);
lean_dec(v_fallback_1474_);
lean_dec(v_k_1473_);
lean_dec(v_t_1472_);
return v_res_1475_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_registerAlias(lean_object* v_aliasName_1476_, lean_object* v_declName_1477_, lean_object* v_p_1478_, lean_object* v_kind_x3f_1479_, lean_object* v_info_1480_){
_start:
{
lean_object* v___x_1498_; lean_object* v___x_1499_; 
v___x_1498_ = l_Lean_Parser_parserAliasesRef;
lean_inc(v_aliasName_1476_);
v___x_1499_ = l_Lean_Parser_registerAliasCore___redArg(v___x_1498_, v_aliasName_1476_, v_p_1478_);
if (lean_obj_tag(v___x_1499_) == 0)
{
lean_dec_ref_known(v___x_1499_, 1);
if (lean_obj_tag(v_kind_x3f_1479_) == 1)
{
lean_object* v_val_1500_; lean_object* v___x_1501_; lean_object* v___x_1502_; lean_object* v___x_1503_; lean_object* v___x_1504_; 
v_val_1500_ = lean_ctor_get(v_kind_x3f_1479_, 0);
lean_inc(v_val_1500_);
lean_dec_ref_known(v_kind_x3f_1479_, 1);
v___x_1501_ = l_Lean_Parser_parserAlias2kindRef;
v___x_1502_ = lean_st_ref_take(v___x_1501_);
lean_inc(v_aliasName_1476_);
v___x_1503_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_aliasName_1476_, v_val_1500_, v___x_1502_);
v___x_1504_ = lean_st_ref_put(v___x_1501_, v___x_1503_);
goto v___jp_1482_;
}
else
{
lean_dec(v_kind_x3f_1479_);
goto v___jp_1482_;
}
}
else
{
lean_dec_ref(v_info_1480_);
lean_dec(v_kind_x3f_1479_);
lean_dec(v_declName_1477_);
lean_dec(v_aliasName_1476_);
return v___x_1499_;
}
v___jp_1482_:
{
lean_object* v___x_1483_; lean_object* v___x_1484_; lean_object* v_stackSz_x3f_1485_; uint8_t v_autoGroupArgs_1486_; lean_object* v___x_1488_; uint8_t v_isShared_1489_; uint8_t v_isSharedCheck_1496_; 
v___x_1483_ = l_Lean_Parser_parserAliases2infoRef;
v___x_1484_ = lean_st_ref_take(v___x_1483_);
v_stackSz_x3f_1485_ = lean_ctor_get(v_info_1480_, 1);
v_autoGroupArgs_1486_ = lean_ctor_get_uint8(v_info_1480_, sizeof(void*)*2);
v_isSharedCheck_1496_ = !lean_is_exclusive(v_info_1480_);
if (v_isSharedCheck_1496_ == 0)
{
lean_object* v_unused_1497_; 
v_unused_1497_ = lean_ctor_get(v_info_1480_, 0);
lean_dec(v_unused_1497_);
v___x_1488_ = v_info_1480_;
v_isShared_1489_ = v_isSharedCheck_1496_;
goto v_resetjp_1487_;
}
else
{
lean_inc(v_stackSz_x3f_1485_);
lean_dec(v_info_1480_);
v___x_1488_ = lean_box(0);
v_isShared_1489_ = v_isSharedCheck_1496_;
goto v_resetjp_1487_;
}
v_resetjp_1487_:
{
lean_object* v___x_1491_; 
if (v_isShared_1489_ == 0)
{
lean_ctor_set(v___x_1488_, 0, v_declName_1477_);
v___x_1491_ = v___x_1488_;
goto v_reusejp_1490_;
}
else
{
lean_object* v_reuseFailAlloc_1495_; 
v_reuseFailAlloc_1495_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v_reuseFailAlloc_1495_, 0, v_declName_1477_);
lean_ctor_set(v_reuseFailAlloc_1495_, 1, v_stackSz_x3f_1485_);
lean_ctor_set_uint8(v_reuseFailAlloc_1495_, sizeof(void*)*2, v_autoGroupArgs_1486_);
v___x_1491_ = v_reuseFailAlloc_1495_;
goto v_reusejp_1490_;
}
v_reusejp_1490_:
{
lean_object* v___x_1492_; lean_object* v___x_1493_; lean_object* v___x_1494_; 
v___x_1492_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_aliasName_1476_, v___x_1491_, v___x_1484_);
v___x_1493_ = lean_st_ref_put(v___x_1483_, v___x_1492_);
v___x_1494_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1494_, 0, v___x_1493_);
return v___x_1494_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_registerAlias___boxed(lean_object* v_aliasName_1505_, lean_object* v_declName_1506_, lean_object* v_p_1507_, lean_object* v_kind_x3f_1508_, lean_object* v_info_1509_, lean_object* v_a_1510_){
_start:
{
lean_object* v_res_1511_; 
v_res_1511_ = l_Lean_Parser_registerAlias(v_aliasName_1505_, v_declName_1506_, v_p_1507_, v_kind_x3f_1508_, v_info_1509_);
return v_res_1511_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_instCoeParserParserAliasValue___lam__0(lean_object* v_p_1512_){
_start:
{
lean_object* v___x_1513_; 
v___x_1513_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1513_, 0, v_p_1512_);
return v___x_1513_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_instCoeForallParserParserAliasValue___lam__0(lean_object* v_p_1516_){
_start:
{
lean_object* v___x_1517_; 
v___x_1517_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1517_, 0, v_p_1516_);
return v___x_1517_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_instCoeForallParserForallParserAliasValue___lam__0(lean_object* v_p_1520_){
_start:
{
lean_object* v___x_1521_; 
v___x_1521_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_1521_, 0, v_p_1520_);
return v___x_1521_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_isParserAlias(lean_object* v_aliasName_1524_){
_start:
{
lean_object* v___x_1526_; lean_object* v___x_1527_; lean_object* v_a_1528_; lean_object* v___x_1530_; uint8_t v_isShared_1531_; uint8_t v_isSharedCheck_1542_; 
v___x_1526_ = l_Lean_Parser_parserAliasesRef;
v___x_1527_ = l_Lean_Parser_getAlias___redArg(v___x_1526_, v_aliasName_1524_);
v_a_1528_ = lean_ctor_get(v___x_1527_, 0);
v_isSharedCheck_1542_ = !lean_is_exclusive(v___x_1527_);
if (v_isSharedCheck_1542_ == 0)
{
v___x_1530_ = v___x_1527_;
v_isShared_1531_ = v_isSharedCheck_1542_;
goto v_resetjp_1529_;
}
else
{
lean_inc(v_a_1528_);
lean_dec(v___x_1527_);
v___x_1530_ = lean_box(0);
v_isShared_1531_ = v_isSharedCheck_1542_;
goto v_resetjp_1529_;
}
v_resetjp_1529_:
{
if (lean_obj_tag(v_a_1528_) == 1)
{
uint8_t v___x_1532_; lean_object* v___x_1533_; lean_object* v___x_1535_; 
lean_dec_ref_known(v_a_1528_, 1);
v___x_1532_ = 1;
v___x_1533_ = lean_box(v___x_1532_);
if (v_isShared_1531_ == 0)
{
lean_ctor_set(v___x_1530_, 0, v___x_1533_);
v___x_1535_ = v___x_1530_;
goto v_reusejp_1534_;
}
else
{
lean_object* v_reuseFailAlloc_1536_; 
v_reuseFailAlloc_1536_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1536_, 0, v___x_1533_);
v___x_1535_ = v_reuseFailAlloc_1536_;
goto v_reusejp_1534_;
}
v_reusejp_1534_:
{
return v___x_1535_;
}
}
else
{
uint8_t v___x_1537_; lean_object* v___x_1538_; lean_object* v___x_1540_; 
lean_dec(v_a_1528_);
v___x_1537_ = 0;
v___x_1538_ = lean_box(v___x_1537_);
if (v_isShared_1531_ == 0)
{
lean_ctor_set(v___x_1530_, 0, v___x_1538_);
v___x_1540_ = v___x_1530_;
goto v_reusejp_1539_;
}
else
{
lean_object* v_reuseFailAlloc_1541_; 
v_reuseFailAlloc_1541_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1541_, 0, v___x_1538_);
v___x_1540_ = v_reuseFailAlloc_1541_;
goto v_reusejp_1539_;
}
v_reusejp_1539_:
{
return v___x_1540_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_isParserAlias___boxed(lean_object* v_aliasName_1543_, lean_object* v_a_1544_){
_start:
{
lean_object* v_res_1545_; 
v_res_1545_ = l_Lean_Parser_isParserAlias(v_aliasName_1543_);
lean_dec(v_aliasName_1543_);
return v_res_1545_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_getSyntaxKindOfParserAlias_x3f(lean_object* v_aliasName_1546_){
_start:
{
lean_object* v___x_1548_; lean_object* v___x_1549_; lean_object* v___x_1550_; lean_object* v___x_1551_; 
v___x_1548_ = l_Lean_Parser_parserAlias2kindRef;
v___x_1549_ = lean_st_ref_get(v___x_1548_);
v___x_1550_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v___x_1549_, v_aliasName_1546_);
lean_dec(v___x_1549_);
v___x_1551_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1551_, 0, v___x_1550_);
return v___x_1551_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_getSyntaxKindOfParserAlias_x3f___boxed(lean_object* v_aliasName_1552_, lean_object* v_a_1553_){
_start:
{
lean_object* v_res_1554_; 
v_res_1554_ = l_Lean_Parser_getSyntaxKindOfParserAlias_x3f(v_aliasName_1552_);
lean_dec(v_aliasName_1552_);
return v_res_1554_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ensureUnaryParserAlias(lean_object* v_aliasName_1555_){
_start:
{
lean_object* v___x_1557_; lean_object* v___x_1558_; lean_object* v___x_1559_; 
v___x_1557_ = l_Lean_Parser_parserAliasesRef;
v___x_1558_ = lean_box(0);
v___x_1559_ = l_Lean_Parser_getUnaryAlias___redArg(v___x_1557_, v_aliasName_1555_);
if (lean_obj_tag(v___x_1559_) == 0)
{
lean_object* v___x_1561_; uint8_t v_isShared_1562_; uint8_t v_isSharedCheck_1566_; 
v_isSharedCheck_1566_ = !lean_is_exclusive(v___x_1559_);
if (v_isSharedCheck_1566_ == 0)
{
lean_object* v_unused_1567_; 
v_unused_1567_ = lean_ctor_get(v___x_1559_, 0);
lean_dec(v_unused_1567_);
v___x_1561_ = v___x_1559_;
v_isShared_1562_ = v_isSharedCheck_1566_;
goto v_resetjp_1560_;
}
else
{
lean_dec(v___x_1559_);
v___x_1561_ = lean_box(0);
v_isShared_1562_ = v_isSharedCheck_1566_;
goto v_resetjp_1560_;
}
v_resetjp_1560_:
{
lean_object* v___x_1564_; 
if (v_isShared_1562_ == 0)
{
lean_ctor_set(v___x_1561_, 0, v___x_1558_);
v___x_1564_ = v___x_1561_;
goto v_reusejp_1563_;
}
else
{
lean_object* v_reuseFailAlloc_1565_; 
v_reuseFailAlloc_1565_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1565_, 0, v___x_1558_);
v___x_1564_ = v_reuseFailAlloc_1565_;
goto v_reusejp_1563_;
}
v_reusejp_1563_:
{
return v___x_1564_;
}
}
}
else
{
lean_object* v_a_1568_; lean_object* v___x_1570_; uint8_t v_isShared_1571_; uint8_t v_isSharedCheck_1575_; 
v_a_1568_ = lean_ctor_get(v___x_1559_, 0);
v_isSharedCheck_1575_ = !lean_is_exclusive(v___x_1559_);
if (v_isSharedCheck_1575_ == 0)
{
v___x_1570_ = v___x_1559_;
v_isShared_1571_ = v_isSharedCheck_1575_;
goto v_resetjp_1569_;
}
else
{
lean_inc(v_a_1568_);
lean_dec(v___x_1559_);
v___x_1570_ = lean_box(0);
v_isShared_1571_ = v_isSharedCheck_1575_;
goto v_resetjp_1569_;
}
v_resetjp_1569_:
{
lean_object* v___x_1573_; 
if (v_isShared_1571_ == 0)
{
v___x_1573_ = v___x_1570_;
goto v_reusejp_1572_;
}
else
{
lean_object* v_reuseFailAlloc_1574_; 
v_reuseFailAlloc_1574_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1574_, 0, v_a_1568_);
v___x_1573_ = v_reuseFailAlloc_1574_;
goto v_reusejp_1572_;
}
v_reusejp_1572_:
{
return v___x_1573_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ensureUnaryParserAlias___boxed(lean_object* v_aliasName_1576_, lean_object* v_a_1577_){
_start:
{
lean_object* v_res_1578_; 
v_res_1578_ = l_Lean_Parser_ensureUnaryParserAlias(v_aliasName_1576_);
return v_res_1578_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ensureBinaryParserAlias(lean_object* v_aliasName_1579_){
_start:
{
lean_object* v___x_1581_; lean_object* v___x_1582_; lean_object* v___x_1583_; 
v___x_1581_ = l_Lean_Parser_parserAliasesRef;
v___x_1582_ = lean_box(0);
v___x_1583_ = l_Lean_Parser_getBinaryAlias___redArg(v___x_1581_, v_aliasName_1579_);
if (lean_obj_tag(v___x_1583_) == 0)
{
lean_object* v___x_1585_; uint8_t v_isShared_1586_; uint8_t v_isSharedCheck_1590_; 
v_isSharedCheck_1590_ = !lean_is_exclusive(v___x_1583_);
if (v_isSharedCheck_1590_ == 0)
{
lean_object* v_unused_1591_; 
v_unused_1591_ = lean_ctor_get(v___x_1583_, 0);
lean_dec(v_unused_1591_);
v___x_1585_ = v___x_1583_;
v_isShared_1586_ = v_isSharedCheck_1590_;
goto v_resetjp_1584_;
}
else
{
lean_dec(v___x_1583_);
v___x_1585_ = lean_box(0);
v_isShared_1586_ = v_isSharedCheck_1590_;
goto v_resetjp_1584_;
}
v_resetjp_1584_:
{
lean_object* v___x_1588_; 
if (v_isShared_1586_ == 0)
{
lean_ctor_set(v___x_1585_, 0, v___x_1582_);
v___x_1588_ = v___x_1585_;
goto v_reusejp_1587_;
}
else
{
lean_object* v_reuseFailAlloc_1589_; 
v_reuseFailAlloc_1589_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1589_, 0, v___x_1582_);
v___x_1588_ = v_reuseFailAlloc_1589_;
goto v_reusejp_1587_;
}
v_reusejp_1587_:
{
return v___x_1588_;
}
}
}
else
{
lean_object* v_a_1592_; lean_object* v___x_1594_; uint8_t v_isShared_1595_; uint8_t v_isSharedCheck_1599_; 
v_a_1592_ = lean_ctor_get(v___x_1583_, 0);
v_isSharedCheck_1599_ = !lean_is_exclusive(v___x_1583_);
if (v_isSharedCheck_1599_ == 0)
{
v___x_1594_ = v___x_1583_;
v_isShared_1595_ = v_isSharedCheck_1599_;
goto v_resetjp_1593_;
}
else
{
lean_inc(v_a_1592_);
lean_dec(v___x_1583_);
v___x_1594_ = lean_box(0);
v_isShared_1595_ = v_isSharedCheck_1599_;
goto v_resetjp_1593_;
}
v_resetjp_1593_:
{
lean_object* v___x_1597_; 
if (v_isShared_1595_ == 0)
{
v___x_1597_ = v___x_1594_;
goto v_reusejp_1596_;
}
else
{
lean_object* v_reuseFailAlloc_1598_; 
v_reuseFailAlloc_1598_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1598_, 0, v_a_1592_);
v___x_1597_ = v_reuseFailAlloc_1598_;
goto v_reusejp_1596_;
}
v_reusejp_1596_:
{
return v___x_1597_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ensureBinaryParserAlias___boxed(lean_object* v_aliasName_1600_, lean_object* v_a_1601_){
_start:
{
lean_object* v_res_1602_; 
v_res_1602_ = l_Lean_Parser_ensureBinaryParserAlias(v_aliasName_1600_);
return v_res_1602_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ensureConstantParserAlias(lean_object* v_aliasName_1603_){
_start:
{
lean_object* v___x_1605_; lean_object* v___x_1606_; lean_object* v___x_1607_; 
v___x_1605_ = l_Lean_Parser_parserAliasesRef;
v___x_1606_ = lean_box(0);
v___x_1607_ = l_Lean_Parser_getConstAlias___redArg(v___x_1605_, v_aliasName_1603_);
if (lean_obj_tag(v___x_1607_) == 0)
{
lean_object* v___x_1609_; uint8_t v_isShared_1610_; uint8_t v_isSharedCheck_1614_; 
v_isSharedCheck_1614_ = !lean_is_exclusive(v___x_1607_);
if (v_isSharedCheck_1614_ == 0)
{
lean_object* v_unused_1615_; 
v_unused_1615_ = lean_ctor_get(v___x_1607_, 0);
lean_dec(v_unused_1615_);
v___x_1609_ = v___x_1607_;
v_isShared_1610_ = v_isSharedCheck_1614_;
goto v_resetjp_1608_;
}
else
{
lean_dec(v___x_1607_);
v___x_1609_ = lean_box(0);
v_isShared_1610_ = v_isSharedCheck_1614_;
goto v_resetjp_1608_;
}
v_resetjp_1608_:
{
lean_object* v___x_1612_; 
if (v_isShared_1610_ == 0)
{
lean_ctor_set(v___x_1609_, 0, v___x_1606_);
v___x_1612_ = v___x_1609_;
goto v_reusejp_1611_;
}
else
{
lean_object* v_reuseFailAlloc_1613_; 
v_reuseFailAlloc_1613_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1613_, 0, v___x_1606_);
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
lean_object* v_a_1616_; lean_object* v___x_1618_; uint8_t v_isShared_1619_; uint8_t v_isSharedCheck_1623_; 
v_a_1616_ = lean_ctor_get(v___x_1607_, 0);
v_isSharedCheck_1623_ = !lean_is_exclusive(v___x_1607_);
if (v_isSharedCheck_1623_ == 0)
{
v___x_1618_ = v___x_1607_;
v_isShared_1619_ = v_isSharedCheck_1623_;
goto v_resetjp_1617_;
}
else
{
lean_inc(v_a_1616_);
lean_dec(v___x_1607_);
v___x_1618_ = lean_box(0);
v_isShared_1619_ = v_isSharedCheck_1623_;
goto v_resetjp_1617_;
}
v_resetjp_1617_:
{
lean_object* v___x_1621_; 
if (v_isShared_1619_ == 0)
{
v___x_1621_ = v___x_1618_;
goto v_reusejp_1620_;
}
else
{
lean_object* v_reuseFailAlloc_1622_; 
v_reuseFailAlloc_1622_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1622_, 0, v_a_1616_);
v___x_1621_ = v_reuseFailAlloc_1622_;
goto v_reusejp_1620_;
}
v_reusejp_1620_:
{
return v___x_1621_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ensureConstantParserAlias___boxed(lean_object* v_aliasName_1624_, lean_object* v_a_1625_){
_start:
{
lean_object* v_res_1626_; 
v_res_1626_ = l_Lean_Parser_ensureConstantParserAlias(v_aliasName_1624_);
return v_res_1626_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_mkParserOfConstantUnsafe(lean_object* v_constName_1635_, lean_object* v_compileParserDescr_1636_, lean_object* v_a_1637_){
_start:
{
lean_object* v_env_1648_; lean_object* v_opts_1649_; uint8_t v___x_1650_; lean_object* v___x_1651_; 
v_env_1648_ = lean_ctor_get(v_a_1637_, 0);
v_opts_1649_ = lean_ctor_get(v_a_1637_, 1);
v___x_1650_ = 0;
lean_inc(v_constName_1635_);
lean_inc_ref(v_env_1648_);
v___x_1651_ = l_Lean_Environment_find_x3f(v_env_1648_, v_constName_1635_, v___x_1650_);
if (lean_obj_tag(v___x_1651_) == 0)
{
lean_object* v___x_1652_; uint8_t v___x_1653_; lean_object* v___x_1654_; lean_object* v___x_1655_; lean_object* v___x_1656_; lean_object* v___x_1657_; lean_object* v___x_1658_; lean_object* v___x_1659_; 
lean_dec_ref(v_compileParserDescr_1636_);
v___x_1652_ = ((lean_object*)(l_Lean_Parser_mkParserOfConstantUnsafe___closed__2));
v___x_1653_ = 1;
v___x_1654_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_constName_1635_, v___x_1653_);
v___x_1655_ = lean_string_append(v___x_1652_, v___x_1654_);
lean_dec_ref(v___x_1654_);
v___x_1656_ = ((lean_object*)(l_Lean_Parser_throwUnknownParserCategory___redArg___closed__1));
v___x_1657_ = lean_string_append(v___x_1655_, v___x_1656_);
v___x_1658_ = lean_mk_io_user_error(v___x_1657_);
v___x_1659_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1659_, 0, v___x_1658_);
return v___x_1659_;
}
else
{
lean_object* v_val_1660_; lean_object* v___x_1661_; 
v_val_1660_ = lean_ctor_get(v___x_1651_, 0);
lean_inc(v_val_1660_);
lean_dec_ref_known(v___x_1651_, 1);
v___x_1661_ = l_Lean_ConstantInfo_type(v_val_1660_);
lean_dec(v_val_1660_);
if (lean_obj_tag(v___x_1661_) == 4)
{
lean_object* v_declName_1662_; 
v_declName_1662_ = lean_ctor_get(v___x_1661_, 0);
lean_inc(v_declName_1662_);
lean_dec_ref_known(v___x_1661_, 2);
if (lean_obj_tag(v_declName_1662_) == 1)
{
lean_object* v_pre_1663_; 
v_pre_1663_ = lean_ctor_get(v_declName_1662_, 0);
lean_inc(v_pre_1663_);
if (lean_obj_tag(v_pre_1663_) == 1)
{
lean_object* v_pre_1664_; 
v_pre_1664_ = lean_ctor_get(v_pre_1663_, 0);
switch(lean_obj_tag(v_pre_1664_))
{
case 1:
{
lean_object* v_pre_1665_; 
lean_inc_ref(v_pre_1664_);
lean_dec_ref(v_compileParserDescr_1636_);
v_pre_1665_ = lean_ctor_get(v_pre_1664_, 0);
if (lean_obj_tag(v_pre_1665_) == 0)
{
lean_object* v_str_1666_; lean_object* v_str_1667_; lean_object* v_str_1668_; lean_object* v___x_1669_; uint8_t v___x_1670_; 
v_str_1666_ = lean_ctor_get(v_declName_1662_, 1);
lean_inc_ref(v_str_1666_);
lean_dec_ref_known(v_declName_1662_, 2);
v_str_1667_ = lean_ctor_get(v_pre_1663_, 1);
lean_inc_ref(v_str_1667_);
lean_dec_ref_known(v_pre_1663_, 2);
v_str_1668_ = lean_ctor_get(v_pre_1664_, 1);
lean_inc_ref(v_str_1668_);
lean_dec_ref_known(v_pre_1664_, 2);
v___x_1669_ = ((lean_object*)(l_Lean_Parser_mkParserOfConstantUnsafe___closed__3));
v___x_1670_ = lean_string_dec_eq(v_str_1668_, v___x_1669_);
lean_dec_ref(v_str_1668_);
if (v___x_1670_ == 0)
{
lean_dec_ref(v_str_1667_);
lean_dec_ref(v_str_1666_);
goto v___jp_1639_;
}
else
{
lean_object* v___x_1671_; uint8_t v___x_1672_; 
v___x_1671_ = ((lean_object*)(l_Lean_Parser_mkParserOfConstantUnsafe___closed__4));
v___x_1672_ = lean_string_dec_eq(v_str_1667_, v___x_1671_);
lean_dec_ref(v_str_1667_);
if (v___x_1672_ == 0)
{
lean_dec_ref(v_str_1666_);
goto v___jp_1639_;
}
else
{
lean_object* v___x_1673_; uint8_t v___x_1674_; 
v___x_1673_ = ((lean_object*)(l_Lean_Parser_mkParserOfConstantUnsafe___closed__5));
v___x_1674_ = lean_string_dec_eq(v_str_1666_, v___x_1673_);
if (v___x_1674_ == 0)
{
uint8_t v___x_1675_; 
v___x_1675_ = lean_string_dec_eq(v_str_1666_, v___x_1671_);
lean_dec_ref(v_str_1666_);
if (v___x_1675_ == 0)
{
goto v___jp_1639_;
}
else
{
lean_object* v___x_1676_; lean_object* v___x_1677_; 
v___x_1676_ = l_Lean_Environment_evalConst___redArg(v_env_1648_, v_opts_1649_, v_constName_1635_, v___x_1675_);
lean_dec(v_constName_1635_);
v___x_1677_ = l_IO_ofExcept___at___00__private_Lean_Parser_Extension_0__Lean_Parser_addBuiltinParserCategory_spec__0___redArg(v___x_1676_);
if (lean_obj_tag(v___x_1677_) == 0)
{
lean_object* v_a_1678_; lean_object* v___x_1680_; uint8_t v_isShared_1681_; uint8_t v_isSharedCheck_1687_; 
v_a_1678_ = lean_ctor_get(v___x_1677_, 0);
v_isSharedCheck_1687_ = !lean_is_exclusive(v___x_1677_);
if (v_isSharedCheck_1687_ == 0)
{
v___x_1680_ = v___x_1677_;
v_isShared_1681_ = v_isSharedCheck_1687_;
goto v_resetjp_1679_;
}
else
{
lean_inc(v_a_1678_);
lean_dec(v___x_1677_);
v___x_1680_ = lean_box(0);
v_isShared_1681_ = v_isSharedCheck_1687_;
goto v_resetjp_1679_;
}
v_resetjp_1679_:
{
lean_object* v___x_1682_; lean_object* v___x_1683_; lean_object* v___x_1685_; 
v___x_1682_ = lean_box(v___x_1675_);
v___x_1683_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1683_, 0, v___x_1682_);
lean_ctor_set(v___x_1683_, 1, v_a_1678_);
if (v_isShared_1681_ == 0)
{
lean_ctor_set(v___x_1680_, 0, v___x_1683_);
v___x_1685_ = v___x_1680_;
goto v_reusejp_1684_;
}
else
{
lean_object* v_reuseFailAlloc_1686_; 
v_reuseFailAlloc_1686_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1686_, 0, v___x_1683_);
v___x_1685_ = v_reuseFailAlloc_1686_;
goto v_reusejp_1684_;
}
v_reusejp_1684_:
{
return v___x_1685_;
}
}
}
else
{
lean_object* v_a_1688_; lean_object* v___x_1690_; uint8_t v_isShared_1691_; uint8_t v_isSharedCheck_1695_; 
v_a_1688_ = lean_ctor_get(v___x_1677_, 0);
v_isSharedCheck_1695_ = !lean_is_exclusive(v___x_1677_);
if (v_isSharedCheck_1695_ == 0)
{
v___x_1690_ = v___x_1677_;
v_isShared_1691_ = v_isSharedCheck_1695_;
goto v_resetjp_1689_;
}
else
{
lean_inc(v_a_1688_);
lean_dec(v___x_1677_);
v___x_1690_ = lean_box(0);
v_isShared_1691_ = v_isSharedCheck_1695_;
goto v_resetjp_1689_;
}
v_resetjp_1689_:
{
lean_object* v___x_1693_; 
if (v_isShared_1691_ == 0)
{
v___x_1693_ = v___x_1690_;
goto v_reusejp_1692_;
}
else
{
lean_object* v_reuseFailAlloc_1694_; 
v_reuseFailAlloc_1694_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1694_, 0, v_a_1688_);
v___x_1693_ = v_reuseFailAlloc_1694_;
goto v_reusejp_1692_;
}
v_reusejp_1692_:
{
return v___x_1693_;
}
}
}
}
}
else
{
lean_object* v___x_1696_; lean_object* v___x_1697_; 
lean_dec_ref(v_str_1666_);
v___x_1696_ = l_Lean_Environment_evalConst___redArg(v_env_1648_, v_opts_1649_, v_constName_1635_, v___x_1674_);
lean_dec(v_constName_1635_);
v___x_1697_ = l_IO_ofExcept___at___00__private_Lean_Parser_Extension_0__Lean_Parser_addBuiltinParserCategory_spec__0___redArg(v___x_1696_);
if (lean_obj_tag(v___x_1697_) == 0)
{
lean_object* v_a_1698_; lean_object* v___x_1700_; uint8_t v_isShared_1701_; uint8_t v_isSharedCheck_1707_; 
v_a_1698_ = lean_ctor_get(v___x_1697_, 0);
v_isSharedCheck_1707_ = !lean_is_exclusive(v___x_1697_);
if (v_isSharedCheck_1707_ == 0)
{
v___x_1700_ = v___x_1697_;
v_isShared_1701_ = v_isSharedCheck_1707_;
goto v_resetjp_1699_;
}
else
{
lean_inc(v_a_1698_);
lean_dec(v___x_1697_);
v___x_1700_ = lean_box(0);
v_isShared_1701_ = v_isSharedCheck_1707_;
goto v_resetjp_1699_;
}
v_resetjp_1699_:
{
lean_object* v___x_1702_; lean_object* v___x_1703_; lean_object* v___x_1705_; 
v___x_1702_ = lean_box(v___x_1650_);
v___x_1703_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1703_, 0, v___x_1702_);
lean_ctor_set(v___x_1703_, 1, v_a_1698_);
if (v_isShared_1701_ == 0)
{
lean_ctor_set(v___x_1700_, 0, v___x_1703_);
v___x_1705_ = v___x_1700_;
goto v_reusejp_1704_;
}
else
{
lean_object* v_reuseFailAlloc_1706_; 
v_reuseFailAlloc_1706_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1706_, 0, v___x_1703_);
v___x_1705_ = v_reuseFailAlloc_1706_;
goto v_reusejp_1704_;
}
v_reusejp_1704_:
{
return v___x_1705_;
}
}
}
else
{
lean_object* v_a_1708_; lean_object* v___x_1710_; uint8_t v_isShared_1711_; uint8_t v_isSharedCheck_1715_; 
v_a_1708_ = lean_ctor_get(v___x_1697_, 0);
v_isSharedCheck_1715_ = !lean_is_exclusive(v___x_1697_);
if (v_isSharedCheck_1715_ == 0)
{
v___x_1710_ = v___x_1697_;
v_isShared_1711_ = v_isSharedCheck_1715_;
goto v_resetjp_1709_;
}
else
{
lean_inc(v_a_1708_);
lean_dec(v___x_1697_);
v___x_1710_ = lean_box(0);
v_isShared_1711_ = v_isSharedCheck_1715_;
goto v_resetjp_1709_;
}
v_resetjp_1709_:
{
lean_object* v___x_1713_; 
if (v_isShared_1711_ == 0)
{
v___x_1713_ = v___x_1710_;
goto v_reusejp_1712_;
}
else
{
lean_object* v_reuseFailAlloc_1714_; 
v_reuseFailAlloc_1714_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1714_, 0, v_a_1708_);
v___x_1713_ = v_reuseFailAlloc_1714_;
goto v_reusejp_1712_;
}
v_reusejp_1712_:
{
return v___x_1713_;
}
}
}
}
}
}
}
else
{
lean_dec_ref_known(v_pre_1664_, 2);
lean_dec_ref_known(v_pre_1663_, 2);
lean_dec_ref_known(v_declName_1662_, 2);
goto v___jp_1639_;
}
}
case 0:
{
lean_object* v_str_1716_; lean_object* v_str_1717_; lean_object* v___x_1718_; uint8_t v___x_1719_; 
v_str_1716_ = lean_ctor_get(v_declName_1662_, 1);
lean_inc_ref(v_str_1716_);
lean_dec_ref_known(v_declName_1662_, 2);
v_str_1717_ = lean_ctor_get(v_pre_1663_, 1);
lean_inc_ref(v_str_1717_);
lean_dec_ref_known(v_pre_1663_, 2);
v___x_1718_ = ((lean_object*)(l_Lean_Parser_mkParserOfConstantUnsafe___closed__3));
v___x_1719_ = lean_string_dec_eq(v_str_1717_, v___x_1718_);
lean_dec_ref(v_str_1717_);
if (v___x_1719_ == 0)
{
lean_dec_ref(v_str_1716_);
lean_dec_ref(v_compileParserDescr_1636_);
goto v___jp_1639_;
}
else
{
lean_object* v___x_1720_; uint8_t v___x_1721_; 
v___x_1720_ = ((lean_object*)(l_Lean_Parser_mkParserOfConstantUnsafe___closed__6));
v___x_1721_ = lean_string_dec_eq(v_str_1716_, v___x_1720_);
if (v___x_1721_ == 0)
{
lean_object* v___x_1722_; uint8_t v___x_1723_; 
v___x_1722_ = ((lean_object*)(l_Lean_Parser_mkParserOfConstantUnsafe___closed__7));
v___x_1723_ = lean_string_dec_eq(v_str_1716_, v___x_1722_);
lean_dec_ref(v_str_1716_);
if (v___x_1723_ == 0)
{
lean_dec_ref(v_compileParserDescr_1636_);
goto v___jp_1639_;
}
else
{
lean_object* v___x_1724_; lean_object* v___x_1725_; 
v___x_1724_ = l_Lean_Environment_evalConst___redArg(v_env_1648_, v_opts_1649_, v_constName_1635_, v___x_1723_);
lean_dec(v_constName_1635_);
v___x_1725_ = l_IO_ofExcept___at___00__private_Lean_Parser_Extension_0__Lean_Parser_addBuiltinParserCategory_spec__0___redArg(v___x_1724_);
if (lean_obj_tag(v___x_1725_) == 0)
{
lean_object* v_a_1726_; lean_object* v___x_1727_; 
v_a_1726_ = lean_ctor_get(v___x_1725_, 0);
lean_inc(v_a_1726_);
lean_dec_ref_known(v___x_1725_, 1);
lean_inc_ref(v_a_1637_);
v___x_1727_ = lean_apply_3(v_compileParserDescr_1636_, v_a_1726_, v_a_1637_, lean_box(0));
if (lean_obj_tag(v___x_1727_) == 0)
{
lean_object* v_a_1728_; lean_object* v___x_1730_; uint8_t v_isShared_1731_; uint8_t v_isSharedCheck_1737_; 
v_a_1728_ = lean_ctor_get(v___x_1727_, 0);
v_isSharedCheck_1737_ = !lean_is_exclusive(v___x_1727_);
if (v_isSharedCheck_1737_ == 0)
{
v___x_1730_ = v___x_1727_;
v_isShared_1731_ = v_isSharedCheck_1737_;
goto v_resetjp_1729_;
}
else
{
lean_inc(v_a_1728_);
lean_dec(v___x_1727_);
v___x_1730_ = lean_box(0);
v_isShared_1731_ = v_isSharedCheck_1737_;
goto v_resetjp_1729_;
}
v_resetjp_1729_:
{
lean_object* v___x_1732_; lean_object* v___x_1733_; lean_object* v___x_1735_; 
v___x_1732_ = lean_box(v___x_1721_);
v___x_1733_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1733_, 0, v___x_1732_);
lean_ctor_set(v___x_1733_, 1, v_a_1728_);
if (v_isShared_1731_ == 0)
{
lean_ctor_set(v___x_1730_, 0, v___x_1733_);
v___x_1735_ = v___x_1730_;
goto v_reusejp_1734_;
}
else
{
lean_object* v_reuseFailAlloc_1736_; 
v_reuseFailAlloc_1736_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1736_, 0, v___x_1733_);
v___x_1735_ = v_reuseFailAlloc_1736_;
goto v_reusejp_1734_;
}
v_reusejp_1734_:
{
return v___x_1735_;
}
}
}
else
{
lean_object* v_a_1738_; lean_object* v___x_1740_; uint8_t v_isShared_1741_; uint8_t v_isSharedCheck_1745_; 
v_a_1738_ = lean_ctor_get(v___x_1727_, 0);
v_isSharedCheck_1745_ = !lean_is_exclusive(v___x_1727_);
if (v_isSharedCheck_1745_ == 0)
{
v___x_1740_ = v___x_1727_;
v_isShared_1741_ = v_isSharedCheck_1745_;
goto v_resetjp_1739_;
}
else
{
lean_inc(v_a_1738_);
lean_dec(v___x_1727_);
v___x_1740_ = lean_box(0);
v_isShared_1741_ = v_isSharedCheck_1745_;
goto v_resetjp_1739_;
}
v_resetjp_1739_:
{
lean_object* v___x_1743_; 
if (v_isShared_1741_ == 0)
{
v___x_1743_ = v___x_1740_;
goto v_reusejp_1742_;
}
else
{
lean_object* v_reuseFailAlloc_1744_; 
v_reuseFailAlloc_1744_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1744_, 0, v_a_1738_);
v___x_1743_ = v_reuseFailAlloc_1744_;
goto v_reusejp_1742_;
}
v_reusejp_1742_:
{
return v___x_1743_;
}
}
}
}
else
{
lean_object* v_a_1746_; lean_object* v___x_1748_; uint8_t v_isShared_1749_; uint8_t v_isSharedCheck_1753_; 
lean_dec_ref(v_compileParserDescr_1636_);
v_a_1746_ = lean_ctor_get(v___x_1725_, 0);
v_isSharedCheck_1753_ = !lean_is_exclusive(v___x_1725_);
if (v_isSharedCheck_1753_ == 0)
{
v___x_1748_ = v___x_1725_;
v_isShared_1749_ = v_isSharedCheck_1753_;
goto v_resetjp_1747_;
}
else
{
lean_inc(v_a_1746_);
lean_dec(v___x_1725_);
v___x_1748_ = lean_box(0);
v_isShared_1749_ = v_isSharedCheck_1753_;
goto v_resetjp_1747_;
}
v_resetjp_1747_:
{
lean_object* v___x_1751_; 
if (v_isShared_1749_ == 0)
{
v___x_1751_ = v___x_1748_;
goto v_reusejp_1750_;
}
else
{
lean_object* v_reuseFailAlloc_1752_; 
v_reuseFailAlloc_1752_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1752_, 0, v_a_1746_);
v___x_1751_ = v_reuseFailAlloc_1752_;
goto v_reusejp_1750_;
}
v_reusejp_1750_:
{
return v___x_1751_;
}
}
}
}
}
else
{
lean_object* v___x_1754_; lean_object* v___x_1755_; 
lean_dec_ref(v_str_1716_);
v___x_1754_ = l_Lean_Environment_evalConst___redArg(v_env_1648_, v_opts_1649_, v_constName_1635_, v___x_1721_);
lean_dec(v_constName_1635_);
v___x_1755_ = l_IO_ofExcept___at___00__private_Lean_Parser_Extension_0__Lean_Parser_addBuiltinParserCategory_spec__0___redArg(v___x_1754_);
if (lean_obj_tag(v___x_1755_) == 0)
{
lean_object* v_a_1756_; lean_object* v___x_1757_; 
v_a_1756_ = lean_ctor_get(v___x_1755_, 0);
lean_inc(v_a_1756_);
lean_dec_ref_known(v___x_1755_, 1);
lean_inc_ref(v_a_1637_);
v___x_1757_ = lean_apply_3(v_compileParserDescr_1636_, v_a_1756_, v_a_1637_, lean_box(0));
if (lean_obj_tag(v___x_1757_) == 0)
{
lean_object* v_a_1758_; lean_object* v___x_1760_; uint8_t v_isShared_1761_; uint8_t v_isSharedCheck_1767_; 
v_a_1758_ = lean_ctor_get(v___x_1757_, 0);
v_isSharedCheck_1767_ = !lean_is_exclusive(v___x_1757_);
if (v_isSharedCheck_1767_ == 0)
{
v___x_1760_ = v___x_1757_;
v_isShared_1761_ = v_isSharedCheck_1767_;
goto v_resetjp_1759_;
}
else
{
lean_inc(v_a_1758_);
lean_dec(v___x_1757_);
v___x_1760_ = lean_box(0);
v_isShared_1761_ = v_isSharedCheck_1767_;
goto v_resetjp_1759_;
}
v_resetjp_1759_:
{
lean_object* v___x_1762_; lean_object* v___x_1763_; lean_object* v___x_1765_; 
v___x_1762_ = lean_box(v___x_1721_);
v___x_1763_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1763_, 0, v___x_1762_);
lean_ctor_set(v___x_1763_, 1, v_a_1758_);
if (v_isShared_1761_ == 0)
{
lean_ctor_set(v___x_1760_, 0, v___x_1763_);
v___x_1765_ = v___x_1760_;
goto v_reusejp_1764_;
}
else
{
lean_object* v_reuseFailAlloc_1766_; 
v_reuseFailAlloc_1766_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1766_, 0, v___x_1763_);
v___x_1765_ = v_reuseFailAlloc_1766_;
goto v_reusejp_1764_;
}
v_reusejp_1764_:
{
return v___x_1765_;
}
}
}
else
{
lean_object* v_a_1768_; lean_object* v___x_1770_; uint8_t v_isShared_1771_; uint8_t v_isSharedCheck_1775_; 
v_a_1768_ = lean_ctor_get(v___x_1757_, 0);
v_isSharedCheck_1775_ = !lean_is_exclusive(v___x_1757_);
if (v_isSharedCheck_1775_ == 0)
{
v___x_1770_ = v___x_1757_;
v_isShared_1771_ = v_isSharedCheck_1775_;
goto v_resetjp_1769_;
}
else
{
lean_inc(v_a_1768_);
lean_dec(v___x_1757_);
v___x_1770_ = lean_box(0);
v_isShared_1771_ = v_isSharedCheck_1775_;
goto v_resetjp_1769_;
}
v_resetjp_1769_:
{
lean_object* v___x_1773_; 
if (v_isShared_1771_ == 0)
{
v___x_1773_ = v___x_1770_;
goto v_reusejp_1772_;
}
else
{
lean_object* v_reuseFailAlloc_1774_; 
v_reuseFailAlloc_1774_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1774_, 0, v_a_1768_);
v___x_1773_ = v_reuseFailAlloc_1774_;
goto v_reusejp_1772_;
}
v_reusejp_1772_:
{
return v___x_1773_;
}
}
}
}
else
{
lean_object* v_a_1776_; lean_object* v___x_1778_; uint8_t v_isShared_1779_; uint8_t v_isSharedCheck_1783_; 
lean_dec_ref(v_compileParserDescr_1636_);
v_a_1776_ = lean_ctor_get(v___x_1755_, 0);
v_isSharedCheck_1783_ = !lean_is_exclusive(v___x_1755_);
if (v_isSharedCheck_1783_ == 0)
{
v___x_1778_ = v___x_1755_;
v_isShared_1779_ = v_isSharedCheck_1783_;
goto v_resetjp_1777_;
}
else
{
lean_inc(v_a_1776_);
lean_dec(v___x_1755_);
v___x_1778_ = lean_box(0);
v_isShared_1779_ = v_isSharedCheck_1783_;
goto v_resetjp_1777_;
}
v_resetjp_1777_:
{
lean_object* v___x_1781_; 
if (v_isShared_1779_ == 0)
{
v___x_1781_ = v___x_1778_;
goto v_reusejp_1780_;
}
else
{
lean_object* v_reuseFailAlloc_1782_; 
v_reuseFailAlloc_1782_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1782_, 0, v_a_1776_);
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
}
}
default: 
{
lean_dec_ref_known(v_pre_1663_, 2);
lean_dec_ref_known(v_declName_1662_, 2);
lean_dec_ref(v_compileParserDescr_1636_);
goto v___jp_1639_;
}
}
}
else
{
lean_dec_ref_known(v_declName_1662_, 2);
lean_dec(v_pre_1663_);
lean_dec_ref(v_compileParserDescr_1636_);
goto v___jp_1639_;
}
}
else
{
lean_dec(v_declName_1662_);
lean_dec_ref(v_compileParserDescr_1636_);
goto v___jp_1639_;
}
}
else
{
lean_dec_ref(v___x_1661_);
lean_dec_ref(v_compileParserDescr_1636_);
goto v___jp_1639_;
}
}
v___jp_1639_:
{
lean_object* v___x_1640_; uint8_t v___x_1641_; lean_object* v___x_1642_; lean_object* v___x_1643_; lean_object* v___x_1644_; lean_object* v___x_1645_; lean_object* v___x_1646_; lean_object* v___x_1647_; 
v___x_1640_ = ((lean_object*)(l_Lean_Parser_mkParserOfConstantUnsafe___closed__0));
v___x_1641_ = 1;
v___x_1642_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_constName_1635_, v___x_1641_);
v___x_1643_ = lean_string_append(v___x_1640_, v___x_1642_);
lean_dec_ref(v___x_1642_);
v___x_1644_ = ((lean_object*)(l_Lean_Parser_mkParserOfConstantUnsafe___closed__1));
v___x_1645_ = lean_string_append(v___x_1643_, v___x_1644_);
v___x_1646_ = lean_mk_io_user_error(v___x_1645_);
v___x_1647_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1647_, 0, v___x_1646_);
return v___x_1647_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_mkParserOfConstantUnsafe___boxed(lean_object* v_constName_1784_, lean_object* v_compileParserDescr_1785_, lean_object* v_a_1786_, lean_object* v_a_1787_){
_start:
{
lean_object* v_res_1788_; 
v_res_1788_ = l_Lean_Parser_mkParserOfConstantUnsafe(v_constName_1784_, v_compileParserDescr_1785_, v_a_1786_);
lean_dec_ref(v_a_1786_);
return v_res_1788_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_compileParserDescr_visit___boxed(lean_object* v_categories_1789_, lean_object* v_a_1790_, lean_object* v_a_1791_, lean_object* v_a_1792_){
_start:
{
lean_object* v_res_1793_; 
v_res_1793_ = l___private_Lean_Parser_Extension_0__Lean_Parser_compileParserDescr_visit(v_categories_1789_, v_a_1790_, v_a_1791_);
lean_dec_ref(v_a_1791_);
return v_res_1793_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_compileParserDescr_visit(lean_object* v_categories_1794_, lean_object* v_a_1795_, lean_object* v_a_1796_){
_start:
{
switch(lean_obj_tag(v_a_1795_))
{
case 0:
{
lean_object* v_name_1798_; lean_object* v___x_1799_; lean_object* v___x_1800_; 
lean_dec_ref(v_categories_1794_);
v_name_1798_ = lean_ctor_get(v_a_1795_, 0);
lean_inc(v_name_1798_);
lean_dec_ref_known(v_a_1795_, 1);
v___x_1799_ = l_Lean_Parser_parserAliasesRef;
v___x_1800_ = l_Lean_Parser_getConstAlias___redArg(v___x_1799_, v_name_1798_);
return v___x_1800_;
}
case 1:
{
lean_object* v_name_1801_; lean_object* v_p_1802_; lean_object* v___x_1803_; lean_object* v___x_1804_; 
v_name_1801_ = lean_ctor_get(v_a_1795_, 0);
lean_inc(v_name_1801_);
v_p_1802_ = lean_ctor_get(v_a_1795_, 1);
lean_inc_ref(v_p_1802_);
lean_dec_ref_known(v_a_1795_, 2);
v___x_1803_ = l_Lean_Parser_parserAliasesRef;
v___x_1804_ = l_Lean_Parser_getUnaryAlias___redArg(v___x_1803_, v_name_1801_);
if (lean_obj_tag(v___x_1804_) == 0)
{
lean_object* v_a_1805_; lean_object* v___x_1806_; 
v_a_1805_ = lean_ctor_get(v___x_1804_, 0);
lean_inc(v_a_1805_);
lean_dec_ref_known(v___x_1804_, 1);
v___x_1806_ = l___private_Lean_Parser_Extension_0__Lean_Parser_compileParserDescr_visit(v_categories_1794_, v_p_1802_, v_a_1796_);
if (lean_obj_tag(v___x_1806_) == 0)
{
lean_object* v_a_1807_; lean_object* v___x_1809_; uint8_t v_isShared_1810_; uint8_t v_isSharedCheck_1815_; 
v_a_1807_ = lean_ctor_get(v___x_1806_, 0);
v_isSharedCheck_1815_ = !lean_is_exclusive(v___x_1806_);
if (v_isSharedCheck_1815_ == 0)
{
v___x_1809_ = v___x_1806_;
v_isShared_1810_ = v_isSharedCheck_1815_;
goto v_resetjp_1808_;
}
else
{
lean_inc(v_a_1807_);
lean_dec(v___x_1806_);
v___x_1809_ = lean_box(0);
v_isShared_1810_ = v_isSharedCheck_1815_;
goto v_resetjp_1808_;
}
v_resetjp_1808_:
{
lean_object* v___x_1811_; lean_object* v___x_1813_; 
v___x_1811_ = lean_apply_1(v_a_1805_, v_a_1807_);
if (v_isShared_1810_ == 0)
{
lean_ctor_set(v___x_1809_, 0, v___x_1811_);
v___x_1813_ = v___x_1809_;
goto v_reusejp_1812_;
}
else
{
lean_object* v_reuseFailAlloc_1814_; 
v_reuseFailAlloc_1814_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1814_, 0, v___x_1811_);
v___x_1813_ = v_reuseFailAlloc_1814_;
goto v_reusejp_1812_;
}
v_reusejp_1812_:
{
return v___x_1813_;
}
}
}
else
{
lean_dec(v_a_1805_);
return v___x_1806_;
}
}
else
{
lean_object* v_a_1816_; lean_object* v___x_1818_; uint8_t v_isShared_1819_; uint8_t v_isSharedCheck_1823_; 
lean_dec_ref(v_p_1802_);
lean_dec_ref(v_categories_1794_);
v_a_1816_ = lean_ctor_get(v___x_1804_, 0);
v_isSharedCheck_1823_ = !lean_is_exclusive(v___x_1804_);
if (v_isSharedCheck_1823_ == 0)
{
v___x_1818_ = v___x_1804_;
v_isShared_1819_ = v_isSharedCheck_1823_;
goto v_resetjp_1817_;
}
else
{
lean_inc(v_a_1816_);
lean_dec(v___x_1804_);
v___x_1818_ = lean_box(0);
v_isShared_1819_ = v_isSharedCheck_1823_;
goto v_resetjp_1817_;
}
v_resetjp_1817_:
{
lean_object* v___x_1821_; 
if (v_isShared_1819_ == 0)
{
v___x_1821_ = v___x_1818_;
goto v_reusejp_1820_;
}
else
{
lean_object* v_reuseFailAlloc_1822_; 
v_reuseFailAlloc_1822_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1822_, 0, v_a_1816_);
v___x_1821_ = v_reuseFailAlloc_1822_;
goto v_reusejp_1820_;
}
v_reusejp_1820_:
{
return v___x_1821_;
}
}
}
}
case 2:
{
lean_object* v_name_1824_; lean_object* v_p_u2081_1825_; lean_object* v_p_u2082_1826_; lean_object* v___x_1827_; lean_object* v___x_1828_; 
v_name_1824_ = lean_ctor_get(v_a_1795_, 0);
lean_inc(v_name_1824_);
v_p_u2081_1825_ = lean_ctor_get(v_a_1795_, 1);
lean_inc_ref(v_p_u2081_1825_);
v_p_u2082_1826_ = lean_ctor_get(v_a_1795_, 2);
lean_inc_ref(v_p_u2082_1826_);
lean_dec_ref_known(v_a_1795_, 3);
v___x_1827_ = l_Lean_Parser_parserAliasesRef;
v___x_1828_ = l_Lean_Parser_getBinaryAlias___redArg(v___x_1827_, v_name_1824_);
if (lean_obj_tag(v___x_1828_) == 0)
{
lean_object* v_a_1829_; lean_object* v___x_1830_; 
v_a_1829_ = lean_ctor_get(v___x_1828_, 0);
lean_inc(v_a_1829_);
lean_dec_ref_known(v___x_1828_, 1);
lean_inc_ref(v_categories_1794_);
v___x_1830_ = l___private_Lean_Parser_Extension_0__Lean_Parser_compileParserDescr_visit(v_categories_1794_, v_p_u2081_1825_, v_a_1796_);
if (lean_obj_tag(v___x_1830_) == 0)
{
lean_object* v_a_1831_; lean_object* v___x_1832_; 
v_a_1831_ = lean_ctor_get(v___x_1830_, 0);
lean_inc(v_a_1831_);
lean_dec_ref_known(v___x_1830_, 1);
v___x_1832_ = l___private_Lean_Parser_Extension_0__Lean_Parser_compileParserDescr_visit(v_categories_1794_, v_p_u2082_1826_, v_a_1796_);
if (lean_obj_tag(v___x_1832_) == 0)
{
lean_object* v_a_1833_; lean_object* v___x_1835_; uint8_t v_isShared_1836_; uint8_t v_isSharedCheck_1841_; 
v_a_1833_ = lean_ctor_get(v___x_1832_, 0);
v_isSharedCheck_1841_ = !lean_is_exclusive(v___x_1832_);
if (v_isSharedCheck_1841_ == 0)
{
v___x_1835_ = v___x_1832_;
v_isShared_1836_ = v_isSharedCheck_1841_;
goto v_resetjp_1834_;
}
else
{
lean_inc(v_a_1833_);
lean_dec(v___x_1832_);
v___x_1835_ = lean_box(0);
v_isShared_1836_ = v_isSharedCheck_1841_;
goto v_resetjp_1834_;
}
v_resetjp_1834_:
{
lean_object* v___x_1837_; lean_object* v___x_1839_; 
v___x_1837_ = lean_apply_2(v_a_1829_, v_a_1831_, v_a_1833_);
if (v_isShared_1836_ == 0)
{
lean_ctor_set(v___x_1835_, 0, v___x_1837_);
v___x_1839_ = v___x_1835_;
goto v_reusejp_1838_;
}
else
{
lean_object* v_reuseFailAlloc_1840_; 
v_reuseFailAlloc_1840_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1840_, 0, v___x_1837_);
v___x_1839_ = v_reuseFailAlloc_1840_;
goto v_reusejp_1838_;
}
v_reusejp_1838_:
{
return v___x_1839_;
}
}
}
else
{
lean_dec(v_a_1831_);
lean_dec(v_a_1829_);
return v___x_1832_;
}
}
else
{
lean_dec(v_a_1829_);
lean_dec_ref(v_p_u2082_1826_);
lean_dec_ref(v_categories_1794_);
return v___x_1830_;
}
}
else
{
lean_object* v_a_1842_; lean_object* v___x_1844_; uint8_t v_isShared_1845_; uint8_t v_isSharedCheck_1849_; 
lean_dec_ref(v_p_u2082_1826_);
lean_dec_ref(v_p_u2081_1825_);
lean_dec_ref(v_categories_1794_);
v_a_1842_ = lean_ctor_get(v___x_1828_, 0);
v_isSharedCheck_1849_ = !lean_is_exclusive(v___x_1828_);
if (v_isSharedCheck_1849_ == 0)
{
v___x_1844_ = v___x_1828_;
v_isShared_1845_ = v_isSharedCheck_1849_;
goto v_resetjp_1843_;
}
else
{
lean_inc(v_a_1842_);
lean_dec(v___x_1828_);
v___x_1844_ = lean_box(0);
v_isShared_1845_ = v_isSharedCheck_1849_;
goto v_resetjp_1843_;
}
v_resetjp_1843_:
{
lean_object* v___x_1847_; 
if (v_isShared_1845_ == 0)
{
v___x_1847_ = v___x_1844_;
goto v_reusejp_1846_;
}
else
{
lean_object* v_reuseFailAlloc_1848_; 
v_reuseFailAlloc_1848_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1848_, 0, v_a_1842_);
v___x_1847_ = v_reuseFailAlloc_1848_;
goto v_reusejp_1846_;
}
v_reusejp_1846_:
{
return v___x_1847_;
}
}
}
}
case 3:
{
lean_object* v_kind_1850_; lean_object* v_prec_1851_; lean_object* v_p_1852_; lean_object* v___x_1853_; 
v_kind_1850_ = lean_ctor_get(v_a_1795_, 0);
lean_inc(v_kind_1850_);
v_prec_1851_ = lean_ctor_get(v_a_1795_, 1);
lean_inc(v_prec_1851_);
v_p_1852_ = lean_ctor_get(v_a_1795_, 2);
lean_inc_ref(v_p_1852_);
lean_dec_ref_known(v_a_1795_, 3);
v___x_1853_ = l___private_Lean_Parser_Extension_0__Lean_Parser_compileParserDescr_visit(v_categories_1794_, v_p_1852_, v_a_1796_);
if (lean_obj_tag(v___x_1853_) == 0)
{
lean_object* v_a_1854_; lean_object* v___x_1856_; uint8_t v_isShared_1857_; uint8_t v_isSharedCheck_1862_; 
v_a_1854_ = lean_ctor_get(v___x_1853_, 0);
v_isSharedCheck_1862_ = !lean_is_exclusive(v___x_1853_);
if (v_isSharedCheck_1862_ == 0)
{
v___x_1856_ = v___x_1853_;
v_isShared_1857_ = v_isSharedCheck_1862_;
goto v_resetjp_1855_;
}
else
{
lean_inc(v_a_1854_);
lean_dec(v___x_1853_);
v___x_1856_ = lean_box(0);
v_isShared_1857_ = v_isSharedCheck_1862_;
goto v_resetjp_1855_;
}
v_resetjp_1855_:
{
lean_object* v___x_1858_; lean_object* v___x_1860_; 
v___x_1858_ = l_Lean_Parser_leadingNode(v_kind_1850_, v_prec_1851_, v_a_1854_);
if (v_isShared_1857_ == 0)
{
lean_ctor_set(v___x_1856_, 0, v___x_1858_);
v___x_1860_ = v___x_1856_;
goto v_reusejp_1859_;
}
else
{
lean_object* v_reuseFailAlloc_1861_; 
v_reuseFailAlloc_1861_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1861_, 0, v___x_1858_);
v___x_1860_ = v_reuseFailAlloc_1861_;
goto v_reusejp_1859_;
}
v_reusejp_1859_:
{
return v___x_1860_;
}
}
}
else
{
lean_dec(v_prec_1851_);
lean_dec(v_kind_1850_);
return v___x_1853_;
}
}
case 4:
{
lean_object* v_kind_1863_; lean_object* v_prec_1864_; lean_object* v_lhsPrec_1865_; lean_object* v_p_1866_; lean_object* v___x_1867_; 
v_kind_1863_ = lean_ctor_get(v_a_1795_, 0);
lean_inc(v_kind_1863_);
v_prec_1864_ = lean_ctor_get(v_a_1795_, 1);
lean_inc(v_prec_1864_);
v_lhsPrec_1865_ = lean_ctor_get(v_a_1795_, 2);
lean_inc(v_lhsPrec_1865_);
v_p_1866_ = lean_ctor_get(v_a_1795_, 3);
lean_inc_ref(v_p_1866_);
lean_dec_ref_known(v_a_1795_, 4);
v___x_1867_ = l___private_Lean_Parser_Extension_0__Lean_Parser_compileParserDescr_visit(v_categories_1794_, v_p_1866_, v_a_1796_);
if (lean_obj_tag(v___x_1867_) == 0)
{
lean_object* v_a_1868_; lean_object* v___x_1870_; uint8_t v_isShared_1871_; uint8_t v_isSharedCheck_1876_; 
v_a_1868_ = lean_ctor_get(v___x_1867_, 0);
v_isSharedCheck_1876_ = !lean_is_exclusive(v___x_1867_);
if (v_isSharedCheck_1876_ == 0)
{
v___x_1870_ = v___x_1867_;
v_isShared_1871_ = v_isSharedCheck_1876_;
goto v_resetjp_1869_;
}
else
{
lean_inc(v_a_1868_);
lean_dec(v___x_1867_);
v___x_1870_ = lean_box(0);
v_isShared_1871_ = v_isSharedCheck_1876_;
goto v_resetjp_1869_;
}
v_resetjp_1869_:
{
lean_object* v___x_1872_; lean_object* v___x_1874_; 
v___x_1872_ = l_Lean_Parser_trailingNode(v_kind_1863_, v_prec_1864_, v_lhsPrec_1865_, v_a_1868_);
if (v_isShared_1871_ == 0)
{
lean_ctor_set(v___x_1870_, 0, v___x_1872_);
v___x_1874_ = v___x_1870_;
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
else
{
lean_dec(v_lhsPrec_1865_);
lean_dec(v_prec_1864_);
lean_dec(v_kind_1863_);
return v___x_1867_;
}
}
case 5:
{
lean_object* v_val_1877_; lean_object* v___x_1879_; uint8_t v_isShared_1880_; uint8_t v_isSharedCheck_1885_; 
lean_dec_ref(v_categories_1794_);
v_val_1877_ = lean_ctor_get(v_a_1795_, 0);
v_isSharedCheck_1885_ = !lean_is_exclusive(v_a_1795_);
if (v_isSharedCheck_1885_ == 0)
{
v___x_1879_ = v_a_1795_;
v_isShared_1880_ = v_isSharedCheck_1885_;
goto v_resetjp_1878_;
}
else
{
lean_inc(v_val_1877_);
lean_dec(v_a_1795_);
v___x_1879_ = lean_box(0);
v_isShared_1880_ = v_isSharedCheck_1885_;
goto v_resetjp_1878_;
}
v_resetjp_1878_:
{
lean_object* v___x_1881_; lean_object* v___x_1883_; 
v___x_1881_ = l_Lean_Parser_symbol(v_val_1877_);
if (v_isShared_1880_ == 0)
{
lean_ctor_set_tag(v___x_1879_, 0);
lean_ctor_set(v___x_1879_, 0, v___x_1881_);
v___x_1883_ = v___x_1879_;
goto v_reusejp_1882_;
}
else
{
lean_object* v_reuseFailAlloc_1884_; 
v_reuseFailAlloc_1884_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1884_, 0, v___x_1881_);
v___x_1883_ = v_reuseFailAlloc_1884_;
goto v_reusejp_1882_;
}
v_reusejp_1882_:
{
return v___x_1883_;
}
}
}
case 6:
{
lean_object* v_val_1886_; uint8_t v_includeIdent_1887_; lean_object* v___x_1888_; lean_object* v___x_1889_; 
lean_dec_ref(v_categories_1794_);
v_val_1886_ = lean_ctor_get(v_a_1795_, 0);
lean_inc_ref(v_val_1886_);
v_includeIdent_1887_ = lean_ctor_get_uint8(v_a_1795_, sizeof(void*)*1);
lean_dec_ref_known(v_a_1795_, 1);
v___x_1888_ = l_Lean_Parser_nonReservedSymbol(v_val_1886_, v_includeIdent_1887_);
v___x_1889_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1889_, 0, v___x_1888_);
return v___x_1889_;
}
case 7:
{
lean_object* v_catName_1890_; lean_object* v_rbp_1891_; lean_object* v___x_1892_; 
v_catName_1890_ = lean_ctor_get(v_a_1795_, 0);
lean_inc(v_catName_1890_);
v_rbp_1891_ = lean_ctor_get(v_a_1795_, 1);
lean_inc(v_rbp_1891_);
lean_dec_ref_known(v_a_1795_, 2);
v___x_1892_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Parser_addLeadingParser_spec__0___redArg(v_categories_1794_, v_catName_1890_);
lean_dec_ref(v_categories_1794_);
if (lean_obj_tag(v___x_1892_) == 0)
{
lean_object* v___x_1893_; lean_object* v___x_1894_; 
lean_dec(v_rbp_1891_);
v___x_1893_ = l_Lean_Parser_throwUnknownParserCategory___redArg(v_catName_1890_);
v___x_1894_ = l_IO_ofExcept___at___00__private_Lean_Parser_Extension_0__Lean_Parser_addBuiltinParserCategory_spec__0___redArg(v___x_1893_);
return v___x_1894_;
}
else
{
lean_object* v___x_1896_; uint8_t v_isShared_1897_; uint8_t v_isSharedCheck_1902_; 
v_isSharedCheck_1902_ = !lean_is_exclusive(v___x_1892_);
if (v_isSharedCheck_1902_ == 0)
{
lean_object* v_unused_1903_; 
v_unused_1903_ = lean_ctor_get(v___x_1892_, 0);
lean_dec(v_unused_1903_);
v___x_1896_ = v___x_1892_;
v_isShared_1897_ = v_isSharedCheck_1902_;
goto v_resetjp_1895_;
}
else
{
lean_dec(v___x_1892_);
v___x_1896_ = lean_box(0);
v_isShared_1897_ = v_isSharedCheck_1902_;
goto v_resetjp_1895_;
}
v_resetjp_1895_:
{
lean_object* v___x_1898_; lean_object* v___x_1900_; 
v___x_1898_ = l_Lean_Parser_categoryParser(v_catName_1890_, v_rbp_1891_);
if (v_isShared_1897_ == 0)
{
lean_ctor_set_tag(v___x_1896_, 0);
lean_ctor_set(v___x_1896_, 0, v___x_1898_);
v___x_1900_ = v___x_1896_;
goto v_reusejp_1899_;
}
else
{
lean_object* v_reuseFailAlloc_1901_; 
v_reuseFailAlloc_1901_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1901_, 0, v___x_1898_);
v___x_1900_ = v_reuseFailAlloc_1901_;
goto v_reusejp_1899_;
}
v_reusejp_1899_:
{
return v___x_1900_;
}
}
}
}
case 8:
{
lean_object* v_declName_1904_; lean_object* v___x_1905_; lean_object* v___x_1906_; 
v_declName_1904_ = lean_ctor_get(v_a_1795_, 0);
lean_inc(v_declName_1904_);
lean_dec_ref_known(v_a_1795_, 1);
v___x_1905_ = lean_alloc_closure((void*)(l___private_Lean_Parser_Extension_0__Lean_Parser_compileParserDescr_visit___boxed), 4, 1);
lean_closure_set(v___x_1905_, 0, v_categories_1794_);
v___x_1906_ = l_Lean_Parser_mkParserOfConstantUnsafe(v_declName_1904_, v___x_1905_, v_a_1796_);
if (lean_obj_tag(v___x_1906_) == 0)
{
lean_object* v_a_1907_; lean_object* v___x_1909_; uint8_t v_isShared_1910_; uint8_t v_isSharedCheck_1915_; 
v_a_1907_ = lean_ctor_get(v___x_1906_, 0);
v_isSharedCheck_1915_ = !lean_is_exclusive(v___x_1906_);
if (v_isSharedCheck_1915_ == 0)
{
v___x_1909_ = v___x_1906_;
v_isShared_1910_ = v_isSharedCheck_1915_;
goto v_resetjp_1908_;
}
else
{
lean_inc(v_a_1907_);
lean_dec(v___x_1906_);
v___x_1909_ = lean_box(0);
v_isShared_1910_ = v_isSharedCheck_1915_;
goto v_resetjp_1908_;
}
v_resetjp_1908_:
{
lean_object* v_snd_1911_; lean_object* v___x_1913_; 
v_snd_1911_ = lean_ctor_get(v_a_1907_, 1);
lean_inc(v_snd_1911_);
lean_dec(v_a_1907_);
if (v_isShared_1910_ == 0)
{
lean_ctor_set(v___x_1909_, 0, v_snd_1911_);
v___x_1913_ = v___x_1909_;
goto v_reusejp_1912_;
}
else
{
lean_object* v_reuseFailAlloc_1914_; 
v_reuseFailAlloc_1914_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1914_, 0, v_snd_1911_);
v___x_1913_ = v_reuseFailAlloc_1914_;
goto v_reusejp_1912_;
}
v_reusejp_1912_:
{
return v___x_1913_;
}
}
}
else
{
lean_object* v_a_1916_; lean_object* v___x_1918_; uint8_t v_isShared_1919_; uint8_t v_isSharedCheck_1923_; 
v_a_1916_ = lean_ctor_get(v___x_1906_, 0);
v_isSharedCheck_1923_ = !lean_is_exclusive(v___x_1906_);
if (v_isSharedCheck_1923_ == 0)
{
v___x_1918_ = v___x_1906_;
v_isShared_1919_ = v_isSharedCheck_1923_;
goto v_resetjp_1917_;
}
else
{
lean_inc(v_a_1916_);
lean_dec(v___x_1906_);
v___x_1918_ = lean_box(0);
v_isShared_1919_ = v_isSharedCheck_1923_;
goto v_resetjp_1917_;
}
v_resetjp_1917_:
{
lean_object* v___x_1921_; 
if (v_isShared_1919_ == 0)
{
v___x_1921_ = v___x_1918_;
goto v_reusejp_1920_;
}
else
{
lean_object* v_reuseFailAlloc_1922_; 
v_reuseFailAlloc_1922_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1922_, 0, v_a_1916_);
v___x_1921_ = v_reuseFailAlloc_1922_;
goto v_reusejp_1920_;
}
v_reusejp_1920_:
{
return v___x_1921_;
}
}
}
}
case 9:
{
lean_object* v_name_1924_; lean_object* v_kind_1925_; lean_object* v_p_1926_; lean_object* v___x_1927_; 
v_name_1924_ = lean_ctor_get(v_a_1795_, 0);
lean_inc_ref(v_name_1924_);
v_kind_1925_ = lean_ctor_get(v_a_1795_, 1);
lean_inc(v_kind_1925_);
v_p_1926_ = lean_ctor_get(v_a_1795_, 2);
lean_inc_ref(v_p_1926_);
lean_dec_ref_known(v_a_1795_, 3);
v___x_1927_ = l___private_Lean_Parser_Extension_0__Lean_Parser_compileParserDescr_visit(v_categories_1794_, v_p_1926_, v_a_1796_);
if (lean_obj_tag(v___x_1927_) == 0)
{
lean_object* v_a_1928_; lean_object* v___x_1930_; uint8_t v_isShared_1931_; uint8_t v_isSharedCheck_1938_; 
v_a_1928_ = lean_ctor_get(v___x_1927_, 0);
v_isSharedCheck_1938_ = !lean_is_exclusive(v___x_1927_);
if (v_isSharedCheck_1938_ == 0)
{
v___x_1930_ = v___x_1927_;
v_isShared_1931_ = v_isSharedCheck_1938_;
goto v_resetjp_1929_;
}
else
{
lean_inc(v_a_1928_);
lean_dec(v___x_1927_);
v___x_1930_ = lean_box(0);
v_isShared_1931_ = v_isSharedCheck_1938_;
goto v_resetjp_1929_;
}
v_resetjp_1929_:
{
uint8_t v___x_1932_; lean_object* v___x_1933_; lean_object* v___x_1934_; lean_object* v___x_1936_; 
v___x_1932_ = 1;
lean_inc(v_kind_1925_);
v___x_1933_ = l_Lean_Parser_nodeWithAntiquot(v_name_1924_, v_kind_1925_, v_a_1928_, v___x_1932_);
v___x_1934_ = l_Lean_Parser_withCache(v_kind_1925_, v___x_1933_);
if (v_isShared_1931_ == 0)
{
lean_ctor_set(v___x_1930_, 0, v___x_1934_);
v___x_1936_ = v___x_1930_;
goto v_reusejp_1935_;
}
else
{
lean_object* v_reuseFailAlloc_1937_; 
v_reuseFailAlloc_1937_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1937_, 0, v___x_1934_);
v___x_1936_ = v_reuseFailAlloc_1937_;
goto v_reusejp_1935_;
}
v_reusejp_1935_:
{
return v___x_1936_;
}
}
}
else
{
lean_dec(v_kind_1925_);
lean_dec_ref(v_name_1924_);
return v___x_1927_;
}
}
case 10:
{
lean_object* v_p_1939_; lean_object* v_sep_1940_; lean_object* v_psep_1941_; uint8_t v_allowTrailingSep_1942_; lean_object* v___x_1943_; 
v_p_1939_ = lean_ctor_get(v_a_1795_, 0);
lean_inc_ref(v_p_1939_);
v_sep_1940_ = lean_ctor_get(v_a_1795_, 1);
lean_inc_ref(v_sep_1940_);
v_psep_1941_ = lean_ctor_get(v_a_1795_, 2);
lean_inc_ref(v_psep_1941_);
v_allowTrailingSep_1942_ = lean_ctor_get_uint8(v_a_1795_, sizeof(void*)*3);
lean_dec_ref_known(v_a_1795_, 3);
lean_inc_ref(v_categories_1794_);
v___x_1943_ = l___private_Lean_Parser_Extension_0__Lean_Parser_compileParserDescr_visit(v_categories_1794_, v_p_1939_, v_a_1796_);
if (lean_obj_tag(v___x_1943_) == 0)
{
lean_object* v_a_1944_; lean_object* v___x_1945_; 
v_a_1944_ = lean_ctor_get(v___x_1943_, 0);
lean_inc(v_a_1944_);
lean_dec_ref_known(v___x_1943_, 1);
v___x_1945_ = l___private_Lean_Parser_Extension_0__Lean_Parser_compileParserDescr_visit(v_categories_1794_, v_psep_1941_, v_a_1796_);
if (lean_obj_tag(v___x_1945_) == 0)
{
lean_object* v_a_1946_; lean_object* v___x_1948_; uint8_t v_isShared_1949_; uint8_t v_isSharedCheck_1954_; 
v_a_1946_ = lean_ctor_get(v___x_1945_, 0);
v_isSharedCheck_1954_ = !lean_is_exclusive(v___x_1945_);
if (v_isSharedCheck_1954_ == 0)
{
v___x_1948_ = v___x_1945_;
v_isShared_1949_ = v_isSharedCheck_1954_;
goto v_resetjp_1947_;
}
else
{
lean_inc(v_a_1946_);
lean_dec(v___x_1945_);
v___x_1948_ = lean_box(0);
v_isShared_1949_ = v_isSharedCheck_1954_;
goto v_resetjp_1947_;
}
v_resetjp_1947_:
{
lean_object* v___x_1950_; lean_object* v___x_1952_; 
v___x_1950_ = l_Lean_Parser_sepBy(v_a_1944_, v_sep_1940_, v_a_1946_, v_allowTrailingSep_1942_);
if (v_isShared_1949_ == 0)
{
lean_ctor_set(v___x_1948_, 0, v___x_1950_);
v___x_1952_ = v___x_1948_;
goto v_reusejp_1951_;
}
else
{
lean_object* v_reuseFailAlloc_1953_; 
v_reuseFailAlloc_1953_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1953_, 0, v___x_1950_);
v___x_1952_ = v_reuseFailAlloc_1953_;
goto v_reusejp_1951_;
}
v_reusejp_1951_:
{
return v___x_1952_;
}
}
}
else
{
lean_dec(v_a_1944_);
lean_dec_ref(v_sep_1940_);
return v___x_1945_;
}
}
else
{
lean_dec_ref(v_psep_1941_);
lean_dec_ref(v_sep_1940_);
lean_dec_ref(v_categories_1794_);
return v___x_1943_;
}
}
case 11:
{
lean_object* v_p_1955_; lean_object* v_sep_1956_; lean_object* v_psep_1957_; uint8_t v_allowTrailingSep_1958_; lean_object* v___x_1959_; 
v_p_1955_ = lean_ctor_get(v_a_1795_, 0);
lean_inc_ref(v_p_1955_);
v_sep_1956_ = lean_ctor_get(v_a_1795_, 1);
lean_inc_ref(v_sep_1956_);
v_psep_1957_ = lean_ctor_get(v_a_1795_, 2);
lean_inc_ref(v_psep_1957_);
v_allowTrailingSep_1958_ = lean_ctor_get_uint8(v_a_1795_, sizeof(void*)*3);
lean_dec_ref_known(v_a_1795_, 3);
lean_inc_ref(v_categories_1794_);
v___x_1959_ = l___private_Lean_Parser_Extension_0__Lean_Parser_compileParserDescr_visit(v_categories_1794_, v_p_1955_, v_a_1796_);
if (lean_obj_tag(v___x_1959_) == 0)
{
lean_object* v_a_1960_; lean_object* v___x_1961_; 
v_a_1960_ = lean_ctor_get(v___x_1959_, 0);
lean_inc(v_a_1960_);
lean_dec_ref_known(v___x_1959_, 1);
v___x_1961_ = l___private_Lean_Parser_Extension_0__Lean_Parser_compileParserDescr_visit(v_categories_1794_, v_psep_1957_, v_a_1796_);
if (lean_obj_tag(v___x_1961_) == 0)
{
lean_object* v_a_1962_; lean_object* v___x_1964_; uint8_t v_isShared_1965_; uint8_t v_isSharedCheck_1970_; 
v_a_1962_ = lean_ctor_get(v___x_1961_, 0);
v_isSharedCheck_1970_ = !lean_is_exclusive(v___x_1961_);
if (v_isSharedCheck_1970_ == 0)
{
v___x_1964_ = v___x_1961_;
v_isShared_1965_ = v_isSharedCheck_1970_;
goto v_resetjp_1963_;
}
else
{
lean_inc(v_a_1962_);
lean_dec(v___x_1961_);
v___x_1964_ = lean_box(0);
v_isShared_1965_ = v_isSharedCheck_1970_;
goto v_resetjp_1963_;
}
v_resetjp_1963_:
{
lean_object* v___x_1966_; lean_object* v___x_1968_; 
v___x_1966_ = l_Lean_Parser_sepBy1(v_a_1960_, v_sep_1956_, v_a_1962_, v_allowTrailingSep_1958_);
if (v_isShared_1965_ == 0)
{
lean_ctor_set(v___x_1964_, 0, v___x_1966_);
v___x_1968_ = v___x_1964_;
goto v_reusejp_1967_;
}
else
{
lean_object* v_reuseFailAlloc_1969_; 
v_reuseFailAlloc_1969_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1969_, 0, v___x_1966_);
v___x_1968_ = v_reuseFailAlloc_1969_;
goto v_reusejp_1967_;
}
v_reusejp_1967_:
{
return v___x_1968_;
}
}
}
else
{
lean_dec(v_a_1960_);
lean_dec_ref(v_sep_1956_);
return v___x_1961_;
}
}
else
{
lean_dec_ref(v_psep_1957_);
lean_dec_ref(v_sep_1956_);
lean_dec_ref(v_categories_1794_);
return v___x_1959_;
}
}
default: 
{
lean_object* v_val_1971_; lean_object* v_asciiVal_1972_; lean_object* v___x_1973_; lean_object* v___x_1974_; 
lean_dec_ref(v_categories_1794_);
v_val_1971_ = lean_ctor_get(v_a_1795_, 0);
lean_inc_ref(v_val_1971_);
v_asciiVal_1972_ = lean_ctor_get(v_a_1795_, 1);
lean_inc_ref(v_asciiVal_1972_);
lean_dec_ref_known(v_a_1795_, 2);
v___x_1973_ = l_Lean_Parser_unicodeSymbol___redArg(v_val_1971_, v_asciiVal_1972_);
v___x_1974_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1974_, 0, v___x_1973_);
return v___x_1974_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_compileParserDescr(lean_object* v_categories_1975_, lean_object* v_d_1976_, lean_object* v_a_1977_){
_start:
{
lean_object* v___x_1979_; 
v___x_1979_ = l___private_Lean_Parser_Extension_0__Lean_Parser_compileParserDescr_visit(v_categories_1975_, v_d_1976_, v_a_1977_);
return v___x_1979_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_compileParserDescr___boxed(lean_object* v_categories_1980_, lean_object* v_d_1981_, lean_object* v_a_1982_, lean_object* v_a_1983_){
_start:
{
lean_object* v_res_1984_; 
v_res_1984_ = l_Lean_Parser_compileParserDescr(v_categories_1980_, v_d_1981_, v_a_1982_);
lean_dec_ref(v_a_1982_);
return v_res_1984_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_mkParserOfConstant___lam__0(lean_object* v_categories_1985_, lean_object* v___y_1986_, lean_object* v___y_1987_){
_start:
{
lean_object* v___x_1989_; 
v___x_1989_ = l___private_Lean_Parser_Extension_0__Lean_Parser_compileParserDescr_visit(v_categories_1985_, v___y_1986_, v___y_1987_);
return v___x_1989_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_mkParserOfConstant___lam__0___boxed(lean_object* v_categories_1990_, lean_object* v___y_1991_, lean_object* v___y_1992_, lean_object* v___y_1993_){
_start:
{
lean_object* v_res_1994_; 
v_res_1994_ = l_Lean_Parser_mkParserOfConstant___lam__0(v_categories_1990_, v___y_1991_, v___y_1992_);
lean_dec_ref(v___y_1992_);
return v_res_1994_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_mkParserOfConstant(lean_object* v_categories_1995_, lean_object* v_constName_1996_, lean_object* v_a_1997_){
_start:
{
lean_object* v___f_1999_; lean_object* v___x_2000_; 
v___f_1999_ = lean_alloc_closure((void*)(l_Lean_Parser_mkParserOfConstant___lam__0___boxed), 4, 1);
lean_closure_set(v___f_1999_, 0, v_categories_1995_);
v___x_2000_ = l_Lean_Parser_mkParserOfConstantUnsafe(v_constName_1996_, v___f_1999_, v_a_1997_);
return v___x_2000_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_mkParserOfConstant___boxed(lean_object* v_categories_2001_, lean_object* v_constName_2002_, lean_object* v_a_2003_, lean_object* v_a_2004_){
_start:
{
lean_object* v_res_2005_; 
v_res_2005_ = l_Lean_Parser_mkParserOfConstant(v_categories_2001_, v_constName_2002_, v_a_2003_);
lean_dec_ref(v_a_2003_);
return v_res_2005_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn_00___x40_Lean_Parser_Extension_917526378____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_2007_; lean_object* v___x_2008_; lean_object* v___x_2009_; 
v___x_2007_ = lean_box(0);
v___x_2008_ = lean_st_mk_ref(v___x_2007_);
v___x_2009_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2009_, 0, v___x_2008_);
return v___x_2009_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn_00___x40_Lean_Parser_Extension_917526378____hygCtx___hyg_2____boxed(lean_object* v_a_2010_){
_start:
{
lean_object* v_res_2011_; 
v_res_2011_ = l___private_Lean_Parser_Extension_0__Lean_Parser_initFn_00___x40_Lean_Parser_Extension_917526378____hygCtx___hyg_2_();
return v_res_2011_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_registerParserAttributeHook(lean_object* v_hook_2012_){
_start:
{
lean_object* v___x_2014_; lean_object* v___x_2015_; lean_object* v___x_2016_; lean_object* v___x_2017_; lean_object* v___x_2018_; 
v___x_2014_ = l_Lean_Parser_parserAttributeHooks;
v___x_2015_ = lean_st_ref_take(v___x_2014_);
v___x_2016_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2016_, 0, v_hook_2012_);
lean_ctor_set(v___x_2016_, 1, v___x_2015_);
v___x_2017_ = lean_st_ref_put(v___x_2014_, v___x_2016_);
v___x_2018_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2018_, 0, v___x_2017_);
return v___x_2018_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_registerParserAttributeHook___boxed(lean_object* v_hook_2019_, lean_object* v_a_2020_){
_start:
{
lean_object* v_res_2021_; 
v_res_2021_ = l_Lean_Parser_registerParserAttributeHook(v_hook_2019_);
return v_res_2021_;
}
}
LEAN_EXPORT lean_object* l_List_forM___at___00Lean_Parser_runParserAttributeHooks_spec__0(lean_object* v_catName_2022_, lean_object* v_declName_2023_, uint8_t v_builtin_2024_, lean_object* v_as_2025_, lean_object* v___y_2026_, lean_object* v___y_2027_){
_start:
{
if (lean_obj_tag(v_as_2025_) == 0)
{
lean_object* v___x_2029_; lean_object* v___x_2030_; 
lean_dec(v_declName_2023_);
lean_dec(v_catName_2022_);
v___x_2029_ = lean_box(0);
v___x_2030_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2030_, 0, v___x_2029_);
return v___x_2030_;
}
else
{
lean_object* v_head_2031_; lean_object* v_tail_2032_; lean_object* v___x_2033_; lean_object* v___x_2034_; 
v_head_2031_ = lean_ctor_get(v_as_2025_, 0);
lean_inc(v_head_2031_);
v_tail_2032_ = lean_ctor_get(v_as_2025_, 1);
lean_inc(v_tail_2032_);
lean_dec_ref_known(v_as_2025_, 2);
v___x_2033_ = lean_box(v_builtin_2024_);
lean_inc(v___y_2027_);
lean_inc_ref(v___y_2026_);
lean_inc(v_declName_2023_);
lean_inc(v_catName_2022_);
v___x_2034_ = lean_apply_6(v_head_2031_, v_catName_2022_, v_declName_2023_, v___x_2033_, v___y_2026_, v___y_2027_, lean_box(0));
if (lean_obj_tag(v___x_2034_) == 0)
{
lean_dec_ref_known(v___x_2034_, 1);
v_as_2025_ = v_tail_2032_;
goto _start;
}
else
{
lean_dec(v_tail_2032_);
lean_dec(v_declName_2023_);
lean_dec(v_catName_2022_);
return v___x_2034_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_forM___at___00Lean_Parser_runParserAttributeHooks_spec__0___boxed(lean_object* v_catName_2036_, lean_object* v_declName_2037_, lean_object* v_builtin_2038_, lean_object* v_as_2039_, lean_object* v___y_2040_, lean_object* v___y_2041_, lean_object* v___y_2042_){
_start:
{
uint8_t v_builtin_boxed_2043_; lean_object* v_res_2044_; 
v_builtin_boxed_2043_ = lean_unbox(v_builtin_2038_);
v_res_2044_ = l_List_forM___at___00Lean_Parser_runParserAttributeHooks_spec__0(v_catName_2036_, v_declName_2037_, v_builtin_boxed_2043_, v_as_2039_, v___y_2040_, v___y_2041_);
lean_dec(v___y_2041_);
lean_dec_ref(v___y_2040_);
return v_res_2044_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_runParserAttributeHooks(lean_object* v_catName_2045_, lean_object* v_declName_2046_, uint8_t v_builtin_2047_, lean_object* v_a_2048_, lean_object* v_a_2049_){
_start:
{
lean_object* v___x_2051_; lean_object* v___x_2052_; lean_object* v___x_2053_; 
v___x_2051_ = l_Lean_Parser_parserAttributeHooks;
v___x_2052_ = lean_st_ref_get(v___x_2051_);
v___x_2053_ = l_List_forM___at___00Lean_Parser_runParserAttributeHooks_spec__0(v_catName_2045_, v_declName_2046_, v_builtin_2047_, v___x_2052_, v_a_2048_, v_a_2049_);
return v___x_2053_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_runParserAttributeHooks___boxed(lean_object* v_catName_2054_, lean_object* v_declName_2055_, lean_object* v_builtin_2056_, lean_object* v_a_2057_, lean_object* v_a_2058_, lean_object* v_a_2059_){
_start:
{
uint8_t v_builtin_boxed_2060_; lean_object* v_res_2061_; 
v_builtin_boxed_2060_ = lean_unbox(v_builtin_2056_);
v_res_2061_ = l_Lean_Parser_runParserAttributeHooks(v_catName_2054_, v_declName_2055_, v_builtin_boxed_2060_, v_a_2057_, v_a_2058_);
lean_dec(v_a_2058_);
lean_dec_ref(v_a_2057_);
return v_res_2061_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___lam__0_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2_(lean_object* v___x_2062_, lean_object* v_decl_2063_, lean_object* v_stx_2064_, uint8_t v_x_2065_, lean_object* v___y_2066_, lean_object* v___y_2067_){
_start:
{
lean_object* v___x_2069_; 
v___x_2069_ = l_Lean_Attribute_Builtin_ensureNoArgs(v_stx_2064_, v___y_2066_, v___y_2067_);
if (lean_obj_tag(v___x_2069_) == 0)
{
uint8_t v___x_2070_; lean_object* v___x_2071_; 
lean_dec_ref_known(v___x_2069_, 1);
v___x_2070_ = 1;
v___x_2071_ = l_Lean_Parser_runParserAttributeHooks(v___x_2062_, v_decl_2063_, v___x_2070_, v___y_2066_, v___y_2067_);
return v___x_2071_;
}
else
{
lean_dec(v_decl_2063_);
lean_dec(v___x_2062_);
return v___x_2069_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___lam__0_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2____boxed(lean_object* v___x_2072_, lean_object* v_decl_2073_, lean_object* v_stx_2074_, lean_object* v_x_2075_, lean_object* v___y_2076_, lean_object* v___y_2077_, lean_object* v___y_2078_){
_start:
{
uint8_t v_x_1085__boxed_2079_; lean_object* v_res_2080_; 
v_x_1085__boxed_2079_ = lean_unbox(v_x_2075_);
v_res_2080_ = l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___lam__0_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2_(v___x_2072_, v_decl_2073_, v_stx_2074_, v_x_1085__boxed_2079_, v___y_2076_, v___y_2077_);
lean_dec(v___y_2077_);
lean_dec_ref(v___y_2076_);
return v_res_2080_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Parser_Extension_0__Lean_Parser_initFn_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2__spec__0_spec__0___closed__0(void){
_start:
{
lean_object* v___x_2081_; lean_object* v___x_2082_; 
v___x_2081_ = lean_obj_once(&l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__0_00___x40_Lean_Parser_Extension_848551512____hygCtx___hyg_2_, &l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__0_00___x40_Lean_Parser_Extension_848551512____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__0_00___x40_Lean_Parser_Extension_848551512____hygCtx___hyg_2_);
v___x_2082_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2082_, 0, v___x_2081_);
return v___x_2082_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Parser_Extension_0__Lean_Parser_initFn_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2__spec__0_spec__0___closed__1(void){
_start:
{
lean_object* v___x_2083_; lean_object* v___x_2084_; lean_object* v___x_2085_; 
v___x_2083_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Parser_Extension_0__Lean_Parser_initFn_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2__spec__0_spec__0___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Parser_Extension_0__Lean_Parser_initFn_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2__spec__0_spec__0___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Parser_Extension_0__Lean_Parser_initFn_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2__spec__0_spec__0___closed__0);
v___x_2084_ = lean_unsigned_to_nat(0u);
v___x_2085_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_2085_, 0, v___x_2084_);
lean_ctor_set(v___x_2085_, 1, v___x_2084_);
lean_ctor_set(v___x_2085_, 2, v___x_2084_);
lean_ctor_set(v___x_2085_, 3, v___x_2084_);
lean_ctor_set(v___x_2085_, 4, v___x_2083_);
lean_ctor_set(v___x_2085_, 5, v___x_2083_);
lean_ctor_set(v___x_2085_, 6, v___x_2083_);
lean_ctor_set(v___x_2085_, 7, v___x_2083_);
lean_ctor_set(v___x_2085_, 8, v___x_2083_);
lean_ctor_set(v___x_2085_, 9, v___x_2083_);
lean_ctor_set(v___x_2085_, 10, v___x_2083_);
return v___x_2085_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Parser_Extension_0__Lean_Parser_initFn_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2__spec__0_spec__0___closed__2(void){
_start:
{
lean_object* v___x_2086_; lean_object* v___x_2087_; lean_object* v___x_2088_; 
v___x_2086_ = lean_unsigned_to_nat(32u);
v___x_2087_ = lean_mk_empty_array_with_capacity(v___x_2086_);
v___x_2088_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2088_, 0, v___x_2087_);
return v___x_2088_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Parser_Extension_0__Lean_Parser_initFn_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2__spec__0_spec__0___closed__3(void){
_start:
{
size_t v___x_2089_; lean_object* v___x_2090_; lean_object* v___x_2091_; lean_object* v___x_2092_; lean_object* v___x_2093_; lean_object* v___x_2094_; 
v___x_2089_ = ((size_t)5ULL);
v___x_2090_ = lean_unsigned_to_nat(0u);
v___x_2091_ = lean_unsigned_to_nat(32u);
v___x_2092_ = lean_mk_empty_array_with_capacity(v___x_2091_);
v___x_2093_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Parser_Extension_0__Lean_Parser_initFn_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2__spec__0_spec__0___closed__2, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Parser_Extension_0__Lean_Parser_initFn_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2__spec__0_spec__0___closed__2_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Parser_Extension_0__Lean_Parser_initFn_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2__spec__0_spec__0___closed__2);
v___x_2094_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_2094_, 0, v___x_2093_);
lean_ctor_set(v___x_2094_, 1, v___x_2092_);
lean_ctor_set(v___x_2094_, 2, v___x_2090_);
lean_ctor_set(v___x_2094_, 3, v___x_2090_);
lean_ctor_set_usize(v___x_2094_, 4, v___x_2089_);
return v___x_2094_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Parser_Extension_0__Lean_Parser_initFn_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2__spec__0_spec__0___closed__4(void){
_start:
{
lean_object* v___x_2095_; lean_object* v___x_2096_; lean_object* v___x_2097_; lean_object* v___x_2098_; 
v___x_2095_ = lean_box(1);
v___x_2096_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Parser_Extension_0__Lean_Parser_initFn_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2__spec__0_spec__0___closed__3, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Parser_Extension_0__Lean_Parser_initFn_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2__spec__0_spec__0___closed__3_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Parser_Extension_0__Lean_Parser_initFn_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2__spec__0_spec__0___closed__3);
v___x_2097_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Parser_Extension_0__Lean_Parser_initFn_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2__spec__0_spec__0___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Parser_Extension_0__Lean_Parser_initFn_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2__spec__0_spec__0___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Parser_Extension_0__Lean_Parser_initFn_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2__spec__0_spec__0___closed__0);
v___x_2098_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2098_, 0, v___x_2097_);
lean_ctor_set(v___x_2098_, 1, v___x_2096_);
lean_ctor_set(v___x_2098_, 2, v___x_2095_);
return v___x_2098_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Parser_Extension_0__Lean_Parser_initFn_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2__spec__0_spec__0(lean_object* v_msgData_2099_, lean_object* v___y_2100_, lean_object* v___y_2101_){
_start:
{
lean_object* v___x_2103_; lean_object* v_toCold_2104_; lean_object* v_env_2105_; lean_object* v_options_2106_; lean_object* v___x_2107_; lean_object* v___x_2108_; lean_object* v___x_2109_; lean_object* v___x_2110_; lean_object* v___x_2111_; 
v___x_2103_ = lean_st_ref_get(v___y_2101_);
v_toCold_2104_ = lean_ctor_get(v___y_2100_, 0);
v_env_2105_ = lean_ctor_get(v___x_2103_, 0);
lean_inc_ref(v_env_2105_);
lean_dec(v___x_2103_);
v_options_2106_ = lean_ctor_get(v_toCold_2104_, 2);
v___x_2107_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Parser_Extension_0__Lean_Parser_initFn_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2__spec__0_spec__0___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Parser_Extension_0__Lean_Parser_initFn_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2__spec__0_spec__0___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Parser_Extension_0__Lean_Parser_initFn_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2__spec__0_spec__0___closed__1);
v___x_2108_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Parser_Extension_0__Lean_Parser_initFn_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2__spec__0_spec__0___closed__4, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Parser_Extension_0__Lean_Parser_initFn_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2__spec__0_spec__0___closed__4_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Parser_Extension_0__Lean_Parser_initFn_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2__spec__0_spec__0___closed__4);
lean_inc_ref(v_options_2106_);
v___x_2109_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2109_, 0, v_env_2105_);
lean_ctor_set(v___x_2109_, 1, v___x_2107_);
lean_ctor_set(v___x_2109_, 2, v___x_2108_);
lean_ctor_set(v___x_2109_, 3, v_options_2106_);
v___x_2110_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_2110_, 0, v___x_2109_);
lean_ctor_set(v___x_2110_, 1, v_msgData_2099_);
v___x_2111_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2111_, 0, v___x_2110_);
return v___x_2111_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Parser_Extension_0__Lean_Parser_initFn_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2__spec__0_spec__0___boxed(lean_object* v_msgData_2112_, lean_object* v___y_2113_, lean_object* v___y_2114_, lean_object* v___y_2115_){
_start:
{
lean_object* v_res_2116_; 
v_res_2116_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Parser_Extension_0__Lean_Parser_initFn_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2__spec__0_spec__0(v_msgData_2112_, v___y_2113_, v___y_2114_);
lean_dec(v___y_2114_);
lean_dec_ref(v___y_2113_);
return v_res_2116_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Parser_Extension_0__Lean_Parser_initFn_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2__spec__0___redArg(lean_object* v_msg_2117_, lean_object* v___y_2118_, lean_object* v___y_2119_){
_start:
{
lean_object* v_ref_2121_; lean_object* v___x_2122_; lean_object* v_a_2123_; lean_object* v___x_2125_; uint8_t v_isShared_2126_; uint8_t v_isSharedCheck_2131_; 
v_ref_2121_ = lean_ctor_get(v___y_2118_, 2);
v___x_2122_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Parser_Extension_0__Lean_Parser_initFn_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2__spec__0_spec__0(v_msg_2117_, v___y_2118_, v___y_2119_);
v_a_2123_ = lean_ctor_get(v___x_2122_, 0);
v_isSharedCheck_2131_ = !lean_is_exclusive(v___x_2122_);
if (v_isSharedCheck_2131_ == 0)
{
v___x_2125_ = v___x_2122_;
v_isShared_2126_ = v_isSharedCheck_2131_;
goto v_resetjp_2124_;
}
else
{
lean_inc(v_a_2123_);
lean_dec(v___x_2122_);
v___x_2125_ = lean_box(0);
v_isShared_2126_ = v_isSharedCheck_2131_;
goto v_resetjp_2124_;
}
v_resetjp_2124_:
{
lean_object* v___x_2127_; lean_object* v___x_2129_; 
lean_inc(v_ref_2121_);
v___x_2127_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2127_, 0, v_ref_2121_);
lean_ctor_set(v___x_2127_, 1, v_a_2123_);
if (v_isShared_2126_ == 0)
{
lean_ctor_set_tag(v___x_2125_, 1);
lean_ctor_set(v___x_2125_, 0, v___x_2127_);
v___x_2129_ = v___x_2125_;
goto v_reusejp_2128_;
}
else
{
lean_object* v_reuseFailAlloc_2130_; 
v_reuseFailAlloc_2130_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2130_, 0, v___x_2127_);
v___x_2129_ = v_reuseFailAlloc_2130_;
goto v_reusejp_2128_;
}
v_reusejp_2128_:
{
return v___x_2129_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Parser_Extension_0__Lean_Parser_initFn_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2__spec__0___redArg___boxed(lean_object* v_msg_2132_, lean_object* v___y_2133_, lean_object* v___y_2134_, lean_object* v___y_2135_){
_start:
{
lean_object* v_res_2136_; 
v_res_2136_ = l_Lean_throwError___at___00__private_Lean_Parser_Extension_0__Lean_Parser_initFn_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2__spec__0___redArg(v_msg_2132_, v___y_2133_, v___y_2134_);
lean_dec(v___y_2134_);
lean_dec_ref(v___y_2133_);
return v_res_2136_;
}
}
static lean_object* _init_l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___lam__1___closed__1_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2138_; lean_object* v___x_2139_; 
v___x_2138_ = ((lean_object*)(l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___lam__1___closed__0_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2_));
v___x_2139_ = l_Lean_stringToMessageData(v___x_2138_);
return v___x_2139_;
}
}
static lean_object* _init_l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___lam__1___closed__3_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2141_; lean_object* v___x_2142_; 
v___x_2141_ = ((lean_object*)(l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___lam__1___closed__2_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2_));
v___x_2142_ = l_Lean_stringToMessageData(v___x_2141_);
return v___x_2142_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___lam__1_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2_(lean_object* v___x_2143_, lean_object* v_decl_2144_, lean_object* v___y_2145_, lean_object* v___y_2146_){
_start:
{
lean_object* v___x_2148_; lean_object* v___x_2149_; lean_object* v___x_2150_; lean_object* v___x_2151_; lean_object* v___x_2152_; lean_object* v___x_2153_; 
v___x_2148_ = lean_obj_once(&l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___lam__1___closed__1_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2_, &l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___lam__1___closed__1_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___lam__1___closed__1_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2_);
v___x_2149_ = l_Lean_MessageData_ofName(v___x_2143_);
v___x_2150_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2150_, 0, v___x_2148_);
lean_ctor_set(v___x_2150_, 1, v___x_2149_);
v___x_2151_ = lean_obj_once(&l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___lam__1___closed__3_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2_, &l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___lam__1___closed__3_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___lam__1___closed__3_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2_);
v___x_2152_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2152_, 0, v___x_2150_);
lean_ctor_set(v___x_2152_, 1, v___x_2151_);
v___x_2153_ = l_Lean_throwError___at___00__private_Lean_Parser_Extension_0__Lean_Parser_initFn_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2__spec__0___redArg(v___x_2152_, v___y_2145_, v___y_2146_);
return v___x_2153_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___lam__1_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2____boxed(lean_object* v___x_2154_, lean_object* v_decl_2155_, lean_object* v___y_2156_, lean_object* v___y_2157_, lean_object* v___y_2158_){
_start:
{
lean_object* v_res_2159_; 
v_res_2159_ = l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___lam__1_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2_(v___x_2154_, v_decl_2155_, v___y_2156_, v___y_2157_);
lean_dec(v___y_2157_);
lean_dec_ref(v___y_2156_);
lean_dec(v_decl_2155_);
return v_res_2159_;
}
}
static lean_object* _init_l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__0_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2160_; lean_object* v___f_2161_; 
v___x_2160_ = lean_obj_once(&l_List_mapTR_loop___at___00Lean_Parser_addLeadingParser_spec__1___closed__0, &l_List_mapTR_loop___at___00Lean_Parser_addLeadingParser_spec__1___closed__0_once, _init_l_List_mapTR_loop___at___00Lean_Parser_addLeadingParser_spec__1___closed__0);
v___f_2161_ = lean_alloc_closure((void*)(l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___lam__0_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2____boxed), 7, 1);
lean_closure_set(v___f_2161_, 0, v___x_2160_);
return v___f_2161_;
}
}
static lean_object* _init_l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2163_; lean_object* v___x_2164_; lean_object* v___x_2165_; 
v___x_2163_ = ((lean_object*)(l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__1_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2_));
v___x_2164_ = lean_obj_once(&l_List_mapTR_loop___at___00Lean_Parser_addLeadingParser_spec__1___closed__0, &l_List_mapTR_loop___at___00Lean_Parser_addLeadingParser_spec__1___closed__0_once, _init_l_List_mapTR_loop___at___00Lean_Parser_addLeadingParser_spec__1___closed__0);
v___x_2165_ = l_Lean_Name_str___override(v___x_2164_, v___x_2163_);
return v___x_2165_;
}
}
static lean_object* _init_l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2166_; lean_object* v___x_2167_; lean_object* v___x_2168_; 
v___x_2166_ = ((lean_object*)(l_Lean_Parser_mkParserOfConstantUnsafe___closed__3));
v___x_2167_ = lean_obj_once(&l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2_, &l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2_);
v___x_2168_ = l_Lean_Name_str___override(v___x_2167_, v___x_2166_);
return v___x_2168_;
}
}
static lean_object* _init_l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__4_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2169_; lean_object* v___x_2170_; lean_object* v___x_2171_; 
v___x_2169_ = ((lean_object*)(l_Lean_Parser_mkParserOfConstantUnsafe___closed__4));
v___x_2170_ = lean_obj_once(&l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2_, &l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2_);
v___x_2171_ = l_Lean_Name_str___override(v___x_2170_, v___x_2169_);
return v___x_2171_;
}
}
static lean_object* _init_l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__6_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2173_; lean_object* v___x_2174_; lean_object* v___x_2175_; 
v___x_2173_ = ((lean_object*)(l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__5_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2_));
v___x_2174_ = lean_obj_once(&l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__4_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2_, &l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__4_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__4_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2_);
v___x_2175_ = l_Lean_Name_str___override(v___x_2174_, v___x_2173_);
return v___x_2175_;
}
}
static lean_object* _init_l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__7_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2176_; lean_object* v___x_2177_; lean_object* v___x_2178_; 
v___x_2176_ = lean_unsigned_to_nat(0u);
v___x_2177_ = lean_obj_once(&l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__6_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2_, &l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__6_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__6_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2_);
v___x_2178_ = l_Lean_Name_num___override(v___x_2177_, v___x_2176_);
return v___x_2178_;
}
}
static lean_object* _init_l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__8_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2179_; lean_object* v___x_2180_; lean_object* v___x_2181_; 
v___x_2179_ = ((lean_object*)(l_Lean_Parser_mkParserOfConstantUnsafe___closed__3));
v___x_2180_ = lean_obj_once(&l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__7_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2_, &l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__7_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__7_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2_);
v___x_2181_ = l_Lean_Name_str___override(v___x_2180_, v___x_2179_);
return v___x_2181_;
}
}
static lean_object* _init_l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__9_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2182_; lean_object* v___x_2183_; lean_object* v___x_2184_; 
v___x_2182_ = ((lean_object*)(l_Lean_Parser_mkParserOfConstantUnsafe___closed__4));
v___x_2183_ = lean_obj_once(&l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__8_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2_, &l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__8_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__8_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2_);
v___x_2184_ = l_Lean_Name_str___override(v___x_2183_, v___x_2182_);
return v___x_2184_;
}
}
static lean_object* _init_l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__11_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2186_; lean_object* v___x_2187_; lean_object* v___x_2188_; 
v___x_2186_ = ((lean_object*)(l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__10_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2_));
v___x_2187_ = lean_obj_once(&l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__9_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2_, &l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__9_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__9_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2_);
v___x_2188_ = l_Lean_Name_str___override(v___x_2187_, v___x_2186_);
return v___x_2188_;
}
}
static lean_object* _init_l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__13_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2190_; lean_object* v___x_2191_; lean_object* v___x_2192_; 
v___x_2190_ = ((lean_object*)(l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__12_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2_));
v___x_2191_ = lean_obj_once(&l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__11_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2_, &l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__11_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__11_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2_);
v___x_2192_ = l_Lean_Name_str___override(v___x_2191_, v___x_2190_);
return v___x_2192_;
}
}
static lean_object* _init_l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__14_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2193_; lean_object* v___x_2194_; lean_object* v___x_2195_; 
v___x_2193_ = ((lean_object*)(l_Lean_Parser_mkParserOfConstantUnsafe___closed__3));
v___x_2194_ = lean_obj_once(&l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__13_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2_, &l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__13_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__13_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2_);
v___x_2195_ = l_Lean_Name_str___override(v___x_2194_, v___x_2193_);
return v___x_2195_;
}
}
static lean_object* _init_l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__15_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2196_; lean_object* v___x_2197_; lean_object* v___x_2198_; 
v___x_2196_ = ((lean_object*)(l_Lean_Parser_mkParserOfConstantUnsafe___closed__4));
v___x_2197_ = lean_obj_once(&l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__14_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2_, &l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__14_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__14_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2_);
v___x_2198_ = l_Lean_Name_str___override(v___x_2197_, v___x_2196_);
return v___x_2198_;
}
}
static lean_object* _init_l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__16_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2199_; lean_object* v___x_2200_; lean_object* v___x_2201_; 
v___x_2199_ = ((lean_object*)(l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__5_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2_));
v___x_2200_ = lean_obj_once(&l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__15_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2_, &l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__15_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__15_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2_);
v___x_2201_ = l_Lean_Name_str___override(v___x_2200_, v___x_2199_);
return v___x_2201_;
}
}
static lean_object* _init_l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__17_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2202_; lean_object* v___x_2203_; lean_object* v___x_2204_; 
v___x_2202_ = lean_unsigned_to_nat(3646333153u);
v___x_2203_ = lean_obj_once(&l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__16_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2_, &l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__16_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__16_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2_);
v___x_2204_ = l_Lean_Name_num___override(v___x_2203_, v___x_2202_);
return v___x_2204_;
}
}
static lean_object* _init_l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__19_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2206_; lean_object* v___x_2207_; lean_object* v___x_2208_; 
v___x_2206_ = ((lean_object*)(l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__18_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2_));
v___x_2207_ = lean_obj_once(&l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__17_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2_, &l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__17_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__17_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2_);
v___x_2208_ = l_Lean_Name_str___override(v___x_2207_, v___x_2206_);
return v___x_2208_;
}
}
static lean_object* _init_l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__21_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2210_; lean_object* v___x_2211_; lean_object* v___x_2212_; 
v___x_2210_ = ((lean_object*)(l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__20_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2_));
v___x_2211_ = lean_obj_once(&l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__19_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2_, &l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__19_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__19_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2_);
v___x_2212_ = l_Lean_Name_str___override(v___x_2211_, v___x_2210_);
return v___x_2212_;
}
}
static lean_object* _init_l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__22_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2213_; lean_object* v___x_2214_; lean_object* v___x_2215_; 
v___x_2213_ = lean_unsigned_to_nat(2u);
v___x_2214_ = lean_obj_once(&l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__21_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2_, &l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__21_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__21_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2_);
v___x_2215_ = l_Lean_Name_num___override(v___x_2214_, v___x_2213_);
return v___x_2215_;
}
}
static lean_object* _init_l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__27_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2_(void){
_start:
{
uint8_t v___x_2222_; lean_object* v___x_2223_; lean_object* v___x_2224_; lean_object* v___x_2225_; lean_object* v___x_2226_; 
v___x_2222_ = 0;
v___x_2223_ = ((lean_object*)(l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__26_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2_));
v___x_2224_ = ((lean_object*)(l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__24_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2_));
v___x_2225_ = lean_obj_once(&l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__22_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2_, &l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__22_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__22_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2_);
v___x_2226_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_2226_, 0, v___x_2225_);
lean_ctor_set(v___x_2226_, 1, v___x_2224_);
lean_ctor_set(v___x_2226_, 2, v___x_2223_);
lean_ctor_set_uint8(v___x_2226_, sizeof(void*)*3, v___x_2222_);
return v___x_2226_;
}
}
static lean_object* _init_l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__28_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___f_2227_; lean_object* v___f_2228_; lean_object* v___x_2229_; lean_object* v___x_2230_; 
v___f_2227_ = ((lean_object*)(l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__25_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2_));
v___f_2228_ = lean_obj_once(&l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__0_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2_, &l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__0_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__0_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2_);
v___x_2229_ = lean_obj_once(&l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__27_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2_, &l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__27_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__27_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2_);
v___x_2230_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2230_, 0, v___x_2229_);
lean_ctor_set(v___x_2230_, 1, v___f_2228_);
lean_ctor_set(v___x_2230_, 2, v___f_2227_);
return v___x_2230_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_2232_; lean_object* v___x_2233_; 
v___x_2232_ = lean_obj_once(&l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__28_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2_, &l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__28_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__28_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2_);
v___x_2233_ = l_Lean_registerBuiltinAttribute(v___x_2232_);
return v___x_2233_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2____boxed(lean_object* v_a_2234_){
_start:
{
lean_object* v_res_2235_; 
v_res_2235_ = l___private_Lean_Parser_Extension_0__Lean_Parser_initFn_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2_();
return v_res_2235_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Parser_Extension_0__Lean_Parser_initFn_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2__spec__0(lean_object* v_00_u03b1_2236_, lean_object* v_msg_2237_, lean_object* v___y_2238_, lean_object* v___y_2239_){
_start:
{
lean_object* v___x_2241_; 
v___x_2241_ = l_Lean_throwError___at___00__private_Lean_Parser_Extension_0__Lean_Parser_initFn_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2__spec__0___redArg(v_msg_2237_, v___y_2238_, v___y_2239_);
return v___x_2241_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Parser_Extension_0__Lean_Parser_initFn_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2__spec__0___boxed(lean_object* v_00_u03b1_2242_, lean_object* v_msg_2243_, lean_object* v___y_2244_, lean_object* v___y_2245_, lean_object* v___y_2246_){
_start:
{
lean_object* v_res_2247_; 
v_res_2247_ = l_Lean_throwError___at___00__private_Lean_Parser_Extension_0__Lean_Parser_initFn_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2__spec__0(v_00_u03b1_2242_, v_msg_2243_, v___y_2244_, v___y_2245_);
lean_dec(v___y_2245_);
lean_dec_ref(v___y_2244_);
return v_res_2247_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___lam__0_00___x40_Lean_Parser_Extension_3789407938____hygCtx___hyg_2_(lean_object* v___x_2248_, lean_object* v_decl_2249_, lean_object* v_stx_2250_, uint8_t v_x_2251_, lean_object* v___y_2252_, lean_object* v___y_2253_){
_start:
{
lean_object* v___x_2255_; 
v___x_2255_ = l_Lean_Attribute_Builtin_ensureNoArgs(v_stx_2250_, v___y_2252_, v___y_2253_);
if (lean_obj_tag(v___x_2255_) == 0)
{
uint8_t v___x_2256_; lean_object* v___x_2257_; 
lean_dec_ref_known(v___x_2255_, 1);
v___x_2256_ = 0;
v___x_2257_ = l_Lean_Parser_runParserAttributeHooks(v___x_2248_, v_decl_2249_, v___x_2256_, v___y_2252_, v___y_2253_);
return v___x_2257_;
}
else
{
lean_dec(v_decl_2249_);
lean_dec(v___x_2248_);
return v___x_2255_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___lam__0_00___x40_Lean_Parser_Extension_3789407938____hygCtx___hyg_2____boxed(lean_object* v___x_2258_, lean_object* v_decl_2259_, lean_object* v_stx_2260_, lean_object* v_x_2261_, lean_object* v___y_2262_, lean_object* v___y_2263_, lean_object* v___y_2264_){
_start:
{
uint8_t v_x_213__boxed_2265_; lean_object* v_res_2266_; 
v_x_213__boxed_2265_ = lean_unbox(v_x_2261_);
v_res_2266_ = l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___lam__0_00___x40_Lean_Parser_Extension_3789407938____hygCtx___hyg_2_(v___x_2258_, v_decl_2259_, v_stx_2260_, v_x_213__boxed_2265_, v___y_2262_, v___y_2263_);
lean_dec(v___y_2263_);
lean_dec_ref(v___y_2262_);
return v_res_2266_;
}
}
static lean_object* _init_l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__0_00___x40_Lean_Parser_Extension_3789407938____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2267_; lean_object* v___f_2268_; 
v___x_2267_ = lean_obj_once(&l_List_mapTR_loop___at___00Lean_Parser_addLeadingParser_spec__1___closed__0, &l_List_mapTR_loop___at___00Lean_Parser_addLeadingParser_spec__1___closed__0_once, _init_l_List_mapTR_loop___at___00Lean_Parser_addLeadingParser_spec__1___closed__0);
v___f_2268_ = lean_alloc_closure((void*)(l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___lam__0_00___x40_Lean_Parser_Extension_3789407938____hygCtx___hyg_2____boxed), 7, 1);
lean_closure_set(v___f_2268_, 0, v___x_2267_);
return v___f_2268_;
}
}
static lean_object* _init_l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__1_00___x40_Lean_Parser_Extension_3789407938____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2269_; lean_object* v___x_2270_; lean_object* v___x_2271_; 
v___x_2269_ = lean_unsigned_to_nat(3789407938u);
v___x_2270_ = lean_obj_once(&l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__16_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2_, &l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__16_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__16_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2_);
v___x_2271_ = l_Lean_Name_num___override(v___x_2270_, v___x_2269_);
return v___x_2271_;
}
}
static lean_object* _init_l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Extension_3789407938____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2272_; lean_object* v___x_2273_; lean_object* v___x_2274_; 
v___x_2272_ = ((lean_object*)(l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__18_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2_));
v___x_2273_ = lean_obj_once(&l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__1_00___x40_Lean_Parser_Extension_3789407938____hygCtx___hyg_2_, &l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__1_00___x40_Lean_Parser_Extension_3789407938____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__1_00___x40_Lean_Parser_Extension_3789407938____hygCtx___hyg_2_);
v___x_2274_ = l_Lean_Name_str___override(v___x_2273_, v___x_2272_);
return v___x_2274_;
}
}
static lean_object* _init_l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Extension_3789407938____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2275_; lean_object* v___x_2276_; lean_object* v___x_2277_; 
v___x_2275_ = ((lean_object*)(l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__20_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2_));
v___x_2276_ = lean_obj_once(&l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Extension_3789407938____hygCtx___hyg_2_, &l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Extension_3789407938____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Extension_3789407938____hygCtx___hyg_2_);
v___x_2277_ = l_Lean_Name_str___override(v___x_2276_, v___x_2275_);
return v___x_2277_;
}
}
static lean_object* _init_l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__4_00___x40_Lean_Parser_Extension_3789407938____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2278_; lean_object* v___x_2279_; lean_object* v___x_2280_; 
v___x_2278_ = lean_unsigned_to_nat(2u);
v___x_2279_ = lean_obj_once(&l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Extension_3789407938____hygCtx___hyg_2_, &l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Extension_3789407938____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Extension_3789407938____hygCtx___hyg_2_);
v___x_2280_ = l_Lean_Name_num___override(v___x_2279_, v___x_2278_);
return v___x_2280_;
}
}
static lean_object* _init_l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__9_00___x40_Lean_Parser_Extension_3789407938____hygCtx___hyg_2_(void){
_start:
{
uint8_t v___x_2287_; lean_object* v___x_2288_; lean_object* v___x_2289_; lean_object* v___x_2290_; lean_object* v___x_2291_; 
v___x_2287_ = 0;
v___x_2288_ = ((lean_object*)(l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__8_00___x40_Lean_Parser_Extension_3789407938____hygCtx___hyg_2_));
v___x_2289_ = ((lean_object*)(l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__6_00___x40_Lean_Parser_Extension_3789407938____hygCtx___hyg_2_));
v___x_2290_ = lean_obj_once(&l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__4_00___x40_Lean_Parser_Extension_3789407938____hygCtx___hyg_2_, &l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__4_00___x40_Lean_Parser_Extension_3789407938____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__4_00___x40_Lean_Parser_Extension_3789407938____hygCtx___hyg_2_);
v___x_2291_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_2291_, 0, v___x_2290_);
lean_ctor_set(v___x_2291_, 1, v___x_2289_);
lean_ctor_set(v___x_2291_, 2, v___x_2288_);
lean_ctor_set_uint8(v___x_2291_, sizeof(void*)*3, v___x_2287_);
return v___x_2291_;
}
}
static lean_object* _init_l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__10_00___x40_Lean_Parser_Extension_3789407938____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___f_2292_; lean_object* v___f_2293_; lean_object* v___x_2294_; lean_object* v___x_2295_; 
v___f_2292_ = ((lean_object*)(l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__7_00___x40_Lean_Parser_Extension_3789407938____hygCtx___hyg_2_));
v___f_2293_ = lean_obj_once(&l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__0_00___x40_Lean_Parser_Extension_3789407938____hygCtx___hyg_2_, &l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__0_00___x40_Lean_Parser_Extension_3789407938____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__0_00___x40_Lean_Parser_Extension_3789407938____hygCtx___hyg_2_);
v___x_2294_ = lean_obj_once(&l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__9_00___x40_Lean_Parser_Extension_3789407938____hygCtx___hyg_2_, &l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__9_00___x40_Lean_Parser_Extension_3789407938____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__9_00___x40_Lean_Parser_Extension_3789407938____hygCtx___hyg_2_);
v___x_2295_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2295_, 0, v___x_2294_);
lean_ctor_set(v___x_2295_, 1, v___f_2293_);
lean_ctor_set(v___x_2295_, 2, v___f_2292_);
return v___x_2295_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn_00___x40_Lean_Parser_Extension_3789407938____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_2297_; lean_object* v___x_2298_; 
v___x_2297_ = lean_obj_once(&l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__10_00___x40_Lean_Parser_Extension_3789407938____hygCtx___hyg_2_, &l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__10_00___x40_Lean_Parser_Extension_3789407938____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__10_00___x40_Lean_Parser_Extension_3789407938____hygCtx___hyg_2_);
v___x_2298_ = l_Lean_registerBuiltinAttribute(v___x_2297_);
return v___x_2298_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn_00___x40_Lean_Parser_Extension_3789407938____hygCtx___hyg_2____boxed(lean_object* v_a_2299_){
_start:
{
lean_object* v_res_2300_; 
v_res_2300_ = l___private_Lean_Parser_Extension_0__Lean_Parser_initFn_00___x40_Lean_Parser_Extension_3789407938____hygCtx___hyg_2_();
return v_res_2300_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_ParserExtension_OLeanEntry_toEntry(lean_object* v_s_2301_, lean_object* v_x_2302_, lean_object* v_a_2303_){
_start:
{
switch(lean_obj_tag(v_x_2302_))
{
case 0:
{
lean_object* v_val_2305_; lean_object* v___x_2307_; uint8_t v_isShared_2308_; uint8_t v_isSharedCheck_2313_; 
lean_dec_ref(v_s_2301_);
v_val_2305_ = lean_ctor_get(v_x_2302_, 0);
v_isSharedCheck_2313_ = !lean_is_exclusive(v_x_2302_);
if (v_isSharedCheck_2313_ == 0)
{
v___x_2307_ = v_x_2302_;
v_isShared_2308_ = v_isSharedCheck_2313_;
goto v_resetjp_2306_;
}
else
{
lean_inc(v_val_2305_);
lean_dec(v_x_2302_);
v___x_2307_ = lean_box(0);
v_isShared_2308_ = v_isSharedCheck_2313_;
goto v_resetjp_2306_;
}
v_resetjp_2306_:
{
lean_object* v___x_2310_; 
if (v_isShared_2308_ == 0)
{
v___x_2310_ = v___x_2307_;
goto v_reusejp_2309_;
}
else
{
lean_object* v_reuseFailAlloc_2312_; 
v_reuseFailAlloc_2312_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2312_, 0, v_val_2305_);
v___x_2310_ = v_reuseFailAlloc_2312_;
goto v_reusejp_2309_;
}
v_reusejp_2309_:
{
lean_object* v___x_2311_; 
v___x_2311_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2311_, 0, v___x_2310_);
return v___x_2311_;
}
}
}
case 1:
{
lean_object* v_val_2314_; lean_object* v___x_2316_; uint8_t v_isShared_2317_; uint8_t v_isSharedCheck_2322_; 
lean_dec_ref(v_s_2301_);
v_val_2314_ = lean_ctor_get(v_x_2302_, 0);
v_isSharedCheck_2322_ = !lean_is_exclusive(v_x_2302_);
if (v_isSharedCheck_2322_ == 0)
{
v___x_2316_ = v_x_2302_;
v_isShared_2317_ = v_isSharedCheck_2322_;
goto v_resetjp_2315_;
}
else
{
lean_inc(v_val_2314_);
lean_dec(v_x_2302_);
v___x_2316_ = lean_box(0);
v_isShared_2317_ = v_isSharedCheck_2322_;
goto v_resetjp_2315_;
}
v_resetjp_2315_:
{
lean_object* v___x_2319_; 
if (v_isShared_2317_ == 0)
{
v___x_2319_ = v___x_2316_;
goto v_reusejp_2318_;
}
else
{
lean_object* v_reuseFailAlloc_2321_; 
v_reuseFailAlloc_2321_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2321_, 0, v_val_2314_);
v___x_2319_ = v_reuseFailAlloc_2321_;
goto v_reusejp_2318_;
}
v_reusejp_2318_:
{
lean_object* v___x_2320_; 
v___x_2320_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2320_, 0, v___x_2319_);
return v___x_2320_;
}
}
}
case 2:
{
lean_object* v_catName_2323_; lean_object* v_declName_2324_; uint8_t v_behavior_2325_; lean_object* v___x_2327_; uint8_t v_isShared_2328_; uint8_t v_isSharedCheck_2333_; 
lean_dec_ref(v_s_2301_);
v_catName_2323_ = lean_ctor_get(v_x_2302_, 0);
v_declName_2324_ = lean_ctor_get(v_x_2302_, 1);
v_behavior_2325_ = lean_ctor_get_uint8(v_x_2302_, sizeof(void*)*2);
v_isSharedCheck_2333_ = !lean_is_exclusive(v_x_2302_);
if (v_isSharedCheck_2333_ == 0)
{
v___x_2327_ = v_x_2302_;
v_isShared_2328_ = v_isSharedCheck_2333_;
goto v_resetjp_2326_;
}
else
{
lean_inc(v_declName_2324_);
lean_inc(v_catName_2323_);
lean_dec(v_x_2302_);
v___x_2327_ = lean_box(0);
v_isShared_2328_ = v_isSharedCheck_2333_;
goto v_resetjp_2326_;
}
v_resetjp_2326_:
{
lean_object* v___x_2330_; 
if (v_isShared_2328_ == 0)
{
v___x_2330_ = v___x_2327_;
goto v_reusejp_2329_;
}
else
{
lean_object* v_reuseFailAlloc_2332_; 
v_reuseFailAlloc_2332_ = lean_alloc_ctor(2, 2, 1);
lean_ctor_set(v_reuseFailAlloc_2332_, 0, v_catName_2323_);
lean_ctor_set(v_reuseFailAlloc_2332_, 1, v_declName_2324_);
lean_ctor_set_uint8(v_reuseFailAlloc_2332_, sizeof(void*)*2, v_behavior_2325_);
v___x_2330_ = v_reuseFailAlloc_2332_;
goto v_reusejp_2329_;
}
v_reusejp_2329_:
{
lean_object* v___x_2331_; 
v___x_2331_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2331_, 0, v___x_2330_);
return v___x_2331_;
}
}
}
default: 
{
lean_object* v_catName_2334_; lean_object* v_declName_2335_; lean_object* v_prio_2336_; lean_object* v_categories_2337_; lean_object* v___x_2338_; 
v_catName_2334_ = lean_ctor_get(v_x_2302_, 0);
lean_inc(v_catName_2334_);
v_declName_2335_ = lean_ctor_get(v_x_2302_, 1);
lean_inc_n(v_declName_2335_, 2);
v_prio_2336_ = lean_ctor_get(v_x_2302_, 2);
lean_inc(v_prio_2336_);
lean_dec_ref_known(v_x_2302_, 3);
v_categories_2337_ = lean_ctor_get(v_s_2301_, 2);
lean_inc_ref(v_categories_2337_);
lean_dec_ref(v_s_2301_);
v___x_2338_ = l_Lean_Parser_mkParserOfConstant(v_categories_2337_, v_declName_2335_, v_a_2303_);
if (lean_obj_tag(v___x_2338_) == 0)
{
lean_object* v_a_2339_; lean_object* v___x_2341_; uint8_t v_isShared_2342_; uint8_t v_isSharedCheck_2350_; 
v_a_2339_ = lean_ctor_get(v___x_2338_, 0);
v_isSharedCheck_2350_ = !lean_is_exclusive(v___x_2338_);
if (v_isSharedCheck_2350_ == 0)
{
v___x_2341_ = v___x_2338_;
v_isShared_2342_ = v_isSharedCheck_2350_;
goto v_resetjp_2340_;
}
else
{
lean_inc(v_a_2339_);
lean_dec(v___x_2338_);
v___x_2341_ = lean_box(0);
v_isShared_2342_ = v_isSharedCheck_2350_;
goto v_resetjp_2340_;
}
v_resetjp_2340_:
{
lean_object* v_fst_2343_; lean_object* v_snd_2344_; lean_object* v___x_2345_; uint8_t v___x_2346_; lean_object* v___x_2348_; 
v_fst_2343_ = lean_ctor_get(v_a_2339_, 0);
lean_inc(v_fst_2343_);
v_snd_2344_ = lean_ctor_get(v_a_2339_, 1);
lean_inc(v_snd_2344_);
lean_dec(v_a_2339_);
v___x_2345_ = lean_alloc_ctor(3, 4, 1);
lean_ctor_set(v___x_2345_, 0, v_catName_2334_);
lean_ctor_set(v___x_2345_, 1, v_declName_2335_);
lean_ctor_set(v___x_2345_, 2, v_snd_2344_);
lean_ctor_set(v___x_2345_, 3, v_prio_2336_);
v___x_2346_ = lean_unbox(v_fst_2343_);
lean_dec(v_fst_2343_);
lean_ctor_set_uint8(v___x_2345_, sizeof(void*)*4, v___x_2346_);
if (v_isShared_2342_ == 0)
{
lean_ctor_set(v___x_2341_, 0, v___x_2345_);
v___x_2348_ = v___x_2341_;
goto v_reusejp_2347_;
}
else
{
lean_object* v_reuseFailAlloc_2349_; 
v_reuseFailAlloc_2349_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2349_, 0, v___x_2345_);
v___x_2348_ = v_reuseFailAlloc_2349_;
goto v_reusejp_2347_;
}
v_reusejp_2347_:
{
return v___x_2348_;
}
}
}
else
{
lean_object* v_a_2351_; lean_object* v___x_2353_; uint8_t v_isShared_2354_; uint8_t v_isSharedCheck_2358_; 
lean_dec(v_prio_2336_);
lean_dec(v_declName_2335_);
lean_dec(v_catName_2334_);
v_a_2351_ = lean_ctor_get(v___x_2338_, 0);
v_isSharedCheck_2358_ = !lean_is_exclusive(v___x_2338_);
if (v_isSharedCheck_2358_ == 0)
{
v___x_2353_ = v___x_2338_;
v_isShared_2354_ = v_isSharedCheck_2358_;
goto v_resetjp_2352_;
}
else
{
lean_inc(v_a_2351_);
lean_dec(v___x_2338_);
v___x_2353_ = lean_box(0);
v_isShared_2354_ = v_isSharedCheck_2358_;
goto v_resetjp_2352_;
}
v_resetjp_2352_:
{
lean_object* v___x_2356_; 
if (v_isShared_2354_ == 0)
{
v___x_2356_ = v___x_2353_;
goto v_reusejp_2355_;
}
else
{
lean_object* v_reuseFailAlloc_2357_; 
v_reuseFailAlloc_2357_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2357_, 0, v_a_2351_);
v___x_2356_ = v_reuseFailAlloc_2357_;
goto v_reusejp_2355_;
}
v_reusejp_2355_:
{
return v___x_2356_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_ParserExtension_OLeanEntry_toEntry___boxed(lean_object* v_s_2359_, lean_object* v_x_2360_, lean_object* v_a_2361_, lean_object* v_a_2362_){
_start:
{
lean_object* v_res_2363_; 
v_res_2363_ = l___private_Lean_Parser_Extension_0__Lean_Parser_ParserExtension_OLeanEntry_toEntry(v_s_2359_, v_x_2360_, v_a_2361_);
lean_dec_ref(v_a_2361_);
return v_res_2363_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___lam__0_00___x40_Lean_Parser_Extension_227734417____hygCtx___hyg_2_(lean_object* v_x_2364_, lean_object* v_a_2365_){
_start:
{
lean_object* v___x_2366_; lean_object* v___x_2367_; 
v___x_2366_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2366_, 0, v_a_2365_);
lean_inc_ref_n(v___x_2366_, 2);
v___x_2367_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2367_, 0, v___x_2366_);
lean_ctor_set(v___x_2367_, 1, v___x_2366_);
lean_ctor_set(v___x_2367_, 2, v___x_2366_);
return v___x_2367_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___lam__0_00___x40_Lean_Parser_Extension_227734417____hygCtx___hyg_2____boxed(lean_object* v_x_2368_, lean_object* v_a_2369_){
_start:
{
lean_object* v_res_2370_; 
v_res_2370_ = l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___lam__0_00___x40_Lean_Parser_Extension_227734417____hygCtx___hyg_2_(v_x_2368_, v_a_2369_);
lean_dec_ref(v_x_2368_);
return v_res_2370_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___lam__1_00___x40_Lean_Parser_Extension_227734417____hygCtx___hyg_2_(lean_object* v___y_2371_){
_start:
{
lean_inc_ref(v___y_2371_);
return v___y_2371_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___lam__1_00___x40_Lean_Parser_Extension_227734417____hygCtx___hyg_2____boxed(lean_object* v___y_2372_){
_start:
{
lean_object* v_res_2373_; 
v_res_2373_ = l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___lam__1_00___x40_Lean_Parser_Extension_227734417____hygCtx___hyg_2_(v___y_2372_);
lean_dec_ref(v___y_2372_);
return v_res_2373_;
}
}
static lean_object* _init_l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__7_00___x40_Lean_Parser_Extension_227734417____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___f_2384_; lean_object* v___f_2385_; lean_object* v___x_2386_; lean_object* v___x_2387_; lean_object* v___x_2388_; lean_object* v___x_2389_; lean_object* v___x_2390_; lean_object* v___x_2391_; 
v___f_2384_ = ((lean_object*)(l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__0_00___x40_Lean_Parser_Extension_227734417____hygCtx___hyg_2_));
v___f_2385_ = ((lean_object*)(l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__1_00___x40_Lean_Parser_Extension_227734417____hygCtx___hyg_2_));
v___x_2386_ = ((lean_object*)(l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__6_00___x40_Lean_Parser_Extension_227734417____hygCtx___hyg_2_));
v___x_2387_ = ((lean_object*)(l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__5_00___x40_Lean_Parser_Extension_227734417____hygCtx___hyg_2_));
v___x_2388_ = ((lean_object*)(l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__4_00___x40_Lean_Parser_Extension_227734417____hygCtx___hyg_2_));
v___x_2389_ = lean_alloc_closure((void*)(l___private_Lean_Parser_Extension_0__Lean_Parser_ParserExtension_mkInitial___boxed), 1, 0);
v___x_2390_ = ((lean_object*)(l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Extension_227734417____hygCtx___hyg_2_));
v___x_2391_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v___x_2391_, 0, v___x_2390_);
lean_ctor_set(v___x_2391_, 1, v___x_2389_);
lean_ctor_set(v___x_2391_, 2, v___x_2388_);
lean_ctor_set(v___x_2391_, 3, v___x_2387_);
lean_ctor_set(v___x_2391_, 4, v___x_2386_);
lean_ctor_set(v___x_2391_, 5, v___f_2385_);
lean_ctor_set(v___x_2391_, 6, v___f_2384_);
return v___x_2391_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn_00___x40_Lean_Parser_Extension_227734417____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_2393_; lean_object* v___x_2394_; 
v___x_2393_ = lean_obj_once(&l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__7_00___x40_Lean_Parser_Extension_227734417____hygCtx___hyg_2_, &l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__7_00___x40_Lean_Parser_Extension_227734417____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__7_00___x40_Lean_Parser_Extension_227734417____hygCtx___hyg_2_);
v___x_2394_ = l_Lean_registerScopedEnvExtensionUnsafe___redArg(v___x_2393_);
return v___x_2394_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn_00___x40_Lean_Parser_Extension_227734417____hygCtx___hyg_2____boxed(lean_object* v_a_2395_){
_start:
{
lean_object* v_res_2396_; 
v_res_2396_ = l___private_Lean_Parser_Extension_0__Lean_Parser_initFn_00___x40_Lean_Parser_Extension_227734417____hygCtx___hyg_2_();
return v_res_2396_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_getParserCategory_x3f(lean_object* v_env_2397_, lean_object* v_catName_2398_){
_start:
{
lean_object* v___x_2399_; lean_object* v_ext_2400_; lean_object* v_toEnvExtension_2401_; lean_object* v_asyncMode_2402_; lean_object* v___x_2403_; lean_object* v___x_2404_; lean_object* v_categories_2405_; lean_object* v___x_2406_; 
v___x_2399_ = l_Lean_Parser_parserExtension;
v_ext_2400_ = lean_ctor_get(v___x_2399_, 1);
v_toEnvExtension_2401_ = lean_ctor_get(v_ext_2400_, 0);
v_asyncMode_2402_ = lean_ctor_get(v_toEnvExtension_2401_, 2);
v___x_2403_ = l_Lean_Parser_ParserExtension_instInhabitedState_default;
v___x_2404_ = l_Lean_ScopedEnvExtension_getState___redArg(v___x_2403_, v___x_2399_, v_env_2397_, v_asyncMode_2402_);
v_categories_2405_ = lean_ctor_get(v___x_2404_, 2);
lean_inc_ref(v_categories_2405_);
lean_dec(v___x_2404_);
v___x_2406_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Parser_addLeadingParser_spec__0___redArg(v_categories_2405_, v_catName_2398_);
lean_dec_ref(v_categories_2405_);
return v___x_2406_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_getParserCategory_x3f___boxed(lean_object* v_env_2407_, lean_object* v_catName_2408_){
_start:
{
lean_object* v_res_2409_; 
v_res_2409_ = l_Lean_Parser_getParserCategory_x3f(v_env_2407_, v_catName_2408_);
lean_dec(v_catName_2408_);
return v_res_2409_;
}
}
LEAN_EXPORT uint8_t l_Lean_Parser_isParserCategory(lean_object* v_env_2410_, lean_object* v_catName_2411_){
_start:
{
lean_object* v___x_2412_; 
v___x_2412_ = l_Lean_Parser_getParserCategory_x3f(v_env_2410_, v_catName_2411_);
if (lean_obj_tag(v___x_2412_) == 0)
{
uint8_t v___x_2413_; 
v___x_2413_ = 0;
return v___x_2413_;
}
else
{
uint8_t v___x_2414_; 
lean_dec_ref_known(v___x_2412_, 1);
v___x_2414_ = 1;
return v___x_2414_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_isParserCategory___boxed(lean_object* v_env_2415_, lean_object* v_catName_2416_){
_start:
{
uint8_t v_res_2417_; lean_object* v_r_2418_; 
v_res_2417_ = l_Lean_Parser_isParserCategory(v_env_2415_, v_catName_2416_);
lean_dec(v_catName_2416_);
v_r_2418_ = lean_box(v_res_2417_);
return v_r_2418_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_addParserCategory(lean_object* v_env_2419_, lean_object* v_catName_2420_, lean_object* v_declName_2421_, uint8_t v_behavior_2422_){
_start:
{
uint8_t v___x_2423_; 
lean_inc_ref(v_env_2419_);
v___x_2423_ = l_Lean_Parser_isParserCategory(v_env_2419_, v_catName_2420_);
if (v___x_2423_ == 0)
{
lean_object* v___x_2424_; lean_object* v___x_2425_; lean_object* v___x_2426_; lean_object* v___x_2427_; 
v___x_2424_ = l_Lean_Parser_parserExtension;
v___x_2425_ = lean_alloc_ctor(2, 2, 1);
lean_ctor_set(v___x_2425_, 0, v_catName_2420_);
lean_ctor_set(v___x_2425_, 1, v_declName_2421_);
lean_ctor_set_uint8(v___x_2425_, sizeof(void*)*2, v_behavior_2422_);
v___x_2426_ = l_Lean_ScopedEnvExtension_addEntry___redArg(v___x_2424_, v_env_2419_, v___x_2425_);
v___x_2427_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2427_, 0, v___x_2426_);
return v___x_2427_;
}
else
{
lean_object* v___x_2428_; 
lean_dec(v_declName_2421_);
lean_dec_ref(v_env_2419_);
v___x_2428_ = l___private_Lean_Parser_Extension_0__Lean_Parser_throwParserCategoryAlreadyDefined___redArg(v_catName_2420_);
return v___x_2428_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_addParserCategory___boxed(lean_object* v_env_2429_, lean_object* v_catName_2430_, lean_object* v_declName_2431_, lean_object* v_behavior_2432_){
_start:
{
uint8_t v_behavior_boxed_2433_; lean_object* v_res_2434_; 
v_behavior_boxed_2433_ = lean_unbox(v_behavior_2432_);
v_res_2434_ = l_Lean_Parser_addParserCategory(v_env_2429_, v_catName_2430_, v_declName_2431_, v_behavior_boxed_2433_);
return v_res_2434_;
}
}
LEAN_EXPORT uint8_t l_Lean_Parser_leadingIdentBehavior(lean_object* v_env_2435_, lean_object* v_catName_2436_){
_start:
{
lean_object* v___x_2437_; lean_object* v_ext_2438_; lean_object* v_toEnvExtension_2439_; lean_object* v_asyncMode_2440_; lean_object* v___x_2441_; lean_object* v___x_2442_; lean_object* v_categories_2443_; lean_object* v___x_2444_; 
v___x_2437_ = l_Lean_Parser_parserExtension;
v_ext_2438_ = lean_ctor_get(v___x_2437_, 1);
v_toEnvExtension_2439_ = lean_ctor_get(v_ext_2438_, 0);
v_asyncMode_2440_ = lean_ctor_get(v_toEnvExtension_2439_, 2);
v___x_2441_ = l_Lean_Parser_ParserExtension_instInhabitedState_default;
v___x_2442_ = l_Lean_ScopedEnvExtension_getState___redArg(v___x_2441_, v___x_2437_, v_env_2435_, v_asyncMode_2440_);
v_categories_2443_ = lean_ctor_get(v___x_2442_, 2);
lean_inc_ref(v_categories_2443_);
lean_dec(v___x_2442_);
v___x_2444_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Parser_addLeadingParser_spec__0___redArg(v_categories_2443_, v_catName_2436_);
lean_dec_ref(v_categories_2443_);
if (lean_obj_tag(v___x_2444_) == 0)
{
uint8_t v___x_2445_; 
v___x_2445_ = 0;
return v___x_2445_;
}
else
{
lean_object* v_val_2446_; uint8_t v_behavior_2447_; 
v_val_2446_ = lean_ctor_get(v___x_2444_, 0);
lean_inc(v_val_2446_);
lean_dec_ref_known(v___x_2444_, 1);
v_behavior_2447_ = lean_ctor_get_uint8(v_val_2446_, sizeof(void*)*3);
lean_dec(v_val_2446_);
return v_behavior_2447_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_leadingIdentBehavior___boxed(lean_object* v_env_2448_, lean_object* v_catName_2449_){
_start:
{
uint8_t v_res_2450_; lean_object* v_r_2451_; 
v_res_2450_ = l_Lean_Parser_leadingIdentBehavior(v_env_2448_, v_catName_2449_);
lean_dec(v_catName_2449_);
v_r_2451_ = lean_box(v_res_2450_);
return v_r_2451_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Parser_evalParserConstUnsafe_spec__0(lean_object* v_x_2452_, lean_object* v_x_2453_){
_start:
{
if (lean_obj_tag(v_x_2453_) == 0)
{
return v_x_2452_;
}
else
{
lean_object* v_head_2454_; lean_object* v_tail_2455_; lean_object* v___x_2456_; 
v_head_2454_ = lean_ctor_get(v_x_2453_, 0);
lean_inc_n(v_head_2454_, 2);
v_tail_2455_ = lean_ctor_get(v_x_2453_, 1);
lean_inc(v_tail_2455_);
lean_dec_ref_known(v_x_2453_, 2);
v___x_2456_ = l_Lean_Data_Trie_insert___redArg(v_x_2452_, v_head_2454_, v_head_2454_);
lean_dec(v_head_2454_);
v_x_2452_ = v___x_2456_;
v_x_2453_ = v_tail_2455_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_evalParserConstUnsafe___lam__0(lean_object* v_info_2458_, lean_object* v_ctx_2459_){
_start:
{
lean_object* v_toInputContext_2460_; lean_object* v_toParserModuleContext_2461_; lean_object* v_toCacheableParserContext_2462_; lean_object* v_tokens_2463_; lean_object* v___x_2465_; uint8_t v_isShared_2466_; uint8_t v_isSharedCheck_2474_; 
v_toInputContext_2460_ = lean_ctor_get(v_ctx_2459_, 0);
v_toParserModuleContext_2461_ = lean_ctor_get(v_ctx_2459_, 1);
v_toCacheableParserContext_2462_ = lean_ctor_get(v_ctx_2459_, 2);
v_tokens_2463_ = lean_ctor_get(v_ctx_2459_, 3);
v_isSharedCheck_2474_ = !lean_is_exclusive(v_ctx_2459_);
if (v_isSharedCheck_2474_ == 0)
{
v___x_2465_ = v_ctx_2459_;
v_isShared_2466_ = v_isSharedCheck_2474_;
goto v_resetjp_2464_;
}
else
{
lean_inc(v_tokens_2463_);
lean_inc(v_toCacheableParserContext_2462_);
lean_inc(v_toParserModuleContext_2461_);
lean_inc(v_toInputContext_2460_);
lean_dec(v_ctx_2459_);
v___x_2465_ = lean_box(0);
v_isShared_2466_ = v_isSharedCheck_2474_;
goto v_resetjp_2464_;
}
v_resetjp_2464_:
{
lean_object* v_collectTokens_2467_; lean_object* v___x_2468_; lean_object* v___x_2469_; lean_object* v___x_2470_; lean_object* v___x_2472_; 
v_collectTokens_2467_ = lean_ctor_get(v_info_2458_, 0);
lean_inc_ref(v_collectTokens_2467_);
lean_dec_ref(v_info_2458_);
v___x_2468_ = lean_box(0);
v___x_2469_ = lean_apply_1(v_collectTokens_2467_, v___x_2468_);
v___x_2470_ = l_List_foldl___at___00Lean_Parser_evalParserConstUnsafe_spec__0(v_tokens_2463_, v___x_2469_);
if (v_isShared_2466_ == 0)
{
lean_ctor_set(v___x_2465_, 3, v___x_2470_);
v___x_2472_ = v___x_2465_;
goto v_reusejp_2471_;
}
else
{
lean_object* v_reuseFailAlloc_2473_; 
v_reuseFailAlloc_2473_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_2473_, 0, v_toInputContext_2460_);
lean_ctor_set(v_reuseFailAlloc_2473_, 1, v_toParserModuleContext_2461_);
lean_ctor_set(v_reuseFailAlloc_2473_, 2, v_toCacheableParserContext_2462_);
lean_ctor_set(v_reuseFailAlloc_2473_, 3, v___x_2470_);
v___x_2472_ = v_reuseFailAlloc_2473_;
goto v_reusejp_2471_;
}
v_reusejp_2471_:
{
return v___x_2472_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_evalParserConstUnsafe___lam__1(lean_object* v_categories_2475_, lean_object* v_declName_2476_, lean_object* v___x_2477_, lean_object* v_ctx_2478_, lean_object* v_s_2479_, lean_object* v_evalFallback_x3f_2480_){
_start:
{
lean_object* v___x_2482_; 
v___x_2482_ = l_Lean_Parser_mkParserOfConstant(v_categories_2475_, v_declName_2476_, v___x_2477_);
if (lean_obj_tag(v___x_2482_) == 0)
{
lean_object* v_a_2483_; lean_object* v_snd_2484_; lean_object* v_info_2485_; lean_object* v_fn_2486_; lean_object* v___f_2487_; lean_object* v___x_2488_; 
lean_dec(v_evalFallback_x3f_2480_);
v_a_2483_ = lean_ctor_get(v___x_2482_, 0);
lean_inc(v_a_2483_);
lean_dec_ref_known(v___x_2482_, 1);
v_snd_2484_ = lean_ctor_get(v_a_2483_, 1);
lean_inc(v_snd_2484_);
lean_dec(v_a_2483_);
v_info_2485_ = lean_ctor_get(v_snd_2484_, 0);
lean_inc_ref(v_info_2485_);
v_fn_2486_ = lean_ctor_get(v_snd_2484_, 1);
lean_inc_ref(v_fn_2486_);
lean_dec(v_snd_2484_);
v___f_2487_ = lean_alloc_closure((void*)(l_Lean_Parser_evalParserConstUnsafe___lam__0), 2, 1);
lean_closure_set(v___f_2487_, 0, v_info_2485_);
v___x_2488_ = l_Lean_Parser_adaptUncacheableContextFn(v___f_2487_, v_fn_2486_, v_ctx_2478_, v_s_2479_);
return v___x_2488_;
}
else
{
if (lean_obj_tag(v_evalFallback_x3f_2480_) == 1)
{
lean_object* v_val_2489_; lean_object* v___x_2490_; 
lean_dec_ref_known(v___x_2482_, 1);
v_val_2489_ = lean_ctor_get(v_evalFallback_x3f_2480_, 0);
lean_inc(v_val_2489_);
lean_dec_ref_known(v_evalFallback_x3f_2480_, 1);
v___x_2490_ = lean_apply_2(v_val_2489_, v_ctx_2478_, v_s_2479_);
return v___x_2490_;
}
else
{
lean_object* v_a_2491_; lean_object* v___x_2492_; lean_object* v___x_2493_; uint8_t v___x_2494_; lean_object* v___x_2495_; 
lean_dec(v_evalFallback_x3f_2480_);
lean_dec_ref(v_ctx_2478_);
v_a_2491_ = lean_ctor_get(v___x_2482_, 0);
lean_inc(v_a_2491_);
lean_dec_ref_known(v___x_2482_, 1);
v___x_2492_ = lean_io_error_to_string(v_a_2491_);
v___x_2493_ = lean_box(0);
v___x_2494_ = 1;
v___x_2495_ = l_Lean_Parser_ParserState_mkUnexpectedError(v_s_2479_, v___x_2492_, v___x_2493_, v___x_2494_);
return v___x_2495_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_evalParserConstUnsafe___lam__1___boxed(lean_object* v_categories_2496_, lean_object* v_declName_2497_, lean_object* v___x_2498_, lean_object* v_ctx_2499_, lean_object* v_s_2500_, lean_object* v_evalFallback_x3f_2501_, lean_object* v___y_2502_){
_start:
{
lean_object* v_res_2503_; 
v_res_2503_ = l_Lean_Parser_evalParserConstUnsafe___lam__1(v_categories_2496_, v_declName_2497_, v___x_2498_, v_ctx_2499_, v_s_2500_, v_evalFallback_x3f_2501_);
lean_dec_ref(v___x_2498_);
return v_res_2503_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_evalParserConstUnsafe(lean_object* v_declName_2504_, lean_object* v_evalFallback_x3f_2505_, lean_object* v_ctx_2506_, lean_object* v_s_2507_){
_start:
{
lean_object* v_toParserModuleContext_2508_; lean_object* v_env_2509_; lean_object* v_options_2510_; lean_object* v___x_2511_; lean_object* v_ext_2512_; lean_object* v_toEnvExtension_2513_; lean_object* v_asyncMode_2514_; lean_object* v___x_2515_; lean_object* v___x_2516_; lean_object* v_categories_2517_; lean_object* v___x_2518_; lean_object* v___f_2519_; lean_object* v___x_2520_; 
v_toParserModuleContext_2508_ = lean_ctor_get(v_ctx_2506_, 1);
v_env_2509_ = lean_ctor_get(v_toParserModuleContext_2508_, 0);
v_options_2510_ = lean_ctor_get(v_toParserModuleContext_2508_, 1);
v___x_2511_ = l_Lean_Parser_parserExtension;
v_ext_2512_ = lean_ctor_get(v___x_2511_, 1);
v_toEnvExtension_2513_ = lean_ctor_get(v_ext_2512_, 0);
v_asyncMode_2514_ = lean_ctor_get(v_toEnvExtension_2513_, 2);
v___x_2515_ = l_Lean_Parser_ParserExtension_instInhabitedState_default;
lean_inc_ref_n(v_env_2509_, 2);
v___x_2516_ = l_Lean_ScopedEnvExtension_getState___redArg(v___x_2515_, v___x_2511_, v_env_2509_, v_asyncMode_2514_);
v_categories_2517_ = lean_ctor_get(v___x_2516_, 2);
lean_inc_ref(v_categories_2517_);
lean_dec(v___x_2516_);
lean_inc_ref(v_options_2510_);
v___x_2518_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2518_, 0, v_env_2509_);
lean_ctor_set(v___x_2518_, 1, v_options_2510_);
v___f_2519_ = lean_alloc_closure((void*)(l_Lean_Parser_evalParserConstUnsafe___lam__1___boxed), 7, 6);
lean_closure_set(v___f_2519_, 0, v_categories_2517_);
lean_closure_set(v___f_2519_, 1, v_declName_2504_);
lean_closure_set(v___f_2519_, 2, v___x_2518_);
lean_closure_set(v___f_2519_, 3, v_ctx_2506_);
lean_closure_set(v___f_2519_, 4, v_s_2507_);
lean_closure_set(v___f_2519_, 5, v_evalFallback_x3f_2505_);
v___x_2520_ = l_unsafeBaseIO___redArg(v___f_2519_);
return v___x_2520_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Parser_Extension_0__Lean_Parser_initFn_00___x40_Lean_Parser_Extension_4243742150____hygCtx___hyg_4__spec__0(lean_object* v_name_2521_, lean_object* v_decl_2522_, lean_object* v_ref_2523_){
_start:
{
lean_object* v_defValue_2525_; lean_object* v_descr_2526_; lean_object* v_deprecation_x3f_2527_; lean_object* v___x_2528_; uint8_t v___x_2529_; lean_object* v___x_2530_; lean_object* v___x_2531_; 
v_defValue_2525_ = lean_ctor_get(v_decl_2522_, 0);
v_descr_2526_ = lean_ctor_get(v_decl_2522_, 1);
v_deprecation_x3f_2527_ = lean_ctor_get(v_decl_2522_, 2);
v___x_2528_ = lean_alloc_ctor(1, 0, 1);
v___x_2529_ = lean_unbox(v_defValue_2525_);
lean_ctor_set_uint8(v___x_2528_, 0, v___x_2529_);
lean_inc(v_deprecation_x3f_2527_);
lean_inc_ref(v_descr_2526_);
lean_inc_n(v_name_2521_, 2);
v___x_2530_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2530_, 0, v_name_2521_);
lean_ctor_set(v___x_2530_, 1, v_ref_2523_);
lean_ctor_set(v___x_2530_, 2, v___x_2528_);
lean_ctor_set(v___x_2530_, 3, v_descr_2526_);
lean_ctor_set(v___x_2530_, 4, v_deprecation_x3f_2527_);
v___x_2531_ = lean_register_option(v_name_2521_, v___x_2530_);
if (lean_obj_tag(v___x_2531_) == 0)
{
lean_object* v___x_2533_; uint8_t v_isShared_2534_; uint8_t v_isSharedCheck_2539_; 
v_isSharedCheck_2539_ = !lean_is_exclusive(v___x_2531_);
if (v_isSharedCheck_2539_ == 0)
{
lean_object* v_unused_2540_; 
v_unused_2540_ = lean_ctor_get(v___x_2531_, 0);
lean_dec(v_unused_2540_);
v___x_2533_ = v___x_2531_;
v_isShared_2534_ = v_isSharedCheck_2539_;
goto v_resetjp_2532_;
}
else
{
lean_dec(v___x_2531_);
v___x_2533_ = lean_box(0);
v_isShared_2534_ = v_isSharedCheck_2539_;
goto v_resetjp_2532_;
}
v_resetjp_2532_:
{
lean_object* v___x_2535_; lean_object* v___x_2537_; 
lean_inc(v_defValue_2525_);
v___x_2535_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2535_, 0, v_name_2521_);
lean_ctor_set(v___x_2535_, 1, v_defValue_2525_);
if (v_isShared_2534_ == 0)
{
lean_ctor_set(v___x_2533_, 0, v___x_2535_);
v___x_2537_ = v___x_2533_;
goto v_reusejp_2536_;
}
else
{
lean_object* v_reuseFailAlloc_2538_; 
v_reuseFailAlloc_2538_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2538_, 0, v___x_2535_);
v___x_2537_ = v_reuseFailAlloc_2538_;
goto v_reusejp_2536_;
}
v_reusejp_2536_:
{
return v___x_2537_;
}
}
}
else
{
lean_object* v_a_2541_; lean_object* v___x_2543_; uint8_t v_isShared_2544_; uint8_t v_isSharedCheck_2548_; 
lean_dec(v_name_2521_);
v_a_2541_ = lean_ctor_get(v___x_2531_, 0);
v_isSharedCheck_2548_ = !lean_is_exclusive(v___x_2531_);
if (v_isSharedCheck_2548_ == 0)
{
v___x_2543_ = v___x_2531_;
v_isShared_2544_ = v_isSharedCheck_2548_;
goto v_resetjp_2542_;
}
else
{
lean_inc(v_a_2541_);
lean_dec(v___x_2531_);
v___x_2543_ = lean_box(0);
v_isShared_2544_ = v_isSharedCheck_2548_;
goto v_resetjp_2542_;
}
v_resetjp_2542_:
{
lean_object* v___x_2546_; 
if (v_isShared_2544_ == 0)
{
v___x_2546_ = v___x_2543_;
goto v_reusejp_2545_;
}
else
{
lean_object* v_reuseFailAlloc_2547_; 
v_reuseFailAlloc_2547_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2547_, 0, v_a_2541_);
v___x_2546_ = v_reuseFailAlloc_2547_;
goto v_reusejp_2545_;
}
v_reusejp_2545_:
{
return v___x_2546_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Parser_Extension_0__Lean_Parser_initFn_00___x40_Lean_Parser_Extension_4243742150____hygCtx___hyg_4__spec__0___boxed(lean_object* v_name_2549_, lean_object* v_decl_2550_, lean_object* v_ref_2551_, lean_object* v_a_2552_){
_start:
{
lean_object* v_res_2553_; 
v_res_2553_ = l_Lean_Option_register___at___00__private_Lean_Parser_Extension_0__Lean_Parser_initFn_00___x40_Lean_Parser_Extension_4243742150____hygCtx___hyg_4__spec__0(v_name_2549_, v_decl_2550_, v_ref_2551_);
lean_dec_ref(v_decl_2550_);
return v_res_2553_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn_00___x40_Lean_Parser_Extension_4243742150____hygCtx___hyg_4_(){
_start:
{
lean_object* v___x_2571_; lean_object* v___x_2572_; lean_object* v___x_2573_; lean_object* v___x_2574_; 
v___x_2571_ = ((lean_object*)(l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Extension_4243742150____hygCtx___hyg_4_));
v___x_2572_ = ((lean_object*)(l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__4_00___x40_Lean_Parser_Extension_4243742150____hygCtx___hyg_4_));
v___x_2573_ = ((lean_object*)(l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__5_00___x40_Lean_Parser_Extension_4243742150____hygCtx___hyg_4_));
v___x_2574_ = l_Lean_Option_register___at___00__private_Lean_Parser_Extension_0__Lean_Parser_initFn_00___x40_Lean_Parser_Extension_4243742150____hygCtx___hyg_4__spec__0(v___x_2571_, v___x_2572_, v___x_2573_);
return v___x_2574_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn_00___x40_Lean_Parser_Extension_4243742150____hygCtx___hyg_4____boxed(lean_object* v_a_2575_){
_start:
{
lean_object* v_res_2576_; 
v_res_2576_ = l___private_Lean_Parser_Extension_0__Lean_Parser_initFn_00___x40_Lean_Parser_Extension_4243742150____hygCtx___hyg_4_();
return v_res_2576_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Parser_evalInsideQuot_spec__0(lean_object* v_o_2580_, lean_object* v_k_2581_, uint8_t v_v_2582_){
_start:
{
lean_object* v_map_2583_; uint8_t v_hasTrace_2584_; lean_object* v___x_2586_; uint8_t v_isShared_2587_; uint8_t v_isSharedCheck_2598_; 
v_map_2583_ = lean_ctor_get(v_o_2580_, 0);
v_hasTrace_2584_ = lean_ctor_get_uint8(v_o_2580_, sizeof(void*)*1);
v_isSharedCheck_2598_ = !lean_is_exclusive(v_o_2580_);
if (v_isSharedCheck_2598_ == 0)
{
v___x_2586_ = v_o_2580_;
v_isShared_2587_ = v_isSharedCheck_2598_;
goto v_resetjp_2585_;
}
else
{
lean_inc(v_map_2583_);
lean_dec(v_o_2580_);
v___x_2586_ = lean_box(0);
v_isShared_2587_ = v_isSharedCheck_2598_;
goto v_resetjp_2585_;
}
v_resetjp_2585_:
{
lean_object* v___x_2588_; lean_object* v___x_2589_; 
v___x_2588_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_2588_, 0, v_v_2582_);
lean_inc(v_k_2581_);
v___x_2589_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_k_2581_, v___x_2588_, v_map_2583_);
if (v_hasTrace_2584_ == 0)
{
lean_object* v___x_2590_; uint8_t v___x_2591_; lean_object* v___x_2593_; 
v___x_2590_ = ((lean_object*)(l_Lean_Options_set___at___00Lean_Parser_evalInsideQuot_spec__0___closed__1));
v___x_2591_ = l_Lean_Name_isPrefixOf(v___x_2590_, v_k_2581_);
lean_dec(v_k_2581_);
if (v_isShared_2587_ == 0)
{
lean_ctor_set(v___x_2586_, 0, v___x_2589_);
v___x_2593_ = v___x_2586_;
goto v_reusejp_2592_;
}
else
{
lean_object* v_reuseFailAlloc_2594_; 
v_reuseFailAlloc_2594_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_2594_, 0, v___x_2589_);
v___x_2593_ = v_reuseFailAlloc_2594_;
goto v_reusejp_2592_;
}
v_reusejp_2592_:
{
lean_ctor_set_uint8(v___x_2593_, sizeof(void*)*1, v___x_2591_);
return v___x_2593_;
}
}
else
{
lean_object* v___x_2596_; 
lean_dec(v_k_2581_);
if (v_isShared_2587_ == 0)
{
lean_ctor_set(v___x_2586_, 0, v___x_2589_);
v___x_2596_ = v___x_2586_;
goto v_reusejp_2595_;
}
else
{
lean_object* v_reuseFailAlloc_2597_; 
v_reuseFailAlloc_2597_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_2597_, 0, v___x_2589_);
lean_ctor_set_uint8(v_reuseFailAlloc_2597_, sizeof(void*)*1, v_hasTrace_2584_);
v___x_2596_ = v_reuseFailAlloc_2597_;
goto v_reusejp_2595_;
}
v_reusejp_2595_:
{
return v___x_2596_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Parser_evalInsideQuot_spec__0___boxed(lean_object* v_o_2599_, lean_object* v_k_2600_, lean_object* v_v_2601_){
_start:
{
uint8_t v_v_boxed_2602_; lean_object* v_res_2603_; 
v_v_boxed_2602_ = lean_unbox(v_v_2601_);
v_res_2603_ = l_Lean_Options_set___at___00Lean_Parser_evalInsideQuot_spec__0(v_o_2599_, v_k_2600_, v_v_boxed_2602_);
return v_res_2603_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Parser_evalInsideQuot_spec__1(lean_object* v_opts_2604_, lean_object* v_opt_2605_){
_start:
{
lean_object* v_name_2606_; lean_object* v_defValue_2607_; lean_object* v_map_2608_; lean_object* v___x_2609_; 
v_name_2606_ = lean_ctor_get(v_opt_2605_, 0);
v_defValue_2607_ = lean_ctor_get(v_opt_2605_, 1);
v_map_2608_ = lean_ctor_get(v_opts_2604_, 0);
v___x_2609_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_2608_, v_name_2606_);
if (lean_obj_tag(v___x_2609_) == 0)
{
uint8_t v___x_2610_; 
v___x_2610_ = lean_unbox(v_defValue_2607_);
return v___x_2610_;
}
else
{
lean_object* v_val_2611_; 
v_val_2611_ = lean_ctor_get(v___x_2609_, 0);
lean_inc(v_val_2611_);
lean_dec_ref_known(v___x_2609_, 1);
if (lean_obj_tag(v_val_2611_) == 1)
{
uint8_t v_v_2612_; 
v_v_2612_ = lean_ctor_get_uint8(v_val_2611_, 0);
lean_dec_ref_known(v_val_2611_, 0);
return v_v_2612_;
}
else
{
uint8_t v___x_2613_; 
lean_dec(v_val_2611_);
v___x_2613_ = lean_unbox(v_defValue_2607_);
return v___x_2613_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Parser_evalInsideQuot_spec__1___boxed(lean_object* v_opts_2614_, lean_object* v_opt_2615_){
_start:
{
uint8_t v_res_2616_; lean_object* v_r_2617_; 
v_res_2616_ = l_Lean_Option_get___at___00Lean_Parser_evalInsideQuot_spec__1(v_opts_2614_, v_opt_2615_);
lean_dec_ref(v_opt_2615_);
lean_dec_ref(v_opts_2614_);
v_r_2617_ = lean_box(v_res_2616_);
return v_r_2617_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_evalInsideQuot___lam__0(uint8_t v_suppressInsideQuot_2623_, lean_object* v_ctx_2624_){
_start:
{
lean_object* v_toParserModuleContext_2625_; lean_object* v_toInputContext_2626_; lean_object* v_toCacheableParserContext_2627_; lean_object* v_tokens_2628_; lean_object* v___x_2630_; uint8_t v_isShared_2631_; uint8_t v_isSharedCheck_2648_; 
v_toParserModuleContext_2625_ = lean_ctor_get(v_ctx_2624_, 1);
v_toInputContext_2626_ = lean_ctor_get(v_ctx_2624_, 0);
v_toCacheableParserContext_2627_ = lean_ctor_get(v_ctx_2624_, 2);
v_tokens_2628_ = lean_ctor_get(v_ctx_2624_, 3);
v_isSharedCheck_2648_ = !lean_is_exclusive(v_ctx_2624_);
if (v_isSharedCheck_2648_ == 0)
{
v___x_2630_ = v_ctx_2624_;
v_isShared_2631_ = v_isSharedCheck_2648_;
goto v_resetjp_2629_;
}
else
{
lean_inc(v_tokens_2628_);
lean_inc(v_toCacheableParserContext_2627_);
lean_inc(v_toParserModuleContext_2625_);
lean_inc(v_toInputContext_2626_);
lean_dec(v_ctx_2624_);
v___x_2630_ = lean_box(0);
v_isShared_2631_ = v_isSharedCheck_2648_;
goto v_resetjp_2629_;
}
v_resetjp_2629_:
{
lean_object* v_env_2632_; lean_object* v_options_2633_; lean_object* v_currNamespace_2634_; lean_object* v_openDecls_2635_; lean_object* v___x_2637_; uint8_t v_isShared_2638_; uint8_t v_isSharedCheck_2647_; 
v_env_2632_ = lean_ctor_get(v_toParserModuleContext_2625_, 0);
v_options_2633_ = lean_ctor_get(v_toParserModuleContext_2625_, 1);
v_currNamespace_2634_ = lean_ctor_get(v_toParserModuleContext_2625_, 2);
v_openDecls_2635_ = lean_ctor_get(v_toParserModuleContext_2625_, 3);
v_isSharedCheck_2647_ = !lean_is_exclusive(v_toParserModuleContext_2625_);
if (v_isSharedCheck_2647_ == 0)
{
v___x_2637_ = v_toParserModuleContext_2625_;
v_isShared_2638_ = v_isSharedCheck_2647_;
goto v_resetjp_2636_;
}
else
{
lean_inc(v_openDecls_2635_);
lean_inc(v_currNamespace_2634_);
lean_inc(v_options_2633_);
lean_inc(v_env_2632_);
lean_dec(v_toParserModuleContext_2625_);
v___x_2637_ = lean_box(0);
v_isShared_2638_ = v_isSharedCheck_2647_;
goto v_resetjp_2636_;
}
v_resetjp_2636_:
{
lean_object* v___x_2639_; lean_object* v___x_2640_; lean_object* v___x_2642_; 
v___x_2639_ = ((lean_object*)(l_Lean_Parser_evalInsideQuot___lam__0___closed__2));
v___x_2640_ = l_Lean_Options_set___at___00Lean_Parser_evalInsideQuot_spec__0(v_options_2633_, v___x_2639_, v_suppressInsideQuot_2623_);
if (v_isShared_2638_ == 0)
{
lean_ctor_set(v___x_2637_, 1, v___x_2640_);
v___x_2642_ = v___x_2637_;
goto v_reusejp_2641_;
}
else
{
lean_object* v_reuseFailAlloc_2646_; 
v_reuseFailAlloc_2646_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_2646_, 0, v_env_2632_);
lean_ctor_set(v_reuseFailAlloc_2646_, 1, v___x_2640_);
lean_ctor_set(v_reuseFailAlloc_2646_, 2, v_currNamespace_2634_);
lean_ctor_set(v_reuseFailAlloc_2646_, 3, v_openDecls_2635_);
v___x_2642_ = v_reuseFailAlloc_2646_;
goto v_reusejp_2641_;
}
v_reusejp_2641_:
{
lean_object* v___x_2644_; 
if (v_isShared_2631_ == 0)
{
lean_ctor_set(v___x_2630_, 1, v___x_2642_);
v___x_2644_ = v___x_2630_;
goto v_reusejp_2643_;
}
else
{
lean_object* v_reuseFailAlloc_2645_; 
v_reuseFailAlloc_2645_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_2645_, 0, v_toInputContext_2626_);
lean_ctor_set(v_reuseFailAlloc_2645_, 1, v___x_2642_);
lean_ctor_set(v_reuseFailAlloc_2645_, 2, v_toCacheableParserContext_2627_);
lean_ctor_set(v_reuseFailAlloc_2645_, 3, v_tokens_2628_);
v___x_2644_ = v_reuseFailAlloc_2645_;
goto v_reusejp_2643_;
}
v_reusejp_2643_:
{
return v___x_2644_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_evalInsideQuot___lam__0___boxed(lean_object* v_suppressInsideQuot_2649_, lean_object* v_ctx_2650_){
_start:
{
uint8_t v_suppressInsideQuot_boxed_2651_; lean_object* v_res_2652_; 
v_suppressInsideQuot_boxed_2651_ = lean_unbox(v_suppressInsideQuot_2649_);
v_res_2652_ = l_Lean_Parser_evalInsideQuot___lam__0(v_suppressInsideQuot_boxed_2651_, v_ctx_2650_);
return v_res_2652_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_evalInsideQuot___lam__1(lean_object* v_fn_2653_, lean_object* v_declName_2654_, lean_object* v___y_2655_, lean_object* v___y_2656_){
_start:
{
lean_object* v_toCacheableParserContext_2657_; lean_object* v_toParserModuleContext_2658_; lean_object* v_quotDepth_2659_; uint8_t v_suppressInsideQuot_2660_; lean_object* v___x_2661_; uint8_t v___x_2662_; 
v_toCacheableParserContext_2657_ = lean_ctor_get(v___y_2655_, 2);
v_toParserModuleContext_2658_ = lean_ctor_get(v___y_2655_, 1);
v_quotDepth_2659_ = lean_ctor_get(v_toCacheableParserContext_2657_, 1);
v_suppressInsideQuot_2660_ = lean_ctor_get_uint8(v_toCacheableParserContext_2657_, sizeof(void*)*4);
v___x_2661_ = lean_unsigned_to_nat(0u);
v___x_2662_ = lean_nat_dec_lt(v___x_2661_, v_quotDepth_2659_);
if (v___x_2662_ == 0)
{
lean_object* v___x_2663_; 
lean_dec(v_declName_2654_);
v___x_2663_ = lean_apply_2(v_fn_2653_, v___y_2655_, v___y_2656_);
return v___x_2663_;
}
else
{
if (v_suppressInsideQuot_2660_ == 0)
{
lean_object* v_env_2664_; lean_object* v_options_2665_; lean_object* v___x_2666_; uint8_t v___x_2667_; 
v_env_2664_ = lean_ctor_get(v_toParserModuleContext_2658_, 0);
v_options_2665_ = lean_ctor_get(v_toParserModuleContext_2658_, 1);
v___x_2666_ = l_Lean_Parser_internal_parseQuotWithCurrentStage;
v___x_2667_ = l_Lean_Option_get___at___00Lean_Parser_evalInsideQuot_spec__1(v_options_2665_, v___x_2666_);
if (v___x_2667_ == 0)
{
lean_object* v___x_2668_; 
lean_dec(v_declName_2654_);
v___x_2668_ = lean_apply_2(v_fn_2653_, v___y_2655_, v___y_2656_);
return v___x_2668_;
}
else
{
uint8_t v___x_2669_; 
lean_inc(v_declName_2654_);
lean_inc_ref(v_env_2664_);
v___x_2669_ = l_Lean_Environment_contains(v_env_2664_, v_declName_2654_, v___x_2667_);
if (v___x_2669_ == 0)
{
lean_object* v___x_2670_; 
lean_dec(v_declName_2654_);
v___x_2670_ = lean_apply_2(v_fn_2653_, v___y_2655_, v___y_2656_);
return v___x_2670_;
}
else
{
lean_object* v___x_2671_; lean_object* v___f_2672_; lean_object* v___x_2673_; lean_object* v___x_2674_; lean_object* v___x_2675_; 
v___x_2671_ = lean_box(v_suppressInsideQuot_2660_);
v___f_2672_ = lean_alloc_closure((void*)(l_Lean_Parser_evalInsideQuot___lam__0___boxed), 2, 1);
lean_closure_set(v___f_2672_, 0, v___x_2671_);
v___x_2673_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2673_, 0, v_fn_2653_);
v___x_2674_ = lean_alloc_closure((void*)(l_Lean_Parser_evalParserConstUnsafe), 4, 2);
lean_closure_set(v___x_2674_, 0, v_declName_2654_);
lean_closure_set(v___x_2674_, 1, v___x_2673_);
v___x_2675_ = l_Lean_Parser_adaptUncacheableContextFn(v___f_2672_, v___x_2674_, v___y_2655_, v___y_2656_);
return v___x_2675_;
}
}
}
else
{
lean_object* v___x_2676_; 
lean_dec(v_declName_2654_);
v___x_2676_ = lean_apply_2(v_fn_2653_, v___y_2655_, v___y_2656_);
return v___x_2676_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_evalInsideQuot(lean_object* v_declName_2677_, lean_object* v_p_2678_){
_start:
{
lean_object* v_info_2679_; lean_object* v_fn_2680_; lean_object* v___x_2682_; uint8_t v_isShared_2683_; uint8_t v_isSharedCheck_2688_; 
v_info_2679_ = lean_ctor_get(v_p_2678_, 0);
v_fn_2680_ = lean_ctor_get(v_p_2678_, 1);
v_isSharedCheck_2688_ = !lean_is_exclusive(v_p_2678_);
if (v_isSharedCheck_2688_ == 0)
{
v___x_2682_ = v_p_2678_;
v_isShared_2683_ = v_isSharedCheck_2688_;
goto v_resetjp_2681_;
}
else
{
lean_inc(v_fn_2680_);
lean_inc(v_info_2679_);
lean_dec(v_p_2678_);
v___x_2682_ = lean_box(0);
v_isShared_2683_ = v_isSharedCheck_2688_;
goto v_resetjp_2681_;
}
v_resetjp_2681_:
{
lean_object* v___f_2684_; lean_object* v___x_2686_; 
v___f_2684_ = lean_alloc_closure((void*)(l_Lean_Parser_evalInsideQuot___lam__1), 4, 2);
lean_closure_set(v___f_2684_, 0, v_fn_2680_);
lean_closure_set(v___f_2684_, 1, v_declName_2677_);
if (v_isShared_2683_ == 0)
{
lean_ctor_set(v___x_2682_, 1, v___f_2684_);
v___x_2686_ = v___x_2682_;
goto v_reusejp_2685_;
}
else
{
lean_object* v_reuseFailAlloc_2687_; 
v_reuseFailAlloc_2687_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2687_, 0, v_info_2679_);
lean_ctor_set(v_reuseFailAlloc_2687_, 1, v___f_2684_);
v___x_2686_ = v_reuseFailAlloc_2687_;
goto v_reusejp_2685_;
}
v_reusejp_2685_:
{
return v___x_2686_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_addBuiltinParser(lean_object* v_catName_2689_, lean_object* v_declName_2690_, uint8_t v_leading_2691_, lean_object* v_p_2692_, lean_object* v_prio_2693_){
_start:
{
lean_object* v_p_2695_; lean_object* v___x_2696_; lean_object* v___x_2697_; lean_object* v___x_2698_; lean_object* v___x_2699_; 
lean_inc_n(v_declName_2690_, 2);
v_p_2695_ = l_Lean_Parser_evalInsideQuot(v_declName_2690_, v_p_2692_);
v___x_2696_ = l_Lean_Parser_builtinParserCategoriesRef;
v___x_2697_ = lean_st_ref_get(v___x_2696_);
lean_inc_ref(v_p_2695_);
v___x_2698_ = l_Lean_Parser_addParser(v___x_2697_, v_catName_2689_, v_declName_2690_, v_leading_2691_, v_p_2695_, v_prio_2693_);
v___x_2699_ = l_IO_ofExcept___at___00__private_Lean_Parser_Extension_0__Lean_Parser_addBuiltinParserCategory_spec__0___redArg(v___x_2698_);
if (lean_obj_tag(v___x_2699_) == 0)
{
lean_object* v_a_2700_; lean_object* v___x_2701_; lean_object* v_info_2702_; lean_object* v_collectKinds_2703_; lean_object* v___x_2704_; lean_object* v___x_2705_; lean_object* v___x_2706_; lean_object* v___x_2707_; lean_object* v___x_2708_; 
v_a_2700_ = lean_ctor_get(v___x_2699_, 0);
lean_inc(v_a_2700_);
lean_dec_ref_known(v___x_2699_, 1);
v___x_2701_ = lean_st_ref_swap(v___x_2696_, v_a_2700_);
lean_dec(v___x_2701_);
v_info_2702_ = lean_ctor_get(v_p_2695_, 0);
lean_inc_ref(v_info_2702_);
lean_dec_ref(v_p_2695_);
v_collectKinds_2703_ = lean_ctor_get(v_info_2702_, 1);
v___x_2704_ = l_Lean_Parser_builtinSyntaxNodeKindSetRef;
v___x_2705_ = lean_st_ref_take(v___x_2704_);
lean_inc_ref(v_collectKinds_2703_);
v___x_2706_ = lean_apply_1(v_collectKinds_2703_, v___x_2705_);
v___x_2707_ = lean_st_ref_put(v___x_2704_, v___x_2706_);
v___x_2708_ = l___private_Lean_Parser_Extension_0__Lean_Parser_updateBuiltinTokens(v_info_2702_, v_declName_2690_);
return v___x_2708_;
}
else
{
lean_object* v_a_2709_; lean_object* v___x_2711_; uint8_t v_isShared_2712_; uint8_t v_isSharedCheck_2716_; 
lean_dec_ref(v_p_2695_);
lean_dec(v_declName_2690_);
v_a_2709_ = lean_ctor_get(v___x_2699_, 0);
v_isSharedCheck_2716_ = !lean_is_exclusive(v___x_2699_);
if (v_isSharedCheck_2716_ == 0)
{
v___x_2711_ = v___x_2699_;
v_isShared_2712_ = v_isSharedCheck_2716_;
goto v_resetjp_2710_;
}
else
{
lean_inc(v_a_2709_);
lean_dec(v___x_2699_);
v___x_2711_ = lean_box(0);
v_isShared_2712_ = v_isSharedCheck_2716_;
goto v_resetjp_2710_;
}
v_resetjp_2710_:
{
lean_object* v___x_2714_; 
if (v_isShared_2712_ == 0)
{
v___x_2714_ = v___x_2711_;
goto v_reusejp_2713_;
}
else
{
lean_object* v_reuseFailAlloc_2715_; 
v_reuseFailAlloc_2715_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2715_, 0, v_a_2709_);
v___x_2714_ = v_reuseFailAlloc_2715_;
goto v_reusejp_2713_;
}
v_reusejp_2713_:
{
return v___x_2714_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_addBuiltinParser___boxed(lean_object* v_catName_2717_, lean_object* v_declName_2718_, lean_object* v_leading_2719_, lean_object* v_p_2720_, lean_object* v_prio_2721_, lean_object* v_a_2722_){
_start:
{
uint8_t v_leading_boxed_2723_; lean_object* v_res_2724_; 
v_leading_boxed_2723_ = lean_unbox(v_leading_2719_);
v_res_2724_ = l_Lean_Parser_addBuiltinParser(v_catName_2717_, v_declName_2718_, v_leading_boxed_2723_, v_p_2720_, v_prio_2721_);
return v_res_2724_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_addBuiltinLeadingParser(lean_object* v_catName_2725_, lean_object* v_declName_2726_, lean_object* v_p_2727_, lean_object* v_prio_2728_){
_start:
{
uint8_t v___x_2730_; lean_object* v___x_2731_; 
v___x_2730_ = 1;
v___x_2731_ = l_Lean_Parser_addBuiltinParser(v_catName_2725_, v_declName_2726_, v___x_2730_, v_p_2727_, v_prio_2728_);
return v___x_2731_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_addBuiltinLeadingParser___boxed(lean_object* v_catName_2732_, lean_object* v_declName_2733_, lean_object* v_p_2734_, lean_object* v_prio_2735_, lean_object* v_a_2736_){
_start:
{
lean_object* v_res_2737_; 
v_res_2737_ = l_Lean_Parser_addBuiltinLeadingParser(v_catName_2732_, v_declName_2733_, v_p_2734_, v_prio_2735_);
return v_res_2737_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_addBuiltinTrailingParser(lean_object* v_catName_2738_, lean_object* v_declName_2739_, lean_object* v_p_2740_, lean_object* v_prio_2741_){
_start:
{
uint8_t v___x_2743_; lean_object* v___x_2744_; 
v___x_2743_ = 0;
v___x_2744_ = l_Lean_Parser_addBuiltinParser(v_catName_2738_, v_declName_2739_, v___x_2743_, v_p_2740_, v_prio_2741_);
return v___x_2744_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_addBuiltinTrailingParser___boxed(lean_object* v_catName_2745_, lean_object* v_declName_2746_, lean_object* v_p_2747_, lean_object* v_prio_2748_, lean_object* v_a_2749_){
_start:
{
lean_object* v_res_2750_; 
v_res_2750_ = l_Lean_Parser_addBuiltinTrailingParser(v_catName_2745_, v_declName_2746_, v_p_2747_, v_prio_2748_);
return v_res_2750_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_mkCategoryAntiquotParser(lean_object* v_kind_2751_){
_start:
{
uint8_t v___x_2752_; lean_object* v___x_2753_; lean_object* v___x_2754_; 
v___x_2752_ = 1;
lean_inc(v_kind_2751_);
v___x_2753_ = l_Lean_Name_toString(v_kind_2751_, v___x_2752_);
v___x_2754_ = l_Lean_Parser_mkAntiquot(v___x_2753_, v_kind_2751_, v___x_2752_, v___x_2752_);
return v___x_2754_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_mkCategoryAntiquotParserFn(lean_object* v_kind_2755_, lean_object* v_a_2756_, lean_object* v_a_2757_){
_start:
{
lean_object* v___x_2758_; lean_object* v_fn_2759_; lean_object* v___x_2760_; 
v___x_2758_ = l_Lean_Parser_mkCategoryAntiquotParser(v_kind_2755_);
v_fn_2759_ = lean_ctor_get(v___x_2758_, 1);
lean_inc_ref(v_fn_2759_);
lean_dec_ref(v___x_2758_);
v___x_2760_ = lean_apply_2(v_fn_2759_, v_a_2756_, v_a_2757_);
return v___x_2760_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_categoryParserFnImpl___lam__0(lean_object* v___y_2761_, lean_object* v___y_2762_, lean_object* v___y_2763_){
_start:
{
lean_object* v___x_2764_; lean_object* v_fn_2765_; lean_object* v___x_2766_; 
v___x_2764_ = l_Lean_Parser_mkCategoryAntiquotParser(v___y_2761_);
v_fn_2765_ = lean_ctor_get(v___x_2764_, 1);
lean_inc_ref(v_fn_2765_);
lean_dec_ref(v___x_2764_);
v___x_2766_ = lean_apply_2(v_fn_2765_, v___y_2762_, v___y_2763_);
return v___x_2766_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_categoryParserFnImpl(lean_object* v_catName_2775_, lean_object* v_ctx_2776_, lean_object* v_s_2777_){
_start:
{
lean_object* v___x_2778_; lean_object* v___x_2779_; uint8_t v___x_2780_; uint8_t v___x_2781_; lean_object* v___y_2783_; 
v___x_2778_ = l_Lean_Parser_ParserExtension_instInhabitedState_default;
v___x_2779_ = ((lean_object*)(l_Lean_Parser_categoryParserFnImpl___closed__1));
v___x_2780_ = lean_name_eq(v_catName_2775_, v___x_2779_);
v___x_2781_ = 1;
if (v___x_2780_ == 0)
{
v___y_2783_ = v_catName_2775_;
goto v___jp_2782_;
}
else
{
lean_object* v___x_2805_; 
lean_dec(v_catName_2775_);
v___x_2805_ = ((lean_object*)(l_Lean_Parser_categoryParserFnImpl___closed__5));
v___y_2783_ = v___x_2805_;
goto v___jp_2782_;
}
v___jp_2782_:
{
lean_object* v_toParserModuleContext_2784_; lean_object* v_env_2785_; lean_object* v___x_2786_; lean_object* v_ext_2787_; lean_object* v_toEnvExtension_2788_; lean_object* v_asyncMode_2789_; lean_object* v___x_2790_; lean_object* v_categories_2791_; lean_object* v___x_2792_; 
v_toParserModuleContext_2784_ = lean_ctor_get(v_ctx_2776_, 1);
v_env_2785_ = lean_ctor_get(v_toParserModuleContext_2784_, 0);
v___x_2786_ = l_Lean_Parser_parserExtension;
v_ext_2787_ = lean_ctor_get(v___x_2786_, 1);
v_toEnvExtension_2788_ = lean_ctor_get(v_ext_2787_, 0);
v_asyncMode_2789_ = lean_ctor_get(v_toEnvExtension_2788_, 2);
lean_inc_ref(v_env_2785_);
v___x_2790_ = l_Lean_ScopedEnvExtension_getState___redArg(v___x_2778_, v___x_2786_, v_env_2785_, v_asyncMode_2789_);
v_categories_2791_ = lean_ctor_get(v___x_2790_, 2);
lean_inc_ref(v_categories_2791_);
lean_dec(v___x_2790_);
v___x_2792_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Parser_addLeadingParser_spec__0___redArg(v_categories_2791_, v___y_2783_);
lean_dec_ref(v_categories_2791_);
if (lean_obj_tag(v___x_2792_) == 0)
{
lean_object* v___x_2793_; lean_object* v___x_2794_; lean_object* v___x_2795_; lean_object* v___x_2796_; lean_object* v___x_2797_; lean_object* v___x_2798_; lean_object* v___x_2799_; 
lean_dec_ref(v_ctx_2776_);
v___x_2793_ = ((lean_object*)(l_Lean_Parser_categoryParserFnImpl___closed__2));
v___x_2794_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___y_2783_, v___x_2781_);
v___x_2795_ = lean_string_append(v___x_2793_, v___x_2794_);
lean_dec_ref(v___x_2794_);
v___x_2796_ = ((lean_object*)(l_Lean_Parser_categoryParserFnImpl___closed__3));
v___x_2797_ = lean_string_append(v___x_2795_, v___x_2796_);
v___x_2798_ = lean_box(0);
v___x_2799_ = l_Lean_Parser_ParserState_mkUnexpectedError(v_s_2777_, v___x_2797_, v___x_2798_, v___x_2781_);
return v___x_2799_;
}
else
{
lean_object* v_val_2800_; lean_object* v_tables_2801_; uint8_t v_behavior_2802_; lean_object* v___f_2803_; lean_object* v___x_2804_; 
v_val_2800_ = lean_ctor_get(v___x_2792_, 0);
lean_inc(v_val_2800_);
lean_dec_ref_known(v___x_2792_, 1);
v_tables_2801_ = lean_ctor_get(v_val_2800_, 2);
lean_inc_ref(v_tables_2801_);
v_behavior_2802_ = lean_ctor_get_uint8(v_val_2800_, sizeof(void*)*3);
lean_dec(v_val_2800_);
lean_inc(v___y_2783_);
v___f_2803_ = lean_alloc_closure((void*)(l_Lean_Parser_categoryParserFnImpl___lam__0), 3, 1);
lean_closure_set(v___f_2803_, 0, v___y_2783_);
v___x_2804_ = l_Lean_Parser_prattParser(v___y_2783_, v_tables_2801_, v_behavior_2802_, v___f_2803_, v_ctx_2776_, v_s_2777_);
return v___x_2804_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn_00___x40_Lean_Parser_Extension_767730617____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_2808_; lean_object* v___x_2809_; lean_object* v___x_2810_; lean_object* v___x_2811_; lean_object* v___x_2812_; 
v___x_2808_ = l_Lean_Parser_categoryParserFnRef;
v___x_2809_ = ((lean_object*)(l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__0_00___x40_Lean_Parser_Extension_767730617____hygCtx___hyg_2_));
v___x_2810_ = lean_box(0);
v___x_2811_ = lean_st_ref_swap(v___x_2808_, v___x_2809_);
lean_dec(v___x_2811_);
v___x_2812_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2812_, 0, v___x_2810_);
return v___x_2812_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn_00___x40_Lean_Parser_Extension_767730617____hygCtx___hyg_2____boxed(lean_object* v_a_2813_){
_start:
{
lean_object* v_res_2814_; 
v_res_2814_ = l___private_Lean_Parser_Extension_0__Lean_Parser_initFn_00___x40_Lean_Parser_Extension_767730617____hygCtx___hyg_2_();
return v_res_2814_;
}
}
static lean_object* _init_l_Lean_ScopedEnvExtension_add___at___00Lean_Parser_addToken_spec__1___redArg___closed__0(void){
_start:
{
lean_object* v___x_2815_; lean_object* v___x_2816_; 
v___x_2815_ = lean_obj_once(&l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__0_00___x40_Lean_Parser_Extension_848551512____hygCtx___hyg_2_, &l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__0_00___x40_Lean_Parser_Extension_848551512____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__0_00___x40_Lean_Parser_Extension_848551512____hygCtx___hyg_2_);
v___x_2816_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2816_, 0, v___x_2815_);
return v___x_2816_;
}
}
static lean_object* _init_l_Lean_ScopedEnvExtension_add___at___00Lean_Parser_addToken_spec__1___redArg___closed__1(void){
_start:
{
lean_object* v___x_2817_; lean_object* v___x_2818_; 
v___x_2817_ = lean_obj_once(&l_Lean_ScopedEnvExtension_add___at___00Lean_Parser_addToken_spec__1___redArg___closed__0, &l_Lean_ScopedEnvExtension_add___at___00Lean_Parser_addToken_spec__1___redArg___closed__0_once, _init_l_Lean_ScopedEnvExtension_add___at___00Lean_Parser_addToken_spec__1___redArg___closed__0);
v___x_2818_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2818_, 0, v___x_2817_);
lean_ctor_set(v___x_2818_, 1, v___x_2817_);
return v___x_2818_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___at___00Lean_Parser_addToken_spec__1___redArg(lean_object* v_ext_2819_, lean_object* v_b_2820_, uint8_t v_kind_2821_, lean_object* v___y_2822_, lean_object* v___y_2823_){
_start:
{
lean_object* v_toCold_2825_; lean_object* v_currNamespace_2826_; lean_object* v___x_2827_; lean_object* v_env_2828_; lean_object* v_nextMacroScope_2829_; lean_object* v_ngen_2830_; lean_object* v_auxDeclNGen_2831_; lean_object* v_traceState_2832_; lean_object* v_messages_2833_; lean_object* v_infoState_2834_; lean_object* v_snapshotTasks_2835_; lean_object* v___x_2837_; uint8_t v_isShared_2838_; uint8_t v_isSharedCheck_2847_; 
v_toCold_2825_ = lean_ctor_get(v___y_2822_, 0);
v_currNamespace_2826_ = lean_ctor_get(v_toCold_2825_, 4);
v___x_2827_ = lean_st_ref_take(v___y_2823_);
v_env_2828_ = lean_ctor_get(v___x_2827_, 0);
v_nextMacroScope_2829_ = lean_ctor_get(v___x_2827_, 1);
v_ngen_2830_ = lean_ctor_get(v___x_2827_, 2);
v_auxDeclNGen_2831_ = lean_ctor_get(v___x_2827_, 3);
v_traceState_2832_ = lean_ctor_get(v___x_2827_, 4);
v_messages_2833_ = lean_ctor_get(v___x_2827_, 6);
v_infoState_2834_ = lean_ctor_get(v___x_2827_, 7);
v_snapshotTasks_2835_ = lean_ctor_get(v___x_2827_, 8);
v_isSharedCheck_2847_ = !lean_is_exclusive(v___x_2827_);
if (v_isSharedCheck_2847_ == 0)
{
lean_object* v_unused_2848_; 
v_unused_2848_ = lean_ctor_get(v___x_2827_, 5);
lean_dec(v_unused_2848_);
v___x_2837_ = v___x_2827_;
v_isShared_2838_ = v_isSharedCheck_2847_;
goto v_resetjp_2836_;
}
else
{
lean_inc(v_snapshotTasks_2835_);
lean_inc(v_infoState_2834_);
lean_inc(v_messages_2833_);
lean_inc(v_traceState_2832_);
lean_inc(v_auxDeclNGen_2831_);
lean_inc(v_ngen_2830_);
lean_inc(v_nextMacroScope_2829_);
lean_inc(v_env_2828_);
lean_dec(v___x_2827_);
v___x_2837_ = lean_box(0);
v_isShared_2838_ = v_isSharedCheck_2847_;
goto v_resetjp_2836_;
}
v_resetjp_2836_:
{
lean_object* v___x_2839_; lean_object* v___x_2840_; lean_object* v___x_2841_; lean_object* v___x_2843_; 
v___x_2839_ = lean_box(0);
lean_inc(v_currNamespace_2826_);
v___x_2840_ = l_Lean_ScopedEnvExtension_addCore___redArg(v_env_2828_, v_ext_2819_, v_b_2820_, v_kind_2821_, v_currNamespace_2826_);
v___x_2841_ = lean_obj_once(&l_Lean_ScopedEnvExtension_add___at___00Lean_Parser_addToken_spec__1___redArg___closed__1, &l_Lean_ScopedEnvExtension_add___at___00Lean_Parser_addToken_spec__1___redArg___closed__1_once, _init_l_Lean_ScopedEnvExtension_add___at___00Lean_Parser_addToken_spec__1___redArg___closed__1);
if (v_isShared_2838_ == 0)
{
lean_ctor_set(v___x_2837_, 5, v___x_2841_);
lean_ctor_set(v___x_2837_, 0, v___x_2840_);
v___x_2843_ = v___x_2837_;
goto v_reusejp_2842_;
}
else
{
lean_object* v_reuseFailAlloc_2846_; 
v_reuseFailAlloc_2846_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_2846_, 0, v___x_2840_);
lean_ctor_set(v_reuseFailAlloc_2846_, 1, v_nextMacroScope_2829_);
lean_ctor_set(v_reuseFailAlloc_2846_, 2, v_ngen_2830_);
lean_ctor_set(v_reuseFailAlloc_2846_, 3, v_auxDeclNGen_2831_);
lean_ctor_set(v_reuseFailAlloc_2846_, 4, v_traceState_2832_);
lean_ctor_set(v_reuseFailAlloc_2846_, 5, v___x_2841_);
lean_ctor_set(v_reuseFailAlloc_2846_, 6, v_messages_2833_);
lean_ctor_set(v_reuseFailAlloc_2846_, 7, v_infoState_2834_);
lean_ctor_set(v_reuseFailAlloc_2846_, 8, v_snapshotTasks_2835_);
v___x_2843_ = v_reuseFailAlloc_2846_;
goto v_reusejp_2842_;
}
v_reusejp_2842_:
{
lean_object* v___x_2844_; lean_object* v___x_2845_; 
v___x_2844_ = lean_st_ref_put(v___y_2823_, v___x_2843_);
v___x_2845_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2845_, 0, v___x_2839_);
return v___x_2845_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___at___00Lean_Parser_addToken_spec__1___redArg___boxed(lean_object* v_ext_2849_, lean_object* v_b_2850_, lean_object* v_kind_2851_, lean_object* v___y_2852_, lean_object* v___y_2853_, lean_object* v___y_2854_){
_start:
{
uint8_t v_kind_boxed_2855_; lean_object* v_res_2856_; 
v_kind_boxed_2855_ = lean_unbox(v_kind_2851_);
v_res_2856_ = l_Lean_ScopedEnvExtension_add___at___00Lean_Parser_addToken_spec__1___redArg(v_ext_2849_, v_b_2850_, v_kind_boxed_2855_, v___y_2852_, v___y_2853_);
lean_dec(v___y_2853_);
lean_dec_ref(v___y_2852_);
return v_res_2856_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___at___00Lean_Parser_addToken_spec__1(lean_object* v_00_u03b1_2857_, lean_object* v_00_u03b2_2858_, lean_object* v_00_u03c3_2859_, lean_object* v_ext_2860_, lean_object* v_b_2861_, uint8_t v_kind_2862_, lean_object* v___y_2863_, lean_object* v___y_2864_){
_start:
{
lean_object* v___x_2866_; 
v___x_2866_ = l_Lean_ScopedEnvExtension_add___at___00Lean_Parser_addToken_spec__1___redArg(v_ext_2860_, v_b_2861_, v_kind_2862_, v___y_2863_, v___y_2864_);
return v___x_2866_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___at___00Lean_Parser_addToken_spec__1___boxed(lean_object* v_00_u03b1_2867_, lean_object* v_00_u03b2_2868_, lean_object* v_00_u03c3_2869_, lean_object* v_ext_2870_, lean_object* v_b_2871_, lean_object* v_kind_2872_, lean_object* v___y_2873_, lean_object* v___y_2874_, lean_object* v___y_2875_){
_start:
{
uint8_t v_kind_boxed_2876_; lean_object* v_res_2877_; 
v_kind_boxed_2876_ = lean_unbox(v_kind_2872_);
v_res_2877_ = l_Lean_ScopedEnvExtension_add___at___00Lean_Parser_addToken_spec__1(v_00_u03b1_2867_, v_00_u03b2_2868_, v_00_u03c3_2869_, v_ext_2870_, v_b_2871_, v_kind_boxed_2876_, v___y_2873_, v___y_2874_);
lean_dec(v___y_2874_);
lean_dec_ref(v___y_2873_);
return v_res_2877_;
}
}
LEAN_EXPORT lean_object* l_Lean_ofExcept___at___00Lean_Parser_addToken_spec__0___redArg(lean_object* v_x_2878_, lean_object* v___y_2879_, lean_object* v___y_2880_){
_start:
{
if (lean_obj_tag(v_x_2878_) == 0)
{
lean_object* v_a_2882_; lean_object* v___x_2883_; lean_object* v___x_2884_; 
v_a_2882_ = lean_ctor_get(v_x_2878_, 0);
lean_inc(v_a_2882_);
lean_dec_ref_known(v_x_2878_, 1);
v___x_2883_ = l_Lean_stringToMessageData(v_a_2882_);
v___x_2884_ = l_Lean_throwError___at___00__private_Lean_Parser_Extension_0__Lean_Parser_initFn_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2__spec__0___redArg(v___x_2883_, v___y_2879_, v___y_2880_);
return v___x_2884_;
}
else
{
lean_object* v_a_2885_; lean_object* v___x_2887_; uint8_t v_isShared_2888_; uint8_t v_isSharedCheck_2892_; 
v_a_2885_ = lean_ctor_get(v_x_2878_, 0);
v_isSharedCheck_2892_ = !lean_is_exclusive(v_x_2878_);
if (v_isSharedCheck_2892_ == 0)
{
v___x_2887_ = v_x_2878_;
v_isShared_2888_ = v_isSharedCheck_2892_;
goto v_resetjp_2886_;
}
else
{
lean_inc(v_a_2885_);
lean_dec(v_x_2878_);
v___x_2887_ = lean_box(0);
v_isShared_2888_ = v_isSharedCheck_2892_;
goto v_resetjp_2886_;
}
v_resetjp_2886_:
{
lean_object* v___x_2890_; 
if (v_isShared_2888_ == 0)
{
lean_ctor_set_tag(v___x_2887_, 0);
v___x_2890_ = v___x_2887_;
goto v_reusejp_2889_;
}
else
{
lean_object* v_reuseFailAlloc_2891_; 
v_reuseFailAlloc_2891_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2891_, 0, v_a_2885_);
v___x_2890_ = v_reuseFailAlloc_2891_;
goto v_reusejp_2889_;
}
v_reusejp_2889_:
{
return v___x_2890_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ofExcept___at___00Lean_Parser_addToken_spec__0___redArg___boxed(lean_object* v_x_2893_, lean_object* v___y_2894_, lean_object* v___y_2895_, lean_object* v___y_2896_){
_start:
{
lean_object* v_res_2897_; 
v_res_2897_ = l_Lean_ofExcept___at___00Lean_Parser_addToken_spec__0___redArg(v_x_2893_, v___y_2894_, v___y_2895_);
lean_dec(v___y_2895_);
lean_dec_ref(v___y_2894_);
return v_res_2897_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_addToken(lean_object* v_tk_2898_, uint8_t v_kind_2899_, lean_object* v_a_2900_, lean_object* v_a_2901_){
_start:
{
lean_object* v___x_2903_; lean_object* v___x_2904_; lean_object* v_env_2905_; lean_object* v___x_2906_; lean_object* v_ext_2907_; lean_object* v_toEnvExtension_2908_; lean_object* v_asyncMode_2909_; lean_object* v___x_2910_; lean_object* v_tokens_2911_; lean_object* v___x_2912_; lean_object* v___x_2913_; 
v___x_2903_ = l_Lean_Parser_ParserExtension_instInhabitedState_default;
v___x_2904_ = lean_st_ref_get(v_a_2901_);
v_env_2905_ = lean_ctor_get(v___x_2904_, 0);
lean_inc_ref(v_env_2905_);
lean_dec(v___x_2904_);
v___x_2906_ = l_Lean_Parser_parserExtension;
v_ext_2907_ = lean_ctor_get(v___x_2906_, 1);
v_toEnvExtension_2908_ = lean_ctor_get(v_ext_2907_, 0);
v_asyncMode_2909_ = lean_ctor_get(v_toEnvExtension_2908_, 2);
v___x_2910_ = l_Lean_ScopedEnvExtension_getState___redArg(v___x_2903_, v___x_2906_, v_env_2905_, v_asyncMode_2909_);
v_tokens_2911_ = lean_ctor_get(v___x_2910_, 0);
lean_inc_ref(v_tokens_2911_);
lean_dec(v___x_2910_);
lean_inc_ref(v_tk_2898_);
v___x_2912_ = l___private_Lean_Parser_Extension_0__Lean_Parser_addTokenConfig(v_tokens_2911_, v_tk_2898_);
v___x_2913_ = l_Lean_ofExcept___at___00Lean_Parser_addToken_spec__0___redArg(v___x_2912_, v_a_2900_, v_a_2901_);
if (lean_obj_tag(v___x_2913_) == 0)
{
lean_object* v___x_2914_; lean_object* v___x_2915_; 
lean_dec_ref_known(v___x_2913_, 1);
v___x_2914_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2914_, 0, v_tk_2898_);
v___x_2915_ = l_Lean_ScopedEnvExtension_add___at___00Lean_Parser_addToken_spec__1___redArg(v___x_2906_, v___x_2914_, v_kind_2899_, v_a_2900_, v_a_2901_);
return v___x_2915_;
}
else
{
lean_object* v_a_2916_; lean_object* v___x_2918_; uint8_t v_isShared_2919_; uint8_t v_isSharedCheck_2923_; 
lean_dec_ref(v_tk_2898_);
v_a_2916_ = lean_ctor_get(v___x_2913_, 0);
v_isSharedCheck_2923_ = !lean_is_exclusive(v___x_2913_);
if (v_isSharedCheck_2923_ == 0)
{
v___x_2918_ = v___x_2913_;
v_isShared_2919_ = v_isSharedCheck_2923_;
goto v_resetjp_2917_;
}
else
{
lean_inc(v_a_2916_);
lean_dec(v___x_2913_);
v___x_2918_ = lean_box(0);
v_isShared_2919_ = v_isSharedCheck_2923_;
goto v_resetjp_2917_;
}
v_resetjp_2917_:
{
lean_object* v___x_2921_; 
if (v_isShared_2919_ == 0)
{
v___x_2921_ = v___x_2918_;
goto v_reusejp_2920_;
}
else
{
lean_object* v_reuseFailAlloc_2922_; 
v_reuseFailAlloc_2922_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2922_, 0, v_a_2916_);
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
LEAN_EXPORT lean_object* l_Lean_Parser_addToken___boxed(lean_object* v_tk_2924_, lean_object* v_kind_2925_, lean_object* v_a_2926_, lean_object* v_a_2927_, lean_object* v_a_2928_){
_start:
{
uint8_t v_kind_boxed_2929_; lean_object* v_res_2930_; 
v_kind_boxed_2929_ = lean_unbox(v_kind_2925_);
v_res_2930_ = l_Lean_Parser_addToken(v_tk_2924_, v_kind_boxed_2929_, v_a_2926_, v_a_2927_);
lean_dec(v_a_2927_);
lean_dec_ref(v_a_2926_);
return v_res_2930_;
}
}
LEAN_EXPORT lean_object* l_Lean_ofExcept___at___00Lean_Parser_addToken_spec__0(lean_object* v_00_u03b1_2931_, lean_object* v_x_2932_, lean_object* v___y_2933_, lean_object* v___y_2934_){
_start:
{
lean_object* v___x_2936_; 
v___x_2936_ = l_Lean_ofExcept___at___00Lean_Parser_addToken_spec__0___redArg(v_x_2932_, v___y_2933_, v___y_2934_);
return v___x_2936_;
}
}
LEAN_EXPORT lean_object* l_Lean_ofExcept___at___00Lean_Parser_addToken_spec__0___boxed(lean_object* v_00_u03b1_2937_, lean_object* v_x_2938_, lean_object* v___y_2939_, lean_object* v___y_2940_, lean_object* v___y_2941_){
_start:
{
lean_object* v_res_2942_; 
v_res_2942_ = l_Lean_ofExcept___at___00Lean_Parser_addToken_spec__0(v_00_u03b1_2937_, v_x_2938_, v___y_2939_, v___y_2940_);
lean_dec(v___y_2940_);
lean_dec_ref(v___y_2939_);
return v_res_2942_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_addSyntaxNodeKind(lean_object* v_env_2943_, lean_object* v_k_2944_){
_start:
{
lean_object* v___x_2945_; lean_object* v___x_2946_; lean_object* v___x_2947_; 
v___x_2945_ = l_Lean_Parser_parserExtension;
v___x_2946_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2946_, 0, v_k_2944_);
v___x_2947_ = l_Lean_ScopedEnvExtension_addEntry___redArg(v___x_2945_, v_env_2943_, v___x_2946_);
return v___x_2947_;
}
}
static uint8_t _init_l_Lean_Parser_isValidSyntaxNodeKind___closed__0(void){
_start:
{
lean_object* v___x_2948_; uint8_t v___x_2949_; 
v___x_2948_ = lean_box(0);
v___x_2949_ = lean_internal_is_stage0(v___x_2948_);
return v___x_2949_;
}
}
LEAN_EXPORT uint8_t l_Lean_Parser_isValidSyntaxNodeKind(lean_object* v_env_2950_, lean_object* v_k_2951_){
_start:
{
lean_object* v___x_2952_; lean_object* v_ext_2953_; lean_object* v_toEnvExtension_2954_; lean_object* v_asyncMode_2955_; lean_object* v___x_2956_; lean_object* v___x_2957_; lean_object* v_kinds_2958_; uint8_t v___x_2959_; 
v___x_2952_ = l_Lean_Parser_parserExtension;
v_ext_2953_ = lean_ctor_get(v___x_2952_, 1);
v_toEnvExtension_2954_ = lean_ctor_get(v_ext_2953_, 0);
v_asyncMode_2955_ = lean_ctor_get(v_toEnvExtension_2954_, 2);
v___x_2956_ = l_Lean_Parser_ParserExtension_instInhabitedState_default;
lean_inc_ref(v_env_2950_);
v___x_2957_ = l_Lean_ScopedEnvExtension_getState___redArg(v___x_2956_, v___x_2952_, v_env_2950_, v_asyncMode_2955_);
v_kinds_2958_ = lean_ctor_get(v___x_2957_, 1);
lean_inc_ref(v_kinds_2958_);
lean_dec(v___x_2957_);
v___x_2959_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_Parser_Extension_0__Lean_Parser_addParserCategoryCore_spec__0___redArg(v_kinds_2958_, v_k_2951_);
lean_dec_ref(v_kinds_2958_);
if (v___x_2959_ == 0)
{
uint8_t v___x_2960_; 
v___x_2960_ = lean_uint8_once(&l_Lean_Parser_isValidSyntaxNodeKind___closed__0, &l_Lean_Parser_isValidSyntaxNodeKind___closed__0_once, _init_l_Lean_Parser_isValidSyntaxNodeKind___closed__0);
if (v___x_2960_ == 0)
{
lean_dec(v_k_2951_);
lean_dec_ref(v_env_2950_);
return v___x_2960_;
}
else
{
uint8_t v___x_2961_; 
v___x_2961_ = l_Lean_Environment_contains(v_env_2950_, v_k_2951_, v___x_2960_);
return v___x_2961_;
}
}
else
{
lean_dec(v_k_2951_);
lean_dec_ref(v_env_2950_);
return v___x_2959_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_isValidSyntaxNodeKind___boxed(lean_object* v_env_2962_, lean_object* v_k_2963_){
_start:
{
uint8_t v_res_2964_; lean_object* v_r_2965_; 
v_res_2964_ = l_Lean_Parser_isValidSyntaxNodeKind(v_env_2962_, v_k_2963_);
v_r_2965_ = lean_box(v_res_2964_);
return v_r_2965_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_getSyntaxNodeKinds___lam__0(lean_object* v_ks_2966_, lean_object* v_k_2967_, lean_object* v_x_2968_){
_start:
{
lean_object* v___x_2969_; 
v___x_2969_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2969_, 0, v_k_2967_);
lean_ctor_set(v___x_2969_, 1, v_ks_2966_);
return v___x_2969_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_Parser_getSyntaxNodeKinds_spec__0_spec__0_spec__1_spec__3___redArg(lean_object* v_f_2970_, lean_object* v_keys_2971_, lean_object* v_vals_2972_, lean_object* v_i_2973_, lean_object* v_acc_2974_){
_start:
{
lean_object* v___x_2975_; uint8_t v___x_2976_; 
v___x_2975_ = lean_array_get_size(v_keys_2971_);
v___x_2976_ = lean_nat_dec_lt(v_i_2973_, v___x_2975_);
if (v___x_2976_ == 0)
{
lean_dec(v_i_2973_);
lean_dec(v_f_2970_);
return v_acc_2974_;
}
else
{
lean_object* v_k_2977_; lean_object* v_v_2978_; lean_object* v___x_2979_; lean_object* v___x_2980_; lean_object* v___x_2981_; 
v_k_2977_ = lean_array_fget_borrowed(v_keys_2971_, v_i_2973_);
v_v_2978_ = lean_array_fget_borrowed(v_vals_2972_, v_i_2973_);
lean_inc(v_f_2970_);
lean_inc(v_v_2978_);
lean_inc(v_k_2977_);
v___x_2979_ = lean_apply_3(v_f_2970_, v_acc_2974_, v_k_2977_, v_v_2978_);
v___x_2980_ = lean_unsigned_to_nat(1u);
v___x_2981_ = lean_nat_add(v_i_2973_, v___x_2980_);
lean_dec(v_i_2973_);
v_i_2973_ = v___x_2981_;
v_acc_2974_ = v___x_2979_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_Parser_getSyntaxNodeKinds_spec__0_spec__0_spec__1_spec__3___redArg___boxed(lean_object* v_f_2983_, lean_object* v_keys_2984_, lean_object* v_vals_2985_, lean_object* v_i_2986_, lean_object* v_acc_2987_){
_start:
{
lean_object* v_res_2988_; 
v_res_2988_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_Parser_getSyntaxNodeKinds_spec__0_spec__0_spec__1_spec__3___redArg(v_f_2983_, v_keys_2984_, v_vals_2985_, v_i_2986_, v_acc_2987_);
lean_dec_ref(v_vals_2985_);
lean_dec_ref(v_keys_2984_);
return v_res_2988_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_Parser_getSyntaxNodeKinds_spec__0_spec__0_spec__1_spec__2___redArg(lean_object* v_f_2989_, lean_object* v_as_2990_, size_t v_i_2991_, size_t v_stop_2992_, lean_object* v_b_2993_){
_start:
{
lean_object* v___y_2995_; uint8_t v___x_2999_; 
v___x_2999_ = lean_usize_dec_eq(v_i_2991_, v_stop_2992_);
if (v___x_2999_ == 0)
{
lean_object* v___x_3000_; 
v___x_3000_ = lean_array_uget_borrowed(v_as_2990_, v_i_2991_);
switch(lean_obj_tag(v___x_3000_))
{
case 0:
{
lean_object* v_key_3001_; lean_object* v_val_3002_; lean_object* v___x_3003_; 
v_key_3001_ = lean_ctor_get(v___x_3000_, 0);
v_val_3002_ = lean_ctor_get(v___x_3000_, 1);
lean_inc(v_f_2989_);
lean_inc(v_val_3002_);
lean_inc(v_key_3001_);
v___x_3003_ = lean_apply_3(v_f_2989_, v_b_2993_, v_key_3001_, v_val_3002_);
v___y_2995_ = v___x_3003_;
goto v___jp_2994_;
}
case 1:
{
lean_object* v_node_3004_; lean_object* v___x_3005_; 
v_node_3004_ = lean_ctor_get(v___x_3000_, 0);
lean_inc(v_f_2989_);
v___x_3005_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_Parser_getSyntaxNodeKinds_spec__0_spec__0_spec__1___redArg(v_f_2989_, v_node_3004_, v_b_2993_);
v___y_2995_ = v___x_3005_;
goto v___jp_2994_;
}
default: 
{
v___y_2995_ = v_b_2993_;
goto v___jp_2994_;
}
}
}
else
{
lean_dec(v_f_2989_);
return v_b_2993_;
}
v___jp_2994_:
{
size_t v___x_2996_; size_t v___x_2997_; 
v___x_2996_ = ((size_t)1ULL);
v___x_2997_ = lean_usize_add(v_i_2991_, v___x_2996_);
v_i_2991_ = v___x_2997_;
v_b_2993_ = v___y_2995_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_Parser_getSyntaxNodeKinds_spec__0_spec__0_spec__1___redArg(lean_object* v_f_3006_, lean_object* v_x_3007_, lean_object* v_x_3008_){
_start:
{
if (lean_obj_tag(v_x_3007_) == 0)
{
lean_object* v_es_3009_; lean_object* v___x_3010_; lean_object* v___x_3011_; uint8_t v___x_3012_; 
v_es_3009_ = lean_ctor_get(v_x_3007_, 0);
v___x_3010_ = lean_unsigned_to_nat(0u);
v___x_3011_ = lean_array_get_size(v_es_3009_);
v___x_3012_ = lean_nat_dec_lt(v___x_3010_, v___x_3011_);
if (v___x_3012_ == 0)
{
lean_dec(v_f_3006_);
return v_x_3008_;
}
else
{
size_t v___x_3013_; size_t v___x_3014_; lean_object* v___x_3015_; 
v___x_3013_ = ((size_t)0ULL);
v___x_3014_ = lean_usize_of_nat(v___x_3011_);
v___x_3015_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_Parser_getSyntaxNodeKinds_spec__0_spec__0_spec__1_spec__2___redArg(v_f_3006_, v_es_3009_, v___x_3013_, v___x_3014_, v_x_3008_);
return v___x_3015_;
}
}
else
{
lean_object* v_ks_3016_; lean_object* v_vs_3017_; lean_object* v___x_3018_; lean_object* v___x_3019_; 
v_ks_3016_ = lean_ctor_get(v_x_3007_, 0);
v_vs_3017_ = lean_ctor_get(v_x_3007_, 1);
v___x_3018_ = lean_unsigned_to_nat(0u);
v___x_3019_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_Parser_getSyntaxNodeKinds_spec__0_spec__0_spec__1_spec__3___redArg(v_f_3006_, v_ks_3016_, v_vs_3017_, v___x_3018_, v_x_3008_);
return v___x_3019_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_Parser_getSyntaxNodeKinds_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_f_3020_, lean_object* v_x_3021_, lean_object* v_x_3022_){
_start:
{
lean_object* v_res_3023_; 
v_res_3023_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_Parser_getSyntaxNodeKinds_spec__0_spec__0_spec__1___redArg(v_f_3020_, v_x_3021_, v_x_3022_);
lean_dec_ref(v_x_3021_);
return v_res_3023_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_Parser_getSyntaxNodeKinds_spec__0_spec__0_spec__1_spec__2___redArg___boxed(lean_object* v_f_3024_, lean_object* v_as_3025_, lean_object* v_i_3026_, lean_object* v_stop_3027_, lean_object* v_b_3028_){
_start:
{
size_t v_i_boxed_3029_; size_t v_stop_boxed_3030_; lean_object* v_res_3031_; 
v_i_boxed_3029_ = lean_unbox_usize(v_i_3026_);
lean_dec(v_i_3026_);
v_stop_boxed_3030_ = lean_unbox_usize(v_stop_3027_);
lean_dec(v_stop_3027_);
v_res_3031_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_Parser_getSyntaxNodeKinds_spec__0_spec__0_spec__1_spec__2___redArg(v_f_3024_, v_as_3025_, v_i_boxed_3029_, v_stop_boxed_3030_, v_b_3028_);
lean_dec_ref(v_as_3025_);
return v_res_3031_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_Parser_getSyntaxNodeKinds_spec__0___redArg___lam__0(lean_object* v_f_3032_, lean_object* v_x1_3033_, lean_object* v_x2_3034_, lean_object* v_x3_3035_){
_start:
{
lean_object* v___x_3036_; 
v___x_3036_ = lean_apply_3(v_f_3032_, v_x1_3033_, v_x2_3034_, v_x3_3035_);
return v___x_3036_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_Parser_getSyntaxNodeKinds_spec__0___redArg(lean_object* v_map_3037_, lean_object* v_f_3038_, lean_object* v_init_3039_){
_start:
{
lean_object* v___f_3040_; lean_object* v___x_3041_; 
v___f_3040_ = lean_alloc_closure((void*)(l_Lean_PersistentHashMap_foldl___at___00Lean_Parser_getSyntaxNodeKinds_spec__0___redArg___lam__0), 4, 1);
lean_closure_set(v___f_3040_, 0, v_f_3038_);
v___x_3041_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_Parser_getSyntaxNodeKinds_spec__0_spec__0_spec__1___redArg(v___f_3040_, v_map_3037_, v_init_3039_);
return v___x_3041_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_Parser_getSyntaxNodeKinds_spec__0___redArg___boxed(lean_object* v_map_3042_, lean_object* v_f_3043_, lean_object* v_init_3044_){
_start:
{
lean_object* v_res_3045_; 
v_res_3045_ = l_Lean_PersistentHashMap_foldl___at___00Lean_Parser_getSyntaxNodeKinds_spec__0___redArg(v_map_3042_, v_f_3043_, v_init_3044_);
lean_dec_ref(v_map_3042_);
return v_res_3045_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_getSyntaxNodeKinds(lean_object* v_env_3047_){
_start:
{
lean_object* v___x_3048_; lean_object* v_ext_3049_; lean_object* v_toEnvExtension_3050_; lean_object* v_asyncMode_3051_; lean_object* v___x_3052_; lean_object* v___x_3053_; lean_object* v_kinds_3054_; lean_object* v___f_3055_; lean_object* v___x_3056_; lean_object* v___x_3057_; 
v___x_3048_ = l_Lean_Parser_parserExtension;
v_ext_3049_ = lean_ctor_get(v___x_3048_, 1);
v_toEnvExtension_3050_ = lean_ctor_get(v_ext_3049_, 0);
v_asyncMode_3051_ = lean_ctor_get(v_toEnvExtension_3050_, 2);
v___x_3052_ = l_Lean_Parser_ParserExtension_instInhabitedState_default;
v___x_3053_ = l_Lean_ScopedEnvExtension_getState___redArg(v___x_3052_, v___x_3048_, v_env_3047_, v_asyncMode_3051_);
v_kinds_3054_ = lean_ctor_get(v___x_3053_, 1);
lean_inc_ref(v_kinds_3054_);
lean_dec(v___x_3053_);
v___f_3055_ = ((lean_object*)(l_Lean_Parser_getSyntaxNodeKinds___closed__0));
v___x_3056_ = lean_box(0);
v___x_3057_ = l_Lean_PersistentHashMap_foldl___at___00Lean_Parser_getSyntaxNodeKinds_spec__0___redArg(v_kinds_3054_, v___f_3055_, v___x_3056_);
lean_dec_ref(v_kinds_3054_);
return v___x_3057_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_Parser_getSyntaxNodeKinds_spec__0(lean_object* v_00_u03c3_3058_, lean_object* v_00_u03b2_3059_, lean_object* v_map_3060_, lean_object* v_f_3061_, lean_object* v_init_3062_){
_start:
{
lean_object* v___x_3063_; 
v___x_3063_ = l_Lean_PersistentHashMap_foldl___at___00Lean_Parser_getSyntaxNodeKinds_spec__0___redArg(v_map_3060_, v_f_3061_, v_init_3062_);
return v___x_3063_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_Parser_getSyntaxNodeKinds_spec__0___boxed(lean_object* v_00_u03c3_3064_, lean_object* v_00_u03b2_3065_, lean_object* v_map_3066_, lean_object* v_f_3067_, lean_object* v_init_3068_){
_start:
{
lean_object* v_res_3069_; 
v_res_3069_ = l_Lean_PersistentHashMap_foldl___at___00Lean_Parser_getSyntaxNodeKinds_spec__0(v_00_u03c3_3064_, v_00_u03b2_3065_, v_map_3066_, v_f_3067_, v_init_3068_);
lean_dec_ref(v_map_3066_);
return v_res_3069_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_Parser_getSyntaxNodeKinds_spec__0_spec__0___redArg(lean_object* v_map_3070_, lean_object* v_f_3071_, lean_object* v_init_3072_){
_start:
{
lean_object* v___x_3073_; 
v___x_3073_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_Parser_getSyntaxNodeKinds_spec__0_spec__0_spec__1___redArg(v_f_3071_, v_map_3070_, v_init_3072_);
return v___x_3073_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_Parser_getSyntaxNodeKinds_spec__0_spec__0___redArg___boxed(lean_object* v_map_3074_, lean_object* v_f_3075_, lean_object* v_init_3076_){
_start:
{
lean_object* v_res_3077_; 
v_res_3077_ = l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_Parser_getSyntaxNodeKinds_spec__0_spec__0___redArg(v_map_3074_, v_f_3075_, v_init_3076_);
lean_dec_ref(v_map_3074_);
return v_res_3077_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_Parser_getSyntaxNodeKinds_spec__0_spec__0(lean_object* v_00_u03c3_3078_, lean_object* v_00_u03b2_3079_, lean_object* v_map_3080_, lean_object* v_f_3081_, lean_object* v_init_3082_){
_start:
{
lean_object* v___x_3083_; 
v___x_3083_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_Parser_getSyntaxNodeKinds_spec__0_spec__0_spec__1___redArg(v_f_3081_, v_map_3080_, v_init_3082_);
return v___x_3083_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_Parser_getSyntaxNodeKinds_spec__0_spec__0___boxed(lean_object* v_00_u03c3_3084_, lean_object* v_00_u03b2_3085_, lean_object* v_map_3086_, lean_object* v_f_3087_, lean_object* v_init_3088_){
_start:
{
lean_object* v_res_3089_; 
v_res_3089_ = l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_Parser_getSyntaxNodeKinds_spec__0_spec__0(v_00_u03c3_3084_, v_00_u03b2_3085_, v_map_3086_, v_f_3087_, v_init_3088_);
lean_dec_ref(v_map_3086_);
return v_res_3089_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_Parser_getSyntaxNodeKinds_spec__0_spec__0_spec__1(lean_object* v_00_u03c3_3090_, lean_object* v_00_u03b1_3091_, lean_object* v_00_u03b2_3092_, lean_object* v_f_3093_, lean_object* v_x_3094_, lean_object* v_x_3095_){
_start:
{
lean_object* v___x_3096_; 
v___x_3096_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_Parser_getSyntaxNodeKinds_spec__0_spec__0_spec__1___redArg(v_f_3093_, v_x_3094_, v_x_3095_);
return v___x_3096_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_Parser_getSyntaxNodeKinds_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03c3_3097_, lean_object* v_00_u03b1_3098_, lean_object* v_00_u03b2_3099_, lean_object* v_f_3100_, lean_object* v_x_3101_, lean_object* v_x_3102_){
_start:
{
lean_object* v_res_3103_; 
v_res_3103_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_Parser_getSyntaxNodeKinds_spec__0_spec__0_spec__1(v_00_u03c3_3097_, v_00_u03b1_3098_, v_00_u03b2_3099_, v_f_3100_, v_x_3101_, v_x_3102_);
lean_dec_ref(v_x_3101_);
return v_res_3103_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_Parser_getSyntaxNodeKinds_spec__0_spec__0_spec__1_spec__2(lean_object* v_00_u03b1_3104_, lean_object* v_00_u03b2_3105_, lean_object* v_00_u03c3_3106_, lean_object* v_f_3107_, lean_object* v_as_3108_, size_t v_i_3109_, size_t v_stop_3110_, lean_object* v_b_3111_){
_start:
{
lean_object* v___x_3112_; 
v___x_3112_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_Parser_getSyntaxNodeKinds_spec__0_spec__0_spec__1_spec__2___redArg(v_f_3107_, v_as_3108_, v_i_3109_, v_stop_3110_, v_b_3111_);
return v___x_3112_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_Parser_getSyntaxNodeKinds_spec__0_spec__0_spec__1_spec__2___boxed(lean_object* v_00_u03b1_3113_, lean_object* v_00_u03b2_3114_, lean_object* v_00_u03c3_3115_, lean_object* v_f_3116_, lean_object* v_as_3117_, lean_object* v_i_3118_, lean_object* v_stop_3119_, lean_object* v_b_3120_){
_start:
{
size_t v_i_boxed_3121_; size_t v_stop_boxed_3122_; lean_object* v_res_3123_; 
v_i_boxed_3121_ = lean_unbox_usize(v_i_3118_);
lean_dec(v_i_3118_);
v_stop_boxed_3122_ = lean_unbox_usize(v_stop_3119_);
lean_dec(v_stop_3119_);
v_res_3123_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_Parser_getSyntaxNodeKinds_spec__0_spec__0_spec__1_spec__2(v_00_u03b1_3113_, v_00_u03b2_3114_, v_00_u03c3_3115_, v_f_3116_, v_as_3117_, v_i_boxed_3121_, v_stop_boxed_3122_, v_b_3120_);
lean_dec_ref(v_as_3117_);
return v_res_3123_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_Parser_getSyntaxNodeKinds_spec__0_spec__0_spec__1_spec__3(lean_object* v_00_u03c3_3124_, lean_object* v_00_u03b1_3125_, lean_object* v_00_u03b2_3126_, lean_object* v_f_3127_, lean_object* v_keys_3128_, lean_object* v_vals_3129_, lean_object* v_heq_3130_, lean_object* v_i_3131_, lean_object* v_acc_3132_){
_start:
{
lean_object* v___x_3133_; 
v___x_3133_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_Parser_getSyntaxNodeKinds_spec__0_spec__0_spec__1_spec__3___redArg(v_f_3127_, v_keys_3128_, v_vals_3129_, v_i_3131_, v_acc_3132_);
return v___x_3133_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_Parser_getSyntaxNodeKinds_spec__0_spec__0_spec__1_spec__3___boxed(lean_object* v_00_u03c3_3134_, lean_object* v_00_u03b1_3135_, lean_object* v_00_u03b2_3136_, lean_object* v_f_3137_, lean_object* v_keys_3138_, lean_object* v_vals_3139_, lean_object* v_heq_3140_, lean_object* v_i_3141_, lean_object* v_acc_3142_){
_start:
{
lean_object* v_res_3143_; 
v_res_3143_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_Parser_getSyntaxNodeKinds_spec__0_spec__0_spec__1_spec__3(v_00_u03c3_3134_, v_00_u03b1_3135_, v_00_u03b2_3136_, v_f_3137_, v_keys_3138_, v_vals_3139_, v_heq_3140_, v_i_3141_, v_acc_3142_);
lean_dec_ref(v_vals_3139_);
lean_dec_ref(v_keys_3138_);
return v_res_3143_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_getTokenTable(lean_object* v_env_3144_){
_start:
{
lean_object* v___x_3145_; lean_object* v_ext_3146_; lean_object* v_toEnvExtension_3147_; lean_object* v_asyncMode_3148_; lean_object* v___x_3149_; lean_object* v___x_3150_; lean_object* v_tokens_3151_; 
v___x_3145_ = l_Lean_Parser_parserExtension;
v_ext_3146_ = lean_ctor_get(v___x_3145_, 1);
v_toEnvExtension_3147_ = lean_ctor_get(v_ext_3146_, 0);
v_asyncMode_3148_ = lean_ctor_get(v_toEnvExtension_3147_, 2);
v___x_3149_ = l_Lean_Parser_ParserExtension_instInhabitedState_default;
v___x_3150_ = l_Lean_ScopedEnvExtension_getState___redArg(v___x_3149_, v___x_3145_, v_env_3144_, v_asyncMode_3148_);
v_tokens_3151_ = lean_ctor_get(v___x_3150_, 0);
lean_inc_ref(v_tokens_3151_);
lean_dec(v___x_3150_);
return v_tokens_3151_;
}
}
static lean_object* _init_l_Lean_Parser_mkInputContext___auto__1___closed__10(void){
_start:
{
lean_object* v___x_3176_; lean_object* v___x_3177_; 
v___x_3176_ = ((lean_object*)(l_Lean_Parser_mkInputContext___auto__1___closed__8));
v___x_3177_ = l_Lean_mkAtom(v___x_3176_);
return v___x_3177_;
}
}
static lean_object* _init_l_Lean_Parser_mkInputContext___auto__1___closed__11(void){
_start:
{
lean_object* v___x_3178_; lean_object* v___x_3179_; lean_object* v___x_3180_; 
v___x_3178_ = lean_obj_once(&l_Lean_Parser_mkInputContext___auto__1___closed__10, &l_Lean_Parser_mkInputContext___auto__1___closed__10_once, _init_l_Lean_Parser_mkInputContext___auto__1___closed__10);
v___x_3179_ = ((lean_object*)(l_Lean_Parser_mkInputContext___auto__1___closed__3));
v___x_3180_ = lean_array_push(v___x_3179_, v___x_3178_);
return v___x_3180_;
}
}
static lean_object* _init_l_Lean_Parser_mkInputContext___auto__1___closed__15(void){
_start:
{
lean_object* v___x_3191_; lean_object* v___x_3192_; lean_object* v___x_3193_; 
v___x_3191_ = ((lean_object*)(l_Lean_Parser_mkInputContext___auto__1___closed__14));
v___x_3192_ = ((lean_object*)(l_Lean_Parser_mkInputContext___auto__1___closed__3));
v___x_3193_ = lean_array_push(v___x_3192_, v___x_3191_);
return v___x_3193_;
}
}
static lean_object* _init_l_Lean_Parser_mkInputContext___auto__1___closed__16(void){
_start:
{
lean_object* v___x_3194_; lean_object* v___x_3195_; lean_object* v___x_3196_; lean_object* v___x_3197_; 
v___x_3194_ = lean_obj_once(&l_Lean_Parser_mkInputContext___auto__1___closed__15, &l_Lean_Parser_mkInputContext___auto__1___closed__15_once, _init_l_Lean_Parser_mkInputContext___auto__1___closed__15);
v___x_3195_ = ((lean_object*)(l_Lean_Parser_mkInputContext___auto__1___closed__13));
v___x_3196_ = lean_box(2);
v___x_3197_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3197_, 0, v___x_3196_);
lean_ctor_set(v___x_3197_, 1, v___x_3195_);
lean_ctor_set(v___x_3197_, 2, v___x_3194_);
return v___x_3197_;
}
}
static lean_object* _init_l_Lean_Parser_mkInputContext___auto__1___closed__17(void){
_start:
{
lean_object* v___x_3198_; lean_object* v___x_3199_; lean_object* v___x_3200_; 
v___x_3198_ = lean_obj_once(&l_Lean_Parser_mkInputContext___auto__1___closed__16, &l_Lean_Parser_mkInputContext___auto__1___closed__16_once, _init_l_Lean_Parser_mkInputContext___auto__1___closed__16);
v___x_3199_ = lean_obj_once(&l_Lean_Parser_mkInputContext___auto__1___closed__11, &l_Lean_Parser_mkInputContext___auto__1___closed__11_once, _init_l_Lean_Parser_mkInputContext___auto__1___closed__11);
v___x_3200_ = lean_array_push(v___x_3199_, v___x_3198_);
return v___x_3200_;
}
}
static lean_object* _init_l_Lean_Parser_mkInputContext___auto__1___closed__18(void){
_start:
{
lean_object* v___x_3201_; lean_object* v___x_3202_; lean_object* v___x_3203_; 
v___x_3201_ = ((lean_object*)(l_Lean_Parser_mkInputContext___auto__1___closed__14));
v___x_3202_ = lean_obj_once(&l_Lean_Parser_mkInputContext___auto__1___closed__17, &l_Lean_Parser_mkInputContext___auto__1___closed__17_once, _init_l_Lean_Parser_mkInputContext___auto__1___closed__17);
v___x_3203_ = lean_array_push(v___x_3202_, v___x_3201_);
return v___x_3203_;
}
}
static lean_object* _init_l_Lean_Parser_mkInputContext___auto__1___closed__19(void){
_start:
{
lean_object* v___x_3204_; lean_object* v___x_3205_; lean_object* v___x_3206_; 
v___x_3204_ = ((lean_object*)(l_Lean_Parser_mkInputContext___auto__1___closed__14));
v___x_3205_ = lean_obj_once(&l_Lean_Parser_mkInputContext___auto__1___closed__18, &l_Lean_Parser_mkInputContext___auto__1___closed__18_once, _init_l_Lean_Parser_mkInputContext___auto__1___closed__18);
v___x_3206_ = lean_array_push(v___x_3205_, v___x_3204_);
return v___x_3206_;
}
}
static lean_object* _init_l_Lean_Parser_mkInputContext___auto__1___closed__20(void){
_start:
{
lean_object* v___x_3207_; lean_object* v___x_3208_; lean_object* v___x_3209_; 
v___x_3207_ = ((lean_object*)(l_Lean_Parser_mkInputContext___auto__1___closed__14));
v___x_3208_ = lean_obj_once(&l_Lean_Parser_mkInputContext___auto__1___closed__19, &l_Lean_Parser_mkInputContext___auto__1___closed__19_once, _init_l_Lean_Parser_mkInputContext___auto__1___closed__19);
v___x_3209_ = lean_array_push(v___x_3208_, v___x_3207_);
return v___x_3209_;
}
}
static lean_object* _init_l_Lean_Parser_mkInputContext___auto__1___closed__21(void){
_start:
{
lean_object* v___x_3210_; lean_object* v___x_3211_; lean_object* v___x_3212_; 
v___x_3210_ = ((lean_object*)(l_Lean_Parser_mkInputContext___auto__1___closed__14));
v___x_3211_ = lean_obj_once(&l_Lean_Parser_mkInputContext___auto__1___closed__20, &l_Lean_Parser_mkInputContext___auto__1___closed__20_once, _init_l_Lean_Parser_mkInputContext___auto__1___closed__20);
v___x_3212_ = lean_array_push(v___x_3211_, v___x_3210_);
return v___x_3212_;
}
}
static lean_object* _init_l_Lean_Parser_mkInputContext___auto__1___closed__22(void){
_start:
{
lean_object* v___x_3213_; lean_object* v___x_3214_; lean_object* v___x_3215_; lean_object* v___x_3216_; 
v___x_3213_ = lean_obj_once(&l_Lean_Parser_mkInputContext___auto__1___closed__21, &l_Lean_Parser_mkInputContext___auto__1___closed__21_once, _init_l_Lean_Parser_mkInputContext___auto__1___closed__21);
v___x_3214_ = ((lean_object*)(l_Lean_Parser_mkInputContext___auto__1___closed__9));
v___x_3215_ = lean_box(2);
v___x_3216_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3216_, 0, v___x_3215_);
lean_ctor_set(v___x_3216_, 1, v___x_3214_);
lean_ctor_set(v___x_3216_, 2, v___x_3213_);
return v___x_3216_;
}
}
static lean_object* _init_l_Lean_Parser_mkInputContext___auto__1___closed__23(void){
_start:
{
lean_object* v___x_3217_; lean_object* v___x_3218_; lean_object* v___x_3219_; 
v___x_3217_ = lean_obj_once(&l_Lean_Parser_mkInputContext___auto__1___closed__22, &l_Lean_Parser_mkInputContext___auto__1___closed__22_once, _init_l_Lean_Parser_mkInputContext___auto__1___closed__22);
v___x_3218_ = ((lean_object*)(l_Lean_Parser_mkInputContext___auto__1___closed__3));
v___x_3219_ = lean_array_push(v___x_3218_, v___x_3217_);
return v___x_3219_;
}
}
static lean_object* _init_l_Lean_Parser_mkInputContext___auto__1___closed__24(void){
_start:
{
lean_object* v___x_3220_; lean_object* v___x_3221_; lean_object* v___x_3222_; lean_object* v___x_3223_; 
v___x_3220_ = lean_obj_once(&l_Lean_Parser_mkInputContext___auto__1___closed__23, &l_Lean_Parser_mkInputContext___auto__1___closed__23_once, _init_l_Lean_Parser_mkInputContext___auto__1___closed__23);
v___x_3221_ = ((lean_object*)(l_Lean_Parser_mkInputContext___auto__1___closed__7));
v___x_3222_ = lean_box(2);
v___x_3223_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3223_, 0, v___x_3222_);
lean_ctor_set(v___x_3223_, 1, v___x_3221_);
lean_ctor_set(v___x_3223_, 2, v___x_3220_);
return v___x_3223_;
}
}
static lean_object* _init_l_Lean_Parser_mkInputContext___auto__1___closed__25(void){
_start:
{
lean_object* v___x_3224_; lean_object* v___x_3225_; lean_object* v___x_3226_; 
v___x_3224_ = lean_obj_once(&l_Lean_Parser_mkInputContext___auto__1___closed__24, &l_Lean_Parser_mkInputContext___auto__1___closed__24_once, _init_l_Lean_Parser_mkInputContext___auto__1___closed__24);
v___x_3225_ = ((lean_object*)(l_Lean_Parser_mkInputContext___auto__1___closed__3));
v___x_3226_ = lean_array_push(v___x_3225_, v___x_3224_);
return v___x_3226_;
}
}
static lean_object* _init_l_Lean_Parser_mkInputContext___auto__1___closed__26(void){
_start:
{
lean_object* v___x_3227_; lean_object* v___x_3228_; lean_object* v___x_3229_; lean_object* v___x_3230_; 
v___x_3227_ = lean_obj_once(&l_Lean_Parser_mkInputContext___auto__1___closed__25, &l_Lean_Parser_mkInputContext___auto__1___closed__25_once, _init_l_Lean_Parser_mkInputContext___auto__1___closed__25);
v___x_3228_ = ((lean_object*)(l_Lean_Parser_mkInputContext___auto__1___closed__5));
v___x_3229_ = lean_box(2);
v___x_3230_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3230_, 0, v___x_3229_);
lean_ctor_set(v___x_3230_, 1, v___x_3228_);
lean_ctor_set(v___x_3230_, 2, v___x_3227_);
return v___x_3230_;
}
}
static lean_object* _init_l_Lean_Parser_mkInputContext___auto__1___closed__27(void){
_start:
{
lean_object* v___x_3231_; lean_object* v___x_3232_; lean_object* v___x_3233_; 
v___x_3231_ = lean_obj_once(&l_Lean_Parser_mkInputContext___auto__1___closed__26, &l_Lean_Parser_mkInputContext___auto__1___closed__26_once, _init_l_Lean_Parser_mkInputContext___auto__1___closed__26);
v___x_3232_ = ((lean_object*)(l_Lean_Parser_mkInputContext___auto__1___closed__3));
v___x_3233_ = lean_array_push(v___x_3232_, v___x_3231_);
return v___x_3233_;
}
}
static lean_object* _init_l_Lean_Parser_mkInputContext___auto__1___closed__28(void){
_start:
{
lean_object* v___x_3234_; lean_object* v___x_3235_; lean_object* v___x_3236_; lean_object* v___x_3237_; 
v___x_3234_ = lean_obj_once(&l_Lean_Parser_mkInputContext___auto__1___closed__27, &l_Lean_Parser_mkInputContext___auto__1___closed__27_once, _init_l_Lean_Parser_mkInputContext___auto__1___closed__27);
v___x_3235_ = ((lean_object*)(l_Lean_Parser_mkInputContext___auto__1___closed__2));
v___x_3236_ = lean_box(2);
v___x_3237_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3237_, 0, v___x_3236_);
lean_ctor_set(v___x_3237_, 1, v___x_3235_);
lean_ctor_set(v___x_3237_, 2, v___x_3234_);
return v___x_3237_;
}
}
static lean_object* _init_l_Lean_Parser_mkInputContext___auto__1(void){
_start:
{
lean_object* v___x_3238_; 
v___x_3238_ = lean_obj_once(&l_Lean_Parser_mkInputContext___auto__1___closed__28, &l_Lean_Parser_mkInputContext___auto__1___closed__28_once, _init_l_Lean_Parser_mkInputContext___auto__1___closed__28);
return v___x_3238_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_mkInputContext___redArg(lean_object* v_input_3239_, lean_object* v_fileName_3240_, uint8_t v_normalizeLineEndings_3241_, lean_object* v_endPos_3242_){
_start:
{
lean_object* v_fst_3244_; lean_object* v_snd_3245_; lean_object* v_text_3251_; 
v_text_3251_ = l_Lean_FileMap_ofString(v_input_3239_);
if (v_normalizeLineEndings_3241_ == 0)
{
v_fst_3244_ = v_text_3251_;
v_snd_3245_ = v_endPos_3242_;
goto v___jp_3243_;
}
else
{
lean_object* v_source_3252_; lean_object* v_endPos_x27_3253_; lean_object* v___x_3254_; lean_object* v_text_3255_; lean_object* v___x_3256_; 
v_source_3252_ = lean_ctor_get(v_text_3251_, 0);
lean_inc_ref(v_source_3252_);
v_endPos_x27_3253_ = l_Lean_FileMap_toPosition(v_text_3251_, v_endPos_3242_);
lean_dec(v_endPos_3242_);
v___x_3254_ = l_String_crlfToLf(v_source_3252_);
lean_dec_ref(v_source_3252_);
v_text_3255_ = l_Lean_FileMap_ofString(v___x_3254_);
v___x_3256_ = l_Lean_FileMap_ofPosition(v_text_3255_, v_endPos_x27_3253_);
v_fst_3244_ = v_text_3255_;
v_snd_3245_ = v___x_3256_;
goto v___jp_3243_;
}
v___jp_3243_:
{
lean_object* v_source_3246_; lean_object* v___x_3247_; uint8_t v___x_3248_; 
v_source_3246_ = lean_ctor_get(v_fst_3244_, 0);
lean_inc_ref(v_source_3246_);
v___x_3247_ = lean_string_utf8_byte_size(v_source_3246_);
v___x_3248_ = lean_nat_dec_le(v_snd_3245_, v___x_3247_);
if (v___x_3248_ == 0)
{
lean_object* v___x_3249_; 
lean_dec(v_snd_3245_);
v___x_3249_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_3249_, 0, v_source_3246_);
lean_ctor_set(v___x_3249_, 1, v_fileName_3240_);
lean_ctor_set(v___x_3249_, 2, v_fst_3244_);
lean_ctor_set(v___x_3249_, 3, v___x_3247_);
return v___x_3249_;
}
else
{
lean_object* v___x_3250_; 
v___x_3250_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_3250_, 0, v_source_3246_);
lean_ctor_set(v___x_3250_, 1, v_fileName_3240_);
lean_ctor_set(v___x_3250_, 2, v_fst_3244_);
lean_ctor_set(v___x_3250_, 3, v_snd_3245_);
return v___x_3250_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_mkInputContext___redArg___boxed(lean_object* v_input_3257_, lean_object* v_fileName_3258_, lean_object* v_normalizeLineEndings_3259_, lean_object* v_endPos_3260_){
_start:
{
uint8_t v_normalizeLineEndings_boxed_3261_; lean_object* v_res_3262_; 
v_normalizeLineEndings_boxed_3261_ = lean_unbox(v_normalizeLineEndings_3259_);
v_res_3262_ = l_Lean_Parser_mkInputContext___redArg(v_input_3257_, v_fileName_3258_, v_normalizeLineEndings_boxed_3261_, v_endPos_3260_);
return v_res_3262_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_mkInputContext(lean_object* v_input_3263_, lean_object* v_fileName_3264_, uint8_t v_normalizeLineEndings_3265_, lean_object* v_endPos_3266_, lean_object* v_endPos__valid_3267_){
_start:
{
lean_object* v___x_3268_; 
v___x_3268_ = l_Lean_Parser_mkInputContext___redArg(v_input_3263_, v_fileName_3264_, v_normalizeLineEndings_3265_, v_endPos_3266_);
return v___x_3268_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_mkInputContext___boxed(lean_object* v_input_3269_, lean_object* v_fileName_3270_, lean_object* v_normalizeLineEndings_3271_, lean_object* v_endPos_3272_, lean_object* v_endPos__valid_3273_){
_start:
{
uint8_t v_normalizeLineEndings_boxed_3274_; lean_object* v_res_3275_; 
v_normalizeLineEndings_boxed_3274_ = lean_unbox(v_normalizeLineEndings_3271_);
v_res_3275_ = l_Lean_Parser_mkInputContext(v_input_3269_, v_fileName_3270_, v_normalizeLineEndings_boxed_3274_, v_endPos_3272_, v_endPos__valid_3273_);
return v_res_3275_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_mkParserState(lean_object* v_input_3278_){
_start:
{
lean_object* v___x_3279_; lean_object* v___x_3280_; lean_object* v___x_3281_; lean_object* v___x_3282_; lean_object* v___x_3283_; lean_object* v___x_3284_; 
v___x_3279_ = l_Lean_Parser_SyntaxStack_empty;
v___x_3280_ = lean_unsigned_to_nat(0u);
v___x_3281_ = l_Lean_Parser_initCacheForInput(v_input_3278_);
v___x_3282_ = lean_box(0);
v___x_3283_ = ((lean_object*)(l_Lean_Parser_mkParserState___closed__0));
v___x_3284_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_3284_, 0, v___x_3279_);
lean_ctor_set(v___x_3284_, 1, v___x_3280_);
lean_ctor_set(v___x_3284_, 2, v___x_3280_);
lean_ctor_set(v___x_3284_, 3, v___x_3281_);
lean_ctor_set(v___x_3284_, 4, v___x_3282_);
lean_ctor_set(v___x_3284_, 5, v___x_3283_);
return v___x_3284_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_mkParserState___boxed(lean_object* v_input_3285_){
_start:
{
lean_object* v_res_3286_; 
v_res_3286_ = l_Lean_Parser_mkParserState(v_input_3285_);
lean_dec_ref(v_input_3285_);
return v_res_3286_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_runParserCategory(lean_object* v_env_3289_, lean_object* v_catName_3290_, lean_object* v_input_3291_, lean_object* v_fileName_3292_){
_start:
{
lean_object* v___x_3293_; lean_object* v___x_3294_; lean_object* v_p_3295_; uint8_t v___x_3296_; lean_object* v___x_3297_; lean_object* v_ictx_3298_; lean_object* v___x_3299_; lean_object* v___x_3300_; lean_object* v___x_3301_; lean_object* v___x_3302_; lean_object* v___x_3303_; lean_object* v___x_3304_; lean_object* v_s_3305_; lean_object* v___x_3306_; lean_object* v___x_3307_; lean_object* v___x_3308_; uint8_t v___x_3309_; 
v___x_3293_ = ((lean_object*)(l_Lean_Parser_runParserCategory___closed__0));
v___x_3294_ = lean_alloc_closure((void*)(l_Lean_Parser_categoryParserFnImpl), 3, 1);
lean_closure_set(v___x_3294_, 0, v_catName_3290_);
v_p_3295_ = lean_alloc_closure((void*)(l_Lean_Parser_andthenFn), 4, 2);
lean_closure_set(v_p_3295_, 0, v___x_3293_);
lean_closure_set(v_p_3295_, 1, v___x_3294_);
v___x_3296_ = 1;
v___x_3297_ = lean_string_utf8_byte_size(v_input_3291_);
lean_inc_ref(v_input_3291_);
v_ictx_3298_ = l_Lean_Parser_mkInputContext___redArg(v_input_3291_, v_fileName_3292_, v___x_3296_, v___x_3297_);
v___x_3299_ = l_Lean_Options_empty;
v___x_3300_ = lean_obj_once(&l_List_mapTR_loop___at___00Lean_Parser_addLeadingParser_spec__1___closed__0, &l_List_mapTR_loop___at___00Lean_Parser_addLeadingParser_spec__1___closed__0_once, _init_l_List_mapTR_loop___at___00Lean_Parser_addLeadingParser_spec__1___closed__0);
v___x_3301_ = lean_box(0);
lean_inc_ref(v_env_3289_);
v___x_3302_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_3302_, 0, v_env_3289_);
lean_ctor_set(v___x_3302_, 1, v___x_3299_);
lean_ctor_set(v___x_3302_, 2, v___x_3300_);
lean_ctor_set(v___x_3302_, 3, v___x_3301_);
v___x_3303_ = l_Lean_Parser_getTokenTable(v_env_3289_);
v___x_3304_ = l_Lean_Parser_mkParserState(v_input_3291_);
lean_dec_ref(v_input_3291_);
lean_inc_ref(v_ictx_3298_);
v_s_3305_ = l_Lean_Parser_ParserFn_run(v_p_3295_, v_ictx_3298_, v___x_3302_, v___x_3303_, v___x_3304_);
lean_inc_ref(v_s_3305_);
v___x_3306_ = l_Lean_Parser_ParserState_allErrors(v_s_3305_);
v___x_3307_ = lean_array_get_size(v___x_3306_);
lean_dec_ref(v___x_3306_);
v___x_3308_ = lean_unsigned_to_nat(0u);
v___x_3309_ = lean_nat_dec_eq(v___x_3307_, v___x_3308_);
if (v___x_3309_ == 0)
{
lean_object* v___x_3310_; lean_object* v___x_3311_; 
v___x_3310_ = l_Lean_Parser_ParserState_toErrorMsg(v_ictx_3298_, v_s_3305_);
v___x_3311_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3311_, 0, v___x_3310_);
return v___x_3311_;
}
else
{
lean_object* v_stxStack_3312_; lean_object* v_pos_3313_; uint8_t v___x_3314_; 
v_stxStack_3312_ = lean_ctor_get(v_s_3305_, 0);
lean_inc_ref(v_stxStack_3312_);
v_pos_3313_ = lean_ctor_get(v_s_3305_, 2);
lean_inc(v_pos_3313_);
v___x_3314_ = l_Lean_Parser_InputContext_atEnd(v_ictx_3298_, v_pos_3313_);
lean_dec(v_pos_3313_);
if (v___x_3314_ == 0)
{
lean_object* v___x_3315_; lean_object* v___x_3316_; lean_object* v___x_3317_; lean_object* v___x_3318_; 
lean_dec_ref(v_stxStack_3312_);
v___x_3315_ = ((lean_object*)(l_Lean_Parser_runParserCategory___closed__1));
v___x_3316_ = l_Lean_Parser_ParserState_mkError(v_s_3305_, v___x_3315_);
v___x_3317_ = l_Lean_Parser_ParserState_toErrorMsg(v_ictx_3298_, v___x_3316_);
v___x_3318_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3318_, 0, v___x_3317_);
return v___x_3318_;
}
else
{
lean_object* v___x_3319_; lean_object* v___x_3320_; 
lean_dec_ref(v_s_3305_);
lean_dec_ref(v_ictx_3298_);
v___x_3319_ = l_Lean_Parser_SyntaxStack_back(v_stxStack_3312_);
lean_dec_ref(v_stxStack_3312_);
v___x_3320_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3320_, 0, v___x_3319_);
return v___x_3320_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_declareBuiltinParser(lean_object* v_addFnName_3321_, lean_object* v_catName_3322_, lean_object* v_declName_3323_, lean_object* v_prio_3324_, lean_object* v_a_3325_, lean_object* v_a_3326_){
_start:
{
lean_object* v___x_3328_; lean_object* v___x_3329_; lean_object* v___x_3330_; lean_object* v___x_3331_; lean_object* v___x_3332_; lean_object* v___x_3333_; lean_object* v___x_3334_; lean_object* v___x_3335_; lean_object* v___x_3336_; lean_object* v___x_3337_; lean_object* v___x_3338_; lean_object* v___x_3339_; lean_object* v_val_3340_; lean_object* v___x_3341_; 
v___x_3328_ = lean_box(0);
v___x_3329_ = l_Lean_mkConst(v_addFnName_3321_, v___x_3328_);
v___x_3330_ = l___private_Lean_ToExpr_0__Lean_Name_toExprAux(v_catName_3322_);
lean_inc_n(v_declName_3323_, 2);
v___x_3331_ = l___private_Lean_ToExpr_0__Lean_Name_toExprAux(v_declName_3323_);
v___x_3332_ = l_Lean_mkConst(v_declName_3323_, v___x_3328_);
v___x_3333_ = l_Lean_mkRawNatLit(v_prio_3324_);
v___x_3334_ = lean_unsigned_to_nat(4u);
v___x_3335_ = lean_mk_empty_array_with_capacity(v___x_3334_);
v___x_3336_ = lean_array_push(v___x_3335_, v___x_3330_);
v___x_3337_ = lean_array_push(v___x_3336_, v___x_3331_);
v___x_3338_ = lean_array_push(v___x_3337_, v___x_3332_);
v___x_3339_ = lean_array_push(v___x_3338_, v___x_3333_);
v_val_3340_ = l_Lean_mkAppN(v___x_3329_, v___x_3339_);
lean_dec_ref(v___x_3339_);
v___x_3341_ = l_Lean_declareBuiltin(v_declName_3323_, v_val_3340_, v_a_3325_, v_a_3326_);
return v___x_3341_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_declareBuiltinParser___boxed(lean_object* v_addFnName_3342_, lean_object* v_catName_3343_, lean_object* v_declName_3344_, lean_object* v_prio_3345_, lean_object* v_a_3346_, lean_object* v_a_3347_, lean_object* v_a_3348_){
_start:
{
lean_object* v_res_3349_; 
v_res_3349_ = l_Lean_Parser_declareBuiltinParser(v_addFnName_3342_, v_catName_3343_, v_declName_3344_, v_prio_3345_, v_a_3346_, v_a_3347_);
lean_dec(v_a_3347_);
lean_dec_ref(v_a_3346_);
return v_res_3349_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_declareLeadingBuiltinParser(lean_object* v_catName_3355_, lean_object* v_declName_3356_, lean_object* v_prio_3357_, lean_object* v_a_3358_, lean_object* v_a_3359_){
_start:
{
lean_object* v___x_3361_; lean_object* v___x_3362_; 
v___x_3361_ = ((lean_object*)(l_Lean_Parser_declareLeadingBuiltinParser___closed__1));
v___x_3362_ = l_Lean_Parser_declareBuiltinParser(v___x_3361_, v_catName_3355_, v_declName_3356_, v_prio_3357_, v_a_3358_, v_a_3359_);
return v___x_3362_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_declareLeadingBuiltinParser___boxed(lean_object* v_catName_3363_, lean_object* v_declName_3364_, lean_object* v_prio_3365_, lean_object* v_a_3366_, lean_object* v_a_3367_, lean_object* v_a_3368_){
_start:
{
lean_object* v_res_3369_; 
v_res_3369_ = l_Lean_Parser_declareLeadingBuiltinParser(v_catName_3363_, v_declName_3364_, v_prio_3365_, v_a_3366_, v_a_3367_);
lean_dec(v_a_3367_);
lean_dec_ref(v_a_3366_);
return v_res_3369_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_declareTrailingBuiltinParser(lean_object* v_catName_3375_, lean_object* v_declName_3376_, lean_object* v_prio_3377_, lean_object* v_a_3378_, lean_object* v_a_3379_){
_start:
{
lean_object* v___x_3381_; lean_object* v___x_3382_; 
v___x_3381_ = ((lean_object*)(l_Lean_Parser_declareTrailingBuiltinParser___closed__1));
v___x_3382_ = l_Lean_Parser_declareBuiltinParser(v___x_3381_, v_catName_3375_, v_declName_3376_, v_prio_3377_, v_a_3378_, v_a_3379_);
return v___x_3382_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_declareTrailingBuiltinParser___boxed(lean_object* v_catName_3383_, lean_object* v_declName_3384_, lean_object* v_prio_3385_, lean_object* v_a_3386_, lean_object* v_a_3387_, lean_object* v_a_3388_){
_start:
{
lean_object* v_res_3389_; 
v_res_3389_ = l_Lean_Parser_declareTrailingBuiltinParser(v_catName_3383_, v_declName_3384_, v_prio_3385_, v_a_3386_, v_a_3387_);
lean_dec(v_a_3387_);
lean_dec_ref(v_a_3386_);
return v_res_3389_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_getParserPriority(lean_object* v_args_3396_){
_start:
{
lean_object* v___x_3397_; lean_object* v___x_3398_; uint8_t v___x_3399_; 
v___x_3397_ = l_Lean_Syntax_getNumArgs(v_args_3396_);
v___x_3398_ = lean_unsigned_to_nat(0u);
v___x_3399_ = lean_nat_dec_eq(v___x_3397_, v___x_3398_);
if (v___x_3399_ == 0)
{
lean_object* v___x_3400_; uint8_t v___x_3401_; 
v___x_3400_ = lean_unsigned_to_nat(1u);
v___x_3401_ = lean_nat_dec_eq(v___x_3397_, v___x_3400_);
lean_dec(v___x_3397_);
if (v___x_3401_ == 0)
{
lean_object* v___x_3402_; 
v___x_3402_ = ((lean_object*)(l_Lean_Parser_getParserPriority___closed__1));
return v___x_3402_;
}
else
{
lean_object* v___x_3403_; lean_object* v___x_3404_; 
v___x_3403_ = l_Lean_Syntax_getArg(v_args_3396_, v___x_3398_);
v___x_3404_ = l_Lean_Syntax_isNatLit_x3f(v___x_3403_);
if (lean_obj_tag(v___x_3404_) == 0)
{
lean_object* v___x_3405_; lean_object* v___x_3406_; lean_object* v___x_3407_; lean_object* v___x_3408_; lean_object* v___x_3409_; lean_object* v___x_3410_; lean_object* v___x_3411_; lean_object* v___x_3412_; 
v___x_3405_ = ((lean_object*)(l_Lean_Parser_getParserPriority___closed__2));
v___x_3406_ = l_Lean_Syntax_formatStx(v___x_3403_, v___x_3404_, v___x_3399_);
v___x_3407_ = l_Std_Format_defWidth;
v___x_3408_ = l_Std_Format_pretty(v___x_3406_, v___x_3407_, v___x_3398_, v___x_3398_);
v___x_3409_ = lean_string_append(v___x_3405_, v___x_3408_);
lean_dec_ref(v___x_3408_);
v___x_3410_ = ((lean_object*)(l_Lean_Parser_throwUnknownParserCategory___redArg___closed__1));
v___x_3411_ = lean_string_append(v___x_3409_, v___x_3410_);
v___x_3412_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3412_, 0, v___x_3411_);
return v___x_3412_;
}
else
{
lean_object* v_val_3413_; lean_object* v___x_3415_; uint8_t v_isShared_3416_; uint8_t v_isSharedCheck_3420_; 
lean_dec(v___x_3403_);
v_val_3413_ = lean_ctor_get(v___x_3404_, 0);
v_isSharedCheck_3420_ = !lean_is_exclusive(v___x_3404_);
if (v_isSharedCheck_3420_ == 0)
{
v___x_3415_ = v___x_3404_;
v_isShared_3416_ = v_isSharedCheck_3420_;
goto v_resetjp_3414_;
}
else
{
lean_inc(v_val_3413_);
lean_dec(v___x_3404_);
v___x_3415_ = lean_box(0);
v_isShared_3416_ = v_isSharedCheck_3420_;
goto v_resetjp_3414_;
}
v_resetjp_3414_:
{
lean_object* v___x_3418_; 
if (v_isShared_3416_ == 0)
{
v___x_3418_ = v___x_3415_;
goto v_reusejp_3417_;
}
else
{
lean_object* v_reuseFailAlloc_3419_; 
v_reuseFailAlloc_3419_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3419_, 0, v_val_3413_);
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
}
else
{
lean_object* v___x_3421_; 
lean_dec(v___x_3397_);
v___x_3421_ = ((lean_object*)(l_Lean_Parser_getParserPriority___closed__3));
return v___x_3421_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_getParserPriority___boxed(lean_object* v_args_3422_){
_start:
{
lean_object* v_res_3423_; 
v_res_3423_ = l_Lean_Parser_getParserPriority(v_args_3422_);
lean_dec(v_args_3422_);
return v_res_3423_;
}
}
static lean_object* _init_l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__1___redArg___closed__1(void){
_start:
{
lean_object* v___x_3425_; lean_object* v___x_3426_; 
v___x_3425_ = ((lean_object*)(l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__1___redArg___closed__0));
v___x_3426_ = l_Lean_stringToMessageData(v___x_3425_);
return v___x_3426_;
}
}
static lean_object* _init_l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__1___redArg___closed__3(void){
_start:
{
lean_object* v___x_3428_; lean_object* v___x_3429_; 
v___x_3428_ = ((lean_object*)(l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__1___redArg___closed__2));
v___x_3429_ = l_Lean_stringToMessageData(v___x_3428_);
return v___x_3429_;
}
}
static lean_object* _init_l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__1___redArg___closed__4(void){
_start:
{
lean_object* v___x_3430_; lean_object* v___x_3431_; 
v___x_3430_ = ((lean_object*)(l_Lean_Parser_throwUnknownParserCategory___redArg___closed__1));
v___x_3431_ = l_Lean_stringToMessageData(v___x_3430_);
return v___x_3431_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__1___redArg(lean_object* v_name_3435_, uint8_t v_kind_3436_, lean_object* v___y_3437_, lean_object* v___y_3438_){
_start:
{
lean_object* v___x_3440_; lean_object* v___x_3441_; lean_object* v___x_3442_; lean_object* v___x_3443_; lean_object* v___x_3444_; lean_object* v___y_3446_; 
v___x_3440_ = lean_obj_once(&l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__1___redArg___closed__1, &l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__1___redArg___closed__1_once, _init_l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__1___redArg___closed__1);
v___x_3441_ = l_Lean_MessageData_ofName(v_name_3435_);
v___x_3442_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3442_, 0, v___x_3440_);
lean_ctor_set(v___x_3442_, 1, v___x_3441_);
v___x_3443_ = lean_obj_once(&l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__1___redArg___closed__3, &l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__1___redArg___closed__3_once, _init_l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__1___redArg___closed__3);
v___x_3444_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3444_, 0, v___x_3442_);
lean_ctor_set(v___x_3444_, 1, v___x_3443_);
switch(v_kind_3436_)
{
case 0:
{
lean_object* v___x_3453_; 
v___x_3453_ = ((lean_object*)(l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__1___redArg___closed__5));
v___y_3446_ = v___x_3453_;
goto v___jp_3445_;
}
case 1:
{
lean_object* v___x_3454_; 
v___x_3454_ = ((lean_object*)(l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__1___redArg___closed__6));
v___y_3446_ = v___x_3454_;
goto v___jp_3445_;
}
default: 
{
lean_object* v___x_3455_; 
v___x_3455_ = ((lean_object*)(l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__1___redArg___closed__7));
v___y_3446_ = v___x_3455_;
goto v___jp_3445_;
}
}
v___jp_3445_:
{
lean_object* v___x_3447_; lean_object* v___x_3448_; lean_object* v___x_3449_; lean_object* v___x_3450_; lean_object* v___x_3451_; lean_object* v___x_3452_; 
lean_inc_ref(v___y_3446_);
v___x_3447_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3447_, 0, v___y_3446_);
v___x_3448_ = l_Lean_MessageData_ofFormat(v___x_3447_);
v___x_3449_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3449_, 0, v___x_3444_);
lean_ctor_set(v___x_3449_, 1, v___x_3448_);
v___x_3450_ = lean_obj_once(&l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__1___redArg___closed__4, &l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__1___redArg___closed__4_once, _init_l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__1___redArg___closed__4);
v___x_3451_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3451_, 0, v___x_3449_);
lean_ctor_set(v___x_3451_, 1, v___x_3450_);
v___x_3452_ = l_Lean_throwError___at___00__private_Lean_Parser_Extension_0__Lean_Parser_initFn_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2__spec__0___redArg(v___x_3451_, v___y_3437_, v___y_3438_);
return v___x_3452_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__1___redArg___boxed(lean_object* v_name_3456_, lean_object* v_kind_3457_, lean_object* v___y_3458_, lean_object* v___y_3459_, lean_object* v___y_3460_){
_start:
{
uint8_t v_kind_boxed_3461_; lean_object* v_res_3462_; 
v_kind_boxed_3461_ = lean_unbox(v_kind_3457_);
v_res_3462_ = l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__1___redArg(v_name_3456_, v_kind_boxed_3461_, v___y_3458_, v___y_3459_);
lean_dec(v___y_3459_);
lean_dec_ref(v___y_3458_);
return v_res_3462_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__0_spec__0_spec__1_spec__3_spec__5___redArg(lean_object* v_ref_3463_, lean_object* v_msg_3464_, lean_object* v___y_3465_, lean_object* v___y_3466_){
_start:
{
lean_object* v_toCold_3468_; lean_object* v_currRecDepth_3469_; lean_object* v_ref_3470_; uint8_t v_diag_3471_; uint8_t v_suppressElabErrors_3472_; lean_object* v_ref_3473_; lean_object* v___x_3474_; lean_object* v___x_3475_; 
v_toCold_3468_ = lean_ctor_get(v___y_3465_, 0);
v_currRecDepth_3469_ = lean_ctor_get(v___y_3465_, 1);
v_ref_3470_ = lean_ctor_get(v___y_3465_, 2);
v_diag_3471_ = lean_ctor_get_uint8(v___y_3465_, sizeof(void*)*3);
v_suppressElabErrors_3472_ = lean_ctor_get_uint8(v___y_3465_, sizeof(void*)*3 + 1);
v_ref_3473_ = l_Lean_replaceRef(v_ref_3463_, v_ref_3470_);
lean_inc(v_currRecDepth_3469_);
lean_inc_ref(v_toCold_3468_);
v___x_3474_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_3474_, 0, v_toCold_3468_);
lean_ctor_set(v___x_3474_, 1, v_currRecDepth_3469_);
lean_ctor_set(v___x_3474_, 2, v_ref_3473_);
lean_ctor_set_uint8(v___x_3474_, sizeof(void*)*3, v_diag_3471_);
lean_ctor_set_uint8(v___x_3474_, sizeof(void*)*3 + 1, v_suppressElabErrors_3472_);
v___x_3475_ = l_Lean_throwError___at___00__private_Lean_Parser_Extension_0__Lean_Parser_initFn_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2__spec__0___redArg(v_msg_3464_, v___x_3474_, v___y_3466_);
lean_dec_ref_known(v___x_3474_, 3);
return v___x_3475_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__0_spec__0_spec__1_spec__3_spec__5___redArg___boxed(lean_object* v_ref_3476_, lean_object* v_msg_3477_, lean_object* v___y_3478_, lean_object* v___y_3479_, lean_object* v___y_3480_){
_start:
{
lean_object* v_res_3481_; 
v_res_3481_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__0_spec__0_spec__1_spec__3_spec__5___redArg(v_ref_3476_, v_msg_3477_, v___y_3478_, v___y_3479_);
lean_dec(v___y_3479_);
lean_dec_ref(v___y_3478_);
lean_dec(v_ref_3476_);
return v_res_3481_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___redArg___closed__1(void){
_start:
{
lean_object* v___x_3483_; lean_object* v___x_3484_; 
v___x_3483_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___redArg___closed__0));
v___x_3484_ = l_Lean_stringToMessageData(v___x_3483_);
return v___x_3484_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___redArg___closed__3(void){
_start:
{
lean_object* v___x_3486_; lean_object* v___x_3487_; 
v___x_3486_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___redArg___closed__2));
v___x_3487_ = l_Lean_stringToMessageData(v___x_3486_);
return v___x_3487_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___redArg___closed__5(void){
_start:
{
lean_object* v___x_3489_; lean_object* v___x_3490_; 
v___x_3489_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___redArg___closed__4));
v___x_3490_ = l_Lean_stringToMessageData(v___x_3489_);
return v___x_3490_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___redArg___closed__7(void){
_start:
{
lean_object* v___x_3492_; lean_object* v___x_3493_; 
v___x_3492_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___redArg___closed__6));
v___x_3493_ = l_Lean_stringToMessageData(v___x_3492_);
return v___x_3493_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___redArg___closed__9(void){
_start:
{
lean_object* v___x_3495_; lean_object* v___x_3496_; 
v___x_3495_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___redArg___closed__8));
v___x_3496_ = l_Lean_stringToMessageData(v___x_3495_);
return v___x_3496_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___redArg___closed__11(void){
_start:
{
lean_object* v___x_3498_; lean_object* v___x_3499_; 
v___x_3498_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___redArg___closed__10));
v___x_3499_ = l_Lean_stringToMessageData(v___x_3498_);
return v___x_3499_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___redArg___closed__13(void){
_start:
{
lean_object* v___x_3501_; lean_object* v___x_3502_; 
v___x_3501_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___redArg___closed__12));
v___x_3502_ = l_Lean_stringToMessageData(v___x_3501_);
return v___x_3502_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___redArg(lean_object* v_msg_3503_, lean_object* v_declHint_3504_, lean_object* v___y_3505_){
_start:
{
lean_object* v___x_3507_; lean_object* v___x_3508_; lean_object* v_env_3509_; uint8_t v___x_3510_; 
v___x_3507_ = l_Lean_instInhabitedName;
v___x_3508_ = lean_st_ref_get(v___y_3505_);
v_env_3509_ = lean_ctor_get(v___x_3508_, 0);
lean_inc_ref(v_env_3509_);
lean_dec(v___x_3508_);
v___x_3510_ = l_Lean_Name_isAnonymous(v_declHint_3504_);
if (v___x_3510_ == 0)
{
uint8_t v_isExporting_3511_; 
v_isExporting_3511_ = lean_ctor_get_uint8(v_env_3509_, sizeof(void*)*8);
if (v_isExporting_3511_ == 0)
{
lean_object* v___x_3512_; 
lean_dec_ref(v_env_3509_);
lean_dec(v_declHint_3504_);
v___x_3512_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3512_, 0, v_msg_3503_);
return v___x_3512_;
}
else
{
lean_object* v___x_3513_; uint8_t v___x_3514_; 
lean_inc_ref(v_env_3509_);
v___x_3513_ = l_Lean_Environment_setExporting(v_env_3509_, v___x_3510_);
lean_inc(v_declHint_3504_);
lean_inc_ref(v___x_3513_);
v___x_3514_ = l_Lean_Environment_contains(v___x_3513_, v_declHint_3504_, v_isExporting_3511_);
if (v___x_3514_ == 0)
{
lean_object* v___x_3515_; 
lean_dec_ref(v___x_3513_);
lean_dec_ref(v_env_3509_);
lean_dec(v_declHint_3504_);
v___x_3515_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3515_, 0, v_msg_3503_);
return v___x_3515_;
}
else
{
lean_object* v___x_3516_; lean_object* v___x_3517_; lean_object* v___x_3518_; lean_object* v___x_3519_; lean_object* v___x_3520_; lean_object* v_c_3521_; lean_object* v___x_3522_; 
v___x_3516_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Parser_Extension_0__Lean_Parser_initFn_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2__spec__0_spec__0___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Parser_Extension_0__Lean_Parser_initFn_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2__spec__0_spec__0___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Parser_Extension_0__Lean_Parser_initFn_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2__spec__0_spec__0___closed__1);
v___x_3517_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Parser_Extension_0__Lean_Parser_initFn_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2__spec__0_spec__0___closed__4, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Parser_Extension_0__Lean_Parser_initFn_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2__spec__0_spec__0___closed__4_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Parser_Extension_0__Lean_Parser_initFn_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2__spec__0_spec__0___closed__4);
v___x_3518_ = l_Lean_Options_empty;
v___x_3519_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_3519_, 0, v___x_3513_);
lean_ctor_set(v___x_3519_, 1, v___x_3516_);
lean_ctor_set(v___x_3519_, 2, v___x_3517_);
lean_ctor_set(v___x_3519_, 3, v___x_3518_);
lean_inc(v_declHint_3504_);
v___x_3520_ = l_Lean_MessageData_ofConstName(v_declHint_3504_, v___x_3510_);
v_c_3521_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_c_3521_, 0, v___x_3519_);
lean_ctor_set(v_c_3521_, 1, v___x_3520_);
v___x_3522_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_3509_, v_declHint_3504_);
if (lean_obj_tag(v___x_3522_) == 0)
{
lean_object* v___x_3523_; lean_object* v___x_3524_; lean_object* v___x_3525_; lean_object* v___x_3526_; lean_object* v___x_3527_; lean_object* v___x_3528_; lean_object* v___x_3529_; 
lean_dec_ref(v_env_3509_);
lean_dec(v_declHint_3504_);
v___x_3523_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___redArg___closed__1);
v___x_3524_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3524_, 0, v___x_3523_);
lean_ctor_set(v___x_3524_, 1, v_c_3521_);
v___x_3525_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___redArg___closed__3, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___redArg___closed__3_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___redArg___closed__3);
v___x_3526_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3526_, 0, v___x_3524_);
lean_ctor_set(v___x_3526_, 1, v___x_3525_);
v___x_3527_ = l_Lean_MessageData_note(v___x_3526_);
v___x_3528_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3528_, 0, v_msg_3503_);
lean_ctor_set(v___x_3528_, 1, v___x_3527_);
v___x_3529_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3529_, 0, v___x_3528_);
return v___x_3529_;
}
else
{
lean_object* v_val_3530_; lean_object* v___x_3532_; uint8_t v_isShared_3533_; uint8_t v_isSharedCheck_3564_; 
v_val_3530_ = lean_ctor_get(v___x_3522_, 0);
v_isSharedCheck_3564_ = !lean_is_exclusive(v___x_3522_);
if (v_isSharedCheck_3564_ == 0)
{
v___x_3532_ = v___x_3522_;
v_isShared_3533_ = v_isSharedCheck_3564_;
goto v_resetjp_3531_;
}
else
{
lean_inc(v_val_3530_);
lean_dec(v___x_3522_);
v___x_3532_ = lean_box(0);
v_isShared_3533_ = v_isSharedCheck_3564_;
goto v_resetjp_3531_;
}
v_resetjp_3531_:
{
lean_object* v___x_3534_; lean_object* v___x_3535_; lean_object* v_mod_3536_; uint8_t v___x_3537_; 
v___x_3534_ = l_Lean_Environment_header(v_env_3509_);
lean_dec_ref(v_env_3509_);
v___x_3535_ = l_Lean_EnvironmentHeader_moduleNames(v___x_3534_);
lean_dec_ref(v___x_3534_);
v_mod_3536_ = lean_array_get(v___x_3507_, v___x_3535_, v_val_3530_);
lean_dec(v_val_3530_);
lean_dec_ref(v___x_3535_);
v___x_3537_ = l_Lean_isPrivateName(v_declHint_3504_);
lean_dec(v_declHint_3504_);
if (v___x_3537_ == 0)
{
lean_object* v___x_3538_; lean_object* v___x_3539_; lean_object* v___x_3540_; lean_object* v___x_3541_; lean_object* v___x_3542_; lean_object* v___x_3543_; lean_object* v___x_3544_; lean_object* v___x_3545_; lean_object* v___x_3546_; lean_object* v___x_3547_; lean_object* v___x_3549_; 
v___x_3538_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___redArg___closed__5, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___redArg___closed__5_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___redArg___closed__5);
v___x_3539_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3539_, 0, v___x_3538_);
lean_ctor_set(v___x_3539_, 1, v_c_3521_);
v___x_3540_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___redArg___closed__7, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___redArg___closed__7_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___redArg___closed__7);
v___x_3541_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3541_, 0, v___x_3539_);
lean_ctor_set(v___x_3541_, 1, v___x_3540_);
v___x_3542_ = l_Lean_MessageData_ofName(v_mod_3536_);
v___x_3543_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3543_, 0, v___x_3541_);
lean_ctor_set(v___x_3543_, 1, v___x_3542_);
v___x_3544_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___redArg___closed__9, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___redArg___closed__9_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___redArg___closed__9);
v___x_3545_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3545_, 0, v___x_3543_);
lean_ctor_set(v___x_3545_, 1, v___x_3544_);
v___x_3546_ = l_Lean_MessageData_note(v___x_3545_);
v___x_3547_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3547_, 0, v_msg_3503_);
lean_ctor_set(v___x_3547_, 1, v___x_3546_);
if (v_isShared_3533_ == 0)
{
lean_ctor_set_tag(v___x_3532_, 0);
lean_ctor_set(v___x_3532_, 0, v___x_3547_);
v___x_3549_ = v___x_3532_;
goto v_reusejp_3548_;
}
else
{
lean_object* v_reuseFailAlloc_3550_; 
v_reuseFailAlloc_3550_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3550_, 0, v___x_3547_);
v___x_3549_ = v_reuseFailAlloc_3550_;
goto v_reusejp_3548_;
}
v_reusejp_3548_:
{
return v___x_3549_;
}
}
else
{
lean_object* v___x_3551_; lean_object* v___x_3552_; lean_object* v___x_3553_; lean_object* v___x_3554_; lean_object* v___x_3555_; lean_object* v___x_3556_; lean_object* v___x_3557_; lean_object* v___x_3558_; lean_object* v___x_3559_; lean_object* v___x_3560_; lean_object* v___x_3562_; 
v___x_3551_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___redArg___closed__1);
v___x_3552_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3552_, 0, v___x_3551_);
lean_ctor_set(v___x_3552_, 1, v_c_3521_);
v___x_3553_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___redArg___closed__11, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___redArg___closed__11_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___redArg___closed__11);
v___x_3554_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3554_, 0, v___x_3552_);
lean_ctor_set(v___x_3554_, 1, v___x_3553_);
v___x_3555_ = l_Lean_MessageData_ofName(v_mod_3536_);
v___x_3556_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3556_, 0, v___x_3554_);
lean_ctor_set(v___x_3556_, 1, v___x_3555_);
v___x_3557_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___redArg___closed__13, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___redArg___closed__13_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___redArg___closed__13);
v___x_3558_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3558_, 0, v___x_3556_);
lean_ctor_set(v___x_3558_, 1, v___x_3557_);
v___x_3559_ = l_Lean_MessageData_note(v___x_3558_);
v___x_3560_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3560_, 0, v_msg_3503_);
lean_ctor_set(v___x_3560_, 1, v___x_3559_);
if (v_isShared_3533_ == 0)
{
lean_ctor_set_tag(v___x_3532_, 0);
lean_ctor_set(v___x_3532_, 0, v___x_3560_);
v___x_3562_ = v___x_3532_;
goto v_reusejp_3561_;
}
else
{
lean_object* v_reuseFailAlloc_3563_; 
v_reuseFailAlloc_3563_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3563_, 0, v___x_3560_);
v___x_3562_ = v_reuseFailAlloc_3563_;
goto v_reusejp_3561_;
}
v_reusejp_3561_:
{
return v___x_3562_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_3565_; 
lean_dec_ref(v_env_3509_);
lean_dec(v_declHint_3504_);
v___x_3565_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3565_, 0, v_msg_3503_);
return v___x_3565_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___redArg___boxed(lean_object* v_msg_3566_, lean_object* v_declHint_3567_, lean_object* v___y_3568_, lean_object* v___y_3569_){
_start:
{
lean_object* v_res_3570_; 
v_res_3570_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___redArg(v_msg_3566_, v_declHint_3567_, v___y_3568_);
lean_dec(v___y_3568_);
return v_res_3570_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__0_spec__0_spec__1_spec__3_spec__4(lean_object* v_msg_3571_, lean_object* v_declHint_3572_, lean_object* v___y_3573_, lean_object* v___y_3574_){
_start:
{
lean_object* v___x_3576_; lean_object* v_a_3577_; lean_object* v___x_3579_; uint8_t v_isShared_3580_; uint8_t v_isSharedCheck_3586_; 
v___x_3576_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___redArg(v_msg_3571_, v_declHint_3572_, v___y_3574_);
v_a_3577_ = lean_ctor_get(v___x_3576_, 0);
v_isSharedCheck_3586_ = !lean_is_exclusive(v___x_3576_);
if (v_isSharedCheck_3586_ == 0)
{
v___x_3579_ = v___x_3576_;
v_isShared_3580_ = v_isSharedCheck_3586_;
goto v_resetjp_3578_;
}
else
{
lean_inc(v_a_3577_);
lean_dec(v___x_3576_);
v___x_3579_ = lean_box(0);
v_isShared_3580_ = v_isSharedCheck_3586_;
goto v_resetjp_3578_;
}
v_resetjp_3578_:
{
lean_object* v___x_3581_; lean_object* v___x_3582_; lean_object* v___x_3584_; 
v___x_3581_ = l_Lean_unknownIdentifierMessageTag;
v___x_3582_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_3582_, 0, v___x_3581_);
lean_ctor_set(v___x_3582_, 1, v_a_3577_);
if (v_isShared_3580_ == 0)
{
lean_ctor_set(v___x_3579_, 0, v___x_3582_);
v___x_3584_ = v___x_3579_;
goto v_reusejp_3583_;
}
else
{
lean_object* v_reuseFailAlloc_3585_; 
v_reuseFailAlloc_3585_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3585_, 0, v___x_3582_);
v___x_3584_ = v_reuseFailAlloc_3585_;
goto v_reusejp_3583_;
}
v_reusejp_3583_:
{
return v___x_3584_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__0_spec__0_spec__1_spec__3_spec__4___boxed(lean_object* v_msg_3587_, lean_object* v_declHint_3588_, lean_object* v___y_3589_, lean_object* v___y_3590_, lean_object* v___y_3591_){
_start:
{
lean_object* v_res_3592_; 
v_res_3592_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__0_spec__0_spec__1_spec__3_spec__4(v_msg_3587_, v_declHint_3588_, v___y_3589_, v___y_3590_);
lean_dec(v___y_3590_);
lean_dec_ref(v___y_3589_);
return v_res_3592_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__0_spec__0_spec__1_spec__3___redArg(lean_object* v_ref_3593_, lean_object* v_msg_3594_, lean_object* v_declHint_3595_, lean_object* v___y_3596_, lean_object* v___y_3597_){
_start:
{
lean_object* v___x_3599_; lean_object* v_a_3600_; lean_object* v___x_3601_; 
v___x_3599_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__0_spec__0_spec__1_spec__3_spec__4(v_msg_3594_, v_declHint_3595_, v___y_3596_, v___y_3597_);
v_a_3600_ = lean_ctor_get(v___x_3599_, 0);
lean_inc(v_a_3600_);
lean_dec_ref(v___x_3599_);
v___x_3601_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__0_spec__0_spec__1_spec__3_spec__5___redArg(v_ref_3593_, v_a_3600_, v___y_3596_, v___y_3597_);
return v___x_3601_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__0_spec__0_spec__1_spec__3___redArg___boxed(lean_object* v_ref_3602_, lean_object* v_msg_3603_, lean_object* v_declHint_3604_, lean_object* v___y_3605_, lean_object* v___y_3606_, lean_object* v___y_3607_){
_start:
{
lean_object* v_res_3608_; 
v_res_3608_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__0_spec__0_spec__1_spec__3___redArg(v_ref_3602_, v_msg_3603_, v_declHint_3604_, v___y_3605_, v___y_3606_);
lean_dec(v___y_3606_);
lean_dec_ref(v___y_3605_);
lean_dec(v_ref_3602_);
return v_res_3608_;
}
}
static lean_object* _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__0_spec__0_spec__1___redArg___closed__0(void){
_start:
{
lean_object* v___x_3609_; lean_object* v___x_3610_; 
v___x_3609_ = ((lean_object*)(l_Lean_Parser_mkParserOfConstantUnsafe___closed__2));
v___x_3610_ = l_Lean_stringToMessageData(v___x_3609_);
return v___x_3610_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__0_spec__0_spec__1___redArg(lean_object* v_ref_3611_, lean_object* v_constName_3612_, lean_object* v___y_3613_, lean_object* v___y_3614_){
_start:
{
lean_object* v___x_3616_; uint8_t v___x_3617_; lean_object* v___x_3618_; lean_object* v___x_3619_; lean_object* v___x_3620_; lean_object* v___x_3621_; lean_object* v___x_3622_; 
v___x_3616_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__0_spec__0_spec__1___redArg___closed__0, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__0_spec__0_spec__1___redArg___closed__0_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__0_spec__0_spec__1___redArg___closed__0);
v___x_3617_ = 0;
lean_inc(v_constName_3612_);
v___x_3618_ = l_Lean_MessageData_ofConstName(v_constName_3612_, v___x_3617_);
v___x_3619_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3619_, 0, v___x_3616_);
lean_ctor_set(v___x_3619_, 1, v___x_3618_);
v___x_3620_ = lean_obj_once(&l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__1___redArg___closed__4, &l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__1___redArg___closed__4_once, _init_l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__1___redArg___closed__4);
v___x_3621_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3621_, 0, v___x_3619_);
lean_ctor_set(v___x_3621_, 1, v___x_3620_);
v___x_3622_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__0_spec__0_spec__1_spec__3___redArg(v_ref_3611_, v___x_3621_, v_constName_3612_, v___y_3613_, v___y_3614_);
return v___x_3622_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_ref_3623_, lean_object* v_constName_3624_, lean_object* v___y_3625_, lean_object* v___y_3626_, lean_object* v___y_3627_){
_start:
{
lean_object* v_res_3628_; 
v_res_3628_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__0_spec__0_spec__1___redArg(v_ref_3623_, v_constName_3624_, v___y_3625_, v___y_3626_);
lean_dec(v___y_3626_);
lean_dec_ref(v___y_3625_);
lean_dec(v_ref_3623_);
return v_res_3628_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__0_spec__0___redArg(lean_object* v_constName_3629_, lean_object* v___y_3630_, lean_object* v___y_3631_){
_start:
{
lean_object* v_ref_3633_; lean_object* v___x_3634_; 
v_ref_3633_ = lean_ctor_get(v___y_3630_, 2);
v___x_3634_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__0_spec__0_spec__1___redArg(v_ref_3633_, v_constName_3629_, v___y_3630_, v___y_3631_);
return v___x_3634_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__0_spec__0___redArg___boxed(lean_object* v_constName_3635_, lean_object* v___y_3636_, lean_object* v___y_3637_, lean_object* v___y_3638_){
_start:
{
lean_object* v_res_3639_; 
v_res_3639_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__0_spec__0___redArg(v_constName_3635_, v___y_3636_, v___y_3637_);
lean_dec(v___y_3637_);
lean_dec_ref(v___y_3636_);
return v_res_3639_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__0(lean_object* v_constName_3640_, lean_object* v___y_3641_, lean_object* v___y_3642_){
_start:
{
lean_object* v___x_3644_; lean_object* v_env_3645_; uint8_t v___x_3646_; lean_object* v___x_3647_; 
v___x_3644_ = lean_st_ref_get(v___y_3642_);
v_env_3645_ = lean_ctor_get(v___x_3644_, 0);
lean_inc_ref(v_env_3645_);
lean_dec(v___x_3644_);
v___x_3646_ = 0;
lean_inc(v_constName_3640_);
v___x_3647_ = l_Lean_Environment_find_x3f(v_env_3645_, v_constName_3640_, v___x_3646_);
if (lean_obj_tag(v___x_3647_) == 0)
{
lean_object* v___x_3648_; 
v___x_3648_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__0_spec__0___redArg(v_constName_3640_, v___y_3641_, v___y_3642_);
return v___x_3648_;
}
else
{
lean_object* v_val_3649_; lean_object* v___x_3651_; uint8_t v_isShared_3652_; uint8_t v_isSharedCheck_3656_; 
lean_dec(v_constName_3640_);
v_val_3649_ = lean_ctor_get(v___x_3647_, 0);
v_isSharedCheck_3656_ = !lean_is_exclusive(v___x_3647_);
if (v_isSharedCheck_3656_ == 0)
{
v___x_3651_ = v___x_3647_;
v_isShared_3652_ = v_isSharedCheck_3656_;
goto v_resetjp_3650_;
}
else
{
lean_inc(v_val_3649_);
lean_dec(v___x_3647_);
v___x_3651_ = lean_box(0);
v_isShared_3652_ = v_isSharedCheck_3656_;
goto v_resetjp_3650_;
}
v_resetjp_3650_:
{
lean_object* v___x_3654_; 
if (v_isShared_3652_ == 0)
{
lean_ctor_set_tag(v___x_3651_, 0);
v___x_3654_ = v___x_3651_;
goto v_reusejp_3653_;
}
else
{
lean_object* v_reuseFailAlloc_3655_; 
v_reuseFailAlloc_3655_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3655_, 0, v_val_3649_);
v___x_3654_ = v_reuseFailAlloc_3655_;
goto v_reusejp_3653_;
}
v_reusejp_3653_:
{
return v___x_3654_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__0___boxed(lean_object* v_constName_3657_, lean_object* v___y_3658_, lean_object* v___y_3659_, lean_object* v___y_3660_){
_start:
{
lean_object* v_res_3661_; 
v_res_3661_ = l_Lean_getConstInfo___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__0(v_constName_3657_, v___y_3658_, v___y_3659_);
lean_dec(v___y_3659_);
lean_dec_ref(v___y_3658_);
return v_res_3661_;
}
}
static lean_object* _init_l___private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add___closed__1(void){
_start:
{
lean_object* v___x_3663_; lean_object* v___x_3664_; 
v___x_3663_ = ((lean_object*)(l___private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add___closed__0));
v___x_3664_ = l_Lean_stringToMessageData(v___x_3663_);
return v___x_3664_;
}
}
static lean_object* _init_l___private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add___closed__3(void){
_start:
{
lean_object* v___x_3666_; lean_object* v___x_3667_; 
v___x_3666_ = ((lean_object*)(l___private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add___closed__2));
v___x_3667_ = l_Lean_stringToMessageData(v___x_3666_);
return v___x_3667_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add(lean_object* v_attrName_3668_, lean_object* v_catName_3669_, lean_object* v_declName_3670_, lean_object* v_stx_3671_, uint8_t v_kind_3672_, lean_object* v_a_3673_, lean_object* v_a_3674_){
_start:
{
lean_object* v___y_3677_; lean_object* v___y_3678_; lean_object* v___y_3683_; lean_object* v___y_3684_; lean_object* v___y_3685_; lean_object* v___x_3696_; 
v___x_3696_ = l_Lean_Attribute_Builtin_getPrio(v_stx_3671_, v_a_3673_, v_a_3674_);
if (lean_obj_tag(v___x_3696_) == 0)
{
lean_object* v_a_3697_; lean_object* v___y_3699_; lean_object* v___y_3700_; uint8_t v___x_3728_; uint8_t v___x_3729_; 
v_a_3697_ = lean_ctor_get(v___x_3696_, 0);
lean_inc(v_a_3697_);
lean_dec_ref_known(v___x_3696_, 1);
v___x_3728_ = 0;
v___x_3729_ = l_Lean_instBEqAttributeKind_beq(v_kind_3672_, v___x_3728_);
if (v___x_3729_ == 0)
{
lean_object* v___x_3730_; 
lean_dec(v_a_3697_);
lean_dec(v_declName_3670_);
lean_dec(v_catName_3669_);
v___x_3730_ = l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__1___redArg(v_attrName_3668_, v_kind_3672_, v_a_3673_, v_a_3674_);
return v___x_3730_;
}
else
{
lean_dec(v_attrName_3668_);
v___y_3699_ = v_a_3673_;
v___y_3700_ = v_a_3674_;
goto v___jp_3698_;
}
v___jp_3698_:
{
lean_object* v___x_3701_; 
lean_inc(v_declName_3670_);
v___x_3701_ = l_Lean_getConstInfo___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__0(v_declName_3670_, v___y_3699_, v___y_3700_);
if (lean_obj_tag(v___x_3701_) == 0)
{
lean_object* v_a_3702_; lean_object* v___x_3703_; 
v_a_3702_ = lean_ctor_get(v___x_3701_, 0);
lean_inc(v_a_3702_);
lean_dec_ref_known(v___x_3701_, 1);
v___x_3703_ = l_Lean_ConstantInfo_type(v_a_3702_);
if (lean_obj_tag(v___x_3703_) == 4)
{
lean_object* v_declName_3704_; 
v_declName_3704_ = lean_ctor_get(v___x_3703_, 0);
lean_inc(v_declName_3704_);
lean_dec_ref_known(v___x_3703_, 2);
if (lean_obj_tag(v_declName_3704_) == 1)
{
lean_object* v_pre_3705_; 
v_pre_3705_ = lean_ctor_get(v_declName_3704_, 0);
lean_inc(v_pre_3705_);
if (lean_obj_tag(v_pre_3705_) == 1)
{
lean_object* v_pre_3706_; 
v_pre_3706_ = lean_ctor_get(v_pre_3705_, 0);
lean_inc(v_pre_3706_);
if (lean_obj_tag(v_pre_3706_) == 1)
{
lean_object* v_pre_3707_; 
v_pre_3707_ = lean_ctor_get(v_pre_3706_, 0);
if (lean_obj_tag(v_pre_3707_) == 0)
{
lean_object* v_str_3708_; lean_object* v_str_3709_; lean_object* v_str_3710_; lean_object* v___x_3711_; uint8_t v___x_3712_; 
v_str_3708_ = lean_ctor_get(v_declName_3704_, 1);
lean_inc_ref(v_str_3708_);
lean_dec_ref_known(v_declName_3704_, 2);
v_str_3709_ = lean_ctor_get(v_pre_3705_, 1);
lean_inc_ref(v_str_3709_);
lean_dec_ref_known(v_pre_3705_, 2);
v_str_3710_ = lean_ctor_get(v_pre_3706_, 1);
lean_inc_ref(v_str_3710_);
lean_dec_ref_known(v_pre_3706_, 2);
v___x_3711_ = ((lean_object*)(l_Lean_Parser_mkParserOfConstantUnsafe___closed__3));
v___x_3712_ = lean_string_dec_eq(v_str_3710_, v___x_3711_);
lean_dec_ref(v_str_3710_);
if (v___x_3712_ == 0)
{
lean_dec_ref(v_str_3709_);
lean_dec_ref(v_str_3708_);
lean_dec(v_a_3697_);
lean_dec(v_catName_3669_);
v___y_3683_ = v_a_3702_;
v___y_3684_ = v___y_3699_;
v___y_3685_ = v___y_3700_;
goto v___jp_3682_;
}
else
{
lean_object* v___x_3713_; uint8_t v___x_3714_; 
v___x_3713_ = ((lean_object*)(l_Lean_Parser_mkParserOfConstantUnsafe___closed__4));
v___x_3714_ = lean_string_dec_eq(v_str_3709_, v___x_3713_);
lean_dec_ref(v_str_3709_);
if (v___x_3714_ == 0)
{
lean_dec_ref(v_str_3708_);
lean_dec(v_a_3697_);
lean_dec(v_catName_3669_);
v___y_3683_ = v_a_3702_;
v___y_3684_ = v___y_3699_;
v___y_3685_ = v___y_3700_;
goto v___jp_3682_;
}
else
{
lean_object* v___x_3715_; uint8_t v___x_3716_; 
v___x_3715_ = ((lean_object*)(l_Lean_Parser_mkParserOfConstantUnsafe___closed__5));
v___x_3716_ = lean_string_dec_eq(v_str_3708_, v___x_3715_);
if (v___x_3716_ == 0)
{
uint8_t v___x_3717_; 
v___x_3717_ = lean_string_dec_eq(v_str_3708_, v___x_3713_);
lean_dec_ref(v_str_3708_);
if (v___x_3717_ == 0)
{
lean_dec(v_a_3697_);
lean_dec(v_catName_3669_);
v___y_3683_ = v_a_3702_;
v___y_3684_ = v___y_3699_;
v___y_3685_ = v___y_3700_;
goto v___jp_3682_;
}
else
{
lean_object* v___x_3718_; 
lean_dec(v_a_3702_);
lean_inc(v_declName_3670_);
lean_inc(v_catName_3669_);
v___x_3718_ = l_Lean_Parser_declareLeadingBuiltinParser(v_catName_3669_, v_declName_3670_, v_a_3697_, v___y_3699_, v___y_3700_);
if (lean_obj_tag(v___x_3718_) == 0)
{
lean_dec_ref_known(v___x_3718_, 1);
v___y_3677_ = v___y_3699_;
v___y_3678_ = v___y_3700_;
goto v___jp_3676_;
}
else
{
lean_dec(v_declName_3670_);
lean_dec(v_catName_3669_);
return v___x_3718_;
}
}
}
else
{
lean_object* v___x_3719_; 
lean_dec_ref(v_str_3708_);
lean_dec(v_a_3702_);
lean_inc(v_declName_3670_);
lean_inc(v_catName_3669_);
v___x_3719_ = l_Lean_Parser_declareTrailingBuiltinParser(v_catName_3669_, v_declName_3670_, v_a_3697_, v___y_3699_, v___y_3700_);
if (lean_obj_tag(v___x_3719_) == 0)
{
lean_dec_ref_known(v___x_3719_, 1);
v___y_3677_ = v___y_3699_;
v___y_3678_ = v___y_3700_;
goto v___jp_3676_;
}
else
{
lean_dec(v_declName_3670_);
lean_dec(v_catName_3669_);
return v___x_3719_;
}
}
}
}
}
else
{
lean_dec_ref_known(v_pre_3706_, 2);
lean_dec_ref_known(v_pre_3705_, 2);
lean_dec_ref_known(v_declName_3704_, 2);
lean_dec(v_a_3697_);
lean_dec(v_catName_3669_);
v___y_3683_ = v_a_3702_;
v___y_3684_ = v___y_3699_;
v___y_3685_ = v___y_3700_;
goto v___jp_3682_;
}
}
else
{
lean_dec_ref_known(v_pre_3705_, 2);
lean_dec(v_pre_3706_);
lean_dec_ref_known(v_declName_3704_, 2);
lean_dec(v_a_3697_);
lean_dec(v_catName_3669_);
v___y_3683_ = v_a_3702_;
v___y_3684_ = v___y_3699_;
v___y_3685_ = v___y_3700_;
goto v___jp_3682_;
}
}
else
{
lean_dec(v_pre_3705_);
lean_dec_ref_known(v_declName_3704_, 2);
lean_dec(v_a_3697_);
lean_dec(v_catName_3669_);
v___y_3683_ = v_a_3702_;
v___y_3684_ = v___y_3699_;
v___y_3685_ = v___y_3700_;
goto v___jp_3682_;
}
}
else
{
lean_dec(v_declName_3704_);
lean_dec(v_a_3697_);
lean_dec(v_catName_3669_);
v___y_3683_ = v_a_3702_;
v___y_3684_ = v___y_3699_;
v___y_3685_ = v___y_3700_;
goto v___jp_3682_;
}
}
else
{
lean_dec_ref(v___x_3703_);
lean_dec(v_a_3697_);
lean_dec(v_catName_3669_);
v___y_3683_ = v_a_3702_;
v___y_3684_ = v___y_3699_;
v___y_3685_ = v___y_3700_;
goto v___jp_3682_;
}
}
else
{
lean_object* v_a_3720_; lean_object* v___x_3722_; uint8_t v_isShared_3723_; uint8_t v_isSharedCheck_3727_; 
lean_dec(v_a_3697_);
lean_dec(v_declName_3670_);
lean_dec(v_catName_3669_);
v_a_3720_ = lean_ctor_get(v___x_3701_, 0);
v_isSharedCheck_3727_ = !lean_is_exclusive(v___x_3701_);
if (v_isSharedCheck_3727_ == 0)
{
v___x_3722_ = v___x_3701_;
v_isShared_3723_ = v_isSharedCheck_3727_;
goto v_resetjp_3721_;
}
else
{
lean_inc(v_a_3720_);
lean_dec(v___x_3701_);
v___x_3722_ = lean_box(0);
v_isShared_3723_ = v_isSharedCheck_3727_;
goto v_resetjp_3721_;
}
v_resetjp_3721_:
{
lean_object* v___x_3725_; 
if (v_isShared_3723_ == 0)
{
v___x_3725_ = v___x_3722_;
goto v_reusejp_3724_;
}
else
{
lean_object* v_reuseFailAlloc_3726_; 
v_reuseFailAlloc_3726_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3726_, 0, v_a_3720_);
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
}
else
{
lean_object* v_a_3731_; lean_object* v___x_3733_; uint8_t v_isShared_3734_; uint8_t v_isSharedCheck_3738_; 
lean_dec(v_declName_3670_);
lean_dec(v_catName_3669_);
lean_dec(v_attrName_3668_);
v_a_3731_ = lean_ctor_get(v___x_3696_, 0);
v_isSharedCheck_3738_ = !lean_is_exclusive(v___x_3696_);
if (v_isSharedCheck_3738_ == 0)
{
v___x_3733_ = v___x_3696_;
v_isShared_3734_ = v_isSharedCheck_3738_;
goto v_resetjp_3732_;
}
else
{
lean_inc(v_a_3731_);
lean_dec(v___x_3696_);
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
v___jp_3676_:
{
lean_object* v___x_3679_; 
lean_inc(v_declName_3670_);
v___x_3679_ = l_Lean_declareBuiltinDocStringAndRanges(v_declName_3670_, v___y_3677_, v___y_3678_);
if (lean_obj_tag(v___x_3679_) == 0)
{
uint8_t v___x_3680_; lean_object* v___x_3681_; 
lean_dec_ref_known(v___x_3679_, 1);
v___x_3680_ = 1;
v___x_3681_ = l_Lean_Parser_runParserAttributeHooks(v_catName_3669_, v_declName_3670_, v___x_3680_, v___y_3677_, v___y_3678_);
return v___x_3681_;
}
else
{
lean_dec(v_declName_3670_);
lean_dec(v_catName_3669_);
return v___x_3679_;
}
}
v___jp_3682_:
{
lean_object* v___x_3686_; uint8_t v___x_3687_; lean_object* v___x_3688_; lean_object* v___x_3689_; lean_object* v___x_3690_; lean_object* v___x_3691_; lean_object* v___x_3692_; lean_object* v___x_3693_; lean_object* v___x_3694_; lean_object* v___x_3695_; 
v___x_3686_ = lean_obj_once(&l___private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add___closed__1, &l___private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add___closed__1_once, _init_l___private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add___closed__1);
v___x_3687_ = 0;
v___x_3688_ = l_Lean_MessageData_ofConstName(v_declName_3670_, v___x_3687_);
v___x_3689_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3689_, 0, v___x_3686_);
lean_ctor_set(v___x_3689_, 1, v___x_3688_);
v___x_3690_ = lean_obj_once(&l___private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add___closed__3, &l___private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add___closed__3_once, _init_l___private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add___closed__3);
v___x_3691_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3691_, 0, v___x_3689_);
lean_ctor_set(v___x_3691_, 1, v___x_3690_);
v___x_3692_ = l_Lean_ConstantInfo_type(v___y_3683_);
lean_dec_ref(v___y_3683_);
v___x_3693_ = l_Lean_indentExpr(v___x_3692_);
v___x_3694_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3694_, 0, v___x_3691_);
lean_ctor_set(v___x_3694_, 1, v___x_3693_);
v___x_3695_ = l_Lean_throwError___at___00__private_Lean_Parser_Extension_0__Lean_Parser_initFn_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2__spec__0___redArg(v___x_3694_, v___y_3684_, v___y_3685_);
return v___x_3695_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add___boxed(lean_object* v_attrName_3739_, lean_object* v_catName_3740_, lean_object* v_declName_3741_, lean_object* v_stx_3742_, lean_object* v_kind_3743_, lean_object* v_a_3744_, lean_object* v_a_3745_, lean_object* v_a_3746_){
_start:
{
uint8_t v_kind_boxed_3747_; lean_object* v_res_3748_; 
v_kind_boxed_3747_ = lean_unbox(v_kind_3743_);
v_res_3748_ = l___private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add(v_attrName_3739_, v_catName_3740_, v_declName_3741_, v_stx_3742_, v_kind_boxed_3747_, v_a_3744_, v_a_3745_);
lean_dec(v_a_3745_);
lean_dec_ref(v_a_3744_);
return v_res_3748_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__1(lean_object* v_00_u03b1_3749_, lean_object* v_name_3750_, uint8_t v_kind_3751_, lean_object* v___y_3752_, lean_object* v___y_3753_){
_start:
{
lean_object* v___x_3755_; 
v___x_3755_ = l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__1___redArg(v_name_3750_, v_kind_3751_, v___y_3752_, v___y_3753_);
return v___x_3755_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__1___boxed(lean_object* v_00_u03b1_3756_, lean_object* v_name_3757_, lean_object* v_kind_3758_, lean_object* v___y_3759_, lean_object* v___y_3760_, lean_object* v___y_3761_){
_start:
{
uint8_t v_kind_boxed_3762_; lean_object* v_res_3763_; 
v_kind_boxed_3762_ = lean_unbox(v_kind_3758_);
v_res_3763_ = l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__1(v_00_u03b1_3756_, v_name_3757_, v_kind_boxed_3762_, v___y_3759_, v___y_3760_);
lean_dec(v___y_3760_);
lean_dec_ref(v___y_3759_);
return v_res_3763_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__0_spec__0(lean_object* v_00_u03b1_3764_, lean_object* v_constName_3765_, lean_object* v___y_3766_, lean_object* v___y_3767_){
_start:
{
lean_object* v___x_3769_; 
v___x_3769_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__0_spec__0___redArg(v_constName_3765_, v___y_3766_, v___y_3767_);
return v___x_3769_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__0_spec__0___boxed(lean_object* v_00_u03b1_3770_, lean_object* v_constName_3771_, lean_object* v___y_3772_, lean_object* v___y_3773_, lean_object* v___y_3774_){
_start:
{
lean_object* v_res_3775_; 
v_res_3775_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__0_spec__0(v_00_u03b1_3770_, v_constName_3771_, v___y_3772_, v___y_3773_);
lean_dec(v___y_3773_);
lean_dec_ref(v___y_3772_);
return v_res_3775_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__0_spec__0_spec__1(lean_object* v_00_u03b1_3776_, lean_object* v_ref_3777_, lean_object* v_constName_3778_, lean_object* v___y_3779_, lean_object* v___y_3780_){
_start:
{
lean_object* v___x_3782_; 
v___x_3782_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__0_spec__0_spec__1___redArg(v_ref_3777_, v_constName_3778_, v___y_3779_, v___y_3780_);
return v___x_3782_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b1_3783_, lean_object* v_ref_3784_, lean_object* v_constName_3785_, lean_object* v___y_3786_, lean_object* v___y_3787_, lean_object* v___y_3788_){
_start:
{
lean_object* v_res_3789_; 
v_res_3789_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__0_spec__0_spec__1(v_00_u03b1_3783_, v_ref_3784_, v_constName_3785_, v___y_3786_, v___y_3787_);
lean_dec(v___y_3787_);
lean_dec_ref(v___y_3786_);
lean_dec(v_ref_3784_);
return v_res_3789_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__0_spec__0_spec__1_spec__3(lean_object* v_00_u03b1_3790_, lean_object* v_ref_3791_, lean_object* v_msg_3792_, lean_object* v_declHint_3793_, lean_object* v___y_3794_, lean_object* v___y_3795_){
_start:
{
lean_object* v___x_3797_; 
v___x_3797_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__0_spec__0_spec__1_spec__3___redArg(v_ref_3791_, v_msg_3792_, v_declHint_3793_, v___y_3794_, v___y_3795_);
return v___x_3797_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__0_spec__0_spec__1_spec__3___boxed(lean_object* v_00_u03b1_3798_, lean_object* v_ref_3799_, lean_object* v_msg_3800_, lean_object* v_declHint_3801_, lean_object* v___y_3802_, lean_object* v___y_3803_, lean_object* v___y_3804_){
_start:
{
lean_object* v_res_3805_; 
v_res_3805_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__0_spec__0_spec__1_spec__3(v_00_u03b1_3798_, v_ref_3799_, v_msg_3800_, v_declHint_3801_, v___y_3802_, v___y_3803_);
lean_dec(v___y_3803_);
lean_dec_ref(v___y_3802_);
lean_dec(v_ref_3799_);
return v_res_3805_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5(lean_object* v_msg_3806_, lean_object* v_declHint_3807_, lean_object* v___y_3808_, lean_object* v___y_3809_){
_start:
{
lean_object* v___x_3811_; 
v___x_3811_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___redArg(v_msg_3806_, v_declHint_3807_, v___y_3809_);
return v___x_3811_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5___boxed(lean_object* v_msg_3812_, lean_object* v_declHint_3813_, lean_object* v___y_3814_, lean_object* v___y_3815_, lean_object* v___y_3816_){
_start:
{
lean_object* v_res_3817_; 
v_res_3817_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__0_spec__0_spec__1_spec__3_spec__4_spec__5(v_msg_3812_, v_declHint_3813_, v___y_3814_, v___y_3815_);
lean_dec(v___y_3815_);
lean_dec_ref(v___y_3814_);
return v_res_3817_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__0_spec__0_spec__1_spec__3_spec__5(lean_object* v_00_u03b1_3818_, lean_object* v_ref_3819_, lean_object* v_msg_3820_, lean_object* v___y_3821_, lean_object* v___y_3822_){
_start:
{
lean_object* v___x_3824_; 
v___x_3824_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__0_spec__0_spec__1_spec__3_spec__5___redArg(v_ref_3819_, v_msg_3820_, v___y_3821_, v___y_3822_);
return v___x_3824_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__0_spec__0_spec__1_spec__3_spec__5___boxed(lean_object* v_00_u03b1_3825_, lean_object* v_ref_3826_, lean_object* v_msg_3827_, lean_object* v___y_3828_, lean_object* v___y_3829_, lean_object* v___y_3830_){
_start:
{
lean_object* v_res_3831_; 
v_res_3831_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_spec__0_spec__0_spec__1_spec__3_spec__5(v_00_u03b1_3825_, v_ref_3826_, v_msg_3827_, v___y_3828_, v___y_3829_);
lean_dec(v___y_3829_);
lean_dec_ref(v___y_3828_);
lean_dec(v_ref_3826_);
return v_res_3831_;
}
}
static lean_object* _init_l_Lean_Parser_registerBuiltinParserAttribute___auto__1___closed__2(void){
_start:
{
lean_object* v___x_3838_; lean_object* v___x_3839_; 
v___x_3838_ = ((lean_object*)(l_Lean_Parser_registerBuiltinParserAttribute___auto__1___closed__0));
v___x_3839_ = l_Lean_mkAtom(v___x_3838_);
return v___x_3839_;
}
}
static lean_object* _init_l_Lean_Parser_registerBuiltinParserAttribute___auto__1___closed__3(void){
_start:
{
lean_object* v___x_3840_; lean_object* v___x_3841_; lean_object* v___x_3842_; 
v___x_3840_ = lean_obj_once(&l_Lean_Parser_registerBuiltinParserAttribute___auto__1___closed__2, &l_Lean_Parser_registerBuiltinParserAttribute___auto__1___closed__2_once, _init_l_Lean_Parser_registerBuiltinParserAttribute___auto__1___closed__2);
v___x_3841_ = ((lean_object*)(l_Lean_Parser_mkInputContext___auto__1___closed__3));
v___x_3842_ = lean_array_push(v___x_3841_, v___x_3840_);
return v___x_3842_;
}
}
static lean_object* _init_l_Lean_Parser_registerBuiltinParserAttribute___auto__1___closed__8(void){
_start:
{
lean_object* v___x_3851_; lean_object* v___x_3852_; 
v___x_3851_ = ((lean_object*)(l_Lean_Parser_registerBuiltinParserAttribute___auto__1___closed__7));
v___x_3852_ = l_Lean_mkAtom(v___x_3851_);
return v___x_3852_;
}
}
static lean_object* _init_l_Lean_Parser_registerBuiltinParserAttribute___auto__1___closed__9(void){
_start:
{
lean_object* v___x_3853_; lean_object* v___x_3854_; lean_object* v___x_3855_; 
v___x_3853_ = lean_obj_once(&l_Lean_Parser_registerBuiltinParserAttribute___auto__1___closed__8, &l_Lean_Parser_registerBuiltinParserAttribute___auto__1___closed__8_once, _init_l_Lean_Parser_registerBuiltinParserAttribute___auto__1___closed__8);
v___x_3854_ = ((lean_object*)(l_Lean_Parser_mkInputContext___auto__1___closed__3));
v___x_3855_ = lean_array_push(v___x_3854_, v___x_3853_);
return v___x_3855_;
}
}
static lean_object* _init_l_Lean_Parser_registerBuiltinParserAttribute___auto__1___closed__10(void){
_start:
{
lean_object* v___x_3856_; lean_object* v___x_3857_; lean_object* v___x_3858_; lean_object* v___x_3859_; 
v___x_3856_ = lean_obj_once(&l_Lean_Parser_registerBuiltinParserAttribute___auto__1___closed__9, &l_Lean_Parser_registerBuiltinParserAttribute___auto__1___closed__9_once, _init_l_Lean_Parser_registerBuiltinParserAttribute___auto__1___closed__9);
v___x_3857_ = ((lean_object*)(l_Lean_Parser_registerBuiltinParserAttribute___auto__1___closed__6));
v___x_3858_ = lean_box(2);
v___x_3859_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3859_, 0, v___x_3858_);
lean_ctor_set(v___x_3859_, 1, v___x_3857_);
lean_ctor_set(v___x_3859_, 2, v___x_3856_);
return v___x_3859_;
}
}
static lean_object* _init_l_Lean_Parser_registerBuiltinParserAttribute___auto__1___closed__11(void){
_start:
{
lean_object* v___x_3860_; lean_object* v___x_3861_; lean_object* v___x_3862_; 
v___x_3860_ = lean_obj_once(&l_Lean_Parser_registerBuiltinParserAttribute___auto__1___closed__10, &l_Lean_Parser_registerBuiltinParserAttribute___auto__1___closed__10_once, _init_l_Lean_Parser_registerBuiltinParserAttribute___auto__1___closed__10);
v___x_3861_ = lean_obj_once(&l_Lean_Parser_registerBuiltinParserAttribute___auto__1___closed__3, &l_Lean_Parser_registerBuiltinParserAttribute___auto__1___closed__3_once, _init_l_Lean_Parser_registerBuiltinParserAttribute___auto__1___closed__3);
v___x_3862_ = lean_array_push(v___x_3861_, v___x_3860_);
return v___x_3862_;
}
}
static lean_object* _init_l_Lean_Parser_registerBuiltinParserAttribute___auto__1___closed__12(void){
_start:
{
lean_object* v___x_3863_; lean_object* v___x_3864_; lean_object* v___x_3865_; lean_object* v___x_3866_; 
v___x_3863_ = lean_obj_once(&l_Lean_Parser_registerBuiltinParserAttribute___auto__1___closed__11, &l_Lean_Parser_registerBuiltinParserAttribute___auto__1___closed__11_once, _init_l_Lean_Parser_registerBuiltinParserAttribute___auto__1___closed__11);
v___x_3864_ = ((lean_object*)(l_Lean_Parser_registerBuiltinParserAttribute___auto__1___closed__1));
v___x_3865_ = lean_box(2);
v___x_3866_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3866_, 0, v___x_3865_);
lean_ctor_set(v___x_3866_, 1, v___x_3864_);
lean_ctor_set(v___x_3866_, 2, v___x_3863_);
return v___x_3866_;
}
}
static lean_object* _init_l_Lean_Parser_registerBuiltinParserAttribute___auto__1___closed__13(void){
_start:
{
lean_object* v___x_3867_; lean_object* v___x_3868_; lean_object* v___x_3869_; 
v___x_3867_ = lean_obj_once(&l_Lean_Parser_registerBuiltinParserAttribute___auto__1___closed__12, &l_Lean_Parser_registerBuiltinParserAttribute___auto__1___closed__12_once, _init_l_Lean_Parser_registerBuiltinParserAttribute___auto__1___closed__12);
v___x_3868_ = ((lean_object*)(l_Lean_Parser_mkInputContext___auto__1___closed__3));
v___x_3869_ = lean_array_push(v___x_3868_, v___x_3867_);
return v___x_3869_;
}
}
static lean_object* _init_l_Lean_Parser_registerBuiltinParserAttribute___auto__1___closed__14(void){
_start:
{
lean_object* v___x_3870_; lean_object* v___x_3871_; lean_object* v___x_3872_; lean_object* v___x_3873_; 
v___x_3870_ = lean_obj_once(&l_Lean_Parser_registerBuiltinParserAttribute___auto__1___closed__13, &l_Lean_Parser_registerBuiltinParserAttribute___auto__1___closed__13_once, _init_l_Lean_Parser_registerBuiltinParserAttribute___auto__1___closed__13);
v___x_3871_ = ((lean_object*)(l_Lean_Parser_mkInputContext___auto__1___closed__7));
v___x_3872_ = lean_box(2);
v___x_3873_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3873_, 0, v___x_3872_);
lean_ctor_set(v___x_3873_, 1, v___x_3871_);
lean_ctor_set(v___x_3873_, 2, v___x_3870_);
return v___x_3873_;
}
}
static lean_object* _init_l_Lean_Parser_registerBuiltinParserAttribute___auto__1___closed__15(void){
_start:
{
lean_object* v___x_3874_; lean_object* v___x_3875_; lean_object* v___x_3876_; 
v___x_3874_ = lean_obj_once(&l_Lean_Parser_registerBuiltinParserAttribute___auto__1___closed__14, &l_Lean_Parser_registerBuiltinParserAttribute___auto__1___closed__14_once, _init_l_Lean_Parser_registerBuiltinParserAttribute___auto__1___closed__14);
v___x_3875_ = ((lean_object*)(l_Lean_Parser_mkInputContext___auto__1___closed__3));
v___x_3876_ = lean_array_push(v___x_3875_, v___x_3874_);
return v___x_3876_;
}
}
static lean_object* _init_l_Lean_Parser_registerBuiltinParserAttribute___auto__1___closed__16(void){
_start:
{
lean_object* v___x_3877_; lean_object* v___x_3878_; lean_object* v___x_3879_; lean_object* v___x_3880_; 
v___x_3877_ = lean_obj_once(&l_Lean_Parser_registerBuiltinParserAttribute___auto__1___closed__15, &l_Lean_Parser_registerBuiltinParserAttribute___auto__1___closed__15_once, _init_l_Lean_Parser_registerBuiltinParserAttribute___auto__1___closed__15);
v___x_3878_ = ((lean_object*)(l_Lean_Parser_mkInputContext___auto__1___closed__5));
v___x_3879_ = lean_box(2);
v___x_3880_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3880_, 0, v___x_3879_);
lean_ctor_set(v___x_3880_, 1, v___x_3878_);
lean_ctor_set(v___x_3880_, 2, v___x_3877_);
return v___x_3880_;
}
}
static lean_object* _init_l_Lean_Parser_registerBuiltinParserAttribute___auto__1___closed__17(void){
_start:
{
lean_object* v___x_3881_; lean_object* v___x_3882_; lean_object* v___x_3883_; 
v___x_3881_ = lean_obj_once(&l_Lean_Parser_registerBuiltinParserAttribute___auto__1___closed__16, &l_Lean_Parser_registerBuiltinParserAttribute___auto__1___closed__16_once, _init_l_Lean_Parser_registerBuiltinParserAttribute___auto__1___closed__16);
v___x_3882_ = ((lean_object*)(l_Lean_Parser_mkInputContext___auto__1___closed__3));
v___x_3883_ = lean_array_push(v___x_3882_, v___x_3881_);
return v___x_3883_;
}
}
static lean_object* _init_l_Lean_Parser_registerBuiltinParserAttribute___auto__1___closed__18(void){
_start:
{
lean_object* v___x_3884_; lean_object* v___x_3885_; lean_object* v___x_3886_; lean_object* v___x_3887_; 
v___x_3884_ = lean_obj_once(&l_Lean_Parser_registerBuiltinParserAttribute___auto__1___closed__17, &l_Lean_Parser_registerBuiltinParserAttribute___auto__1___closed__17_once, _init_l_Lean_Parser_registerBuiltinParserAttribute___auto__1___closed__17);
v___x_3885_ = ((lean_object*)(l_Lean_Parser_mkInputContext___auto__1___closed__2));
v___x_3886_ = lean_box(2);
v___x_3887_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3887_, 0, v___x_3886_);
lean_ctor_set(v___x_3887_, 1, v___x_3885_);
lean_ctor_set(v___x_3887_, 2, v___x_3884_);
return v___x_3887_;
}
}
static lean_object* _init_l_Lean_Parser_registerBuiltinParserAttribute___auto__1(void){
_start:
{
lean_object* v___x_3888_; 
v___x_3888_ = lean_obj_once(&l_Lean_Parser_registerBuiltinParserAttribute___auto__1___closed__18, &l_Lean_Parser_registerBuiltinParserAttribute___auto__1___closed__18_once, _init_l_Lean_Parser_registerBuiltinParserAttribute___auto__1___closed__18);
return v___x_3888_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_registerBuiltinParserAttribute___lam__0(lean_object* v_attrName_3889_, lean_object* v_decl_3890_, lean_object* v___y_3891_, lean_object* v___y_3892_){
_start:
{
lean_object* v___x_3894_; lean_object* v___x_3895_; lean_object* v___x_3896_; lean_object* v___x_3897_; lean_object* v___x_3898_; lean_object* v___x_3899_; 
v___x_3894_ = lean_obj_once(&l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___lam__1___closed__1_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2_, &l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___lam__1___closed__1_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___lam__1___closed__1_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2_);
v___x_3895_ = l_Lean_MessageData_ofName(v_attrName_3889_);
v___x_3896_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3896_, 0, v___x_3894_);
lean_ctor_set(v___x_3896_, 1, v___x_3895_);
v___x_3897_ = lean_obj_once(&l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___lam__1___closed__3_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2_, &l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___lam__1___closed__3_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___lam__1___closed__3_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2_);
v___x_3898_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3898_, 0, v___x_3896_);
lean_ctor_set(v___x_3898_, 1, v___x_3897_);
v___x_3899_ = l_Lean_throwError___at___00__private_Lean_Parser_Extension_0__Lean_Parser_initFn_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2__spec__0___redArg(v___x_3898_, v___y_3891_, v___y_3892_);
return v___x_3899_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_registerBuiltinParserAttribute___lam__0___boxed(lean_object* v_attrName_3900_, lean_object* v_decl_3901_, lean_object* v___y_3902_, lean_object* v___y_3903_, lean_object* v___y_3904_){
_start:
{
lean_object* v_res_3905_; 
v_res_3905_ = l_Lean_Parser_registerBuiltinParserAttribute___lam__0(v_attrName_3900_, v_decl_3901_, v___y_3902_, v___y_3903_);
lean_dec(v___y_3903_);
lean_dec_ref(v___y_3902_);
lean_dec(v_decl_3901_);
return v_res_3905_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_registerBuiltinParserAttribute___lam__1(lean_object* v_attrName_3906_, lean_object* v_catName_3907_, lean_object* v_declName_3908_, lean_object* v_stx_3909_, uint8_t v_kind_3910_, lean_object* v___y_3911_, lean_object* v___y_3912_){
_start:
{
lean_object* v___x_3914_; 
v___x_3914_ = l___private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add(v_attrName_3906_, v_catName_3907_, v_declName_3908_, v_stx_3909_, v_kind_3910_, v___y_3911_, v___y_3912_);
return v___x_3914_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_registerBuiltinParserAttribute___lam__1___boxed(lean_object* v_attrName_3915_, lean_object* v_catName_3916_, lean_object* v_declName_3917_, lean_object* v_stx_3918_, lean_object* v_kind_3919_, lean_object* v___y_3920_, lean_object* v___y_3921_, lean_object* v___y_3922_){
_start:
{
uint8_t v_kind_boxed_3923_; lean_object* v_res_3924_; 
v_kind_boxed_3923_ = lean_unbox(v_kind_3919_);
v_res_3924_ = l_Lean_Parser_registerBuiltinParserAttribute___lam__1(v_attrName_3915_, v_catName_3916_, v_declName_3917_, v_stx_3918_, v_kind_boxed_3923_, v___y_3920_, v___y_3921_);
lean_dec(v___y_3921_);
lean_dec_ref(v___y_3920_);
return v_res_3924_;
}
}
static lean_object* _init_l_Lean_Parser_registerBuiltinParserAttribute___closed__1(void){
_start:
{
lean_object* v___x_3926_; lean_object* v___x_3927_; 
v___x_3926_ = ((lean_object*)(l_Lean_Parser_registerBuiltinParserAttribute___closed__0));
v___x_3927_ = lean_mk_io_user_error(v___x_3926_);
return v___x_3927_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_registerBuiltinParserAttribute(lean_object* v_attrName_3930_, lean_object* v_declName_3931_, uint8_t v_behavior_3932_, lean_object* v_ref_3933_){
_start:
{
if (lean_obj_tag(v_declName_3931_) == 1)
{
lean_object* v_pre_3938_; 
v_pre_3938_ = lean_ctor_get(v_declName_3931_, 0);
if (lean_obj_tag(v_pre_3938_) == 1)
{
lean_object* v_pre_3939_; 
v_pre_3939_ = lean_ctor_get(v_pre_3938_, 0);
if (lean_obj_tag(v_pre_3939_) == 1)
{
lean_object* v_pre_3940_; 
v_pre_3940_ = lean_ctor_get(v_pre_3939_, 0);
if (lean_obj_tag(v_pre_3940_) == 1)
{
lean_object* v_pre_3941_; 
v_pre_3941_ = lean_ctor_get(v_pre_3940_, 0);
if (lean_obj_tag(v_pre_3941_) == 0)
{
lean_object* v_str_3942_; lean_object* v_str_3943_; lean_object* v_str_3944_; lean_object* v_str_3945_; lean_object* v___x_3946_; uint8_t v___x_3947_; 
v_str_3942_ = lean_ctor_get(v_declName_3931_, 1);
v_str_3943_ = lean_ctor_get(v_pre_3938_, 1);
v_str_3944_ = lean_ctor_get(v_pre_3939_, 1);
v_str_3945_ = lean_ctor_get(v_pre_3940_, 1);
v___x_3946_ = ((lean_object*)(l_Lean_Parser_mkParserOfConstantUnsafe___closed__3));
v___x_3947_ = lean_string_dec_eq(v_str_3945_, v___x_3946_);
if (v___x_3947_ == 0)
{
lean_dec_ref_known(v_declName_3931_, 2);
lean_dec(v_ref_3933_);
lean_dec(v_attrName_3930_);
goto v___jp_3935_;
}
else
{
lean_object* v___x_3948_; uint8_t v___x_3949_; 
v___x_3948_ = ((lean_object*)(l_Lean_Parser_mkParserOfConstantUnsafe___closed__4));
v___x_3949_ = lean_string_dec_eq(v_str_3944_, v___x_3948_);
if (v___x_3949_ == 0)
{
lean_dec_ref_known(v_declName_3931_, 2);
lean_dec(v_ref_3933_);
lean_dec(v_attrName_3930_);
goto v___jp_3935_;
}
else
{
lean_object* v___x_3950_; uint8_t v___x_3951_; 
v___x_3950_ = ((lean_object*)(l_Lean_Parser_registerBuiltinParserAttribute___closed__2));
v___x_3951_ = lean_string_dec_eq(v_str_3943_, v___x_3950_);
if (v___x_3951_ == 0)
{
lean_dec_ref_known(v_declName_3931_, 2);
lean_dec(v_ref_3933_);
lean_dec(v_attrName_3930_);
goto v___jp_3935_;
}
else
{
lean_object* v___f_3952_; lean_object* v___x_3953_; lean_object* v_catName_3954_; lean_object* v___f_3955_; lean_object* v___x_3956_; 
lean_inc_n(v_attrName_3930_, 2);
v___f_3952_ = lean_alloc_closure((void*)(l_Lean_Parser_registerBuiltinParserAttribute___lam__0___boxed), 5, 1);
lean_closure_set(v___f_3952_, 0, v_attrName_3930_);
v___x_3953_ = lean_obj_once(&l_List_mapTR_loop___at___00Lean_Parser_addLeadingParser_spec__1___closed__0, &l_List_mapTR_loop___at___00Lean_Parser_addLeadingParser_spec__1___closed__0_once, _init_l_List_mapTR_loop___at___00Lean_Parser_addLeadingParser_spec__1___closed__0);
lean_inc_ref(v_str_3942_);
v_catName_3954_ = l_Lean_Name_str___override(v___x_3953_, v_str_3942_);
lean_inc(v_catName_3954_);
v___f_3955_ = lean_alloc_closure((void*)(l_Lean_Parser_registerBuiltinParserAttribute___lam__1___boxed), 8, 2);
lean_closure_set(v___f_3955_, 0, v_attrName_3930_);
lean_closure_set(v___f_3955_, 1, v_catName_3954_);
v___x_3956_ = l___private_Lean_Parser_Extension_0__Lean_Parser_addBuiltinParserCategory(v_catName_3954_, v_declName_3931_, v_behavior_3932_);
if (lean_obj_tag(v___x_3956_) == 0)
{
lean_object* v___x_3957_; uint8_t v___x_3958_; lean_object* v___x_3959_; lean_object* v___x_3960_; lean_object* v___x_3961_; 
lean_dec_ref_known(v___x_3956_, 1);
v___x_3957_ = ((lean_object*)(l_Lean_Parser_registerBuiltinParserAttribute___closed__3));
v___x_3958_ = 1;
v___x_3959_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_3959_, 0, v_ref_3933_);
lean_ctor_set(v___x_3959_, 1, v_attrName_3930_);
lean_ctor_set(v___x_3959_, 2, v___x_3957_);
lean_ctor_set_uint8(v___x_3959_, sizeof(void*)*3, v___x_3958_);
v___x_3960_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3960_, 0, v___x_3959_);
lean_ctor_set(v___x_3960_, 1, v___f_3955_);
lean_ctor_set(v___x_3960_, 2, v___f_3952_);
v___x_3961_ = l_Lean_registerBuiltinAttribute(v___x_3960_);
return v___x_3961_;
}
else
{
lean_dec_ref(v___f_3955_);
lean_dec_ref(v___f_3952_);
lean_dec(v_ref_3933_);
lean_dec(v_attrName_3930_);
return v___x_3956_;
}
}
}
}
}
else
{
lean_dec_ref_known(v_declName_3931_, 2);
lean_dec(v_ref_3933_);
lean_dec(v_attrName_3930_);
goto v___jp_3935_;
}
}
else
{
lean_dec_ref_known(v_declName_3931_, 2);
lean_dec(v_ref_3933_);
lean_dec(v_attrName_3930_);
goto v___jp_3935_;
}
}
else
{
lean_dec_ref_known(v_declName_3931_, 2);
lean_dec(v_ref_3933_);
lean_dec(v_attrName_3930_);
goto v___jp_3935_;
}
}
else
{
lean_dec_ref_known(v_declName_3931_, 2);
lean_dec(v_ref_3933_);
lean_dec(v_attrName_3930_);
goto v___jp_3935_;
}
}
else
{
lean_dec(v_ref_3933_);
lean_dec(v_declName_3931_);
lean_dec(v_attrName_3930_);
goto v___jp_3935_;
}
v___jp_3935_:
{
lean_object* v___x_3936_; lean_object* v___x_3937_; 
v___x_3936_ = lean_obj_once(&l_Lean_Parser_registerBuiltinParserAttribute___closed__1, &l_Lean_Parser_registerBuiltinParserAttribute___closed__1_once, _init_l_Lean_Parser_registerBuiltinParserAttribute___closed__1);
v___x_3937_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3937_, 0, v___x_3936_);
return v___x_3937_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_registerBuiltinParserAttribute___boxed(lean_object* v_attrName_3962_, lean_object* v_declName_3963_, lean_object* v_behavior_3964_, lean_object* v_ref_3965_, lean_object* v_a_3966_){
_start:
{
uint8_t v_behavior_boxed_3967_; lean_object* v_res_3968_; 
v_behavior_boxed_3967_ = lean_unbox(v_behavior_3964_);
v_res_3968_ = l_Lean_Parser_registerBuiltinParserAttribute(v_attrName_3962_, v_declName_3963_, v_behavior_boxed_3967_, v_ref_3965_);
return v_res_3968_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add___redArg___lam__0(lean_object* v_kind_3969_, lean_object* v_x_3970_, lean_object* v___y_3971_, lean_object* v___y_3972_){
_start:
{
lean_object* v___x_3974_; lean_object* v_env_3975_; lean_object* v_nextMacroScope_3976_; lean_object* v_ngen_3977_; lean_object* v_auxDeclNGen_3978_; lean_object* v_traceState_3979_; lean_object* v_messages_3980_; lean_object* v_infoState_3981_; lean_object* v_snapshotTasks_3982_; lean_object* v___x_3984_; uint8_t v_isShared_3985_; uint8_t v_isSharedCheck_3994_; 
v___x_3974_ = lean_st_ref_take(v___y_3972_);
v_env_3975_ = lean_ctor_get(v___x_3974_, 0);
v_nextMacroScope_3976_ = lean_ctor_get(v___x_3974_, 1);
v_ngen_3977_ = lean_ctor_get(v___x_3974_, 2);
v_auxDeclNGen_3978_ = lean_ctor_get(v___x_3974_, 3);
v_traceState_3979_ = lean_ctor_get(v___x_3974_, 4);
v_messages_3980_ = lean_ctor_get(v___x_3974_, 6);
v_infoState_3981_ = lean_ctor_get(v___x_3974_, 7);
v_snapshotTasks_3982_ = lean_ctor_get(v___x_3974_, 8);
v_isSharedCheck_3994_ = !lean_is_exclusive(v___x_3974_);
if (v_isSharedCheck_3994_ == 0)
{
lean_object* v_unused_3995_; 
v_unused_3995_ = lean_ctor_get(v___x_3974_, 5);
lean_dec(v_unused_3995_);
v___x_3984_ = v___x_3974_;
v_isShared_3985_ = v_isSharedCheck_3994_;
goto v_resetjp_3983_;
}
else
{
lean_inc(v_snapshotTasks_3982_);
lean_inc(v_infoState_3981_);
lean_inc(v_messages_3980_);
lean_inc(v_traceState_3979_);
lean_inc(v_auxDeclNGen_3978_);
lean_inc(v_ngen_3977_);
lean_inc(v_nextMacroScope_3976_);
lean_inc(v_env_3975_);
lean_dec(v___x_3974_);
v___x_3984_ = lean_box(0);
v_isShared_3985_ = v_isSharedCheck_3994_;
goto v_resetjp_3983_;
}
v_resetjp_3983_:
{
lean_object* v___x_3986_; lean_object* v___x_3987_; lean_object* v___x_3988_; lean_object* v___x_3990_; 
v___x_3986_ = lean_box(0);
v___x_3987_ = l_Lean_Parser_addSyntaxNodeKind(v_env_3975_, v_kind_3969_);
v___x_3988_ = lean_obj_once(&l_Lean_ScopedEnvExtension_add___at___00Lean_Parser_addToken_spec__1___redArg___closed__1, &l_Lean_ScopedEnvExtension_add___at___00Lean_Parser_addToken_spec__1___redArg___closed__1_once, _init_l_Lean_ScopedEnvExtension_add___at___00Lean_Parser_addToken_spec__1___redArg___closed__1);
if (v_isShared_3985_ == 0)
{
lean_ctor_set(v___x_3984_, 5, v___x_3988_);
lean_ctor_set(v___x_3984_, 0, v___x_3987_);
v___x_3990_ = v___x_3984_;
goto v_reusejp_3989_;
}
else
{
lean_object* v_reuseFailAlloc_3993_; 
v_reuseFailAlloc_3993_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_3993_, 0, v___x_3987_);
lean_ctor_set(v_reuseFailAlloc_3993_, 1, v_nextMacroScope_3976_);
lean_ctor_set(v_reuseFailAlloc_3993_, 2, v_ngen_3977_);
lean_ctor_set(v_reuseFailAlloc_3993_, 3, v_auxDeclNGen_3978_);
lean_ctor_set(v_reuseFailAlloc_3993_, 4, v_traceState_3979_);
lean_ctor_set(v_reuseFailAlloc_3993_, 5, v___x_3988_);
lean_ctor_set(v_reuseFailAlloc_3993_, 6, v_messages_3980_);
lean_ctor_set(v_reuseFailAlloc_3993_, 7, v_infoState_3981_);
lean_ctor_set(v_reuseFailAlloc_3993_, 8, v_snapshotTasks_3982_);
v___x_3990_ = v_reuseFailAlloc_3993_;
goto v_reusejp_3989_;
}
v_reusejp_3989_:
{
lean_object* v___x_3991_; lean_object* v___x_3992_; 
v___x_3991_ = lean_st_ref_put(v___y_3972_, v___x_3990_);
v___x_3992_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3992_, 0, v___x_3986_);
return v___x_3992_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add___redArg___lam__0___boxed(lean_object* v_kind_3996_, lean_object* v_x_3997_, lean_object* v___y_3998_, lean_object* v___y_3999_, lean_object* v___y_4000_){
_start:
{
lean_object* v_res_4001_; 
v_res_4001_ = l___private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add___redArg___lam__0(v_kind_3996_, v_x_3997_, v___y_3998_, v___y_3999_);
lean_dec(v___y_3999_);
lean_dec_ref(v___y_3998_);
return v_res_4001_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00__private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add_spec__1_spec__1_spec__2_spec__4___redArg(lean_object* v_f_4002_, lean_object* v_keys_4003_, lean_object* v_vals_4004_, lean_object* v_i_4005_, lean_object* v_acc_4006_, lean_object* v___y_4007_, lean_object* v___y_4008_){
_start:
{
lean_object* v___x_4010_; uint8_t v___x_4011_; 
v___x_4010_ = lean_array_get_size(v_keys_4003_);
v___x_4011_ = lean_nat_dec_lt(v_i_4005_, v___x_4010_);
if (v___x_4011_ == 0)
{
lean_object* v___x_4012_; 
lean_dec(v_i_4005_);
lean_dec_ref(v_f_4002_);
v___x_4012_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4012_, 0, v_acc_4006_);
return v___x_4012_;
}
else
{
lean_object* v_k_4013_; lean_object* v_v_4014_; lean_object* v___x_4015_; 
v_k_4013_ = lean_array_fget_borrowed(v_keys_4003_, v_i_4005_);
v_v_4014_ = lean_array_fget_borrowed(v_vals_4004_, v_i_4005_);
lean_inc_ref(v_f_4002_);
lean_inc(v___y_4008_);
lean_inc_ref(v___y_4007_);
lean_inc(v_v_4014_);
lean_inc(v_k_4013_);
v___x_4015_ = lean_apply_6(v_f_4002_, v_acc_4006_, v_k_4013_, v_v_4014_, v___y_4007_, v___y_4008_, lean_box(0));
if (lean_obj_tag(v___x_4015_) == 0)
{
lean_object* v_a_4016_; lean_object* v___x_4017_; lean_object* v___x_4018_; 
v_a_4016_ = lean_ctor_get(v___x_4015_, 0);
lean_inc(v_a_4016_);
lean_dec_ref_known(v___x_4015_, 1);
v___x_4017_ = lean_unsigned_to_nat(1u);
v___x_4018_ = lean_nat_add(v_i_4005_, v___x_4017_);
lean_dec(v_i_4005_);
v_i_4005_ = v___x_4018_;
v_acc_4006_ = v_a_4016_;
goto _start;
}
else
{
lean_dec(v_i_4005_);
lean_dec_ref(v_f_4002_);
return v___x_4015_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00__private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add_spec__1_spec__1_spec__2_spec__4___redArg___boxed(lean_object* v_f_4020_, lean_object* v_keys_4021_, lean_object* v_vals_4022_, lean_object* v_i_4023_, lean_object* v_acc_4024_, lean_object* v___y_4025_, lean_object* v___y_4026_, lean_object* v___y_4027_){
_start:
{
lean_object* v_res_4028_; 
v_res_4028_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00__private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add_spec__1_spec__1_spec__2_spec__4___redArg(v_f_4020_, v_keys_4021_, v_vals_4022_, v_i_4023_, v_acc_4024_, v___y_4025_, v___y_4026_);
lean_dec(v___y_4026_);
lean_dec_ref(v___y_4025_);
lean_dec_ref(v_vals_4022_);
lean_dec_ref(v_keys_4021_);
return v_res_4028_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00__private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add_spec__1_spec__1_spec__2_spec__3___redArg(lean_object* v_f_4029_, lean_object* v_as_4030_, size_t v_i_4031_, size_t v_stop_4032_, lean_object* v_b_4033_, lean_object* v___y_4034_, lean_object* v___y_4035_){
_start:
{
lean_object* v_a_4038_; lean_object* v___y_4043_; uint8_t v___x_4045_; 
v___x_4045_ = lean_usize_dec_eq(v_i_4031_, v_stop_4032_);
if (v___x_4045_ == 0)
{
lean_object* v___x_4046_; 
v___x_4046_ = lean_array_uget_borrowed(v_as_4030_, v_i_4031_);
switch(lean_obj_tag(v___x_4046_))
{
case 0:
{
lean_object* v_key_4047_; lean_object* v_val_4048_; lean_object* v___x_4049_; 
v_key_4047_ = lean_ctor_get(v___x_4046_, 0);
v_val_4048_ = lean_ctor_get(v___x_4046_, 1);
lean_inc_ref(v_f_4029_);
lean_inc(v___y_4035_);
lean_inc_ref(v___y_4034_);
lean_inc(v_val_4048_);
lean_inc(v_key_4047_);
v___x_4049_ = lean_apply_6(v_f_4029_, v_b_4033_, v_key_4047_, v_val_4048_, v___y_4034_, v___y_4035_, lean_box(0));
v___y_4043_ = v___x_4049_;
goto v___jp_4042_;
}
case 1:
{
lean_object* v_node_4050_; lean_object* v___x_4051_; 
v_node_4050_ = lean_ctor_get(v___x_4046_, 0);
lean_inc(v_node_4050_);
lean_inc_ref(v_f_4029_);
v___x_4051_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00__private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add_spec__1_spec__1_spec__2___redArg(v_f_4029_, v_node_4050_, v_b_4033_, v___y_4034_, v___y_4035_);
v___y_4043_ = v___x_4051_;
goto v___jp_4042_;
}
default: 
{
v_a_4038_ = v_b_4033_;
goto v___jp_4037_;
}
}
}
else
{
lean_object* v___x_4052_; 
lean_dec_ref(v_f_4029_);
v___x_4052_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4052_, 0, v_b_4033_);
return v___x_4052_;
}
v___jp_4037_:
{
size_t v___x_4039_; size_t v___x_4040_; 
v___x_4039_ = ((size_t)1ULL);
v___x_4040_ = lean_usize_add(v_i_4031_, v___x_4039_);
v_i_4031_ = v___x_4040_;
v_b_4033_ = v_a_4038_;
goto _start;
}
v___jp_4042_:
{
if (lean_obj_tag(v___y_4043_) == 0)
{
lean_object* v_a_4044_; 
v_a_4044_ = lean_ctor_get(v___y_4043_, 0);
lean_inc(v_a_4044_);
lean_dec_ref_known(v___y_4043_, 1);
v_a_4038_ = v_a_4044_;
goto v___jp_4037_;
}
else
{
lean_dec_ref(v_f_4029_);
return v___y_4043_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00__private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add_spec__1_spec__1_spec__2___redArg(lean_object* v_f_4053_, lean_object* v_x_4054_, lean_object* v_x_4055_, lean_object* v___y_4056_, lean_object* v___y_4057_){
_start:
{
if (lean_obj_tag(v_x_4054_) == 0)
{
lean_object* v_es_4059_; lean_object* v___x_4061_; uint8_t v_isShared_4062_; uint8_t v_isSharedCheck_4072_; 
v_es_4059_ = lean_ctor_get(v_x_4054_, 0);
v_isSharedCheck_4072_ = !lean_is_exclusive(v_x_4054_);
if (v_isSharedCheck_4072_ == 0)
{
v___x_4061_ = v_x_4054_;
v_isShared_4062_ = v_isSharedCheck_4072_;
goto v_resetjp_4060_;
}
else
{
lean_inc(v_es_4059_);
lean_dec(v_x_4054_);
v___x_4061_ = lean_box(0);
v_isShared_4062_ = v_isSharedCheck_4072_;
goto v_resetjp_4060_;
}
v_resetjp_4060_:
{
lean_object* v___x_4063_; lean_object* v___x_4064_; uint8_t v___x_4065_; 
v___x_4063_ = lean_unsigned_to_nat(0u);
v___x_4064_ = lean_array_get_size(v_es_4059_);
v___x_4065_ = lean_nat_dec_lt(v___x_4063_, v___x_4064_);
if (v___x_4065_ == 0)
{
lean_object* v___x_4067_; 
lean_dec_ref(v_es_4059_);
lean_dec_ref(v_f_4053_);
if (v_isShared_4062_ == 0)
{
lean_ctor_set(v___x_4061_, 0, v_x_4055_);
v___x_4067_ = v___x_4061_;
goto v_reusejp_4066_;
}
else
{
lean_object* v_reuseFailAlloc_4068_; 
v_reuseFailAlloc_4068_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4068_, 0, v_x_4055_);
v___x_4067_ = v_reuseFailAlloc_4068_;
goto v_reusejp_4066_;
}
v_reusejp_4066_:
{
return v___x_4067_;
}
}
else
{
size_t v___x_4069_; size_t v___x_4070_; lean_object* v___x_4071_; 
lean_del_object(v___x_4061_);
v___x_4069_ = ((size_t)0ULL);
v___x_4070_ = lean_usize_of_nat(v___x_4064_);
v___x_4071_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00__private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add_spec__1_spec__1_spec__2_spec__3___redArg(v_f_4053_, v_es_4059_, v___x_4069_, v___x_4070_, v_x_4055_, v___y_4056_, v___y_4057_);
lean_dec_ref(v_es_4059_);
return v___x_4071_;
}
}
}
else
{
lean_object* v_ks_4073_; lean_object* v_vs_4074_; lean_object* v___x_4075_; lean_object* v___x_4076_; 
v_ks_4073_ = lean_ctor_get(v_x_4054_, 0);
lean_inc_ref(v_ks_4073_);
v_vs_4074_ = lean_ctor_get(v_x_4054_, 1);
lean_inc_ref(v_vs_4074_);
lean_dec_ref_known(v_x_4054_, 2);
v___x_4075_ = lean_unsigned_to_nat(0u);
v___x_4076_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00__private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add_spec__1_spec__1_spec__2_spec__4___redArg(v_f_4053_, v_ks_4073_, v_vs_4074_, v___x_4075_, v_x_4055_, v___y_4056_, v___y_4057_);
lean_dec_ref(v_vs_4074_);
lean_dec_ref(v_ks_4073_);
return v___x_4076_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00__private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add_spec__1_spec__1_spec__2___redArg___boxed(lean_object* v_f_4077_, lean_object* v_x_4078_, lean_object* v_x_4079_, lean_object* v___y_4080_, lean_object* v___y_4081_, lean_object* v___y_4082_){
_start:
{
lean_object* v_res_4083_; 
v_res_4083_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00__private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add_spec__1_spec__1_spec__2___redArg(v_f_4077_, v_x_4078_, v_x_4079_, v___y_4080_, v___y_4081_);
lean_dec(v___y_4081_);
lean_dec_ref(v___y_4080_);
return v_res_4083_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00__private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add_spec__1_spec__1_spec__2_spec__3___redArg___boxed(lean_object* v_f_4084_, lean_object* v_as_4085_, lean_object* v_i_4086_, lean_object* v_stop_4087_, lean_object* v_b_4088_, lean_object* v___y_4089_, lean_object* v___y_4090_, lean_object* v___y_4091_){
_start:
{
size_t v_i_boxed_4092_; size_t v_stop_boxed_4093_; lean_object* v_res_4094_; 
v_i_boxed_4092_ = lean_unbox_usize(v_i_4086_);
lean_dec(v_i_4086_);
v_stop_boxed_4093_ = lean_unbox_usize(v_stop_4087_);
lean_dec(v_stop_4087_);
v_res_4094_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00__private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add_spec__1_spec__1_spec__2_spec__3___redArg(v_f_4084_, v_as_4085_, v_i_boxed_4092_, v_stop_boxed_4093_, v_b_4088_, v___y_4089_, v___y_4090_);
lean_dec(v___y_4090_);
lean_dec_ref(v___y_4089_);
lean_dec_ref(v_as_4085_);
return v_res_4094_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forM___at___00__private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add_spec__1___redArg___lam__0(lean_object* v_f_4095_, lean_object* v_x_4096_, lean_object* v___y_4097_, lean_object* v___y_4098_, lean_object* v___y_4099_, lean_object* v___y_4100_){
_start:
{
lean_object* v___x_4102_; 
lean_inc(v___y_4100_);
lean_inc_ref(v___y_4099_);
v___x_4102_ = lean_apply_5(v_f_4095_, v___y_4097_, v___y_4098_, v___y_4099_, v___y_4100_, lean_box(0));
return v___x_4102_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forM___at___00__private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add_spec__1___redArg___lam__0___boxed(lean_object* v_f_4103_, lean_object* v_x_4104_, lean_object* v___y_4105_, lean_object* v___y_4106_, lean_object* v___y_4107_, lean_object* v___y_4108_, lean_object* v___y_4109_){
_start:
{
lean_object* v_res_4110_; 
v_res_4110_ = l_Lean_PersistentHashMap_forM___at___00__private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add_spec__1___redArg___lam__0(v_f_4103_, v_x_4104_, v___y_4105_, v___y_4106_, v___y_4107_, v___y_4108_);
lean_dec(v___y_4108_);
lean_dec_ref(v___y_4107_);
return v_res_4110_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forM___at___00__private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add_spec__1___redArg(lean_object* v_map_4111_, lean_object* v_f_4112_, lean_object* v___y_4113_, lean_object* v___y_4114_){
_start:
{
lean_object* v___f_4116_; lean_object* v___x_4117_; lean_object* v___x_4118_; 
v___f_4116_ = lean_alloc_closure((void*)(l_Lean_PersistentHashMap_forM___at___00__private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add_spec__1___redArg___lam__0___boxed), 7, 1);
lean_closure_set(v___f_4116_, 0, v_f_4112_);
v___x_4117_ = lean_box(0);
v___x_4118_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00__private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add_spec__1_spec__1_spec__2___redArg(v___f_4116_, v_map_4111_, v___x_4117_, v___y_4113_, v___y_4114_);
return v___x_4118_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forM___at___00__private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add_spec__1___redArg___boxed(lean_object* v_map_4119_, lean_object* v_f_4120_, lean_object* v___y_4121_, lean_object* v___y_4122_, lean_object* v___y_4123_){
_start:
{
lean_object* v_res_4124_; 
v_res_4124_ = l_Lean_PersistentHashMap_forM___at___00__private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add_spec__1___redArg(v_map_4119_, v_f_4120_, v___y_4121_, v___y_4122_);
lean_dec(v___y_4122_);
lean_dec_ref(v___y_4121_);
return v_res_4124_;
}
}
static lean_object* _init_l_List_forM___at___00__private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add_spec__0___closed__1(void){
_start:
{
lean_object* v___x_4126_; lean_object* v___x_4127_; 
v___x_4126_ = ((lean_object*)(l_List_forM___at___00__private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add_spec__0___closed__0));
v___x_4127_ = l_Lean_stringToMessageData(v___x_4126_);
return v___x_4127_;
}
}
static lean_object* _init_l_List_forM___at___00__private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add_spec__0___closed__2(void){
_start:
{
lean_object* v___x_4128_; lean_object* v___x_4129_; 
v___x_4128_ = ((lean_object*)(l___private_Lean_Parser_Extension_0__Lean_Parser_updateBuiltinTokens___closed__1));
v___x_4129_ = l_Lean_stringToMessageData(v___x_4128_);
return v___x_4129_;
}
}
LEAN_EXPORT lean_object* l_List_forM___at___00__private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add_spec__0(uint8_t v_attrKind_4130_, lean_object* v_declName_4131_, lean_object* v_as_4132_, lean_object* v___y_4133_, lean_object* v___y_4134_){
_start:
{
if (lean_obj_tag(v_as_4132_) == 0)
{
lean_object* v___x_4136_; lean_object* v___x_4137_; 
lean_dec(v_declName_4131_);
v___x_4136_ = lean_box(0);
v___x_4137_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4137_, 0, v___x_4136_);
return v___x_4137_;
}
else
{
lean_object* v_head_4138_; lean_object* v_tail_4139_; lean_object* v___x_4141_; uint8_t v_isShared_4142_; uint8_t v_isSharedCheck_4169_; 
v_head_4138_ = lean_ctor_get(v_as_4132_, 0);
v_tail_4139_ = lean_ctor_get(v_as_4132_, 1);
v_isSharedCheck_4169_ = !lean_is_exclusive(v_as_4132_);
if (v_isSharedCheck_4169_ == 0)
{
v___x_4141_ = v_as_4132_;
v_isShared_4142_ = v_isSharedCheck_4169_;
goto v_resetjp_4140_;
}
else
{
lean_inc(v_tail_4139_);
lean_inc(v_head_4138_);
lean_dec(v_as_4132_);
v___x_4141_ = lean_box(0);
v_isShared_4142_ = v_isSharedCheck_4169_;
goto v_resetjp_4140_;
}
v_resetjp_4140_:
{
lean_object* v___y_4144_; lean_object* v___x_4146_; 
v___x_4146_ = l_Lean_Parser_addToken(v_head_4138_, v_attrKind_4130_, v___y_4133_, v___y_4134_);
if (lean_obj_tag(v___x_4146_) == 0)
{
lean_del_object(v___x_4141_);
v___y_4144_ = v___x_4146_;
goto v___jp_4143_;
}
else
{
lean_object* v_a_4147_; uint8_t v___y_4149_; uint8_t v___x_4167_; 
v_a_4147_ = lean_ctor_get(v___x_4146_, 0);
lean_inc(v_a_4147_);
v___x_4167_ = l_Lean_Exception_isInterrupt(v_a_4147_);
if (v___x_4167_ == 0)
{
uint8_t v___x_4168_; 
lean_inc(v_a_4147_);
v___x_4168_ = l_Lean_Exception_isRuntime(v_a_4147_);
v___y_4149_ = v___x_4168_;
goto v___jp_4148_;
}
else
{
v___y_4149_ = v___x_4167_;
goto v___jp_4148_;
}
v___jp_4148_:
{
if (v___y_4149_ == 0)
{
if (lean_obj_tag(v_a_4147_) == 0)
{
lean_object* v_msg_4150_; lean_object* v___x_4152_; uint8_t v_isShared_4153_; uint8_t v_isSharedCheck_4165_; 
lean_dec_ref_known(v___x_4146_, 1);
v_msg_4150_ = lean_ctor_get(v_a_4147_, 1);
v_isSharedCheck_4165_ = !lean_is_exclusive(v_a_4147_);
if (v_isSharedCheck_4165_ == 0)
{
lean_object* v_unused_4166_; 
v_unused_4166_ = lean_ctor_get(v_a_4147_, 0);
lean_dec(v_unused_4166_);
v___x_4152_ = v_a_4147_;
v_isShared_4153_ = v_isSharedCheck_4165_;
goto v_resetjp_4151_;
}
else
{
lean_inc(v_msg_4150_);
lean_dec(v_a_4147_);
v___x_4152_ = lean_box(0);
v_isShared_4153_ = v_isSharedCheck_4165_;
goto v_resetjp_4151_;
}
v_resetjp_4151_:
{
lean_object* v___x_4154_; lean_object* v___x_4155_; lean_object* v___x_4157_; 
v___x_4154_ = lean_obj_once(&l_List_forM___at___00__private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add_spec__0___closed__1, &l_List_forM___at___00__private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add_spec__0___closed__1_once, _init_l_List_forM___at___00__private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add_spec__0___closed__1);
lean_inc(v_declName_4131_);
v___x_4155_ = l_Lean_MessageData_ofConstName(v_declName_4131_, v___y_4149_);
if (v_isShared_4153_ == 0)
{
lean_ctor_set_tag(v___x_4152_, 7);
lean_ctor_set(v___x_4152_, 1, v___x_4155_);
lean_ctor_set(v___x_4152_, 0, v___x_4154_);
v___x_4157_ = v___x_4152_;
goto v_reusejp_4156_;
}
else
{
lean_object* v_reuseFailAlloc_4164_; 
v_reuseFailAlloc_4164_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4164_, 0, v___x_4154_);
lean_ctor_set(v_reuseFailAlloc_4164_, 1, v___x_4155_);
v___x_4157_ = v_reuseFailAlloc_4164_;
goto v_reusejp_4156_;
}
v_reusejp_4156_:
{
lean_object* v___x_4158_; lean_object* v___x_4160_; 
v___x_4158_ = lean_obj_once(&l_List_forM___at___00__private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add_spec__0___closed__2, &l_List_forM___at___00__private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add_spec__0___closed__2_once, _init_l_List_forM___at___00__private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add_spec__0___closed__2);
if (v_isShared_4142_ == 0)
{
lean_ctor_set_tag(v___x_4141_, 7);
lean_ctor_set(v___x_4141_, 1, v___x_4158_);
lean_ctor_set(v___x_4141_, 0, v___x_4157_);
v___x_4160_ = v___x_4141_;
goto v_reusejp_4159_;
}
else
{
lean_object* v_reuseFailAlloc_4163_; 
v_reuseFailAlloc_4163_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4163_, 0, v___x_4157_);
lean_ctor_set(v_reuseFailAlloc_4163_, 1, v___x_4158_);
v___x_4160_ = v_reuseFailAlloc_4163_;
goto v_reusejp_4159_;
}
v_reusejp_4159_:
{
lean_object* v___x_4161_; lean_object* v___x_4162_; 
v___x_4161_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4161_, 0, v___x_4160_);
lean_ctor_set(v___x_4161_, 1, v_msg_4150_);
v___x_4162_ = l_Lean_throwError___at___00__private_Lean_Parser_Extension_0__Lean_Parser_initFn_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2__spec__0___redArg(v___x_4161_, v___y_4133_, v___y_4134_);
v___y_4144_ = v___x_4162_;
goto v___jp_4143_;
}
}
}
}
else
{
lean_dec(v_a_4147_);
lean_del_object(v___x_4141_);
v___y_4144_ = v___x_4146_;
goto v___jp_4143_;
}
}
else
{
lean_dec(v_a_4147_);
lean_del_object(v___x_4141_);
v___y_4144_ = v___x_4146_;
goto v___jp_4143_;
}
}
}
v___jp_4143_:
{
if (lean_obj_tag(v___y_4144_) == 0)
{
lean_dec_ref_known(v___y_4144_, 1);
v_as_4132_ = v_tail_4139_;
goto _start;
}
else
{
lean_dec(v_tail_4139_);
lean_dec(v_declName_4131_);
return v___y_4144_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forM___at___00__private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add_spec__0___boxed(lean_object* v_attrKind_4170_, lean_object* v_declName_4171_, lean_object* v_as_4172_, lean_object* v___y_4173_, lean_object* v___y_4174_, lean_object* v___y_4175_){
_start:
{
uint8_t v_attrKind_boxed_4176_; lean_object* v_res_4177_; 
v_attrKind_boxed_4176_ = lean_unbox(v_attrKind_4170_);
v_res_4177_ = l_List_forM___at___00__private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add_spec__0(v_attrKind_boxed_4176_, v_declName_4171_, v_as_4172_, v___y_4173_, v___y_4174_);
lean_dec(v___y_4174_);
lean_dec_ref(v___y_4173_);
return v_res_4177_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add___redArg(lean_object* v_catName_4179_, lean_object* v_declName_4180_, lean_object* v_stx_4181_, uint8_t v_attrKind_4182_, lean_object* v_a_4183_, lean_object* v_a_4184_){
_start:
{
lean_object* v___y_4187_; lean_object* v___y_4188_; lean_object* v___f_4191_; lean_object* v___x_4192_; lean_object* v___x_4193_; 
v___f_4191_ = ((lean_object*)(l___private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add___redArg___closed__0));
v___x_4192_ = l_Lean_Parser_ParserExtension_instInhabitedState_default;
v___x_4193_ = l_Lean_Attribute_Builtin_getPrio(v_stx_4181_, v_a_4183_, v_a_4184_);
if (lean_obj_tag(v___x_4193_) == 0)
{
lean_object* v_a_4194_; lean_object* v___x_4195_; lean_object* v_env_4196_; lean_object* v___x_4197_; lean_object* v_ext_4198_; lean_object* v_toEnvExtension_4199_; lean_object* v_asyncMode_4200_; lean_object* v___x_4201_; lean_object* v_categories_4202_; lean_object* v___x_4203_; lean_object* v_toCold_4204_; lean_object* v_env_4205_; lean_object* v_ref_4206_; lean_object* v_options_4207_; lean_object* v___x_4208_; lean_object* v___x_4209_; 
v_a_4194_ = lean_ctor_get(v___x_4193_, 0);
lean_inc(v_a_4194_);
lean_dec_ref_known(v___x_4193_, 1);
v___x_4195_ = lean_st_ref_get(v_a_4184_);
v_env_4196_ = lean_ctor_get(v___x_4195_, 0);
lean_inc_ref(v_env_4196_);
lean_dec(v___x_4195_);
v___x_4197_ = l_Lean_Parser_parserExtension;
v_ext_4198_ = lean_ctor_get(v___x_4197_, 1);
v_toEnvExtension_4199_ = lean_ctor_get(v_ext_4198_, 0);
v_asyncMode_4200_ = lean_ctor_get(v_toEnvExtension_4199_, 2);
v___x_4201_ = l_Lean_ScopedEnvExtension_getState___redArg(v___x_4192_, v___x_4197_, v_env_4196_, v_asyncMode_4200_);
v_categories_4202_ = lean_ctor_get(v___x_4201_, 2);
lean_inc_ref_n(v_categories_4202_, 2);
lean_dec(v___x_4201_);
v___x_4203_ = lean_st_ref_get(v_a_4184_);
v_toCold_4204_ = lean_ctor_get(v_a_4183_, 0);
v_env_4205_ = lean_ctor_get(v___x_4203_, 0);
lean_inc_ref(v_env_4205_);
lean_dec(v___x_4203_);
v_ref_4206_ = lean_ctor_get(v_a_4183_, 2);
v_options_4207_ = lean_ctor_get(v_toCold_4204_, 2);
lean_inc_ref(v_options_4207_);
v___x_4208_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4208_, 0, v_env_4205_);
lean_ctor_set(v___x_4208_, 1, v_options_4207_);
lean_inc(v_declName_4180_);
v___x_4209_ = l_Lean_Parser_mkParserOfConstant(v_categories_4202_, v_declName_4180_, v___x_4208_);
lean_dec_ref_known(v___x_4208_, 2);
if (lean_obj_tag(v___x_4209_) == 0)
{
lean_object* v_a_4210_; lean_object* v_snd_4211_; lean_object* v_info_4212_; lean_object* v_fst_4213_; lean_object* v_collectTokens_4214_; lean_object* v_collectKinds_4215_; lean_object* v___x_4216_; lean_object* v___x_4217_; lean_object* v___x_4218_; 
v_a_4210_ = lean_ctor_get(v___x_4209_, 0);
lean_inc(v_a_4210_);
lean_dec_ref_known(v___x_4209_, 1);
v_snd_4211_ = lean_ctor_get(v_a_4210_, 1);
lean_inc(v_snd_4211_);
v_info_4212_ = lean_ctor_get(v_snd_4211_, 0);
v_fst_4213_ = lean_ctor_get(v_a_4210_, 0);
lean_inc(v_fst_4213_);
lean_dec(v_a_4210_);
v_collectTokens_4214_ = lean_ctor_get(v_info_4212_, 0);
v_collectKinds_4215_ = lean_ctor_get(v_info_4212_, 1);
v___x_4216_ = lean_box(0);
lean_inc_ref(v_collectTokens_4214_);
v___x_4217_ = lean_apply_1(v_collectTokens_4214_, v___x_4216_);
lean_inc(v_declName_4180_);
v___x_4218_ = l_List_forM___at___00__private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add_spec__0(v_attrKind_4182_, v_declName_4180_, v___x_4217_, v_a_4183_, v_a_4184_);
if (lean_obj_tag(v___x_4218_) == 0)
{
lean_object* v___x_4219_; lean_object* v___x_4220_; lean_object* v___x_4221_; 
lean_dec_ref_known(v___x_4218_, 1);
v___x_4219_ = lean_obj_once(&l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__1_00___x40_Lean_Parser_Extension_848551512____hygCtx___hyg_2_, &l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__1_00___x40_Lean_Parser_Extension_848551512____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__1_00___x40_Lean_Parser_Extension_848551512____hygCtx___hyg_2_);
lean_inc_ref(v_collectKinds_4215_);
v___x_4220_ = lean_apply_1(v_collectKinds_4215_, v___x_4219_);
v___x_4221_ = l_Lean_PersistentHashMap_forM___at___00__private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add_spec__1___redArg(v___x_4220_, v___f_4191_, v_a_4183_, v_a_4184_);
if (lean_obj_tag(v___x_4221_) == 0)
{
lean_object* v___x_4222_; uint8_t v___x_4223_; uint8_t v___x_4224_; lean_object* v___x_4225_; 
lean_dec_ref_known(v___x_4221_, 1);
lean_inc(v_a_4194_);
lean_inc(v_snd_4211_);
lean_inc_n(v_declName_4180_, 2);
lean_inc_n(v_catName_4179_, 2);
v___x_4222_ = lean_alloc_ctor(3, 4, 1);
lean_ctor_set(v___x_4222_, 0, v_catName_4179_);
lean_ctor_set(v___x_4222_, 1, v_declName_4180_);
lean_ctor_set(v___x_4222_, 2, v_snd_4211_);
lean_ctor_set(v___x_4222_, 3, v_a_4194_);
v___x_4223_ = lean_unbox(v_fst_4213_);
lean_ctor_set_uint8(v___x_4222_, sizeof(void*)*4, v___x_4223_);
v___x_4224_ = lean_unbox(v_fst_4213_);
lean_dec(v_fst_4213_);
v___x_4225_ = l_Lean_Parser_addParser(v_categories_4202_, v_catName_4179_, v_declName_4180_, v___x_4224_, v_snd_4211_, v_a_4194_);
if (lean_obj_tag(v___x_4225_) == 0)
{
lean_object* v_a_4226_; lean_object* v___x_4228_; uint8_t v_isShared_4229_; uint8_t v_isSharedCheck_4235_; 
lean_dec_ref_known(v___x_4222_, 4);
lean_dec(v_declName_4180_);
lean_dec(v_catName_4179_);
v_a_4226_ = lean_ctor_get(v___x_4225_, 0);
v_isSharedCheck_4235_ = !lean_is_exclusive(v___x_4225_);
if (v_isSharedCheck_4235_ == 0)
{
v___x_4228_ = v___x_4225_;
v_isShared_4229_ = v_isSharedCheck_4235_;
goto v_resetjp_4227_;
}
else
{
lean_inc(v_a_4226_);
lean_dec(v___x_4225_);
v___x_4228_ = lean_box(0);
v_isShared_4229_ = v_isSharedCheck_4235_;
goto v_resetjp_4227_;
}
v_resetjp_4227_:
{
lean_object* v___x_4231_; 
if (v_isShared_4229_ == 0)
{
lean_ctor_set_tag(v___x_4228_, 3);
v___x_4231_ = v___x_4228_;
goto v_reusejp_4230_;
}
else
{
lean_object* v_reuseFailAlloc_4234_; 
v_reuseFailAlloc_4234_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4234_, 0, v_a_4226_);
v___x_4231_ = v_reuseFailAlloc_4234_;
goto v_reusejp_4230_;
}
v_reusejp_4230_:
{
lean_object* v___x_4232_; lean_object* v___x_4233_; 
v___x_4232_ = l_Lean_MessageData_ofFormat(v___x_4231_);
v___x_4233_ = l_Lean_throwError___at___00__private_Lean_Parser_Extension_0__Lean_Parser_initFn_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2__spec__0___redArg(v___x_4232_, v_a_4183_, v_a_4184_);
return v___x_4233_;
}
}
}
else
{
lean_object* v___x_4236_; 
lean_dec_ref_known(v___x_4225_, 1);
v___x_4236_ = l_Lean_ScopedEnvExtension_add___at___00Lean_Parser_addToken_spec__1___redArg(v___x_4197_, v___x_4222_, v_attrKind_4182_, v_a_4183_, v_a_4184_);
lean_dec_ref(v___x_4236_);
v___y_4187_ = v_a_4183_;
v___y_4188_ = v_a_4184_;
goto v___jp_4186_;
}
}
else
{
lean_dec(v_fst_4213_);
lean_dec(v_snd_4211_);
lean_dec_ref(v_categories_4202_);
lean_dec(v_a_4194_);
lean_dec(v_declName_4180_);
lean_dec(v_catName_4179_);
return v___x_4221_;
}
}
else
{
lean_dec(v_fst_4213_);
lean_dec(v_snd_4211_);
lean_dec_ref(v_categories_4202_);
lean_dec(v_a_4194_);
lean_dec(v_declName_4180_);
lean_dec(v_catName_4179_);
return v___x_4218_;
}
}
else
{
lean_object* v_a_4237_; lean_object* v___x_4239_; uint8_t v_isShared_4240_; uint8_t v_isSharedCheck_4248_; 
lean_dec_ref(v_categories_4202_);
lean_dec(v_a_4194_);
lean_dec(v_declName_4180_);
lean_dec(v_catName_4179_);
v_a_4237_ = lean_ctor_get(v___x_4209_, 0);
v_isSharedCheck_4248_ = !lean_is_exclusive(v___x_4209_);
if (v_isSharedCheck_4248_ == 0)
{
v___x_4239_ = v___x_4209_;
v_isShared_4240_ = v_isSharedCheck_4248_;
goto v_resetjp_4238_;
}
else
{
lean_inc(v_a_4237_);
lean_dec(v___x_4209_);
v___x_4239_ = lean_box(0);
v_isShared_4240_ = v_isSharedCheck_4248_;
goto v_resetjp_4238_;
}
v_resetjp_4238_:
{
lean_object* v___x_4241_; lean_object* v___x_4242_; lean_object* v___x_4243_; lean_object* v___x_4244_; lean_object* v___x_4246_; 
v___x_4241_ = lean_io_error_to_string(v_a_4237_);
v___x_4242_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_4242_, 0, v___x_4241_);
v___x_4243_ = l_Lean_MessageData_ofFormat(v___x_4242_);
lean_inc(v_ref_4206_);
v___x_4244_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4244_, 0, v_ref_4206_);
lean_ctor_set(v___x_4244_, 1, v___x_4243_);
if (v_isShared_4240_ == 0)
{
lean_ctor_set(v___x_4239_, 0, v___x_4244_);
v___x_4246_ = v___x_4239_;
goto v_reusejp_4245_;
}
else
{
lean_object* v_reuseFailAlloc_4247_; 
v_reuseFailAlloc_4247_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4247_, 0, v___x_4244_);
v___x_4246_ = v_reuseFailAlloc_4247_;
goto v_reusejp_4245_;
}
v_reusejp_4245_:
{
return v___x_4246_;
}
}
}
}
else
{
lean_object* v_a_4249_; lean_object* v___x_4251_; uint8_t v_isShared_4252_; uint8_t v_isSharedCheck_4256_; 
lean_dec(v_declName_4180_);
lean_dec(v_catName_4179_);
v_a_4249_ = lean_ctor_get(v___x_4193_, 0);
v_isSharedCheck_4256_ = !lean_is_exclusive(v___x_4193_);
if (v_isSharedCheck_4256_ == 0)
{
v___x_4251_ = v___x_4193_;
v_isShared_4252_ = v_isSharedCheck_4256_;
goto v_resetjp_4250_;
}
else
{
lean_inc(v_a_4249_);
lean_dec(v___x_4193_);
v___x_4251_ = lean_box(0);
v_isShared_4252_ = v_isSharedCheck_4256_;
goto v_resetjp_4250_;
}
v_resetjp_4250_:
{
lean_object* v___x_4254_; 
if (v_isShared_4252_ == 0)
{
v___x_4254_ = v___x_4251_;
goto v_reusejp_4253_;
}
else
{
lean_object* v_reuseFailAlloc_4255_; 
v_reuseFailAlloc_4255_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4255_, 0, v_a_4249_);
v___x_4254_ = v_reuseFailAlloc_4255_;
goto v_reusejp_4253_;
}
v_reusejp_4253_:
{
return v___x_4254_;
}
}
}
v___jp_4186_:
{
uint8_t v___x_4189_; lean_object* v___x_4190_; 
v___x_4189_ = 0;
v___x_4190_ = l_Lean_Parser_runParserAttributeHooks(v_catName_4179_, v_declName_4180_, v___x_4189_, v___y_4187_, v___y_4188_);
return v___x_4190_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add___redArg___boxed(lean_object* v_catName_4257_, lean_object* v_declName_4258_, lean_object* v_stx_4259_, lean_object* v_attrKind_4260_, lean_object* v_a_4261_, lean_object* v_a_4262_, lean_object* v_a_4263_){
_start:
{
uint8_t v_attrKind_boxed_4264_; lean_object* v_res_4265_; 
v_attrKind_boxed_4264_ = lean_unbox(v_attrKind_4260_);
v_res_4265_ = l___private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add___redArg(v_catName_4257_, v_declName_4258_, v_stx_4259_, v_attrKind_boxed_4264_, v_a_4261_, v_a_4262_);
lean_dec(v_a_4262_);
lean_dec_ref(v_a_4261_);
return v_res_4265_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add(lean_object* v___attrName_4266_, lean_object* v_catName_4267_, lean_object* v_declName_4268_, lean_object* v_stx_4269_, uint8_t v_attrKind_4270_, lean_object* v_a_4271_, lean_object* v_a_4272_){
_start:
{
lean_object* v___x_4274_; 
v___x_4274_ = l___private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add___redArg(v_catName_4267_, v_declName_4268_, v_stx_4269_, v_attrKind_4270_, v_a_4271_, v_a_4272_);
return v___x_4274_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add___boxed(lean_object* v___attrName_4275_, lean_object* v_catName_4276_, lean_object* v_declName_4277_, lean_object* v_stx_4278_, lean_object* v_attrKind_4279_, lean_object* v_a_4280_, lean_object* v_a_4281_, lean_object* v_a_4282_){
_start:
{
uint8_t v_attrKind_boxed_4283_; lean_object* v_res_4284_; 
v_attrKind_boxed_4283_ = lean_unbox(v_attrKind_4279_);
v_res_4284_ = l___private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add(v___attrName_4275_, v_catName_4276_, v_declName_4277_, v_stx_4278_, v_attrKind_boxed_4283_, v_a_4280_, v_a_4281_);
lean_dec(v_a_4281_);
lean_dec_ref(v_a_4280_);
lean_dec(v___attrName_4275_);
return v_res_4284_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forM___at___00__private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add_spec__1(lean_object* v_00_u03b2_4285_, lean_object* v_map_4286_, lean_object* v_f_4287_, lean_object* v___y_4288_, lean_object* v___y_4289_){
_start:
{
lean_object* v___x_4291_; 
v___x_4291_ = l_Lean_PersistentHashMap_forM___at___00__private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add_spec__1___redArg(v_map_4286_, v_f_4287_, v___y_4288_, v___y_4289_);
return v___x_4291_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forM___at___00__private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add_spec__1___boxed(lean_object* v_00_u03b2_4292_, lean_object* v_map_4293_, lean_object* v_f_4294_, lean_object* v___y_4295_, lean_object* v___y_4296_, lean_object* v___y_4297_){
_start:
{
lean_object* v_res_4298_; 
v_res_4298_ = l_Lean_PersistentHashMap_forM___at___00__private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add_spec__1(v_00_u03b2_4292_, v_map_4293_, v_f_4294_, v___y_4295_, v___y_4296_);
lean_dec(v___y_4296_);
lean_dec_ref(v___y_4295_);
return v_res_4298_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00__private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add_spec__1_spec__1___redArg(lean_object* v_map_4299_, lean_object* v_f_4300_, lean_object* v_init_4301_, lean_object* v___y_4302_, lean_object* v___y_4303_){
_start:
{
lean_object* v___x_4305_; 
v___x_4305_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00__private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add_spec__1_spec__1_spec__2___redArg(v_f_4300_, v_map_4299_, v_init_4301_, v___y_4302_, v___y_4303_);
return v___x_4305_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00__private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add_spec__1_spec__1___redArg___boxed(lean_object* v_map_4306_, lean_object* v_f_4307_, lean_object* v_init_4308_, lean_object* v___y_4309_, lean_object* v___y_4310_, lean_object* v___y_4311_){
_start:
{
lean_object* v_res_4312_; 
v_res_4312_ = l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00__private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add_spec__1_spec__1___redArg(v_map_4306_, v_f_4307_, v_init_4308_, v___y_4309_, v___y_4310_);
lean_dec(v___y_4310_);
lean_dec_ref(v___y_4309_);
return v_res_4312_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00__private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add_spec__1_spec__1(lean_object* v_00_u03c3_4313_, lean_object* v_00_u03b2_4314_, lean_object* v_map_4315_, lean_object* v_f_4316_, lean_object* v_init_4317_, lean_object* v___y_4318_, lean_object* v___y_4319_){
_start:
{
lean_object* v___x_4321_; 
v___x_4321_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00__private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add_spec__1_spec__1_spec__2___redArg(v_f_4316_, v_map_4315_, v_init_4317_, v___y_4318_, v___y_4319_);
return v___x_4321_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00__private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add_spec__1_spec__1___boxed(lean_object* v_00_u03c3_4322_, lean_object* v_00_u03b2_4323_, lean_object* v_map_4324_, lean_object* v_f_4325_, lean_object* v_init_4326_, lean_object* v___y_4327_, lean_object* v___y_4328_, lean_object* v___y_4329_){
_start:
{
lean_object* v_res_4330_; 
v_res_4330_ = l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00__private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add_spec__1_spec__1(v_00_u03c3_4322_, v_00_u03b2_4323_, v_map_4324_, v_f_4325_, v_init_4326_, v___y_4327_, v___y_4328_);
lean_dec(v___y_4328_);
lean_dec_ref(v___y_4327_);
return v_res_4330_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00__private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add_spec__1_spec__1_spec__2(lean_object* v_00_u03c3_4331_, lean_object* v_00_u03b1_4332_, lean_object* v_00_u03b2_4333_, lean_object* v_f_4334_, lean_object* v_x_4335_, lean_object* v_x_4336_, lean_object* v___y_4337_, lean_object* v___y_4338_){
_start:
{
lean_object* v___x_4340_; 
v___x_4340_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00__private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add_spec__1_spec__1_spec__2___redArg(v_f_4334_, v_x_4335_, v_x_4336_, v___y_4337_, v___y_4338_);
return v___x_4340_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00__private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add_spec__1_spec__1_spec__2___boxed(lean_object* v_00_u03c3_4341_, lean_object* v_00_u03b1_4342_, lean_object* v_00_u03b2_4343_, lean_object* v_f_4344_, lean_object* v_x_4345_, lean_object* v_x_4346_, lean_object* v___y_4347_, lean_object* v___y_4348_, lean_object* v___y_4349_){
_start:
{
lean_object* v_res_4350_; 
v_res_4350_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00__private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add_spec__1_spec__1_spec__2(v_00_u03c3_4341_, v_00_u03b1_4342_, v_00_u03b2_4343_, v_f_4344_, v_x_4345_, v_x_4346_, v___y_4347_, v___y_4348_);
lean_dec(v___y_4348_);
lean_dec_ref(v___y_4347_);
return v_res_4350_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00__private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add_spec__1_spec__1_spec__2_spec__3(lean_object* v_00_u03b1_4351_, lean_object* v_00_u03b2_4352_, lean_object* v_00_u03c3_4353_, lean_object* v_f_4354_, lean_object* v_as_4355_, size_t v_i_4356_, size_t v_stop_4357_, lean_object* v_b_4358_, lean_object* v___y_4359_, lean_object* v___y_4360_){
_start:
{
lean_object* v___x_4362_; 
v___x_4362_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00__private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add_spec__1_spec__1_spec__2_spec__3___redArg(v_f_4354_, v_as_4355_, v_i_4356_, v_stop_4357_, v_b_4358_, v___y_4359_, v___y_4360_);
return v___x_4362_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00__private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add_spec__1_spec__1_spec__2_spec__3___boxed(lean_object* v_00_u03b1_4363_, lean_object* v_00_u03b2_4364_, lean_object* v_00_u03c3_4365_, lean_object* v_f_4366_, lean_object* v_as_4367_, lean_object* v_i_4368_, lean_object* v_stop_4369_, lean_object* v_b_4370_, lean_object* v___y_4371_, lean_object* v___y_4372_, lean_object* v___y_4373_){
_start:
{
size_t v_i_boxed_4374_; size_t v_stop_boxed_4375_; lean_object* v_res_4376_; 
v_i_boxed_4374_ = lean_unbox_usize(v_i_4368_);
lean_dec(v_i_4368_);
v_stop_boxed_4375_ = lean_unbox_usize(v_stop_4369_);
lean_dec(v_stop_4369_);
v_res_4376_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00__private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add_spec__1_spec__1_spec__2_spec__3(v_00_u03b1_4363_, v_00_u03b2_4364_, v_00_u03c3_4365_, v_f_4366_, v_as_4367_, v_i_boxed_4374_, v_stop_boxed_4375_, v_b_4370_, v___y_4371_, v___y_4372_);
lean_dec(v___y_4372_);
lean_dec_ref(v___y_4371_);
lean_dec_ref(v_as_4367_);
return v_res_4376_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00__private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add_spec__1_spec__1_spec__2_spec__4(lean_object* v_00_u03c3_4377_, lean_object* v_00_u03b1_4378_, lean_object* v_00_u03b2_4379_, lean_object* v_f_4380_, lean_object* v_keys_4381_, lean_object* v_vals_4382_, lean_object* v_heq_4383_, lean_object* v_i_4384_, lean_object* v_acc_4385_, lean_object* v___y_4386_, lean_object* v___y_4387_){
_start:
{
lean_object* v___x_4389_; 
v___x_4389_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00__private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add_spec__1_spec__1_spec__2_spec__4___redArg(v_f_4380_, v_keys_4381_, v_vals_4382_, v_i_4384_, v_acc_4385_, v___y_4386_, v___y_4387_);
return v___x_4389_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00__private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add_spec__1_spec__1_spec__2_spec__4___boxed(lean_object* v_00_u03c3_4390_, lean_object* v_00_u03b1_4391_, lean_object* v_00_u03b2_4392_, lean_object* v_f_4393_, lean_object* v_keys_4394_, lean_object* v_vals_4395_, lean_object* v_heq_4396_, lean_object* v_i_4397_, lean_object* v_acc_4398_, lean_object* v___y_4399_, lean_object* v___y_4400_, lean_object* v___y_4401_){
_start:
{
lean_object* v_res_4402_; 
v_res_4402_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00__private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add_spec__1_spec__1_spec__2_spec__4(v_00_u03c3_4390_, v_00_u03b1_4391_, v_00_u03b2_4392_, v_f_4393_, v_keys_4394_, v_vals_4395_, v_heq_4396_, v_i_4397_, v_acc_4398_, v___y_4399_, v___y_4400_);
lean_dec(v___y_4400_);
lean_dec_ref(v___y_4399_);
lean_dec_ref(v_vals_4395_);
lean_dec_ref(v_keys_4394_);
return v_res_4402_;
}
}
static lean_object* _init_l_Lean_Parser_mkParserAttributeImpl___auto__1(void){
_start:
{
lean_object* v___x_4403_; 
v___x_4403_ = lean_obj_once(&l_Lean_Parser_registerBuiltinParserAttribute___auto__1___closed__18, &l_Lean_Parser_registerBuiltinParserAttribute___auto__1___closed__18_once, _init_l_Lean_Parser_registerBuiltinParserAttribute___auto__1___closed__18);
return v___x_4403_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_mkParserAttributeImpl___lam__0(lean_object* v_catName_4404_, lean_object* v_declName_4405_, lean_object* v_stx_4406_, uint8_t v_attrKind_4407_, lean_object* v___y_4408_, lean_object* v___y_4409_){
_start:
{
lean_object* v___x_4411_; 
v___x_4411_ = l___private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add___redArg(v_catName_4404_, v_declName_4405_, v_stx_4406_, v_attrKind_4407_, v___y_4408_, v___y_4409_);
return v___x_4411_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_mkParserAttributeImpl___lam__0___boxed(lean_object* v_catName_4412_, lean_object* v_declName_4413_, lean_object* v_stx_4414_, lean_object* v_attrKind_4415_, lean_object* v___y_4416_, lean_object* v___y_4417_, lean_object* v___y_4418_){
_start:
{
uint8_t v_attrKind_boxed_4419_; lean_object* v_res_4420_; 
v_attrKind_boxed_4419_ = lean_unbox(v_attrKind_4415_);
v_res_4420_ = l_Lean_Parser_mkParserAttributeImpl___lam__0(v_catName_4412_, v_declName_4413_, v_stx_4414_, v_attrKind_boxed_4419_, v___y_4416_, v___y_4417_);
lean_dec(v___y_4417_);
lean_dec_ref(v___y_4416_);
return v_res_4420_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_mkParserAttributeImpl(lean_object* v_attrName_4422_, lean_object* v_catName_4423_, lean_object* v_ref_4424_){
_start:
{
lean_object* v___f_4425_; lean_object* v___f_4426_; lean_object* v___x_4427_; uint8_t v___x_4428_; lean_object* v___x_4429_; lean_object* v___x_4430_; 
v___f_4425_ = lean_alloc_closure((void*)(l_Lean_Parser_mkParserAttributeImpl___lam__0___boxed), 7, 1);
lean_closure_set(v___f_4425_, 0, v_catName_4423_);
lean_inc(v_attrName_4422_);
v___f_4426_ = lean_alloc_closure((void*)(l_Lean_Parser_registerBuiltinParserAttribute___lam__0___boxed), 5, 1);
lean_closure_set(v___f_4426_, 0, v_attrName_4422_);
v___x_4427_ = ((lean_object*)(l_Lean_Parser_mkParserAttributeImpl___closed__0));
v___x_4428_ = 1;
v___x_4429_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_4429_, 0, v_ref_4424_);
lean_ctor_set(v___x_4429_, 1, v_attrName_4422_);
lean_ctor_set(v___x_4429_, 2, v___x_4427_);
lean_ctor_set_uint8(v___x_4429_, sizeof(void*)*3, v___x_4428_);
v___x_4430_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4430_, 0, v___x_4429_);
lean_ctor_set(v___x_4430_, 1, v___f_4425_);
lean_ctor_set(v___x_4430_, 2, v___f_4426_);
return v___x_4430_;
}
}
static lean_object* _init_l_Lean_Parser_registerBuiltinDynamicParserAttribute___auto__1(void){
_start:
{
lean_object* v___x_4431_; 
v___x_4431_ = lean_obj_once(&l_Lean_Parser_registerBuiltinParserAttribute___auto__1___closed__18, &l_Lean_Parser_registerBuiltinParserAttribute___auto__1___closed__18_once, _init_l_Lean_Parser_registerBuiltinParserAttribute___auto__1___closed__18);
return v___x_4431_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_registerBuiltinDynamicParserAttribute(lean_object* v_attrName_4432_, lean_object* v_catName_4433_, lean_object* v_ref_4434_){
_start:
{
lean_object* v___x_4436_; lean_object* v___x_4437_; 
v___x_4436_ = l_Lean_Parser_mkParserAttributeImpl(v_attrName_4432_, v_catName_4433_, v_ref_4434_);
v___x_4437_ = l_Lean_registerBuiltinAttribute(v___x_4436_);
return v___x_4437_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_registerBuiltinDynamicParserAttribute___boxed(lean_object* v_attrName_4438_, lean_object* v_catName_4439_, lean_object* v_ref_4440_, lean_object* v_a_4441_){
_start:
{
lean_object* v_res_4442_; 
v_res_4442_ = l_Lean_Parser_registerBuiltinDynamicParserAttribute(v_attrName_4438_, v_catName_4439_, v_ref_4440_);
return v_res_4442_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___lam__0_00___x40_Lean_Parser_Extension_3896994716____hygCtx___hyg_2_(lean_object* v_ref_4446_, lean_object* v_args_4447_){
_start:
{
if (lean_obj_tag(v_args_4447_) == 1)
{
lean_object* v_head_4450_; 
v_head_4450_ = lean_ctor_get(v_args_4447_, 0);
lean_inc(v_head_4450_);
if (lean_obj_tag(v_head_4450_) == 2)
{
lean_object* v_tail_4451_; 
v_tail_4451_ = lean_ctor_get(v_args_4447_, 1);
lean_inc(v_tail_4451_);
lean_dec_ref_known(v_args_4447_, 2);
if (lean_obj_tag(v_tail_4451_) == 1)
{
lean_object* v_head_4452_; 
v_head_4452_ = lean_ctor_get(v_tail_4451_, 0);
lean_inc(v_head_4452_);
if (lean_obj_tag(v_head_4452_) == 2)
{
lean_object* v_tail_4453_; 
v_tail_4453_ = lean_ctor_get(v_tail_4451_, 1);
lean_inc(v_tail_4453_);
lean_dec_ref_known(v_tail_4451_, 2);
if (lean_obj_tag(v_tail_4453_) == 0)
{
lean_object* v_v_4454_; lean_object* v_v_4455_; lean_object* v___x_4457_; uint8_t v_isShared_4458_; uint8_t v_isSharedCheck_4463_; 
v_v_4454_ = lean_ctor_get(v_head_4450_, 0);
lean_inc(v_v_4454_);
lean_dec_ref_known(v_head_4450_, 1);
v_v_4455_ = lean_ctor_get(v_head_4452_, 0);
v_isSharedCheck_4463_ = !lean_is_exclusive(v_head_4452_);
if (v_isSharedCheck_4463_ == 0)
{
v___x_4457_ = v_head_4452_;
v_isShared_4458_ = v_isSharedCheck_4463_;
goto v_resetjp_4456_;
}
else
{
lean_inc(v_v_4455_);
lean_dec(v_head_4452_);
v___x_4457_ = lean_box(0);
v_isShared_4458_ = v_isSharedCheck_4463_;
goto v_resetjp_4456_;
}
v_resetjp_4456_:
{
lean_object* v___x_4459_; lean_object* v___x_4461_; 
v___x_4459_ = l_Lean_Parser_mkParserAttributeImpl(v_v_4454_, v_v_4455_, v_ref_4446_);
if (v_isShared_4458_ == 0)
{
lean_ctor_set_tag(v___x_4457_, 1);
lean_ctor_set(v___x_4457_, 0, v___x_4459_);
v___x_4461_ = v___x_4457_;
goto v_reusejp_4460_;
}
else
{
lean_object* v_reuseFailAlloc_4462_; 
v_reuseFailAlloc_4462_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4462_, 0, v___x_4459_);
v___x_4461_ = v_reuseFailAlloc_4462_;
goto v_reusejp_4460_;
}
v_reusejp_4460_:
{
return v___x_4461_;
}
}
}
else
{
lean_dec(v_tail_4453_);
lean_dec_ref_known(v_head_4452_, 1);
lean_dec_ref_known(v_head_4450_, 1);
lean_dec(v_ref_4446_);
goto v___jp_4448_;
}
}
else
{
lean_dec(v_head_4452_);
lean_dec_ref_known(v_tail_4451_, 2);
lean_dec_ref_known(v_head_4450_, 1);
lean_dec(v_ref_4446_);
goto v___jp_4448_;
}
}
else
{
lean_dec_ref_known(v_head_4450_, 1);
lean_dec(v_tail_4451_);
lean_dec(v_ref_4446_);
goto v___jp_4448_;
}
}
else
{
lean_dec_ref_known(v_args_4447_, 2);
lean_dec(v_head_4450_);
lean_dec(v_ref_4446_);
goto v___jp_4448_;
}
}
else
{
lean_dec(v_args_4447_);
lean_dec(v_ref_4446_);
goto v___jp_4448_;
}
v___jp_4448_:
{
lean_object* v___x_4449_; 
v___x_4449_ = ((lean_object*)(l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___lam__0___closed__1_00___x40_Lean_Parser_Extension_3896994716____hygCtx___hyg_2_));
return v___x_4449_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn_00___x40_Lean_Parser_Extension_3896994716____hygCtx___hyg_2_(){
_start:
{
lean_object* v___f_4469_; lean_object* v___x_4470_; lean_object* v___x_4471_; 
v___f_4469_ = ((lean_object*)(l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__0_00___x40_Lean_Parser_Extension_3896994716____hygCtx___hyg_2_));
v___x_4470_ = ((lean_object*)(l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Extension_3896994716____hygCtx___hyg_2_));
v___x_4471_ = l_Lean_registerAttributeImplBuilder(v___x_4470_, v___f_4469_);
return v___x_4471_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn_00___x40_Lean_Parser_Extension_3896994716____hygCtx___hyg_2____boxed(lean_object* v_a_4472_){
_start:
{
lean_object* v_res_4473_; 
v_res_4473_ = l___private_Lean_Parser_Extension_0__Lean_Parser_initFn_00___x40_Lean_Parser_Extension_3896994716____hygCtx___hyg_2_();
return v_res_4473_;
}
}
static lean_object* _init_l_Lean_Parser_registerParserCategory___auto__1(void){
_start:
{
lean_object* v___x_4474_; 
v___x_4474_ = lean_obj_once(&l_Lean_Parser_registerBuiltinParserAttribute___auto__1___closed__18, &l_Lean_Parser_registerBuiltinParserAttribute___auto__1___closed__18_once, _init_l_Lean_Parser_registerBuiltinParserAttribute___auto__1___closed__18);
return v___x_4474_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_registerParserCategory(lean_object* v_env_4475_, lean_object* v_attrName_4476_, lean_object* v_catName_4477_, uint8_t v_behavior_4478_, lean_object* v_ref_4479_){
_start:
{
lean_object* v___x_4481_; lean_object* v___x_4482_; 
lean_inc(v_ref_4479_);
lean_inc(v_catName_4477_);
v___x_4481_ = l_Lean_Parser_addParserCategory(v_env_4475_, v_catName_4477_, v_ref_4479_, v_behavior_4478_);
v___x_4482_ = l_IO_ofExcept___at___00__private_Lean_Parser_Extension_0__Lean_Parser_addBuiltinParserCategory_spec__0___redArg(v___x_4481_);
if (lean_obj_tag(v___x_4482_) == 0)
{
lean_object* v_a_4483_; lean_object* v___x_4485_; uint8_t v_isShared_4486_; uint8_t v_isSharedCheck_4496_; 
v_a_4483_ = lean_ctor_get(v___x_4482_, 0);
v_isSharedCheck_4496_ = !lean_is_exclusive(v___x_4482_);
if (v_isSharedCheck_4496_ == 0)
{
v___x_4485_ = v___x_4482_;
v_isShared_4486_ = v_isSharedCheck_4496_;
goto v_resetjp_4484_;
}
else
{
lean_inc(v_a_4483_);
lean_dec(v___x_4482_);
v___x_4485_ = lean_box(0);
v_isShared_4486_ = v_isSharedCheck_4496_;
goto v_resetjp_4484_;
}
v_resetjp_4484_:
{
lean_object* v___x_4487_; lean_object* v___x_4489_; 
v___x_4487_ = ((lean_object*)(l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Extension_3896994716____hygCtx___hyg_2_));
if (v_isShared_4486_ == 0)
{
lean_ctor_set_tag(v___x_4485_, 2);
lean_ctor_set(v___x_4485_, 0, v_attrName_4476_);
v___x_4489_ = v___x_4485_;
goto v_reusejp_4488_;
}
else
{
lean_object* v_reuseFailAlloc_4495_; 
v_reuseFailAlloc_4495_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4495_, 0, v_attrName_4476_);
v___x_4489_ = v_reuseFailAlloc_4495_;
goto v_reusejp_4488_;
}
v_reusejp_4488_:
{
lean_object* v___x_4490_; lean_object* v___x_4491_; lean_object* v___x_4492_; lean_object* v___x_4493_; lean_object* v___x_4494_; 
v___x_4490_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_4490_, 0, v_catName_4477_);
v___x_4491_ = lean_box(0);
v___x_4492_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4492_, 0, v___x_4490_);
lean_ctor_set(v___x_4492_, 1, v___x_4491_);
v___x_4493_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4493_, 0, v___x_4489_);
lean_ctor_set(v___x_4493_, 1, v___x_4492_);
v___x_4494_ = l_Lean_registerAttributeOfBuilder(v_a_4483_, v___x_4487_, v_ref_4479_, v___x_4493_);
return v___x_4494_;
}
}
}
else
{
lean_dec(v_ref_4479_);
lean_dec(v_catName_4477_);
lean_dec(v_attrName_4476_);
return v___x_4482_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_registerParserCategory___boxed(lean_object* v_env_4497_, lean_object* v_attrName_4498_, lean_object* v_catName_4499_, lean_object* v_behavior_4500_, lean_object* v_ref_4501_, lean_object* v_a_4502_){
_start:
{
uint8_t v_behavior_boxed_4503_; lean_object* v_res_4504_; 
v_behavior_boxed_4503_ = lean_unbox(v_behavior_4500_);
v_res_4504_ = l_Lean_Parser_registerParserCategory(v_env_4497_, v_attrName_4498_, v_catName_4499_, v_behavior_boxed_4503_, v_ref_4501_);
return v_res_4504_;
}
}
static lean_object* _init_l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__4_00___x40_Lean_Parser_Extension_346849000____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4514_; lean_object* v___x_4515_; lean_object* v___x_4516_; 
v___x_4514_ = lean_unsigned_to_nat(346849000u);
v___x_4515_ = lean_obj_once(&l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__16_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2_, &l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__16_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__16_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2_);
v___x_4516_ = l_Lean_Name_num___override(v___x_4515_, v___x_4514_);
return v___x_4516_;
}
}
static lean_object* _init_l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__5_00___x40_Lean_Parser_Extension_346849000____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4517_; lean_object* v___x_4518_; lean_object* v___x_4519_; 
v___x_4517_ = ((lean_object*)(l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__18_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2_));
v___x_4518_ = lean_obj_once(&l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__4_00___x40_Lean_Parser_Extension_346849000____hygCtx___hyg_2_, &l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__4_00___x40_Lean_Parser_Extension_346849000____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__4_00___x40_Lean_Parser_Extension_346849000____hygCtx___hyg_2_);
v___x_4519_ = l_Lean_Name_str___override(v___x_4518_, v___x_4517_);
return v___x_4519_;
}
}
static lean_object* _init_l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__6_00___x40_Lean_Parser_Extension_346849000____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4520_; lean_object* v___x_4521_; lean_object* v___x_4522_; 
v___x_4520_ = ((lean_object*)(l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__20_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2_));
v___x_4521_ = lean_obj_once(&l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__5_00___x40_Lean_Parser_Extension_346849000____hygCtx___hyg_2_, &l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__5_00___x40_Lean_Parser_Extension_346849000____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__5_00___x40_Lean_Parser_Extension_346849000____hygCtx___hyg_2_);
v___x_4522_ = l_Lean_Name_str___override(v___x_4521_, v___x_4520_);
return v___x_4522_;
}
}
static lean_object* _init_l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__7_00___x40_Lean_Parser_Extension_346849000____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4523_; lean_object* v___x_4524_; lean_object* v___x_4525_; 
v___x_4523_ = lean_unsigned_to_nat(2u);
v___x_4524_ = lean_obj_once(&l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__6_00___x40_Lean_Parser_Extension_346849000____hygCtx___hyg_2_, &l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__6_00___x40_Lean_Parser_Extension_346849000____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__6_00___x40_Lean_Parser_Extension_346849000____hygCtx___hyg_2_);
v___x_4525_ = l_Lean_Name_num___override(v___x_4524_, v___x_4523_);
return v___x_4525_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn_00___x40_Lean_Parser_Extension_346849000____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_4527_; lean_object* v___x_4528_; uint8_t v___x_4529_; lean_object* v___x_4530_; lean_object* v___x_4531_; 
v___x_4527_ = ((lean_object*)(l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__1_00___x40_Lean_Parser_Extension_346849000____hygCtx___hyg_2_));
v___x_4528_ = ((lean_object*)(l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Extension_346849000____hygCtx___hyg_2_));
v___x_4529_ = 0;
v___x_4530_ = lean_obj_once(&l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__7_00___x40_Lean_Parser_Extension_346849000____hygCtx___hyg_2_, &l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__7_00___x40_Lean_Parser_Extension_346849000____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__7_00___x40_Lean_Parser_Extension_346849000____hygCtx___hyg_2_);
v___x_4531_ = l_Lean_Parser_registerBuiltinParserAttribute(v___x_4527_, v___x_4528_, v___x_4529_, v___x_4530_);
return v___x_4531_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn_00___x40_Lean_Parser_Extension_346849000____hygCtx___hyg_2____boxed(lean_object* v_a_4532_){
_start:
{
lean_object* v_res_4533_; 
v_res_4533_ = l___private_Lean_Parser_Extension_0__Lean_Parser_initFn_00___x40_Lean_Parser_Extension_346849000____hygCtx___hyg_2_();
return v_res_4533_;
}
}
static lean_object* _init_l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Extension_3431364690____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4539_; lean_object* v___x_4540_; lean_object* v___x_4541_; 
v___x_4539_ = lean_unsigned_to_nat(3431364690u);
v___x_4540_ = lean_obj_once(&l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__16_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2_, &l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__16_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__16_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2_);
v___x_4541_ = l_Lean_Name_num___override(v___x_4540_, v___x_4539_);
return v___x_4541_;
}
}
static lean_object* _init_l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__4_00___x40_Lean_Parser_Extension_3431364690____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4542_; lean_object* v___x_4543_; lean_object* v___x_4544_; 
v___x_4542_ = ((lean_object*)(l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__18_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2_));
v___x_4543_ = lean_obj_once(&l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Extension_3431364690____hygCtx___hyg_2_, &l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Extension_3431364690____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Extension_3431364690____hygCtx___hyg_2_);
v___x_4544_ = l_Lean_Name_str___override(v___x_4543_, v___x_4542_);
return v___x_4544_;
}
}
static lean_object* _init_l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__5_00___x40_Lean_Parser_Extension_3431364690____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4545_; lean_object* v___x_4546_; lean_object* v___x_4547_; 
v___x_4545_ = ((lean_object*)(l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__20_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2_));
v___x_4546_ = lean_obj_once(&l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__4_00___x40_Lean_Parser_Extension_3431364690____hygCtx___hyg_2_, &l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__4_00___x40_Lean_Parser_Extension_3431364690____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__4_00___x40_Lean_Parser_Extension_3431364690____hygCtx___hyg_2_);
v___x_4547_ = l_Lean_Name_str___override(v___x_4546_, v___x_4545_);
return v___x_4547_;
}
}
static lean_object* _init_l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__6_00___x40_Lean_Parser_Extension_3431364690____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4548_; lean_object* v___x_4549_; lean_object* v___x_4550_; 
v___x_4548_ = lean_unsigned_to_nat(2u);
v___x_4549_ = lean_obj_once(&l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__5_00___x40_Lean_Parser_Extension_3431364690____hygCtx___hyg_2_, &l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__5_00___x40_Lean_Parser_Extension_3431364690____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__5_00___x40_Lean_Parser_Extension_3431364690____hygCtx___hyg_2_);
v___x_4550_ = l_Lean_Name_num___override(v___x_4549_, v___x_4548_);
return v___x_4550_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn_00___x40_Lean_Parser_Extension_3431364690____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_4552_; lean_object* v___x_4553_; lean_object* v___x_4554_; lean_object* v___x_4555_; 
v___x_4552_ = ((lean_object*)(l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__1_00___x40_Lean_Parser_Extension_3431364690____hygCtx___hyg_2_));
v___x_4553_ = ((lean_object*)(l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Extension_3431364690____hygCtx___hyg_2_));
v___x_4554_ = lean_obj_once(&l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__6_00___x40_Lean_Parser_Extension_3431364690____hygCtx___hyg_2_, &l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__6_00___x40_Lean_Parser_Extension_3431364690____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__6_00___x40_Lean_Parser_Extension_3431364690____hygCtx___hyg_2_);
v___x_4555_ = l_Lean_Parser_registerBuiltinDynamicParserAttribute(v___x_4552_, v___x_4553_, v___x_4554_);
return v___x_4555_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn_00___x40_Lean_Parser_Extension_3431364690____hygCtx___hyg_2____boxed(lean_object* v_a_4556_){
_start:
{
lean_object* v_res_4557_; 
v_res_4557_ = l___private_Lean_Parser_Extension_0__Lean_Parser_initFn_00___x40_Lean_Parser_Extension_3431364690____hygCtx___hyg_2_();
return v_res_4557_;
}
}
static lean_object* _init_l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__4_00___x40_Lean_Parser_Extension_2342493449____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4567_; lean_object* v___x_4568_; lean_object* v___x_4569_; 
v___x_4567_ = lean_unsigned_to_nat(2342493449u);
v___x_4568_ = lean_obj_once(&l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__16_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2_, &l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__16_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__16_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2_);
v___x_4569_ = l_Lean_Name_num___override(v___x_4568_, v___x_4567_);
return v___x_4569_;
}
}
static lean_object* _init_l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__5_00___x40_Lean_Parser_Extension_2342493449____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4570_; lean_object* v___x_4571_; lean_object* v___x_4572_; 
v___x_4570_ = ((lean_object*)(l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__18_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2_));
v___x_4571_ = lean_obj_once(&l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__4_00___x40_Lean_Parser_Extension_2342493449____hygCtx___hyg_2_, &l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__4_00___x40_Lean_Parser_Extension_2342493449____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__4_00___x40_Lean_Parser_Extension_2342493449____hygCtx___hyg_2_);
v___x_4572_ = l_Lean_Name_str___override(v___x_4571_, v___x_4570_);
return v___x_4572_;
}
}
static lean_object* _init_l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__6_00___x40_Lean_Parser_Extension_2342493449____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4573_; lean_object* v___x_4574_; lean_object* v___x_4575_; 
v___x_4573_ = ((lean_object*)(l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__20_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2_));
v___x_4574_ = lean_obj_once(&l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__5_00___x40_Lean_Parser_Extension_2342493449____hygCtx___hyg_2_, &l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__5_00___x40_Lean_Parser_Extension_2342493449____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__5_00___x40_Lean_Parser_Extension_2342493449____hygCtx___hyg_2_);
v___x_4575_ = l_Lean_Name_str___override(v___x_4574_, v___x_4573_);
return v___x_4575_;
}
}
static lean_object* _init_l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__7_00___x40_Lean_Parser_Extension_2342493449____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4576_; lean_object* v___x_4577_; lean_object* v___x_4578_; 
v___x_4576_ = lean_unsigned_to_nat(2u);
v___x_4577_ = lean_obj_once(&l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__6_00___x40_Lean_Parser_Extension_2342493449____hygCtx___hyg_2_, &l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__6_00___x40_Lean_Parser_Extension_2342493449____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__6_00___x40_Lean_Parser_Extension_2342493449____hygCtx___hyg_2_);
v___x_4578_ = l_Lean_Name_num___override(v___x_4577_, v___x_4576_);
return v___x_4578_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn_00___x40_Lean_Parser_Extension_2342493449____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_4580_; lean_object* v___x_4581_; uint8_t v___x_4582_; lean_object* v___x_4583_; lean_object* v___x_4584_; 
v___x_4580_ = ((lean_object*)(l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__1_00___x40_Lean_Parser_Extension_2342493449____hygCtx___hyg_2_));
v___x_4581_ = ((lean_object*)(l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Extension_2342493449____hygCtx___hyg_2_));
v___x_4582_ = 0;
v___x_4583_ = lean_obj_once(&l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__7_00___x40_Lean_Parser_Extension_2342493449____hygCtx___hyg_2_, &l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__7_00___x40_Lean_Parser_Extension_2342493449____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__7_00___x40_Lean_Parser_Extension_2342493449____hygCtx___hyg_2_);
v___x_4584_ = l_Lean_Parser_registerBuiltinParserAttribute(v___x_4580_, v___x_4581_, v___x_4582_, v___x_4583_);
return v___x_4584_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn_00___x40_Lean_Parser_Extension_2342493449____hygCtx___hyg_2____boxed(lean_object* v_a_4585_){
_start:
{
lean_object* v_res_4586_; 
v_res_4586_ = l___private_Lean_Parser_Extension_0__Lean_Parser_initFn_00___x40_Lean_Parser_Extension_2342493449____hygCtx___hyg_2_();
return v_res_4586_;
}
}
static lean_object* _init_l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Extension_3226070615____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4592_; lean_object* v___x_4593_; lean_object* v___x_4594_; 
v___x_4592_ = lean_unsigned_to_nat(3226070615u);
v___x_4593_ = lean_obj_once(&l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__16_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2_, &l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__16_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__16_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2_);
v___x_4594_ = l_Lean_Name_num___override(v___x_4593_, v___x_4592_);
return v___x_4594_;
}
}
static lean_object* _init_l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__4_00___x40_Lean_Parser_Extension_3226070615____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4595_; lean_object* v___x_4596_; lean_object* v___x_4597_; 
v___x_4595_ = ((lean_object*)(l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__18_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2_));
v___x_4596_ = lean_obj_once(&l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Extension_3226070615____hygCtx___hyg_2_, &l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Extension_3226070615____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Extension_3226070615____hygCtx___hyg_2_);
v___x_4597_ = l_Lean_Name_str___override(v___x_4596_, v___x_4595_);
return v___x_4597_;
}
}
static lean_object* _init_l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__5_00___x40_Lean_Parser_Extension_3226070615____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4598_; lean_object* v___x_4599_; lean_object* v___x_4600_; 
v___x_4598_ = ((lean_object*)(l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__20_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2_));
v___x_4599_ = lean_obj_once(&l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__4_00___x40_Lean_Parser_Extension_3226070615____hygCtx___hyg_2_, &l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__4_00___x40_Lean_Parser_Extension_3226070615____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__4_00___x40_Lean_Parser_Extension_3226070615____hygCtx___hyg_2_);
v___x_4600_ = l_Lean_Name_str___override(v___x_4599_, v___x_4598_);
return v___x_4600_;
}
}
static lean_object* _init_l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__6_00___x40_Lean_Parser_Extension_3226070615____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4601_; lean_object* v___x_4602_; lean_object* v___x_4603_; 
v___x_4601_ = lean_unsigned_to_nat(2u);
v___x_4602_ = lean_obj_once(&l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__5_00___x40_Lean_Parser_Extension_3226070615____hygCtx___hyg_2_, &l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__5_00___x40_Lean_Parser_Extension_3226070615____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__5_00___x40_Lean_Parser_Extension_3226070615____hygCtx___hyg_2_);
v___x_4603_ = l_Lean_Name_num___override(v___x_4602_, v___x_4601_);
return v___x_4603_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn_00___x40_Lean_Parser_Extension_3226070615____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_4605_; lean_object* v___x_4606_; lean_object* v___x_4607_; lean_object* v___x_4608_; 
v___x_4605_ = ((lean_object*)(l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__1_00___x40_Lean_Parser_Extension_3226070615____hygCtx___hyg_2_));
v___x_4606_ = ((lean_object*)(l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Extension_3226070615____hygCtx___hyg_2_));
v___x_4607_ = lean_obj_once(&l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__6_00___x40_Lean_Parser_Extension_3226070615____hygCtx___hyg_2_, &l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__6_00___x40_Lean_Parser_Extension_3226070615____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__6_00___x40_Lean_Parser_Extension_3226070615____hygCtx___hyg_2_);
v___x_4608_ = l_Lean_Parser_registerBuiltinDynamicParserAttribute(v___x_4605_, v___x_4606_, v___x_4607_);
return v___x_4608_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn_00___x40_Lean_Parser_Extension_3226070615____hygCtx___hyg_2____boxed(lean_object* v_a_4609_){
_start:
{
lean_object* v_res_4610_; 
v_res_4610_ = l___private_Lean_Parser_Extension_0__Lean_Parser_initFn_00___x40_Lean_Parser_Extension_3226070615____hygCtx___hyg_2_();
return v_res_4610_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_commandParser(lean_object* v_rbp_4611_){
_start:
{
lean_object* v___x_4612_; lean_object* v___x_4613_; 
v___x_4612_ = ((lean_object*)(l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Extension_3226070615____hygCtx___hyg_2_));
v___x_4613_ = l_Lean_Parser_categoryParser(v___x_4612_, v_rbp_4611_);
return v___x_4613_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00__private_Lean_Parser_Extension_0__Lean_Parser_withNamespaces_spec__0(uint8_t v_addOpenSimple_4614_, lean_object* v_x_4615_, lean_object* v_x_4616_){
_start:
{
if (lean_obj_tag(v_x_4616_) == 0)
{
return v_x_4615_;
}
else
{
lean_object* v_head_4617_; lean_object* v_tail_4618_; lean_object* v___x_4620_; uint8_t v_isShared_4621_; uint8_t v_isSharedCheck_4641_; 
v_head_4617_ = lean_ctor_get(v_x_4616_, 0);
v_tail_4618_ = lean_ctor_get(v_x_4616_, 1);
v_isSharedCheck_4641_ = !lean_is_exclusive(v_x_4616_);
if (v_isSharedCheck_4641_ == 0)
{
v___x_4620_ = v_x_4616_;
v_isShared_4621_ = v_isSharedCheck_4641_;
goto v_resetjp_4619_;
}
else
{
lean_inc(v_tail_4618_);
lean_inc(v_head_4617_);
lean_dec(v_x_4616_);
v___x_4620_ = lean_box(0);
v_isShared_4621_ = v_isSharedCheck_4641_;
goto v_resetjp_4619_;
}
v_resetjp_4619_:
{
lean_object* v_fst_4622_; lean_object* v_snd_4623_; lean_object* v___x_4625_; uint8_t v_isShared_4626_; uint8_t v_isSharedCheck_4640_; 
v_fst_4622_ = lean_ctor_get(v_x_4615_, 0);
v_snd_4623_ = lean_ctor_get(v_x_4615_, 1);
v_isSharedCheck_4640_ = !lean_is_exclusive(v_x_4615_);
if (v_isSharedCheck_4640_ == 0)
{
v___x_4625_ = v_x_4615_;
v_isShared_4626_ = v_isSharedCheck_4640_;
goto v_resetjp_4624_;
}
else
{
lean_inc(v_snd_4623_);
lean_inc(v_fst_4622_);
lean_dec(v_x_4615_);
v___x_4625_ = lean_box(0);
v_isShared_4626_ = v_isSharedCheck_4640_;
goto v_resetjp_4624_;
}
v_resetjp_4624_:
{
lean_object* v___y_4628_; 
if (v_addOpenSimple_4614_ == 0)
{
lean_del_object(v___x_4620_);
v___y_4628_ = v_snd_4623_;
goto v___jp_4627_;
}
else
{
lean_object* v___x_4635_; lean_object* v___x_4636_; lean_object* v___x_4638_; 
v___x_4635_ = lean_box(0);
lean_inc(v_head_4617_);
v___x_4636_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4636_, 0, v_head_4617_);
lean_ctor_set(v___x_4636_, 1, v___x_4635_);
if (v_isShared_4621_ == 0)
{
lean_ctor_set(v___x_4620_, 1, v_snd_4623_);
lean_ctor_set(v___x_4620_, 0, v___x_4636_);
v___x_4638_ = v___x_4620_;
goto v_reusejp_4637_;
}
else
{
lean_object* v_reuseFailAlloc_4639_; 
v_reuseFailAlloc_4639_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4639_, 0, v___x_4636_);
lean_ctor_set(v_reuseFailAlloc_4639_, 1, v_snd_4623_);
v___x_4638_ = v_reuseFailAlloc_4639_;
goto v_reusejp_4637_;
}
v_reusejp_4637_:
{
v___y_4628_ = v___x_4638_;
goto v___jp_4627_;
}
}
v___jp_4627_:
{
lean_object* v___x_4629_; lean_object* v_env_4630_; lean_object* v___x_4632_; 
v___x_4629_ = l_Lean_Parser_parserExtension;
v_env_4630_ = l_Lean_ScopedEnvExtension_activateScoped___redArg(v___x_4629_, v_fst_4622_, v_head_4617_);
if (v_isShared_4626_ == 0)
{
lean_ctor_set(v___x_4625_, 1, v___y_4628_);
lean_ctor_set(v___x_4625_, 0, v_env_4630_);
v___x_4632_ = v___x_4625_;
goto v_reusejp_4631_;
}
else
{
lean_object* v_reuseFailAlloc_4634_; 
v_reuseFailAlloc_4634_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4634_, 0, v_env_4630_);
lean_ctor_set(v_reuseFailAlloc_4634_, 1, v___y_4628_);
v___x_4632_ = v_reuseFailAlloc_4634_;
goto v_reusejp_4631_;
}
v_reusejp_4631_:
{
v_x_4615_ = v___x_4632_;
v_x_4616_ = v_tail_4618_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00__private_Lean_Parser_Extension_0__Lean_Parser_withNamespaces_spec__0___boxed(lean_object* v_addOpenSimple_4642_, lean_object* v_x_4643_, lean_object* v_x_4644_){
_start:
{
uint8_t v_addOpenSimple_boxed_4645_; lean_object* v_res_4646_; 
v_addOpenSimple_boxed_4645_ = lean_unbox(v_addOpenSimple_4642_);
v_res_4646_ = l_List_foldl___at___00__private_Lean_Parser_Extension_0__Lean_Parser_withNamespaces_spec__0(v_addOpenSimple_boxed_4645_, v_x_4643_, v_x_4644_);
return v_res_4646_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Parser_Extension_0__Lean_Parser_withNamespaces_spec__1(uint8_t v_addOpenSimple_4647_, lean_object* v_as_4648_, size_t v_i_4649_, size_t v_stop_4650_, lean_object* v_b_4651_){
_start:
{
uint8_t v___x_4652_; 
v___x_4652_ = lean_usize_dec_eq(v_i_4649_, v_stop_4650_);
if (v___x_4652_ == 0)
{
lean_object* v_toParserModuleContext_4653_; lean_object* v_toInputContext_4654_; lean_object* v_toCacheableParserContext_4655_; lean_object* v_tokens_4656_; lean_object* v___x_4658_; uint8_t v_isShared_4659_; uint8_t v_isSharedCheck_4683_; 
v_toParserModuleContext_4653_ = lean_ctor_get(v_b_4651_, 1);
v_toInputContext_4654_ = lean_ctor_get(v_b_4651_, 0);
v_toCacheableParserContext_4655_ = lean_ctor_get(v_b_4651_, 2);
v_tokens_4656_ = lean_ctor_get(v_b_4651_, 3);
v_isSharedCheck_4683_ = !lean_is_exclusive(v_b_4651_);
if (v_isSharedCheck_4683_ == 0)
{
v___x_4658_ = v_b_4651_;
v_isShared_4659_ = v_isSharedCheck_4683_;
goto v_resetjp_4657_;
}
else
{
lean_inc(v_tokens_4656_);
lean_inc(v_toCacheableParserContext_4655_);
lean_inc(v_toParserModuleContext_4653_);
lean_inc(v_toInputContext_4654_);
lean_dec(v_b_4651_);
v___x_4658_ = lean_box(0);
v_isShared_4659_ = v_isSharedCheck_4683_;
goto v_resetjp_4657_;
}
v_resetjp_4657_:
{
lean_object* v_env_4660_; lean_object* v_options_4661_; lean_object* v_currNamespace_4662_; lean_object* v_openDecls_4663_; lean_object* v___x_4665_; uint8_t v_isShared_4666_; uint8_t v_isSharedCheck_4682_; 
v_env_4660_ = lean_ctor_get(v_toParserModuleContext_4653_, 0);
v_options_4661_ = lean_ctor_get(v_toParserModuleContext_4653_, 1);
v_currNamespace_4662_ = lean_ctor_get(v_toParserModuleContext_4653_, 2);
v_openDecls_4663_ = lean_ctor_get(v_toParserModuleContext_4653_, 3);
v_isSharedCheck_4682_ = !lean_is_exclusive(v_toParserModuleContext_4653_);
if (v_isSharedCheck_4682_ == 0)
{
v___x_4665_ = v_toParserModuleContext_4653_;
v_isShared_4666_ = v_isSharedCheck_4682_;
goto v_resetjp_4664_;
}
else
{
lean_inc(v_openDecls_4663_);
lean_inc(v_currNamespace_4662_);
lean_inc(v_options_4661_);
lean_inc(v_env_4660_);
lean_dec(v_toParserModuleContext_4653_);
v___x_4665_ = lean_box(0);
v_isShared_4666_ = v_isSharedCheck_4682_;
goto v_resetjp_4664_;
}
v_resetjp_4664_:
{
lean_object* v___x_4667_; lean_object* v_nss_4668_; lean_object* v___x_4669_; lean_object* v___x_4670_; lean_object* v_fst_4671_; lean_object* v_snd_4672_; lean_object* v___x_4674_; 
v___x_4667_ = lean_array_uget_borrowed(v_as_4648_, v_i_4649_);
lean_inc(v___x_4667_);
lean_inc(v_openDecls_4663_);
lean_inc(v_currNamespace_4662_);
lean_inc_ref(v_env_4660_);
v_nss_4668_ = l_Lean_ResolveName_resolveNamespace(v_env_4660_, v_currNamespace_4662_, v_openDecls_4663_, v___x_4667_);
v___x_4669_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4669_, 0, v_env_4660_);
lean_ctor_set(v___x_4669_, 1, v_openDecls_4663_);
v___x_4670_ = l_List_foldl___at___00__private_Lean_Parser_Extension_0__Lean_Parser_withNamespaces_spec__0(v_addOpenSimple_4647_, v___x_4669_, v_nss_4668_);
v_fst_4671_ = lean_ctor_get(v___x_4670_, 0);
lean_inc(v_fst_4671_);
v_snd_4672_ = lean_ctor_get(v___x_4670_, 1);
lean_inc(v_snd_4672_);
lean_dec_ref(v___x_4670_);
if (v_isShared_4666_ == 0)
{
lean_ctor_set(v___x_4665_, 3, v_snd_4672_);
lean_ctor_set(v___x_4665_, 0, v_fst_4671_);
v___x_4674_ = v___x_4665_;
goto v_reusejp_4673_;
}
else
{
lean_object* v_reuseFailAlloc_4681_; 
v_reuseFailAlloc_4681_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_4681_, 0, v_fst_4671_);
lean_ctor_set(v_reuseFailAlloc_4681_, 1, v_options_4661_);
lean_ctor_set(v_reuseFailAlloc_4681_, 2, v_currNamespace_4662_);
lean_ctor_set(v_reuseFailAlloc_4681_, 3, v_snd_4672_);
v___x_4674_ = v_reuseFailAlloc_4681_;
goto v_reusejp_4673_;
}
v_reusejp_4673_:
{
lean_object* v___x_4676_; 
if (v_isShared_4659_ == 0)
{
lean_ctor_set(v___x_4658_, 1, v___x_4674_);
v___x_4676_ = v___x_4658_;
goto v_reusejp_4675_;
}
else
{
lean_object* v_reuseFailAlloc_4680_; 
v_reuseFailAlloc_4680_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_4680_, 0, v_toInputContext_4654_);
lean_ctor_set(v_reuseFailAlloc_4680_, 1, v___x_4674_);
lean_ctor_set(v_reuseFailAlloc_4680_, 2, v_toCacheableParserContext_4655_);
lean_ctor_set(v_reuseFailAlloc_4680_, 3, v_tokens_4656_);
v___x_4676_ = v_reuseFailAlloc_4680_;
goto v_reusejp_4675_;
}
v_reusejp_4675_:
{
size_t v___x_4677_; size_t v___x_4678_; 
v___x_4677_ = ((size_t)1ULL);
v___x_4678_ = lean_usize_add(v_i_4649_, v___x_4677_);
v_i_4649_ = v___x_4678_;
v_b_4651_ = v___x_4676_;
goto _start;
}
}
}
}
}
else
{
return v_b_4651_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Parser_Extension_0__Lean_Parser_withNamespaces_spec__1___boxed(lean_object* v_addOpenSimple_4684_, lean_object* v_as_4685_, lean_object* v_i_4686_, lean_object* v_stop_4687_, lean_object* v_b_4688_){
_start:
{
uint8_t v_addOpenSimple_boxed_4689_; size_t v_i_boxed_4690_; size_t v_stop_boxed_4691_; lean_object* v_res_4692_; 
v_addOpenSimple_boxed_4689_ = lean_unbox(v_addOpenSimple_4684_);
v_i_boxed_4690_ = lean_unbox_usize(v_i_4686_);
lean_dec(v_i_4686_);
v_stop_boxed_4691_ = lean_unbox_usize(v_stop_4687_);
lean_dec(v_stop_4687_);
v_res_4692_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Parser_Extension_0__Lean_Parser_withNamespaces_spec__1(v_addOpenSimple_boxed_4689_, v_as_4685_, v_i_boxed_4690_, v_stop_boxed_4691_, v_b_4688_);
lean_dec_ref(v_as_4685_);
return v_res_4692_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_withNamespaces___lam__0(lean_object* v___x_4693_, lean_object* v_ids_4694_, uint8_t v_addOpenSimple_4695_, lean_object* v_c_4696_){
_start:
{
lean_object* v___y_4698_; lean_object* v___x_4717_; lean_object* v___x_4718_; uint8_t v___x_4719_; 
v___x_4717_ = lean_unsigned_to_nat(0u);
v___x_4718_ = lean_array_get_size(v_ids_4694_);
v___x_4719_ = lean_nat_dec_lt(v___x_4717_, v___x_4718_);
if (v___x_4719_ == 0)
{
v___y_4698_ = v_c_4696_;
goto v___jp_4697_;
}
else
{
uint8_t v___x_4720_; 
v___x_4720_ = lean_nat_dec_le(v___x_4718_, v___x_4718_);
if (v___x_4720_ == 0)
{
if (v___x_4719_ == 0)
{
v___y_4698_ = v_c_4696_;
goto v___jp_4697_;
}
else
{
size_t v___x_4721_; size_t v___x_4722_; lean_object* v___x_4723_; 
v___x_4721_ = ((size_t)0ULL);
v___x_4722_ = lean_usize_of_nat(v___x_4718_);
v___x_4723_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Parser_Extension_0__Lean_Parser_withNamespaces_spec__1(v_addOpenSimple_4695_, v_ids_4694_, v___x_4721_, v___x_4722_, v_c_4696_);
v___y_4698_ = v___x_4723_;
goto v___jp_4697_;
}
}
else
{
size_t v___x_4724_; size_t v___x_4725_; lean_object* v___x_4726_; 
v___x_4724_ = ((size_t)0ULL);
v___x_4725_ = lean_usize_of_nat(v___x_4718_);
v___x_4726_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Parser_Extension_0__Lean_Parser_withNamespaces_spec__1(v_addOpenSimple_4695_, v_ids_4694_, v___x_4724_, v___x_4725_, v_c_4696_);
v___y_4698_ = v___x_4726_;
goto v___jp_4697_;
}
}
v___jp_4697_:
{
lean_object* v_toParserModuleContext_4699_; lean_object* v_toInputContext_4700_; lean_object* v_toCacheableParserContext_4701_; lean_object* v___x_4703_; uint8_t v_isShared_4704_; uint8_t v_isSharedCheck_4715_; 
v_toParserModuleContext_4699_ = lean_ctor_get(v___y_4698_, 1);
v_toInputContext_4700_ = lean_ctor_get(v___y_4698_, 0);
v_toCacheableParserContext_4701_ = lean_ctor_get(v___y_4698_, 2);
v_isSharedCheck_4715_ = !lean_is_exclusive(v___y_4698_);
if (v_isSharedCheck_4715_ == 0)
{
lean_object* v_unused_4716_; 
v_unused_4716_ = lean_ctor_get(v___y_4698_, 3);
lean_dec(v_unused_4716_);
v___x_4703_ = v___y_4698_;
v_isShared_4704_ = v_isSharedCheck_4715_;
goto v_resetjp_4702_;
}
else
{
lean_inc(v_toCacheableParserContext_4701_);
lean_inc(v_toParserModuleContext_4699_);
lean_inc(v_toInputContext_4700_);
lean_dec(v___y_4698_);
v___x_4703_ = lean_box(0);
v_isShared_4704_ = v_isSharedCheck_4715_;
goto v_resetjp_4702_;
}
v_resetjp_4702_:
{
lean_object* v_env_4705_; lean_object* v___x_4706_; lean_object* v_ext_4707_; lean_object* v_toEnvExtension_4708_; lean_object* v_asyncMode_4709_; lean_object* v___x_4710_; lean_object* v_tokens_4711_; lean_object* v___x_4713_; 
v_env_4705_ = lean_ctor_get(v_toParserModuleContext_4699_, 0);
v___x_4706_ = l_Lean_Parser_parserExtension;
v_ext_4707_ = lean_ctor_get(v___x_4706_, 1);
v_toEnvExtension_4708_ = lean_ctor_get(v_ext_4707_, 0);
v_asyncMode_4709_ = lean_ctor_get(v_toEnvExtension_4708_, 2);
lean_inc_ref(v_env_4705_);
v___x_4710_ = l_Lean_ScopedEnvExtension_getState___redArg(v___x_4693_, v___x_4706_, v_env_4705_, v_asyncMode_4709_);
v_tokens_4711_ = lean_ctor_get(v___x_4710_, 0);
lean_inc_ref(v_tokens_4711_);
lean_dec(v___x_4710_);
if (v_isShared_4704_ == 0)
{
lean_ctor_set(v___x_4703_, 3, v_tokens_4711_);
v___x_4713_ = v___x_4703_;
goto v_reusejp_4712_;
}
else
{
lean_object* v_reuseFailAlloc_4714_; 
v_reuseFailAlloc_4714_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_4714_, 0, v_toInputContext_4700_);
lean_ctor_set(v_reuseFailAlloc_4714_, 1, v_toParserModuleContext_4699_);
lean_ctor_set(v_reuseFailAlloc_4714_, 2, v_toCacheableParserContext_4701_);
lean_ctor_set(v_reuseFailAlloc_4714_, 3, v_tokens_4711_);
v___x_4713_ = v_reuseFailAlloc_4714_;
goto v_reusejp_4712_;
}
v_reusejp_4712_:
{
return v___x_4713_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_withNamespaces___lam__0___boxed(lean_object* v___x_4727_, lean_object* v_ids_4728_, lean_object* v_addOpenSimple_4729_, lean_object* v_c_4730_){
_start:
{
uint8_t v_addOpenSimple_boxed_4731_; lean_object* v_res_4732_; 
v_addOpenSimple_boxed_4731_ = lean_unbox(v_addOpenSimple_4729_);
v_res_4732_ = l___private_Lean_Parser_Extension_0__Lean_Parser_withNamespaces___lam__0(v___x_4727_, v_ids_4728_, v_addOpenSimple_boxed_4731_, v_c_4730_);
lean_dec_ref(v_ids_4728_);
lean_dec_ref(v___x_4727_);
return v_res_4732_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_withNamespaces(lean_object* v_ids_4733_, uint8_t v_addOpenSimple_4734_, lean_object* v_p_4735_, lean_object* v_a_4736_, lean_object* v_a_4737_){
_start:
{
lean_object* v___x_4738_; lean_object* v___x_4739_; lean_object* v___f_4740_; lean_object* v___x_4741_; 
v___x_4738_ = l_Lean_Parser_ParserExtension_instInhabitedState_default;
v___x_4739_ = lean_box(v_addOpenSimple_4734_);
v___f_4740_ = lean_alloc_closure((void*)(l___private_Lean_Parser_Extension_0__Lean_Parser_withNamespaces___lam__0___boxed), 4, 3);
lean_closure_set(v___f_4740_, 0, v___x_4738_);
lean_closure_set(v___f_4740_, 1, v_ids_4733_);
lean_closure_set(v___f_4740_, 2, v___x_4739_);
v___x_4741_ = l_Lean_Parser_adaptUncacheableContextFn(v___f_4740_, v_p_4735_, v_a_4736_, v_a_4737_);
return v___x_4741_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_withNamespaces___boxed(lean_object* v_ids_4742_, lean_object* v_addOpenSimple_4743_, lean_object* v_p_4744_, lean_object* v_a_4745_, lean_object* v_a_4746_){
_start:
{
uint8_t v_addOpenSimple_boxed_4747_; lean_object* v_res_4748_; 
v_addOpenSimple_boxed_4747_ = lean_unbox(v_addOpenSimple_4743_);
v_res_4748_ = l___private_Lean_Parser_Extension_0__Lean_Parser_withNamespaces(v_ids_4742_, v_addOpenSimple_boxed_4747_, v_p_4744_, v_a_4745_, v_a_4746_);
return v_res_4748_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Parser_withOpenDeclFnCore_spec__0(size_t v_sz_4749_, size_t v_i_4750_, lean_object* v_bs_4751_){
_start:
{
uint8_t v___x_4752_; 
v___x_4752_ = lean_usize_dec_lt(v_i_4750_, v_sz_4749_);
if (v___x_4752_ == 0)
{
lean_object* v___x_4753_; 
v___x_4753_ = l_unsafeCast___redArg(v_bs_4751_);
lean_dec_ref(v_bs_4751_);
return v___x_4753_;
}
else
{
lean_object* v_v_4754_; lean_object* v___x_4755_; lean_object* v_bs_x27_4756_; lean_object* v___x_4757_; lean_object* v___x_4758_; size_t v___x_4759_; size_t v___x_4760_; lean_object* v___x_4761_; lean_object* v___x_4762_; 
v_v_4754_ = lean_array_uget(v_bs_4751_, v_i_4750_);
v___x_4755_ = lean_unsigned_to_nat(0u);
v_bs_x27_4756_ = lean_array_uset(v_bs_4751_, v_i_4750_, v___x_4755_);
v___x_4757_ = l_unsafeCast___redArg(v_v_4754_);
lean_dec(v_v_4754_);
v___x_4758_ = l_Lean_Syntax_getId(v___x_4757_);
lean_dec(v___x_4757_);
v___x_4759_ = ((size_t)1ULL);
v___x_4760_ = lean_usize_add(v_i_4750_, v___x_4759_);
v___x_4761_ = l_unsafeCast___redArg(v___x_4758_);
lean_dec(v___x_4758_);
v___x_4762_ = lean_array_uset(v_bs_x27_4756_, v_i_4750_, v___x_4761_);
v_i_4750_ = v___x_4760_;
v_bs_4751_ = v___x_4762_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Parser_withOpenDeclFnCore_spec__0___boxed(lean_object* v_sz_4764_, lean_object* v_i_4765_, lean_object* v_bs_4766_){
_start:
{
size_t v_sz_boxed_4767_; size_t v_i_boxed_4768_; lean_object* v_res_4769_; 
v_sz_boxed_4767_ = lean_unbox_usize(v_sz_4764_);
lean_dec(v_sz_4764_);
v_i_boxed_4768_ = lean_unbox_usize(v_i_4765_);
lean_dec(v_i_4765_);
v_res_4769_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Parser_withOpenDeclFnCore_spec__0(v_sz_boxed_4767_, v_i_boxed_4768_, v_bs_4766_);
return v_res_4769_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withOpenDeclFnCore(lean_object* v_openDeclStx_4783_, lean_object* v_p_4784_, lean_object* v_c_4785_, lean_object* v_s_4786_){
_start:
{
lean_object* v___x_4787_; lean_object* v___x_4788_; uint8_t v___x_4789_; 
lean_inc(v_openDeclStx_4783_);
v___x_4787_ = l_Lean_Syntax_getKind(v_openDeclStx_4783_);
v___x_4788_ = ((lean_object*)(l_Lean_Parser_withOpenDeclFnCore___closed__2));
v___x_4789_ = lean_name_eq(v___x_4787_, v___x_4788_);
if (v___x_4789_ == 0)
{
lean_object* v___x_4790_; uint8_t v___x_4791_; 
v___x_4790_ = ((lean_object*)(l_Lean_Parser_withOpenDeclFnCore___closed__4));
v___x_4791_ = lean_name_eq(v___x_4787_, v___x_4790_);
lean_dec(v___x_4787_);
if (v___x_4791_ == 0)
{
lean_object* v___x_4792_; 
lean_dec(v_openDeclStx_4783_);
v___x_4792_ = lean_apply_2(v_p_4784_, v_c_4785_, v_s_4786_);
return v___x_4792_;
}
else
{
lean_object* v___x_4793_; lean_object* v___x_4794_; lean_object* v___x_4795_; size_t v_sz_4796_; size_t v___x_4797_; lean_object* v___x_4798_; lean_object* v___x_4799_; lean_object* v___x_4800_; lean_object* v___x_4801_; 
v___x_4793_ = lean_unsigned_to_nat(1u);
v___x_4794_ = l_Lean_Syntax_getArg(v_openDeclStx_4783_, v___x_4793_);
lean_dec(v_openDeclStx_4783_);
v___x_4795_ = l_Lean_Syntax_getArgs(v___x_4794_);
lean_dec(v___x_4794_);
v_sz_4796_ = lean_array_size(v___x_4795_);
v___x_4797_ = ((size_t)0ULL);
v___x_4798_ = l_unsafeCast___redArg(v___x_4795_);
lean_dec_ref(v___x_4795_);
v___x_4799_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Parser_withOpenDeclFnCore_spec__0(v_sz_4796_, v___x_4797_, v___x_4798_);
v___x_4800_ = l_unsafeCast___redArg(v___x_4799_);
lean_dec_ref(v___x_4799_);
v___x_4801_ = l___private_Lean_Parser_Extension_0__Lean_Parser_withNamespaces(v___x_4800_, v___x_4789_, v_p_4784_, v_c_4785_, v_s_4786_);
return v___x_4801_;
}
}
else
{
lean_object* v___x_4802_; lean_object* v___x_4803_; lean_object* v___x_4804_; size_t v_sz_4805_; size_t v___x_4806_; lean_object* v___x_4807_; lean_object* v___x_4808_; lean_object* v___x_4809_; lean_object* v___x_4810_; 
lean_dec(v___x_4787_);
v___x_4802_ = lean_unsigned_to_nat(0u);
v___x_4803_ = l_Lean_Syntax_getArg(v_openDeclStx_4783_, v___x_4802_);
lean_dec(v_openDeclStx_4783_);
v___x_4804_ = l_Lean_Syntax_getArgs(v___x_4803_);
lean_dec(v___x_4803_);
v_sz_4805_ = lean_array_size(v___x_4804_);
v___x_4806_ = ((size_t)0ULL);
v___x_4807_ = l_unsafeCast___redArg(v___x_4804_);
lean_dec_ref(v___x_4804_);
v___x_4808_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Parser_withOpenDeclFnCore_spec__0(v_sz_4805_, v___x_4806_, v___x_4807_);
v___x_4809_ = l_unsafeCast___redArg(v___x_4808_);
lean_dec_ref(v___x_4808_);
v___x_4810_ = l___private_Lean_Parser_Extension_0__Lean_Parser_withNamespaces(v___x_4809_, v___x_4789_, v_p_4784_, v_c_4785_, v_s_4786_);
return v___x_4810_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withOpenFn(lean_object* v_p_4817_, lean_object* v_c_4818_, lean_object* v_s_4819_){
_start:
{
lean_object* v_stxStack_4820_; lean_object* v___x_4821_; lean_object* v___x_4822_; uint8_t v___x_4823_; 
v_stxStack_4820_ = lean_ctor_get(v_s_4819_, 0);
v___x_4821_ = lean_unsigned_to_nat(0u);
v___x_4822_ = l_Lean_Parser_SyntaxStack_size(v_stxStack_4820_);
v___x_4823_ = lean_nat_dec_lt(v___x_4821_, v___x_4822_);
lean_dec(v___x_4822_);
if (v___x_4823_ == 0)
{
lean_object* v___x_4824_; 
v___x_4824_ = lean_apply_2(v_p_4817_, v_c_4818_, v_s_4819_);
return v___x_4824_;
}
else
{
lean_object* v_stx_4825_; lean_object* v___x_4826_; lean_object* v___x_4827_; uint8_t v___x_4828_; 
v_stx_4825_ = l_Lean_Parser_SyntaxStack_back(v_stxStack_4820_);
lean_inc(v_stx_4825_);
v___x_4826_ = l_Lean_Syntax_getKind(v_stx_4825_);
v___x_4827_ = ((lean_object*)(l_Lean_Parser_withOpenFn___closed__1));
v___x_4828_ = lean_name_eq(v___x_4826_, v___x_4827_);
lean_dec(v___x_4826_);
if (v___x_4828_ == 0)
{
lean_object* v___x_4829_; 
lean_dec(v_stx_4825_);
v___x_4829_ = lean_apply_2(v_p_4817_, v_c_4818_, v_s_4819_);
return v___x_4829_;
}
else
{
lean_object* v___x_4830_; lean_object* v___x_4831_; lean_object* v___x_4832_; 
v___x_4830_ = lean_unsigned_to_nat(1u);
v___x_4831_ = l_Lean_Syntax_getArg(v_stx_4825_, v___x_4830_);
lean_dec(v_stx_4825_);
v___x_4832_ = l_Lean_Parser_withOpenDeclFnCore(v___x_4831_, v_p_4817_, v_c_4818_, v_s_4819_);
return v___x_4832_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withOpen(lean_object* v_p_4833_){
_start:
{
lean_object* v_info_4834_; lean_object* v_fn_4835_; lean_object* v___x_4837_; uint8_t v_isShared_4838_; uint8_t v_isSharedCheck_4843_; 
v_info_4834_ = lean_ctor_get(v_p_4833_, 0);
v_fn_4835_ = lean_ctor_get(v_p_4833_, 1);
v_isSharedCheck_4843_ = !lean_is_exclusive(v_p_4833_);
if (v_isSharedCheck_4843_ == 0)
{
v___x_4837_ = v_p_4833_;
v_isShared_4838_ = v_isSharedCheck_4843_;
goto v_resetjp_4836_;
}
else
{
lean_inc(v_fn_4835_);
lean_inc(v_info_4834_);
lean_dec(v_p_4833_);
v___x_4837_ = lean_box(0);
v_isShared_4838_ = v_isSharedCheck_4843_;
goto v_resetjp_4836_;
}
v_resetjp_4836_:
{
lean_object* v___x_4839_; lean_object* v___x_4841_; 
v___x_4839_ = lean_alloc_closure((void*)(l_Lean_Parser_withOpenFn), 3, 1);
lean_closure_set(v___x_4839_, 0, v_fn_4835_);
if (v_isShared_4838_ == 0)
{
lean_ctor_set(v___x_4837_, 1, v___x_4839_);
v___x_4841_ = v___x_4837_;
goto v_reusejp_4840_;
}
else
{
lean_object* v_reuseFailAlloc_4842_; 
v_reuseFailAlloc_4842_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4842_, 0, v_info_4834_);
lean_ctor_set(v_reuseFailAlloc_4842_, 1, v___x_4839_);
v___x_4841_ = v_reuseFailAlloc_4842_;
goto v_reusejp_4840_;
}
v_reusejp_4840_:
{
return v___x_4841_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withOpenDeclFn(lean_object* v_p_4844_, lean_object* v_c_4845_, lean_object* v_s_4846_){
_start:
{
lean_object* v_stxStack_4847_; lean_object* v___x_4848_; lean_object* v___x_4849_; uint8_t v___x_4850_; 
v_stxStack_4847_ = lean_ctor_get(v_s_4846_, 0);
v___x_4848_ = lean_unsigned_to_nat(0u);
v___x_4849_ = l_Lean_Parser_SyntaxStack_size(v_stxStack_4847_);
v___x_4850_ = lean_nat_dec_lt(v___x_4848_, v___x_4849_);
lean_dec(v___x_4849_);
if (v___x_4850_ == 0)
{
lean_object* v___x_4851_; 
v___x_4851_ = lean_apply_2(v_p_4844_, v_c_4845_, v_s_4846_);
return v___x_4851_;
}
else
{
lean_object* v_stx_4852_; lean_object* v___x_4853_; 
v_stx_4852_ = l_Lean_Parser_SyntaxStack_back(v_stxStack_4847_);
v___x_4853_ = l_Lean_Parser_withOpenDeclFnCore(v_stx_4852_, v_p_4844_, v_c_4845_, v_s_4846_);
return v___x_4853_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withOpenDecl(lean_object* v_p_4854_){
_start:
{
lean_object* v_info_4855_; lean_object* v_fn_4856_; lean_object* v___x_4858_; uint8_t v_isShared_4859_; uint8_t v_isSharedCheck_4864_; 
v_info_4855_ = lean_ctor_get(v_p_4854_, 0);
v_fn_4856_ = lean_ctor_get(v_p_4854_, 1);
v_isSharedCheck_4864_ = !lean_is_exclusive(v_p_4854_);
if (v_isSharedCheck_4864_ == 0)
{
v___x_4858_ = v_p_4854_;
v_isShared_4859_ = v_isSharedCheck_4864_;
goto v_resetjp_4857_;
}
else
{
lean_inc(v_fn_4856_);
lean_inc(v_info_4855_);
lean_dec(v_p_4854_);
v___x_4858_ = lean_box(0);
v_isShared_4859_ = v_isSharedCheck_4864_;
goto v_resetjp_4857_;
}
v_resetjp_4857_:
{
lean_object* v___x_4860_; lean_object* v___x_4862_; 
v___x_4860_ = lean_alloc_closure((void*)(l_Lean_Parser_withOpenDeclFn), 3, 1);
lean_closure_set(v___x_4860_, 0, v_fn_4856_);
if (v_isShared_4859_ == 0)
{
lean_ctor_set(v___x_4858_, 1, v___x_4860_);
v___x_4862_ = v___x_4858_;
goto v_reusejp_4861_;
}
else
{
lean_object* v_reuseFailAlloc_4863_; 
v_reuseFailAlloc_4863_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4863_, 0, v_info_4855_);
lean_ctor_set(v_reuseFailAlloc_4863_, 1, v___x_4860_);
v___x_4862_ = v_reuseFailAlloc_4863_;
goto v_reusejp_4861_;
}
v_reusejp_4861_:
{
return v___x_4862_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_optionValueToDataValue_x3f(lean_object* v_val_4871_){
_start:
{
lean_object* v___x_4879_; 
v___x_4879_ = l_Lean_Syntax_isStrLit_x3f(v_val_4871_);
if (lean_obj_tag(v___x_4879_) == 1)
{
lean_object* v_val_4880_; lean_object* v___x_4882_; uint8_t v_isShared_4883_; uint8_t v_isSharedCheck_4888_; 
v_val_4880_ = lean_ctor_get(v___x_4879_, 0);
v_isSharedCheck_4888_ = !lean_is_exclusive(v___x_4879_);
if (v_isSharedCheck_4888_ == 0)
{
v___x_4882_ = v___x_4879_;
v_isShared_4883_ = v_isSharedCheck_4888_;
goto v_resetjp_4881_;
}
else
{
lean_inc(v_val_4880_);
lean_dec(v___x_4879_);
v___x_4882_ = lean_box(0);
v_isShared_4883_ = v_isSharedCheck_4888_;
goto v_resetjp_4881_;
}
v_resetjp_4881_:
{
lean_object* v___x_4884_; lean_object* v___x_4886_; 
v___x_4884_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4884_, 0, v_val_4880_);
if (v_isShared_4883_ == 0)
{
lean_ctor_set(v___x_4882_, 0, v___x_4884_);
v___x_4886_ = v___x_4882_;
goto v_reusejp_4885_;
}
else
{
lean_object* v_reuseFailAlloc_4887_; 
v_reuseFailAlloc_4887_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4887_, 0, v___x_4884_);
v___x_4886_ = v_reuseFailAlloc_4887_;
goto v_reusejp_4885_;
}
v_reusejp_4885_:
{
return v___x_4886_;
}
}
}
else
{
lean_object* v___x_4889_; 
lean_dec(v___x_4879_);
v___x_4889_ = l_Lean_Syntax_isNatLit_x3f(v_val_4871_);
if (lean_obj_tag(v___x_4889_) == 1)
{
lean_object* v_val_4890_; lean_object* v___x_4892_; uint8_t v_isShared_4893_; uint8_t v_isSharedCheck_4898_; 
v_val_4890_ = lean_ctor_get(v___x_4889_, 0);
v_isSharedCheck_4898_ = !lean_is_exclusive(v___x_4889_);
if (v_isSharedCheck_4898_ == 0)
{
v___x_4892_ = v___x_4889_;
v_isShared_4893_ = v_isSharedCheck_4898_;
goto v_resetjp_4891_;
}
else
{
lean_inc(v_val_4890_);
lean_dec(v___x_4889_);
v___x_4892_ = lean_box(0);
v_isShared_4893_ = v_isSharedCheck_4898_;
goto v_resetjp_4891_;
}
v_resetjp_4891_:
{
lean_object* v___x_4894_; lean_object* v___x_4896_; 
v___x_4894_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_4894_, 0, v_val_4890_);
if (v_isShared_4893_ == 0)
{
lean_ctor_set(v___x_4892_, 0, v___x_4894_);
v___x_4896_ = v___x_4892_;
goto v_reusejp_4895_;
}
else
{
lean_object* v_reuseFailAlloc_4897_; 
v_reuseFailAlloc_4897_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4897_, 0, v___x_4894_);
v___x_4896_ = v_reuseFailAlloc_4897_;
goto v_reusejp_4895_;
}
v_reusejp_4895_:
{
return v___x_4896_;
}
}
}
else
{
lean_dec(v___x_4889_);
if (lean_obj_tag(v_val_4871_) == 2)
{
lean_object* v_val_4899_; lean_object* v___x_4900_; uint8_t v___x_4901_; 
v_val_4899_ = lean_ctor_get(v_val_4871_, 1);
v___x_4900_ = ((lean_object*)(l___private_Lean_Parser_Extension_0__Lean_Parser_optionValueToDataValue_x3f___closed__3));
v___x_4901_ = lean_string_dec_eq(v_val_4899_, v___x_4900_);
if (v___x_4901_ == 0)
{
goto v___jp_4872_;
}
else
{
lean_object* v___x_4902_; lean_object* v___x_4903_; 
v___x_4902_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_4902_, 0, v___x_4901_);
v___x_4903_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4903_, 0, v___x_4902_);
return v___x_4903_;
}
}
else
{
goto v___jp_4872_;
}
}
}
v___jp_4872_:
{
if (lean_obj_tag(v_val_4871_) == 2)
{
lean_object* v_val_4873_; lean_object* v___x_4874_; uint8_t v___x_4875_; 
v_val_4873_ = lean_ctor_get(v_val_4871_, 1);
v___x_4874_ = ((lean_object*)(l___private_Lean_Parser_Extension_0__Lean_Parser_optionValueToDataValue_x3f___closed__0));
v___x_4875_ = lean_string_dec_eq(v_val_4873_, v___x_4874_);
if (v___x_4875_ == 0)
{
lean_object* v___x_4876_; 
v___x_4876_ = lean_box(0);
return v___x_4876_;
}
else
{
lean_object* v___x_4877_; 
v___x_4877_ = ((lean_object*)(l___private_Lean_Parser_Extension_0__Lean_Parser_optionValueToDataValue_x3f___closed__2));
return v___x_4877_;
}
}
else
{
lean_object* v___x_4878_; 
v___x_4878_ = lean_box(0);
return v___x_4878_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_optionValueToDataValue_x3f___boxed(lean_object* v_val_4904_){
_start:
{
lean_object* v_res_4905_; 
v_res_4905_ = l___private_Lean_Parser_Extension_0__Lean_Parser_optionValueToDataValue_x3f(v_val_4904_);
lean_dec(v_val_4904_);
return v_res_4905_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_withSetOptionValueFnCore_insertOption(lean_object* v_nameStx_4906_, lean_object* v_v_4907_, lean_object* v_c_4908_){
_start:
{
lean_object* v_toParserModuleContext_4909_; lean_object* v_toInputContext_4910_; lean_object* v_toCacheableParserContext_4911_; lean_object* v_tokens_4912_; lean_object* v___x_4914_; uint8_t v_isShared_4915_; uint8_t v_isSharedCheck_4949_; 
v_toParserModuleContext_4909_ = lean_ctor_get(v_c_4908_, 1);
v_toInputContext_4910_ = lean_ctor_get(v_c_4908_, 0);
v_toCacheableParserContext_4911_ = lean_ctor_get(v_c_4908_, 2);
v_tokens_4912_ = lean_ctor_get(v_c_4908_, 3);
v_isSharedCheck_4949_ = !lean_is_exclusive(v_c_4908_);
if (v_isSharedCheck_4949_ == 0)
{
v___x_4914_ = v_c_4908_;
v_isShared_4915_ = v_isSharedCheck_4949_;
goto v_resetjp_4913_;
}
else
{
lean_inc(v_tokens_4912_);
lean_inc(v_toCacheableParserContext_4911_);
lean_inc(v_toParserModuleContext_4909_);
lean_inc(v_toInputContext_4910_);
lean_dec(v_c_4908_);
v___x_4914_ = lean_box(0);
v_isShared_4915_ = v_isSharedCheck_4949_;
goto v_resetjp_4913_;
}
v_resetjp_4913_:
{
lean_object* v_env_4916_; lean_object* v_options_4917_; lean_object* v_currNamespace_4918_; lean_object* v_openDecls_4919_; lean_object* v___x_4921_; uint8_t v_isShared_4922_; uint8_t v_isSharedCheck_4948_; 
v_env_4916_ = lean_ctor_get(v_toParserModuleContext_4909_, 0);
v_options_4917_ = lean_ctor_get(v_toParserModuleContext_4909_, 1);
v_currNamespace_4918_ = lean_ctor_get(v_toParserModuleContext_4909_, 2);
v_openDecls_4919_ = lean_ctor_get(v_toParserModuleContext_4909_, 3);
v_isSharedCheck_4948_ = !lean_is_exclusive(v_toParserModuleContext_4909_);
if (v_isSharedCheck_4948_ == 0)
{
v___x_4921_ = v_toParserModuleContext_4909_;
v_isShared_4922_ = v_isSharedCheck_4948_;
goto v_resetjp_4920_;
}
else
{
lean_inc(v_openDecls_4919_);
lean_inc(v_currNamespace_4918_);
lean_inc(v_options_4917_);
lean_inc(v_env_4916_);
lean_dec(v_toParserModuleContext_4909_);
v___x_4921_ = lean_box(0);
v_isShared_4922_ = v_isSharedCheck_4948_;
goto v_resetjp_4920_;
}
v_resetjp_4920_:
{
lean_object* v___y_4924_; lean_object* v_map_4931_; uint8_t v_hasTrace_4932_; lean_object* v___x_4934_; uint8_t v_isShared_4935_; uint8_t v_isSharedCheck_4947_; 
v_map_4931_ = lean_ctor_get(v_options_4917_, 0);
v_hasTrace_4932_ = lean_ctor_get_uint8(v_options_4917_, sizeof(void*)*1);
v_isSharedCheck_4947_ = !lean_is_exclusive(v_options_4917_);
if (v_isSharedCheck_4947_ == 0)
{
v___x_4934_ = v_options_4917_;
v_isShared_4935_ = v_isSharedCheck_4947_;
goto v_resetjp_4933_;
}
else
{
lean_inc(v_map_4931_);
lean_dec(v_options_4917_);
v___x_4934_ = lean_box(0);
v_isShared_4935_ = v_isSharedCheck_4947_;
goto v_resetjp_4933_;
}
v___jp_4923_:
{
lean_object* v___x_4926_; 
if (v_isShared_4922_ == 0)
{
lean_ctor_set(v___x_4921_, 1, v___y_4924_);
v___x_4926_ = v___x_4921_;
goto v_reusejp_4925_;
}
else
{
lean_object* v_reuseFailAlloc_4930_; 
v_reuseFailAlloc_4930_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_4930_, 0, v_env_4916_);
lean_ctor_set(v_reuseFailAlloc_4930_, 1, v___y_4924_);
lean_ctor_set(v_reuseFailAlloc_4930_, 2, v_currNamespace_4918_);
lean_ctor_set(v_reuseFailAlloc_4930_, 3, v_openDecls_4919_);
v___x_4926_ = v_reuseFailAlloc_4930_;
goto v_reusejp_4925_;
}
v_reusejp_4925_:
{
lean_object* v___x_4928_; 
if (v_isShared_4915_ == 0)
{
lean_ctor_set(v___x_4914_, 1, v___x_4926_);
v___x_4928_ = v___x_4914_;
goto v_reusejp_4927_;
}
else
{
lean_object* v_reuseFailAlloc_4929_; 
v_reuseFailAlloc_4929_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_4929_, 0, v_toInputContext_4910_);
lean_ctor_set(v_reuseFailAlloc_4929_, 1, v___x_4926_);
lean_ctor_set(v_reuseFailAlloc_4929_, 2, v_toCacheableParserContext_4911_);
lean_ctor_set(v_reuseFailAlloc_4929_, 3, v_tokens_4912_);
v___x_4928_ = v_reuseFailAlloc_4929_;
goto v_reusejp_4927_;
}
v_reusejp_4927_:
{
return v___x_4928_;
}
}
}
v_resetjp_4933_:
{
lean_object* v___x_4936_; lean_object* v___x_4937_; lean_object* v___x_4938_; 
v___x_4936_ = l_Lean_Syntax_getId(v_nameStx_4906_);
v___x_4937_ = l_Lean_Name_eraseMacroScopes(v___x_4936_);
lean_dec(v___x_4936_);
lean_inc(v___x_4937_);
v___x_4938_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v___x_4937_, v_v_4907_, v_map_4931_);
if (v_hasTrace_4932_ == 0)
{
lean_object* v___x_4939_; uint8_t v___x_4940_; lean_object* v___x_4942_; 
v___x_4939_ = ((lean_object*)(l_Lean_Options_set___at___00Lean_Parser_evalInsideQuot_spec__0___closed__1));
v___x_4940_ = l_Lean_Name_isPrefixOf(v___x_4939_, v___x_4937_);
lean_dec(v___x_4937_);
if (v_isShared_4935_ == 0)
{
lean_ctor_set(v___x_4934_, 0, v___x_4938_);
v___x_4942_ = v___x_4934_;
goto v_reusejp_4941_;
}
else
{
lean_object* v_reuseFailAlloc_4943_; 
v_reuseFailAlloc_4943_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_4943_, 0, v___x_4938_);
v___x_4942_ = v_reuseFailAlloc_4943_;
goto v_reusejp_4941_;
}
v_reusejp_4941_:
{
lean_ctor_set_uint8(v___x_4942_, sizeof(void*)*1, v___x_4940_);
v___y_4924_ = v___x_4942_;
goto v___jp_4923_;
}
}
else
{
lean_object* v___x_4945_; 
lean_dec(v___x_4937_);
if (v_isShared_4935_ == 0)
{
lean_ctor_set(v___x_4934_, 0, v___x_4938_);
v___x_4945_ = v___x_4934_;
goto v_reusejp_4944_;
}
else
{
lean_object* v_reuseFailAlloc_4946_; 
v_reuseFailAlloc_4946_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_4946_, 0, v___x_4938_);
lean_ctor_set_uint8(v_reuseFailAlloc_4946_, sizeof(void*)*1, v_hasTrace_4932_);
v___x_4945_ = v_reuseFailAlloc_4946_;
goto v_reusejp_4944_;
}
v_reusejp_4944_:
{
v___y_4924_ = v___x_4945_;
goto v___jp_4923_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_withSetOptionValueFnCore_insertOption___boxed(lean_object* v_nameStx_4950_, lean_object* v_v_4951_, lean_object* v_c_4952_){
_start:
{
lean_object* v_res_4953_; 
v_res_4953_ = l___private_Lean_Parser_Extension_0__Lean_Parser_withSetOptionValueFnCore_insertOption(v_nameStx_4950_, v_v_4951_, v_c_4952_);
lean_dec(v_nameStx_4950_);
return v_res_4953_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_withSetOptionValueFnCore(lean_object* v_nameStx_4954_, lean_object* v_valStx_4955_, lean_object* v_p_4956_, lean_object* v_a_4957_, lean_object* v_a_4958_){
_start:
{
lean_object* v___x_4959_; 
v___x_4959_ = l___private_Lean_Parser_Extension_0__Lean_Parser_optionValueToDataValue_x3f(v_valStx_4955_);
if (lean_obj_tag(v___x_4959_) == 0)
{
lean_object* v___x_4960_; 
lean_dec(v_nameStx_4954_);
v___x_4960_ = lean_apply_2(v_p_4956_, v_a_4957_, v_a_4958_);
return v___x_4960_;
}
else
{
lean_object* v_val_4961_; lean_object* v___x_4962_; lean_object* v___x_4963_; 
v_val_4961_ = lean_ctor_get(v___x_4959_, 0);
lean_inc(v_val_4961_);
lean_dec_ref_known(v___x_4959_, 1);
v___x_4962_ = lean_alloc_closure((void*)(l___private_Lean_Parser_Extension_0__Lean_Parser_withSetOptionValueFnCore_insertOption___boxed), 3, 2);
lean_closure_set(v___x_4962_, 0, v_nameStx_4954_);
lean_closure_set(v___x_4962_, 1, v_val_4961_);
v___x_4963_ = l_Lean_Parser_adaptUncacheableContextFn(v___x_4962_, v_p_4956_, v_a_4957_, v_a_4958_);
return v___x_4963_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_withSetOptionValueFnCore___boxed(lean_object* v_nameStx_4964_, lean_object* v_valStx_4965_, lean_object* v_p_4966_, lean_object* v_a_4967_, lean_object* v_a_4968_){
_start:
{
lean_object* v_res_4969_; 
v_res_4969_ = l___private_Lean_Parser_Extension_0__Lean_Parser_withSetOptionValueFnCore(v_nameStx_4964_, v_valStx_4965_, v_p_4966_, v_a_4967_, v_a_4968_);
lean_dec(v_valStx_4965_);
return v_res_4969_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withSetOptionFn(lean_object* v_p_4976_, lean_object* v_c_4977_, lean_object* v_s_4978_){
_start:
{
lean_object* v_stxStack_4979_; lean_object* v___x_4980_; lean_object* v___x_4981_; uint8_t v___x_4982_; 
v_stxStack_4979_ = lean_ctor_get(v_s_4978_, 0);
v___x_4980_ = lean_unsigned_to_nat(0u);
v___x_4981_ = l_Lean_Parser_SyntaxStack_size(v_stxStack_4979_);
v___x_4982_ = lean_nat_dec_lt(v___x_4980_, v___x_4981_);
lean_dec(v___x_4981_);
if (v___x_4982_ == 0)
{
lean_object* v___x_4983_; 
v___x_4983_ = lean_apply_2(v_p_4976_, v_c_4977_, v_s_4978_);
return v___x_4983_;
}
else
{
lean_object* v_stx_4984_; lean_object* v___x_4985_; lean_object* v___x_4986_; uint8_t v___x_4987_; 
v_stx_4984_ = l_Lean_Parser_SyntaxStack_back(v_stxStack_4979_);
lean_inc(v_stx_4984_);
v___x_4985_ = l_Lean_Syntax_getKind(v_stx_4984_);
v___x_4986_ = ((lean_object*)(l_Lean_Parser_withSetOptionFn___closed__1));
v___x_4987_ = lean_name_eq(v___x_4985_, v___x_4986_);
lean_dec(v___x_4985_);
if (v___x_4987_ == 0)
{
lean_object* v___x_4988_; 
lean_dec(v_stx_4984_);
v___x_4988_ = lean_apply_2(v_p_4976_, v_c_4977_, v_s_4978_);
return v___x_4988_;
}
else
{
lean_object* v___x_4989_; lean_object* v___x_4990_; lean_object* v___x_4991_; lean_object* v___x_4992_; lean_object* v___x_4993_; 
v___x_4989_ = lean_unsigned_to_nat(1u);
v___x_4990_ = l_Lean_Syntax_getArg(v_stx_4984_, v___x_4989_);
v___x_4991_ = lean_unsigned_to_nat(3u);
v___x_4992_ = l_Lean_Syntax_getArg(v_stx_4984_, v___x_4991_);
lean_dec(v_stx_4984_);
v___x_4993_ = l___private_Lean_Parser_Extension_0__Lean_Parser_withSetOptionValueFnCore(v___x_4990_, v___x_4992_, v_p_4976_, v_c_4977_, v_s_4978_);
lean_dec(v___x_4992_);
return v___x_4993_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withSetOption(lean_object* v_p_4994_){
_start:
{
lean_object* v_info_4995_; lean_object* v_fn_4996_; lean_object* v___x_4998_; uint8_t v_isShared_4999_; uint8_t v_isSharedCheck_5004_; 
v_info_4995_ = lean_ctor_get(v_p_4994_, 0);
v_fn_4996_ = lean_ctor_get(v_p_4994_, 1);
v_isSharedCheck_5004_ = !lean_is_exclusive(v_p_4994_);
if (v_isSharedCheck_5004_ == 0)
{
v___x_4998_ = v_p_4994_;
v_isShared_4999_ = v_isSharedCheck_5004_;
goto v_resetjp_4997_;
}
else
{
lean_inc(v_fn_4996_);
lean_inc(v_info_4995_);
lean_dec(v_p_4994_);
v___x_4998_ = lean_box(0);
v_isShared_4999_ = v_isSharedCheck_5004_;
goto v_resetjp_4997_;
}
v_resetjp_4997_:
{
lean_object* v___x_5000_; lean_object* v___x_5002_; 
v___x_5000_ = lean_alloc_closure((void*)(l_Lean_Parser_withSetOptionFn), 3, 1);
lean_closure_set(v___x_5000_, 0, v_fn_4996_);
if (v_isShared_4999_ == 0)
{
lean_ctor_set(v___x_4998_, 1, v___x_5000_);
v___x_5002_ = v___x_4998_;
goto v_reusejp_5001_;
}
else
{
lean_object* v_reuseFailAlloc_5003_; 
v_reuseFailAlloc_5003_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5003_, 0, v_info_4995_);
lean_ctor_set(v_reuseFailAlloc_5003_, 1, v___x_5000_);
v___x_5002_ = v_reuseFailAlloc_5003_;
goto v_reusejp_5001_;
}
v_reusejp_5001_:
{
return v___x_5002_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withSetOptionValueFn(lean_object* v_p_5005_, lean_object* v_c_5006_, lean_object* v_s_5007_){
_start:
{
lean_object* v_stxStack_5008_; lean_object* v_sz_5009_; lean_object* v___x_5010_; uint8_t v___x_5011_; 
v_stxStack_5008_ = lean_ctor_get(v_s_5007_, 0);
v_sz_5009_ = l_Lean_Parser_SyntaxStack_size(v_stxStack_5008_);
v___x_5010_ = lean_unsigned_to_nat(3u);
v___x_5011_ = lean_nat_dec_le(v___x_5010_, v_sz_5009_);
if (v___x_5011_ == 0)
{
lean_object* v___x_5012_; 
lean_dec(v_sz_5009_);
v___x_5012_ = lean_apply_2(v_p_5005_, v_c_5006_, v_s_5007_);
return v___x_5012_;
}
else
{
lean_object* v___x_5013_; lean_object* v___x_5014_; lean_object* v___x_5015_; lean_object* v___x_5016_; 
v___x_5013_ = lean_nat_sub(v_sz_5009_, v___x_5010_);
lean_dec(v_sz_5009_);
v___x_5014_ = l_Lean_Parser_SyntaxStack_get_x21(v_stxStack_5008_, v___x_5013_);
lean_dec(v___x_5013_);
v___x_5015_ = l_Lean_Parser_SyntaxStack_back(v_stxStack_5008_);
v___x_5016_ = l___private_Lean_Parser_Extension_0__Lean_Parser_withSetOptionValueFnCore(v___x_5014_, v___x_5015_, v_p_5005_, v_c_5006_, v_s_5007_);
lean_dec(v___x_5015_);
return v___x_5016_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withSetOptionValue(lean_object* v_p_5017_){
_start:
{
lean_object* v_info_5018_; lean_object* v_fn_5019_; lean_object* v___x_5021_; uint8_t v_isShared_5022_; uint8_t v_isSharedCheck_5027_; 
v_info_5018_ = lean_ctor_get(v_p_5017_, 0);
v_fn_5019_ = lean_ctor_get(v_p_5017_, 1);
v_isSharedCheck_5027_ = !lean_is_exclusive(v_p_5017_);
if (v_isSharedCheck_5027_ == 0)
{
v___x_5021_ = v_p_5017_;
v_isShared_5022_ = v_isSharedCheck_5027_;
goto v_resetjp_5020_;
}
else
{
lean_inc(v_fn_5019_);
lean_inc(v_info_5018_);
lean_dec(v_p_5017_);
v___x_5021_ = lean_box(0);
v_isShared_5022_ = v_isSharedCheck_5027_;
goto v_resetjp_5020_;
}
v_resetjp_5020_:
{
lean_object* v___x_5023_; lean_object* v___x_5025_; 
v___x_5023_ = lean_alloc_closure((void*)(l_Lean_Parser_withSetOptionValueFn), 3, 1);
lean_closure_set(v___x_5023_, 0, v_fn_5019_);
if (v_isShared_5022_ == 0)
{
lean_ctor_set(v___x_5021_, 1, v___x_5023_);
v___x_5025_ = v___x_5021_;
goto v_reusejp_5024_;
}
else
{
lean_object* v_reuseFailAlloc_5026_; 
v_reuseFailAlloc_5026_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5026_, 0, v_info_5018_);
lean_ctor_set(v_reuseFailAlloc_5026_, 1, v___x_5023_);
v___x_5025_ = v_reuseFailAlloc_5026_;
goto v_reusejp_5024_;
}
v_reusejp_5024_:
{
return v___x_5025_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___lam__0_00___x40_Lean_Parser_Extension_1918044636____hygCtx___hyg_2_(lean_object* v___x_5028_){
_start:
{
lean_object* v___x_5030_; lean_object* v___x_5031_; 
v___x_5030_ = lean_st_ref_get(v___x_5028_);
v___x_5031_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5031_, 0, v___x_5030_);
return v___x_5031_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___lam__0_00___x40_Lean_Parser_Extension_1918044636____hygCtx___hyg_2____boxed(lean_object* v___x_5032_, lean_object* v___y_5033_){
_start:
{
lean_object* v_res_5034_; 
v_res_5034_ = l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___lam__0_00___x40_Lean_Parser_Extension_1918044636____hygCtx___hyg_2_(v___x_5032_);
lean_dec(v___x_5032_);
return v_res_5034_;
}
}
static lean_object* _init_l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__0_00___x40_Lean_Parser_Extension_1918044636____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_5035_; lean_object* v___f_5036_; 
v___x_5035_ = l_Lean_Parser_parserAliasesRef;
v___f_5036_ = lean_alloc_closure((void*)(l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___lam__0_00___x40_Lean_Parser_Extension_1918044636____hygCtx___hyg_2____boxed), 2, 1);
lean_closure_set(v___f_5036_, 0, v___x_5035_);
return v___f_5036_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn_00___x40_Lean_Parser_Extension_1918044636____hygCtx___hyg_2_(){
_start:
{
lean_object* v___f_5038_; lean_object* v___x_5039_; lean_object* v___x_5040_; lean_object* v___x_5041_; 
v___f_5038_ = lean_obj_once(&l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__0_00___x40_Lean_Parser_Extension_1918044636____hygCtx___hyg_2_, &l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__0_00___x40_Lean_Parser_Extension_1918044636____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Extension_0__Lean_Parser_initFn___closed__0_00___x40_Lean_Parser_Extension_1918044636____hygCtx___hyg_2_);
v___x_5039_ = lean_box(0);
v___x_5040_ = lean_box(2);
v___x_5041_ = l_Lean_registerEnvExtension___redArg(v___f_5038_, v___x_5039_, v___x_5040_);
return v___x_5041_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_initFn_00___x40_Lean_Parser_Extension_1918044636____hygCtx___hyg_2____boxed(lean_object* v_a_5042_){
_start:
{
lean_object* v_res_5043_; 
v_res_5043_ = l___private_Lean_Parser_Extension_0__Lean_Parser_initFn_00___x40_Lean_Parser_Extension_1918044636____hygCtx___hyg_2_();
return v_res_5043_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserResolution_ctorIdx(lean_object* v_x_5044_){
_start:
{
switch(lean_obj_tag(v_x_5044_))
{
case 0:
{
lean_object* v___x_5045_; 
v___x_5045_ = lean_unsigned_to_nat(0u);
return v___x_5045_;
}
case 1:
{
lean_object* v___x_5046_; 
v___x_5046_ = lean_unsigned_to_nat(1u);
return v___x_5046_;
}
default: 
{
lean_object* v___x_5047_; 
v___x_5047_ = lean_unsigned_to_nat(2u);
return v___x_5047_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserResolution_ctorIdx___boxed(lean_object* v_x_5048_){
_start:
{
lean_object* v_res_5049_; 
v_res_5049_ = l_Lean_Parser_ParserResolution_ctorIdx(v_x_5048_);
lean_dec_ref(v_x_5048_);
return v_res_5049_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserResolution_ctorElim___redArg(lean_object* v_t_5050_, lean_object* v_k_5051_){
_start:
{
switch(lean_obj_tag(v_t_5050_))
{
case 0:
{
lean_object* v_cat_5052_; lean_object* v___x_5053_; 
v_cat_5052_ = lean_ctor_get(v_t_5050_, 0);
lean_inc(v_cat_5052_);
lean_dec_ref_known(v_t_5050_, 1);
v___x_5053_ = lean_apply_1(v_k_5051_, v_cat_5052_);
return v___x_5053_;
}
case 1:
{
lean_object* v_decl_5054_; uint8_t v_isDescr_5055_; lean_object* v___x_5056_; lean_object* v___x_5057_; 
v_decl_5054_ = lean_ctor_get(v_t_5050_, 0);
lean_inc(v_decl_5054_);
v_isDescr_5055_ = lean_ctor_get_uint8(v_t_5050_, sizeof(void*)*1);
lean_dec_ref_known(v_t_5050_, 1);
v___x_5056_ = lean_box(v_isDescr_5055_);
v___x_5057_ = lean_apply_2(v_k_5051_, v_decl_5054_, v___x_5056_);
return v___x_5057_;
}
default: 
{
lean_object* v_p_5058_; lean_object* v___x_5059_; 
v_p_5058_ = lean_ctor_get(v_t_5050_, 0);
lean_inc_ref(v_p_5058_);
lean_dec_ref_known(v_t_5050_, 1);
v___x_5059_ = lean_apply_1(v_k_5051_, v_p_5058_);
return v___x_5059_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserResolution_ctorElim(lean_object* v_motive_5060_, lean_object* v_ctorIdx_5061_, lean_object* v_t_5062_, lean_object* v_h_5063_, lean_object* v_k_5064_){
_start:
{
lean_object* v___x_5065_; 
v___x_5065_ = l_Lean_Parser_ParserResolution_ctorElim___redArg(v_t_5062_, v_k_5064_);
return v___x_5065_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserResolution_ctorElim___boxed(lean_object* v_motive_5066_, lean_object* v_ctorIdx_5067_, lean_object* v_t_5068_, lean_object* v_h_5069_, lean_object* v_k_5070_){
_start:
{
lean_object* v_res_5071_; 
v_res_5071_ = l_Lean_Parser_ParserResolution_ctorElim(v_motive_5066_, v_ctorIdx_5067_, v_t_5068_, v_h_5069_, v_k_5070_);
lean_dec(v_ctorIdx_5067_);
return v_res_5071_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserResolution_category_elim___redArg(lean_object* v_t_5072_, lean_object* v_category_5073_){
_start:
{
lean_object* v___x_5074_; 
v___x_5074_ = l_Lean_Parser_ParserResolution_ctorElim___redArg(v_t_5072_, v_category_5073_);
return v___x_5074_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserResolution_category_elim(lean_object* v_motive_5075_, lean_object* v_t_5076_, lean_object* v_h_5077_, lean_object* v_category_5078_){
_start:
{
lean_object* v___x_5079_; 
v___x_5079_ = l_Lean_Parser_ParserResolution_ctorElim___redArg(v_t_5076_, v_category_5078_);
return v___x_5079_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserResolution_parser_elim___redArg(lean_object* v_t_5080_, lean_object* v_parser_5081_){
_start:
{
lean_object* v___x_5082_; 
v___x_5082_ = l_Lean_Parser_ParserResolution_ctorElim___redArg(v_t_5080_, v_parser_5081_);
return v___x_5082_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserResolution_parser_elim(lean_object* v_motive_5083_, lean_object* v_t_5084_, lean_object* v_h_5085_, lean_object* v_parser_5086_){
_start:
{
lean_object* v___x_5087_; 
v___x_5087_ = l_Lean_Parser_ParserResolution_ctorElim___redArg(v_t_5084_, v_parser_5086_);
return v___x_5087_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserResolution_alias_elim___redArg(lean_object* v_t_5088_, lean_object* v_alias_5089_){
_start:
{
lean_object* v___x_5090_; 
v___x_5090_ = l_Lean_Parser_ParserResolution_ctorElim___redArg(v_t_5088_, v_alias_5089_);
return v___x_5090_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserResolution_alias_elim(lean_object* v_motive_5091_, lean_object* v_t_5092_, lean_object* v_h_5093_, lean_object* v_alias_5094_){
_start:
{
lean_object* v___x_5095_; 
v___x_5095_ = l_Lean_Parser_ParserResolution_ctorElim___redArg(v_t_5092_, v_alias_5094_);
return v___x_5095_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_resolveParserNameCore_isParser(lean_object* v_env_5099_, lean_object* v_name_5100_){
_start:
{
uint8_t v___x_5101_; lean_object* v___x_5102_; 
v___x_5101_ = 0;
v___x_5102_ = l_Lean_Environment_find_x3f(v_env_5099_, v_name_5100_, v___x_5101_);
if (lean_obj_tag(v___x_5102_) == 0)
{
lean_object* v___x_5103_; 
v___x_5103_ = lean_box(0);
return v___x_5103_;
}
else
{
lean_object* v_val_5104_; lean_object* v___x_5106_; uint8_t v_isShared_5107_; uint8_t v_isSharedCheck_5151_; 
v_val_5104_ = lean_ctor_get(v___x_5102_, 0);
v_isSharedCheck_5151_ = !lean_is_exclusive(v___x_5102_);
if (v_isSharedCheck_5151_ == 0)
{
v___x_5106_ = v___x_5102_;
v_isShared_5107_ = v_isSharedCheck_5151_;
goto v_resetjp_5105_;
}
else
{
lean_inc(v_val_5104_);
lean_dec(v___x_5102_);
v___x_5106_ = lean_box(0);
v_isShared_5107_ = v_isSharedCheck_5151_;
goto v_resetjp_5105_;
}
v_resetjp_5105_:
{
lean_object* v___x_5108_; 
v___x_5108_ = l_Lean_ConstantInfo_type(v_val_5104_);
lean_dec(v_val_5104_);
if (lean_obj_tag(v___x_5108_) == 4)
{
lean_object* v_declName_5109_; 
v_declName_5109_ = lean_ctor_get(v___x_5108_, 0);
lean_inc(v_declName_5109_);
lean_dec_ref_known(v___x_5108_, 2);
if (lean_obj_tag(v_declName_5109_) == 1)
{
lean_object* v_pre_5110_; 
v_pre_5110_ = lean_ctor_get(v_declName_5109_, 0);
lean_inc(v_pre_5110_);
if (lean_obj_tag(v_pre_5110_) == 1)
{
lean_object* v_pre_5111_; 
v_pre_5111_ = lean_ctor_get(v_pre_5110_, 0);
switch(lean_obj_tag(v_pre_5111_))
{
case 1:
{
lean_object* v_pre_5112_; 
lean_inc_ref(v_pre_5111_);
lean_del_object(v___x_5106_);
v_pre_5112_ = lean_ctor_get(v_pre_5111_, 0);
if (lean_obj_tag(v_pre_5112_) == 0)
{
lean_object* v_str_5113_; lean_object* v_str_5114_; lean_object* v_str_5115_; lean_object* v___x_5116_; uint8_t v___x_5117_; 
v_str_5113_ = lean_ctor_get(v_declName_5109_, 1);
lean_inc_ref(v_str_5113_);
lean_dec_ref_known(v_declName_5109_, 2);
v_str_5114_ = lean_ctor_get(v_pre_5110_, 1);
lean_inc_ref(v_str_5114_);
lean_dec_ref_known(v_pre_5110_, 2);
v_str_5115_ = lean_ctor_get(v_pre_5111_, 1);
lean_inc_ref(v_str_5115_);
lean_dec_ref_known(v_pre_5111_, 2);
v___x_5116_ = ((lean_object*)(l_Lean_Parser_mkParserOfConstantUnsafe___closed__3));
v___x_5117_ = lean_string_dec_eq(v_str_5115_, v___x_5116_);
lean_dec_ref(v_str_5115_);
if (v___x_5117_ == 0)
{
lean_object* v___x_5118_; 
lean_dec_ref(v_str_5114_);
lean_dec_ref(v_str_5113_);
v___x_5118_ = lean_box(0);
return v___x_5118_;
}
else
{
lean_object* v___x_5119_; uint8_t v___x_5120_; 
v___x_5119_ = ((lean_object*)(l_Lean_Parser_mkParserOfConstantUnsafe___closed__4));
v___x_5120_ = lean_string_dec_eq(v_str_5114_, v___x_5119_);
lean_dec_ref(v_str_5114_);
if (v___x_5120_ == 0)
{
lean_object* v___x_5121_; 
lean_dec_ref(v_str_5113_);
v___x_5121_ = lean_box(0);
return v___x_5121_;
}
else
{
uint8_t v___x_5122_; 
v___x_5122_ = lean_string_dec_eq(v_str_5113_, v___x_5119_);
if (v___x_5122_ == 0)
{
lean_object* v___x_5123_; uint8_t v___x_5124_; 
v___x_5123_ = ((lean_object*)(l_Lean_Parser_mkParserOfConstantUnsafe___closed__5));
v___x_5124_ = lean_string_dec_eq(v_str_5113_, v___x_5123_);
lean_dec_ref(v_str_5113_);
if (v___x_5124_ == 0)
{
lean_object* v___x_5125_; 
v___x_5125_ = lean_box(0);
return v___x_5125_;
}
else
{
lean_object* v___x_5126_; 
v___x_5126_ = ((lean_object*)(l___private_Lean_Parser_Extension_0__Lean_Parser_resolveParserNameCore_isParser___closed__0));
return v___x_5126_;
}
}
else
{
lean_object* v___x_5127_; 
lean_dec_ref(v_str_5113_);
v___x_5127_ = ((lean_object*)(l___private_Lean_Parser_Extension_0__Lean_Parser_resolveParserNameCore_isParser___closed__0));
return v___x_5127_;
}
}
}
}
else
{
lean_object* v___x_5128_; 
lean_dec_ref_known(v_pre_5111_, 2);
lean_dec_ref_known(v_pre_5110_, 2);
lean_dec_ref_known(v_declName_5109_, 2);
v___x_5128_ = lean_box(0);
return v___x_5128_;
}
}
case 0:
{
lean_object* v_str_5129_; lean_object* v_str_5130_; lean_object* v___x_5131_; uint8_t v___x_5132_; 
v_str_5129_ = lean_ctor_get(v_declName_5109_, 1);
lean_inc_ref(v_str_5129_);
lean_dec_ref_known(v_declName_5109_, 2);
v_str_5130_ = lean_ctor_get(v_pre_5110_, 1);
lean_inc_ref(v_str_5130_);
lean_dec_ref_known(v_pre_5110_, 2);
v___x_5131_ = ((lean_object*)(l_Lean_Parser_mkParserOfConstantUnsafe___closed__3));
v___x_5132_ = lean_string_dec_eq(v_str_5130_, v___x_5131_);
lean_dec_ref(v_str_5130_);
if (v___x_5132_ == 0)
{
lean_object* v___x_5133_; 
lean_dec_ref(v_str_5129_);
lean_del_object(v___x_5106_);
v___x_5133_ = lean_box(0);
return v___x_5133_;
}
else
{
lean_object* v___x_5134_; uint8_t v___x_5135_; 
v___x_5134_ = ((lean_object*)(l_Lean_Parser_mkParserOfConstantUnsafe___closed__6));
v___x_5135_ = lean_string_dec_eq(v_str_5129_, v___x_5134_);
if (v___x_5135_ == 0)
{
lean_object* v___x_5136_; uint8_t v___x_5137_; 
v___x_5136_ = ((lean_object*)(l_Lean_Parser_mkParserOfConstantUnsafe___closed__7));
v___x_5137_ = lean_string_dec_eq(v_str_5129_, v___x_5136_);
lean_dec_ref(v_str_5129_);
if (v___x_5137_ == 0)
{
lean_object* v___x_5138_; 
lean_del_object(v___x_5106_);
v___x_5138_ = lean_box(0);
return v___x_5138_;
}
else
{
lean_object* v___x_5139_; lean_object* v___x_5141_; 
v___x_5139_ = lean_box(v___x_5132_);
if (v_isShared_5107_ == 0)
{
lean_ctor_set(v___x_5106_, 0, v___x_5139_);
v___x_5141_ = v___x_5106_;
goto v_reusejp_5140_;
}
else
{
lean_object* v_reuseFailAlloc_5142_; 
v_reuseFailAlloc_5142_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5142_, 0, v___x_5139_);
v___x_5141_ = v_reuseFailAlloc_5142_;
goto v_reusejp_5140_;
}
v_reusejp_5140_:
{
return v___x_5141_;
}
}
}
else
{
lean_object* v___x_5143_; lean_object* v___x_5145_; 
lean_dec_ref(v_str_5129_);
v___x_5143_ = lean_box(v___x_5132_);
if (v_isShared_5107_ == 0)
{
lean_ctor_set(v___x_5106_, 0, v___x_5143_);
v___x_5145_ = v___x_5106_;
goto v_reusejp_5144_;
}
else
{
lean_object* v_reuseFailAlloc_5146_; 
v_reuseFailAlloc_5146_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5146_, 0, v___x_5143_);
v___x_5145_ = v_reuseFailAlloc_5146_;
goto v_reusejp_5144_;
}
v_reusejp_5144_:
{
return v___x_5145_;
}
}
}
}
default: 
{
lean_object* v___x_5147_; 
lean_dec_ref_known(v_pre_5110_, 2);
lean_dec_ref_known(v_declName_5109_, 2);
lean_del_object(v___x_5106_);
v___x_5147_ = lean_box(0);
return v___x_5147_;
}
}
}
else
{
lean_object* v___x_5148_; 
lean_dec_ref_known(v_declName_5109_, 2);
lean_dec(v_pre_5110_);
lean_del_object(v___x_5106_);
v___x_5148_ = lean_box(0);
return v___x_5148_;
}
}
else
{
lean_object* v___x_5149_; 
lean_dec(v_declName_5109_);
lean_del_object(v___x_5106_);
v___x_5149_ = lean_box(0);
return v___x_5149_;
}
}
else
{
lean_object* v___x_5150_; 
lean_dec_ref(v___x_5108_);
lean_del_object(v___x_5106_);
v___x_5150_ = lean_box(0);
return v___x_5150_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_filterMapTR_go___at___00__private_Lean_Parser_Extension_0__Lean_Parser_resolveParserNameCore_spec__1(lean_object* v_env_5152_, lean_object* v_a_5153_, lean_object* v_a_5154_){
_start:
{
if (lean_obj_tag(v_a_5153_) == 0)
{
lean_object* v___x_5155_; 
lean_dec_ref(v_env_5152_);
v___x_5155_ = lean_array_to_list(v_a_5154_);
return v___x_5155_;
}
else
{
lean_object* v_head_5156_; lean_object* v_snd_5157_; 
v_head_5156_ = lean_ctor_get(v_a_5153_, 0);
v_snd_5157_ = lean_ctor_get(v_head_5156_, 1);
if (lean_obj_tag(v_snd_5157_) == 0)
{
lean_object* v_tail_5158_; lean_object* v_fst_5159_; lean_object* v___x_5160_; 
lean_inc(v_head_5156_);
v_tail_5158_ = lean_ctor_get(v_a_5153_, 1);
lean_inc(v_tail_5158_);
lean_dec_ref_known(v_a_5153_, 2);
v_fst_5159_ = lean_ctor_get(v_head_5156_, 0);
lean_inc_n(v_fst_5159_, 2);
lean_dec(v_head_5156_);
lean_inc_ref(v_env_5152_);
v___x_5160_ = l___private_Lean_Parser_Extension_0__Lean_Parser_resolveParserNameCore_isParser(v_env_5152_, v_fst_5159_);
if (lean_obj_tag(v___x_5160_) == 0)
{
lean_dec(v_fst_5159_);
v_a_5153_ = v_tail_5158_;
goto _start;
}
else
{
lean_object* v_val_5162_; lean_object* v___x_5163_; uint8_t v___x_5164_; lean_object* v___x_5165_; 
v_val_5162_ = lean_ctor_get(v___x_5160_, 0);
lean_inc(v_val_5162_);
lean_dec_ref_known(v___x_5160_, 1);
v___x_5163_ = lean_alloc_ctor(1, 1, 1);
lean_ctor_set(v___x_5163_, 0, v_fst_5159_);
v___x_5164_ = lean_unbox(v_val_5162_);
lean_dec(v_val_5162_);
lean_ctor_set_uint8(v___x_5163_, sizeof(void*)*1, v___x_5164_);
v___x_5165_ = lean_array_push(v_a_5154_, v___x_5163_);
v_a_5153_ = v_tail_5158_;
v_a_5154_ = v___x_5165_;
goto _start;
}
}
else
{
lean_object* v_tail_5167_; 
v_tail_5167_ = lean_ctor_get(v_a_5153_, 1);
lean_inc(v_tail_5167_);
lean_dec_ref_known(v_a_5153_, 2);
v_a_5153_ = v_tail_5167_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Parser_Extension_0__Lean_Parser_resolveParserNameCore_spec__0___redArg(lean_object* v_env_5172_, lean_object* v_as_x27_5173_, lean_object* v_b_5174_){
_start:
{
if (lean_obj_tag(v_as_x27_5173_) == 0)
{
lean_dec_ref(v_env_5172_);
lean_inc_ref(v_b_5174_);
return v_b_5174_;
}
else
{
lean_object* v_head_5175_; lean_object* v_tail_5176_; lean_object* v___x_5177_; lean_object* v___x_5178_; 
v_head_5175_ = lean_ctor_get(v_as_x27_5173_, 0);
v_tail_5176_ = lean_ctor_get(v_as_x27_5173_, 1);
v___x_5177_ = lean_box(0);
v___x_5178_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Parser_Extension_0__Lean_Parser_resolveParserNameCore_spec__0___redArg___closed__0));
if (lean_obj_tag(v_head_5175_) == 1)
{
lean_object* v_fields_5179_; 
v_fields_5179_ = lean_ctor_get(v_head_5175_, 1);
if (lean_obj_tag(v_fields_5179_) == 0)
{
lean_object* v_n_5180_; lean_object* v___x_5181_; 
v_n_5180_ = lean_ctor_get(v_head_5175_, 0);
lean_inc(v_n_5180_);
lean_inc_ref(v_env_5172_);
v___x_5181_ = l___private_Lean_Parser_Extension_0__Lean_Parser_resolveParserNameCore_isParser(v_env_5172_, v_n_5180_);
if (lean_obj_tag(v___x_5181_) == 1)
{
lean_object* v_val_5182_; lean_object* v___x_5184_; uint8_t v_isShared_5185_; uint8_t v_isSharedCheck_5194_; 
lean_dec_ref(v_env_5172_);
v_val_5182_ = lean_ctor_get(v___x_5181_, 0);
v_isSharedCheck_5194_ = !lean_is_exclusive(v___x_5181_);
if (v_isSharedCheck_5194_ == 0)
{
v___x_5184_ = v___x_5181_;
v_isShared_5185_ = v_isSharedCheck_5194_;
goto v_resetjp_5183_;
}
else
{
lean_inc(v_val_5182_);
lean_dec(v___x_5181_);
v___x_5184_ = lean_box(0);
v_isShared_5185_ = v_isSharedCheck_5194_;
goto v_resetjp_5183_;
}
v_resetjp_5183_:
{
lean_object* v___x_5186_; uint8_t v___x_5187_; lean_object* v___x_5188_; lean_object* v___x_5189_; lean_object* v___x_5191_; 
lean_inc(v_n_5180_);
v___x_5186_ = lean_alloc_ctor(1, 1, 1);
lean_ctor_set(v___x_5186_, 0, v_n_5180_);
v___x_5187_ = lean_unbox(v_val_5182_);
lean_dec(v_val_5182_);
lean_ctor_set_uint8(v___x_5186_, sizeof(void*)*1, v___x_5187_);
v___x_5188_ = lean_box(0);
v___x_5189_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5189_, 0, v___x_5186_);
lean_ctor_set(v___x_5189_, 1, v___x_5188_);
if (v_isShared_5185_ == 0)
{
lean_ctor_set(v___x_5184_, 0, v___x_5189_);
v___x_5191_ = v___x_5184_;
goto v_reusejp_5190_;
}
else
{
lean_object* v_reuseFailAlloc_5193_; 
v_reuseFailAlloc_5193_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5193_, 0, v___x_5189_);
v___x_5191_ = v_reuseFailAlloc_5193_;
goto v_reusejp_5190_;
}
v_reusejp_5190_:
{
lean_object* v___x_5192_; 
v___x_5192_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5192_, 0, v___x_5191_);
lean_ctor_set(v___x_5192_, 1, v___x_5177_);
return v___x_5192_;
}
}
}
else
{
lean_dec(v___x_5181_);
v_as_x27_5173_ = v_tail_5176_;
v_b_5174_ = v___x_5178_;
goto _start;
}
}
else
{
v_as_x27_5173_ = v_tail_5176_;
v_b_5174_ = v___x_5178_;
goto _start;
}
}
else
{
v_as_x27_5173_ = v_tail_5176_;
v_b_5174_ = v___x_5178_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Parser_Extension_0__Lean_Parser_resolveParserNameCore_spec__0___redArg___boxed(lean_object* v_env_5198_, lean_object* v_as_x27_5199_, lean_object* v_b_5200_){
_start:
{
lean_object* v_res_5201_; 
v_res_5201_ = l_List_forIn_x27_loop___at___00__private_Lean_Parser_Extension_0__Lean_Parser_resolveParserNameCore_spec__0___redArg(v_env_5198_, v_as_x27_5199_, v_b_5200_);
lean_dec_ref(v_b_5200_);
lean_dec(v_as_x27_5199_);
return v_res_5201_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_resolveParserNameCore(lean_object* v_env_5204_, lean_object* v_opts_5205_, lean_object* v_currNamespace_5206_, lean_object* v_openDecls_5207_, lean_object* v_ident_5208_){
_start:
{
if (lean_obj_tag(v_ident_5208_) == 3)
{
lean_object* v_val_5209_; lean_object* v_preresolved_5210_; lean_object* v___x_5211_; lean_object* v___x_5212_; lean_object* v_fst_5213_; lean_object* v___x_5215_; uint8_t v_isShared_5216_; uint8_t v_isSharedCheck_5248_; 
v_val_5209_ = lean_ctor_get(v_ident_5208_, 2);
lean_inc(v_val_5209_);
v_preresolved_5210_ = lean_ctor_get(v_ident_5208_, 3);
lean_inc(v_preresolved_5210_);
lean_dec_ref_known(v_ident_5208_, 4);
v___x_5211_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Parser_Extension_0__Lean_Parser_resolveParserNameCore_spec__0___redArg___closed__0));
lean_inc_ref(v_env_5204_);
v___x_5212_ = l_List_forIn_x27_loop___at___00__private_Lean_Parser_Extension_0__Lean_Parser_resolveParserNameCore_spec__0___redArg(v_env_5204_, v_preresolved_5210_, v___x_5211_);
lean_dec(v_preresolved_5210_);
v_fst_5213_ = lean_ctor_get(v___x_5212_, 0);
v_isSharedCheck_5248_ = !lean_is_exclusive(v___x_5212_);
if (v_isSharedCheck_5248_ == 0)
{
lean_object* v_unused_5249_; 
v_unused_5249_ = lean_ctor_get(v___x_5212_, 1);
lean_dec(v_unused_5249_);
v___x_5215_ = v___x_5212_;
v_isShared_5216_ = v_isSharedCheck_5248_;
goto v_resetjp_5214_;
}
else
{
lean_inc(v_fst_5213_);
lean_dec(v___x_5212_);
v___x_5215_ = lean_box(0);
v_isShared_5216_ = v_isSharedCheck_5248_;
goto v_resetjp_5214_;
}
v_resetjp_5214_:
{
if (lean_obj_tag(v_fst_5213_) == 0)
{
lean_object* v___x_5217_; uint8_t v___x_5218_; 
v___x_5217_ = l_Lean_Name_eraseMacroScopes(v_val_5209_);
lean_inc_ref(v_env_5204_);
v___x_5218_ = l_Lean_Parser_isParserCategory(v_env_5204_, v___x_5217_);
if (v___x_5218_ == 0)
{
lean_object* v___x_5219_; lean_object* v___x_5220_; lean_object* v___x_5221_; uint8_t v___x_5222_; 
lean_inc_ref_n(v_env_5204_, 2);
v___x_5219_ = l_Lean_ResolveName_resolveGlobalName(v_env_5204_, v_opts_5205_, v_currNamespace_5206_, v_openDecls_5207_, v_val_5209_);
v___x_5220_ = ((lean_object*)(l___private_Lean_Parser_Extension_0__Lean_Parser_resolveParserNameCore___closed__0));
v___x_5221_ = l_List_filterMapTR_go___at___00__private_Lean_Parser_Extension_0__Lean_Parser_resolveParserNameCore_spec__1(v_env_5204_, v___x_5219_, v___x_5220_);
v___x_5222_ = l_List_isEmpty___redArg(v___x_5221_);
if (v___x_5222_ == 0)
{
lean_dec(v___x_5217_);
lean_del_object(v___x_5215_);
lean_dec_ref(v_env_5204_);
return v___x_5221_;
}
else
{
lean_object* v___x_5223_; lean_object* v_asyncMode_5224_; lean_object* v___x_5225_; lean_object* v___x_5226_; lean_object* v___x_5227_; lean_object* v___x_5228_; 
lean_dec(v___x_5221_);
v___x_5223_ = l_Lean_Parser_aliasExtension;
v_asyncMode_5224_ = lean_ctor_get(v___x_5223_, 2);
v___x_5225_ = lean_box(1);
v___x_5226_ = lean_obj_once(&l_List_mapTR_loop___at___00Lean_Parser_addLeadingParser_spec__1___closed__0, &l_List_mapTR_loop___at___00Lean_Parser_addLeadingParser_spec__1___closed__0_once, _init_l_List_mapTR_loop___at___00Lean_Parser_addLeadingParser_spec__1___closed__0);
v___x_5227_ = l___private_Lean_Environment_0__Lean_EnvExtension_getStateUnsafe___redArg(v___x_5225_, v___x_5223_, v_env_5204_, v_asyncMode_5224_, v___x_5226_);
v___x_5228_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v___x_5227_, v___x_5217_);
lean_dec(v___x_5217_);
lean_dec(v___x_5227_);
if (lean_obj_tag(v___x_5228_) == 1)
{
lean_object* v_val_5229_; lean_object* v___x_5231_; uint8_t v_isShared_5232_; uint8_t v_isSharedCheck_5240_; 
v_val_5229_ = lean_ctor_get(v___x_5228_, 0);
v_isSharedCheck_5240_ = !lean_is_exclusive(v___x_5228_);
if (v_isSharedCheck_5240_ == 0)
{
v___x_5231_ = v___x_5228_;
v_isShared_5232_ = v_isSharedCheck_5240_;
goto v_resetjp_5230_;
}
else
{
lean_inc(v_val_5229_);
lean_dec(v___x_5228_);
v___x_5231_ = lean_box(0);
v_isShared_5232_ = v_isSharedCheck_5240_;
goto v_resetjp_5230_;
}
v_resetjp_5230_:
{
lean_object* v___x_5234_; 
if (v_isShared_5232_ == 0)
{
lean_ctor_set_tag(v___x_5231_, 2);
v___x_5234_ = v___x_5231_;
goto v_reusejp_5233_;
}
else
{
lean_object* v_reuseFailAlloc_5239_; 
v_reuseFailAlloc_5239_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5239_, 0, v_val_5229_);
v___x_5234_ = v_reuseFailAlloc_5239_;
goto v_reusejp_5233_;
}
v_reusejp_5233_:
{
lean_object* v___x_5235_; lean_object* v___x_5237_; 
v___x_5235_ = lean_box(0);
if (v_isShared_5216_ == 0)
{
lean_ctor_set_tag(v___x_5215_, 1);
lean_ctor_set(v___x_5215_, 1, v___x_5235_);
lean_ctor_set(v___x_5215_, 0, v___x_5234_);
v___x_5237_ = v___x_5215_;
goto v_reusejp_5236_;
}
else
{
lean_object* v_reuseFailAlloc_5238_; 
v_reuseFailAlloc_5238_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5238_, 0, v___x_5234_);
lean_ctor_set(v_reuseFailAlloc_5238_, 1, v___x_5235_);
v___x_5237_ = v_reuseFailAlloc_5238_;
goto v_reusejp_5236_;
}
v_reusejp_5236_:
{
return v___x_5237_;
}
}
}
}
else
{
lean_object* v___x_5241_; 
lean_dec(v___x_5228_);
lean_del_object(v___x_5215_);
v___x_5241_ = lean_box(0);
return v___x_5241_;
}
}
}
else
{
lean_object* v___x_5242_; lean_object* v___x_5243_; lean_object* v___x_5245_; 
lean_dec(v_val_5209_);
lean_dec(v_openDecls_5207_);
lean_dec(v_currNamespace_5206_);
lean_dec_ref(v_env_5204_);
v___x_5242_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5242_, 0, v___x_5217_);
v___x_5243_ = lean_box(0);
if (v_isShared_5216_ == 0)
{
lean_ctor_set_tag(v___x_5215_, 1);
lean_ctor_set(v___x_5215_, 1, v___x_5243_);
lean_ctor_set(v___x_5215_, 0, v___x_5242_);
v___x_5245_ = v___x_5215_;
goto v_reusejp_5244_;
}
else
{
lean_object* v_reuseFailAlloc_5246_; 
v_reuseFailAlloc_5246_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5246_, 0, v___x_5242_);
lean_ctor_set(v_reuseFailAlloc_5246_, 1, v___x_5243_);
v___x_5245_ = v_reuseFailAlloc_5246_;
goto v_reusejp_5244_;
}
v_reusejp_5244_:
{
return v___x_5245_;
}
}
}
else
{
lean_object* v_val_5247_; 
lean_del_object(v___x_5215_);
lean_dec(v_val_5209_);
lean_dec(v_openDecls_5207_);
lean_dec(v_currNamespace_5206_);
lean_dec_ref(v_env_5204_);
v_val_5247_ = lean_ctor_get(v_fst_5213_, 0);
lean_inc(v_val_5247_);
lean_dec_ref_known(v_fst_5213_, 1);
return v_val_5247_;
}
}
}
else
{
lean_object* v___x_5250_; 
lean_dec(v_ident_5208_);
lean_dec(v_openDecls_5207_);
lean_dec(v_currNamespace_5206_);
lean_dec_ref(v_env_5204_);
v___x_5250_ = lean_box(0);
return v___x_5250_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_resolveParserNameCore___boxed(lean_object* v_env_5251_, lean_object* v_opts_5252_, lean_object* v_currNamespace_5253_, lean_object* v_openDecls_5254_, lean_object* v_ident_5255_){
_start:
{
lean_object* v_res_5256_; 
v_res_5256_ = l___private_Lean_Parser_Extension_0__Lean_Parser_resolveParserNameCore(v_env_5251_, v_opts_5252_, v_currNamespace_5253_, v_openDecls_5254_, v_ident_5255_);
lean_dec_ref(v_opts_5252_);
return v_res_5256_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Parser_Extension_0__Lean_Parser_resolveParserNameCore_spec__0(lean_object* v_env_5257_, lean_object* v_as_5258_, lean_object* v_as_x27_5259_, lean_object* v_b_5260_, lean_object* v_a_5261_){
_start:
{
lean_object* v___x_5262_; 
v___x_5262_ = l_List_forIn_x27_loop___at___00__private_Lean_Parser_Extension_0__Lean_Parser_resolveParserNameCore_spec__0___redArg(v_env_5257_, v_as_x27_5259_, v_b_5260_);
return v___x_5262_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Parser_Extension_0__Lean_Parser_resolveParserNameCore_spec__0___boxed(lean_object* v_env_5263_, lean_object* v_as_5264_, lean_object* v_as_x27_5265_, lean_object* v_b_5266_, lean_object* v_a_5267_){
_start:
{
lean_object* v_res_5268_; 
v_res_5268_ = l_List_forIn_x27_loop___at___00__private_Lean_Parser_Extension_0__Lean_Parser_resolveParserNameCore_spec__0(v_env_5263_, v_as_5264_, v_as_x27_5265_, v_b_5266_, v_a_5267_);
lean_dec_ref(v_b_5266_);
lean_dec(v_as_x27_5265_);
lean_dec(v_as_5264_);
return v_res_5268_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserContext_resolveParserName(lean_object* v_ctx_5269_, lean_object* v_id_5270_, uint8_t v_unsetExporting_5271_){
_start:
{
lean_object* v___y_5273_; 
if (v_unsetExporting_5271_ == 0)
{
lean_object* v_toParserModuleContext_5279_; lean_object* v_env_5280_; 
v_toParserModuleContext_5279_ = lean_ctor_get(v_ctx_5269_, 1);
v_env_5280_ = lean_ctor_get(v_toParserModuleContext_5279_, 0);
lean_inc_ref(v_env_5280_);
v___y_5273_ = v_env_5280_;
goto v___jp_5272_;
}
else
{
lean_object* v_toParserModuleContext_5281_; lean_object* v_env_5282_; uint8_t v___x_5283_; lean_object* v___x_5284_; 
v_toParserModuleContext_5281_ = lean_ctor_get(v_ctx_5269_, 1);
v_env_5282_ = lean_ctor_get(v_toParserModuleContext_5281_, 0);
v___x_5283_ = 0;
lean_inc_ref(v_env_5282_);
v___x_5284_ = l_Lean_Environment_setExporting(v_env_5282_, v___x_5283_);
v___y_5273_ = v___x_5284_;
goto v___jp_5272_;
}
v___jp_5272_:
{
lean_object* v_toParserModuleContext_5274_; lean_object* v_options_5275_; lean_object* v_currNamespace_5276_; lean_object* v_openDecls_5277_; lean_object* v___x_5278_; 
v_toParserModuleContext_5274_ = lean_ctor_get(v_ctx_5269_, 1);
lean_inc_ref(v_toParserModuleContext_5274_);
lean_dec_ref(v_ctx_5269_);
v_options_5275_ = lean_ctor_get(v_toParserModuleContext_5274_, 1);
lean_inc_ref(v_options_5275_);
v_currNamespace_5276_ = lean_ctor_get(v_toParserModuleContext_5274_, 2);
lean_inc(v_currNamespace_5276_);
v_openDecls_5277_ = lean_ctor_get(v_toParserModuleContext_5274_, 3);
lean_inc(v_openDecls_5277_);
lean_dec_ref(v_toParserModuleContext_5274_);
v___x_5278_ = l___private_Lean_Parser_Extension_0__Lean_Parser_resolveParserNameCore(v___y_5273_, v_options_5275_, v_currNamespace_5276_, v_openDecls_5277_, v_id_5270_);
lean_dec_ref(v_options_5275_);
return v___x_5278_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserContext_resolveParserName___boxed(lean_object* v_ctx_5285_, lean_object* v_id_5286_, lean_object* v_unsetExporting_5287_){
_start:
{
uint8_t v_unsetExporting_boxed_5288_; lean_object* v_res_5289_; 
v_unsetExporting_boxed_5288_ = lean_unbox(v_unsetExporting_5287_);
v_res_5289_ = l_Lean_Parser_ParserContext_resolveParserName(v_ctx_5285_, v_id_5286_, v_unsetExporting_boxed_5288_);
return v_res_5289_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_resolveParserName(lean_object* v_id_5290_, lean_object* v_a_5291_, lean_object* v_a_5292_){
_start:
{
lean_object* v___x_5294_; lean_object* v_toCold_5295_; lean_object* v_env_5296_; lean_object* v_options_5297_; lean_object* v_currNamespace_5298_; lean_object* v_openDecls_5299_; lean_object* v___x_5300_; lean_object* v___x_5301_; 
v___x_5294_ = lean_st_ref_get(v_a_5292_);
v_toCold_5295_ = lean_ctor_get(v_a_5291_, 0);
v_env_5296_ = lean_ctor_get(v___x_5294_, 0);
lean_inc_ref(v_env_5296_);
lean_dec(v___x_5294_);
v_options_5297_ = lean_ctor_get(v_toCold_5295_, 2);
v_currNamespace_5298_ = lean_ctor_get(v_toCold_5295_, 4);
v_openDecls_5299_ = lean_ctor_get(v_toCold_5295_, 5);
lean_inc(v_openDecls_5299_);
lean_inc(v_currNamespace_5298_);
v___x_5300_ = l___private_Lean_Parser_Extension_0__Lean_Parser_resolveParserNameCore(v_env_5296_, v_options_5297_, v_currNamespace_5298_, v_openDecls_5299_, v_id_5290_);
v___x_5301_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5301_, 0, v___x_5300_);
return v___x_5301_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_resolveParserName___boxed(lean_object* v_id_5302_, lean_object* v_a_5303_, lean_object* v_a_5304_, lean_object* v_a_5305_){
_start:
{
lean_object* v_res_5306_; 
v_res_5306_ = l_Lean_Parser_resolveParserName(v_id_5302_, v_a_5303_, v_a_5304_);
lean_dec(v_a_5304_);
lean_dec_ref(v_a_5303_);
return v_res_5306_;
}
}
LEAN_EXPORT uint8_t l_Option_instBEq_beq___at___00Lean_Parser_parserOfStackFn_spec__0(lean_object* v_x_5307_, lean_object* v_x_5308_){
_start:
{
if (lean_obj_tag(v_x_5307_) == 0)
{
if (lean_obj_tag(v_x_5308_) == 0)
{
uint8_t v___x_5309_; 
v___x_5309_ = 1;
return v___x_5309_;
}
else
{
uint8_t v___x_5310_; 
v___x_5310_ = 0;
return v___x_5310_;
}
}
else
{
if (lean_obj_tag(v_x_5308_) == 0)
{
uint8_t v___x_5311_; 
v___x_5311_ = 0;
return v___x_5311_;
}
else
{
lean_object* v_val_5312_; lean_object* v_val_5313_; uint8_t v___x_5314_; 
v_val_5312_ = lean_ctor_get(v_x_5307_, 0);
v_val_5313_ = lean_ctor_get(v_x_5308_, 0);
v___x_5314_ = l_Lean_Parser_instBEqError_beq(v_val_5312_, v_val_5313_);
return v___x_5314_;
}
}
}
}
LEAN_EXPORT lean_object* l_Option_instBEq_beq___at___00Lean_Parser_parserOfStackFn_spec__0___boxed(lean_object* v_x_5315_, lean_object* v_x_5316_){
_start:
{
uint8_t v_res_5317_; lean_object* v_r_5318_; 
v_res_5317_ = l_Option_instBEq_beq___at___00Lean_Parser_parserOfStackFn_spec__0(v_x_5315_, v_x_5316_);
lean_dec(v_x_5316_);
lean_dec(v_x_5315_);
v_r_5318_ = lean_box(v_res_5317_);
return v_r_5318_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_parserOfStackFn___lam__0(uint8_t v___x_5319_, lean_object* v_ctx_5320_){
_start:
{
lean_object* v_toParserModuleContext_5321_; lean_object* v_toInputContext_5322_; lean_object* v_toCacheableParserContext_5323_; lean_object* v_tokens_5324_; lean_object* v___x_5326_; uint8_t v_isShared_5327_; uint8_t v_isSharedCheck_5349_; 
v_toParserModuleContext_5321_ = lean_ctor_get(v_ctx_5320_, 1);
v_toInputContext_5322_ = lean_ctor_get(v_ctx_5320_, 0);
v_toCacheableParserContext_5323_ = lean_ctor_get(v_ctx_5320_, 2);
v_tokens_5324_ = lean_ctor_get(v_ctx_5320_, 3);
v_isSharedCheck_5349_ = !lean_is_exclusive(v_ctx_5320_);
if (v_isSharedCheck_5349_ == 0)
{
v___x_5326_ = v_ctx_5320_;
v_isShared_5327_ = v_isSharedCheck_5349_;
goto v_resetjp_5325_;
}
else
{
lean_inc(v_tokens_5324_);
lean_inc(v_toCacheableParserContext_5323_);
lean_inc(v_toParserModuleContext_5321_);
lean_inc(v_toInputContext_5322_);
lean_dec(v_ctx_5320_);
v___x_5326_ = lean_box(0);
v_isShared_5327_ = v_isSharedCheck_5349_;
goto v_resetjp_5325_;
}
v_resetjp_5325_:
{
lean_object* v_env_5328_; lean_object* v_options_5329_; lean_object* v_currNamespace_5330_; lean_object* v_openDecls_5331_; lean_object* v___x_5333_; uint8_t v_isShared_5334_; uint8_t v_isSharedCheck_5348_; 
v_env_5328_ = lean_ctor_get(v_toParserModuleContext_5321_, 0);
v_options_5329_ = lean_ctor_get(v_toParserModuleContext_5321_, 1);
v_currNamespace_5330_ = lean_ctor_get(v_toParserModuleContext_5321_, 2);
v_openDecls_5331_ = lean_ctor_get(v_toParserModuleContext_5321_, 3);
v_isSharedCheck_5348_ = !lean_is_exclusive(v_toParserModuleContext_5321_);
if (v_isSharedCheck_5348_ == 0)
{
v___x_5333_ = v_toParserModuleContext_5321_;
v_isShared_5334_ = v_isSharedCheck_5348_;
goto v_resetjp_5332_;
}
else
{
lean_inc(v_openDecls_5331_);
lean_inc(v_currNamespace_5330_);
lean_inc(v_options_5329_);
lean_inc(v_env_5328_);
lean_dec(v_toParserModuleContext_5321_);
v___x_5333_ = lean_box(0);
v_isShared_5334_ = v_isSharedCheck_5348_;
goto v_resetjp_5332_;
}
v_resetjp_5332_:
{
lean_object* v___x_5335_; uint8_t v___y_5337_; lean_object* v___x_5345_; uint8_t v___x_5346_; 
v___x_5335_ = ((lean_object*)(l_Lean_Parser_evalInsideQuot___lam__0___closed__2));
v___x_5345_ = l_Lean_Parser_internal_parseQuotWithCurrentStage;
v___x_5346_ = l_Lean_Option_get___at___00Lean_Parser_evalInsideQuot_spec__1(v_options_5329_, v___x_5345_);
if (v___x_5346_ == 0)
{
uint8_t v___x_5347_; 
v___x_5347_ = 1;
v___y_5337_ = v___x_5347_;
goto v___jp_5336_;
}
else
{
v___y_5337_ = v___x_5319_;
goto v___jp_5336_;
}
v___jp_5336_:
{
lean_object* v___x_5338_; lean_object* v___x_5340_; 
v___x_5338_ = l_Lean_Options_set___at___00Lean_Parser_evalInsideQuot_spec__0(v_options_5329_, v___x_5335_, v___y_5337_);
if (v_isShared_5334_ == 0)
{
lean_ctor_set(v___x_5333_, 1, v___x_5338_);
v___x_5340_ = v___x_5333_;
goto v_reusejp_5339_;
}
else
{
lean_object* v_reuseFailAlloc_5344_; 
v_reuseFailAlloc_5344_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_5344_, 0, v_env_5328_);
lean_ctor_set(v_reuseFailAlloc_5344_, 1, v___x_5338_);
lean_ctor_set(v_reuseFailAlloc_5344_, 2, v_currNamespace_5330_);
lean_ctor_set(v_reuseFailAlloc_5344_, 3, v_openDecls_5331_);
v___x_5340_ = v_reuseFailAlloc_5344_;
goto v_reusejp_5339_;
}
v_reusejp_5339_:
{
lean_object* v___x_5342_; 
if (v_isShared_5327_ == 0)
{
lean_ctor_set(v___x_5326_, 1, v___x_5340_);
v___x_5342_ = v___x_5326_;
goto v_reusejp_5341_;
}
else
{
lean_object* v_reuseFailAlloc_5343_; 
v_reuseFailAlloc_5343_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_5343_, 0, v_toInputContext_5322_);
lean_ctor_set(v_reuseFailAlloc_5343_, 1, v___x_5340_);
lean_ctor_set(v_reuseFailAlloc_5343_, 2, v_toCacheableParserContext_5323_);
lean_ctor_set(v_reuseFailAlloc_5343_, 3, v_tokens_5324_);
v___x_5342_ = v_reuseFailAlloc_5343_;
goto v_reusejp_5341_;
}
v_reusejp_5341_:
{
return v___x_5342_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_parserOfStackFn___lam__0___boxed(lean_object* v___x_5350_, lean_object* v_ctx_5351_){
_start:
{
uint8_t v___x_1069__boxed_5352_; lean_object* v_res_5353_; 
v___x_1069__boxed_5352_ = lean_unbox(v___x_5350_);
v_res_5353_ = l_Lean_Parser_parserOfStackFn___lam__0(v___x_1069__boxed_5352_, v_ctx_5351_);
return v_res_5353_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_parserOfStackFn(lean_object* v_offset_5361_, lean_object* v_ctx_5362_, lean_object* v_s_5363_){
_start:
{
lean_object* v_stxStack_5364_; lean_object* v___x_5365_; lean_object* v___x_5366_; lean_object* v___x_5367_; uint8_t v___x_5368_; 
v_stxStack_5364_ = lean_ctor_get(v_s_5363_, 0);
v___x_5365_ = l_Lean_Parser_SyntaxStack_size(v_stxStack_5364_);
v___x_5366_ = lean_unsigned_to_nat(1u);
v___x_5367_ = lean_nat_add(v_offset_5361_, v___x_5366_);
v___x_5368_ = lean_nat_dec_lt(v___x_5365_, v___x_5367_);
lean_dec(v___x_5367_);
if (v___x_5368_ == 0)
{
lean_object* v___x_5369_; lean_object* v___x_5370_; lean_object* v___x_5371_; 
v___x_5369_ = lean_nat_sub(v___x_5365_, v_offset_5361_);
lean_dec(v___x_5365_);
v___x_5370_ = lean_nat_sub(v___x_5369_, v___x_5366_);
lean_dec(v___x_5369_);
v___x_5371_ = l_Lean_Parser_SyntaxStack_get_x21(v_stxStack_5364_, v___x_5370_);
lean_dec(v___x_5370_);
if (lean_obj_tag(v___x_5371_) == 3)
{
uint8_t v___x_5383_; lean_object* v___x_5384_; 
v___x_5383_ = 1;
lean_inc_ref(v___x_5371_);
lean_inc_ref(v_ctx_5362_);
v___x_5384_ = l_Lean_Parser_ParserContext_resolveParserName(v_ctx_5362_, v___x_5371_, v___x_5383_);
if (lean_obj_tag(v___x_5384_) == 0)
{
lean_object* v___x_5385_; lean_object* v___x_5386_; lean_object* v___x_5387_; lean_object* v___x_5388_; lean_object* v___x_5389_; lean_object* v___x_5390_; lean_object* v___x_5391_; lean_object* v___x_5392_; lean_object* v___x_5393_; 
lean_dec_ref(v_ctx_5362_);
v___x_5385_ = ((lean_object*)(l_Lean_Parser_parserOfStackFn___closed__1));
v___x_5386_ = lean_box(0);
v___x_5387_ = l_Lean_Syntax_formatStx(v___x_5371_, v___x_5386_, v___x_5368_);
v___x_5388_ = l_Std_Format_defWidth;
v___x_5389_ = lean_unsigned_to_nat(0u);
v___x_5390_ = l_Std_Format_pretty(v___x_5387_, v___x_5388_, v___x_5389_, v___x_5389_);
v___x_5391_ = lean_string_append(v___x_5385_, v___x_5390_);
lean_dec_ref(v___x_5390_);
v___x_5392_ = lean_box(0);
v___x_5393_ = l_Lean_Parser_ParserState_mkUnexpectedError(v_s_5363_, v___x_5391_, v___x_5392_, v___x_5383_);
return v___x_5393_;
}
else
{
lean_object* v_head_5394_; lean_object* v_tail_5395_; lean_object* v_iniSz_5396_; lean_object* v_s_5398_; 
v_head_5394_ = lean_ctor_get(v___x_5384_, 0);
lean_inc(v_head_5394_);
v_tail_5395_ = lean_ctor_get(v___x_5384_, 1);
lean_inc(v_tail_5395_);
lean_dec_ref_known(v___x_5384_, 2);
v_iniSz_5396_ = l_Lean_Parser_ParserState_stackSize(v_s_5363_);
switch(lean_obj_tag(v_head_5394_))
{
case 0:
{
if (lean_obj_tag(v_tail_5395_) == 0)
{
lean_object* v_cat_5408_; lean_object* v___x_5409_; 
lean_dec_ref_known(v___x_5371_, 4);
v_cat_5408_ = lean_ctor_get(v_head_5394_, 0);
lean_inc(v_cat_5408_);
lean_dec_ref_known(v_head_5394_, 1);
v___x_5409_ = l_Lean_Parser_categoryParserFn(v_cat_5408_, v_ctx_5362_, v_s_5363_);
v_s_5398_ = v___x_5409_;
goto v___jp_5397_;
}
else
{
lean_dec_ref_known(v_tail_5395_, 2);
lean_dec_ref_known(v_head_5394_, 1);
lean_dec(v_iniSz_5396_);
lean_dec_ref(v_ctx_5362_);
goto v___jp_5372_;
}
}
case 1:
{
if (lean_obj_tag(v_tail_5395_) == 0)
{
lean_object* v_decl_5410_; lean_object* v___x_5411_; lean_object* v___f_5412_; lean_object* v___x_5413_; lean_object* v___x_5414_; lean_object* v___x_5415_; 
lean_dec_ref_known(v___x_5371_, 4);
v_decl_5410_ = lean_ctor_get(v_head_5394_, 0);
lean_inc(v_decl_5410_);
lean_dec_ref_known(v_head_5394_, 1);
v___x_5411_ = lean_box(v___x_5368_);
v___f_5412_ = lean_alloc_closure((void*)(l_Lean_Parser_parserOfStackFn___lam__0___boxed), 2, 1);
lean_closure_set(v___f_5412_, 0, v___x_5411_);
v___x_5413_ = lean_box(0);
v___x_5414_ = lean_alloc_closure((void*)(l_Lean_Parser_evalParserConstUnsafe), 4, 2);
lean_closure_set(v___x_5414_, 0, v_decl_5410_);
lean_closure_set(v___x_5414_, 1, v___x_5413_);
v___x_5415_ = l_Lean_Parser_adaptUncacheableContextFn(v___f_5412_, v___x_5414_, v_ctx_5362_, v_s_5363_);
v_s_5398_ = v___x_5415_;
goto v___jp_5397_;
}
else
{
lean_dec_ref_known(v_tail_5395_, 2);
lean_dec_ref_known(v_head_5394_, 1);
lean_dec(v_iniSz_5396_);
lean_dec_ref(v_ctx_5362_);
goto v___jp_5372_;
}
}
default: 
{
if (lean_obj_tag(v_tail_5395_) == 0)
{
lean_object* v_p_5416_; 
v_p_5416_ = lean_ctor_get(v_head_5394_, 0);
lean_inc_ref(v_p_5416_);
lean_dec_ref_known(v_head_5394_, 1);
if (lean_obj_tag(v_p_5416_) == 0)
{
lean_object* v_p_5417_; lean_object* v_fn_5418_; lean_object* v___x_5419_; 
lean_dec_ref_known(v___x_5371_, 4);
v_p_5417_ = lean_ctor_get(v_p_5416_, 0);
lean_inc(v_p_5417_);
lean_dec_ref_known(v_p_5416_, 1);
v_fn_5418_ = lean_ctor_get(v_p_5417_, 1);
lean_inc_ref(v_fn_5418_);
lean_dec(v_p_5417_);
v___x_5419_ = lean_apply_2(v_fn_5418_, v_ctx_5362_, v_s_5363_);
v_s_5398_ = v___x_5419_;
goto v___jp_5397_;
}
else
{
lean_object* v___x_5420_; lean_object* v___x_5421_; lean_object* v___x_5422_; lean_object* v___x_5423_; lean_object* v___x_5424_; lean_object* v___x_5425_; lean_object* v___x_5426_; lean_object* v___x_5427_; lean_object* v___x_5428_; lean_object* v___x_5429_; lean_object* v___x_5430_; 
lean_dec_ref(v_p_5416_);
lean_dec(v_iniSz_5396_);
lean_dec_ref(v_ctx_5362_);
v___x_5420_ = ((lean_object*)(l_Lean_Parser_parserOfStackFn___closed__3));
v___x_5421_ = lean_box(0);
v___x_5422_ = l_Lean_Syntax_formatStx(v___x_5371_, v___x_5421_, v___x_5368_);
v___x_5423_ = l_Std_Format_defWidth;
v___x_5424_ = lean_unsigned_to_nat(0u);
v___x_5425_ = l_Std_Format_pretty(v___x_5422_, v___x_5423_, v___x_5424_, v___x_5424_);
v___x_5426_ = lean_string_append(v___x_5420_, v___x_5425_);
lean_dec_ref(v___x_5425_);
v___x_5427_ = ((lean_object*)(l_Lean_Parser_parserOfStackFn___closed__4));
v___x_5428_ = lean_string_append(v___x_5426_, v___x_5427_);
v___x_5429_ = lean_box(0);
v___x_5430_ = l_Lean_Parser_ParserState_mkUnexpectedError(v_s_5363_, v___x_5428_, v___x_5429_, v___x_5383_);
return v___x_5430_;
}
}
else
{
lean_dec_ref_known(v_tail_5395_, 2);
lean_dec_ref_known(v_head_5394_, 1);
lean_dec(v_iniSz_5396_);
lean_dec_ref(v_ctx_5362_);
goto v___jp_5372_;
}
}
}
v___jp_5397_:
{
lean_object* v_errorMsg_5399_; lean_object* v___x_5400_; uint8_t v___x_5401_; 
v_errorMsg_5399_ = lean_ctor_get(v_s_5398_, 4);
v___x_5400_ = lean_box(0);
v___x_5401_ = l_Option_instBEq_beq___at___00Lean_Parser_parserOfStackFn_spec__0(v_errorMsg_5399_, v___x_5400_);
if (v___x_5401_ == 0)
{
lean_dec(v_iniSz_5396_);
return v_s_5398_;
}
else
{
lean_object* v___x_5402_; lean_object* v___x_5403_; uint8_t v___x_5404_; 
v___x_5402_ = l_Lean_Parser_ParserState_stackSize(v_s_5398_);
v___x_5403_ = lean_nat_add(v_iniSz_5396_, v___x_5366_);
lean_dec(v_iniSz_5396_);
v___x_5404_ = lean_nat_dec_eq(v___x_5402_, v___x_5403_);
lean_dec(v___x_5403_);
lean_dec(v___x_5402_);
if (v___x_5404_ == 0)
{
lean_object* v___x_5405_; lean_object* v___x_5406_; lean_object* v___x_5407_; 
v___x_5405_ = ((lean_object*)(l_Lean_Parser_parserOfStackFn___closed__2));
v___x_5406_ = lean_box(0);
v___x_5407_ = l_Lean_Parser_ParserState_mkUnexpectedError(v_s_5398_, v___x_5405_, v___x_5406_, v___x_5401_);
return v___x_5407_;
}
else
{
return v_s_5398_;
}
}
}
}
}
else
{
lean_object* v___x_5431_; lean_object* v___x_5432_; uint8_t v___x_5433_; lean_object* v___x_5434_; 
lean_dec(v___x_5371_);
lean_dec_ref(v_ctx_5362_);
v___x_5431_ = ((lean_object*)(l_Lean_Parser_parserOfStackFn___closed__5));
v___x_5432_ = lean_box(0);
v___x_5433_ = 1;
v___x_5434_ = l_Lean_Parser_ParserState_mkUnexpectedError(v_s_5363_, v___x_5431_, v___x_5432_, v___x_5433_);
return v___x_5434_;
}
v___jp_5372_:
{
lean_object* v___x_5373_; lean_object* v___x_5374_; lean_object* v___x_5375_; lean_object* v___x_5376_; lean_object* v___x_5377_; lean_object* v___x_5378_; lean_object* v___x_5379_; lean_object* v___x_5380_; uint8_t v___x_5381_; lean_object* v___x_5382_; 
v___x_5373_ = ((lean_object*)(l_Lean_Parser_parserOfStackFn___closed__0));
v___x_5374_ = lean_box(0);
v___x_5375_ = l_Lean_Syntax_formatStx(v___x_5371_, v___x_5374_, v___x_5368_);
v___x_5376_ = l_Std_Format_defWidth;
v___x_5377_ = lean_unsigned_to_nat(0u);
v___x_5378_ = l_Std_Format_pretty(v___x_5375_, v___x_5376_, v___x_5377_, v___x_5377_);
v___x_5379_ = lean_string_append(v___x_5373_, v___x_5378_);
lean_dec_ref(v___x_5378_);
v___x_5380_ = lean_box(0);
v___x_5381_ = 1;
v___x_5382_ = l_Lean_Parser_ParserState_mkUnexpectedError(v_s_5363_, v___x_5379_, v___x_5380_, v___x_5381_);
return v___x_5382_;
}
}
else
{
lean_object* v___x_5435_; lean_object* v___x_5436_; lean_object* v___x_5437_; 
lean_dec(v___x_5365_);
lean_dec_ref(v_ctx_5362_);
v___x_5435_ = ((lean_object*)(l_Lean_Parser_parserOfStackFn___closed__6));
v___x_5436_ = lean_box(0);
v___x_5437_ = l_Lean_Parser_ParserState_mkUnexpectedError(v_s_5363_, v___x_5435_, v___x_5436_, v___x_5368_);
return v___x_5437_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_parserOfStackFn___boxed(lean_object* v_offset_5438_, lean_object* v_ctx_5439_, lean_object* v_s_5440_){
_start:
{
lean_object* v_res_5441_; 
v_res_5441_ = l_Lean_Parser_parserOfStackFn(v_offset_5438_, v_ctx_5439_, v_s_5440_);
lean_dec(v_offset_5438_);
return v_res_5441_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_parserOfStack___lam__0(lean_object* v_prec_5442_, lean_object* v_x_5443_){
_start:
{
lean_object* v_quotDepth_5444_; uint8_t v_suppressInsideQuot_5445_; lean_object* v_savedPos_x3f_5446_; lean_object* v_forbiddenTks_5447_; lean_object* v___x_5449_; uint8_t v_isShared_5450_; uint8_t v_isSharedCheck_5454_; 
v_quotDepth_5444_ = lean_ctor_get(v_x_5443_, 1);
v_suppressInsideQuot_5445_ = lean_ctor_get_uint8(v_x_5443_, sizeof(void*)*4);
v_savedPos_x3f_5446_ = lean_ctor_get(v_x_5443_, 2);
v_forbiddenTks_5447_ = lean_ctor_get(v_x_5443_, 3);
v_isSharedCheck_5454_ = !lean_is_exclusive(v_x_5443_);
if (v_isSharedCheck_5454_ == 0)
{
lean_object* v_unused_5455_; 
v_unused_5455_ = lean_ctor_get(v_x_5443_, 0);
lean_dec(v_unused_5455_);
v___x_5449_ = v_x_5443_;
v_isShared_5450_ = v_isSharedCheck_5454_;
goto v_resetjp_5448_;
}
else
{
lean_inc(v_forbiddenTks_5447_);
lean_inc(v_savedPos_x3f_5446_);
lean_inc(v_quotDepth_5444_);
lean_dec(v_x_5443_);
v___x_5449_ = lean_box(0);
v_isShared_5450_ = v_isSharedCheck_5454_;
goto v_resetjp_5448_;
}
v_resetjp_5448_:
{
lean_object* v___x_5452_; 
if (v_isShared_5450_ == 0)
{
lean_ctor_set(v___x_5449_, 0, v_prec_5442_);
v___x_5452_ = v___x_5449_;
goto v_reusejp_5451_;
}
else
{
lean_object* v_reuseFailAlloc_5453_; 
v_reuseFailAlloc_5453_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_5453_, 0, v_prec_5442_);
lean_ctor_set(v_reuseFailAlloc_5453_, 1, v_quotDepth_5444_);
lean_ctor_set(v_reuseFailAlloc_5453_, 2, v_savedPos_x3f_5446_);
lean_ctor_set(v_reuseFailAlloc_5453_, 3, v_forbiddenTks_5447_);
lean_ctor_set_uint8(v_reuseFailAlloc_5453_, sizeof(void*)*4, v_suppressInsideQuot_5445_);
v___x_5452_ = v_reuseFailAlloc_5453_;
goto v_reusejp_5451_;
}
v_reusejp_5451_:
{
return v___x_5452_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_parserOfStack___lam__1(lean_object* v___y_5456_){
_start:
{
lean_inc(v___y_5456_);
return v___y_5456_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_parserOfStack___lam__1___boxed(lean_object* v___y_5457_){
_start:
{
lean_object* v_res_5458_; 
v_res_5458_ = l_Lean_Parser_parserOfStack___lam__1(v___y_5457_);
lean_dec(v___y_5457_);
return v_res_5458_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_parserOfStack___lam__2(lean_object* v___y_5459_){
_start:
{
lean_inc_ref(v___y_5459_);
return v___y_5459_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_parserOfStack___lam__2___boxed(lean_object* v___y_5460_){
_start:
{
lean_object* v_res_5461_; 
v_res_5461_ = l_Lean_Parser_parserOfStack___lam__2(v___y_5460_);
lean_dec_ref(v___y_5460_);
return v_res_5461_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_parserOfStack(lean_object* v_offset_5468_, lean_object* v_prec_5469_){
_start:
{
lean_object* v___f_5470_; lean_object* v___x_5471_; lean_object* v___x_5472_; lean_object* v___x_5473_; lean_object* v___x_5474_; 
v___f_5470_ = lean_alloc_closure((void*)(l_Lean_Parser_parserOfStack___lam__0), 2, 1);
lean_closure_set(v___f_5470_, 0, v_prec_5469_);
v___x_5471_ = ((lean_object*)(l_Lean_Parser_parserOfStack___closed__2));
v___x_5472_ = lean_alloc_closure((void*)(l_Lean_Parser_parserOfStackFn___boxed), 3, 1);
lean_closure_set(v___x_5472_, 0, v_offset_5468_);
v___x_5473_ = lean_alloc_closure((void*)(l_Lean_Parser_adaptCacheableContextFn), 4, 2);
lean_closure_set(v___x_5473_, 0, v___f_5470_);
lean_closure_set(v___x_5473_, 1, v___x_5472_);
v___x_5474_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5474_, 0, v___x_5471_);
lean_ctor_set(v___x_5474_, 1, v___x_5473_);
return v___x_5474_;
}
}
lean_object* runtime_initialize_Lean_Parser_Basic(uint8_t builtin);
lean_object* runtime_initialize_Lean_ScopedEnvExtension(uint8_t builtin);
lean_object* runtime_initialize_Lean_BuiltinDocAttr(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Parser_Extension(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Parser_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_ScopedEnvExtension(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_BuiltinDocAttr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Extension_0__Lean_Parser_initFn_00___x40_Lean_Parser_Extension_3332318574____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Parser_builtinTokenTable = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Parser_builtinTokenTable);
lean_dec_ref(res);
res = l___private_Lean_Parser_Extension_0__Lean_Parser_initFn_00___x40_Lean_Parser_Extension_848551512____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Parser_builtinSyntaxNodeKindSetRef = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Parser_builtinSyntaxNodeKindSetRef);
lean_dec_ref(res);
res = l___private_Lean_Parser_Extension_0__Lean_Parser_initFn_00___x40_Lean_Parser_Extension_3496418232____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Extension_0__Lean_Parser_initFn_00___x40_Lean_Parser_Extension_3941088830____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Parser_builtinParserCategoriesRef = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Parser_builtinParserCategoriesRef);
lean_dec_ref(res);
l_Lean_Parser_ParserExtension_instInhabitedState_default = _init_l_Lean_Parser_ParserExtension_instInhabitedState_default();
lean_mark_persistent(l_Lean_Parser_ParserExtension_instInhabitedState_default);
l_Lean_Parser_ParserExtension_instInhabitedState = _init_l_Lean_Parser_ParserExtension_instInhabitedState();
lean_mark_persistent(l_Lean_Parser_ParserExtension_instInhabitedState);
res = l___private_Lean_Parser_Extension_0__Lean_Parser_initFn_00___x40_Lean_Parser_Extension_1840072248____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Parser_parserAliasesRef = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Parser_parserAliasesRef);
lean_dec_ref(res);
res = l___private_Lean_Parser_Extension_0__Lean_Parser_initFn_00___x40_Lean_Parser_Extension_1409780179____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Parser_parserAlias2kindRef = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Parser_parserAlias2kindRef);
lean_dec_ref(res);
res = l___private_Lean_Parser_Extension_0__Lean_Parser_initFn_00___x40_Lean_Parser_Extension_1856488369____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Parser_parserAliases2infoRef = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Parser_parserAliases2infoRef);
lean_dec_ref(res);
res = l___private_Lean_Parser_Extension_0__Lean_Parser_initFn_00___x40_Lean_Parser_Extension_917526378____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Parser_parserAttributeHooks = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Parser_parserAttributeHooks);
lean_dec_ref(res);
res = l___private_Lean_Parser_Extension_0__Lean_Parser_initFn_00___x40_Lean_Parser_Extension_3646333153____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Extension_0__Lean_Parser_initFn_00___x40_Lean_Parser_Extension_3789407938____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Extension_0__Lean_Parser_initFn_00___x40_Lean_Parser_Extension_227734417____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Parser_parserExtension = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Parser_parserExtension);
lean_dec_ref(res);
res = l___private_Lean_Parser_Extension_0__Lean_Parser_initFn_00___x40_Lean_Parser_Extension_4243742150____hygCtx___hyg_4_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Parser_internal_parseQuotWithCurrentStage = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Parser_internal_parseQuotWithCurrentStage);
lean_dec_ref(res);
res = l___private_Lean_Parser_Extension_0__Lean_Parser_initFn_00___x40_Lean_Parser_Extension_767730617____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Extension_0__Lean_Parser_initFn_00___x40_Lean_Parser_Extension_3896994716____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Extension_0__Lean_Parser_initFn_00___x40_Lean_Parser_Extension_346849000____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Extension_0__Lean_Parser_initFn_00___x40_Lean_Parser_Extension_3431364690____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Extension_0__Lean_Parser_initFn_00___x40_Lean_Parser_Extension_2342493449____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Extension_0__Lean_Parser_initFn_00___x40_Lean_Parser_Extension_3226070615____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Extension_0__Lean_Parser_initFn_00___x40_Lean_Parser_Extension_1918044636____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Parser_aliasExtension = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Parser_aliasExtension);
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Parser_Extension(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
l_Lean_Parser_mkInputContext___auto__1 = _init_l_Lean_Parser_mkInputContext___auto__1();
lean_mark_persistent(l_Lean_Parser_mkInputContext___auto__1);
l_Lean_Parser_registerBuiltinParserAttribute___auto__1 = _init_l_Lean_Parser_registerBuiltinParserAttribute___auto__1();
lean_mark_persistent(l_Lean_Parser_registerBuiltinParserAttribute___auto__1);
l_Lean_Parser_mkParserAttributeImpl___auto__1 = _init_l_Lean_Parser_mkParserAttributeImpl___auto__1();
lean_mark_persistent(l_Lean_Parser_mkParserAttributeImpl___auto__1);
l_Lean_Parser_registerBuiltinDynamicParserAttribute___auto__1 = _init_l_Lean_Parser_registerBuiltinDynamicParserAttribute___auto__1();
lean_mark_persistent(l_Lean_Parser_registerBuiltinDynamicParserAttribute___auto__1);
l_Lean_Parser_registerParserCategory___auto__1 = _init_l_Lean_Parser_registerParserCategory___auto__1();
lean_mark_persistent(l_Lean_Parser_registerParserCategory___auto__1);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Parser_Basic(uint8_t builtin);
lean_object* initialize_Lean_ScopedEnvExtension(uint8_t builtin);
lean_object* initialize_Lean_BuiltinDocAttr(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Parser_Extension(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Parser_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_ScopedEnvExtension(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_BuiltinDocAttr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Parser_Extension(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Parser_Extension(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Parser_Extension(builtin);
}
#ifdef __cplusplus
}
#endif

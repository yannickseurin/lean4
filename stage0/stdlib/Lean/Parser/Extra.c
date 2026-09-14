// Lean compiler output
// Module: Lean.Parser.Extra
// Imports: public import Lean.PrettyPrinter.Formatter public import Lean.PrettyPrinter.Parenthesizer import all Lean.Parser.Types import all Lean.Parser.Basic import all Lean.Parser.Extension public meta import Lean.Hygiene
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
lean_object* l_Lean_PrettyPrinter_Parenthesizer_categoryParser_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_skip_parenthesizer___redArg();
lean_object* l_Lean_PrettyPrinter_Formatter_andthen_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_pushWhitespace___redArg(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addBuiltinDocString(lean_object*, lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
lean_object* l_String_Slice_trimAscii(lean_object*);
lean_object* lean_string_utf8_extract_fast(lean_object*, lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_symbolNoAntiquot_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_tokenWithAntiquot_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_checkNoWsBefore_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_manyNoAntiquot_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_node_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_leadingNode_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_withAntiquotSuffixSplice_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_withAntiquot_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_sepByNoAntiquot_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_pushLine___redArg(lean_object*);
lean_object* l_Lean_Syntax_MonadTraverser_goLeft___at___00Lean_PrettyPrinter_Parenthesizer_visitArgs_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_symbolNoAntiquot_parenthesizer___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_node_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_checkNoImmediateColon_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_orelse_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_identNoAntiquot_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_orelse_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_checkPrec_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_node_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_setLhsPrec_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_notFollowedBy_parenthesizer___redArg();
lean_object* l_Lean_PrettyPrinter_Formatter_node_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_visitToken___redArg(lean_object*);
extern lean_object* l_Lean_Parser_skip;
lean_object* l_Lean_Syntax_MonadTraverser_goLeft___at___00Lean_PrettyPrinter_Formatter_visitArgs_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Parser_rawIdentNoAntiquot;
lean_object* l_Lean_Parser_mkAntiquot(lean_object*, lean_object*, uint8_t, uint8_t);
lean_object* l_Lean_Parser_withAntiquot(lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_symbolNoAntiquot_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_categoryParser_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_orelse_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_String_toRawSubstring_x27(lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* l_Lean_Std_Format_getIndent(lean_object*);
lean_object* lean_int_sub(lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_indent(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Parser_identNoAntiquot;
lean_object* l_Lean_Parser_checkNoWsBefore(lean_object*);
lean_object* l_Lean_Parser_andthen(lean_object*, lean_object*);
lean_object* l_Lean_Parser_symbol(lean_object*);
lean_object* l_Lean_Parser_withAntiquotSpliceAndSuffix(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_optionalNoAntiquot(lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_PrettyPrinter_formatterAttribute;
lean_object* l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_tokenWithAntiquot_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_node(lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_visitArgs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_resetLeadWord___redArg(lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_symbolNoAntiquot_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_checkNoImmediateColon_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_orelse_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_manyNoAntiquot_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_identNoAntiquot_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_charLitNoAntiquot_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_withAntiquotSuffixSplice_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_sepByNoAntiquot_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArgs(lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* l_List_range(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_Syntax_Traverser_left(lean_object*);
lean_object* lean_nat_mod(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
extern lean_object* l_Lean_PrettyPrinter_backtrackExceptionId;
uint8_t l_Lean_instBEqInternalExceptionId_beq(lean_object*, lean_object*);
lean_object* lean_st_ref_swap(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
uint8_t l_Lean_Exception_isRuntime(lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_visitArgs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_pushAlign___redArg(uint8_t, lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
uint8_t l_Lean_Syntax_matchesNull(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lean_PrettyPrinter_Formatter_fill(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_checkColGe(lean_object*);
extern lean_object* l_Lean_Parser_pushNone;
lean_object* l_Lean_Parser_checkLinebreakBefore(lean_object*);
lean_object* l_Lean_Parser_checkColEq(lean_object*);
lean_object* l_Lean_Parser_orelse(lean_object*, lean_object*);
lean_object* l_Lean_Parser_sepBy(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Parser_withPosition(lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_concat(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
lean_object* l_Lean_Syntax_node2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_scientificLitNoAntiquot_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_manyNoAntiquot_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Parser_numLitNoAntiquot;
lean_object* l_Lean_PrettyPrinter_Parenthesizer_checkColGe_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_checkLinebreakBefore_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_checkColEq_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_withPosition_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_checkColGe_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Macro_throwError___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mkArray0___redArg();
lean_object* l_Lean_addMacroScope(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkIdentFrom(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Syntax_node3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Meta_Defs_0__Lean_getEscapedNameParts_x3f(lean_object*, lean_object*);
lean_object* l_Lean_quoteNameMk(lean_object*);
lean_object* lean_string_intercalate(lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_mkNameLit(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_TSyntax_getId(lean_object*);
lean_object* l_Lean_Macro_resolveGlobalName(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_TSyntax_getString(lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getOptional_x3f(lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isNone(lean_object*);
lean_object* l_Lean_Parser_sepBy1(lean_object*, lean_object*, lean_object*, uint8_t);
extern lean_object* l_Lean_Parser_charLitNoAntiquot;
lean_object* l_Lean_Parser_registerAlias(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_registerAlias(lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_registerAlias(lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_fill___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_group___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_manyNoAntiquot_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_strLitNoAntiquot_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_group(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_notFollowedBy_formatter___redArg();
lean_object* l_Lean_PrettyPrinter_Parenthesizer_unicodeSymbolNoAntiquot_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Parser_scientificLitNoAntiquot;
lean_object* l_Lean_Parser_manyNoAntiquot(lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_numLitNoAntiquot_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_nameLitNoAntiquot_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Parser_hygieneInfoNoAntiquot;
lean_object* l_Lean_Parser_notFollowedBy(lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_optionalNoAntiquot_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_unicodeSymbolNoAntiquot_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Parser_nameLitNoAntiquot;
lean_object* l_Lean_Parser_many1NoAntiquot(lean_object*);
extern lean_object* l_Lean_Parser_hexnumNoAntiquot;
lean_object* l_Lean_PrettyPrinter_Formatter_rawIdentNoAntiquot_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_PrettyPrinter_parenthesizerAttribute;
extern lean_object* l_Lean_Parser_strLitNoAntiquot;
LEAN_EXPORT lean_object* l_Lean_Parser_leadingNode_formatter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_leadingNode_formatter___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_leadingNode_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_leadingNode_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Parser_termParser_formatter___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "term"};
static const lean_object* l_Lean_Parser_termParser_formatter___redArg___closed__0 = (const lean_object*)&l_Lean_Parser_termParser_formatter___redArg___closed__0_value;
static const lean_ctor_object l_Lean_Parser_termParser_formatter___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_termParser_formatter___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(187, 230, 181, 162, 253, 146, 122, 119)}};
static const lean_object* l_Lean_Parser_termParser_formatter___redArg___closed__1 = (const lean_object*)&l_Lean_Parser_termParser_formatter___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Parser_termParser_formatter___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_termParser_formatter___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_termParser_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_termParser_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_termParser_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_termParser_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Parser_commandParser_formatter___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "command"};
static const lean_object* l_Lean_Parser_commandParser_formatter___redArg___closed__0 = (const lean_object*)&l_Lean_Parser_commandParser_formatter___redArg___closed__0_value;
static const lean_ctor_object l_Lean_Parser_commandParser_formatter___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_commandParser_formatter___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(29, 69, 134, 125, 237, 175, 69, 70)}};
static const lean_object* l_Lean_Parser_commandParser_formatter___redArg___closed__1 = (const lean_object*)&l_Lean_Parser_commandParser_formatter___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Parser_commandParser_formatter___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_commandParser_formatter___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_commandParser_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_commandParser_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_commandParser_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_commandParser_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_atomic_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_atomic_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_setExpected_formatter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_setExpected_formatter___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_setExpected_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_setExpected_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_symbol_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_symbol_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_adaptCacheableContext_formatter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_adaptCacheableContext_formatter___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_adaptCacheableContext_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_adaptCacheableContext_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_addQuotDepth_formatter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_addQuotDepth_formatter___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_addQuotDepth_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_addQuotDepth_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_decQuotDepth_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_decQuotDepth_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Parser_antiquotNestedExpr_formatter___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_termParser_formatter___redArg___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Parser_antiquotNestedExpr_formatter___closed__0 = (const lean_object*)&l_Lean_Parser_antiquotNestedExpr_formatter___closed__0_value;
static const lean_string_object l_Lean_Parser_antiquotNestedExpr_formatter___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "antiquotNestedExpr"};
static const lean_object* l_Lean_Parser_antiquotNestedExpr_formatter___closed__1 = (const lean_object*)&l_Lean_Parser_antiquotNestedExpr_formatter___closed__1_value;
static const lean_ctor_object l_Lean_Parser_antiquotNestedExpr_formatter___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_antiquotNestedExpr_formatter___closed__1_value),LEAN_SCALAR_PTR_LITERAL(4, 217, 111, 200, 191, 162, 168, 125)}};
static const lean_object* l_Lean_Parser_antiquotNestedExpr_formatter___closed__2 = (const lean_object*)&l_Lean_Parser_antiquotNestedExpr_formatter___closed__2_value;
static const lean_string_object l_Lean_Parser_antiquotNestedExpr_formatter___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "("};
static const lean_object* l_Lean_Parser_antiquotNestedExpr_formatter___closed__3 = (const lean_object*)&l_Lean_Parser_antiquotNestedExpr_formatter___closed__3_value;
static const lean_closure_object l_Lean_Parser_antiquotNestedExpr_formatter___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Formatter_symbolNoAntiquot_formatter___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Parser_antiquotNestedExpr_formatter___closed__3_value)} };
static const lean_object* l_Lean_Parser_antiquotNestedExpr_formatter___closed__4 = (const lean_object*)&l_Lean_Parser_antiquotNestedExpr_formatter___closed__4_value;
static const lean_string_object l_Lean_Parser_antiquotNestedExpr_formatter___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l_Lean_Parser_antiquotNestedExpr_formatter___closed__5 = (const lean_object*)&l_Lean_Parser_antiquotNestedExpr_formatter___closed__5_value;
static const lean_closure_object l_Lean_Parser_antiquotNestedExpr_formatter___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Formatter_symbolNoAntiquot_formatter___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Parser_antiquotNestedExpr_formatter___closed__5_value)} };
static const lean_object* l_Lean_Parser_antiquotNestedExpr_formatter___closed__6 = (const lean_object*)&l_Lean_Parser_antiquotNestedExpr_formatter___closed__6_value;
static const lean_closure_object l_Lean_Parser_antiquotNestedExpr_formatter___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Parser_antiquotNestedExpr_formatter___closed__0_value),((lean_object*)&l_Lean_Parser_antiquotNestedExpr_formatter___closed__6_value)} };
static const lean_object* l_Lean_Parser_antiquotNestedExpr_formatter___closed__7 = (const lean_object*)&l_Lean_Parser_antiquotNestedExpr_formatter___closed__7_value;
static const lean_closure_object l_Lean_Parser_antiquotNestedExpr_formatter___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Parser_antiquotNestedExpr_formatter___closed__4_value),((lean_object*)&l_Lean_Parser_antiquotNestedExpr_formatter___closed__7_value)} };
static const lean_object* l_Lean_Parser_antiquotNestedExpr_formatter___closed__8 = (const lean_object*)&l_Lean_Parser_antiquotNestedExpr_formatter___closed__8_value;
LEAN_EXPORT lean_object* l_Lean_Parser_antiquotNestedExpr_formatter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_antiquotNestedExpr_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__0 = (const lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__0_value;
static const lean_string_object l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__1 = (const lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__1_value;
static const lean_string_object l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "formatter"};
static const lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__2 = (const lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__2_value;
static const lean_ctor_object l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__3_value_aux_0),((lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__3_value_aux_1),((lean_object*)&l_Lean_Parser_antiquotNestedExpr_formatter___closed__1_value),LEAN_SCALAR_PTR_LITERAL(72, 184, 198, 144, 189, 249, 117, 153)}};
static const lean_ctor_object l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__3_value_aux_2),((lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__2_value),LEAN_SCALAR_PTR_LITERAL(153, 167, 177, 159, 214, 65, 137, 70)}};
static const lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__3 = (const lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__3_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___boxed(lean_object*);
static const lean_string_object l_Lean_Parser_antiquotExpr_formatter___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "_"};
static const lean_object* l_Lean_Parser_antiquotExpr_formatter___closed__0 = (const lean_object*)&l_Lean_Parser_antiquotExpr_formatter___closed__0_value;
static const lean_closure_object l_Lean_Parser_antiquotExpr_formatter___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Formatter_symbolNoAntiquot_formatter___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Parser_antiquotExpr_formatter___closed__0_value)} };
static const lean_object* l_Lean_Parser_antiquotExpr_formatter___closed__1 = (const lean_object*)&l_Lean_Parser_antiquotExpr_formatter___closed__1_value;
static lean_once_cell_t l_Lean_Parser_antiquotExpr_formatter___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_antiquotExpr_formatter___closed__2;
LEAN_EXPORT lean_object* l_Lean_Parser_antiquotExpr_formatter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_antiquotExpr_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_nonReservedSymbol_formatter___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_nonReservedSymbol_formatter___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_nonReservedSymbol_formatter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_nonReservedSymbol_formatter___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_nonReservedSymbol_formatter(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_nonReservedSymbol_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_mkAntiquot_formatter___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_mkAntiquot_formatter___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Parser_mkAntiquot_formatter___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "antiquotName"};
static const lean_object* l_Lean_Parser_mkAntiquot_formatter___lam__1___closed__0 = (const lean_object*)&l_Lean_Parser_mkAntiquot_formatter___lam__1___closed__0_value;
static const lean_ctor_object l_Lean_Parser_mkAntiquot_formatter___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_mkAntiquot_formatter___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(67, 48, 35, 197, 163, 216, 250, 79)}};
static const lean_object* l_Lean_Parser_mkAntiquot_formatter___lam__1___closed__1 = (const lean_object*)&l_Lean_Parser_mkAntiquot_formatter___lam__1___closed__1_value;
static const lean_string_object l_Lean_Parser_mkAntiquot_formatter___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ":"};
static const lean_object* l_Lean_Parser_mkAntiquot_formatter___lam__1___closed__2 = (const lean_object*)&l_Lean_Parser_mkAntiquot_formatter___lam__1___closed__2_value;
static const lean_closure_object l_Lean_Parser_mkAntiquot_formatter___lam__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_symbol_formatter___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Parser_mkAntiquot_formatter___lam__1___closed__2_value)} };
static const lean_object* l_Lean_Parser_mkAntiquot_formatter___lam__1___closed__3 = (const lean_object*)&l_Lean_Parser_mkAntiquot_formatter___lam__1___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_Parser_mkAntiquot_formatter___lam__1(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_mkAntiquot_formatter___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_mkAntiquot_formatter___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_mkAntiquot_formatter___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_mkAntiquot_formatter___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_mkAntiquot_formatter___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Parser_mkAntiquot_formatter___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_mkAntiquot_formatter___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Parser_mkAntiquot_formatter___closed__0 = (const lean_object*)&l_Lean_Parser_mkAntiquot_formatter___closed__0_value;
static const lean_closure_object l_Lean_Parser_mkAntiquot_formatter___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Syntax_MonadTraverser_goLeft___at___00Lean_PrettyPrinter_Formatter_visitArgs_spec__1___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Parser_mkAntiquot_formatter___closed__1 = (const lean_object*)&l_Lean_Parser_mkAntiquot_formatter___closed__1_value;
static const lean_string_object l_Lean_Parser_mkAntiquot_formatter___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "antiquot"};
static const lean_object* l_Lean_Parser_mkAntiquot_formatter___closed__2 = (const lean_object*)&l_Lean_Parser_mkAntiquot_formatter___closed__2_value;
static const lean_ctor_object l_Lean_Parser_mkAntiquot_formatter___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_mkAntiquot_formatter___closed__2_value),LEAN_SCALAR_PTR_LITERAL(209, 141, 12, 45, 178, 67, 53, 106)}};
static const lean_object* l_Lean_Parser_mkAntiquot_formatter___closed__3 = (const lean_object*)&l_Lean_Parser_mkAntiquot_formatter___closed__3_value;
static const lean_string_object l_Lean_Parser_mkAntiquot_formatter___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "$"};
static const lean_object* l_Lean_Parser_mkAntiquot_formatter___closed__4 = (const lean_object*)&l_Lean_Parser_mkAntiquot_formatter___closed__4_value;
static const lean_closure_object l_Lean_Parser_mkAntiquot_formatter___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_mkAntiquot_formatter___lam__2___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Parser_mkAntiquot_formatter___closed__4_value)} };
static const lean_object* l_Lean_Parser_mkAntiquot_formatter___closed__5 = (const lean_object*)&l_Lean_Parser_mkAntiquot_formatter___closed__5_value;
static const lean_closure_object l_Lean_Parser_mkAntiquot_formatter___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_symbol_formatter___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Parser_mkAntiquot_formatter___closed__4_value)} };
static const lean_object* l_Lean_Parser_mkAntiquot_formatter___closed__6 = (const lean_object*)&l_Lean_Parser_mkAntiquot_formatter___closed__6_value;
static const lean_closure_object l_Lean_Parser_mkAntiquot_formatter___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Parser_mkAntiquot_formatter___closed__0_value),((lean_object*)&l_Lean_Parser_mkAntiquot_formatter___closed__6_value)} };
static const lean_object* l_Lean_Parser_mkAntiquot_formatter___closed__7 = (const lean_object*)&l_Lean_Parser_mkAntiquot_formatter___closed__7_value;
static const lean_closure_object l_Lean_Parser_mkAntiquot_formatter___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Formatter_manyNoAntiquot_formatter___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Parser_mkAntiquot_formatter___closed__7_value)} };
static const lean_object* l_Lean_Parser_mkAntiquot_formatter___closed__8 = (const lean_object*)&l_Lean_Parser_mkAntiquot_formatter___closed__8_value;
static lean_once_cell_t l_Lean_Parser_mkAntiquot_formatter___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_mkAntiquot_formatter___closed__9;
static const lean_string_object l_Lean_Parser_mkAntiquot_formatter___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "pseudo"};
static const lean_object* l_Lean_Parser_mkAntiquot_formatter___closed__10 = (const lean_object*)&l_Lean_Parser_mkAntiquot_formatter___closed__10_value;
static const lean_ctor_object l_Lean_Parser_mkAntiquot_formatter___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_mkAntiquot_formatter___closed__10_value),LEAN_SCALAR_PTR_LITERAL(246, 255, 48, 87, 29, 98, 48, 237)}};
static const lean_object* l_Lean_Parser_mkAntiquot_formatter___closed__11 = (const lean_object*)&l_Lean_Parser_mkAntiquot_formatter___closed__11_value;
LEAN_EXPORT lean_object* l_Lean_Parser_mkAntiquot_formatter(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_mkAntiquot_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_setExpected_parenthesizer___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_setExpected_parenthesizer___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_setExpected_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_setExpected_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_symbol_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_symbol_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_adaptCacheableContext_parenthesizer___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_adaptCacheableContext_parenthesizer___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_adaptCacheableContext_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_adaptCacheableContext_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_addQuotDepth_parenthesizer___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_addQuotDepth_parenthesizer___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_addQuotDepth_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_addQuotDepth_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_decQuotDepth_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_decQuotDepth_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_antiquotNestedExpr_parenthesizer___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_antiquotNestedExpr_parenthesizer___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Parser_antiquotNestedExpr_parenthesizer___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Parenthesizer_symbolNoAntiquot_parenthesizer___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Parser_antiquotNestedExpr_formatter___closed__3_value)} };
static const lean_object* l_Lean_Parser_antiquotNestedExpr_parenthesizer___closed__0 = (const lean_object*)&l_Lean_Parser_antiquotNestedExpr_parenthesizer___closed__0_value;
static const lean_closure_object l_Lean_Parser_antiquotNestedExpr_parenthesizer___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_antiquotNestedExpr_parenthesizer___lam__0___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Parser_antiquotNestedExpr_parenthesizer___closed__1 = (const lean_object*)&l_Lean_Parser_antiquotNestedExpr_parenthesizer___closed__1_value;
static const lean_closure_object l_Lean_Parser_antiquotNestedExpr_parenthesizer___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Parenthesizer_symbolNoAntiquot_parenthesizer___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Parser_antiquotNestedExpr_formatter___closed__5_value)} };
static const lean_object* l_Lean_Parser_antiquotNestedExpr_parenthesizer___closed__2 = (const lean_object*)&l_Lean_Parser_antiquotNestedExpr_parenthesizer___closed__2_value;
static const lean_closure_object l_Lean_Parser_antiquotNestedExpr_parenthesizer___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Parser_antiquotNestedExpr_parenthesizer___closed__1_value),((lean_object*)&l_Lean_Parser_antiquotNestedExpr_parenthesizer___closed__2_value)} };
static const lean_object* l_Lean_Parser_antiquotNestedExpr_parenthesizer___closed__3 = (const lean_object*)&l_Lean_Parser_antiquotNestedExpr_parenthesizer___closed__3_value;
static const lean_closure_object l_Lean_Parser_antiquotNestedExpr_parenthesizer___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Parser_antiquotNestedExpr_parenthesizer___closed__0_value),((lean_object*)&l_Lean_Parser_antiquotNestedExpr_parenthesizer___closed__3_value)} };
static const lean_object* l_Lean_Parser_antiquotNestedExpr_parenthesizer___closed__4 = (const lean_object*)&l_Lean_Parser_antiquotNestedExpr_parenthesizer___closed__4_value;
LEAN_EXPORT lean_object* l_Lean_Parser_antiquotNestedExpr_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_antiquotNestedExpr_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_parenthesizer__35___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "parenthesizer"};
static const lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_parenthesizer__35___closed__0 = (const lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_parenthesizer__35___closed__0_value;
static const lean_ctor_object l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_parenthesizer__35___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_parenthesizer__35___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_parenthesizer__35___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_parenthesizer__35___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_parenthesizer__35___closed__1_value_aux_1),((lean_object*)&l_Lean_Parser_antiquotNestedExpr_formatter___closed__1_value),LEAN_SCALAR_PTR_LITERAL(72, 184, 198, 144, 189, 249, 117, 153)}};
static const lean_ctor_object l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_parenthesizer__35___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_parenthesizer__35___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_parenthesizer__35___closed__0_value),LEAN_SCALAR_PTR_LITERAL(141, 86, 214, 3, 200, 227, 238, 166)}};
static const lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_parenthesizer__35___closed__1 = (const lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_parenthesizer__35___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_parenthesizer__35();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_parenthesizer__35___boxed(lean_object*);
static const lean_closure_object l_Lean_Parser_antiquotExpr_parenthesizer___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Parenthesizer_symbolNoAntiquot_parenthesizer___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Parser_antiquotExpr_formatter___closed__0_value)} };
static const lean_object* l_Lean_Parser_antiquotExpr_parenthesizer___closed__0 = (const lean_object*)&l_Lean_Parser_antiquotExpr_parenthesizer___closed__0_value;
static lean_once_cell_t l_Lean_Parser_antiquotExpr_parenthesizer___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_antiquotExpr_parenthesizer___closed__1;
LEAN_EXPORT lean_object* l_Lean_Parser_antiquotExpr_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_antiquotExpr_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_nonReservedSymbol_parenthesizer___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_nonReservedSymbol_parenthesizer___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_nonReservedSymbol_parenthesizer___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_nonReservedSymbol_parenthesizer___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_nonReservedSymbol_parenthesizer(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_nonReservedSymbol_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_mkAntiquot_parenthesizer___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_mkAntiquot_parenthesizer___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Parser_mkAntiquot_parenthesizer___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_symbol_parenthesizer___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Parser_mkAntiquot_formatter___lam__1___closed__2_value)} };
static const lean_object* l_Lean_Parser_mkAntiquot_parenthesizer___lam__1___closed__0 = (const lean_object*)&l_Lean_Parser_mkAntiquot_parenthesizer___lam__1___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Parser_mkAntiquot_parenthesizer___lam__1(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_mkAntiquot_parenthesizer___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_mkAntiquot_parenthesizer___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_mkAntiquot_parenthesizer___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Parser_mkAntiquot_parenthesizer___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Syntax_MonadTraverser_goLeft___at___00Lean_PrettyPrinter_Parenthesizer_visitArgs_spec__1___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Parser_mkAntiquot_parenthesizer___closed__0 = (const lean_object*)&l_Lean_Parser_mkAntiquot_parenthesizer___closed__0_value;
static const lean_closure_object l_Lean_Parser_mkAntiquot_parenthesizer___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_mkAntiquot_parenthesizer___lam__0___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Parser_mkAntiquot_formatter___closed__4_value)} };
static const lean_object* l_Lean_Parser_mkAntiquot_parenthesizer___closed__1 = (const lean_object*)&l_Lean_Parser_mkAntiquot_parenthesizer___closed__1_value;
static const lean_closure_object l_Lean_Parser_mkAntiquot_parenthesizer___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_symbol_parenthesizer___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Parser_mkAntiquot_formatter___closed__4_value)} };
static const lean_object* l_Lean_Parser_mkAntiquot_parenthesizer___closed__2 = (const lean_object*)&l_Lean_Parser_mkAntiquot_parenthesizer___closed__2_value;
static lean_once_cell_t l_Lean_Parser_mkAntiquot_parenthesizer___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_mkAntiquot_parenthesizer___closed__3;
static lean_once_cell_t l_Lean_Parser_mkAntiquot_parenthesizer___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_mkAntiquot_parenthesizer___closed__4;
LEAN_EXPORT lean_object* l_Lean_Parser_mkAntiquot_parenthesizer(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_mkAntiquot_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_nodeWithAntiquot_formatter(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_nodeWithAntiquot_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_nodeWithAntiquot_parenthesizer(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_nodeWithAntiquot_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Parser_mkAntiquotSplice_formatter___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "antiquot_scope"};
static const lean_object* l_Lean_Parser_mkAntiquotSplice_formatter___closed__0 = (const lean_object*)&l_Lean_Parser_mkAntiquotSplice_formatter___closed__0_value;
static const lean_ctor_object l_Lean_Parser_mkAntiquotSplice_formatter___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_mkAntiquotSplice_formatter___closed__0_value),LEAN_SCALAR_PTR_LITERAL(227, 75, 125, 66, 98, 92, 21, 108)}};
static const lean_object* l_Lean_Parser_mkAntiquotSplice_formatter___closed__1 = (const lean_object*)&l_Lean_Parser_mkAntiquotSplice_formatter___closed__1_value;
static const lean_string_object l_Lean_Parser_mkAntiquotSplice_formatter___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "["};
static const lean_object* l_Lean_Parser_mkAntiquotSplice_formatter___closed__2 = (const lean_object*)&l_Lean_Parser_mkAntiquotSplice_formatter___closed__2_value;
static const lean_closure_object l_Lean_Parser_mkAntiquotSplice_formatter___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_symbol_formatter___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Parser_mkAntiquotSplice_formatter___closed__2_value)} };
static const lean_object* l_Lean_Parser_mkAntiquotSplice_formatter___closed__3 = (const lean_object*)&l_Lean_Parser_mkAntiquotSplice_formatter___closed__3_value;
static const lean_string_object l_Lean_Parser_mkAntiquotSplice_formatter___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l_Lean_Parser_mkAntiquotSplice_formatter___closed__4 = (const lean_object*)&l_Lean_Parser_mkAntiquotSplice_formatter___closed__4_value;
static const lean_ctor_object l_Lean_Parser_mkAntiquotSplice_formatter___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_mkAntiquotSplice_formatter___closed__4_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l_Lean_Parser_mkAntiquotSplice_formatter___closed__5 = (const lean_object*)&l_Lean_Parser_mkAntiquotSplice_formatter___closed__5_value;
static const lean_string_object l_Lean_Parser_mkAntiquotSplice_formatter___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "]"};
static const lean_object* l_Lean_Parser_mkAntiquotSplice_formatter___closed__6 = (const lean_object*)&l_Lean_Parser_mkAntiquotSplice_formatter___closed__6_value;
static const lean_closure_object l_Lean_Parser_mkAntiquotSplice_formatter___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_symbol_formatter___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Parser_mkAntiquotSplice_formatter___closed__6_value)} };
static const lean_object* l_Lean_Parser_mkAntiquotSplice_formatter___closed__7 = (const lean_object*)&l_Lean_Parser_mkAntiquotSplice_formatter___closed__7_value;
LEAN_EXPORT lean_object* l_Lean_Parser_mkAntiquotSplice_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_mkAntiquotSplice_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_withAntiquotSpliceAndSuffix_formatter___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_withAntiquotSpliceAndSuffix_formatter___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_withAntiquotSpliceAndSuffix_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_withAntiquotSpliceAndSuffix_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Parser_sepByElemParser_formatter___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "sepBy"};
static const lean_object* l_Lean_Parser_sepByElemParser_formatter___closed__0 = (const lean_object*)&l_Lean_Parser_sepByElemParser_formatter___closed__0_value;
static const lean_ctor_object l_Lean_Parser_sepByElemParser_formatter___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_sepByElemParser_formatter___closed__0_value),LEAN_SCALAR_PTR_LITERAL(196, 56, 254, 223, 11, 70, 55, 147)}};
static const lean_object* l_Lean_Parser_sepByElemParser_formatter___closed__1 = (const lean_object*)&l_Lean_Parser_sepByElemParser_formatter___closed__1_value;
static const lean_string_object l_Lean_Parser_sepByElemParser_formatter___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "*"};
static const lean_object* l_Lean_Parser_sepByElemParser_formatter___closed__2 = (const lean_object*)&l_Lean_Parser_sepByElemParser_formatter___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Parser_sepByElemParser_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_sepByElemParser_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_sepBy_formatter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_sepBy_formatter___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_sepBy_formatter(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_sepBy_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Parser_mkAntiquotSplice_parenthesizer___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_symbol_parenthesizer___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Parser_mkAntiquotSplice_formatter___closed__2_value)} };
static const lean_object* l_Lean_Parser_mkAntiquotSplice_parenthesizer___closed__0 = (const lean_object*)&l_Lean_Parser_mkAntiquotSplice_parenthesizer___closed__0_value;
static const lean_closure_object l_Lean_Parser_mkAntiquotSplice_parenthesizer___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_symbol_parenthesizer___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Parser_mkAntiquotSplice_formatter___closed__6_value)} };
static const lean_object* l_Lean_Parser_mkAntiquotSplice_parenthesizer___closed__1 = (const lean_object*)&l_Lean_Parser_mkAntiquotSplice_parenthesizer___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Parser_mkAntiquotSplice_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_mkAntiquotSplice_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_withAntiquotSpliceAndSuffix_parenthesizer___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_withAntiquotSpliceAndSuffix_parenthesizer___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_withAntiquotSpliceAndSuffix_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_withAntiquotSpliceAndSuffix_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_sepByElemParser_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_sepByElemParser_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_sepBy_parenthesizer___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_sepBy_parenthesizer___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_sepBy_parenthesizer(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_sepBy_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_sepBy1_formatter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_sepBy1_formatter___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_sepBy1_formatter(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_sepBy1_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_sepBy1_parenthesizer___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_sepBy1_parenthesizer___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_sepBy1_parenthesizer(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_sepBy1_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_unicodeSymbol_formatter(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_unicodeSymbol_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_unicodeSymbol_parenthesizer(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_unicodeSymbol_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_withCache_formatter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_withCache_formatter___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_withCache_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_withCache_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_withCache_parenthesizer___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_withCache_parenthesizer___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_withCache_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_withCache_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_withResetCache_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_withResetCache_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_withResetCache_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_withResetCache_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_withPosition_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_withPosition_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_withPositionAfterLinebreak_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_withPositionAfterLinebreak_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_withoutPosition_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_withoutPosition_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_withoutPosition_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_withoutPosition_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_withForbidden_formatter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_withForbidden_formatter___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_withForbidden_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_withForbidden_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_withForbidden_parenthesizer___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_withForbidden_parenthesizer___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_withForbidden_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_withForbidden_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_withoutForbidden_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_withoutForbidden_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_withoutForbidden_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_withoutForbidden_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_incQuotDepth_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_incQuotDepth_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_incQuotDepth_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_incQuotDepth_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_suppressInsideQuot_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_suppressInsideQuot_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_suppressInsideQuot_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_suppressInsideQuot_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_evalInsideQuot_formatter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_evalInsideQuot_formatter___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_evalInsideQuot_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_evalInsideQuot_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_evalInsideQuot_parenthesizer___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_evalInsideQuot_parenthesizer___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_evalInsideQuot_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_evalInsideQuot_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_withOpen_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_withOpen_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_withOpen_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_withOpen_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_withOpenDecl_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_withOpenDecl_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_withOpenDecl_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_withOpenDecl_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_withSetOption_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_withSetOption_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_withSetOption_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_withSetOption_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_withSetOptionValue_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_withSetOptionValue_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_withSetOptionValue_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_withSetOptionValue_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_dbgTraceState_formatter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_dbgTraceState_formatter___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_dbgTraceState_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_dbgTraceState_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_dbgTraceState_parenthesizer___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_dbgTraceState_parenthesizer___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_dbgTraceState_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_dbgTraceState_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Parser_optional_formatter___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "optional"};
static const lean_object* l_Lean_Parser_optional_formatter___closed__0 = (const lean_object*)&l_Lean_Parser_optional_formatter___closed__0_value;
static const lean_ctor_object l_Lean_Parser_optional_formatter___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_optional_formatter___closed__0_value),LEAN_SCALAR_PTR_LITERAL(233, 141, 154, 50, 143, 135, 42, 252)}};
static const lean_object* l_Lean_Parser_optional_formatter___closed__1 = (const lean_object*)&l_Lean_Parser_optional_formatter___closed__1_value;
static const lean_string_object l_Lean_Parser_optional_formatter___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "\?"};
static const lean_object* l_Lean_Parser_optional_formatter___closed__2 = (const lean_object*)&l_Lean_Parser_optional_formatter___closed__2_value;
static const lean_closure_object l_Lean_Parser_optional_formatter___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_symbol_formatter___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Parser_optional_formatter___closed__2_value)} };
static const lean_object* l_Lean_Parser_optional_formatter___closed__3 = (const lean_object*)&l_Lean_Parser_optional_formatter___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_Parser_optional_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_optional_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Parser_optional_parenthesizer___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_symbol_parenthesizer___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Parser_optional_formatter___closed__2_value)} };
static const lean_object* l_Lean_Parser_optional_parenthesizer___closed__0 = (const lean_object*)&l_Lean_Parser_optional_parenthesizer___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Parser_optional_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_optional_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Parser_optional___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_optional___closed__0;
LEAN_EXPORT lean_object* l_Lean_Parser_optional(lean_object*);
static const lean_ctor_object l___private_Lean_Parser_Extra_0__Lean_Parser_optional___regBuiltin_Lean_Parser_optional_docString__1___closed__0_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Extra_0__Lean_Parser_optional___regBuiltin_Lean_Parser_optional_docString__1___closed__0_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_optional___regBuiltin_Lean_Parser_optional_docString__1___closed__0_value_aux_0),((lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Extra_0__Lean_Parser_optional___regBuiltin_Lean_Parser_optional_docString__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_optional___regBuiltin_Lean_Parser_optional_docString__1___closed__0_value_aux_1),((lean_object*)&l_Lean_Parser_optional_formatter___closed__0_value),LEAN_SCALAR_PTR_LITERAL(77, 167, 191, 130, 216, 220, 182, 40)}};
static const lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_optional___regBuiltin_Lean_Parser_optional_docString__1___closed__0 = (const lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_optional___regBuiltin_Lean_Parser_optional_docString__1___closed__0_value;
static const lean_string_object l___private_Lean_Parser_Extra_0__Lean_Parser_optional___regBuiltin_Lean_Parser_optional_docString__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 507, .m_capacity = 507, .m_length = 506, .m_data = "The parser `optional(p)`, or `(p)\?`, parses `p` if it succeeds,\notherwise it succeeds with no value.\n\nNote that because `\?` is a legal identifier character, one must write `(p)\?` or `p \?` for\nit to parse correctly. `ident\?` will not work; one must write `(ident)\?` instead.\n\nThis parser has arity 1: it produces a `nullKind` node containing either zero arguments\n(for the `none` case) or the list of arguments produced by `p`.\n(In particular, if `p` has arity 0 then the two cases are not differentiated!) "};
static const lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_optional___regBuiltin_Lean_Parser_optional_docString__1___closed__1 = (const lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_optional___regBuiltin_Lean_Parser_optional_docString__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_optional___regBuiltin_Lean_Parser_optional_docString__1();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_optional___regBuiltin_Lean_Parser_optional_docString__1___boxed(lean_object*);
static const lean_string_object l_Lean_Parser_many_formatter___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "many"};
static const lean_object* l_Lean_Parser_many_formatter___closed__0 = (const lean_object*)&l_Lean_Parser_many_formatter___closed__0_value;
static const lean_ctor_object l_Lean_Parser_many_formatter___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_many_formatter___closed__0_value),LEAN_SCALAR_PTR_LITERAL(41, 35, 40, 86, 189, 97, 244, 31)}};
static const lean_object* l_Lean_Parser_many_formatter___closed__1 = (const lean_object*)&l_Lean_Parser_many_formatter___closed__1_value;
static const lean_closure_object l_Lean_Parser_many_formatter___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_symbol_formatter___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Parser_sepByElemParser_formatter___closed__2_value)} };
static const lean_object* l_Lean_Parser_many_formatter___closed__2 = (const lean_object*)&l_Lean_Parser_many_formatter___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Parser_many_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_many_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Parser_many_parenthesizer___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_symbol_parenthesizer___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Parser_sepByElemParser_formatter___closed__2_value)} };
static const lean_object* l_Lean_Parser_many_parenthesizer___closed__0 = (const lean_object*)&l_Lean_Parser_many_parenthesizer___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Parser_many_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_many_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Parser_many___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_many___closed__0;
LEAN_EXPORT lean_object* l_Lean_Parser_many(lean_object*);
static const lean_ctor_object l___private_Lean_Parser_Extra_0__Lean_Parser_many___regBuiltin_Lean_Parser_many_docString__1___closed__0_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Extra_0__Lean_Parser_many___regBuiltin_Lean_Parser_many_docString__1___closed__0_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_many___regBuiltin_Lean_Parser_many_docString__1___closed__0_value_aux_0),((lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Extra_0__Lean_Parser_many___regBuiltin_Lean_Parser_many_docString__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_many___regBuiltin_Lean_Parser_many_docString__1___closed__0_value_aux_1),((lean_object*)&l_Lean_Parser_many_formatter___closed__0_value),LEAN_SCALAR_PTR_LITERAL(13, 114, 232, 230, 181, 52, 168, 160)}};
static const lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_many___regBuiltin_Lean_Parser_many_docString__1___closed__0 = (const lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_many___regBuiltin_Lean_Parser_many_docString__1___closed__0_value;
static const lean_string_object l___private_Lean_Parser_Extra_0__Lean_Parser_many___regBuiltin_Lean_Parser_many_docString__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 390, .m_capacity = 390, .m_length = 389, .m_data = "The parser `many(p)`, or `p*`, repeats `p` until it fails, and returns the list of results.\n\nThe argument `p` is \"auto-grouped\", meaning that if the arity is greater than 1 it will be\nautomatically replaced by `group(p)` to ensure that it produces exactly 1 value.\n\nThis parser has arity 1: it produces a `nullKind` node containing one argument for each\ninvocation of `p` (or `group(p)`). "};
static const lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_many___regBuiltin_Lean_Parser_many_docString__1___closed__1 = (const lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_many___regBuiltin_Lean_Parser_many_docString__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_many___regBuiltin_Lean_Parser_many_docString__1();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_many___regBuiltin_Lean_Parser_many_docString__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_many1_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_many1_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_many1_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_many1_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_many1(lean_object*);
static const lean_string_object l___private_Lean_Parser_Extra_0__Lean_Parser_many1___regBuiltin_Lean_Parser_many1_docString__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "many1"};
static const lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_many1___regBuiltin_Lean_Parser_many1_docString__1___closed__0 = (const lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_many1___regBuiltin_Lean_Parser_many1_docString__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Parser_Extra_0__Lean_Parser_many1___regBuiltin_Lean_Parser_many1_docString__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Extra_0__Lean_Parser_many1___regBuiltin_Lean_Parser_many1_docString__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_many1___regBuiltin_Lean_Parser_many1_docString__1___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Extra_0__Lean_Parser_many1___regBuiltin_Lean_Parser_many1_docString__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_many1___regBuiltin_Lean_Parser_many1_docString__1___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_many1___regBuiltin_Lean_Parser_many1_docString__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(83, 61, 196, 93, 201, 246, 193, 192)}};
static const lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_many1___regBuiltin_Lean_Parser_many1_docString__1___closed__1 = (const lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_many1___regBuiltin_Lean_Parser_many1_docString__1___closed__1_value;
static const lean_string_object l___private_Lean_Parser_Extra_0__Lean_Parser_many1___regBuiltin_Lean_Parser_many1_docString__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 648, .m_capacity = 648, .m_length = 647, .m_data = "The parser `many1(p)`, or `p+`, repeats `p` until it fails, and returns the list of results.\n`p` must succeed at least once, or this parser will fail.\n\nNote that this parser produces the same parse tree as the `many(p)` / `p*` combinator,\nand one matches both `p*` and `p+` using `$[ .. ]*` syntax in a syntax match.\n(There is no `$[ .. ]+` syntax.)\n\nThe argument `p` is \"auto-grouped\", meaning that if the arity is greater than 1 it will be\nautomatically replaced by `group(p)` to ensure that it produces exactly 1 value.\n\nThis parser has arity 1: it produces a `nullKind` node containing one argument for each\ninvocation of `p` (or `group(p)`). "};
static const lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_many1___regBuiltin_Lean_Parser_many1_docString__1___closed__2 = (const lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_many1___regBuiltin_Lean_Parser_many1_docString__1___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_many1___regBuiltin_Lean_Parser_many1_docString__1();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_many1___regBuiltin_Lean_Parser_many1_docString__1___boxed(lean_object*);
static const lean_string_object l_Lean_Parser_ident_formatter___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ident"};
static const lean_object* l_Lean_Parser_ident_formatter___closed__0 = (const lean_object*)&l_Lean_Parser_ident_formatter___closed__0_value;
static const lean_ctor_object l_Lean_Parser_ident_formatter___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_ident_formatter___closed__0_value),LEAN_SCALAR_PTR_LITERAL(52, 159, 208, 51, 14, 60, 6, 71)}};
static const lean_object* l_Lean_Parser_ident_formatter___closed__1 = (const lean_object*)&l_Lean_Parser_ident_formatter___closed__1_value;
static const lean_closure_object l_Lean_Parser_ident_formatter___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_mkAntiquot_formatter___boxed, .m_arity = 9, .m_num_fixed = 4, .m_objs = {((lean_object*)&l_Lean_Parser_ident_formatter___closed__0_value),((lean_object*)&l_Lean_Parser_ident_formatter___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Parser_ident_formatter___closed__2 = (const lean_object*)&l_Lean_Parser_ident_formatter___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Parser_ident_formatter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ident_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Parser_ident_parenthesizer___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_mkAntiquot_parenthesizer___boxed, .m_arity = 9, .m_num_fixed = 4, .m_objs = {((lean_object*)&l_Lean_Parser_ident_formatter___closed__0_value),((lean_object*)&l_Lean_Parser_ident_formatter___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Parser_ident_parenthesizer___closed__0 = (const lean_object*)&l_Lean_Parser_ident_parenthesizer___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Parser_ident_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ident_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Parser_ident___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_ident___closed__0;
static lean_once_cell_t l_Lean_Parser_ident___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_ident___closed__1;
LEAN_EXPORT lean_object* l_Lean_Parser_ident;
static const lean_ctor_object l___private_Lean_Parser_Extra_0__Lean_Parser_ident___regBuiltin_Lean_Parser_ident_docString__1___closed__0_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Extra_0__Lean_Parser_ident___regBuiltin_Lean_Parser_ident_docString__1___closed__0_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_ident___regBuiltin_Lean_Parser_ident_docString__1___closed__0_value_aux_0),((lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Extra_0__Lean_Parser_ident___regBuiltin_Lean_Parser_ident_docString__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_ident___regBuiltin_Lean_Parser_ident_docString__1___closed__0_value_aux_1),((lean_object*)&l_Lean_Parser_ident_formatter___closed__0_value),LEAN_SCALAR_PTR_LITERAL(24, 242, 101, 31, 193, 156, 127, 171)}};
static const lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_ident___regBuiltin_Lean_Parser_ident_docString__1___closed__0 = (const lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_ident___regBuiltin_Lean_Parser_ident_docString__1___closed__0_value;
static const lean_string_object l___private_Lean_Parser_Extra_0__Lean_Parser_ident___regBuiltin_Lean_Parser_ident_docString__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 856, .m_capacity = 856, .m_length = 845, .m_data = "The parser `ident` parses a single identifier, possibly with namespaces, such as `foo` or\n`bar.baz`. The identifier must not be a declared token, so for example it will not match `\"def\"`\nbecause `def` is a keyword token. Tokens are implicitly declared by using them in string literals\nin parser declarations, so `syntax foo := \"bla\"` will make `bla` no longer legal as an identifier.\n\nIdentifiers can contain special characters or keywords if they are escaped using the `«»` characters:\n`«def»` is an identifier named `def`, and `«x»` is treated the same as `x`. This is useful for\nusing disallowed characters in identifiers such as `«foo.bar».baz` or `«hello world»`.\n\nThis parser has arity 1: it produces a `Syntax.ident` node containing the parsed identifier.\nYou can use `TSyntax.getId` to extract the name from the resulting syntax object. "};
static const lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_ident___regBuiltin_Lean_Parser_ident_docString__1___closed__1 = (const lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_ident___regBuiltin_Lean_Parser_ident_docString__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_ident___regBuiltin_Lean_Parser_ident_docString__1();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_ident___regBuiltin_Lean_Parser_ident_docString__1___boxed(lean_object*);
static const lean_string_object l_Lean_Parser_identWithPartialTrailingDot_formatter___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "."};
static const lean_object* l_Lean_Parser_identWithPartialTrailingDot_formatter___closed__0 = (const lean_object*)&l_Lean_Parser_identWithPartialTrailingDot_formatter___closed__0_value;
static const lean_closure_object l_Lean_Parser_identWithPartialTrailingDot_formatter___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_symbol_formatter___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Parser_identWithPartialTrailingDot_formatter___closed__0_value)} };
static const lean_object* l_Lean_Parser_identWithPartialTrailingDot_formatter___closed__1 = (const lean_object*)&l_Lean_Parser_identWithPartialTrailingDot_formatter___closed__1_value;
static lean_once_cell_t l_Lean_Parser_identWithPartialTrailingDot_formatter___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_identWithPartialTrailingDot_formatter___closed__2;
static lean_once_cell_t l_Lean_Parser_identWithPartialTrailingDot_formatter___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_identWithPartialTrailingDot_formatter___closed__3;
static lean_once_cell_t l_Lean_Parser_identWithPartialTrailingDot_formatter___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_identWithPartialTrailingDot_formatter___closed__4;
static lean_once_cell_t l_Lean_Parser_identWithPartialTrailingDot_formatter___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_identWithPartialTrailingDot_formatter___closed__5;
LEAN_EXPORT lean_object* l_Lean_Parser_identWithPartialTrailingDot_formatter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_identWithPartialTrailingDot_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Parser_identWithPartialTrailingDot_parenthesizer___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_symbol_parenthesizer___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Parser_identWithPartialTrailingDot_formatter___closed__0_value)} };
static const lean_object* l_Lean_Parser_identWithPartialTrailingDot_parenthesizer___closed__0 = (const lean_object*)&l_Lean_Parser_identWithPartialTrailingDot_parenthesizer___closed__0_value;
static lean_once_cell_t l_Lean_Parser_identWithPartialTrailingDot_parenthesizer___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_identWithPartialTrailingDot_parenthesizer___closed__1;
static lean_once_cell_t l_Lean_Parser_identWithPartialTrailingDot_parenthesizer___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_identWithPartialTrailingDot_parenthesizer___closed__2;
static lean_once_cell_t l_Lean_Parser_identWithPartialTrailingDot_parenthesizer___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_identWithPartialTrailingDot_parenthesizer___closed__3;
static lean_once_cell_t l_Lean_Parser_identWithPartialTrailingDot_parenthesizer___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_identWithPartialTrailingDot_parenthesizer___closed__4;
LEAN_EXPORT lean_object* l_Lean_Parser_identWithPartialTrailingDot_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_identWithPartialTrailingDot_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Parser_identWithPartialTrailingDot___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "no space before"};
static const lean_object* l_Lean_Parser_identWithPartialTrailingDot___closed__0 = (const lean_object*)&l_Lean_Parser_identWithPartialTrailingDot___closed__0_value;
static lean_once_cell_t l_Lean_Parser_identWithPartialTrailingDot___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_identWithPartialTrailingDot___closed__1;
static lean_once_cell_t l_Lean_Parser_identWithPartialTrailingDot___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_identWithPartialTrailingDot___closed__2;
static lean_once_cell_t l_Lean_Parser_identWithPartialTrailingDot___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_identWithPartialTrailingDot___closed__3;
static lean_once_cell_t l_Lean_Parser_identWithPartialTrailingDot___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_identWithPartialTrailingDot___closed__4;
static lean_once_cell_t l_Lean_Parser_identWithPartialTrailingDot___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_identWithPartialTrailingDot___closed__5;
static lean_once_cell_t l_Lean_Parser_identWithPartialTrailingDot___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_identWithPartialTrailingDot___closed__6;
static lean_once_cell_t l_Lean_Parser_identWithPartialTrailingDot___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_identWithPartialTrailingDot___closed__7;
LEAN_EXPORT lean_object* l_Lean_Parser_identWithPartialTrailingDot;
LEAN_EXPORT lean_object* l_Lean_Parser_rawIdent_formatter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_rawIdent_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_rawIdent_parenthesizer___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_rawIdent_parenthesizer___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Parser_rawIdent_parenthesizer___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_rawIdent_parenthesizer___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Parser_rawIdent_parenthesizer___closed__0 = (const lean_object*)&l_Lean_Parser_rawIdent_parenthesizer___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Parser_rawIdent_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_rawIdent_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Parser_rawIdent___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_rawIdent___closed__0;
LEAN_EXPORT lean_object* l_Lean_Parser_rawIdent;
static const lean_string_object l_Lean_Parser_hygieneInfo_formatter___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "hygieneInfo"};
static const lean_object* l_Lean_Parser_hygieneInfo_formatter___closed__0 = (const lean_object*)&l_Lean_Parser_hygieneInfo_formatter___closed__0_value;
static const lean_ctor_object l_Lean_Parser_hygieneInfo_formatter___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_hygieneInfo_formatter___closed__0_value),LEAN_SCALAR_PTR_LITERAL(27, 64, 36, 144, 170, 151, 255, 136)}};
static const lean_object* l_Lean_Parser_hygieneInfo_formatter___closed__1 = (const lean_object*)&l_Lean_Parser_hygieneInfo_formatter___closed__1_value;
static const lean_closure_object l_Lean_Parser_hygieneInfo_formatter___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_mkAntiquot_formatter___boxed, .m_arity = 9, .m_num_fixed = 4, .m_objs = {((lean_object*)&l_Lean_Parser_hygieneInfo_formatter___closed__0_value),((lean_object*)&l_Lean_Parser_hygieneInfo_formatter___closed__1_value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Parser_hygieneInfo_formatter___closed__2 = (const lean_object*)&l_Lean_Parser_hygieneInfo_formatter___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Parser_hygieneInfo_formatter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_hygieneInfo_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Parser_hygieneInfo_parenthesizer___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_mkAntiquot_parenthesizer___boxed, .m_arity = 9, .m_num_fixed = 4, .m_objs = {((lean_object*)&l_Lean_Parser_hygieneInfo_formatter___closed__0_value),((lean_object*)&l_Lean_Parser_hygieneInfo_formatter___closed__1_value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Parser_hygieneInfo_parenthesizer___closed__0 = (const lean_object*)&l_Lean_Parser_hygieneInfo_parenthesizer___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Parser_hygieneInfo_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_hygieneInfo_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Parser_hygieneInfo___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_hygieneInfo___closed__0;
static lean_once_cell_t l_Lean_Parser_hygieneInfo___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_hygieneInfo___closed__1;
LEAN_EXPORT lean_object* l_Lean_Parser_hygieneInfo;
static const lean_ctor_object l___private_Lean_Parser_Extra_0__Lean_Parser_hygieneInfo___regBuiltin_Lean_Parser_hygieneInfo_docString__1___closed__0_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Extra_0__Lean_Parser_hygieneInfo___regBuiltin_Lean_Parser_hygieneInfo_docString__1___closed__0_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_hygieneInfo___regBuiltin_Lean_Parser_hygieneInfo_docString__1___closed__0_value_aux_0),((lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Extra_0__Lean_Parser_hygieneInfo___regBuiltin_Lean_Parser_hygieneInfo_docString__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_hygieneInfo___regBuiltin_Lean_Parser_hygieneInfo_docString__1___closed__0_value_aux_1),((lean_object*)&l_Lean_Parser_hygieneInfo_formatter___closed__0_value),LEAN_SCALAR_PTR_LITERAL(175, 96, 174, 177, 221, 86, 223, 51)}};
static const lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_hygieneInfo___regBuiltin_Lean_Parser_hygieneInfo_docString__1___closed__0 = (const lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_hygieneInfo___regBuiltin_Lean_Parser_hygieneInfo_docString__1___closed__0_value;
static const lean_string_object l___private_Lean_Parser_Extra_0__Lean_Parser_hygieneInfo___regBuiltin_Lean_Parser_hygieneInfo_docString__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1028, .m_capacity = 1028, .m_length = 1026, .m_data = "The parser `hygieneInfo` parses no text, but creates a `hygieneInfoKind` node\ncontaining an anonymous identifier as if it were parsed at the current position.\nThis identifier is modified by syntax quotations to add macro scopes like a regular identifier.\n\nThis is used to implement `have := ...` syntax: the `hygieneInfo` between the `have` and `:=`\ncollects macro scopes, which we can apply to `this` when expanding to `have this := ...`.\nSee [the language reference](lean-manual://section/macro-hygiene) for more information about\nmacro hygiene.\n\nThis is also used to implement cdot functions such as `(1 + ·)`. The opening parenthesis contains\na `hygieneInfo` node as does the cdot, which lets cdot expansion hygienically associate parentheses to cdots.\n\nThis parser has arity 1: it produces a `hygieneInfoKind` node containing an anonymous `Syntax.ident`.\nYou can use `HygieneInfo.mkIdent` to create an `Ident` from the syntax object,\nbut you can also use `TSyntax.getHygieneInfo` to get the raw name from the identifier. "};
static const lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_hygieneInfo___regBuiltin_Lean_Parser_hygieneInfo_docString__1___closed__1 = (const lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_hygieneInfo___regBuiltin_Lean_Parser_hygieneInfo_docString__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_hygieneInfo___regBuiltin_Lean_Parser_hygieneInfo_docString__1();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_hygieneInfo___regBuiltin_Lean_Parser_hygieneInfo_docString__1___boxed(lean_object*);
static const lean_string_object l_Lean_Parser_numLit_formatter___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "num"};
static const lean_object* l_Lean_Parser_numLit_formatter___closed__0 = (const lean_object*)&l_Lean_Parser_numLit_formatter___closed__0_value;
static const lean_ctor_object l_Lean_Parser_numLit_formatter___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_numLit_formatter___closed__0_value),LEAN_SCALAR_PTR_LITERAL(227, 68, 22, 222, 47, 51, 204, 84)}};
static const lean_object* l_Lean_Parser_numLit_formatter___closed__1 = (const lean_object*)&l_Lean_Parser_numLit_formatter___closed__1_value;
static const lean_closure_object l_Lean_Parser_numLit_formatter___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_mkAntiquot_formatter___boxed, .m_arity = 9, .m_num_fixed = 4, .m_objs = {((lean_object*)&l_Lean_Parser_numLit_formatter___closed__0_value),((lean_object*)&l_Lean_Parser_numLit_formatter___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Parser_numLit_formatter___closed__2 = (const lean_object*)&l_Lean_Parser_numLit_formatter___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Parser_numLit_formatter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_numLit_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Parser_numLit_parenthesizer___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_mkAntiquot_parenthesizer___boxed, .m_arity = 9, .m_num_fixed = 4, .m_objs = {((lean_object*)&l_Lean_Parser_numLit_formatter___closed__0_value),((lean_object*)&l_Lean_Parser_numLit_formatter___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Parser_numLit_parenthesizer___closed__0 = (const lean_object*)&l_Lean_Parser_numLit_parenthesizer___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Parser_numLit_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_numLit_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Parser_numLit___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_numLit___closed__0;
static lean_once_cell_t l_Lean_Parser_numLit___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_numLit___closed__1;
LEAN_EXPORT lean_object* l_Lean_Parser_numLit;
static const lean_string_object l___private_Lean_Parser_Extra_0__Lean_Parser_numLit___regBuiltin_Lean_Parser_numLit_docString__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "numLit"};
static const lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_numLit___regBuiltin_Lean_Parser_numLit_docString__1___closed__0 = (const lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_numLit___regBuiltin_Lean_Parser_numLit_docString__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Parser_Extra_0__Lean_Parser_numLit___regBuiltin_Lean_Parser_numLit_docString__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Extra_0__Lean_Parser_numLit___regBuiltin_Lean_Parser_numLit_docString__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_numLit___regBuiltin_Lean_Parser_numLit_docString__1___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Extra_0__Lean_Parser_numLit___regBuiltin_Lean_Parser_numLit_docString__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_numLit___regBuiltin_Lean_Parser_numLit_docString__1___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_numLit___regBuiltin_Lean_Parser_numLit_docString__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(55, 124, 25, 195, 9, 201, 171, 221)}};
static const lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_numLit___regBuiltin_Lean_Parser_numLit_docString__1___closed__1 = (const lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_numLit___regBuiltin_Lean_Parser_numLit_docString__1___closed__1_value;
static const lean_string_object l___private_Lean_Parser_Extra_0__Lean_Parser_numLit___regBuiltin_Lean_Parser_numLit_docString__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 335, .m_capacity = 335, .m_length = 334, .m_data = "The parser `num` parses a numeric literal in several bases:\n\n* Decimal: `129`\n* Hexadecimal: `0xdeadbeef`\n* Octal: `0o755`\n* Binary: `0b1101`\n\nThis parser has arity 1: it produces a `numLitKind` node containing an atom with the text of the\nliteral.\nYou can use `TSyntax.getNat` to extract the number from the resulting syntax object. "};
static const lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_numLit___regBuiltin_Lean_Parser_numLit_docString__1___closed__2 = (const lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_numLit___regBuiltin_Lean_Parser_numLit_docString__1___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_numLit___regBuiltin_Lean_Parser_numLit_docString__1();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_numLit___regBuiltin_Lean_Parser_numLit_docString__1___boxed(lean_object*);
static const lean_string_object l_Lean_Parser_hexnum___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "hexnum"};
static const lean_object* l_Lean_Parser_hexnum___closed__0 = (const lean_object*)&l_Lean_Parser_hexnum___closed__0_value;
static const lean_ctor_object l_Lean_Parser_hexnum___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_hexnum___closed__0_value),LEAN_SCALAR_PTR_LITERAL(152, 252, 51, 178, 203, 245, 189, 159)}};
static const lean_object* l_Lean_Parser_hexnum___closed__1 = (const lean_object*)&l_Lean_Parser_hexnum___closed__1_value;
static lean_once_cell_t l_Lean_Parser_hexnum___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_hexnum___closed__2;
static lean_once_cell_t l_Lean_Parser_hexnum___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_hexnum___closed__3;
LEAN_EXPORT lean_object* l_Lean_Parser_hexnum;
static const lean_ctor_object l___private_Lean_Parser_Extra_0__Lean_Parser_hexnum___regBuiltin_Lean_Parser_hexnum_docString__1___closed__0_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Extra_0__Lean_Parser_hexnum___regBuiltin_Lean_Parser_hexnum_docString__1___closed__0_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_hexnum___regBuiltin_Lean_Parser_hexnum_docString__1___closed__0_value_aux_0),((lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Extra_0__Lean_Parser_hexnum___regBuiltin_Lean_Parser_hexnum_docString__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_hexnum___regBuiltin_Lean_Parser_hexnum_docString__1___closed__0_value_aux_1),((lean_object*)&l_Lean_Parser_hexnum___closed__0_value),LEAN_SCALAR_PTR_LITERAL(180, 234, 249, 199, 49, 244, 72, 166)}};
static const lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_hexnum___regBuiltin_Lean_Parser_hexnum_docString__1___closed__0 = (const lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_hexnum___regBuiltin_Lean_Parser_hexnum_docString__1___closed__0_value;
static const lean_string_object l___private_Lean_Parser_Extra_0__Lean_Parser_hexnum___regBuiltin_Lean_Parser_hexnum_docString__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 385, .m_capacity = 385, .m_length = 384, .m_data = "The parser `hexnum` parses a hexadecimal numeric literal not containing the `0x` prefix.\n\nIt produces a `hexnumKind` node containing an atom with the text of the\nliteral. This parser is mainly used for creating atoms such `#<hexnum>`. Recall that `hexnum`\nis not a token and this parser must be prefixed by another parser.\n\nFor numerals such as `0xadef100a`, you should use `numLit`.\n"};
static const lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_hexnum___regBuiltin_Lean_Parser_hexnum_docString__1___closed__1 = (const lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_hexnum___regBuiltin_Lean_Parser_hexnum_docString__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_hexnum___regBuiltin_Lean_Parser_hexnum_docString__1();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_hexnum___regBuiltin_Lean_Parser_hexnum_docString__1___boxed(lean_object*);
static const lean_string_object l_Lean_Parser_scientificLit_formatter___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "scientific"};
static const lean_object* l_Lean_Parser_scientificLit_formatter___closed__0 = (const lean_object*)&l_Lean_Parser_scientificLit_formatter___closed__0_value;
static const lean_ctor_object l_Lean_Parser_scientificLit_formatter___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_scientificLit_formatter___closed__0_value),LEAN_SCALAR_PTR_LITERAL(219, 104, 254, 176, 65, 57, 101, 179)}};
static const lean_object* l_Lean_Parser_scientificLit_formatter___closed__1 = (const lean_object*)&l_Lean_Parser_scientificLit_formatter___closed__1_value;
static const lean_closure_object l_Lean_Parser_scientificLit_formatter___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_mkAntiquot_formatter___boxed, .m_arity = 9, .m_num_fixed = 4, .m_objs = {((lean_object*)&l_Lean_Parser_scientificLit_formatter___closed__0_value),((lean_object*)&l_Lean_Parser_scientificLit_formatter___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Parser_scientificLit_formatter___closed__2 = (const lean_object*)&l_Lean_Parser_scientificLit_formatter___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Parser_scientificLit_formatter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_scientificLit_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Parser_scientificLit_parenthesizer___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_mkAntiquot_parenthesizer___boxed, .m_arity = 9, .m_num_fixed = 4, .m_objs = {((lean_object*)&l_Lean_Parser_scientificLit_formatter___closed__0_value),((lean_object*)&l_Lean_Parser_scientificLit_formatter___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Parser_scientificLit_parenthesizer___closed__0 = (const lean_object*)&l_Lean_Parser_scientificLit_parenthesizer___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Parser_scientificLit_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_scientificLit_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Parser_scientificLit___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_scientificLit___closed__0;
static lean_once_cell_t l_Lean_Parser_scientificLit___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_scientificLit___closed__1;
LEAN_EXPORT lean_object* l_Lean_Parser_scientificLit;
static const lean_string_object l___private_Lean_Parser_Extra_0__Lean_Parser_scientificLit___regBuiltin_Lean_Parser_scientificLit_docString__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "scientificLit"};
static const lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_scientificLit___regBuiltin_Lean_Parser_scientificLit_docString__1___closed__0 = (const lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_scientificLit___regBuiltin_Lean_Parser_scientificLit_docString__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Parser_Extra_0__Lean_Parser_scientificLit___regBuiltin_Lean_Parser_scientificLit_docString__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Extra_0__Lean_Parser_scientificLit___regBuiltin_Lean_Parser_scientificLit_docString__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_scientificLit___regBuiltin_Lean_Parser_scientificLit_docString__1___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Extra_0__Lean_Parser_scientificLit___regBuiltin_Lean_Parser_scientificLit_docString__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_scientificLit___regBuiltin_Lean_Parser_scientificLit_docString__1___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_scientificLit___regBuiltin_Lean_Parser_scientificLit_docString__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(236, 25, 249, 160, 8, 56, 13, 159)}};
static const lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_scientificLit___regBuiltin_Lean_Parser_scientificLit_docString__1___closed__1 = (const lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_scientificLit___regBuiltin_Lean_Parser_scientificLit_docString__1___closed__1_value;
static const lean_string_object l___private_Lean_Parser_Extra_0__Lean_Parser_scientificLit___regBuiltin_Lean_Parser_scientificLit_docString__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 287, .m_capacity = 287, .m_length = 286, .m_data = "The parser `scientific` parses a scientific-notation literal, such as `1.3e-24`.\n\nThis parser has arity 1: it produces a `scientificLitKind` node containing an atom with the text\nof the literal.\nYou can use `TSyntax.getScientific` to extract the parts from the resulting syntax object. "};
static const lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_scientificLit___regBuiltin_Lean_Parser_scientificLit_docString__1___closed__2 = (const lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_scientificLit___regBuiltin_Lean_Parser_scientificLit_docString__1___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_scientificLit___regBuiltin_Lean_Parser_scientificLit_docString__1();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_scientificLit___regBuiltin_Lean_Parser_scientificLit_docString__1___boxed(lean_object*);
static const lean_string_object l_Lean_Parser_strLit_formatter___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "str"};
static const lean_object* l_Lean_Parser_strLit_formatter___closed__0 = (const lean_object*)&l_Lean_Parser_strLit_formatter___closed__0_value;
static const lean_ctor_object l_Lean_Parser_strLit_formatter___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_strLit_formatter___closed__0_value),LEAN_SCALAR_PTR_LITERAL(255, 188, 142, 1, 190, 33, 34, 128)}};
static const lean_object* l_Lean_Parser_strLit_formatter___closed__1 = (const lean_object*)&l_Lean_Parser_strLit_formatter___closed__1_value;
static const lean_closure_object l_Lean_Parser_strLit_formatter___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_mkAntiquot_formatter___boxed, .m_arity = 9, .m_num_fixed = 4, .m_objs = {((lean_object*)&l_Lean_Parser_strLit_formatter___closed__0_value),((lean_object*)&l_Lean_Parser_strLit_formatter___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Parser_strLit_formatter___closed__2 = (const lean_object*)&l_Lean_Parser_strLit_formatter___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Parser_strLit_formatter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_strLit_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Parser_strLit_parenthesizer___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_mkAntiquot_parenthesizer___boxed, .m_arity = 9, .m_num_fixed = 4, .m_objs = {((lean_object*)&l_Lean_Parser_strLit_formatter___closed__0_value),((lean_object*)&l_Lean_Parser_strLit_formatter___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Parser_strLit_parenthesizer___closed__0 = (const lean_object*)&l_Lean_Parser_strLit_parenthesizer___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Parser_strLit_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_strLit_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Parser_strLit___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_strLit___closed__0;
static lean_once_cell_t l_Lean_Parser_strLit___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_strLit___closed__1;
LEAN_EXPORT lean_object* l_Lean_Parser_strLit;
static const lean_string_object l___private_Lean_Parser_Extra_0__Lean_Parser_strLit___regBuiltin_Lean_Parser_strLit_docString__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "strLit"};
static const lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_strLit___regBuiltin_Lean_Parser_strLit_docString__1___closed__0 = (const lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_strLit___regBuiltin_Lean_Parser_strLit_docString__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Parser_Extra_0__Lean_Parser_strLit___regBuiltin_Lean_Parser_strLit_docString__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Extra_0__Lean_Parser_strLit___regBuiltin_Lean_Parser_strLit_docString__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_strLit___regBuiltin_Lean_Parser_strLit_docString__1___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Extra_0__Lean_Parser_strLit___regBuiltin_Lean_Parser_strLit_docString__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_strLit___regBuiltin_Lean_Parser_strLit_docString__1___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_strLit___regBuiltin_Lean_Parser_strLit_docString__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(63, 157, 94, 66, 135, 29, 115, 44)}};
static const lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_strLit___regBuiltin_Lean_Parser_strLit_docString__1___closed__1 = (const lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_strLit___regBuiltin_Lean_Parser_strLit_docString__1___closed__1_value;
static const lean_string_object l___private_Lean_Parser_Extra_0__Lean_Parser_strLit___regBuiltin_Lean_Parser_strLit_docString__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 494, .m_capacity = 494, .m_length = 491, .m_data = "The parser `str` parses a string literal, such as `\"foo\"` or `\"\\r\\n\"`. Strings can contain\nC-style escapes like `\\n`, `\\\"`, `\\x00` or `\\u2665`, as well as literal unicode characters like `∈`.\nNewlines in a string are interpreted literally.\n\nThis parser has arity 1: it produces a `strLitKind` node containing an atom with the raw\nliteral (including the quote marks and without interpreting the escapes).\nYou can use `TSyntax.getString` to decode the string from the resulting syntax object. "};
static const lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_strLit___regBuiltin_Lean_Parser_strLit_docString__1___closed__2 = (const lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_strLit___regBuiltin_Lean_Parser_strLit_docString__1___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_strLit___regBuiltin_Lean_Parser_strLit_docString__1();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_strLit___regBuiltin_Lean_Parser_strLit_docString__1___boxed(lean_object*);
static const lean_string_object l_Lean_Parser_charLit_formatter___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "char"};
static const lean_object* l_Lean_Parser_charLit_formatter___closed__0 = (const lean_object*)&l_Lean_Parser_charLit_formatter___closed__0_value;
static const lean_ctor_object l_Lean_Parser_charLit_formatter___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_charLit_formatter___closed__0_value),LEAN_SCALAR_PTR_LITERAL(43, 243, 213, 66, 253, 140, 152, 232)}};
static const lean_object* l_Lean_Parser_charLit_formatter___closed__1 = (const lean_object*)&l_Lean_Parser_charLit_formatter___closed__1_value;
static const lean_closure_object l_Lean_Parser_charLit_formatter___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_mkAntiquot_formatter___boxed, .m_arity = 9, .m_num_fixed = 4, .m_objs = {((lean_object*)&l_Lean_Parser_charLit_formatter___closed__0_value),((lean_object*)&l_Lean_Parser_charLit_formatter___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Parser_charLit_formatter___closed__2 = (const lean_object*)&l_Lean_Parser_charLit_formatter___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Parser_charLit_formatter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_charLit_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Parser_charLit_parenthesizer___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_mkAntiquot_parenthesizer___boxed, .m_arity = 9, .m_num_fixed = 4, .m_objs = {((lean_object*)&l_Lean_Parser_charLit_formatter___closed__0_value),((lean_object*)&l_Lean_Parser_charLit_formatter___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Parser_charLit_parenthesizer___closed__0 = (const lean_object*)&l_Lean_Parser_charLit_parenthesizer___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Parser_charLit_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_charLit_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Parser_charLit___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_charLit___closed__0;
static lean_once_cell_t l_Lean_Parser_charLit___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_charLit___closed__1;
LEAN_EXPORT lean_object* l_Lean_Parser_charLit;
static const lean_string_object l___private_Lean_Parser_Extra_0__Lean_Parser_charLit___regBuiltin_Lean_Parser_charLit_docString__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "charLit"};
static const lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_charLit___regBuiltin_Lean_Parser_charLit_docString__1___closed__0 = (const lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_charLit___regBuiltin_Lean_Parser_charLit_docString__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Parser_Extra_0__Lean_Parser_charLit___regBuiltin_Lean_Parser_charLit_docString__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Extra_0__Lean_Parser_charLit___regBuiltin_Lean_Parser_charLit_docString__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_charLit___regBuiltin_Lean_Parser_charLit_docString__1___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Extra_0__Lean_Parser_charLit___regBuiltin_Lean_Parser_charLit_docString__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_charLit___regBuiltin_Lean_Parser_charLit_docString__1___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_charLit___regBuiltin_Lean_Parser_charLit_docString__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(73, 82, 20, 217, 44, 105, 253, 153)}};
static const lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_charLit___regBuiltin_Lean_Parser_charLit_docString__1___closed__1 = (const lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_charLit___regBuiltin_Lean_Parser_charLit_docString__1___closed__1_value;
static const lean_string_object l___private_Lean_Parser_Extra_0__Lean_Parser_charLit___regBuiltin_Lean_Parser_charLit_docString__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 604, .m_capacity = 604, .m_length = 595, .m_data = "The parser `char` parses a character literal, such as `'a'` or `'\\n'`. Character literals can\ncontain C-style escapes like `\\n`, `\\\"`, `\\x00` or `\\u2665`, as well as literal unicode characters\nlike `∈`, but must evaluate to a single unicode codepoint, so `'♥'` is allowed but `'❤️'` is not\n(since it is two codepoints but one grapheme cluster).\n\nThis parser has arity 1: it produces a `charLitKind` node containing an atom with the raw\nliteral (including the quote marks and without interpreting the escapes).\nYou can use `TSyntax.getChar` to decode the string from the resulting syntax object. "};
static const lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_charLit___regBuiltin_Lean_Parser_charLit_docString__1___closed__2 = (const lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_charLit___regBuiltin_Lean_Parser_charLit_docString__1___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_charLit___regBuiltin_Lean_Parser_charLit_docString__1();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_charLit___regBuiltin_Lean_Parser_charLit_docString__1___boxed(lean_object*);
static const lean_string_object l_Lean_Parser_nameLit_formatter___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "name"};
static const lean_object* l_Lean_Parser_nameLit_formatter___closed__0 = (const lean_object*)&l_Lean_Parser_nameLit_formatter___closed__0_value;
static const lean_ctor_object l_Lean_Parser_nameLit_formatter___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_nameLit_formatter___closed__0_value),LEAN_SCALAR_PTR_LITERAL(84, 246, 234, 130, 97, 205, 144, 82)}};
static const lean_object* l_Lean_Parser_nameLit_formatter___closed__1 = (const lean_object*)&l_Lean_Parser_nameLit_formatter___closed__1_value;
static const lean_closure_object l_Lean_Parser_nameLit_formatter___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_mkAntiquot_formatter___boxed, .m_arity = 9, .m_num_fixed = 4, .m_objs = {((lean_object*)&l_Lean_Parser_nameLit_formatter___closed__0_value),((lean_object*)&l_Lean_Parser_nameLit_formatter___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Parser_nameLit_formatter___closed__2 = (const lean_object*)&l_Lean_Parser_nameLit_formatter___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Parser_nameLit_formatter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_nameLit_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Parser_nameLit_parenthesizer___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_mkAntiquot_parenthesizer___boxed, .m_arity = 9, .m_num_fixed = 4, .m_objs = {((lean_object*)&l_Lean_Parser_nameLit_formatter___closed__0_value),((lean_object*)&l_Lean_Parser_nameLit_formatter___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Parser_nameLit_parenthesizer___closed__0 = (const lean_object*)&l_Lean_Parser_nameLit_parenthesizer___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Parser_nameLit_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_nameLit_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Parser_nameLit___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_nameLit___closed__0;
static lean_once_cell_t l_Lean_Parser_nameLit___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_nameLit___closed__1;
LEAN_EXPORT lean_object* l_Lean_Parser_nameLit;
static const lean_string_object l___private_Lean_Parser_Extra_0__Lean_Parser_nameLit___regBuiltin_Lean_Parser_nameLit_docString__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "nameLit"};
static const lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_nameLit___regBuiltin_Lean_Parser_nameLit_docString__1___closed__0 = (const lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_nameLit___regBuiltin_Lean_Parser_nameLit_docString__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Parser_Extra_0__Lean_Parser_nameLit___regBuiltin_Lean_Parser_nameLit_docString__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Extra_0__Lean_Parser_nameLit___regBuiltin_Lean_Parser_nameLit_docString__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_nameLit___regBuiltin_Lean_Parser_nameLit_docString__1___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Extra_0__Lean_Parser_nameLit___regBuiltin_Lean_Parser_nameLit_docString__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_nameLit___regBuiltin_Lean_Parser_nameLit_docString__1___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_nameLit___regBuiltin_Lean_Parser_nameLit_docString__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(52, 229, 203, 158, 195, 74, 86, 122)}};
static const lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_nameLit___regBuiltin_Lean_Parser_nameLit_docString__1___closed__1 = (const lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_nameLit___regBuiltin_Lean_Parser_nameLit_docString__1___closed__1_value;
static const lean_string_object l___private_Lean_Parser_Extra_0__Lean_Parser_nameLit___regBuiltin_Lean_Parser_nameLit_docString__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 340, .m_capacity = 340, .m_length = 339, .m_data = "The parser `name` parses a name literal like `` `foo``. The syntax is the same as for identifiers\n(see `ident`) but with a leading backquote.\n\nThis parser has arity 1: it produces a `nameLitKind` node containing the raw literal\n(including the backquote).\nYou can use `TSyntax.getName` to extract the name from the resulting syntax object. "};
static const lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_nameLit___regBuiltin_Lean_Parser_nameLit_docString__1___closed__2 = (const lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_nameLit___regBuiltin_Lean_Parser_nameLit_docString__1___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_nameLit___regBuiltin_Lean_Parser_nameLit_docString__1();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_nameLit___regBuiltin_Lean_Parser_nameLit_docString__1___boxed(lean_object*);
static const lean_string_object l_Lean_Parser_group_formatter___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "group"};
static const lean_object* l_Lean_Parser_group_formatter___closed__0 = (const lean_object*)&l_Lean_Parser_group_formatter___closed__0_value;
static const lean_ctor_object l_Lean_Parser_group_formatter___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_group_formatter___closed__0_value),LEAN_SCALAR_PTR_LITERAL(206, 113, 20, 57, 188, 177, 187, 30)}};
static const lean_object* l_Lean_Parser_group_formatter___closed__1 = (const lean_object*)&l_Lean_Parser_group_formatter___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Parser_group_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_group_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_group_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_group_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_group(lean_object*);
static const lean_ctor_object l___private_Lean_Parser_Extra_0__Lean_Parser_group___regBuiltin_Lean_Parser_group_docString__1___closed__0_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Extra_0__Lean_Parser_group___regBuiltin_Lean_Parser_group_docString__1___closed__0_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_group___regBuiltin_Lean_Parser_group_docString__1___closed__0_value_aux_0),((lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Extra_0__Lean_Parser_group___regBuiltin_Lean_Parser_group_docString__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_group___regBuiltin_Lean_Parser_group_docString__1___closed__0_value_aux_1),((lean_object*)&l_Lean_Parser_group_formatter___closed__0_value),LEAN_SCALAR_PTR_LITERAL(146, 0, 118, 179, 21, 142, 182, 74)}};
static const lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_group___regBuiltin_Lean_Parser_group_docString__1___closed__0 = (const lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_group___regBuiltin_Lean_Parser_group_docString__1___closed__0_value;
static const lean_string_object l___private_Lean_Parser_Extra_0__Lean_Parser_group___regBuiltin_Lean_Parser_group_docString__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 323, .m_capacity = 323, .m_length = 322, .m_data = "The parser `group(p)` parses the same thing as `p`, but it wraps the results in a `groupKind`\nnode.\n\nThis parser always has arity 1, even if `p` does not. Parsers like `p*` are automatically\nrewritten to `group(p)*` if `p` does not have arity 1, so that the results from separate invocations\nof `p` can be differentiated. "};
static const lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_group___regBuiltin_Lean_Parser_group_docString__1___closed__1 = (const lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_group___regBuiltin_Lean_Parser_group_docString__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_group___regBuiltin_Lean_Parser_group_docString__1();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_group___regBuiltin_Lean_Parser_group_docString__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_many1Indent_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_many1Indent_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_many1Indent_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_many1Indent_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Parser_many1Indent___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "irrelevant"};
static const lean_object* l_Lean_Parser_many1Indent___closed__0 = (const lean_object*)&l_Lean_Parser_many1Indent___closed__0_value;
static lean_once_cell_t l_Lean_Parser_many1Indent___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_many1Indent___closed__1;
LEAN_EXPORT lean_object* l_Lean_Parser_many1Indent(lean_object*);
static const lean_string_object l___private_Lean_Parser_Extra_0__Lean_Parser_many1Indent___regBuiltin_Lean_Parser_many1Indent_docString__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "many1Indent"};
static const lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_many1Indent___regBuiltin_Lean_Parser_many1Indent_docString__1___closed__0 = (const lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_many1Indent___regBuiltin_Lean_Parser_many1Indent_docString__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Parser_Extra_0__Lean_Parser_many1Indent___regBuiltin_Lean_Parser_many1Indent_docString__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Extra_0__Lean_Parser_many1Indent___regBuiltin_Lean_Parser_many1Indent_docString__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_many1Indent___regBuiltin_Lean_Parser_many1Indent_docString__1___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Extra_0__Lean_Parser_many1Indent___regBuiltin_Lean_Parser_many1Indent_docString__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_many1Indent___regBuiltin_Lean_Parser_many1Indent_docString__1___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_many1Indent___regBuiltin_Lean_Parser_many1Indent_docString__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(149, 214, 77, 50, 137, 69, 220, 172)}};
static const lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_many1Indent___regBuiltin_Lean_Parser_many1Indent_docString__1___closed__1 = (const lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_many1Indent___regBuiltin_Lean_Parser_many1Indent_docString__1___closed__1_value;
static const lean_string_object l___private_Lean_Parser_Extra_0__Lean_Parser_many1Indent___regBuiltin_Lean_Parser_many1Indent_docString__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 343, .m_capacity = 343, .m_length = 342, .m_data = "The parser `many1Indent(p)` is equivalent to `withPosition((colGe p)+)`. This has the effect of\nparsing one or more occurrences of `p`, where each subsequent `p` parse needs to be indented\nthe same or more than the first parse.\n\nThis parser has arity 1, and returns a list of the results from `p`.\n`p` is \"auto-grouped\" if it is not arity 1. "};
static const lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_many1Indent___regBuiltin_Lean_Parser_many1Indent_docString__1___closed__2 = (const lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_many1Indent___regBuiltin_Lean_Parser_many1Indent_docString__1___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_many1Indent___regBuiltin_Lean_Parser_many1Indent_docString__1();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_many1Indent___regBuiltin_Lean_Parser_many1Indent_docString__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_manyIndent_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_manyIndent_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_manyIndent_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_manyIndent_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_manyIndent(lean_object*);
static const lean_string_object l___private_Lean_Parser_Extra_0__Lean_Parser_manyIndent___regBuiltin_Lean_Parser_manyIndent_docString__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "manyIndent"};
static const lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_manyIndent___regBuiltin_Lean_Parser_manyIndent_docString__1___closed__0 = (const lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_manyIndent___regBuiltin_Lean_Parser_manyIndent_docString__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Parser_Extra_0__Lean_Parser_manyIndent___regBuiltin_Lean_Parser_manyIndent_docString__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Extra_0__Lean_Parser_manyIndent___regBuiltin_Lean_Parser_manyIndent_docString__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_manyIndent___regBuiltin_Lean_Parser_manyIndent_docString__1___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Extra_0__Lean_Parser_manyIndent___regBuiltin_Lean_Parser_manyIndent_docString__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_manyIndent___regBuiltin_Lean_Parser_manyIndent_docString__1___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_manyIndent___regBuiltin_Lean_Parser_manyIndent_docString__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(51, 71, 18, 147, 220, 40, 152, 21)}};
static const lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_manyIndent___regBuiltin_Lean_Parser_manyIndent_docString__1___closed__1 = (const lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_manyIndent___regBuiltin_Lean_Parser_manyIndent_docString__1___closed__1_value;
static const lean_string_object l___private_Lean_Parser_Extra_0__Lean_Parser_manyIndent___regBuiltin_Lean_Parser_manyIndent_docString__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 343, .m_capacity = 343, .m_length = 342, .m_data = "The parser `manyIndent(p)` is equivalent to `withPosition((colGe p)*)`. This has the effect of\nparsing zero or more occurrences of `p`, where each subsequent `p` parse needs to be indented\nthe same or more than the first parse.\n\nThis parser has arity 1, and returns a list of the results from `p`.\n`p` is \"auto-grouped\" if it is not arity 1. "};
static const lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_manyIndent___regBuiltin_Lean_Parser_manyIndent_docString__1___closed__2 = (const lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_manyIndent___regBuiltin_Lean_Parser_manyIndent_docString__1___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_manyIndent___regBuiltin_Lean_Parser_manyIndent_docString__1();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_manyIndent___regBuiltin_Lean_Parser_manyIndent_docString__1___boxed(lean_object*);
static lean_once_cell_t l_Lean_Parser_sepByIndent___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_sepByIndent___closed__0;
static const lean_string_object l_Lean_Parser_sepByIndent___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "line break"};
static const lean_object* l_Lean_Parser_sepByIndent___closed__1 = (const lean_object*)&l_Lean_Parser_sepByIndent___closed__1_value;
static lean_once_cell_t l_Lean_Parser_sepByIndent___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_sepByIndent___closed__2;
static lean_once_cell_t l_Lean_Parser_sepByIndent___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_sepByIndent___closed__3;
static lean_once_cell_t l_Lean_Parser_sepByIndent___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_sepByIndent___closed__4;
LEAN_EXPORT lean_object* l_Lean_Parser_sepByIndent(lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Parser_sepByIndent___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_sepBy1Indent(lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Parser_sepBy1Indent___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_getCur___at___00Lean_Parser_sepByIndent_formatter_spec__0___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_getCur___at___00Lean_Parser_sepByIndent_formatter_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_getCur___at___00Lean_Parser_sepByIndent_formatter_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_getCur___at___00Lean_Parser_sepByIndent_formatter_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_goLeft___at___00Lean_Parser_sepByIndent_formatter_spec__2___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_goLeft___at___00Lean_Parser_sepByIndent_formatter_spec__2___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_goLeft___at___00Lean_Parser_sepByIndent_formatter_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_goLeft___at___00Lean_Parser_sepByIndent_formatter_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_List_forIn_x27_loop___at___00Lean_Parser_sepByIndent_formatter_spec__3___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "\n"};
static const lean_object* l_List_forIn_x27_loop___at___00Lean_Parser_sepByIndent_formatter_spec__3___redArg___closed__0 = (const lean_object*)&l_List_forIn_x27_loop___at___00Lean_Parser_sepByIndent_formatter_spec__3___redArg___closed__0_value;
static const lean_ctor_object l_List_forIn_x27_loop___at___00Lean_Parser_sepByIndent_formatter_spec__3___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_List_forIn_x27_loop___at___00Lean_Parser_sepByIndent_formatter_spec__3___redArg___closed__0_value)}};
static const lean_object* l_List_forIn_x27_loop___at___00Lean_Parser_sepByIndent_formatter_spec__3___redArg___closed__1 = (const lean_object*)&l_List_forIn_x27_loop___at___00Lean_Parser_sepByIndent_formatter_spec__3___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Parser_sepByIndent_formatter_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Parser_sepByIndent_formatter_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_sepByIndent_formatter___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_sepByIndent_formatter___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Parser_sepByIndent_formatter_spec__4(lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Parser_sepByIndent_formatter_spec__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Parser_sepByIndent_formatter_spec__1___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Parser_sepByIndent_formatter_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_sepByIndent_formatter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_sepByIndent_formatter___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_sepByIndent_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_sepByIndent_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Parser_sepByIndent_formatter_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Parser_sepByIndent_formatter_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Parser_sepByIndent_formatter_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Parser_sepByIndent_formatter_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_sepBy1Indent_formatter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_sepBy1Indent_formatter___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_sepBy1Indent_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_sepBy1Indent_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Parser_sepByIndent_parenthesizer___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_sepByIndent_parenthesizer___closed__0;
static lean_once_cell_t l_Lean_Parser_sepByIndent_parenthesizer___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_sepByIndent_parenthesizer___closed__1;
LEAN_EXPORT lean_object* l_Lean_Parser_sepByIndent_parenthesizer(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_sepByIndent_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_sepBy1Indent_parenthesizer(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_sepBy1Indent_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_notSymbol_formatter___redArg();
LEAN_EXPORT lean_object* l_Lean_Parser_notSymbol_formatter___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_notSymbol_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_notSymbol_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_notSymbol_parenthesizer___redArg();
LEAN_EXPORT lean_object* l_Lean_Parser_notSymbol_parenthesizer___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_notSymbol_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_notSymbol_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_notSymbol(lean_object*);
static const lean_string_object l_Lean_Parser_patternIgnore_formatter___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "patternIgnore"};
static const lean_object* l_Lean_Parser_patternIgnore_formatter___closed__0 = (const lean_object*)&l_Lean_Parser_patternIgnore_formatter___closed__0_value;
static const lean_ctor_object l_Lean_Parser_patternIgnore_formatter___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_patternIgnore_formatter___closed__0_value),LEAN_SCALAR_PTR_LITERAL(195, 83, 213, 191, 208, 4, 123, 240)}};
static const lean_object* l_Lean_Parser_patternIgnore_formatter___closed__1 = (const lean_object*)&l_Lean_Parser_patternIgnore_formatter___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Parser_patternIgnore_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_patternIgnore_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_patternIgnore_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_patternIgnore_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_patternIgnore(lean_object*);
static const lean_ctor_object l___private_Lean_Parser_Extra_0__Lean_Parser_patternIgnore___regBuiltin_Lean_Parser_patternIgnore_docString__1___closed__0_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Extra_0__Lean_Parser_patternIgnore___regBuiltin_Lean_Parser_patternIgnore_docString__1___closed__0_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_patternIgnore___regBuiltin_Lean_Parser_patternIgnore_docString__1___closed__0_value_aux_0),((lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Extra_0__Lean_Parser_patternIgnore___regBuiltin_Lean_Parser_patternIgnore_docString__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_patternIgnore___regBuiltin_Lean_Parser_patternIgnore_docString__1___closed__0_value_aux_1),((lean_object*)&l_Lean_Parser_patternIgnore_formatter___closed__0_value),LEAN_SCALAR_PTR_LITERAL(7, 215, 73, 33, 82, 129, 241, 190)}};
static const lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_patternIgnore___regBuiltin_Lean_Parser_patternIgnore_docString__1___closed__0 = (const lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_patternIgnore___regBuiltin_Lean_Parser_patternIgnore_docString__1___closed__0_value;
static const lean_string_object l___private_Lean_Parser_Extra_0__Lean_Parser_patternIgnore___regBuiltin_Lean_Parser_patternIgnore_docString__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 83, .m_capacity = 83, .m_length = 82, .m_data = "No-op parser combinator that annotates subtrees to be ignored in syntax patterns. "};
static const lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_patternIgnore___regBuiltin_Lean_Parser_patternIgnore_docString__1___closed__1 = (const lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_patternIgnore___regBuiltin_Lean_Parser_patternIgnore_docString__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_patternIgnore___regBuiltin_Lean_Parser_patternIgnore_docString__1();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_patternIgnore___regBuiltin_Lean_Parser_patternIgnore_docString__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ppHardSpace;
static const lean_string_object l___private_Lean_Parser_Extra_0__Lean_Parser_ppHardSpace___regBuiltin_Lean_Parser_ppHardSpace_docString__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "ppHardSpace"};
static const lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_ppHardSpace___regBuiltin_Lean_Parser_ppHardSpace_docString__1___closed__0 = (const lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_ppHardSpace___regBuiltin_Lean_Parser_ppHardSpace_docString__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Parser_Extra_0__Lean_Parser_ppHardSpace___regBuiltin_Lean_Parser_ppHardSpace_docString__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Extra_0__Lean_Parser_ppHardSpace___regBuiltin_Lean_Parser_ppHardSpace_docString__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_ppHardSpace___regBuiltin_Lean_Parser_ppHardSpace_docString__1___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Extra_0__Lean_Parser_ppHardSpace___regBuiltin_Lean_Parser_ppHardSpace_docString__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_ppHardSpace___regBuiltin_Lean_Parser_ppHardSpace_docString__1___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_ppHardSpace___regBuiltin_Lean_Parser_ppHardSpace_docString__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(187, 124, 7, 8, 102, 65, 59, 148)}};
static const lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_ppHardSpace___regBuiltin_Lean_Parser_ppHardSpace_docString__1___closed__1 = (const lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_ppHardSpace___regBuiltin_Lean_Parser_ppHardSpace_docString__1___closed__1_value;
static const lean_string_object l___private_Lean_Parser_Extra_0__Lean_Parser_ppHardSpace___regBuiltin_Lean_Parser_ppHardSpace_docString__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 76, .m_capacity = 76, .m_length = 75, .m_data = "No-op parser that advises the pretty printer to emit a non-breaking space. "};
static const lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_ppHardSpace___regBuiltin_Lean_Parser_ppHardSpace_docString__1___closed__2 = (const lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_ppHardSpace___regBuiltin_Lean_Parser_ppHardSpace_docString__1___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_ppHardSpace___regBuiltin_Lean_Parser_ppHardSpace_docString__1();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_ppHardSpace___regBuiltin_Lean_Parser_ppHardSpace_docString__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ppSpace;
static const lean_string_object l___private_Lean_Parser_Extra_0__Lean_Parser_ppSpace___regBuiltin_Lean_Parser_ppSpace_docString__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "ppSpace"};
static const lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_ppSpace___regBuiltin_Lean_Parser_ppSpace_docString__1___closed__0 = (const lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_ppSpace___regBuiltin_Lean_Parser_ppSpace_docString__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Parser_Extra_0__Lean_Parser_ppSpace___regBuiltin_Lean_Parser_ppSpace_docString__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Extra_0__Lean_Parser_ppSpace___regBuiltin_Lean_Parser_ppSpace_docString__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_ppSpace___regBuiltin_Lean_Parser_ppSpace_docString__1___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Extra_0__Lean_Parser_ppSpace___regBuiltin_Lean_Parser_ppSpace_docString__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_ppSpace___regBuiltin_Lean_Parser_ppSpace_docString__1___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_ppSpace___regBuiltin_Lean_Parser_ppSpace_docString__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(187, 171, 103, 94, 255, 150, 197, 120)}};
static const lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_ppSpace___regBuiltin_Lean_Parser_ppSpace_docString__1___closed__1 = (const lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_ppSpace___regBuiltin_Lean_Parser_ppSpace_docString__1___closed__1_value;
static const lean_string_object l___private_Lean_Parser_Extra_0__Lean_Parser_ppSpace___regBuiltin_Lean_Parser_ppSpace_docString__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 79, .m_capacity = 79, .m_length = 78, .m_data = "No-op parser that advises the pretty printer to emit a space/soft line break. "};
static const lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_ppSpace___regBuiltin_Lean_Parser_ppSpace_docString__1___closed__2 = (const lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_ppSpace___regBuiltin_Lean_Parser_ppSpace_docString__1___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_ppSpace___regBuiltin_Lean_Parser_ppSpace_docString__1();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_ppSpace___regBuiltin_Lean_Parser_ppSpace_docString__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ppLine;
static const lean_string_object l___private_Lean_Parser_Extra_0__Lean_Parser_ppLine___regBuiltin_Lean_Parser_ppLine_docString__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "ppLine"};
static const lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_ppLine___regBuiltin_Lean_Parser_ppLine_docString__1___closed__0 = (const lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_ppLine___regBuiltin_Lean_Parser_ppLine_docString__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Parser_Extra_0__Lean_Parser_ppLine___regBuiltin_Lean_Parser_ppLine_docString__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Extra_0__Lean_Parser_ppLine___regBuiltin_Lean_Parser_ppLine_docString__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_ppLine___regBuiltin_Lean_Parser_ppLine_docString__1___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Extra_0__Lean_Parser_ppLine___regBuiltin_Lean_Parser_ppLine_docString__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_ppLine___regBuiltin_Lean_Parser_ppLine_docString__1___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_ppLine___regBuiltin_Lean_Parser_ppLine_docString__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(1, 221, 204, 69, 5, 170, 223, 165)}};
static const lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_ppLine___regBuiltin_Lean_Parser_ppLine_docString__1___closed__1 = (const lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_ppLine___regBuiltin_Lean_Parser_ppLine_docString__1___closed__1_value;
static const lean_string_object l___private_Lean_Parser_Extra_0__Lean_Parser_ppLine___regBuiltin_Lean_Parser_ppLine_docString__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 73, .m_capacity = 73, .m_length = 72, .m_data = "No-op parser that advises the pretty printer to emit a hard line break. "};
static const lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_ppLine___regBuiltin_Lean_Parser_ppLine_docString__1___closed__2 = (const lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_ppLine___regBuiltin_Lean_Parser_ppLine_docString__1___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_ppLine___regBuiltin_Lean_Parser_ppLine_docString__1();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_ppLine___regBuiltin_Lean_Parser_ppLine_docString__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ppRealFill(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ppRealFill___boxed(lean_object*);
static const lean_string_object l___private_Lean_Parser_Extra_0__Lean_Parser_ppRealFill___regBuiltin_Lean_Parser_ppRealFill_docString__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "ppRealFill"};
static const lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_ppRealFill___regBuiltin_Lean_Parser_ppRealFill_docString__1___closed__0 = (const lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_ppRealFill___regBuiltin_Lean_Parser_ppRealFill_docString__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Parser_Extra_0__Lean_Parser_ppRealFill___regBuiltin_Lean_Parser_ppRealFill_docString__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Extra_0__Lean_Parser_ppRealFill___regBuiltin_Lean_Parser_ppRealFill_docString__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_ppRealFill___regBuiltin_Lean_Parser_ppRealFill_docString__1___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Extra_0__Lean_Parser_ppRealFill___regBuiltin_Lean_Parser_ppRealFill_docString__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_ppRealFill___regBuiltin_Lean_Parser_ppRealFill_docString__1___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_ppRealFill___regBuiltin_Lean_Parser_ppRealFill_docString__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(33, 4, 104, 76, 91, 82, 68, 154)}};
static const lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_ppRealFill___regBuiltin_Lean_Parser_ppRealFill_docString__1___closed__1 = (const lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_ppRealFill___regBuiltin_Lean_Parser_ppRealFill_docString__1___closed__1_value;
static const lean_string_object l___private_Lean_Parser_Extra_0__Lean_Parser_ppRealFill___regBuiltin_Lean_Parser_ppRealFill_docString__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 87, .m_capacity = 87, .m_length = 86, .m_data = "No-op parser combinator that advises the pretty printer to emit a `Format.fill` node. "};
static const lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_ppRealFill___regBuiltin_Lean_Parser_ppRealFill_docString__1___closed__2 = (const lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_ppRealFill___regBuiltin_Lean_Parser_ppRealFill_docString__1___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_ppRealFill___regBuiltin_Lean_Parser_ppRealFill_docString__1();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_ppRealFill___regBuiltin_Lean_Parser_ppRealFill_docString__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ppRealGroup(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ppRealGroup___boxed(lean_object*);
static const lean_string_object l___private_Lean_Parser_Extra_0__Lean_Parser_ppRealGroup___regBuiltin_Lean_Parser_ppRealGroup_docString__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "ppRealGroup"};
static const lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_ppRealGroup___regBuiltin_Lean_Parser_ppRealGroup_docString__1___closed__0 = (const lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_ppRealGroup___regBuiltin_Lean_Parser_ppRealGroup_docString__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Parser_Extra_0__Lean_Parser_ppRealGroup___regBuiltin_Lean_Parser_ppRealGroup_docString__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Extra_0__Lean_Parser_ppRealGroup___regBuiltin_Lean_Parser_ppRealGroup_docString__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_ppRealGroup___regBuiltin_Lean_Parser_ppRealGroup_docString__1___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Extra_0__Lean_Parser_ppRealGroup___regBuiltin_Lean_Parser_ppRealGroup_docString__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_ppRealGroup___regBuiltin_Lean_Parser_ppRealGroup_docString__1___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_ppRealGroup___regBuiltin_Lean_Parser_ppRealGroup_docString__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(74, 63, 239, 92, 165, 98, 92, 199)}};
static const lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_ppRealGroup___regBuiltin_Lean_Parser_ppRealGroup_docString__1___closed__1 = (const lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_ppRealGroup___regBuiltin_Lean_Parser_ppRealGroup_docString__1___closed__1_value;
static const lean_string_object l___private_Lean_Parser_Extra_0__Lean_Parser_ppRealGroup___regBuiltin_Lean_Parser_ppRealGroup_docString__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 88, .m_capacity = 88, .m_length = 87, .m_data = "No-op parser combinator that advises the pretty printer to emit a `Format.group` node. "};
static const lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_ppRealGroup___regBuiltin_Lean_Parser_ppRealGroup_docString__1___closed__2 = (const lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_ppRealGroup___regBuiltin_Lean_Parser_ppRealGroup_docString__1___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_ppRealGroup___regBuiltin_Lean_Parser_ppRealGroup_docString__1();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_ppRealGroup___regBuiltin_Lean_Parser_ppRealGroup_docString__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ppIndent(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ppIndent___boxed(lean_object*);
static const lean_string_object l___private_Lean_Parser_Extra_0__Lean_Parser_ppIndent___regBuiltin_Lean_Parser_ppIndent_docString__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "ppIndent"};
static const lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_ppIndent___regBuiltin_Lean_Parser_ppIndent_docString__1___closed__0 = (const lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_ppIndent___regBuiltin_Lean_Parser_ppIndent_docString__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Parser_Extra_0__Lean_Parser_ppIndent___regBuiltin_Lean_Parser_ppIndent_docString__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Extra_0__Lean_Parser_ppIndent___regBuiltin_Lean_Parser_ppIndent_docString__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_ppIndent___regBuiltin_Lean_Parser_ppIndent_docString__1___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Extra_0__Lean_Parser_ppIndent___regBuiltin_Lean_Parser_ppIndent_docString__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_ppIndent___regBuiltin_Lean_Parser_ppIndent_docString__1___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_ppIndent___regBuiltin_Lean_Parser_ppIndent_docString__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(92, 194, 209, 68, 183, 68, 71, 156)}};
static const lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_ppIndent___regBuiltin_Lean_Parser_ppIndent_docString__1___closed__1 = (const lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_ppIndent___regBuiltin_Lean_Parser_ppIndent_docString__1___closed__1_value;
static const lean_string_object l___private_Lean_Parser_Extra_0__Lean_Parser_ppIndent___regBuiltin_Lean_Parser_ppIndent_docString__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 105, .m_capacity = 105, .m_length = 104, .m_data = "No-op parser combinator that advises the pretty printer to indent the given syntax without grouping it. "};
static const lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_ppIndent___regBuiltin_Lean_Parser_ppIndent_docString__1___closed__2 = (const lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_ppIndent___regBuiltin_Lean_Parser_ppIndent_docString__1___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_ppIndent___regBuiltin_Lean_Parser_ppIndent_docString__1();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_ppIndent___regBuiltin_Lean_Parser_ppIndent_docString__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ppGroup(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ppGroup___boxed(lean_object*);
static const lean_string_object l___private_Lean_Parser_Extra_0__Lean_Parser_ppGroup___regBuiltin_Lean_Parser_ppGroup_docString__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "ppGroup"};
static const lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_ppGroup___regBuiltin_Lean_Parser_ppGroup_docString__1___closed__0 = (const lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_ppGroup___regBuiltin_Lean_Parser_ppGroup_docString__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Parser_Extra_0__Lean_Parser_ppGroup___regBuiltin_Lean_Parser_ppGroup_docString__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Extra_0__Lean_Parser_ppGroup___regBuiltin_Lean_Parser_ppGroup_docString__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_ppGroup___regBuiltin_Lean_Parser_ppGroup_docString__1___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Extra_0__Lean_Parser_ppGroup___regBuiltin_Lean_Parser_ppGroup_docString__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_ppGroup___regBuiltin_Lean_Parser_ppGroup_docString__1___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_ppGroup___regBuiltin_Lean_Parser_ppGroup_docString__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(161, 202, 60, 40, 216, 102, 169, 77)}};
static const lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_ppGroup___regBuiltin_Lean_Parser_ppGroup_docString__1___closed__1 = (const lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_ppGroup___regBuiltin_Lean_Parser_ppGroup_docString__1___closed__1_value;
static const lean_string_object l___private_Lean_Parser_Extra_0__Lean_Parser_ppGroup___regBuiltin_Lean_Parser_ppGroup_docString__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 143, .m_capacity = 143, .m_length = 142, .m_data = "No-op parser combinator that advises the pretty printer to group and indent the given syntax.\nBy default, only syntax categories are grouped. "};
static const lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_ppGroup___regBuiltin_Lean_Parser_ppGroup_docString__1___closed__2 = (const lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_ppGroup___regBuiltin_Lean_Parser_ppGroup_docString__1___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_ppGroup___regBuiltin_Lean_Parser_ppGroup_docString__1();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_ppGroup___regBuiltin_Lean_Parser_ppGroup_docString__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ppDedent(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ppDedent___boxed(lean_object*);
static const lean_string_object l___private_Lean_Parser_Extra_0__Lean_Parser_ppDedent___regBuiltin_Lean_Parser_ppDedent_docString__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "ppDedent"};
static const lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_ppDedent___regBuiltin_Lean_Parser_ppDedent_docString__1___closed__0 = (const lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_ppDedent___regBuiltin_Lean_Parser_ppDedent_docString__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Parser_Extra_0__Lean_Parser_ppDedent___regBuiltin_Lean_Parser_ppDedent_docString__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Extra_0__Lean_Parser_ppDedent___regBuiltin_Lean_Parser_ppDedent_docString__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_ppDedent___regBuiltin_Lean_Parser_ppDedent_docString__1___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Extra_0__Lean_Parser_ppDedent___regBuiltin_Lean_Parser_ppDedent_docString__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_ppDedent___regBuiltin_Lean_Parser_ppDedent_docString__1___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_ppDedent___regBuiltin_Lean_Parser_ppDedent_docString__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(174, 177, 202, 50, 99, 27, 117, 200)}};
static const lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_ppDedent___regBuiltin_Lean_Parser_ppDedent_docString__1___closed__1 = (const lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_ppDedent___regBuiltin_Lean_Parser_ppDedent_docString__1___closed__1_value;
static const lean_string_object l___private_Lean_Parser_Extra_0__Lean_Parser_ppDedent___regBuiltin_Lean_Parser_ppDedent_docString__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 158, .m_capacity = 158, .m_length = 157, .m_data = "No-op parser combinator that advises the pretty printer to dedent the given syntax.\nDedenting can in particular be used to counteract automatic indentation. "};
static const lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_ppDedent___regBuiltin_Lean_Parser_ppDedent_docString__1___closed__2 = (const lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_ppDedent___regBuiltin_Lean_Parser_ppDedent_docString__1___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_ppDedent___regBuiltin_Lean_Parser_ppDedent_docString__1();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_ppDedent___regBuiltin_Lean_Parser_ppDedent_docString__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ppAllowUngrouped;
static const lean_string_object l___private_Lean_Parser_Extra_0__Lean_Parser_ppAllowUngrouped___regBuiltin_Lean_Parser_ppAllowUngrouped_docString__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "ppAllowUngrouped"};
static const lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_ppAllowUngrouped___regBuiltin_Lean_Parser_ppAllowUngrouped_docString__1___closed__0 = (const lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_ppAllowUngrouped___regBuiltin_Lean_Parser_ppAllowUngrouped_docString__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Parser_Extra_0__Lean_Parser_ppAllowUngrouped___regBuiltin_Lean_Parser_ppAllowUngrouped_docString__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Extra_0__Lean_Parser_ppAllowUngrouped___regBuiltin_Lean_Parser_ppAllowUngrouped_docString__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_ppAllowUngrouped___regBuiltin_Lean_Parser_ppAllowUngrouped_docString__1___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Extra_0__Lean_Parser_ppAllowUngrouped___regBuiltin_Lean_Parser_ppAllowUngrouped_docString__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_ppAllowUngrouped___regBuiltin_Lean_Parser_ppAllowUngrouped_docString__1___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_ppAllowUngrouped___regBuiltin_Lean_Parser_ppAllowUngrouped_docString__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(98, 185, 47, 125, 165, 106, 223, 132)}};
static const lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_ppAllowUngrouped___regBuiltin_Lean_Parser_ppAllowUngrouped_docString__1___closed__1 = (const lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_ppAllowUngrouped___regBuiltin_Lean_Parser_ppAllowUngrouped_docString__1___closed__1_value;
static const lean_string_object l___private_Lean_Parser_Extra_0__Lean_Parser_ppAllowUngrouped___regBuiltin_Lean_Parser_ppAllowUngrouped_docString__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 277, .m_capacity = 277, .m_length = 276, .m_data = "No-op parser combinator that allows the pretty printer to omit the group and\nindent operation in the enclosing category parser.\n```\nsyntax ppAllowUngrouped \"by \" tacticSeq : term\n-- allows a `by` after `:=` without linebreak in between:\ntheorem foo : True := by\n  trivial\n```\n"};
static const lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_ppAllowUngrouped___regBuiltin_Lean_Parser_ppAllowUngrouped_docString__1___closed__2 = (const lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_ppAllowUngrouped___regBuiltin_Lean_Parser_ppAllowUngrouped_docString__1___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_ppAllowUngrouped___regBuiltin_Lean_Parser_ppAllowUngrouped_docString__1();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_ppAllowUngrouped___regBuiltin_Lean_Parser_ppAllowUngrouped_docString__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ppDedentIfGrouped(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ppDedentIfGrouped___boxed(lean_object*);
static const lean_string_object l___private_Lean_Parser_Extra_0__Lean_Parser_ppDedentIfGrouped___regBuiltin_Lean_Parser_ppDedentIfGrouped_docString__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "ppDedentIfGrouped"};
static const lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_ppDedentIfGrouped___regBuiltin_Lean_Parser_ppDedentIfGrouped_docString__1___closed__0 = (const lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_ppDedentIfGrouped___regBuiltin_Lean_Parser_ppDedentIfGrouped_docString__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Parser_Extra_0__Lean_Parser_ppDedentIfGrouped___regBuiltin_Lean_Parser_ppDedentIfGrouped_docString__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Extra_0__Lean_Parser_ppDedentIfGrouped___regBuiltin_Lean_Parser_ppDedentIfGrouped_docString__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_ppDedentIfGrouped___regBuiltin_Lean_Parser_ppDedentIfGrouped_docString__1___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Extra_0__Lean_Parser_ppDedentIfGrouped___regBuiltin_Lean_Parser_ppDedentIfGrouped_docString__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_ppDedentIfGrouped___regBuiltin_Lean_Parser_ppDedentIfGrouped_docString__1___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_ppDedentIfGrouped___regBuiltin_Lean_Parser_ppDedentIfGrouped_docString__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(7, 220, 243, 72, 104, 9, 120, 214)}};
static const lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_ppDedentIfGrouped___regBuiltin_Lean_Parser_ppDedentIfGrouped_docString__1___closed__1 = (const lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_ppDedentIfGrouped___regBuiltin_Lean_Parser_ppDedentIfGrouped_docString__1___closed__1_value;
static const lean_string_object l___private_Lean_Parser_Extra_0__Lean_Parser_ppDedentIfGrouped___regBuiltin_Lean_Parser_ppDedentIfGrouped_docString__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 200, .m_capacity = 200, .m_length = 199, .m_data = "No-op parser combinator that advises the pretty printer to dedent the given syntax,\nif it was grouped by the category parser.\nDedenting can in particular be used to counteract automatic indentation. "};
static const lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_ppDedentIfGrouped___regBuiltin_Lean_Parser_ppDedentIfGrouped_docString__1___closed__2 = (const lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_ppDedentIfGrouped___regBuiltin_Lean_Parser_ppDedentIfGrouped_docString__1___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_ppDedentIfGrouped___regBuiltin_Lean_Parser_ppDedentIfGrouped_docString__1();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_ppDedentIfGrouped___regBuiltin_Lean_Parser_ppDedentIfGrouped_docString__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ppHardLineUnlessUngrouped;
static const lean_string_object l___private_Lean_Parser_Extra_0__Lean_Parser_ppHardLineUnlessUngrouped___regBuiltin_Lean_Parser_ppHardLineUnlessUngrouped_docString__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "ppHardLineUnlessUngrouped"};
static const lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_ppHardLineUnlessUngrouped___regBuiltin_Lean_Parser_ppHardLineUnlessUngrouped_docString__1___closed__0 = (const lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_ppHardLineUnlessUngrouped___regBuiltin_Lean_Parser_ppHardLineUnlessUngrouped_docString__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Parser_Extra_0__Lean_Parser_ppHardLineUnlessUngrouped___regBuiltin_Lean_Parser_ppHardLineUnlessUngrouped_docString__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Extra_0__Lean_Parser_ppHardLineUnlessUngrouped___regBuiltin_Lean_Parser_ppHardLineUnlessUngrouped_docString__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_ppHardLineUnlessUngrouped___regBuiltin_Lean_Parser_ppHardLineUnlessUngrouped_docString__1___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Extra_0__Lean_Parser_ppHardLineUnlessUngrouped___regBuiltin_Lean_Parser_ppHardLineUnlessUngrouped_docString__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_ppHardLineUnlessUngrouped___regBuiltin_Lean_Parser_ppHardLineUnlessUngrouped_docString__1___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_ppHardLineUnlessUngrouped___regBuiltin_Lean_Parser_ppHardLineUnlessUngrouped_docString__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(8, 140, 119, 130, 113, 89, 214, 6)}};
static const lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_ppHardLineUnlessUngrouped___regBuiltin_Lean_Parser_ppHardLineUnlessUngrouped_docString__1___closed__1 = (const lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_ppHardLineUnlessUngrouped___regBuiltin_Lean_Parser_ppHardLineUnlessUngrouped_docString__1___closed__1_value;
static const lean_string_object l___private_Lean_Parser_Extra_0__Lean_Parser_ppHardLineUnlessUngrouped___regBuiltin_Lean_Parser_ppHardLineUnlessUngrouped_docString__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 167, .m_capacity = 167, .m_length = 166, .m_data = "No-op parser combinator that prints a line break.\nThe line break is soft if the combinator is followed\nby an ungrouped parser (see ppAllowUngrouped), otherwise hard. "};
static const lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_ppHardLineUnlessUngrouped___regBuiltin_Lean_Parser_ppHardLineUnlessUngrouped_docString__1___closed__2 = (const lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_ppHardLineUnlessUngrouped___regBuiltin_Lean_Parser_ppHardLineUnlessUngrouped_docString__1___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_ppHardLineUnlessUngrouped___regBuiltin_Lean_Parser_ppHardLineUnlessUngrouped_docString__1();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_ppHardLineUnlessUngrouped___regBuiltin_Lean_Parser_ppHardLineUnlessUngrouped_docString__1___boxed(lean_object*);
static const lean_string_object l_Lean_ppHardSpace_formatter___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = " "};
static const lean_object* l_Lean_ppHardSpace_formatter___redArg___closed__0 = (const lean_object*)&l_Lean_ppHardSpace_formatter___redArg___closed__0_value;
static const lean_ctor_object l_Lean_ppHardSpace_formatter___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_ppHardSpace_formatter___redArg___closed__0_value)}};
static const lean_object* l_Lean_ppHardSpace_formatter___redArg___closed__1 = (const lean_object*)&l_Lean_ppHardSpace_formatter___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_ppHardSpace_formatter___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ppHardSpace_formatter___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ppHardSpace_formatter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ppHardSpace_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ppSpace_formatter___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ppSpace_formatter___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ppSpace_formatter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ppSpace_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ppLine_formatter___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ppLine_formatter___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ppLine_formatter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ppLine_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ppRealFill_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ppRealFill_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ppRealGroup_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ppRealGroup_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ppIndent_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ppIndent_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_ppDedent_formatter___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ppDedent_formatter___closed__0;
LEAN_EXPORT lean_object* l_Lean_ppDedent_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ppDedent_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ppAllowUngrouped_formatter___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ppAllowUngrouped_formatter___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ppAllowUngrouped_formatter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ppAllowUngrouped_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_ppDedentIfGrouped_formatter___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ppDedentIfGrouped_formatter___closed__0;
LEAN_EXPORT lean_object* l_Lean_ppDedentIfGrouped_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ppDedentIfGrouped_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ppHardLineUnlessUngrouped_formatter___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ppHardLineUnlessUngrouped_formatter___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ppHardLineUnlessUngrouped_formatter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ppHardLineUnlessUngrouped_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ppHardSpace_parenthesizer___redArg();
LEAN_EXPORT lean_object* l_Lean_Parser_ppHardSpace_parenthesizer___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ppHardSpace_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ppHardSpace_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ppSpace_parenthesizer___redArg();
LEAN_EXPORT lean_object* l_Lean_Parser_ppSpace_parenthesizer___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ppSpace_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ppSpace_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ppLine_parenthesizer___redArg();
LEAN_EXPORT lean_object* l_Lean_Parser_ppLine_parenthesizer___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ppLine_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ppLine_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ppGroup_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ppGroup_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ppRealFill_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ppRealFill_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ppIndent_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ppIndent_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ppGroup_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ppGroup_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ppRealGroup_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ppRealGroup_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ppDedent_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ppDedent_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ppAllowUngrouped_parenthesizer___redArg();
LEAN_EXPORT lean_object* l_Lean_Parser_ppAllowUngrouped_parenthesizer___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ppAllowUngrouped_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ppAllowUngrouped_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ppDedentIfGrouped_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ppDedentIfGrouped_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ppHardLineUnlessUngrouped_parenthesizer___redArg();
LEAN_EXPORT lean_object* l_Lean_Parser_ppHardLineUnlessUngrouped_parenthesizer___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ppHardLineUnlessUngrouped_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ppHardLineUnlessUngrouped_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 41, .m_capacity = 41, .m_length = 40, .m_data = "termRegister_parser_alias(Kind:=_)______"};
static const lean_object* l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__0 = (const lean_object*)&l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__0_value;
static const lean_ctor_object l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__1_value_aux_0),((lean_object*)&l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(232, 135, 36, 196, 99, 128, 246, 50)}};
static const lean_object* l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__1 = (const lean_object*)&l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__1_value;
static const lean_string_object l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "andthen"};
static const lean_object* l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__2 = (const lean_object*)&l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__2_value;
static const lean_ctor_object l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__2_value),LEAN_SCALAR_PTR_LITERAL(40, 255, 78, 30, 143, 119, 117, 174)}};
static const lean_object* l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__3 = (const lean_object*)&l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__3_value;
static const lean_string_object l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "register_parser_alias "};
static const lean_object* l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__4 = (const lean_object*)&l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__4_value;
static const lean_ctor_object l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__4_value)}};
static const lean_object* l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__5 = (const lean_object*)&l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__5_value;
static const lean_ctor_object l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Parser_antiquotNestedExpr_formatter___closed__3_value)}};
static const lean_object* l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__6 = (const lean_object*)&l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__6_value;
static const lean_string_object l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "kind"};
static const lean_object* l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__7 = (const lean_object*)&l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__7_value;
static const lean_ctor_object l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 6}, .m_objs = {((lean_object*)&l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__7_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__8 = (const lean_object*)&l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__8_value;
static const lean_ctor_object l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__3_value),((lean_object*)&l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__6_value),((lean_object*)&l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__8_value)}};
static const lean_object* l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__9 = (const lean_object*)&l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__9_value;
static const lean_string_object l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " := "};
static const lean_object* l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__10 = (const lean_object*)&l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__10_value;
static const lean_ctor_object l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__10_value)}};
static const lean_object* l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__11 = (const lean_object*)&l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__11_value;
static const lean_ctor_object l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__3_value),((lean_object*)&l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__9_value),((lean_object*)&l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__11_value)}};
static const lean_object* l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__12 = (const lean_object*)&l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__12_value;
static const lean_ctor_object l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 7}, .m_objs = {((lean_object*)&l_Lean_Parser_termParser_formatter___redArg___closed__1_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__13 = (const lean_object*)&l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__13_value;
static const lean_ctor_object l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__3_value),((lean_object*)&l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__12_value),((lean_object*)&l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__13_value)}};
static const lean_object* l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__14 = (const lean_object*)&l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__14_value;
static const lean_string_object l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ") "};
static const lean_object* l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__15 = (const lean_object*)&l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__15_value;
static const lean_ctor_object l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__15_value)}};
static const lean_object* l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__16 = (const lean_object*)&l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__16_value;
static const lean_ctor_object l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__3_value),((lean_object*)&l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__14_value),((lean_object*)&l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__16_value)}};
static const lean_object* l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__17 = (const lean_object*)&l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__17_value;
static const lean_ctor_object l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_group_formatter___closed__1_value),((lean_object*)&l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__17_value)}};
static const lean_object* l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__18 = (const lean_object*)&l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__18_value;
static const lean_ctor_object l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_optional_formatter___closed__1_value),((lean_object*)&l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__18_value)}};
static const lean_object* l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__19 = (const lean_object*)&l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__19_value;
static const lean_ctor_object l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__3_value),((lean_object*)&l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__5_value),((lean_object*)&l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__19_value)}};
static const lean_object* l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__20 = (const lean_object*)&l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__20_value;
static const lean_ctor_object l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Parser_strLit_formatter___closed__1_value)}};
static const lean_object* l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__21 = (const lean_object*)&l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__21_value;
static const lean_ctor_object l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_ppSpace___regBuiltin_Lean_Parser_ppSpace_docString__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(207, 47, 58, 43, 30, 240, 125, 246)}};
static const lean_object* l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__22 = (const lean_object*)&l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__22_value;
static const lean_ctor_object l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__22_value)}};
static const lean_object* l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__23 = (const lean_object*)&l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__23_value;
static const lean_ctor_object l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__3_value),((lean_object*)&l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__21_value),((lean_object*)&l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__23_value)}};
static const lean_object* l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__24 = (const lean_object*)&l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__24_value;
static const lean_ctor_object l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_optional_formatter___closed__1_value),((lean_object*)&l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__24_value)}};
static const lean_object* l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__25 = (const lean_object*)&l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__25_value;
static const lean_ctor_object l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__3_value),((lean_object*)&l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__20_value),((lean_object*)&l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__25_value)}};
static const lean_object* l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__26 = (const lean_object*)&l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__26_value;
static const lean_ctor_object l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Parser_ident_formatter___closed__1_value)}};
static const lean_object* l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__27 = (const lean_object*)&l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__27_value;
static const lean_ctor_object l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__3_value),((lean_object*)&l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__26_value),((lean_object*)&l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__27_value)}};
static const lean_object* l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__28 = (const lean_object*)&l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__28_value;
static const lean_string_object l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "colGt"};
static const lean_object* l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__29 = (const lean_object*)&l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__29_value;
static const lean_ctor_object l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__29_value),LEAN_SCALAR_PTR_LITERAL(185, 236, 32, 153, 169, 213, 53, 244)}};
static const lean_object* l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__30 = (const lean_object*)&l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__30_value;
static const lean_ctor_object l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__30_value)}};
static const lean_object* l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__31 = (const lean_object*)&l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__31_value;
static const lean_ctor_object l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__3_value),((lean_object*)&l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__23_value),((lean_object*)&l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__31_value)}};
static const lean_object* l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__32 = (const lean_object*)&l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__32_value;
static const lean_ctor_object l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__3_value),((lean_object*)&l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__32_value),((lean_object*)&l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__13_value)}};
static const lean_object* l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__33 = (const lean_object*)&l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__33_value;
static const lean_ctor_object l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_optional_formatter___closed__1_value),((lean_object*)&l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__33_value)}};
static const lean_object* l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__34 = (const lean_object*)&l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__34_value;
static const lean_ctor_object l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__3_value),((lean_object*)&l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__28_value),((lean_object*)&l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__34_value)}};
static const lean_object* l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__35 = (const lean_object*)&l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__35_value;
static const lean_ctor_object l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__1_value),((lean_object*)(((size_t)(1022) << 1) | 1)),((lean_object*)&l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__35_value)}};
static const lean_object* l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__36 = (const lean_object*)&l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__36_value;
LEAN_EXPORT const lean_object* l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29____________ = (const lean_object*)&l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__36_value;
static const lean_string_object l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 38, .m_capacity = 38, .m_length = 37, .m_data = "expected non-overloaded constant name"};
static const lean_object* l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__0 = (const lean_object*)&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__0_value;
static lean_once_cell_t l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__1;
static const lean_string_object l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 38, .m_capacity = 38, .m_length = 37, .m_data = "PrettyPrinter.Formatter.registerAlias"};
static const lean_object* l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__2 = (const lean_object*)&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__2_value;
static lean_once_cell_t l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__3;
static const lean_string_object l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "PrettyPrinter"};
static const lean_object* l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__4 = (const lean_object*)&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__4_value;
static const lean_string_object l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Formatter"};
static const lean_object* l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__5 = (const lean_object*)&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__5_value;
static const lean_ctor_object l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__2_value),LEAN_SCALAR_PTR_LITERAL(126, 243, 114, 121, 141, 142, 42, 100)}};
static const lean_object* l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__6 = (const lean_object*)&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__6_value;
static const lean_string_object l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 42, .m_capacity = 42, .m_length = 41, .m_data = "PrettyPrinter.Parenthesizer.registerAlias"};
static const lean_object* l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__7 = (const lean_object*)&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__7_value;
static lean_once_cell_t l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__8;
static const lean_string_object l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "Parenthesizer"};
static const lean_object* l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__9 = (const lean_object*)&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__9_value;
static const lean_ctor_object l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_parenthesizer__35___closed__0_value),LEAN_SCALAR_PTR_LITERAL(50, 187, 150, 116, 216, 103, 117, 60)}};
static const lean_object* l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__10 = (const lean_object*)&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__10_value;
static const lean_string_object l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "namedArgument"};
static const lean_object* l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__11 = (const lean_object*)&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__11_value;
static const lean_string_object l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "kind\?"};
static const lean_object* l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__12 = (const lean_object*)&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__12_value;
static lean_once_cell_t l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__13;
static const lean_ctor_object l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__12_value),LEAN_SCALAR_PTR_LITERAL(234, 251, 71, 75, 78, 98, 206, 187)}};
static const lean_object* l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__14 = (const lean_object*)&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__14_value;
static const lean_string_object l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ":="};
static const lean_object* l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__15 = (const lean_object*)&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__15_value;
static const lean_string_object l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "some"};
static const lean_object* l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__16 = (const lean_object*)&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__16_value;
static lean_once_cell_t l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__17;
static const lean_ctor_object l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__16_value),LEAN_SCALAR_PTR_LITERAL(37, 202, 7, 33, 103, 74, 114, 212)}};
static const lean_object* l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__18 = (const lean_object*)&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__18_value;
static const lean_string_object l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Option"};
static const lean_object* l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__19 = (const lean_object*)&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__19_value;
static const lean_ctor_object l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__20_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__19_value),LEAN_SCALAR_PTR_LITERAL(95, 234, 177, 188, 3, 226, 91, 252)}};
static const lean_ctor_object l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__20_value_aux_0),((lean_object*)&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__16_value),LEAN_SCALAR_PTR_LITERAL(89, 148, 40, 55, 221, 242, 231, 67)}};
static const lean_object* l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__20 = (const lean_object*)&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__20_value;
static const lean_string_object l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "quotedName"};
static const lean_object* l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__21 = (const lean_object*)&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__21_value;
static const lean_string_object l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Term"};
static const lean_object* l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__22 = (const lean_object*)&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__22_value;
static const lean_string_object l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "do"};
static const lean_object* l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__23 = (const lean_object*)&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__23_value;
static const lean_ctor_object l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__24_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__24_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__24_value_aux_0),((lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__24_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__24_value_aux_1),((lean_object*)&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__22_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__24_value_aux_2),((lean_object*)&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__23_value),LEAN_SCALAR_PTR_LITERAL(181, 206, 135, 90, 45, 65, 187, 80)}};
static const lean_object* l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__24 = (const lean_object*)&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__24_value;
static const lean_string_object l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "doSeqIndent"};
static const lean_object* l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__25 = (const lean_object*)&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__25_value;
static const lean_ctor_object l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__26_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__26_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__26_value_aux_0),((lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__26_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__26_value_aux_1),((lean_object*)&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__22_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__26_value_aux_2),((lean_object*)&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__25_value),LEAN_SCALAR_PTR_LITERAL(93, 115, 138, 230, 225, 195, 43, 46)}};
static const lean_object* l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__26 = (const lean_object*)&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__26_value;
static const lean_string_object l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "doSeqItem"};
static const lean_object* l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__27 = (const lean_object*)&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__27_value;
static const lean_ctor_object l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__28_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__28_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__28_value_aux_0),((lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__28_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__28_value_aux_1),((lean_object*)&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__22_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__28_value_aux_2),((lean_object*)&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__27_value),LEAN_SCALAR_PTR_LITERAL(10, 94, 50, 120, 46, 251, 13, 13)}};
static const lean_object* l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__28 = (const lean_object*)&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__28_value;
static const lean_string_object l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "doExpr"};
static const lean_object* l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__29 = (const lean_object*)&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__29_value;
static const lean_ctor_object l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__30_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__30_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__30_value_aux_0),((lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__30_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__30_value_aux_1),((lean_object*)&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__22_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__30_value_aux_2),((lean_object*)&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__29_value),LEAN_SCALAR_PTR_LITERAL(130, 168, 60, 255, 153, 218, 88, 77)}};
static const lean_object* l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__30 = (const lean_object*)&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__30_value;
static const lean_string_object l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "app"};
static const lean_object* l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__31 = (const lean_object*)&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__31_value;
static const lean_ctor_object l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__32_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__32_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__32_value_aux_0),((lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__32_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__32_value_aux_1),((lean_object*)&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__22_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__32_value_aux_2),((lean_object*)&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__31_value),LEAN_SCALAR_PTR_LITERAL(69, 118, 10, 41, 220, 156, 243, 179)}};
static const lean_object* l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__32 = (const lean_object*)&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__32_value;
static const lean_string_object l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "Parser.registerAlias"};
static const lean_object* l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__33 = (const lean_object*)&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__33_value;
static lean_once_cell_t l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__34_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__34;
static const lean_string_object l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "registerAlias"};
static const lean_object* l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__35 = (const lean_object*)&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__35_value;
static const lean_ctor_object l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__36_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__1_value),LEAN_SCALAR_PTR_LITERAL(46, 201, 23, 171, 41, 77, 220, 95)}};
static const lean_ctor_object l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__36_value_aux_0),((lean_object*)&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__35_value),LEAN_SCALAR_PTR_LITERAL(212, 182, 194, 13, 246, 198, 212, 204)}};
static const lean_object* l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__36 = (const lean_object*)&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__36_value;
static const lean_ctor_object l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__37_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__37_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__37_value_aux_0),((lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__37_value_aux_1),((lean_object*)&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__35_value),LEAN_SCALAR_PTR_LITERAL(81, 39, 139, 251, 9, 82, 71, 189)}};
static const lean_object* l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__37 = (const lean_object*)&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__37_value;
static const lean_ctor_object l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__37_value)}};
static const lean_object* l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__38 = (const lean_object*)&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__38_value;
static const lean_ctor_object l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__39_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__38_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__39 = (const lean_object*)&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__39_value;
static const lean_string_object l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__40_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "doubleQuotedName"};
static const lean_object* l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__40 = (const lean_object*)&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__40_value;
static const lean_ctor_object l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__41_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__41_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__41_value_aux_0),((lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__41_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__41_value_aux_1),((lean_object*)&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__22_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__41_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__41_value_aux_2),((lean_object*)&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__40_value),LEAN_SCALAR_PTR_LITERAL(194, 121, 78, 150, 98, 156, 35, 157)}};
static const lean_object* l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__41 = (const lean_object*)&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__41_value;
static const lean_string_object l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__42_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__42 = (const lean_object*)&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__42_value;
static lean_once_cell_t l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__43_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__43;
static const lean_string_object l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__44_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "choice"};
static const lean_object* l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__44 = (const lean_object*)&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__44_value;
static const lean_ctor_object l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__45_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__44_value),LEAN_SCALAR_PTR_LITERAL(59, 66, 148, 42, 181, 100, 85, 166)}};
static const lean_object* l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__45 = (const lean_object*)&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__45_value;
static const lean_string_object l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__46_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "term{}"};
static const lean_object* l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__46 = (const lean_object*)&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__46_value;
static const lean_ctor_object l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__47_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__46_value),LEAN_SCALAR_PTR_LITERAL(44, 141, 217, 101, 193, 131, 35, 71)}};
static const lean_object* l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__47 = (const lean_object*)&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__47_value;
static const lean_string_object l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__48_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "{"};
static const lean_object* l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__48 = (const lean_object*)&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__48_value;
static lean_once_cell_t l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__49_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__49;
static const lean_string_object l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__50_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "}"};
static const lean_object* l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__50 = (const lean_object*)&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__50_value;
static lean_once_cell_t l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__51_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__51;
static lean_once_cell_t l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__52_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__52;
static const lean_string_object l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__53_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "structInst"};
static const lean_object* l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__53 = (const lean_object*)&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__53_value;
static const lean_ctor_object l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__54_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__54_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__54_value_aux_0),((lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__54_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__54_value_aux_1),((lean_object*)&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__22_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__54_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__54_value_aux_2),((lean_object*)&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__53_value),LEAN_SCALAR_PTR_LITERAL(50, 43, 73, 62, 118, 124, 31, 28)}};
static const lean_object* l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__54 = (const lean_object*)&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__54_value;
static lean_once_cell_t l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__55_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__55;
static const lean_string_object l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__56_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "structInstFields"};
static const lean_object* l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__56 = (const lean_object*)&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__56_value;
static const lean_ctor_object l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__57_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__57_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__57_value_aux_0),((lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__57_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__57_value_aux_1),((lean_object*)&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__22_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__57_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__57_value_aux_2),((lean_object*)&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__56_value),LEAN_SCALAR_PTR_LITERAL(0, 82, 141, 43, 62, 171, 163, 69)}};
static const lean_object* l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__57 = (const lean_object*)&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__57_value;
static lean_once_cell_t l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__58_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__58;
static const lean_string_object l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__59_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "optEllipsis"};
static const lean_object* l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__59 = (const lean_object*)&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__59_value;
static const lean_ctor_object l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__60_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__60_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__60_value_aux_0),((lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__60_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__60_value_aux_1),((lean_object*)&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__22_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__60_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__60_value_aux_2),((lean_object*)&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__59_value),LEAN_SCALAR_PTR_LITERAL(13, 1, 242, 203, 207, 188, 181, 160)}};
static const lean_object* l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__60 = (const lean_object*)&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__60_value;
static lean_once_cell_t l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__61_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__61;
static lean_once_cell_t l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__62_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__62;
static lean_once_cell_t l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__63_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__63;
static const lean_ctor_object l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__64_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__64_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__64_value_aux_0),((lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__64_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__64_value_aux_1),((lean_object*)&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__22_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__64_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__64_value_aux_2),((lean_object*)&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__21_value),LEAN_SCALAR_PTR_LITERAL(217, 120, 158, 75, 195, 162, 2, 130)}};
static const lean_object* l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__64 = (const lean_object*)&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__64_value;
LEAN_EXPORT lean_object* l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_initFn___lam__0_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_initFn___lam__0_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_initFn___lam__2_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2_(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_initFn___lam__2_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_initFn___lam__3_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_initFn___lam__3_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_initFn___lam__13_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_initFn___lam__13_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_initFn___lam__5_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2_(lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Parser_Extra_0__Lean_initFn___closed__0_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Parser_Extra_0__Lean_initFn___lam__0_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2____boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Parser_Extra_0__Lean_initFn___closed__0_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Extra_0__Lean_initFn___closed__0_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Parser_Extra_0__Lean_initFn___closed__1_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Parser_Extra_0__Lean_initFn___lam__2_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2____boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Parser_Extra_0__Lean_initFn___closed__1_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Extra_0__Lean_initFn___closed__1_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Parser_Extra_0__Lean_initFn___closed__2_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Parser_Extra_0__Lean_initFn___lam__3_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2____boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Parser_Extra_0__Lean_initFn___closed__2_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Extra_0__Lean_initFn___closed__2_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Parser_Extra_0__Lean_initFn___closed__3_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Formatter_fill___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Parser_Extra_0__Lean_initFn___closed__3_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Extra_0__Lean_initFn___closed__3_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Parser_Extra_0__Lean_initFn___closed__4_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Formatter_group___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Parser_Extra_0__Lean_initFn___closed__4_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Extra_0__Lean_initFn___closed__4_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Parser_Extra_0__Lean_initFn___closed__5_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Parser_Extra_0__Lean_initFn___lam__13_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2____boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Parser_Extra_0__Lean_initFn___closed__5_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Extra_0__Lean_initFn___closed__5_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Parser_Extra_0__Lean_initFn___closed__6_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Parser_Extra_0__Lean_initFn___lam__5_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2_, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Parser_patternIgnore_formatter___closed__1_value)} };
static const lean_object* l___private_Lean_Parser_Extra_0__Lean_initFn___closed__6_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Extra_0__Lean_initFn___closed__6_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Extra_0__Lean_initFn___closed__7_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_ppHardLineUnlessUngrouped___regBuiltin_Lean_Parser_ppHardLineUnlessUngrouped_docString__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(68, 165, 69, 201, 179, 176, 38, 97)}};
static const lean_object* l___private_Lean_Parser_Extra_0__Lean_initFn___closed__7_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Extra_0__Lean_initFn___closed__7_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Extra_0__Lean_initFn___closed__8_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_ppHardLineUnlessUngrouped___regBuiltin_Lean_Parser_ppHardLineUnlessUngrouped_docString__1___closed__1_value)}};
static const lean_object* l___private_Lean_Parser_Extra_0__Lean_initFn___closed__8_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Extra_0__Lean_initFn___closed__8_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Parser_Extra_0__Lean_initFn___closed__9_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extra_0__Lean_initFn___closed__9_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2_;
static const lean_ctor_object l___private_Lean_Parser_Extra_0__Lean_initFn___closed__10_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Extra_0__Lean_initFn___closed__0_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_Parser_Extra_0__Lean_initFn___closed__10_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Extra_0__Lean_initFn___closed__10_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Extra_0__Lean_initFn___closed__11_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_ppAllowUngrouped___regBuiltin_Lean_Parser_ppAllowUngrouped_docString__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(254, 56, 209, 55, 154, 125, 240, 2)}};
static const lean_object* l___private_Lean_Parser_Extra_0__Lean_initFn___closed__11_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Extra_0__Lean_initFn___closed__11_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Extra_0__Lean_initFn___closed__12_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_ppAllowUngrouped___regBuiltin_Lean_Parser_ppAllowUngrouped_docString__1___closed__1_value)}};
static const lean_object* l___private_Lean_Parser_Extra_0__Lean_initFn___closed__12_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Extra_0__Lean_initFn___closed__12_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Parser_Extra_0__Lean_initFn___closed__13_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extra_0__Lean_initFn___closed__13_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2_;
static const lean_ctor_object l___private_Lean_Parser_Extra_0__Lean_initFn___closed__14_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_ppDedentIfGrouped___regBuiltin_Lean_Parser_ppDedentIfGrouped_docString__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(195, 164, 225, 181, 149, 187, 81, 113)}};
static const lean_object* l___private_Lean_Parser_Extra_0__Lean_initFn___closed__14_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Extra_0__Lean_initFn___closed__14_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Extra_0__Lean_initFn___closed__15_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Extra_0__Lean_initFn___closed__1_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_Parser_Extra_0__Lean_initFn___closed__15_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Extra_0__Lean_initFn___closed__15_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Extra_0__Lean_initFn___closed__16_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_ppDedentIfGrouped___regBuiltin_Lean_Parser_ppDedentIfGrouped_docString__1___closed__1_value)}};
static const lean_object* l___private_Lean_Parser_Extra_0__Lean_initFn___closed__16_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Extra_0__Lean_initFn___closed__16_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Parser_Extra_0__Lean_initFn___closed__17_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_ppDedentIfGrouped_formatter___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Parser_Extra_0__Lean_initFn___closed__17_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Extra_0__Lean_initFn___closed__17_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Extra_0__Lean_initFn___closed__18_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Extra_0__Lean_initFn___closed__17_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_Parser_Extra_0__Lean_initFn___closed__18_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Extra_0__Lean_initFn___closed__18_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Extra_0__Lean_initFn___closed__19_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Extra_0__Lean_initFn___closed__2_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_Parser_Extra_0__Lean_initFn___closed__19_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Extra_0__Lean_initFn___closed__19_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Extra_0__Lean_initFn___closed__20_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_ppDedent___regBuiltin_Lean_Parser_ppDedent_docString__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(242, 37, 230, 124, 106, 100, 159, 37)}};
static const lean_object* l___private_Lean_Parser_Extra_0__Lean_initFn___closed__20_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Extra_0__Lean_initFn___closed__20_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Extra_0__Lean_initFn___closed__21_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_ppDedent___regBuiltin_Lean_Parser_ppDedent_docString__1___closed__1_value)}};
static const lean_object* l___private_Lean_Parser_Extra_0__Lean_initFn___closed__21_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Extra_0__Lean_initFn___closed__21_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Parser_Extra_0__Lean_initFn___closed__22_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_ppDedent_formatter___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Parser_Extra_0__Lean_initFn___closed__22_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Extra_0__Lean_initFn___closed__22_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Extra_0__Lean_initFn___closed__23_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Extra_0__Lean_initFn___closed__22_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_Parser_Extra_0__Lean_initFn___closed__23_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Extra_0__Lean_initFn___closed__23_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Extra_0__Lean_initFn___closed__24_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_ppIndent___regBuiltin_Lean_Parser_ppIndent_docString__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(240, 142, 232, 190, 100, 212, 29, 41)}};
static const lean_object* l___private_Lean_Parser_Extra_0__Lean_initFn___closed__24_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Extra_0__Lean_initFn___closed__24_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Extra_0__Lean_initFn___closed__25_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_ppIndent___regBuiltin_Lean_Parser_ppIndent_docString__1___closed__1_value)}};
static const lean_object* l___private_Lean_Parser_Extra_0__Lean_initFn___closed__25_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Extra_0__Lean_initFn___closed__25_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Parser_Extra_0__Lean_initFn___closed__26_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_ppIndent_formatter___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Parser_Extra_0__Lean_initFn___closed__26_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Extra_0__Lean_initFn___closed__26_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Extra_0__Lean_initFn___closed__27_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Extra_0__Lean_initFn___closed__26_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_Parser_Extra_0__Lean_initFn___closed__27_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Extra_0__Lean_initFn___closed__27_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Extra_0__Lean_initFn___closed__28_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_ppRealFill___regBuiltin_Lean_Parser_ppRealFill_docString__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(21, 219, 143, 167, 248, 5, 230, 49)}};
static const lean_object* l___private_Lean_Parser_Extra_0__Lean_initFn___closed__28_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Extra_0__Lean_initFn___closed__28_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Extra_0__Lean_initFn___closed__29_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_ppRealFill___regBuiltin_Lean_Parser_ppRealFill_docString__1___closed__1_value)}};
static const lean_object* l___private_Lean_Parser_Extra_0__Lean_initFn___closed__29_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Extra_0__Lean_initFn___closed__29_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Extra_0__Lean_initFn___closed__30_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Extra_0__Lean_initFn___closed__3_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_Parser_Extra_0__Lean_initFn___closed__30_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Extra_0__Lean_initFn___closed__30_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Extra_0__Lean_initFn___closed__31_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_ppRealGroup___regBuiltin_Lean_Parser_ppRealGroup_docString__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(86, 184, 190, 137, 27, 87, 63, 174)}};
static const lean_object* l___private_Lean_Parser_Extra_0__Lean_initFn___closed__31_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Extra_0__Lean_initFn___closed__31_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Extra_0__Lean_initFn___closed__32_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_ppRealGroup___regBuiltin_Lean_Parser_ppRealGroup_docString__1___closed__1_value)}};
static const lean_object* l___private_Lean_Parser_Extra_0__Lean_initFn___closed__32_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Extra_0__Lean_initFn___closed__32_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Extra_0__Lean_initFn___closed__33_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Extra_0__Lean_initFn___closed__4_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_Parser_Extra_0__Lean_initFn___closed__33_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Extra_0__Lean_initFn___closed__33_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Extra_0__Lean_initFn___closed__34_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Extra_0__Lean_initFn___closed__6_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_Parser_Extra_0__Lean_initFn___closed__34_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Extra_0__Lean_initFn___closed__34_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Extra_0__Lean_initFn___closed__35_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_patternIgnore___regBuiltin_Lean_Parser_patternIgnore_docString__1___closed__0_value)}};
static const lean_object* l___private_Lean_Parser_Extra_0__Lean_initFn___closed__35_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Extra_0__Lean_initFn___closed__35_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Extra_0__Lean_initFn___closed__36_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_ppGroup___regBuiltin_Lean_Parser_ppGroup_docString__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(149, 180, 65, 169, 196, 28, 141, 221)}};
static const lean_object* l___private_Lean_Parser_Extra_0__Lean_initFn___closed__36_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Extra_0__Lean_initFn___closed__36_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Extra_0__Lean_initFn___closed__37_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_ppGroup___regBuiltin_Lean_Parser_ppGroup_docString__1___closed__1_value)}};
static const lean_object* l___private_Lean_Parser_Extra_0__Lean_initFn___closed__37_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Extra_0__Lean_initFn___closed__37_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Parser_Extra_0__Lean_initFn___closed__38_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extra_0__Lean_initFn___closed__38_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2_;
static const lean_closure_object l___private_Lean_Parser_Extra_0__Lean_initFn___closed__39_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_ppGroup_formatter___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Parser_Extra_0__Lean_initFn___closed__39_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Extra_0__Lean_initFn___closed__39_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Extra_0__Lean_initFn___closed__40_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Extra_0__Lean_initFn___closed__39_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_Parser_Extra_0__Lean_initFn___closed__40_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Extra_0__Lean_initFn___closed__40_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Extra_0__Lean_initFn___closed__41_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_ppLine___regBuiltin_Lean_Parser_ppLine_docString__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(117, 61, 38, 245, 158, 59, 171, 58)}};
static const lean_object* l___private_Lean_Parser_Extra_0__Lean_initFn___closed__41_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Extra_0__Lean_initFn___closed__41_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Extra_0__Lean_initFn___closed__42_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_ppLine___regBuiltin_Lean_Parser_ppLine_docString__1___closed__1_value)}};
static const lean_object* l___private_Lean_Parser_Extra_0__Lean_initFn___closed__42_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Extra_0__Lean_initFn___closed__42_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Parser_Extra_0__Lean_initFn___closed__43_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extra_0__Lean_initFn___closed__43_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2_;
static const lean_ctor_object l___private_Lean_Parser_Extra_0__Lean_initFn___closed__44_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_ppSpace___regBuiltin_Lean_Parser_ppSpace_docString__1___closed__1_value)}};
static const lean_object* l___private_Lean_Parser_Extra_0__Lean_initFn___closed__44_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Extra_0__Lean_initFn___closed__44_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Extra_0__Lean_initFn___closed__45_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Extra_0__Lean_initFn___closed__5_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_Parser_Extra_0__Lean_initFn___closed__45_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Extra_0__Lean_initFn___closed__45_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Extra_0__Lean_initFn___closed__46_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_ppHardSpace___regBuiltin_Lean_Parser_ppHardSpace_docString__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(207, 168, 190, 83, 177, 86, 113, 221)}};
static const lean_object* l___private_Lean_Parser_Extra_0__Lean_initFn___closed__46_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Extra_0__Lean_initFn___closed__46_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Parser_Extra_0__Lean_initFn___closed__47_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extra_0__Lean_initFn___closed__47_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2_;
static const lean_ctor_object l___private_Lean_Parser_Extra_0__Lean_initFn___closed__48_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_ppHardSpace___regBuiltin_Lean_Parser_ppHardSpace_docString__1___closed__1_value)}};
static const lean_object* l___private_Lean_Parser_Extra_0__Lean_initFn___closed__48_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Extra_0__Lean_initFn___closed__48_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Extra_0__Lean_initFn___closed__49_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Extra_0__Lean_initFn___closed__49_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Extra_0__Lean_initFn___closed__49_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Parser_Extra_0__Lean_initFn___closed__50_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extra_0__Lean_initFn___closed__50_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Parser_Extra_0__Lean_initFn___closed__51_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extra_0__Lean_initFn___closed__51_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2_;
static const lean_ctor_object l___private_Lean_Parser_Extra_0__Lean_initFn___closed__52_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Extra_0__Lean_initFn___closed__52_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Extra_0__Lean_initFn___closed__52_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Parser_Extra_0__Lean_initFn___closed__53_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extra_0__Lean_initFn___closed__53_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2_;
static const lean_closure_object l___private_Lean_Parser_Extra_0__Lean_initFn___closed__54_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Parser_Extra_0__Lean_initFn___lam__5_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2_, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Parser_group_formatter___closed__1_value)} };
static const lean_object* l___private_Lean_Parser_Extra_0__Lean_initFn___closed__54_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Extra_0__Lean_initFn___closed__54_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Extra_0__Lean_initFn___closed__55_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Extra_0__Lean_initFn___closed__54_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_Parser_Extra_0__Lean_initFn___closed__55_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Extra_0__Lean_initFn___closed__55_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Extra_0__Lean_initFn___closed__56_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Extra_0__Lean_Parser_group___regBuiltin_Lean_Parser_group_docString__1___closed__0_value)}};
static const lean_object* l___private_Lean_Parser_Extra_0__Lean_initFn___closed__56_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Extra_0__Lean_initFn___closed__56_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Parser_Extra_0__Lean_initFn___closed__57_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_group_formatter___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Parser_Extra_0__Lean_initFn___closed__57_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Extra_0__Lean_initFn___closed__57_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Extra_0__Lean_initFn___closed__58_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Extra_0__Lean_initFn___closed__57_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_Parser_Extra_0__Lean_initFn___closed__58_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Extra_0__Lean_initFn___closed__58_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Parser_Extra_0__Lean_initFn___closed__59_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_group_parenthesizer___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Parser_Extra_0__Lean_initFn___closed__59_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Extra_0__Lean_initFn___closed__59_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Extra_0__Lean_initFn___closed__60_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Extra_0__Lean_initFn___closed__59_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_Parser_Extra_0__Lean_initFn___closed__60_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Extra_0__Lean_initFn___closed__60_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Parser_Extra_0__Lean_initFn___closed__61_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_patternIgnore_formatter___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Parser_Extra_0__Lean_initFn___closed__61_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Extra_0__Lean_initFn___closed__61_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Extra_0__Lean_initFn___closed__62_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Extra_0__Lean_initFn___closed__61_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_Parser_Extra_0__Lean_initFn___closed__62_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Extra_0__Lean_initFn___closed__62_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Parser_Extra_0__Lean_initFn___closed__63_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_patternIgnore_parenthesizer___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Parser_Extra_0__Lean_initFn___closed__63_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Extra_0__Lean_initFn___closed__63_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Extra_0__Lean_initFn___closed__64_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Extra_0__Lean_initFn___closed__63_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_Parser_Extra_0__Lean_initFn___closed__64_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Extra_0__Lean_initFn___closed__64_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_initFn_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_initFn_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_leadingNode_formatter___redArg(lean_object* v_n_1_, lean_object* v_p_2_, lean_object* v_a_3_, lean_object* v_a_4_, lean_object* v_a_5_, lean_object* v_a_6_){
_start:
{
lean_object* v___x_8_; lean_object* v___x_9_; lean_object* v___x_10_; lean_object* v___x_11_; lean_object* v___x_12_; 
v___x_8_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_checkPrec_formatter___boxed), 5, 0);
v___x_9_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_node_formatter___boxed), 7, 2);
lean_closure_set(v___x_9_, 0, v_n_1_);
lean_closure_set(v___x_9_, 1, v_p_2_);
v___x_10_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_setLhsPrec_formatter___boxed), 5, 0);
v___x_11_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed), 7, 2);
lean_closure_set(v___x_11_, 0, v___x_9_);
lean_closure_set(v___x_11_, 1, v___x_10_);
v___x_12_ = l_Lean_PrettyPrinter_Formatter_andthen_formatter(v___x_8_, v___x_11_, v_a_3_, v_a_4_, v_a_5_, v_a_6_);
return v___x_12_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_leadingNode_formatter___redArg___boxed(lean_object* v_n_13_, lean_object* v_p_14_, lean_object* v_a_15_, lean_object* v_a_16_, lean_object* v_a_17_, lean_object* v_a_18_, lean_object* v_a_19_){
_start:
{
lean_object* v_res_20_; 
v_res_20_ = l_Lean_Parser_leadingNode_formatter___redArg(v_n_13_, v_p_14_, v_a_15_, v_a_16_, v_a_17_, v_a_18_);
lean_dec(v_a_18_);
lean_dec_ref(v_a_17_);
lean_dec(v_a_16_);
lean_dec_ref(v_a_15_);
return v_res_20_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_leadingNode_formatter(lean_object* v_n_21_, lean_object* v_prec_22_, lean_object* v_p_23_, lean_object* v_a_24_, lean_object* v_a_25_, lean_object* v_a_26_, lean_object* v_a_27_){
_start:
{
lean_object* v___x_29_; 
v___x_29_ = l_Lean_Parser_leadingNode_formatter___redArg(v_n_21_, v_p_23_, v_a_24_, v_a_25_, v_a_26_, v_a_27_);
return v___x_29_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_leadingNode_formatter___boxed(lean_object* v_n_30_, lean_object* v_prec_31_, lean_object* v_p_32_, lean_object* v_a_33_, lean_object* v_a_34_, lean_object* v_a_35_, lean_object* v_a_36_, lean_object* v_a_37_){
_start:
{
lean_object* v_res_38_; 
v_res_38_ = l_Lean_Parser_leadingNode_formatter(v_n_30_, v_prec_31_, v_p_32_, v_a_33_, v_a_34_, v_a_35_, v_a_36_);
lean_dec(v_a_36_);
lean_dec_ref(v_a_35_);
lean_dec(v_a_34_);
lean_dec_ref(v_a_33_);
lean_dec(v_prec_31_);
return v_res_38_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_termParser_formatter___redArg(lean_object* v_a_42_, lean_object* v_a_43_, lean_object* v_a_44_, lean_object* v_a_45_){
_start:
{
lean_object* v___x_47_; lean_object* v___x_48_; 
v___x_47_ = ((lean_object*)(l_Lean_Parser_termParser_formatter___redArg___closed__1));
v___x_48_ = l_Lean_PrettyPrinter_Formatter_categoryParser_formatter(v___x_47_, v_a_42_, v_a_43_, v_a_44_, v_a_45_);
return v___x_48_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_termParser_formatter___redArg___boxed(lean_object* v_a_49_, lean_object* v_a_50_, lean_object* v_a_51_, lean_object* v_a_52_, lean_object* v_a_53_){
_start:
{
lean_object* v_res_54_; 
v_res_54_ = l_Lean_Parser_termParser_formatter___redArg(v_a_49_, v_a_50_, v_a_51_, v_a_52_);
lean_dec(v_a_52_);
lean_dec_ref(v_a_51_);
lean_dec(v_a_50_);
lean_dec_ref(v_a_49_);
return v_res_54_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_termParser_formatter(lean_object* v_prec_55_, lean_object* v_a_56_, lean_object* v_a_57_, lean_object* v_a_58_, lean_object* v_a_59_){
_start:
{
lean_object* v___x_61_; 
v___x_61_ = l_Lean_Parser_termParser_formatter___redArg(v_a_56_, v_a_57_, v_a_58_, v_a_59_);
return v___x_61_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_termParser_formatter___boxed(lean_object* v_prec_62_, lean_object* v_a_63_, lean_object* v_a_64_, lean_object* v_a_65_, lean_object* v_a_66_, lean_object* v_a_67_){
_start:
{
lean_object* v_res_68_; 
v_res_68_ = l_Lean_Parser_termParser_formatter(v_prec_62_, v_a_63_, v_a_64_, v_a_65_, v_a_66_);
lean_dec(v_a_66_);
lean_dec_ref(v_a_65_);
lean_dec(v_a_64_);
lean_dec_ref(v_a_63_);
lean_dec(v_prec_62_);
return v_res_68_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_termParser_parenthesizer(lean_object* v_prec_69_, lean_object* v_a_70_, lean_object* v_a_71_, lean_object* v_a_72_, lean_object* v_a_73_){
_start:
{
lean_object* v___x_75_; lean_object* v___x_76_; 
v___x_75_ = ((lean_object*)(l_Lean_Parser_termParser_formatter___redArg___closed__1));
v___x_76_ = l_Lean_PrettyPrinter_Parenthesizer_categoryParser_parenthesizer(v___x_75_, v_prec_69_, v_a_70_, v_a_71_, v_a_72_, v_a_73_);
return v___x_76_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_termParser_parenthesizer___boxed(lean_object* v_prec_77_, lean_object* v_a_78_, lean_object* v_a_79_, lean_object* v_a_80_, lean_object* v_a_81_, lean_object* v_a_82_){
_start:
{
lean_object* v_res_83_; 
v_res_83_ = l_Lean_Parser_termParser_parenthesizer(v_prec_77_, v_a_78_, v_a_79_, v_a_80_, v_a_81_);
lean_dec(v_a_81_);
lean_dec_ref(v_a_80_);
lean_dec(v_a_79_);
lean_dec_ref(v_a_78_);
return v_res_83_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_commandParser_formatter___redArg(lean_object* v_a_87_, lean_object* v_a_88_, lean_object* v_a_89_, lean_object* v_a_90_){
_start:
{
lean_object* v___x_92_; lean_object* v___x_93_; 
v___x_92_ = ((lean_object*)(l_Lean_Parser_commandParser_formatter___redArg___closed__1));
v___x_93_ = l_Lean_PrettyPrinter_Formatter_categoryParser_formatter(v___x_92_, v_a_87_, v_a_88_, v_a_89_, v_a_90_);
return v___x_93_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_commandParser_formatter___redArg___boxed(lean_object* v_a_94_, lean_object* v_a_95_, lean_object* v_a_96_, lean_object* v_a_97_, lean_object* v_a_98_){
_start:
{
lean_object* v_res_99_; 
v_res_99_ = l_Lean_Parser_commandParser_formatter___redArg(v_a_94_, v_a_95_, v_a_96_, v_a_97_);
lean_dec(v_a_97_);
lean_dec_ref(v_a_96_);
lean_dec(v_a_95_);
lean_dec_ref(v_a_94_);
return v_res_99_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_commandParser_formatter(lean_object* v_rbp_100_, lean_object* v_a_101_, lean_object* v_a_102_, lean_object* v_a_103_, lean_object* v_a_104_){
_start:
{
lean_object* v___x_106_; 
v___x_106_ = l_Lean_Parser_commandParser_formatter___redArg(v_a_101_, v_a_102_, v_a_103_, v_a_104_);
return v___x_106_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_commandParser_formatter___boxed(lean_object* v_rbp_107_, lean_object* v_a_108_, lean_object* v_a_109_, lean_object* v_a_110_, lean_object* v_a_111_, lean_object* v_a_112_){
_start:
{
lean_object* v_res_113_; 
v_res_113_ = l_Lean_Parser_commandParser_formatter(v_rbp_107_, v_a_108_, v_a_109_, v_a_110_, v_a_111_);
lean_dec(v_a_111_);
lean_dec_ref(v_a_110_);
lean_dec(v_a_109_);
lean_dec_ref(v_a_108_);
lean_dec(v_rbp_107_);
return v_res_113_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_commandParser_parenthesizer(lean_object* v_rbp_114_, lean_object* v_a_115_, lean_object* v_a_116_, lean_object* v_a_117_, lean_object* v_a_118_){
_start:
{
lean_object* v___x_120_; lean_object* v___x_121_; 
v___x_120_ = ((lean_object*)(l_Lean_Parser_commandParser_formatter___redArg___closed__1));
v___x_121_ = l_Lean_PrettyPrinter_Parenthesizer_categoryParser_parenthesizer(v___x_120_, v_rbp_114_, v_a_115_, v_a_116_, v_a_117_, v_a_118_);
return v___x_121_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_commandParser_parenthesizer___boxed(lean_object* v_rbp_122_, lean_object* v_a_123_, lean_object* v_a_124_, lean_object* v_a_125_, lean_object* v_a_126_, lean_object* v_a_127_){
_start:
{
lean_object* v_res_128_; 
v_res_128_ = l_Lean_Parser_commandParser_parenthesizer(v_rbp_122_, v_a_123_, v_a_124_, v_a_125_, v_a_126_);
lean_dec(v_a_126_);
lean_dec_ref(v_a_125_);
lean_dec(v_a_124_);
lean_dec_ref(v_a_123_);
return v_res_128_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_atomic_formatter(lean_object* v_p_129_, lean_object* v_a_130_, lean_object* v_a_131_, lean_object* v_a_132_, lean_object* v_a_133_){
_start:
{
lean_object* v___x_135_; 
lean_inc(v_a_133_);
lean_inc_ref(v_a_132_);
lean_inc(v_a_131_);
lean_inc_ref(v_a_130_);
v___x_135_ = lean_apply_5(v_p_129_, v_a_130_, v_a_131_, v_a_132_, v_a_133_, lean_box(0));
return v___x_135_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_atomic_formatter___boxed(lean_object* v_p_136_, lean_object* v_a_137_, lean_object* v_a_138_, lean_object* v_a_139_, lean_object* v_a_140_, lean_object* v_a_141_){
_start:
{
lean_object* v_res_142_; 
v_res_142_ = l_Lean_Parser_atomic_formatter(v_p_136_, v_a_137_, v_a_138_, v_a_139_, v_a_140_);
lean_dec(v_a_140_);
lean_dec_ref(v_a_139_);
lean_dec(v_a_138_);
lean_dec_ref(v_a_137_);
return v_res_142_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_setExpected_formatter___redArg(lean_object* v_p_143_, lean_object* v_a_144_, lean_object* v_a_145_, lean_object* v_a_146_, lean_object* v_a_147_){
_start:
{
lean_object* v___x_149_; 
lean_inc(v_a_147_);
lean_inc_ref(v_a_146_);
lean_inc(v_a_145_);
lean_inc_ref(v_a_144_);
v___x_149_ = lean_apply_5(v_p_143_, v_a_144_, v_a_145_, v_a_146_, v_a_147_, lean_box(0));
return v___x_149_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_setExpected_formatter___redArg___boxed(lean_object* v_p_150_, lean_object* v_a_151_, lean_object* v_a_152_, lean_object* v_a_153_, lean_object* v_a_154_, lean_object* v_a_155_){
_start:
{
lean_object* v_res_156_; 
v_res_156_ = l_Lean_Parser_setExpected_formatter___redArg(v_p_150_, v_a_151_, v_a_152_, v_a_153_, v_a_154_);
lean_dec(v_a_154_);
lean_dec_ref(v_a_153_);
lean_dec(v_a_152_);
lean_dec_ref(v_a_151_);
return v_res_156_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_setExpected_formatter(lean_object* v_expected_157_, lean_object* v_p_158_, lean_object* v_a_159_, lean_object* v_a_160_, lean_object* v_a_161_, lean_object* v_a_162_){
_start:
{
lean_object* v___x_164_; 
lean_inc(v_a_162_);
lean_inc_ref(v_a_161_);
lean_inc(v_a_160_);
lean_inc_ref(v_a_159_);
v___x_164_ = lean_apply_5(v_p_158_, v_a_159_, v_a_160_, v_a_161_, v_a_162_, lean_box(0));
return v___x_164_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_setExpected_formatter___boxed(lean_object* v_expected_165_, lean_object* v_p_166_, lean_object* v_a_167_, lean_object* v_a_168_, lean_object* v_a_169_, lean_object* v_a_170_, lean_object* v_a_171_){
_start:
{
lean_object* v_res_172_; 
v_res_172_ = l_Lean_Parser_setExpected_formatter(v_expected_165_, v_p_166_, v_a_167_, v_a_168_, v_a_169_, v_a_170_);
lean_dec(v_a_170_);
lean_dec_ref(v_a_169_);
lean_dec(v_a_168_);
lean_dec_ref(v_a_167_);
lean_dec(v_expected_165_);
return v_res_172_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_symbol_formatter(lean_object* v_sym_173_, lean_object* v_a_174_, lean_object* v_a_175_, lean_object* v_a_176_, lean_object* v_a_177_){
_start:
{
lean_object* v___x_179_; lean_object* v___x_180_; 
v___x_179_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_symbolNoAntiquot_formatter___boxed), 6, 1);
lean_closure_set(v___x_179_, 0, v_sym_173_);
v___x_180_ = l_Lean_PrettyPrinter_Formatter_tokenWithAntiquot_formatter(v___x_179_, v_a_174_, v_a_175_, v_a_176_, v_a_177_);
return v___x_180_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_symbol_formatter___boxed(lean_object* v_sym_181_, lean_object* v_a_182_, lean_object* v_a_183_, lean_object* v_a_184_, lean_object* v_a_185_, lean_object* v_a_186_){
_start:
{
lean_object* v_res_187_; 
v_res_187_ = l_Lean_Parser_symbol_formatter(v_sym_181_, v_a_182_, v_a_183_, v_a_184_, v_a_185_);
lean_dec(v_a_185_);
lean_dec_ref(v_a_184_);
lean_dec(v_a_183_);
lean_dec_ref(v_a_182_);
return v_res_187_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_adaptCacheableContext_formatter___redArg(lean_object* v_p_188_, lean_object* v_a_189_, lean_object* v_a_190_, lean_object* v_a_191_, lean_object* v_a_192_){
_start:
{
lean_object* v___x_194_; 
lean_inc(v_a_192_);
lean_inc_ref(v_a_191_);
lean_inc(v_a_190_);
lean_inc_ref(v_a_189_);
v___x_194_ = lean_apply_5(v_p_188_, v_a_189_, v_a_190_, v_a_191_, v_a_192_, lean_box(0));
return v___x_194_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_adaptCacheableContext_formatter___redArg___boxed(lean_object* v_p_195_, lean_object* v_a_196_, lean_object* v_a_197_, lean_object* v_a_198_, lean_object* v_a_199_, lean_object* v_a_200_){
_start:
{
lean_object* v_res_201_; 
v_res_201_ = l_Lean_Parser_adaptCacheableContext_formatter___redArg(v_p_195_, v_a_196_, v_a_197_, v_a_198_, v_a_199_);
lean_dec(v_a_199_);
lean_dec_ref(v_a_198_);
lean_dec(v_a_197_);
lean_dec_ref(v_a_196_);
return v_res_201_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_adaptCacheableContext_formatter(lean_object* v_f_202_, lean_object* v_p_203_, lean_object* v_a_204_, lean_object* v_a_205_, lean_object* v_a_206_, lean_object* v_a_207_){
_start:
{
lean_object* v___x_209_; 
lean_inc(v_a_207_);
lean_inc_ref(v_a_206_);
lean_inc(v_a_205_);
lean_inc_ref(v_a_204_);
v___x_209_ = lean_apply_5(v_p_203_, v_a_204_, v_a_205_, v_a_206_, v_a_207_, lean_box(0));
return v___x_209_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_adaptCacheableContext_formatter___boxed(lean_object* v_f_210_, lean_object* v_p_211_, lean_object* v_a_212_, lean_object* v_a_213_, lean_object* v_a_214_, lean_object* v_a_215_, lean_object* v_a_216_){
_start:
{
lean_object* v_res_217_; 
v_res_217_ = l_Lean_Parser_adaptCacheableContext_formatter(v_f_210_, v_p_211_, v_a_212_, v_a_213_, v_a_214_, v_a_215_);
lean_dec(v_a_215_);
lean_dec_ref(v_a_214_);
lean_dec(v_a_213_);
lean_dec_ref(v_a_212_);
lean_dec_ref(v_f_210_);
return v_res_217_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_addQuotDepth_formatter___redArg(lean_object* v_p_218_, lean_object* v_a_219_, lean_object* v_a_220_, lean_object* v_a_221_, lean_object* v_a_222_){
_start:
{
lean_object* v___x_224_; 
lean_inc(v_a_222_);
lean_inc_ref(v_a_221_);
lean_inc(v_a_220_);
lean_inc_ref(v_a_219_);
v___x_224_ = lean_apply_5(v_p_218_, v_a_219_, v_a_220_, v_a_221_, v_a_222_, lean_box(0));
return v___x_224_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_addQuotDepth_formatter___redArg___boxed(lean_object* v_p_225_, lean_object* v_a_226_, lean_object* v_a_227_, lean_object* v_a_228_, lean_object* v_a_229_, lean_object* v_a_230_){
_start:
{
lean_object* v_res_231_; 
v_res_231_ = l___private_Lean_Parser_Basic_0__Lean_Parser_addQuotDepth_formatter___redArg(v_p_225_, v_a_226_, v_a_227_, v_a_228_, v_a_229_);
lean_dec(v_a_229_);
lean_dec_ref(v_a_228_);
lean_dec(v_a_227_);
lean_dec_ref(v_a_226_);
return v_res_231_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_addQuotDepth_formatter(lean_object* v_i_232_, lean_object* v_p_233_, lean_object* v_a_234_, lean_object* v_a_235_, lean_object* v_a_236_, lean_object* v_a_237_){
_start:
{
lean_object* v___x_239_; 
lean_inc(v_a_237_);
lean_inc_ref(v_a_236_);
lean_inc(v_a_235_);
lean_inc_ref(v_a_234_);
v___x_239_ = lean_apply_5(v_p_233_, v_a_234_, v_a_235_, v_a_236_, v_a_237_, lean_box(0));
return v___x_239_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_addQuotDepth_formatter___boxed(lean_object* v_i_240_, lean_object* v_p_241_, lean_object* v_a_242_, lean_object* v_a_243_, lean_object* v_a_244_, lean_object* v_a_245_, lean_object* v_a_246_){
_start:
{
lean_object* v_res_247_; 
v_res_247_ = l___private_Lean_Parser_Basic_0__Lean_Parser_addQuotDepth_formatter(v_i_240_, v_p_241_, v_a_242_, v_a_243_, v_a_244_, v_a_245_);
lean_dec(v_a_245_);
lean_dec_ref(v_a_244_);
lean_dec(v_a_243_);
lean_dec_ref(v_a_242_);
lean_dec(v_i_240_);
return v_res_247_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_decQuotDepth_formatter(lean_object* v_p_248_, lean_object* v_a_249_, lean_object* v_a_250_, lean_object* v_a_251_, lean_object* v_a_252_){
_start:
{
lean_object* v___x_254_; 
lean_inc(v_a_252_);
lean_inc_ref(v_a_251_);
lean_inc(v_a_250_);
lean_inc_ref(v_a_249_);
v___x_254_ = lean_apply_5(v_p_248_, v_a_249_, v_a_250_, v_a_251_, v_a_252_, lean_box(0));
return v___x_254_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_decQuotDepth_formatter___boxed(lean_object* v_p_255_, lean_object* v_a_256_, lean_object* v_a_257_, lean_object* v_a_258_, lean_object* v_a_259_, lean_object* v_a_260_){
_start:
{
lean_object* v_res_261_; 
v_res_261_ = l_Lean_Parser_decQuotDepth_formatter(v_p_255_, v_a_256_, v_a_257_, v_a_258_, v_a_259_);
lean_dec(v_a_259_);
lean_dec_ref(v_a_258_);
lean_dec(v_a_257_);
lean_dec_ref(v_a_256_);
return v_res_261_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_antiquotNestedExpr_formatter(lean_object* v_a_278_, lean_object* v_a_279_, lean_object* v_a_280_, lean_object* v_a_281_){
_start:
{
lean_object* v___x_283_; lean_object* v___x_284_; lean_object* v___x_285_; 
v___x_283_ = ((lean_object*)(l_Lean_Parser_antiquotNestedExpr_formatter___closed__2));
v___x_284_ = ((lean_object*)(l_Lean_Parser_antiquotNestedExpr_formatter___closed__8));
v___x_285_ = l_Lean_PrettyPrinter_Formatter_node_formatter(v___x_283_, v___x_284_, v_a_278_, v_a_279_, v_a_280_, v_a_281_);
return v___x_285_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_antiquotNestedExpr_formatter___boxed(lean_object* v_a_286_, lean_object* v_a_287_, lean_object* v_a_288_, lean_object* v_a_289_, lean_object* v_a_290_){
_start:
{
lean_object* v_res_291_; 
v_res_291_ = l_Lean_Parser_antiquotNestedExpr_formatter(v_a_286_, v_a_287_, v_a_288_, v_a_289_);
lean_dec(v_a_289_);
lean_dec_ref(v_a_288_);
lean_dec(v_a_287_);
lean_dec_ref(v_a_286_);
return v_res_291_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15(){
_start:
{
lean_object* v___x_301_; lean_object* v___x_302_; lean_object* v___x_303_; lean_object* v___x_304_; lean_object* v___x_305_; 
v___x_301_ = l_Lean_PrettyPrinter_formatterAttribute;
v___x_302_ = ((lean_object*)(l_Lean_Parser_antiquotNestedExpr_formatter___closed__2));
v___x_303_ = ((lean_object*)(l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__3));
v___x_304_ = lean_alloc_closure((void*)(l_Lean_Parser_antiquotNestedExpr_formatter___boxed), 5, 0);
v___x_305_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_301_, v___x_302_, v___x_303_, v___x_304_);
return v___x_305_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___boxed(lean_object* v_a_306_){
_start:
{
lean_object* v_res_307_; 
v_res_307_ = l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15();
return v_res_307_;
}
}
static lean_object* _init_l_Lean_Parser_antiquotExpr_formatter___closed__2(void){
_start:
{
lean_object* v___x_311_; lean_object* v___x_312_; lean_object* v___x_313_; 
v___x_311_ = lean_alloc_closure((void*)(l_Lean_Parser_antiquotNestedExpr_formatter___boxed), 5, 0);
v___x_312_ = ((lean_object*)(l_Lean_Parser_antiquotExpr_formatter___closed__1));
v___x_313_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_orelse_formatter___boxed), 7, 2);
lean_closure_set(v___x_313_, 0, v___x_312_);
lean_closure_set(v___x_313_, 1, v___x_311_);
return v___x_313_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_antiquotExpr_formatter(lean_object* v_a_314_, lean_object* v_a_315_, lean_object* v_a_316_, lean_object* v_a_317_){
_start:
{
lean_object* v___x_319_; lean_object* v___x_320_; lean_object* v___x_321_; 
v___x_319_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_identNoAntiquot_formatter___boxed), 5, 0);
v___x_320_ = lean_obj_once(&l_Lean_Parser_antiquotExpr_formatter___closed__2, &l_Lean_Parser_antiquotExpr_formatter___closed__2_once, _init_l_Lean_Parser_antiquotExpr_formatter___closed__2);
v___x_321_ = l_Lean_PrettyPrinter_Formatter_orelse_formatter(v___x_319_, v___x_320_, v_a_314_, v_a_315_, v_a_316_, v_a_317_);
return v___x_321_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_antiquotExpr_formatter___boxed(lean_object* v_a_322_, lean_object* v_a_323_, lean_object* v_a_324_, lean_object* v_a_325_, lean_object* v_a_326_){
_start:
{
lean_object* v_res_327_; 
v_res_327_ = l_Lean_Parser_antiquotExpr_formatter(v_a_322_, v_a_323_, v_a_324_, v_a_325_);
lean_dec(v_a_325_);
lean_dec_ref(v_a_324_);
lean_dec(v_a_323_);
lean_dec_ref(v_a_322_);
return v_res_327_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_nonReservedSymbol_formatter___redArg___lam__0(lean_object* v_sym_328_, lean_object* v___y_329_, lean_object* v___y_330_, lean_object* v___y_331_, lean_object* v___y_332_){
_start:
{
lean_object* v___x_334_; 
v___x_334_ = l_Lean_PrettyPrinter_Formatter_symbolNoAntiquot_formatter(v_sym_328_, v___y_329_, v___y_330_, v___y_331_, v___y_332_);
return v___x_334_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_nonReservedSymbol_formatter___redArg___lam__0___boxed(lean_object* v_sym_335_, lean_object* v___y_336_, lean_object* v___y_337_, lean_object* v___y_338_, lean_object* v___y_339_, lean_object* v___y_340_){
_start:
{
lean_object* v_res_341_; 
v_res_341_ = l_Lean_Parser_nonReservedSymbol_formatter___redArg___lam__0(v_sym_335_, v___y_336_, v___y_337_, v___y_338_, v___y_339_);
lean_dec(v___y_339_);
lean_dec_ref(v___y_338_);
lean_dec(v___y_337_);
lean_dec_ref(v___y_336_);
return v_res_341_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_nonReservedSymbol_formatter___redArg(lean_object* v_sym_342_, lean_object* v_a_343_, lean_object* v_a_344_, lean_object* v_a_345_, lean_object* v_a_346_){
_start:
{
lean_object* v___f_348_; lean_object* v___x_349_; 
v___f_348_ = lean_alloc_closure((void*)(l_Lean_Parser_nonReservedSymbol_formatter___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_348_, 0, v_sym_342_);
v___x_349_ = l_Lean_PrettyPrinter_Formatter_tokenWithAntiquot_formatter(v___f_348_, v_a_343_, v_a_344_, v_a_345_, v_a_346_);
return v___x_349_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_nonReservedSymbol_formatter___redArg___boxed(lean_object* v_sym_350_, lean_object* v_a_351_, lean_object* v_a_352_, lean_object* v_a_353_, lean_object* v_a_354_, lean_object* v_a_355_){
_start:
{
lean_object* v_res_356_; 
v_res_356_ = l_Lean_Parser_nonReservedSymbol_formatter___redArg(v_sym_350_, v_a_351_, v_a_352_, v_a_353_, v_a_354_);
lean_dec(v_a_354_);
lean_dec_ref(v_a_353_);
lean_dec(v_a_352_);
lean_dec_ref(v_a_351_);
return v_res_356_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_nonReservedSymbol_formatter(lean_object* v_sym_357_, uint8_t v_includeIdent_358_, lean_object* v_a_359_, lean_object* v_a_360_, lean_object* v_a_361_, lean_object* v_a_362_){
_start:
{
lean_object* v___x_364_; 
v___x_364_ = l_Lean_Parser_nonReservedSymbol_formatter___redArg(v_sym_357_, v_a_359_, v_a_360_, v_a_361_, v_a_362_);
return v___x_364_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_nonReservedSymbol_formatter___boxed(lean_object* v_sym_365_, lean_object* v_includeIdent_366_, lean_object* v_a_367_, lean_object* v_a_368_, lean_object* v_a_369_, lean_object* v_a_370_, lean_object* v_a_371_){
_start:
{
uint8_t v_includeIdent_boxed_372_; lean_object* v_res_373_; 
v_includeIdent_boxed_372_ = lean_unbox(v_includeIdent_366_);
v_res_373_ = l_Lean_Parser_nonReservedSymbol_formatter(v_sym_365_, v_includeIdent_boxed_372_, v_a_367_, v_a_368_, v_a_369_, v_a_370_);
lean_dec(v_a_370_);
lean_dec_ref(v_a_369_);
lean_dec(v_a_368_);
lean_dec_ref(v_a_367_);
return v_res_373_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_mkAntiquot_formatter___lam__0(lean_object* v___y_374_, lean_object* v___y_375_, lean_object* v___y_376_, lean_object* v___y_377_){
_start:
{
lean_object* v___x_379_; 
v___x_379_ = l_Lean_PrettyPrinter_Formatter_resetLeadWord___redArg(v___y_375_);
return v___x_379_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_mkAntiquot_formatter___lam__0___boxed(lean_object* v___y_380_, lean_object* v___y_381_, lean_object* v___y_382_, lean_object* v___y_383_, lean_object* v___y_384_){
_start:
{
lean_object* v_res_385_; 
v_res_385_ = l_Lean_Parser_mkAntiquot_formatter___lam__0(v___y_380_, v___y_381_, v___y_382_, v___y_383_);
lean_dec(v___y_383_);
lean_dec_ref(v___y_382_);
lean_dec(v___y_381_);
lean_dec_ref(v___y_380_);
return v_res_385_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_mkAntiquot_formatter___lam__1(uint8_t v_anonymous_392_, lean_object* v_name_393_, lean_object* v___f_394_, lean_object* v___f_395_, lean_object* v___y_396_, lean_object* v___y_397_, lean_object* v___y_398_, lean_object* v___y_399_){
_start:
{
if (v_anonymous_392_ == 0)
{
lean_object* v___x_401_; lean_object* v___x_402_; lean_object* v___x_403_; lean_object* v___x_404_; lean_object* v___x_405_; lean_object* v___x_406_; lean_object* v___x_407_; 
lean_dec_ref(v___f_395_);
v___x_401_ = ((lean_object*)(l_Lean_Parser_mkAntiquot_formatter___lam__1___closed__1));
v___x_402_ = ((lean_object*)(l_Lean_Parser_mkAntiquot_formatter___lam__1___closed__3));
v___x_403_ = lean_box(v_anonymous_392_);
v___x_404_ = lean_alloc_closure((void*)(l_Lean_Parser_nonReservedSymbol_formatter___boxed), 7, 2);
lean_closure_set(v___x_404_, 0, v_name_393_);
lean_closure_set(v___x_404_, 1, v___x_403_);
v___x_405_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed), 7, 2);
lean_closure_set(v___x_405_, 0, v___x_402_);
lean_closure_set(v___x_405_, 1, v___x_404_);
v___x_406_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed), 7, 2);
lean_closure_set(v___x_406_, 0, v___f_394_);
lean_closure_set(v___x_406_, 1, v___x_405_);
v___x_407_ = l_Lean_PrettyPrinter_Formatter_node_formatter(v___x_401_, v___x_406_, v___y_396_, v___y_397_, v___y_398_, v___y_399_);
return v___x_407_;
}
else
{
lean_object* v___x_408_; lean_object* v___x_409_; uint8_t v___x_410_; lean_object* v___x_411_; lean_object* v___x_412_; lean_object* v___x_413_; lean_object* v___x_414_; lean_object* v___x_415_; lean_object* v___x_416_; lean_object* v___x_417_; lean_object* v___x_418_; 
v___x_408_ = ((lean_object*)(l_Lean_Parser_mkAntiquot_formatter___lam__1___closed__1));
v___x_409_ = ((lean_object*)(l_Lean_Parser_mkAntiquot_formatter___lam__1___closed__3));
v___x_410_ = 0;
v___x_411_ = lean_box(v___x_410_);
v___x_412_ = lean_alloc_closure((void*)(l_Lean_Parser_nonReservedSymbol_formatter___boxed), 7, 2);
lean_closure_set(v___x_412_, 0, v_name_393_);
lean_closure_set(v___x_412_, 1, v___x_411_);
v___x_413_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed), 7, 2);
lean_closure_set(v___x_413_, 0, v___x_409_);
lean_closure_set(v___x_413_, 1, v___x_412_);
v___x_414_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed), 7, 2);
lean_closure_set(v___x_414_, 0, v___f_394_);
lean_closure_set(v___x_414_, 1, v___x_413_);
v___x_415_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_node_formatter___boxed), 7, 2);
lean_closure_set(v___x_415_, 0, v___x_408_);
lean_closure_set(v___x_415_, 1, v___x_414_);
v___x_416_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_checkNoImmediateColon_formatter___boxed), 5, 0);
v___x_417_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed), 7, 2);
lean_closure_set(v___x_417_, 0, v___x_416_);
lean_closure_set(v___x_417_, 1, v___f_395_);
v___x_418_ = l_Lean_PrettyPrinter_Formatter_orelse_formatter(v___x_415_, v___x_417_, v___y_396_, v___y_397_, v___y_398_, v___y_399_);
return v___x_418_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_mkAntiquot_formatter___lam__1___boxed(lean_object* v_anonymous_419_, lean_object* v_name_420_, lean_object* v___f_421_, lean_object* v___f_422_, lean_object* v___y_423_, lean_object* v___y_424_, lean_object* v___y_425_, lean_object* v___y_426_, lean_object* v___y_427_){
_start:
{
uint8_t v_anonymous_boxed_428_; lean_object* v_res_429_; 
v_anonymous_boxed_428_ = lean_unbox(v_anonymous_419_);
v_res_429_ = l_Lean_Parser_mkAntiquot_formatter___lam__1(v_anonymous_boxed_428_, v_name_420_, v___f_421_, v___f_422_, v___y_423_, v___y_424_, v___y_425_, v___y_426_);
lean_dec(v___y_426_);
lean_dec_ref(v___y_425_);
lean_dec(v___y_424_);
lean_dec_ref(v___y_423_);
return v_res_429_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_mkAntiquot_formatter___lam__2(lean_object* v___x_430_, lean_object* v___y_431_, lean_object* v___y_432_, lean_object* v___y_433_, lean_object* v___y_434_){
_start:
{
lean_object* v___x_436_; 
v___x_436_ = l_Lean_Parser_symbol_formatter(v___x_430_, v___y_431_, v___y_432_, v___y_433_, v___y_434_);
return v___x_436_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_mkAntiquot_formatter___lam__2___boxed(lean_object* v___x_437_, lean_object* v___y_438_, lean_object* v___y_439_, lean_object* v___y_440_, lean_object* v___y_441_, lean_object* v___y_442_){
_start:
{
lean_object* v_res_443_; 
v_res_443_ = l_Lean_Parser_mkAntiquot_formatter___lam__2(v___x_437_, v___y_438_, v___y_439_, v___y_440_, v___y_441_);
lean_dec(v___y_441_);
lean_dec_ref(v___y_440_);
lean_dec(v___y_439_);
lean_dec_ref(v___y_438_);
return v_res_443_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_mkAntiquot_formatter___lam__3(lean_object* v___f_444_, lean_object* v___x_445_, lean_object* v___y_446_, lean_object* v___y_447_, lean_object* v___y_448_, lean_object* v___y_449_){
_start:
{
lean_object* v___x_451_; 
v___x_451_ = l_Lean_PrettyPrinter_Formatter_andthen_formatter(v___f_444_, v___x_445_, v___y_446_, v___y_447_, v___y_448_, v___y_449_);
return v___x_451_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_mkAntiquot_formatter___lam__3___boxed(lean_object* v___f_452_, lean_object* v___x_453_, lean_object* v___y_454_, lean_object* v___y_455_, lean_object* v___y_456_, lean_object* v___y_457_, lean_object* v___y_458_){
_start:
{
lean_object* v_res_459_; 
v_res_459_ = l_Lean_Parser_mkAntiquot_formatter___lam__3(v___f_452_, v___x_453_, v___y_454_, v___y_455_, v___y_456_, v___y_457_);
lean_dec(v___y_457_);
lean_dec_ref(v___y_456_);
lean_dec(v___y_455_);
lean_dec_ref(v___y_454_);
return v_res_459_;
}
}
static lean_object* _init_l_Lean_Parser_mkAntiquot_formatter___closed__9(void){
_start:
{
lean_object* v___x_475_; lean_object* v___x_476_; 
v___x_475_ = lean_box(0);
v___x_476_ = l_unsafeCast___redArg(v___x_475_);
return v___x_476_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_mkAntiquot_formatter(lean_object* v_name_480_, lean_object* v_kind_481_, uint8_t v_anonymous_482_, uint8_t v_isPseudoKind_483_, lean_object* v_a_484_, lean_object* v_a_485_, lean_object* v_a_486_, lean_object* v_a_487_){
_start:
{
lean_object* v___f_489_; lean_object* v___f_490_; lean_object* v___x_491_; lean_object* v___y_492_; lean_object* v___y_494_; 
v___f_489_ = ((lean_object*)(l_Lean_Parser_mkAntiquot_formatter___closed__0));
v___f_490_ = ((lean_object*)(l_Lean_Parser_mkAntiquot_formatter___closed__1));
v___x_491_ = lean_box(v_anonymous_482_);
v___y_492_ = lean_alloc_closure((void*)(l_Lean_Parser_mkAntiquot_formatter___lam__1___boxed), 9, 4);
lean_closure_set(v___y_492_, 0, v___x_491_);
lean_closure_set(v___y_492_, 1, v_name_480_);
lean_closure_set(v___y_492_, 2, v___f_489_);
lean_closure_set(v___y_492_, 3, v___f_490_);
if (v_isPseudoKind_483_ == 0)
{
lean_object* v___x_506_; 
v___x_506_ = lean_obj_once(&l_Lean_Parser_mkAntiquot_formatter___closed__9, &l_Lean_Parser_mkAntiquot_formatter___closed__9_once, _init_l_Lean_Parser_mkAntiquot_formatter___closed__9);
v___y_494_ = v___x_506_;
goto v___jp_493_;
}
else
{
lean_object* v___x_507_; 
v___x_507_ = ((lean_object*)(l_Lean_Parser_mkAntiquot_formatter___closed__11));
v___y_494_ = v___x_507_;
goto v___jp_493_;
}
v___jp_493_:
{
lean_object* v___x_495_; lean_object* v___x_496_; lean_object* v_kind_497_; lean_object* v___f_498_; lean_object* v___x_499_; lean_object* v___x_500_; lean_object* v___x_501_; lean_object* v___x_502_; lean_object* v___x_503_; lean_object* v___f_504_; lean_object* v___x_505_; 
lean_inc(v___y_494_);
v___x_495_ = l_Lean_Name_append(v_kind_481_, v___y_494_);
v___x_496_ = ((lean_object*)(l_Lean_Parser_mkAntiquot_formatter___closed__3));
v_kind_497_ = l_Lean_Name_append(v___x_495_, v___x_496_);
v___f_498_ = ((lean_object*)(l_Lean_Parser_mkAntiquot_formatter___closed__5));
v___x_499_ = ((lean_object*)(l_Lean_Parser_mkAntiquot_formatter___closed__8));
v___x_500_ = lean_alloc_closure((void*)(l_Lean_Parser_antiquotExpr_formatter___boxed), 5, 0);
v___x_501_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed), 7, 2);
lean_closure_set(v___x_501_, 0, v___x_500_);
lean_closure_set(v___x_501_, 1, v___y_492_);
v___x_502_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed), 7, 2);
lean_closure_set(v___x_502_, 0, v___f_489_);
lean_closure_set(v___x_502_, 1, v___x_501_);
v___x_503_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed), 7, 2);
lean_closure_set(v___x_503_, 0, v___x_499_);
lean_closure_set(v___x_503_, 1, v___x_502_);
v___f_504_ = lean_alloc_closure((void*)(l_Lean_Parser_mkAntiquot_formatter___lam__3___boxed), 7, 2);
lean_closure_set(v___f_504_, 0, v___f_498_);
lean_closure_set(v___f_504_, 1, v___x_503_);
v___x_505_ = l_Lean_Parser_leadingNode_formatter___redArg(v_kind_497_, v___f_504_, v_a_484_, v_a_485_, v_a_486_, v_a_487_);
return v___x_505_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_mkAntiquot_formatter___boxed(lean_object* v_name_508_, lean_object* v_kind_509_, lean_object* v_anonymous_510_, lean_object* v_isPseudoKind_511_, lean_object* v_a_512_, lean_object* v_a_513_, lean_object* v_a_514_, lean_object* v_a_515_, lean_object* v_a_516_){
_start:
{
uint8_t v_anonymous_boxed_517_; uint8_t v_isPseudoKind_boxed_518_; lean_object* v_res_519_; 
v_anonymous_boxed_517_ = lean_unbox(v_anonymous_510_);
v_isPseudoKind_boxed_518_ = lean_unbox(v_isPseudoKind_511_);
v_res_519_ = l_Lean_Parser_mkAntiquot_formatter(v_name_508_, v_kind_509_, v_anonymous_boxed_517_, v_isPseudoKind_boxed_518_, v_a_512_, v_a_513_, v_a_514_, v_a_515_);
lean_dec(v_a_515_);
lean_dec_ref(v_a_514_);
lean_dec(v_a_513_);
lean_dec_ref(v_a_512_);
return v_res_519_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_setExpected_parenthesizer___redArg(lean_object* v_p_520_, lean_object* v_a_521_, lean_object* v_a_522_, lean_object* v_a_523_, lean_object* v_a_524_){
_start:
{
lean_object* v___x_526_; 
lean_inc(v_a_524_);
lean_inc_ref(v_a_523_);
lean_inc(v_a_522_);
lean_inc_ref(v_a_521_);
v___x_526_ = lean_apply_5(v_p_520_, v_a_521_, v_a_522_, v_a_523_, v_a_524_, lean_box(0));
return v___x_526_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_setExpected_parenthesizer___redArg___boxed(lean_object* v_p_527_, lean_object* v_a_528_, lean_object* v_a_529_, lean_object* v_a_530_, lean_object* v_a_531_, lean_object* v_a_532_){
_start:
{
lean_object* v_res_533_; 
v_res_533_ = l_Lean_Parser_setExpected_parenthesizer___redArg(v_p_527_, v_a_528_, v_a_529_, v_a_530_, v_a_531_);
lean_dec(v_a_531_);
lean_dec_ref(v_a_530_);
lean_dec(v_a_529_);
lean_dec_ref(v_a_528_);
return v_res_533_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_setExpected_parenthesizer(lean_object* v_expected_534_, lean_object* v_p_535_, lean_object* v_a_536_, lean_object* v_a_537_, lean_object* v_a_538_, lean_object* v_a_539_){
_start:
{
lean_object* v___x_541_; 
lean_inc(v_a_539_);
lean_inc_ref(v_a_538_);
lean_inc(v_a_537_);
lean_inc_ref(v_a_536_);
v___x_541_ = lean_apply_5(v_p_535_, v_a_536_, v_a_537_, v_a_538_, v_a_539_, lean_box(0));
return v___x_541_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_setExpected_parenthesizer___boxed(lean_object* v_expected_542_, lean_object* v_p_543_, lean_object* v_a_544_, lean_object* v_a_545_, lean_object* v_a_546_, lean_object* v_a_547_, lean_object* v_a_548_){
_start:
{
lean_object* v_res_549_; 
v_res_549_ = l_Lean_Parser_setExpected_parenthesizer(v_expected_542_, v_p_543_, v_a_544_, v_a_545_, v_a_546_, v_a_547_);
lean_dec(v_a_547_);
lean_dec_ref(v_a_546_);
lean_dec(v_a_545_);
lean_dec_ref(v_a_544_);
lean_dec(v_expected_542_);
return v_res_549_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_symbol_parenthesizer(lean_object* v_sym_550_, lean_object* v_a_551_, lean_object* v_a_552_, lean_object* v_a_553_, lean_object* v_a_554_){
_start:
{
lean_object* v___x_556_; lean_object* v___x_557_; 
v___x_556_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_symbolNoAntiquot_parenthesizer___boxed), 6, 1);
lean_closure_set(v___x_556_, 0, v_sym_550_);
v___x_557_ = l_Lean_PrettyPrinter_Parenthesizer_tokenWithAntiquot_parenthesizer(v___x_556_, v_a_551_, v_a_552_, v_a_553_, v_a_554_);
return v___x_557_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_symbol_parenthesizer___boxed(lean_object* v_sym_558_, lean_object* v_a_559_, lean_object* v_a_560_, lean_object* v_a_561_, lean_object* v_a_562_, lean_object* v_a_563_){
_start:
{
lean_object* v_res_564_; 
v_res_564_ = l_Lean_Parser_symbol_parenthesizer(v_sym_558_, v_a_559_, v_a_560_, v_a_561_, v_a_562_);
lean_dec(v_a_562_);
lean_dec_ref(v_a_561_);
lean_dec(v_a_560_);
lean_dec_ref(v_a_559_);
return v_res_564_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_adaptCacheableContext_parenthesizer___redArg(lean_object* v_p_565_, lean_object* v_a_566_, lean_object* v_a_567_, lean_object* v_a_568_, lean_object* v_a_569_){
_start:
{
lean_object* v___x_571_; 
lean_inc(v_a_569_);
lean_inc_ref(v_a_568_);
lean_inc(v_a_567_);
lean_inc_ref(v_a_566_);
v___x_571_ = lean_apply_5(v_p_565_, v_a_566_, v_a_567_, v_a_568_, v_a_569_, lean_box(0));
return v___x_571_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_adaptCacheableContext_parenthesizer___redArg___boxed(lean_object* v_p_572_, lean_object* v_a_573_, lean_object* v_a_574_, lean_object* v_a_575_, lean_object* v_a_576_, lean_object* v_a_577_){
_start:
{
lean_object* v_res_578_; 
v_res_578_ = l_Lean_Parser_adaptCacheableContext_parenthesizer___redArg(v_p_572_, v_a_573_, v_a_574_, v_a_575_, v_a_576_);
lean_dec(v_a_576_);
lean_dec_ref(v_a_575_);
lean_dec(v_a_574_);
lean_dec_ref(v_a_573_);
return v_res_578_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_adaptCacheableContext_parenthesizer(lean_object* v_f_579_, lean_object* v_p_580_, lean_object* v_a_581_, lean_object* v_a_582_, lean_object* v_a_583_, lean_object* v_a_584_){
_start:
{
lean_object* v___x_586_; 
lean_inc(v_a_584_);
lean_inc_ref(v_a_583_);
lean_inc(v_a_582_);
lean_inc_ref(v_a_581_);
v___x_586_ = lean_apply_5(v_p_580_, v_a_581_, v_a_582_, v_a_583_, v_a_584_, lean_box(0));
return v___x_586_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_adaptCacheableContext_parenthesizer___boxed(lean_object* v_f_587_, lean_object* v_p_588_, lean_object* v_a_589_, lean_object* v_a_590_, lean_object* v_a_591_, lean_object* v_a_592_, lean_object* v_a_593_){
_start:
{
lean_object* v_res_594_; 
v_res_594_ = l_Lean_Parser_adaptCacheableContext_parenthesizer(v_f_587_, v_p_588_, v_a_589_, v_a_590_, v_a_591_, v_a_592_);
lean_dec(v_a_592_);
lean_dec_ref(v_a_591_);
lean_dec(v_a_590_);
lean_dec_ref(v_a_589_);
lean_dec_ref(v_f_587_);
return v_res_594_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_addQuotDepth_parenthesizer___redArg(lean_object* v_p_595_, lean_object* v_a_596_, lean_object* v_a_597_, lean_object* v_a_598_, lean_object* v_a_599_){
_start:
{
lean_object* v___x_601_; 
lean_inc(v_a_599_);
lean_inc_ref(v_a_598_);
lean_inc(v_a_597_);
lean_inc_ref(v_a_596_);
v___x_601_ = lean_apply_5(v_p_595_, v_a_596_, v_a_597_, v_a_598_, v_a_599_, lean_box(0));
return v___x_601_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_addQuotDepth_parenthesizer___redArg___boxed(lean_object* v_p_602_, lean_object* v_a_603_, lean_object* v_a_604_, lean_object* v_a_605_, lean_object* v_a_606_, lean_object* v_a_607_){
_start:
{
lean_object* v_res_608_; 
v_res_608_ = l___private_Lean_Parser_Basic_0__Lean_Parser_addQuotDepth_parenthesizer___redArg(v_p_602_, v_a_603_, v_a_604_, v_a_605_, v_a_606_);
lean_dec(v_a_606_);
lean_dec_ref(v_a_605_);
lean_dec(v_a_604_);
lean_dec_ref(v_a_603_);
return v_res_608_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_addQuotDepth_parenthesizer(lean_object* v_i_609_, lean_object* v_p_610_, lean_object* v_a_611_, lean_object* v_a_612_, lean_object* v_a_613_, lean_object* v_a_614_){
_start:
{
lean_object* v___x_616_; 
lean_inc(v_a_614_);
lean_inc_ref(v_a_613_);
lean_inc(v_a_612_);
lean_inc_ref(v_a_611_);
v___x_616_ = lean_apply_5(v_p_610_, v_a_611_, v_a_612_, v_a_613_, v_a_614_, lean_box(0));
return v___x_616_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_addQuotDepth_parenthesizer___boxed(lean_object* v_i_617_, lean_object* v_p_618_, lean_object* v_a_619_, lean_object* v_a_620_, lean_object* v_a_621_, lean_object* v_a_622_, lean_object* v_a_623_){
_start:
{
lean_object* v_res_624_; 
v_res_624_ = l___private_Lean_Parser_Basic_0__Lean_Parser_addQuotDepth_parenthesizer(v_i_617_, v_p_618_, v_a_619_, v_a_620_, v_a_621_, v_a_622_);
lean_dec(v_a_622_);
lean_dec_ref(v_a_621_);
lean_dec(v_a_620_);
lean_dec_ref(v_a_619_);
lean_dec(v_i_617_);
return v_res_624_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_decQuotDepth_parenthesizer(lean_object* v_p_625_, lean_object* v_a_626_, lean_object* v_a_627_, lean_object* v_a_628_, lean_object* v_a_629_){
_start:
{
lean_object* v___x_631_; 
lean_inc(v_a_629_);
lean_inc_ref(v_a_628_);
lean_inc(v_a_627_);
lean_inc_ref(v_a_626_);
v___x_631_ = lean_apply_5(v_p_625_, v_a_626_, v_a_627_, v_a_628_, v_a_629_, lean_box(0));
return v___x_631_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_decQuotDepth_parenthesizer___boxed(lean_object* v_p_632_, lean_object* v_a_633_, lean_object* v_a_634_, lean_object* v_a_635_, lean_object* v_a_636_, lean_object* v_a_637_){
_start:
{
lean_object* v_res_638_; 
v_res_638_ = l_Lean_Parser_decQuotDepth_parenthesizer(v_p_632_, v_a_633_, v_a_634_, v_a_635_, v_a_636_);
lean_dec(v_a_636_);
lean_dec_ref(v_a_635_);
lean_dec(v_a_634_);
lean_dec_ref(v_a_633_);
return v_res_638_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_antiquotNestedExpr_parenthesizer___lam__0(lean_object* v___x_639_, lean_object* v___y_640_, lean_object* v___y_641_, lean_object* v___y_642_, lean_object* v___y_643_){
_start:
{
lean_object* v___x_645_; 
v___x_645_ = l_Lean_Parser_termParser_parenthesizer(v___x_639_, v___y_640_, v___y_641_, v___y_642_, v___y_643_);
return v___x_645_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_antiquotNestedExpr_parenthesizer___lam__0___boxed(lean_object* v___x_646_, lean_object* v___y_647_, lean_object* v___y_648_, lean_object* v___y_649_, lean_object* v___y_650_, lean_object* v___y_651_){
_start:
{
lean_object* v_res_652_; 
v_res_652_ = l_Lean_Parser_antiquotNestedExpr_parenthesizer___lam__0(v___x_646_, v___y_647_, v___y_648_, v___y_649_, v___y_650_);
lean_dec(v___y_650_);
lean_dec_ref(v___y_649_);
lean_dec(v___y_648_);
lean_dec_ref(v___y_647_);
return v_res_652_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_antiquotNestedExpr_parenthesizer(lean_object* v_a_665_, lean_object* v_a_666_, lean_object* v_a_667_, lean_object* v_a_668_){
_start:
{
lean_object* v___x_670_; lean_object* v___x_671_; lean_object* v___x_672_; 
v___x_670_ = ((lean_object*)(l_Lean_Parser_antiquotNestedExpr_formatter___closed__2));
v___x_671_ = ((lean_object*)(l_Lean_Parser_antiquotNestedExpr_parenthesizer___closed__4));
v___x_672_ = l_Lean_PrettyPrinter_Parenthesizer_node_parenthesizer(v___x_670_, v___x_671_, v_a_665_, v_a_666_, v_a_667_, v_a_668_);
return v___x_672_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_antiquotNestedExpr_parenthesizer___boxed(lean_object* v_a_673_, lean_object* v_a_674_, lean_object* v_a_675_, lean_object* v_a_676_, lean_object* v_a_677_){
_start:
{
lean_object* v_res_678_; 
v_res_678_ = l_Lean_Parser_antiquotNestedExpr_parenthesizer(v_a_673_, v_a_674_, v_a_675_, v_a_676_);
lean_dec(v_a_676_);
lean_dec_ref(v_a_675_);
lean_dec(v_a_674_);
lean_dec_ref(v_a_673_);
return v_res_678_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_parenthesizer__35(){
_start:
{
lean_object* v___x_686_; lean_object* v___x_687_; lean_object* v___x_688_; lean_object* v___x_689_; lean_object* v___x_690_; 
v___x_686_ = l_Lean_PrettyPrinter_parenthesizerAttribute;
v___x_687_ = ((lean_object*)(l_Lean_Parser_antiquotNestedExpr_formatter___closed__2));
v___x_688_ = ((lean_object*)(l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_parenthesizer__35___closed__1));
v___x_689_ = lean_alloc_closure((void*)(l_Lean_Parser_antiquotNestedExpr_parenthesizer___boxed), 5, 0);
v___x_690_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_686_, v___x_687_, v___x_688_, v___x_689_);
return v___x_690_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_parenthesizer__35___boxed(lean_object* v_a_691_){
_start:
{
lean_object* v_res_692_; 
v_res_692_ = l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_parenthesizer__35();
return v_res_692_;
}
}
static lean_object* _init_l_Lean_Parser_antiquotExpr_parenthesizer___closed__1(void){
_start:
{
lean_object* v___x_695_; lean_object* v___x_696_; lean_object* v___x_697_; 
v___x_695_ = lean_alloc_closure((void*)(l_Lean_Parser_antiquotNestedExpr_parenthesizer___boxed), 5, 0);
v___x_696_ = ((lean_object*)(l_Lean_Parser_antiquotExpr_parenthesizer___closed__0));
v___x_697_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_orelse_parenthesizer___boxed), 7, 2);
lean_closure_set(v___x_697_, 0, v___x_696_);
lean_closure_set(v___x_697_, 1, v___x_695_);
return v___x_697_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_antiquotExpr_parenthesizer(lean_object* v_a_698_, lean_object* v_a_699_, lean_object* v_a_700_, lean_object* v_a_701_){
_start:
{
lean_object* v___x_703_; lean_object* v___x_704_; lean_object* v___x_705_; 
v___x_703_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_identNoAntiquot_parenthesizer___boxed), 5, 0);
v___x_704_ = lean_obj_once(&l_Lean_Parser_antiquotExpr_parenthesizer___closed__1, &l_Lean_Parser_antiquotExpr_parenthesizer___closed__1_once, _init_l_Lean_Parser_antiquotExpr_parenthesizer___closed__1);
v___x_705_ = l_Lean_PrettyPrinter_Parenthesizer_orelse_parenthesizer(v___x_703_, v___x_704_, v_a_698_, v_a_699_, v_a_700_, v_a_701_);
return v___x_705_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_antiquotExpr_parenthesizer___boxed(lean_object* v_a_706_, lean_object* v_a_707_, lean_object* v_a_708_, lean_object* v_a_709_, lean_object* v_a_710_){
_start:
{
lean_object* v_res_711_; 
v_res_711_ = l_Lean_Parser_antiquotExpr_parenthesizer(v_a_706_, v_a_707_, v_a_708_, v_a_709_);
lean_dec(v_a_709_);
lean_dec_ref(v_a_708_);
lean_dec(v_a_707_);
lean_dec_ref(v_a_706_);
return v_res_711_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_nonReservedSymbol_parenthesizer___redArg___lam__0(lean_object* v_sym_712_, lean_object* v___y_713_, lean_object* v___y_714_, lean_object* v___y_715_, lean_object* v___y_716_){
_start:
{
lean_object* v___x_718_; 
v___x_718_ = l_Lean_PrettyPrinter_Parenthesizer_symbolNoAntiquot_parenthesizer___redArg(v_sym_712_, v___y_714_, v___y_715_, v___y_716_);
return v___x_718_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_nonReservedSymbol_parenthesizer___redArg___lam__0___boxed(lean_object* v_sym_719_, lean_object* v___y_720_, lean_object* v___y_721_, lean_object* v___y_722_, lean_object* v___y_723_, lean_object* v___y_724_){
_start:
{
lean_object* v_res_725_; 
v_res_725_ = l_Lean_Parser_nonReservedSymbol_parenthesizer___redArg___lam__0(v_sym_719_, v___y_720_, v___y_721_, v___y_722_, v___y_723_);
lean_dec(v___y_723_);
lean_dec_ref(v___y_722_);
lean_dec(v___y_721_);
lean_dec_ref(v___y_720_);
return v_res_725_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_nonReservedSymbol_parenthesizer___redArg(lean_object* v_sym_726_, lean_object* v_a_727_, lean_object* v_a_728_, lean_object* v_a_729_, lean_object* v_a_730_){
_start:
{
lean_object* v___f_732_; lean_object* v___x_733_; 
v___f_732_ = lean_alloc_closure((void*)(l_Lean_Parser_nonReservedSymbol_parenthesizer___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_732_, 0, v_sym_726_);
v___x_733_ = l_Lean_PrettyPrinter_Parenthesizer_tokenWithAntiquot_parenthesizer(v___f_732_, v_a_727_, v_a_728_, v_a_729_, v_a_730_);
return v___x_733_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_nonReservedSymbol_parenthesizer___redArg___boxed(lean_object* v_sym_734_, lean_object* v_a_735_, lean_object* v_a_736_, lean_object* v_a_737_, lean_object* v_a_738_, lean_object* v_a_739_){
_start:
{
lean_object* v_res_740_; 
v_res_740_ = l_Lean_Parser_nonReservedSymbol_parenthesizer___redArg(v_sym_734_, v_a_735_, v_a_736_, v_a_737_, v_a_738_);
lean_dec(v_a_738_);
lean_dec_ref(v_a_737_);
lean_dec(v_a_736_);
lean_dec_ref(v_a_735_);
return v_res_740_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_nonReservedSymbol_parenthesizer(lean_object* v_sym_741_, uint8_t v_includeIdent_742_, lean_object* v_a_743_, lean_object* v_a_744_, lean_object* v_a_745_, lean_object* v_a_746_){
_start:
{
lean_object* v___x_748_; 
v___x_748_ = l_Lean_Parser_nonReservedSymbol_parenthesizer___redArg(v_sym_741_, v_a_743_, v_a_744_, v_a_745_, v_a_746_);
return v___x_748_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_nonReservedSymbol_parenthesizer___boxed(lean_object* v_sym_749_, lean_object* v_includeIdent_750_, lean_object* v_a_751_, lean_object* v_a_752_, lean_object* v_a_753_, lean_object* v_a_754_, lean_object* v_a_755_){
_start:
{
uint8_t v_includeIdent_boxed_756_; lean_object* v_res_757_; 
v_includeIdent_boxed_756_ = lean_unbox(v_includeIdent_750_);
v_res_757_ = l_Lean_Parser_nonReservedSymbol_parenthesizer(v_sym_749_, v_includeIdent_boxed_756_, v_a_751_, v_a_752_, v_a_753_, v_a_754_);
lean_dec(v_a_754_);
lean_dec_ref(v_a_753_);
lean_dec(v_a_752_);
lean_dec_ref(v_a_751_);
return v_res_757_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_mkAntiquot_parenthesizer___lam__0(lean_object* v___x_758_, lean_object* v___y_759_, lean_object* v___y_760_, lean_object* v___y_761_, lean_object* v___y_762_){
_start:
{
lean_object* v___x_764_; 
v___x_764_ = l_Lean_Parser_symbol_parenthesizer(v___x_758_, v___y_759_, v___y_760_, v___y_761_, v___y_762_);
return v___x_764_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_mkAntiquot_parenthesizer___lam__0___boxed(lean_object* v___x_765_, lean_object* v___y_766_, lean_object* v___y_767_, lean_object* v___y_768_, lean_object* v___y_769_, lean_object* v___y_770_){
_start:
{
lean_object* v_res_771_; 
v_res_771_ = l_Lean_Parser_mkAntiquot_parenthesizer___lam__0(v___x_765_, v___y_766_, v___y_767_, v___y_768_, v___y_769_);
lean_dec(v___y_769_);
lean_dec_ref(v___y_768_);
lean_dec(v___y_767_);
lean_dec_ref(v___y_766_);
return v_res_771_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_mkAntiquot_parenthesizer___lam__1(uint8_t v_anonymous_774_, lean_object* v_name_775_, lean_object* v___x_776_, lean_object* v___f_777_, lean_object* v___y_778_, lean_object* v___y_779_, lean_object* v___y_780_, lean_object* v___y_781_){
_start:
{
if (v_anonymous_774_ == 0)
{
lean_object* v___x_783_; lean_object* v___x_784_; lean_object* v___x_785_; lean_object* v___x_786_; lean_object* v___x_787_; lean_object* v___x_788_; lean_object* v___x_789_; 
lean_dec_ref(v___f_777_);
v___x_783_ = ((lean_object*)(l_Lean_Parser_mkAntiquot_formatter___lam__1___closed__1));
v___x_784_ = ((lean_object*)(l_Lean_Parser_mkAntiquot_parenthesizer___lam__1___closed__0));
v___x_785_ = lean_box(v_anonymous_774_);
v___x_786_ = lean_alloc_closure((void*)(l_Lean_Parser_nonReservedSymbol_parenthesizer___boxed), 7, 2);
lean_closure_set(v___x_786_, 0, v_name_775_);
lean_closure_set(v___x_786_, 1, v___x_785_);
v___x_787_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed), 7, 2);
lean_closure_set(v___x_787_, 0, v___x_784_);
lean_closure_set(v___x_787_, 1, v___x_786_);
v___x_788_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed), 7, 2);
lean_closure_set(v___x_788_, 0, v___x_776_);
lean_closure_set(v___x_788_, 1, v___x_787_);
v___x_789_ = l_Lean_PrettyPrinter_Parenthesizer_node_parenthesizer(v___x_783_, v___x_788_, v___y_778_, v___y_779_, v___y_780_, v___y_781_);
return v___x_789_;
}
else
{
lean_object* v___x_790_; lean_object* v___x_791_; uint8_t v___x_792_; lean_object* v___x_793_; lean_object* v___x_794_; lean_object* v___x_795_; lean_object* v___x_796_; lean_object* v___x_797_; lean_object* v___x_798_; lean_object* v___x_799_; lean_object* v___x_800_; 
v___x_790_ = ((lean_object*)(l_Lean_Parser_mkAntiquot_formatter___lam__1___closed__1));
v___x_791_ = ((lean_object*)(l_Lean_Parser_mkAntiquot_parenthesizer___lam__1___closed__0));
v___x_792_ = 0;
v___x_793_ = lean_box(v___x_792_);
v___x_794_ = lean_alloc_closure((void*)(l_Lean_Parser_nonReservedSymbol_parenthesizer___boxed), 7, 2);
lean_closure_set(v___x_794_, 0, v_name_775_);
lean_closure_set(v___x_794_, 1, v___x_793_);
v___x_795_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed), 7, 2);
lean_closure_set(v___x_795_, 0, v___x_791_);
lean_closure_set(v___x_795_, 1, v___x_794_);
v___x_796_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed), 7, 2);
lean_closure_set(v___x_796_, 0, v___x_776_);
lean_closure_set(v___x_796_, 1, v___x_795_);
v___x_797_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_node_parenthesizer___boxed), 7, 2);
lean_closure_set(v___x_797_, 0, v___x_790_);
lean_closure_set(v___x_797_, 1, v___x_796_);
v___x_798_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_checkNoImmediateColon_parenthesizer___boxed), 5, 0);
v___x_799_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed), 7, 2);
lean_closure_set(v___x_799_, 0, v___x_798_);
lean_closure_set(v___x_799_, 1, v___f_777_);
v___x_800_ = l_Lean_PrettyPrinter_Parenthesizer_orelse_parenthesizer(v___x_797_, v___x_799_, v___y_778_, v___y_779_, v___y_780_, v___y_781_);
return v___x_800_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_mkAntiquot_parenthesizer___lam__1___boxed(lean_object* v_anonymous_801_, lean_object* v_name_802_, lean_object* v___x_803_, lean_object* v___f_804_, lean_object* v___y_805_, lean_object* v___y_806_, lean_object* v___y_807_, lean_object* v___y_808_, lean_object* v___y_809_){
_start:
{
uint8_t v_anonymous_boxed_810_; lean_object* v_res_811_; 
v_anonymous_boxed_810_ = lean_unbox(v_anonymous_801_);
v_res_811_ = l_Lean_Parser_mkAntiquot_parenthesizer___lam__1(v_anonymous_boxed_810_, v_name_802_, v___x_803_, v___f_804_, v___y_805_, v___y_806_, v___y_807_, v___y_808_);
lean_dec(v___y_808_);
lean_dec_ref(v___y_807_);
lean_dec(v___y_806_);
lean_dec_ref(v___y_805_);
return v_res_811_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_mkAntiquot_parenthesizer___lam__2(lean_object* v___f_812_, lean_object* v___x_813_, lean_object* v___y_814_, lean_object* v___y_815_, lean_object* v___y_816_, lean_object* v___y_817_){
_start:
{
lean_object* v___x_819_; 
v___x_819_ = l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer(v___f_812_, v___x_813_, v___y_814_, v___y_815_, v___y_816_, v___y_817_);
return v___x_819_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_mkAntiquot_parenthesizer___lam__2___boxed(lean_object* v___f_820_, lean_object* v___x_821_, lean_object* v___y_822_, lean_object* v___y_823_, lean_object* v___y_824_, lean_object* v___y_825_, lean_object* v___y_826_){
_start:
{
lean_object* v_res_827_; 
v_res_827_ = l_Lean_Parser_mkAntiquot_parenthesizer___lam__2(v___f_820_, v___x_821_, v___y_822_, v___y_823_, v___y_824_, v___y_825_);
lean_dec(v___y_825_);
lean_dec_ref(v___y_824_);
lean_dec(v___y_823_);
lean_dec_ref(v___y_822_);
return v_res_827_;
}
}
static lean_object* _init_l_Lean_Parser_mkAntiquot_parenthesizer___closed__3(void){
_start:
{
lean_object* v___x_833_; lean_object* v___x_834_; lean_object* v___x_835_; 
v___x_833_ = ((lean_object*)(l_Lean_Parser_mkAntiquot_parenthesizer___closed__2));
v___x_834_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_checkNoWsBefore_parenthesizer___boxed), 5, 0);
v___x_835_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed), 7, 2);
lean_closure_set(v___x_835_, 0, v___x_834_);
lean_closure_set(v___x_835_, 1, v___x_833_);
return v___x_835_;
}
}
static lean_object* _init_l_Lean_Parser_mkAntiquot_parenthesizer___closed__4(void){
_start:
{
lean_object* v___x_836_; lean_object* v___x_837_; 
v___x_836_ = lean_obj_once(&l_Lean_Parser_mkAntiquot_parenthesizer___closed__3, &l_Lean_Parser_mkAntiquot_parenthesizer___closed__3_once, _init_l_Lean_Parser_mkAntiquot_parenthesizer___closed__3);
v___x_837_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_manyNoAntiquot_parenthesizer___boxed), 6, 1);
lean_closure_set(v___x_837_, 0, v___x_836_);
return v___x_837_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_mkAntiquot_parenthesizer(lean_object* v_name_838_, lean_object* v_kind_839_, uint8_t v_anonymous_840_, uint8_t v_isPseudoKind_841_, lean_object* v_a_842_, lean_object* v_a_843_, lean_object* v_a_844_, lean_object* v_a_845_){
_start:
{
lean_object* v___f_847_; lean_object* v___y_849_; 
v___f_847_ = ((lean_object*)(l_Lean_Parser_mkAntiquot_parenthesizer___closed__0));
if (v_isPseudoKind_841_ == 0)
{
lean_object* v___x_865_; 
v___x_865_ = lean_obj_once(&l_Lean_Parser_mkAntiquot_formatter___closed__9, &l_Lean_Parser_mkAntiquot_formatter___closed__9_once, _init_l_Lean_Parser_mkAntiquot_formatter___closed__9);
v___y_849_ = v___x_865_;
goto v___jp_848_;
}
else
{
lean_object* v___x_866_; 
v___x_866_ = ((lean_object*)(l_Lean_Parser_mkAntiquot_formatter___closed__11));
v___y_849_ = v___x_866_;
goto v___jp_848_;
}
v___jp_848_:
{
lean_object* v___x_850_; lean_object* v___x_851_; lean_object* v_kind_852_; lean_object* v___x_853_; lean_object* v___f_854_; lean_object* v___x_855_; lean_object* v___x_856_; lean_object* v___y_857_; lean_object* v___x_858_; lean_object* v___x_859_; lean_object* v___x_860_; lean_object* v___x_861_; lean_object* v___x_862_; lean_object* v___f_863_; lean_object* v___x_864_; 
lean_inc(v___y_849_);
v___x_850_ = l_Lean_Name_append(v_kind_839_, v___y_849_);
v___x_851_ = ((lean_object*)(l_Lean_Parser_mkAntiquot_formatter___closed__3));
v_kind_852_ = l_Lean_Name_append(v___x_850_, v___x_851_);
v___x_853_ = lean_unsigned_to_nat(1024u);
v___f_854_ = ((lean_object*)(l_Lean_Parser_mkAntiquot_parenthesizer___closed__1));
v___x_855_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_checkNoWsBefore_parenthesizer___boxed), 5, 0);
v___x_856_ = lean_box(v_anonymous_840_);
lean_inc_ref(v___x_855_);
v___y_857_ = lean_alloc_closure((void*)(l_Lean_Parser_mkAntiquot_parenthesizer___lam__1___boxed), 9, 4);
lean_closure_set(v___y_857_, 0, v___x_856_);
lean_closure_set(v___y_857_, 1, v_name_838_);
lean_closure_set(v___y_857_, 2, v___x_855_);
lean_closure_set(v___y_857_, 3, v___f_847_);
v___x_858_ = lean_obj_once(&l_Lean_Parser_mkAntiquot_parenthesizer___closed__4, &l_Lean_Parser_mkAntiquot_parenthesizer___closed__4_once, _init_l_Lean_Parser_mkAntiquot_parenthesizer___closed__4);
v___x_859_ = lean_alloc_closure((void*)(l_Lean_Parser_antiquotExpr_parenthesizer___boxed), 5, 0);
v___x_860_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed), 7, 2);
lean_closure_set(v___x_860_, 0, v___x_859_);
lean_closure_set(v___x_860_, 1, v___y_857_);
v___x_861_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed), 7, 2);
lean_closure_set(v___x_861_, 0, v___x_855_);
lean_closure_set(v___x_861_, 1, v___x_860_);
v___x_862_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed), 7, 2);
lean_closure_set(v___x_862_, 0, v___x_858_);
lean_closure_set(v___x_862_, 1, v___x_861_);
v___f_863_ = lean_alloc_closure((void*)(l_Lean_Parser_mkAntiquot_parenthesizer___lam__2___boxed), 7, 2);
lean_closure_set(v___f_863_, 0, v___f_854_);
lean_closure_set(v___f_863_, 1, v___x_862_);
v___x_864_ = l_Lean_PrettyPrinter_Parenthesizer_leadingNode_parenthesizer(v_kind_852_, v___x_853_, v___f_863_, v_a_842_, v_a_843_, v_a_844_, v_a_845_);
return v___x_864_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_mkAntiquot_parenthesizer___boxed(lean_object* v_name_867_, lean_object* v_kind_868_, lean_object* v_anonymous_869_, lean_object* v_isPseudoKind_870_, lean_object* v_a_871_, lean_object* v_a_872_, lean_object* v_a_873_, lean_object* v_a_874_, lean_object* v_a_875_){
_start:
{
uint8_t v_anonymous_boxed_876_; uint8_t v_isPseudoKind_boxed_877_; lean_object* v_res_878_; 
v_anonymous_boxed_876_ = lean_unbox(v_anonymous_869_);
v_isPseudoKind_boxed_877_ = lean_unbox(v_isPseudoKind_870_);
v_res_878_ = l_Lean_Parser_mkAntiquot_parenthesizer(v_name_867_, v_kind_868_, v_anonymous_boxed_876_, v_isPseudoKind_boxed_877_, v_a_871_, v_a_872_, v_a_873_, v_a_874_);
lean_dec(v_a_874_);
lean_dec_ref(v_a_873_);
lean_dec(v_a_872_);
lean_dec_ref(v_a_871_);
return v_res_878_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_nodeWithAntiquot_formatter(lean_object* v_name_879_, lean_object* v_kind_880_, lean_object* v_p_881_, uint8_t v_anonymous_882_, lean_object* v_a_883_, lean_object* v_a_884_, lean_object* v_a_885_, lean_object* v_a_886_){
_start:
{
uint8_t v___x_888_; lean_object* v___x_889_; lean_object* v___x_890_; lean_object* v___x_891_; lean_object* v___x_892_; lean_object* v___x_893_; 
v___x_888_ = 0;
v___x_889_ = lean_box(v_anonymous_882_);
v___x_890_ = lean_box(v___x_888_);
lean_inc(v_kind_880_);
v___x_891_ = lean_alloc_closure((void*)(l_Lean_Parser_mkAntiquot_formatter___boxed), 9, 4);
lean_closure_set(v___x_891_, 0, v_name_879_);
lean_closure_set(v___x_891_, 1, v_kind_880_);
lean_closure_set(v___x_891_, 2, v___x_889_);
lean_closure_set(v___x_891_, 3, v___x_890_);
v___x_892_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_node_formatter___boxed), 7, 2);
lean_closure_set(v___x_892_, 0, v_kind_880_);
lean_closure_set(v___x_892_, 1, v_p_881_);
v___x_893_ = l_Lean_PrettyPrinter_Formatter_orelse_formatter(v___x_891_, v___x_892_, v_a_883_, v_a_884_, v_a_885_, v_a_886_);
return v___x_893_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_nodeWithAntiquot_formatter___boxed(lean_object* v_name_894_, lean_object* v_kind_895_, lean_object* v_p_896_, lean_object* v_anonymous_897_, lean_object* v_a_898_, lean_object* v_a_899_, lean_object* v_a_900_, lean_object* v_a_901_, lean_object* v_a_902_){
_start:
{
uint8_t v_anonymous_boxed_903_; lean_object* v_res_904_; 
v_anonymous_boxed_903_ = lean_unbox(v_anonymous_897_);
v_res_904_ = l_Lean_Parser_nodeWithAntiquot_formatter(v_name_894_, v_kind_895_, v_p_896_, v_anonymous_boxed_903_, v_a_898_, v_a_899_, v_a_900_, v_a_901_);
lean_dec(v_a_901_);
lean_dec_ref(v_a_900_);
lean_dec(v_a_899_);
lean_dec_ref(v_a_898_);
return v_res_904_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_nodeWithAntiquot_parenthesizer(lean_object* v_name_905_, lean_object* v_kind_906_, lean_object* v_p_907_, uint8_t v_anonymous_908_, lean_object* v_a_909_, lean_object* v_a_910_, lean_object* v_a_911_, lean_object* v_a_912_){
_start:
{
uint8_t v___x_914_; lean_object* v___x_915_; lean_object* v___x_916_; lean_object* v___x_917_; lean_object* v___x_918_; lean_object* v___x_919_; 
v___x_914_ = 0;
v___x_915_ = lean_box(v_anonymous_908_);
v___x_916_ = lean_box(v___x_914_);
lean_inc(v_kind_906_);
v___x_917_ = lean_alloc_closure((void*)(l_Lean_Parser_mkAntiquot_parenthesizer___boxed), 9, 4);
lean_closure_set(v___x_917_, 0, v_name_905_);
lean_closure_set(v___x_917_, 1, v_kind_906_);
lean_closure_set(v___x_917_, 2, v___x_915_);
lean_closure_set(v___x_917_, 3, v___x_916_);
v___x_918_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_node_parenthesizer___boxed), 7, 2);
lean_closure_set(v___x_918_, 0, v_kind_906_);
lean_closure_set(v___x_918_, 1, v_p_907_);
v___x_919_ = l_Lean_PrettyPrinter_Parenthesizer_withAntiquot_parenthesizer(v___x_917_, v___x_918_, v_a_909_, v_a_910_, v_a_911_, v_a_912_);
return v___x_919_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_nodeWithAntiquot_parenthesizer___boxed(lean_object* v_name_920_, lean_object* v_kind_921_, lean_object* v_p_922_, lean_object* v_anonymous_923_, lean_object* v_a_924_, lean_object* v_a_925_, lean_object* v_a_926_, lean_object* v_a_927_, lean_object* v_a_928_){
_start:
{
uint8_t v_anonymous_boxed_929_; lean_object* v_res_930_; 
v_anonymous_boxed_929_ = lean_unbox(v_anonymous_923_);
v_res_930_ = l_Lean_Parser_nodeWithAntiquot_parenthesizer(v_name_920_, v_kind_921_, v_p_922_, v_anonymous_boxed_929_, v_a_924_, v_a_925_, v_a_926_, v_a_927_);
lean_dec(v_a_927_);
lean_dec_ref(v_a_926_);
lean_dec(v_a_925_);
lean_dec_ref(v_a_924_);
return v_res_930_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_mkAntiquotSplice_formatter(lean_object* v_kind_943_, lean_object* v_p_944_, lean_object* v_suffix_945_, lean_object* v_a_946_, lean_object* v_a_947_, lean_object* v_a_948_, lean_object* v_a_949_){
_start:
{
lean_object* v___f_951_; lean_object* v___x_952_; lean_object* v_kind_953_; lean_object* v___f_954_; lean_object* v___x_955_; lean_object* v___x_956_; lean_object* v___x_957_; lean_object* v___x_958_; lean_object* v___x_959_; lean_object* v___x_960_; lean_object* v___x_961_; lean_object* v___x_962_; lean_object* v___x_963_; lean_object* v___x_964_; lean_object* v___f_965_; lean_object* v___x_966_; 
v___f_951_ = ((lean_object*)(l_Lean_Parser_mkAntiquot_formatter___closed__0));
v___x_952_ = ((lean_object*)(l_Lean_Parser_mkAntiquotSplice_formatter___closed__1));
v_kind_953_ = l_Lean_Name_append(v_kind_943_, v___x_952_);
v___f_954_ = ((lean_object*)(l_Lean_Parser_mkAntiquot_formatter___closed__5));
v___x_955_ = ((lean_object*)(l_Lean_Parser_mkAntiquot_formatter___closed__8));
v___x_956_ = ((lean_object*)(l_Lean_Parser_mkAntiquotSplice_formatter___closed__3));
v___x_957_ = ((lean_object*)(l_Lean_Parser_mkAntiquotSplice_formatter___closed__5));
v___x_958_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_node_formatter___boxed), 7, 2);
lean_closure_set(v___x_958_, 0, v___x_957_);
lean_closure_set(v___x_958_, 1, v_p_944_);
v___x_959_ = ((lean_object*)(l_Lean_Parser_mkAntiquotSplice_formatter___closed__7));
v___x_960_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed), 7, 2);
lean_closure_set(v___x_960_, 0, v___x_959_);
lean_closure_set(v___x_960_, 1, v_suffix_945_);
v___x_961_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed), 7, 2);
lean_closure_set(v___x_961_, 0, v___x_958_);
lean_closure_set(v___x_961_, 1, v___x_960_);
v___x_962_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed), 7, 2);
lean_closure_set(v___x_962_, 0, v___x_956_);
lean_closure_set(v___x_962_, 1, v___x_961_);
v___x_963_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed), 7, 2);
lean_closure_set(v___x_963_, 0, v___f_951_);
lean_closure_set(v___x_963_, 1, v___x_962_);
v___x_964_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed), 7, 2);
lean_closure_set(v___x_964_, 0, v___x_955_);
lean_closure_set(v___x_964_, 1, v___x_963_);
v___f_965_ = lean_alloc_closure((void*)(l_Lean_Parser_mkAntiquot_formatter___lam__3___boxed), 7, 2);
lean_closure_set(v___f_965_, 0, v___f_954_);
lean_closure_set(v___f_965_, 1, v___x_964_);
v___x_966_ = l_Lean_Parser_leadingNode_formatter___redArg(v_kind_953_, v___f_965_, v_a_946_, v_a_947_, v_a_948_, v_a_949_);
return v___x_966_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_mkAntiquotSplice_formatter___boxed(lean_object* v_kind_967_, lean_object* v_p_968_, lean_object* v_suffix_969_, lean_object* v_a_970_, lean_object* v_a_971_, lean_object* v_a_972_, lean_object* v_a_973_, lean_object* v_a_974_){
_start:
{
lean_object* v_res_975_; 
v_res_975_ = l_Lean_Parser_mkAntiquotSplice_formatter(v_kind_967_, v_p_968_, v_suffix_969_, v_a_970_, v_a_971_, v_a_972_, v_a_973_);
lean_dec(v_a_973_);
lean_dec_ref(v_a_972_);
lean_dec(v_a_971_);
lean_dec_ref(v_a_970_);
return v_res_975_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withAntiquotSpliceAndSuffix_formatter___lam__0(lean_object* v_p_976_, lean_object* v___y_977_, lean_object* v___y_978_, lean_object* v___y_979_, lean_object* v___y_980_){
_start:
{
lean_object* v___x_982_; 
v___x_982_ = lean_apply_5(v_p_976_, v___y_977_, v___y_978_, v___y_979_, v___y_980_, lean_box(0));
return v___x_982_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withAntiquotSpliceAndSuffix_formatter___lam__0___boxed(lean_object* v_p_983_, lean_object* v___y_984_, lean_object* v___y_985_, lean_object* v___y_986_, lean_object* v___y_987_, lean_object* v___y_988_){
_start:
{
lean_object* v_res_989_; 
v_res_989_ = l_Lean_Parser_withAntiquotSpliceAndSuffix_formatter___lam__0(v_p_983_, v___y_984_, v___y_985_, v___y_986_, v___y_987_);
return v_res_989_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withAntiquotSpliceAndSuffix_formatter(lean_object* v_kind_990_, lean_object* v_p_991_, lean_object* v_suffix_992_, lean_object* v_a_993_, lean_object* v_a_994_, lean_object* v_a_995_, lean_object* v_a_996_){
_start:
{
lean_object* v___f_998_; lean_object* v___x_999_; lean_object* v___x_1000_; lean_object* v___x_1001_; 
lean_inc_ref(v_p_991_);
v___f_998_ = lean_alloc_closure((void*)(l_Lean_Parser_withAntiquotSpliceAndSuffix_formatter___lam__0___boxed), 6, 1);
lean_closure_set(v___f_998_, 0, v_p_991_);
lean_inc_ref(v_suffix_992_);
lean_inc(v_kind_990_);
v___x_999_ = lean_alloc_closure((void*)(l_Lean_Parser_mkAntiquotSplice_formatter___boxed), 8, 3);
lean_closure_set(v___x_999_, 0, v_kind_990_);
lean_closure_set(v___x_999_, 1, v___f_998_);
lean_closure_set(v___x_999_, 2, v_suffix_992_);
v___x_1000_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_withAntiquotSuffixSplice_formatter___boxed), 8, 3);
lean_closure_set(v___x_1000_, 0, v_kind_990_);
lean_closure_set(v___x_1000_, 1, v_p_991_);
lean_closure_set(v___x_1000_, 2, v_suffix_992_);
v___x_1001_ = l_Lean_PrettyPrinter_Formatter_orelse_formatter(v___x_999_, v___x_1000_, v_a_993_, v_a_994_, v_a_995_, v_a_996_);
return v___x_1001_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withAntiquotSpliceAndSuffix_formatter___boxed(lean_object* v_kind_1002_, lean_object* v_p_1003_, lean_object* v_suffix_1004_, lean_object* v_a_1005_, lean_object* v_a_1006_, lean_object* v_a_1007_, lean_object* v_a_1008_, lean_object* v_a_1009_){
_start:
{
lean_object* v_res_1010_; 
v_res_1010_ = l_Lean_Parser_withAntiquotSpliceAndSuffix_formatter(v_kind_1002_, v_p_1003_, v_suffix_1004_, v_a_1005_, v_a_1006_, v_a_1007_, v_a_1008_);
lean_dec(v_a_1008_);
lean_dec_ref(v_a_1007_);
lean_dec(v_a_1006_);
lean_dec_ref(v_a_1005_);
return v_res_1010_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_sepByElemParser_formatter(lean_object* v_p_1015_, lean_object* v_sep_1016_, lean_object* v_a_1017_, lean_object* v_a_1018_, lean_object* v_a_1019_, lean_object* v_a_1020_){
_start:
{
lean_object* v___x_1022_; lean_object* v___x_1023_; lean_object* v___x_1024_; lean_object* v___x_1025_; lean_object* v_str_1026_; lean_object* v_startInclusive_1027_; lean_object* v_endExclusive_1028_; lean_object* v___x_1029_; lean_object* v___x_1030_; lean_object* v___x_1031_; lean_object* v___x_1032_; lean_object* v___x_1033_; lean_object* v___x_1034_; 
v___x_1022_ = lean_unsigned_to_nat(0u);
v___x_1023_ = lean_string_utf8_byte_size(v_sep_1016_);
v___x_1024_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1024_, 0, v_sep_1016_);
lean_ctor_set(v___x_1024_, 1, v___x_1022_);
lean_ctor_set(v___x_1024_, 2, v___x_1023_);
v___x_1025_ = l_String_Slice_trimAscii(v___x_1024_);
v_str_1026_ = lean_ctor_get(v___x_1025_, 0);
lean_inc_ref(v_str_1026_);
v_startInclusive_1027_ = lean_ctor_get(v___x_1025_, 1);
lean_inc(v_startInclusive_1027_);
v_endExclusive_1028_ = lean_ctor_get(v___x_1025_, 2);
lean_inc(v_endExclusive_1028_);
lean_dec_ref(v___x_1025_);
v___x_1029_ = ((lean_object*)(l_Lean_Parser_sepByElemParser_formatter___closed__1));
v___x_1030_ = lean_string_utf8_extract_fast(v_str_1026_, v_startInclusive_1027_, v_endExclusive_1028_);
lean_dec(v_endExclusive_1028_);
lean_dec(v_startInclusive_1027_);
lean_dec_ref(v_str_1026_);
v___x_1031_ = ((lean_object*)(l_Lean_Parser_sepByElemParser_formatter___closed__2));
v___x_1032_ = lean_string_append(v___x_1030_, v___x_1031_);
v___x_1033_ = lean_alloc_closure((void*)(l_Lean_Parser_symbol_formatter___boxed), 6, 1);
lean_closure_set(v___x_1033_, 0, v___x_1032_);
v___x_1034_ = l_Lean_Parser_withAntiquotSpliceAndSuffix_formatter(v___x_1029_, v_p_1015_, v___x_1033_, v_a_1017_, v_a_1018_, v_a_1019_, v_a_1020_);
return v___x_1034_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_sepByElemParser_formatter___boxed(lean_object* v_p_1035_, lean_object* v_sep_1036_, lean_object* v_a_1037_, lean_object* v_a_1038_, lean_object* v_a_1039_, lean_object* v_a_1040_, lean_object* v_a_1041_){
_start:
{
lean_object* v_res_1042_; 
v_res_1042_ = l_Lean_Parser_sepByElemParser_formatter(v_p_1035_, v_sep_1036_, v_a_1037_, v_a_1038_, v_a_1039_, v_a_1040_);
lean_dec(v_a_1040_);
lean_dec_ref(v_a_1039_);
lean_dec(v_a_1038_);
lean_dec_ref(v_a_1037_);
return v_res_1042_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_sepBy_formatter___redArg(lean_object* v_p_1043_, lean_object* v_sep_1044_, lean_object* v_psep_1045_, lean_object* v_a_1046_, lean_object* v_a_1047_, lean_object* v_a_1048_, lean_object* v_a_1049_){
_start:
{
lean_object* v___x_1051_; lean_object* v___x_1052_; 
v___x_1051_ = lean_alloc_closure((void*)(l_Lean_Parser_sepByElemParser_formatter___boxed), 7, 2);
lean_closure_set(v___x_1051_, 0, v_p_1043_);
lean_closure_set(v___x_1051_, 1, v_sep_1044_);
v___x_1052_ = l_Lean_PrettyPrinter_Formatter_sepByNoAntiquot_formatter(v___x_1051_, v_psep_1045_, v_a_1046_, v_a_1047_, v_a_1048_, v_a_1049_);
return v___x_1052_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_sepBy_formatter___redArg___boxed(lean_object* v_p_1053_, lean_object* v_sep_1054_, lean_object* v_psep_1055_, lean_object* v_a_1056_, lean_object* v_a_1057_, lean_object* v_a_1058_, lean_object* v_a_1059_, lean_object* v_a_1060_){
_start:
{
lean_object* v_res_1061_; 
v_res_1061_ = l_Lean_Parser_sepBy_formatter___redArg(v_p_1053_, v_sep_1054_, v_psep_1055_, v_a_1056_, v_a_1057_, v_a_1058_, v_a_1059_);
lean_dec(v_a_1059_);
lean_dec_ref(v_a_1058_);
lean_dec(v_a_1057_);
lean_dec_ref(v_a_1056_);
return v_res_1061_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_sepBy_formatter(lean_object* v_p_1062_, lean_object* v_sep_1063_, lean_object* v_psep_1064_, uint8_t v_allowTrailingSep_1065_, lean_object* v_a_1066_, lean_object* v_a_1067_, lean_object* v_a_1068_, lean_object* v_a_1069_){
_start:
{
lean_object* v___x_1071_; 
v___x_1071_ = l_Lean_Parser_sepBy_formatter___redArg(v_p_1062_, v_sep_1063_, v_psep_1064_, v_a_1066_, v_a_1067_, v_a_1068_, v_a_1069_);
return v___x_1071_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_sepBy_formatter___boxed(lean_object* v_p_1072_, lean_object* v_sep_1073_, lean_object* v_psep_1074_, lean_object* v_allowTrailingSep_1075_, lean_object* v_a_1076_, lean_object* v_a_1077_, lean_object* v_a_1078_, lean_object* v_a_1079_, lean_object* v_a_1080_){
_start:
{
uint8_t v_allowTrailingSep_boxed_1081_; lean_object* v_res_1082_; 
v_allowTrailingSep_boxed_1081_ = lean_unbox(v_allowTrailingSep_1075_);
v_res_1082_ = l_Lean_Parser_sepBy_formatter(v_p_1072_, v_sep_1073_, v_psep_1074_, v_allowTrailingSep_boxed_1081_, v_a_1076_, v_a_1077_, v_a_1078_, v_a_1079_);
lean_dec(v_a_1079_);
lean_dec_ref(v_a_1078_);
lean_dec(v_a_1077_);
lean_dec_ref(v_a_1076_);
return v_res_1082_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_mkAntiquotSplice_parenthesizer(lean_object* v_kind_1087_, lean_object* v_p_1088_, lean_object* v_suffix_1089_, lean_object* v_a_1090_, lean_object* v_a_1091_, lean_object* v_a_1092_, lean_object* v_a_1093_){
_start:
{
lean_object* v___x_1095_; lean_object* v_kind_1096_; lean_object* v___x_1097_; lean_object* v___f_1098_; lean_object* v___x_1099_; lean_object* v___x_1100_; lean_object* v___x_1101_; lean_object* v___x_1102_; lean_object* v___x_1103_; lean_object* v___x_1104_; lean_object* v___x_1105_; lean_object* v___x_1106_; lean_object* v___x_1107_; lean_object* v___x_1108_; lean_object* v___x_1109_; lean_object* v___f_1110_; lean_object* v___x_1111_; 
v___x_1095_ = ((lean_object*)(l_Lean_Parser_mkAntiquotSplice_formatter___closed__1));
v_kind_1096_ = l_Lean_Name_append(v_kind_1087_, v___x_1095_);
v___x_1097_ = lean_unsigned_to_nat(1024u);
v___f_1098_ = ((lean_object*)(l_Lean_Parser_mkAntiquot_parenthesizer___closed__1));
v___x_1099_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_checkNoWsBefore_parenthesizer___boxed), 5, 0);
v___x_1100_ = lean_obj_once(&l_Lean_Parser_mkAntiquot_parenthesizer___closed__4, &l_Lean_Parser_mkAntiquot_parenthesizer___closed__4_once, _init_l_Lean_Parser_mkAntiquot_parenthesizer___closed__4);
v___x_1101_ = ((lean_object*)(l_Lean_Parser_mkAntiquotSplice_parenthesizer___closed__0));
v___x_1102_ = ((lean_object*)(l_Lean_Parser_mkAntiquotSplice_formatter___closed__5));
v___x_1103_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_node_parenthesizer___boxed), 7, 2);
lean_closure_set(v___x_1103_, 0, v___x_1102_);
lean_closure_set(v___x_1103_, 1, v_p_1088_);
v___x_1104_ = ((lean_object*)(l_Lean_Parser_mkAntiquotSplice_parenthesizer___closed__1));
v___x_1105_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed), 7, 2);
lean_closure_set(v___x_1105_, 0, v___x_1104_);
lean_closure_set(v___x_1105_, 1, v_suffix_1089_);
v___x_1106_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed), 7, 2);
lean_closure_set(v___x_1106_, 0, v___x_1103_);
lean_closure_set(v___x_1106_, 1, v___x_1105_);
v___x_1107_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed), 7, 2);
lean_closure_set(v___x_1107_, 0, v___x_1101_);
lean_closure_set(v___x_1107_, 1, v___x_1106_);
v___x_1108_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed), 7, 2);
lean_closure_set(v___x_1108_, 0, v___x_1099_);
lean_closure_set(v___x_1108_, 1, v___x_1107_);
v___x_1109_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed), 7, 2);
lean_closure_set(v___x_1109_, 0, v___x_1100_);
lean_closure_set(v___x_1109_, 1, v___x_1108_);
v___f_1110_ = lean_alloc_closure((void*)(l_Lean_Parser_mkAntiquot_parenthesizer___lam__2___boxed), 7, 2);
lean_closure_set(v___f_1110_, 0, v___f_1098_);
lean_closure_set(v___f_1110_, 1, v___x_1109_);
v___x_1111_ = l_Lean_PrettyPrinter_Parenthesizer_leadingNode_parenthesizer(v_kind_1096_, v___x_1097_, v___f_1110_, v_a_1090_, v_a_1091_, v_a_1092_, v_a_1093_);
return v___x_1111_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_mkAntiquotSplice_parenthesizer___boxed(lean_object* v_kind_1112_, lean_object* v_p_1113_, lean_object* v_suffix_1114_, lean_object* v_a_1115_, lean_object* v_a_1116_, lean_object* v_a_1117_, lean_object* v_a_1118_, lean_object* v_a_1119_){
_start:
{
lean_object* v_res_1120_; 
v_res_1120_ = l_Lean_Parser_mkAntiquotSplice_parenthesizer(v_kind_1112_, v_p_1113_, v_suffix_1114_, v_a_1115_, v_a_1116_, v_a_1117_, v_a_1118_);
lean_dec(v_a_1118_);
lean_dec_ref(v_a_1117_);
lean_dec(v_a_1116_);
lean_dec_ref(v_a_1115_);
return v_res_1120_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withAntiquotSpliceAndSuffix_parenthesizer___lam__0(lean_object* v_p_1121_, lean_object* v___y_1122_, lean_object* v___y_1123_, lean_object* v___y_1124_, lean_object* v___y_1125_){
_start:
{
lean_object* v___x_1127_; 
v___x_1127_ = lean_apply_5(v_p_1121_, v___y_1122_, v___y_1123_, v___y_1124_, v___y_1125_, lean_box(0));
return v___x_1127_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withAntiquotSpliceAndSuffix_parenthesizer___lam__0___boxed(lean_object* v_p_1128_, lean_object* v___y_1129_, lean_object* v___y_1130_, lean_object* v___y_1131_, lean_object* v___y_1132_, lean_object* v___y_1133_){
_start:
{
lean_object* v_res_1134_; 
v_res_1134_ = l_Lean_Parser_withAntiquotSpliceAndSuffix_parenthesizer___lam__0(v_p_1128_, v___y_1129_, v___y_1130_, v___y_1131_, v___y_1132_);
return v_res_1134_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withAntiquotSpliceAndSuffix_parenthesizer(lean_object* v_kind_1135_, lean_object* v_p_1136_, lean_object* v_suffix_1137_, lean_object* v_a_1138_, lean_object* v_a_1139_, lean_object* v_a_1140_, lean_object* v_a_1141_){
_start:
{
lean_object* v___f_1143_; lean_object* v___x_1144_; lean_object* v___x_1145_; lean_object* v___x_1146_; 
lean_inc_ref(v_p_1136_);
v___f_1143_ = lean_alloc_closure((void*)(l_Lean_Parser_withAntiquotSpliceAndSuffix_parenthesizer___lam__0___boxed), 6, 1);
lean_closure_set(v___f_1143_, 0, v_p_1136_);
lean_inc_ref(v_suffix_1137_);
lean_inc(v_kind_1135_);
v___x_1144_ = lean_alloc_closure((void*)(l_Lean_Parser_mkAntiquotSplice_parenthesizer___boxed), 8, 3);
lean_closure_set(v___x_1144_, 0, v_kind_1135_);
lean_closure_set(v___x_1144_, 1, v___f_1143_);
lean_closure_set(v___x_1144_, 2, v_suffix_1137_);
v___x_1145_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_withAntiquotSuffixSplice_parenthesizer___boxed), 8, 3);
lean_closure_set(v___x_1145_, 0, v_kind_1135_);
lean_closure_set(v___x_1145_, 1, v_p_1136_);
lean_closure_set(v___x_1145_, 2, v_suffix_1137_);
v___x_1146_ = l_Lean_PrettyPrinter_Parenthesizer_withAntiquot_parenthesizer(v___x_1144_, v___x_1145_, v_a_1138_, v_a_1139_, v_a_1140_, v_a_1141_);
return v___x_1146_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withAntiquotSpliceAndSuffix_parenthesizer___boxed(lean_object* v_kind_1147_, lean_object* v_p_1148_, lean_object* v_suffix_1149_, lean_object* v_a_1150_, lean_object* v_a_1151_, lean_object* v_a_1152_, lean_object* v_a_1153_, lean_object* v_a_1154_){
_start:
{
lean_object* v_res_1155_; 
v_res_1155_ = l_Lean_Parser_withAntiquotSpliceAndSuffix_parenthesizer(v_kind_1147_, v_p_1148_, v_suffix_1149_, v_a_1150_, v_a_1151_, v_a_1152_, v_a_1153_);
lean_dec(v_a_1153_);
lean_dec_ref(v_a_1152_);
lean_dec(v_a_1151_);
lean_dec_ref(v_a_1150_);
return v_res_1155_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_sepByElemParser_parenthesizer(lean_object* v_p_1156_, lean_object* v_sep_1157_, lean_object* v_a_1158_, lean_object* v_a_1159_, lean_object* v_a_1160_, lean_object* v_a_1161_){
_start:
{
lean_object* v___x_1163_; lean_object* v___x_1164_; lean_object* v___x_1165_; lean_object* v___x_1166_; lean_object* v_str_1167_; lean_object* v_startInclusive_1168_; lean_object* v_endExclusive_1169_; lean_object* v___x_1170_; lean_object* v___x_1171_; lean_object* v___x_1172_; lean_object* v___x_1173_; lean_object* v___x_1174_; lean_object* v___x_1175_; 
v___x_1163_ = lean_unsigned_to_nat(0u);
v___x_1164_ = lean_string_utf8_byte_size(v_sep_1157_);
v___x_1165_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1165_, 0, v_sep_1157_);
lean_ctor_set(v___x_1165_, 1, v___x_1163_);
lean_ctor_set(v___x_1165_, 2, v___x_1164_);
v___x_1166_ = l_String_Slice_trimAscii(v___x_1165_);
v_str_1167_ = lean_ctor_get(v___x_1166_, 0);
lean_inc_ref(v_str_1167_);
v_startInclusive_1168_ = lean_ctor_get(v___x_1166_, 1);
lean_inc(v_startInclusive_1168_);
v_endExclusive_1169_ = lean_ctor_get(v___x_1166_, 2);
lean_inc(v_endExclusive_1169_);
lean_dec_ref(v___x_1166_);
v___x_1170_ = ((lean_object*)(l_Lean_Parser_sepByElemParser_formatter___closed__1));
v___x_1171_ = lean_string_utf8_extract_fast(v_str_1167_, v_startInclusive_1168_, v_endExclusive_1169_);
lean_dec(v_endExclusive_1169_);
lean_dec(v_startInclusive_1168_);
lean_dec_ref(v_str_1167_);
v___x_1172_ = ((lean_object*)(l_Lean_Parser_sepByElemParser_formatter___closed__2));
v___x_1173_ = lean_string_append(v___x_1171_, v___x_1172_);
v___x_1174_ = lean_alloc_closure((void*)(l_Lean_Parser_symbol_parenthesizer___boxed), 6, 1);
lean_closure_set(v___x_1174_, 0, v___x_1173_);
v___x_1175_ = l_Lean_Parser_withAntiquotSpliceAndSuffix_parenthesizer(v___x_1170_, v_p_1156_, v___x_1174_, v_a_1158_, v_a_1159_, v_a_1160_, v_a_1161_);
return v___x_1175_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_sepByElemParser_parenthesizer___boxed(lean_object* v_p_1176_, lean_object* v_sep_1177_, lean_object* v_a_1178_, lean_object* v_a_1179_, lean_object* v_a_1180_, lean_object* v_a_1181_, lean_object* v_a_1182_){
_start:
{
lean_object* v_res_1183_; 
v_res_1183_ = l_Lean_Parser_sepByElemParser_parenthesizer(v_p_1176_, v_sep_1177_, v_a_1178_, v_a_1179_, v_a_1180_, v_a_1181_);
lean_dec(v_a_1181_);
lean_dec_ref(v_a_1180_);
lean_dec(v_a_1179_);
lean_dec_ref(v_a_1178_);
return v_res_1183_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_sepBy_parenthesizer___redArg(lean_object* v_p_1184_, lean_object* v_sep_1185_, lean_object* v_psep_1186_, lean_object* v_a_1187_, lean_object* v_a_1188_, lean_object* v_a_1189_, lean_object* v_a_1190_){
_start:
{
lean_object* v___x_1192_; lean_object* v___x_1193_; 
v___x_1192_ = lean_alloc_closure((void*)(l_Lean_Parser_sepByElemParser_parenthesizer___boxed), 7, 2);
lean_closure_set(v___x_1192_, 0, v_p_1184_);
lean_closure_set(v___x_1192_, 1, v_sep_1185_);
v___x_1193_ = l_Lean_PrettyPrinter_Parenthesizer_sepByNoAntiquot_parenthesizer(v___x_1192_, v_psep_1186_, v_a_1187_, v_a_1188_, v_a_1189_, v_a_1190_);
return v___x_1193_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_sepBy_parenthesizer___redArg___boxed(lean_object* v_p_1194_, lean_object* v_sep_1195_, lean_object* v_psep_1196_, lean_object* v_a_1197_, lean_object* v_a_1198_, lean_object* v_a_1199_, lean_object* v_a_1200_, lean_object* v_a_1201_){
_start:
{
lean_object* v_res_1202_; 
v_res_1202_ = l_Lean_Parser_sepBy_parenthesizer___redArg(v_p_1194_, v_sep_1195_, v_psep_1196_, v_a_1197_, v_a_1198_, v_a_1199_, v_a_1200_);
lean_dec(v_a_1200_);
lean_dec_ref(v_a_1199_);
lean_dec(v_a_1198_);
lean_dec_ref(v_a_1197_);
return v_res_1202_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_sepBy_parenthesizer(lean_object* v_p_1203_, lean_object* v_sep_1204_, lean_object* v_psep_1205_, uint8_t v_allowTrailingSep_1206_, lean_object* v_a_1207_, lean_object* v_a_1208_, lean_object* v_a_1209_, lean_object* v_a_1210_){
_start:
{
lean_object* v___x_1212_; 
v___x_1212_ = l_Lean_Parser_sepBy_parenthesizer___redArg(v_p_1203_, v_sep_1204_, v_psep_1205_, v_a_1207_, v_a_1208_, v_a_1209_, v_a_1210_);
return v___x_1212_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_sepBy_parenthesizer___boxed(lean_object* v_p_1213_, lean_object* v_sep_1214_, lean_object* v_psep_1215_, lean_object* v_allowTrailingSep_1216_, lean_object* v_a_1217_, lean_object* v_a_1218_, lean_object* v_a_1219_, lean_object* v_a_1220_, lean_object* v_a_1221_){
_start:
{
uint8_t v_allowTrailingSep_boxed_1222_; lean_object* v_res_1223_; 
v_allowTrailingSep_boxed_1222_ = lean_unbox(v_allowTrailingSep_1216_);
v_res_1223_ = l_Lean_Parser_sepBy_parenthesizer(v_p_1213_, v_sep_1214_, v_psep_1215_, v_allowTrailingSep_boxed_1222_, v_a_1217_, v_a_1218_, v_a_1219_, v_a_1220_);
lean_dec(v_a_1220_);
lean_dec_ref(v_a_1219_);
lean_dec(v_a_1218_);
lean_dec_ref(v_a_1217_);
return v_res_1223_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_sepBy1_formatter___redArg(lean_object* v_p_1224_, lean_object* v_sep_1225_, lean_object* v_psep_1226_, lean_object* v_a_1227_, lean_object* v_a_1228_, lean_object* v_a_1229_, lean_object* v_a_1230_){
_start:
{
lean_object* v___x_1232_; lean_object* v___x_1233_; 
v___x_1232_ = lean_alloc_closure((void*)(l_Lean_Parser_sepByElemParser_formatter___boxed), 7, 2);
lean_closure_set(v___x_1232_, 0, v_p_1224_);
lean_closure_set(v___x_1232_, 1, v_sep_1225_);
v___x_1233_ = l_Lean_PrettyPrinter_Formatter_sepByNoAntiquot_formatter(v___x_1232_, v_psep_1226_, v_a_1227_, v_a_1228_, v_a_1229_, v_a_1230_);
return v___x_1233_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_sepBy1_formatter___redArg___boxed(lean_object* v_p_1234_, lean_object* v_sep_1235_, lean_object* v_psep_1236_, lean_object* v_a_1237_, lean_object* v_a_1238_, lean_object* v_a_1239_, lean_object* v_a_1240_, lean_object* v_a_1241_){
_start:
{
lean_object* v_res_1242_; 
v_res_1242_ = l_Lean_Parser_sepBy1_formatter___redArg(v_p_1234_, v_sep_1235_, v_psep_1236_, v_a_1237_, v_a_1238_, v_a_1239_, v_a_1240_);
lean_dec(v_a_1240_);
lean_dec_ref(v_a_1239_);
lean_dec(v_a_1238_);
lean_dec_ref(v_a_1237_);
return v_res_1242_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_sepBy1_formatter(lean_object* v_p_1243_, lean_object* v_sep_1244_, lean_object* v_psep_1245_, uint8_t v_allowTrailingSep_1246_, lean_object* v_a_1247_, lean_object* v_a_1248_, lean_object* v_a_1249_, lean_object* v_a_1250_){
_start:
{
lean_object* v___x_1252_; 
v___x_1252_ = l_Lean_Parser_sepBy1_formatter___redArg(v_p_1243_, v_sep_1244_, v_psep_1245_, v_a_1247_, v_a_1248_, v_a_1249_, v_a_1250_);
return v___x_1252_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_sepBy1_formatter___boxed(lean_object* v_p_1253_, lean_object* v_sep_1254_, lean_object* v_psep_1255_, lean_object* v_allowTrailingSep_1256_, lean_object* v_a_1257_, lean_object* v_a_1258_, lean_object* v_a_1259_, lean_object* v_a_1260_, lean_object* v_a_1261_){
_start:
{
uint8_t v_allowTrailingSep_boxed_1262_; lean_object* v_res_1263_; 
v_allowTrailingSep_boxed_1262_ = lean_unbox(v_allowTrailingSep_1256_);
v_res_1263_ = l_Lean_Parser_sepBy1_formatter(v_p_1253_, v_sep_1254_, v_psep_1255_, v_allowTrailingSep_boxed_1262_, v_a_1257_, v_a_1258_, v_a_1259_, v_a_1260_);
lean_dec(v_a_1260_);
lean_dec_ref(v_a_1259_);
lean_dec(v_a_1258_);
lean_dec_ref(v_a_1257_);
return v_res_1263_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_sepBy1_parenthesizer___redArg(lean_object* v_p_1264_, lean_object* v_sep_1265_, lean_object* v_psep_1266_, lean_object* v_a_1267_, lean_object* v_a_1268_, lean_object* v_a_1269_, lean_object* v_a_1270_){
_start:
{
lean_object* v___x_1272_; lean_object* v___x_1273_; 
v___x_1272_ = lean_alloc_closure((void*)(l_Lean_Parser_sepByElemParser_parenthesizer___boxed), 7, 2);
lean_closure_set(v___x_1272_, 0, v_p_1264_);
lean_closure_set(v___x_1272_, 1, v_sep_1265_);
v___x_1273_ = l_Lean_PrettyPrinter_Parenthesizer_sepByNoAntiquot_parenthesizer(v___x_1272_, v_psep_1266_, v_a_1267_, v_a_1268_, v_a_1269_, v_a_1270_);
return v___x_1273_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_sepBy1_parenthesizer___redArg___boxed(lean_object* v_p_1274_, lean_object* v_sep_1275_, lean_object* v_psep_1276_, lean_object* v_a_1277_, lean_object* v_a_1278_, lean_object* v_a_1279_, lean_object* v_a_1280_, lean_object* v_a_1281_){
_start:
{
lean_object* v_res_1282_; 
v_res_1282_ = l_Lean_Parser_sepBy1_parenthesizer___redArg(v_p_1274_, v_sep_1275_, v_psep_1276_, v_a_1277_, v_a_1278_, v_a_1279_, v_a_1280_);
lean_dec(v_a_1280_);
lean_dec_ref(v_a_1279_);
lean_dec(v_a_1278_);
lean_dec_ref(v_a_1277_);
return v_res_1282_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_sepBy1_parenthesizer(lean_object* v_p_1283_, lean_object* v_sep_1284_, lean_object* v_psep_1285_, uint8_t v_allowTrailingSep_1286_, lean_object* v_a_1287_, lean_object* v_a_1288_, lean_object* v_a_1289_, lean_object* v_a_1290_){
_start:
{
lean_object* v___x_1292_; 
v___x_1292_ = l_Lean_Parser_sepBy1_parenthesizer___redArg(v_p_1283_, v_sep_1284_, v_psep_1285_, v_a_1287_, v_a_1288_, v_a_1289_, v_a_1290_);
return v___x_1292_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_sepBy1_parenthesizer___boxed(lean_object* v_p_1293_, lean_object* v_sep_1294_, lean_object* v_psep_1295_, lean_object* v_allowTrailingSep_1296_, lean_object* v_a_1297_, lean_object* v_a_1298_, lean_object* v_a_1299_, lean_object* v_a_1300_, lean_object* v_a_1301_){
_start:
{
uint8_t v_allowTrailingSep_boxed_1302_; lean_object* v_res_1303_; 
v_allowTrailingSep_boxed_1302_ = lean_unbox(v_allowTrailingSep_1296_);
v_res_1303_ = l_Lean_Parser_sepBy1_parenthesizer(v_p_1293_, v_sep_1294_, v_psep_1295_, v_allowTrailingSep_boxed_1302_, v_a_1297_, v_a_1298_, v_a_1299_, v_a_1300_);
lean_dec(v_a_1300_);
lean_dec_ref(v_a_1299_);
lean_dec(v_a_1298_);
lean_dec_ref(v_a_1297_);
return v_res_1303_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_unicodeSymbol_formatter(lean_object* v_sym_1304_, lean_object* v_asciiSym_1305_, uint8_t v_preserveForPP_1306_, lean_object* v_a_1307_, lean_object* v_a_1308_, lean_object* v_a_1309_, lean_object* v_a_1310_){
_start:
{
lean_object* v___x_1312_; lean_object* v___x_1313_; lean_object* v___x_1314_; 
v___x_1312_ = lean_box(v_preserveForPP_1306_);
v___x_1313_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_unicodeSymbolNoAntiquot_formatter___boxed), 8, 3);
lean_closure_set(v___x_1313_, 0, v_sym_1304_);
lean_closure_set(v___x_1313_, 1, v_asciiSym_1305_);
lean_closure_set(v___x_1313_, 2, v___x_1312_);
v___x_1314_ = l_Lean_PrettyPrinter_Formatter_tokenWithAntiquot_formatter(v___x_1313_, v_a_1307_, v_a_1308_, v_a_1309_, v_a_1310_);
return v___x_1314_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_unicodeSymbol_formatter___boxed(lean_object* v_sym_1315_, lean_object* v_asciiSym_1316_, lean_object* v_preserveForPP_1317_, lean_object* v_a_1318_, lean_object* v_a_1319_, lean_object* v_a_1320_, lean_object* v_a_1321_, lean_object* v_a_1322_){
_start:
{
uint8_t v_preserveForPP_boxed_1323_; lean_object* v_res_1324_; 
v_preserveForPP_boxed_1323_ = lean_unbox(v_preserveForPP_1317_);
v_res_1324_ = l_Lean_Parser_unicodeSymbol_formatter(v_sym_1315_, v_asciiSym_1316_, v_preserveForPP_boxed_1323_, v_a_1318_, v_a_1319_, v_a_1320_, v_a_1321_);
lean_dec(v_a_1321_);
lean_dec_ref(v_a_1320_);
lean_dec(v_a_1319_);
lean_dec_ref(v_a_1318_);
return v_res_1324_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_unicodeSymbol_parenthesizer(lean_object* v_sym_1325_, lean_object* v_asciiSym_1326_, uint8_t v_preserveForPP_1327_, lean_object* v_a_1328_, lean_object* v_a_1329_, lean_object* v_a_1330_, lean_object* v_a_1331_){
_start:
{
lean_object* v___x_1333_; lean_object* v___x_1334_; lean_object* v___x_1335_; 
v___x_1333_ = lean_box(v_preserveForPP_1327_);
v___x_1334_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_unicodeSymbolNoAntiquot_parenthesizer___boxed), 8, 3);
lean_closure_set(v___x_1334_, 0, v_sym_1325_);
lean_closure_set(v___x_1334_, 1, v_asciiSym_1326_);
lean_closure_set(v___x_1334_, 2, v___x_1333_);
v___x_1335_ = l_Lean_PrettyPrinter_Parenthesizer_tokenWithAntiquot_parenthesizer(v___x_1334_, v_a_1328_, v_a_1329_, v_a_1330_, v_a_1331_);
return v___x_1335_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_unicodeSymbol_parenthesizer___boxed(lean_object* v_sym_1336_, lean_object* v_asciiSym_1337_, lean_object* v_preserveForPP_1338_, lean_object* v_a_1339_, lean_object* v_a_1340_, lean_object* v_a_1341_, lean_object* v_a_1342_, lean_object* v_a_1343_){
_start:
{
uint8_t v_preserveForPP_boxed_1344_; lean_object* v_res_1345_; 
v_preserveForPP_boxed_1344_ = lean_unbox(v_preserveForPP_1338_);
v_res_1345_ = l_Lean_Parser_unicodeSymbol_parenthesizer(v_sym_1336_, v_asciiSym_1337_, v_preserveForPP_boxed_1344_, v_a_1339_, v_a_1340_, v_a_1341_, v_a_1342_);
lean_dec(v_a_1342_);
lean_dec_ref(v_a_1341_);
lean_dec(v_a_1340_);
lean_dec_ref(v_a_1339_);
return v_res_1345_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withCache_formatter___redArg(lean_object* v_p_1346_, lean_object* v_a_1347_, lean_object* v_a_1348_, lean_object* v_a_1349_, lean_object* v_a_1350_){
_start:
{
lean_object* v___x_1352_; 
lean_inc(v_a_1350_);
lean_inc_ref(v_a_1349_);
lean_inc(v_a_1348_);
lean_inc_ref(v_a_1347_);
v___x_1352_ = lean_apply_5(v_p_1346_, v_a_1347_, v_a_1348_, v_a_1349_, v_a_1350_, lean_box(0));
return v___x_1352_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withCache_formatter___redArg___boxed(lean_object* v_p_1353_, lean_object* v_a_1354_, lean_object* v_a_1355_, lean_object* v_a_1356_, lean_object* v_a_1357_, lean_object* v_a_1358_){
_start:
{
lean_object* v_res_1359_; 
v_res_1359_ = l_Lean_Parser_withCache_formatter___redArg(v_p_1353_, v_a_1354_, v_a_1355_, v_a_1356_, v_a_1357_);
lean_dec(v_a_1357_);
lean_dec_ref(v_a_1356_);
lean_dec(v_a_1355_);
lean_dec_ref(v_a_1354_);
return v_res_1359_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withCache_formatter(lean_object* v_parserName_1360_, lean_object* v_p_1361_, lean_object* v_a_1362_, lean_object* v_a_1363_, lean_object* v_a_1364_, lean_object* v_a_1365_){
_start:
{
lean_object* v___x_1367_; 
lean_inc(v_a_1365_);
lean_inc_ref(v_a_1364_);
lean_inc(v_a_1363_);
lean_inc_ref(v_a_1362_);
v___x_1367_ = lean_apply_5(v_p_1361_, v_a_1362_, v_a_1363_, v_a_1364_, v_a_1365_, lean_box(0));
return v___x_1367_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withCache_formatter___boxed(lean_object* v_parserName_1368_, lean_object* v_p_1369_, lean_object* v_a_1370_, lean_object* v_a_1371_, lean_object* v_a_1372_, lean_object* v_a_1373_, lean_object* v_a_1374_){
_start:
{
lean_object* v_res_1375_; 
v_res_1375_ = l_Lean_Parser_withCache_formatter(v_parserName_1368_, v_p_1369_, v_a_1370_, v_a_1371_, v_a_1372_, v_a_1373_);
lean_dec(v_a_1373_);
lean_dec_ref(v_a_1372_);
lean_dec(v_a_1371_);
lean_dec_ref(v_a_1370_);
lean_dec(v_parserName_1368_);
return v_res_1375_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withCache_parenthesizer___redArg(lean_object* v_p_1376_, lean_object* v_a_1377_, lean_object* v_a_1378_, lean_object* v_a_1379_, lean_object* v_a_1380_){
_start:
{
lean_object* v___x_1382_; 
lean_inc(v_a_1380_);
lean_inc_ref(v_a_1379_);
lean_inc(v_a_1378_);
lean_inc_ref(v_a_1377_);
v___x_1382_ = lean_apply_5(v_p_1376_, v_a_1377_, v_a_1378_, v_a_1379_, v_a_1380_, lean_box(0));
return v___x_1382_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withCache_parenthesizer___redArg___boxed(lean_object* v_p_1383_, lean_object* v_a_1384_, lean_object* v_a_1385_, lean_object* v_a_1386_, lean_object* v_a_1387_, lean_object* v_a_1388_){
_start:
{
lean_object* v_res_1389_; 
v_res_1389_ = l_Lean_Parser_withCache_parenthesizer___redArg(v_p_1383_, v_a_1384_, v_a_1385_, v_a_1386_, v_a_1387_);
lean_dec(v_a_1387_);
lean_dec_ref(v_a_1386_);
lean_dec(v_a_1385_);
lean_dec_ref(v_a_1384_);
return v_res_1389_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withCache_parenthesizer(lean_object* v_parserName_1390_, lean_object* v_p_1391_, lean_object* v_a_1392_, lean_object* v_a_1393_, lean_object* v_a_1394_, lean_object* v_a_1395_){
_start:
{
lean_object* v___x_1397_; 
lean_inc(v_a_1395_);
lean_inc_ref(v_a_1394_);
lean_inc(v_a_1393_);
lean_inc_ref(v_a_1392_);
v___x_1397_ = lean_apply_5(v_p_1391_, v_a_1392_, v_a_1393_, v_a_1394_, v_a_1395_, lean_box(0));
return v___x_1397_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withCache_parenthesizer___boxed(lean_object* v_parserName_1398_, lean_object* v_p_1399_, lean_object* v_a_1400_, lean_object* v_a_1401_, lean_object* v_a_1402_, lean_object* v_a_1403_, lean_object* v_a_1404_){
_start:
{
lean_object* v_res_1405_; 
v_res_1405_ = l_Lean_Parser_withCache_parenthesizer(v_parserName_1398_, v_p_1399_, v_a_1400_, v_a_1401_, v_a_1402_, v_a_1403_);
lean_dec(v_a_1403_);
lean_dec_ref(v_a_1402_);
lean_dec(v_a_1401_);
lean_dec_ref(v_a_1400_);
lean_dec(v_parserName_1398_);
return v_res_1405_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withResetCache_formatter(lean_object* v_p_1406_, lean_object* v_a_1407_, lean_object* v_a_1408_, lean_object* v_a_1409_, lean_object* v_a_1410_){
_start:
{
lean_object* v___x_1412_; 
lean_inc(v_a_1410_);
lean_inc_ref(v_a_1409_);
lean_inc(v_a_1408_);
lean_inc_ref(v_a_1407_);
v___x_1412_ = lean_apply_5(v_p_1406_, v_a_1407_, v_a_1408_, v_a_1409_, v_a_1410_, lean_box(0));
return v___x_1412_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withResetCache_formatter___boxed(lean_object* v_p_1413_, lean_object* v_a_1414_, lean_object* v_a_1415_, lean_object* v_a_1416_, lean_object* v_a_1417_, lean_object* v_a_1418_){
_start:
{
lean_object* v_res_1419_; 
v_res_1419_ = l_Lean_Parser_withResetCache_formatter(v_p_1413_, v_a_1414_, v_a_1415_, v_a_1416_, v_a_1417_);
lean_dec(v_a_1417_);
lean_dec_ref(v_a_1416_);
lean_dec(v_a_1415_);
lean_dec_ref(v_a_1414_);
return v_res_1419_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withResetCache_parenthesizer(lean_object* v_p_1420_, lean_object* v_a_1421_, lean_object* v_a_1422_, lean_object* v_a_1423_, lean_object* v_a_1424_){
_start:
{
lean_object* v___x_1426_; 
lean_inc(v_a_1424_);
lean_inc_ref(v_a_1423_);
lean_inc(v_a_1422_);
lean_inc_ref(v_a_1421_);
v___x_1426_ = lean_apply_5(v_p_1420_, v_a_1421_, v_a_1422_, v_a_1423_, v_a_1424_, lean_box(0));
return v___x_1426_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withResetCache_parenthesizer___boxed(lean_object* v_p_1427_, lean_object* v_a_1428_, lean_object* v_a_1429_, lean_object* v_a_1430_, lean_object* v_a_1431_, lean_object* v_a_1432_){
_start:
{
lean_object* v_res_1433_; 
v_res_1433_ = l_Lean_Parser_withResetCache_parenthesizer(v_p_1427_, v_a_1428_, v_a_1429_, v_a_1430_, v_a_1431_);
lean_dec(v_a_1431_);
lean_dec_ref(v_a_1430_);
lean_dec(v_a_1429_);
lean_dec_ref(v_a_1428_);
return v_res_1433_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withPosition_formatter(lean_object* v_p_1434_, lean_object* v_a_1435_, lean_object* v_a_1436_, lean_object* v_a_1437_, lean_object* v_a_1438_){
_start:
{
lean_object* v___x_1440_; 
lean_inc(v_a_1438_);
lean_inc_ref(v_a_1437_);
lean_inc(v_a_1436_);
lean_inc_ref(v_a_1435_);
v___x_1440_ = lean_apply_5(v_p_1434_, v_a_1435_, v_a_1436_, v_a_1437_, v_a_1438_, lean_box(0));
return v___x_1440_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withPosition_formatter___boxed(lean_object* v_p_1441_, lean_object* v_a_1442_, lean_object* v_a_1443_, lean_object* v_a_1444_, lean_object* v_a_1445_, lean_object* v_a_1446_){
_start:
{
lean_object* v_res_1447_; 
v_res_1447_ = l_Lean_Parser_withPosition_formatter(v_p_1441_, v_a_1442_, v_a_1443_, v_a_1444_, v_a_1445_);
lean_dec(v_a_1445_);
lean_dec_ref(v_a_1444_);
lean_dec(v_a_1443_);
lean_dec_ref(v_a_1442_);
return v_res_1447_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withPositionAfterLinebreak_formatter(lean_object* v_p_1448_, lean_object* v_a_1449_, lean_object* v_a_1450_, lean_object* v_a_1451_, lean_object* v_a_1452_){
_start:
{
lean_object* v___x_1454_; 
lean_inc(v_a_1452_);
lean_inc_ref(v_a_1451_);
lean_inc(v_a_1450_);
lean_inc_ref(v_a_1449_);
v___x_1454_ = lean_apply_5(v_p_1448_, v_a_1449_, v_a_1450_, v_a_1451_, v_a_1452_, lean_box(0));
return v___x_1454_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withPositionAfterLinebreak_formatter___boxed(lean_object* v_p_1455_, lean_object* v_a_1456_, lean_object* v_a_1457_, lean_object* v_a_1458_, lean_object* v_a_1459_, lean_object* v_a_1460_){
_start:
{
lean_object* v_res_1461_; 
v_res_1461_ = l_Lean_Parser_withPositionAfterLinebreak_formatter(v_p_1455_, v_a_1456_, v_a_1457_, v_a_1458_, v_a_1459_);
lean_dec(v_a_1459_);
lean_dec_ref(v_a_1458_);
lean_dec(v_a_1457_);
lean_dec_ref(v_a_1456_);
return v_res_1461_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withoutPosition_formatter(lean_object* v_p_1462_, lean_object* v_a_1463_, lean_object* v_a_1464_, lean_object* v_a_1465_, lean_object* v_a_1466_){
_start:
{
lean_object* v___x_1468_; 
lean_inc(v_a_1466_);
lean_inc_ref(v_a_1465_);
lean_inc(v_a_1464_);
lean_inc_ref(v_a_1463_);
v___x_1468_ = lean_apply_5(v_p_1462_, v_a_1463_, v_a_1464_, v_a_1465_, v_a_1466_, lean_box(0));
return v___x_1468_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withoutPosition_formatter___boxed(lean_object* v_p_1469_, lean_object* v_a_1470_, lean_object* v_a_1471_, lean_object* v_a_1472_, lean_object* v_a_1473_, lean_object* v_a_1474_){
_start:
{
lean_object* v_res_1475_; 
v_res_1475_ = l_Lean_Parser_withoutPosition_formatter(v_p_1469_, v_a_1470_, v_a_1471_, v_a_1472_, v_a_1473_);
lean_dec(v_a_1473_);
lean_dec_ref(v_a_1472_);
lean_dec(v_a_1471_);
lean_dec_ref(v_a_1470_);
return v_res_1475_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withoutPosition_parenthesizer(lean_object* v_p_1476_, lean_object* v_a_1477_, lean_object* v_a_1478_, lean_object* v_a_1479_, lean_object* v_a_1480_){
_start:
{
lean_object* v___x_1482_; 
lean_inc(v_a_1480_);
lean_inc_ref(v_a_1479_);
lean_inc(v_a_1478_);
lean_inc_ref(v_a_1477_);
v___x_1482_ = lean_apply_5(v_p_1476_, v_a_1477_, v_a_1478_, v_a_1479_, v_a_1480_, lean_box(0));
return v___x_1482_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withoutPosition_parenthesizer___boxed(lean_object* v_p_1483_, lean_object* v_a_1484_, lean_object* v_a_1485_, lean_object* v_a_1486_, lean_object* v_a_1487_, lean_object* v_a_1488_){
_start:
{
lean_object* v_res_1489_; 
v_res_1489_ = l_Lean_Parser_withoutPosition_parenthesizer(v_p_1483_, v_a_1484_, v_a_1485_, v_a_1486_, v_a_1487_);
lean_dec(v_a_1487_);
lean_dec_ref(v_a_1486_);
lean_dec(v_a_1485_);
lean_dec_ref(v_a_1484_);
return v_res_1489_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withForbidden_formatter___redArg(lean_object* v_p_1490_, lean_object* v_a_1491_, lean_object* v_a_1492_, lean_object* v_a_1493_, lean_object* v_a_1494_){
_start:
{
lean_object* v___x_1496_; 
lean_inc(v_a_1494_);
lean_inc_ref(v_a_1493_);
lean_inc(v_a_1492_);
lean_inc_ref(v_a_1491_);
v___x_1496_ = lean_apply_5(v_p_1490_, v_a_1491_, v_a_1492_, v_a_1493_, v_a_1494_, lean_box(0));
return v___x_1496_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withForbidden_formatter___redArg___boxed(lean_object* v_p_1497_, lean_object* v_a_1498_, lean_object* v_a_1499_, lean_object* v_a_1500_, lean_object* v_a_1501_, lean_object* v_a_1502_){
_start:
{
lean_object* v_res_1503_; 
v_res_1503_ = l_Lean_Parser_withForbidden_formatter___redArg(v_p_1497_, v_a_1498_, v_a_1499_, v_a_1500_, v_a_1501_);
lean_dec(v_a_1501_);
lean_dec_ref(v_a_1500_);
lean_dec(v_a_1499_);
lean_dec_ref(v_a_1498_);
return v_res_1503_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withForbidden_formatter(lean_object* v_tk_1504_, lean_object* v_p_1505_, lean_object* v_a_1506_, lean_object* v_a_1507_, lean_object* v_a_1508_, lean_object* v_a_1509_){
_start:
{
lean_object* v___x_1511_; 
lean_inc(v_a_1509_);
lean_inc_ref(v_a_1508_);
lean_inc(v_a_1507_);
lean_inc_ref(v_a_1506_);
v___x_1511_ = lean_apply_5(v_p_1505_, v_a_1506_, v_a_1507_, v_a_1508_, v_a_1509_, lean_box(0));
return v___x_1511_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withForbidden_formatter___boxed(lean_object* v_tk_1512_, lean_object* v_p_1513_, lean_object* v_a_1514_, lean_object* v_a_1515_, lean_object* v_a_1516_, lean_object* v_a_1517_, lean_object* v_a_1518_){
_start:
{
lean_object* v_res_1519_; 
v_res_1519_ = l_Lean_Parser_withForbidden_formatter(v_tk_1512_, v_p_1513_, v_a_1514_, v_a_1515_, v_a_1516_, v_a_1517_);
lean_dec(v_a_1517_);
lean_dec_ref(v_a_1516_);
lean_dec(v_a_1515_);
lean_dec_ref(v_a_1514_);
lean_dec_ref(v_tk_1512_);
return v_res_1519_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withForbidden_parenthesizer___redArg(lean_object* v_p_1520_, lean_object* v_a_1521_, lean_object* v_a_1522_, lean_object* v_a_1523_, lean_object* v_a_1524_){
_start:
{
lean_object* v___x_1526_; 
lean_inc(v_a_1524_);
lean_inc_ref(v_a_1523_);
lean_inc(v_a_1522_);
lean_inc_ref(v_a_1521_);
v___x_1526_ = lean_apply_5(v_p_1520_, v_a_1521_, v_a_1522_, v_a_1523_, v_a_1524_, lean_box(0));
return v___x_1526_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withForbidden_parenthesizer___redArg___boxed(lean_object* v_p_1527_, lean_object* v_a_1528_, lean_object* v_a_1529_, lean_object* v_a_1530_, lean_object* v_a_1531_, lean_object* v_a_1532_){
_start:
{
lean_object* v_res_1533_; 
v_res_1533_ = l_Lean_Parser_withForbidden_parenthesizer___redArg(v_p_1527_, v_a_1528_, v_a_1529_, v_a_1530_, v_a_1531_);
lean_dec(v_a_1531_);
lean_dec_ref(v_a_1530_);
lean_dec(v_a_1529_);
lean_dec_ref(v_a_1528_);
return v_res_1533_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withForbidden_parenthesizer(lean_object* v_tk_1534_, lean_object* v_p_1535_, lean_object* v_a_1536_, lean_object* v_a_1537_, lean_object* v_a_1538_, lean_object* v_a_1539_){
_start:
{
lean_object* v___x_1541_; 
lean_inc(v_a_1539_);
lean_inc_ref(v_a_1538_);
lean_inc(v_a_1537_);
lean_inc_ref(v_a_1536_);
v___x_1541_ = lean_apply_5(v_p_1535_, v_a_1536_, v_a_1537_, v_a_1538_, v_a_1539_, lean_box(0));
return v___x_1541_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withForbidden_parenthesizer___boxed(lean_object* v_tk_1542_, lean_object* v_p_1543_, lean_object* v_a_1544_, lean_object* v_a_1545_, lean_object* v_a_1546_, lean_object* v_a_1547_, lean_object* v_a_1548_){
_start:
{
lean_object* v_res_1549_; 
v_res_1549_ = l_Lean_Parser_withForbidden_parenthesizer(v_tk_1542_, v_p_1543_, v_a_1544_, v_a_1545_, v_a_1546_, v_a_1547_);
lean_dec(v_a_1547_);
lean_dec_ref(v_a_1546_);
lean_dec(v_a_1545_);
lean_dec_ref(v_a_1544_);
lean_dec_ref(v_tk_1542_);
return v_res_1549_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withoutForbidden_formatter(lean_object* v_p_1550_, lean_object* v_a_1551_, lean_object* v_a_1552_, lean_object* v_a_1553_, lean_object* v_a_1554_){
_start:
{
lean_object* v___x_1556_; 
lean_inc(v_a_1554_);
lean_inc_ref(v_a_1553_);
lean_inc(v_a_1552_);
lean_inc_ref(v_a_1551_);
v___x_1556_ = lean_apply_5(v_p_1550_, v_a_1551_, v_a_1552_, v_a_1553_, v_a_1554_, lean_box(0));
return v___x_1556_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withoutForbidden_formatter___boxed(lean_object* v_p_1557_, lean_object* v_a_1558_, lean_object* v_a_1559_, lean_object* v_a_1560_, lean_object* v_a_1561_, lean_object* v_a_1562_){
_start:
{
lean_object* v_res_1563_; 
v_res_1563_ = l_Lean_Parser_withoutForbidden_formatter(v_p_1557_, v_a_1558_, v_a_1559_, v_a_1560_, v_a_1561_);
lean_dec(v_a_1561_);
lean_dec_ref(v_a_1560_);
lean_dec(v_a_1559_);
lean_dec_ref(v_a_1558_);
return v_res_1563_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withoutForbidden_parenthesizer(lean_object* v_p_1564_, lean_object* v_a_1565_, lean_object* v_a_1566_, lean_object* v_a_1567_, lean_object* v_a_1568_){
_start:
{
lean_object* v___x_1570_; 
lean_inc(v_a_1568_);
lean_inc_ref(v_a_1567_);
lean_inc(v_a_1566_);
lean_inc_ref(v_a_1565_);
v___x_1570_ = lean_apply_5(v_p_1564_, v_a_1565_, v_a_1566_, v_a_1567_, v_a_1568_, lean_box(0));
return v___x_1570_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withoutForbidden_parenthesizer___boxed(lean_object* v_p_1571_, lean_object* v_a_1572_, lean_object* v_a_1573_, lean_object* v_a_1574_, lean_object* v_a_1575_, lean_object* v_a_1576_){
_start:
{
lean_object* v_res_1577_; 
v_res_1577_ = l_Lean_Parser_withoutForbidden_parenthesizer(v_p_1571_, v_a_1572_, v_a_1573_, v_a_1574_, v_a_1575_);
lean_dec(v_a_1575_);
lean_dec_ref(v_a_1574_);
lean_dec(v_a_1573_);
lean_dec_ref(v_a_1572_);
return v_res_1577_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_incQuotDepth_formatter(lean_object* v_p_1578_, lean_object* v_a_1579_, lean_object* v_a_1580_, lean_object* v_a_1581_, lean_object* v_a_1582_){
_start:
{
lean_object* v___x_1584_; 
lean_inc(v_a_1582_);
lean_inc_ref(v_a_1581_);
lean_inc(v_a_1580_);
lean_inc_ref(v_a_1579_);
v___x_1584_ = lean_apply_5(v_p_1578_, v_a_1579_, v_a_1580_, v_a_1581_, v_a_1582_, lean_box(0));
return v___x_1584_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_incQuotDepth_formatter___boxed(lean_object* v_p_1585_, lean_object* v_a_1586_, lean_object* v_a_1587_, lean_object* v_a_1588_, lean_object* v_a_1589_, lean_object* v_a_1590_){
_start:
{
lean_object* v_res_1591_; 
v_res_1591_ = l_Lean_Parser_incQuotDepth_formatter(v_p_1585_, v_a_1586_, v_a_1587_, v_a_1588_, v_a_1589_);
lean_dec(v_a_1589_);
lean_dec_ref(v_a_1588_);
lean_dec(v_a_1587_);
lean_dec_ref(v_a_1586_);
return v_res_1591_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_incQuotDepth_parenthesizer(lean_object* v_p_1592_, lean_object* v_a_1593_, lean_object* v_a_1594_, lean_object* v_a_1595_, lean_object* v_a_1596_){
_start:
{
lean_object* v___x_1598_; 
lean_inc(v_a_1596_);
lean_inc_ref(v_a_1595_);
lean_inc(v_a_1594_);
lean_inc_ref(v_a_1593_);
v___x_1598_ = lean_apply_5(v_p_1592_, v_a_1593_, v_a_1594_, v_a_1595_, v_a_1596_, lean_box(0));
return v___x_1598_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_incQuotDepth_parenthesizer___boxed(lean_object* v_p_1599_, lean_object* v_a_1600_, lean_object* v_a_1601_, lean_object* v_a_1602_, lean_object* v_a_1603_, lean_object* v_a_1604_){
_start:
{
lean_object* v_res_1605_; 
v_res_1605_ = l_Lean_Parser_incQuotDepth_parenthesizer(v_p_1599_, v_a_1600_, v_a_1601_, v_a_1602_, v_a_1603_);
lean_dec(v_a_1603_);
lean_dec_ref(v_a_1602_);
lean_dec(v_a_1601_);
lean_dec_ref(v_a_1600_);
return v_res_1605_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_suppressInsideQuot_formatter(lean_object* v_00___1606_, lean_object* v_a_1607_, lean_object* v_a_1608_, lean_object* v_a_1609_, lean_object* v_a_1610_){
_start:
{
lean_object* v___x_1612_; 
lean_inc(v_a_1610_);
lean_inc_ref(v_a_1609_);
lean_inc(v_a_1608_);
lean_inc_ref(v_a_1607_);
v___x_1612_ = lean_apply_5(v_00___1606_, v_a_1607_, v_a_1608_, v_a_1609_, v_a_1610_, lean_box(0));
return v___x_1612_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_suppressInsideQuot_formatter___boxed(lean_object* v_00___1613_, lean_object* v_a_1614_, lean_object* v_a_1615_, lean_object* v_a_1616_, lean_object* v_a_1617_, lean_object* v_a_1618_){
_start:
{
lean_object* v_res_1619_; 
v_res_1619_ = l_Lean_Parser_suppressInsideQuot_formatter(v_00___1613_, v_a_1614_, v_a_1615_, v_a_1616_, v_a_1617_);
lean_dec(v_a_1617_);
lean_dec_ref(v_a_1616_);
lean_dec(v_a_1615_);
lean_dec_ref(v_a_1614_);
return v_res_1619_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_suppressInsideQuot_parenthesizer(lean_object* v_00___1620_, lean_object* v_a_1621_, lean_object* v_a_1622_, lean_object* v_a_1623_, lean_object* v_a_1624_){
_start:
{
lean_object* v___x_1626_; 
lean_inc(v_a_1624_);
lean_inc_ref(v_a_1623_);
lean_inc(v_a_1622_);
lean_inc_ref(v_a_1621_);
v___x_1626_ = lean_apply_5(v_00___1620_, v_a_1621_, v_a_1622_, v_a_1623_, v_a_1624_, lean_box(0));
return v___x_1626_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_suppressInsideQuot_parenthesizer___boxed(lean_object* v_00___1627_, lean_object* v_a_1628_, lean_object* v_a_1629_, lean_object* v_a_1630_, lean_object* v_a_1631_, lean_object* v_a_1632_){
_start:
{
lean_object* v_res_1633_; 
v_res_1633_ = l_Lean_Parser_suppressInsideQuot_parenthesizer(v_00___1627_, v_a_1628_, v_a_1629_, v_a_1630_, v_a_1631_);
lean_dec(v_a_1631_);
lean_dec_ref(v_a_1630_);
lean_dec(v_a_1629_);
lean_dec_ref(v_a_1628_);
return v_res_1633_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_evalInsideQuot_formatter___redArg(lean_object* v_p_1634_, lean_object* v_a_1635_, lean_object* v_a_1636_, lean_object* v_a_1637_, lean_object* v_a_1638_){
_start:
{
lean_object* v___x_1640_; 
lean_inc(v_a_1638_);
lean_inc_ref(v_a_1637_);
lean_inc(v_a_1636_);
lean_inc_ref(v_a_1635_);
v___x_1640_ = lean_apply_5(v_p_1634_, v_a_1635_, v_a_1636_, v_a_1637_, v_a_1638_, lean_box(0));
return v___x_1640_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_evalInsideQuot_formatter___redArg___boxed(lean_object* v_p_1641_, lean_object* v_a_1642_, lean_object* v_a_1643_, lean_object* v_a_1644_, lean_object* v_a_1645_, lean_object* v_a_1646_){
_start:
{
lean_object* v_res_1647_; 
v_res_1647_ = l_Lean_Parser_evalInsideQuot_formatter___redArg(v_p_1641_, v_a_1642_, v_a_1643_, v_a_1644_, v_a_1645_);
lean_dec(v_a_1645_);
lean_dec_ref(v_a_1644_);
lean_dec(v_a_1643_);
lean_dec_ref(v_a_1642_);
return v_res_1647_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_evalInsideQuot_formatter(lean_object* v_declName_1648_, lean_object* v_p_1649_, lean_object* v_a_1650_, lean_object* v_a_1651_, lean_object* v_a_1652_, lean_object* v_a_1653_){
_start:
{
lean_object* v___x_1655_; 
lean_inc(v_a_1653_);
lean_inc_ref(v_a_1652_);
lean_inc(v_a_1651_);
lean_inc_ref(v_a_1650_);
v___x_1655_ = lean_apply_5(v_p_1649_, v_a_1650_, v_a_1651_, v_a_1652_, v_a_1653_, lean_box(0));
return v___x_1655_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_evalInsideQuot_formatter___boxed(lean_object* v_declName_1656_, lean_object* v_p_1657_, lean_object* v_a_1658_, lean_object* v_a_1659_, lean_object* v_a_1660_, lean_object* v_a_1661_, lean_object* v_a_1662_){
_start:
{
lean_object* v_res_1663_; 
v_res_1663_ = l_Lean_Parser_evalInsideQuot_formatter(v_declName_1656_, v_p_1657_, v_a_1658_, v_a_1659_, v_a_1660_, v_a_1661_);
lean_dec(v_a_1661_);
lean_dec_ref(v_a_1660_);
lean_dec(v_a_1659_);
lean_dec_ref(v_a_1658_);
lean_dec(v_declName_1656_);
return v_res_1663_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_evalInsideQuot_parenthesizer___redArg(lean_object* v_p_1664_, lean_object* v_a_1665_, lean_object* v_a_1666_, lean_object* v_a_1667_, lean_object* v_a_1668_){
_start:
{
lean_object* v___x_1670_; 
lean_inc(v_a_1668_);
lean_inc_ref(v_a_1667_);
lean_inc(v_a_1666_);
lean_inc_ref(v_a_1665_);
v___x_1670_ = lean_apply_5(v_p_1664_, v_a_1665_, v_a_1666_, v_a_1667_, v_a_1668_, lean_box(0));
return v___x_1670_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_evalInsideQuot_parenthesizer___redArg___boxed(lean_object* v_p_1671_, lean_object* v_a_1672_, lean_object* v_a_1673_, lean_object* v_a_1674_, lean_object* v_a_1675_, lean_object* v_a_1676_){
_start:
{
lean_object* v_res_1677_; 
v_res_1677_ = l_Lean_Parser_evalInsideQuot_parenthesizer___redArg(v_p_1671_, v_a_1672_, v_a_1673_, v_a_1674_, v_a_1675_);
lean_dec(v_a_1675_);
lean_dec_ref(v_a_1674_);
lean_dec(v_a_1673_);
lean_dec_ref(v_a_1672_);
return v_res_1677_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_evalInsideQuot_parenthesizer(lean_object* v_declName_1678_, lean_object* v_p_1679_, lean_object* v_a_1680_, lean_object* v_a_1681_, lean_object* v_a_1682_, lean_object* v_a_1683_){
_start:
{
lean_object* v___x_1685_; 
lean_inc(v_a_1683_);
lean_inc_ref(v_a_1682_);
lean_inc(v_a_1681_);
lean_inc_ref(v_a_1680_);
v___x_1685_ = lean_apply_5(v_p_1679_, v_a_1680_, v_a_1681_, v_a_1682_, v_a_1683_, lean_box(0));
return v___x_1685_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_evalInsideQuot_parenthesizer___boxed(lean_object* v_declName_1686_, lean_object* v_p_1687_, lean_object* v_a_1688_, lean_object* v_a_1689_, lean_object* v_a_1690_, lean_object* v_a_1691_, lean_object* v_a_1692_){
_start:
{
lean_object* v_res_1693_; 
v_res_1693_ = l_Lean_Parser_evalInsideQuot_parenthesizer(v_declName_1686_, v_p_1687_, v_a_1688_, v_a_1689_, v_a_1690_, v_a_1691_);
lean_dec(v_a_1691_);
lean_dec_ref(v_a_1690_);
lean_dec(v_a_1689_);
lean_dec_ref(v_a_1688_);
lean_dec(v_declName_1686_);
return v_res_1693_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withOpen_formatter(lean_object* v_p_1694_, lean_object* v_a_1695_, lean_object* v_a_1696_, lean_object* v_a_1697_, lean_object* v_a_1698_){
_start:
{
lean_object* v___x_1700_; 
lean_inc(v_a_1698_);
lean_inc_ref(v_a_1697_);
lean_inc(v_a_1696_);
lean_inc_ref(v_a_1695_);
v___x_1700_ = lean_apply_5(v_p_1694_, v_a_1695_, v_a_1696_, v_a_1697_, v_a_1698_, lean_box(0));
return v___x_1700_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withOpen_formatter___boxed(lean_object* v_p_1701_, lean_object* v_a_1702_, lean_object* v_a_1703_, lean_object* v_a_1704_, lean_object* v_a_1705_, lean_object* v_a_1706_){
_start:
{
lean_object* v_res_1707_; 
v_res_1707_ = l_Lean_Parser_withOpen_formatter(v_p_1701_, v_a_1702_, v_a_1703_, v_a_1704_, v_a_1705_);
lean_dec(v_a_1705_);
lean_dec_ref(v_a_1704_);
lean_dec(v_a_1703_);
lean_dec_ref(v_a_1702_);
return v_res_1707_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withOpen_parenthesizer(lean_object* v_p_1708_, lean_object* v_a_1709_, lean_object* v_a_1710_, lean_object* v_a_1711_, lean_object* v_a_1712_){
_start:
{
lean_object* v___x_1714_; 
lean_inc(v_a_1712_);
lean_inc_ref(v_a_1711_);
lean_inc(v_a_1710_);
lean_inc_ref(v_a_1709_);
v___x_1714_ = lean_apply_5(v_p_1708_, v_a_1709_, v_a_1710_, v_a_1711_, v_a_1712_, lean_box(0));
return v___x_1714_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withOpen_parenthesizer___boxed(lean_object* v_p_1715_, lean_object* v_a_1716_, lean_object* v_a_1717_, lean_object* v_a_1718_, lean_object* v_a_1719_, lean_object* v_a_1720_){
_start:
{
lean_object* v_res_1721_; 
v_res_1721_ = l_Lean_Parser_withOpen_parenthesizer(v_p_1715_, v_a_1716_, v_a_1717_, v_a_1718_, v_a_1719_);
lean_dec(v_a_1719_);
lean_dec_ref(v_a_1718_);
lean_dec(v_a_1717_);
lean_dec_ref(v_a_1716_);
return v_res_1721_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withOpenDecl_formatter(lean_object* v_p_1722_, lean_object* v_a_1723_, lean_object* v_a_1724_, lean_object* v_a_1725_, lean_object* v_a_1726_){
_start:
{
lean_object* v___x_1728_; 
lean_inc(v_a_1726_);
lean_inc_ref(v_a_1725_);
lean_inc(v_a_1724_);
lean_inc_ref(v_a_1723_);
v___x_1728_ = lean_apply_5(v_p_1722_, v_a_1723_, v_a_1724_, v_a_1725_, v_a_1726_, lean_box(0));
return v___x_1728_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withOpenDecl_formatter___boxed(lean_object* v_p_1729_, lean_object* v_a_1730_, lean_object* v_a_1731_, lean_object* v_a_1732_, lean_object* v_a_1733_, lean_object* v_a_1734_){
_start:
{
lean_object* v_res_1735_; 
v_res_1735_ = l_Lean_Parser_withOpenDecl_formatter(v_p_1729_, v_a_1730_, v_a_1731_, v_a_1732_, v_a_1733_);
lean_dec(v_a_1733_);
lean_dec_ref(v_a_1732_);
lean_dec(v_a_1731_);
lean_dec_ref(v_a_1730_);
return v_res_1735_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withOpenDecl_parenthesizer(lean_object* v_p_1736_, lean_object* v_a_1737_, lean_object* v_a_1738_, lean_object* v_a_1739_, lean_object* v_a_1740_){
_start:
{
lean_object* v___x_1742_; 
lean_inc(v_a_1740_);
lean_inc_ref(v_a_1739_);
lean_inc(v_a_1738_);
lean_inc_ref(v_a_1737_);
v___x_1742_ = lean_apply_5(v_p_1736_, v_a_1737_, v_a_1738_, v_a_1739_, v_a_1740_, lean_box(0));
return v___x_1742_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withOpenDecl_parenthesizer___boxed(lean_object* v_p_1743_, lean_object* v_a_1744_, lean_object* v_a_1745_, lean_object* v_a_1746_, lean_object* v_a_1747_, lean_object* v_a_1748_){
_start:
{
lean_object* v_res_1749_; 
v_res_1749_ = l_Lean_Parser_withOpenDecl_parenthesizer(v_p_1743_, v_a_1744_, v_a_1745_, v_a_1746_, v_a_1747_);
lean_dec(v_a_1747_);
lean_dec_ref(v_a_1746_);
lean_dec(v_a_1745_);
lean_dec_ref(v_a_1744_);
return v_res_1749_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withSetOption_formatter(lean_object* v_p_1750_, lean_object* v_a_1751_, lean_object* v_a_1752_, lean_object* v_a_1753_, lean_object* v_a_1754_){
_start:
{
lean_object* v___x_1756_; 
lean_inc(v_a_1754_);
lean_inc_ref(v_a_1753_);
lean_inc(v_a_1752_);
lean_inc_ref(v_a_1751_);
v___x_1756_ = lean_apply_5(v_p_1750_, v_a_1751_, v_a_1752_, v_a_1753_, v_a_1754_, lean_box(0));
return v___x_1756_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withSetOption_formatter___boxed(lean_object* v_p_1757_, lean_object* v_a_1758_, lean_object* v_a_1759_, lean_object* v_a_1760_, lean_object* v_a_1761_, lean_object* v_a_1762_){
_start:
{
lean_object* v_res_1763_; 
v_res_1763_ = l_Lean_Parser_withSetOption_formatter(v_p_1757_, v_a_1758_, v_a_1759_, v_a_1760_, v_a_1761_);
lean_dec(v_a_1761_);
lean_dec_ref(v_a_1760_);
lean_dec(v_a_1759_);
lean_dec_ref(v_a_1758_);
return v_res_1763_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withSetOption_parenthesizer(lean_object* v_p_1764_, lean_object* v_a_1765_, lean_object* v_a_1766_, lean_object* v_a_1767_, lean_object* v_a_1768_){
_start:
{
lean_object* v___x_1770_; 
lean_inc(v_a_1768_);
lean_inc_ref(v_a_1767_);
lean_inc(v_a_1766_);
lean_inc_ref(v_a_1765_);
v___x_1770_ = lean_apply_5(v_p_1764_, v_a_1765_, v_a_1766_, v_a_1767_, v_a_1768_, lean_box(0));
return v___x_1770_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withSetOption_parenthesizer___boxed(lean_object* v_p_1771_, lean_object* v_a_1772_, lean_object* v_a_1773_, lean_object* v_a_1774_, lean_object* v_a_1775_, lean_object* v_a_1776_){
_start:
{
lean_object* v_res_1777_; 
v_res_1777_ = l_Lean_Parser_withSetOption_parenthesizer(v_p_1771_, v_a_1772_, v_a_1773_, v_a_1774_, v_a_1775_);
lean_dec(v_a_1775_);
lean_dec_ref(v_a_1774_);
lean_dec(v_a_1773_);
lean_dec_ref(v_a_1772_);
return v_res_1777_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withSetOptionValue_formatter(lean_object* v_p_1778_, lean_object* v_a_1779_, lean_object* v_a_1780_, lean_object* v_a_1781_, lean_object* v_a_1782_){
_start:
{
lean_object* v___x_1784_; 
lean_inc(v_a_1782_);
lean_inc_ref(v_a_1781_);
lean_inc(v_a_1780_);
lean_inc_ref(v_a_1779_);
v___x_1784_ = lean_apply_5(v_p_1778_, v_a_1779_, v_a_1780_, v_a_1781_, v_a_1782_, lean_box(0));
return v___x_1784_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withSetOptionValue_formatter___boxed(lean_object* v_p_1785_, lean_object* v_a_1786_, lean_object* v_a_1787_, lean_object* v_a_1788_, lean_object* v_a_1789_, lean_object* v_a_1790_){
_start:
{
lean_object* v_res_1791_; 
v_res_1791_ = l_Lean_Parser_withSetOptionValue_formatter(v_p_1785_, v_a_1786_, v_a_1787_, v_a_1788_, v_a_1789_);
lean_dec(v_a_1789_);
lean_dec_ref(v_a_1788_);
lean_dec(v_a_1787_);
lean_dec_ref(v_a_1786_);
return v_res_1791_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withSetOptionValue_parenthesizer(lean_object* v_p_1792_, lean_object* v_a_1793_, lean_object* v_a_1794_, lean_object* v_a_1795_, lean_object* v_a_1796_){
_start:
{
lean_object* v___x_1798_; 
lean_inc(v_a_1796_);
lean_inc_ref(v_a_1795_);
lean_inc(v_a_1794_);
lean_inc_ref(v_a_1793_);
v___x_1798_ = lean_apply_5(v_p_1792_, v_a_1793_, v_a_1794_, v_a_1795_, v_a_1796_, lean_box(0));
return v___x_1798_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withSetOptionValue_parenthesizer___boxed(lean_object* v_p_1799_, lean_object* v_a_1800_, lean_object* v_a_1801_, lean_object* v_a_1802_, lean_object* v_a_1803_, lean_object* v_a_1804_){
_start:
{
lean_object* v_res_1805_; 
v_res_1805_ = l_Lean_Parser_withSetOptionValue_parenthesizer(v_p_1799_, v_a_1800_, v_a_1801_, v_a_1802_, v_a_1803_);
lean_dec(v_a_1803_);
lean_dec_ref(v_a_1802_);
lean_dec(v_a_1801_);
lean_dec_ref(v_a_1800_);
return v_res_1805_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_dbgTraceState_formatter___redArg(lean_object* v_p_1806_, lean_object* v_a_1807_, lean_object* v_a_1808_, lean_object* v_a_1809_, lean_object* v_a_1810_){
_start:
{
lean_object* v___x_1812_; 
lean_inc(v_a_1810_);
lean_inc_ref(v_a_1809_);
lean_inc(v_a_1808_);
lean_inc_ref(v_a_1807_);
v___x_1812_ = lean_apply_5(v_p_1806_, v_a_1807_, v_a_1808_, v_a_1809_, v_a_1810_, lean_box(0));
return v___x_1812_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_dbgTraceState_formatter___redArg___boxed(lean_object* v_p_1813_, lean_object* v_a_1814_, lean_object* v_a_1815_, lean_object* v_a_1816_, lean_object* v_a_1817_, lean_object* v_a_1818_){
_start:
{
lean_object* v_res_1819_; 
v_res_1819_ = l_Lean_Parser_dbgTraceState_formatter___redArg(v_p_1813_, v_a_1814_, v_a_1815_, v_a_1816_, v_a_1817_);
lean_dec(v_a_1817_);
lean_dec_ref(v_a_1816_);
lean_dec(v_a_1815_);
lean_dec_ref(v_a_1814_);
return v_res_1819_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_dbgTraceState_formatter(lean_object* v_label_1820_, lean_object* v_p_1821_, lean_object* v_a_1822_, lean_object* v_a_1823_, lean_object* v_a_1824_, lean_object* v_a_1825_){
_start:
{
lean_object* v___x_1827_; 
lean_inc(v_a_1825_);
lean_inc_ref(v_a_1824_);
lean_inc(v_a_1823_);
lean_inc_ref(v_a_1822_);
v___x_1827_ = lean_apply_5(v_p_1821_, v_a_1822_, v_a_1823_, v_a_1824_, v_a_1825_, lean_box(0));
return v___x_1827_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_dbgTraceState_formatter___boxed(lean_object* v_label_1828_, lean_object* v_p_1829_, lean_object* v_a_1830_, lean_object* v_a_1831_, lean_object* v_a_1832_, lean_object* v_a_1833_, lean_object* v_a_1834_){
_start:
{
lean_object* v_res_1835_; 
v_res_1835_ = l_Lean_Parser_dbgTraceState_formatter(v_label_1828_, v_p_1829_, v_a_1830_, v_a_1831_, v_a_1832_, v_a_1833_);
lean_dec(v_a_1833_);
lean_dec_ref(v_a_1832_);
lean_dec(v_a_1831_);
lean_dec_ref(v_a_1830_);
lean_dec_ref(v_label_1828_);
return v_res_1835_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_dbgTraceState_parenthesizer___redArg(lean_object* v_p_1836_, lean_object* v_a_1837_, lean_object* v_a_1838_, lean_object* v_a_1839_, lean_object* v_a_1840_){
_start:
{
lean_object* v___x_1842_; 
lean_inc(v_a_1840_);
lean_inc_ref(v_a_1839_);
lean_inc(v_a_1838_);
lean_inc_ref(v_a_1837_);
v___x_1842_ = lean_apply_5(v_p_1836_, v_a_1837_, v_a_1838_, v_a_1839_, v_a_1840_, lean_box(0));
return v___x_1842_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_dbgTraceState_parenthesizer___redArg___boxed(lean_object* v_p_1843_, lean_object* v_a_1844_, lean_object* v_a_1845_, lean_object* v_a_1846_, lean_object* v_a_1847_, lean_object* v_a_1848_){
_start:
{
lean_object* v_res_1849_; 
v_res_1849_ = l_Lean_Parser_dbgTraceState_parenthesizer___redArg(v_p_1843_, v_a_1844_, v_a_1845_, v_a_1846_, v_a_1847_);
lean_dec(v_a_1847_);
lean_dec_ref(v_a_1846_);
lean_dec(v_a_1845_);
lean_dec_ref(v_a_1844_);
return v_res_1849_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_dbgTraceState_parenthesizer(lean_object* v_label_1850_, lean_object* v_p_1851_, lean_object* v_a_1852_, lean_object* v_a_1853_, lean_object* v_a_1854_, lean_object* v_a_1855_){
_start:
{
lean_object* v___x_1857_; 
lean_inc(v_a_1855_);
lean_inc_ref(v_a_1854_);
lean_inc(v_a_1853_);
lean_inc_ref(v_a_1852_);
v___x_1857_ = lean_apply_5(v_p_1851_, v_a_1852_, v_a_1853_, v_a_1854_, v_a_1855_, lean_box(0));
return v___x_1857_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_dbgTraceState_parenthesizer___boxed(lean_object* v_label_1858_, lean_object* v_p_1859_, lean_object* v_a_1860_, lean_object* v_a_1861_, lean_object* v_a_1862_, lean_object* v_a_1863_, lean_object* v_a_1864_){
_start:
{
lean_object* v_res_1865_; 
v_res_1865_ = l_Lean_Parser_dbgTraceState_parenthesizer(v_label_1858_, v_p_1859_, v_a_1860_, v_a_1861_, v_a_1862_, v_a_1863_);
lean_dec(v_a_1863_);
lean_dec_ref(v_a_1862_);
lean_dec(v_a_1861_);
lean_dec_ref(v_a_1860_);
lean_dec_ref(v_label_1858_);
return v_res_1865_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_optional_formatter(lean_object* v_p_1872_, lean_object* v_a_1873_, lean_object* v_a_1874_, lean_object* v_a_1875_, lean_object* v_a_1876_){
_start:
{
lean_object* v___x_1878_; lean_object* v___x_1879_; lean_object* v___x_1880_; lean_object* v___x_1881_; 
v___x_1878_ = ((lean_object*)(l_Lean_Parser_optional_formatter___closed__1));
v___x_1879_ = ((lean_object*)(l_Lean_Parser_optional_formatter___closed__3));
v___x_1880_ = lean_alloc_closure((void*)(l_Lean_Parser_withAntiquotSpliceAndSuffix_formatter___boxed), 8, 3);
lean_closure_set(v___x_1880_, 0, v___x_1878_);
lean_closure_set(v___x_1880_, 1, v_p_1872_);
lean_closure_set(v___x_1880_, 2, v___x_1879_);
v___x_1881_ = l_Lean_PrettyPrinter_Formatter_optionalNoAntiquot_formatter(v___x_1880_, v_a_1873_, v_a_1874_, v_a_1875_, v_a_1876_);
return v___x_1881_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_optional_formatter___boxed(lean_object* v_p_1882_, lean_object* v_a_1883_, lean_object* v_a_1884_, lean_object* v_a_1885_, lean_object* v_a_1886_, lean_object* v_a_1887_){
_start:
{
lean_object* v_res_1888_; 
v_res_1888_ = l_Lean_Parser_optional_formatter(v_p_1882_, v_a_1883_, v_a_1884_, v_a_1885_, v_a_1886_);
lean_dec(v_a_1886_);
lean_dec_ref(v_a_1885_);
lean_dec(v_a_1884_);
lean_dec_ref(v_a_1883_);
return v_res_1888_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_optional_parenthesizer(lean_object* v_p_1891_, lean_object* v_a_1892_, lean_object* v_a_1893_, lean_object* v_a_1894_, lean_object* v_a_1895_){
_start:
{
lean_object* v___x_1897_; lean_object* v___x_1898_; lean_object* v___x_1899_; lean_object* v___x_1900_; 
v___x_1897_ = ((lean_object*)(l_Lean_Parser_optional_formatter___closed__1));
v___x_1898_ = ((lean_object*)(l_Lean_Parser_optional_parenthesizer___closed__0));
v___x_1899_ = lean_alloc_closure((void*)(l_Lean_Parser_withAntiquotSpliceAndSuffix_parenthesizer___boxed), 8, 3);
lean_closure_set(v___x_1899_, 0, v___x_1897_);
lean_closure_set(v___x_1899_, 1, v_p_1891_);
lean_closure_set(v___x_1899_, 2, v___x_1898_);
v___x_1900_ = l_Lean_PrettyPrinter_Parenthesizer_visitArgs(v___x_1899_, v_a_1892_, v_a_1893_, v_a_1894_, v_a_1895_);
return v___x_1900_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_optional_parenthesizer___boxed(lean_object* v_p_1901_, lean_object* v_a_1902_, lean_object* v_a_1903_, lean_object* v_a_1904_, lean_object* v_a_1905_, lean_object* v_a_1906_){
_start:
{
lean_object* v_res_1907_; 
v_res_1907_ = l_Lean_Parser_optional_parenthesizer(v_p_1901_, v_a_1902_, v_a_1903_, v_a_1904_, v_a_1905_);
lean_dec(v_a_1905_);
lean_dec_ref(v_a_1904_);
lean_dec(v_a_1903_);
lean_dec_ref(v_a_1902_);
return v_res_1907_;
}
}
static lean_object* _init_l_Lean_Parser_optional___closed__0(void){
_start:
{
lean_object* v___x_1908_; lean_object* v___x_1909_; 
v___x_1908_ = ((lean_object*)(l_Lean_Parser_optional_formatter___closed__2));
v___x_1909_ = l_Lean_Parser_symbol(v___x_1908_);
return v___x_1909_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_optional(lean_object* v_p_1910_){
_start:
{
lean_object* v___x_1911_; lean_object* v___x_1912_; lean_object* v___x_1913_; lean_object* v___x_1914_; 
v___x_1911_ = ((lean_object*)(l_Lean_Parser_optional_formatter___closed__1));
v___x_1912_ = lean_obj_once(&l_Lean_Parser_optional___closed__0, &l_Lean_Parser_optional___closed__0_once, _init_l_Lean_Parser_optional___closed__0);
v___x_1913_ = l_Lean_Parser_withAntiquotSpliceAndSuffix(v___x_1911_, v_p_1910_, v___x_1912_);
v___x_1914_ = l_Lean_Parser_optionalNoAntiquot(v___x_1913_);
return v___x_1914_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_optional___regBuiltin_Lean_Parser_optional_docString__1(){
_start:
{
lean_object* v___x_1921_; lean_object* v___x_1922_; lean_object* v___x_1923_; 
v___x_1921_ = ((lean_object*)(l___private_Lean_Parser_Extra_0__Lean_Parser_optional___regBuiltin_Lean_Parser_optional_docString__1___closed__0));
v___x_1922_ = ((lean_object*)(l___private_Lean_Parser_Extra_0__Lean_Parser_optional___regBuiltin_Lean_Parser_optional_docString__1___closed__1));
v___x_1923_ = l_Lean_addBuiltinDocString(v___x_1921_, v___x_1922_);
return v___x_1923_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_optional___regBuiltin_Lean_Parser_optional_docString__1___boxed(lean_object* v_a_1924_){
_start:
{
lean_object* v_res_1925_; 
v_res_1925_ = l___private_Lean_Parser_Extra_0__Lean_Parser_optional___regBuiltin_Lean_Parser_optional_docString__1();
return v_res_1925_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_many_formatter(lean_object* v_p_1931_, lean_object* v_a_1932_, lean_object* v_a_1933_, lean_object* v_a_1934_, lean_object* v_a_1935_){
_start:
{
lean_object* v___x_1937_; lean_object* v___x_1938_; lean_object* v___x_1939_; lean_object* v___x_1940_; 
v___x_1937_ = ((lean_object*)(l_Lean_Parser_many_formatter___closed__1));
v___x_1938_ = ((lean_object*)(l_Lean_Parser_many_formatter___closed__2));
v___x_1939_ = lean_alloc_closure((void*)(l_Lean_Parser_withAntiquotSpliceAndSuffix_formatter___boxed), 8, 3);
lean_closure_set(v___x_1939_, 0, v___x_1937_);
lean_closure_set(v___x_1939_, 1, v_p_1931_);
lean_closure_set(v___x_1939_, 2, v___x_1938_);
v___x_1940_ = l_Lean_PrettyPrinter_Formatter_manyNoAntiquot_formatter(v___x_1939_, v_a_1932_, v_a_1933_, v_a_1934_, v_a_1935_);
return v___x_1940_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_many_formatter___boxed(lean_object* v_p_1941_, lean_object* v_a_1942_, lean_object* v_a_1943_, lean_object* v_a_1944_, lean_object* v_a_1945_, lean_object* v_a_1946_){
_start:
{
lean_object* v_res_1947_; 
v_res_1947_ = l_Lean_Parser_many_formatter(v_p_1941_, v_a_1942_, v_a_1943_, v_a_1944_, v_a_1945_);
lean_dec(v_a_1945_);
lean_dec_ref(v_a_1944_);
lean_dec(v_a_1943_);
lean_dec_ref(v_a_1942_);
return v_res_1947_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_many_parenthesizer(lean_object* v_p_1950_, lean_object* v_a_1951_, lean_object* v_a_1952_, lean_object* v_a_1953_, lean_object* v_a_1954_){
_start:
{
lean_object* v___x_1956_; lean_object* v___x_1957_; lean_object* v___x_1958_; lean_object* v___x_1959_; 
v___x_1956_ = ((lean_object*)(l_Lean_Parser_many_formatter___closed__1));
v___x_1957_ = ((lean_object*)(l_Lean_Parser_many_parenthesizer___closed__0));
v___x_1958_ = lean_alloc_closure((void*)(l_Lean_Parser_withAntiquotSpliceAndSuffix_parenthesizer___boxed), 8, 3);
lean_closure_set(v___x_1958_, 0, v___x_1956_);
lean_closure_set(v___x_1958_, 1, v_p_1950_);
lean_closure_set(v___x_1958_, 2, v___x_1957_);
v___x_1959_ = l_Lean_PrettyPrinter_Parenthesizer_manyNoAntiquot_parenthesizer(v___x_1958_, v_a_1951_, v_a_1952_, v_a_1953_, v_a_1954_);
return v___x_1959_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_many_parenthesizer___boxed(lean_object* v_p_1960_, lean_object* v_a_1961_, lean_object* v_a_1962_, lean_object* v_a_1963_, lean_object* v_a_1964_, lean_object* v_a_1965_){
_start:
{
lean_object* v_res_1966_; 
v_res_1966_ = l_Lean_Parser_many_parenthesizer(v_p_1960_, v_a_1961_, v_a_1962_, v_a_1963_, v_a_1964_);
lean_dec(v_a_1964_);
lean_dec_ref(v_a_1963_);
lean_dec(v_a_1962_);
lean_dec_ref(v_a_1961_);
return v_res_1966_;
}
}
static lean_object* _init_l_Lean_Parser_many___closed__0(void){
_start:
{
lean_object* v___x_1967_; lean_object* v___x_1968_; 
v___x_1967_ = ((lean_object*)(l_Lean_Parser_sepByElemParser_formatter___closed__2));
v___x_1968_ = l_Lean_Parser_symbol(v___x_1967_);
return v___x_1968_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_many(lean_object* v_p_1969_){
_start:
{
lean_object* v___x_1970_; lean_object* v___x_1971_; lean_object* v___x_1972_; lean_object* v___x_1973_; 
v___x_1970_ = ((lean_object*)(l_Lean_Parser_many_formatter___closed__1));
v___x_1971_ = lean_obj_once(&l_Lean_Parser_many___closed__0, &l_Lean_Parser_many___closed__0_once, _init_l_Lean_Parser_many___closed__0);
v___x_1972_ = l_Lean_Parser_withAntiquotSpliceAndSuffix(v___x_1970_, v_p_1969_, v___x_1971_);
v___x_1973_ = l_Lean_Parser_manyNoAntiquot(v___x_1972_);
return v___x_1973_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_many___regBuiltin_Lean_Parser_many_docString__1(){
_start:
{
lean_object* v___x_1980_; lean_object* v___x_1981_; lean_object* v___x_1982_; 
v___x_1980_ = ((lean_object*)(l___private_Lean_Parser_Extra_0__Lean_Parser_many___regBuiltin_Lean_Parser_many_docString__1___closed__0));
v___x_1981_ = ((lean_object*)(l___private_Lean_Parser_Extra_0__Lean_Parser_many___regBuiltin_Lean_Parser_many_docString__1___closed__1));
v___x_1982_ = l_Lean_addBuiltinDocString(v___x_1980_, v___x_1981_);
return v___x_1982_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_many___regBuiltin_Lean_Parser_many_docString__1___boxed(lean_object* v_a_1983_){
_start:
{
lean_object* v_res_1984_; 
v_res_1984_ = l___private_Lean_Parser_Extra_0__Lean_Parser_many___regBuiltin_Lean_Parser_many_docString__1();
return v_res_1984_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_many1_formatter(lean_object* v_p_1985_, lean_object* v_a_1986_, lean_object* v_a_1987_, lean_object* v_a_1988_, lean_object* v_a_1989_){
_start:
{
lean_object* v___x_1991_; lean_object* v___x_1992_; lean_object* v___x_1993_; lean_object* v___x_1994_; 
v___x_1991_ = ((lean_object*)(l_Lean_Parser_many_formatter___closed__1));
v___x_1992_ = ((lean_object*)(l_Lean_Parser_many_formatter___closed__2));
v___x_1993_ = lean_alloc_closure((void*)(l_Lean_Parser_withAntiquotSpliceAndSuffix_formatter___boxed), 8, 3);
lean_closure_set(v___x_1993_, 0, v___x_1991_);
lean_closure_set(v___x_1993_, 1, v_p_1985_);
lean_closure_set(v___x_1993_, 2, v___x_1992_);
v___x_1994_ = l_Lean_PrettyPrinter_Formatter_manyNoAntiquot_formatter(v___x_1993_, v_a_1986_, v_a_1987_, v_a_1988_, v_a_1989_);
return v___x_1994_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_many1_formatter___boxed(lean_object* v_p_1995_, lean_object* v_a_1996_, lean_object* v_a_1997_, lean_object* v_a_1998_, lean_object* v_a_1999_, lean_object* v_a_2000_){
_start:
{
lean_object* v_res_2001_; 
v_res_2001_ = l_Lean_Parser_many1_formatter(v_p_1995_, v_a_1996_, v_a_1997_, v_a_1998_, v_a_1999_);
lean_dec(v_a_1999_);
lean_dec_ref(v_a_1998_);
lean_dec(v_a_1997_);
lean_dec_ref(v_a_1996_);
return v_res_2001_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_many1_parenthesizer(lean_object* v_p_2002_, lean_object* v_a_2003_, lean_object* v_a_2004_, lean_object* v_a_2005_, lean_object* v_a_2006_){
_start:
{
lean_object* v___x_2008_; lean_object* v___x_2009_; lean_object* v___x_2010_; lean_object* v___x_2011_; 
v___x_2008_ = ((lean_object*)(l_Lean_Parser_many_formatter___closed__1));
v___x_2009_ = ((lean_object*)(l_Lean_Parser_many_parenthesizer___closed__0));
v___x_2010_ = lean_alloc_closure((void*)(l_Lean_Parser_withAntiquotSpliceAndSuffix_parenthesizer___boxed), 8, 3);
lean_closure_set(v___x_2010_, 0, v___x_2008_);
lean_closure_set(v___x_2010_, 1, v_p_2002_);
lean_closure_set(v___x_2010_, 2, v___x_2009_);
v___x_2011_ = l_Lean_PrettyPrinter_Parenthesizer_manyNoAntiquot_parenthesizer(v___x_2010_, v_a_2003_, v_a_2004_, v_a_2005_, v_a_2006_);
return v___x_2011_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_many1_parenthesizer___boxed(lean_object* v_p_2012_, lean_object* v_a_2013_, lean_object* v_a_2014_, lean_object* v_a_2015_, lean_object* v_a_2016_, lean_object* v_a_2017_){
_start:
{
lean_object* v_res_2018_; 
v_res_2018_ = l_Lean_Parser_many1_parenthesizer(v_p_2012_, v_a_2013_, v_a_2014_, v_a_2015_, v_a_2016_);
lean_dec(v_a_2016_);
lean_dec_ref(v_a_2015_);
lean_dec(v_a_2014_);
lean_dec_ref(v_a_2013_);
return v_res_2018_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_many1(lean_object* v_p_2019_){
_start:
{
lean_object* v___x_2020_; lean_object* v___x_2021_; lean_object* v___x_2022_; lean_object* v___x_2023_; 
v___x_2020_ = ((lean_object*)(l_Lean_Parser_many_formatter___closed__1));
v___x_2021_ = lean_obj_once(&l_Lean_Parser_many___closed__0, &l_Lean_Parser_many___closed__0_once, _init_l_Lean_Parser_many___closed__0);
v___x_2022_ = l_Lean_Parser_withAntiquotSpliceAndSuffix(v___x_2020_, v_p_2019_, v___x_2021_);
v___x_2023_ = l_Lean_Parser_many1NoAntiquot(v___x_2022_);
return v___x_2023_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_many1___regBuiltin_Lean_Parser_many1_docString__1(){
_start:
{
lean_object* v___x_2031_; lean_object* v___x_2032_; lean_object* v___x_2033_; 
v___x_2031_ = ((lean_object*)(l___private_Lean_Parser_Extra_0__Lean_Parser_many1___regBuiltin_Lean_Parser_many1_docString__1___closed__1));
v___x_2032_ = ((lean_object*)(l___private_Lean_Parser_Extra_0__Lean_Parser_many1___regBuiltin_Lean_Parser_many1_docString__1___closed__2));
v___x_2033_ = l_Lean_addBuiltinDocString(v___x_2031_, v___x_2032_);
return v___x_2033_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_many1___regBuiltin_Lean_Parser_many1_docString__1___boxed(lean_object* v_a_2034_){
_start:
{
lean_object* v_res_2035_; 
v_res_2035_ = l___private_Lean_Parser_Extra_0__Lean_Parser_many1___regBuiltin_Lean_Parser_many1_docString__1();
return v_res_2035_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ident_formatter(lean_object* v_a_2046_, lean_object* v_a_2047_, lean_object* v_a_2048_, lean_object* v_a_2049_){
_start:
{
lean_object* v___x_2051_; lean_object* v___x_2052_; lean_object* v___x_2053_; 
v___x_2051_ = ((lean_object*)(l_Lean_Parser_ident_formatter___closed__2));
v___x_2052_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_identNoAntiquot_formatter___boxed), 5, 0);
v___x_2053_ = l_Lean_PrettyPrinter_Formatter_orelse_formatter(v___x_2051_, v___x_2052_, v_a_2046_, v_a_2047_, v_a_2048_, v_a_2049_);
return v___x_2053_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ident_formatter___boxed(lean_object* v_a_2054_, lean_object* v_a_2055_, lean_object* v_a_2056_, lean_object* v_a_2057_, lean_object* v_a_2058_){
_start:
{
lean_object* v_res_2059_; 
v_res_2059_ = l_Lean_Parser_ident_formatter(v_a_2054_, v_a_2055_, v_a_2056_, v_a_2057_);
lean_dec(v_a_2057_);
lean_dec_ref(v_a_2056_);
lean_dec(v_a_2055_);
lean_dec_ref(v_a_2054_);
return v_res_2059_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ident_parenthesizer(lean_object* v_a_2067_, lean_object* v_a_2068_, lean_object* v_a_2069_, lean_object* v_a_2070_){
_start:
{
lean_object* v___x_2072_; lean_object* v___x_2073_; lean_object* v___x_2074_; 
v___x_2072_ = ((lean_object*)(l_Lean_Parser_ident_parenthesizer___closed__0));
v___x_2073_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_identNoAntiquot_parenthesizer___boxed), 5, 0);
v___x_2074_ = l_Lean_PrettyPrinter_Parenthesizer_withAntiquot_parenthesizer(v___x_2072_, v___x_2073_, v_a_2067_, v_a_2068_, v_a_2069_, v_a_2070_);
return v___x_2074_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ident_parenthesizer___boxed(lean_object* v_a_2075_, lean_object* v_a_2076_, lean_object* v_a_2077_, lean_object* v_a_2078_, lean_object* v_a_2079_){
_start:
{
lean_object* v_res_2080_; 
v_res_2080_ = l_Lean_Parser_ident_parenthesizer(v_a_2075_, v_a_2076_, v_a_2077_, v_a_2078_);
lean_dec(v_a_2078_);
lean_dec_ref(v_a_2077_);
lean_dec(v_a_2076_);
lean_dec_ref(v_a_2075_);
return v_res_2080_;
}
}
static lean_object* _init_l_Lean_Parser_ident___closed__0(void){
_start:
{
uint8_t v___x_2081_; uint8_t v___x_2082_; lean_object* v___x_2083_; lean_object* v___x_2084_; lean_object* v___x_2085_; 
v___x_2081_ = 0;
v___x_2082_ = 1;
v___x_2083_ = ((lean_object*)(l_Lean_Parser_ident_formatter___closed__1));
v___x_2084_ = ((lean_object*)(l_Lean_Parser_ident_formatter___closed__0));
v___x_2085_ = l_Lean_Parser_mkAntiquot(v___x_2084_, v___x_2083_, v___x_2082_, v___x_2081_);
return v___x_2085_;
}
}
static lean_object* _init_l_Lean_Parser_ident___closed__1(void){
_start:
{
lean_object* v___x_2086_; lean_object* v___x_2087_; lean_object* v___x_2088_; 
v___x_2086_ = l_Lean_Parser_identNoAntiquot;
v___x_2087_ = lean_obj_once(&l_Lean_Parser_ident___closed__0, &l_Lean_Parser_ident___closed__0_once, _init_l_Lean_Parser_ident___closed__0);
v___x_2088_ = l_Lean_Parser_withAntiquot(v___x_2087_, v___x_2086_);
return v___x_2088_;
}
}
static lean_object* _init_l_Lean_Parser_ident(void){
_start:
{
lean_object* v___x_2089_; 
v___x_2089_ = lean_obj_once(&l_Lean_Parser_ident___closed__1, &l_Lean_Parser_ident___closed__1_once, _init_l_Lean_Parser_ident___closed__1);
return v___x_2089_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_ident___regBuiltin_Lean_Parser_ident_docString__1(){
_start:
{
lean_object* v___x_2096_; lean_object* v___x_2097_; lean_object* v___x_2098_; 
v___x_2096_ = ((lean_object*)(l___private_Lean_Parser_Extra_0__Lean_Parser_ident___regBuiltin_Lean_Parser_ident_docString__1___closed__0));
v___x_2097_ = ((lean_object*)(l___private_Lean_Parser_Extra_0__Lean_Parser_ident___regBuiltin_Lean_Parser_ident_docString__1___closed__1));
v___x_2098_ = l_Lean_addBuiltinDocString(v___x_2096_, v___x_2097_);
return v___x_2098_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_ident___regBuiltin_Lean_Parser_ident_docString__1___boxed(lean_object* v_a_2099_){
_start:
{
lean_object* v_res_2100_; 
v_res_2100_ = l___private_Lean_Parser_Extra_0__Lean_Parser_ident___regBuiltin_Lean_Parser_ident_docString__1();
return v_res_2100_;
}
}
static lean_object* _init_l_Lean_Parser_identWithPartialTrailingDot_formatter___closed__2(void){
_start:
{
lean_object* v___x_2104_; lean_object* v___f_2105_; lean_object* v___x_2106_; 
v___x_2104_ = lean_alloc_closure((void*)(l_Lean_Parser_ident_formatter___boxed), 5, 0);
v___f_2105_ = ((lean_object*)(l_Lean_Parser_mkAntiquot_formatter___closed__0));
v___x_2106_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed), 7, 2);
lean_closure_set(v___x_2106_, 0, v___f_2105_);
lean_closure_set(v___x_2106_, 1, v___x_2104_);
return v___x_2106_;
}
}
static lean_object* _init_l_Lean_Parser_identWithPartialTrailingDot_formatter___closed__3(void){
_start:
{
lean_object* v___x_2107_; lean_object* v___x_2108_; lean_object* v___x_2109_; 
v___x_2107_ = lean_obj_once(&l_Lean_Parser_identWithPartialTrailingDot_formatter___closed__2, &l_Lean_Parser_identWithPartialTrailingDot_formatter___closed__2_once, _init_l_Lean_Parser_identWithPartialTrailingDot_formatter___closed__2);
v___x_2108_ = ((lean_object*)(l_Lean_Parser_identWithPartialTrailingDot_formatter___closed__1));
v___x_2109_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed), 7, 2);
lean_closure_set(v___x_2109_, 0, v___x_2108_);
lean_closure_set(v___x_2109_, 1, v___x_2107_);
return v___x_2109_;
}
}
static lean_object* _init_l_Lean_Parser_identWithPartialTrailingDot_formatter___closed__4(void){
_start:
{
lean_object* v___x_2110_; lean_object* v___f_2111_; lean_object* v___x_2112_; 
v___x_2110_ = lean_obj_once(&l_Lean_Parser_identWithPartialTrailingDot_formatter___closed__3, &l_Lean_Parser_identWithPartialTrailingDot_formatter___closed__3_once, _init_l_Lean_Parser_identWithPartialTrailingDot_formatter___closed__3);
v___f_2111_ = ((lean_object*)(l_Lean_Parser_mkAntiquot_formatter___closed__0));
v___x_2112_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed), 7, 2);
lean_closure_set(v___x_2112_, 0, v___f_2111_);
lean_closure_set(v___x_2112_, 1, v___x_2110_);
return v___x_2112_;
}
}
static lean_object* _init_l_Lean_Parser_identWithPartialTrailingDot_formatter___closed__5(void){
_start:
{
lean_object* v___x_2113_; lean_object* v___x_2114_; 
v___x_2113_ = lean_obj_once(&l_Lean_Parser_identWithPartialTrailingDot_formatter___closed__4, &l_Lean_Parser_identWithPartialTrailingDot_formatter___closed__4_once, _init_l_Lean_Parser_identWithPartialTrailingDot_formatter___closed__4);
v___x_2114_ = lean_alloc_closure((void*)(l_Lean_Parser_optional_formatter___boxed), 6, 1);
lean_closure_set(v___x_2114_, 0, v___x_2113_);
return v___x_2114_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_identWithPartialTrailingDot_formatter(lean_object* v_a_2115_, lean_object* v_a_2116_, lean_object* v_a_2117_, lean_object* v_a_2118_){
_start:
{
lean_object* v___x_2120_; lean_object* v___x_2121_; lean_object* v___x_2122_; 
v___x_2120_ = lean_alloc_closure((void*)(l_Lean_Parser_ident_formatter___boxed), 5, 0);
v___x_2121_ = lean_obj_once(&l_Lean_Parser_identWithPartialTrailingDot_formatter___closed__5, &l_Lean_Parser_identWithPartialTrailingDot_formatter___closed__5_once, _init_l_Lean_Parser_identWithPartialTrailingDot_formatter___closed__5);
v___x_2122_ = l_Lean_PrettyPrinter_Formatter_andthen_formatter(v___x_2120_, v___x_2121_, v_a_2115_, v_a_2116_, v_a_2117_, v_a_2118_);
return v___x_2122_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_identWithPartialTrailingDot_formatter___boxed(lean_object* v_a_2123_, lean_object* v_a_2124_, lean_object* v_a_2125_, lean_object* v_a_2126_, lean_object* v_a_2127_){
_start:
{
lean_object* v_res_2128_; 
v_res_2128_ = l_Lean_Parser_identWithPartialTrailingDot_formatter(v_a_2123_, v_a_2124_, v_a_2125_, v_a_2126_);
lean_dec(v_a_2126_);
lean_dec_ref(v_a_2125_);
lean_dec(v_a_2124_);
lean_dec_ref(v_a_2123_);
return v_res_2128_;
}
}
static lean_object* _init_l_Lean_Parser_identWithPartialTrailingDot_parenthesizer___closed__1(void){
_start:
{
lean_object* v___x_2131_; lean_object* v___x_2132_; lean_object* v___x_2133_; 
v___x_2131_ = lean_alloc_closure((void*)(l_Lean_Parser_ident_parenthesizer___boxed), 5, 0);
v___x_2132_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_checkNoWsBefore_parenthesizer___boxed), 5, 0);
v___x_2133_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed), 7, 2);
lean_closure_set(v___x_2133_, 0, v___x_2132_);
lean_closure_set(v___x_2133_, 1, v___x_2131_);
return v___x_2133_;
}
}
static lean_object* _init_l_Lean_Parser_identWithPartialTrailingDot_parenthesizer___closed__2(void){
_start:
{
lean_object* v___x_2134_; lean_object* v___x_2135_; lean_object* v___x_2136_; 
v___x_2134_ = lean_obj_once(&l_Lean_Parser_identWithPartialTrailingDot_parenthesizer___closed__1, &l_Lean_Parser_identWithPartialTrailingDot_parenthesizer___closed__1_once, _init_l_Lean_Parser_identWithPartialTrailingDot_parenthesizer___closed__1);
v___x_2135_ = ((lean_object*)(l_Lean_Parser_identWithPartialTrailingDot_parenthesizer___closed__0));
v___x_2136_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed), 7, 2);
lean_closure_set(v___x_2136_, 0, v___x_2135_);
lean_closure_set(v___x_2136_, 1, v___x_2134_);
return v___x_2136_;
}
}
static lean_object* _init_l_Lean_Parser_identWithPartialTrailingDot_parenthesizer___closed__3(void){
_start:
{
lean_object* v___x_2137_; lean_object* v___x_2138_; lean_object* v___x_2139_; 
v___x_2137_ = lean_obj_once(&l_Lean_Parser_identWithPartialTrailingDot_parenthesizer___closed__2, &l_Lean_Parser_identWithPartialTrailingDot_parenthesizer___closed__2_once, _init_l_Lean_Parser_identWithPartialTrailingDot_parenthesizer___closed__2);
v___x_2138_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_checkNoWsBefore_parenthesizer___boxed), 5, 0);
v___x_2139_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed), 7, 2);
lean_closure_set(v___x_2139_, 0, v___x_2138_);
lean_closure_set(v___x_2139_, 1, v___x_2137_);
return v___x_2139_;
}
}
static lean_object* _init_l_Lean_Parser_identWithPartialTrailingDot_parenthesizer___closed__4(void){
_start:
{
lean_object* v___x_2140_; lean_object* v___x_2141_; 
v___x_2140_ = lean_obj_once(&l_Lean_Parser_identWithPartialTrailingDot_parenthesizer___closed__3, &l_Lean_Parser_identWithPartialTrailingDot_parenthesizer___closed__3_once, _init_l_Lean_Parser_identWithPartialTrailingDot_parenthesizer___closed__3);
v___x_2141_ = lean_alloc_closure((void*)(l_Lean_Parser_optional_parenthesizer___boxed), 6, 1);
lean_closure_set(v___x_2141_, 0, v___x_2140_);
return v___x_2141_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_identWithPartialTrailingDot_parenthesizer(lean_object* v_a_2142_, lean_object* v_a_2143_, lean_object* v_a_2144_, lean_object* v_a_2145_){
_start:
{
lean_object* v___x_2147_; lean_object* v___x_2148_; lean_object* v___x_2149_; 
v___x_2147_ = lean_alloc_closure((void*)(l_Lean_Parser_ident_parenthesizer___boxed), 5, 0);
v___x_2148_ = lean_obj_once(&l_Lean_Parser_identWithPartialTrailingDot_parenthesizer___closed__4, &l_Lean_Parser_identWithPartialTrailingDot_parenthesizer___closed__4_once, _init_l_Lean_Parser_identWithPartialTrailingDot_parenthesizer___closed__4);
v___x_2149_ = l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer(v___x_2147_, v___x_2148_, v_a_2142_, v_a_2143_, v_a_2144_, v_a_2145_);
return v___x_2149_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_identWithPartialTrailingDot_parenthesizer___boxed(lean_object* v_a_2150_, lean_object* v_a_2151_, lean_object* v_a_2152_, lean_object* v_a_2153_, lean_object* v_a_2154_){
_start:
{
lean_object* v_res_2155_; 
v_res_2155_ = l_Lean_Parser_identWithPartialTrailingDot_parenthesizer(v_a_2150_, v_a_2151_, v_a_2152_, v_a_2153_);
lean_dec(v_a_2153_);
lean_dec_ref(v_a_2152_);
lean_dec(v_a_2151_);
lean_dec_ref(v_a_2150_);
return v_res_2155_;
}
}
static lean_object* _init_l_Lean_Parser_identWithPartialTrailingDot___closed__1(void){
_start:
{
lean_object* v___x_2157_; lean_object* v___x_2158_; 
v___x_2157_ = ((lean_object*)(l_Lean_Parser_identWithPartialTrailingDot___closed__0));
v___x_2158_ = l_Lean_Parser_checkNoWsBefore(v___x_2157_);
return v___x_2158_;
}
}
static lean_object* _init_l_Lean_Parser_identWithPartialTrailingDot___closed__2(void){
_start:
{
lean_object* v___x_2159_; lean_object* v___x_2160_; 
v___x_2159_ = ((lean_object*)(l_Lean_Parser_identWithPartialTrailingDot_formatter___closed__0));
v___x_2160_ = l_Lean_Parser_symbol(v___x_2159_);
return v___x_2160_;
}
}
static lean_object* _init_l_Lean_Parser_identWithPartialTrailingDot___closed__3(void){
_start:
{
lean_object* v___x_2161_; lean_object* v___x_2162_; lean_object* v___x_2163_; 
v___x_2161_ = l_Lean_Parser_ident;
v___x_2162_ = lean_obj_once(&l_Lean_Parser_identWithPartialTrailingDot___closed__1, &l_Lean_Parser_identWithPartialTrailingDot___closed__1_once, _init_l_Lean_Parser_identWithPartialTrailingDot___closed__1);
v___x_2163_ = l_Lean_Parser_andthen(v___x_2162_, v___x_2161_);
return v___x_2163_;
}
}
static lean_object* _init_l_Lean_Parser_identWithPartialTrailingDot___closed__4(void){
_start:
{
lean_object* v___x_2164_; lean_object* v___x_2165_; lean_object* v___x_2166_; 
v___x_2164_ = lean_obj_once(&l_Lean_Parser_identWithPartialTrailingDot___closed__3, &l_Lean_Parser_identWithPartialTrailingDot___closed__3_once, _init_l_Lean_Parser_identWithPartialTrailingDot___closed__3);
v___x_2165_ = lean_obj_once(&l_Lean_Parser_identWithPartialTrailingDot___closed__2, &l_Lean_Parser_identWithPartialTrailingDot___closed__2_once, _init_l_Lean_Parser_identWithPartialTrailingDot___closed__2);
v___x_2166_ = l_Lean_Parser_andthen(v___x_2165_, v___x_2164_);
return v___x_2166_;
}
}
static lean_object* _init_l_Lean_Parser_identWithPartialTrailingDot___closed__5(void){
_start:
{
lean_object* v___x_2167_; lean_object* v___x_2168_; lean_object* v___x_2169_; 
v___x_2167_ = lean_obj_once(&l_Lean_Parser_identWithPartialTrailingDot___closed__4, &l_Lean_Parser_identWithPartialTrailingDot___closed__4_once, _init_l_Lean_Parser_identWithPartialTrailingDot___closed__4);
v___x_2168_ = lean_obj_once(&l_Lean_Parser_identWithPartialTrailingDot___closed__1, &l_Lean_Parser_identWithPartialTrailingDot___closed__1_once, _init_l_Lean_Parser_identWithPartialTrailingDot___closed__1);
v___x_2169_ = l_Lean_Parser_andthen(v___x_2168_, v___x_2167_);
return v___x_2169_;
}
}
static lean_object* _init_l_Lean_Parser_identWithPartialTrailingDot___closed__6(void){
_start:
{
lean_object* v___x_2170_; lean_object* v___x_2171_; 
v___x_2170_ = lean_obj_once(&l_Lean_Parser_identWithPartialTrailingDot___closed__5, &l_Lean_Parser_identWithPartialTrailingDot___closed__5_once, _init_l_Lean_Parser_identWithPartialTrailingDot___closed__5);
v___x_2171_ = l_Lean_Parser_optional(v___x_2170_);
return v___x_2171_;
}
}
static lean_object* _init_l_Lean_Parser_identWithPartialTrailingDot___closed__7(void){
_start:
{
lean_object* v___x_2172_; lean_object* v___x_2173_; lean_object* v___x_2174_; 
v___x_2172_ = lean_obj_once(&l_Lean_Parser_identWithPartialTrailingDot___closed__6, &l_Lean_Parser_identWithPartialTrailingDot___closed__6_once, _init_l_Lean_Parser_identWithPartialTrailingDot___closed__6);
v___x_2173_ = l_Lean_Parser_ident;
v___x_2174_ = l_Lean_Parser_andthen(v___x_2173_, v___x_2172_);
return v___x_2174_;
}
}
static lean_object* _init_l_Lean_Parser_identWithPartialTrailingDot(void){
_start:
{
lean_object* v___x_2175_; 
v___x_2175_ = lean_obj_once(&l_Lean_Parser_identWithPartialTrailingDot___closed__7, &l_Lean_Parser_identWithPartialTrailingDot___closed__7_once, _init_l_Lean_Parser_identWithPartialTrailingDot___closed__7);
return v___x_2175_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_rawIdent_formatter(lean_object* v_a_2176_, lean_object* v_a_2177_, lean_object* v_a_2178_, lean_object* v_a_2179_){
_start:
{
lean_object* v___x_2181_; lean_object* v___x_2182_; lean_object* v___x_2183_; 
v___x_2181_ = ((lean_object*)(l_Lean_Parser_ident_formatter___closed__2));
v___x_2182_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_rawIdentNoAntiquot_formatter___boxed), 5, 0);
v___x_2183_ = l_Lean_PrettyPrinter_Formatter_orelse_formatter(v___x_2181_, v___x_2182_, v_a_2176_, v_a_2177_, v_a_2178_, v_a_2179_);
return v___x_2183_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_rawIdent_formatter___boxed(lean_object* v_a_2184_, lean_object* v_a_2185_, lean_object* v_a_2186_, lean_object* v_a_2187_, lean_object* v_a_2188_){
_start:
{
lean_object* v_res_2189_; 
v_res_2189_ = l_Lean_Parser_rawIdent_formatter(v_a_2184_, v_a_2185_, v_a_2186_, v_a_2187_);
lean_dec(v_a_2187_);
lean_dec_ref(v_a_2186_);
lean_dec(v_a_2185_);
lean_dec_ref(v_a_2184_);
return v_res_2189_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_rawIdent_parenthesizer___lam__0(lean_object* v___y_2190_, lean_object* v___y_2191_, lean_object* v___y_2192_, lean_object* v___y_2193_){
_start:
{
lean_object* v___x_2195_; 
v___x_2195_ = l_Lean_PrettyPrinter_Parenthesizer_visitToken___redArg(v___y_2191_);
return v___x_2195_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_rawIdent_parenthesizer___lam__0___boxed(lean_object* v___y_2196_, lean_object* v___y_2197_, lean_object* v___y_2198_, lean_object* v___y_2199_, lean_object* v___y_2200_){
_start:
{
lean_object* v_res_2201_; 
v_res_2201_ = l_Lean_Parser_rawIdent_parenthesizer___lam__0(v___y_2196_, v___y_2197_, v___y_2198_, v___y_2199_);
lean_dec(v___y_2199_);
lean_dec_ref(v___y_2198_);
lean_dec(v___y_2197_);
lean_dec_ref(v___y_2196_);
return v_res_2201_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_rawIdent_parenthesizer(lean_object* v_a_2203_, lean_object* v_a_2204_, lean_object* v_a_2205_, lean_object* v_a_2206_){
_start:
{
lean_object* v___f_2208_; lean_object* v___x_2209_; lean_object* v___x_2210_; 
v___f_2208_ = ((lean_object*)(l_Lean_Parser_rawIdent_parenthesizer___closed__0));
v___x_2209_ = ((lean_object*)(l_Lean_Parser_ident_parenthesizer___closed__0));
v___x_2210_ = l_Lean_PrettyPrinter_Parenthesizer_withAntiquot_parenthesizer(v___x_2209_, v___f_2208_, v_a_2203_, v_a_2204_, v_a_2205_, v_a_2206_);
return v___x_2210_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_rawIdent_parenthesizer___boxed(lean_object* v_a_2211_, lean_object* v_a_2212_, lean_object* v_a_2213_, lean_object* v_a_2214_, lean_object* v_a_2215_){
_start:
{
lean_object* v_res_2216_; 
v_res_2216_ = l_Lean_Parser_rawIdent_parenthesizer(v_a_2211_, v_a_2212_, v_a_2213_, v_a_2214_);
lean_dec(v_a_2214_);
lean_dec_ref(v_a_2213_);
lean_dec(v_a_2212_);
lean_dec_ref(v_a_2211_);
return v_res_2216_;
}
}
static lean_object* _init_l_Lean_Parser_rawIdent___closed__0(void){
_start:
{
lean_object* v___x_2217_; lean_object* v___x_2218_; lean_object* v___x_2219_; 
v___x_2217_ = l_Lean_Parser_rawIdentNoAntiquot;
v___x_2218_ = lean_obj_once(&l_Lean_Parser_ident___closed__0, &l_Lean_Parser_ident___closed__0_once, _init_l_Lean_Parser_ident___closed__0);
v___x_2219_ = l_Lean_Parser_withAntiquot(v___x_2218_, v___x_2217_);
return v___x_2219_;
}
}
static lean_object* _init_l_Lean_Parser_rawIdent(void){
_start:
{
lean_object* v___x_2220_; 
v___x_2220_ = lean_obj_once(&l_Lean_Parser_rawIdent___closed__0, &l_Lean_Parser_rawIdent___closed__0_once, _init_l_Lean_Parser_rawIdent___closed__0);
return v___x_2220_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_hygieneInfo_formatter(lean_object* v_a_2230_, lean_object* v_a_2231_, lean_object* v_a_2232_, lean_object* v_a_2233_){
_start:
{
lean_object* v___f_2235_; lean_object* v___x_2236_; lean_object* v___x_2237_; 
v___f_2235_ = ((lean_object*)(l_Lean_Parser_mkAntiquot_formatter___closed__1));
v___x_2236_ = ((lean_object*)(l_Lean_Parser_hygieneInfo_formatter___closed__2));
v___x_2237_ = l_Lean_PrettyPrinter_Formatter_orelse_formatter(v___x_2236_, v___f_2235_, v_a_2230_, v_a_2231_, v_a_2232_, v_a_2233_);
return v___x_2237_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_hygieneInfo_formatter___boxed(lean_object* v_a_2238_, lean_object* v_a_2239_, lean_object* v_a_2240_, lean_object* v_a_2241_, lean_object* v_a_2242_){
_start:
{
lean_object* v_res_2243_; 
v_res_2243_ = l_Lean_Parser_hygieneInfo_formatter(v_a_2238_, v_a_2239_, v_a_2240_, v_a_2241_);
lean_dec(v_a_2241_);
lean_dec_ref(v_a_2240_);
lean_dec(v_a_2239_);
lean_dec_ref(v_a_2238_);
return v_res_2243_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_hygieneInfo_parenthesizer(lean_object* v_a_2250_, lean_object* v_a_2251_, lean_object* v_a_2252_, lean_object* v_a_2253_){
_start:
{
lean_object* v___f_2255_; lean_object* v___x_2256_; lean_object* v___x_2257_; 
v___f_2255_ = ((lean_object*)(l_Lean_Parser_mkAntiquot_parenthesizer___closed__0));
v___x_2256_ = ((lean_object*)(l_Lean_Parser_hygieneInfo_parenthesizer___closed__0));
v___x_2257_ = l_Lean_PrettyPrinter_Parenthesizer_withAntiquot_parenthesizer(v___x_2256_, v___f_2255_, v_a_2250_, v_a_2251_, v_a_2252_, v_a_2253_);
return v___x_2257_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_hygieneInfo_parenthesizer___boxed(lean_object* v_a_2258_, lean_object* v_a_2259_, lean_object* v_a_2260_, lean_object* v_a_2261_, lean_object* v_a_2262_){
_start:
{
lean_object* v_res_2263_; 
v_res_2263_ = l_Lean_Parser_hygieneInfo_parenthesizer(v_a_2258_, v_a_2259_, v_a_2260_, v_a_2261_);
lean_dec(v_a_2261_);
lean_dec_ref(v_a_2260_);
lean_dec(v_a_2259_);
lean_dec_ref(v_a_2258_);
return v_res_2263_;
}
}
static lean_object* _init_l_Lean_Parser_hygieneInfo___closed__0(void){
_start:
{
uint8_t v___x_2264_; lean_object* v___x_2265_; lean_object* v___x_2266_; lean_object* v___x_2267_; 
v___x_2264_ = 0;
v___x_2265_ = ((lean_object*)(l_Lean_Parser_hygieneInfo_formatter___closed__1));
v___x_2266_ = ((lean_object*)(l_Lean_Parser_hygieneInfo_formatter___closed__0));
v___x_2267_ = l_Lean_Parser_mkAntiquot(v___x_2266_, v___x_2265_, v___x_2264_, v___x_2264_);
return v___x_2267_;
}
}
static lean_object* _init_l_Lean_Parser_hygieneInfo___closed__1(void){
_start:
{
lean_object* v___x_2268_; lean_object* v___x_2269_; lean_object* v___x_2270_; 
v___x_2268_ = l_Lean_Parser_hygieneInfoNoAntiquot;
v___x_2269_ = lean_obj_once(&l_Lean_Parser_hygieneInfo___closed__0, &l_Lean_Parser_hygieneInfo___closed__0_once, _init_l_Lean_Parser_hygieneInfo___closed__0);
v___x_2270_ = l_Lean_Parser_withAntiquot(v___x_2269_, v___x_2268_);
return v___x_2270_;
}
}
static lean_object* _init_l_Lean_Parser_hygieneInfo(void){
_start:
{
lean_object* v___x_2271_; 
v___x_2271_ = lean_obj_once(&l_Lean_Parser_hygieneInfo___closed__1, &l_Lean_Parser_hygieneInfo___closed__1_once, _init_l_Lean_Parser_hygieneInfo___closed__1);
return v___x_2271_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_hygieneInfo___regBuiltin_Lean_Parser_hygieneInfo_docString__1(){
_start:
{
lean_object* v___x_2278_; lean_object* v___x_2279_; lean_object* v___x_2280_; 
v___x_2278_ = ((lean_object*)(l___private_Lean_Parser_Extra_0__Lean_Parser_hygieneInfo___regBuiltin_Lean_Parser_hygieneInfo_docString__1___closed__0));
v___x_2279_ = ((lean_object*)(l___private_Lean_Parser_Extra_0__Lean_Parser_hygieneInfo___regBuiltin_Lean_Parser_hygieneInfo_docString__1___closed__1));
v___x_2280_ = l_Lean_addBuiltinDocString(v___x_2278_, v___x_2279_);
return v___x_2280_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_hygieneInfo___regBuiltin_Lean_Parser_hygieneInfo_docString__1___boxed(lean_object* v_a_2281_){
_start:
{
lean_object* v_res_2282_; 
v_res_2282_ = l___private_Lean_Parser_Extra_0__Lean_Parser_hygieneInfo___regBuiltin_Lean_Parser_hygieneInfo_docString__1();
return v_res_2282_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_numLit_formatter(lean_object* v_a_2293_, lean_object* v_a_2294_, lean_object* v_a_2295_, lean_object* v_a_2296_){
_start:
{
lean_object* v___x_2298_; lean_object* v___x_2299_; lean_object* v___x_2300_; 
v___x_2298_ = ((lean_object*)(l_Lean_Parser_numLit_formatter___closed__2));
v___x_2299_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_numLitNoAntiquot_formatter___boxed), 5, 0);
v___x_2300_ = l_Lean_PrettyPrinter_Formatter_orelse_formatter(v___x_2298_, v___x_2299_, v_a_2293_, v_a_2294_, v_a_2295_, v_a_2296_);
return v___x_2300_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_numLit_formatter___boxed(lean_object* v_a_2301_, lean_object* v_a_2302_, lean_object* v_a_2303_, lean_object* v_a_2304_, lean_object* v_a_2305_){
_start:
{
lean_object* v_res_2306_; 
v_res_2306_ = l_Lean_Parser_numLit_formatter(v_a_2301_, v_a_2302_, v_a_2303_, v_a_2304_);
lean_dec(v_a_2304_);
lean_dec_ref(v_a_2303_);
lean_dec(v_a_2302_);
lean_dec_ref(v_a_2301_);
return v_res_2306_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_numLit_parenthesizer(lean_object* v_a_2314_, lean_object* v_a_2315_, lean_object* v_a_2316_, lean_object* v_a_2317_){
_start:
{
lean_object* v___f_2319_; lean_object* v___x_2320_; lean_object* v___x_2321_; 
v___f_2319_ = ((lean_object*)(l_Lean_Parser_rawIdent_parenthesizer___closed__0));
v___x_2320_ = ((lean_object*)(l_Lean_Parser_numLit_parenthesizer___closed__0));
v___x_2321_ = l_Lean_PrettyPrinter_Parenthesizer_withAntiquot_parenthesizer(v___x_2320_, v___f_2319_, v_a_2314_, v_a_2315_, v_a_2316_, v_a_2317_);
return v___x_2321_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_numLit_parenthesizer___boxed(lean_object* v_a_2322_, lean_object* v_a_2323_, lean_object* v_a_2324_, lean_object* v_a_2325_, lean_object* v_a_2326_){
_start:
{
lean_object* v_res_2327_; 
v_res_2327_ = l_Lean_Parser_numLit_parenthesizer(v_a_2322_, v_a_2323_, v_a_2324_, v_a_2325_);
lean_dec(v_a_2325_);
lean_dec_ref(v_a_2324_);
lean_dec(v_a_2323_);
lean_dec_ref(v_a_2322_);
return v_res_2327_;
}
}
static lean_object* _init_l_Lean_Parser_numLit___closed__0(void){
_start:
{
uint8_t v___x_2328_; uint8_t v___x_2329_; lean_object* v___x_2330_; lean_object* v___x_2331_; lean_object* v___x_2332_; 
v___x_2328_ = 0;
v___x_2329_ = 1;
v___x_2330_ = ((lean_object*)(l_Lean_Parser_numLit_formatter___closed__1));
v___x_2331_ = ((lean_object*)(l_Lean_Parser_numLit_formatter___closed__0));
v___x_2332_ = l_Lean_Parser_mkAntiquot(v___x_2331_, v___x_2330_, v___x_2329_, v___x_2328_);
return v___x_2332_;
}
}
static lean_object* _init_l_Lean_Parser_numLit___closed__1(void){
_start:
{
lean_object* v___x_2333_; lean_object* v___x_2334_; lean_object* v___x_2335_; 
v___x_2333_ = l_Lean_Parser_numLitNoAntiquot;
v___x_2334_ = lean_obj_once(&l_Lean_Parser_numLit___closed__0, &l_Lean_Parser_numLit___closed__0_once, _init_l_Lean_Parser_numLit___closed__0);
v___x_2335_ = l_Lean_Parser_withAntiquot(v___x_2334_, v___x_2333_);
return v___x_2335_;
}
}
static lean_object* _init_l_Lean_Parser_numLit(void){
_start:
{
lean_object* v___x_2336_; 
v___x_2336_ = lean_obj_once(&l_Lean_Parser_numLit___closed__1, &l_Lean_Parser_numLit___closed__1_once, _init_l_Lean_Parser_numLit___closed__1);
return v___x_2336_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_numLit___regBuiltin_Lean_Parser_numLit_docString__1(){
_start:
{
lean_object* v___x_2344_; lean_object* v___x_2345_; lean_object* v___x_2346_; 
v___x_2344_ = ((lean_object*)(l___private_Lean_Parser_Extra_0__Lean_Parser_numLit___regBuiltin_Lean_Parser_numLit_docString__1___closed__1));
v___x_2345_ = ((lean_object*)(l___private_Lean_Parser_Extra_0__Lean_Parser_numLit___regBuiltin_Lean_Parser_numLit_docString__1___closed__2));
v___x_2346_ = l_Lean_addBuiltinDocString(v___x_2344_, v___x_2345_);
return v___x_2346_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_numLit___regBuiltin_Lean_Parser_numLit_docString__1___boxed(lean_object* v_a_2347_){
_start:
{
lean_object* v_res_2348_; 
v_res_2348_ = l___private_Lean_Parser_Extra_0__Lean_Parser_numLit___regBuiltin_Lean_Parser_numLit_docString__1();
return v_res_2348_;
}
}
static lean_object* _init_l_Lean_Parser_hexnum___closed__2(void){
_start:
{
uint8_t v___x_2352_; uint8_t v___x_2353_; lean_object* v___x_2354_; lean_object* v___x_2355_; lean_object* v___x_2356_; 
v___x_2352_ = 0;
v___x_2353_ = 1;
v___x_2354_ = ((lean_object*)(l_Lean_Parser_hexnum___closed__1));
v___x_2355_ = ((lean_object*)(l_Lean_Parser_hexnum___closed__0));
v___x_2356_ = l_Lean_Parser_mkAntiquot(v___x_2355_, v___x_2354_, v___x_2353_, v___x_2352_);
return v___x_2356_;
}
}
static lean_object* _init_l_Lean_Parser_hexnum___closed__3(void){
_start:
{
lean_object* v___x_2357_; lean_object* v___x_2358_; lean_object* v___x_2359_; 
v___x_2357_ = l_Lean_Parser_hexnumNoAntiquot;
v___x_2358_ = lean_obj_once(&l_Lean_Parser_hexnum___closed__2, &l_Lean_Parser_hexnum___closed__2_once, _init_l_Lean_Parser_hexnum___closed__2);
v___x_2359_ = l_Lean_Parser_withAntiquot(v___x_2358_, v___x_2357_);
return v___x_2359_;
}
}
static lean_object* _init_l_Lean_Parser_hexnum(void){
_start:
{
lean_object* v___x_2360_; 
v___x_2360_ = lean_obj_once(&l_Lean_Parser_hexnum___closed__3, &l_Lean_Parser_hexnum___closed__3_once, _init_l_Lean_Parser_hexnum___closed__3);
return v___x_2360_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_hexnum___regBuiltin_Lean_Parser_hexnum_docString__1(){
_start:
{
lean_object* v___x_2367_; lean_object* v___x_2368_; lean_object* v___x_2369_; 
v___x_2367_ = ((lean_object*)(l___private_Lean_Parser_Extra_0__Lean_Parser_hexnum___regBuiltin_Lean_Parser_hexnum_docString__1___closed__0));
v___x_2368_ = ((lean_object*)(l___private_Lean_Parser_Extra_0__Lean_Parser_hexnum___regBuiltin_Lean_Parser_hexnum_docString__1___closed__1));
v___x_2369_ = l_Lean_addBuiltinDocString(v___x_2367_, v___x_2368_);
return v___x_2369_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_hexnum___regBuiltin_Lean_Parser_hexnum_docString__1___boxed(lean_object* v_a_2370_){
_start:
{
lean_object* v_res_2371_; 
v_res_2371_ = l___private_Lean_Parser_Extra_0__Lean_Parser_hexnum___regBuiltin_Lean_Parser_hexnum_docString__1();
return v_res_2371_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_scientificLit_formatter(lean_object* v_a_2382_, lean_object* v_a_2383_, lean_object* v_a_2384_, lean_object* v_a_2385_){
_start:
{
lean_object* v___x_2387_; lean_object* v___x_2388_; lean_object* v___x_2389_; 
v___x_2387_ = ((lean_object*)(l_Lean_Parser_scientificLit_formatter___closed__2));
v___x_2388_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_scientificLitNoAntiquot_formatter___boxed), 5, 0);
v___x_2389_ = l_Lean_PrettyPrinter_Formatter_orelse_formatter(v___x_2387_, v___x_2388_, v_a_2382_, v_a_2383_, v_a_2384_, v_a_2385_);
return v___x_2389_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_scientificLit_formatter___boxed(lean_object* v_a_2390_, lean_object* v_a_2391_, lean_object* v_a_2392_, lean_object* v_a_2393_, lean_object* v_a_2394_){
_start:
{
lean_object* v_res_2395_; 
v_res_2395_ = l_Lean_Parser_scientificLit_formatter(v_a_2390_, v_a_2391_, v_a_2392_, v_a_2393_);
lean_dec(v_a_2393_);
lean_dec_ref(v_a_2392_);
lean_dec(v_a_2391_);
lean_dec_ref(v_a_2390_);
return v_res_2395_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_scientificLit_parenthesizer(lean_object* v_a_2403_, lean_object* v_a_2404_, lean_object* v_a_2405_, lean_object* v_a_2406_){
_start:
{
lean_object* v___f_2408_; lean_object* v___x_2409_; lean_object* v___x_2410_; 
v___f_2408_ = ((lean_object*)(l_Lean_Parser_rawIdent_parenthesizer___closed__0));
v___x_2409_ = ((lean_object*)(l_Lean_Parser_scientificLit_parenthesizer___closed__0));
v___x_2410_ = l_Lean_PrettyPrinter_Parenthesizer_withAntiquot_parenthesizer(v___x_2409_, v___f_2408_, v_a_2403_, v_a_2404_, v_a_2405_, v_a_2406_);
return v___x_2410_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_scientificLit_parenthesizer___boxed(lean_object* v_a_2411_, lean_object* v_a_2412_, lean_object* v_a_2413_, lean_object* v_a_2414_, lean_object* v_a_2415_){
_start:
{
lean_object* v_res_2416_; 
v_res_2416_ = l_Lean_Parser_scientificLit_parenthesizer(v_a_2411_, v_a_2412_, v_a_2413_, v_a_2414_);
lean_dec(v_a_2414_);
lean_dec_ref(v_a_2413_);
lean_dec(v_a_2412_);
lean_dec_ref(v_a_2411_);
return v_res_2416_;
}
}
static lean_object* _init_l_Lean_Parser_scientificLit___closed__0(void){
_start:
{
uint8_t v___x_2417_; uint8_t v___x_2418_; lean_object* v___x_2419_; lean_object* v___x_2420_; lean_object* v___x_2421_; 
v___x_2417_ = 0;
v___x_2418_ = 1;
v___x_2419_ = ((lean_object*)(l_Lean_Parser_scientificLit_formatter___closed__1));
v___x_2420_ = ((lean_object*)(l_Lean_Parser_scientificLit_formatter___closed__0));
v___x_2421_ = l_Lean_Parser_mkAntiquot(v___x_2420_, v___x_2419_, v___x_2418_, v___x_2417_);
return v___x_2421_;
}
}
static lean_object* _init_l_Lean_Parser_scientificLit___closed__1(void){
_start:
{
lean_object* v___x_2422_; lean_object* v___x_2423_; lean_object* v___x_2424_; 
v___x_2422_ = l_Lean_Parser_scientificLitNoAntiquot;
v___x_2423_ = lean_obj_once(&l_Lean_Parser_scientificLit___closed__0, &l_Lean_Parser_scientificLit___closed__0_once, _init_l_Lean_Parser_scientificLit___closed__0);
v___x_2424_ = l_Lean_Parser_withAntiquot(v___x_2423_, v___x_2422_);
return v___x_2424_;
}
}
static lean_object* _init_l_Lean_Parser_scientificLit(void){
_start:
{
lean_object* v___x_2425_; 
v___x_2425_ = lean_obj_once(&l_Lean_Parser_scientificLit___closed__1, &l_Lean_Parser_scientificLit___closed__1_once, _init_l_Lean_Parser_scientificLit___closed__1);
return v___x_2425_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_scientificLit___regBuiltin_Lean_Parser_scientificLit_docString__1(){
_start:
{
lean_object* v___x_2433_; lean_object* v___x_2434_; lean_object* v___x_2435_; 
v___x_2433_ = ((lean_object*)(l___private_Lean_Parser_Extra_0__Lean_Parser_scientificLit___regBuiltin_Lean_Parser_scientificLit_docString__1___closed__1));
v___x_2434_ = ((lean_object*)(l___private_Lean_Parser_Extra_0__Lean_Parser_scientificLit___regBuiltin_Lean_Parser_scientificLit_docString__1___closed__2));
v___x_2435_ = l_Lean_addBuiltinDocString(v___x_2433_, v___x_2434_);
return v___x_2435_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_scientificLit___regBuiltin_Lean_Parser_scientificLit_docString__1___boxed(lean_object* v_a_2436_){
_start:
{
lean_object* v_res_2437_; 
v_res_2437_ = l___private_Lean_Parser_Extra_0__Lean_Parser_scientificLit___regBuiltin_Lean_Parser_scientificLit_docString__1();
return v_res_2437_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_strLit_formatter(lean_object* v_a_2448_, lean_object* v_a_2449_, lean_object* v_a_2450_, lean_object* v_a_2451_){
_start:
{
lean_object* v___x_2453_; lean_object* v___x_2454_; lean_object* v___x_2455_; 
v___x_2453_ = ((lean_object*)(l_Lean_Parser_strLit_formatter___closed__2));
v___x_2454_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_strLitNoAntiquot_formatter___boxed), 5, 0);
v___x_2455_ = l_Lean_PrettyPrinter_Formatter_orelse_formatter(v___x_2453_, v___x_2454_, v_a_2448_, v_a_2449_, v_a_2450_, v_a_2451_);
return v___x_2455_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_strLit_formatter___boxed(lean_object* v_a_2456_, lean_object* v_a_2457_, lean_object* v_a_2458_, lean_object* v_a_2459_, lean_object* v_a_2460_){
_start:
{
lean_object* v_res_2461_; 
v_res_2461_ = l_Lean_Parser_strLit_formatter(v_a_2456_, v_a_2457_, v_a_2458_, v_a_2459_);
lean_dec(v_a_2459_);
lean_dec_ref(v_a_2458_);
lean_dec(v_a_2457_);
lean_dec_ref(v_a_2456_);
return v_res_2461_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_strLit_parenthesizer(lean_object* v_a_2469_, lean_object* v_a_2470_, lean_object* v_a_2471_, lean_object* v_a_2472_){
_start:
{
lean_object* v___f_2474_; lean_object* v___x_2475_; lean_object* v___x_2476_; 
v___f_2474_ = ((lean_object*)(l_Lean_Parser_rawIdent_parenthesizer___closed__0));
v___x_2475_ = ((lean_object*)(l_Lean_Parser_strLit_parenthesizer___closed__0));
v___x_2476_ = l_Lean_PrettyPrinter_Parenthesizer_withAntiquot_parenthesizer(v___x_2475_, v___f_2474_, v_a_2469_, v_a_2470_, v_a_2471_, v_a_2472_);
return v___x_2476_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_strLit_parenthesizer___boxed(lean_object* v_a_2477_, lean_object* v_a_2478_, lean_object* v_a_2479_, lean_object* v_a_2480_, lean_object* v_a_2481_){
_start:
{
lean_object* v_res_2482_; 
v_res_2482_ = l_Lean_Parser_strLit_parenthesizer(v_a_2477_, v_a_2478_, v_a_2479_, v_a_2480_);
lean_dec(v_a_2480_);
lean_dec_ref(v_a_2479_);
lean_dec(v_a_2478_);
lean_dec_ref(v_a_2477_);
return v_res_2482_;
}
}
static lean_object* _init_l_Lean_Parser_strLit___closed__0(void){
_start:
{
uint8_t v___x_2483_; uint8_t v___x_2484_; lean_object* v___x_2485_; lean_object* v___x_2486_; lean_object* v___x_2487_; 
v___x_2483_ = 0;
v___x_2484_ = 1;
v___x_2485_ = ((lean_object*)(l_Lean_Parser_strLit_formatter___closed__1));
v___x_2486_ = ((lean_object*)(l_Lean_Parser_strLit_formatter___closed__0));
v___x_2487_ = l_Lean_Parser_mkAntiquot(v___x_2486_, v___x_2485_, v___x_2484_, v___x_2483_);
return v___x_2487_;
}
}
static lean_object* _init_l_Lean_Parser_strLit___closed__1(void){
_start:
{
lean_object* v___x_2488_; lean_object* v___x_2489_; lean_object* v___x_2490_; 
v___x_2488_ = l_Lean_Parser_strLitNoAntiquot;
v___x_2489_ = lean_obj_once(&l_Lean_Parser_strLit___closed__0, &l_Lean_Parser_strLit___closed__0_once, _init_l_Lean_Parser_strLit___closed__0);
v___x_2490_ = l_Lean_Parser_withAntiquot(v___x_2489_, v___x_2488_);
return v___x_2490_;
}
}
static lean_object* _init_l_Lean_Parser_strLit(void){
_start:
{
lean_object* v___x_2491_; 
v___x_2491_ = lean_obj_once(&l_Lean_Parser_strLit___closed__1, &l_Lean_Parser_strLit___closed__1_once, _init_l_Lean_Parser_strLit___closed__1);
return v___x_2491_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_strLit___regBuiltin_Lean_Parser_strLit_docString__1(){
_start:
{
lean_object* v___x_2499_; lean_object* v___x_2500_; lean_object* v___x_2501_; 
v___x_2499_ = ((lean_object*)(l___private_Lean_Parser_Extra_0__Lean_Parser_strLit___regBuiltin_Lean_Parser_strLit_docString__1___closed__1));
v___x_2500_ = ((lean_object*)(l___private_Lean_Parser_Extra_0__Lean_Parser_strLit___regBuiltin_Lean_Parser_strLit_docString__1___closed__2));
v___x_2501_ = l_Lean_addBuiltinDocString(v___x_2499_, v___x_2500_);
return v___x_2501_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_strLit___regBuiltin_Lean_Parser_strLit_docString__1___boxed(lean_object* v_a_2502_){
_start:
{
lean_object* v_res_2503_; 
v_res_2503_ = l___private_Lean_Parser_Extra_0__Lean_Parser_strLit___regBuiltin_Lean_Parser_strLit_docString__1();
return v_res_2503_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_charLit_formatter(lean_object* v_a_2514_, lean_object* v_a_2515_, lean_object* v_a_2516_, lean_object* v_a_2517_){
_start:
{
lean_object* v___x_2519_; lean_object* v___x_2520_; lean_object* v___x_2521_; 
v___x_2519_ = ((lean_object*)(l_Lean_Parser_charLit_formatter___closed__2));
v___x_2520_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_charLitNoAntiquot_formatter___boxed), 5, 0);
v___x_2521_ = l_Lean_PrettyPrinter_Formatter_orelse_formatter(v___x_2519_, v___x_2520_, v_a_2514_, v_a_2515_, v_a_2516_, v_a_2517_);
return v___x_2521_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_charLit_formatter___boxed(lean_object* v_a_2522_, lean_object* v_a_2523_, lean_object* v_a_2524_, lean_object* v_a_2525_, lean_object* v_a_2526_){
_start:
{
lean_object* v_res_2527_; 
v_res_2527_ = l_Lean_Parser_charLit_formatter(v_a_2522_, v_a_2523_, v_a_2524_, v_a_2525_);
lean_dec(v_a_2525_);
lean_dec_ref(v_a_2524_);
lean_dec(v_a_2523_);
lean_dec_ref(v_a_2522_);
return v_res_2527_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_charLit_parenthesizer(lean_object* v_a_2535_, lean_object* v_a_2536_, lean_object* v_a_2537_, lean_object* v_a_2538_){
_start:
{
lean_object* v___f_2540_; lean_object* v___x_2541_; lean_object* v___x_2542_; 
v___f_2540_ = ((lean_object*)(l_Lean_Parser_rawIdent_parenthesizer___closed__0));
v___x_2541_ = ((lean_object*)(l_Lean_Parser_charLit_parenthesizer___closed__0));
v___x_2542_ = l_Lean_PrettyPrinter_Parenthesizer_withAntiquot_parenthesizer(v___x_2541_, v___f_2540_, v_a_2535_, v_a_2536_, v_a_2537_, v_a_2538_);
return v___x_2542_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_charLit_parenthesizer___boxed(lean_object* v_a_2543_, lean_object* v_a_2544_, lean_object* v_a_2545_, lean_object* v_a_2546_, lean_object* v_a_2547_){
_start:
{
lean_object* v_res_2548_; 
v_res_2548_ = l_Lean_Parser_charLit_parenthesizer(v_a_2543_, v_a_2544_, v_a_2545_, v_a_2546_);
lean_dec(v_a_2546_);
lean_dec_ref(v_a_2545_);
lean_dec(v_a_2544_);
lean_dec_ref(v_a_2543_);
return v_res_2548_;
}
}
static lean_object* _init_l_Lean_Parser_charLit___closed__0(void){
_start:
{
uint8_t v___x_2549_; uint8_t v___x_2550_; lean_object* v___x_2551_; lean_object* v___x_2552_; lean_object* v___x_2553_; 
v___x_2549_ = 0;
v___x_2550_ = 1;
v___x_2551_ = ((lean_object*)(l_Lean_Parser_charLit_formatter___closed__1));
v___x_2552_ = ((lean_object*)(l_Lean_Parser_charLit_formatter___closed__0));
v___x_2553_ = l_Lean_Parser_mkAntiquot(v___x_2552_, v___x_2551_, v___x_2550_, v___x_2549_);
return v___x_2553_;
}
}
static lean_object* _init_l_Lean_Parser_charLit___closed__1(void){
_start:
{
lean_object* v___x_2554_; lean_object* v___x_2555_; lean_object* v___x_2556_; 
v___x_2554_ = l_Lean_Parser_charLitNoAntiquot;
v___x_2555_ = lean_obj_once(&l_Lean_Parser_charLit___closed__0, &l_Lean_Parser_charLit___closed__0_once, _init_l_Lean_Parser_charLit___closed__0);
v___x_2556_ = l_Lean_Parser_withAntiquot(v___x_2555_, v___x_2554_);
return v___x_2556_;
}
}
static lean_object* _init_l_Lean_Parser_charLit(void){
_start:
{
lean_object* v___x_2557_; 
v___x_2557_ = lean_obj_once(&l_Lean_Parser_charLit___closed__1, &l_Lean_Parser_charLit___closed__1_once, _init_l_Lean_Parser_charLit___closed__1);
return v___x_2557_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_charLit___regBuiltin_Lean_Parser_charLit_docString__1(){
_start:
{
lean_object* v___x_2565_; lean_object* v___x_2566_; lean_object* v___x_2567_; 
v___x_2565_ = ((lean_object*)(l___private_Lean_Parser_Extra_0__Lean_Parser_charLit___regBuiltin_Lean_Parser_charLit_docString__1___closed__1));
v___x_2566_ = ((lean_object*)(l___private_Lean_Parser_Extra_0__Lean_Parser_charLit___regBuiltin_Lean_Parser_charLit_docString__1___closed__2));
v___x_2567_ = l_Lean_addBuiltinDocString(v___x_2565_, v___x_2566_);
return v___x_2567_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_charLit___regBuiltin_Lean_Parser_charLit_docString__1___boxed(lean_object* v_a_2568_){
_start:
{
lean_object* v_res_2569_; 
v_res_2569_ = l___private_Lean_Parser_Extra_0__Lean_Parser_charLit___regBuiltin_Lean_Parser_charLit_docString__1();
return v_res_2569_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_nameLit_formatter(lean_object* v_a_2580_, lean_object* v_a_2581_, lean_object* v_a_2582_, lean_object* v_a_2583_){
_start:
{
lean_object* v___x_2585_; lean_object* v___x_2586_; lean_object* v___x_2587_; 
v___x_2585_ = ((lean_object*)(l_Lean_Parser_nameLit_formatter___closed__2));
v___x_2586_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_nameLitNoAntiquot_formatter___boxed), 5, 0);
v___x_2587_ = l_Lean_PrettyPrinter_Formatter_orelse_formatter(v___x_2585_, v___x_2586_, v_a_2580_, v_a_2581_, v_a_2582_, v_a_2583_);
return v___x_2587_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_nameLit_formatter___boxed(lean_object* v_a_2588_, lean_object* v_a_2589_, lean_object* v_a_2590_, lean_object* v_a_2591_, lean_object* v_a_2592_){
_start:
{
lean_object* v_res_2593_; 
v_res_2593_ = l_Lean_Parser_nameLit_formatter(v_a_2588_, v_a_2589_, v_a_2590_, v_a_2591_);
lean_dec(v_a_2591_);
lean_dec_ref(v_a_2590_);
lean_dec(v_a_2589_);
lean_dec_ref(v_a_2588_);
return v_res_2593_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_nameLit_parenthesizer(lean_object* v_a_2601_, lean_object* v_a_2602_, lean_object* v_a_2603_, lean_object* v_a_2604_){
_start:
{
lean_object* v___f_2606_; lean_object* v___x_2607_; lean_object* v___x_2608_; 
v___f_2606_ = ((lean_object*)(l_Lean_Parser_rawIdent_parenthesizer___closed__0));
v___x_2607_ = ((lean_object*)(l_Lean_Parser_nameLit_parenthesizer___closed__0));
v___x_2608_ = l_Lean_PrettyPrinter_Parenthesizer_withAntiquot_parenthesizer(v___x_2607_, v___f_2606_, v_a_2601_, v_a_2602_, v_a_2603_, v_a_2604_);
return v___x_2608_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_nameLit_parenthesizer___boxed(lean_object* v_a_2609_, lean_object* v_a_2610_, lean_object* v_a_2611_, lean_object* v_a_2612_, lean_object* v_a_2613_){
_start:
{
lean_object* v_res_2614_; 
v_res_2614_ = l_Lean_Parser_nameLit_parenthesizer(v_a_2609_, v_a_2610_, v_a_2611_, v_a_2612_);
lean_dec(v_a_2612_);
lean_dec_ref(v_a_2611_);
lean_dec(v_a_2610_);
lean_dec_ref(v_a_2609_);
return v_res_2614_;
}
}
static lean_object* _init_l_Lean_Parser_nameLit___closed__0(void){
_start:
{
uint8_t v___x_2615_; uint8_t v___x_2616_; lean_object* v___x_2617_; lean_object* v___x_2618_; lean_object* v___x_2619_; 
v___x_2615_ = 0;
v___x_2616_ = 1;
v___x_2617_ = ((lean_object*)(l_Lean_Parser_nameLit_formatter___closed__1));
v___x_2618_ = ((lean_object*)(l_Lean_Parser_nameLit_formatter___closed__0));
v___x_2619_ = l_Lean_Parser_mkAntiquot(v___x_2618_, v___x_2617_, v___x_2616_, v___x_2615_);
return v___x_2619_;
}
}
static lean_object* _init_l_Lean_Parser_nameLit___closed__1(void){
_start:
{
lean_object* v___x_2620_; lean_object* v___x_2621_; lean_object* v___x_2622_; 
v___x_2620_ = l_Lean_Parser_nameLitNoAntiquot;
v___x_2621_ = lean_obj_once(&l_Lean_Parser_nameLit___closed__0, &l_Lean_Parser_nameLit___closed__0_once, _init_l_Lean_Parser_nameLit___closed__0);
v___x_2622_ = l_Lean_Parser_withAntiquot(v___x_2621_, v___x_2620_);
return v___x_2622_;
}
}
static lean_object* _init_l_Lean_Parser_nameLit(void){
_start:
{
lean_object* v___x_2623_; 
v___x_2623_ = lean_obj_once(&l_Lean_Parser_nameLit___closed__1, &l_Lean_Parser_nameLit___closed__1_once, _init_l_Lean_Parser_nameLit___closed__1);
return v___x_2623_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_nameLit___regBuiltin_Lean_Parser_nameLit_docString__1(){
_start:
{
lean_object* v___x_2631_; lean_object* v___x_2632_; lean_object* v___x_2633_; 
v___x_2631_ = ((lean_object*)(l___private_Lean_Parser_Extra_0__Lean_Parser_nameLit___regBuiltin_Lean_Parser_nameLit_docString__1___closed__1));
v___x_2632_ = ((lean_object*)(l___private_Lean_Parser_Extra_0__Lean_Parser_nameLit___regBuiltin_Lean_Parser_nameLit_docString__1___closed__2));
v___x_2633_ = l_Lean_addBuiltinDocString(v___x_2631_, v___x_2632_);
return v___x_2633_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_nameLit___regBuiltin_Lean_Parser_nameLit_docString__1___boxed(lean_object* v_a_2634_){
_start:
{
lean_object* v_res_2635_; 
v_res_2635_ = l___private_Lean_Parser_Extra_0__Lean_Parser_nameLit___regBuiltin_Lean_Parser_nameLit_docString__1();
return v_res_2635_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_group_formatter(lean_object* v_p_2639_, lean_object* v_a_2640_, lean_object* v_a_2641_, lean_object* v_a_2642_, lean_object* v_a_2643_){
_start:
{
lean_object* v___x_2645_; lean_object* v___x_2646_; 
v___x_2645_ = ((lean_object*)(l_Lean_Parser_group_formatter___closed__1));
v___x_2646_ = l_Lean_PrettyPrinter_Formatter_node_formatter(v___x_2645_, v_p_2639_, v_a_2640_, v_a_2641_, v_a_2642_, v_a_2643_);
return v___x_2646_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_group_formatter___boxed(lean_object* v_p_2647_, lean_object* v_a_2648_, lean_object* v_a_2649_, lean_object* v_a_2650_, lean_object* v_a_2651_, lean_object* v_a_2652_){
_start:
{
lean_object* v_res_2653_; 
v_res_2653_ = l_Lean_Parser_group_formatter(v_p_2647_, v_a_2648_, v_a_2649_, v_a_2650_, v_a_2651_);
lean_dec(v_a_2651_);
lean_dec_ref(v_a_2650_);
lean_dec(v_a_2649_);
lean_dec_ref(v_a_2648_);
return v_res_2653_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_group_parenthesizer(lean_object* v_p_2654_, lean_object* v_a_2655_, lean_object* v_a_2656_, lean_object* v_a_2657_, lean_object* v_a_2658_){
_start:
{
lean_object* v___x_2660_; lean_object* v___x_2661_; 
v___x_2660_ = ((lean_object*)(l_Lean_Parser_group_formatter___closed__1));
v___x_2661_ = l_Lean_PrettyPrinter_Parenthesizer_node_parenthesizer(v___x_2660_, v_p_2654_, v_a_2655_, v_a_2656_, v_a_2657_, v_a_2658_);
return v___x_2661_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_group_parenthesizer___boxed(lean_object* v_p_2662_, lean_object* v_a_2663_, lean_object* v_a_2664_, lean_object* v_a_2665_, lean_object* v_a_2666_, lean_object* v_a_2667_){
_start:
{
lean_object* v_res_2668_; 
v_res_2668_ = l_Lean_Parser_group_parenthesizer(v_p_2662_, v_a_2663_, v_a_2664_, v_a_2665_, v_a_2666_);
lean_dec(v_a_2666_);
lean_dec_ref(v_a_2665_);
lean_dec(v_a_2664_);
lean_dec_ref(v_a_2663_);
return v_res_2668_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_group(lean_object* v_p_2669_){
_start:
{
lean_object* v___x_2670_; lean_object* v___x_2671_; 
v___x_2670_ = ((lean_object*)(l_Lean_Parser_group_formatter___closed__1));
v___x_2671_ = l_Lean_Parser_node(v___x_2670_, v_p_2669_);
return v___x_2671_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_group___regBuiltin_Lean_Parser_group_docString__1(){
_start:
{
lean_object* v___x_2678_; lean_object* v___x_2679_; lean_object* v___x_2680_; 
v___x_2678_ = ((lean_object*)(l___private_Lean_Parser_Extra_0__Lean_Parser_group___regBuiltin_Lean_Parser_group_docString__1___closed__0));
v___x_2679_ = ((lean_object*)(l___private_Lean_Parser_Extra_0__Lean_Parser_group___regBuiltin_Lean_Parser_group_docString__1___closed__1));
v___x_2680_ = l_Lean_addBuiltinDocString(v___x_2678_, v___x_2679_);
return v___x_2680_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_group___regBuiltin_Lean_Parser_group_docString__1___boxed(lean_object* v_a_2681_){
_start:
{
lean_object* v_res_2682_; 
v_res_2682_ = l___private_Lean_Parser_Extra_0__Lean_Parser_group___regBuiltin_Lean_Parser_group_docString__1();
return v_res_2682_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_many1Indent_formatter(lean_object* v_p_2683_, lean_object* v_a_2684_, lean_object* v_a_2685_, lean_object* v_a_2686_, lean_object* v_a_2687_){
_start:
{
lean_object* v___x_2689_; lean_object* v___x_2690_; lean_object* v___x_2691_; 
v___x_2689_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_checkColGe_formatter___boxed), 5, 0);
v___x_2690_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed), 7, 2);
lean_closure_set(v___x_2690_, 0, v___x_2689_);
lean_closure_set(v___x_2690_, 1, v_p_2683_);
v___x_2691_ = l_Lean_Parser_many1_formatter(v___x_2690_, v_a_2684_, v_a_2685_, v_a_2686_, v_a_2687_);
return v___x_2691_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_many1Indent_formatter___boxed(lean_object* v_p_2692_, lean_object* v_a_2693_, lean_object* v_a_2694_, lean_object* v_a_2695_, lean_object* v_a_2696_, lean_object* v_a_2697_){
_start:
{
lean_object* v_res_2698_; 
v_res_2698_ = l_Lean_Parser_many1Indent_formatter(v_p_2692_, v_a_2693_, v_a_2694_, v_a_2695_, v_a_2696_);
lean_dec(v_a_2696_);
lean_dec_ref(v_a_2695_);
lean_dec(v_a_2694_);
lean_dec_ref(v_a_2693_);
return v_res_2698_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_many1Indent_parenthesizer(lean_object* v_p_2699_, lean_object* v_a_2700_, lean_object* v_a_2701_, lean_object* v_a_2702_, lean_object* v_a_2703_){
_start:
{
lean_object* v___x_2705_; lean_object* v___x_2706_; lean_object* v___x_2707_; lean_object* v___x_2708_; 
v___x_2705_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_checkColGe_parenthesizer___boxed), 5, 0);
v___x_2706_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed), 7, 2);
lean_closure_set(v___x_2706_, 0, v___x_2705_);
lean_closure_set(v___x_2706_, 1, v_p_2699_);
v___x_2707_ = lean_alloc_closure((void*)(l_Lean_Parser_many1_parenthesizer___boxed), 6, 1);
lean_closure_set(v___x_2707_, 0, v___x_2706_);
v___x_2708_ = l_Lean_PrettyPrinter_Parenthesizer_withPosition_parenthesizer(v___x_2707_, v_a_2700_, v_a_2701_, v_a_2702_, v_a_2703_);
return v___x_2708_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_many1Indent_parenthesizer___boxed(lean_object* v_p_2709_, lean_object* v_a_2710_, lean_object* v_a_2711_, lean_object* v_a_2712_, lean_object* v_a_2713_, lean_object* v_a_2714_){
_start:
{
lean_object* v_res_2715_; 
v_res_2715_ = l_Lean_Parser_many1Indent_parenthesizer(v_p_2709_, v_a_2710_, v_a_2711_, v_a_2712_, v_a_2713_);
lean_dec(v_a_2713_);
lean_dec_ref(v_a_2712_);
lean_dec(v_a_2711_);
lean_dec_ref(v_a_2710_);
return v_res_2715_;
}
}
static lean_object* _init_l_Lean_Parser_many1Indent___closed__1(void){
_start:
{
lean_object* v___x_2717_; lean_object* v___x_2718_; 
v___x_2717_ = ((lean_object*)(l_Lean_Parser_many1Indent___closed__0));
v___x_2718_ = l_Lean_Parser_checkColGe(v___x_2717_);
return v___x_2718_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_many1Indent(lean_object* v_p_2719_){
_start:
{
lean_object* v___x_2720_; lean_object* v___x_2721_; lean_object* v___x_2722_; lean_object* v___x_2723_; 
v___x_2720_ = lean_obj_once(&l_Lean_Parser_many1Indent___closed__1, &l_Lean_Parser_many1Indent___closed__1_once, _init_l_Lean_Parser_many1Indent___closed__1);
v___x_2721_ = l_Lean_Parser_andthen(v___x_2720_, v_p_2719_);
v___x_2722_ = l_Lean_Parser_many1(v___x_2721_);
v___x_2723_ = l_Lean_Parser_withPosition(v___x_2722_);
return v___x_2723_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_many1Indent___regBuiltin_Lean_Parser_many1Indent_docString__1(){
_start:
{
lean_object* v___x_2731_; lean_object* v___x_2732_; lean_object* v___x_2733_; 
v___x_2731_ = ((lean_object*)(l___private_Lean_Parser_Extra_0__Lean_Parser_many1Indent___regBuiltin_Lean_Parser_many1Indent_docString__1___closed__1));
v___x_2732_ = ((lean_object*)(l___private_Lean_Parser_Extra_0__Lean_Parser_many1Indent___regBuiltin_Lean_Parser_many1Indent_docString__1___closed__2));
v___x_2733_ = l_Lean_addBuiltinDocString(v___x_2731_, v___x_2732_);
return v___x_2733_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_many1Indent___regBuiltin_Lean_Parser_many1Indent_docString__1___boxed(lean_object* v_a_2734_){
_start:
{
lean_object* v_res_2735_; 
v_res_2735_ = l___private_Lean_Parser_Extra_0__Lean_Parser_many1Indent___regBuiltin_Lean_Parser_many1Indent_docString__1();
return v_res_2735_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_manyIndent_formatter(lean_object* v_p_2736_, lean_object* v_a_2737_, lean_object* v_a_2738_, lean_object* v_a_2739_, lean_object* v_a_2740_){
_start:
{
lean_object* v___x_2742_; lean_object* v___x_2743_; lean_object* v___x_2744_; 
v___x_2742_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_checkColGe_formatter___boxed), 5, 0);
v___x_2743_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed), 7, 2);
lean_closure_set(v___x_2743_, 0, v___x_2742_);
lean_closure_set(v___x_2743_, 1, v_p_2736_);
v___x_2744_ = l_Lean_Parser_many_formatter(v___x_2743_, v_a_2737_, v_a_2738_, v_a_2739_, v_a_2740_);
return v___x_2744_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_manyIndent_formatter___boxed(lean_object* v_p_2745_, lean_object* v_a_2746_, lean_object* v_a_2747_, lean_object* v_a_2748_, lean_object* v_a_2749_, lean_object* v_a_2750_){
_start:
{
lean_object* v_res_2751_; 
v_res_2751_ = l_Lean_Parser_manyIndent_formatter(v_p_2745_, v_a_2746_, v_a_2747_, v_a_2748_, v_a_2749_);
lean_dec(v_a_2749_);
lean_dec_ref(v_a_2748_);
lean_dec(v_a_2747_);
lean_dec_ref(v_a_2746_);
return v_res_2751_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_manyIndent_parenthesizer(lean_object* v_p_2752_, lean_object* v_a_2753_, lean_object* v_a_2754_, lean_object* v_a_2755_, lean_object* v_a_2756_){
_start:
{
lean_object* v___x_2758_; lean_object* v___x_2759_; lean_object* v___x_2760_; lean_object* v___x_2761_; 
v___x_2758_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_checkColGe_parenthesizer___boxed), 5, 0);
v___x_2759_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed), 7, 2);
lean_closure_set(v___x_2759_, 0, v___x_2758_);
lean_closure_set(v___x_2759_, 1, v_p_2752_);
v___x_2760_ = lean_alloc_closure((void*)(l_Lean_Parser_many_parenthesizer___boxed), 6, 1);
lean_closure_set(v___x_2760_, 0, v___x_2759_);
v___x_2761_ = l_Lean_PrettyPrinter_Parenthesizer_withPosition_parenthesizer(v___x_2760_, v_a_2753_, v_a_2754_, v_a_2755_, v_a_2756_);
return v___x_2761_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_manyIndent_parenthesizer___boxed(lean_object* v_p_2762_, lean_object* v_a_2763_, lean_object* v_a_2764_, lean_object* v_a_2765_, lean_object* v_a_2766_, lean_object* v_a_2767_){
_start:
{
lean_object* v_res_2768_; 
v_res_2768_ = l_Lean_Parser_manyIndent_parenthesizer(v_p_2762_, v_a_2763_, v_a_2764_, v_a_2765_, v_a_2766_);
lean_dec(v_a_2766_);
lean_dec_ref(v_a_2765_);
lean_dec(v_a_2764_);
lean_dec_ref(v_a_2763_);
return v_res_2768_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_manyIndent(lean_object* v_p_2769_){
_start:
{
lean_object* v___x_2770_; lean_object* v___x_2771_; lean_object* v___x_2772_; lean_object* v___x_2773_; 
v___x_2770_ = lean_obj_once(&l_Lean_Parser_many1Indent___closed__1, &l_Lean_Parser_many1Indent___closed__1_once, _init_l_Lean_Parser_many1Indent___closed__1);
v___x_2771_ = l_Lean_Parser_andthen(v___x_2770_, v_p_2769_);
v___x_2772_ = l_Lean_Parser_many(v___x_2771_);
v___x_2773_ = l_Lean_Parser_withPosition(v___x_2772_);
return v___x_2773_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_manyIndent___regBuiltin_Lean_Parser_manyIndent_docString__1(){
_start:
{
lean_object* v___x_2781_; lean_object* v___x_2782_; lean_object* v___x_2783_; 
v___x_2781_ = ((lean_object*)(l___private_Lean_Parser_Extra_0__Lean_Parser_manyIndent___regBuiltin_Lean_Parser_manyIndent_docString__1___closed__1));
v___x_2782_ = ((lean_object*)(l___private_Lean_Parser_Extra_0__Lean_Parser_manyIndent___regBuiltin_Lean_Parser_manyIndent_docString__1___closed__2));
v___x_2783_ = l_Lean_addBuiltinDocString(v___x_2781_, v___x_2782_);
return v___x_2783_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_manyIndent___regBuiltin_Lean_Parser_manyIndent_docString__1___boxed(lean_object* v_a_2784_){
_start:
{
lean_object* v_res_2785_; 
v_res_2785_ = l___private_Lean_Parser_Extra_0__Lean_Parser_manyIndent___regBuiltin_Lean_Parser_manyIndent_docString__1();
return v_res_2785_;
}
}
static lean_object* _init_l_Lean_Parser_sepByIndent___closed__0(void){
_start:
{
lean_object* v___x_2786_; lean_object* v___x_2787_; 
v___x_2786_ = ((lean_object*)(l_Lean_Parser_many1Indent___closed__0));
v___x_2787_ = l_Lean_Parser_checkColEq(v___x_2786_);
return v___x_2787_;
}
}
static lean_object* _init_l_Lean_Parser_sepByIndent___closed__2(void){
_start:
{
lean_object* v___x_2789_; lean_object* v___x_2790_; 
v___x_2789_ = ((lean_object*)(l_Lean_Parser_sepByIndent___closed__1));
v___x_2790_ = l_Lean_Parser_checkLinebreakBefore(v___x_2789_);
return v___x_2790_;
}
}
static lean_object* _init_l_Lean_Parser_sepByIndent___closed__3(void){
_start:
{
lean_object* v___x_2791_; lean_object* v___x_2792_; lean_object* v___x_2793_; 
v___x_2791_ = l_Lean_Parser_pushNone;
v___x_2792_ = lean_obj_once(&l_Lean_Parser_sepByIndent___closed__2, &l_Lean_Parser_sepByIndent___closed__2_once, _init_l_Lean_Parser_sepByIndent___closed__2);
v___x_2793_ = l_Lean_Parser_andthen(v___x_2792_, v___x_2791_);
return v___x_2793_;
}
}
static lean_object* _init_l_Lean_Parser_sepByIndent___closed__4(void){
_start:
{
lean_object* v___x_2794_; lean_object* v___x_2795_; lean_object* v___x_2796_; 
v___x_2794_ = lean_obj_once(&l_Lean_Parser_sepByIndent___closed__3, &l_Lean_Parser_sepByIndent___closed__3_once, _init_l_Lean_Parser_sepByIndent___closed__3);
v___x_2795_ = lean_obj_once(&l_Lean_Parser_sepByIndent___closed__0, &l_Lean_Parser_sepByIndent___closed__0_once, _init_l_Lean_Parser_sepByIndent___closed__0);
v___x_2796_ = l_Lean_Parser_andthen(v___x_2795_, v___x_2794_);
return v___x_2796_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_sepByIndent(lean_object* v_p_2797_, lean_object* v_sep_2798_, lean_object* v_psep_2799_, uint8_t v_allowTrailingSep_2800_){
_start:
{
lean_object* v___x_2801_; lean_object* v___x_2802_; lean_object* v_p_2803_; lean_object* v___x_2804_; lean_object* v___x_2805_; lean_object* v___x_2806_; lean_object* v___x_2807_; lean_object* v___x_2808_; lean_object* v___x_2809_; 
v___x_2801_ = ((lean_object*)(l_Lean_Parser_sepByElemParser_formatter___closed__1));
v___x_2802_ = lean_obj_once(&l_Lean_Parser_many___closed__0, &l_Lean_Parser_many___closed__0_once, _init_l_Lean_Parser_many___closed__0);
v_p_2803_ = l_Lean_Parser_withAntiquotSpliceAndSuffix(v___x_2801_, v_p_2797_, v___x_2802_);
v___x_2804_ = lean_obj_once(&l_Lean_Parser_many1Indent___closed__1, &l_Lean_Parser_many1Indent___closed__1_once, _init_l_Lean_Parser_many1Indent___closed__1);
v___x_2805_ = l_Lean_Parser_andthen(v___x_2804_, v_p_2803_);
v___x_2806_ = lean_obj_once(&l_Lean_Parser_sepByIndent___closed__4, &l_Lean_Parser_sepByIndent___closed__4_once, _init_l_Lean_Parser_sepByIndent___closed__4);
v___x_2807_ = l_Lean_Parser_orelse(v_psep_2799_, v___x_2806_);
v___x_2808_ = l_Lean_Parser_sepBy(v___x_2805_, v_sep_2798_, v___x_2807_, v_allowTrailingSep_2800_);
v___x_2809_ = l_Lean_Parser_withPosition(v___x_2808_);
return v___x_2809_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_sepByIndent___boxed(lean_object* v_p_2810_, lean_object* v_sep_2811_, lean_object* v_psep_2812_, lean_object* v_allowTrailingSep_2813_){
_start:
{
uint8_t v_allowTrailingSep_boxed_2814_; lean_object* v_res_2815_; 
v_allowTrailingSep_boxed_2814_ = lean_unbox(v_allowTrailingSep_2813_);
v_res_2815_ = l_Lean_Parser_sepByIndent(v_p_2810_, v_sep_2811_, v_psep_2812_, v_allowTrailingSep_boxed_2814_);
return v_res_2815_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_sepBy1Indent(lean_object* v_p_2816_, lean_object* v_sep_2817_, lean_object* v_psep_2818_, uint8_t v_allowTrailingSep_2819_){
_start:
{
lean_object* v___x_2820_; lean_object* v___x_2821_; lean_object* v_p_2822_; lean_object* v___x_2823_; lean_object* v___x_2824_; lean_object* v___x_2825_; lean_object* v___x_2826_; lean_object* v___x_2827_; lean_object* v___x_2828_; 
v___x_2820_ = ((lean_object*)(l_Lean_Parser_sepByElemParser_formatter___closed__1));
v___x_2821_ = lean_obj_once(&l_Lean_Parser_many___closed__0, &l_Lean_Parser_many___closed__0_once, _init_l_Lean_Parser_many___closed__0);
v_p_2822_ = l_Lean_Parser_withAntiquotSpliceAndSuffix(v___x_2820_, v_p_2816_, v___x_2821_);
v___x_2823_ = lean_obj_once(&l_Lean_Parser_many1Indent___closed__1, &l_Lean_Parser_many1Indent___closed__1_once, _init_l_Lean_Parser_many1Indent___closed__1);
v___x_2824_ = l_Lean_Parser_andthen(v___x_2823_, v_p_2822_);
v___x_2825_ = lean_obj_once(&l_Lean_Parser_sepByIndent___closed__4, &l_Lean_Parser_sepByIndent___closed__4_once, _init_l_Lean_Parser_sepByIndent___closed__4);
v___x_2826_ = l_Lean_Parser_orelse(v_psep_2818_, v___x_2825_);
v___x_2827_ = l_Lean_Parser_sepBy1(v___x_2824_, v_sep_2817_, v___x_2826_, v_allowTrailingSep_2819_);
v___x_2828_ = l_Lean_Parser_withPosition(v___x_2827_);
return v___x_2828_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_sepBy1Indent___boxed(lean_object* v_p_2829_, lean_object* v_sep_2830_, lean_object* v_psep_2831_, lean_object* v_allowTrailingSep_2832_){
_start:
{
uint8_t v_allowTrailingSep_boxed_2833_; lean_object* v_res_2834_; 
v_allowTrailingSep_boxed_2833_ = lean_unbox(v_allowTrailingSep_2832_);
v_res_2834_ = l_Lean_Parser_sepBy1Indent(v_p_2829_, v_sep_2830_, v_psep_2831_, v_allowTrailingSep_boxed_2833_);
return v_res_2834_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_getCur___at___00Lean_Parser_sepByIndent_formatter_spec__0___redArg(lean_object* v___y_2835_){
_start:
{
lean_object* v___x_2837_; lean_object* v_stxTrav_2838_; lean_object* v_cur_2839_; lean_object* v___x_2840_; 
v___x_2837_ = lean_st_ref_get(v___y_2835_);
v_stxTrav_2838_ = lean_ctor_get(v___x_2837_, 0);
lean_inc_ref(v_stxTrav_2838_);
lean_dec(v___x_2837_);
v_cur_2839_ = lean_ctor_get(v_stxTrav_2838_, 0);
lean_inc(v_cur_2839_);
lean_dec_ref(v_stxTrav_2838_);
v___x_2840_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2840_, 0, v_cur_2839_);
return v___x_2840_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_getCur___at___00Lean_Parser_sepByIndent_formatter_spec__0___redArg___boxed(lean_object* v___y_2841_, lean_object* v___y_2842_){
_start:
{
lean_object* v_res_2843_; 
v_res_2843_ = l_Lean_Syntax_MonadTraverser_getCur___at___00Lean_Parser_sepByIndent_formatter_spec__0___redArg(v___y_2841_);
lean_dec(v___y_2841_);
return v_res_2843_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_getCur___at___00Lean_Parser_sepByIndent_formatter_spec__0(lean_object* v___y_2844_, lean_object* v___y_2845_, lean_object* v___y_2846_, lean_object* v___y_2847_){
_start:
{
lean_object* v___x_2849_; 
v___x_2849_ = l_Lean_Syntax_MonadTraverser_getCur___at___00Lean_Parser_sepByIndent_formatter_spec__0___redArg(v___y_2845_);
return v___x_2849_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_getCur___at___00Lean_Parser_sepByIndent_formatter_spec__0___boxed(lean_object* v___y_2850_, lean_object* v___y_2851_, lean_object* v___y_2852_, lean_object* v___y_2853_, lean_object* v___y_2854_){
_start:
{
lean_object* v_res_2855_; 
v_res_2855_ = l_Lean_Syntax_MonadTraverser_getCur___at___00Lean_Parser_sepByIndent_formatter_spec__0(v___y_2850_, v___y_2851_, v___y_2852_, v___y_2853_);
lean_dec(v___y_2853_);
lean_dec_ref(v___y_2852_);
lean_dec(v___y_2851_);
lean_dec_ref(v___y_2850_);
return v_res_2855_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_goLeft___at___00Lean_Parser_sepByIndent_formatter_spec__2___redArg(lean_object* v___y_2856_){
_start:
{
lean_object* v___x_2858_; lean_object* v_stxTrav_2859_; lean_object* v_leadWord_2860_; uint8_t v_leadWordIdent_2861_; uint8_t v_isUngrouped_2862_; uint8_t v_mustBeGrouped_2863_; lean_object* v_stack_2864_; lean_object* v___x_2866_; uint8_t v_isShared_2867_; uint8_t v_isSharedCheck_2875_; 
v___x_2858_ = lean_st_ref_take(v___y_2856_);
v_stxTrav_2859_ = lean_ctor_get(v___x_2858_, 0);
v_leadWord_2860_ = lean_ctor_get(v___x_2858_, 1);
v_leadWordIdent_2861_ = lean_ctor_get_uint8(v___x_2858_, sizeof(void*)*3);
v_isUngrouped_2862_ = lean_ctor_get_uint8(v___x_2858_, sizeof(void*)*3 + 1);
v_mustBeGrouped_2863_ = lean_ctor_get_uint8(v___x_2858_, sizeof(void*)*3 + 2);
v_stack_2864_ = lean_ctor_get(v___x_2858_, 2);
v_isSharedCheck_2875_ = !lean_is_exclusive(v___x_2858_);
if (v_isSharedCheck_2875_ == 0)
{
v___x_2866_ = v___x_2858_;
v_isShared_2867_ = v_isSharedCheck_2875_;
goto v_resetjp_2865_;
}
else
{
lean_inc(v_stack_2864_);
lean_inc(v_leadWord_2860_);
lean_inc(v_stxTrav_2859_);
lean_dec(v___x_2858_);
v___x_2866_ = lean_box(0);
v_isShared_2867_ = v_isSharedCheck_2875_;
goto v_resetjp_2865_;
}
v_resetjp_2865_:
{
lean_object* v___x_2868_; lean_object* v___x_2869_; lean_object* v___x_2871_; 
v___x_2868_ = lean_box(0);
v___x_2869_ = l_Lean_Syntax_Traverser_left(v_stxTrav_2859_);
if (v_isShared_2867_ == 0)
{
lean_ctor_set(v___x_2866_, 0, v___x_2869_);
v___x_2871_ = v___x_2866_;
goto v_reusejp_2870_;
}
else
{
lean_object* v_reuseFailAlloc_2874_; 
v_reuseFailAlloc_2874_ = lean_alloc_ctor(0, 3, 3);
lean_ctor_set(v_reuseFailAlloc_2874_, 0, v___x_2869_);
lean_ctor_set(v_reuseFailAlloc_2874_, 1, v_leadWord_2860_);
lean_ctor_set(v_reuseFailAlloc_2874_, 2, v_stack_2864_);
lean_ctor_set_uint8(v_reuseFailAlloc_2874_, sizeof(void*)*3, v_leadWordIdent_2861_);
lean_ctor_set_uint8(v_reuseFailAlloc_2874_, sizeof(void*)*3 + 1, v_isUngrouped_2862_);
lean_ctor_set_uint8(v_reuseFailAlloc_2874_, sizeof(void*)*3 + 2, v_mustBeGrouped_2863_);
v___x_2871_ = v_reuseFailAlloc_2874_;
goto v_reusejp_2870_;
}
v_reusejp_2870_:
{
lean_object* v___x_2872_; lean_object* v___x_2873_; 
v___x_2872_ = lean_st_ref_put(v___y_2856_, v___x_2871_);
v___x_2873_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2873_, 0, v___x_2868_);
return v___x_2873_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_goLeft___at___00Lean_Parser_sepByIndent_formatter_spec__2___redArg___boxed(lean_object* v___y_2876_, lean_object* v___y_2877_){
_start:
{
lean_object* v_res_2878_; 
v_res_2878_ = l_Lean_Syntax_MonadTraverser_goLeft___at___00Lean_Parser_sepByIndent_formatter_spec__2___redArg(v___y_2876_);
lean_dec(v___y_2876_);
return v_res_2878_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_goLeft___at___00Lean_Parser_sepByIndent_formatter_spec__2(lean_object* v___y_2879_, lean_object* v___y_2880_, lean_object* v___y_2881_, lean_object* v___y_2882_){
_start:
{
lean_object* v___x_2884_; 
v___x_2884_ = l_Lean_Syntax_MonadTraverser_goLeft___at___00Lean_Parser_sepByIndent_formatter_spec__2___redArg(v___y_2880_);
return v___x_2884_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_goLeft___at___00Lean_Parser_sepByIndent_formatter_spec__2___boxed(lean_object* v___y_2885_, lean_object* v___y_2886_, lean_object* v___y_2887_, lean_object* v___y_2888_, lean_object* v___y_2889_){
_start:
{
lean_object* v_res_2890_; 
v_res_2890_ = l_Lean_Syntax_MonadTraverser_goLeft___at___00Lean_Parser_sepByIndent_formatter_spec__2(v___y_2885_, v___y_2886_, v___y_2887_, v___y_2888_);
lean_dec(v___y_2888_);
lean_dec_ref(v___y_2887_);
lean_dec(v___y_2886_);
lean_dec_ref(v___y_2885_);
return v_res_2890_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Parser_sepByIndent_formatter_spec__3___redArg(lean_object* v_pSep_2894_, lean_object* v___x_2895_, lean_object* v_p_2896_, lean_object* v_as_x27_2897_, lean_object* v_b_2898_, lean_object* v___y_2899_, lean_object* v___y_2900_, lean_object* v___y_2901_, lean_object* v___y_2902_){
_start:
{
if (lean_obj_tag(v_as_x27_2897_) == 0)
{
lean_object* v___x_2904_; 
lean_dec_ref(v_p_2896_);
lean_dec_ref(v_pSep_2894_);
v___x_2904_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2904_, 0, v_b_2898_);
return v___x_2904_;
}
else
{
lean_object* v_head_2905_; lean_object* v_tail_2906_; lean_object* v___x_2907_; lean_object* v___x_2911_; lean_object* v___x_2912_; lean_object* v___x_2913_; uint8_t v___x_2914_; 
v_head_2905_ = lean_ctor_get(v_as_x27_2897_, 0);
v_tail_2906_ = lean_ctor_get(v_as_x27_2897_, 1);
v___x_2907_ = lean_box(0);
v___x_2911_ = lean_unsigned_to_nat(0u);
v___x_2912_ = lean_unsigned_to_nat(2u);
v___x_2913_ = lean_nat_mod(v_head_2905_, v___x_2912_);
v___x_2914_ = lean_nat_dec_eq(v___x_2913_, v___x_2911_);
lean_dec(v___x_2913_);
if (v___x_2914_ == 0)
{
lean_object* v___x_2915_; lean_object* v___x_2916_; lean_object* v___x_2917_; 
v___x_2915_ = lean_st_ref_get(v___y_2900_);
v___x_2916_ = l_Lean_PrettyPrinter_backtrackExceptionId;
lean_inc_ref(v_pSep_2894_);
lean_inc(v___y_2902_);
lean_inc_ref(v___y_2901_);
lean_inc(v___y_2900_);
lean_inc_ref(v___y_2899_);
v___x_2917_ = lean_apply_5(v_pSep_2894_, v___y_2899_, v___y_2900_, v___y_2901_, v___y_2902_, lean_box(0));
if (lean_obj_tag(v___x_2917_) == 0)
{
lean_dec_ref_known(v___x_2917_, 1);
lean_dec(v___x_2915_);
v_as_x27_2897_ = v_tail_2906_;
v_b_2898_ = v___x_2907_;
goto _start;
}
else
{
lean_object* v_a_2919_; uint8_t v___y_2921_; uint8_t v___x_2930_; 
v_a_2919_ = lean_ctor_get(v___x_2917_, 0);
lean_inc(v_a_2919_);
v___x_2930_ = l_Lean_Exception_isInterrupt(v_a_2919_);
if (v___x_2930_ == 0)
{
uint8_t v___x_2931_; 
lean_inc(v_a_2919_);
v___x_2931_ = l_Lean_Exception_isRuntime(v_a_2919_);
v___y_2921_ = v___x_2931_;
goto v___jp_2920_;
}
else
{
v___y_2921_ = v___x_2930_;
goto v___jp_2920_;
}
v___jp_2920_:
{
if (v___y_2921_ == 0)
{
if (lean_obj_tag(v_a_2919_) == 0)
{
lean_dec_ref_known(v_a_2919_, 2);
lean_dec(v___x_2915_);
lean_dec_ref(v_p_2896_);
lean_dec_ref(v_pSep_2894_);
return v___x_2917_;
}
else
{
lean_object* v_id_2922_; uint8_t v___x_2923_; 
v_id_2922_ = lean_ctor_get(v_a_2919_, 0);
lean_inc(v_id_2922_);
lean_dec_ref_known(v_a_2919_, 2);
v___x_2923_ = l_Lean_instBEqInternalExceptionId_beq(v___x_2916_, v_id_2922_);
lean_dec(v_id_2922_);
if (v___x_2923_ == 0)
{
lean_dec(v___x_2915_);
lean_dec_ref(v_p_2896_);
lean_dec_ref(v_pSep_2894_);
return v___x_2917_;
}
else
{
lean_object* v___x_2924_; lean_object* v___x_2925_; lean_object* v___x_2926_; uint8_t v___x_2927_; 
lean_dec_ref_known(v___x_2917_, 1);
v___x_2924_ = lean_st_ref_swap(v___y_2900_, v___x_2915_);
lean_dec(v___x_2924_);
v___x_2925_ = lean_unsigned_to_nat(1u);
v___x_2926_ = lean_nat_sub(v___x_2895_, v___x_2925_);
v___x_2927_ = lean_nat_dec_eq(v_head_2905_, v___x_2926_);
lean_dec(v___x_2926_);
if (v___x_2927_ == 0)
{
lean_object* v___x_2928_; lean_object* v___x_2929_; 
v___x_2928_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Parser_sepByIndent_formatter_spec__3___redArg___closed__1));
v___x_2929_ = l_Lean_PrettyPrinter_Formatter_pushWhitespace___redArg(v___x_2928_, v___y_2900_);
if (lean_obj_tag(v___x_2929_) == 0)
{
lean_dec_ref_known(v___x_2929_, 1);
goto v___jp_2908_;
}
else
{
lean_dec_ref(v_p_2896_);
lean_dec_ref(v_pSep_2894_);
return v___x_2929_;
}
}
else
{
goto v___jp_2908_;
}
}
}
}
else
{
lean_dec(v_a_2919_);
lean_dec(v___x_2915_);
lean_dec_ref(v_p_2896_);
lean_dec_ref(v_pSep_2894_);
return v___x_2917_;
}
}
}
}
else
{
lean_object* v___x_2932_; 
lean_inc_ref(v_p_2896_);
lean_inc(v___y_2902_);
lean_inc_ref(v___y_2901_);
lean_inc(v___y_2900_);
lean_inc_ref(v___y_2899_);
v___x_2932_ = lean_apply_5(v_p_2896_, v___y_2899_, v___y_2900_, v___y_2901_, v___y_2902_, lean_box(0));
if (lean_obj_tag(v___x_2932_) == 0)
{
lean_dec_ref_known(v___x_2932_, 1);
v_as_x27_2897_ = v_tail_2906_;
v_b_2898_ = v___x_2907_;
goto _start;
}
else
{
lean_dec_ref(v_p_2896_);
lean_dec_ref(v_pSep_2894_);
return v___x_2932_;
}
}
v___jp_2908_:
{
lean_object* v___x_2909_; 
v___x_2909_ = l_Lean_Syntax_MonadTraverser_goLeft___at___00Lean_Parser_sepByIndent_formatter_spec__2___redArg(v___y_2900_);
lean_dec_ref(v___x_2909_);
v_as_x27_2897_ = v_tail_2906_;
v_b_2898_ = v___x_2907_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Parser_sepByIndent_formatter_spec__3___redArg___boxed(lean_object* v_pSep_2934_, lean_object* v___x_2935_, lean_object* v_p_2936_, lean_object* v_as_x27_2937_, lean_object* v_b_2938_, lean_object* v___y_2939_, lean_object* v___y_2940_, lean_object* v___y_2941_, lean_object* v___y_2942_, lean_object* v___y_2943_){
_start:
{
lean_object* v_res_2944_; 
v_res_2944_ = l_List_forIn_x27_loop___at___00Lean_Parser_sepByIndent_formatter_spec__3___redArg(v_pSep_2934_, v___x_2935_, v_p_2936_, v_as_x27_2937_, v_b_2938_, v___y_2939_, v___y_2940_, v___y_2941_, v___y_2942_);
lean_dec(v___y_2942_);
lean_dec_ref(v___y_2941_);
lean_dec(v___y_2940_);
lean_dec_ref(v___y_2939_);
lean_dec(v_as_x27_2937_);
lean_dec(v___x_2935_);
return v_res_2944_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_sepByIndent_formatter___redArg___lam__0(lean_object* v_pSep_2945_, lean_object* v___x_2946_, lean_object* v_p_2947_, lean_object* v___x_2948_, lean_object* v___x_2949_, lean_object* v___y_2950_, lean_object* v___y_2951_, lean_object* v___y_2952_, lean_object* v___y_2953_){
_start:
{
lean_object* v___x_2955_; 
v___x_2955_ = l_List_forIn_x27_loop___at___00Lean_Parser_sepByIndent_formatter_spec__3___redArg(v_pSep_2945_, v___x_2946_, v_p_2947_, v___x_2948_, v___x_2949_, v___y_2950_, v___y_2951_, v___y_2952_, v___y_2953_);
if (lean_obj_tag(v___x_2955_) == 0)
{
lean_object* v___x_2957_; uint8_t v_isShared_2958_; uint8_t v_isSharedCheck_2962_; 
v_isSharedCheck_2962_ = !lean_is_exclusive(v___x_2955_);
if (v_isSharedCheck_2962_ == 0)
{
lean_object* v_unused_2963_; 
v_unused_2963_ = lean_ctor_get(v___x_2955_, 0);
lean_dec(v_unused_2963_);
v___x_2957_ = v___x_2955_;
v_isShared_2958_ = v_isSharedCheck_2962_;
goto v_resetjp_2956_;
}
else
{
lean_dec(v___x_2955_);
v___x_2957_ = lean_box(0);
v_isShared_2958_ = v_isSharedCheck_2962_;
goto v_resetjp_2956_;
}
v_resetjp_2956_:
{
lean_object* v___x_2960_; 
if (v_isShared_2958_ == 0)
{
lean_ctor_set(v___x_2957_, 0, v___x_2949_);
v___x_2960_ = v___x_2957_;
goto v_reusejp_2959_;
}
else
{
lean_object* v_reuseFailAlloc_2961_; 
v_reuseFailAlloc_2961_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2961_, 0, v___x_2949_);
v___x_2960_ = v_reuseFailAlloc_2961_;
goto v_reusejp_2959_;
}
v_reusejp_2959_:
{
return v___x_2960_;
}
}
}
else
{
return v___x_2955_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_sepByIndent_formatter___redArg___lam__0___boxed(lean_object* v_pSep_2964_, lean_object* v___x_2965_, lean_object* v_p_2966_, lean_object* v___x_2967_, lean_object* v___x_2968_, lean_object* v___y_2969_, lean_object* v___y_2970_, lean_object* v___y_2971_, lean_object* v___y_2972_, lean_object* v___y_2973_){
_start:
{
lean_object* v_res_2974_; 
v_res_2974_ = l_Lean_Parser_sepByIndent_formatter___redArg___lam__0(v_pSep_2964_, v___x_2965_, v_p_2966_, v___x_2967_, v___x_2968_, v___y_2969_, v___y_2970_, v___y_2971_, v___y_2972_);
lean_dec(v___y_2972_);
lean_dec_ref(v___y_2971_);
lean_dec(v___y_2970_);
lean_dec_ref(v___y_2969_);
lean_dec(v___x_2967_);
lean_dec(v___x_2965_);
return v_res_2974_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Parser_sepByIndent_formatter_spec__4(lean_object* v_as_2975_, size_t v_i_2976_, size_t v_stop_2977_){
_start:
{
uint8_t v___x_2978_; 
v___x_2978_ = lean_usize_dec_eq(v_i_2976_, v_stop_2977_);
if (v___x_2978_ == 0)
{
lean_object* v___x_2979_; uint8_t v___x_2980_; 
v___x_2979_ = lean_array_uget_borrowed(v_as_2975_, v_i_2976_);
v___x_2980_ = lean_unbox(v___x_2979_);
if (v___x_2980_ == 0)
{
size_t v___x_2981_; size_t v___x_2982_; 
v___x_2981_ = ((size_t)1ULL);
v___x_2982_ = lean_usize_add(v_i_2976_, v___x_2981_);
v_i_2976_ = v___x_2982_;
goto _start;
}
else
{
uint8_t v___x_2984_; 
v___x_2984_ = lean_unbox(v___x_2979_);
return v___x_2984_;
}
}
else
{
uint8_t v___x_2985_; 
v___x_2985_ = 0;
return v___x_2985_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Parser_sepByIndent_formatter_spec__4___boxed(lean_object* v_as_2986_, lean_object* v_i_2987_, lean_object* v_stop_2988_){
_start:
{
size_t v_i_boxed_2989_; size_t v_stop_boxed_2990_; uint8_t v_res_2991_; lean_object* v_r_2992_; 
v_i_boxed_2989_ = lean_unbox_usize(v_i_2987_);
lean_dec(v_i_2987_);
v_stop_boxed_2990_ = lean_unbox_usize(v_stop_2988_);
lean_dec(v_stop_2988_);
v_res_2991_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Parser_sepByIndent_formatter_spec__4(v_as_2986_, v_i_boxed_2989_, v_stop_boxed_2990_);
lean_dec_ref(v_as_2986_);
v_r_2992_ = lean_box(v_res_2991_);
return v_r_2992_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Parser_sepByIndent_formatter_spec__1___redArg(lean_object* v_a_2993_, size_t v_sz_2994_, size_t v_i_2995_, lean_object* v_bs_2996_){
_start:
{
uint8_t v___x_2997_; 
v___x_2997_ = lean_usize_dec_lt(v_i_2995_, v_sz_2994_);
if (v___x_2997_ == 0)
{
lean_object* v___x_2998_; 
v___x_2998_ = l_unsafeCast___redArg(v_bs_2996_);
lean_dec_ref(v_bs_2996_);
return v___x_2998_;
}
else
{
lean_object* v_v_2999_; lean_object* v___x_3000_; lean_object* v_bs_x27_3001_; uint8_t v___y_3003_; lean_object* v___x_3010_; lean_object* v___x_3011_; lean_object* v___x_3012_; lean_object* v___x_3013_; uint8_t v___x_3014_; 
v_v_2999_ = lean_array_uget(v_bs_2996_, v_i_2995_);
v___x_3000_ = lean_unsigned_to_nat(0u);
v_bs_x27_3001_ = lean_array_uset(v_bs_2996_, v_i_2995_, v___x_3000_);
v___x_3010_ = lean_usize_to_nat(v_i_2995_);
v___x_3011_ = lean_unsigned_to_nat(2u);
v___x_3012_ = lean_nat_mod(v___x_3010_, v___x_3011_);
v___x_3013_ = lean_unsigned_to_nat(1u);
v___x_3014_ = lean_nat_dec_eq(v___x_3012_, v___x_3013_);
lean_dec(v___x_3012_);
if (v___x_3014_ == 0)
{
lean_dec(v___x_3010_);
lean_dec(v_v_2999_);
v___y_3003_ = v___x_3014_;
goto v___jp_3002_;
}
else
{
lean_object* v___x_3015_; uint8_t v___x_3016_; 
v___x_3015_ = l_unsafeCast___redArg(v_v_2999_);
lean_dec(v_v_2999_);
v___x_3016_ = l_Lean_Syntax_matchesNull(v___x_3015_, v___x_3000_);
if (v___x_3016_ == 0)
{
lean_dec(v___x_3010_);
v___y_3003_ = v___x_3016_;
goto v___jp_3002_;
}
else
{
lean_object* v___x_3017_; lean_object* v___x_3018_; lean_object* v___x_3019_; uint8_t v___x_3020_; 
v___x_3017_ = l_Lean_Syntax_getArgs(v_a_2993_);
v___x_3018_ = lean_array_get_size(v___x_3017_);
lean_dec_ref(v___x_3017_);
v___x_3019_ = lean_nat_sub(v___x_3018_, v___x_3013_);
v___x_3020_ = lean_nat_dec_eq(v___x_3010_, v___x_3019_);
lean_dec(v___x_3019_);
lean_dec(v___x_3010_);
if (v___x_3020_ == 0)
{
v___y_3003_ = v___x_3016_;
goto v___jp_3002_;
}
else
{
uint8_t v___x_3021_; 
v___x_3021_ = 0;
v___y_3003_ = v___x_3021_;
goto v___jp_3002_;
}
}
}
v___jp_3002_:
{
size_t v___x_3004_; size_t v___x_3005_; lean_object* v___x_3006_; lean_object* v___x_3007_; lean_object* v___x_3008_; 
v___x_3004_ = ((size_t)1ULL);
v___x_3005_ = lean_usize_add(v_i_2995_, v___x_3004_);
v___x_3006_ = lean_box(v___y_3003_);
v___x_3007_ = l_unsafeCast___redArg(v___x_3006_);
lean_dec(v___x_3006_);
v___x_3008_ = lean_array_uset(v_bs_x27_3001_, v_i_2995_, v___x_3007_);
v_i_2995_ = v___x_3005_;
v_bs_2996_ = v___x_3008_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Parser_sepByIndent_formatter_spec__1___redArg___boxed(lean_object* v_a_3022_, lean_object* v_sz_3023_, lean_object* v_i_3024_, lean_object* v_bs_3025_){
_start:
{
size_t v_sz_boxed_3026_; size_t v_i_boxed_3027_; lean_object* v_res_3028_; 
v_sz_boxed_3026_ = lean_unbox_usize(v_sz_3023_);
lean_dec(v_sz_3023_);
v_i_boxed_3027_ = lean_unbox_usize(v_i_3024_);
lean_dec(v_i_3024_);
v_res_3028_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Parser_sepByIndent_formatter_spec__1___redArg(v_a_3022_, v_sz_boxed_3026_, v_i_boxed_3027_, v_bs_3025_);
lean_dec(v_a_3022_);
return v_res_3028_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_sepByIndent_formatter___redArg(lean_object* v_p_3029_, lean_object* v_pSep_3030_, lean_object* v_a_3031_, lean_object* v_a_3032_, lean_object* v_a_3033_, lean_object* v_a_3034_){
_start:
{
lean_object* v___x_3036_; lean_object* v_a_3037_; lean_object* v___x_3038_; uint8_t v___y_3040_; size_t v_sz_3056_; size_t v___x_3057_; lean_object* v___x_3058_; lean_object* v___x_3059_; lean_object* v___x_3060_; lean_object* v___x_3061_; lean_object* v___x_3062_; uint8_t v___x_3063_; 
v___x_3036_ = l_Lean_Syntax_MonadTraverser_getCur___at___00Lean_Parser_sepByIndent_formatter_spec__0___redArg(v_a_3032_);
v_a_3037_ = lean_ctor_get(v___x_3036_, 0);
lean_inc(v_a_3037_);
lean_dec_ref(v___x_3036_);
v___x_3038_ = l_Lean_Syntax_getArgs(v_a_3037_);
v_sz_3056_ = lean_array_size(v___x_3038_);
v___x_3057_ = ((size_t)0ULL);
v___x_3058_ = l_unsafeCast___redArg(v___x_3038_);
v___x_3059_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Parser_sepByIndent_formatter_spec__1___redArg(v_a_3037_, v_sz_3056_, v___x_3057_, v___x_3058_);
lean_dec(v_a_3037_);
v___x_3060_ = l_unsafeCast___redArg(v___x_3059_);
lean_dec_ref(v___x_3059_);
v___x_3061_ = lean_unsigned_to_nat(0u);
v___x_3062_ = lean_array_get_size(v___x_3060_);
v___x_3063_ = lean_nat_dec_lt(v___x_3061_, v___x_3062_);
if (v___x_3063_ == 0)
{
lean_dec(v___x_3060_);
v___y_3040_ = v___x_3063_;
goto v___jp_3039_;
}
else
{
if (v___x_3063_ == 0)
{
lean_dec(v___x_3060_);
v___y_3040_ = v___x_3063_;
goto v___jp_3039_;
}
else
{
size_t v___x_3064_; uint8_t v___x_3065_; 
v___x_3064_ = lean_usize_of_nat(v___x_3062_);
v___x_3065_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Parser_sepByIndent_formatter_spec__4(v___x_3060_, v___x_3057_, v___x_3064_);
lean_dec(v___x_3060_);
v___y_3040_ = v___x_3065_;
goto v___jp_3039_;
}
}
v___jp_3039_:
{
lean_object* v___x_3041_; lean_object* v___x_3042_; lean_object* v___x_3043_; lean_object* v___x_3044_; lean_object* v___f_3045_; lean_object* v___x_3046_; 
v___x_3041_ = lean_array_get_size(v___x_3038_);
lean_dec_ref(v___x_3038_);
v___x_3042_ = l_List_range(v___x_3041_);
v___x_3043_ = l_List_reverse___redArg(v___x_3042_);
v___x_3044_ = lean_box(0);
v___f_3045_ = lean_alloc_closure((void*)(l_Lean_Parser_sepByIndent_formatter___redArg___lam__0___boxed), 10, 5);
lean_closure_set(v___f_3045_, 0, v_pSep_3030_);
lean_closure_set(v___f_3045_, 1, v___x_3041_);
lean_closure_set(v___f_3045_, 2, v_p_3029_);
lean_closure_set(v___f_3045_, 3, v___x_3043_);
lean_closure_set(v___f_3045_, 4, v___x_3044_);
v___x_3046_ = l_Lean_PrettyPrinter_Formatter_visitArgs(v___f_3045_, v_a_3031_, v_a_3032_, v_a_3033_, v_a_3034_);
if (lean_obj_tag(v___x_3046_) == 0)
{
lean_object* v___x_3048_; uint8_t v_isShared_3049_; uint8_t v_isSharedCheck_3054_; 
v_isSharedCheck_3054_ = !lean_is_exclusive(v___x_3046_);
if (v_isSharedCheck_3054_ == 0)
{
lean_object* v_unused_3055_; 
v_unused_3055_ = lean_ctor_get(v___x_3046_, 0);
lean_dec(v_unused_3055_);
v___x_3048_ = v___x_3046_;
v_isShared_3049_ = v_isSharedCheck_3054_;
goto v_resetjp_3047_;
}
else
{
lean_dec(v___x_3046_);
v___x_3048_ = lean_box(0);
v_isShared_3049_ = v_isSharedCheck_3054_;
goto v_resetjp_3047_;
}
v_resetjp_3047_:
{
if (v___y_3040_ == 0)
{
lean_object* v___x_3051_; 
if (v_isShared_3049_ == 0)
{
lean_ctor_set(v___x_3048_, 0, v___x_3044_);
v___x_3051_ = v___x_3048_;
goto v_reusejp_3050_;
}
else
{
lean_object* v_reuseFailAlloc_3052_; 
v_reuseFailAlloc_3052_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3052_, 0, v___x_3044_);
v___x_3051_ = v_reuseFailAlloc_3052_;
goto v_reusejp_3050_;
}
v_reusejp_3050_:
{
return v___x_3051_;
}
}
else
{
lean_object* v___x_3053_; 
lean_del_object(v___x_3048_);
v___x_3053_ = l_Lean_PrettyPrinter_Formatter_pushAlign___redArg(v___y_3040_, v_a_3032_);
return v___x_3053_;
}
}
}
else
{
return v___x_3046_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_sepByIndent_formatter___redArg___boxed(lean_object* v_p_3066_, lean_object* v_pSep_3067_, lean_object* v_a_3068_, lean_object* v_a_3069_, lean_object* v_a_3070_, lean_object* v_a_3071_, lean_object* v_a_3072_){
_start:
{
lean_object* v_res_3073_; 
v_res_3073_ = l_Lean_Parser_sepByIndent_formatter___redArg(v_p_3066_, v_pSep_3067_, v_a_3068_, v_a_3069_, v_a_3070_, v_a_3071_);
lean_dec(v_a_3071_);
lean_dec_ref(v_a_3070_);
lean_dec(v_a_3069_);
lean_dec_ref(v_a_3068_);
return v_res_3073_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_sepByIndent_formatter(lean_object* v_p_3074_, lean_object* v___sep_3075_, lean_object* v_pSep_3076_, lean_object* v_a_3077_, lean_object* v_a_3078_, lean_object* v_a_3079_, lean_object* v_a_3080_){
_start:
{
lean_object* v___x_3082_; 
v___x_3082_ = l_Lean_Parser_sepByIndent_formatter___redArg(v_p_3074_, v_pSep_3076_, v_a_3077_, v_a_3078_, v_a_3079_, v_a_3080_);
return v___x_3082_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_sepByIndent_formatter___boxed(lean_object* v_p_3083_, lean_object* v___sep_3084_, lean_object* v_pSep_3085_, lean_object* v_a_3086_, lean_object* v_a_3087_, lean_object* v_a_3088_, lean_object* v_a_3089_, lean_object* v_a_3090_){
_start:
{
lean_object* v_res_3091_; 
v_res_3091_ = l_Lean_Parser_sepByIndent_formatter(v_p_3083_, v___sep_3084_, v_pSep_3085_, v_a_3086_, v_a_3087_, v_a_3088_, v_a_3089_);
lean_dec(v_a_3089_);
lean_dec_ref(v_a_3088_);
lean_dec(v_a_3087_);
lean_dec_ref(v_a_3086_);
lean_dec_ref(v___sep_3084_);
return v_res_3091_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Parser_sepByIndent_formatter_spec__1(lean_object* v_a_3092_, lean_object* v_as_3093_, size_t v_sz_3094_, size_t v_i_3095_, lean_object* v_bs_3096_){
_start:
{
lean_object* v___x_3097_; 
v___x_3097_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Parser_sepByIndent_formatter_spec__1___redArg(v_a_3092_, v_sz_3094_, v_i_3095_, v_bs_3096_);
return v___x_3097_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Parser_sepByIndent_formatter_spec__1___boxed(lean_object* v_a_3098_, lean_object* v_as_3099_, lean_object* v_sz_3100_, lean_object* v_i_3101_, lean_object* v_bs_3102_){
_start:
{
size_t v_sz_boxed_3103_; size_t v_i_boxed_3104_; lean_object* v_res_3105_; 
v_sz_boxed_3103_ = lean_unbox_usize(v_sz_3100_);
lean_dec(v_sz_3100_);
v_i_boxed_3104_ = lean_unbox_usize(v_i_3101_);
lean_dec(v_i_3101_);
v_res_3105_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Parser_sepByIndent_formatter_spec__1(v_a_3098_, v_as_3099_, v_sz_boxed_3103_, v_i_boxed_3104_, v_bs_3102_);
lean_dec_ref(v_as_3099_);
lean_dec(v_a_3098_);
return v_res_3105_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Parser_sepByIndent_formatter_spec__3(lean_object* v_pSep_3106_, lean_object* v___x_3107_, lean_object* v_p_3108_, lean_object* v_as_3109_, lean_object* v_as_x27_3110_, lean_object* v_b_3111_, lean_object* v_a_3112_, lean_object* v___y_3113_, lean_object* v___y_3114_, lean_object* v___y_3115_, lean_object* v___y_3116_){
_start:
{
lean_object* v___x_3118_; 
v___x_3118_ = l_List_forIn_x27_loop___at___00Lean_Parser_sepByIndent_formatter_spec__3___redArg(v_pSep_3106_, v___x_3107_, v_p_3108_, v_as_x27_3110_, v_b_3111_, v___y_3113_, v___y_3114_, v___y_3115_, v___y_3116_);
return v___x_3118_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Parser_sepByIndent_formatter_spec__3___boxed(lean_object* v_pSep_3119_, lean_object* v___x_3120_, lean_object* v_p_3121_, lean_object* v_as_3122_, lean_object* v_as_x27_3123_, lean_object* v_b_3124_, lean_object* v_a_3125_, lean_object* v___y_3126_, lean_object* v___y_3127_, lean_object* v___y_3128_, lean_object* v___y_3129_, lean_object* v___y_3130_){
_start:
{
lean_object* v_res_3131_; 
v_res_3131_ = l_List_forIn_x27_loop___at___00Lean_Parser_sepByIndent_formatter_spec__3(v_pSep_3119_, v___x_3120_, v_p_3121_, v_as_3122_, v_as_x27_3123_, v_b_3124_, v_a_3125_, v___y_3126_, v___y_3127_, v___y_3128_, v___y_3129_);
lean_dec(v___y_3129_);
lean_dec_ref(v___y_3128_);
lean_dec(v___y_3127_);
lean_dec_ref(v___y_3126_);
lean_dec(v_as_x27_3123_);
lean_dec(v_as_3122_);
lean_dec(v___x_3120_);
return v_res_3131_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_sepBy1Indent_formatter___redArg(lean_object* v_p_3132_, lean_object* v_pSep_3133_, lean_object* v_a_3134_, lean_object* v_a_3135_, lean_object* v_a_3136_, lean_object* v_a_3137_){
_start:
{
lean_object* v___x_3139_; 
v___x_3139_ = l_Lean_Parser_sepByIndent_formatter___redArg(v_p_3132_, v_pSep_3133_, v_a_3134_, v_a_3135_, v_a_3136_, v_a_3137_);
return v___x_3139_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_sepBy1Indent_formatter___redArg___boxed(lean_object* v_p_3140_, lean_object* v_pSep_3141_, lean_object* v_a_3142_, lean_object* v_a_3143_, lean_object* v_a_3144_, lean_object* v_a_3145_, lean_object* v_a_3146_){
_start:
{
lean_object* v_res_3147_; 
v_res_3147_ = l_Lean_Parser_sepBy1Indent_formatter___redArg(v_p_3140_, v_pSep_3141_, v_a_3142_, v_a_3143_, v_a_3144_, v_a_3145_);
lean_dec(v_a_3145_);
lean_dec_ref(v_a_3144_);
lean_dec(v_a_3143_);
lean_dec_ref(v_a_3142_);
return v_res_3147_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_sepBy1Indent_formatter(lean_object* v_p_3148_, lean_object* v___sep_3149_, lean_object* v_pSep_3150_, lean_object* v_a_3151_, lean_object* v_a_3152_, lean_object* v_a_3153_, lean_object* v_a_3154_){
_start:
{
lean_object* v___x_3156_; 
v___x_3156_ = l_Lean_Parser_sepByIndent_formatter___redArg(v_p_3148_, v_pSep_3150_, v_a_3151_, v_a_3152_, v_a_3153_, v_a_3154_);
return v___x_3156_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_sepBy1Indent_formatter___boxed(lean_object* v_p_3157_, lean_object* v___sep_3158_, lean_object* v_pSep_3159_, lean_object* v_a_3160_, lean_object* v_a_3161_, lean_object* v_a_3162_, lean_object* v_a_3163_, lean_object* v_a_3164_){
_start:
{
lean_object* v_res_3165_; 
v_res_3165_ = l_Lean_Parser_sepBy1Indent_formatter(v_p_3157_, v___sep_3158_, v_pSep_3159_, v_a_3160_, v_a_3161_, v_a_3162_, v_a_3163_);
lean_dec(v_a_3163_);
lean_dec_ref(v_a_3162_);
lean_dec(v_a_3161_);
lean_dec_ref(v_a_3160_);
lean_dec_ref(v___sep_3158_);
return v_res_3165_;
}
}
static lean_object* _init_l_Lean_Parser_sepByIndent_parenthesizer___closed__0(void){
_start:
{
lean_object* v___f_3166_; lean_object* v___x_3167_; lean_object* v___x_3168_; 
v___f_3166_ = ((lean_object*)(l_Lean_Parser_mkAntiquot_parenthesizer___closed__0));
v___x_3167_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_checkLinebreakBefore_parenthesizer___boxed), 5, 0);
v___x_3168_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed), 7, 2);
lean_closure_set(v___x_3168_, 0, v___x_3167_);
lean_closure_set(v___x_3168_, 1, v___f_3166_);
return v___x_3168_;
}
}
static lean_object* _init_l_Lean_Parser_sepByIndent_parenthesizer___closed__1(void){
_start:
{
lean_object* v___x_3169_; lean_object* v___x_3170_; lean_object* v___x_3171_; 
v___x_3169_ = lean_obj_once(&l_Lean_Parser_sepByIndent_parenthesizer___closed__0, &l_Lean_Parser_sepByIndent_parenthesizer___closed__0_once, _init_l_Lean_Parser_sepByIndent_parenthesizer___closed__0);
v___x_3170_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_checkColEq_parenthesizer___boxed), 5, 0);
v___x_3171_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed), 7, 2);
lean_closure_set(v___x_3171_, 0, v___x_3170_);
lean_closure_set(v___x_3171_, 1, v___x_3169_);
return v___x_3171_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_sepByIndent_parenthesizer(lean_object* v_p_3172_, lean_object* v_sep_3173_, lean_object* v_psep_3174_, uint8_t v_allowTrailingSep_3175_, lean_object* v_a_3176_, lean_object* v_a_3177_, lean_object* v_a_3178_, lean_object* v_a_3179_){
_start:
{
lean_object* v___x_3181_; lean_object* v___x_3182_; lean_object* v___x_3183_; lean_object* v___x_3184_; lean_object* v___x_3185_; lean_object* v___x_3186_; lean_object* v___x_3187_; lean_object* v___x_3188_; lean_object* v___x_3189_; lean_object* v___x_3190_; 
v___x_3181_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_checkColGe_parenthesizer___boxed), 5, 0);
v___x_3182_ = ((lean_object*)(l_Lean_Parser_sepByElemParser_formatter___closed__1));
v___x_3183_ = ((lean_object*)(l_Lean_Parser_many_parenthesizer___closed__0));
v___x_3184_ = lean_alloc_closure((void*)(l_Lean_Parser_withAntiquotSpliceAndSuffix_parenthesizer___boxed), 8, 3);
lean_closure_set(v___x_3184_, 0, v___x_3182_);
lean_closure_set(v___x_3184_, 1, v_p_3172_);
lean_closure_set(v___x_3184_, 2, v___x_3183_);
v___x_3185_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed), 7, 2);
lean_closure_set(v___x_3185_, 0, v___x_3181_);
lean_closure_set(v___x_3185_, 1, v___x_3184_);
v___x_3186_ = lean_obj_once(&l_Lean_Parser_sepByIndent_parenthesizer___closed__1, &l_Lean_Parser_sepByIndent_parenthesizer___closed__1_once, _init_l_Lean_Parser_sepByIndent_parenthesizer___closed__1);
v___x_3187_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_orelse_parenthesizer___boxed), 7, 2);
lean_closure_set(v___x_3187_, 0, v_psep_3174_);
lean_closure_set(v___x_3187_, 1, v___x_3186_);
v___x_3188_ = lean_box(v_allowTrailingSep_3175_);
v___x_3189_ = lean_alloc_closure((void*)(l_Lean_Parser_sepBy_parenthesizer___boxed), 9, 4);
lean_closure_set(v___x_3189_, 0, v___x_3185_);
lean_closure_set(v___x_3189_, 1, v_sep_3173_);
lean_closure_set(v___x_3189_, 2, v___x_3187_);
lean_closure_set(v___x_3189_, 3, v___x_3188_);
v___x_3190_ = l_Lean_PrettyPrinter_Parenthesizer_withPosition_parenthesizer(v___x_3189_, v_a_3176_, v_a_3177_, v_a_3178_, v_a_3179_);
return v___x_3190_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_sepByIndent_parenthesizer___boxed(lean_object* v_p_3191_, lean_object* v_sep_3192_, lean_object* v_psep_3193_, lean_object* v_allowTrailingSep_3194_, lean_object* v_a_3195_, lean_object* v_a_3196_, lean_object* v_a_3197_, lean_object* v_a_3198_, lean_object* v_a_3199_){
_start:
{
uint8_t v_allowTrailingSep_boxed_3200_; lean_object* v_res_3201_; 
v_allowTrailingSep_boxed_3200_ = lean_unbox(v_allowTrailingSep_3194_);
v_res_3201_ = l_Lean_Parser_sepByIndent_parenthesizer(v_p_3191_, v_sep_3192_, v_psep_3193_, v_allowTrailingSep_boxed_3200_, v_a_3195_, v_a_3196_, v_a_3197_, v_a_3198_);
lean_dec(v_a_3198_);
lean_dec_ref(v_a_3197_);
lean_dec(v_a_3196_);
lean_dec_ref(v_a_3195_);
return v_res_3201_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_sepBy1Indent_parenthesizer(lean_object* v_p_3202_, lean_object* v_sep_3203_, lean_object* v_psep_3204_, uint8_t v_allowTrailingSep_3205_, lean_object* v_a_3206_, lean_object* v_a_3207_, lean_object* v_a_3208_, lean_object* v_a_3209_){
_start:
{
lean_object* v___x_3211_; lean_object* v___x_3212_; lean_object* v___x_3213_; lean_object* v___x_3214_; lean_object* v___x_3215_; lean_object* v___x_3216_; lean_object* v___x_3217_; lean_object* v___x_3218_; lean_object* v___x_3219_; lean_object* v___x_3220_; 
v___x_3211_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_checkColGe_parenthesizer___boxed), 5, 0);
v___x_3212_ = ((lean_object*)(l_Lean_Parser_sepByElemParser_formatter___closed__1));
v___x_3213_ = ((lean_object*)(l_Lean_Parser_many_parenthesizer___closed__0));
v___x_3214_ = lean_alloc_closure((void*)(l_Lean_Parser_withAntiquotSpliceAndSuffix_parenthesizer___boxed), 8, 3);
lean_closure_set(v___x_3214_, 0, v___x_3212_);
lean_closure_set(v___x_3214_, 1, v_p_3202_);
lean_closure_set(v___x_3214_, 2, v___x_3213_);
v___x_3215_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed), 7, 2);
lean_closure_set(v___x_3215_, 0, v___x_3211_);
lean_closure_set(v___x_3215_, 1, v___x_3214_);
v___x_3216_ = lean_obj_once(&l_Lean_Parser_sepByIndent_parenthesizer___closed__1, &l_Lean_Parser_sepByIndent_parenthesizer___closed__1_once, _init_l_Lean_Parser_sepByIndent_parenthesizer___closed__1);
v___x_3217_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_orelse_parenthesizer___boxed), 7, 2);
lean_closure_set(v___x_3217_, 0, v_psep_3204_);
lean_closure_set(v___x_3217_, 1, v___x_3216_);
v___x_3218_ = lean_box(v_allowTrailingSep_3205_);
v___x_3219_ = lean_alloc_closure((void*)(l_Lean_Parser_sepBy1_parenthesizer___boxed), 9, 4);
lean_closure_set(v___x_3219_, 0, v___x_3215_);
lean_closure_set(v___x_3219_, 1, v_sep_3203_);
lean_closure_set(v___x_3219_, 2, v___x_3217_);
lean_closure_set(v___x_3219_, 3, v___x_3218_);
v___x_3220_ = l_Lean_PrettyPrinter_Parenthesizer_withPosition_parenthesizer(v___x_3219_, v_a_3206_, v_a_3207_, v_a_3208_, v_a_3209_);
return v___x_3220_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_sepBy1Indent_parenthesizer___boxed(lean_object* v_p_3221_, lean_object* v_sep_3222_, lean_object* v_psep_3223_, lean_object* v_allowTrailingSep_3224_, lean_object* v_a_3225_, lean_object* v_a_3226_, lean_object* v_a_3227_, lean_object* v_a_3228_, lean_object* v_a_3229_){
_start:
{
uint8_t v_allowTrailingSep_boxed_3230_; lean_object* v_res_3231_; 
v_allowTrailingSep_boxed_3230_ = lean_unbox(v_allowTrailingSep_3224_);
v_res_3231_ = l_Lean_Parser_sepBy1Indent_parenthesizer(v_p_3221_, v_sep_3222_, v_psep_3223_, v_allowTrailingSep_boxed_3230_, v_a_3225_, v_a_3226_, v_a_3227_, v_a_3228_);
lean_dec(v_a_3228_);
lean_dec_ref(v_a_3227_);
lean_dec(v_a_3226_);
lean_dec_ref(v_a_3225_);
return v_res_3231_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_notSymbol_formatter___redArg(){
_start:
{
lean_object* v___x_3233_; 
v___x_3233_ = l_Lean_PrettyPrinter_Formatter_notFollowedBy_formatter___redArg();
return v___x_3233_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_notSymbol_formatter___redArg___boxed(lean_object* v_a_3234_){
_start:
{
lean_object* v_res_3235_; 
v_res_3235_ = l_Lean_Parser_notSymbol_formatter___redArg();
return v_res_3235_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_notSymbol_formatter(lean_object* v_s_3236_, lean_object* v_a_3237_, lean_object* v_a_3238_, lean_object* v_a_3239_, lean_object* v_a_3240_){
_start:
{
lean_object* v___x_3242_; 
v___x_3242_ = l_Lean_PrettyPrinter_Formatter_notFollowedBy_formatter___redArg();
return v___x_3242_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_notSymbol_formatter___boxed(lean_object* v_s_3243_, lean_object* v_a_3244_, lean_object* v_a_3245_, lean_object* v_a_3246_, lean_object* v_a_3247_, lean_object* v_a_3248_){
_start:
{
lean_object* v_res_3249_; 
v_res_3249_ = l_Lean_Parser_notSymbol_formatter(v_s_3243_, v_a_3244_, v_a_3245_, v_a_3246_, v_a_3247_);
lean_dec(v_a_3247_);
lean_dec_ref(v_a_3246_);
lean_dec(v_a_3245_);
lean_dec_ref(v_a_3244_);
lean_dec_ref(v_s_3243_);
return v_res_3249_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_notSymbol_parenthesizer___redArg(){
_start:
{
lean_object* v___x_3251_; 
v___x_3251_ = l_Lean_PrettyPrinter_Parenthesizer_notFollowedBy_parenthesizer___redArg();
return v___x_3251_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_notSymbol_parenthesizer___redArg___boxed(lean_object* v_a_3252_){
_start:
{
lean_object* v_res_3253_; 
v_res_3253_ = l_Lean_Parser_notSymbol_parenthesizer___redArg();
return v_res_3253_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_notSymbol_parenthesizer(lean_object* v_s_3254_, lean_object* v_a_3255_, lean_object* v_a_3256_, lean_object* v_a_3257_, lean_object* v_a_3258_){
_start:
{
lean_object* v___x_3260_; 
v___x_3260_ = l_Lean_PrettyPrinter_Parenthesizer_notFollowedBy_parenthesizer___redArg();
return v___x_3260_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_notSymbol_parenthesizer___boxed(lean_object* v_s_3261_, lean_object* v_a_3262_, lean_object* v_a_3263_, lean_object* v_a_3264_, lean_object* v_a_3265_, lean_object* v_a_3266_){
_start:
{
lean_object* v_res_3267_; 
v_res_3267_ = l_Lean_Parser_notSymbol_parenthesizer(v_s_3261_, v_a_3262_, v_a_3263_, v_a_3264_, v_a_3265_);
lean_dec(v_a_3265_);
lean_dec_ref(v_a_3264_);
lean_dec(v_a_3263_);
lean_dec_ref(v_a_3262_);
lean_dec_ref(v_s_3261_);
return v_res_3267_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_notSymbol(lean_object* v_s_3268_){
_start:
{
lean_object* v___x_3269_; lean_object* v___x_3270_; 
lean_inc_ref(v_s_3268_);
v___x_3269_ = l_Lean_Parser_symbol(v_s_3268_);
v___x_3270_ = l_Lean_Parser_notFollowedBy(v___x_3269_, v_s_3268_);
return v___x_3270_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_patternIgnore_formatter(lean_object* v_p_3274_, lean_object* v_a_3275_, lean_object* v_a_3276_, lean_object* v_a_3277_, lean_object* v_a_3278_){
_start:
{
lean_object* v___x_3280_; lean_object* v___x_3281_; 
v___x_3280_ = ((lean_object*)(l_Lean_Parser_patternIgnore_formatter___closed__1));
v___x_3281_ = l_Lean_PrettyPrinter_Formatter_node_formatter(v___x_3280_, v_p_3274_, v_a_3275_, v_a_3276_, v_a_3277_, v_a_3278_);
return v___x_3281_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_patternIgnore_formatter___boxed(lean_object* v_p_3282_, lean_object* v_a_3283_, lean_object* v_a_3284_, lean_object* v_a_3285_, lean_object* v_a_3286_, lean_object* v_a_3287_){
_start:
{
lean_object* v_res_3288_; 
v_res_3288_ = l_Lean_Parser_patternIgnore_formatter(v_p_3282_, v_a_3283_, v_a_3284_, v_a_3285_, v_a_3286_);
lean_dec(v_a_3286_);
lean_dec_ref(v_a_3285_);
lean_dec(v_a_3284_);
lean_dec_ref(v_a_3283_);
return v_res_3288_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_patternIgnore_parenthesizer(lean_object* v_p_3289_, lean_object* v_a_3290_, lean_object* v_a_3291_, lean_object* v_a_3292_, lean_object* v_a_3293_){
_start:
{
lean_object* v___x_3295_; lean_object* v___x_3296_; 
v___x_3295_ = ((lean_object*)(l_Lean_Parser_patternIgnore_formatter___closed__1));
v___x_3296_ = l_Lean_PrettyPrinter_Parenthesizer_node_parenthesizer(v___x_3295_, v_p_3289_, v_a_3290_, v_a_3291_, v_a_3292_, v_a_3293_);
return v___x_3296_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_patternIgnore_parenthesizer___boxed(lean_object* v_p_3297_, lean_object* v_a_3298_, lean_object* v_a_3299_, lean_object* v_a_3300_, lean_object* v_a_3301_, lean_object* v_a_3302_){
_start:
{
lean_object* v_res_3303_; 
v_res_3303_ = l_Lean_Parser_patternIgnore_parenthesizer(v_p_3297_, v_a_3298_, v_a_3299_, v_a_3300_, v_a_3301_);
lean_dec(v_a_3301_);
lean_dec_ref(v_a_3300_);
lean_dec(v_a_3299_);
lean_dec_ref(v_a_3298_);
return v_res_3303_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_patternIgnore(lean_object* v_p_3304_){
_start:
{
lean_object* v___x_3305_; lean_object* v___x_3306_; 
v___x_3305_ = ((lean_object*)(l_Lean_Parser_patternIgnore_formatter___closed__1));
v___x_3306_ = l_Lean_Parser_node(v___x_3305_, v_p_3304_);
return v___x_3306_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_patternIgnore___regBuiltin_Lean_Parser_patternIgnore_docString__1(){
_start:
{
lean_object* v___x_3313_; lean_object* v___x_3314_; lean_object* v___x_3315_; 
v___x_3313_ = ((lean_object*)(l___private_Lean_Parser_Extra_0__Lean_Parser_patternIgnore___regBuiltin_Lean_Parser_patternIgnore_docString__1___closed__0));
v___x_3314_ = ((lean_object*)(l___private_Lean_Parser_Extra_0__Lean_Parser_patternIgnore___regBuiltin_Lean_Parser_patternIgnore_docString__1___closed__1));
v___x_3315_ = l_Lean_addBuiltinDocString(v___x_3313_, v___x_3314_);
return v___x_3315_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_patternIgnore___regBuiltin_Lean_Parser_patternIgnore_docString__1___boxed(lean_object* v_a_3316_){
_start:
{
lean_object* v_res_3317_; 
v_res_3317_ = l___private_Lean_Parser_Extra_0__Lean_Parser_patternIgnore___regBuiltin_Lean_Parser_patternIgnore_docString__1();
return v_res_3317_;
}
}
static lean_object* _init_l_Lean_Parser_ppHardSpace(void){
_start:
{
lean_object* v___x_3318_; 
v___x_3318_ = l_Lean_Parser_skip;
return v___x_3318_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_ppHardSpace___regBuiltin_Lean_Parser_ppHardSpace_docString__1(){
_start:
{
lean_object* v___x_3326_; lean_object* v___x_3327_; lean_object* v___x_3328_; 
v___x_3326_ = ((lean_object*)(l___private_Lean_Parser_Extra_0__Lean_Parser_ppHardSpace___regBuiltin_Lean_Parser_ppHardSpace_docString__1___closed__1));
v___x_3327_ = ((lean_object*)(l___private_Lean_Parser_Extra_0__Lean_Parser_ppHardSpace___regBuiltin_Lean_Parser_ppHardSpace_docString__1___closed__2));
v___x_3328_ = l_Lean_addBuiltinDocString(v___x_3326_, v___x_3327_);
return v___x_3328_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_ppHardSpace___regBuiltin_Lean_Parser_ppHardSpace_docString__1___boxed(lean_object* v_a_3329_){
_start:
{
lean_object* v_res_3330_; 
v_res_3330_ = l___private_Lean_Parser_Extra_0__Lean_Parser_ppHardSpace___regBuiltin_Lean_Parser_ppHardSpace_docString__1();
return v_res_3330_;
}
}
static lean_object* _init_l_Lean_Parser_ppSpace(void){
_start:
{
lean_object* v___x_3331_; 
v___x_3331_ = l_Lean_Parser_skip;
return v___x_3331_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_ppSpace___regBuiltin_Lean_Parser_ppSpace_docString__1(){
_start:
{
lean_object* v___x_3339_; lean_object* v___x_3340_; lean_object* v___x_3341_; 
v___x_3339_ = ((lean_object*)(l___private_Lean_Parser_Extra_0__Lean_Parser_ppSpace___regBuiltin_Lean_Parser_ppSpace_docString__1___closed__1));
v___x_3340_ = ((lean_object*)(l___private_Lean_Parser_Extra_0__Lean_Parser_ppSpace___regBuiltin_Lean_Parser_ppSpace_docString__1___closed__2));
v___x_3341_ = l_Lean_addBuiltinDocString(v___x_3339_, v___x_3340_);
return v___x_3341_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_ppSpace___regBuiltin_Lean_Parser_ppSpace_docString__1___boxed(lean_object* v_a_3342_){
_start:
{
lean_object* v_res_3343_; 
v_res_3343_ = l___private_Lean_Parser_Extra_0__Lean_Parser_ppSpace___regBuiltin_Lean_Parser_ppSpace_docString__1();
return v_res_3343_;
}
}
static lean_object* _init_l_Lean_Parser_ppLine(void){
_start:
{
lean_object* v___x_3344_; 
v___x_3344_ = l_Lean_Parser_skip;
return v___x_3344_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_ppLine___regBuiltin_Lean_Parser_ppLine_docString__1(){
_start:
{
lean_object* v___x_3352_; lean_object* v___x_3353_; lean_object* v___x_3354_; 
v___x_3352_ = ((lean_object*)(l___private_Lean_Parser_Extra_0__Lean_Parser_ppLine___regBuiltin_Lean_Parser_ppLine_docString__1___closed__1));
v___x_3353_ = ((lean_object*)(l___private_Lean_Parser_Extra_0__Lean_Parser_ppLine___regBuiltin_Lean_Parser_ppLine_docString__1___closed__2));
v___x_3354_ = l_Lean_addBuiltinDocString(v___x_3352_, v___x_3353_);
return v___x_3354_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_ppLine___regBuiltin_Lean_Parser_ppLine_docString__1___boxed(lean_object* v_a_3355_){
_start:
{
lean_object* v_res_3356_; 
v_res_3356_ = l___private_Lean_Parser_Extra_0__Lean_Parser_ppLine___regBuiltin_Lean_Parser_ppLine_docString__1();
return v_res_3356_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ppRealFill(lean_object* v_a_3357_){
_start:
{
lean_inc_ref(v_a_3357_);
return v_a_3357_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ppRealFill___boxed(lean_object* v_a_3358_){
_start:
{
lean_object* v_res_3359_; 
v_res_3359_ = l_Lean_Parser_ppRealFill(v_a_3358_);
lean_dec_ref(v_a_3358_);
return v_res_3359_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_ppRealFill___regBuiltin_Lean_Parser_ppRealFill_docString__1(){
_start:
{
lean_object* v___x_3367_; lean_object* v___x_3368_; lean_object* v___x_3369_; 
v___x_3367_ = ((lean_object*)(l___private_Lean_Parser_Extra_0__Lean_Parser_ppRealFill___regBuiltin_Lean_Parser_ppRealFill_docString__1___closed__1));
v___x_3368_ = ((lean_object*)(l___private_Lean_Parser_Extra_0__Lean_Parser_ppRealFill___regBuiltin_Lean_Parser_ppRealFill_docString__1___closed__2));
v___x_3369_ = l_Lean_addBuiltinDocString(v___x_3367_, v___x_3368_);
return v___x_3369_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_ppRealFill___regBuiltin_Lean_Parser_ppRealFill_docString__1___boxed(lean_object* v_a_3370_){
_start:
{
lean_object* v_res_3371_; 
v_res_3371_ = l___private_Lean_Parser_Extra_0__Lean_Parser_ppRealFill___regBuiltin_Lean_Parser_ppRealFill_docString__1();
return v_res_3371_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ppRealGroup(lean_object* v_a_3372_){
_start:
{
lean_inc_ref(v_a_3372_);
return v_a_3372_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ppRealGroup___boxed(lean_object* v_a_3373_){
_start:
{
lean_object* v_res_3374_; 
v_res_3374_ = l_Lean_Parser_ppRealGroup(v_a_3373_);
lean_dec_ref(v_a_3373_);
return v_res_3374_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_ppRealGroup___regBuiltin_Lean_Parser_ppRealGroup_docString__1(){
_start:
{
lean_object* v___x_3382_; lean_object* v___x_3383_; lean_object* v___x_3384_; 
v___x_3382_ = ((lean_object*)(l___private_Lean_Parser_Extra_0__Lean_Parser_ppRealGroup___regBuiltin_Lean_Parser_ppRealGroup_docString__1___closed__1));
v___x_3383_ = ((lean_object*)(l___private_Lean_Parser_Extra_0__Lean_Parser_ppRealGroup___regBuiltin_Lean_Parser_ppRealGroup_docString__1___closed__2));
v___x_3384_ = l_Lean_addBuiltinDocString(v___x_3382_, v___x_3383_);
return v___x_3384_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_ppRealGroup___regBuiltin_Lean_Parser_ppRealGroup_docString__1___boxed(lean_object* v_a_3385_){
_start:
{
lean_object* v_res_3386_; 
v_res_3386_ = l___private_Lean_Parser_Extra_0__Lean_Parser_ppRealGroup___regBuiltin_Lean_Parser_ppRealGroup_docString__1();
return v_res_3386_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ppIndent(lean_object* v_a_3387_){
_start:
{
lean_inc_ref(v_a_3387_);
return v_a_3387_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ppIndent___boxed(lean_object* v_a_3388_){
_start:
{
lean_object* v_res_3389_; 
v_res_3389_ = l_Lean_Parser_ppIndent(v_a_3388_);
lean_dec_ref(v_a_3388_);
return v_res_3389_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_ppIndent___regBuiltin_Lean_Parser_ppIndent_docString__1(){
_start:
{
lean_object* v___x_3397_; lean_object* v___x_3398_; lean_object* v___x_3399_; 
v___x_3397_ = ((lean_object*)(l___private_Lean_Parser_Extra_0__Lean_Parser_ppIndent___regBuiltin_Lean_Parser_ppIndent_docString__1___closed__1));
v___x_3398_ = ((lean_object*)(l___private_Lean_Parser_Extra_0__Lean_Parser_ppIndent___regBuiltin_Lean_Parser_ppIndent_docString__1___closed__2));
v___x_3399_ = l_Lean_addBuiltinDocString(v___x_3397_, v___x_3398_);
return v___x_3399_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_ppIndent___regBuiltin_Lean_Parser_ppIndent_docString__1___boxed(lean_object* v_a_3400_){
_start:
{
lean_object* v_res_3401_; 
v_res_3401_ = l___private_Lean_Parser_Extra_0__Lean_Parser_ppIndent___regBuiltin_Lean_Parser_ppIndent_docString__1();
return v_res_3401_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ppGroup(lean_object* v_p_3402_){
_start:
{
lean_inc_ref(v_p_3402_);
return v_p_3402_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ppGroup___boxed(lean_object* v_p_3403_){
_start:
{
lean_object* v_res_3404_; 
v_res_3404_ = l_Lean_Parser_ppGroup(v_p_3403_);
lean_dec_ref(v_p_3403_);
return v_res_3404_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_ppGroup___regBuiltin_Lean_Parser_ppGroup_docString__1(){
_start:
{
lean_object* v___x_3412_; lean_object* v___x_3413_; lean_object* v___x_3414_; 
v___x_3412_ = ((lean_object*)(l___private_Lean_Parser_Extra_0__Lean_Parser_ppGroup___regBuiltin_Lean_Parser_ppGroup_docString__1___closed__1));
v___x_3413_ = ((lean_object*)(l___private_Lean_Parser_Extra_0__Lean_Parser_ppGroup___regBuiltin_Lean_Parser_ppGroup_docString__1___closed__2));
v___x_3414_ = l_Lean_addBuiltinDocString(v___x_3412_, v___x_3413_);
return v___x_3414_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_ppGroup___regBuiltin_Lean_Parser_ppGroup_docString__1___boxed(lean_object* v_a_3415_){
_start:
{
lean_object* v_res_3416_; 
v_res_3416_ = l___private_Lean_Parser_Extra_0__Lean_Parser_ppGroup___regBuiltin_Lean_Parser_ppGroup_docString__1();
return v_res_3416_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ppDedent(lean_object* v_a_3417_){
_start:
{
lean_inc_ref(v_a_3417_);
return v_a_3417_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ppDedent___boxed(lean_object* v_a_3418_){
_start:
{
lean_object* v_res_3419_; 
v_res_3419_ = l_Lean_Parser_ppDedent(v_a_3418_);
lean_dec_ref(v_a_3418_);
return v_res_3419_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_ppDedent___regBuiltin_Lean_Parser_ppDedent_docString__1(){
_start:
{
lean_object* v___x_3427_; lean_object* v___x_3428_; lean_object* v___x_3429_; 
v___x_3427_ = ((lean_object*)(l___private_Lean_Parser_Extra_0__Lean_Parser_ppDedent___regBuiltin_Lean_Parser_ppDedent_docString__1___closed__1));
v___x_3428_ = ((lean_object*)(l___private_Lean_Parser_Extra_0__Lean_Parser_ppDedent___regBuiltin_Lean_Parser_ppDedent_docString__1___closed__2));
v___x_3429_ = l_Lean_addBuiltinDocString(v___x_3427_, v___x_3428_);
return v___x_3429_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_ppDedent___regBuiltin_Lean_Parser_ppDedent_docString__1___boxed(lean_object* v_a_3430_){
_start:
{
lean_object* v_res_3431_; 
v_res_3431_ = l___private_Lean_Parser_Extra_0__Lean_Parser_ppDedent___regBuiltin_Lean_Parser_ppDedent_docString__1();
return v_res_3431_;
}
}
static lean_object* _init_l_Lean_Parser_ppAllowUngrouped(void){
_start:
{
lean_object* v___x_3432_; 
v___x_3432_ = l_Lean_Parser_skip;
return v___x_3432_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_ppAllowUngrouped___regBuiltin_Lean_Parser_ppAllowUngrouped_docString__1(){
_start:
{
lean_object* v___x_3440_; lean_object* v___x_3441_; lean_object* v___x_3442_; 
v___x_3440_ = ((lean_object*)(l___private_Lean_Parser_Extra_0__Lean_Parser_ppAllowUngrouped___regBuiltin_Lean_Parser_ppAllowUngrouped_docString__1___closed__1));
v___x_3441_ = ((lean_object*)(l___private_Lean_Parser_Extra_0__Lean_Parser_ppAllowUngrouped___regBuiltin_Lean_Parser_ppAllowUngrouped_docString__1___closed__2));
v___x_3442_ = l_Lean_addBuiltinDocString(v___x_3440_, v___x_3441_);
return v___x_3442_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_ppAllowUngrouped___regBuiltin_Lean_Parser_ppAllowUngrouped_docString__1___boxed(lean_object* v_a_3443_){
_start:
{
lean_object* v_res_3444_; 
v_res_3444_ = l___private_Lean_Parser_Extra_0__Lean_Parser_ppAllowUngrouped___regBuiltin_Lean_Parser_ppAllowUngrouped_docString__1();
return v_res_3444_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ppDedentIfGrouped(lean_object* v_a_3445_){
_start:
{
lean_inc_ref(v_a_3445_);
return v_a_3445_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ppDedentIfGrouped___boxed(lean_object* v_a_3446_){
_start:
{
lean_object* v_res_3447_; 
v_res_3447_ = l_Lean_Parser_ppDedentIfGrouped(v_a_3446_);
lean_dec_ref(v_a_3446_);
return v_res_3447_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_ppDedentIfGrouped___regBuiltin_Lean_Parser_ppDedentIfGrouped_docString__1(){
_start:
{
lean_object* v___x_3455_; lean_object* v___x_3456_; lean_object* v___x_3457_; 
v___x_3455_ = ((lean_object*)(l___private_Lean_Parser_Extra_0__Lean_Parser_ppDedentIfGrouped___regBuiltin_Lean_Parser_ppDedentIfGrouped_docString__1___closed__1));
v___x_3456_ = ((lean_object*)(l___private_Lean_Parser_Extra_0__Lean_Parser_ppDedentIfGrouped___regBuiltin_Lean_Parser_ppDedentIfGrouped_docString__1___closed__2));
v___x_3457_ = l_Lean_addBuiltinDocString(v___x_3455_, v___x_3456_);
return v___x_3457_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_ppDedentIfGrouped___regBuiltin_Lean_Parser_ppDedentIfGrouped_docString__1___boxed(lean_object* v_a_3458_){
_start:
{
lean_object* v_res_3459_; 
v_res_3459_ = l___private_Lean_Parser_Extra_0__Lean_Parser_ppDedentIfGrouped___regBuiltin_Lean_Parser_ppDedentIfGrouped_docString__1();
return v_res_3459_;
}
}
static lean_object* _init_l_Lean_Parser_ppHardLineUnlessUngrouped(void){
_start:
{
lean_object* v___x_3460_; 
v___x_3460_ = l_Lean_Parser_skip;
return v___x_3460_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_ppHardLineUnlessUngrouped___regBuiltin_Lean_Parser_ppHardLineUnlessUngrouped_docString__1(){
_start:
{
lean_object* v___x_3468_; lean_object* v___x_3469_; lean_object* v___x_3470_; 
v___x_3468_ = ((lean_object*)(l___private_Lean_Parser_Extra_0__Lean_Parser_ppHardLineUnlessUngrouped___regBuiltin_Lean_Parser_ppHardLineUnlessUngrouped_docString__1___closed__1));
v___x_3469_ = ((lean_object*)(l___private_Lean_Parser_Extra_0__Lean_Parser_ppHardLineUnlessUngrouped___regBuiltin_Lean_Parser_ppHardLineUnlessUngrouped_docString__1___closed__2));
v___x_3470_ = l_Lean_addBuiltinDocString(v___x_3468_, v___x_3469_);
return v___x_3470_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_ppHardLineUnlessUngrouped___regBuiltin_Lean_Parser_ppHardLineUnlessUngrouped_docString__1___boxed(lean_object* v_a_3471_){
_start:
{
lean_object* v_res_3472_; 
v_res_3472_ = l___private_Lean_Parser_Extra_0__Lean_Parser_ppHardLineUnlessUngrouped___regBuiltin_Lean_Parser_ppHardLineUnlessUngrouped_docString__1();
return v_res_3472_;
}
}
LEAN_EXPORT lean_object* l_Lean_ppHardSpace_formatter___redArg(lean_object* v_a_3476_){
_start:
{
lean_object* v___x_3478_; lean_object* v___x_3479_; 
v___x_3478_ = ((lean_object*)(l_Lean_ppHardSpace_formatter___redArg___closed__1));
v___x_3479_ = l_Lean_PrettyPrinter_Formatter_pushWhitespace___redArg(v___x_3478_, v_a_3476_);
return v___x_3479_;
}
}
LEAN_EXPORT lean_object* l_Lean_ppHardSpace_formatter___redArg___boxed(lean_object* v_a_3480_, lean_object* v_a_3481_){
_start:
{
lean_object* v_res_3482_; 
v_res_3482_ = l_Lean_ppHardSpace_formatter___redArg(v_a_3480_);
lean_dec(v_a_3480_);
return v_res_3482_;
}
}
LEAN_EXPORT lean_object* l_Lean_ppHardSpace_formatter(lean_object* v_a_3483_, lean_object* v_a_3484_, lean_object* v_a_3485_, lean_object* v_a_3486_){
_start:
{
lean_object* v___x_3488_; 
v___x_3488_ = l_Lean_ppHardSpace_formatter___redArg(v_a_3484_);
return v___x_3488_;
}
}
LEAN_EXPORT lean_object* l_Lean_ppHardSpace_formatter___boxed(lean_object* v_a_3489_, lean_object* v_a_3490_, lean_object* v_a_3491_, lean_object* v_a_3492_, lean_object* v_a_3493_){
_start:
{
lean_object* v_res_3494_; 
v_res_3494_ = l_Lean_ppHardSpace_formatter(v_a_3489_, v_a_3490_, v_a_3491_, v_a_3492_);
lean_dec(v_a_3492_);
lean_dec_ref(v_a_3491_);
lean_dec(v_a_3490_);
lean_dec_ref(v_a_3489_);
return v_res_3494_;
}
}
LEAN_EXPORT lean_object* l_Lean_ppSpace_formatter___redArg(lean_object* v_a_3495_){
_start:
{
lean_object* v___x_3497_; 
v___x_3497_ = l_Lean_PrettyPrinter_Formatter_pushLine___redArg(v_a_3495_);
return v___x_3497_;
}
}
LEAN_EXPORT lean_object* l_Lean_ppSpace_formatter___redArg___boxed(lean_object* v_a_3498_, lean_object* v_a_3499_){
_start:
{
lean_object* v_res_3500_; 
v_res_3500_ = l_Lean_ppSpace_formatter___redArg(v_a_3498_);
lean_dec(v_a_3498_);
return v_res_3500_;
}
}
LEAN_EXPORT lean_object* l_Lean_ppSpace_formatter(lean_object* v_a_3501_, lean_object* v_a_3502_, lean_object* v_a_3503_, lean_object* v_a_3504_){
_start:
{
lean_object* v___x_3506_; 
v___x_3506_ = l_Lean_PrettyPrinter_Formatter_pushLine___redArg(v_a_3502_);
return v___x_3506_;
}
}
LEAN_EXPORT lean_object* l_Lean_ppSpace_formatter___boxed(lean_object* v_a_3507_, lean_object* v_a_3508_, lean_object* v_a_3509_, lean_object* v_a_3510_, lean_object* v_a_3511_){
_start:
{
lean_object* v_res_3512_; 
v_res_3512_ = l_Lean_ppSpace_formatter(v_a_3507_, v_a_3508_, v_a_3509_, v_a_3510_);
lean_dec(v_a_3510_);
lean_dec_ref(v_a_3509_);
lean_dec(v_a_3508_);
lean_dec_ref(v_a_3507_);
return v_res_3512_;
}
}
LEAN_EXPORT lean_object* l_Lean_ppLine_formatter___redArg(lean_object* v_a_3513_){
_start:
{
lean_object* v___x_3515_; lean_object* v___x_3516_; 
v___x_3515_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Parser_sepByIndent_formatter_spec__3___redArg___closed__1));
v___x_3516_ = l_Lean_PrettyPrinter_Formatter_pushWhitespace___redArg(v___x_3515_, v_a_3513_);
return v___x_3516_;
}
}
LEAN_EXPORT lean_object* l_Lean_ppLine_formatter___redArg___boxed(lean_object* v_a_3517_, lean_object* v_a_3518_){
_start:
{
lean_object* v_res_3519_; 
v_res_3519_ = l_Lean_ppLine_formatter___redArg(v_a_3517_);
lean_dec(v_a_3517_);
return v_res_3519_;
}
}
LEAN_EXPORT lean_object* l_Lean_ppLine_formatter(lean_object* v_a_3520_, lean_object* v_a_3521_, lean_object* v_a_3522_, lean_object* v_a_3523_){
_start:
{
lean_object* v___x_3525_; 
v___x_3525_ = l_Lean_ppLine_formatter___redArg(v_a_3521_);
return v___x_3525_;
}
}
LEAN_EXPORT lean_object* l_Lean_ppLine_formatter___boxed(lean_object* v_a_3526_, lean_object* v_a_3527_, lean_object* v_a_3528_, lean_object* v_a_3529_, lean_object* v_a_3530_){
_start:
{
lean_object* v_res_3531_; 
v_res_3531_ = l_Lean_ppLine_formatter(v_a_3526_, v_a_3527_, v_a_3528_, v_a_3529_);
lean_dec(v_a_3529_);
lean_dec_ref(v_a_3528_);
lean_dec(v_a_3527_);
lean_dec_ref(v_a_3526_);
return v_res_3531_;
}
}
LEAN_EXPORT lean_object* l_Lean_ppRealFill_formatter(lean_object* v_p_3532_, lean_object* v_a_3533_, lean_object* v_a_3534_, lean_object* v_a_3535_, lean_object* v_a_3536_){
_start:
{
lean_object* v___x_3538_; 
v___x_3538_ = l_Lean_PrettyPrinter_Formatter_fill(v_p_3532_, v_a_3533_, v_a_3534_, v_a_3535_, v_a_3536_);
return v___x_3538_;
}
}
LEAN_EXPORT lean_object* l_Lean_ppRealFill_formatter___boxed(lean_object* v_p_3539_, lean_object* v_a_3540_, lean_object* v_a_3541_, lean_object* v_a_3542_, lean_object* v_a_3543_, lean_object* v_a_3544_){
_start:
{
lean_object* v_res_3545_; 
v_res_3545_ = l_Lean_ppRealFill_formatter(v_p_3539_, v_a_3540_, v_a_3541_, v_a_3542_, v_a_3543_);
lean_dec(v_a_3543_);
lean_dec_ref(v_a_3542_);
lean_dec(v_a_3541_);
lean_dec_ref(v_a_3540_);
return v_res_3545_;
}
}
LEAN_EXPORT lean_object* l_Lean_ppRealGroup_formatter(lean_object* v_p_3546_, lean_object* v_a_3547_, lean_object* v_a_3548_, lean_object* v_a_3549_, lean_object* v_a_3550_){
_start:
{
lean_object* v___x_3552_; 
v___x_3552_ = l_Lean_PrettyPrinter_Formatter_group(v_p_3546_, v_a_3547_, v_a_3548_, v_a_3549_, v_a_3550_);
return v___x_3552_;
}
}
LEAN_EXPORT lean_object* l_Lean_ppRealGroup_formatter___boxed(lean_object* v_p_3553_, lean_object* v_a_3554_, lean_object* v_a_3555_, lean_object* v_a_3556_, lean_object* v_a_3557_, lean_object* v_a_3558_){
_start:
{
lean_object* v_res_3559_; 
v_res_3559_ = l_Lean_ppRealGroup_formatter(v_p_3553_, v_a_3554_, v_a_3555_, v_a_3556_, v_a_3557_);
lean_dec(v_a_3557_);
lean_dec_ref(v_a_3556_);
lean_dec(v_a_3555_);
lean_dec_ref(v_a_3554_);
return v_res_3559_;
}
}
LEAN_EXPORT lean_object* l_Lean_ppIndent_formatter(lean_object* v_p_3560_, lean_object* v_a_3561_, lean_object* v_a_3562_, lean_object* v_a_3563_, lean_object* v_a_3564_){
_start:
{
lean_object* v___x_3566_; lean_object* v___x_3567_; 
v___x_3566_ = lean_box(0);
v___x_3567_ = l_Lean_PrettyPrinter_Formatter_indent(v_p_3560_, v___x_3566_, v_a_3561_, v_a_3562_, v_a_3563_, v_a_3564_);
return v___x_3567_;
}
}
LEAN_EXPORT lean_object* l_Lean_ppIndent_formatter___boxed(lean_object* v_p_3568_, lean_object* v_a_3569_, lean_object* v_a_3570_, lean_object* v_a_3571_, lean_object* v_a_3572_, lean_object* v_a_3573_){
_start:
{
lean_object* v_res_3574_; 
v_res_3574_ = l_Lean_ppIndent_formatter(v_p_3568_, v_a_3569_, v_a_3570_, v_a_3571_, v_a_3572_);
lean_dec(v_a_3572_);
lean_dec_ref(v_a_3571_);
lean_dec(v_a_3570_);
lean_dec_ref(v_a_3569_);
return v_res_3574_;
}
}
static lean_object* _init_l_Lean_ppDedent_formatter___closed__0(void){
_start:
{
lean_object* v___x_3575_; lean_object* v___x_3576_; 
v___x_3575_ = lean_unsigned_to_nat(0u);
v___x_3576_ = lean_nat_to_int(v___x_3575_);
return v___x_3576_;
}
}
LEAN_EXPORT lean_object* l_Lean_ppDedent_formatter(lean_object* v_p_3577_, lean_object* v_a_3578_, lean_object* v_a_3579_, lean_object* v_a_3580_, lean_object* v_a_3581_){
_start:
{
lean_object* v_toCold_3583_; lean_object* v_options_3584_; lean_object* v___x_3585_; lean_object* v___x_3586_; lean_object* v___x_3587_; lean_object* v___x_3588_; lean_object* v___x_3589_; lean_object* v___x_3590_; 
v_toCold_3583_ = lean_ctor_get(v_a_3580_, 0);
v_options_3584_ = lean_ctor_get(v_toCold_3583_, 2);
v___x_3585_ = lean_obj_once(&l_Lean_ppDedent_formatter___closed__0, &l_Lean_ppDedent_formatter___closed__0_once, _init_l_Lean_ppDedent_formatter___closed__0);
v___x_3586_ = l_Lean_Std_Format_getIndent(v_options_3584_);
v___x_3587_ = lean_nat_to_int(v___x_3586_);
v___x_3588_ = lean_int_sub(v___x_3585_, v___x_3587_);
lean_dec(v___x_3587_);
v___x_3589_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3589_, 0, v___x_3588_);
v___x_3590_ = l_Lean_PrettyPrinter_Formatter_indent(v_p_3577_, v___x_3589_, v_a_3578_, v_a_3579_, v_a_3580_, v_a_3581_);
return v___x_3590_;
}
}
LEAN_EXPORT lean_object* l_Lean_ppDedent_formatter___boxed(lean_object* v_p_3591_, lean_object* v_a_3592_, lean_object* v_a_3593_, lean_object* v_a_3594_, lean_object* v_a_3595_, lean_object* v_a_3596_){
_start:
{
lean_object* v_res_3597_; 
v_res_3597_ = l_Lean_ppDedent_formatter(v_p_3591_, v_a_3592_, v_a_3593_, v_a_3594_, v_a_3595_);
lean_dec(v_a_3595_);
lean_dec_ref(v_a_3594_);
lean_dec(v_a_3593_);
lean_dec_ref(v_a_3592_);
return v_res_3597_;
}
}
LEAN_EXPORT lean_object* l_Lean_ppAllowUngrouped_formatter___redArg(lean_object* v_a_3598_){
_start:
{
lean_object* v___x_3600_; lean_object* v_stxTrav_3601_; lean_object* v_leadWord_3602_; uint8_t v_leadWordIdent_3603_; uint8_t v_isUngrouped_3604_; lean_object* v_stack_3605_; lean_object* v___x_3607_; uint8_t v_isShared_3608_; uint8_t v_isSharedCheck_3616_; 
v___x_3600_ = lean_st_ref_take(v_a_3598_);
v_stxTrav_3601_ = lean_ctor_get(v___x_3600_, 0);
v_leadWord_3602_ = lean_ctor_get(v___x_3600_, 1);
v_leadWordIdent_3603_ = lean_ctor_get_uint8(v___x_3600_, sizeof(void*)*3);
v_isUngrouped_3604_ = lean_ctor_get_uint8(v___x_3600_, sizeof(void*)*3 + 1);
v_stack_3605_ = lean_ctor_get(v___x_3600_, 2);
v_isSharedCheck_3616_ = !lean_is_exclusive(v___x_3600_);
if (v_isSharedCheck_3616_ == 0)
{
v___x_3607_ = v___x_3600_;
v_isShared_3608_ = v_isSharedCheck_3616_;
goto v_resetjp_3606_;
}
else
{
lean_inc(v_stack_3605_);
lean_inc(v_leadWord_3602_);
lean_inc(v_stxTrav_3601_);
lean_dec(v___x_3600_);
v___x_3607_ = lean_box(0);
v_isShared_3608_ = v_isSharedCheck_3616_;
goto v_resetjp_3606_;
}
v_resetjp_3606_:
{
lean_object* v___x_3609_; uint8_t v___x_3610_; lean_object* v___x_3612_; 
v___x_3609_ = lean_box(0);
v___x_3610_ = 0;
if (v_isShared_3608_ == 0)
{
v___x_3612_ = v___x_3607_;
goto v_reusejp_3611_;
}
else
{
lean_object* v_reuseFailAlloc_3615_; 
v_reuseFailAlloc_3615_ = lean_alloc_ctor(0, 3, 3);
lean_ctor_set(v_reuseFailAlloc_3615_, 0, v_stxTrav_3601_);
lean_ctor_set(v_reuseFailAlloc_3615_, 1, v_leadWord_3602_);
lean_ctor_set(v_reuseFailAlloc_3615_, 2, v_stack_3605_);
lean_ctor_set_uint8(v_reuseFailAlloc_3615_, sizeof(void*)*3, v_leadWordIdent_3603_);
lean_ctor_set_uint8(v_reuseFailAlloc_3615_, sizeof(void*)*3 + 1, v_isUngrouped_3604_);
v___x_3612_ = v_reuseFailAlloc_3615_;
goto v_reusejp_3611_;
}
v_reusejp_3611_:
{
lean_object* v___x_3613_; lean_object* v___x_3614_; 
lean_ctor_set_uint8(v___x_3612_, sizeof(void*)*3 + 2, v___x_3610_);
v___x_3613_ = lean_st_ref_put(v_a_3598_, v___x_3612_);
v___x_3614_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3614_, 0, v___x_3609_);
return v___x_3614_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ppAllowUngrouped_formatter___redArg___boxed(lean_object* v_a_3617_, lean_object* v_a_3618_){
_start:
{
lean_object* v_res_3619_; 
v_res_3619_ = l_Lean_ppAllowUngrouped_formatter___redArg(v_a_3617_);
lean_dec(v_a_3617_);
return v_res_3619_;
}
}
LEAN_EXPORT lean_object* l_Lean_ppAllowUngrouped_formatter(lean_object* v_a_3620_, lean_object* v_a_3621_, lean_object* v_a_3622_, lean_object* v_a_3623_){
_start:
{
lean_object* v___x_3625_; 
v___x_3625_ = l_Lean_ppAllowUngrouped_formatter___redArg(v_a_3621_);
return v___x_3625_;
}
}
LEAN_EXPORT lean_object* l_Lean_ppAllowUngrouped_formatter___boxed(lean_object* v_a_3626_, lean_object* v_a_3627_, lean_object* v_a_3628_, lean_object* v_a_3629_, lean_object* v_a_3630_){
_start:
{
lean_object* v_res_3631_; 
v_res_3631_ = l_Lean_ppAllowUngrouped_formatter(v_a_3626_, v_a_3627_, v_a_3628_, v_a_3629_);
lean_dec(v_a_3629_);
lean_dec_ref(v_a_3628_);
lean_dec(v_a_3627_);
lean_dec_ref(v_a_3626_);
return v_res_3631_;
}
}
static lean_object* _init_l_Lean_ppDedentIfGrouped_formatter___closed__0(void){
_start:
{
lean_object* v___x_3632_; lean_object* v___x_3633_; 
v___x_3632_ = lean_box(0);
v___x_3633_ = l_unsafeCast___redArg(v___x_3632_);
return v___x_3633_;
}
}
LEAN_EXPORT lean_object* l_Lean_ppDedentIfGrouped_formatter(lean_object* v_p_3634_, lean_object* v_a_3635_, lean_object* v_a_3636_, lean_object* v_a_3637_, lean_object* v_a_3638_){
_start:
{
lean_object* v___x_3640_; 
v___x_3640_ = l_Lean_PrettyPrinter_Formatter_concat(v_p_3634_, v_a_3635_, v_a_3636_, v_a_3637_, v_a_3638_);
if (lean_obj_tag(v___x_3640_) == 0)
{
lean_object* v___x_3642_; uint8_t v_isShared_3643_; uint8_t v_isSharedCheck_3690_; 
v_isSharedCheck_3690_ = !lean_is_exclusive(v___x_3640_);
if (v_isSharedCheck_3690_ == 0)
{
lean_object* v_unused_3691_; 
v_unused_3691_ = lean_ctor_get(v___x_3640_, 0);
lean_dec(v_unused_3691_);
v___x_3642_ = v___x_3640_;
v_isShared_3643_ = v_isSharedCheck_3690_;
goto v_resetjp_3641_;
}
else
{
lean_dec(v___x_3640_);
v___x_3642_ = lean_box(0);
v_isShared_3643_ = v_isSharedCheck_3690_;
goto v_resetjp_3641_;
}
v_resetjp_3641_:
{
lean_object* v_toCold_3644_; lean_object* v_options_3645_; lean_object* v___x_3646_; lean_object* v___x_3647_; uint8_t v_isUngrouped_3648_; 
v_toCold_3644_ = lean_ctor_get(v_a_3637_, 0);
v_options_3645_ = lean_ctor_get(v_toCold_3644_, 2);
v___x_3646_ = l_Lean_Std_Format_getIndent(v_options_3645_);
v___x_3647_ = lean_st_ref_get(v_a_3636_);
v_isUngrouped_3648_ = lean_ctor_get_uint8(v___x_3647_, sizeof(void*)*3 + 1);
lean_dec(v___x_3647_);
if (v_isUngrouped_3648_ == 0)
{
lean_object* v___x_3649_; lean_object* v_fst_3651_; lean_object* v_snd_3652_; lean_object* v_stxTrav_3657_; lean_object* v_leadWord_3658_; uint8_t v_leadWordIdent_3659_; uint8_t v_isUngrouped_3660_; uint8_t v_mustBeGrouped_3661_; lean_object* v_stack_3662_; lean_object* v___x_3663_; lean_object* v___x_3664_; lean_object* v___x_3665_; lean_object* v___x_3666_; uint8_t v___x_3667_; 
v___x_3649_ = lean_st_ref_take(v_a_3636_);
v_stxTrav_3657_ = lean_ctor_get(v___x_3649_, 0);
lean_inc_ref(v_stxTrav_3657_);
v_leadWord_3658_ = lean_ctor_get(v___x_3649_, 1);
lean_inc_ref(v_leadWord_3658_);
v_leadWordIdent_3659_ = lean_ctor_get_uint8(v___x_3649_, sizeof(void*)*3);
v_isUngrouped_3660_ = lean_ctor_get_uint8(v___x_3649_, sizeof(void*)*3 + 1);
v_mustBeGrouped_3661_ = lean_ctor_get_uint8(v___x_3649_, sizeof(void*)*3 + 2);
v_stack_3662_ = lean_ctor_get(v___x_3649_, 2);
lean_inc_ref(v_stack_3662_);
v___x_3663_ = lean_box(0);
v___x_3664_ = lean_array_get_size(v_stack_3662_);
v___x_3665_ = lean_unsigned_to_nat(1u);
v___x_3666_ = lean_nat_sub(v___x_3664_, v___x_3665_);
v___x_3667_ = lean_nat_dec_lt(v___x_3666_, v___x_3664_);
if (v___x_3667_ == 0)
{
lean_dec(v___x_3666_);
lean_dec_ref(v_stack_3662_);
lean_dec_ref(v_leadWord_3658_);
lean_dec_ref(v_stxTrav_3657_);
lean_dec(v___x_3646_);
v_fst_3651_ = v___x_3663_;
v_snd_3652_ = v___x_3649_;
goto v___jp_3650_;
}
else
{
lean_object* v___x_3669_; uint8_t v_isShared_3670_; uint8_t v_isSharedCheck_3682_; 
v_isSharedCheck_3682_ = !lean_is_exclusive(v___x_3649_);
if (v_isSharedCheck_3682_ == 0)
{
lean_object* v_unused_3683_; lean_object* v_unused_3684_; lean_object* v_unused_3685_; 
v_unused_3683_ = lean_ctor_get(v___x_3649_, 2);
lean_dec(v_unused_3683_);
v_unused_3684_ = lean_ctor_get(v___x_3649_, 1);
lean_dec(v_unused_3684_);
v_unused_3685_ = lean_ctor_get(v___x_3649_, 0);
lean_dec(v_unused_3685_);
v___x_3669_ = v___x_3649_;
v_isShared_3670_ = v_isSharedCheck_3682_;
goto v_resetjp_3668_;
}
else
{
lean_dec(v___x_3649_);
v___x_3669_ = lean_box(0);
v_isShared_3670_ = v_isSharedCheck_3682_;
goto v_resetjp_3668_;
}
v_resetjp_3668_:
{
lean_object* v_v_3671_; lean_object* v___x_3672_; lean_object* v_xs_x27_3673_; lean_object* v___x_3674_; lean_object* v___x_3675_; lean_object* v___x_3676_; lean_object* v___x_3677_; lean_object* v___x_3678_; lean_object* v___x_3680_; 
v_v_3671_ = lean_array_fget(v_stack_3662_, v___x_3666_);
v___x_3672_ = lean_obj_once(&l_Lean_ppDedentIfGrouped_formatter___closed__0, &l_Lean_ppDedentIfGrouped_formatter___closed__0_once, _init_l_Lean_ppDedentIfGrouped_formatter___closed__0);
v_xs_x27_3673_ = lean_array_fset(v_stack_3662_, v___x_3666_, v___x_3672_);
v___x_3674_ = lean_obj_once(&l_Lean_ppDedent_formatter___closed__0, &l_Lean_ppDedent_formatter___closed__0_once, _init_l_Lean_ppDedent_formatter___closed__0);
v___x_3675_ = lean_nat_to_int(v___x_3646_);
v___x_3676_ = lean_int_sub(v___x_3674_, v___x_3675_);
lean_dec(v___x_3675_);
v___x_3677_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3677_, 0, v___x_3676_);
lean_ctor_set(v___x_3677_, 1, v_v_3671_);
v___x_3678_ = lean_array_fset(v_xs_x27_3673_, v___x_3666_, v___x_3677_);
lean_dec(v___x_3666_);
if (v_isShared_3670_ == 0)
{
lean_ctor_set(v___x_3669_, 2, v___x_3678_);
v___x_3680_ = v___x_3669_;
goto v_reusejp_3679_;
}
else
{
lean_object* v_reuseFailAlloc_3681_; 
v_reuseFailAlloc_3681_ = lean_alloc_ctor(0, 3, 3);
lean_ctor_set(v_reuseFailAlloc_3681_, 0, v_stxTrav_3657_);
lean_ctor_set(v_reuseFailAlloc_3681_, 1, v_leadWord_3658_);
lean_ctor_set(v_reuseFailAlloc_3681_, 2, v___x_3678_);
lean_ctor_set_uint8(v_reuseFailAlloc_3681_, sizeof(void*)*3, v_leadWordIdent_3659_);
lean_ctor_set_uint8(v_reuseFailAlloc_3681_, sizeof(void*)*3 + 1, v_isUngrouped_3660_);
lean_ctor_set_uint8(v_reuseFailAlloc_3681_, sizeof(void*)*3 + 2, v_mustBeGrouped_3661_);
v___x_3680_ = v_reuseFailAlloc_3681_;
goto v_reusejp_3679_;
}
v_reusejp_3679_:
{
v_fst_3651_ = v___x_3663_;
v_snd_3652_ = v___x_3680_;
goto v___jp_3650_;
}
}
}
v___jp_3650_:
{
lean_object* v___x_3653_; lean_object* v___x_3655_; 
v___x_3653_ = lean_st_ref_put(v_a_3636_, v_snd_3652_);
if (v_isShared_3643_ == 0)
{
lean_ctor_set(v___x_3642_, 0, v_fst_3651_);
v___x_3655_ = v___x_3642_;
goto v_reusejp_3654_;
}
else
{
lean_object* v_reuseFailAlloc_3656_; 
v_reuseFailAlloc_3656_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3656_, 0, v_fst_3651_);
v___x_3655_ = v_reuseFailAlloc_3656_;
goto v_reusejp_3654_;
}
v_reusejp_3654_:
{
return v___x_3655_;
}
}
}
else
{
lean_object* v___x_3686_; lean_object* v___x_3688_; 
lean_dec(v___x_3646_);
v___x_3686_ = lean_box(0);
if (v_isShared_3643_ == 0)
{
lean_ctor_set(v___x_3642_, 0, v___x_3686_);
v___x_3688_ = v___x_3642_;
goto v_reusejp_3687_;
}
else
{
lean_object* v_reuseFailAlloc_3689_; 
v_reuseFailAlloc_3689_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3689_, 0, v___x_3686_);
v___x_3688_ = v_reuseFailAlloc_3689_;
goto v_reusejp_3687_;
}
v_reusejp_3687_:
{
return v___x_3688_;
}
}
}
}
else
{
return v___x_3640_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ppDedentIfGrouped_formatter___boxed(lean_object* v_p_3692_, lean_object* v_a_3693_, lean_object* v_a_3694_, lean_object* v_a_3695_, lean_object* v_a_3696_, lean_object* v_a_3697_){
_start:
{
lean_object* v_res_3698_; 
v_res_3698_ = l_Lean_ppDedentIfGrouped_formatter(v_p_3692_, v_a_3693_, v_a_3694_, v_a_3695_, v_a_3696_);
lean_dec(v_a_3696_);
lean_dec_ref(v_a_3695_);
lean_dec(v_a_3694_);
lean_dec_ref(v_a_3693_);
return v_res_3698_;
}
}
LEAN_EXPORT lean_object* l_Lean_ppHardLineUnlessUngrouped_formatter___redArg(lean_object* v_a_3699_){
_start:
{
lean_object* v___x_3701_; uint8_t v_isUngrouped_3702_; 
v___x_3701_ = lean_st_ref_get(v_a_3699_);
v_isUngrouped_3702_ = lean_ctor_get_uint8(v___x_3701_, sizeof(void*)*3 + 1);
lean_dec(v___x_3701_);
if (v_isUngrouped_3702_ == 0)
{
lean_object* v___x_3703_; 
v___x_3703_ = l_Lean_ppLine_formatter___redArg(v_a_3699_);
return v___x_3703_;
}
else
{
lean_object* v___x_3704_; 
v___x_3704_ = l_Lean_PrettyPrinter_Formatter_pushLine___redArg(v_a_3699_);
return v___x_3704_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ppHardLineUnlessUngrouped_formatter___redArg___boxed(lean_object* v_a_3705_, lean_object* v_a_3706_){
_start:
{
lean_object* v_res_3707_; 
v_res_3707_ = l_Lean_ppHardLineUnlessUngrouped_formatter___redArg(v_a_3705_);
lean_dec(v_a_3705_);
return v_res_3707_;
}
}
LEAN_EXPORT lean_object* l_Lean_ppHardLineUnlessUngrouped_formatter(lean_object* v_a_3708_, lean_object* v_a_3709_, lean_object* v_a_3710_, lean_object* v_a_3711_){
_start:
{
lean_object* v___x_3713_; 
v___x_3713_ = l_Lean_ppHardLineUnlessUngrouped_formatter___redArg(v_a_3709_);
return v___x_3713_;
}
}
LEAN_EXPORT lean_object* l_Lean_ppHardLineUnlessUngrouped_formatter___boxed(lean_object* v_a_3714_, lean_object* v_a_3715_, lean_object* v_a_3716_, lean_object* v_a_3717_, lean_object* v_a_3718_){
_start:
{
lean_object* v_res_3719_; 
v_res_3719_ = l_Lean_ppHardLineUnlessUngrouped_formatter(v_a_3714_, v_a_3715_, v_a_3716_, v_a_3717_);
lean_dec(v_a_3717_);
lean_dec_ref(v_a_3716_);
lean_dec(v_a_3715_);
lean_dec_ref(v_a_3714_);
return v_res_3719_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ppHardSpace_parenthesizer___redArg(){
_start:
{
lean_object* v___x_3721_; 
v___x_3721_ = l_Lean_PrettyPrinter_Parenthesizer_skip_parenthesizer___redArg();
return v___x_3721_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ppHardSpace_parenthesizer___redArg___boxed(lean_object* v_a_3722_){
_start:
{
lean_object* v_res_3723_; 
v_res_3723_ = l_Lean_Parser_ppHardSpace_parenthesizer___redArg();
return v_res_3723_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ppHardSpace_parenthesizer(lean_object* v_a_3724_, lean_object* v_a_3725_, lean_object* v_a_3726_, lean_object* v_a_3727_){
_start:
{
lean_object* v___x_3729_; 
v___x_3729_ = l_Lean_PrettyPrinter_Parenthesizer_skip_parenthesizer___redArg();
return v___x_3729_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ppHardSpace_parenthesizer___boxed(lean_object* v_a_3730_, lean_object* v_a_3731_, lean_object* v_a_3732_, lean_object* v_a_3733_, lean_object* v_a_3734_){
_start:
{
lean_object* v_res_3735_; 
v_res_3735_ = l_Lean_Parser_ppHardSpace_parenthesizer(v_a_3730_, v_a_3731_, v_a_3732_, v_a_3733_);
lean_dec(v_a_3733_);
lean_dec_ref(v_a_3732_);
lean_dec(v_a_3731_);
lean_dec_ref(v_a_3730_);
return v_res_3735_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ppSpace_parenthesizer___redArg(){
_start:
{
lean_object* v___x_3737_; 
v___x_3737_ = l_Lean_PrettyPrinter_Parenthesizer_skip_parenthesizer___redArg();
return v___x_3737_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ppSpace_parenthesizer___redArg___boxed(lean_object* v_a_3738_){
_start:
{
lean_object* v_res_3739_; 
v_res_3739_ = l_Lean_Parser_ppSpace_parenthesizer___redArg();
return v_res_3739_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ppSpace_parenthesizer(lean_object* v_a_3740_, lean_object* v_a_3741_, lean_object* v_a_3742_, lean_object* v_a_3743_){
_start:
{
lean_object* v___x_3745_; 
v___x_3745_ = l_Lean_PrettyPrinter_Parenthesizer_skip_parenthesizer___redArg();
return v___x_3745_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ppSpace_parenthesizer___boxed(lean_object* v_a_3746_, lean_object* v_a_3747_, lean_object* v_a_3748_, lean_object* v_a_3749_, lean_object* v_a_3750_){
_start:
{
lean_object* v_res_3751_; 
v_res_3751_ = l_Lean_Parser_ppSpace_parenthesizer(v_a_3746_, v_a_3747_, v_a_3748_, v_a_3749_);
lean_dec(v_a_3749_);
lean_dec_ref(v_a_3748_);
lean_dec(v_a_3747_);
lean_dec_ref(v_a_3746_);
return v_res_3751_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ppLine_parenthesizer___redArg(){
_start:
{
lean_object* v___x_3753_; 
v___x_3753_ = l_Lean_PrettyPrinter_Parenthesizer_skip_parenthesizer___redArg();
return v___x_3753_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ppLine_parenthesizer___redArg___boxed(lean_object* v_a_3754_){
_start:
{
lean_object* v_res_3755_; 
v_res_3755_ = l_Lean_Parser_ppLine_parenthesizer___redArg();
return v_res_3755_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ppLine_parenthesizer(lean_object* v_a_3756_, lean_object* v_a_3757_, lean_object* v_a_3758_, lean_object* v_a_3759_){
_start:
{
lean_object* v___x_3761_; 
v___x_3761_ = l_Lean_PrettyPrinter_Parenthesizer_skip_parenthesizer___redArg();
return v___x_3761_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ppLine_parenthesizer___boxed(lean_object* v_a_3762_, lean_object* v_a_3763_, lean_object* v_a_3764_, lean_object* v_a_3765_, lean_object* v_a_3766_){
_start:
{
lean_object* v_res_3767_; 
v_res_3767_ = l_Lean_Parser_ppLine_parenthesizer(v_a_3762_, v_a_3763_, v_a_3764_, v_a_3765_);
lean_dec(v_a_3765_);
lean_dec_ref(v_a_3764_);
lean_dec(v_a_3763_);
lean_dec_ref(v_a_3762_);
return v_res_3767_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ppGroup_formatter(lean_object* v_p_3768_, lean_object* v_a_3769_, lean_object* v_a_3770_, lean_object* v_a_3771_, lean_object* v_a_3772_){
_start:
{
lean_object* v___x_3774_; lean_object* v___x_3775_; 
v___x_3774_ = lean_alloc_closure((void*)(l_Lean_ppIndent_formatter___boxed), 6, 1);
lean_closure_set(v___x_3774_, 0, v_p_3768_);
v___x_3775_ = l_Lean_PrettyPrinter_Formatter_fill(v___x_3774_, v_a_3769_, v_a_3770_, v_a_3771_, v_a_3772_);
return v___x_3775_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ppGroup_formatter___boxed(lean_object* v_p_3776_, lean_object* v_a_3777_, lean_object* v_a_3778_, lean_object* v_a_3779_, lean_object* v_a_3780_, lean_object* v_a_3781_){
_start:
{
lean_object* v_res_3782_; 
v_res_3782_ = l_Lean_Parser_ppGroup_formatter(v_p_3776_, v_a_3777_, v_a_3778_, v_a_3779_, v_a_3780_);
lean_dec(v_a_3780_);
lean_dec_ref(v_a_3779_);
lean_dec(v_a_3778_);
lean_dec_ref(v_a_3777_);
return v_res_3782_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ppRealFill_parenthesizer(lean_object* v_a_3783_, lean_object* v_a_3784_, lean_object* v_a_3785_, lean_object* v_a_3786_, lean_object* v_a_3787_){
_start:
{
lean_object* v___x_3789_; 
lean_inc(v_a_3787_);
lean_inc_ref(v_a_3786_);
lean_inc(v_a_3785_);
lean_inc_ref(v_a_3784_);
v___x_3789_ = lean_apply_5(v_a_3783_, v_a_3784_, v_a_3785_, v_a_3786_, v_a_3787_, lean_box(0));
return v___x_3789_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ppRealFill_parenthesizer___boxed(lean_object* v_a_3790_, lean_object* v_a_3791_, lean_object* v_a_3792_, lean_object* v_a_3793_, lean_object* v_a_3794_, lean_object* v_a_3795_){
_start:
{
lean_object* v_res_3796_; 
v_res_3796_ = l_Lean_Parser_ppRealFill_parenthesizer(v_a_3790_, v_a_3791_, v_a_3792_, v_a_3793_, v_a_3794_);
lean_dec(v_a_3794_);
lean_dec_ref(v_a_3793_);
lean_dec(v_a_3792_);
lean_dec_ref(v_a_3791_);
return v_res_3796_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ppIndent_parenthesizer(lean_object* v_a_3797_, lean_object* v_a_3798_, lean_object* v_a_3799_, lean_object* v_a_3800_, lean_object* v_a_3801_){
_start:
{
lean_object* v___x_3803_; 
lean_inc(v_a_3801_);
lean_inc_ref(v_a_3800_);
lean_inc(v_a_3799_);
lean_inc_ref(v_a_3798_);
v___x_3803_ = lean_apply_5(v_a_3797_, v_a_3798_, v_a_3799_, v_a_3800_, v_a_3801_, lean_box(0));
return v___x_3803_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ppIndent_parenthesizer___boxed(lean_object* v_a_3804_, lean_object* v_a_3805_, lean_object* v_a_3806_, lean_object* v_a_3807_, lean_object* v_a_3808_, lean_object* v_a_3809_){
_start:
{
lean_object* v_res_3810_; 
v_res_3810_ = l_Lean_Parser_ppIndent_parenthesizer(v_a_3804_, v_a_3805_, v_a_3806_, v_a_3807_, v_a_3808_);
lean_dec(v_a_3808_);
lean_dec_ref(v_a_3807_);
lean_dec(v_a_3806_);
lean_dec_ref(v_a_3805_);
return v_res_3810_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ppGroup_parenthesizer(lean_object* v_p_3811_, lean_object* v_a_3812_, lean_object* v_a_3813_, lean_object* v_a_3814_, lean_object* v_a_3815_){
_start:
{
lean_object* v___x_3817_; 
lean_inc(v_a_3815_);
lean_inc_ref(v_a_3814_);
lean_inc(v_a_3813_);
lean_inc_ref(v_a_3812_);
v___x_3817_ = lean_apply_5(v_p_3811_, v_a_3812_, v_a_3813_, v_a_3814_, v_a_3815_, lean_box(0));
return v___x_3817_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ppGroup_parenthesizer___boxed(lean_object* v_p_3818_, lean_object* v_a_3819_, lean_object* v_a_3820_, lean_object* v_a_3821_, lean_object* v_a_3822_, lean_object* v_a_3823_){
_start:
{
lean_object* v_res_3824_; 
v_res_3824_ = l_Lean_Parser_ppGroup_parenthesizer(v_p_3818_, v_a_3819_, v_a_3820_, v_a_3821_, v_a_3822_);
lean_dec(v_a_3822_);
lean_dec_ref(v_a_3821_);
lean_dec(v_a_3820_);
lean_dec_ref(v_a_3819_);
return v_res_3824_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ppRealGroup_parenthesizer(lean_object* v_a_3825_, lean_object* v_a_3826_, lean_object* v_a_3827_, lean_object* v_a_3828_, lean_object* v_a_3829_){
_start:
{
lean_object* v___x_3831_; 
lean_inc(v_a_3829_);
lean_inc_ref(v_a_3828_);
lean_inc(v_a_3827_);
lean_inc_ref(v_a_3826_);
v___x_3831_ = lean_apply_5(v_a_3825_, v_a_3826_, v_a_3827_, v_a_3828_, v_a_3829_, lean_box(0));
return v___x_3831_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ppRealGroup_parenthesizer___boxed(lean_object* v_a_3832_, lean_object* v_a_3833_, lean_object* v_a_3834_, lean_object* v_a_3835_, lean_object* v_a_3836_, lean_object* v_a_3837_){
_start:
{
lean_object* v_res_3838_; 
v_res_3838_ = l_Lean_Parser_ppRealGroup_parenthesizer(v_a_3832_, v_a_3833_, v_a_3834_, v_a_3835_, v_a_3836_);
lean_dec(v_a_3836_);
lean_dec_ref(v_a_3835_);
lean_dec(v_a_3834_);
lean_dec_ref(v_a_3833_);
return v_res_3838_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ppDedent_parenthesizer(lean_object* v_a_3839_, lean_object* v_a_3840_, lean_object* v_a_3841_, lean_object* v_a_3842_, lean_object* v_a_3843_){
_start:
{
lean_object* v___x_3845_; 
lean_inc(v_a_3843_);
lean_inc_ref(v_a_3842_);
lean_inc(v_a_3841_);
lean_inc_ref(v_a_3840_);
v___x_3845_ = lean_apply_5(v_a_3839_, v_a_3840_, v_a_3841_, v_a_3842_, v_a_3843_, lean_box(0));
return v___x_3845_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ppDedent_parenthesizer___boxed(lean_object* v_a_3846_, lean_object* v_a_3847_, lean_object* v_a_3848_, lean_object* v_a_3849_, lean_object* v_a_3850_, lean_object* v_a_3851_){
_start:
{
lean_object* v_res_3852_; 
v_res_3852_ = l_Lean_Parser_ppDedent_parenthesizer(v_a_3846_, v_a_3847_, v_a_3848_, v_a_3849_, v_a_3850_);
lean_dec(v_a_3850_);
lean_dec_ref(v_a_3849_);
lean_dec(v_a_3848_);
lean_dec_ref(v_a_3847_);
return v_res_3852_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ppAllowUngrouped_parenthesizer___redArg(){
_start:
{
lean_object* v___x_3854_; 
v___x_3854_ = l_Lean_PrettyPrinter_Parenthesizer_skip_parenthesizer___redArg();
return v___x_3854_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ppAllowUngrouped_parenthesizer___redArg___boxed(lean_object* v_a_3855_){
_start:
{
lean_object* v_res_3856_; 
v_res_3856_ = l_Lean_Parser_ppAllowUngrouped_parenthesizer___redArg();
return v_res_3856_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ppAllowUngrouped_parenthesizer(lean_object* v_a_3857_, lean_object* v_a_3858_, lean_object* v_a_3859_, lean_object* v_a_3860_){
_start:
{
lean_object* v___x_3862_; 
v___x_3862_ = l_Lean_PrettyPrinter_Parenthesizer_skip_parenthesizer___redArg();
return v___x_3862_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ppAllowUngrouped_parenthesizer___boxed(lean_object* v_a_3863_, lean_object* v_a_3864_, lean_object* v_a_3865_, lean_object* v_a_3866_, lean_object* v_a_3867_){
_start:
{
lean_object* v_res_3868_; 
v_res_3868_ = l_Lean_Parser_ppAllowUngrouped_parenthesizer(v_a_3863_, v_a_3864_, v_a_3865_, v_a_3866_);
lean_dec(v_a_3866_);
lean_dec_ref(v_a_3865_);
lean_dec(v_a_3864_);
lean_dec_ref(v_a_3863_);
return v_res_3868_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ppDedentIfGrouped_parenthesizer(lean_object* v_a_3869_, lean_object* v_a_3870_, lean_object* v_a_3871_, lean_object* v_a_3872_, lean_object* v_a_3873_){
_start:
{
lean_object* v___x_3875_; 
lean_inc(v_a_3873_);
lean_inc_ref(v_a_3872_);
lean_inc(v_a_3871_);
lean_inc_ref(v_a_3870_);
v___x_3875_ = lean_apply_5(v_a_3869_, v_a_3870_, v_a_3871_, v_a_3872_, v_a_3873_, lean_box(0));
return v___x_3875_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ppDedentIfGrouped_parenthesizer___boxed(lean_object* v_a_3876_, lean_object* v_a_3877_, lean_object* v_a_3878_, lean_object* v_a_3879_, lean_object* v_a_3880_, lean_object* v_a_3881_){
_start:
{
lean_object* v_res_3882_; 
v_res_3882_ = l_Lean_Parser_ppDedentIfGrouped_parenthesizer(v_a_3876_, v_a_3877_, v_a_3878_, v_a_3879_, v_a_3880_);
lean_dec(v_a_3880_);
lean_dec_ref(v_a_3879_);
lean_dec(v_a_3878_);
lean_dec_ref(v_a_3877_);
return v_res_3882_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ppHardLineUnlessUngrouped_parenthesizer___redArg(){
_start:
{
lean_object* v___x_3884_; 
v___x_3884_ = l_Lean_PrettyPrinter_Parenthesizer_skip_parenthesizer___redArg();
return v___x_3884_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ppHardLineUnlessUngrouped_parenthesizer___redArg___boxed(lean_object* v_a_3885_){
_start:
{
lean_object* v_res_3886_; 
v_res_3886_ = l_Lean_Parser_ppHardLineUnlessUngrouped_parenthesizer___redArg();
return v_res_3886_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ppHardLineUnlessUngrouped_parenthesizer(lean_object* v_a_3887_, lean_object* v_a_3888_, lean_object* v_a_3889_, lean_object* v_a_3890_){
_start:
{
lean_object* v___x_3892_; 
v___x_3892_ = l_Lean_PrettyPrinter_Parenthesizer_skip_parenthesizer___redArg();
return v___x_3892_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ppHardLineUnlessUngrouped_parenthesizer___boxed(lean_object* v_a_3893_, lean_object* v_a_3894_, lean_object* v_a_3895_, lean_object* v_a_3896_, lean_object* v_a_3897_){
_start:
{
lean_object* v_res_3898_; 
v_res_3898_ = l_Lean_Parser_ppHardLineUnlessUngrouped_parenthesizer(v_a_3893_, v_a_3894_, v_a_3895_, v_a_3896_);
lean_dec(v_a_3896_);
lean_dec_ref(v_a_3895_);
lean_dec(v_a_3894_);
lean_dec_ref(v_a_3893_);
return v_res_3898_;
}
}
static lean_object* _init_l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__1(void){
_start:
{
lean_object* v___x_3999_; 
v___x_3999_ = l_Array_mkArray0___redArg();
return v___x_3999_;
}
}
static lean_object* _init_l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__3(void){
_start:
{
lean_object* v___x_4001_; lean_object* v___x_4002_; 
v___x_4001_ = ((lean_object*)(l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__2));
v___x_4002_ = l_String_toRawSubstring_x27(v___x_4001_);
return v___x_4002_;
}
}
static lean_object* _init_l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__8(void){
_start:
{
lean_object* v___x_4008_; lean_object* v___x_4009_; 
v___x_4008_ = ((lean_object*)(l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__7));
v___x_4009_ = l_String_toRawSubstring_x27(v___x_4008_);
return v___x_4009_;
}
}
static lean_object* _init_l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__13(void){
_start:
{
lean_object* v___x_4015_; lean_object* v___x_4016_; 
v___x_4015_ = ((lean_object*)(l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__12));
v___x_4016_ = l_String_toRawSubstring_x27(v___x_4015_);
return v___x_4016_;
}
}
static lean_object* _init_l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__17(void){
_start:
{
lean_object* v___x_4021_; lean_object* v___x_4022_; 
v___x_4021_ = ((lean_object*)(l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__16));
v___x_4022_ = l_String_toRawSubstring_x27(v___x_4021_);
return v___x_4022_;
}
}
static lean_object* _init_l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__34(void){
_start:
{
lean_object* v___x_4062_; lean_object* v___x_4063_; 
v___x_4062_ = ((lean_object*)(l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__33));
v___x_4063_ = l_String_toRawSubstring_x27(v___x_4062_);
return v___x_4063_;
}
}
static lean_object* _init_l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__43(void){
_start:
{
uint8_t v___x_4084_; lean_object* v___x_4085_; lean_object* v___x_4086_; 
v___x_4084_ = 0;
v___x_4085_ = lean_box(0);
v___x_4086_ = l_Lean_SourceInfo_fromRef(v___x_4085_, v___x_4084_);
return v___x_4086_;
}
}
static lean_object* _init_l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__49(void){
_start:
{
lean_object* v___x_4094_; lean_object* v___x_4095_; lean_object* v___x_4096_; 
v___x_4094_ = ((lean_object*)(l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__48));
v___x_4095_ = lean_obj_once(&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__43, &l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__43_once, _init_l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__43);
v___x_4096_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4096_, 0, v___x_4095_);
lean_ctor_set(v___x_4096_, 1, v___x_4094_);
return v___x_4096_;
}
}
static lean_object* _init_l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__51(void){
_start:
{
lean_object* v___x_4098_; lean_object* v___x_4099_; lean_object* v___x_4100_; 
v___x_4098_ = ((lean_object*)(l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__50));
v___x_4099_ = lean_obj_once(&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__43, &l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__43_once, _init_l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__43);
v___x_4100_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4100_, 0, v___x_4099_);
lean_ctor_set(v___x_4100_, 1, v___x_4098_);
return v___x_4100_;
}
}
static lean_object* _init_l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__52(void){
_start:
{
lean_object* v___x_4101_; lean_object* v___x_4102_; lean_object* v___x_4103_; lean_object* v___x_4104_; lean_object* v___x_4105_; 
v___x_4101_ = lean_obj_once(&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__51, &l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__51_once, _init_l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__51);
v___x_4102_ = lean_obj_once(&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__49, &l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__49_once, _init_l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__49);
v___x_4103_ = ((lean_object*)(l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__47));
v___x_4104_ = lean_obj_once(&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__43, &l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__43_once, _init_l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__43);
v___x_4105_ = l_Lean_Syntax_node2(v___x_4104_, v___x_4103_, v___x_4102_, v___x_4101_);
return v___x_4105_;
}
}
static lean_object* _init_l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__55(void){
_start:
{
lean_object* v___x_4112_; lean_object* v___x_4113_; lean_object* v___x_4114_; lean_object* v___x_4115_; 
v___x_4112_ = lean_obj_once(&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__1, &l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__1_once, _init_l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__1);
v___x_4113_ = ((lean_object*)(l_Lean_Parser_mkAntiquotSplice_formatter___closed__5));
v___x_4114_ = lean_obj_once(&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__43, &l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__43_once, _init_l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__43);
v___x_4115_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_4115_, 0, v___x_4114_);
lean_ctor_set(v___x_4115_, 1, v___x_4113_);
lean_ctor_set(v___x_4115_, 2, v___x_4112_);
return v___x_4115_;
}
}
static lean_object* _init_l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__58(void){
_start:
{
lean_object* v___x_4122_; lean_object* v___x_4123_; lean_object* v___x_4124_; lean_object* v___x_4125_; 
v___x_4122_ = lean_obj_once(&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__55, &l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__55_once, _init_l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__55);
v___x_4123_ = ((lean_object*)(l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__57));
v___x_4124_ = lean_obj_once(&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__43, &l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__43_once, _init_l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__43);
v___x_4125_ = l_Lean_Syntax_node1(v___x_4124_, v___x_4123_, v___x_4122_);
return v___x_4125_;
}
}
static lean_object* _init_l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__61(void){
_start:
{
lean_object* v___x_4132_; lean_object* v___x_4133_; lean_object* v___x_4134_; lean_object* v___x_4135_; 
v___x_4132_ = lean_obj_once(&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__55, &l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__55_once, _init_l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__55);
v___x_4133_ = ((lean_object*)(l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__60));
v___x_4134_ = lean_obj_once(&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__43, &l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__43_once, _init_l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__43);
v___x_4135_ = l_Lean_Syntax_node1(v___x_4134_, v___x_4133_, v___x_4132_);
return v___x_4135_;
}
}
static lean_object* _init_l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__62(void){
_start:
{
lean_object* v___x_4136_; lean_object* v___x_4137_; lean_object* v___x_4138_; lean_object* v___x_4139_; lean_object* v___x_4140_; lean_object* v___x_4141_; lean_object* v___x_4142_; lean_object* v___x_4143_; 
v___x_4136_ = lean_obj_once(&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__51, &l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__51_once, _init_l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__51);
v___x_4137_ = lean_obj_once(&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__61, &l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__61_once, _init_l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__61);
v___x_4138_ = lean_obj_once(&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__58, &l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__58_once, _init_l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__58);
v___x_4139_ = lean_obj_once(&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__55, &l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__55_once, _init_l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__55);
v___x_4140_ = lean_obj_once(&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__49, &l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__49_once, _init_l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__49);
v___x_4141_ = ((lean_object*)(l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__54));
v___x_4142_ = lean_obj_once(&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__43, &l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__43_once, _init_l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__43);
v___x_4143_ = l_Lean_Syntax_node6(v___x_4142_, v___x_4141_, v___x_4140_, v___x_4139_, v___x_4138_, v___x_4137_, v___x_4139_, v___x_4136_);
return v___x_4143_;
}
}
static lean_object* _init_l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__63(void){
_start:
{
lean_object* v___x_4144_; lean_object* v___x_4145_; lean_object* v___x_4146_; lean_object* v___x_4147_; lean_object* v___x_4148_; 
v___x_4144_ = lean_obj_once(&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__62, &l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__62_once, _init_l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__62);
v___x_4145_ = lean_obj_once(&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__52, &l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__52_once, _init_l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__52);
v___x_4146_ = ((lean_object*)(l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__45));
v___x_4147_ = lean_obj_once(&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__43, &l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__43_once, _init_l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__43);
v___x_4148_ = l_Lean_Syntax_node2(v___x_4147_, v___x_4146_, v___x_4145_, v___x_4144_);
return v___x_4148_;
}
}
LEAN_EXPORT lean_object* l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1(lean_object* v_x_4154_, lean_object* v_a_4155_, lean_object* v_a_4156_){
_start:
{
lean_object* v___y_4158_; lean_object* v___y_4159_; lean_object* v___x_4162_; lean_object* v___y_4164_; lean_object* v___y_4165_; lean_object* v___y_4166_; lean_object* v___y_4167_; lean_object* v___y_4168_; uint8_t v___y_4169_; lean_object* v___y_4170_; lean_object* v___y_4171_; lean_object* v___y_4172_; lean_object* v___y_4173_; lean_object* v___y_4174_; lean_object* v___y_4175_; lean_object* v___y_4176_; lean_object* v___y_4177_; lean_object* v___y_4178_; lean_object* v___y_4179_; lean_object* v___y_4180_; lean_object* v___y_4181_; lean_object* v___y_4182_; lean_object* v___y_4183_; lean_object* v___y_4184_; lean_object* v___y_4185_; lean_object* v___y_4186_; lean_object* v___y_4187_; lean_object* v___y_4188_; lean_object* v___y_4189_; lean_object* v___y_4190_; lean_object* v___y_4238_; lean_object* v___y_4239_; lean_object* v___y_4240_; lean_object* v___y_4241_; lean_object* v___y_4242_; lean_object* v___y_4243_; uint8_t v___y_4244_; lean_object* v___y_4245_; lean_object* v___y_4246_; lean_object* v___y_4247_; lean_object* v___y_4248_; lean_object* v___y_4249_; lean_object* v___y_4250_; lean_object* v___y_4251_; lean_object* v___y_4252_; lean_object* v___y_4253_; lean_object* v___y_4254_; lean_object* v___y_4255_; lean_object* v___y_4256_; lean_object* v___y_4257_; lean_object* v___y_4258_; lean_object* v___y_4259_; lean_object* v___y_4260_; lean_object* v___y_4261_; lean_object* v___y_4262_; lean_object* v___y_4263_; lean_object* v___y_4297_; lean_object* v___y_4298_; lean_object* v___y_4299_; lean_object* v___y_4300_; lean_object* v___y_4301_; lean_object* v___y_4302_; lean_object* v___y_4303_; lean_object* v___y_4304_; lean_object* v___y_4305_; lean_object* v___y_4338_; lean_object* v___y_4339_; lean_object* v___y_4340_; lean_object* v___y_4341_; lean_object* v___y_4342_; lean_object* v___y_4343_; lean_object* v___y_4399_; lean_object* v___y_4400_; lean_object* v___y_4401_; lean_object* v___y_4402_; lean_object* v___y_4403_; lean_object* v___y_4404_; lean_object* v_kind_x3f_4416_; lean_object* v___y_4417_; lean_object* v___y_4418_; lean_object* v___x_4435_; uint8_t v___x_4436_; 
v___x_4162_ = ((lean_object*)(l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__0));
v___x_4435_ = ((lean_object*)(l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__1));
lean_inc(v_x_4154_);
v___x_4436_ = l_Lean_Syntax_isOfKind(v_x_4154_, v___x_4435_);
if (v___x_4436_ == 0)
{
lean_object* v___x_4437_; lean_object* v___x_4438_; 
lean_dec(v_x_4154_);
v___x_4437_ = lean_box(1);
v___x_4438_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4438_, 0, v___x_4437_);
lean_ctor_set(v___x_4438_, 1, v_a_4156_);
return v___x_4438_;
}
else
{
lean_object* v___x_4439_; lean_object* v___x_4440_; uint8_t v___x_4441_; 
v___x_4439_ = lean_unsigned_to_nat(1u);
v___x_4440_ = l_Lean_Syntax_getArg(v_x_4154_, v___x_4439_);
v___x_4441_ = l_Lean_Syntax_isNone(v___x_4440_);
if (v___x_4441_ == 0)
{
uint8_t v___x_4442_; 
lean_inc(v___x_4440_);
v___x_4442_ = l_Lean_Syntax_matchesNull(v___x_4440_, v___x_4439_);
if (v___x_4442_ == 0)
{
lean_object* v___x_4443_; lean_object* v___x_4444_; 
lean_dec(v___x_4440_);
lean_dec(v_x_4154_);
v___x_4443_ = lean_box(1);
v___x_4444_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4444_, 0, v___x_4443_);
lean_ctor_set(v___x_4444_, 1, v_a_4156_);
return v___x_4444_;
}
else
{
lean_object* v___x_4445_; lean_object* v___x_4446_; lean_object* v___x_4447_; uint8_t v___x_4448_; 
v___x_4445_ = lean_unsigned_to_nat(0u);
v___x_4446_ = l_Lean_Syntax_getArg(v___x_4440_, v___x_4445_);
lean_dec(v___x_4440_);
v___x_4447_ = ((lean_object*)(l_Lean_Parser_group_formatter___closed__1));
lean_inc(v___x_4446_);
v___x_4448_ = l_Lean_Syntax_isOfKind(v___x_4446_, v___x_4447_);
if (v___x_4448_ == 0)
{
lean_object* v___x_4449_; lean_object* v___x_4450_; 
lean_dec(v___x_4446_);
lean_dec(v_x_4154_);
v___x_4449_ = lean_box(1);
v___x_4450_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4450_, 0, v___x_4449_);
lean_ctor_set(v___x_4450_, 1, v_a_4156_);
return v___x_4450_;
}
else
{
lean_object* v___x_4451_; lean_object* v_kind_x3f_4452_; lean_object* v___x_4453_; 
v___x_4451_ = lean_unsigned_to_nat(3u);
v_kind_x3f_4452_ = l_Lean_Syntax_getArg(v___x_4446_, v___x_4451_);
lean_dec(v___x_4446_);
v___x_4453_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4453_, 0, v_kind_x3f_4452_);
v_kind_x3f_4416_ = v___x_4453_;
v___y_4417_ = v_a_4155_;
v___y_4418_ = v_a_4156_;
goto v___jp_4415_;
}
}
}
else
{
lean_object* v___x_4454_; 
lean_dec(v___x_4440_);
v___x_4454_ = lean_box(0);
v_kind_x3f_4416_ = v___x_4454_;
v___y_4417_ = v_a_4155_;
v___y_4418_ = v_a_4156_;
goto v___jp_4415_;
}
}
v___jp_4157_:
{
lean_object* v___x_4160_; lean_object* v___x_4161_; 
v___x_4160_ = ((lean_object*)(l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__0));
v___x_4161_ = l_Lean_Macro_throwError___redArg(v___x_4160_, v___y_4158_, v___y_4159_);
return v___x_4161_;
}
v___jp_4163_:
{
lean_object* v___x_4191_; lean_object* v___x_4192_; lean_object* v___x_4193_; lean_object* v___x_4194_; lean_object* v___x_4195_; lean_object* v___x_4196_; lean_object* v___x_4197_; lean_object* v___x_4198_; lean_object* v___x_4199_; lean_object* v___x_4200_; lean_object* v___x_4201_; lean_object* v___x_4202_; lean_object* v___x_4203_; lean_object* v___x_4204_; lean_object* v___x_4205_; lean_object* v___x_4206_; lean_object* v___x_4207_; lean_object* v___x_4208_; lean_object* v___x_4209_; lean_object* v___x_4210_; lean_object* v___x_4211_; lean_object* v___x_4212_; lean_object* v___x_4213_; lean_object* v___x_4214_; lean_object* v___x_4215_; lean_object* v___x_4216_; lean_object* v___x_4217_; lean_object* v___x_4218_; lean_object* v___x_4219_; lean_object* v___x_4220_; lean_object* v___x_4221_; lean_object* v___x_4222_; lean_object* v___x_4223_; lean_object* v___x_4224_; lean_object* v___x_4225_; lean_object* v___x_4226_; lean_object* v___x_4227_; lean_object* v___x_4228_; lean_object* v___x_4229_; lean_object* v___x_4230_; lean_object* v___x_4231_; lean_object* v___x_4232_; lean_object* v___x_4233_; lean_object* v___x_4234_; lean_object* v___x_4235_; lean_object* v___x_4236_; 
lean_inc_n(v___y_4166_, 6);
lean_inc_n(v___y_4188_, 21);
v___x_4191_ = l_Lean_Syntax_node1(v___y_4188_, v___y_4166_, v___y_4190_);
lean_inc_n(v___y_4171_, 4);
v___x_4192_ = l_Lean_Syntax_node2(v___y_4188_, v___y_4171_, v___y_4183_, v___x_4191_);
v___x_4193_ = ((lean_object*)(l_Lean_Parser_antiquotNestedExpr_formatter___closed__5));
v___x_4194_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4194_, 0, v___y_4188_);
lean_ctor_set(v___x_4194_, 1, v___x_4193_);
v___x_4195_ = l_Lean_Syntax_node5(v___y_4188_, v___y_4174_, v___y_4178_, v___y_4173_, v___y_4167_, v___x_4192_, v___x_4194_);
lean_inc(v___y_4165_);
lean_inc_n(v___y_4175_, 2);
v___x_4196_ = l_Lean_Syntax_node5(v___y_4188_, v___y_4166_, v___y_4175_, v___y_4189_, v___y_4165_, v___y_4168_, v___x_4195_);
v___x_4197_ = l_Lean_Syntax_node2(v___y_4188_, v___y_4171_, v___y_4177_, v___x_4196_);
lean_inc_n(v___y_4184_, 3);
v___x_4198_ = l_Lean_Syntax_node1(v___y_4188_, v___y_4184_, v___x_4197_);
v___x_4199_ = lean_obj_once(&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__1, &l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__1_once, _init_l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__1);
v___x_4200_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_4200_, 0, v___y_4188_);
lean_ctor_set(v___x_4200_, 1, v___y_4166_);
lean_ctor_set(v___x_4200_, 2, v___x_4199_);
lean_inc_ref_n(v___x_4200_, 2);
lean_inc_n(v___y_4187_, 3);
v___x_4201_ = l_Lean_Syntax_node2(v___y_4188_, v___y_4187_, v___x_4198_, v___x_4200_);
v___x_4202_ = lean_obj_once(&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__3, &l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__3_once, _init_l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__3);
v___x_4203_ = ((lean_object*)(l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__4));
v___x_4204_ = ((lean_object*)(l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__5));
lean_inc_ref_n(v___y_4172_, 4);
v___x_4205_ = l_Lean_Name_mkStr3(v___x_4203_, v___x_4204_, v___y_4172_);
lean_inc(v___y_4182_);
lean_inc(v___y_4179_);
v___x_4206_ = l_Lean_addMacroScope(v___y_4179_, v___x_4205_, v___y_4182_);
v___x_4207_ = l_Lean_Name_mkStr4(v___x_4162_, v___x_4203_, v___x_4204_, v___y_4172_);
lean_inc(v___y_4181_);
v___x_4208_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4208_, 0, v___x_4207_);
lean_ctor_set(v___x_4208_, 1, v___y_4181_);
lean_inc_n(v___y_4164_, 2);
v___x_4209_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4209_, 0, v___x_4208_);
lean_ctor_set(v___x_4209_, 1, v___y_4164_);
v___x_4210_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_4210_, 0, v___y_4188_);
lean_ctor_set(v___x_4210_, 1, v___x_4202_);
lean_ctor_set(v___x_4210_, 2, v___x_4206_);
lean_ctor_set(v___x_4210_, 3, v___x_4209_);
v___x_4211_ = ((lean_object*)(l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__6));
lean_inc(v___y_4180_);
v___x_4212_ = l_Lean_Name_append(v___y_4180_, v___x_4211_);
v___x_4213_ = l_Lean_mkIdentFrom(v___y_4165_, v___x_4212_, v___y_4169_);
v___x_4214_ = l_Lean_Syntax_node2(v___y_4188_, v___y_4166_, v___y_4175_, v___x_4213_);
v___x_4215_ = l_Lean_Syntax_node2(v___y_4188_, v___y_4171_, v___x_4210_, v___x_4214_);
v___x_4216_ = l_Lean_Syntax_node1(v___y_4188_, v___y_4184_, v___x_4215_);
v___x_4217_ = l_Lean_Syntax_node2(v___y_4188_, v___y_4187_, v___x_4216_, v___x_4200_);
v___x_4218_ = lean_obj_once(&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__8, &l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__8_once, _init_l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__8);
v___x_4219_ = ((lean_object*)(l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__9));
v___x_4220_ = l_Lean_Name_mkStr3(v___x_4203_, v___x_4219_, v___y_4172_);
v___x_4221_ = l_Lean_addMacroScope(v___y_4179_, v___x_4220_, v___y_4182_);
v___x_4222_ = l_Lean_Name_mkStr4(v___x_4162_, v___x_4203_, v___x_4219_, v___y_4172_);
v___x_4223_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4223_, 0, v___x_4222_);
lean_ctor_set(v___x_4223_, 1, v___y_4181_);
v___x_4224_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4224_, 0, v___x_4223_);
lean_ctor_set(v___x_4224_, 1, v___y_4164_);
v___x_4225_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_4225_, 0, v___y_4188_);
lean_ctor_set(v___x_4225_, 1, v___x_4218_);
lean_ctor_set(v___x_4225_, 2, v___x_4221_);
lean_ctor_set(v___x_4225_, 3, v___x_4224_);
v___x_4226_ = ((lean_object*)(l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__10));
v___x_4227_ = l_Lean_Name_append(v___y_4180_, v___x_4226_);
v___x_4228_ = l_Lean_mkIdentFrom(v___y_4165_, v___x_4227_, v___y_4169_);
lean_dec(v___y_4165_);
v___x_4229_ = l_Lean_Syntax_node2(v___y_4188_, v___y_4166_, v___y_4175_, v___x_4228_);
v___x_4230_ = l_Lean_Syntax_node2(v___y_4188_, v___y_4171_, v___x_4225_, v___x_4229_);
v___x_4231_ = l_Lean_Syntax_node1(v___y_4188_, v___y_4184_, v___x_4230_);
v___x_4232_ = l_Lean_Syntax_node2(v___y_4188_, v___y_4187_, v___x_4231_, v___x_4200_);
v___x_4233_ = l_Lean_Syntax_node3(v___y_4188_, v___y_4166_, v___x_4201_, v___x_4217_, v___x_4232_);
lean_inc(v___y_4176_);
v___x_4234_ = l_Lean_Syntax_node1(v___y_4188_, v___y_4176_, v___x_4233_);
lean_inc(v___y_4186_);
v___x_4235_ = l_Lean_Syntax_node2(v___y_4188_, v___y_4186_, v___y_4170_, v___x_4234_);
v___x_4236_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4236_, 0, v___x_4235_);
lean_ctor_set(v___x_4236_, 1, v___y_4185_);
return v___x_4236_;
}
v___jp_4237_:
{
lean_object* v___x_4264_; lean_object* v___x_4265_; lean_object* v___x_4266_; lean_object* v___x_4267_; lean_object* v___x_4268_; lean_object* v___x_4269_; lean_object* v___x_4270_; lean_object* v___x_4271_; lean_object* v___x_4272_; lean_object* v___x_4273_; lean_object* v___x_4274_; lean_object* v___x_4275_; lean_object* v___x_4276_; lean_object* v___x_4277_; lean_object* v___x_4278_; lean_object* v___x_4279_; lean_object* v___x_4280_; 
v___x_4264_ = ((lean_object*)(l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__11));
lean_inc_ref(v___y_4245_);
lean_inc_ref(v___y_4262_);
v___x_4265_ = l_Lean_Name_mkStr4(v___x_4162_, v___y_4262_, v___y_4245_, v___x_4264_);
v___x_4266_ = ((lean_object*)(l_Lean_Parser_antiquotNestedExpr_formatter___closed__3));
lean_inc_n(v___y_4260_, 4);
v___x_4267_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4267_, 0, v___y_4260_);
lean_ctor_set(v___x_4267_, 1, v___x_4266_);
v___x_4268_ = lean_obj_once(&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__13, &l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__13_once, _init_l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__13);
v___x_4269_ = ((lean_object*)(l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__14));
lean_inc_n(v___y_4255_, 2);
lean_inc_n(v___y_4251_, 2);
v___x_4270_ = l_Lean_addMacroScope(v___y_4251_, v___x_4269_, v___y_4255_);
lean_inc_n(v___y_4238_, 2);
v___x_4271_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_4271_, 0, v___y_4260_);
lean_ctor_set(v___x_4271_, 1, v___x_4268_);
lean_ctor_set(v___x_4271_, 2, v___x_4270_);
lean_ctor_set(v___x_4271_, 3, v___y_4238_);
v___x_4272_ = ((lean_object*)(l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__15));
v___x_4273_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4273_, 0, v___y_4260_);
lean_ctor_set(v___x_4273_, 1, v___x_4272_);
v___x_4274_ = lean_obj_once(&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__17, &l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__17_once, _init_l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__17);
v___x_4275_ = ((lean_object*)(l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__18));
v___x_4276_ = l_Lean_addMacroScope(v___y_4251_, v___x_4275_, v___y_4255_);
v___x_4277_ = ((lean_object*)(l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__20));
lean_inc(v___y_4253_);
v___x_4278_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4278_, 0, v___x_4277_);
lean_ctor_set(v___x_4278_, 1, v___y_4253_);
v___x_4279_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4279_, 0, v___x_4278_);
lean_ctor_set(v___x_4279_, 1, v___y_4238_);
v___x_4280_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_4280_, 0, v___y_4260_);
lean_ctor_set(v___x_4280_, 1, v___x_4274_);
lean_ctor_set(v___x_4280_, 2, v___x_4276_);
lean_ctor_set(v___x_4280_, 3, v___x_4279_);
if (lean_obj_tag(v___y_4241_) == 0)
{
lean_object* v___x_4281_; 
lean_inc(v___y_4254_);
lean_inc(v___y_4253_);
v___x_4281_ = l___private_Init_Meta_Defs_0__Lean_getEscapedNameParts_x3f(v___y_4253_, v___y_4254_);
if (lean_obj_tag(v___x_4281_) == 0)
{
lean_object* v___x_4282_; 
v___x_4282_ = l_Lean_quoteNameMk(v___y_4254_);
v___y_4164_ = v___y_4238_;
v___y_4165_ = v___y_4239_;
v___y_4166_ = v___y_4242_;
v___y_4167_ = v___x_4273_;
v___y_4168_ = v___y_4263_;
v___y_4169_ = v___y_4244_;
v___y_4170_ = v___y_4243_;
v___y_4171_ = v___y_4247_;
v___y_4172_ = v___y_4246_;
v___y_4173_ = v___x_4271_;
v___y_4174_ = v___x_4265_;
v___y_4175_ = v___y_4248_;
v___y_4176_ = v___y_4249_;
v___y_4177_ = v___y_4250_;
v___y_4178_ = v___x_4267_;
v___y_4179_ = v___y_4251_;
v___y_4180_ = v___y_4252_;
v___y_4181_ = v___y_4253_;
v___y_4182_ = v___y_4255_;
v___y_4183_ = v___x_4280_;
v___y_4184_ = v___y_4256_;
v___y_4185_ = v___y_4257_;
v___y_4186_ = v___y_4258_;
v___y_4187_ = v___y_4259_;
v___y_4188_ = v___y_4260_;
v___y_4189_ = v___y_4261_;
v___y_4190_ = v___x_4282_;
goto v___jp_4163_;
}
else
{
lean_object* v_val_4283_; lean_object* v___x_4284_; lean_object* v___x_4285_; lean_object* v___x_4286_; lean_object* v___x_4287_; lean_object* v___x_4288_; lean_object* v___x_4289_; lean_object* v___x_4290_; lean_object* v___x_4291_; lean_object* v___x_4292_; lean_object* v___x_4293_; lean_object* v___x_4294_; 
lean_dec(v___y_4254_);
v_val_4283_ = lean_ctor_get(v___x_4281_, 0);
lean_inc(v_val_4283_);
lean_dec_ref_known(v___x_4281_, 1);
v___x_4284_ = ((lean_object*)(l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__21));
lean_inc_ref(v___y_4245_);
lean_inc_ref(v___y_4262_);
v___x_4285_ = l_Lean_Name_mkStr4(v___x_4162_, v___y_4262_, v___y_4245_, v___x_4284_);
v___x_4286_ = ((lean_object*)(l_Lean_Parser_identWithPartialTrailingDot_formatter___closed__0));
v___x_4287_ = lean_string_intercalate(v___x_4286_, v_val_4283_);
lean_inc_ref(v___y_4240_);
v___x_4288_ = lean_string_append(v___y_4240_, v___x_4287_);
lean_dec_ref(v___x_4287_);
v___x_4289_ = lean_box(2);
v___x_4290_ = l_Lean_Syntax_mkNameLit(v___x_4288_, v___x_4289_);
v___x_4291_ = lean_unsigned_to_nat(1u);
v___x_4292_ = lean_mk_empty_array_with_capacity(v___x_4291_);
v___x_4293_ = lean_array_push(v___x_4292_, v___x_4290_);
v___x_4294_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_4294_, 0, v___x_4289_);
lean_ctor_set(v___x_4294_, 1, v___x_4285_);
lean_ctor_set(v___x_4294_, 2, v___x_4293_);
v___y_4164_ = v___y_4238_;
v___y_4165_ = v___y_4239_;
v___y_4166_ = v___y_4242_;
v___y_4167_ = v___x_4273_;
v___y_4168_ = v___y_4263_;
v___y_4169_ = v___y_4244_;
v___y_4170_ = v___y_4243_;
v___y_4171_ = v___y_4247_;
v___y_4172_ = v___y_4246_;
v___y_4173_ = v___x_4271_;
v___y_4174_ = v___x_4265_;
v___y_4175_ = v___y_4248_;
v___y_4176_ = v___y_4249_;
v___y_4177_ = v___y_4250_;
v___y_4178_ = v___x_4267_;
v___y_4179_ = v___y_4251_;
v___y_4180_ = v___y_4252_;
v___y_4181_ = v___y_4253_;
v___y_4182_ = v___y_4255_;
v___y_4183_ = v___x_4280_;
v___y_4184_ = v___y_4256_;
v___y_4185_ = v___y_4257_;
v___y_4186_ = v___y_4258_;
v___y_4187_ = v___y_4259_;
v___y_4188_ = v___y_4260_;
v___y_4189_ = v___y_4261_;
v___y_4190_ = v___x_4294_;
goto v___jp_4163_;
}
}
else
{
lean_object* v_val_4295_; 
lean_dec(v___y_4254_);
v_val_4295_ = lean_ctor_get(v___y_4241_, 0);
lean_inc(v_val_4295_);
lean_dec_ref_known(v___y_4241_, 1);
v___y_4164_ = v___y_4238_;
v___y_4165_ = v___y_4239_;
v___y_4166_ = v___y_4242_;
v___y_4167_ = v___x_4273_;
v___y_4168_ = v___y_4263_;
v___y_4169_ = v___y_4244_;
v___y_4170_ = v___y_4243_;
v___y_4171_ = v___y_4247_;
v___y_4172_ = v___y_4246_;
v___y_4173_ = v___x_4271_;
v___y_4174_ = v___x_4265_;
v___y_4175_ = v___y_4248_;
v___y_4176_ = v___y_4249_;
v___y_4177_ = v___y_4250_;
v___y_4178_ = v___x_4267_;
v___y_4179_ = v___y_4251_;
v___y_4180_ = v___y_4252_;
v___y_4181_ = v___y_4253_;
v___y_4182_ = v___y_4255_;
v___y_4183_ = v___x_4280_;
v___y_4184_ = v___y_4256_;
v___y_4185_ = v___y_4257_;
v___y_4186_ = v___y_4258_;
v___y_4187_ = v___y_4259_;
v___y_4188_ = v___y_4260_;
v___y_4189_ = v___y_4261_;
v___y_4190_ = v_val_4295_;
goto v___jp_4163_;
}
}
v___jp_4296_:
{
lean_object* v_quotContext_4306_; lean_object* v_currMacroScope_4307_; lean_object* v_ref_4308_; uint8_t v___x_4309_; lean_object* v___x_4310_; lean_object* v___x_4311_; lean_object* v___x_4312_; lean_object* v___x_4313_; lean_object* v___x_4314_; lean_object* v___x_4315_; lean_object* v___x_4316_; lean_object* v___x_4317_; lean_object* v___x_4318_; lean_object* v___x_4319_; lean_object* v___x_4320_; lean_object* v___x_4321_; lean_object* v___x_4322_; lean_object* v___x_4323_; lean_object* v___x_4324_; lean_object* v___x_4325_; lean_object* v___x_4326_; lean_object* v___x_4327_; lean_object* v___x_4328_; lean_object* v___x_4329_; lean_object* v___x_4330_; lean_object* v___x_4331_; lean_object* v___x_4332_; lean_object* v___x_4333_; lean_object* v___x_4334_; 
v_quotContext_4306_ = lean_ctor_get(v___y_4304_, 1);
v_currMacroScope_4307_ = lean_ctor_get(v___y_4304_, 2);
v_ref_4308_ = lean_ctor_get(v___y_4304_, 5);
v___x_4309_ = 0;
v___x_4310_ = l_Lean_SourceInfo_fromRef(v_ref_4308_, v___x_4309_);
v___x_4311_ = ((lean_object*)(l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__1));
v___x_4312_ = ((lean_object*)(l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__22));
v___x_4313_ = ((lean_object*)(l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__23));
v___x_4314_ = ((lean_object*)(l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__24));
lean_inc_n(v___x_4310_, 4);
v___x_4315_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4315_, 0, v___x_4310_);
lean_ctor_set(v___x_4315_, 1, v___x_4313_);
v___x_4316_ = ((lean_object*)(l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__26));
v___x_4317_ = ((lean_object*)(l_Lean_Parser_mkAntiquotSplice_formatter___closed__5));
v___x_4318_ = ((lean_object*)(l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__28));
v___x_4319_ = ((lean_object*)(l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__30));
v___x_4320_ = ((lean_object*)(l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__32));
v___x_4321_ = lean_obj_once(&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__34, &l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__34_once, _init_l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__34);
v___x_4322_ = ((lean_object*)(l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__35));
v___x_4323_ = ((lean_object*)(l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__36));
lean_inc(v_currMacroScope_4307_);
lean_inc(v_quotContext_4306_);
v___x_4324_ = l_Lean_addMacroScope(v_quotContext_4306_, v___x_4323_, v_currMacroScope_4307_);
v___x_4325_ = ((lean_object*)(l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__37));
lean_inc(v___y_4300_);
v___x_4326_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4326_, 0, v___x_4325_);
lean_ctor_set(v___x_4326_, 1, v___y_4300_);
v___x_4327_ = lean_box(0);
v___x_4328_ = ((lean_object*)(l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__39));
v___x_4329_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4329_, 0, v___x_4326_);
lean_ctor_set(v___x_4329_, 1, v___x_4328_);
v___x_4330_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_4330_, 0, v___x_4310_);
lean_ctor_set(v___x_4330_, 1, v___x_4321_);
lean_ctor_set(v___x_4330_, 2, v___x_4324_);
lean_ctor_set(v___x_4330_, 3, v___x_4329_);
v___x_4331_ = ((lean_object*)(l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__41));
v___x_4332_ = ((lean_object*)(l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__42));
v___x_4333_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4333_, 0, v___x_4310_);
lean_ctor_set(v___x_4333_, 1, v___x_4332_);
lean_inc(v___y_4298_);
lean_inc_ref(v___x_4333_);
v___x_4334_ = l_Lean_Syntax_node3(v___x_4310_, v___x_4331_, v___x_4333_, v___x_4333_, v___y_4298_);
if (lean_obj_tag(v___y_4303_) == 0)
{
lean_object* v___x_4335_; 
v___x_4335_ = lean_obj_once(&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__63, &l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__63_once, _init_l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__63);
lean_inc(v_currMacroScope_4307_);
lean_inc(v_quotContext_4306_);
v___y_4238_ = v___x_4327_;
v___y_4239_ = v___y_4298_;
v___y_4240_ = v___x_4332_;
v___y_4241_ = v___y_4301_;
v___y_4242_ = v___x_4317_;
v___y_4243_ = v___x_4315_;
v___y_4244_ = v___x_4309_;
v___y_4245_ = v___x_4312_;
v___y_4246_ = v___x_4322_;
v___y_4247_ = v___x_4320_;
v___y_4248_ = v___y_4305_;
v___y_4249_ = v___x_4316_;
v___y_4250_ = v___x_4330_;
v___y_4251_ = v_quotContext_4306_;
v___y_4252_ = v___y_4297_;
v___y_4253_ = v___y_4300_;
v___y_4254_ = v___y_4299_;
v___y_4255_ = v_currMacroScope_4307_;
v___y_4256_ = v___x_4319_;
v___y_4257_ = v___y_4302_;
v___y_4258_ = v___x_4314_;
v___y_4259_ = v___x_4318_;
v___y_4260_ = v___x_4310_;
v___y_4261_ = v___x_4334_;
v___y_4262_ = v___x_4311_;
v___y_4263_ = v___x_4335_;
goto v___jp_4237_;
}
else
{
lean_object* v_val_4336_; 
v_val_4336_ = lean_ctor_get(v___y_4303_, 0);
lean_inc(v_val_4336_);
lean_dec_ref_known(v___y_4303_, 1);
lean_inc(v_currMacroScope_4307_);
lean_inc(v_quotContext_4306_);
v___y_4238_ = v___x_4327_;
v___y_4239_ = v___y_4298_;
v___y_4240_ = v___x_4332_;
v___y_4241_ = v___y_4301_;
v___y_4242_ = v___x_4317_;
v___y_4243_ = v___x_4315_;
v___y_4244_ = v___x_4309_;
v___y_4245_ = v___x_4312_;
v___y_4246_ = v___x_4322_;
v___y_4247_ = v___x_4320_;
v___y_4248_ = v___y_4305_;
v___y_4249_ = v___x_4316_;
v___y_4250_ = v___x_4330_;
v___y_4251_ = v_quotContext_4306_;
v___y_4252_ = v___y_4297_;
v___y_4253_ = v___y_4300_;
v___y_4254_ = v___y_4299_;
v___y_4255_ = v_currMacroScope_4307_;
v___y_4256_ = v___x_4319_;
v___y_4257_ = v___y_4302_;
v___y_4258_ = v___x_4314_;
v___y_4259_ = v___x_4318_;
v___y_4260_ = v___x_4310_;
v___y_4261_ = v___x_4334_;
v___y_4262_ = v___x_4311_;
v___y_4263_ = v_val_4336_;
goto v___jp_4237_;
}
}
v___jp_4337_:
{
lean_object* v___x_4344_; lean_object* v___x_4345_; 
v___x_4344_ = l_Lean_TSyntax_getId(v___y_4338_);
lean_inc(v___x_4344_);
v___x_4345_ = l_Lean_Macro_resolveGlobalName(v___x_4344_, v___y_4341_, v___y_4342_);
if (lean_obj_tag(v___x_4345_) == 0)
{
lean_object* v_a_4346_; 
v_a_4346_ = lean_ctor_get(v___x_4345_, 0);
lean_inc(v_a_4346_);
if (lean_obj_tag(v_a_4346_) == 1)
{
lean_object* v_head_4347_; lean_object* v_snd_4348_; 
v_head_4347_ = lean_ctor_get(v_a_4346_, 0);
lean_inc(v_head_4347_);
v_snd_4348_ = lean_ctor_get(v_head_4347_, 1);
lean_inc(v_snd_4348_);
if (lean_obj_tag(v_snd_4348_) == 0)
{
lean_object* v_tail_4349_; 
v_tail_4349_ = lean_ctor_get(v_a_4346_, 1);
lean_inc(v_tail_4349_);
lean_dec_ref_known(v_a_4346_, 2);
if (lean_obj_tag(v_tail_4349_) == 0)
{
if (lean_obj_tag(v___y_4343_) == 0)
{
lean_object* v_a_4350_; lean_object* v_fst_4351_; lean_object* v___x_4352_; 
v_a_4350_ = lean_ctor_get(v___x_4345_, 1);
lean_inc(v_a_4350_);
lean_dec_ref_known(v___x_4345_, 2);
v_fst_4351_ = lean_ctor_get(v_head_4347_, 0);
lean_inc(v_fst_4351_);
lean_dec(v_head_4347_);
lean_inc(v___x_4344_);
v___x_4352_ = l___private_Init_Meta_Defs_0__Lean_getEscapedNameParts_x3f(v_snd_4348_, v___x_4344_);
if (lean_obj_tag(v___x_4352_) == 0)
{
lean_object* v___x_4353_; 
lean_inc(v___x_4344_);
v___x_4353_ = l_Lean_quoteNameMk(v___x_4344_);
v___y_4297_ = v___x_4344_;
v___y_4298_ = v___y_4338_;
v___y_4299_ = v_fst_4351_;
v___y_4300_ = v_snd_4348_;
v___y_4301_ = v___y_4339_;
v___y_4302_ = v_a_4350_;
v___y_4303_ = v___y_4340_;
v___y_4304_ = v___y_4341_;
v___y_4305_ = v___x_4353_;
goto v___jp_4296_;
}
else
{
lean_object* v_val_4354_; lean_object* v___x_4355_; lean_object* v___x_4356_; lean_object* v___x_4357_; lean_object* v___x_4358_; lean_object* v___x_4359_; lean_object* v___x_4360_; lean_object* v___x_4361_; lean_object* v___x_4362_; lean_object* v___x_4363_; lean_object* v___x_4364_; lean_object* v___x_4365_; 
v_val_4354_ = lean_ctor_get(v___x_4352_, 0);
lean_inc(v_val_4354_);
lean_dec_ref_known(v___x_4352_, 1);
v___x_4355_ = ((lean_object*)(l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__64));
v___x_4356_ = ((lean_object*)(l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__42));
v___x_4357_ = ((lean_object*)(l_Lean_Parser_identWithPartialTrailingDot_formatter___closed__0));
v___x_4358_ = lean_string_intercalate(v___x_4357_, v_val_4354_);
v___x_4359_ = lean_string_append(v___x_4356_, v___x_4358_);
lean_dec_ref(v___x_4358_);
v___x_4360_ = lean_box(2);
v___x_4361_ = l_Lean_Syntax_mkNameLit(v___x_4359_, v___x_4360_);
v___x_4362_ = lean_unsigned_to_nat(1u);
v___x_4363_ = lean_mk_empty_array_with_capacity(v___x_4362_);
v___x_4364_ = lean_array_push(v___x_4363_, v___x_4361_);
v___x_4365_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_4365_, 0, v___x_4360_);
lean_ctor_set(v___x_4365_, 1, v___x_4355_);
lean_ctor_set(v___x_4365_, 2, v___x_4364_);
v___y_4297_ = v___x_4344_;
v___y_4298_ = v___y_4338_;
v___y_4299_ = v_fst_4351_;
v___y_4300_ = v_snd_4348_;
v___y_4301_ = v___y_4339_;
v___y_4302_ = v_a_4350_;
v___y_4303_ = v___y_4340_;
v___y_4304_ = v___y_4341_;
v___y_4305_ = v___x_4365_;
goto v___jp_4296_;
}
}
else
{
lean_object* v_a_4366_; lean_object* v_fst_4367_; lean_object* v_val_4368_; lean_object* v___x_4369_; lean_object* v___x_4370_; lean_object* v___x_4371_; lean_object* v___x_4372_; 
v_a_4366_ = lean_ctor_get(v___x_4345_, 1);
lean_inc(v_a_4366_);
lean_dec_ref_known(v___x_4345_, 2);
v_fst_4367_ = lean_ctor_get(v_head_4347_, 0);
lean_inc(v_fst_4367_);
lean_dec(v_head_4347_);
v_val_4368_ = lean_ctor_get(v___y_4343_, 0);
lean_inc(v_val_4368_);
lean_dec_ref_known(v___y_4343_, 1);
v___x_4369_ = l_Lean_TSyntax_getString(v_val_4368_);
lean_dec(v_val_4368_);
v___x_4370_ = lean_obj_once(&l_Lean_Parser_mkAntiquot_formatter___closed__9, &l_Lean_Parser_mkAntiquot_formatter___closed__9_once, _init_l_Lean_Parser_mkAntiquot_formatter___closed__9);
v___x_4371_ = l_Lean_Name_str___override(v___x_4370_, v___x_4369_);
lean_inc(v___x_4371_);
v___x_4372_ = l___private_Init_Meta_Defs_0__Lean_getEscapedNameParts_x3f(v_snd_4348_, v___x_4371_);
if (lean_obj_tag(v___x_4372_) == 0)
{
lean_object* v___x_4373_; 
v___x_4373_ = l_Lean_quoteNameMk(v___x_4371_);
v___y_4297_ = v___x_4344_;
v___y_4298_ = v___y_4338_;
v___y_4299_ = v_fst_4367_;
v___y_4300_ = v_snd_4348_;
v___y_4301_ = v___y_4339_;
v___y_4302_ = v_a_4366_;
v___y_4303_ = v___y_4340_;
v___y_4304_ = v___y_4341_;
v___y_4305_ = v___x_4373_;
goto v___jp_4296_;
}
else
{
lean_object* v_val_4374_; lean_object* v___x_4375_; lean_object* v___x_4376_; lean_object* v___x_4377_; lean_object* v___x_4378_; lean_object* v___x_4379_; lean_object* v___x_4380_; lean_object* v___x_4381_; lean_object* v___x_4382_; lean_object* v___x_4383_; lean_object* v___x_4384_; lean_object* v___x_4385_; 
lean_dec(v___x_4371_);
v_val_4374_ = lean_ctor_get(v___x_4372_, 0);
lean_inc(v_val_4374_);
lean_dec_ref_known(v___x_4372_, 1);
v___x_4375_ = ((lean_object*)(l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__64));
v___x_4376_ = ((lean_object*)(l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__42));
v___x_4377_ = ((lean_object*)(l_Lean_Parser_identWithPartialTrailingDot_formatter___closed__0));
v___x_4378_ = lean_string_intercalate(v___x_4377_, v_val_4374_);
v___x_4379_ = lean_string_append(v___x_4376_, v___x_4378_);
lean_dec_ref(v___x_4378_);
v___x_4380_ = lean_box(2);
v___x_4381_ = l_Lean_Syntax_mkNameLit(v___x_4379_, v___x_4380_);
v___x_4382_ = lean_unsigned_to_nat(1u);
v___x_4383_ = lean_mk_empty_array_with_capacity(v___x_4382_);
v___x_4384_ = lean_array_push(v___x_4383_, v___x_4381_);
v___x_4385_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_4385_, 0, v___x_4380_);
lean_ctor_set(v___x_4385_, 1, v___x_4375_);
lean_ctor_set(v___x_4385_, 2, v___x_4384_);
v___y_4297_ = v___x_4344_;
v___y_4298_ = v___y_4338_;
v___y_4299_ = v_fst_4367_;
v___y_4300_ = v_snd_4348_;
v___y_4301_ = v___y_4339_;
v___y_4302_ = v_a_4366_;
v___y_4303_ = v___y_4340_;
v___y_4304_ = v___y_4341_;
v___y_4305_ = v___x_4385_;
goto v___jp_4296_;
}
}
}
else
{
lean_object* v_a_4386_; 
lean_dec(v_tail_4349_);
lean_dec(v_head_4347_);
lean_dec(v___x_4344_);
lean_dec(v___y_4343_);
lean_dec(v___y_4340_);
lean_dec(v___y_4339_);
lean_dec(v___y_4338_);
v_a_4386_ = lean_ctor_get(v___x_4345_, 1);
lean_inc(v_a_4386_);
lean_dec_ref_known(v___x_4345_, 2);
v___y_4158_ = v___y_4341_;
v___y_4159_ = v_a_4386_;
goto v___jp_4157_;
}
}
else
{
lean_object* v_a_4387_; 
lean_dec(v_snd_4348_);
lean_dec(v_head_4347_);
lean_dec_ref_known(v_a_4346_, 2);
lean_dec(v___x_4344_);
lean_dec(v___y_4343_);
lean_dec(v___y_4340_);
lean_dec(v___y_4339_);
lean_dec(v___y_4338_);
v_a_4387_ = lean_ctor_get(v___x_4345_, 1);
lean_inc(v_a_4387_);
lean_dec_ref_known(v___x_4345_, 2);
v___y_4158_ = v___y_4341_;
v___y_4159_ = v_a_4387_;
goto v___jp_4157_;
}
}
else
{
lean_object* v_a_4388_; 
lean_dec(v_a_4346_);
lean_dec(v___x_4344_);
lean_dec(v___y_4343_);
lean_dec(v___y_4340_);
lean_dec(v___y_4339_);
lean_dec(v___y_4338_);
v_a_4388_ = lean_ctor_get(v___x_4345_, 1);
lean_inc(v_a_4388_);
lean_dec_ref_known(v___x_4345_, 2);
v___y_4158_ = v___y_4341_;
v___y_4159_ = v_a_4388_;
goto v___jp_4157_;
}
}
else
{
lean_object* v_a_4389_; lean_object* v_a_4390_; lean_object* v___x_4392_; uint8_t v_isShared_4393_; uint8_t v_isSharedCheck_4397_; 
lean_dec(v___x_4344_);
lean_dec(v___y_4343_);
lean_dec(v___y_4340_);
lean_dec(v___y_4339_);
lean_dec(v___y_4338_);
v_a_4389_ = lean_ctor_get(v___x_4345_, 0);
v_a_4390_ = lean_ctor_get(v___x_4345_, 1);
v_isSharedCheck_4397_ = !lean_is_exclusive(v___x_4345_);
if (v_isSharedCheck_4397_ == 0)
{
v___x_4392_ = v___x_4345_;
v_isShared_4393_ = v_isSharedCheck_4397_;
goto v_resetjp_4391_;
}
else
{
lean_inc(v_a_4390_);
lean_inc(v_a_4389_);
lean_dec(v___x_4345_);
v___x_4392_ = lean_box(0);
v_isShared_4393_ = v_isSharedCheck_4397_;
goto v_resetjp_4391_;
}
v_resetjp_4391_:
{
lean_object* v___x_4395_; 
if (v_isShared_4393_ == 0)
{
v___x_4395_ = v___x_4392_;
goto v_reusejp_4394_;
}
else
{
lean_object* v_reuseFailAlloc_4396_; 
v_reuseFailAlloc_4396_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4396_, 0, v_a_4389_);
lean_ctor_set(v_reuseFailAlloc_4396_, 1, v_a_4390_);
v___x_4395_ = v_reuseFailAlloc_4396_;
goto v_reusejp_4394_;
}
v_reusejp_4394_:
{
return v___x_4395_;
}
}
}
}
v___jp_4398_:
{
lean_object* v___x_4405_; 
v___x_4405_ = l_Lean_Syntax_getOptional_x3f(v___y_4401_);
lean_dec(v___y_4401_);
if (lean_obj_tag(v___x_4405_) == 0)
{
lean_object* v___x_4406_; 
v___x_4406_ = lean_box(0);
v___y_4338_ = v___y_4399_;
v___y_4339_ = v___y_4400_;
v___y_4340_ = v___y_4404_;
v___y_4341_ = v___y_4402_;
v___y_4342_ = v___y_4403_;
v___y_4343_ = v___x_4406_;
goto v___jp_4337_;
}
else
{
lean_object* v_val_4407_; lean_object* v___x_4409_; uint8_t v_isShared_4410_; uint8_t v_isSharedCheck_4414_; 
v_val_4407_ = lean_ctor_get(v___x_4405_, 0);
v_isSharedCheck_4414_ = !lean_is_exclusive(v___x_4405_);
if (v_isSharedCheck_4414_ == 0)
{
v___x_4409_ = v___x_4405_;
v_isShared_4410_ = v_isSharedCheck_4414_;
goto v_resetjp_4408_;
}
else
{
lean_inc(v_val_4407_);
lean_dec(v___x_4405_);
v___x_4409_ = lean_box(0);
v_isShared_4410_ = v_isSharedCheck_4414_;
goto v_resetjp_4408_;
}
v_resetjp_4408_:
{
lean_object* v___x_4412_; 
if (v_isShared_4410_ == 0)
{
v___x_4412_ = v___x_4409_;
goto v_reusejp_4411_;
}
else
{
lean_object* v_reuseFailAlloc_4413_; 
v_reuseFailAlloc_4413_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4413_, 0, v_val_4407_);
v___x_4412_ = v_reuseFailAlloc_4413_;
goto v_reusejp_4411_;
}
v_reusejp_4411_:
{
v___y_4338_ = v___y_4399_;
v___y_4339_ = v___y_4400_;
v___y_4340_ = v___y_4404_;
v___y_4341_ = v___y_4402_;
v___y_4342_ = v___y_4403_;
v___y_4343_ = v___x_4412_;
goto v___jp_4337_;
}
}
}
}
v___jp_4415_:
{
lean_object* v___x_4419_; lean_object* v___x_4420_; lean_object* v___x_4421_; lean_object* v_declName_4422_; lean_object* v___x_4423_; lean_object* v___x_4424_; lean_object* v___x_4425_; 
v___x_4419_ = lean_unsigned_to_nat(2u);
v___x_4420_ = l_Lean_Syntax_getArg(v_x_4154_, v___x_4419_);
v___x_4421_ = lean_unsigned_to_nat(3u);
v_declName_4422_ = l_Lean_Syntax_getArg(v_x_4154_, v___x_4421_);
v___x_4423_ = lean_unsigned_to_nat(4u);
v___x_4424_ = l_Lean_Syntax_getArg(v_x_4154_, v___x_4423_);
lean_dec(v_x_4154_);
v___x_4425_ = l_Lean_Syntax_getOptional_x3f(v___x_4424_);
lean_dec(v___x_4424_);
if (lean_obj_tag(v___x_4425_) == 0)
{
lean_object* v___x_4426_; 
v___x_4426_ = lean_box(0);
v___y_4399_ = v_declName_4422_;
v___y_4400_ = v_kind_x3f_4416_;
v___y_4401_ = v___x_4420_;
v___y_4402_ = v___y_4417_;
v___y_4403_ = v___y_4418_;
v___y_4404_ = v___x_4426_;
goto v___jp_4398_;
}
else
{
lean_object* v_val_4427_; lean_object* v___x_4429_; uint8_t v_isShared_4430_; uint8_t v_isSharedCheck_4434_; 
v_val_4427_ = lean_ctor_get(v___x_4425_, 0);
v_isSharedCheck_4434_ = !lean_is_exclusive(v___x_4425_);
if (v_isSharedCheck_4434_ == 0)
{
v___x_4429_ = v___x_4425_;
v_isShared_4430_ = v_isSharedCheck_4434_;
goto v_resetjp_4428_;
}
else
{
lean_inc(v_val_4427_);
lean_dec(v___x_4425_);
v___x_4429_ = lean_box(0);
v_isShared_4430_ = v_isSharedCheck_4434_;
goto v_resetjp_4428_;
}
v_resetjp_4428_:
{
lean_object* v___x_4432_; 
if (v_isShared_4430_ == 0)
{
v___x_4432_ = v___x_4429_;
goto v_reusejp_4431_;
}
else
{
lean_object* v_reuseFailAlloc_4433_; 
v_reuseFailAlloc_4433_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4433_, 0, v_val_4427_);
v___x_4432_ = v_reuseFailAlloc_4433_;
goto v_reusejp_4431_;
}
v_reusejp_4431_:
{
v___y_4399_ = v_declName_4422_;
v___y_4400_ = v_kind_x3f_4416_;
v___y_4401_ = v___x_4420_;
v___y_4402_ = v___y_4417_;
v___y_4403_ = v___y_4418_;
v___y_4404_ = v___x_4432_;
goto v___jp_4398_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___boxed(lean_object* v_x_4455_, lean_object* v_a_4456_, lean_object* v_a_4457_){
_start:
{
lean_object* v_res_4458_; 
v_res_4458_ = l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1(v_x_4455_, v_a_4456_, v_a_4457_);
lean_dec_ref(v_a_4456_);
return v_res_4458_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_initFn___lam__0_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2_(lean_object* v___y_4459_, lean_object* v___y_4460_, lean_object* v___y_4461_, lean_object* v___y_4462_){
_start:
{
lean_object* v___x_4464_; 
v___x_4464_ = l_Lean_PrettyPrinter_Parenthesizer_skip_parenthesizer___redArg();
return v___x_4464_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_initFn___lam__0_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2____boxed(lean_object* v___y_4465_, lean_object* v___y_4466_, lean_object* v___y_4467_, lean_object* v___y_4468_, lean_object* v___y_4469_){
_start:
{
lean_object* v_res_4470_; 
v_res_4470_ = l___private_Lean_Parser_Extra_0__Lean_initFn___lam__0_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2_(v___y_4465_, v___y_4466_, v___y_4467_, v___y_4468_);
lean_dec(v___y_4468_);
lean_dec_ref(v___y_4467_);
lean_dec(v___y_4466_);
lean_dec_ref(v___y_4465_);
return v_res_4470_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_initFn___lam__2_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2_(lean_object* v___y_4471_){
_start:
{
lean_inc_ref(v___y_4471_);
return v___y_4471_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_initFn___lam__2_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2____boxed(lean_object* v___y_4472_){
_start:
{
lean_object* v_res_4473_; 
v_res_4473_ = l___private_Lean_Parser_Extra_0__Lean_initFn___lam__2_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2_(v___y_4472_);
lean_dec_ref(v___y_4472_);
return v_res_4473_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_initFn___lam__3_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2_(lean_object* v___y_4474_, lean_object* v___y_4475_, lean_object* v___y_4476_, lean_object* v___y_4477_, lean_object* v___y_4478_){
_start:
{
lean_object* v___x_4480_; 
v___x_4480_ = lean_apply_5(v___y_4474_, v___y_4475_, v___y_4476_, v___y_4477_, v___y_4478_, lean_box(0));
return v___x_4480_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_initFn___lam__3_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2____boxed(lean_object* v___y_4481_, lean_object* v___y_4482_, lean_object* v___y_4483_, lean_object* v___y_4484_, lean_object* v___y_4485_, lean_object* v___y_4486_){
_start:
{
lean_object* v_res_4487_; 
v_res_4487_ = l___private_Lean_Parser_Extra_0__Lean_initFn___lam__3_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2_(v___y_4481_, v___y_4482_, v___y_4483_, v___y_4484_, v___y_4485_);
return v_res_4487_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_initFn___lam__13_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2_(lean_object* v___y_4488_, lean_object* v___y_4489_, lean_object* v___y_4490_, lean_object* v___y_4491_){
_start:
{
lean_object* v___x_4493_; 
v___x_4493_ = l_Lean_PrettyPrinter_Formatter_pushLine___redArg(v___y_4489_);
return v___x_4493_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_initFn___lam__13_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2____boxed(lean_object* v___y_4494_, lean_object* v___y_4495_, lean_object* v___y_4496_, lean_object* v___y_4497_, lean_object* v___y_4498_){
_start:
{
lean_object* v_res_4499_; 
v_res_4499_ = l___private_Lean_Parser_Extra_0__Lean_initFn___lam__13_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2_(v___y_4494_, v___y_4495_, v___y_4496_, v___y_4497_);
lean_dec(v___y_4497_);
lean_dec_ref(v___y_4496_);
lean_dec(v___y_4495_);
lean_dec_ref(v___y_4494_);
return v_res_4499_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_initFn___lam__5_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2_(lean_object* v___x_4500_, lean_object* v___y_4501_){
_start:
{
lean_object* v___x_4502_; 
v___x_4502_ = l_Lean_Parser_node(v___x_4500_, v___y_4501_);
return v___x_4502_;
}
}
static lean_object* _init_l___private_Lean_Parser_Extra_0__Lean_initFn___closed__9_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4515_; lean_object* v___x_4516_; 
v___x_4515_ = lean_alloc_closure((void*)(l_Lean_ppHardLineUnlessUngrouped_formatter___boxed), 5, 0);
v___x_4516_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4516_, 0, v___x_4515_);
return v___x_4516_;
}
}
static lean_object* _init_l___private_Lean_Parser_Extra_0__Lean_initFn___closed__13_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4523_; lean_object* v___x_4524_; 
v___x_4523_ = lean_alloc_closure((void*)(l_Lean_ppAllowUngrouped_formatter___boxed), 5, 0);
v___x_4524_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4524_, 0, v___x_4523_);
return v___x_4524_;
}
}
static lean_object* _init_l___private_Lean_Parser_Extra_0__Lean_initFn___closed__38_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2_(void){
_start:
{
uint8_t v___x_4570_; lean_object* v___x_4571_; lean_object* v___x_4572_; lean_object* v___x_4573_; 
v___x_4570_ = 0;
v___x_4571_ = lean_box(0);
v___x_4572_ = lean_obj_once(&l_Lean_Parser_mkAntiquot_formatter___closed__9, &l_Lean_Parser_mkAntiquot_formatter___closed__9_once, _init_l_Lean_Parser_mkAntiquot_formatter___closed__9);
v___x_4573_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_4573_, 0, v___x_4572_);
lean_ctor_set(v___x_4573_, 1, v___x_4571_);
lean_ctor_set_uint8(v___x_4573_, sizeof(void*)*2, v___x_4570_);
return v___x_4573_;
}
}
static lean_object* _init_l___private_Lean_Parser_Extra_0__Lean_initFn___closed__43_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4581_; lean_object* v___x_4582_; 
v___x_4581_ = lean_alloc_closure((void*)(l_Lean_ppLine_formatter___boxed), 5, 0);
v___x_4582_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4582_, 0, v___x_4581_);
return v___x_4582_;
}
}
static lean_object* _init_l___private_Lean_Parser_Extra_0__Lean_initFn___closed__47_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4589_; lean_object* v___x_4590_; 
v___x_4589_ = l_Lean_Parser_skip;
v___x_4590_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4590_, 0, v___x_4589_);
return v___x_4590_;
}
}
static lean_object* _init_l___private_Lean_Parser_Extra_0__Lean_initFn___closed__50_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2_(void){
_start:
{
uint8_t v___x_4595_; lean_object* v___x_4596_; lean_object* v___x_4597_; lean_object* v___x_4598_; 
v___x_4595_ = 1;
v___x_4596_ = ((lean_object*)(l___private_Lean_Parser_Extra_0__Lean_initFn___closed__49_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2_));
v___x_4597_ = lean_obj_once(&l_Lean_Parser_mkAntiquot_formatter___closed__9, &l_Lean_Parser_mkAntiquot_formatter___closed__9_once, _init_l_Lean_Parser_mkAntiquot_formatter___closed__9);
v___x_4598_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_4598_, 0, v___x_4597_);
lean_ctor_set(v___x_4598_, 1, v___x_4596_);
lean_ctor_set_uint8(v___x_4598_, sizeof(void*)*2, v___x_4595_);
return v___x_4598_;
}
}
static lean_object* _init_l___private_Lean_Parser_Extra_0__Lean_initFn___closed__51_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4599_; lean_object* v___x_4600_; 
v___x_4599_ = lean_alloc_closure((void*)(l_Lean_ppHardSpace_formatter___boxed), 5, 0);
v___x_4600_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4600_, 0, v___x_4599_);
return v___x_4600_;
}
}
static lean_object* _init_l___private_Lean_Parser_Extra_0__Lean_initFn___closed__53_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2_(void){
_start:
{
uint8_t v___x_4603_; lean_object* v___x_4604_; lean_object* v___x_4605_; lean_object* v___x_4606_; 
v___x_4603_ = 0;
v___x_4604_ = ((lean_object*)(l___private_Lean_Parser_Extra_0__Lean_initFn___closed__52_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2_));
v___x_4605_ = lean_obj_once(&l_Lean_Parser_mkAntiquot_formatter___closed__9, &l_Lean_Parser_mkAntiquot_formatter___closed__9_once, _init_l_Lean_Parser_mkAntiquot_formatter___closed__9);
v___x_4606_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_4606_, 0, v___x_4605_);
lean_ctor_set(v___x_4606_, 1, v___x_4604_);
lean_ctor_set_uint8(v___x_4606_, sizeof(void*)*2, v___x_4603_);
return v___x_4606_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_initFn_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_4626_; lean_object* v___y_4628_; lean_object* v___y_4629_; lean_object* v___y_4630_; lean_object* v___y_4640_; lean_object* v___y_4641_; lean_object* v___y_4642_; lean_object* v___y_4652_; lean_object* v___y_4653_; lean_object* v___y_4654_; lean_object* v___y_4655_; lean_object* v___y_4666_; lean_object* v___y_4667_; lean_object* v___y_4668_; lean_object* v___y_4669_; lean_object* v___y_4680_; lean_object* v___y_4681_; lean_object* v___y_4682_; lean_object* v___y_4683_; lean_object* v___y_4694_; lean_object* v___y_4695_; lean_object* v___y_4696_; lean_object* v___y_4697_; lean_object* v___y_4708_; lean_object* v___y_4709_; lean_object* v___y_4710_; lean_object* v___y_4711_; lean_object* v___x_4721_; lean_object* v___x_4722_; lean_object* v___x_4723_; lean_object* v___y_4725_; lean_object* v___y_4726_; lean_object* v___y_4727_; lean_object* v___y_4739_; lean_object* v___y_4740_; lean_object* v___y_4741_; lean_object* v___y_4751_; lean_object* v___y_4752_; lean_object* v___y_4753_; lean_object* v___y_4763_; lean_object* v___x_4774_; lean_object* v___y_4776_; lean_object* v___x_4786_; 
v___x_4626_ = ((lean_object*)(l_Lean_Parser_patternIgnore_formatter___closed__1));
v___x_4721_ = ((lean_object*)(l___private_Lean_Parser_Extra_0__Lean_Parser_patternIgnore___regBuiltin_Lean_Parser_patternIgnore_docString__1___closed__0));
v___x_4722_ = ((lean_object*)(l___private_Lean_Parser_Extra_0__Lean_initFn___closed__34_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2_));
v___x_4723_ = ((lean_object*)(l___private_Lean_Parser_Extra_0__Lean_initFn___closed__35_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2_));
v___x_4774_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_initFn___closed__53_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2_, &l___private_Lean_Parser_Extra_0__Lean_initFn___closed__53_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Extra_0__Lean_initFn___closed__53_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2_);
v___x_4786_ = l_Lean_Parser_registerAlias(v___x_4626_, v___x_4721_, v___x_4722_, v___x_4723_, v___x_4774_);
if (lean_obj_tag(v___x_4786_) == 0)
{
lean_object* v___x_4787_; lean_object* v___x_4788_; 
lean_dec_ref_known(v___x_4786_, 1);
v___x_4787_ = ((lean_object*)(l___private_Lean_Parser_Extra_0__Lean_initFn___closed__62_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2_));
v___x_4788_ = l_Lean_PrettyPrinter_Formatter_registerAlias(v___x_4626_, v___x_4787_);
if (lean_obj_tag(v___x_4788_) == 0)
{
lean_object* v___x_4789_; lean_object* v___x_4790_; 
lean_dec_ref_known(v___x_4788_, 1);
v___x_4789_ = ((lean_object*)(l___private_Lean_Parser_Extra_0__Lean_initFn___closed__64_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2_));
v___x_4790_ = l_Lean_PrettyPrinter_Parenthesizer_registerAlias(v___x_4626_, v___x_4789_);
v___y_4776_ = v___x_4790_;
goto v___jp_4775_;
}
else
{
v___y_4776_ = v___x_4788_;
goto v___jp_4775_;
}
}
else
{
v___y_4776_ = v___x_4786_;
goto v___jp_4775_;
}
v___jp_4627_:
{
if (lean_obj_tag(v___y_4630_) == 0)
{
lean_object* v___x_4631_; lean_object* v___x_4632_; lean_object* v___x_4633_; lean_object* v___x_4634_; 
lean_dec_ref_known(v___y_4630_, 1);
v___x_4631_ = ((lean_object*)(l___private_Lean_Parser_Extra_0__Lean_initFn___closed__7_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2_));
v___x_4632_ = ((lean_object*)(l___private_Lean_Parser_Extra_0__Lean_Parser_ppHardLineUnlessUngrouped___regBuiltin_Lean_Parser_ppHardLineUnlessUngrouped_docString__1___closed__1));
v___x_4633_ = ((lean_object*)(l___private_Lean_Parser_Extra_0__Lean_initFn___closed__8_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2_));
v___x_4634_ = l_Lean_Parser_registerAlias(v___x_4631_, v___x_4632_, v___y_4629_, v___x_4633_, v___y_4628_);
if (lean_obj_tag(v___x_4634_) == 0)
{
lean_object* v___x_4635_; lean_object* v___x_4636_; 
lean_dec_ref_known(v___x_4634_, 1);
v___x_4635_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_initFn___closed__9_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2_, &l___private_Lean_Parser_Extra_0__Lean_initFn___closed__9_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Extra_0__Lean_initFn___closed__9_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2_);
v___x_4636_ = l_Lean_PrettyPrinter_Formatter_registerAlias(v___x_4631_, v___x_4635_);
if (lean_obj_tag(v___x_4636_) == 0)
{
lean_object* v___x_4637_; lean_object* v___x_4638_; 
lean_dec_ref_known(v___x_4636_, 1);
v___x_4637_ = ((lean_object*)(l___private_Lean_Parser_Extra_0__Lean_initFn___closed__10_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2_));
v___x_4638_ = l_Lean_PrettyPrinter_Parenthesizer_registerAlias(v___x_4631_, v___x_4637_);
return v___x_4638_;
}
else
{
return v___x_4636_;
}
}
else
{
return v___x_4634_;
}
}
else
{
lean_dec_ref(v___y_4629_);
lean_dec_ref(v___y_4628_);
return v___y_4630_;
}
}
v___jp_4639_:
{
if (lean_obj_tag(v___y_4642_) == 0)
{
lean_object* v___x_4643_; lean_object* v___x_4644_; lean_object* v___x_4645_; lean_object* v___x_4646_; 
lean_dec_ref_known(v___y_4642_, 1);
v___x_4643_ = ((lean_object*)(l___private_Lean_Parser_Extra_0__Lean_initFn___closed__11_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2_));
v___x_4644_ = ((lean_object*)(l___private_Lean_Parser_Extra_0__Lean_Parser_ppAllowUngrouped___regBuiltin_Lean_Parser_ppAllowUngrouped_docString__1___closed__1));
v___x_4645_ = ((lean_object*)(l___private_Lean_Parser_Extra_0__Lean_initFn___closed__12_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2_));
lean_inc_ref(v___y_4640_);
lean_inc_ref(v___y_4641_);
v___x_4646_ = l_Lean_Parser_registerAlias(v___x_4643_, v___x_4644_, v___y_4641_, v___x_4645_, v___y_4640_);
if (lean_obj_tag(v___x_4646_) == 0)
{
lean_object* v___x_4647_; lean_object* v___x_4648_; 
lean_dec_ref_known(v___x_4646_, 1);
v___x_4647_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_initFn___closed__13_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2_, &l___private_Lean_Parser_Extra_0__Lean_initFn___closed__13_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Extra_0__Lean_initFn___closed__13_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2_);
v___x_4648_ = l_Lean_PrettyPrinter_Formatter_registerAlias(v___x_4643_, v___x_4647_);
if (lean_obj_tag(v___x_4648_) == 0)
{
lean_object* v___x_4649_; lean_object* v___x_4650_; 
lean_dec_ref_known(v___x_4648_, 1);
v___x_4649_ = ((lean_object*)(l___private_Lean_Parser_Extra_0__Lean_initFn___closed__10_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2_));
v___x_4650_ = l_Lean_PrettyPrinter_Parenthesizer_registerAlias(v___x_4643_, v___x_4649_);
v___y_4628_ = v___y_4640_;
v___y_4629_ = v___y_4641_;
v___y_4630_ = v___x_4650_;
goto v___jp_4627_;
}
else
{
v___y_4628_ = v___y_4640_;
v___y_4629_ = v___y_4641_;
v___y_4630_ = v___x_4648_;
goto v___jp_4627_;
}
}
else
{
v___y_4628_ = v___y_4640_;
v___y_4629_ = v___y_4641_;
v___y_4630_ = v___x_4646_;
goto v___jp_4627_;
}
}
else
{
lean_dec_ref(v___y_4641_);
lean_dec_ref(v___y_4640_);
return v___y_4642_;
}
}
v___jp_4651_:
{
if (lean_obj_tag(v___y_4655_) == 0)
{
lean_object* v___x_4656_; lean_object* v___x_4657_; lean_object* v___x_4658_; lean_object* v___x_4659_; lean_object* v___x_4660_; 
lean_dec_ref_known(v___y_4655_, 1);
v___x_4656_ = ((lean_object*)(l___private_Lean_Parser_Extra_0__Lean_initFn___closed__14_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2_));
v___x_4657_ = ((lean_object*)(l___private_Lean_Parser_Extra_0__Lean_Parser_ppDedentIfGrouped___regBuiltin_Lean_Parser_ppDedentIfGrouped_docString__1___closed__1));
v___x_4658_ = ((lean_object*)(l___private_Lean_Parser_Extra_0__Lean_initFn___closed__15_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2_));
v___x_4659_ = ((lean_object*)(l___private_Lean_Parser_Extra_0__Lean_initFn___closed__16_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2_));
v___x_4660_ = l_Lean_Parser_registerAlias(v___x_4656_, v___x_4657_, v___x_4658_, v___x_4659_, v___y_4654_);
if (lean_obj_tag(v___x_4660_) == 0)
{
lean_object* v___x_4661_; lean_object* v___x_4662_; 
lean_dec_ref_known(v___x_4660_, 1);
v___x_4661_ = ((lean_object*)(l___private_Lean_Parser_Extra_0__Lean_initFn___closed__18_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2_));
v___x_4662_ = l_Lean_PrettyPrinter_Formatter_registerAlias(v___x_4656_, v___x_4661_);
if (lean_obj_tag(v___x_4662_) == 0)
{
lean_object* v___x_4663_; lean_object* v___x_4664_; 
lean_dec_ref_known(v___x_4662_, 1);
v___x_4663_ = ((lean_object*)(l___private_Lean_Parser_Extra_0__Lean_initFn___closed__19_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2_));
v___x_4664_ = l_Lean_PrettyPrinter_Parenthesizer_registerAlias(v___x_4656_, v___x_4663_);
v___y_4640_ = v___y_4652_;
v___y_4641_ = v___y_4653_;
v___y_4642_ = v___x_4664_;
goto v___jp_4639_;
}
else
{
v___y_4640_ = v___y_4652_;
v___y_4641_ = v___y_4653_;
v___y_4642_ = v___x_4662_;
goto v___jp_4639_;
}
}
else
{
v___y_4640_ = v___y_4652_;
v___y_4641_ = v___y_4653_;
v___y_4642_ = v___x_4660_;
goto v___jp_4639_;
}
}
else
{
lean_dec_ref(v___y_4654_);
lean_dec_ref(v___y_4653_);
lean_dec_ref(v___y_4652_);
return v___y_4655_;
}
}
v___jp_4665_:
{
if (lean_obj_tag(v___y_4669_) == 0)
{
lean_object* v___x_4670_; lean_object* v___x_4671_; lean_object* v___x_4672_; lean_object* v___x_4673_; lean_object* v___x_4674_; 
lean_dec_ref_known(v___y_4669_, 1);
v___x_4670_ = ((lean_object*)(l___private_Lean_Parser_Extra_0__Lean_initFn___closed__20_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2_));
v___x_4671_ = ((lean_object*)(l___private_Lean_Parser_Extra_0__Lean_Parser_ppDedent___regBuiltin_Lean_Parser_ppDedent_docString__1___closed__1));
v___x_4672_ = ((lean_object*)(l___private_Lean_Parser_Extra_0__Lean_initFn___closed__15_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2_));
v___x_4673_ = ((lean_object*)(l___private_Lean_Parser_Extra_0__Lean_initFn___closed__21_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2_));
lean_inc_ref(v___y_4668_);
v___x_4674_ = l_Lean_Parser_registerAlias(v___x_4670_, v___x_4671_, v___x_4672_, v___x_4673_, v___y_4668_);
if (lean_obj_tag(v___x_4674_) == 0)
{
lean_object* v___x_4675_; lean_object* v___x_4676_; 
lean_dec_ref_known(v___x_4674_, 1);
v___x_4675_ = ((lean_object*)(l___private_Lean_Parser_Extra_0__Lean_initFn___closed__23_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2_));
v___x_4676_ = l_Lean_PrettyPrinter_Formatter_registerAlias(v___x_4670_, v___x_4675_);
if (lean_obj_tag(v___x_4676_) == 0)
{
lean_object* v___x_4677_; lean_object* v___x_4678_; 
lean_dec_ref_known(v___x_4676_, 1);
v___x_4677_ = ((lean_object*)(l___private_Lean_Parser_Extra_0__Lean_initFn___closed__19_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2_));
v___x_4678_ = l_Lean_PrettyPrinter_Parenthesizer_registerAlias(v___x_4670_, v___x_4677_);
v___y_4652_ = v___y_4666_;
v___y_4653_ = v___y_4667_;
v___y_4654_ = v___y_4668_;
v___y_4655_ = v___x_4678_;
goto v___jp_4651_;
}
else
{
v___y_4652_ = v___y_4666_;
v___y_4653_ = v___y_4667_;
v___y_4654_ = v___y_4668_;
v___y_4655_ = v___x_4676_;
goto v___jp_4651_;
}
}
else
{
v___y_4652_ = v___y_4666_;
v___y_4653_ = v___y_4667_;
v___y_4654_ = v___y_4668_;
v___y_4655_ = v___x_4674_;
goto v___jp_4651_;
}
}
else
{
lean_dec_ref(v___y_4668_);
lean_dec_ref(v___y_4667_);
lean_dec_ref(v___y_4666_);
return v___y_4669_;
}
}
v___jp_4679_:
{
if (lean_obj_tag(v___y_4683_) == 0)
{
lean_object* v___x_4684_; lean_object* v___x_4685_; lean_object* v___x_4686_; lean_object* v___x_4687_; lean_object* v___x_4688_; 
lean_dec_ref_known(v___y_4683_, 1);
v___x_4684_ = ((lean_object*)(l___private_Lean_Parser_Extra_0__Lean_initFn___closed__24_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2_));
v___x_4685_ = ((lean_object*)(l___private_Lean_Parser_Extra_0__Lean_Parser_ppIndent___regBuiltin_Lean_Parser_ppIndent_docString__1___closed__1));
v___x_4686_ = ((lean_object*)(l___private_Lean_Parser_Extra_0__Lean_initFn___closed__15_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2_));
v___x_4687_ = ((lean_object*)(l___private_Lean_Parser_Extra_0__Lean_initFn___closed__25_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2_));
lean_inc_ref(v___y_4682_);
v___x_4688_ = l_Lean_Parser_registerAlias(v___x_4684_, v___x_4685_, v___x_4686_, v___x_4687_, v___y_4682_);
if (lean_obj_tag(v___x_4688_) == 0)
{
lean_object* v___x_4689_; lean_object* v___x_4690_; 
lean_dec_ref_known(v___x_4688_, 1);
v___x_4689_ = ((lean_object*)(l___private_Lean_Parser_Extra_0__Lean_initFn___closed__27_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2_));
v___x_4690_ = l_Lean_PrettyPrinter_Formatter_registerAlias(v___x_4684_, v___x_4689_);
if (lean_obj_tag(v___x_4690_) == 0)
{
lean_object* v___x_4691_; lean_object* v___x_4692_; 
lean_dec_ref_known(v___x_4690_, 1);
v___x_4691_ = ((lean_object*)(l___private_Lean_Parser_Extra_0__Lean_initFn___closed__19_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2_));
v___x_4692_ = l_Lean_PrettyPrinter_Parenthesizer_registerAlias(v___x_4684_, v___x_4691_);
v___y_4666_ = v___y_4680_;
v___y_4667_ = v___y_4681_;
v___y_4668_ = v___y_4682_;
v___y_4669_ = v___x_4692_;
goto v___jp_4665_;
}
else
{
v___y_4666_ = v___y_4680_;
v___y_4667_ = v___y_4681_;
v___y_4668_ = v___y_4682_;
v___y_4669_ = v___x_4690_;
goto v___jp_4665_;
}
}
else
{
v___y_4666_ = v___y_4680_;
v___y_4667_ = v___y_4681_;
v___y_4668_ = v___y_4682_;
v___y_4669_ = v___x_4688_;
goto v___jp_4665_;
}
}
else
{
lean_dec_ref(v___y_4682_);
lean_dec_ref(v___y_4681_);
lean_dec_ref(v___y_4680_);
return v___y_4683_;
}
}
v___jp_4693_:
{
if (lean_obj_tag(v___y_4697_) == 0)
{
lean_object* v___x_4698_; lean_object* v___x_4699_; lean_object* v___x_4700_; lean_object* v___x_4701_; lean_object* v___x_4702_; 
lean_dec_ref_known(v___y_4697_, 1);
v___x_4698_ = ((lean_object*)(l___private_Lean_Parser_Extra_0__Lean_initFn___closed__28_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2_));
v___x_4699_ = ((lean_object*)(l___private_Lean_Parser_Extra_0__Lean_Parser_ppRealFill___regBuiltin_Lean_Parser_ppRealFill_docString__1___closed__1));
v___x_4700_ = ((lean_object*)(l___private_Lean_Parser_Extra_0__Lean_initFn___closed__15_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2_));
v___x_4701_ = ((lean_object*)(l___private_Lean_Parser_Extra_0__Lean_initFn___closed__29_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2_));
lean_inc_ref(v___y_4696_);
v___x_4702_ = l_Lean_Parser_registerAlias(v___x_4698_, v___x_4699_, v___x_4700_, v___x_4701_, v___y_4696_);
if (lean_obj_tag(v___x_4702_) == 0)
{
lean_object* v___x_4703_; lean_object* v___x_4704_; 
lean_dec_ref_known(v___x_4702_, 1);
v___x_4703_ = ((lean_object*)(l___private_Lean_Parser_Extra_0__Lean_initFn___closed__30_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2_));
v___x_4704_ = l_Lean_PrettyPrinter_Formatter_registerAlias(v___x_4698_, v___x_4703_);
if (lean_obj_tag(v___x_4704_) == 0)
{
lean_object* v___x_4705_; lean_object* v___x_4706_; 
lean_dec_ref_known(v___x_4704_, 1);
v___x_4705_ = ((lean_object*)(l___private_Lean_Parser_Extra_0__Lean_initFn___closed__19_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2_));
v___x_4706_ = l_Lean_PrettyPrinter_Parenthesizer_registerAlias(v___x_4698_, v___x_4705_);
v___y_4680_ = v___y_4694_;
v___y_4681_ = v___y_4695_;
v___y_4682_ = v___y_4696_;
v___y_4683_ = v___x_4706_;
goto v___jp_4679_;
}
else
{
v___y_4680_ = v___y_4694_;
v___y_4681_ = v___y_4695_;
v___y_4682_ = v___y_4696_;
v___y_4683_ = v___x_4704_;
goto v___jp_4679_;
}
}
else
{
v___y_4680_ = v___y_4694_;
v___y_4681_ = v___y_4695_;
v___y_4682_ = v___y_4696_;
v___y_4683_ = v___x_4702_;
goto v___jp_4679_;
}
}
else
{
lean_dec_ref(v___y_4696_);
lean_dec_ref(v___y_4695_);
lean_dec_ref(v___y_4694_);
return v___y_4697_;
}
}
v___jp_4707_:
{
if (lean_obj_tag(v___y_4711_) == 0)
{
lean_object* v___x_4712_; lean_object* v___x_4713_; lean_object* v___x_4714_; lean_object* v___x_4715_; lean_object* v___x_4716_; 
lean_dec_ref_known(v___y_4711_, 1);
v___x_4712_ = ((lean_object*)(l___private_Lean_Parser_Extra_0__Lean_initFn___closed__31_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2_));
v___x_4713_ = ((lean_object*)(l___private_Lean_Parser_Extra_0__Lean_Parser_ppRealGroup___regBuiltin_Lean_Parser_ppRealGroup_docString__1___closed__1));
v___x_4714_ = ((lean_object*)(l___private_Lean_Parser_Extra_0__Lean_initFn___closed__15_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2_));
v___x_4715_ = ((lean_object*)(l___private_Lean_Parser_Extra_0__Lean_initFn___closed__32_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2_));
lean_inc_ref(v___y_4710_);
v___x_4716_ = l_Lean_Parser_registerAlias(v___x_4712_, v___x_4713_, v___x_4714_, v___x_4715_, v___y_4710_);
if (lean_obj_tag(v___x_4716_) == 0)
{
lean_object* v___x_4717_; lean_object* v___x_4718_; 
lean_dec_ref_known(v___x_4716_, 1);
v___x_4717_ = ((lean_object*)(l___private_Lean_Parser_Extra_0__Lean_initFn___closed__33_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2_));
v___x_4718_ = l_Lean_PrettyPrinter_Formatter_registerAlias(v___x_4712_, v___x_4717_);
if (lean_obj_tag(v___x_4718_) == 0)
{
lean_object* v___x_4719_; lean_object* v___x_4720_; 
lean_dec_ref_known(v___x_4718_, 1);
v___x_4719_ = ((lean_object*)(l___private_Lean_Parser_Extra_0__Lean_initFn___closed__19_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2_));
v___x_4720_ = l_Lean_PrettyPrinter_Parenthesizer_registerAlias(v___x_4712_, v___x_4719_);
v___y_4694_ = v___y_4708_;
v___y_4695_ = v___y_4709_;
v___y_4696_ = v___y_4710_;
v___y_4697_ = v___x_4720_;
goto v___jp_4693_;
}
else
{
v___y_4694_ = v___y_4708_;
v___y_4695_ = v___y_4709_;
v___y_4696_ = v___y_4710_;
v___y_4697_ = v___x_4718_;
goto v___jp_4693_;
}
}
else
{
v___y_4694_ = v___y_4708_;
v___y_4695_ = v___y_4709_;
v___y_4696_ = v___y_4710_;
v___y_4697_ = v___x_4716_;
goto v___jp_4693_;
}
}
else
{
lean_dec_ref(v___y_4710_);
lean_dec_ref(v___y_4709_);
lean_dec_ref(v___y_4708_);
return v___y_4711_;
}
}
v___jp_4724_:
{
if (lean_obj_tag(v___y_4727_) == 0)
{
lean_object* v___x_4728_; lean_object* v___x_4729_; lean_object* v___x_4730_; lean_object* v___x_4731_; lean_object* v___x_4732_; lean_object* v___x_4733_; 
lean_dec_ref_known(v___y_4727_, 1);
v___x_4728_ = ((lean_object*)(l___private_Lean_Parser_Extra_0__Lean_initFn___closed__36_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2_));
v___x_4729_ = ((lean_object*)(l___private_Lean_Parser_Extra_0__Lean_Parser_ppGroup___regBuiltin_Lean_Parser_ppGroup_docString__1___closed__1));
v___x_4730_ = ((lean_object*)(l___private_Lean_Parser_Extra_0__Lean_initFn___closed__15_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2_));
v___x_4731_ = ((lean_object*)(l___private_Lean_Parser_Extra_0__Lean_initFn___closed__37_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2_));
v___x_4732_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_initFn___closed__38_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2_, &l___private_Lean_Parser_Extra_0__Lean_initFn___closed__38_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Extra_0__Lean_initFn___closed__38_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2_);
v___x_4733_ = l_Lean_Parser_registerAlias(v___x_4728_, v___x_4729_, v___x_4730_, v___x_4731_, v___x_4732_);
if (lean_obj_tag(v___x_4733_) == 0)
{
lean_object* v___x_4734_; lean_object* v___x_4735_; 
lean_dec_ref_known(v___x_4733_, 1);
v___x_4734_ = ((lean_object*)(l___private_Lean_Parser_Extra_0__Lean_initFn___closed__40_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2_));
v___x_4735_ = l_Lean_PrettyPrinter_Formatter_registerAlias(v___x_4728_, v___x_4734_);
if (lean_obj_tag(v___x_4735_) == 0)
{
lean_object* v___x_4736_; lean_object* v___x_4737_; 
lean_dec_ref_known(v___x_4735_, 1);
v___x_4736_ = ((lean_object*)(l___private_Lean_Parser_Extra_0__Lean_initFn___closed__19_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2_));
v___x_4737_ = l_Lean_PrettyPrinter_Parenthesizer_registerAlias(v___x_4728_, v___x_4736_);
v___y_4708_ = v___y_4725_;
v___y_4709_ = v___y_4726_;
v___y_4710_ = v___x_4732_;
v___y_4711_ = v___x_4737_;
goto v___jp_4707_;
}
else
{
v___y_4708_ = v___y_4725_;
v___y_4709_ = v___y_4726_;
v___y_4710_ = v___x_4732_;
v___y_4711_ = v___x_4735_;
goto v___jp_4707_;
}
}
else
{
v___y_4708_ = v___y_4725_;
v___y_4709_ = v___y_4726_;
v___y_4710_ = v___x_4732_;
v___y_4711_ = v___x_4733_;
goto v___jp_4707_;
}
}
else
{
lean_dec_ref(v___y_4726_);
lean_dec_ref(v___y_4725_);
return v___y_4727_;
}
}
v___jp_4738_:
{
if (lean_obj_tag(v___y_4741_) == 0)
{
lean_object* v___x_4742_; lean_object* v___x_4743_; lean_object* v___x_4744_; lean_object* v___x_4745_; 
lean_dec_ref_known(v___y_4741_, 1);
v___x_4742_ = ((lean_object*)(l___private_Lean_Parser_Extra_0__Lean_initFn___closed__41_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2_));
v___x_4743_ = ((lean_object*)(l___private_Lean_Parser_Extra_0__Lean_Parser_ppLine___regBuiltin_Lean_Parser_ppLine_docString__1___closed__1));
v___x_4744_ = ((lean_object*)(l___private_Lean_Parser_Extra_0__Lean_initFn___closed__42_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2_));
lean_inc_ref(v___y_4739_);
lean_inc_ref(v___y_4740_);
v___x_4745_ = l_Lean_Parser_registerAlias(v___x_4742_, v___x_4743_, v___y_4740_, v___x_4744_, v___y_4739_);
if (lean_obj_tag(v___x_4745_) == 0)
{
lean_object* v___x_4746_; lean_object* v___x_4747_; 
lean_dec_ref_known(v___x_4745_, 1);
v___x_4746_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_initFn___closed__43_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2_, &l___private_Lean_Parser_Extra_0__Lean_initFn___closed__43_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Extra_0__Lean_initFn___closed__43_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2_);
v___x_4747_ = l_Lean_PrettyPrinter_Formatter_registerAlias(v___x_4742_, v___x_4746_);
if (lean_obj_tag(v___x_4747_) == 0)
{
lean_object* v___x_4748_; lean_object* v___x_4749_; 
lean_dec_ref_known(v___x_4747_, 1);
v___x_4748_ = ((lean_object*)(l___private_Lean_Parser_Extra_0__Lean_initFn___closed__10_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2_));
v___x_4749_ = l_Lean_PrettyPrinter_Parenthesizer_registerAlias(v___x_4742_, v___x_4748_);
v___y_4725_ = v___y_4739_;
v___y_4726_ = v___y_4740_;
v___y_4727_ = v___x_4749_;
goto v___jp_4724_;
}
else
{
v___y_4725_ = v___y_4739_;
v___y_4726_ = v___y_4740_;
v___y_4727_ = v___x_4747_;
goto v___jp_4724_;
}
}
else
{
v___y_4725_ = v___y_4739_;
v___y_4726_ = v___y_4740_;
v___y_4727_ = v___x_4745_;
goto v___jp_4724_;
}
}
else
{
lean_dec_ref(v___y_4740_);
lean_dec_ref(v___y_4739_);
return v___y_4741_;
}
}
v___jp_4750_:
{
if (lean_obj_tag(v___y_4753_) == 0)
{
lean_object* v___x_4754_; lean_object* v___x_4755_; lean_object* v___x_4756_; lean_object* v___x_4757_; 
lean_dec_ref_known(v___y_4753_, 1);
v___x_4754_ = ((lean_object*)(l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__22));
v___x_4755_ = ((lean_object*)(l___private_Lean_Parser_Extra_0__Lean_Parser_ppSpace___regBuiltin_Lean_Parser_ppSpace_docString__1___closed__1));
v___x_4756_ = ((lean_object*)(l___private_Lean_Parser_Extra_0__Lean_initFn___closed__44_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2_));
lean_inc_ref(v___y_4751_);
lean_inc_ref(v___y_4752_);
v___x_4757_ = l_Lean_Parser_registerAlias(v___x_4754_, v___x_4755_, v___y_4752_, v___x_4756_, v___y_4751_);
if (lean_obj_tag(v___x_4757_) == 0)
{
lean_object* v___x_4758_; lean_object* v___x_4759_; 
lean_dec_ref_known(v___x_4757_, 1);
v___x_4758_ = ((lean_object*)(l___private_Lean_Parser_Extra_0__Lean_initFn___closed__45_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2_));
v___x_4759_ = l_Lean_PrettyPrinter_Formatter_registerAlias(v___x_4754_, v___x_4758_);
if (lean_obj_tag(v___x_4759_) == 0)
{
lean_object* v___x_4760_; lean_object* v___x_4761_; 
lean_dec_ref_known(v___x_4759_, 1);
v___x_4760_ = ((lean_object*)(l___private_Lean_Parser_Extra_0__Lean_initFn___closed__10_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2_));
v___x_4761_ = l_Lean_PrettyPrinter_Parenthesizer_registerAlias(v___x_4754_, v___x_4760_);
v___y_4739_ = v___y_4751_;
v___y_4740_ = v___y_4752_;
v___y_4741_ = v___x_4761_;
goto v___jp_4738_;
}
else
{
v___y_4739_ = v___y_4751_;
v___y_4740_ = v___y_4752_;
v___y_4741_ = v___x_4759_;
goto v___jp_4738_;
}
}
else
{
v___y_4739_ = v___y_4751_;
v___y_4740_ = v___y_4752_;
v___y_4741_ = v___x_4757_;
goto v___jp_4738_;
}
}
else
{
lean_dec_ref(v___y_4752_);
lean_dec_ref(v___y_4751_);
return v___y_4753_;
}
}
v___jp_4762_:
{
if (lean_obj_tag(v___y_4763_) == 0)
{
lean_object* v___x_4764_; lean_object* v___x_4765_; lean_object* v___x_4766_; lean_object* v___x_4767_; lean_object* v___x_4768_; lean_object* v___x_4769_; 
lean_dec_ref_known(v___y_4763_, 1);
v___x_4764_ = ((lean_object*)(l___private_Lean_Parser_Extra_0__Lean_initFn___closed__46_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2_));
v___x_4765_ = ((lean_object*)(l___private_Lean_Parser_Extra_0__Lean_Parser_ppHardSpace___regBuiltin_Lean_Parser_ppHardSpace_docString__1___closed__1));
v___x_4766_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_initFn___closed__47_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2_, &l___private_Lean_Parser_Extra_0__Lean_initFn___closed__47_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Extra_0__Lean_initFn___closed__47_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2_);
v___x_4767_ = ((lean_object*)(l___private_Lean_Parser_Extra_0__Lean_initFn___closed__48_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2_));
v___x_4768_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_initFn___closed__50_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2_, &l___private_Lean_Parser_Extra_0__Lean_initFn___closed__50_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Extra_0__Lean_initFn___closed__50_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2_);
v___x_4769_ = l_Lean_Parser_registerAlias(v___x_4764_, v___x_4765_, v___x_4766_, v___x_4767_, v___x_4768_);
if (lean_obj_tag(v___x_4769_) == 0)
{
lean_object* v___x_4770_; lean_object* v___x_4771_; 
lean_dec_ref_known(v___x_4769_, 1);
v___x_4770_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_initFn___closed__51_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2_, &l___private_Lean_Parser_Extra_0__Lean_initFn___closed__51_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Extra_0__Lean_initFn___closed__51_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2_);
v___x_4771_ = l_Lean_PrettyPrinter_Formatter_registerAlias(v___x_4764_, v___x_4770_);
if (lean_obj_tag(v___x_4771_) == 0)
{
lean_object* v___x_4772_; lean_object* v___x_4773_; 
lean_dec_ref_known(v___x_4771_, 1);
v___x_4772_ = ((lean_object*)(l___private_Lean_Parser_Extra_0__Lean_initFn___closed__10_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2_));
v___x_4773_ = l_Lean_PrettyPrinter_Parenthesizer_registerAlias(v___x_4764_, v___x_4772_);
v___y_4751_ = v___x_4768_;
v___y_4752_ = v___x_4766_;
v___y_4753_ = v___x_4773_;
goto v___jp_4750_;
}
else
{
v___y_4751_ = v___x_4768_;
v___y_4752_ = v___x_4766_;
v___y_4753_ = v___x_4771_;
goto v___jp_4750_;
}
}
else
{
v___y_4751_ = v___x_4768_;
v___y_4752_ = v___x_4766_;
v___y_4753_ = v___x_4769_;
goto v___jp_4750_;
}
}
else
{
return v___y_4763_;
}
}
v___jp_4775_:
{
if (lean_obj_tag(v___y_4776_) == 0)
{
lean_object* v___x_4777_; lean_object* v___x_4778_; lean_object* v___x_4779_; lean_object* v___x_4780_; lean_object* v___x_4781_; 
lean_dec_ref_known(v___y_4776_, 1);
v___x_4777_ = ((lean_object*)(l_Lean_Parser_group_formatter___closed__1));
v___x_4778_ = ((lean_object*)(l___private_Lean_Parser_Extra_0__Lean_Parser_group___regBuiltin_Lean_Parser_group_docString__1___closed__0));
v___x_4779_ = ((lean_object*)(l___private_Lean_Parser_Extra_0__Lean_initFn___closed__55_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2_));
v___x_4780_ = ((lean_object*)(l___private_Lean_Parser_Extra_0__Lean_initFn___closed__56_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2_));
v___x_4781_ = l_Lean_Parser_registerAlias(v___x_4777_, v___x_4778_, v___x_4779_, v___x_4780_, v___x_4774_);
if (lean_obj_tag(v___x_4781_) == 0)
{
lean_object* v___x_4782_; lean_object* v___x_4783_; 
lean_dec_ref_known(v___x_4781_, 1);
v___x_4782_ = ((lean_object*)(l___private_Lean_Parser_Extra_0__Lean_initFn___closed__58_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2_));
v___x_4783_ = l_Lean_PrettyPrinter_Formatter_registerAlias(v___x_4777_, v___x_4782_);
if (lean_obj_tag(v___x_4783_) == 0)
{
lean_object* v___x_4784_; lean_object* v___x_4785_; 
lean_dec_ref_known(v___x_4783_, 1);
v___x_4784_ = ((lean_object*)(l___private_Lean_Parser_Extra_0__Lean_initFn___closed__60_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2_));
v___x_4785_ = l_Lean_PrettyPrinter_Parenthesizer_registerAlias(v___x_4777_, v___x_4784_);
v___y_4763_ = v___x_4785_;
goto v___jp_4762_;
}
else
{
v___y_4763_ = v___x_4783_;
goto v___jp_4762_;
}
}
else
{
v___y_4763_ = v___x_4781_;
goto v___jp_4762_;
}
}
else
{
return v___y_4776_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_initFn_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2____boxed(lean_object* v_a_4791_){
_start:
{
lean_object* v_res_4792_; 
v_res_4792_ = l___private_Lean_Parser_Extra_0__Lean_initFn_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2_();
return v_res_4792_;
}
}
lean_object* runtime_initialize_Lean_PrettyPrinter_Formatter(uint8_t builtin);
lean_object* runtime_initialize_Lean_PrettyPrinter_Parenthesizer(uint8_t builtin);
lean_object* runtime_initialize_Lean_Parser_Types(uint8_t builtin);
lean_object* runtime_initialize_Lean_Parser_Basic(uint8_t builtin);
lean_object* runtime_initialize_Lean_Parser_Extension(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Parser_Extra(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_PrettyPrinter_Formatter(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_PrettyPrinter_Parenthesizer(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Parser_Types(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Parser_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Parser_Extension(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_parenthesizer__35();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Extra_0__Lean_Parser_optional___regBuiltin_Lean_Parser_optional_docString__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Extra_0__Lean_Parser_many___regBuiltin_Lean_Parser_many_docString__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Extra_0__Lean_Parser_many1___regBuiltin_Lean_Parser_many1_docString__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Parser_ident = _init_l_Lean_Parser_ident();
lean_mark_persistent(l_Lean_Parser_ident);
res = l___private_Lean_Parser_Extra_0__Lean_Parser_ident___regBuiltin_Lean_Parser_ident_docString__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Parser_identWithPartialTrailingDot = _init_l_Lean_Parser_identWithPartialTrailingDot();
lean_mark_persistent(l_Lean_Parser_identWithPartialTrailingDot);
l_Lean_Parser_rawIdent = _init_l_Lean_Parser_rawIdent();
lean_mark_persistent(l_Lean_Parser_rawIdent);
l_Lean_Parser_hygieneInfo = _init_l_Lean_Parser_hygieneInfo();
lean_mark_persistent(l_Lean_Parser_hygieneInfo);
res = l___private_Lean_Parser_Extra_0__Lean_Parser_hygieneInfo___regBuiltin_Lean_Parser_hygieneInfo_docString__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Parser_numLit = _init_l_Lean_Parser_numLit();
lean_mark_persistent(l_Lean_Parser_numLit);
res = l___private_Lean_Parser_Extra_0__Lean_Parser_numLit___regBuiltin_Lean_Parser_numLit_docString__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Parser_hexnum = _init_l_Lean_Parser_hexnum();
lean_mark_persistent(l_Lean_Parser_hexnum);
res = l___private_Lean_Parser_Extra_0__Lean_Parser_hexnum___regBuiltin_Lean_Parser_hexnum_docString__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Parser_scientificLit = _init_l_Lean_Parser_scientificLit();
lean_mark_persistent(l_Lean_Parser_scientificLit);
res = l___private_Lean_Parser_Extra_0__Lean_Parser_scientificLit___regBuiltin_Lean_Parser_scientificLit_docString__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Parser_strLit = _init_l_Lean_Parser_strLit();
lean_mark_persistent(l_Lean_Parser_strLit);
res = l___private_Lean_Parser_Extra_0__Lean_Parser_strLit___regBuiltin_Lean_Parser_strLit_docString__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Parser_charLit = _init_l_Lean_Parser_charLit();
lean_mark_persistent(l_Lean_Parser_charLit);
res = l___private_Lean_Parser_Extra_0__Lean_Parser_charLit___regBuiltin_Lean_Parser_charLit_docString__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Parser_nameLit = _init_l_Lean_Parser_nameLit();
lean_mark_persistent(l_Lean_Parser_nameLit);
res = l___private_Lean_Parser_Extra_0__Lean_Parser_nameLit___regBuiltin_Lean_Parser_nameLit_docString__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Extra_0__Lean_Parser_group___regBuiltin_Lean_Parser_group_docString__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Extra_0__Lean_Parser_many1Indent___regBuiltin_Lean_Parser_many1Indent_docString__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Extra_0__Lean_Parser_manyIndent___regBuiltin_Lean_Parser_manyIndent_docString__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Extra_0__Lean_Parser_patternIgnore___regBuiltin_Lean_Parser_patternIgnore_docString__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Parser_ppHardSpace = _init_l_Lean_Parser_ppHardSpace();
lean_mark_persistent(l_Lean_Parser_ppHardSpace);
res = l___private_Lean_Parser_Extra_0__Lean_Parser_ppHardSpace___regBuiltin_Lean_Parser_ppHardSpace_docString__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Parser_ppSpace = _init_l_Lean_Parser_ppSpace();
lean_mark_persistent(l_Lean_Parser_ppSpace);
res = l___private_Lean_Parser_Extra_0__Lean_Parser_ppSpace___regBuiltin_Lean_Parser_ppSpace_docString__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Parser_ppLine = _init_l_Lean_Parser_ppLine();
lean_mark_persistent(l_Lean_Parser_ppLine);
res = l___private_Lean_Parser_Extra_0__Lean_Parser_ppLine___regBuiltin_Lean_Parser_ppLine_docString__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Extra_0__Lean_Parser_ppRealFill___regBuiltin_Lean_Parser_ppRealFill_docString__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Extra_0__Lean_Parser_ppRealGroup___regBuiltin_Lean_Parser_ppRealGroup_docString__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Extra_0__Lean_Parser_ppIndent___regBuiltin_Lean_Parser_ppIndent_docString__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Extra_0__Lean_Parser_ppGroup___regBuiltin_Lean_Parser_ppGroup_docString__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Extra_0__Lean_Parser_ppDedent___regBuiltin_Lean_Parser_ppDedent_docString__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Parser_ppAllowUngrouped = _init_l_Lean_Parser_ppAllowUngrouped();
lean_mark_persistent(l_Lean_Parser_ppAllowUngrouped);
res = l___private_Lean_Parser_Extra_0__Lean_Parser_ppAllowUngrouped___regBuiltin_Lean_Parser_ppAllowUngrouped_docString__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Extra_0__Lean_Parser_ppDedentIfGrouped___regBuiltin_Lean_Parser_ppDedentIfGrouped_docString__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Parser_ppHardLineUnlessUngrouped = _init_l_Lean_Parser_ppHardLineUnlessUngrouped();
lean_mark_persistent(l_Lean_Parser_ppHardLineUnlessUngrouped);
res = l___private_Lean_Parser_Extra_0__Lean_Parser_ppHardLineUnlessUngrouped___regBuiltin_Lean_Parser_ppHardLineUnlessUngrouped_docString__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Extra_0__Lean_initFn_00___x40_Lean_Parser_Extra_2431976320____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* runtime_initialize_Lean_Hygiene(uint8_t builtin);
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Parser_Extra(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
res = runtime_initialize_Lean_Hygiene(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_PrettyPrinter_Formatter(uint8_t builtin);
lean_object* initialize_Lean_PrettyPrinter_Parenthesizer(uint8_t builtin);
lean_object* initialize_Lean_Parser_Types(uint8_t builtin);
lean_object* initialize_Lean_Parser_Basic(uint8_t builtin);
lean_object* initialize_Lean_Parser_Extension(uint8_t builtin);
lean_object* initialize_Lean_Hygiene(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Parser_Extra(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_PrettyPrinter_Formatter(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_PrettyPrinter_Parenthesizer(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Parser_Types(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Parser_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Parser_Extension(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Hygiene(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Parser_Extra(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Parser_Extra(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Parser_Extra(builtin);
}
#ifdef __cplusplus
}
#endif

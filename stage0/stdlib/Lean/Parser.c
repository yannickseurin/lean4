// Lean compiler output
// Module: Lean.Parser
// Imports: public import Lean.Parser.Basic public import Lean.Parser.Level public import Lean.Parser.Term public import Lean.Parser.Tactic public import Lean.Parser.Command public import Lean.Parser.Module public import Lean.Parser.Syntax public import Lean.Parser.Do public import Lean.Parser.Tactic.Doc
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
extern lean_object* l_Lean_Parser_rawIdent;
lean_object* l_Lean_Parser_Term_scientific_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_PrettyPrinter_formatterAttribute;
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Name_mkStr5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_hygieneInfo_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_checkColGt(lean_object*);
lean_object* l_Lean_Parser_numLit_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_Term_num_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_checkNoWsBefore_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_withoutPosition_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_interpolatedStr(lean_object*);
lean_object* l_Lean_Parser_Term_str_formatter(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_rawIdent_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_checkColGe(lean_object*);
lean_object* l_Lean_Parser_andthen(lean_object*, lean_object*);
lean_object* l_Lean_Parser_many(lean_object*);
lean_object* l_Lean_Parser_withPosition(lean_object*);
lean_object* l_Lean_Parser_optional_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_atomic_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_lookahead_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_Term_str_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_scientificLit_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_numLit_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_withoutPosition_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_many_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_Term_str_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_PrettyPrinter_parenthesizerAttribute;
lean_object* l_Lean_Parser_Term_ident_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_notFollowedBy_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_ident_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_hexnum_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_Term_ident_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_Term_char_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_Term_scientific_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_Term_num_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_PrettyPrinter_Parenthesizer_parenthesizerAliasesRef;
lean_object* l_Lean_Parser_getConstAlias___redArg(lean_object*, lean_object*);
lean_object* lean_io_error_to_string(lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_Parser_getUnaryAlias___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Parser_getBinaryAlias___redArg(lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_leadingNode_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_trailingNode_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_symbol_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_nonReservedSymbol_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_categoryParser_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_PrettyPrinter_combinatorParenthesizerAttribute;
lean_object* l_Lean_ParserCompiler_CombinatorAttribute_runDeclFor___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_mkAntiquot_parenthesizer_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_node_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_withAntiquot_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_sepBy_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_sepBy1_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_unicodeSymbol_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_visitToken___redArg(lean_object*);
lean_object* l_Lean_Parser_strLit_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_atomic(lean_object*);
lean_object* l_Lean_Parser_rawIdent_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_checkNoWsBefore(lean_object*);
lean_object* l_Lean_Parser_many1Indent_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_withPosition_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_withPosition_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Parser_nameLit;
lean_object* l_Lean_PrettyPrinter_Formatter_lookahead_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_interpolatedStr_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_many_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_checkLinebreakBefore(lean_object*);
extern lean_object* l_Lean_Parser_strLit;
lean_object* l_Lean_PrettyPrinter_Formatter_resetLeadWord___redArg(lean_object*);
lean_object* l_Lean_Parser_orelse(lean_object*, lean_object*);
lean_object* l_Lean_Parser_charLit_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_lookahead(lean_object*);
lean_object* l_Lean_Parser_optional(lean_object*);
lean_object* l_Lean_Parser_optional_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_checkColGe_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_recover(lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_notFollowedBy_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_many1_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_checkColGe_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_checkLineEq(lean_object*);
lean_object* l_Lean_Parser_manyIndent_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_Term_scientific_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_interpolatedStr_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_strLit_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_notFollowedBy(lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_checkLinebreakBefore_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_checkColEq_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_withoutForbidden_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_PrettyPrinter_Formatter_formatterAliasesRef;
lean_object* l_Lean_PrettyPrinter_Formatter_node_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_trailingNode_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_symbol_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_nonReservedSymbol_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_categoryParser_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_PrettyPrinter_combinatorFormatterAttribute;
lean_object* l_Lean_PrettyPrinter_Formatter_mkAntiquot_formatter_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_orelse_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_sepBy_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_sepBy1_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_unicodeSymbol_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_checkLineEq_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Parser_scientificLit;
lean_object* l_Lean_Parser_many1Indent_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_checkWsBefore_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_mkAntiquot_parenthesizer(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_checkColEq(lean_object*);
lean_object* l_Lean_Parser_Term_char_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Parser_ident;
lean_object* l_Lean_Parser_Term_ident_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_Term_char_formatter(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_mkAntiquot_formatter(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_many1(lean_object*);
lean_object* l_Lean_Parser_nameLit_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_Term_num_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_manyIndent_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Parser_hexnum;
lean_object* l_Lean_Parser_withoutForbidden_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_checkColGt_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_checkColGt_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_Term_char_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_Term_str_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_orelse_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_hygieneInfo_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_Term_ident_formatter(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_ident_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_withoutPosition(lean_object*);
lean_object* l_Lean_Parser_many1_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_orelse_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_Term_scientific_formatter(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_checkWsBefore(lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_checkColEq_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_charLit_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_scientificLit_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_Term_num_formatter(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_registerAlias(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_registerAlias(lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_registerAlias(lean_object*, lean_object*);
lean_object* l_Lean_Parser_withoutForbidden(lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_checkLineEq_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Parser_hygieneInfo;
lean_object* l_Lean_Parser_nameLit_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Parser_charLit;
extern lean_object* l_Lean_Parser_numLit;
lean_object* l_Lean_PrettyPrinter_Formatter_checkLinebreakBefore_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_checkWsBefore_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___lam__0_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___lam__0_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___lam__1_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___lam__1_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Parser_0__Lean_Parser_initFn___lam__2___closed__0_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "irrelevant"};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___lam__2___closed__0_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___lam__2___closed__0_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Parser_0__Lean_Parser_initFn___lam__2___closed__1_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___lam__2___closed__1_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___lam__2_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___lam__3_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___lam__4_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___lam__4_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___lam__6_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___lam__6_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Parser_0__Lean_Parser_initFn___lam__5___closed__0_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "element"};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___lam__5___closed__0_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___lam__5___closed__0_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___lam__5_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_(lean_object*);
static const lean_closure_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__0_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Parser_0__Lean_Parser_initFn___lam__0_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2____boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__0_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__0_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__1_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Parser_0__Lean_Parser_initFn___lam__1_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2____boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__1_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__1_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Parser_0__Lean_Parser_initFn___lam__2_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Parser_0__Lean_Parser_initFn___lam__3_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__4_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Parser_0__Lean_Parser_initFn___lam__4_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2____boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__4_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__4_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__5_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Parser_0__Lean_Parser_initFn___lam__6_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2____boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__5_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__5_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__6_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Parser_0__Lean_Parser_initFn___lam__5_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__6_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__6_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__7_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "ws"};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__7_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__7_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__8_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__7_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(94, 198, 251, 95, 67, 81, 118, 246)}};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__8_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__8_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__9_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__9_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__9_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__10_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__10_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__10_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__11_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "notFollowedBy"};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__11_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__11_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__12_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__11_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(134, 55, 249, 172, 87, 126, 186, 81)}};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__12_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__12_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__13_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__9_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__13_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__13_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__10_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__13_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__13_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value_aux_1),((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__11_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(26, 0, 133, 48, 146, 73, 208, 113)}};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__13_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__13_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__14_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__6_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__14_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__14_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__15_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Parenthesizer_notFollowedBy_parenthesizer___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__15_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__15_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__16_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__15_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__16_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__16_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__17_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Formatter_notFollowedBy_formatter___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__17_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__17_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__18_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__17_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__18_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__18_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__19_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "recover"};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__19_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__19_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__20_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__19_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(207, 177, 38, 2, 101, 67, 237, 158)}};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__20_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__20_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__21_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__9_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__21_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__21_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__10_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__21_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__21_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value_aux_1),((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__19_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(187, 137, 49, 69, 62, 133, 213, 34)}};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__21_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__21_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__22_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_recover, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__22_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__22_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__23_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__22_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__23_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__23_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__24_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__21_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__24_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__24_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__25_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__5_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__25_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__25_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__26_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__1_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__26_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__26_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__27_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "andthen"};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__27_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__27_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__28_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__27_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(40, 255, 78, 30, 143, 119, 117, 174)}};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__28_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__28_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__29_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__9_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__29_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__29_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__10_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__29_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__29_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value_aux_1),((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__27_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(228, 226, 49, 74, 122, 217, 187, 147)}};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__29_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__29_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__30_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_andthen, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__30_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__30_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__31_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__30_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__31_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__31_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__32_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__29_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__32_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__32_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__33_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__33_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__33_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__34_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__33_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__34_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__34_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__35_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__35_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__35_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__36_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__35_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__36_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__36_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__37_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "orelse"};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__37_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__37_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__38_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__37_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(78, 76, 4, 51, 251, 212, 116, 5)}};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__38_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__38_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__39_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__9_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__39_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__39_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__10_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__39_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__39_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value_aux_1),((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__37_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(18, 70, 47, 117, 238, 126, 239, 49)}};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__39_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__39_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__40_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_orelse, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__40_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__40_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__41_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__40_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__41_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__41_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__42_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__39_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__42_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__42_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__43_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Formatter_orelse_formatter___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__43_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__43_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__44_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__43_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__44_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__44_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__45_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Parenthesizer_orelse_parenthesizer___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__45_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__45_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__46_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__45_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__46_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__46_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__47_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "hexnum"};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__47_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__47_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__48_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__47_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(152, 252, 51, 178, 203, 245, 189, 159)}};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__48_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__48_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__49_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__9_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__49_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__49_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__10_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__49_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__49_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value_aux_1),((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__47_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(180, 234, 249, 199, 49, 244, 72, 166)}};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__49_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__49_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Parser_0__Lean_Parser_initFn___closed__50_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__50_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_;
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__51_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__48_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__51_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__51_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Parser_0__Lean_Parser_initFn___closed__52_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__52_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_;
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__53_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__4_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__53_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__53_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__54_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "interpolatedStr"};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__54_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__54_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__55_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__54_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(156, 58, 177, 246, 99, 11, 16, 252)}};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__55_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__55_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__56_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__9_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__56_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__56_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__10_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__56_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__56_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value_aux_1),((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__54_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(176, 182, 82, 21, 251, 127, 209, 38)}};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__56_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__56_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__57_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_interpolatedStr, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__57_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__57_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__58_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__57_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__58_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__58_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__59_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "interpolatedStrKind"};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__59_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__59_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__60_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__59_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(239, 118, 32, 248, 73, 51, 110, 198)}};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__60_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__60_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__61_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__60_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__61_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__61_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__62_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Formatter_interpolatedStr_formatter___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__62_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__62_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__63_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__62_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__63_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__63_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__64_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Parenthesizer_interpolatedStr_parenthesizer___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__64_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__64_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__65_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__64_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__65_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__65_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__66_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "withoutForbidden"};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__66_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__66_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__67_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__66_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(36, 202, 249, 244, 227, 198, 135, 34)}};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__67_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__67_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__68_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__9_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__68_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__68_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__10_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__68_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__68_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value_aux_1),((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__66_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(232, 23, 219, 174, 6, 42, 106, 219)}};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__68_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__68_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__69_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_withoutForbidden, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__69_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__69_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__70_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__69_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__70_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__70_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__71_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__68_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__71_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__71_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__72_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_withoutForbidden_formatter___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__72_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__72_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__73_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__72_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__73_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__73_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__74_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_withoutForbidden_parenthesizer___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__74_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__74_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__75_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__74_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__75_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__75_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__76_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "withoutPosition"};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__76_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__76_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__77_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__76_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(69, 6, 27, 142, 141, 165, 41, 16)}};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__77_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__77_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__78_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__9_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__78_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__78_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__10_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__78_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__78_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value_aux_1),((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__76_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(49, 222, 221, 61, 47, 46, 252, 242)}};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__78_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__78_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__79_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_withoutPosition, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__79_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__79_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__80_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__79_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__80_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__80_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__81_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__78_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__81_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__81_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__82_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_withoutPosition_formatter___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__82_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__82_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__83_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__82_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__83_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__83_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__84_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_withoutPosition_parenthesizer___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__84_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__84_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__85_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__84_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__85_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__85_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__86_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "withPosition"};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__86_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__86_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__87_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__86_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(246, 171, 180, 145, 132, 143, 108, 238)}};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__87_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__87_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__88_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__9_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__88_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__88_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__10_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__88_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__88_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value_aux_1),((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__86_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(106, 188, 255, 221, 143, 31, 128, 82)}};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__88_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__88_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__89_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_withPosition, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__89_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__89_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__90_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__89_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__90_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__90_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__91_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__88_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__91_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__91_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__92_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_withPosition_formatter___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__92_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__92_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__93_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__92_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__93_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__93_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__94_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Parenthesizer_withPosition_parenthesizer___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__94_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__94_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__95_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__94_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__95_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__95_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__96_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "checkWsBefore"};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__96_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__96_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__97_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__9_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__97_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__97_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__10_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__97_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__97_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value_aux_1),((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__96_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(3, 180, 243, 53, 77, 82, 55, 205)}};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__97_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__97_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__98_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "space before"};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__98_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__98_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Parser_0__Lean_Parser_initFn___closed__99_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__99_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Parser_0__Lean_Parser_initFn___closed__100_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__100_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_;
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__101_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__97_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__101_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__101_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Parser_0__Lean_Parser_initFn___closed__102_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__102_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__103_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "optional"};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__103_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__103_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__104_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__103_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(233, 141, 154, 50, 143, 135, 42, 252)}};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__104_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__104_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__105_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__9_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__105_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__105_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__10_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__105_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__105_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value_aux_1),((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__103_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(77, 167, 191, 130, 216, 220, 182, 40)}};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__105_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__105_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__106_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_optional, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__106_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__106_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__107_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__106_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__107_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__107_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__108_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__105_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__108_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__108_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__109_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_optional_formatter___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__109_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__109_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__110_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__109_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__110_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__110_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__111_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_optional_parenthesizer___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__111_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__111_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__112_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__111_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__112_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__112_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__113_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "many1Indent"};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__113_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__113_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__114_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__113_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(161, 232, 149, 52, 5, 17, 36, 232)}};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__114_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__114_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__115_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__9_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__115_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__115_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__10_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__115_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__115_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value_aux_1),((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__113_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(149, 214, 77, 50, 137, 69, 220, 172)}};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__115_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__115_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__116_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__116_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__116_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__117_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__115_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__117_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__117_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__118_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_many1Indent_formatter___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__118_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__118_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__119_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__118_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__119_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__119_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__120_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_many1Indent_parenthesizer___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__120_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__120_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__121_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__120_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__121_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__121_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__122_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "manyIndent"};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__122_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__122_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__123_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__122_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(151, 35, 49, 198, 227, 245, 222, 169)}};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__123_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__123_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__124_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__9_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__124_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__124_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__10_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__124_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__124_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value_aux_1),((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__122_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(51, 71, 18, 147, 220, 40, 152, 21)}};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__124_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__124_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__125_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__125_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__125_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__126_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__124_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__126_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__126_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__127_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_manyIndent_formatter___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__127_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__127_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__128_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__127_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__128_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__128_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__129_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_manyIndent_parenthesizer___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__129_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__129_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__130_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__129_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__130_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__130_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__131_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "many1"};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__131_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__131_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__132_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__131_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(55, 136, 52, 6, 12, 19, 78, 239)}};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__132_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__132_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__133_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__9_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__133_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__133_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__10_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__133_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__133_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value_aux_1),((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__131_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(83, 61, 196, 93, 201, 246, 193, 192)}};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__133_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__133_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__134_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_many1, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__134_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__134_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__135_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__134_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__135_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__135_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__136_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__133_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__136_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__136_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__137_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_many1_formatter___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__137_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__137_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__138_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__137_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__138_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__138_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__139_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_many1_parenthesizer___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__139_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__139_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__140_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__139_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__140_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__140_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__141_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "many"};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__141_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__141_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__142_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__141_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(41, 35, 40, 86, 189, 97, 244, 31)}};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__142_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__142_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__143_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__9_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__143_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__143_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__10_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__143_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__143_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value_aux_1),((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__141_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(13, 114, 232, 230, 181, 52, 168, 160)}};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__143_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__143_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__144_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_many, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__144_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__144_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__145_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__144_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__145_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__145_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__146_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__143_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__146_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__146_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__147_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_many_formatter___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__147_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__147_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__148_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__147_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__148_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__148_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__149_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_many_parenthesizer___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__149_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__149_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__150_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__149_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__150_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__150_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__151_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "atomic"};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__151_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__151_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__152_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__151_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(56, 145, 113, 208, 127, 167, 216, 55)}};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__152_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__152_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__153_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__9_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__153_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__153_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__10_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__153_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__153_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value_aux_1),((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__151_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(212, 16, 254, 130, 153, 255, 99, 153)}};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__153_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__153_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__154_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_atomic, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__154_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__154_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__155_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__154_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__155_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__155_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__156_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__153_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__156_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__156_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Parser_0__Lean_Parser_initFn___closed__157_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__157_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_;
static const lean_closure_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__158_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_atomic_formatter___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__158_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__158_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__159_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__158_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__159_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__159_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__160_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__160_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__160_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Parser_0__Lean_Parser_initFn___closed__161_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__161_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__162_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "lookahead"};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__162_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__162_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__163_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__162_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(24, 94, 230, 204, 13, 59, 242, 46)}};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__163_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__163_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__164_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__9_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__164_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__164_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__10_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__164_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__164_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value_aux_1),((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__162_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(52, 19, 60, 201, 90, 143, 111, 211)}};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__164_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__164_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__165_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_lookahead, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__165_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__165_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__166_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__165_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__166_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__166_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__167_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__164_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__167_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__167_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__168_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Formatter_lookahead_formatter___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__168_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__168_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__169_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__168_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__169_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__169_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__170_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Parenthesizer_lookahead_parenthesizer___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__170_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__170_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__171_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__170_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__171_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__171_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__172_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "lineEq"};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__172_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__172_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__173_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__172_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(11, 222, 52, 211, 142, 186, 26, 103)}};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__173_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__173_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__174_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "checkLineEq"};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__174_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__174_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__175_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__9_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__175_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__175_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__10_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__175_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__175_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value_aux_1),((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__174_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(238, 130, 255, 142, 22, 38, 200, 197)}};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__175_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__175_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Parser_0__Lean_Parser_initFn___closed__176_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__176_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Parser_0__Lean_Parser_initFn___closed__177_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__177_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_;
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__178_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__175_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__178_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__178_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Parser_0__Lean_Parser_initFn___closed__179_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__179_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Parser_0__Lean_Parser_initFn___closed__180_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__180_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__181_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "colEq"};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__181_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__181_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__182_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__181_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(105, 155, 248, 3, 115, 223, 12, 139)}};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__182_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__182_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__183_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "checkColEq"};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__183_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__183_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__184_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__9_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__184_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__184_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__10_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__184_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__184_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value_aux_1),((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__183_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(123, 79, 136, 97, 27, 86, 56, 4)}};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__184_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__184_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Parser_0__Lean_Parser_initFn___closed__185_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__185_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Parser_0__Lean_Parser_initFn___closed__186_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__186_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_;
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__187_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__184_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__187_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__187_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Parser_0__Lean_Parser_initFn___closed__188_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__188_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Parser_0__Lean_Parser_initFn___closed__189_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__189_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__190_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "colGe"};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__190_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__190_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__191_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__190_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(119, 36, 80, 74, 173, 106, 150, 68)}};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__191_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__191_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__192_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "checkColGe"};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__192_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__192_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__193_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__9_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__193_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__193_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__10_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__193_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__193_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value_aux_1),((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__192_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(133, 21, 222, 233, 68, 88, 239, 150)}};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__193_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__193_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Parser_0__Lean_Parser_initFn___closed__194_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__194_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Parser_0__Lean_Parser_initFn___closed__195_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__195_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_;
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__196_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__193_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__196_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__196_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Parser_0__Lean_Parser_initFn___closed__197_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__197_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Parser_0__Lean_Parser_initFn___closed__198_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__198_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__199_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "colGt"};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__199_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__199_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__200_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__199_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(185, 236, 32, 153, 169, 213, 53, 244)}};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__200_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__200_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__201_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "checkColGt"};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__201_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__201_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__202_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__9_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__202_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__202_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__10_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__202_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__202_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value_aux_1),((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__201_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(205, 27, 6, 116, 51, 223, 220, 245)}};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__202_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__202_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Parser_0__Lean_Parser_initFn___closed__203_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__203_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Parser_0__Lean_Parser_initFn___closed__204_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__204_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_;
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__205_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__202_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__205_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__205_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Parser_0__Lean_Parser_initFn___closed__206_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__206_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Parser_0__Lean_Parser_initFn___closed__207_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__207_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__208_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "hygieneInfo"};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__208_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__208_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__209_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__208_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(27, 64, 36, 144, 170, 151, 255, 136)}};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__209_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__209_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__210_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__9_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__210_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__210_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__10_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__210_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__210_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value_aux_1),((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__208_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(175, 96, 174, 177, 221, 86, 223, 51)}};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__210_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__210_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Parser_0__Lean_Parser_initFn___closed__211_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__211_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_;
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__212_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__209_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__212_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__212_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__213_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_hygieneInfo_formatter___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__213_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__213_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__214_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__213_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__214_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__214_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__215_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_hygieneInfo_parenthesizer___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__215_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__215_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__216_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__215_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__216_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__216_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__217_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "rawIdent"};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__217_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__217_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__218_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__217_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(112, 100, 176, 236, 81, 164, 232, 12)}};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__218_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__218_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__219_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__9_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__219_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__219_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__10_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__219_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__219_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value_aux_1),((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__217_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(220, 2, 179, 39, 67, 204, 226, 154)}};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__219_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__219_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Parser_0__Lean_Parser_initFn___closed__220_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__220_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_;
static const lean_closure_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__221_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_rawIdent_formatter___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__221_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__221_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__222_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__221_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__222_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__222_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__223_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_rawIdent_parenthesizer___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__223_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__223_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__224_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__223_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__224_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__224_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__225_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ident"};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__225_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__225_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__226_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__225_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(52, 159, 208, 51, 14, 60, 6, 71)}};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__226_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__226_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__227_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__9_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__227_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__227_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__10_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__227_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__227_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value_aux_1),((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__225_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(24, 242, 101, 31, 193, 156, 127, 171)}};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__227_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__227_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Parser_0__Lean_Parser_initFn___closed__228_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__228_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_;
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__229_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__226_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__229_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__229_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__230_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_ident_formatter___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__230_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__230_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__231_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__230_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__231_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__231_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__232_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_ident_parenthesizer___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__232_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__232_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__233_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__232_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__233_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__233_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__234_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "scientific"};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__234_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__234_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__235_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__234_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(219, 104, 254, 176, 65, 57, 101, 179)}};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__235_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__235_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__236_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "scientificLit"};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__236_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__236_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__237_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__9_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__237_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__237_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__10_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__237_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__237_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value_aux_1),((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__236_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(236, 25, 249, 160, 8, 56, 13, 159)}};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__237_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__237_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Parser_0__Lean_Parser_initFn___closed__238_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__238_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_;
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__239_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__235_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__239_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__239_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__240_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_scientificLit_formatter___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__240_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__240_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__241_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__240_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__241_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__241_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__242_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_scientificLit_parenthesizer___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__242_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__242_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__243_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__242_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__243_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__243_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__244_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "name"};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__244_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__244_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__245_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__244_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(84, 246, 234, 130, 97, 205, 144, 82)}};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__245_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__245_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__246_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "nameLit"};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__246_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__246_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__247_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__9_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__247_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__247_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__10_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__247_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__247_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value_aux_1),((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__246_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(52, 229, 203, 158, 195, 74, 86, 122)}};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__247_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__247_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Parser_0__Lean_Parser_initFn___closed__248_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__248_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_;
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__249_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__245_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__249_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__249_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__250_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_nameLit_formatter___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__250_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__250_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__251_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__250_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__251_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__251_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__252_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_nameLit_parenthesizer___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__252_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__252_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__253_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__252_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__253_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__253_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__254_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "char"};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__254_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__254_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__255_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__254_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(43, 243, 213, 66, 253, 140, 152, 232)}};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__255_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__255_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__256_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "charLit"};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__256_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__256_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__257_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__9_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__257_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__257_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__10_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__257_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__257_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value_aux_1),((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__256_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(73, 82, 20, 217, 44, 105, 253, 153)}};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__257_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__257_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Parser_0__Lean_Parser_initFn___closed__258_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__258_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_;
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__259_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__255_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__259_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__259_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__260_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_charLit_formatter___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__260_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__260_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__261_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__260_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__261_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__261_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__262_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_charLit_parenthesizer___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__262_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__262_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__263_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__262_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__263_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__263_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__264_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "str"};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__264_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__264_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__265_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__264_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(255, 188, 142, 1, 190, 33, 34, 128)}};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__265_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__265_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__266_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "strLit"};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__266_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__266_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__267_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__9_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__267_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__267_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__10_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__267_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__267_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value_aux_1),((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__266_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(63, 157, 94, 66, 135, 29, 115, 44)}};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__267_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__267_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Parser_0__Lean_Parser_initFn___closed__268_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__268_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_;
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__269_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__265_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__269_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__269_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__270_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_strLit_formatter___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__270_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__270_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__271_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__270_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__271_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__271_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__272_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_strLit_parenthesizer___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__272_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__272_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__273_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__272_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__273_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__273_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__274_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "num"};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__274_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__274_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__275_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__274_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(227, 68, 22, 222, 47, 51, 204, 84)}};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__275_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__275_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__276_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "numLit"};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__276_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__276_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__277_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__9_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__277_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__277_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__10_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__277_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__277_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value_aux_1),((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__276_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(55, 124, 25, 195, 9, 201, 171, 221)}};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__277_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__277_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Parser_0__Lean_Parser_initFn___closed__278_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__278_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_;
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__279_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__275_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__279_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__279_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__280_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__280_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__280_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Parser_0__Lean_Parser_initFn___closed__281_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__281_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_;
static const lean_closure_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__282_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_numLit_formatter___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__282_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__282_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__283_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__282_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__283_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__283_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__284_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_numLit_parenthesizer___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__284_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__284_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__285_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__284_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__285_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__285_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__286_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "linebreak"};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__286_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__286_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__287_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__286_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(74, 147, 100, 44, 136, 108, 159, 66)}};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__287_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__287_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__288_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "checkLinebreakBefore"};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__288_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__288_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__289_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__9_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__289_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__289_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__10_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__289_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__289_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value_aux_1),((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__288_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(106, 136, 117, 184, 203, 101, 193, 45)}};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__289_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__289_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__290_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "line break"};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__290_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__290_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Parser_0__Lean_Parser_initFn___closed__291_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__291_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Parser_0__Lean_Parser_initFn___closed__292_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__292_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_;
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__293_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__289_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__293_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__293_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Parser_0__Lean_Parser_initFn___closed__294_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__294_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Parser_0__Lean_Parser_initFn___closed__295_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__295_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__296_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "noWs"};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__296_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__296_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__297_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__296_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(92, 29, 204, 148, 167, 109, 242, 21)}};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__297_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__297_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__298_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "checkNoWsBefore"};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__298_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__298_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__299_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__9_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__299_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__299_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__10_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__299_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__299_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value_aux_1),((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__298_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(246, 175, 148, 38, 136, 238, 167, 124)}};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__299_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__299_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__300_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "no space before"};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__300_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__300_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Parser_0__Lean_Parser_initFn___closed__301_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__301_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Parser_0__Lean_Parser_initFn___closed__302_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__302_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_;
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__303_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__299_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__303_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__303_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_0__Lean_Parser_initFn___closed__304_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__0_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__304_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__304_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Parser_0__Lean_Parser_initFn___closed__305_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__305_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Parser_0__Lean_Parser_initFn___closed__306_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__306_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Parser_0__Lean_Parser_initFn___closed__307_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___closed__307_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* lean_mk_antiquot_parenthesizer(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Parenthesizer_mkAntiquot_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Parenthesizer_ident_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Parenthesizer_ident_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Parser_0__Lean_PrettyPrinter_Parenthesizer_ident_parenthesizer___regBuiltin_Lean_PrettyPrinter_Parenthesizer_ident_parenthesizer__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_Term_ident_parenthesizer___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Parser_0__Lean_PrettyPrinter_Parenthesizer_ident_parenthesizer___regBuiltin_Lean_PrettyPrinter_Parenthesizer_ident_parenthesizer__1___closed__0 = (const lean_object*)&l___private_Lean_Parser_0__Lean_PrettyPrinter_Parenthesizer_ident_parenthesizer___regBuiltin_Lean_PrettyPrinter_Parenthesizer_ident_parenthesizer__1___closed__0_value;
static const lean_string_object l___private_Lean_Parser_0__Lean_PrettyPrinter_Parenthesizer_ident_parenthesizer___regBuiltin_Lean_PrettyPrinter_Parenthesizer_ident_parenthesizer__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "PrettyPrinter"};
static const lean_object* l___private_Lean_Parser_0__Lean_PrettyPrinter_Parenthesizer_ident_parenthesizer___regBuiltin_Lean_PrettyPrinter_Parenthesizer_ident_parenthesizer__1___closed__1 = (const lean_object*)&l___private_Lean_Parser_0__Lean_PrettyPrinter_Parenthesizer_ident_parenthesizer___regBuiltin_Lean_PrettyPrinter_Parenthesizer_ident_parenthesizer__1___closed__1_value;
static const lean_string_object l___private_Lean_Parser_0__Lean_PrettyPrinter_Parenthesizer_ident_parenthesizer___regBuiltin_Lean_PrettyPrinter_Parenthesizer_ident_parenthesizer__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "Parenthesizer"};
static const lean_object* l___private_Lean_Parser_0__Lean_PrettyPrinter_Parenthesizer_ident_parenthesizer___regBuiltin_Lean_PrettyPrinter_Parenthesizer_ident_parenthesizer__1___closed__2 = (const lean_object*)&l___private_Lean_Parser_0__Lean_PrettyPrinter_Parenthesizer_ident_parenthesizer___regBuiltin_Lean_PrettyPrinter_Parenthesizer_ident_parenthesizer__1___closed__2_value;
static const lean_string_object l___private_Lean_Parser_0__Lean_PrettyPrinter_Parenthesizer_ident_parenthesizer___regBuiltin_Lean_PrettyPrinter_Parenthesizer_ident_parenthesizer__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "parenthesizer"};
static const lean_object* l___private_Lean_Parser_0__Lean_PrettyPrinter_Parenthesizer_ident_parenthesizer___regBuiltin_Lean_PrettyPrinter_Parenthesizer_ident_parenthesizer__1___closed__3 = (const lean_object*)&l___private_Lean_Parser_0__Lean_PrettyPrinter_Parenthesizer_ident_parenthesizer___regBuiltin_Lean_PrettyPrinter_Parenthesizer_ident_parenthesizer__1___closed__3_value;
static const lean_ctor_object l___private_Lean_Parser_0__Lean_PrettyPrinter_Parenthesizer_ident_parenthesizer___regBuiltin_Lean_PrettyPrinter_Parenthesizer_ident_parenthesizer__1___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__9_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_0__Lean_PrettyPrinter_Parenthesizer_ident_parenthesizer___regBuiltin_Lean_PrettyPrinter_Parenthesizer_ident_parenthesizer__1___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_0__Lean_PrettyPrinter_Parenthesizer_ident_parenthesizer___regBuiltin_Lean_PrettyPrinter_Parenthesizer_ident_parenthesizer__1___closed__4_value_aux_0),((lean_object*)&l___private_Lean_Parser_0__Lean_PrettyPrinter_Parenthesizer_ident_parenthesizer___regBuiltin_Lean_PrettyPrinter_Parenthesizer_ident_parenthesizer__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(120, 167, 117, 148, 131, 202, 42, 4)}};
static const lean_ctor_object l___private_Lean_Parser_0__Lean_PrettyPrinter_Parenthesizer_ident_parenthesizer___regBuiltin_Lean_PrettyPrinter_Parenthesizer_ident_parenthesizer__1___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_0__Lean_PrettyPrinter_Parenthesizer_ident_parenthesizer___regBuiltin_Lean_PrettyPrinter_Parenthesizer_ident_parenthesizer__1___closed__4_value_aux_1),((lean_object*)&l___private_Lean_Parser_0__Lean_PrettyPrinter_Parenthesizer_ident_parenthesizer___regBuiltin_Lean_PrettyPrinter_Parenthesizer_ident_parenthesizer__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(250, 80, 206, 144, 206, 86, 123, 88)}};
static const lean_ctor_object l___private_Lean_Parser_0__Lean_PrettyPrinter_Parenthesizer_ident_parenthesizer___regBuiltin_Lean_PrettyPrinter_Parenthesizer_ident_parenthesizer__1___closed__4_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_0__Lean_PrettyPrinter_Parenthesizer_ident_parenthesizer___regBuiltin_Lean_PrettyPrinter_Parenthesizer_ident_parenthesizer__1___closed__4_value_aux_2),((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__225_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(137, 233, 14, 51, 59, 26, 143, 93)}};
static const lean_ctor_object l___private_Lean_Parser_0__Lean_PrettyPrinter_Parenthesizer_ident_parenthesizer___regBuiltin_Lean_PrettyPrinter_Parenthesizer_ident_parenthesizer__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_0__Lean_PrettyPrinter_Parenthesizer_ident_parenthesizer___regBuiltin_Lean_PrettyPrinter_Parenthesizer_ident_parenthesizer__1___closed__4_value_aux_3),((lean_object*)&l___private_Lean_Parser_0__Lean_PrettyPrinter_Parenthesizer_ident_parenthesizer___regBuiltin_Lean_PrettyPrinter_Parenthesizer_ident_parenthesizer__1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(184, 151, 240, 167, 197, 64, 62, 10)}};
static const lean_object* l___private_Lean_Parser_0__Lean_PrettyPrinter_Parenthesizer_ident_parenthesizer___regBuiltin_Lean_PrettyPrinter_Parenthesizer_ident_parenthesizer__1___closed__4 = (const lean_object*)&l___private_Lean_Parser_0__Lean_PrettyPrinter_Parenthesizer_ident_parenthesizer___regBuiltin_Lean_PrettyPrinter_Parenthesizer_ident_parenthesizer__1___closed__4_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_0__Lean_PrettyPrinter_Parenthesizer_ident_parenthesizer___regBuiltin_Lean_PrettyPrinter_Parenthesizer_ident_parenthesizer__1();
LEAN_EXPORT lean_object* l___private_Lean_Parser_0__Lean_PrettyPrinter_Parenthesizer_ident_parenthesizer___regBuiltin_Lean_PrettyPrinter_Parenthesizer_ident_parenthesizer__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Parenthesizer_numLit_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Parenthesizer_numLit_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Parser_0__Lean_PrettyPrinter_Parenthesizer_numLit_parenthesizer___regBuiltin_Lean_PrettyPrinter_Parenthesizer_numLit_parenthesizer__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_Term_num_parenthesizer___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Parser_0__Lean_PrettyPrinter_Parenthesizer_numLit_parenthesizer___regBuiltin_Lean_PrettyPrinter_Parenthesizer_numLit_parenthesizer__1___closed__0 = (const lean_object*)&l___private_Lean_Parser_0__Lean_PrettyPrinter_Parenthesizer_numLit_parenthesizer___regBuiltin_Lean_PrettyPrinter_Parenthesizer_numLit_parenthesizer__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Parser_0__Lean_PrettyPrinter_Parenthesizer_numLit_parenthesizer___regBuiltin_Lean_PrettyPrinter_Parenthesizer_numLit_parenthesizer__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__9_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_0__Lean_PrettyPrinter_Parenthesizer_numLit_parenthesizer___regBuiltin_Lean_PrettyPrinter_Parenthesizer_numLit_parenthesizer__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_0__Lean_PrettyPrinter_Parenthesizer_numLit_parenthesizer___regBuiltin_Lean_PrettyPrinter_Parenthesizer_numLit_parenthesizer__1___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Parser_0__Lean_PrettyPrinter_Parenthesizer_ident_parenthesizer___regBuiltin_Lean_PrettyPrinter_Parenthesizer_ident_parenthesizer__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(120, 167, 117, 148, 131, 202, 42, 4)}};
static const lean_ctor_object l___private_Lean_Parser_0__Lean_PrettyPrinter_Parenthesizer_numLit_parenthesizer___regBuiltin_Lean_PrettyPrinter_Parenthesizer_numLit_parenthesizer__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_0__Lean_PrettyPrinter_Parenthesizer_numLit_parenthesizer___regBuiltin_Lean_PrettyPrinter_Parenthesizer_numLit_parenthesizer__1___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Parser_0__Lean_PrettyPrinter_Parenthesizer_ident_parenthesizer___regBuiltin_Lean_PrettyPrinter_Parenthesizer_ident_parenthesizer__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(250, 80, 206, 144, 206, 86, 123, 88)}};
static const lean_ctor_object l___private_Lean_Parser_0__Lean_PrettyPrinter_Parenthesizer_numLit_parenthesizer___regBuiltin_Lean_PrettyPrinter_Parenthesizer_numLit_parenthesizer__1___closed__1_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_0__Lean_PrettyPrinter_Parenthesizer_numLit_parenthesizer___regBuiltin_Lean_PrettyPrinter_Parenthesizer_numLit_parenthesizer__1___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__276_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(126, 160, 160, 165, 225, 137, 109, 89)}};
static const lean_ctor_object l___private_Lean_Parser_0__Lean_PrettyPrinter_Parenthesizer_numLit_parenthesizer___regBuiltin_Lean_PrettyPrinter_Parenthesizer_numLit_parenthesizer__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_0__Lean_PrettyPrinter_Parenthesizer_numLit_parenthesizer___regBuiltin_Lean_PrettyPrinter_Parenthesizer_numLit_parenthesizer__1___closed__1_value_aux_3),((lean_object*)&l___private_Lean_Parser_0__Lean_PrettyPrinter_Parenthesizer_ident_parenthesizer___regBuiltin_Lean_PrettyPrinter_Parenthesizer_ident_parenthesizer__1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(91, 17, 139, 185, 158, 246, 57, 95)}};
static const lean_object* l___private_Lean_Parser_0__Lean_PrettyPrinter_Parenthesizer_numLit_parenthesizer___regBuiltin_Lean_PrettyPrinter_Parenthesizer_numLit_parenthesizer__1___closed__1 = (const lean_object*)&l___private_Lean_Parser_0__Lean_PrettyPrinter_Parenthesizer_numLit_parenthesizer___regBuiltin_Lean_PrettyPrinter_Parenthesizer_numLit_parenthesizer__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_0__Lean_PrettyPrinter_Parenthesizer_numLit_parenthesizer___regBuiltin_Lean_PrettyPrinter_Parenthesizer_numLit_parenthesizer__1();
LEAN_EXPORT lean_object* l___private_Lean_Parser_0__Lean_PrettyPrinter_Parenthesizer_numLit_parenthesizer___regBuiltin_Lean_PrettyPrinter_Parenthesizer_numLit_parenthesizer__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Parenthesizer_scientificLit_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Parenthesizer_scientificLit_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Parser_0__Lean_PrettyPrinter_Parenthesizer_scientificLit_parenthesizer___regBuiltin_Lean_PrettyPrinter_Parenthesizer_scientificLit_parenthesizer__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_Term_scientific_parenthesizer___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Parser_0__Lean_PrettyPrinter_Parenthesizer_scientificLit_parenthesizer___regBuiltin_Lean_PrettyPrinter_Parenthesizer_scientificLit_parenthesizer__1___closed__0 = (const lean_object*)&l___private_Lean_Parser_0__Lean_PrettyPrinter_Parenthesizer_scientificLit_parenthesizer___regBuiltin_Lean_PrettyPrinter_Parenthesizer_scientificLit_parenthesizer__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Parser_0__Lean_PrettyPrinter_Parenthesizer_scientificLit_parenthesizer___regBuiltin_Lean_PrettyPrinter_Parenthesizer_scientificLit_parenthesizer__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__9_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_0__Lean_PrettyPrinter_Parenthesizer_scientificLit_parenthesizer___regBuiltin_Lean_PrettyPrinter_Parenthesizer_scientificLit_parenthesizer__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_0__Lean_PrettyPrinter_Parenthesizer_scientificLit_parenthesizer___regBuiltin_Lean_PrettyPrinter_Parenthesizer_scientificLit_parenthesizer__1___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Parser_0__Lean_PrettyPrinter_Parenthesizer_ident_parenthesizer___regBuiltin_Lean_PrettyPrinter_Parenthesizer_ident_parenthesizer__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(120, 167, 117, 148, 131, 202, 42, 4)}};
static const lean_ctor_object l___private_Lean_Parser_0__Lean_PrettyPrinter_Parenthesizer_scientificLit_parenthesizer___regBuiltin_Lean_PrettyPrinter_Parenthesizer_scientificLit_parenthesizer__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_0__Lean_PrettyPrinter_Parenthesizer_scientificLit_parenthesizer___regBuiltin_Lean_PrettyPrinter_Parenthesizer_scientificLit_parenthesizer__1___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Parser_0__Lean_PrettyPrinter_Parenthesizer_ident_parenthesizer___regBuiltin_Lean_PrettyPrinter_Parenthesizer_ident_parenthesizer__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(250, 80, 206, 144, 206, 86, 123, 88)}};
static const lean_ctor_object l___private_Lean_Parser_0__Lean_PrettyPrinter_Parenthesizer_scientificLit_parenthesizer___regBuiltin_Lean_PrettyPrinter_Parenthesizer_scientificLit_parenthesizer__1___closed__1_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_0__Lean_PrettyPrinter_Parenthesizer_scientificLit_parenthesizer___regBuiltin_Lean_PrettyPrinter_Parenthesizer_scientificLit_parenthesizer__1___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__236_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(181, 169, 213, 135, 193, 195, 181, 162)}};
static const lean_ctor_object l___private_Lean_Parser_0__Lean_PrettyPrinter_Parenthesizer_scientificLit_parenthesizer___regBuiltin_Lean_PrettyPrinter_Parenthesizer_scientificLit_parenthesizer__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_0__Lean_PrettyPrinter_Parenthesizer_scientificLit_parenthesizer___regBuiltin_Lean_PrettyPrinter_Parenthesizer_scientificLit_parenthesizer__1___closed__1_value_aux_3),((lean_object*)&l___private_Lean_Parser_0__Lean_PrettyPrinter_Parenthesizer_ident_parenthesizer___regBuiltin_Lean_PrettyPrinter_Parenthesizer_ident_parenthesizer__1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(180, 74, 105, 254, 5, 48, 59, 254)}};
static const lean_object* l___private_Lean_Parser_0__Lean_PrettyPrinter_Parenthesizer_scientificLit_parenthesizer___regBuiltin_Lean_PrettyPrinter_Parenthesizer_scientificLit_parenthesizer__1___closed__1 = (const lean_object*)&l___private_Lean_Parser_0__Lean_PrettyPrinter_Parenthesizer_scientificLit_parenthesizer___regBuiltin_Lean_PrettyPrinter_Parenthesizer_scientificLit_parenthesizer__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_0__Lean_PrettyPrinter_Parenthesizer_scientificLit_parenthesizer___regBuiltin_Lean_PrettyPrinter_Parenthesizer_scientificLit_parenthesizer__1();
LEAN_EXPORT lean_object* l___private_Lean_Parser_0__Lean_PrettyPrinter_Parenthesizer_scientificLit_parenthesizer___regBuiltin_Lean_PrettyPrinter_Parenthesizer_scientificLit_parenthesizer__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Parenthesizer_charLit_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Parenthesizer_charLit_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Parser_0__Lean_PrettyPrinter_Parenthesizer_charLit_parenthesizer___regBuiltin_Lean_PrettyPrinter_Parenthesizer_charLit_parenthesizer__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_Term_char_parenthesizer___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Parser_0__Lean_PrettyPrinter_Parenthesizer_charLit_parenthesizer___regBuiltin_Lean_PrettyPrinter_Parenthesizer_charLit_parenthesizer__1___closed__0 = (const lean_object*)&l___private_Lean_Parser_0__Lean_PrettyPrinter_Parenthesizer_charLit_parenthesizer___regBuiltin_Lean_PrettyPrinter_Parenthesizer_charLit_parenthesizer__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Parser_0__Lean_PrettyPrinter_Parenthesizer_charLit_parenthesizer___regBuiltin_Lean_PrettyPrinter_Parenthesizer_charLit_parenthesizer__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__9_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_0__Lean_PrettyPrinter_Parenthesizer_charLit_parenthesizer___regBuiltin_Lean_PrettyPrinter_Parenthesizer_charLit_parenthesizer__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_0__Lean_PrettyPrinter_Parenthesizer_charLit_parenthesizer___regBuiltin_Lean_PrettyPrinter_Parenthesizer_charLit_parenthesizer__1___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Parser_0__Lean_PrettyPrinter_Parenthesizer_ident_parenthesizer___regBuiltin_Lean_PrettyPrinter_Parenthesizer_ident_parenthesizer__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(120, 167, 117, 148, 131, 202, 42, 4)}};
static const lean_ctor_object l___private_Lean_Parser_0__Lean_PrettyPrinter_Parenthesizer_charLit_parenthesizer___regBuiltin_Lean_PrettyPrinter_Parenthesizer_charLit_parenthesizer__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_0__Lean_PrettyPrinter_Parenthesizer_charLit_parenthesizer___regBuiltin_Lean_PrettyPrinter_Parenthesizer_charLit_parenthesizer__1___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Parser_0__Lean_PrettyPrinter_Parenthesizer_ident_parenthesizer___regBuiltin_Lean_PrettyPrinter_Parenthesizer_ident_parenthesizer__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(250, 80, 206, 144, 206, 86, 123, 88)}};
static const lean_ctor_object l___private_Lean_Parser_0__Lean_PrettyPrinter_Parenthesizer_charLit_parenthesizer___regBuiltin_Lean_PrettyPrinter_Parenthesizer_charLit_parenthesizer__1___closed__1_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_0__Lean_PrettyPrinter_Parenthesizer_charLit_parenthesizer___regBuiltin_Lean_PrettyPrinter_Parenthesizer_charLit_parenthesizer__1___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__256_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(216, 21, 185, 140, 206, 31, 0, 27)}};
static const lean_ctor_object l___private_Lean_Parser_0__Lean_PrettyPrinter_Parenthesizer_charLit_parenthesizer___regBuiltin_Lean_PrettyPrinter_Parenthesizer_charLit_parenthesizer__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_0__Lean_PrettyPrinter_Parenthesizer_charLit_parenthesizer___regBuiltin_Lean_PrettyPrinter_Parenthesizer_charLit_parenthesizer__1___closed__1_value_aux_3),((lean_object*)&l___private_Lean_Parser_0__Lean_PrettyPrinter_Parenthesizer_ident_parenthesizer___regBuiltin_Lean_PrettyPrinter_Parenthesizer_ident_parenthesizer__1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(189, 126, 106, 230, 172, 96, 250, 51)}};
static const lean_object* l___private_Lean_Parser_0__Lean_PrettyPrinter_Parenthesizer_charLit_parenthesizer___regBuiltin_Lean_PrettyPrinter_Parenthesizer_charLit_parenthesizer__1___closed__1 = (const lean_object*)&l___private_Lean_Parser_0__Lean_PrettyPrinter_Parenthesizer_charLit_parenthesizer___regBuiltin_Lean_PrettyPrinter_Parenthesizer_charLit_parenthesizer__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_0__Lean_PrettyPrinter_Parenthesizer_charLit_parenthesizer___regBuiltin_Lean_PrettyPrinter_Parenthesizer_charLit_parenthesizer__1();
LEAN_EXPORT lean_object* l___private_Lean_Parser_0__Lean_PrettyPrinter_Parenthesizer_charLit_parenthesizer___regBuiltin_Lean_PrettyPrinter_Parenthesizer_charLit_parenthesizer__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Parenthesizer_strLit_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Parenthesizer_strLit_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Parser_0__Lean_PrettyPrinter_Parenthesizer_strLit_parenthesizer___regBuiltin_Lean_PrettyPrinter_Parenthesizer_strLit_parenthesizer__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_Term_str_parenthesizer___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Parser_0__Lean_PrettyPrinter_Parenthesizer_strLit_parenthesizer___regBuiltin_Lean_PrettyPrinter_Parenthesizer_strLit_parenthesizer__1___closed__0 = (const lean_object*)&l___private_Lean_Parser_0__Lean_PrettyPrinter_Parenthesizer_strLit_parenthesizer___regBuiltin_Lean_PrettyPrinter_Parenthesizer_strLit_parenthesizer__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Parser_0__Lean_PrettyPrinter_Parenthesizer_strLit_parenthesizer___regBuiltin_Lean_PrettyPrinter_Parenthesizer_strLit_parenthesizer__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__9_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_0__Lean_PrettyPrinter_Parenthesizer_strLit_parenthesizer___regBuiltin_Lean_PrettyPrinter_Parenthesizer_strLit_parenthesizer__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_0__Lean_PrettyPrinter_Parenthesizer_strLit_parenthesizer___regBuiltin_Lean_PrettyPrinter_Parenthesizer_strLit_parenthesizer__1___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Parser_0__Lean_PrettyPrinter_Parenthesizer_ident_parenthesizer___regBuiltin_Lean_PrettyPrinter_Parenthesizer_ident_parenthesizer__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(120, 167, 117, 148, 131, 202, 42, 4)}};
static const lean_ctor_object l___private_Lean_Parser_0__Lean_PrettyPrinter_Parenthesizer_strLit_parenthesizer___regBuiltin_Lean_PrettyPrinter_Parenthesizer_strLit_parenthesizer__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_0__Lean_PrettyPrinter_Parenthesizer_strLit_parenthesizer___regBuiltin_Lean_PrettyPrinter_Parenthesizer_strLit_parenthesizer__1___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Parser_0__Lean_PrettyPrinter_Parenthesizer_ident_parenthesizer___regBuiltin_Lean_PrettyPrinter_Parenthesizer_ident_parenthesizer__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(250, 80, 206, 144, 206, 86, 123, 88)}};
static const lean_ctor_object l___private_Lean_Parser_0__Lean_PrettyPrinter_Parenthesizer_strLit_parenthesizer___regBuiltin_Lean_PrettyPrinter_Parenthesizer_strLit_parenthesizer__1___closed__1_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_0__Lean_PrettyPrinter_Parenthesizer_strLit_parenthesizer___regBuiltin_Lean_PrettyPrinter_Parenthesizer_strLit_parenthesizer__1___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__266_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(118, 61, 18, 10, 61, 249, 234, 173)}};
static const lean_ctor_object l___private_Lean_Parser_0__Lean_PrettyPrinter_Parenthesizer_strLit_parenthesizer___regBuiltin_Lean_PrettyPrinter_Parenthesizer_strLit_parenthesizer__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_0__Lean_PrettyPrinter_Parenthesizer_strLit_parenthesizer___regBuiltin_Lean_PrettyPrinter_Parenthesizer_strLit_parenthesizer__1___closed__1_value_aux_3),((lean_object*)&l___private_Lean_Parser_0__Lean_PrettyPrinter_Parenthesizer_ident_parenthesizer___regBuiltin_Lean_PrettyPrinter_Parenthesizer_ident_parenthesizer__1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(179, 91, 7, 25, 4, 156, 230, 12)}};
static const lean_object* l___private_Lean_Parser_0__Lean_PrettyPrinter_Parenthesizer_strLit_parenthesizer___regBuiltin_Lean_PrettyPrinter_Parenthesizer_strLit_parenthesizer__1___closed__1 = (const lean_object*)&l___private_Lean_Parser_0__Lean_PrettyPrinter_Parenthesizer_strLit_parenthesizer___regBuiltin_Lean_PrettyPrinter_Parenthesizer_strLit_parenthesizer__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_0__Lean_PrettyPrinter_Parenthesizer_strLit_parenthesizer___regBuiltin_Lean_PrettyPrinter_Parenthesizer_strLit_parenthesizer__1();
LEAN_EXPORT lean_object* l___private_Lean_Parser_0__Lean_PrettyPrinter_Parenthesizer_strLit_parenthesizer___regBuiltin_Lean_PrettyPrinter_Parenthesizer_strLit_parenthesizer__1___boxed(lean_object*);
LEAN_EXPORT lean_object* lean_pretty_printer_parenthesizer_interpret_parser_descr(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Parenthesizer_interpretParserDescr___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lean_mk_antiquot_formatter(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Formatter_mkAntiquot_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Formatter_ident_formatter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Formatter_ident_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Parser_0__Lean_PrettyPrinter_Formatter_ident_formatter___regBuiltin_Lean_PrettyPrinter_Formatter_ident_formatter__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_Term_ident_formatter___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Parser_0__Lean_PrettyPrinter_Formatter_ident_formatter___regBuiltin_Lean_PrettyPrinter_Formatter_ident_formatter__1___closed__0 = (const lean_object*)&l___private_Lean_Parser_0__Lean_PrettyPrinter_Formatter_ident_formatter___regBuiltin_Lean_PrettyPrinter_Formatter_ident_formatter__1___closed__0_value;
static const lean_string_object l___private_Lean_Parser_0__Lean_PrettyPrinter_Formatter_ident_formatter___regBuiltin_Lean_PrettyPrinter_Formatter_ident_formatter__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Formatter"};
static const lean_object* l___private_Lean_Parser_0__Lean_PrettyPrinter_Formatter_ident_formatter___regBuiltin_Lean_PrettyPrinter_Formatter_ident_formatter__1___closed__1 = (const lean_object*)&l___private_Lean_Parser_0__Lean_PrettyPrinter_Formatter_ident_formatter___regBuiltin_Lean_PrettyPrinter_Formatter_ident_formatter__1___closed__1_value;
static const lean_string_object l___private_Lean_Parser_0__Lean_PrettyPrinter_Formatter_ident_formatter___regBuiltin_Lean_PrettyPrinter_Formatter_ident_formatter__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "formatter"};
static const lean_object* l___private_Lean_Parser_0__Lean_PrettyPrinter_Formatter_ident_formatter___regBuiltin_Lean_PrettyPrinter_Formatter_ident_formatter__1___closed__2 = (const lean_object*)&l___private_Lean_Parser_0__Lean_PrettyPrinter_Formatter_ident_formatter___regBuiltin_Lean_PrettyPrinter_Formatter_ident_formatter__1___closed__2_value;
static const lean_ctor_object l___private_Lean_Parser_0__Lean_PrettyPrinter_Formatter_ident_formatter___regBuiltin_Lean_PrettyPrinter_Formatter_ident_formatter__1___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__9_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_0__Lean_PrettyPrinter_Formatter_ident_formatter___regBuiltin_Lean_PrettyPrinter_Formatter_ident_formatter__1___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_0__Lean_PrettyPrinter_Formatter_ident_formatter___regBuiltin_Lean_PrettyPrinter_Formatter_ident_formatter__1___closed__3_value_aux_0),((lean_object*)&l___private_Lean_Parser_0__Lean_PrettyPrinter_Parenthesizer_ident_parenthesizer___regBuiltin_Lean_PrettyPrinter_Parenthesizer_ident_parenthesizer__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(120, 167, 117, 148, 131, 202, 42, 4)}};
static const lean_ctor_object l___private_Lean_Parser_0__Lean_PrettyPrinter_Formatter_ident_formatter___regBuiltin_Lean_PrettyPrinter_Formatter_ident_formatter__1___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_0__Lean_PrettyPrinter_Formatter_ident_formatter___regBuiltin_Lean_PrettyPrinter_Formatter_ident_formatter__1___closed__3_value_aux_1),((lean_object*)&l___private_Lean_Parser_0__Lean_PrettyPrinter_Formatter_ident_formatter___regBuiltin_Lean_PrettyPrinter_Formatter_ident_formatter__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(243, 65, 136, 208, 75, 168, 22, 8)}};
static const lean_ctor_object l___private_Lean_Parser_0__Lean_PrettyPrinter_Formatter_ident_formatter___regBuiltin_Lean_PrettyPrinter_Formatter_ident_formatter__1___closed__3_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_0__Lean_PrettyPrinter_Formatter_ident_formatter___regBuiltin_Lean_PrettyPrinter_Formatter_ident_formatter__1___closed__3_value_aux_2),((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__225_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(156, 7, 102, 176, 201, 50, 36, 151)}};
static const lean_ctor_object l___private_Lean_Parser_0__Lean_PrettyPrinter_Formatter_ident_formatter___regBuiltin_Lean_PrettyPrinter_Formatter_ident_formatter__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_0__Lean_PrettyPrinter_Formatter_ident_formatter___regBuiltin_Lean_PrettyPrinter_Formatter_ident_formatter__1___closed__3_value_aux_3),((lean_object*)&l___private_Lean_Parser_0__Lean_PrettyPrinter_Formatter_ident_formatter___regBuiltin_Lean_PrettyPrinter_Formatter_ident_formatter__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(53, 43, 34, 89, 148, 124, 12, 72)}};
static const lean_object* l___private_Lean_Parser_0__Lean_PrettyPrinter_Formatter_ident_formatter___regBuiltin_Lean_PrettyPrinter_Formatter_ident_formatter__1___closed__3 = (const lean_object*)&l___private_Lean_Parser_0__Lean_PrettyPrinter_Formatter_ident_formatter___regBuiltin_Lean_PrettyPrinter_Formatter_ident_formatter__1___closed__3_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_0__Lean_PrettyPrinter_Formatter_ident_formatter___regBuiltin_Lean_PrettyPrinter_Formatter_ident_formatter__1();
LEAN_EXPORT lean_object* l___private_Lean_Parser_0__Lean_PrettyPrinter_Formatter_ident_formatter___regBuiltin_Lean_PrettyPrinter_Formatter_ident_formatter__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Formatter_numLit_formatter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Formatter_numLit_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Parser_0__Lean_PrettyPrinter_Formatter_numLit_formatter___regBuiltin_Lean_PrettyPrinter_Formatter_numLit_formatter__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_Term_num_formatter___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Parser_0__Lean_PrettyPrinter_Formatter_numLit_formatter___regBuiltin_Lean_PrettyPrinter_Formatter_numLit_formatter__1___closed__0 = (const lean_object*)&l___private_Lean_Parser_0__Lean_PrettyPrinter_Formatter_numLit_formatter___regBuiltin_Lean_PrettyPrinter_Formatter_numLit_formatter__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Parser_0__Lean_PrettyPrinter_Formatter_numLit_formatter___regBuiltin_Lean_PrettyPrinter_Formatter_numLit_formatter__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__9_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_0__Lean_PrettyPrinter_Formatter_numLit_formatter___regBuiltin_Lean_PrettyPrinter_Formatter_numLit_formatter__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_0__Lean_PrettyPrinter_Formatter_numLit_formatter___regBuiltin_Lean_PrettyPrinter_Formatter_numLit_formatter__1___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Parser_0__Lean_PrettyPrinter_Parenthesizer_ident_parenthesizer___regBuiltin_Lean_PrettyPrinter_Parenthesizer_ident_parenthesizer__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(120, 167, 117, 148, 131, 202, 42, 4)}};
static const lean_ctor_object l___private_Lean_Parser_0__Lean_PrettyPrinter_Formatter_numLit_formatter___regBuiltin_Lean_PrettyPrinter_Formatter_numLit_formatter__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_0__Lean_PrettyPrinter_Formatter_numLit_formatter___regBuiltin_Lean_PrettyPrinter_Formatter_numLit_formatter__1___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Parser_0__Lean_PrettyPrinter_Formatter_ident_formatter___regBuiltin_Lean_PrettyPrinter_Formatter_ident_formatter__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(243, 65, 136, 208, 75, 168, 22, 8)}};
static const lean_ctor_object l___private_Lean_Parser_0__Lean_PrettyPrinter_Formatter_numLit_formatter___regBuiltin_Lean_PrettyPrinter_Formatter_numLit_formatter__1___closed__1_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_0__Lean_PrettyPrinter_Formatter_numLit_formatter___regBuiltin_Lean_PrettyPrinter_Formatter_numLit_formatter__1___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__276_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(187, 145, 199, 126, 121, 58, 89, 39)}};
static const lean_ctor_object l___private_Lean_Parser_0__Lean_PrettyPrinter_Formatter_numLit_formatter___regBuiltin_Lean_PrettyPrinter_Formatter_numLit_formatter__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_0__Lean_PrettyPrinter_Formatter_numLit_formatter___regBuiltin_Lean_PrettyPrinter_Formatter_numLit_formatter__1___closed__1_value_aux_3),((lean_object*)&l___private_Lean_Parser_0__Lean_PrettyPrinter_Formatter_ident_formatter___regBuiltin_Lean_PrettyPrinter_Formatter_ident_formatter__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(126, 226, 141, 140, 1, 167, 133, 167)}};
static const lean_object* l___private_Lean_Parser_0__Lean_PrettyPrinter_Formatter_numLit_formatter___regBuiltin_Lean_PrettyPrinter_Formatter_numLit_formatter__1___closed__1 = (const lean_object*)&l___private_Lean_Parser_0__Lean_PrettyPrinter_Formatter_numLit_formatter___regBuiltin_Lean_PrettyPrinter_Formatter_numLit_formatter__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_0__Lean_PrettyPrinter_Formatter_numLit_formatter___regBuiltin_Lean_PrettyPrinter_Formatter_numLit_formatter__1();
LEAN_EXPORT lean_object* l___private_Lean_Parser_0__Lean_PrettyPrinter_Formatter_numLit_formatter___regBuiltin_Lean_PrettyPrinter_Formatter_numLit_formatter__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Formatter_scientificLit_formatter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Formatter_scientificLit_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Parser_0__Lean_PrettyPrinter_Formatter_scientificLit_formatter___regBuiltin_Lean_PrettyPrinter_Formatter_scientificLit_formatter__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_Term_scientific_formatter___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Parser_0__Lean_PrettyPrinter_Formatter_scientificLit_formatter___regBuiltin_Lean_PrettyPrinter_Formatter_scientificLit_formatter__1___closed__0 = (const lean_object*)&l___private_Lean_Parser_0__Lean_PrettyPrinter_Formatter_scientificLit_formatter___regBuiltin_Lean_PrettyPrinter_Formatter_scientificLit_formatter__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Parser_0__Lean_PrettyPrinter_Formatter_scientificLit_formatter___regBuiltin_Lean_PrettyPrinter_Formatter_scientificLit_formatter__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__9_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_0__Lean_PrettyPrinter_Formatter_scientificLit_formatter___regBuiltin_Lean_PrettyPrinter_Formatter_scientificLit_formatter__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_0__Lean_PrettyPrinter_Formatter_scientificLit_formatter___regBuiltin_Lean_PrettyPrinter_Formatter_scientificLit_formatter__1___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Parser_0__Lean_PrettyPrinter_Parenthesizer_ident_parenthesizer___regBuiltin_Lean_PrettyPrinter_Parenthesizer_ident_parenthesizer__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(120, 167, 117, 148, 131, 202, 42, 4)}};
static const lean_ctor_object l___private_Lean_Parser_0__Lean_PrettyPrinter_Formatter_scientificLit_formatter___regBuiltin_Lean_PrettyPrinter_Formatter_scientificLit_formatter__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_0__Lean_PrettyPrinter_Formatter_scientificLit_formatter___regBuiltin_Lean_PrettyPrinter_Formatter_scientificLit_formatter__1___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Parser_0__Lean_PrettyPrinter_Formatter_ident_formatter___regBuiltin_Lean_PrettyPrinter_Formatter_ident_formatter__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(243, 65, 136, 208, 75, 168, 22, 8)}};
static const lean_ctor_object l___private_Lean_Parser_0__Lean_PrettyPrinter_Formatter_scientificLit_formatter___regBuiltin_Lean_PrettyPrinter_Formatter_scientificLit_formatter__1___closed__1_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_0__Lean_PrettyPrinter_Formatter_scientificLit_formatter___regBuiltin_Lean_PrettyPrinter_Formatter_scientificLit_formatter__1___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__236_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(200, 39, 82, 251, 165, 33, 85, 105)}};
static const lean_ctor_object l___private_Lean_Parser_0__Lean_PrettyPrinter_Formatter_scientificLit_formatter___regBuiltin_Lean_PrettyPrinter_Formatter_scientificLit_formatter__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_0__Lean_PrettyPrinter_Formatter_scientificLit_formatter___regBuiltin_Lean_PrettyPrinter_Formatter_scientificLit_formatter__1___closed__1_value_aux_3),((lean_object*)&l___private_Lean_Parser_0__Lean_PrettyPrinter_Formatter_ident_formatter___regBuiltin_Lean_PrettyPrinter_Formatter_ident_formatter__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(25, 112, 121, 124, 112, 87, 30, 19)}};
static const lean_object* l___private_Lean_Parser_0__Lean_PrettyPrinter_Formatter_scientificLit_formatter___regBuiltin_Lean_PrettyPrinter_Formatter_scientificLit_formatter__1___closed__1 = (const lean_object*)&l___private_Lean_Parser_0__Lean_PrettyPrinter_Formatter_scientificLit_formatter___regBuiltin_Lean_PrettyPrinter_Formatter_scientificLit_formatter__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_0__Lean_PrettyPrinter_Formatter_scientificLit_formatter___regBuiltin_Lean_PrettyPrinter_Formatter_scientificLit_formatter__1();
LEAN_EXPORT lean_object* l___private_Lean_Parser_0__Lean_PrettyPrinter_Formatter_scientificLit_formatter___regBuiltin_Lean_PrettyPrinter_Formatter_scientificLit_formatter__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Formatter_charLit_formatter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Formatter_charLit_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Parser_0__Lean_PrettyPrinter_Formatter_charLit_formatter___regBuiltin_Lean_PrettyPrinter_Formatter_charLit_formatter__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_Term_char_formatter___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Parser_0__Lean_PrettyPrinter_Formatter_charLit_formatter___regBuiltin_Lean_PrettyPrinter_Formatter_charLit_formatter__1___closed__0 = (const lean_object*)&l___private_Lean_Parser_0__Lean_PrettyPrinter_Formatter_charLit_formatter___regBuiltin_Lean_PrettyPrinter_Formatter_charLit_formatter__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Parser_0__Lean_PrettyPrinter_Formatter_charLit_formatter___regBuiltin_Lean_PrettyPrinter_Formatter_charLit_formatter__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__9_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_0__Lean_PrettyPrinter_Formatter_charLit_formatter___regBuiltin_Lean_PrettyPrinter_Formatter_charLit_formatter__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_0__Lean_PrettyPrinter_Formatter_charLit_formatter___regBuiltin_Lean_PrettyPrinter_Formatter_charLit_formatter__1___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Parser_0__Lean_PrettyPrinter_Parenthesizer_ident_parenthesizer___regBuiltin_Lean_PrettyPrinter_Parenthesizer_ident_parenthesizer__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(120, 167, 117, 148, 131, 202, 42, 4)}};
static const lean_ctor_object l___private_Lean_Parser_0__Lean_PrettyPrinter_Formatter_charLit_formatter___regBuiltin_Lean_PrettyPrinter_Formatter_charLit_formatter__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_0__Lean_PrettyPrinter_Formatter_charLit_formatter___regBuiltin_Lean_PrettyPrinter_Formatter_charLit_formatter__1___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Parser_0__Lean_PrettyPrinter_Formatter_ident_formatter___regBuiltin_Lean_PrettyPrinter_Formatter_ident_formatter__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(243, 65, 136, 208, 75, 168, 22, 8)}};
static const lean_ctor_object l___private_Lean_Parser_0__Lean_PrettyPrinter_Formatter_charLit_formatter___regBuiltin_Lean_PrettyPrinter_Formatter_charLit_formatter__1___closed__1_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_0__Lean_PrettyPrinter_Formatter_charLit_formatter___regBuiltin_Lean_PrettyPrinter_Formatter_charLit_formatter__1___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__256_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(197, 247, 13, 105, 80, 134, 66, 66)}};
static const lean_ctor_object l___private_Lean_Parser_0__Lean_PrettyPrinter_Formatter_charLit_formatter___regBuiltin_Lean_PrettyPrinter_Formatter_charLit_formatter__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_0__Lean_PrettyPrinter_Formatter_charLit_formatter___regBuiltin_Lean_PrettyPrinter_Formatter_charLit_formatter__1___closed__1_value_aux_3),((lean_object*)&l___private_Lean_Parser_0__Lean_PrettyPrinter_Formatter_ident_formatter___regBuiltin_Lean_PrettyPrinter_Formatter_ident_formatter__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(216, 156, 14, 253, 87, 33, 89, 10)}};
static const lean_object* l___private_Lean_Parser_0__Lean_PrettyPrinter_Formatter_charLit_formatter___regBuiltin_Lean_PrettyPrinter_Formatter_charLit_formatter__1___closed__1 = (const lean_object*)&l___private_Lean_Parser_0__Lean_PrettyPrinter_Formatter_charLit_formatter___regBuiltin_Lean_PrettyPrinter_Formatter_charLit_formatter__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_0__Lean_PrettyPrinter_Formatter_charLit_formatter___regBuiltin_Lean_PrettyPrinter_Formatter_charLit_formatter__1();
LEAN_EXPORT lean_object* l___private_Lean_Parser_0__Lean_PrettyPrinter_Formatter_charLit_formatter___regBuiltin_Lean_PrettyPrinter_Formatter_charLit_formatter__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Formatter_strLit_formatter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Formatter_strLit_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Parser_0__Lean_PrettyPrinter_Formatter_strLit_formatter___regBuiltin_Lean_PrettyPrinter_Formatter_strLit_formatter__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_Term_str_formatter___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Parser_0__Lean_PrettyPrinter_Formatter_strLit_formatter___regBuiltin_Lean_PrettyPrinter_Formatter_strLit_formatter__1___closed__0 = (const lean_object*)&l___private_Lean_Parser_0__Lean_PrettyPrinter_Formatter_strLit_formatter___regBuiltin_Lean_PrettyPrinter_Formatter_strLit_formatter__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Parser_0__Lean_PrettyPrinter_Formatter_strLit_formatter___regBuiltin_Lean_PrettyPrinter_Formatter_strLit_formatter__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__9_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_0__Lean_PrettyPrinter_Formatter_strLit_formatter___regBuiltin_Lean_PrettyPrinter_Formatter_strLit_formatter__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_0__Lean_PrettyPrinter_Formatter_strLit_formatter___regBuiltin_Lean_PrettyPrinter_Formatter_strLit_formatter__1___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Parser_0__Lean_PrettyPrinter_Parenthesizer_ident_parenthesizer___regBuiltin_Lean_PrettyPrinter_Parenthesizer_ident_parenthesizer__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(120, 167, 117, 148, 131, 202, 42, 4)}};
static const lean_ctor_object l___private_Lean_Parser_0__Lean_PrettyPrinter_Formatter_strLit_formatter___regBuiltin_Lean_PrettyPrinter_Formatter_strLit_formatter__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_0__Lean_PrettyPrinter_Formatter_strLit_formatter___regBuiltin_Lean_PrettyPrinter_Formatter_strLit_formatter__1___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Parser_0__Lean_PrettyPrinter_Formatter_ident_formatter___regBuiltin_Lean_PrettyPrinter_Formatter_ident_formatter__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(243, 65, 136, 208, 75, 168, 22, 8)}};
static const lean_ctor_object l___private_Lean_Parser_0__Lean_PrettyPrinter_Formatter_strLit_formatter___regBuiltin_Lean_PrettyPrinter_Formatter_strLit_formatter__1___closed__1_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_0__Lean_PrettyPrinter_Formatter_strLit_formatter___regBuiltin_Lean_PrettyPrinter_Formatter_strLit_formatter__1___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__266_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(99, 191, 21, 76, 153, 54, 88, 65)}};
static const lean_ctor_object l___private_Lean_Parser_0__Lean_PrettyPrinter_Formatter_strLit_formatter___regBuiltin_Lean_PrettyPrinter_Formatter_strLit_formatter__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_0__Lean_PrettyPrinter_Formatter_strLit_formatter___regBuiltin_Lean_PrettyPrinter_Formatter_strLit_formatter__1___closed__1_value_aux_3),((lean_object*)&l___private_Lean_Parser_0__Lean_PrettyPrinter_Formatter_ident_formatter___regBuiltin_Lean_PrettyPrinter_Formatter_ident_formatter__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(54, 22, 145, 4, 145, 86, 25, 230)}};
static const lean_object* l___private_Lean_Parser_0__Lean_PrettyPrinter_Formatter_strLit_formatter___regBuiltin_Lean_PrettyPrinter_Formatter_strLit_formatter__1___closed__1 = (const lean_object*)&l___private_Lean_Parser_0__Lean_PrettyPrinter_Formatter_strLit_formatter___regBuiltin_Lean_PrettyPrinter_Formatter_strLit_formatter__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_0__Lean_PrettyPrinter_Formatter_strLit_formatter___regBuiltin_Lean_PrettyPrinter_Formatter_strLit_formatter__1();
LEAN_EXPORT lean_object* l___private_Lean_Parser_0__Lean_PrettyPrinter_Formatter_strLit_formatter___regBuiltin_Lean_PrettyPrinter_Formatter_strLit_formatter__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Formatter_interpretParserDescr___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Formatter_interpretParserDescr___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lean_pretty_printer_formatter_interpret_parser_descr(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Formatter_interpretParserDescr___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___lam__0_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_(lean_object* v___y_1_, lean_object* v___y_2_, lean_object* v___y_3_, lean_object* v___y_4_){
_start:
{
lean_object* v___x_6_; 
v___x_6_ = l_Lean_PrettyPrinter_Formatter_resetLeadWord___redArg(v___y_2_);
return v___x_6_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___lam__0_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2____boxed(lean_object* v___y_7_, lean_object* v___y_8_, lean_object* v___y_9_, lean_object* v___y_10_, lean_object* v___y_11_){
_start:
{
lean_object* v_res_12_; 
v_res_12_ = l___private_Lean_Parser_0__Lean_Parser_initFn___lam__0_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_(v___y_7_, v___y_8_, v___y_9_, v___y_10_);
lean_dec(v___y_10_);
lean_dec_ref(v___y_9_);
lean_dec(v___y_8_);
lean_dec_ref(v___y_7_);
return v_res_12_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___lam__1_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_(lean_object* v___y_13_, lean_object* v___y_14_, lean_object* v___y_15_, lean_object* v___y_16_, lean_object* v___y_17_){
_start:
{
lean_object* v___x_19_; 
v___x_19_ = lean_apply_5(v___y_13_, v___y_14_, v___y_15_, v___y_16_, v___y_17_, lean_box(0));
return v___x_19_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___lam__1_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2____boxed(lean_object* v___y_20_, lean_object* v___y_21_, lean_object* v___y_22_, lean_object* v___y_23_, lean_object* v___y_24_, lean_object* v___y_25_){
_start:
{
lean_object* v_res_26_; 
v_res_26_ = l___private_Lean_Parser_0__Lean_Parser_initFn___lam__1_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_(v___y_20_, v___y_21_, v___y_22_, v___y_23_, v___y_24_);
return v_res_26_;
}
}
static lean_object* _init_l___private_Lean_Parser_0__Lean_Parser_initFn___lam__2___closed__1_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_28_; lean_object* v___x_29_; 
v___x_28_ = ((lean_object*)(l___private_Lean_Parser_0__Lean_Parser_initFn___lam__2___closed__0_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_));
v___x_29_ = l_Lean_Parser_checkColGe(v___x_28_);
return v___x_29_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___lam__2_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_(lean_object* v___y_30_){
_start:
{
lean_object* v___x_31_; lean_object* v___x_32_; lean_object* v___x_33_; lean_object* v___x_34_; 
v___x_31_ = lean_obj_once(&l___private_Lean_Parser_0__Lean_Parser_initFn___lam__2___closed__1_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_, &l___private_Lean_Parser_0__Lean_Parser_initFn___lam__2___closed__1_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_0__Lean_Parser_initFn___lam__2___closed__1_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_);
v___x_32_ = l_Lean_Parser_andthen(v___x_31_, v___y_30_);
v___x_33_ = l_Lean_Parser_many(v___x_32_);
v___x_34_ = l_Lean_Parser_withPosition(v___x_33_);
return v___x_34_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___lam__3_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_(lean_object* v___y_35_){
_start:
{
lean_object* v___x_36_; lean_object* v___x_37_; lean_object* v___x_38_; lean_object* v___x_39_; 
v___x_36_ = lean_obj_once(&l___private_Lean_Parser_0__Lean_Parser_initFn___lam__2___closed__1_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_, &l___private_Lean_Parser_0__Lean_Parser_initFn___lam__2___closed__1_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_0__Lean_Parser_initFn___lam__2___closed__1_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_);
v___x_37_ = l_Lean_Parser_andthen(v___x_36_, v___y_35_);
v___x_38_ = l_Lean_Parser_many1(v___x_37_);
v___x_39_ = l_Lean_Parser_withPosition(v___x_38_);
return v___x_39_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___lam__4_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_(lean_object* v___y_40_, lean_object* v___y_41_, lean_object* v___y_42_, lean_object* v___y_43_){
_start:
{
lean_object* v___x_45_; 
v___x_45_ = l_Lean_PrettyPrinter_Parenthesizer_visitToken___redArg(v___y_41_);
return v___x_45_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___lam__4_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2____boxed(lean_object* v___y_46_, lean_object* v___y_47_, lean_object* v___y_48_, lean_object* v___y_49_, lean_object* v___y_50_){
_start:
{
lean_object* v_res_51_; 
v_res_51_ = l___private_Lean_Parser_0__Lean_Parser_initFn___lam__4_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_(v___y_46_, v___y_47_, v___y_48_, v___y_49_);
lean_dec(v___y_49_);
lean_dec_ref(v___y_48_);
lean_dec(v___y_47_);
lean_dec_ref(v___y_46_);
return v_res_51_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___lam__6_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_(lean_object* v___y_52_, lean_object* v___y_53_, lean_object* v___y_54_, lean_object* v___y_55_, lean_object* v___y_56_){
_start:
{
lean_object* v___x_58_; 
v___x_58_ = lean_apply_5(v___y_52_, v___y_53_, v___y_54_, v___y_55_, v___y_56_, lean_box(0));
return v___x_58_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___lam__6_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2____boxed(lean_object* v___y_59_, lean_object* v___y_60_, lean_object* v___y_61_, lean_object* v___y_62_, lean_object* v___y_63_, lean_object* v___y_64_){
_start:
{
lean_object* v_res_65_; 
v_res_65_ = l___private_Lean_Parser_0__Lean_Parser_initFn___lam__6_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_(v___y_59_, v___y_60_, v___y_61_, v___y_62_, v___y_63_);
return v_res_65_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn___lam__5_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_(lean_object* v_x_67_){
_start:
{
lean_object* v___x_68_; lean_object* v___x_69_; 
v___x_68_ = ((lean_object*)(l___private_Lean_Parser_0__Lean_Parser_initFn___lam__5___closed__0_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_));
v___x_69_ = l_Lean_Parser_notFollowedBy(v_x_67_, v___x_68_);
return v___x_69_;
}
}
static lean_object* _init_l___private_Lean_Parser_0__Lean_Parser_initFn___closed__50_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_156_; lean_object* v___x_157_; 
v___x_156_ = l_Lean_Parser_hexnum;
v___x_157_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_157_, 0, v___x_156_);
return v___x_157_;
}
}
static lean_object* _init_l___private_Lean_Parser_0__Lean_Parser_initFn___closed__52_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_160_; lean_object* v___x_161_; 
v___x_160_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_hexnum_formatter___boxed), 5, 0);
v___x_161_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_161_, 0, v___x_160_);
return v___x_161_;
}
}
static lean_object* _init_l___private_Lean_Parser_0__Lean_Parser_initFn___closed__99_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_245_; lean_object* v___x_246_; 
v___x_245_ = ((lean_object*)(l___private_Lean_Parser_0__Lean_Parser_initFn___closed__98_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_));
v___x_246_ = l_Lean_Parser_checkWsBefore(v___x_245_);
return v___x_246_;
}
}
static lean_object* _init_l___private_Lean_Parser_0__Lean_Parser_initFn___closed__100_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_247_; lean_object* v___x_248_; 
v___x_247_ = lean_obj_once(&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__99_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_, &l___private_Lean_Parser_0__Lean_Parser_initFn___closed__99_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_0__Lean_Parser_initFn___closed__99_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_);
v___x_248_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_248_, 0, v___x_247_);
return v___x_248_;
}
}
static lean_object* _init_l___private_Lean_Parser_0__Lean_Parser_initFn___closed__102_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_251_; lean_object* v___x_252_; 
v___x_251_ = lean_box(0);
v___x_252_ = l_unsafeCast___redArg(v___x_251_);
return v___x_252_;
}
}
static lean_object* _init_l___private_Lean_Parser_0__Lean_Parser_initFn___closed__157_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_(void){
_start:
{
uint8_t v___x_353_; lean_object* v___x_354_; lean_object* v___x_355_; lean_object* v___x_356_; 
v___x_353_ = 0;
v___x_354_ = lean_box(0);
v___x_355_ = lean_obj_once(&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__102_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_, &l___private_Lean_Parser_0__Lean_Parser_initFn___closed__102_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_0__Lean_Parser_initFn___closed__102_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_);
v___x_356_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_356_, 0, v___x_355_);
lean_ctor_set(v___x_356_, 1, v___x_354_);
lean_ctor_set_uint8(v___x_356_, sizeof(void*)*2, v___x_353_);
return v___x_356_;
}
}
static lean_object* _init_l___private_Lean_Parser_0__Lean_Parser_initFn___closed__161_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_(void){
_start:
{
uint8_t v___x_362_; lean_object* v___x_363_; lean_object* v___x_364_; lean_object* v___x_365_; 
v___x_362_ = 1;
v___x_363_ = ((lean_object*)(l___private_Lean_Parser_0__Lean_Parser_initFn___closed__160_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_));
v___x_364_ = lean_obj_once(&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__102_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_, &l___private_Lean_Parser_0__Lean_Parser_initFn___closed__102_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_0__Lean_Parser_initFn___closed__102_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_);
v___x_365_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_365_, 0, v___x_364_);
lean_ctor_set(v___x_365_, 1, v___x_363_);
lean_ctor_set_uint8(v___x_365_, sizeof(void*)*2, v___x_362_);
return v___x_365_;
}
}
static lean_object* _init_l___private_Lean_Parser_0__Lean_Parser_initFn___closed__176_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_392_; lean_object* v___x_393_; 
v___x_392_ = ((lean_object*)(l___private_Lean_Parser_0__Lean_Parser_initFn___closed__174_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_));
v___x_393_ = l_Lean_Parser_checkLineEq(v___x_392_);
return v___x_393_;
}
}
static lean_object* _init_l___private_Lean_Parser_0__Lean_Parser_initFn___closed__177_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_394_; lean_object* v___x_395_; 
v___x_394_ = lean_obj_once(&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__176_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_, &l___private_Lean_Parser_0__Lean_Parser_initFn___closed__176_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_0__Lean_Parser_initFn___closed__176_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_);
v___x_395_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_395_, 0, v___x_394_);
return v___x_395_;
}
}
static lean_object* _init_l___private_Lean_Parser_0__Lean_Parser_initFn___closed__179_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_398_; lean_object* v___x_399_; 
v___x_398_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_checkLineEq_formatter___boxed), 5, 0);
v___x_399_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_399_, 0, v___x_398_);
return v___x_399_;
}
}
static lean_object* _init_l___private_Lean_Parser_0__Lean_Parser_initFn___closed__180_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_400_; lean_object* v___x_401_; 
v___x_400_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_checkLineEq_parenthesizer___boxed), 5, 0);
v___x_401_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_401_, 0, v___x_400_);
return v___x_401_;
}
}
static lean_object* _init_l___private_Lean_Parser_0__Lean_Parser_initFn___closed__185_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_410_; lean_object* v___x_411_; 
v___x_410_ = ((lean_object*)(l___private_Lean_Parser_0__Lean_Parser_initFn___closed__183_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_));
v___x_411_ = l_Lean_Parser_checkColEq(v___x_410_);
return v___x_411_;
}
}
static lean_object* _init_l___private_Lean_Parser_0__Lean_Parser_initFn___closed__186_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_412_; lean_object* v___x_413_; 
v___x_412_ = lean_obj_once(&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__185_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_, &l___private_Lean_Parser_0__Lean_Parser_initFn___closed__185_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_0__Lean_Parser_initFn___closed__185_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_);
v___x_413_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_413_, 0, v___x_412_);
return v___x_413_;
}
}
static lean_object* _init_l___private_Lean_Parser_0__Lean_Parser_initFn___closed__188_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_416_; lean_object* v___x_417_; 
v___x_416_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_checkColEq_formatter___boxed), 5, 0);
v___x_417_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_417_, 0, v___x_416_);
return v___x_417_;
}
}
static lean_object* _init_l___private_Lean_Parser_0__Lean_Parser_initFn___closed__189_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_418_; lean_object* v___x_419_; 
v___x_418_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_checkColEq_parenthesizer___boxed), 5, 0);
v___x_419_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_419_, 0, v___x_418_);
return v___x_419_;
}
}
static lean_object* _init_l___private_Lean_Parser_0__Lean_Parser_initFn___closed__194_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_428_; lean_object* v___x_429_; 
v___x_428_ = ((lean_object*)(l___private_Lean_Parser_0__Lean_Parser_initFn___closed__192_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_));
v___x_429_ = l_Lean_Parser_checkColGe(v___x_428_);
return v___x_429_;
}
}
static lean_object* _init_l___private_Lean_Parser_0__Lean_Parser_initFn___closed__195_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_430_; lean_object* v___x_431_; 
v___x_430_ = lean_obj_once(&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__194_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_, &l___private_Lean_Parser_0__Lean_Parser_initFn___closed__194_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_0__Lean_Parser_initFn___closed__194_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_);
v___x_431_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_431_, 0, v___x_430_);
return v___x_431_;
}
}
static lean_object* _init_l___private_Lean_Parser_0__Lean_Parser_initFn___closed__197_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_434_; lean_object* v___x_435_; 
v___x_434_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_checkColGe_formatter___boxed), 5, 0);
v___x_435_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_435_, 0, v___x_434_);
return v___x_435_;
}
}
static lean_object* _init_l___private_Lean_Parser_0__Lean_Parser_initFn___closed__198_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_436_; lean_object* v___x_437_; 
v___x_436_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_checkColGe_parenthesizer___boxed), 5, 0);
v___x_437_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_437_, 0, v___x_436_);
return v___x_437_;
}
}
static lean_object* _init_l___private_Lean_Parser_0__Lean_Parser_initFn___closed__203_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_446_; lean_object* v___x_447_; 
v___x_446_ = ((lean_object*)(l___private_Lean_Parser_0__Lean_Parser_initFn___closed__201_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_));
v___x_447_ = l_Lean_Parser_checkColGt(v___x_446_);
return v___x_447_;
}
}
static lean_object* _init_l___private_Lean_Parser_0__Lean_Parser_initFn___closed__204_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_448_; lean_object* v___x_449_; 
v___x_448_ = lean_obj_once(&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__203_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_, &l___private_Lean_Parser_0__Lean_Parser_initFn___closed__203_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_0__Lean_Parser_initFn___closed__203_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_);
v___x_449_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_449_, 0, v___x_448_);
return v___x_449_;
}
}
static lean_object* _init_l___private_Lean_Parser_0__Lean_Parser_initFn___closed__206_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_452_; lean_object* v___x_453_; 
v___x_452_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_checkColGt_formatter___boxed), 5, 0);
v___x_453_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_453_, 0, v___x_452_);
return v___x_453_;
}
}
static lean_object* _init_l___private_Lean_Parser_0__Lean_Parser_initFn___closed__207_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_454_; lean_object* v___x_455_; 
v___x_454_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_checkColGt_parenthesizer___boxed), 5, 0);
v___x_455_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_455_, 0, v___x_454_);
return v___x_455_;
}
}
static lean_object* _init_l___private_Lean_Parser_0__Lean_Parser_initFn___closed__211_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_463_; lean_object* v___x_464_; 
v___x_463_ = l_Lean_Parser_hygieneInfo;
v___x_464_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_464_, 0, v___x_463_);
return v___x_464_;
}
}
static lean_object* _init_l___private_Lean_Parser_0__Lean_Parser_initFn___closed__220_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_480_; lean_object* v___x_481_; 
v___x_480_ = l_Lean_Parser_rawIdent;
v___x_481_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_481_, 0, v___x_480_);
return v___x_481_;
}
}
static lean_object* _init_l___private_Lean_Parser_0__Lean_Parser_initFn___closed__228_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_495_; lean_object* v___x_496_; 
v___x_495_ = l_Lean_Parser_ident;
v___x_496_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_496_, 0, v___x_495_);
return v___x_496_;
}
}
static lean_object* _init_l___private_Lean_Parser_0__Lean_Parser_initFn___closed__238_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_513_; lean_object* v___x_514_; 
v___x_513_ = l_Lean_Parser_scientificLit;
v___x_514_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_514_, 0, v___x_513_);
return v___x_514_;
}
}
static lean_object* _init_l___private_Lean_Parser_0__Lean_Parser_initFn___closed__248_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_531_; lean_object* v___x_532_; 
v___x_531_ = l_Lean_Parser_nameLit;
v___x_532_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_532_, 0, v___x_531_);
return v___x_532_;
}
}
static lean_object* _init_l___private_Lean_Parser_0__Lean_Parser_initFn___closed__258_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_549_; lean_object* v___x_550_; 
v___x_549_ = l_Lean_Parser_charLit;
v___x_550_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_550_, 0, v___x_549_);
return v___x_550_;
}
}
static lean_object* _init_l___private_Lean_Parser_0__Lean_Parser_initFn___closed__268_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_567_; lean_object* v___x_568_; 
v___x_567_ = l_Lean_Parser_strLit;
v___x_568_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_568_, 0, v___x_567_);
return v___x_568_;
}
}
static lean_object* _init_l___private_Lean_Parser_0__Lean_Parser_initFn___closed__278_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_585_; lean_object* v___x_586_; 
v___x_585_ = l_Lean_Parser_numLit;
v___x_586_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_586_, 0, v___x_585_);
return v___x_586_;
}
}
static lean_object* _init_l___private_Lean_Parser_0__Lean_Parser_initFn___closed__281_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_(void){
_start:
{
uint8_t v___x_591_; lean_object* v___x_592_; lean_object* v___x_593_; lean_object* v___x_594_; 
v___x_591_ = 1;
v___x_592_ = ((lean_object*)(l___private_Lean_Parser_0__Lean_Parser_initFn___closed__280_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_));
v___x_593_ = lean_obj_once(&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__102_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_, &l___private_Lean_Parser_0__Lean_Parser_initFn___closed__102_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_0__Lean_Parser_initFn___closed__102_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_);
v___x_594_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_594_, 0, v___x_593_);
lean_ctor_set(v___x_594_, 1, v___x_592_);
lean_ctor_set_uint8(v___x_594_, sizeof(void*)*2, v___x_591_);
return v___x_594_;
}
}
static lean_object* _init_l___private_Lean_Parser_0__Lean_Parser_initFn___closed__291_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_610_; lean_object* v___x_611_; 
v___x_610_ = ((lean_object*)(l___private_Lean_Parser_0__Lean_Parser_initFn___closed__290_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_));
v___x_611_ = l_Lean_Parser_checkLinebreakBefore(v___x_610_);
return v___x_611_;
}
}
static lean_object* _init_l___private_Lean_Parser_0__Lean_Parser_initFn___closed__292_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_612_; lean_object* v___x_613_; 
v___x_612_ = lean_obj_once(&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__291_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_, &l___private_Lean_Parser_0__Lean_Parser_initFn___closed__291_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_0__Lean_Parser_initFn___closed__291_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_);
v___x_613_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_613_, 0, v___x_612_);
return v___x_613_;
}
}
static lean_object* _init_l___private_Lean_Parser_0__Lean_Parser_initFn___closed__294_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_616_; lean_object* v___x_617_; 
v___x_616_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_checkLinebreakBefore_formatter___boxed), 5, 0);
v___x_617_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_617_, 0, v___x_616_);
return v___x_617_;
}
}
static lean_object* _init_l___private_Lean_Parser_0__Lean_Parser_initFn___closed__295_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_618_; lean_object* v___x_619_; 
v___x_618_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_checkLinebreakBefore_parenthesizer___boxed), 5, 0);
v___x_619_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_619_, 0, v___x_618_);
return v___x_619_;
}
}
static lean_object* _init_l___private_Lean_Parser_0__Lean_Parser_initFn___closed__301_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_629_; lean_object* v___x_630_; 
v___x_629_ = ((lean_object*)(l___private_Lean_Parser_0__Lean_Parser_initFn___closed__300_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_));
v___x_630_ = l_Lean_Parser_checkNoWsBefore(v___x_629_);
return v___x_630_;
}
}
static lean_object* _init_l___private_Lean_Parser_0__Lean_Parser_initFn___closed__302_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_631_; lean_object* v___x_632_; 
v___x_631_ = lean_obj_once(&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__301_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_, &l___private_Lean_Parser_0__Lean_Parser_initFn___closed__301_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_0__Lean_Parser_initFn___closed__301_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_);
v___x_632_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_632_, 0, v___x_631_);
return v___x_632_;
}
}
static lean_object* _init_l___private_Lean_Parser_0__Lean_Parser_initFn___closed__305_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_637_; lean_object* v___x_638_; 
v___x_637_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_checkNoWsBefore_parenthesizer___boxed), 5, 0);
v___x_638_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_638_, 0, v___x_637_);
return v___x_638_;
}
}
static lean_object* _init_l___private_Lean_Parser_0__Lean_Parser_initFn___closed__306_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_639_; lean_object* v___x_640_; 
v___x_639_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_checkWsBefore_formatter___boxed), 5, 0);
v___x_640_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_640_, 0, v___x_639_);
return v___x_640_;
}
}
static lean_object* _init_l___private_Lean_Parser_0__Lean_Parser_initFn___closed__307_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_641_; lean_object* v___x_642_; 
v___x_641_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_checkWsBefore_parenthesizer___boxed), 5, 0);
v___x_642_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_642_, 0, v___x_641_);
return v___x_642_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_644_; lean_object* v___y_646_; lean_object* v___y_647_; lean_object* v___y_658_; lean_object* v___y_659_; lean_object* v___y_670_; lean_object* v___y_671_; lean_object* v___y_672_; lean_object* v___y_683_; lean_object* v___y_684_; lean_object* v___y_685_; lean_object* v___y_696_; lean_object* v___y_697_; lean_object* v___y_698_; lean_object* v___y_709_; lean_object* v___y_710_; lean_object* v___y_711_; lean_object* v___y_722_; lean_object* v___y_723_; lean_object* v___y_724_; lean_object* v___y_735_; lean_object* v___y_736_; lean_object* v___y_737_; lean_object* v___y_748_; lean_object* v___y_749_; lean_object* v___y_750_; lean_object* v___x_760_; lean_object* v___x_761_; lean_object* v___x_762_; lean_object* v___x_763_; uint8_t v___y_765_; lean_object* v___y_766_; lean_object* v___y_767_; lean_object* v___y_768_; lean_object* v___y_769_; uint8_t v___y_781_; lean_object* v___y_782_; lean_object* v___y_783_; lean_object* v___y_784_; lean_object* v___y_785_; uint8_t v___y_796_; lean_object* v___y_797_; lean_object* v___y_798_; lean_object* v___y_799_; lean_object* v___y_800_; uint8_t v___y_811_; lean_object* v___y_812_; lean_object* v___y_813_; lean_object* v___y_814_; lean_object* v___y_815_; uint8_t v___y_826_; lean_object* v___y_827_; lean_object* v___y_828_; lean_object* v___y_829_; lean_object* v___y_830_; lean_object* v___y_841_; lean_object* v___y_842_; lean_object* v___y_843_; lean_object* v___x_855_; lean_object* v___y_857_; lean_object* v___y_858_; lean_object* v___y_859_; lean_object* v___y_870_; lean_object* v___y_871_; lean_object* v___y_872_; lean_object* v___y_883_; lean_object* v___y_884_; lean_object* v___y_885_; lean_object* v___y_896_; lean_object* v___y_897_; lean_object* v___y_898_; lean_object* v___y_909_; lean_object* v___y_910_; lean_object* v___y_911_; lean_object* v___y_922_; lean_object* v___y_923_; lean_object* v___y_924_; lean_object* v___y_935_; lean_object* v___y_936_; lean_object* v___y_937_; lean_object* v___y_938_; lean_object* v___y_948_; lean_object* v___y_949_; lean_object* v___y_950_; lean_object* v___y_961_; lean_object* v___y_962_; lean_object* v___y_963_; lean_object* v___y_974_; lean_object* v___y_975_; lean_object* v___y_976_; lean_object* v___y_987_; lean_object* v___y_988_; lean_object* v___y_989_; lean_object* v___y_1000_; lean_object* v___y_1001_; lean_object* v___y_1002_; lean_object* v___y_1013_; lean_object* v___y_1026_; lean_object* v___y_1037_; lean_object* v___x_1047_; 
v___x_644_ = ((lean_object*)(l___private_Lean_Parser_0__Lean_Parser_initFn___closed__8_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_));
v___x_760_ = ((lean_object*)(l___private_Lean_Parser_0__Lean_Parser_initFn___closed__97_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_));
v___x_761_ = lean_obj_once(&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__100_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_, &l___private_Lean_Parser_0__Lean_Parser_initFn___closed__100_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_0__Lean_Parser_initFn___closed__100_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_);
v___x_762_ = ((lean_object*)(l___private_Lean_Parser_0__Lean_Parser_initFn___closed__101_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_));
v___x_763_ = lean_obj_once(&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__102_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_, &l___private_Lean_Parser_0__Lean_Parser_initFn___closed__102_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_0__Lean_Parser_initFn___closed__102_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_);
v___x_855_ = lean_obj_once(&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__161_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_, &l___private_Lean_Parser_0__Lean_Parser_initFn___closed__161_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_0__Lean_Parser_initFn___closed__161_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_);
v___x_1047_ = l_Lean_Parser_registerAlias(v___x_644_, v___x_760_, v___x_761_, v___x_762_, v___x_855_);
if (lean_obj_tag(v___x_1047_) == 0)
{
lean_object* v___x_1048_; lean_object* v___x_1049_; 
lean_dec_ref_known(v___x_1047_, 1);
v___x_1048_ = lean_obj_once(&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__306_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_, &l___private_Lean_Parser_0__Lean_Parser_initFn___closed__306_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_0__Lean_Parser_initFn___closed__306_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_);
v___x_1049_ = l_Lean_PrettyPrinter_Formatter_registerAlias(v___x_644_, v___x_1048_);
if (lean_obj_tag(v___x_1049_) == 0)
{
lean_object* v___x_1050_; lean_object* v___x_1051_; 
lean_dec_ref_known(v___x_1049_, 1);
v___x_1050_ = lean_obj_once(&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__307_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_, &l___private_Lean_Parser_0__Lean_Parser_initFn___closed__307_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_0__Lean_Parser_initFn___closed__307_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_);
v___x_1051_ = l_Lean_PrettyPrinter_Parenthesizer_registerAlias(v___x_644_, v___x_1050_);
v___y_1037_ = v___x_1051_;
goto v___jp_1036_;
}
else
{
v___y_1037_ = v___x_1049_;
goto v___jp_1036_;
}
}
else
{
v___y_1037_ = v___x_1047_;
goto v___jp_1036_;
}
v___jp_645_:
{
if (lean_obj_tag(v___y_647_) == 0)
{
lean_object* v___x_648_; lean_object* v___x_649_; lean_object* v___x_650_; lean_object* v___x_651_; lean_object* v___x_652_; 
lean_dec_ref_known(v___y_647_, 1);
v___x_648_ = ((lean_object*)(l___private_Lean_Parser_0__Lean_Parser_initFn___closed__12_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_));
v___x_649_ = ((lean_object*)(l___private_Lean_Parser_0__Lean_Parser_initFn___closed__13_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_));
v___x_650_ = ((lean_object*)(l___private_Lean_Parser_0__Lean_Parser_initFn___closed__14_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_));
v___x_651_ = lean_box(0);
v___x_652_ = l_Lean_Parser_registerAlias(v___x_648_, v___x_649_, v___x_650_, v___x_651_, v___y_646_);
if (lean_obj_tag(v___x_652_) == 0)
{
lean_object* v___x_653_; lean_object* v___x_654_; 
lean_dec_ref_known(v___x_652_, 1);
v___x_653_ = ((lean_object*)(l___private_Lean_Parser_0__Lean_Parser_initFn___closed__16_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_));
v___x_654_ = l_Lean_PrettyPrinter_Parenthesizer_registerAlias(v___x_648_, v___x_653_);
if (lean_obj_tag(v___x_654_) == 0)
{
lean_object* v___x_655_; lean_object* v___x_656_; 
lean_dec_ref_known(v___x_654_, 1);
v___x_655_ = ((lean_object*)(l___private_Lean_Parser_0__Lean_Parser_initFn___closed__18_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_));
v___x_656_ = l_Lean_PrettyPrinter_Formatter_registerAlias(v___x_648_, v___x_655_);
return v___x_656_;
}
else
{
return v___x_654_;
}
}
else
{
return v___x_652_;
}
}
else
{
lean_dec_ref(v___y_646_);
return v___y_647_;
}
}
v___jp_657_:
{
if (lean_obj_tag(v___y_659_) == 0)
{
lean_object* v___x_660_; lean_object* v___x_661_; lean_object* v___x_662_; lean_object* v___x_663_; lean_object* v___x_664_; 
lean_dec_ref_known(v___y_659_, 1);
v___x_660_ = ((lean_object*)(l___private_Lean_Parser_0__Lean_Parser_initFn___closed__20_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_));
v___x_661_ = ((lean_object*)(l___private_Lean_Parser_0__Lean_Parser_initFn___closed__21_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_));
v___x_662_ = ((lean_object*)(l___private_Lean_Parser_0__Lean_Parser_initFn___closed__23_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_));
v___x_663_ = ((lean_object*)(l___private_Lean_Parser_0__Lean_Parser_initFn___closed__24_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_));
lean_inc_ref(v___y_658_);
v___x_664_ = l_Lean_Parser_registerAlias(v___x_660_, v___x_661_, v___x_662_, v___x_663_, v___y_658_);
if (lean_obj_tag(v___x_664_) == 0)
{
lean_object* v___x_665_; lean_object* v___x_666_; 
lean_dec_ref_known(v___x_664_, 1);
v___x_665_ = ((lean_object*)(l___private_Lean_Parser_0__Lean_Parser_initFn___closed__25_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_));
v___x_666_ = l_Lean_PrettyPrinter_Formatter_registerAlias(v___x_660_, v___x_665_);
if (lean_obj_tag(v___x_666_) == 0)
{
lean_object* v___x_667_; lean_object* v___x_668_; 
lean_dec_ref_known(v___x_666_, 1);
v___x_667_ = ((lean_object*)(l___private_Lean_Parser_0__Lean_Parser_initFn___closed__26_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_));
v___x_668_ = l_Lean_PrettyPrinter_Parenthesizer_registerAlias(v___x_660_, v___x_667_);
v___y_646_ = v___y_658_;
v___y_647_ = v___x_668_;
goto v___jp_645_;
}
else
{
v___y_646_ = v___y_658_;
v___y_647_ = v___x_666_;
goto v___jp_645_;
}
}
else
{
v___y_646_ = v___y_658_;
v___y_647_ = v___x_664_;
goto v___jp_645_;
}
}
else
{
lean_dec_ref(v___y_658_);
return v___y_659_;
}
}
v___jp_669_:
{
if (lean_obj_tag(v___y_672_) == 0)
{
lean_object* v___x_673_; lean_object* v___x_674_; lean_object* v___x_675_; lean_object* v___x_676_; lean_object* v___x_677_; 
lean_dec_ref_known(v___y_672_, 1);
v___x_673_ = ((lean_object*)(l___private_Lean_Parser_0__Lean_Parser_initFn___closed__28_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_));
v___x_674_ = ((lean_object*)(l___private_Lean_Parser_0__Lean_Parser_initFn___closed__29_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_));
v___x_675_ = ((lean_object*)(l___private_Lean_Parser_0__Lean_Parser_initFn___closed__31_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_));
v___x_676_ = ((lean_object*)(l___private_Lean_Parser_0__Lean_Parser_initFn___closed__32_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_));
v___x_677_ = l_Lean_Parser_registerAlias(v___x_673_, v___x_674_, v___x_675_, v___x_676_, v___y_671_);
if (lean_obj_tag(v___x_677_) == 0)
{
lean_object* v___x_678_; lean_object* v___x_679_; 
lean_dec_ref_known(v___x_677_, 1);
v___x_678_ = ((lean_object*)(l___private_Lean_Parser_0__Lean_Parser_initFn___closed__34_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_));
v___x_679_ = l_Lean_PrettyPrinter_Formatter_registerAlias(v___x_673_, v___x_678_);
if (lean_obj_tag(v___x_679_) == 0)
{
lean_object* v___x_680_; lean_object* v___x_681_; 
lean_dec_ref_known(v___x_679_, 1);
v___x_680_ = ((lean_object*)(l___private_Lean_Parser_0__Lean_Parser_initFn___closed__36_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_));
v___x_681_ = l_Lean_PrettyPrinter_Parenthesizer_registerAlias(v___x_673_, v___x_680_);
v___y_658_ = v___y_670_;
v___y_659_ = v___x_681_;
goto v___jp_657_;
}
else
{
v___y_658_ = v___y_670_;
v___y_659_ = v___x_679_;
goto v___jp_657_;
}
}
else
{
v___y_658_ = v___y_670_;
v___y_659_ = v___x_677_;
goto v___jp_657_;
}
}
else
{
lean_dec_ref(v___y_671_);
lean_dec_ref(v___y_670_);
return v___y_672_;
}
}
v___jp_682_:
{
if (lean_obj_tag(v___y_685_) == 0)
{
lean_object* v___x_686_; lean_object* v___x_687_; lean_object* v___x_688_; lean_object* v___x_689_; lean_object* v___x_690_; 
lean_dec_ref_known(v___y_685_, 1);
v___x_686_ = ((lean_object*)(l___private_Lean_Parser_0__Lean_Parser_initFn___closed__38_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_));
v___x_687_ = ((lean_object*)(l___private_Lean_Parser_0__Lean_Parser_initFn___closed__39_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_));
v___x_688_ = ((lean_object*)(l___private_Lean_Parser_0__Lean_Parser_initFn___closed__41_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_));
v___x_689_ = ((lean_object*)(l___private_Lean_Parser_0__Lean_Parser_initFn___closed__42_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_));
lean_inc_ref(v___y_683_);
v___x_690_ = l_Lean_Parser_registerAlias(v___x_686_, v___x_687_, v___x_688_, v___x_689_, v___y_683_);
if (lean_obj_tag(v___x_690_) == 0)
{
lean_object* v___x_691_; lean_object* v___x_692_; 
lean_dec_ref_known(v___x_690_, 1);
v___x_691_ = ((lean_object*)(l___private_Lean_Parser_0__Lean_Parser_initFn___closed__44_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_));
v___x_692_ = l_Lean_PrettyPrinter_Formatter_registerAlias(v___x_686_, v___x_691_);
if (lean_obj_tag(v___x_692_) == 0)
{
lean_object* v___x_693_; lean_object* v___x_694_; 
lean_dec_ref_known(v___x_692_, 1);
v___x_693_ = ((lean_object*)(l___private_Lean_Parser_0__Lean_Parser_initFn___closed__46_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_));
v___x_694_ = l_Lean_PrettyPrinter_Parenthesizer_registerAlias(v___x_686_, v___x_693_);
v___y_670_ = v___y_683_;
v___y_671_ = v___y_684_;
v___y_672_ = v___x_694_;
goto v___jp_669_;
}
else
{
v___y_670_ = v___y_683_;
v___y_671_ = v___y_684_;
v___y_672_ = v___x_692_;
goto v___jp_669_;
}
}
else
{
v___y_670_ = v___y_683_;
v___y_671_ = v___y_684_;
v___y_672_ = v___x_690_;
goto v___jp_669_;
}
}
else
{
lean_dec_ref(v___y_684_);
lean_dec_ref(v___y_683_);
return v___y_685_;
}
}
v___jp_695_:
{
if (lean_obj_tag(v___y_698_) == 0)
{
lean_object* v___x_699_; lean_object* v___x_700_; lean_object* v___x_701_; lean_object* v___x_702_; lean_object* v___x_703_; 
lean_dec_ref_known(v___y_698_, 1);
v___x_699_ = ((lean_object*)(l___private_Lean_Parser_0__Lean_Parser_initFn___closed__48_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_));
v___x_700_ = ((lean_object*)(l___private_Lean_Parser_0__Lean_Parser_initFn___closed__49_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_));
v___x_701_ = lean_obj_once(&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__50_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_, &l___private_Lean_Parser_0__Lean_Parser_initFn___closed__50_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_0__Lean_Parser_initFn___closed__50_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_);
v___x_702_ = ((lean_object*)(l___private_Lean_Parser_0__Lean_Parser_initFn___closed__51_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_));
lean_inc_ref(v___y_696_);
v___x_703_ = l_Lean_Parser_registerAlias(v___x_699_, v___x_700_, v___x_701_, v___x_702_, v___y_696_);
if (lean_obj_tag(v___x_703_) == 0)
{
lean_object* v___x_704_; lean_object* v___x_705_; 
lean_dec_ref_known(v___x_703_, 1);
v___x_704_ = lean_obj_once(&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__52_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_, &l___private_Lean_Parser_0__Lean_Parser_initFn___closed__52_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_0__Lean_Parser_initFn___closed__52_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_);
v___x_705_ = l_Lean_PrettyPrinter_Formatter_registerAlias(v___x_699_, v___x_704_);
if (lean_obj_tag(v___x_705_) == 0)
{
lean_object* v___x_706_; lean_object* v___x_707_; 
lean_dec_ref_known(v___x_705_, 1);
v___x_706_ = ((lean_object*)(l___private_Lean_Parser_0__Lean_Parser_initFn___closed__53_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_));
v___x_707_ = l_Lean_PrettyPrinter_Parenthesizer_registerAlias(v___x_699_, v___x_706_);
v___y_683_ = v___y_696_;
v___y_684_ = v___y_697_;
v___y_685_ = v___x_707_;
goto v___jp_682_;
}
else
{
v___y_683_ = v___y_696_;
v___y_684_ = v___y_697_;
v___y_685_ = v___x_705_;
goto v___jp_682_;
}
}
else
{
v___y_683_ = v___y_696_;
v___y_684_ = v___y_697_;
v___y_685_ = v___x_703_;
goto v___jp_682_;
}
}
else
{
lean_dec_ref(v___y_697_);
lean_dec_ref(v___y_696_);
return v___y_698_;
}
}
v___jp_708_:
{
if (lean_obj_tag(v___y_711_) == 0)
{
lean_object* v___x_712_; lean_object* v___x_713_; lean_object* v___x_714_; lean_object* v___x_715_; lean_object* v___x_716_; 
lean_dec_ref_known(v___y_711_, 1);
v___x_712_ = ((lean_object*)(l___private_Lean_Parser_0__Lean_Parser_initFn___closed__55_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_));
v___x_713_ = ((lean_object*)(l___private_Lean_Parser_0__Lean_Parser_initFn___closed__56_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_));
v___x_714_ = ((lean_object*)(l___private_Lean_Parser_0__Lean_Parser_initFn___closed__58_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_));
v___x_715_ = ((lean_object*)(l___private_Lean_Parser_0__Lean_Parser_initFn___closed__61_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_));
lean_inc_ref(v___y_709_);
v___x_716_ = l_Lean_Parser_registerAlias(v___x_712_, v___x_713_, v___x_714_, v___x_715_, v___y_709_);
if (lean_obj_tag(v___x_716_) == 0)
{
lean_object* v___x_717_; lean_object* v___x_718_; 
lean_dec_ref_known(v___x_716_, 1);
v___x_717_ = ((lean_object*)(l___private_Lean_Parser_0__Lean_Parser_initFn___closed__63_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_));
v___x_718_ = l_Lean_PrettyPrinter_Formatter_registerAlias(v___x_712_, v___x_717_);
if (lean_obj_tag(v___x_718_) == 0)
{
lean_object* v___x_719_; lean_object* v___x_720_; 
lean_dec_ref_known(v___x_718_, 1);
v___x_719_ = ((lean_object*)(l___private_Lean_Parser_0__Lean_Parser_initFn___closed__65_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_));
v___x_720_ = l_Lean_PrettyPrinter_Parenthesizer_registerAlias(v___x_712_, v___x_719_);
v___y_696_ = v___y_709_;
v___y_697_ = v___y_710_;
v___y_698_ = v___x_720_;
goto v___jp_695_;
}
else
{
v___y_696_ = v___y_709_;
v___y_697_ = v___y_710_;
v___y_698_ = v___x_718_;
goto v___jp_695_;
}
}
else
{
v___y_696_ = v___y_709_;
v___y_697_ = v___y_710_;
v___y_698_ = v___x_716_;
goto v___jp_695_;
}
}
else
{
lean_dec_ref(v___y_710_);
lean_dec_ref(v___y_709_);
return v___y_711_;
}
}
v___jp_721_:
{
if (lean_obj_tag(v___y_724_) == 0)
{
lean_object* v___x_725_; lean_object* v___x_726_; lean_object* v___x_727_; lean_object* v___x_728_; lean_object* v___x_729_; 
lean_dec_ref_known(v___y_724_, 1);
v___x_725_ = ((lean_object*)(l___private_Lean_Parser_0__Lean_Parser_initFn___closed__67_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_));
v___x_726_ = ((lean_object*)(l___private_Lean_Parser_0__Lean_Parser_initFn___closed__68_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_));
v___x_727_ = ((lean_object*)(l___private_Lean_Parser_0__Lean_Parser_initFn___closed__70_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_));
v___x_728_ = ((lean_object*)(l___private_Lean_Parser_0__Lean_Parser_initFn___closed__71_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_));
lean_inc_ref(v___y_723_);
v___x_729_ = l_Lean_Parser_registerAlias(v___x_725_, v___x_726_, v___x_727_, v___x_728_, v___y_723_);
if (lean_obj_tag(v___x_729_) == 0)
{
lean_object* v___x_730_; lean_object* v___x_731_; 
lean_dec_ref_known(v___x_729_, 1);
v___x_730_ = ((lean_object*)(l___private_Lean_Parser_0__Lean_Parser_initFn___closed__73_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_));
v___x_731_ = l_Lean_PrettyPrinter_Formatter_registerAlias(v___x_725_, v___x_730_);
if (lean_obj_tag(v___x_731_) == 0)
{
lean_object* v___x_732_; lean_object* v___x_733_; 
lean_dec_ref_known(v___x_731_, 1);
v___x_732_ = ((lean_object*)(l___private_Lean_Parser_0__Lean_Parser_initFn___closed__75_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_));
v___x_733_ = l_Lean_PrettyPrinter_Parenthesizer_registerAlias(v___x_725_, v___x_732_);
v___y_709_ = v___y_722_;
v___y_710_ = v___y_723_;
v___y_711_ = v___x_733_;
goto v___jp_708_;
}
else
{
v___y_709_ = v___y_722_;
v___y_710_ = v___y_723_;
v___y_711_ = v___x_731_;
goto v___jp_708_;
}
}
else
{
v___y_709_ = v___y_722_;
v___y_710_ = v___y_723_;
v___y_711_ = v___x_729_;
goto v___jp_708_;
}
}
else
{
lean_dec_ref(v___y_723_);
lean_dec_ref(v___y_722_);
return v___y_724_;
}
}
v___jp_734_:
{
if (lean_obj_tag(v___y_737_) == 0)
{
lean_object* v___x_738_; lean_object* v___x_739_; lean_object* v___x_740_; lean_object* v___x_741_; lean_object* v___x_742_; 
lean_dec_ref_known(v___y_737_, 1);
v___x_738_ = ((lean_object*)(l___private_Lean_Parser_0__Lean_Parser_initFn___closed__77_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_));
v___x_739_ = ((lean_object*)(l___private_Lean_Parser_0__Lean_Parser_initFn___closed__78_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_));
v___x_740_ = ((lean_object*)(l___private_Lean_Parser_0__Lean_Parser_initFn___closed__80_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_));
v___x_741_ = ((lean_object*)(l___private_Lean_Parser_0__Lean_Parser_initFn___closed__81_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_));
lean_inc_ref(v___y_736_);
v___x_742_ = l_Lean_Parser_registerAlias(v___x_738_, v___x_739_, v___x_740_, v___x_741_, v___y_736_);
if (lean_obj_tag(v___x_742_) == 0)
{
lean_object* v___x_743_; lean_object* v___x_744_; 
lean_dec_ref_known(v___x_742_, 1);
v___x_743_ = ((lean_object*)(l___private_Lean_Parser_0__Lean_Parser_initFn___closed__83_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_));
v___x_744_ = l_Lean_PrettyPrinter_Formatter_registerAlias(v___x_738_, v___x_743_);
if (lean_obj_tag(v___x_744_) == 0)
{
lean_object* v___x_745_; lean_object* v___x_746_; 
lean_dec_ref_known(v___x_744_, 1);
v___x_745_ = ((lean_object*)(l___private_Lean_Parser_0__Lean_Parser_initFn___closed__85_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_));
v___x_746_ = l_Lean_PrettyPrinter_Parenthesizer_registerAlias(v___x_738_, v___x_745_);
v___y_722_ = v___y_735_;
v___y_723_ = v___y_736_;
v___y_724_ = v___x_746_;
goto v___jp_721_;
}
else
{
v___y_722_ = v___y_735_;
v___y_723_ = v___y_736_;
v___y_724_ = v___x_744_;
goto v___jp_721_;
}
}
else
{
v___y_722_ = v___y_735_;
v___y_723_ = v___y_736_;
v___y_724_ = v___x_742_;
goto v___jp_721_;
}
}
else
{
lean_dec_ref(v___y_736_);
lean_dec_ref(v___y_735_);
return v___y_737_;
}
}
v___jp_747_:
{
if (lean_obj_tag(v___y_750_) == 0)
{
lean_object* v___x_751_; lean_object* v___x_752_; lean_object* v___x_753_; lean_object* v___x_754_; lean_object* v___x_755_; 
lean_dec_ref_known(v___y_750_, 1);
v___x_751_ = ((lean_object*)(l___private_Lean_Parser_0__Lean_Parser_initFn___closed__87_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_));
v___x_752_ = ((lean_object*)(l___private_Lean_Parser_0__Lean_Parser_initFn___closed__88_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_));
v___x_753_ = ((lean_object*)(l___private_Lean_Parser_0__Lean_Parser_initFn___closed__90_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_));
v___x_754_ = ((lean_object*)(l___private_Lean_Parser_0__Lean_Parser_initFn___closed__91_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_));
lean_inc_ref(v___y_749_);
v___x_755_ = l_Lean_Parser_registerAlias(v___x_751_, v___x_752_, v___x_753_, v___x_754_, v___y_749_);
if (lean_obj_tag(v___x_755_) == 0)
{
lean_object* v___x_756_; lean_object* v___x_757_; 
lean_dec_ref_known(v___x_755_, 1);
v___x_756_ = ((lean_object*)(l___private_Lean_Parser_0__Lean_Parser_initFn___closed__93_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_));
v___x_757_ = l_Lean_PrettyPrinter_Formatter_registerAlias(v___x_751_, v___x_756_);
if (lean_obj_tag(v___x_757_) == 0)
{
lean_object* v___x_758_; lean_object* v___x_759_; 
lean_dec_ref_known(v___x_757_, 1);
v___x_758_ = ((lean_object*)(l___private_Lean_Parser_0__Lean_Parser_initFn___closed__95_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_));
v___x_759_ = l_Lean_PrettyPrinter_Parenthesizer_registerAlias(v___x_751_, v___x_758_);
v___y_735_ = v___y_748_;
v___y_736_ = v___y_749_;
v___y_737_ = v___x_759_;
goto v___jp_734_;
}
else
{
v___y_735_ = v___y_748_;
v___y_736_ = v___y_749_;
v___y_737_ = v___x_757_;
goto v___jp_734_;
}
}
else
{
v___y_735_ = v___y_748_;
v___y_736_ = v___y_749_;
v___y_737_ = v___x_755_;
goto v___jp_734_;
}
}
else
{
lean_dec_ref(v___y_749_);
lean_dec_ref(v___y_748_);
return v___y_750_;
}
}
v___jp_764_:
{
if (lean_obj_tag(v___y_769_) == 0)
{
lean_object* v___x_770_; lean_object* v___x_771_; lean_object* v___x_772_; lean_object* v___x_773_; lean_object* v___x_774_; lean_object* v___x_775_; 
lean_dec_ref_known(v___y_769_, 1);
v___x_770_ = ((lean_object*)(l___private_Lean_Parser_0__Lean_Parser_initFn___closed__104_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_));
v___x_771_ = ((lean_object*)(l___private_Lean_Parser_0__Lean_Parser_initFn___closed__105_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_));
v___x_772_ = ((lean_object*)(l___private_Lean_Parser_0__Lean_Parser_initFn___closed__107_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_));
v___x_773_ = ((lean_object*)(l___private_Lean_Parser_0__Lean_Parser_initFn___closed__108_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_));
lean_inc(v___y_768_);
v___x_774_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_774_, 0, v___x_763_);
lean_ctor_set(v___x_774_, 1, v___y_768_);
lean_ctor_set_uint8(v___x_774_, sizeof(void*)*2, v___y_765_);
v___x_775_ = l_Lean_Parser_registerAlias(v___x_770_, v___x_771_, v___x_772_, v___x_773_, v___x_774_);
if (lean_obj_tag(v___x_775_) == 0)
{
lean_object* v___x_776_; lean_object* v___x_777_; 
lean_dec_ref_known(v___x_775_, 1);
v___x_776_ = ((lean_object*)(l___private_Lean_Parser_0__Lean_Parser_initFn___closed__110_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_));
v___x_777_ = l_Lean_PrettyPrinter_Formatter_registerAlias(v___x_770_, v___x_776_);
if (lean_obj_tag(v___x_777_) == 0)
{
lean_object* v___x_778_; lean_object* v___x_779_; 
lean_dec_ref_known(v___x_777_, 1);
v___x_778_ = ((lean_object*)(l___private_Lean_Parser_0__Lean_Parser_initFn___closed__112_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_));
v___x_779_ = l_Lean_PrettyPrinter_Parenthesizer_registerAlias(v___x_770_, v___x_778_);
v___y_748_ = v___y_766_;
v___y_749_ = v___y_767_;
v___y_750_ = v___x_779_;
goto v___jp_747_;
}
else
{
v___y_748_ = v___y_766_;
v___y_749_ = v___y_767_;
v___y_750_ = v___x_777_;
goto v___jp_747_;
}
}
else
{
v___y_748_ = v___y_766_;
v___y_749_ = v___y_767_;
v___y_750_ = v___x_775_;
goto v___jp_747_;
}
}
else
{
lean_dec_ref(v___y_767_);
lean_dec_ref(v___y_766_);
return v___y_769_;
}
}
v___jp_780_:
{
if (lean_obj_tag(v___y_785_) == 0)
{
lean_object* v___x_786_; lean_object* v___x_787_; lean_object* v___x_788_; lean_object* v___x_789_; lean_object* v___x_790_; 
lean_dec_ref_known(v___y_785_, 1);
v___x_786_ = ((lean_object*)(l___private_Lean_Parser_0__Lean_Parser_initFn___closed__114_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_));
v___x_787_ = ((lean_object*)(l___private_Lean_Parser_0__Lean_Parser_initFn___closed__115_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_));
v___x_788_ = ((lean_object*)(l___private_Lean_Parser_0__Lean_Parser_initFn___closed__116_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_));
v___x_789_ = ((lean_object*)(l___private_Lean_Parser_0__Lean_Parser_initFn___closed__117_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_));
lean_inc_ref(v___y_782_);
v___x_790_ = l_Lean_Parser_registerAlias(v___x_786_, v___x_787_, v___x_788_, v___x_789_, v___y_782_);
if (lean_obj_tag(v___x_790_) == 0)
{
lean_object* v___x_791_; lean_object* v___x_792_; 
lean_dec_ref_known(v___x_790_, 1);
v___x_791_ = ((lean_object*)(l___private_Lean_Parser_0__Lean_Parser_initFn___closed__119_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_));
v___x_792_ = l_Lean_PrettyPrinter_Formatter_registerAlias(v___x_786_, v___x_791_);
if (lean_obj_tag(v___x_792_) == 0)
{
lean_object* v___x_793_; lean_object* v___x_794_; 
lean_dec_ref_known(v___x_792_, 1);
v___x_793_ = ((lean_object*)(l___private_Lean_Parser_0__Lean_Parser_initFn___closed__121_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_));
v___x_794_ = l_Lean_PrettyPrinter_Parenthesizer_registerAlias(v___x_786_, v___x_793_);
v___y_765_ = v___y_781_;
v___y_766_ = v___y_782_;
v___y_767_ = v___y_783_;
v___y_768_ = v___y_784_;
v___y_769_ = v___x_794_;
goto v___jp_764_;
}
else
{
v___y_765_ = v___y_781_;
v___y_766_ = v___y_782_;
v___y_767_ = v___y_783_;
v___y_768_ = v___y_784_;
v___y_769_ = v___x_792_;
goto v___jp_764_;
}
}
else
{
v___y_765_ = v___y_781_;
v___y_766_ = v___y_782_;
v___y_767_ = v___y_783_;
v___y_768_ = v___y_784_;
v___y_769_ = v___x_790_;
goto v___jp_764_;
}
}
else
{
lean_dec_ref(v___y_783_);
lean_dec_ref(v___y_782_);
return v___y_785_;
}
}
v___jp_795_:
{
if (lean_obj_tag(v___y_800_) == 0)
{
lean_object* v___x_801_; lean_object* v___x_802_; lean_object* v___x_803_; lean_object* v___x_804_; lean_object* v___x_805_; 
lean_dec_ref_known(v___y_800_, 1);
v___x_801_ = ((lean_object*)(l___private_Lean_Parser_0__Lean_Parser_initFn___closed__123_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_));
v___x_802_ = ((lean_object*)(l___private_Lean_Parser_0__Lean_Parser_initFn___closed__124_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_));
v___x_803_ = ((lean_object*)(l___private_Lean_Parser_0__Lean_Parser_initFn___closed__125_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_));
v___x_804_ = ((lean_object*)(l___private_Lean_Parser_0__Lean_Parser_initFn___closed__126_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_));
lean_inc_ref(v___y_797_);
v___x_805_ = l_Lean_Parser_registerAlias(v___x_801_, v___x_802_, v___x_803_, v___x_804_, v___y_797_);
if (lean_obj_tag(v___x_805_) == 0)
{
lean_object* v___x_806_; lean_object* v___x_807_; 
lean_dec_ref_known(v___x_805_, 1);
v___x_806_ = ((lean_object*)(l___private_Lean_Parser_0__Lean_Parser_initFn___closed__128_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_));
v___x_807_ = l_Lean_PrettyPrinter_Formatter_registerAlias(v___x_801_, v___x_806_);
if (lean_obj_tag(v___x_807_) == 0)
{
lean_object* v___x_808_; lean_object* v___x_809_; 
lean_dec_ref_known(v___x_807_, 1);
v___x_808_ = ((lean_object*)(l___private_Lean_Parser_0__Lean_Parser_initFn___closed__130_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_));
v___x_809_ = l_Lean_PrettyPrinter_Parenthesizer_registerAlias(v___x_801_, v___x_808_);
v___y_781_ = v___y_796_;
v___y_782_ = v___y_797_;
v___y_783_ = v___y_798_;
v___y_784_ = v___y_799_;
v___y_785_ = v___x_809_;
goto v___jp_780_;
}
else
{
v___y_781_ = v___y_796_;
v___y_782_ = v___y_797_;
v___y_783_ = v___y_798_;
v___y_784_ = v___y_799_;
v___y_785_ = v___x_807_;
goto v___jp_780_;
}
}
else
{
v___y_781_ = v___y_796_;
v___y_782_ = v___y_797_;
v___y_783_ = v___y_798_;
v___y_784_ = v___y_799_;
v___y_785_ = v___x_805_;
goto v___jp_780_;
}
}
else
{
lean_dec_ref(v___y_798_);
lean_dec_ref(v___y_797_);
return v___y_800_;
}
}
v___jp_810_:
{
if (lean_obj_tag(v___y_815_) == 0)
{
lean_object* v___x_816_; lean_object* v___x_817_; lean_object* v___x_818_; lean_object* v___x_819_; lean_object* v___x_820_; 
lean_dec_ref_known(v___y_815_, 1);
v___x_816_ = ((lean_object*)(l___private_Lean_Parser_0__Lean_Parser_initFn___closed__132_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_));
v___x_817_ = ((lean_object*)(l___private_Lean_Parser_0__Lean_Parser_initFn___closed__133_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_));
v___x_818_ = ((lean_object*)(l___private_Lean_Parser_0__Lean_Parser_initFn___closed__135_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_));
v___x_819_ = ((lean_object*)(l___private_Lean_Parser_0__Lean_Parser_initFn___closed__136_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_));
lean_inc_ref(v___y_812_);
v___x_820_ = l_Lean_Parser_registerAlias(v___x_816_, v___x_817_, v___x_818_, v___x_819_, v___y_812_);
if (lean_obj_tag(v___x_820_) == 0)
{
lean_object* v___x_821_; lean_object* v___x_822_; 
lean_dec_ref_known(v___x_820_, 1);
v___x_821_ = ((lean_object*)(l___private_Lean_Parser_0__Lean_Parser_initFn___closed__138_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_));
v___x_822_ = l_Lean_PrettyPrinter_Formatter_registerAlias(v___x_816_, v___x_821_);
if (lean_obj_tag(v___x_822_) == 0)
{
lean_object* v___x_823_; lean_object* v___x_824_; 
lean_dec_ref_known(v___x_822_, 1);
v___x_823_ = ((lean_object*)(l___private_Lean_Parser_0__Lean_Parser_initFn___closed__140_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_));
v___x_824_ = l_Lean_PrettyPrinter_Parenthesizer_registerAlias(v___x_816_, v___x_823_);
v___y_796_ = v___y_811_;
v___y_797_ = v___y_812_;
v___y_798_ = v___y_813_;
v___y_799_ = v___y_814_;
v___y_800_ = v___x_824_;
goto v___jp_795_;
}
else
{
v___y_796_ = v___y_811_;
v___y_797_ = v___y_812_;
v___y_798_ = v___y_813_;
v___y_799_ = v___y_814_;
v___y_800_ = v___x_822_;
goto v___jp_795_;
}
}
else
{
v___y_796_ = v___y_811_;
v___y_797_ = v___y_812_;
v___y_798_ = v___y_813_;
v___y_799_ = v___y_814_;
v___y_800_ = v___x_820_;
goto v___jp_795_;
}
}
else
{
lean_dec_ref(v___y_813_);
lean_dec_ref(v___y_812_);
return v___y_815_;
}
}
v___jp_825_:
{
if (lean_obj_tag(v___y_830_) == 0)
{
lean_object* v___x_831_; lean_object* v___x_832_; lean_object* v___x_833_; lean_object* v___x_834_; lean_object* v___x_835_; 
lean_dec_ref_known(v___y_830_, 1);
v___x_831_ = ((lean_object*)(l___private_Lean_Parser_0__Lean_Parser_initFn___closed__142_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_));
v___x_832_ = ((lean_object*)(l___private_Lean_Parser_0__Lean_Parser_initFn___closed__143_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_));
v___x_833_ = ((lean_object*)(l___private_Lean_Parser_0__Lean_Parser_initFn___closed__145_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_));
v___x_834_ = ((lean_object*)(l___private_Lean_Parser_0__Lean_Parser_initFn___closed__146_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_));
lean_inc_ref(v___y_827_);
v___x_835_ = l_Lean_Parser_registerAlias(v___x_831_, v___x_832_, v___x_833_, v___x_834_, v___y_827_);
if (lean_obj_tag(v___x_835_) == 0)
{
lean_object* v___x_836_; lean_object* v___x_837_; 
lean_dec_ref_known(v___x_835_, 1);
v___x_836_ = ((lean_object*)(l___private_Lean_Parser_0__Lean_Parser_initFn___closed__148_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_));
v___x_837_ = l_Lean_PrettyPrinter_Formatter_registerAlias(v___x_831_, v___x_836_);
if (lean_obj_tag(v___x_837_) == 0)
{
lean_object* v___x_838_; lean_object* v___x_839_; 
lean_dec_ref_known(v___x_837_, 1);
v___x_838_ = ((lean_object*)(l___private_Lean_Parser_0__Lean_Parser_initFn___closed__150_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_));
v___x_839_ = l_Lean_PrettyPrinter_Parenthesizer_registerAlias(v___x_831_, v___x_838_);
v___y_811_ = v___y_826_;
v___y_812_ = v___y_827_;
v___y_813_ = v___y_828_;
v___y_814_ = v___y_829_;
v___y_815_ = v___x_839_;
goto v___jp_810_;
}
else
{
v___y_811_ = v___y_826_;
v___y_812_ = v___y_827_;
v___y_813_ = v___y_828_;
v___y_814_ = v___y_829_;
v___y_815_ = v___x_837_;
goto v___jp_810_;
}
}
else
{
v___y_811_ = v___y_826_;
v___y_812_ = v___y_827_;
v___y_813_ = v___y_828_;
v___y_814_ = v___y_829_;
v___y_815_ = v___x_835_;
goto v___jp_810_;
}
}
else
{
lean_dec_ref(v___y_828_);
lean_dec_ref(v___y_827_);
return v___y_830_;
}
}
v___jp_840_:
{
if (lean_obj_tag(v___y_843_) == 0)
{
lean_object* v___x_844_; lean_object* v___x_845_; lean_object* v___x_846_; lean_object* v___x_847_; uint8_t v___x_848_; lean_object* v___x_849_; lean_object* v___x_850_; 
lean_dec_ref_known(v___y_843_, 1);
v___x_844_ = ((lean_object*)(l___private_Lean_Parser_0__Lean_Parser_initFn___closed__152_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_));
v___x_845_ = ((lean_object*)(l___private_Lean_Parser_0__Lean_Parser_initFn___closed__153_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_));
v___x_846_ = ((lean_object*)(l___private_Lean_Parser_0__Lean_Parser_initFn___closed__155_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_));
v___x_847_ = ((lean_object*)(l___private_Lean_Parser_0__Lean_Parser_initFn___closed__156_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_));
v___x_848_ = 0;
v___x_849_ = lean_obj_once(&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__157_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_, &l___private_Lean_Parser_0__Lean_Parser_initFn___closed__157_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_0__Lean_Parser_initFn___closed__157_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_);
v___x_850_ = l_Lean_Parser_registerAlias(v___x_844_, v___x_845_, v___x_846_, v___x_847_, v___x_849_);
if (lean_obj_tag(v___x_850_) == 0)
{
lean_object* v___x_851_; lean_object* v___x_852_; 
lean_dec_ref_known(v___x_850_, 1);
v___x_851_ = ((lean_object*)(l___private_Lean_Parser_0__Lean_Parser_initFn___closed__159_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_));
v___x_852_ = l_Lean_PrettyPrinter_Formatter_registerAlias(v___x_844_, v___x_851_);
if (lean_obj_tag(v___x_852_) == 0)
{
lean_object* v___x_853_; lean_object* v___x_854_; 
lean_dec_ref_known(v___x_852_, 1);
v___x_853_ = ((lean_object*)(l___private_Lean_Parser_0__Lean_Parser_initFn___closed__26_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_));
v___x_854_ = l_Lean_PrettyPrinter_Parenthesizer_registerAlias(v___x_844_, v___x_853_);
v___y_826_ = v___x_848_;
v___y_827_ = v___y_841_;
v___y_828_ = v___x_849_;
v___y_829_ = v___y_842_;
v___y_830_ = v___x_854_;
goto v___jp_825_;
}
else
{
v___y_826_ = v___x_848_;
v___y_827_ = v___y_841_;
v___y_828_ = v___x_849_;
v___y_829_ = v___y_842_;
v___y_830_ = v___x_852_;
goto v___jp_825_;
}
}
else
{
v___y_826_ = v___x_848_;
v___y_827_ = v___y_841_;
v___y_828_ = v___x_849_;
v___y_829_ = v___y_842_;
v___y_830_ = v___x_850_;
goto v___jp_825_;
}
}
else
{
lean_dec_ref(v___y_841_);
return v___y_843_;
}
}
v___jp_856_:
{
if (lean_obj_tag(v___y_859_) == 0)
{
lean_object* v___x_860_; lean_object* v___x_861_; lean_object* v___x_862_; lean_object* v___x_863_; lean_object* v___x_864_; 
lean_dec_ref_known(v___y_859_, 1);
v___x_860_ = ((lean_object*)(l___private_Lean_Parser_0__Lean_Parser_initFn___closed__163_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_));
v___x_861_ = ((lean_object*)(l___private_Lean_Parser_0__Lean_Parser_initFn___closed__164_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_));
v___x_862_ = ((lean_object*)(l___private_Lean_Parser_0__Lean_Parser_initFn___closed__166_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_));
v___x_863_ = ((lean_object*)(l___private_Lean_Parser_0__Lean_Parser_initFn___closed__167_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_));
v___x_864_ = l_Lean_Parser_registerAlias(v___x_860_, v___x_861_, v___x_862_, v___x_863_, v___x_855_);
if (lean_obj_tag(v___x_864_) == 0)
{
lean_object* v___x_865_; lean_object* v___x_866_; 
lean_dec_ref_known(v___x_864_, 1);
v___x_865_ = ((lean_object*)(l___private_Lean_Parser_0__Lean_Parser_initFn___closed__169_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_));
v___x_866_ = l_Lean_PrettyPrinter_Formatter_registerAlias(v___x_860_, v___x_865_);
if (lean_obj_tag(v___x_866_) == 0)
{
lean_object* v___x_867_; lean_object* v___x_868_; 
lean_dec_ref_known(v___x_866_, 1);
v___x_867_ = ((lean_object*)(l___private_Lean_Parser_0__Lean_Parser_initFn___closed__171_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_));
v___x_868_ = l_Lean_PrettyPrinter_Parenthesizer_registerAlias(v___x_860_, v___x_867_);
v___y_841_ = v___y_857_;
v___y_842_ = v___y_858_;
v___y_843_ = v___x_868_;
goto v___jp_840_;
}
else
{
v___y_841_ = v___y_857_;
v___y_842_ = v___y_858_;
v___y_843_ = v___x_866_;
goto v___jp_840_;
}
}
else
{
v___y_841_ = v___y_857_;
v___y_842_ = v___y_858_;
v___y_843_ = v___x_864_;
goto v___jp_840_;
}
}
else
{
lean_dec_ref(v___y_857_);
return v___y_859_;
}
}
v___jp_869_:
{
if (lean_obj_tag(v___y_872_) == 0)
{
lean_object* v___x_873_; lean_object* v___x_874_; lean_object* v___x_875_; lean_object* v___x_876_; lean_object* v___x_877_; 
lean_dec_ref_known(v___y_872_, 1);
v___x_873_ = ((lean_object*)(l___private_Lean_Parser_0__Lean_Parser_initFn___closed__173_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_));
v___x_874_ = ((lean_object*)(l___private_Lean_Parser_0__Lean_Parser_initFn___closed__175_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_));
v___x_875_ = lean_obj_once(&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__177_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_, &l___private_Lean_Parser_0__Lean_Parser_initFn___closed__177_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_0__Lean_Parser_initFn___closed__177_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_);
v___x_876_ = ((lean_object*)(l___private_Lean_Parser_0__Lean_Parser_initFn___closed__178_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_));
v___x_877_ = l_Lean_Parser_registerAlias(v___x_873_, v___x_874_, v___x_875_, v___x_876_, v___x_855_);
if (lean_obj_tag(v___x_877_) == 0)
{
lean_object* v___x_878_; lean_object* v___x_879_; 
lean_dec_ref_known(v___x_877_, 1);
v___x_878_ = lean_obj_once(&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__179_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_, &l___private_Lean_Parser_0__Lean_Parser_initFn___closed__179_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_0__Lean_Parser_initFn___closed__179_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_);
v___x_879_ = l_Lean_PrettyPrinter_Formatter_registerAlias(v___x_873_, v___x_878_);
if (lean_obj_tag(v___x_879_) == 0)
{
lean_object* v___x_880_; lean_object* v___x_881_; 
lean_dec_ref_known(v___x_879_, 1);
v___x_880_ = lean_obj_once(&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__180_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_, &l___private_Lean_Parser_0__Lean_Parser_initFn___closed__180_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_0__Lean_Parser_initFn___closed__180_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_);
v___x_881_ = l_Lean_PrettyPrinter_Parenthesizer_registerAlias(v___x_873_, v___x_880_);
v___y_857_ = v___y_870_;
v___y_858_ = v___y_871_;
v___y_859_ = v___x_881_;
goto v___jp_856_;
}
else
{
v___y_857_ = v___y_870_;
v___y_858_ = v___y_871_;
v___y_859_ = v___x_879_;
goto v___jp_856_;
}
}
else
{
v___y_857_ = v___y_870_;
v___y_858_ = v___y_871_;
v___y_859_ = v___x_877_;
goto v___jp_856_;
}
}
else
{
lean_dec_ref(v___y_870_);
return v___y_872_;
}
}
v___jp_882_:
{
if (lean_obj_tag(v___y_885_) == 0)
{
lean_object* v___x_886_; lean_object* v___x_887_; lean_object* v___x_888_; lean_object* v___x_889_; lean_object* v___x_890_; 
lean_dec_ref_known(v___y_885_, 1);
v___x_886_ = ((lean_object*)(l___private_Lean_Parser_0__Lean_Parser_initFn___closed__182_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_));
v___x_887_ = ((lean_object*)(l___private_Lean_Parser_0__Lean_Parser_initFn___closed__184_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_));
v___x_888_ = lean_obj_once(&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__186_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_, &l___private_Lean_Parser_0__Lean_Parser_initFn___closed__186_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_0__Lean_Parser_initFn___closed__186_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_);
v___x_889_ = ((lean_object*)(l___private_Lean_Parser_0__Lean_Parser_initFn___closed__187_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_));
v___x_890_ = l_Lean_Parser_registerAlias(v___x_886_, v___x_887_, v___x_888_, v___x_889_, v___x_855_);
if (lean_obj_tag(v___x_890_) == 0)
{
lean_object* v___x_891_; lean_object* v___x_892_; 
lean_dec_ref_known(v___x_890_, 1);
v___x_891_ = lean_obj_once(&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__188_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_, &l___private_Lean_Parser_0__Lean_Parser_initFn___closed__188_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_0__Lean_Parser_initFn___closed__188_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_);
v___x_892_ = l_Lean_PrettyPrinter_Formatter_registerAlias(v___x_886_, v___x_891_);
if (lean_obj_tag(v___x_892_) == 0)
{
lean_object* v___x_893_; lean_object* v___x_894_; 
lean_dec_ref_known(v___x_892_, 1);
v___x_893_ = lean_obj_once(&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__189_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_, &l___private_Lean_Parser_0__Lean_Parser_initFn___closed__189_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_0__Lean_Parser_initFn___closed__189_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_);
v___x_894_ = l_Lean_PrettyPrinter_Parenthesizer_registerAlias(v___x_886_, v___x_893_);
v___y_870_ = v___y_883_;
v___y_871_ = v___y_884_;
v___y_872_ = v___x_894_;
goto v___jp_869_;
}
else
{
v___y_870_ = v___y_883_;
v___y_871_ = v___y_884_;
v___y_872_ = v___x_892_;
goto v___jp_869_;
}
}
else
{
v___y_870_ = v___y_883_;
v___y_871_ = v___y_884_;
v___y_872_ = v___x_890_;
goto v___jp_869_;
}
}
else
{
lean_dec_ref(v___y_883_);
return v___y_885_;
}
}
v___jp_895_:
{
if (lean_obj_tag(v___y_898_) == 0)
{
lean_object* v___x_899_; lean_object* v___x_900_; lean_object* v___x_901_; lean_object* v___x_902_; lean_object* v___x_903_; 
lean_dec_ref_known(v___y_898_, 1);
v___x_899_ = ((lean_object*)(l___private_Lean_Parser_0__Lean_Parser_initFn___closed__191_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_));
v___x_900_ = ((lean_object*)(l___private_Lean_Parser_0__Lean_Parser_initFn___closed__193_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_));
v___x_901_ = lean_obj_once(&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__195_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_, &l___private_Lean_Parser_0__Lean_Parser_initFn___closed__195_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_0__Lean_Parser_initFn___closed__195_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_);
v___x_902_ = ((lean_object*)(l___private_Lean_Parser_0__Lean_Parser_initFn___closed__196_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_));
v___x_903_ = l_Lean_Parser_registerAlias(v___x_899_, v___x_900_, v___x_901_, v___x_902_, v___x_855_);
if (lean_obj_tag(v___x_903_) == 0)
{
lean_object* v___x_904_; lean_object* v___x_905_; 
lean_dec_ref_known(v___x_903_, 1);
v___x_904_ = lean_obj_once(&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__197_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_, &l___private_Lean_Parser_0__Lean_Parser_initFn___closed__197_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_0__Lean_Parser_initFn___closed__197_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_);
v___x_905_ = l_Lean_PrettyPrinter_Formatter_registerAlias(v___x_899_, v___x_904_);
if (lean_obj_tag(v___x_905_) == 0)
{
lean_object* v___x_906_; lean_object* v___x_907_; 
lean_dec_ref_known(v___x_905_, 1);
v___x_906_ = lean_obj_once(&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__198_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_, &l___private_Lean_Parser_0__Lean_Parser_initFn___closed__198_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_0__Lean_Parser_initFn___closed__198_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_);
v___x_907_ = l_Lean_PrettyPrinter_Parenthesizer_registerAlias(v___x_899_, v___x_906_);
v___y_883_ = v___y_896_;
v___y_884_ = v___y_897_;
v___y_885_ = v___x_907_;
goto v___jp_882_;
}
else
{
v___y_883_ = v___y_896_;
v___y_884_ = v___y_897_;
v___y_885_ = v___x_905_;
goto v___jp_882_;
}
}
else
{
v___y_883_ = v___y_896_;
v___y_884_ = v___y_897_;
v___y_885_ = v___x_903_;
goto v___jp_882_;
}
}
else
{
lean_dec_ref(v___y_896_);
return v___y_898_;
}
}
v___jp_908_:
{
if (lean_obj_tag(v___y_911_) == 0)
{
lean_object* v___x_912_; lean_object* v___x_913_; lean_object* v___x_914_; lean_object* v___x_915_; lean_object* v___x_916_; 
lean_dec_ref_known(v___y_911_, 1);
v___x_912_ = ((lean_object*)(l___private_Lean_Parser_0__Lean_Parser_initFn___closed__200_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_));
v___x_913_ = ((lean_object*)(l___private_Lean_Parser_0__Lean_Parser_initFn___closed__202_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_));
v___x_914_ = lean_obj_once(&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__204_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_, &l___private_Lean_Parser_0__Lean_Parser_initFn___closed__204_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_0__Lean_Parser_initFn___closed__204_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_);
v___x_915_ = ((lean_object*)(l___private_Lean_Parser_0__Lean_Parser_initFn___closed__205_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_));
v___x_916_ = l_Lean_Parser_registerAlias(v___x_912_, v___x_913_, v___x_914_, v___x_915_, v___x_855_);
if (lean_obj_tag(v___x_916_) == 0)
{
lean_object* v___x_917_; lean_object* v___x_918_; 
lean_dec_ref_known(v___x_916_, 1);
v___x_917_ = lean_obj_once(&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__206_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_, &l___private_Lean_Parser_0__Lean_Parser_initFn___closed__206_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_0__Lean_Parser_initFn___closed__206_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_);
v___x_918_ = l_Lean_PrettyPrinter_Formatter_registerAlias(v___x_912_, v___x_917_);
if (lean_obj_tag(v___x_918_) == 0)
{
lean_object* v___x_919_; lean_object* v___x_920_; 
lean_dec_ref_known(v___x_918_, 1);
v___x_919_ = lean_obj_once(&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__207_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_, &l___private_Lean_Parser_0__Lean_Parser_initFn___closed__207_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_0__Lean_Parser_initFn___closed__207_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_);
v___x_920_ = l_Lean_PrettyPrinter_Parenthesizer_registerAlias(v___x_912_, v___x_919_);
v___y_896_ = v___y_909_;
v___y_897_ = v___y_910_;
v___y_898_ = v___x_920_;
goto v___jp_895_;
}
else
{
v___y_896_ = v___y_909_;
v___y_897_ = v___y_910_;
v___y_898_ = v___x_918_;
goto v___jp_895_;
}
}
else
{
v___y_896_ = v___y_909_;
v___y_897_ = v___y_910_;
v___y_898_ = v___x_916_;
goto v___jp_895_;
}
}
else
{
lean_dec_ref(v___y_909_);
return v___y_911_;
}
}
v___jp_921_:
{
if (lean_obj_tag(v___y_924_) == 0)
{
lean_object* v___x_925_; lean_object* v___x_926_; lean_object* v___x_927_; lean_object* v___x_928_; lean_object* v___x_929_; 
lean_dec_ref_known(v___y_924_, 1);
v___x_925_ = ((lean_object*)(l___private_Lean_Parser_0__Lean_Parser_initFn___closed__209_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_));
v___x_926_ = ((lean_object*)(l___private_Lean_Parser_0__Lean_Parser_initFn___closed__210_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_));
v___x_927_ = lean_obj_once(&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__211_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_, &l___private_Lean_Parser_0__Lean_Parser_initFn___closed__211_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_0__Lean_Parser_initFn___closed__211_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_);
v___x_928_ = ((lean_object*)(l___private_Lean_Parser_0__Lean_Parser_initFn___closed__212_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_));
lean_inc_ref(v___y_922_);
v___x_929_ = l_Lean_Parser_registerAlias(v___x_925_, v___x_926_, v___x_927_, v___x_928_, v___y_922_);
if (lean_obj_tag(v___x_929_) == 0)
{
lean_object* v___x_930_; lean_object* v___x_931_; 
lean_dec_ref_known(v___x_929_, 1);
v___x_930_ = ((lean_object*)(l___private_Lean_Parser_0__Lean_Parser_initFn___closed__214_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_));
v___x_931_ = l_Lean_PrettyPrinter_Formatter_registerAlias(v___x_925_, v___x_930_);
if (lean_obj_tag(v___x_931_) == 0)
{
lean_object* v___x_932_; lean_object* v___x_933_; 
lean_dec_ref_known(v___x_931_, 1);
v___x_932_ = ((lean_object*)(l___private_Lean_Parser_0__Lean_Parser_initFn___closed__216_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_));
v___x_933_ = l_Lean_PrettyPrinter_Parenthesizer_registerAlias(v___x_925_, v___x_932_);
v___y_909_ = v___y_922_;
v___y_910_ = v___y_923_;
v___y_911_ = v___x_933_;
goto v___jp_908_;
}
else
{
v___y_909_ = v___y_922_;
v___y_910_ = v___y_923_;
v___y_911_ = v___x_931_;
goto v___jp_908_;
}
}
else
{
v___y_909_ = v___y_922_;
v___y_910_ = v___y_923_;
v___y_911_ = v___x_929_;
goto v___jp_908_;
}
}
else
{
lean_dec_ref(v___y_922_);
return v___y_924_;
}
}
v___jp_934_:
{
if (lean_obj_tag(v___y_938_) == 0)
{
lean_object* v___x_939_; lean_object* v___x_940_; lean_object* v___x_941_; lean_object* v___x_942_; 
lean_dec_ref_known(v___y_938_, 1);
v___x_939_ = ((lean_object*)(l___private_Lean_Parser_0__Lean_Parser_initFn___closed__218_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_));
v___x_940_ = ((lean_object*)(l___private_Lean_Parser_0__Lean_Parser_initFn___closed__219_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_));
v___x_941_ = lean_obj_once(&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__220_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_, &l___private_Lean_Parser_0__Lean_Parser_initFn___closed__220_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_0__Lean_Parser_initFn___closed__220_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_);
lean_inc_ref(v___y_936_);
v___x_942_ = l_Lean_Parser_registerAlias(v___x_939_, v___x_940_, v___x_941_, v___y_935_, v___y_936_);
if (lean_obj_tag(v___x_942_) == 0)
{
lean_object* v___x_943_; lean_object* v___x_944_; 
lean_dec_ref_known(v___x_942_, 1);
v___x_943_ = ((lean_object*)(l___private_Lean_Parser_0__Lean_Parser_initFn___closed__222_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_));
v___x_944_ = l_Lean_PrettyPrinter_Formatter_registerAlias(v___x_939_, v___x_943_);
if (lean_obj_tag(v___x_944_) == 0)
{
lean_object* v___x_945_; lean_object* v___x_946_; 
lean_dec_ref_known(v___x_944_, 1);
v___x_945_ = ((lean_object*)(l___private_Lean_Parser_0__Lean_Parser_initFn___closed__224_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_));
v___x_946_ = l_Lean_PrettyPrinter_Parenthesizer_registerAlias(v___x_939_, v___x_945_);
v___y_922_ = v___y_936_;
v___y_923_ = v___y_937_;
v___y_924_ = v___x_946_;
goto v___jp_921_;
}
else
{
v___y_922_ = v___y_936_;
v___y_923_ = v___y_937_;
v___y_924_ = v___x_944_;
goto v___jp_921_;
}
}
else
{
v___y_922_ = v___y_936_;
v___y_923_ = v___y_937_;
v___y_924_ = v___x_942_;
goto v___jp_921_;
}
}
else
{
lean_dec_ref(v___y_936_);
lean_dec(v___y_935_);
return v___y_938_;
}
}
v___jp_947_:
{
if (lean_obj_tag(v___y_950_) == 0)
{
lean_object* v___x_951_; lean_object* v___x_952_; lean_object* v___x_953_; lean_object* v___x_954_; lean_object* v___x_955_; 
lean_dec_ref_known(v___y_950_, 1);
v___x_951_ = ((lean_object*)(l___private_Lean_Parser_0__Lean_Parser_initFn___closed__226_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_));
v___x_952_ = ((lean_object*)(l___private_Lean_Parser_0__Lean_Parser_initFn___closed__227_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_));
v___x_953_ = lean_obj_once(&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__228_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_, &l___private_Lean_Parser_0__Lean_Parser_initFn___closed__228_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_0__Lean_Parser_initFn___closed__228_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_);
v___x_954_ = ((lean_object*)(l___private_Lean_Parser_0__Lean_Parser_initFn___closed__229_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_));
lean_inc_ref(v___y_948_);
v___x_955_ = l_Lean_Parser_registerAlias(v___x_951_, v___x_952_, v___x_953_, v___x_954_, v___y_948_);
if (lean_obj_tag(v___x_955_) == 0)
{
lean_object* v___x_956_; lean_object* v___x_957_; 
lean_dec_ref_known(v___x_955_, 1);
v___x_956_ = ((lean_object*)(l___private_Lean_Parser_0__Lean_Parser_initFn___closed__231_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_));
v___x_957_ = l_Lean_PrettyPrinter_Formatter_registerAlias(v___x_951_, v___x_956_);
if (lean_obj_tag(v___x_957_) == 0)
{
lean_object* v___x_958_; lean_object* v___x_959_; 
lean_dec_ref_known(v___x_957_, 1);
v___x_958_ = ((lean_object*)(l___private_Lean_Parser_0__Lean_Parser_initFn___closed__233_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_));
v___x_959_ = l_Lean_PrettyPrinter_Parenthesizer_registerAlias(v___x_951_, v___x_958_);
v___y_935_ = v___x_954_;
v___y_936_ = v___y_948_;
v___y_937_ = v___y_949_;
v___y_938_ = v___x_959_;
goto v___jp_934_;
}
else
{
v___y_935_ = v___x_954_;
v___y_936_ = v___y_948_;
v___y_937_ = v___y_949_;
v___y_938_ = v___x_957_;
goto v___jp_934_;
}
}
else
{
v___y_935_ = v___x_954_;
v___y_936_ = v___y_948_;
v___y_937_ = v___y_949_;
v___y_938_ = v___x_955_;
goto v___jp_934_;
}
}
else
{
lean_dec_ref(v___y_948_);
return v___y_950_;
}
}
v___jp_960_:
{
if (lean_obj_tag(v___y_963_) == 0)
{
lean_object* v___x_964_; lean_object* v___x_965_; lean_object* v___x_966_; lean_object* v___x_967_; lean_object* v___x_968_; 
lean_dec_ref_known(v___y_963_, 1);
v___x_964_ = ((lean_object*)(l___private_Lean_Parser_0__Lean_Parser_initFn___closed__235_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_));
v___x_965_ = ((lean_object*)(l___private_Lean_Parser_0__Lean_Parser_initFn___closed__237_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_));
v___x_966_ = lean_obj_once(&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__238_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_, &l___private_Lean_Parser_0__Lean_Parser_initFn___closed__238_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_0__Lean_Parser_initFn___closed__238_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_);
v___x_967_ = ((lean_object*)(l___private_Lean_Parser_0__Lean_Parser_initFn___closed__239_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_));
lean_inc_ref(v___y_961_);
v___x_968_ = l_Lean_Parser_registerAlias(v___x_964_, v___x_965_, v___x_966_, v___x_967_, v___y_961_);
if (lean_obj_tag(v___x_968_) == 0)
{
lean_object* v___x_969_; lean_object* v___x_970_; 
lean_dec_ref_known(v___x_968_, 1);
v___x_969_ = ((lean_object*)(l___private_Lean_Parser_0__Lean_Parser_initFn___closed__241_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_));
v___x_970_ = l_Lean_PrettyPrinter_Formatter_registerAlias(v___x_964_, v___x_969_);
if (lean_obj_tag(v___x_970_) == 0)
{
lean_object* v___x_971_; lean_object* v___x_972_; 
lean_dec_ref_known(v___x_970_, 1);
v___x_971_ = ((lean_object*)(l___private_Lean_Parser_0__Lean_Parser_initFn___closed__243_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_));
v___x_972_ = l_Lean_PrettyPrinter_Parenthesizer_registerAlias(v___x_964_, v___x_971_);
v___y_948_ = v___y_961_;
v___y_949_ = v___y_962_;
v___y_950_ = v___x_972_;
goto v___jp_947_;
}
else
{
v___y_948_ = v___y_961_;
v___y_949_ = v___y_962_;
v___y_950_ = v___x_970_;
goto v___jp_947_;
}
}
else
{
v___y_948_ = v___y_961_;
v___y_949_ = v___y_962_;
v___y_950_ = v___x_968_;
goto v___jp_947_;
}
}
else
{
lean_dec_ref(v___y_961_);
return v___y_963_;
}
}
v___jp_973_:
{
if (lean_obj_tag(v___y_976_) == 0)
{
lean_object* v___x_977_; lean_object* v___x_978_; lean_object* v___x_979_; lean_object* v___x_980_; lean_object* v___x_981_; 
lean_dec_ref_known(v___y_976_, 1);
v___x_977_ = ((lean_object*)(l___private_Lean_Parser_0__Lean_Parser_initFn___closed__245_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_));
v___x_978_ = ((lean_object*)(l___private_Lean_Parser_0__Lean_Parser_initFn___closed__247_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_));
v___x_979_ = lean_obj_once(&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__248_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_, &l___private_Lean_Parser_0__Lean_Parser_initFn___closed__248_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_0__Lean_Parser_initFn___closed__248_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_);
v___x_980_ = ((lean_object*)(l___private_Lean_Parser_0__Lean_Parser_initFn___closed__249_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_));
lean_inc_ref(v___y_974_);
v___x_981_ = l_Lean_Parser_registerAlias(v___x_977_, v___x_978_, v___x_979_, v___x_980_, v___y_974_);
if (lean_obj_tag(v___x_981_) == 0)
{
lean_object* v___x_982_; lean_object* v___x_983_; 
lean_dec_ref_known(v___x_981_, 1);
v___x_982_ = ((lean_object*)(l___private_Lean_Parser_0__Lean_Parser_initFn___closed__251_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_));
v___x_983_ = l_Lean_PrettyPrinter_Formatter_registerAlias(v___x_977_, v___x_982_);
if (lean_obj_tag(v___x_983_) == 0)
{
lean_object* v___x_984_; lean_object* v___x_985_; 
lean_dec_ref_known(v___x_983_, 1);
v___x_984_ = ((lean_object*)(l___private_Lean_Parser_0__Lean_Parser_initFn___closed__253_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_));
v___x_985_ = l_Lean_PrettyPrinter_Parenthesizer_registerAlias(v___x_977_, v___x_984_);
v___y_961_ = v___y_974_;
v___y_962_ = v___y_975_;
v___y_963_ = v___x_985_;
goto v___jp_960_;
}
else
{
v___y_961_ = v___y_974_;
v___y_962_ = v___y_975_;
v___y_963_ = v___x_983_;
goto v___jp_960_;
}
}
else
{
v___y_961_ = v___y_974_;
v___y_962_ = v___y_975_;
v___y_963_ = v___x_981_;
goto v___jp_960_;
}
}
else
{
lean_dec_ref(v___y_974_);
return v___y_976_;
}
}
v___jp_986_:
{
if (lean_obj_tag(v___y_989_) == 0)
{
lean_object* v___x_990_; lean_object* v___x_991_; lean_object* v___x_992_; lean_object* v___x_993_; lean_object* v___x_994_; 
lean_dec_ref_known(v___y_989_, 1);
v___x_990_ = ((lean_object*)(l___private_Lean_Parser_0__Lean_Parser_initFn___closed__255_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_));
v___x_991_ = ((lean_object*)(l___private_Lean_Parser_0__Lean_Parser_initFn___closed__257_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_));
v___x_992_ = lean_obj_once(&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__258_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_, &l___private_Lean_Parser_0__Lean_Parser_initFn___closed__258_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_0__Lean_Parser_initFn___closed__258_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_);
v___x_993_ = ((lean_object*)(l___private_Lean_Parser_0__Lean_Parser_initFn___closed__259_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_));
lean_inc_ref(v___y_987_);
v___x_994_ = l_Lean_Parser_registerAlias(v___x_990_, v___x_991_, v___x_992_, v___x_993_, v___y_987_);
if (lean_obj_tag(v___x_994_) == 0)
{
lean_object* v___x_995_; lean_object* v___x_996_; 
lean_dec_ref_known(v___x_994_, 1);
v___x_995_ = ((lean_object*)(l___private_Lean_Parser_0__Lean_Parser_initFn___closed__261_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_));
v___x_996_ = l_Lean_PrettyPrinter_Formatter_registerAlias(v___x_990_, v___x_995_);
if (lean_obj_tag(v___x_996_) == 0)
{
lean_object* v___x_997_; lean_object* v___x_998_; 
lean_dec_ref_known(v___x_996_, 1);
v___x_997_ = ((lean_object*)(l___private_Lean_Parser_0__Lean_Parser_initFn___closed__263_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_));
v___x_998_ = l_Lean_PrettyPrinter_Parenthesizer_registerAlias(v___x_990_, v___x_997_);
v___y_974_ = v___y_987_;
v___y_975_ = v___y_988_;
v___y_976_ = v___x_998_;
goto v___jp_973_;
}
else
{
v___y_974_ = v___y_987_;
v___y_975_ = v___y_988_;
v___y_976_ = v___x_996_;
goto v___jp_973_;
}
}
else
{
v___y_974_ = v___y_987_;
v___y_975_ = v___y_988_;
v___y_976_ = v___x_994_;
goto v___jp_973_;
}
}
else
{
lean_dec_ref(v___y_987_);
return v___y_989_;
}
}
v___jp_999_:
{
if (lean_obj_tag(v___y_1002_) == 0)
{
lean_object* v___x_1003_; lean_object* v___x_1004_; lean_object* v___x_1005_; lean_object* v___x_1006_; lean_object* v___x_1007_; 
lean_dec_ref_known(v___y_1002_, 1);
v___x_1003_ = ((lean_object*)(l___private_Lean_Parser_0__Lean_Parser_initFn___closed__265_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_));
v___x_1004_ = ((lean_object*)(l___private_Lean_Parser_0__Lean_Parser_initFn___closed__267_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_));
v___x_1005_ = lean_obj_once(&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__268_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_, &l___private_Lean_Parser_0__Lean_Parser_initFn___closed__268_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_0__Lean_Parser_initFn___closed__268_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_);
v___x_1006_ = ((lean_object*)(l___private_Lean_Parser_0__Lean_Parser_initFn___closed__269_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_));
lean_inc_ref(v___y_1000_);
v___x_1007_ = l_Lean_Parser_registerAlias(v___x_1003_, v___x_1004_, v___x_1005_, v___x_1006_, v___y_1000_);
if (lean_obj_tag(v___x_1007_) == 0)
{
lean_object* v___x_1008_; lean_object* v___x_1009_; 
lean_dec_ref_known(v___x_1007_, 1);
v___x_1008_ = ((lean_object*)(l___private_Lean_Parser_0__Lean_Parser_initFn___closed__271_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_));
v___x_1009_ = l_Lean_PrettyPrinter_Formatter_registerAlias(v___x_1003_, v___x_1008_);
if (lean_obj_tag(v___x_1009_) == 0)
{
lean_object* v___x_1010_; lean_object* v___x_1011_; 
lean_dec_ref_known(v___x_1009_, 1);
v___x_1010_ = ((lean_object*)(l___private_Lean_Parser_0__Lean_Parser_initFn___closed__273_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_));
v___x_1011_ = l_Lean_PrettyPrinter_Parenthesizer_registerAlias(v___x_1003_, v___x_1010_);
v___y_987_ = v___y_1000_;
v___y_988_ = v___y_1001_;
v___y_989_ = v___x_1011_;
goto v___jp_986_;
}
else
{
v___y_987_ = v___y_1000_;
v___y_988_ = v___y_1001_;
v___y_989_ = v___x_1009_;
goto v___jp_986_;
}
}
else
{
v___y_987_ = v___y_1000_;
v___y_988_ = v___y_1001_;
v___y_989_ = v___x_1007_;
goto v___jp_986_;
}
}
else
{
lean_dec_ref(v___y_1000_);
return v___y_1002_;
}
}
v___jp_1012_:
{
if (lean_obj_tag(v___y_1013_) == 0)
{
lean_object* v___x_1014_; lean_object* v___x_1015_; lean_object* v___x_1016_; lean_object* v___x_1017_; lean_object* v___x_1018_; lean_object* v___x_1019_; lean_object* v___x_1020_; 
lean_dec_ref_known(v___y_1013_, 1);
v___x_1014_ = ((lean_object*)(l___private_Lean_Parser_0__Lean_Parser_initFn___closed__275_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_));
v___x_1015_ = ((lean_object*)(l___private_Lean_Parser_0__Lean_Parser_initFn___closed__277_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_));
v___x_1016_ = lean_obj_once(&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__278_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_, &l___private_Lean_Parser_0__Lean_Parser_initFn___closed__278_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_0__Lean_Parser_initFn___closed__278_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_);
v___x_1017_ = ((lean_object*)(l___private_Lean_Parser_0__Lean_Parser_initFn___closed__279_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_));
v___x_1018_ = ((lean_object*)(l___private_Lean_Parser_0__Lean_Parser_initFn___closed__280_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_));
v___x_1019_ = lean_obj_once(&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__281_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_, &l___private_Lean_Parser_0__Lean_Parser_initFn___closed__281_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_0__Lean_Parser_initFn___closed__281_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_);
v___x_1020_ = l_Lean_Parser_registerAlias(v___x_1014_, v___x_1015_, v___x_1016_, v___x_1017_, v___x_1019_);
if (lean_obj_tag(v___x_1020_) == 0)
{
lean_object* v___x_1021_; lean_object* v___x_1022_; 
lean_dec_ref_known(v___x_1020_, 1);
v___x_1021_ = ((lean_object*)(l___private_Lean_Parser_0__Lean_Parser_initFn___closed__283_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_));
v___x_1022_ = l_Lean_PrettyPrinter_Formatter_registerAlias(v___x_1014_, v___x_1021_);
if (lean_obj_tag(v___x_1022_) == 0)
{
lean_object* v___x_1023_; lean_object* v___x_1024_; 
lean_dec_ref_known(v___x_1022_, 1);
v___x_1023_ = ((lean_object*)(l___private_Lean_Parser_0__Lean_Parser_initFn___closed__285_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_));
v___x_1024_ = l_Lean_PrettyPrinter_Parenthesizer_registerAlias(v___x_1014_, v___x_1023_);
v___y_1000_ = v___x_1019_;
v___y_1001_ = v___x_1018_;
v___y_1002_ = v___x_1024_;
goto v___jp_999_;
}
else
{
v___y_1000_ = v___x_1019_;
v___y_1001_ = v___x_1018_;
v___y_1002_ = v___x_1022_;
goto v___jp_999_;
}
}
else
{
v___y_1000_ = v___x_1019_;
v___y_1001_ = v___x_1018_;
v___y_1002_ = v___x_1020_;
goto v___jp_999_;
}
}
else
{
return v___y_1013_;
}
}
v___jp_1025_:
{
if (lean_obj_tag(v___y_1026_) == 0)
{
lean_object* v___x_1027_; lean_object* v___x_1028_; lean_object* v___x_1029_; lean_object* v___x_1030_; lean_object* v___x_1031_; 
lean_dec_ref_known(v___y_1026_, 1);
v___x_1027_ = ((lean_object*)(l___private_Lean_Parser_0__Lean_Parser_initFn___closed__287_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_));
v___x_1028_ = ((lean_object*)(l___private_Lean_Parser_0__Lean_Parser_initFn___closed__289_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_));
v___x_1029_ = lean_obj_once(&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__292_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_, &l___private_Lean_Parser_0__Lean_Parser_initFn___closed__292_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_0__Lean_Parser_initFn___closed__292_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_);
v___x_1030_ = ((lean_object*)(l___private_Lean_Parser_0__Lean_Parser_initFn___closed__293_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_));
v___x_1031_ = l_Lean_Parser_registerAlias(v___x_1027_, v___x_1028_, v___x_1029_, v___x_1030_, v___x_855_);
if (lean_obj_tag(v___x_1031_) == 0)
{
lean_object* v___x_1032_; lean_object* v___x_1033_; 
lean_dec_ref_known(v___x_1031_, 1);
v___x_1032_ = lean_obj_once(&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__294_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_, &l___private_Lean_Parser_0__Lean_Parser_initFn___closed__294_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_0__Lean_Parser_initFn___closed__294_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_);
v___x_1033_ = l_Lean_PrettyPrinter_Formatter_registerAlias(v___x_1027_, v___x_1032_);
if (lean_obj_tag(v___x_1033_) == 0)
{
lean_object* v___x_1034_; lean_object* v___x_1035_; 
lean_dec_ref_known(v___x_1033_, 1);
v___x_1034_ = lean_obj_once(&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__295_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_, &l___private_Lean_Parser_0__Lean_Parser_initFn___closed__295_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_0__Lean_Parser_initFn___closed__295_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_);
v___x_1035_ = l_Lean_PrettyPrinter_Parenthesizer_registerAlias(v___x_1027_, v___x_1034_);
v___y_1013_ = v___x_1035_;
goto v___jp_1012_;
}
else
{
v___y_1013_ = v___x_1033_;
goto v___jp_1012_;
}
}
else
{
v___y_1013_ = v___x_1031_;
goto v___jp_1012_;
}
}
else
{
return v___y_1026_;
}
}
v___jp_1036_:
{
if (lean_obj_tag(v___y_1037_) == 0)
{
lean_object* v___x_1038_; lean_object* v___x_1039_; lean_object* v___x_1040_; lean_object* v___x_1041_; lean_object* v___x_1042_; 
lean_dec_ref_known(v___y_1037_, 1);
v___x_1038_ = ((lean_object*)(l___private_Lean_Parser_0__Lean_Parser_initFn___closed__297_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_));
v___x_1039_ = ((lean_object*)(l___private_Lean_Parser_0__Lean_Parser_initFn___closed__299_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_));
v___x_1040_ = lean_obj_once(&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__302_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_, &l___private_Lean_Parser_0__Lean_Parser_initFn___closed__302_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_0__Lean_Parser_initFn___closed__302_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_);
v___x_1041_ = ((lean_object*)(l___private_Lean_Parser_0__Lean_Parser_initFn___closed__303_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_));
v___x_1042_ = l_Lean_Parser_registerAlias(v___x_1038_, v___x_1039_, v___x_1040_, v___x_1041_, v___x_855_);
if (lean_obj_tag(v___x_1042_) == 0)
{
lean_object* v___x_1043_; lean_object* v___x_1044_; 
lean_dec_ref_known(v___x_1042_, 1);
v___x_1043_ = ((lean_object*)(l___private_Lean_Parser_0__Lean_Parser_initFn___closed__304_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_));
v___x_1044_ = l_Lean_PrettyPrinter_Formatter_registerAlias(v___x_1038_, v___x_1043_);
if (lean_obj_tag(v___x_1044_) == 0)
{
lean_object* v___x_1045_; lean_object* v___x_1046_; 
lean_dec_ref_known(v___x_1044_, 1);
v___x_1045_ = lean_obj_once(&l___private_Lean_Parser_0__Lean_Parser_initFn___closed__305_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_, &l___private_Lean_Parser_0__Lean_Parser_initFn___closed__305_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_0__Lean_Parser_initFn___closed__305_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_);
v___x_1046_ = l_Lean_PrettyPrinter_Parenthesizer_registerAlias(v___x_1038_, v___x_1045_);
v___y_1026_ = v___x_1046_;
goto v___jp_1025_;
}
else
{
v___y_1026_ = v___x_1044_;
goto v___jp_1025_;
}
}
else
{
v___y_1026_ = v___x_1042_;
goto v___jp_1025_;
}
}
else
{
return v___y_1037_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_0__Lean_Parser_initFn_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2____boxed(lean_object* v_a_1052_){
_start:
{
lean_object* v_res_1053_; 
v_res_1053_ = l___private_Lean_Parser_0__Lean_Parser_initFn_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_();
return v_res_1053_;
}
}
LEAN_EXPORT lean_object* lean_mk_antiquot_parenthesizer(lean_object* v_name_1054_, lean_object* v_kind_1055_, uint8_t v_anonymous_1056_, uint8_t v_isPseudoKind_1057_, lean_object* v_a_1058_, lean_object* v_a_1059_, lean_object* v_a_1060_, lean_object* v_a_1061_){
_start:
{
lean_object* v___x_1063_; 
v___x_1063_ = l_Lean_Parser_mkAntiquot_parenthesizer(v_name_1054_, v_kind_1055_, v_anonymous_1056_, v_isPseudoKind_1057_, v_a_1058_, v_a_1059_, v_a_1060_, v_a_1061_);
lean_dec(v_a_1061_);
lean_dec_ref(v_a_1060_);
lean_dec(v_a_1059_);
lean_dec_ref(v_a_1058_);
return v___x_1063_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Parenthesizer_mkAntiquot_parenthesizer___boxed(lean_object* v_name_1064_, lean_object* v_kind_1065_, lean_object* v_anonymous_1066_, lean_object* v_isPseudoKind_1067_, lean_object* v_a_1068_, lean_object* v_a_1069_, lean_object* v_a_1070_, lean_object* v_a_1071_, lean_object* v_a_1072_){
_start:
{
uint8_t v_anonymous_boxed_1073_; uint8_t v_isPseudoKind_boxed_1074_; lean_object* v_res_1075_; 
v_anonymous_boxed_1073_ = lean_unbox(v_anonymous_1066_);
v_isPseudoKind_boxed_1074_ = lean_unbox(v_isPseudoKind_1067_);
v_res_1075_ = lean_mk_antiquot_parenthesizer(v_name_1064_, v_kind_1065_, v_anonymous_boxed_1073_, v_isPseudoKind_boxed_1074_, v_a_1068_, v_a_1069_, v_a_1070_, v_a_1071_);
return v_res_1075_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Parenthesizer_ident_parenthesizer(lean_object* v_a_1076_, lean_object* v_a_1077_, lean_object* v_a_1078_, lean_object* v_a_1079_){
_start:
{
lean_object* v___x_1081_; 
v___x_1081_ = l_Lean_Parser_Term_ident_parenthesizer(v_a_1076_, v_a_1077_, v_a_1078_, v_a_1079_);
return v___x_1081_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Parenthesizer_ident_parenthesizer___boxed(lean_object* v_a_1082_, lean_object* v_a_1083_, lean_object* v_a_1084_, lean_object* v_a_1085_, lean_object* v_a_1086_){
_start:
{
lean_object* v_res_1087_; 
v_res_1087_ = l_Lean_PrettyPrinter_Parenthesizer_ident_parenthesizer(v_a_1082_, v_a_1083_, v_a_1084_, v_a_1085_);
lean_dec(v_a_1085_);
lean_dec_ref(v_a_1084_);
lean_dec(v_a_1083_);
lean_dec_ref(v_a_1082_);
return v_res_1087_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_0__Lean_PrettyPrinter_Parenthesizer_ident_parenthesizer___regBuiltin_Lean_PrettyPrinter_Parenthesizer_ident_parenthesizer__1(){
_start:
{
lean_object* v___f_1099_; lean_object* v___x_1100_; lean_object* v___x_1101_; lean_object* v___x_1102_; lean_object* v___x_1103_; 
v___f_1099_ = ((lean_object*)(l___private_Lean_Parser_0__Lean_PrettyPrinter_Parenthesizer_ident_parenthesizer___regBuiltin_Lean_PrettyPrinter_Parenthesizer_ident_parenthesizer__1___closed__0));
v___x_1100_ = l_Lean_PrettyPrinter_parenthesizerAttribute;
v___x_1101_ = ((lean_object*)(l___private_Lean_Parser_0__Lean_Parser_initFn___closed__226_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_));
v___x_1102_ = ((lean_object*)(l___private_Lean_Parser_0__Lean_PrettyPrinter_Parenthesizer_ident_parenthesizer___regBuiltin_Lean_PrettyPrinter_Parenthesizer_ident_parenthesizer__1___closed__4));
v___x_1103_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_1100_, v___x_1101_, v___x_1102_, v___f_1099_);
return v___x_1103_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_0__Lean_PrettyPrinter_Parenthesizer_ident_parenthesizer___regBuiltin_Lean_PrettyPrinter_Parenthesizer_ident_parenthesizer__1___boxed(lean_object* v_a_1104_){
_start:
{
lean_object* v_res_1105_; 
v_res_1105_ = l___private_Lean_Parser_0__Lean_PrettyPrinter_Parenthesizer_ident_parenthesizer___regBuiltin_Lean_PrettyPrinter_Parenthesizer_ident_parenthesizer__1();
return v_res_1105_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Parenthesizer_numLit_parenthesizer(lean_object* v_a_1106_, lean_object* v_a_1107_, lean_object* v_a_1108_, lean_object* v_a_1109_){
_start:
{
lean_object* v___x_1111_; 
v___x_1111_ = l_Lean_Parser_Term_num_parenthesizer(v_a_1106_, v_a_1107_, v_a_1108_, v_a_1109_);
return v___x_1111_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Parenthesizer_numLit_parenthesizer___boxed(lean_object* v_a_1112_, lean_object* v_a_1113_, lean_object* v_a_1114_, lean_object* v_a_1115_, lean_object* v_a_1116_){
_start:
{
lean_object* v_res_1117_; 
v_res_1117_ = l_Lean_PrettyPrinter_Parenthesizer_numLit_parenthesizer(v_a_1112_, v_a_1113_, v_a_1114_, v_a_1115_);
lean_dec(v_a_1115_);
lean_dec_ref(v_a_1114_);
lean_dec(v_a_1113_);
lean_dec_ref(v_a_1112_);
return v_res_1117_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_0__Lean_PrettyPrinter_Parenthesizer_numLit_parenthesizer___regBuiltin_Lean_PrettyPrinter_Parenthesizer_numLit_parenthesizer__1(){
_start:
{
lean_object* v___f_1126_; lean_object* v___x_1127_; lean_object* v___x_1128_; lean_object* v___x_1129_; lean_object* v___x_1130_; 
v___f_1126_ = ((lean_object*)(l___private_Lean_Parser_0__Lean_PrettyPrinter_Parenthesizer_numLit_parenthesizer___regBuiltin_Lean_PrettyPrinter_Parenthesizer_numLit_parenthesizer__1___closed__0));
v___x_1127_ = l_Lean_PrettyPrinter_parenthesizerAttribute;
v___x_1128_ = ((lean_object*)(l___private_Lean_Parser_0__Lean_Parser_initFn___closed__275_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_));
v___x_1129_ = ((lean_object*)(l___private_Lean_Parser_0__Lean_PrettyPrinter_Parenthesizer_numLit_parenthesizer___regBuiltin_Lean_PrettyPrinter_Parenthesizer_numLit_parenthesizer__1___closed__1));
v___x_1130_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_1127_, v___x_1128_, v___x_1129_, v___f_1126_);
return v___x_1130_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_0__Lean_PrettyPrinter_Parenthesizer_numLit_parenthesizer___regBuiltin_Lean_PrettyPrinter_Parenthesizer_numLit_parenthesizer__1___boxed(lean_object* v_a_1131_){
_start:
{
lean_object* v_res_1132_; 
v_res_1132_ = l___private_Lean_Parser_0__Lean_PrettyPrinter_Parenthesizer_numLit_parenthesizer___regBuiltin_Lean_PrettyPrinter_Parenthesizer_numLit_parenthesizer__1();
return v_res_1132_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Parenthesizer_scientificLit_parenthesizer(lean_object* v_a_1133_, lean_object* v_a_1134_, lean_object* v_a_1135_, lean_object* v_a_1136_){
_start:
{
lean_object* v___x_1138_; 
v___x_1138_ = l_Lean_Parser_Term_scientific_parenthesizer(v_a_1133_, v_a_1134_, v_a_1135_, v_a_1136_);
return v___x_1138_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Parenthesizer_scientificLit_parenthesizer___boxed(lean_object* v_a_1139_, lean_object* v_a_1140_, lean_object* v_a_1141_, lean_object* v_a_1142_, lean_object* v_a_1143_){
_start:
{
lean_object* v_res_1144_; 
v_res_1144_ = l_Lean_PrettyPrinter_Parenthesizer_scientificLit_parenthesizer(v_a_1139_, v_a_1140_, v_a_1141_, v_a_1142_);
lean_dec(v_a_1142_);
lean_dec_ref(v_a_1141_);
lean_dec(v_a_1140_);
lean_dec_ref(v_a_1139_);
return v_res_1144_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_0__Lean_PrettyPrinter_Parenthesizer_scientificLit_parenthesizer___regBuiltin_Lean_PrettyPrinter_Parenthesizer_scientificLit_parenthesizer__1(){
_start:
{
lean_object* v___f_1153_; lean_object* v___x_1154_; lean_object* v___x_1155_; lean_object* v___x_1156_; lean_object* v___x_1157_; 
v___f_1153_ = ((lean_object*)(l___private_Lean_Parser_0__Lean_PrettyPrinter_Parenthesizer_scientificLit_parenthesizer___regBuiltin_Lean_PrettyPrinter_Parenthesizer_scientificLit_parenthesizer__1___closed__0));
v___x_1154_ = l_Lean_PrettyPrinter_parenthesizerAttribute;
v___x_1155_ = ((lean_object*)(l___private_Lean_Parser_0__Lean_Parser_initFn___closed__235_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_));
v___x_1156_ = ((lean_object*)(l___private_Lean_Parser_0__Lean_PrettyPrinter_Parenthesizer_scientificLit_parenthesizer___regBuiltin_Lean_PrettyPrinter_Parenthesizer_scientificLit_parenthesizer__1___closed__1));
v___x_1157_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_1154_, v___x_1155_, v___x_1156_, v___f_1153_);
return v___x_1157_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_0__Lean_PrettyPrinter_Parenthesizer_scientificLit_parenthesizer___regBuiltin_Lean_PrettyPrinter_Parenthesizer_scientificLit_parenthesizer__1___boxed(lean_object* v_a_1158_){
_start:
{
lean_object* v_res_1159_; 
v_res_1159_ = l___private_Lean_Parser_0__Lean_PrettyPrinter_Parenthesizer_scientificLit_parenthesizer___regBuiltin_Lean_PrettyPrinter_Parenthesizer_scientificLit_parenthesizer__1();
return v_res_1159_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Parenthesizer_charLit_parenthesizer(lean_object* v_a_1160_, lean_object* v_a_1161_, lean_object* v_a_1162_, lean_object* v_a_1163_){
_start:
{
lean_object* v___x_1165_; 
v___x_1165_ = l_Lean_Parser_Term_char_parenthesizer(v_a_1160_, v_a_1161_, v_a_1162_, v_a_1163_);
return v___x_1165_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Parenthesizer_charLit_parenthesizer___boxed(lean_object* v_a_1166_, lean_object* v_a_1167_, lean_object* v_a_1168_, lean_object* v_a_1169_, lean_object* v_a_1170_){
_start:
{
lean_object* v_res_1171_; 
v_res_1171_ = l_Lean_PrettyPrinter_Parenthesizer_charLit_parenthesizer(v_a_1166_, v_a_1167_, v_a_1168_, v_a_1169_);
lean_dec(v_a_1169_);
lean_dec_ref(v_a_1168_);
lean_dec(v_a_1167_);
lean_dec_ref(v_a_1166_);
return v_res_1171_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_0__Lean_PrettyPrinter_Parenthesizer_charLit_parenthesizer___regBuiltin_Lean_PrettyPrinter_Parenthesizer_charLit_parenthesizer__1(){
_start:
{
lean_object* v___f_1180_; lean_object* v___x_1181_; lean_object* v___x_1182_; lean_object* v___x_1183_; lean_object* v___x_1184_; 
v___f_1180_ = ((lean_object*)(l___private_Lean_Parser_0__Lean_PrettyPrinter_Parenthesizer_charLit_parenthesizer___regBuiltin_Lean_PrettyPrinter_Parenthesizer_charLit_parenthesizer__1___closed__0));
v___x_1181_ = l_Lean_PrettyPrinter_parenthesizerAttribute;
v___x_1182_ = ((lean_object*)(l___private_Lean_Parser_0__Lean_Parser_initFn___closed__255_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_));
v___x_1183_ = ((lean_object*)(l___private_Lean_Parser_0__Lean_PrettyPrinter_Parenthesizer_charLit_parenthesizer___regBuiltin_Lean_PrettyPrinter_Parenthesizer_charLit_parenthesizer__1___closed__1));
v___x_1184_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_1181_, v___x_1182_, v___x_1183_, v___f_1180_);
return v___x_1184_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_0__Lean_PrettyPrinter_Parenthesizer_charLit_parenthesizer___regBuiltin_Lean_PrettyPrinter_Parenthesizer_charLit_parenthesizer__1___boxed(lean_object* v_a_1185_){
_start:
{
lean_object* v_res_1186_; 
v_res_1186_ = l___private_Lean_Parser_0__Lean_PrettyPrinter_Parenthesizer_charLit_parenthesizer___regBuiltin_Lean_PrettyPrinter_Parenthesizer_charLit_parenthesizer__1();
return v_res_1186_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Parenthesizer_strLit_parenthesizer(lean_object* v_a_1187_, lean_object* v_a_1188_, lean_object* v_a_1189_, lean_object* v_a_1190_){
_start:
{
lean_object* v___x_1192_; 
v___x_1192_ = l_Lean_Parser_Term_str_parenthesizer(v_a_1187_, v_a_1188_, v_a_1189_, v_a_1190_);
return v___x_1192_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Parenthesizer_strLit_parenthesizer___boxed(lean_object* v_a_1193_, lean_object* v_a_1194_, lean_object* v_a_1195_, lean_object* v_a_1196_, lean_object* v_a_1197_){
_start:
{
lean_object* v_res_1198_; 
v_res_1198_ = l_Lean_PrettyPrinter_Parenthesizer_strLit_parenthesizer(v_a_1193_, v_a_1194_, v_a_1195_, v_a_1196_);
lean_dec(v_a_1196_);
lean_dec_ref(v_a_1195_);
lean_dec(v_a_1194_);
lean_dec_ref(v_a_1193_);
return v_res_1198_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_0__Lean_PrettyPrinter_Parenthesizer_strLit_parenthesizer___regBuiltin_Lean_PrettyPrinter_Parenthesizer_strLit_parenthesizer__1(){
_start:
{
lean_object* v___f_1207_; lean_object* v___x_1208_; lean_object* v___x_1209_; lean_object* v___x_1210_; lean_object* v___x_1211_; 
v___f_1207_ = ((lean_object*)(l___private_Lean_Parser_0__Lean_PrettyPrinter_Parenthesizer_strLit_parenthesizer___regBuiltin_Lean_PrettyPrinter_Parenthesizer_strLit_parenthesizer__1___closed__0));
v___x_1208_ = l_Lean_PrettyPrinter_parenthesizerAttribute;
v___x_1209_ = ((lean_object*)(l___private_Lean_Parser_0__Lean_Parser_initFn___closed__265_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_));
v___x_1210_ = ((lean_object*)(l___private_Lean_Parser_0__Lean_PrettyPrinter_Parenthesizer_strLit_parenthesizer___regBuiltin_Lean_PrettyPrinter_Parenthesizer_strLit_parenthesizer__1___closed__1));
v___x_1211_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_1208_, v___x_1209_, v___x_1210_, v___f_1207_);
return v___x_1211_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_0__Lean_PrettyPrinter_Parenthesizer_strLit_parenthesizer___regBuiltin_Lean_PrettyPrinter_Parenthesizer_strLit_parenthesizer__1___boxed(lean_object* v_a_1212_){
_start:
{
lean_object* v_res_1213_; 
v_res_1213_ = l___private_Lean_Parser_0__Lean_PrettyPrinter_Parenthesizer_strLit_parenthesizer___regBuiltin_Lean_PrettyPrinter_Parenthesizer_strLit_parenthesizer__1();
return v_res_1213_;
}
}
LEAN_EXPORT lean_object* lean_pretty_printer_parenthesizer_interpret_parser_descr(lean_object* v_x_1214_, lean_object* v_a_1215_, lean_object* v_a_1216_){
_start:
{
switch(lean_obj_tag(v_x_1214_))
{
case 0:
{
lean_object* v_name_1218_; lean_object* v___x_1220_; uint8_t v_isShared_1221_; uint8_t v_isSharedCheck_1247_; 
lean_dec(v_a_1216_);
v_name_1218_ = lean_ctor_get(v_x_1214_, 0);
v_isSharedCheck_1247_ = !lean_is_exclusive(v_x_1214_);
if (v_isSharedCheck_1247_ == 0)
{
v___x_1220_ = v_x_1214_;
v_isShared_1221_ = v_isSharedCheck_1247_;
goto v_resetjp_1219_;
}
else
{
lean_inc(v_name_1218_);
lean_dec(v_x_1214_);
v___x_1220_ = lean_box(0);
v_isShared_1221_ = v_isSharedCheck_1247_;
goto v_resetjp_1219_;
}
v_resetjp_1219_:
{
lean_object* v_ref_1222_; lean_object* v___x_1223_; lean_object* v___x_1224_; 
v_ref_1222_ = lean_ctor_get(v_a_1215_, 2);
lean_inc(v_ref_1222_);
lean_dec_ref(v_a_1215_);
v___x_1223_ = l_Lean_PrettyPrinter_Parenthesizer_parenthesizerAliasesRef;
v___x_1224_ = l_Lean_Parser_getConstAlias___redArg(v___x_1223_, v_name_1218_);
if (lean_obj_tag(v___x_1224_) == 0)
{
lean_object* v_a_1225_; lean_object* v___x_1227_; uint8_t v_isShared_1228_; uint8_t v_isSharedCheck_1232_; 
lean_dec(v_ref_1222_);
lean_del_object(v___x_1220_);
v_a_1225_ = lean_ctor_get(v___x_1224_, 0);
v_isSharedCheck_1232_ = !lean_is_exclusive(v___x_1224_);
if (v_isSharedCheck_1232_ == 0)
{
v___x_1227_ = v___x_1224_;
v_isShared_1228_ = v_isSharedCheck_1232_;
goto v_resetjp_1226_;
}
else
{
lean_inc(v_a_1225_);
lean_dec(v___x_1224_);
v___x_1227_ = lean_box(0);
v_isShared_1228_ = v_isSharedCheck_1232_;
goto v_resetjp_1226_;
}
v_resetjp_1226_:
{
lean_object* v___x_1230_; 
if (v_isShared_1228_ == 0)
{
v___x_1230_ = v___x_1227_;
goto v_reusejp_1229_;
}
else
{
lean_object* v_reuseFailAlloc_1231_; 
v_reuseFailAlloc_1231_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1231_, 0, v_a_1225_);
v___x_1230_ = v_reuseFailAlloc_1231_;
goto v_reusejp_1229_;
}
v_reusejp_1229_:
{
return v___x_1230_;
}
}
}
else
{
lean_object* v_a_1233_; lean_object* v___x_1235_; uint8_t v_isShared_1236_; uint8_t v_isSharedCheck_1246_; 
v_a_1233_ = lean_ctor_get(v___x_1224_, 0);
v_isSharedCheck_1246_ = !lean_is_exclusive(v___x_1224_);
if (v_isSharedCheck_1246_ == 0)
{
v___x_1235_ = v___x_1224_;
v_isShared_1236_ = v_isSharedCheck_1246_;
goto v_resetjp_1234_;
}
else
{
lean_inc(v_a_1233_);
lean_dec(v___x_1224_);
v___x_1235_ = lean_box(0);
v_isShared_1236_ = v_isSharedCheck_1246_;
goto v_resetjp_1234_;
}
v_resetjp_1234_:
{
lean_object* v___x_1237_; lean_object* v___x_1239_; 
v___x_1237_ = lean_io_error_to_string(v_a_1233_);
if (v_isShared_1221_ == 0)
{
lean_ctor_set_tag(v___x_1220_, 3);
lean_ctor_set(v___x_1220_, 0, v___x_1237_);
v___x_1239_ = v___x_1220_;
goto v_reusejp_1238_;
}
else
{
lean_object* v_reuseFailAlloc_1245_; 
v_reuseFailAlloc_1245_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1245_, 0, v___x_1237_);
v___x_1239_ = v_reuseFailAlloc_1245_;
goto v_reusejp_1238_;
}
v_reusejp_1238_:
{
lean_object* v___x_1240_; lean_object* v___x_1241_; lean_object* v___x_1243_; 
v___x_1240_ = l_Lean_MessageData_ofFormat(v___x_1239_);
v___x_1241_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1241_, 0, v_ref_1222_);
lean_ctor_set(v___x_1241_, 1, v___x_1240_);
if (v_isShared_1236_ == 0)
{
lean_ctor_set(v___x_1235_, 0, v___x_1241_);
v___x_1243_ = v___x_1235_;
goto v_reusejp_1242_;
}
else
{
lean_object* v_reuseFailAlloc_1244_; 
v_reuseFailAlloc_1244_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1244_, 0, v___x_1241_);
v___x_1243_ = v_reuseFailAlloc_1244_;
goto v_reusejp_1242_;
}
v_reusejp_1242_:
{
return v___x_1243_;
}
}
}
}
}
}
case 1:
{
lean_object* v_name_1248_; lean_object* v_p_1249_; lean_object* v___x_1251_; uint8_t v_isShared_1252_; uint8_t v_isSharedCheck_1281_; 
v_name_1248_ = lean_ctor_get(v_x_1214_, 0);
v_p_1249_ = lean_ctor_get(v_x_1214_, 1);
v_isSharedCheck_1281_ = !lean_is_exclusive(v_x_1214_);
if (v_isSharedCheck_1281_ == 0)
{
v___x_1251_ = v_x_1214_;
v_isShared_1252_ = v_isSharedCheck_1281_;
goto v_resetjp_1250_;
}
else
{
lean_inc(v_p_1249_);
lean_inc(v_name_1248_);
lean_dec(v_x_1214_);
v___x_1251_ = lean_box(0);
v_isShared_1252_ = v_isSharedCheck_1281_;
goto v_resetjp_1250_;
}
v_resetjp_1250_:
{
lean_object* v_ref_1253_; lean_object* v___x_1254_; lean_object* v___x_1255_; 
v_ref_1253_ = lean_ctor_get(v_a_1215_, 2);
v___x_1254_ = l_Lean_PrettyPrinter_Parenthesizer_parenthesizerAliasesRef;
v___x_1255_ = l_Lean_Parser_getUnaryAlias___redArg(v___x_1254_, v_name_1248_);
if (lean_obj_tag(v___x_1255_) == 0)
{
lean_object* v_a_1256_; lean_object* v___x_1257_; 
lean_del_object(v___x_1251_);
v_a_1256_ = lean_ctor_get(v___x_1255_, 0);
lean_inc(v_a_1256_);
lean_dec_ref_known(v___x_1255_, 1);
v___x_1257_ = lean_pretty_printer_parenthesizer_interpret_parser_descr(v_p_1249_, v_a_1215_, v_a_1216_);
if (lean_obj_tag(v___x_1257_) == 0)
{
lean_object* v_a_1258_; lean_object* v___x_1260_; uint8_t v_isShared_1261_; uint8_t v_isSharedCheck_1266_; 
v_a_1258_ = lean_ctor_get(v___x_1257_, 0);
v_isSharedCheck_1266_ = !lean_is_exclusive(v___x_1257_);
if (v_isSharedCheck_1266_ == 0)
{
v___x_1260_ = v___x_1257_;
v_isShared_1261_ = v_isSharedCheck_1266_;
goto v_resetjp_1259_;
}
else
{
lean_inc(v_a_1258_);
lean_dec(v___x_1257_);
v___x_1260_ = lean_box(0);
v_isShared_1261_ = v_isSharedCheck_1266_;
goto v_resetjp_1259_;
}
v_resetjp_1259_:
{
lean_object* v___x_1262_; lean_object* v___x_1264_; 
v___x_1262_ = lean_apply_1(v_a_1256_, v_a_1258_);
if (v_isShared_1261_ == 0)
{
lean_ctor_set(v___x_1260_, 0, v___x_1262_);
v___x_1264_ = v___x_1260_;
goto v_reusejp_1263_;
}
else
{
lean_object* v_reuseFailAlloc_1265_; 
v_reuseFailAlloc_1265_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1265_, 0, v___x_1262_);
v___x_1264_ = v_reuseFailAlloc_1265_;
goto v_reusejp_1263_;
}
v_reusejp_1263_:
{
return v___x_1264_;
}
}
}
else
{
lean_dec(v_a_1256_);
return v___x_1257_;
}
}
else
{
lean_object* v_a_1267_; lean_object* v___x_1269_; uint8_t v_isShared_1270_; uint8_t v_isSharedCheck_1280_; 
lean_inc(v_ref_1253_);
lean_dec_ref(v_p_1249_);
lean_dec(v_a_1216_);
lean_dec_ref(v_a_1215_);
v_a_1267_ = lean_ctor_get(v___x_1255_, 0);
v_isSharedCheck_1280_ = !lean_is_exclusive(v___x_1255_);
if (v_isSharedCheck_1280_ == 0)
{
v___x_1269_ = v___x_1255_;
v_isShared_1270_ = v_isSharedCheck_1280_;
goto v_resetjp_1268_;
}
else
{
lean_inc(v_a_1267_);
lean_dec(v___x_1255_);
v___x_1269_ = lean_box(0);
v_isShared_1270_ = v_isSharedCheck_1280_;
goto v_resetjp_1268_;
}
v_resetjp_1268_:
{
lean_object* v___x_1271_; lean_object* v___x_1272_; lean_object* v___x_1273_; lean_object* v___x_1275_; 
v___x_1271_ = lean_io_error_to_string(v_a_1267_);
v___x_1272_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1272_, 0, v___x_1271_);
v___x_1273_ = l_Lean_MessageData_ofFormat(v___x_1272_);
if (v_isShared_1252_ == 0)
{
lean_ctor_set_tag(v___x_1251_, 0);
lean_ctor_set(v___x_1251_, 1, v___x_1273_);
lean_ctor_set(v___x_1251_, 0, v_ref_1253_);
v___x_1275_ = v___x_1251_;
goto v_reusejp_1274_;
}
else
{
lean_object* v_reuseFailAlloc_1279_; 
v_reuseFailAlloc_1279_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1279_, 0, v_ref_1253_);
lean_ctor_set(v_reuseFailAlloc_1279_, 1, v___x_1273_);
v___x_1275_ = v_reuseFailAlloc_1279_;
goto v_reusejp_1274_;
}
v_reusejp_1274_:
{
lean_object* v___x_1277_; 
if (v_isShared_1270_ == 0)
{
lean_ctor_set(v___x_1269_, 0, v___x_1275_);
v___x_1277_ = v___x_1269_;
goto v_reusejp_1276_;
}
else
{
lean_object* v_reuseFailAlloc_1278_; 
v_reuseFailAlloc_1278_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1278_, 0, v___x_1275_);
v___x_1277_ = v_reuseFailAlloc_1278_;
goto v_reusejp_1276_;
}
v_reusejp_1276_:
{
return v___x_1277_;
}
}
}
}
}
}
case 2:
{
lean_object* v_name_1282_; lean_object* v_p_u2081_1283_; lean_object* v_p_u2082_1284_; lean_object* v_ref_1285_; lean_object* v___x_1286_; lean_object* v___x_1287_; 
v_name_1282_ = lean_ctor_get(v_x_1214_, 0);
lean_inc(v_name_1282_);
v_p_u2081_1283_ = lean_ctor_get(v_x_1214_, 1);
lean_inc_ref(v_p_u2081_1283_);
v_p_u2082_1284_ = lean_ctor_get(v_x_1214_, 2);
lean_inc_ref(v_p_u2082_1284_);
lean_dec_ref_known(v_x_1214_, 3);
v_ref_1285_ = lean_ctor_get(v_a_1215_, 2);
v___x_1286_ = l_Lean_PrettyPrinter_Parenthesizer_parenthesizerAliasesRef;
v___x_1287_ = l_Lean_Parser_getBinaryAlias___redArg(v___x_1286_, v_name_1282_);
if (lean_obj_tag(v___x_1287_) == 0)
{
lean_object* v_a_1288_; lean_object* v___x_1289_; 
v_a_1288_ = lean_ctor_get(v___x_1287_, 0);
lean_inc(v_a_1288_);
lean_dec_ref_known(v___x_1287_, 1);
lean_inc(v_a_1216_);
lean_inc_ref(v_a_1215_);
v___x_1289_ = lean_pretty_printer_parenthesizer_interpret_parser_descr(v_p_u2081_1283_, v_a_1215_, v_a_1216_);
if (lean_obj_tag(v___x_1289_) == 0)
{
lean_object* v_a_1290_; lean_object* v___x_1291_; 
v_a_1290_ = lean_ctor_get(v___x_1289_, 0);
lean_inc(v_a_1290_);
lean_dec_ref_known(v___x_1289_, 1);
v___x_1291_ = lean_pretty_printer_parenthesizer_interpret_parser_descr(v_p_u2082_1284_, v_a_1215_, v_a_1216_);
if (lean_obj_tag(v___x_1291_) == 0)
{
lean_object* v_a_1292_; lean_object* v___x_1294_; uint8_t v_isShared_1295_; uint8_t v_isSharedCheck_1300_; 
v_a_1292_ = lean_ctor_get(v___x_1291_, 0);
v_isSharedCheck_1300_ = !lean_is_exclusive(v___x_1291_);
if (v_isSharedCheck_1300_ == 0)
{
v___x_1294_ = v___x_1291_;
v_isShared_1295_ = v_isSharedCheck_1300_;
goto v_resetjp_1293_;
}
else
{
lean_inc(v_a_1292_);
lean_dec(v___x_1291_);
v___x_1294_ = lean_box(0);
v_isShared_1295_ = v_isSharedCheck_1300_;
goto v_resetjp_1293_;
}
v_resetjp_1293_:
{
lean_object* v___x_1296_; lean_object* v___x_1298_; 
v___x_1296_ = lean_apply_2(v_a_1288_, v_a_1290_, v_a_1292_);
if (v_isShared_1295_ == 0)
{
lean_ctor_set(v___x_1294_, 0, v___x_1296_);
v___x_1298_ = v___x_1294_;
goto v_reusejp_1297_;
}
else
{
lean_object* v_reuseFailAlloc_1299_; 
v_reuseFailAlloc_1299_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1299_, 0, v___x_1296_);
v___x_1298_ = v_reuseFailAlloc_1299_;
goto v_reusejp_1297_;
}
v_reusejp_1297_:
{
return v___x_1298_;
}
}
}
else
{
lean_dec(v_a_1290_);
lean_dec(v_a_1288_);
return v___x_1291_;
}
}
else
{
lean_dec(v_a_1288_);
lean_dec_ref(v_p_u2082_1284_);
lean_dec(v_a_1216_);
lean_dec_ref(v_a_1215_);
return v___x_1289_;
}
}
else
{
lean_object* v_a_1301_; lean_object* v___x_1303_; uint8_t v_isShared_1304_; uint8_t v_isSharedCheck_1312_; 
lean_inc(v_ref_1285_);
lean_dec_ref(v_p_u2082_1284_);
lean_dec_ref(v_p_u2081_1283_);
lean_dec(v_a_1216_);
lean_dec_ref(v_a_1215_);
v_a_1301_ = lean_ctor_get(v___x_1287_, 0);
v_isSharedCheck_1312_ = !lean_is_exclusive(v___x_1287_);
if (v_isSharedCheck_1312_ == 0)
{
v___x_1303_ = v___x_1287_;
v_isShared_1304_ = v_isSharedCheck_1312_;
goto v_resetjp_1302_;
}
else
{
lean_inc(v_a_1301_);
lean_dec(v___x_1287_);
v___x_1303_ = lean_box(0);
v_isShared_1304_ = v_isSharedCheck_1312_;
goto v_resetjp_1302_;
}
v_resetjp_1302_:
{
lean_object* v___x_1305_; lean_object* v___x_1306_; lean_object* v___x_1307_; lean_object* v___x_1308_; lean_object* v___x_1310_; 
v___x_1305_ = lean_io_error_to_string(v_a_1301_);
v___x_1306_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1306_, 0, v___x_1305_);
v___x_1307_ = l_Lean_MessageData_ofFormat(v___x_1306_);
v___x_1308_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1308_, 0, v_ref_1285_);
lean_ctor_set(v___x_1308_, 1, v___x_1307_);
if (v_isShared_1304_ == 0)
{
lean_ctor_set(v___x_1303_, 0, v___x_1308_);
v___x_1310_ = v___x_1303_;
goto v_reusejp_1309_;
}
else
{
lean_object* v_reuseFailAlloc_1311_; 
v_reuseFailAlloc_1311_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1311_, 0, v___x_1308_);
v___x_1310_ = v_reuseFailAlloc_1311_;
goto v_reusejp_1309_;
}
v_reusejp_1309_:
{
return v___x_1310_;
}
}
}
}
case 3:
{
lean_object* v_kind_1313_; lean_object* v_prec_1314_; lean_object* v_p_1315_; lean_object* v___x_1316_; 
v_kind_1313_ = lean_ctor_get(v_x_1214_, 0);
lean_inc(v_kind_1313_);
v_prec_1314_ = lean_ctor_get(v_x_1214_, 1);
lean_inc(v_prec_1314_);
v_p_1315_ = lean_ctor_get(v_x_1214_, 2);
lean_inc_ref(v_p_1315_);
lean_dec_ref_known(v_x_1214_, 3);
v___x_1316_ = lean_pretty_printer_parenthesizer_interpret_parser_descr(v_p_1315_, v_a_1215_, v_a_1216_);
if (lean_obj_tag(v___x_1316_) == 0)
{
lean_object* v_a_1317_; lean_object* v___x_1319_; uint8_t v_isShared_1320_; uint8_t v_isSharedCheck_1325_; 
v_a_1317_ = lean_ctor_get(v___x_1316_, 0);
v_isSharedCheck_1325_ = !lean_is_exclusive(v___x_1316_);
if (v_isSharedCheck_1325_ == 0)
{
v___x_1319_ = v___x_1316_;
v_isShared_1320_ = v_isSharedCheck_1325_;
goto v_resetjp_1318_;
}
else
{
lean_inc(v_a_1317_);
lean_dec(v___x_1316_);
v___x_1319_ = lean_box(0);
v_isShared_1320_ = v_isSharedCheck_1325_;
goto v_resetjp_1318_;
}
v_resetjp_1318_:
{
lean_object* v___x_1321_; lean_object* v___x_1323_; 
v___x_1321_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_leadingNode_parenthesizer___boxed), 8, 3);
lean_closure_set(v___x_1321_, 0, v_kind_1313_);
lean_closure_set(v___x_1321_, 1, v_prec_1314_);
lean_closure_set(v___x_1321_, 2, v_a_1317_);
if (v_isShared_1320_ == 0)
{
lean_ctor_set(v___x_1319_, 0, v___x_1321_);
v___x_1323_ = v___x_1319_;
goto v_reusejp_1322_;
}
else
{
lean_object* v_reuseFailAlloc_1324_; 
v_reuseFailAlloc_1324_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1324_, 0, v___x_1321_);
v___x_1323_ = v_reuseFailAlloc_1324_;
goto v_reusejp_1322_;
}
v_reusejp_1322_:
{
return v___x_1323_;
}
}
}
else
{
lean_dec(v_prec_1314_);
lean_dec(v_kind_1313_);
return v___x_1316_;
}
}
case 4:
{
lean_object* v_kind_1326_; lean_object* v_prec_1327_; lean_object* v_lhsPrec_1328_; lean_object* v_p_1329_; lean_object* v___x_1330_; 
v_kind_1326_ = lean_ctor_get(v_x_1214_, 0);
lean_inc(v_kind_1326_);
v_prec_1327_ = lean_ctor_get(v_x_1214_, 1);
lean_inc(v_prec_1327_);
v_lhsPrec_1328_ = lean_ctor_get(v_x_1214_, 2);
lean_inc(v_lhsPrec_1328_);
v_p_1329_ = lean_ctor_get(v_x_1214_, 3);
lean_inc_ref(v_p_1329_);
lean_dec_ref_known(v_x_1214_, 4);
v___x_1330_ = lean_pretty_printer_parenthesizer_interpret_parser_descr(v_p_1329_, v_a_1215_, v_a_1216_);
if (lean_obj_tag(v___x_1330_) == 0)
{
lean_object* v_a_1331_; lean_object* v___x_1333_; uint8_t v_isShared_1334_; uint8_t v_isSharedCheck_1339_; 
v_a_1331_ = lean_ctor_get(v___x_1330_, 0);
v_isSharedCheck_1339_ = !lean_is_exclusive(v___x_1330_);
if (v_isSharedCheck_1339_ == 0)
{
v___x_1333_ = v___x_1330_;
v_isShared_1334_ = v_isSharedCheck_1339_;
goto v_resetjp_1332_;
}
else
{
lean_inc(v_a_1331_);
lean_dec(v___x_1330_);
v___x_1333_ = lean_box(0);
v_isShared_1334_ = v_isSharedCheck_1339_;
goto v_resetjp_1332_;
}
v_resetjp_1332_:
{
lean_object* v___x_1335_; lean_object* v___x_1337_; 
v___x_1335_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_trailingNode_parenthesizer___boxed), 9, 4);
lean_closure_set(v___x_1335_, 0, v_kind_1326_);
lean_closure_set(v___x_1335_, 1, v_prec_1327_);
lean_closure_set(v___x_1335_, 2, v_lhsPrec_1328_);
lean_closure_set(v___x_1335_, 3, v_a_1331_);
if (v_isShared_1334_ == 0)
{
lean_ctor_set(v___x_1333_, 0, v___x_1335_);
v___x_1337_ = v___x_1333_;
goto v_reusejp_1336_;
}
else
{
lean_object* v_reuseFailAlloc_1338_; 
v_reuseFailAlloc_1338_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1338_, 0, v___x_1335_);
v___x_1337_ = v_reuseFailAlloc_1338_;
goto v_reusejp_1336_;
}
v_reusejp_1336_:
{
return v___x_1337_;
}
}
}
else
{
lean_dec(v_lhsPrec_1328_);
lean_dec(v_prec_1327_);
lean_dec(v_kind_1326_);
return v___x_1330_;
}
}
case 5:
{
lean_object* v_val_1340_; lean_object* v___x_1342_; uint8_t v_isShared_1343_; uint8_t v_isSharedCheck_1348_; 
lean_dec(v_a_1216_);
lean_dec_ref(v_a_1215_);
v_val_1340_ = lean_ctor_get(v_x_1214_, 0);
v_isSharedCheck_1348_ = !lean_is_exclusive(v_x_1214_);
if (v_isSharedCheck_1348_ == 0)
{
v___x_1342_ = v_x_1214_;
v_isShared_1343_ = v_isSharedCheck_1348_;
goto v_resetjp_1341_;
}
else
{
lean_inc(v_val_1340_);
lean_dec(v_x_1214_);
v___x_1342_ = lean_box(0);
v_isShared_1343_ = v_isSharedCheck_1348_;
goto v_resetjp_1341_;
}
v_resetjp_1341_:
{
lean_object* v___x_1344_; lean_object* v___x_1346_; 
v___x_1344_ = lean_alloc_closure((void*)(l_Lean_Parser_symbol_parenthesizer___boxed), 6, 1);
lean_closure_set(v___x_1344_, 0, v_val_1340_);
if (v_isShared_1343_ == 0)
{
lean_ctor_set_tag(v___x_1342_, 0);
lean_ctor_set(v___x_1342_, 0, v___x_1344_);
v___x_1346_ = v___x_1342_;
goto v_reusejp_1345_;
}
else
{
lean_object* v_reuseFailAlloc_1347_; 
v_reuseFailAlloc_1347_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1347_, 0, v___x_1344_);
v___x_1346_ = v_reuseFailAlloc_1347_;
goto v_reusejp_1345_;
}
v_reusejp_1345_:
{
return v___x_1346_;
}
}
}
case 6:
{
lean_object* v_val_1349_; uint8_t v_includeIdent_1350_; lean_object* v___x_1351_; lean_object* v___x_1352_; lean_object* v___x_1353_; 
lean_dec(v_a_1216_);
lean_dec_ref(v_a_1215_);
v_val_1349_ = lean_ctor_get(v_x_1214_, 0);
lean_inc_ref(v_val_1349_);
v_includeIdent_1350_ = lean_ctor_get_uint8(v_x_1214_, sizeof(void*)*1);
lean_dec_ref_known(v_x_1214_, 1);
v___x_1351_ = lean_box(v_includeIdent_1350_);
v___x_1352_ = lean_alloc_closure((void*)(l_Lean_Parser_nonReservedSymbol_parenthesizer___boxed), 7, 2);
lean_closure_set(v___x_1352_, 0, v_val_1349_);
lean_closure_set(v___x_1352_, 1, v___x_1351_);
v___x_1353_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1353_, 0, v___x_1352_);
return v___x_1353_;
}
case 7:
{
lean_object* v_catName_1354_; lean_object* v_rbp_1355_; lean_object* v___x_1356_; lean_object* v___x_1357_; 
lean_dec(v_a_1216_);
lean_dec_ref(v_a_1215_);
v_catName_1354_ = lean_ctor_get(v_x_1214_, 0);
lean_inc(v_catName_1354_);
v_rbp_1355_ = lean_ctor_get(v_x_1214_, 1);
lean_inc(v_rbp_1355_);
lean_dec_ref_known(v_x_1214_, 2);
v___x_1356_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_categoryParser_parenthesizer___boxed), 7, 2);
lean_closure_set(v___x_1356_, 0, v_catName_1354_);
lean_closure_set(v___x_1356_, 1, v_rbp_1355_);
v___x_1357_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1357_, 0, v___x_1356_);
return v___x_1357_;
}
case 8:
{
lean_object* v_declName_1358_; lean_object* v___x_1359_; lean_object* v___x_1360_; 
v_declName_1358_ = lean_ctor_get(v_x_1214_, 0);
lean_inc(v_declName_1358_);
lean_dec_ref_known(v_x_1214_, 1);
v___x_1359_ = l_Lean_PrettyPrinter_combinatorParenthesizerAttribute;
v___x_1360_ = l_Lean_ParserCompiler_CombinatorAttribute_runDeclFor___redArg(v___x_1359_, v_declName_1358_, v_a_1215_, v_a_1216_);
lean_dec(v_a_1216_);
lean_dec_ref(v_a_1215_);
return v___x_1360_;
}
case 9:
{
lean_object* v_name_1361_; lean_object* v_kind_1362_; lean_object* v_p_1363_; lean_object* v___x_1364_; 
v_name_1361_ = lean_ctor_get(v_x_1214_, 0);
lean_inc_ref(v_name_1361_);
v_kind_1362_ = lean_ctor_get(v_x_1214_, 1);
lean_inc(v_kind_1362_);
v_p_1363_ = lean_ctor_get(v_x_1214_, 2);
lean_inc_ref(v_p_1363_);
lean_dec_ref_known(v_x_1214_, 3);
v___x_1364_ = lean_pretty_printer_parenthesizer_interpret_parser_descr(v_p_1363_, v_a_1215_, v_a_1216_);
if (lean_obj_tag(v___x_1364_) == 0)
{
lean_object* v_a_1365_; lean_object* v___x_1367_; uint8_t v_isShared_1368_; uint8_t v_isSharedCheck_1379_; 
v_a_1365_ = lean_ctor_get(v___x_1364_, 0);
v_isSharedCheck_1379_ = !lean_is_exclusive(v___x_1364_);
if (v_isSharedCheck_1379_ == 0)
{
v___x_1367_ = v___x_1364_;
v_isShared_1368_ = v_isSharedCheck_1379_;
goto v_resetjp_1366_;
}
else
{
lean_inc(v_a_1365_);
lean_dec(v___x_1364_);
v___x_1367_ = lean_box(0);
v_isShared_1368_ = v_isSharedCheck_1379_;
goto v_resetjp_1366_;
}
v_resetjp_1366_:
{
uint8_t v___x_1369_; uint8_t v___x_1370_; lean_object* v___x_1371_; lean_object* v___x_1372_; lean_object* v___x_1373_; lean_object* v___x_1374_; lean_object* v___x_1375_; lean_object* v___x_1377_; 
v___x_1369_ = 1;
v___x_1370_ = 0;
v___x_1371_ = lean_box(v___x_1369_);
v___x_1372_ = lean_box(v___x_1370_);
lean_inc(v_kind_1362_);
v___x_1373_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_mkAntiquot_parenthesizer_x27___boxed), 9, 4);
lean_closure_set(v___x_1373_, 0, v_name_1361_);
lean_closure_set(v___x_1373_, 1, v_kind_1362_);
lean_closure_set(v___x_1373_, 2, v___x_1371_);
lean_closure_set(v___x_1373_, 3, v___x_1372_);
v___x_1374_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_node_parenthesizer___boxed), 7, 2);
lean_closure_set(v___x_1374_, 0, v_kind_1362_);
lean_closure_set(v___x_1374_, 1, v_a_1365_);
v___x_1375_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_withAntiquot_parenthesizer___boxed), 7, 2);
lean_closure_set(v___x_1375_, 0, v___x_1373_);
lean_closure_set(v___x_1375_, 1, v___x_1374_);
if (v_isShared_1368_ == 0)
{
lean_ctor_set(v___x_1367_, 0, v___x_1375_);
v___x_1377_ = v___x_1367_;
goto v_reusejp_1376_;
}
else
{
lean_object* v_reuseFailAlloc_1378_; 
v_reuseFailAlloc_1378_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1378_, 0, v___x_1375_);
v___x_1377_ = v_reuseFailAlloc_1378_;
goto v_reusejp_1376_;
}
v_reusejp_1376_:
{
return v___x_1377_;
}
}
}
else
{
lean_dec(v_kind_1362_);
lean_dec_ref(v_name_1361_);
return v___x_1364_;
}
}
case 10:
{
lean_object* v_p_1380_; lean_object* v_sep_1381_; lean_object* v_psep_1382_; uint8_t v_allowTrailingSep_1383_; lean_object* v___x_1384_; 
v_p_1380_ = lean_ctor_get(v_x_1214_, 0);
lean_inc_ref(v_p_1380_);
v_sep_1381_ = lean_ctor_get(v_x_1214_, 1);
lean_inc_ref(v_sep_1381_);
v_psep_1382_ = lean_ctor_get(v_x_1214_, 2);
lean_inc_ref(v_psep_1382_);
v_allowTrailingSep_1383_ = lean_ctor_get_uint8(v_x_1214_, sizeof(void*)*3);
lean_dec_ref_known(v_x_1214_, 3);
lean_inc(v_a_1216_);
lean_inc_ref(v_a_1215_);
v___x_1384_ = lean_pretty_printer_parenthesizer_interpret_parser_descr(v_p_1380_, v_a_1215_, v_a_1216_);
if (lean_obj_tag(v___x_1384_) == 0)
{
lean_object* v_a_1385_; lean_object* v___x_1386_; 
v_a_1385_ = lean_ctor_get(v___x_1384_, 0);
lean_inc(v_a_1385_);
lean_dec_ref_known(v___x_1384_, 1);
v___x_1386_ = lean_pretty_printer_parenthesizer_interpret_parser_descr(v_psep_1382_, v_a_1215_, v_a_1216_);
if (lean_obj_tag(v___x_1386_) == 0)
{
lean_object* v_a_1387_; lean_object* v___x_1389_; uint8_t v_isShared_1390_; uint8_t v_isSharedCheck_1396_; 
v_a_1387_ = lean_ctor_get(v___x_1386_, 0);
v_isSharedCheck_1396_ = !lean_is_exclusive(v___x_1386_);
if (v_isSharedCheck_1396_ == 0)
{
v___x_1389_ = v___x_1386_;
v_isShared_1390_ = v_isSharedCheck_1396_;
goto v_resetjp_1388_;
}
else
{
lean_inc(v_a_1387_);
lean_dec(v___x_1386_);
v___x_1389_ = lean_box(0);
v_isShared_1390_ = v_isSharedCheck_1396_;
goto v_resetjp_1388_;
}
v_resetjp_1388_:
{
lean_object* v___x_1391_; lean_object* v___x_1392_; lean_object* v___x_1394_; 
v___x_1391_ = lean_box(v_allowTrailingSep_1383_);
v___x_1392_ = lean_alloc_closure((void*)(l_Lean_Parser_sepBy_parenthesizer___boxed), 9, 4);
lean_closure_set(v___x_1392_, 0, v_a_1385_);
lean_closure_set(v___x_1392_, 1, v_sep_1381_);
lean_closure_set(v___x_1392_, 2, v_a_1387_);
lean_closure_set(v___x_1392_, 3, v___x_1391_);
if (v_isShared_1390_ == 0)
{
lean_ctor_set(v___x_1389_, 0, v___x_1392_);
v___x_1394_ = v___x_1389_;
goto v_reusejp_1393_;
}
else
{
lean_object* v_reuseFailAlloc_1395_; 
v_reuseFailAlloc_1395_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1395_, 0, v___x_1392_);
v___x_1394_ = v_reuseFailAlloc_1395_;
goto v_reusejp_1393_;
}
v_reusejp_1393_:
{
return v___x_1394_;
}
}
}
else
{
lean_dec(v_a_1385_);
lean_dec_ref(v_sep_1381_);
return v___x_1386_;
}
}
else
{
lean_dec_ref(v_psep_1382_);
lean_dec_ref(v_sep_1381_);
lean_dec(v_a_1216_);
lean_dec_ref(v_a_1215_);
return v___x_1384_;
}
}
case 11:
{
lean_object* v_p_1397_; lean_object* v_sep_1398_; lean_object* v_psep_1399_; uint8_t v_allowTrailingSep_1400_; lean_object* v___x_1401_; 
v_p_1397_ = lean_ctor_get(v_x_1214_, 0);
lean_inc_ref(v_p_1397_);
v_sep_1398_ = lean_ctor_get(v_x_1214_, 1);
lean_inc_ref(v_sep_1398_);
v_psep_1399_ = lean_ctor_get(v_x_1214_, 2);
lean_inc_ref(v_psep_1399_);
v_allowTrailingSep_1400_ = lean_ctor_get_uint8(v_x_1214_, sizeof(void*)*3);
lean_dec_ref_known(v_x_1214_, 3);
lean_inc(v_a_1216_);
lean_inc_ref(v_a_1215_);
v___x_1401_ = lean_pretty_printer_parenthesizer_interpret_parser_descr(v_p_1397_, v_a_1215_, v_a_1216_);
if (lean_obj_tag(v___x_1401_) == 0)
{
lean_object* v_a_1402_; lean_object* v___x_1403_; 
v_a_1402_ = lean_ctor_get(v___x_1401_, 0);
lean_inc(v_a_1402_);
lean_dec_ref_known(v___x_1401_, 1);
v___x_1403_ = lean_pretty_printer_parenthesizer_interpret_parser_descr(v_psep_1399_, v_a_1215_, v_a_1216_);
if (lean_obj_tag(v___x_1403_) == 0)
{
lean_object* v_a_1404_; lean_object* v___x_1406_; uint8_t v_isShared_1407_; uint8_t v_isSharedCheck_1413_; 
v_a_1404_ = lean_ctor_get(v___x_1403_, 0);
v_isSharedCheck_1413_ = !lean_is_exclusive(v___x_1403_);
if (v_isSharedCheck_1413_ == 0)
{
v___x_1406_ = v___x_1403_;
v_isShared_1407_ = v_isSharedCheck_1413_;
goto v_resetjp_1405_;
}
else
{
lean_inc(v_a_1404_);
lean_dec(v___x_1403_);
v___x_1406_ = lean_box(0);
v_isShared_1407_ = v_isSharedCheck_1413_;
goto v_resetjp_1405_;
}
v_resetjp_1405_:
{
lean_object* v___x_1408_; lean_object* v___x_1409_; lean_object* v___x_1411_; 
v___x_1408_ = lean_box(v_allowTrailingSep_1400_);
v___x_1409_ = lean_alloc_closure((void*)(l_Lean_Parser_sepBy1_parenthesizer___boxed), 9, 4);
lean_closure_set(v___x_1409_, 0, v_a_1402_);
lean_closure_set(v___x_1409_, 1, v_sep_1398_);
lean_closure_set(v___x_1409_, 2, v_a_1404_);
lean_closure_set(v___x_1409_, 3, v___x_1408_);
if (v_isShared_1407_ == 0)
{
lean_ctor_set(v___x_1406_, 0, v___x_1409_);
v___x_1411_ = v___x_1406_;
goto v_reusejp_1410_;
}
else
{
lean_object* v_reuseFailAlloc_1412_; 
v_reuseFailAlloc_1412_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1412_, 0, v___x_1409_);
v___x_1411_ = v_reuseFailAlloc_1412_;
goto v_reusejp_1410_;
}
v_reusejp_1410_:
{
return v___x_1411_;
}
}
}
else
{
lean_dec(v_a_1402_);
lean_dec_ref(v_sep_1398_);
return v___x_1403_;
}
}
else
{
lean_dec_ref(v_psep_1399_);
lean_dec_ref(v_sep_1398_);
lean_dec(v_a_1216_);
lean_dec_ref(v_a_1215_);
return v___x_1401_;
}
}
default: 
{
lean_object* v_val_1414_; lean_object* v_asciiVal_1415_; uint8_t v_preserveForPP_1416_; lean_object* v___x_1417_; lean_object* v___x_1418_; lean_object* v___x_1419_; 
lean_dec(v_a_1216_);
lean_dec_ref(v_a_1215_);
v_val_1414_ = lean_ctor_get(v_x_1214_, 0);
lean_inc_ref(v_val_1414_);
v_asciiVal_1415_ = lean_ctor_get(v_x_1214_, 1);
lean_inc_ref(v_asciiVal_1415_);
v_preserveForPP_1416_ = lean_ctor_get_uint8(v_x_1214_, sizeof(void*)*2);
lean_dec_ref_known(v_x_1214_, 2);
v___x_1417_ = lean_box(v_preserveForPP_1416_);
v___x_1418_ = lean_alloc_closure((void*)(l_Lean_Parser_unicodeSymbol_parenthesizer___boxed), 8, 3);
lean_closure_set(v___x_1418_, 0, v_val_1414_);
lean_closure_set(v___x_1418_, 1, v_asciiVal_1415_);
lean_closure_set(v___x_1418_, 2, v___x_1417_);
v___x_1419_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1419_, 0, v___x_1418_);
return v___x_1419_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Parenthesizer_interpretParserDescr___boxed(lean_object* v_x_1420_, lean_object* v_a_1421_, lean_object* v_a_1422_, lean_object* v_a_1423_){
_start:
{
lean_object* v_res_1424_; 
v_res_1424_ = lean_pretty_printer_parenthesizer_interpret_parser_descr(v_x_1420_, v_a_1421_, v_a_1422_);
return v_res_1424_;
}
}
LEAN_EXPORT lean_object* lean_mk_antiquot_formatter(lean_object* v_name_1425_, lean_object* v_kind_1426_, uint8_t v_anonymous_1427_, uint8_t v_isPseudoKind_1428_, lean_object* v_a_1429_, lean_object* v_a_1430_, lean_object* v_a_1431_, lean_object* v_a_1432_){
_start:
{
lean_object* v___x_1434_; 
v___x_1434_ = l_Lean_Parser_mkAntiquot_formatter(v_name_1425_, v_kind_1426_, v_anonymous_1427_, v_isPseudoKind_1428_, v_a_1429_, v_a_1430_, v_a_1431_, v_a_1432_);
lean_dec(v_a_1432_);
lean_dec_ref(v_a_1431_);
lean_dec(v_a_1430_);
lean_dec_ref(v_a_1429_);
return v___x_1434_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Formatter_mkAntiquot_formatter___boxed(lean_object* v_name_1435_, lean_object* v_kind_1436_, lean_object* v_anonymous_1437_, lean_object* v_isPseudoKind_1438_, lean_object* v_a_1439_, lean_object* v_a_1440_, lean_object* v_a_1441_, lean_object* v_a_1442_, lean_object* v_a_1443_){
_start:
{
uint8_t v_anonymous_boxed_1444_; uint8_t v_isPseudoKind_boxed_1445_; lean_object* v_res_1446_; 
v_anonymous_boxed_1444_ = lean_unbox(v_anonymous_1437_);
v_isPseudoKind_boxed_1445_ = lean_unbox(v_isPseudoKind_1438_);
v_res_1446_ = lean_mk_antiquot_formatter(v_name_1435_, v_kind_1436_, v_anonymous_boxed_1444_, v_isPseudoKind_boxed_1445_, v_a_1439_, v_a_1440_, v_a_1441_, v_a_1442_);
return v_res_1446_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Formatter_ident_formatter(lean_object* v_a_1447_, lean_object* v_a_1448_, lean_object* v_a_1449_, lean_object* v_a_1450_){
_start:
{
lean_object* v___x_1452_; 
v___x_1452_ = l_Lean_Parser_Term_ident_formatter(v_a_1447_, v_a_1448_, v_a_1449_, v_a_1450_);
return v___x_1452_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Formatter_ident_formatter___boxed(lean_object* v_a_1453_, lean_object* v_a_1454_, lean_object* v_a_1455_, lean_object* v_a_1456_, lean_object* v_a_1457_){
_start:
{
lean_object* v_res_1458_; 
v_res_1458_ = l_Lean_PrettyPrinter_Formatter_ident_formatter(v_a_1453_, v_a_1454_, v_a_1455_, v_a_1456_);
lean_dec(v_a_1456_);
lean_dec_ref(v_a_1455_);
lean_dec(v_a_1454_);
lean_dec_ref(v_a_1453_);
return v_res_1458_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_0__Lean_PrettyPrinter_Formatter_ident_formatter___regBuiltin_Lean_PrettyPrinter_Formatter_ident_formatter__1(){
_start:
{
lean_object* v___f_1469_; lean_object* v___x_1470_; lean_object* v___x_1471_; lean_object* v___x_1472_; lean_object* v___x_1473_; 
v___f_1469_ = ((lean_object*)(l___private_Lean_Parser_0__Lean_PrettyPrinter_Formatter_ident_formatter___regBuiltin_Lean_PrettyPrinter_Formatter_ident_formatter__1___closed__0));
v___x_1470_ = l_Lean_PrettyPrinter_formatterAttribute;
v___x_1471_ = ((lean_object*)(l___private_Lean_Parser_0__Lean_Parser_initFn___closed__226_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_));
v___x_1472_ = ((lean_object*)(l___private_Lean_Parser_0__Lean_PrettyPrinter_Formatter_ident_formatter___regBuiltin_Lean_PrettyPrinter_Formatter_ident_formatter__1___closed__3));
v___x_1473_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_1470_, v___x_1471_, v___x_1472_, v___f_1469_);
return v___x_1473_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_0__Lean_PrettyPrinter_Formatter_ident_formatter___regBuiltin_Lean_PrettyPrinter_Formatter_ident_formatter__1___boxed(lean_object* v_a_1474_){
_start:
{
lean_object* v_res_1475_; 
v_res_1475_ = l___private_Lean_Parser_0__Lean_PrettyPrinter_Formatter_ident_formatter___regBuiltin_Lean_PrettyPrinter_Formatter_ident_formatter__1();
return v_res_1475_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Formatter_numLit_formatter(lean_object* v_a_1476_, lean_object* v_a_1477_, lean_object* v_a_1478_, lean_object* v_a_1479_){
_start:
{
lean_object* v___x_1481_; 
v___x_1481_ = l_Lean_Parser_Term_num_formatter(v_a_1476_, v_a_1477_, v_a_1478_, v_a_1479_);
return v___x_1481_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Formatter_numLit_formatter___boxed(lean_object* v_a_1482_, lean_object* v_a_1483_, lean_object* v_a_1484_, lean_object* v_a_1485_, lean_object* v_a_1486_){
_start:
{
lean_object* v_res_1487_; 
v_res_1487_ = l_Lean_PrettyPrinter_Formatter_numLit_formatter(v_a_1482_, v_a_1483_, v_a_1484_, v_a_1485_);
lean_dec(v_a_1485_);
lean_dec_ref(v_a_1484_);
lean_dec(v_a_1483_);
lean_dec_ref(v_a_1482_);
return v_res_1487_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_0__Lean_PrettyPrinter_Formatter_numLit_formatter___regBuiltin_Lean_PrettyPrinter_Formatter_numLit_formatter__1(){
_start:
{
lean_object* v___f_1496_; lean_object* v___x_1497_; lean_object* v___x_1498_; lean_object* v___x_1499_; lean_object* v___x_1500_; 
v___f_1496_ = ((lean_object*)(l___private_Lean_Parser_0__Lean_PrettyPrinter_Formatter_numLit_formatter___regBuiltin_Lean_PrettyPrinter_Formatter_numLit_formatter__1___closed__0));
v___x_1497_ = l_Lean_PrettyPrinter_formatterAttribute;
v___x_1498_ = ((lean_object*)(l___private_Lean_Parser_0__Lean_Parser_initFn___closed__275_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_));
v___x_1499_ = ((lean_object*)(l___private_Lean_Parser_0__Lean_PrettyPrinter_Formatter_numLit_formatter___regBuiltin_Lean_PrettyPrinter_Formatter_numLit_formatter__1___closed__1));
v___x_1500_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_1497_, v___x_1498_, v___x_1499_, v___f_1496_);
return v___x_1500_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_0__Lean_PrettyPrinter_Formatter_numLit_formatter___regBuiltin_Lean_PrettyPrinter_Formatter_numLit_formatter__1___boxed(lean_object* v_a_1501_){
_start:
{
lean_object* v_res_1502_; 
v_res_1502_ = l___private_Lean_Parser_0__Lean_PrettyPrinter_Formatter_numLit_formatter___regBuiltin_Lean_PrettyPrinter_Formatter_numLit_formatter__1();
return v_res_1502_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Formatter_scientificLit_formatter(lean_object* v_a_1503_, lean_object* v_a_1504_, lean_object* v_a_1505_, lean_object* v_a_1506_){
_start:
{
lean_object* v___x_1508_; 
v___x_1508_ = l_Lean_Parser_Term_scientific_formatter(v_a_1503_, v_a_1504_, v_a_1505_, v_a_1506_);
return v___x_1508_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Formatter_scientificLit_formatter___boxed(lean_object* v_a_1509_, lean_object* v_a_1510_, lean_object* v_a_1511_, lean_object* v_a_1512_, lean_object* v_a_1513_){
_start:
{
lean_object* v_res_1514_; 
v_res_1514_ = l_Lean_PrettyPrinter_Formatter_scientificLit_formatter(v_a_1509_, v_a_1510_, v_a_1511_, v_a_1512_);
lean_dec(v_a_1512_);
lean_dec_ref(v_a_1511_);
lean_dec(v_a_1510_);
lean_dec_ref(v_a_1509_);
return v_res_1514_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_0__Lean_PrettyPrinter_Formatter_scientificLit_formatter___regBuiltin_Lean_PrettyPrinter_Formatter_scientificLit_formatter__1(){
_start:
{
lean_object* v___f_1523_; lean_object* v___x_1524_; lean_object* v___x_1525_; lean_object* v___x_1526_; lean_object* v___x_1527_; 
v___f_1523_ = ((lean_object*)(l___private_Lean_Parser_0__Lean_PrettyPrinter_Formatter_scientificLit_formatter___regBuiltin_Lean_PrettyPrinter_Formatter_scientificLit_formatter__1___closed__0));
v___x_1524_ = l_Lean_PrettyPrinter_formatterAttribute;
v___x_1525_ = ((lean_object*)(l___private_Lean_Parser_0__Lean_Parser_initFn___closed__235_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_));
v___x_1526_ = ((lean_object*)(l___private_Lean_Parser_0__Lean_PrettyPrinter_Formatter_scientificLit_formatter___regBuiltin_Lean_PrettyPrinter_Formatter_scientificLit_formatter__1___closed__1));
v___x_1527_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_1524_, v___x_1525_, v___x_1526_, v___f_1523_);
return v___x_1527_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_0__Lean_PrettyPrinter_Formatter_scientificLit_formatter___regBuiltin_Lean_PrettyPrinter_Formatter_scientificLit_formatter__1___boxed(lean_object* v_a_1528_){
_start:
{
lean_object* v_res_1529_; 
v_res_1529_ = l___private_Lean_Parser_0__Lean_PrettyPrinter_Formatter_scientificLit_formatter___regBuiltin_Lean_PrettyPrinter_Formatter_scientificLit_formatter__1();
return v_res_1529_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Formatter_charLit_formatter(lean_object* v_a_1530_, lean_object* v_a_1531_, lean_object* v_a_1532_, lean_object* v_a_1533_){
_start:
{
lean_object* v___x_1535_; 
v___x_1535_ = l_Lean_Parser_Term_char_formatter(v_a_1530_, v_a_1531_, v_a_1532_, v_a_1533_);
return v___x_1535_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Formatter_charLit_formatter___boxed(lean_object* v_a_1536_, lean_object* v_a_1537_, lean_object* v_a_1538_, lean_object* v_a_1539_, lean_object* v_a_1540_){
_start:
{
lean_object* v_res_1541_; 
v_res_1541_ = l_Lean_PrettyPrinter_Formatter_charLit_formatter(v_a_1536_, v_a_1537_, v_a_1538_, v_a_1539_);
lean_dec(v_a_1539_);
lean_dec_ref(v_a_1538_);
lean_dec(v_a_1537_);
lean_dec_ref(v_a_1536_);
return v_res_1541_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_0__Lean_PrettyPrinter_Formatter_charLit_formatter___regBuiltin_Lean_PrettyPrinter_Formatter_charLit_formatter__1(){
_start:
{
lean_object* v___f_1550_; lean_object* v___x_1551_; lean_object* v___x_1552_; lean_object* v___x_1553_; lean_object* v___x_1554_; 
v___f_1550_ = ((lean_object*)(l___private_Lean_Parser_0__Lean_PrettyPrinter_Formatter_charLit_formatter___regBuiltin_Lean_PrettyPrinter_Formatter_charLit_formatter__1___closed__0));
v___x_1551_ = l_Lean_PrettyPrinter_formatterAttribute;
v___x_1552_ = ((lean_object*)(l___private_Lean_Parser_0__Lean_Parser_initFn___closed__255_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_));
v___x_1553_ = ((lean_object*)(l___private_Lean_Parser_0__Lean_PrettyPrinter_Formatter_charLit_formatter___regBuiltin_Lean_PrettyPrinter_Formatter_charLit_formatter__1___closed__1));
v___x_1554_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_1551_, v___x_1552_, v___x_1553_, v___f_1550_);
return v___x_1554_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_0__Lean_PrettyPrinter_Formatter_charLit_formatter___regBuiltin_Lean_PrettyPrinter_Formatter_charLit_formatter__1___boxed(lean_object* v_a_1555_){
_start:
{
lean_object* v_res_1556_; 
v_res_1556_ = l___private_Lean_Parser_0__Lean_PrettyPrinter_Formatter_charLit_formatter___regBuiltin_Lean_PrettyPrinter_Formatter_charLit_formatter__1();
return v_res_1556_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Formatter_strLit_formatter(lean_object* v_a_1557_, lean_object* v_a_1558_, lean_object* v_a_1559_, lean_object* v_a_1560_){
_start:
{
lean_object* v___x_1562_; 
v___x_1562_ = l_Lean_Parser_Term_str_formatter(v_a_1557_, v_a_1558_, v_a_1559_, v_a_1560_);
return v___x_1562_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Formatter_strLit_formatter___boxed(lean_object* v_a_1563_, lean_object* v_a_1564_, lean_object* v_a_1565_, lean_object* v_a_1566_, lean_object* v_a_1567_){
_start:
{
lean_object* v_res_1568_; 
v_res_1568_ = l_Lean_PrettyPrinter_Formatter_strLit_formatter(v_a_1563_, v_a_1564_, v_a_1565_, v_a_1566_);
lean_dec(v_a_1566_);
lean_dec_ref(v_a_1565_);
lean_dec(v_a_1564_);
lean_dec_ref(v_a_1563_);
return v_res_1568_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_0__Lean_PrettyPrinter_Formatter_strLit_formatter___regBuiltin_Lean_PrettyPrinter_Formatter_strLit_formatter__1(){
_start:
{
lean_object* v___f_1577_; lean_object* v___x_1578_; lean_object* v___x_1579_; lean_object* v___x_1580_; lean_object* v___x_1581_; 
v___f_1577_ = ((lean_object*)(l___private_Lean_Parser_0__Lean_PrettyPrinter_Formatter_strLit_formatter___regBuiltin_Lean_PrettyPrinter_Formatter_strLit_formatter__1___closed__0));
v___x_1578_ = l_Lean_PrettyPrinter_formatterAttribute;
v___x_1579_ = ((lean_object*)(l___private_Lean_Parser_0__Lean_Parser_initFn___closed__265_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_));
v___x_1580_ = ((lean_object*)(l___private_Lean_Parser_0__Lean_PrettyPrinter_Formatter_strLit_formatter___regBuiltin_Lean_PrettyPrinter_Formatter_strLit_formatter__1___closed__1));
v___x_1581_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_1578_, v___x_1579_, v___x_1580_, v___f_1577_);
return v___x_1581_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_0__Lean_PrettyPrinter_Formatter_strLit_formatter___regBuiltin_Lean_PrettyPrinter_Formatter_strLit_formatter__1___boxed(lean_object* v_a_1582_){
_start:
{
lean_object* v_res_1583_; 
v_res_1583_ = l___private_Lean_Parser_0__Lean_PrettyPrinter_Formatter_strLit_formatter___regBuiltin_Lean_PrettyPrinter_Formatter_strLit_formatter__1();
return v_res_1583_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Formatter_interpretParserDescr___lam__0(lean_object* v___x_1584_, lean_object* v___x_1585_, lean_object* v___y_1586_, lean_object* v___y_1587_, lean_object* v___y_1588_, lean_object* v___y_1589_){
_start:
{
lean_object* v___x_1591_; 
v___x_1591_ = l_Lean_PrettyPrinter_Formatter_orelse_formatter(v___x_1584_, v___x_1585_, v___y_1586_, v___y_1587_, v___y_1588_, v___y_1589_);
return v___x_1591_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Formatter_interpretParserDescr___lam__0___boxed(lean_object* v___x_1592_, lean_object* v___x_1593_, lean_object* v___y_1594_, lean_object* v___y_1595_, lean_object* v___y_1596_, lean_object* v___y_1597_, lean_object* v___y_1598_){
_start:
{
lean_object* v_res_1599_; 
v_res_1599_ = l_Lean_PrettyPrinter_Formatter_interpretParserDescr___lam__0(v___x_1592_, v___x_1593_, v___y_1594_, v___y_1595_, v___y_1596_, v___y_1597_);
lean_dec(v___y_1597_);
lean_dec_ref(v___y_1596_);
lean_dec(v___y_1595_);
lean_dec_ref(v___y_1594_);
return v_res_1599_;
}
}
LEAN_EXPORT lean_object* lean_pretty_printer_formatter_interpret_parser_descr(lean_object* v_x_1600_, lean_object* v_a_1601_, lean_object* v_a_1602_){
_start:
{
switch(lean_obj_tag(v_x_1600_))
{
case 0:
{
lean_object* v_name_1604_; lean_object* v___x_1606_; uint8_t v_isShared_1607_; uint8_t v_isSharedCheck_1633_; 
lean_dec(v_a_1602_);
v_name_1604_ = lean_ctor_get(v_x_1600_, 0);
v_isSharedCheck_1633_ = !lean_is_exclusive(v_x_1600_);
if (v_isSharedCheck_1633_ == 0)
{
v___x_1606_ = v_x_1600_;
v_isShared_1607_ = v_isSharedCheck_1633_;
goto v_resetjp_1605_;
}
else
{
lean_inc(v_name_1604_);
lean_dec(v_x_1600_);
v___x_1606_ = lean_box(0);
v_isShared_1607_ = v_isSharedCheck_1633_;
goto v_resetjp_1605_;
}
v_resetjp_1605_:
{
lean_object* v_ref_1608_; lean_object* v___x_1609_; lean_object* v___x_1610_; 
v_ref_1608_ = lean_ctor_get(v_a_1601_, 2);
lean_inc(v_ref_1608_);
lean_dec_ref(v_a_1601_);
v___x_1609_ = l_Lean_PrettyPrinter_Formatter_formatterAliasesRef;
v___x_1610_ = l_Lean_Parser_getConstAlias___redArg(v___x_1609_, v_name_1604_);
if (lean_obj_tag(v___x_1610_) == 0)
{
lean_object* v_a_1611_; lean_object* v___x_1613_; uint8_t v_isShared_1614_; uint8_t v_isSharedCheck_1618_; 
lean_dec(v_ref_1608_);
lean_del_object(v___x_1606_);
v_a_1611_ = lean_ctor_get(v___x_1610_, 0);
v_isSharedCheck_1618_ = !lean_is_exclusive(v___x_1610_);
if (v_isSharedCheck_1618_ == 0)
{
v___x_1613_ = v___x_1610_;
v_isShared_1614_ = v_isSharedCheck_1618_;
goto v_resetjp_1612_;
}
else
{
lean_inc(v_a_1611_);
lean_dec(v___x_1610_);
v___x_1613_ = lean_box(0);
v_isShared_1614_ = v_isSharedCheck_1618_;
goto v_resetjp_1612_;
}
v_resetjp_1612_:
{
lean_object* v___x_1616_; 
if (v_isShared_1614_ == 0)
{
v___x_1616_ = v___x_1613_;
goto v_reusejp_1615_;
}
else
{
lean_object* v_reuseFailAlloc_1617_; 
v_reuseFailAlloc_1617_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1617_, 0, v_a_1611_);
v___x_1616_ = v_reuseFailAlloc_1617_;
goto v_reusejp_1615_;
}
v_reusejp_1615_:
{
return v___x_1616_;
}
}
}
else
{
lean_object* v_a_1619_; lean_object* v___x_1621_; uint8_t v_isShared_1622_; uint8_t v_isSharedCheck_1632_; 
v_a_1619_ = lean_ctor_get(v___x_1610_, 0);
v_isSharedCheck_1632_ = !lean_is_exclusive(v___x_1610_);
if (v_isSharedCheck_1632_ == 0)
{
v___x_1621_ = v___x_1610_;
v_isShared_1622_ = v_isSharedCheck_1632_;
goto v_resetjp_1620_;
}
else
{
lean_inc(v_a_1619_);
lean_dec(v___x_1610_);
v___x_1621_ = lean_box(0);
v_isShared_1622_ = v_isSharedCheck_1632_;
goto v_resetjp_1620_;
}
v_resetjp_1620_:
{
lean_object* v___x_1623_; lean_object* v___x_1625_; 
v___x_1623_ = lean_io_error_to_string(v_a_1619_);
if (v_isShared_1607_ == 0)
{
lean_ctor_set_tag(v___x_1606_, 3);
lean_ctor_set(v___x_1606_, 0, v___x_1623_);
v___x_1625_ = v___x_1606_;
goto v_reusejp_1624_;
}
else
{
lean_object* v_reuseFailAlloc_1631_; 
v_reuseFailAlloc_1631_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1631_, 0, v___x_1623_);
v___x_1625_ = v_reuseFailAlloc_1631_;
goto v_reusejp_1624_;
}
v_reusejp_1624_:
{
lean_object* v___x_1626_; lean_object* v___x_1627_; lean_object* v___x_1629_; 
v___x_1626_ = l_Lean_MessageData_ofFormat(v___x_1625_);
v___x_1627_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1627_, 0, v_ref_1608_);
lean_ctor_set(v___x_1627_, 1, v___x_1626_);
if (v_isShared_1622_ == 0)
{
lean_ctor_set(v___x_1621_, 0, v___x_1627_);
v___x_1629_ = v___x_1621_;
goto v_reusejp_1628_;
}
else
{
lean_object* v_reuseFailAlloc_1630_; 
v_reuseFailAlloc_1630_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1630_, 0, v___x_1627_);
v___x_1629_ = v_reuseFailAlloc_1630_;
goto v_reusejp_1628_;
}
v_reusejp_1628_:
{
return v___x_1629_;
}
}
}
}
}
}
case 1:
{
lean_object* v_name_1634_; lean_object* v_p_1635_; lean_object* v___x_1637_; uint8_t v_isShared_1638_; uint8_t v_isSharedCheck_1667_; 
v_name_1634_ = lean_ctor_get(v_x_1600_, 0);
v_p_1635_ = lean_ctor_get(v_x_1600_, 1);
v_isSharedCheck_1667_ = !lean_is_exclusive(v_x_1600_);
if (v_isSharedCheck_1667_ == 0)
{
v___x_1637_ = v_x_1600_;
v_isShared_1638_ = v_isSharedCheck_1667_;
goto v_resetjp_1636_;
}
else
{
lean_inc(v_p_1635_);
lean_inc(v_name_1634_);
lean_dec(v_x_1600_);
v___x_1637_ = lean_box(0);
v_isShared_1638_ = v_isSharedCheck_1667_;
goto v_resetjp_1636_;
}
v_resetjp_1636_:
{
lean_object* v_ref_1639_; lean_object* v___x_1640_; lean_object* v___x_1641_; 
v_ref_1639_ = lean_ctor_get(v_a_1601_, 2);
v___x_1640_ = l_Lean_PrettyPrinter_Formatter_formatterAliasesRef;
v___x_1641_ = l_Lean_Parser_getUnaryAlias___redArg(v___x_1640_, v_name_1634_);
if (lean_obj_tag(v___x_1641_) == 0)
{
lean_object* v_a_1642_; lean_object* v___x_1643_; 
lean_del_object(v___x_1637_);
v_a_1642_ = lean_ctor_get(v___x_1641_, 0);
lean_inc(v_a_1642_);
lean_dec_ref_known(v___x_1641_, 1);
v___x_1643_ = lean_pretty_printer_formatter_interpret_parser_descr(v_p_1635_, v_a_1601_, v_a_1602_);
if (lean_obj_tag(v___x_1643_) == 0)
{
lean_object* v_a_1644_; lean_object* v___x_1646_; uint8_t v_isShared_1647_; uint8_t v_isSharedCheck_1652_; 
v_a_1644_ = lean_ctor_get(v___x_1643_, 0);
v_isSharedCheck_1652_ = !lean_is_exclusive(v___x_1643_);
if (v_isSharedCheck_1652_ == 0)
{
v___x_1646_ = v___x_1643_;
v_isShared_1647_ = v_isSharedCheck_1652_;
goto v_resetjp_1645_;
}
else
{
lean_inc(v_a_1644_);
lean_dec(v___x_1643_);
v___x_1646_ = lean_box(0);
v_isShared_1647_ = v_isSharedCheck_1652_;
goto v_resetjp_1645_;
}
v_resetjp_1645_:
{
lean_object* v___x_1648_; lean_object* v___x_1650_; 
v___x_1648_ = lean_apply_1(v_a_1642_, v_a_1644_);
if (v_isShared_1647_ == 0)
{
lean_ctor_set(v___x_1646_, 0, v___x_1648_);
v___x_1650_ = v___x_1646_;
goto v_reusejp_1649_;
}
else
{
lean_object* v_reuseFailAlloc_1651_; 
v_reuseFailAlloc_1651_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1651_, 0, v___x_1648_);
v___x_1650_ = v_reuseFailAlloc_1651_;
goto v_reusejp_1649_;
}
v_reusejp_1649_:
{
return v___x_1650_;
}
}
}
else
{
lean_dec(v_a_1642_);
return v___x_1643_;
}
}
else
{
lean_object* v_a_1653_; lean_object* v___x_1655_; uint8_t v_isShared_1656_; uint8_t v_isSharedCheck_1666_; 
lean_inc(v_ref_1639_);
lean_dec_ref(v_p_1635_);
lean_dec(v_a_1602_);
lean_dec_ref(v_a_1601_);
v_a_1653_ = lean_ctor_get(v___x_1641_, 0);
v_isSharedCheck_1666_ = !lean_is_exclusive(v___x_1641_);
if (v_isSharedCheck_1666_ == 0)
{
v___x_1655_ = v___x_1641_;
v_isShared_1656_ = v_isSharedCheck_1666_;
goto v_resetjp_1654_;
}
else
{
lean_inc(v_a_1653_);
lean_dec(v___x_1641_);
v___x_1655_ = lean_box(0);
v_isShared_1656_ = v_isSharedCheck_1666_;
goto v_resetjp_1654_;
}
v_resetjp_1654_:
{
lean_object* v___x_1657_; lean_object* v___x_1658_; lean_object* v___x_1659_; lean_object* v___x_1661_; 
v___x_1657_ = lean_io_error_to_string(v_a_1653_);
v___x_1658_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1658_, 0, v___x_1657_);
v___x_1659_ = l_Lean_MessageData_ofFormat(v___x_1658_);
if (v_isShared_1638_ == 0)
{
lean_ctor_set_tag(v___x_1637_, 0);
lean_ctor_set(v___x_1637_, 1, v___x_1659_);
lean_ctor_set(v___x_1637_, 0, v_ref_1639_);
v___x_1661_ = v___x_1637_;
goto v_reusejp_1660_;
}
else
{
lean_object* v_reuseFailAlloc_1665_; 
v_reuseFailAlloc_1665_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1665_, 0, v_ref_1639_);
lean_ctor_set(v_reuseFailAlloc_1665_, 1, v___x_1659_);
v___x_1661_ = v_reuseFailAlloc_1665_;
goto v_reusejp_1660_;
}
v_reusejp_1660_:
{
lean_object* v___x_1663_; 
if (v_isShared_1656_ == 0)
{
lean_ctor_set(v___x_1655_, 0, v___x_1661_);
v___x_1663_ = v___x_1655_;
goto v_reusejp_1662_;
}
else
{
lean_object* v_reuseFailAlloc_1664_; 
v_reuseFailAlloc_1664_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1664_, 0, v___x_1661_);
v___x_1663_ = v_reuseFailAlloc_1664_;
goto v_reusejp_1662_;
}
v_reusejp_1662_:
{
return v___x_1663_;
}
}
}
}
}
}
case 2:
{
lean_object* v_name_1668_; lean_object* v_p_u2081_1669_; lean_object* v_p_u2082_1670_; lean_object* v_ref_1671_; lean_object* v___x_1672_; lean_object* v___x_1673_; 
v_name_1668_ = lean_ctor_get(v_x_1600_, 0);
lean_inc(v_name_1668_);
v_p_u2081_1669_ = lean_ctor_get(v_x_1600_, 1);
lean_inc_ref(v_p_u2081_1669_);
v_p_u2082_1670_ = lean_ctor_get(v_x_1600_, 2);
lean_inc_ref(v_p_u2082_1670_);
lean_dec_ref_known(v_x_1600_, 3);
v_ref_1671_ = lean_ctor_get(v_a_1601_, 2);
v___x_1672_ = l_Lean_PrettyPrinter_Formatter_formatterAliasesRef;
v___x_1673_ = l_Lean_Parser_getBinaryAlias___redArg(v___x_1672_, v_name_1668_);
if (lean_obj_tag(v___x_1673_) == 0)
{
lean_object* v_a_1674_; lean_object* v___x_1675_; 
v_a_1674_ = lean_ctor_get(v___x_1673_, 0);
lean_inc(v_a_1674_);
lean_dec_ref_known(v___x_1673_, 1);
lean_inc(v_a_1602_);
lean_inc_ref(v_a_1601_);
v___x_1675_ = lean_pretty_printer_formatter_interpret_parser_descr(v_p_u2081_1669_, v_a_1601_, v_a_1602_);
if (lean_obj_tag(v___x_1675_) == 0)
{
lean_object* v_a_1676_; lean_object* v___x_1677_; 
v_a_1676_ = lean_ctor_get(v___x_1675_, 0);
lean_inc(v_a_1676_);
lean_dec_ref_known(v___x_1675_, 1);
v___x_1677_ = lean_pretty_printer_formatter_interpret_parser_descr(v_p_u2082_1670_, v_a_1601_, v_a_1602_);
if (lean_obj_tag(v___x_1677_) == 0)
{
lean_object* v_a_1678_; lean_object* v___x_1680_; uint8_t v_isShared_1681_; uint8_t v_isSharedCheck_1686_; 
v_a_1678_ = lean_ctor_get(v___x_1677_, 0);
v_isSharedCheck_1686_ = !lean_is_exclusive(v___x_1677_);
if (v_isSharedCheck_1686_ == 0)
{
v___x_1680_ = v___x_1677_;
v_isShared_1681_ = v_isSharedCheck_1686_;
goto v_resetjp_1679_;
}
else
{
lean_inc(v_a_1678_);
lean_dec(v___x_1677_);
v___x_1680_ = lean_box(0);
v_isShared_1681_ = v_isSharedCheck_1686_;
goto v_resetjp_1679_;
}
v_resetjp_1679_:
{
lean_object* v___x_1682_; lean_object* v___x_1684_; 
v___x_1682_ = lean_apply_2(v_a_1674_, v_a_1676_, v_a_1678_);
if (v_isShared_1681_ == 0)
{
lean_ctor_set(v___x_1680_, 0, v___x_1682_);
v___x_1684_ = v___x_1680_;
goto v_reusejp_1683_;
}
else
{
lean_object* v_reuseFailAlloc_1685_; 
v_reuseFailAlloc_1685_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1685_, 0, v___x_1682_);
v___x_1684_ = v_reuseFailAlloc_1685_;
goto v_reusejp_1683_;
}
v_reusejp_1683_:
{
return v___x_1684_;
}
}
}
else
{
lean_dec(v_a_1676_);
lean_dec(v_a_1674_);
return v___x_1677_;
}
}
else
{
lean_dec(v_a_1674_);
lean_dec_ref(v_p_u2082_1670_);
lean_dec(v_a_1602_);
lean_dec_ref(v_a_1601_);
return v___x_1675_;
}
}
else
{
lean_object* v_a_1687_; lean_object* v___x_1689_; uint8_t v_isShared_1690_; uint8_t v_isSharedCheck_1698_; 
lean_inc(v_ref_1671_);
lean_dec_ref(v_p_u2082_1670_);
lean_dec_ref(v_p_u2081_1669_);
lean_dec(v_a_1602_);
lean_dec_ref(v_a_1601_);
v_a_1687_ = lean_ctor_get(v___x_1673_, 0);
v_isSharedCheck_1698_ = !lean_is_exclusive(v___x_1673_);
if (v_isSharedCheck_1698_ == 0)
{
v___x_1689_ = v___x_1673_;
v_isShared_1690_ = v_isSharedCheck_1698_;
goto v_resetjp_1688_;
}
else
{
lean_inc(v_a_1687_);
lean_dec(v___x_1673_);
v___x_1689_ = lean_box(0);
v_isShared_1690_ = v_isSharedCheck_1698_;
goto v_resetjp_1688_;
}
v_resetjp_1688_:
{
lean_object* v___x_1691_; lean_object* v___x_1692_; lean_object* v___x_1693_; lean_object* v___x_1694_; lean_object* v___x_1696_; 
v___x_1691_ = lean_io_error_to_string(v_a_1687_);
v___x_1692_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1692_, 0, v___x_1691_);
v___x_1693_ = l_Lean_MessageData_ofFormat(v___x_1692_);
v___x_1694_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1694_, 0, v_ref_1671_);
lean_ctor_set(v___x_1694_, 1, v___x_1693_);
if (v_isShared_1690_ == 0)
{
lean_ctor_set(v___x_1689_, 0, v___x_1694_);
v___x_1696_ = v___x_1689_;
goto v_reusejp_1695_;
}
else
{
lean_object* v_reuseFailAlloc_1697_; 
v_reuseFailAlloc_1697_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1697_, 0, v___x_1694_);
v___x_1696_ = v_reuseFailAlloc_1697_;
goto v_reusejp_1695_;
}
v_reusejp_1695_:
{
return v___x_1696_;
}
}
}
}
case 3:
{
lean_object* v_kind_1699_; lean_object* v_p_1700_; lean_object* v___x_1701_; 
v_kind_1699_ = lean_ctor_get(v_x_1600_, 0);
lean_inc(v_kind_1699_);
v_p_1700_ = lean_ctor_get(v_x_1600_, 2);
lean_inc_ref(v_p_1700_);
lean_dec_ref_known(v_x_1600_, 3);
v___x_1701_ = lean_pretty_printer_formatter_interpret_parser_descr(v_p_1700_, v_a_1601_, v_a_1602_);
if (lean_obj_tag(v___x_1701_) == 0)
{
lean_object* v_a_1702_; lean_object* v___x_1704_; uint8_t v_isShared_1705_; uint8_t v_isSharedCheck_1710_; 
v_a_1702_ = lean_ctor_get(v___x_1701_, 0);
v_isSharedCheck_1710_ = !lean_is_exclusive(v___x_1701_);
if (v_isSharedCheck_1710_ == 0)
{
v___x_1704_ = v___x_1701_;
v_isShared_1705_ = v_isSharedCheck_1710_;
goto v_resetjp_1703_;
}
else
{
lean_inc(v_a_1702_);
lean_dec(v___x_1701_);
v___x_1704_ = lean_box(0);
v_isShared_1705_ = v_isSharedCheck_1710_;
goto v_resetjp_1703_;
}
v_resetjp_1703_:
{
lean_object* v___x_1706_; lean_object* v___x_1708_; 
v___x_1706_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_node_formatter___boxed), 7, 2);
lean_closure_set(v___x_1706_, 0, v_kind_1699_);
lean_closure_set(v___x_1706_, 1, v_a_1702_);
if (v_isShared_1705_ == 0)
{
lean_ctor_set(v___x_1704_, 0, v___x_1706_);
v___x_1708_ = v___x_1704_;
goto v_reusejp_1707_;
}
else
{
lean_object* v_reuseFailAlloc_1709_; 
v_reuseFailAlloc_1709_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1709_, 0, v___x_1706_);
v___x_1708_ = v_reuseFailAlloc_1709_;
goto v_reusejp_1707_;
}
v_reusejp_1707_:
{
return v___x_1708_;
}
}
}
else
{
lean_dec(v_kind_1699_);
return v___x_1701_;
}
}
case 4:
{
lean_object* v_kind_1711_; lean_object* v_prec_1712_; lean_object* v_lhsPrec_1713_; lean_object* v_p_1714_; lean_object* v___x_1715_; 
v_kind_1711_ = lean_ctor_get(v_x_1600_, 0);
lean_inc(v_kind_1711_);
v_prec_1712_ = lean_ctor_get(v_x_1600_, 1);
lean_inc(v_prec_1712_);
v_lhsPrec_1713_ = lean_ctor_get(v_x_1600_, 2);
lean_inc(v_lhsPrec_1713_);
v_p_1714_ = lean_ctor_get(v_x_1600_, 3);
lean_inc_ref(v_p_1714_);
lean_dec_ref_known(v_x_1600_, 4);
v___x_1715_ = lean_pretty_printer_formatter_interpret_parser_descr(v_p_1714_, v_a_1601_, v_a_1602_);
if (lean_obj_tag(v___x_1715_) == 0)
{
lean_object* v_a_1716_; lean_object* v___x_1718_; uint8_t v_isShared_1719_; uint8_t v_isSharedCheck_1724_; 
v_a_1716_ = lean_ctor_get(v___x_1715_, 0);
v_isSharedCheck_1724_ = !lean_is_exclusive(v___x_1715_);
if (v_isSharedCheck_1724_ == 0)
{
v___x_1718_ = v___x_1715_;
v_isShared_1719_ = v_isSharedCheck_1724_;
goto v_resetjp_1717_;
}
else
{
lean_inc(v_a_1716_);
lean_dec(v___x_1715_);
v___x_1718_ = lean_box(0);
v_isShared_1719_ = v_isSharedCheck_1724_;
goto v_resetjp_1717_;
}
v_resetjp_1717_:
{
lean_object* v___x_1720_; lean_object* v___x_1722_; 
v___x_1720_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_trailingNode_formatter___boxed), 9, 4);
lean_closure_set(v___x_1720_, 0, v_kind_1711_);
lean_closure_set(v___x_1720_, 1, v_prec_1712_);
lean_closure_set(v___x_1720_, 2, v_lhsPrec_1713_);
lean_closure_set(v___x_1720_, 3, v_a_1716_);
if (v_isShared_1719_ == 0)
{
lean_ctor_set(v___x_1718_, 0, v___x_1720_);
v___x_1722_ = v___x_1718_;
goto v_reusejp_1721_;
}
else
{
lean_object* v_reuseFailAlloc_1723_; 
v_reuseFailAlloc_1723_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1723_, 0, v___x_1720_);
v___x_1722_ = v_reuseFailAlloc_1723_;
goto v_reusejp_1721_;
}
v_reusejp_1721_:
{
return v___x_1722_;
}
}
}
else
{
lean_dec(v_lhsPrec_1713_);
lean_dec(v_prec_1712_);
lean_dec(v_kind_1711_);
return v___x_1715_;
}
}
case 5:
{
lean_object* v_val_1725_; lean_object* v___x_1727_; uint8_t v_isShared_1728_; uint8_t v_isSharedCheck_1733_; 
lean_dec(v_a_1602_);
lean_dec_ref(v_a_1601_);
v_val_1725_ = lean_ctor_get(v_x_1600_, 0);
v_isSharedCheck_1733_ = !lean_is_exclusive(v_x_1600_);
if (v_isSharedCheck_1733_ == 0)
{
v___x_1727_ = v_x_1600_;
v_isShared_1728_ = v_isSharedCheck_1733_;
goto v_resetjp_1726_;
}
else
{
lean_inc(v_val_1725_);
lean_dec(v_x_1600_);
v___x_1727_ = lean_box(0);
v_isShared_1728_ = v_isSharedCheck_1733_;
goto v_resetjp_1726_;
}
v_resetjp_1726_:
{
lean_object* v___x_1729_; lean_object* v___x_1731_; 
v___x_1729_ = lean_alloc_closure((void*)(l_Lean_Parser_symbol_formatter___boxed), 6, 1);
lean_closure_set(v___x_1729_, 0, v_val_1725_);
if (v_isShared_1728_ == 0)
{
lean_ctor_set_tag(v___x_1727_, 0);
lean_ctor_set(v___x_1727_, 0, v___x_1729_);
v___x_1731_ = v___x_1727_;
goto v_reusejp_1730_;
}
else
{
lean_object* v_reuseFailAlloc_1732_; 
v_reuseFailAlloc_1732_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1732_, 0, v___x_1729_);
v___x_1731_ = v_reuseFailAlloc_1732_;
goto v_reusejp_1730_;
}
v_reusejp_1730_:
{
return v___x_1731_;
}
}
}
case 6:
{
lean_object* v_val_1734_; uint8_t v___x_1735_; lean_object* v___x_1736_; lean_object* v___x_1737_; lean_object* v___x_1738_; 
lean_dec(v_a_1602_);
lean_dec_ref(v_a_1601_);
v_val_1734_ = lean_ctor_get(v_x_1600_, 0);
lean_inc_ref(v_val_1734_);
lean_dec_ref_known(v_x_1600_, 1);
v___x_1735_ = 0;
v___x_1736_ = lean_box(v___x_1735_);
v___x_1737_ = lean_alloc_closure((void*)(l_Lean_Parser_nonReservedSymbol_formatter___boxed), 7, 2);
lean_closure_set(v___x_1737_, 0, v_val_1734_);
lean_closure_set(v___x_1737_, 1, v___x_1736_);
v___x_1738_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1738_, 0, v___x_1737_);
return v___x_1738_;
}
case 7:
{
lean_object* v_catName_1739_; lean_object* v___x_1740_; lean_object* v___x_1741_; 
lean_dec(v_a_1602_);
lean_dec_ref(v_a_1601_);
v_catName_1739_ = lean_ctor_get(v_x_1600_, 0);
lean_inc(v_catName_1739_);
lean_dec_ref_known(v_x_1600_, 2);
v___x_1740_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_categoryParser_formatter___boxed), 6, 1);
lean_closure_set(v___x_1740_, 0, v_catName_1739_);
v___x_1741_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1741_, 0, v___x_1740_);
return v___x_1741_;
}
case 8:
{
lean_object* v_declName_1742_; lean_object* v___x_1743_; lean_object* v___x_1744_; 
v_declName_1742_ = lean_ctor_get(v_x_1600_, 0);
lean_inc(v_declName_1742_);
lean_dec_ref_known(v_x_1600_, 1);
v___x_1743_ = l_Lean_PrettyPrinter_combinatorFormatterAttribute;
v___x_1744_ = l_Lean_ParserCompiler_CombinatorAttribute_runDeclFor___redArg(v___x_1743_, v_declName_1742_, v_a_1601_, v_a_1602_);
lean_dec(v_a_1602_);
lean_dec_ref(v_a_1601_);
return v___x_1744_;
}
case 9:
{
lean_object* v_name_1745_; lean_object* v_kind_1746_; lean_object* v_p_1747_; lean_object* v___x_1748_; 
v_name_1745_ = lean_ctor_get(v_x_1600_, 0);
lean_inc_ref(v_name_1745_);
v_kind_1746_ = lean_ctor_get(v_x_1600_, 1);
lean_inc(v_kind_1746_);
v_p_1747_ = lean_ctor_get(v_x_1600_, 2);
lean_inc_ref(v_p_1747_);
lean_dec_ref_known(v_x_1600_, 3);
v___x_1748_ = lean_pretty_printer_formatter_interpret_parser_descr(v_p_1747_, v_a_1601_, v_a_1602_);
if (lean_obj_tag(v___x_1748_) == 0)
{
lean_object* v_a_1749_; lean_object* v___x_1751_; uint8_t v_isShared_1752_; uint8_t v_isSharedCheck_1763_; 
v_a_1749_ = lean_ctor_get(v___x_1748_, 0);
v_isSharedCheck_1763_ = !lean_is_exclusive(v___x_1748_);
if (v_isSharedCheck_1763_ == 0)
{
v___x_1751_ = v___x_1748_;
v_isShared_1752_ = v_isSharedCheck_1763_;
goto v_resetjp_1750_;
}
else
{
lean_inc(v_a_1749_);
lean_dec(v___x_1748_);
v___x_1751_ = lean_box(0);
v_isShared_1752_ = v_isSharedCheck_1763_;
goto v_resetjp_1750_;
}
v_resetjp_1750_:
{
uint8_t v___x_1753_; uint8_t v___x_1754_; lean_object* v___x_1755_; lean_object* v___x_1756_; lean_object* v___x_1757_; lean_object* v___x_1758_; lean_object* v___f_1759_; lean_object* v___x_1761_; 
v___x_1753_ = 1;
v___x_1754_ = 0;
v___x_1755_ = lean_box(v___x_1753_);
v___x_1756_ = lean_box(v___x_1754_);
lean_inc(v_kind_1746_);
v___x_1757_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_mkAntiquot_formatter_x27___boxed), 9, 4);
lean_closure_set(v___x_1757_, 0, v_name_1745_);
lean_closure_set(v___x_1757_, 1, v_kind_1746_);
lean_closure_set(v___x_1757_, 2, v___x_1755_);
lean_closure_set(v___x_1757_, 3, v___x_1756_);
v___x_1758_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_node_formatter___boxed), 7, 2);
lean_closure_set(v___x_1758_, 0, v_kind_1746_);
lean_closure_set(v___x_1758_, 1, v_a_1749_);
v___f_1759_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_interpretParserDescr___lam__0___boxed), 7, 2);
lean_closure_set(v___f_1759_, 0, v___x_1757_);
lean_closure_set(v___f_1759_, 1, v___x_1758_);
if (v_isShared_1752_ == 0)
{
lean_ctor_set(v___x_1751_, 0, v___f_1759_);
v___x_1761_ = v___x_1751_;
goto v_reusejp_1760_;
}
else
{
lean_object* v_reuseFailAlloc_1762_; 
v_reuseFailAlloc_1762_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1762_, 0, v___f_1759_);
v___x_1761_ = v_reuseFailAlloc_1762_;
goto v_reusejp_1760_;
}
v_reusejp_1760_:
{
return v___x_1761_;
}
}
}
else
{
lean_dec(v_kind_1746_);
lean_dec_ref(v_name_1745_);
return v___x_1748_;
}
}
case 10:
{
lean_object* v_p_1764_; lean_object* v_sep_1765_; lean_object* v_psep_1766_; uint8_t v_allowTrailingSep_1767_; lean_object* v___x_1768_; 
v_p_1764_ = lean_ctor_get(v_x_1600_, 0);
lean_inc_ref(v_p_1764_);
v_sep_1765_ = lean_ctor_get(v_x_1600_, 1);
lean_inc_ref(v_sep_1765_);
v_psep_1766_ = lean_ctor_get(v_x_1600_, 2);
lean_inc_ref(v_psep_1766_);
v_allowTrailingSep_1767_ = lean_ctor_get_uint8(v_x_1600_, sizeof(void*)*3);
lean_dec_ref_known(v_x_1600_, 3);
lean_inc(v_a_1602_);
lean_inc_ref(v_a_1601_);
v___x_1768_ = lean_pretty_printer_formatter_interpret_parser_descr(v_p_1764_, v_a_1601_, v_a_1602_);
if (lean_obj_tag(v___x_1768_) == 0)
{
lean_object* v_a_1769_; lean_object* v___x_1770_; 
v_a_1769_ = lean_ctor_get(v___x_1768_, 0);
lean_inc(v_a_1769_);
lean_dec_ref_known(v___x_1768_, 1);
v___x_1770_ = lean_pretty_printer_formatter_interpret_parser_descr(v_psep_1766_, v_a_1601_, v_a_1602_);
if (lean_obj_tag(v___x_1770_) == 0)
{
lean_object* v_a_1771_; lean_object* v___x_1773_; uint8_t v_isShared_1774_; uint8_t v_isSharedCheck_1780_; 
v_a_1771_ = lean_ctor_get(v___x_1770_, 0);
v_isSharedCheck_1780_ = !lean_is_exclusive(v___x_1770_);
if (v_isSharedCheck_1780_ == 0)
{
v___x_1773_ = v___x_1770_;
v_isShared_1774_ = v_isSharedCheck_1780_;
goto v_resetjp_1772_;
}
else
{
lean_inc(v_a_1771_);
lean_dec(v___x_1770_);
v___x_1773_ = lean_box(0);
v_isShared_1774_ = v_isSharedCheck_1780_;
goto v_resetjp_1772_;
}
v_resetjp_1772_:
{
lean_object* v___x_1775_; lean_object* v___x_1776_; lean_object* v___x_1778_; 
v___x_1775_ = lean_box(v_allowTrailingSep_1767_);
v___x_1776_ = lean_alloc_closure((void*)(l_Lean_Parser_sepBy_formatter___boxed), 9, 4);
lean_closure_set(v___x_1776_, 0, v_a_1769_);
lean_closure_set(v___x_1776_, 1, v_sep_1765_);
lean_closure_set(v___x_1776_, 2, v_a_1771_);
lean_closure_set(v___x_1776_, 3, v___x_1775_);
if (v_isShared_1774_ == 0)
{
lean_ctor_set(v___x_1773_, 0, v___x_1776_);
v___x_1778_ = v___x_1773_;
goto v_reusejp_1777_;
}
else
{
lean_object* v_reuseFailAlloc_1779_; 
v_reuseFailAlloc_1779_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1779_, 0, v___x_1776_);
v___x_1778_ = v_reuseFailAlloc_1779_;
goto v_reusejp_1777_;
}
v_reusejp_1777_:
{
return v___x_1778_;
}
}
}
else
{
lean_dec(v_a_1769_);
lean_dec_ref(v_sep_1765_);
return v___x_1770_;
}
}
else
{
lean_dec_ref(v_psep_1766_);
lean_dec_ref(v_sep_1765_);
lean_dec(v_a_1602_);
lean_dec_ref(v_a_1601_);
return v___x_1768_;
}
}
case 11:
{
lean_object* v_p_1781_; lean_object* v_sep_1782_; lean_object* v_psep_1783_; uint8_t v_allowTrailingSep_1784_; lean_object* v___x_1785_; 
v_p_1781_ = lean_ctor_get(v_x_1600_, 0);
lean_inc_ref(v_p_1781_);
v_sep_1782_ = lean_ctor_get(v_x_1600_, 1);
lean_inc_ref(v_sep_1782_);
v_psep_1783_ = lean_ctor_get(v_x_1600_, 2);
lean_inc_ref(v_psep_1783_);
v_allowTrailingSep_1784_ = lean_ctor_get_uint8(v_x_1600_, sizeof(void*)*3);
lean_dec_ref_known(v_x_1600_, 3);
lean_inc(v_a_1602_);
lean_inc_ref(v_a_1601_);
v___x_1785_ = lean_pretty_printer_formatter_interpret_parser_descr(v_p_1781_, v_a_1601_, v_a_1602_);
if (lean_obj_tag(v___x_1785_) == 0)
{
lean_object* v_a_1786_; lean_object* v___x_1787_; 
v_a_1786_ = lean_ctor_get(v___x_1785_, 0);
lean_inc(v_a_1786_);
lean_dec_ref_known(v___x_1785_, 1);
v___x_1787_ = lean_pretty_printer_formatter_interpret_parser_descr(v_psep_1783_, v_a_1601_, v_a_1602_);
if (lean_obj_tag(v___x_1787_) == 0)
{
lean_object* v_a_1788_; lean_object* v___x_1790_; uint8_t v_isShared_1791_; uint8_t v_isSharedCheck_1797_; 
v_a_1788_ = lean_ctor_get(v___x_1787_, 0);
v_isSharedCheck_1797_ = !lean_is_exclusive(v___x_1787_);
if (v_isSharedCheck_1797_ == 0)
{
v___x_1790_ = v___x_1787_;
v_isShared_1791_ = v_isSharedCheck_1797_;
goto v_resetjp_1789_;
}
else
{
lean_inc(v_a_1788_);
lean_dec(v___x_1787_);
v___x_1790_ = lean_box(0);
v_isShared_1791_ = v_isSharedCheck_1797_;
goto v_resetjp_1789_;
}
v_resetjp_1789_:
{
lean_object* v___x_1792_; lean_object* v___x_1793_; lean_object* v___x_1795_; 
v___x_1792_ = lean_box(v_allowTrailingSep_1784_);
v___x_1793_ = lean_alloc_closure((void*)(l_Lean_Parser_sepBy1_formatter___boxed), 9, 4);
lean_closure_set(v___x_1793_, 0, v_a_1786_);
lean_closure_set(v___x_1793_, 1, v_sep_1782_);
lean_closure_set(v___x_1793_, 2, v_a_1788_);
lean_closure_set(v___x_1793_, 3, v___x_1792_);
if (v_isShared_1791_ == 0)
{
lean_ctor_set(v___x_1790_, 0, v___x_1793_);
v___x_1795_ = v___x_1790_;
goto v_reusejp_1794_;
}
else
{
lean_object* v_reuseFailAlloc_1796_; 
v_reuseFailAlloc_1796_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1796_, 0, v___x_1793_);
v___x_1795_ = v_reuseFailAlloc_1796_;
goto v_reusejp_1794_;
}
v_reusejp_1794_:
{
return v___x_1795_;
}
}
}
else
{
lean_dec(v_a_1786_);
lean_dec_ref(v_sep_1782_);
return v___x_1787_;
}
}
else
{
lean_dec_ref(v_psep_1783_);
lean_dec_ref(v_sep_1782_);
lean_dec(v_a_1602_);
lean_dec_ref(v_a_1601_);
return v___x_1785_;
}
}
default: 
{
lean_object* v_val_1798_; lean_object* v_asciiVal_1799_; uint8_t v_preserveForPP_1800_; lean_object* v___x_1801_; lean_object* v___x_1802_; lean_object* v___x_1803_; 
lean_dec(v_a_1602_);
lean_dec_ref(v_a_1601_);
v_val_1798_ = lean_ctor_get(v_x_1600_, 0);
lean_inc_ref(v_val_1798_);
v_asciiVal_1799_ = lean_ctor_get(v_x_1600_, 1);
lean_inc_ref(v_asciiVal_1799_);
v_preserveForPP_1800_ = lean_ctor_get_uint8(v_x_1600_, sizeof(void*)*2);
lean_dec_ref_known(v_x_1600_, 2);
v___x_1801_ = lean_box(v_preserveForPP_1800_);
v___x_1802_ = lean_alloc_closure((void*)(l_Lean_Parser_unicodeSymbol_formatter___boxed), 8, 3);
lean_closure_set(v___x_1802_, 0, v_val_1798_);
lean_closure_set(v___x_1802_, 1, v_asciiVal_1799_);
lean_closure_set(v___x_1802_, 2, v___x_1801_);
v___x_1803_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1803_, 0, v___x_1802_);
return v___x_1803_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Formatter_interpretParserDescr___boxed(lean_object* v_x_1804_, lean_object* v_a_1805_, lean_object* v_a_1806_, lean_object* v_a_1807_){
_start:
{
lean_object* v_res_1808_; 
v_res_1808_ = lean_pretty_printer_formatter_interpret_parser_descr(v_x_1804_, v_a_1805_, v_a_1806_);
return v_res_1808_;
}
}
lean_object* runtime_initialize_Lean_Parser_Basic(uint8_t builtin);
lean_object* runtime_initialize_Lean_Parser_Level(uint8_t builtin);
lean_object* runtime_initialize_Lean_Parser_Term(uint8_t builtin);
lean_object* runtime_initialize_Lean_Parser_Tactic(uint8_t builtin);
lean_object* runtime_initialize_Lean_Parser_Command(uint8_t builtin);
lean_object* runtime_initialize_Lean_Parser_Module(uint8_t builtin);
lean_object* runtime_initialize_Lean_Parser_Syntax(uint8_t builtin);
lean_object* runtime_initialize_Lean_Parser_Do(uint8_t builtin);
lean_object* runtime_initialize_Lean_Parser_Tactic_Doc(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Parser(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Parser_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Parser_Level(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Parser_Term(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Parser_Tactic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Parser_Command(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Parser_Module(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Parser_Syntax(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Parser_Do(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Parser_Tactic_Doc(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_0__Lean_Parser_initFn_00___x40_Lean_Parser_1428529586____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_0__Lean_PrettyPrinter_Parenthesizer_ident_parenthesizer___regBuiltin_Lean_PrettyPrinter_Parenthesizer_ident_parenthesizer__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_0__Lean_PrettyPrinter_Parenthesizer_numLit_parenthesizer___regBuiltin_Lean_PrettyPrinter_Parenthesizer_numLit_parenthesizer__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_0__Lean_PrettyPrinter_Parenthesizer_scientificLit_parenthesizer___regBuiltin_Lean_PrettyPrinter_Parenthesizer_scientificLit_parenthesizer__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_0__Lean_PrettyPrinter_Parenthesizer_charLit_parenthesizer___regBuiltin_Lean_PrettyPrinter_Parenthesizer_charLit_parenthesizer__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_0__Lean_PrettyPrinter_Parenthesizer_strLit_parenthesizer___regBuiltin_Lean_PrettyPrinter_Parenthesizer_strLit_parenthesizer__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_0__Lean_PrettyPrinter_Formatter_ident_formatter___regBuiltin_Lean_PrettyPrinter_Formatter_ident_formatter__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_0__Lean_PrettyPrinter_Formatter_numLit_formatter___regBuiltin_Lean_PrettyPrinter_Formatter_numLit_formatter__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_0__Lean_PrettyPrinter_Formatter_scientificLit_formatter___regBuiltin_Lean_PrettyPrinter_Formatter_scientificLit_formatter__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_0__Lean_PrettyPrinter_Formatter_charLit_formatter___regBuiltin_Lean_PrettyPrinter_Formatter_charLit_formatter__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_0__Lean_PrettyPrinter_Formatter_strLit_formatter___regBuiltin_Lean_PrettyPrinter_Formatter_strLit_formatter__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Parser(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Parser_Basic(uint8_t builtin);
lean_object* initialize_Lean_Parser_Level(uint8_t builtin);
lean_object* initialize_Lean_Parser_Term(uint8_t builtin);
lean_object* initialize_Lean_Parser_Tactic(uint8_t builtin);
lean_object* initialize_Lean_Parser_Command(uint8_t builtin);
lean_object* initialize_Lean_Parser_Module(uint8_t builtin);
lean_object* initialize_Lean_Parser_Syntax(uint8_t builtin);
lean_object* initialize_Lean_Parser_Do(uint8_t builtin);
lean_object* initialize_Lean_Parser_Tactic_Doc(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Parser(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Parser_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Parser_Level(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Parser_Term(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Parser_Tactic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Parser_Command(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Parser_Module(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Parser_Syntax(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Parser_Do(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Parser_Tactic_Doc(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Parser(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Parser(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Parser(builtin);
}
#ifdef __cplusplus
}
#endif

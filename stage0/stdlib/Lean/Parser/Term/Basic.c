// Lean compiler output
// Module: Lean.Parser.Term.Basic
// Imports: public import Lean.Parser.Attr public import Lean.Parser.Level public import Lean.Parser.Term.Doc meta import Lean.Parser.Basic
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
extern lean_object* l_Lean_PrettyPrinter_formatterAttribute;
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_mkAntiquot_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_termParser_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_symbol_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_leadingNode_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_orelse_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addBuiltinDocString(lean_object*, lean_object*);
lean_object* l_Lean_Parser_termParser(lean_object*);
lean_object* l_Lean_Parser_symbol(lean_object*);
lean_object* l_Lean_Parser_andthen(lean_object*, lean_object*);
lean_object* l_Lean_Parser_leadingNode(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_mkAntiquot(lean_object*, lean_object*, uint8_t, uint8_t);
lean_object* l_Lean_Parser_withAntiquot(lean_object*, lean_object*);
lean_object* l_Lean_Parser_withCache(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Parser_categoryParser(lean_object*, lean_object*);
lean_object* l_Lean_Parser_withAntiquotSpliceAndSuffix(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_checkColGe(lean_object*);
extern lean_object* l_Lean_Parser_pushNone;
lean_object* l_Lean_Parser_checkLinebreakBefore(lean_object*);
lean_object* l_Lean_Parser_checkColEq(lean_object*);
lean_object* l_Lean_Parser_orelse(lean_object*, lean_object*);
lean_object* l_Lean_Parser_sepBy1(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Parser_withPosition(lean_object*);
extern lean_object* l_Lean_Parser_skip;
lean_object* l_Lean_Parser_sepBy(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Parser_atomic(lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_notFollowedBy_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_atomic_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_optional_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_PrettyPrinter_parenthesizerAttribute;
lean_object* l_Lean_Parser_mkAntiquot_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_symbol_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_ppLine_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_ppDedent_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_categoryParser_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_sepByIndent_parenthesizer(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_leadingNode_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_withAntiquot_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_node(lean_object*, lean_object*);
lean_object* l_Lean_Parser_notFollowedBy(lean_object*, lean_object*);
lean_object* l_Lean_Parser_optional(lean_object*);
extern lean_object* l_Lean_Parser_ident;
lean_object* l_Lean_Parser_many1(lean_object*);
lean_object* l_Lean_Parser_withoutPosition(lean_object*);
lean_object* l_Lean_Parser_checkColGt(lean_object*);
lean_object* l_Lean_Parser_many(lean_object*);
extern lean_object* l_Lean_Parser_fieldIdx;
lean_object* l_Lean_Parser_ident_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_orelse_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_many1_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_termParser_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_optional_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_node_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_term_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_visitToken___redArg(lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_visitArgs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
extern lean_object* l_Lean_Parser_maxPrec;
lean_object* l_Lean_Parser_sepBy1Indent_parenthesizer(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_orelse_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_optional_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_withoutPosition_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_ppGroup_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_group_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_group_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_ident_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_many1_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_node_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_ppGroup_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_categoryParser_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_orelse_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_sepByIndent_formatter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ppLine_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ppDedent_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_optional_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_withoutPosition_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_group_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_many_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_pushLine___redArg(lean_object*);
lean_object* l_Lean_Parser_addBuiltinLeadingParser(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_MonadTraverser_goLeft___at___00Lean_PrettyPrinter_Parenthesizer_visitArgs_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_node_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_checkColGt_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_notFollowedBy_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_ppSpace_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_withAntiquot_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_withCache_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_ppGroup_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_sepBy1_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addBuiltinDeclarationRanges(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_MonadTraverser_goLeft___at___00Lean_PrettyPrinter_Formatter_visitArgs_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_node_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_checkColGt_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_registerBuiltinParserAttribute(lean_object*, lean_object*, uint8_t, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_fieldIdx_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_many_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_sepBy1_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_registerAlias(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_registerAlias(lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_registerAlias(lean_object*, lean_object*);
lean_object* l_Lean_Parser_withCache_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_ppGroup_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_registerBuiltinDynamicParserAttribute(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__0_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "builtin_tactic_parser"};
static const lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__0_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__0_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__1_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__0_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(20, 176, 46, 125, 174, 255, 81, 192)}};
static const lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__1_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__1_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__4_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Category"};
static const lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__4_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__4_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__5_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "tactic"};
static const lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__5_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__5_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__6_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__6_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__6_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__6_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__6_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__value_aux_1),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__4_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(36, 45, 52, 71, 90, 26, 52, 161)}};
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__6_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__6_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__value_aux_2),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__5_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(40, 110, 193, 251, 60, 241, 71, 65)}};
static const lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__6_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__6_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__7_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__7_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__8_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__8_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__8_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__9_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__9_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__10_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__10_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__11_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__11_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__12_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Term"};
static const lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__12_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__12_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__13_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__13_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__14_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Basic"};
static const lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__14_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__14_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__15_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__15_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__16_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__16_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__17_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__17_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__18_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__18_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__19_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "initFn"};
static const lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__19_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__19_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__20_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__20_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__21_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_@"};
static const lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__21_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__21_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__22_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__22_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__23_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__23_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__24_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__24_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__25_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__25_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__26_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__26_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__27_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__27_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__28_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "_hygCtx"};
static const lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__28_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__28_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__29_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__29_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__30_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "_hyg"};
static const lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__30_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__30_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__31_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__31_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__32_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__32_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__33_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "tactic_parser"};
static const lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__33_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__33_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__34_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__33_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(177, 200, 46, 177, 115, 60, 146, 227)}};
static const lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__34_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__34_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__35_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__5_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(99, 76, 33, 121, 85, 143, 17, 224)}};
static const lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__35_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__35_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_tacticParser(lean_object*);
static const lean_string_object l_Lean_Parser_convParser___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "conv"};
static const lean_object* l_Lean_Parser_convParser___closed__0 = (const lean_object*)&l_Lean_Parser_convParser___closed__0_value;
static const lean_ctor_object l_Lean_Parser_convParser___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_convParser___closed__0_value),LEAN_SCALAR_PTR_LITERAL(232, 67, 39, 189, 45, 247, 54, 81)}};
static const lean_object* l_Lean_Parser_convParser___closed__1 = (const lean_object*)&l_Lean_Parser_convParser___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Parser_convParser(lean_object*);
static const lean_string_object l_Lean_Parser_Tactic_sepByIndentSemicolon_formatter___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "; "};
static const lean_object* l_Lean_Parser_Tactic_sepByIndentSemicolon_formatter___closed__0 = (const lean_object*)&l_Lean_Parser_Tactic_sepByIndentSemicolon_formatter___closed__0_value;
static const lean_closure_object l_Lean_Parser_Tactic_sepByIndentSemicolon_formatter___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_symbol_formatter___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_sepByIndentSemicolon_formatter___closed__0_value)} };
static const lean_object* l_Lean_Parser_Tactic_sepByIndentSemicolon_formatter___closed__1 = (const lean_object*)&l_Lean_Parser_Tactic_sepByIndentSemicolon_formatter___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_sepByIndentSemicolon_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_sepByIndentSemicolon_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Parser_Tactic_sepByIndentSemicolon_parenthesizer___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_symbol_parenthesizer___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_sepByIndentSemicolon_formatter___closed__0_value)} };
static const lean_object* l_Lean_Parser_Tactic_sepByIndentSemicolon_parenthesizer___closed__0 = (const lean_object*)&l_Lean_Parser_Tactic_sepByIndentSemicolon_parenthesizer___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_sepByIndentSemicolon_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_sepByIndentSemicolon_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Parser_Tactic_sepByIndentSemicolon___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_sepByIndentSemicolon___closed__0;
static const lean_string_object l_Lean_Parser_Tactic_sepByIndentSemicolon___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "sepBy"};
static const lean_object* l_Lean_Parser_Tactic_sepByIndentSemicolon___closed__1 = (const lean_object*)&l_Lean_Parser_Tactic_sepByIndentSemicolon___closed__1_value;
static const lean_ctor_object l_Lean_Parser_Tactic_sepByIndentSemicolon___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic_sepByIndentSemicolon___closed__1_value),LEAN_SCALAR_PTR_LITERAL(196, 56, 254, 223, 11, 70, 55, 147)}};
static const lean_object* l_Lean_Parser_Tactic_sepByIndentSemicolon___closed__2 = (const lean_object*)&l_Lean_Parser_Tactic_sepByIndentSemicolon___closed__2_value;
static const lean_string_object l_Lean_Parser_Tactic_sepByIndentSemicolon___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "*"};
static const lean_object* l_Lean_Parser_Tactic_sepByIndentSemicolon___closed__3 = (const lean_object*)&l_Lean_Parser_Tactic_sepByIndentSemicolon___closed__3_value;
static lean_once_cell_t l_Lean_Parser_Tactic_sepByIndentSemicolon___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_sepByIndentSemicolon___closed__4;
static const lean_string_object l_Lean_Parser_Tactic_sepByIndentSemicolon___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "irrelevant"};
static const lean_object* l_Lean_Parser_Tactic_sepByIndentSemicolon___closed__5 = (const lean_object*)&l_Lean_Parser_Tactic_sepByIndentSemicolon___closed__5_value;
static lean_once_cell_t l_Lean_Parser_Tactic_sepByIndentSemicolon___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_sepByIndentSemicolon___closed__6;
static lean_once_cell_t l_Lean_Parser_Tactic_sepByIndentSemicolon___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_sepByIndentSemicolon___closed__7;
static const lean_string_object l_Lean_Parser_Tactic_sepByIndentSemicolon___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "line break"};
static const lean_object* l_Lean_Parser_Tactic_sepByIndentSemicolon___closed__8 = (const lean_object*)&l_Lean_Parser_Tactic_sepByIndentSemicolon___closed__8_value;
static lean_once_cell_t l_Lean_Parser_Tactic_sepByIndentSemicolon___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_sepByIndentSemicolon___closed__9;
static lean_once_cell_t l_Lean_Parser_Tactic_sepByIndentSemicolon___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_sepByIndentSemicolon___closed__10;
static lean_once_cell_t l_Lean_Parser_Tactic_sepByIndentSemicolon___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_sepByIndentSemicolon___closed__11;
static lean_once_cell_t l_Lean_Parser_Tactic_sepByIndentSemicolon___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_sepByIndentSemicolon___closed__12;
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_sepByIndentSemicolon(lean_object*);
static const lean_string_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_sepByIndentSemicolon___regBuiltin_Lean_Parser_Tactic_sepByIndentSemicolon_docString__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_sepByIndentSemicolon___regBuiltin_Lean_Parser_Tactic_sepByIndentSemicolon_docString__1___closed__0 = (const lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_sepByIndentSemicolon___regBuiltin_Lean_Parser_Tactic_sepByIndentSemicolon_docString__1___closed__0_value;
static const lean_string_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_sepByIndentSemicolon___regBuiltin_Lean_Parser_Tactic_sepByIndentSemicolon_docString__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "sepByIndentSemicolon"};
static const lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_sepByIndentSemicolon___regBuiltin_Lean_Parser_Tactic_sepByIndentSemicolon_docString__1___closed__1 = (const lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_sepByIndentSemicolon___regBuiltin_Lean_Parser_Tactic_sepByIndentSemicolon_docString__1___closed__1_value;
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_sepByIndentSemicolon___regBuiltin_Lean_Parser_Tactic_sepByIndentSemicolon_docString__1___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_sepByIndentSemicolon___regBuiltin_Lean_Parser_Tactic_sepByIndentSemicolon_docString__1___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_sepByIndentSemicolon___regBuiltin_Lean_Parser_Tactic_sepByIndentSemicolon_docString__1___closed__2_value_aux_0),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_sepByIndentSemicolon___regBuiltin_Lean_Parser_Tactic_sepByIndentSemicolon_docString__1___closed__2_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_sepByIndentSemicolon___regBuiltin_Lean_Parser_Tactic_sepByIndentSemicolon_docString__1___closed__2_value_aux_1),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_sepByIndentSemicolon___regBuiltin_Lean_Parser_Tactic_sepByIndentSemicolon_docString__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_sepByIndentSemicolon___regBuiltin_Lean_Parser_Tactic_sepByIndentSemicolon_docString__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_sepByIndentSemicolon___regBuiltin_Lean_Parser_Tactic_sepByIndentSemicolon_docString__1___closed__2_value_aux_2),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_sepByIndentSemicolon___regBuiltin_Lean_Parser_Tactic_sepByIndentSemicolon_docString__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(170, 99, 196, 249, 102, 11, 22, 231)}};
static const lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_sepByIndentSemicolon___regBuiltin_Lean_Parser_Tactic_sepByIndentSemicolon_docString__1___closed__2 = (const lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_sepByIndentSemicolon___regBuiltin_Lean_Parser_Tactic_sepByIndentSemicolon_docString__1___closed__2_value;
static const lean_string_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_sepByIndentSemicolon___regBuiltin_Lean_Parser_Tactic_sepByIndentSemicolon_docString__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 350, .m_capacity = 350, .m_length = 349, .m_data = "`sepByIndentSemicolon(p)` parses a sequence of `p` optionally followed by `;`,\nsimilar to `manyIndent(p \";\"\?)`, except that if two occurrences of `p` occur on the same line,\nthe `;` is mandatory. This is used by tactic parsing, so that\n```\nexample := by\n  skip\n  skip\n```\nis legal, but `by skip skip` is not - it must be written as `by skip; skip`. "};
static const lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_sepByIndentSemicolon___regBuiltin_Lean_Parser_Tactic_sepByIndentSemicolon_docString__1___closed__3 = (const lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_sepByIndentSemicolon___regBuiltin_Lean_Parser_Tactic_sepByIndentSemicolon_docString__1___closed__3_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_sepByIndentSemicolon___regBuiltin_Lean_Parser_Tactic_sepByIndentSemicolon_docString__1();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_sepByIndentSemicolon___regBuiltin_Lean_Parser_Tactic_sepByIndentSemicolon_docString__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_sepBy1IndentSemicolon_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_sepBy1IndentSemicolon_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_sepBy1IndentSemicolon_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_sepBy1IndentSemicolon_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_sepBy1IndentSemicolon(lean_object*);
static const lean_string_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_sepBy1IndentSemicolon___regBuiltin_Lean_Parser_Tactic_sepBy1IndentSemicolon_docString__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "sepBy1IndentSemicolon"};
static const lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_sepBy1IndentSemicolon___regBuiltin_Lean_Parser_Tactic_sepBy1IndentSemicolon_docString__1___closed__0 = (const lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_sepBy1IndentSemicolon___regBuiltin_Lean_Parser_Tactic_sepBy1IndentSemicolon_docString__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_sepBy1IndentSemicolon___regBuiltin_Lean_Parser_Tactic_sepBy1IndentSemicolon_docString__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_sepBy1IndentSemicolon___regBuiltin_Lean_Parser_Tactic_sepBy1IndentSemicolon_docString__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_sepBy1IndentSemicolon___regBuiltin_Lean_Parser_Tactic_sepBy1IndentSemicolon_docString__1___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_sepBy1IndentSemicolon___regBuiltin_Lean_Parser_Tactic_sepBy1IndentSemicolon_docString__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_sepBy1IndentSemicolon___regBuiltin_Lean_Parser_Tactic_sepBy1IndentSemicolon_docString__1___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_sepByIndentSemicolon___regBuiltin_Lean_Parser_Tactic_sepByIndentSemicolon_docString__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_sepBy1IndentSemicolon___regBuiltin_Lean_Parser_Tactic_sepBy1IndentSemicolon_docString__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_sepBy1IndentSemicolon___regBuiltin_Lean_Parser_Tactic_sepBy1IndentSemicolon_docString__1___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_sepBy1IndentSemicolon___regBuiltin_Lean_Parser_Tactic_sepBy1IndentSemicolon_docString__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(95, 122, 81, 170, 140, 136, 141, 66)}};
static const lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_sepBy1IndentSemicolon___regBuiltin_Lean_Parser_Tactic_sepBy1IndentSemicolon_docString__1___closed__1 = (const lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_sepBy1IndentSemicolon___regBuiltin_Lean_Parser_Tactic_sepBy1IndentSemicolon_docString__1___closed__1_value;
static const lean_string_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_sepBy1IndentSemicolon___regBuiltin_Lean_Parser_Tactic_sepBy1IndentSemicolon_docString__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 363, .m_capacity = 363, .m_length = 362, .m_data = "`sepBy1IndentSemicolon(p)` parses a (nonempty) sequence of `p` optionally followed by `;`,\nsimilar to `many1Indent(p \";\"\?)`, except that if two occurrences of `p` occur on the same line,\nthe `;` is mandatory. This is used by tactic parsing, so that\n```\nexample := by\n  skip\n  skip\n```\nis legal, but `by skip skip` is not - it must be written as `by skip; skip`. "};
static const lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_sepBy1IndentSemicolon___regBuiltin_Lean_Parser_Tactic_sepBy1IndentSemicolon_docString__1___closed__2 = (const lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_sepBy1IndentSemicolon___regBuiltin_Lean_Parser_Tactic_sepBy1IndentSemicolon_docString__1___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_sepBy1IndentSemicolon___regBuiltin_Lean_Parser_Tactic_sepBy1IndentSemicolon_docString__1();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_sepBy1IndentSemicolon___regBuiltin_Lean_Parser_Tactic_sepBy1IndentSemicolon_docString__1___boxed(lean_object*);
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_initFn___closed__0_00___x40_Lean_Parser_Term_Basic_1911936479____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_sepByIndentSemicolon___regBuiltin_Lean_Parser_Tactic_sepByIndentSemicolon_docString__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(139, 141, 160, 225, 89, 107, 71, 117)}};
static const lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_initFn___closed__0_00___x40_Lean_Parser_Term_Basic_1911936479____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_initFn___closed__0_00___x40_Lean_Parser_Term_Basic_1911936479____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_initFn___closed__1_00___x40_Lean_Parser_Term_Basic_1911936479____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_Tactic_sepByIndentSemicolon, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_initFn___closed__1_00___x40_Lean_Parser_Term_Basic_1911936479____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_initFn___closed__1_00___x40_Lean_Parser_Term_Basic_1911936479____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_initFn___closed__2_00___x40_Lean_Parser_Term_Basic_1911936479____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_initFn___closed__1_00___x40_Lean_Parser_Term_Basic_1911936479____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_initFn___closed__2_00___x40_Lean_Parser_Term_Basic_1911936479____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_initFn___closed__2_00___x40_Lean_Parser_Term_Basic_1911936479____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_initFn___closed__3_00___x40_Lean_Parser_Term_Basic_1911936479____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_sepByIndentSemicolon___regBuiltin_Lean_Parser_Tactic_sepByIndentSemicolon_docString__1___closed__2_value)}};
static const lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_initFn___closed__3_00___x40_Lean_Parser_Term_Basic_1911936479____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_initFn___closed__3_00___x40_Lean_Parser_Term_Basic_1911936479____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_initFn___closed__4_00___x40_Lean_Parser_Term_Basic_1911936479____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_initFn___closed__4_00___x40_Lean_Parser_Term_Basic_1911936479____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_initFn___closed__4_00___x40_Lean_Parser_Term_Basic_1911936479____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_initFn___closed__5_00___x40_Lean_Parser_Term_Basic_1911936479____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_initFn___closed__5_00___x40_Lean_Parser_Term_Basic_1911936479____hygCtx___hyg_2_;
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_initFn___closed__6_00___x40_Lean_Parser_Term_Basic_1911936479____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_sepBy1IndentSemicolon___regBuiltin_Lean_Parser_Tactic_sepBy1IndentSemicolon_docString__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(22, 113, 252, 92, 83, 246, 160, 172)}};
static const lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_initFn___closed__6_00___x40_Lean_Parser_Term_Basic_1911936479____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_initFn___closed__6_00___x40_Lean_Parser_Term_Basic_1911936479____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_initFn___closed__7_00___x40_Lean_Parser_Term_Basic_1911936479____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_Tactic_sepBy1IndentSemicolon, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_initFn___closed__7_00___x40_Lean_Parser_Term_Basic_1911936479____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_initFn___closed__7_00___x40_Lean_Parser_Term_Basic_1911936479____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_initFn___closed__8_00___x40_Lean_Parser_Term_Basic_1911936479____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_initFn___closed__7_00___x40_Lean_Parser_Term_Basic_1911936479____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_initFn___closed__8_00___x40_Lean_Parser_Term_Basic_1911936479____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_initFn___closed__8_00___x40_Lean_Parser_Term_Basic_1911936479____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_initFn___closed__9_00___x40_Lean_Parser_Term_Basic_1911936479____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_sepBy1IndentSemicolon___regBuiltin_Lean_Parser_Tactic_sepBy1IndentSemicolon_docString__1___closed__1_value)}};
static const lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_initFn___closed__9_00___x40_Lean_Parser_Term_Basic_1911936479____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_initFn___closed__9_00___x40_Lean_Parser_Term_Basic_1911936479____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_initFn___closed__10_00___x40_Lean_Parser_Term_Basic_1911936479____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_Tactic_sepBy1IndentSemicolon_formatter___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_initFn___closed__10_00___x40_Lean_Parser_Term_Basic_1911936479____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_initFn___closed__10_00___x40_Lean_Parser_Term_Basic_1911936479____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_initFn___closed__11_00___x40_Lean_Parser_Term_Basic_1911936479____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_initFn___closed__10_00___x40_Lean_Parser_Term_Basic_1911936479____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_initFn___closed__11_00___x40_Lean_Parser_Term_Basic_1911936479____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_initFn___closed__11_00___x40_Lean_Parser_Term_Basic_1911936479____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_initFn___closed__12_00___x40_Lean_Parser_Term_Basic_1911936479____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_Tactic_sepBy1IndentSemicolon_parenthesizer___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_initFn___closed__12_00___x40_Lean_Parser_Term_Basic_1911936479____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_initFn___closed__12_00___x40_Lean_Parser_Term_Basic_1911936479____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_initFn___closed__13_00___x40_Lean_Parser_Term_Basic_1911936479____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_initFn___closed__12_00___x40_Lean_Parser_Term_Basic_1911936479____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_initFn___closed__13_00___x40_Lean_Parser_Term_Basic_1911936479____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_initFn___closed__13_00___x40_Lean_Parser_Term_Basic_1911936479____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_initFn___closed__14_00___x40_Lean_Parser_Term_Basic_1911936479____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_Tactic_sepByIndentSemicolon_formatter___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_initFn___closed__14_00___x40_Lean_Parser_Term_Basic_1911936479____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_initFn___closed__14_00___x40_Lean_Parser_Term_Basic_1911936479____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_initFn___closed__15_00___x40_Lean_Parser_Term_Basic_1911936479____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_initFn___closed__14_00___x40_Lean_Parser_Term_Basic_1911936479____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_initFn___closed__15_00___x40_Lean_Parser_Term_Basic_1911936479____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_initFn___closed__15_00___x40_Lean_Parser_Term_Basic_1911936479____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_initFn___closed__16_00___x40_Lean_Parser_Term_Basic_1911936479____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_Tactic_sepByIndentSemicolon_parenthesizer___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_initFn___closed__16_00___x40_Lean_Parser_Term_Basic_1911936479____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_initFn___closed__16_00___x40_Lean_Parser_Term_Basic_1911936479____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_initFn___closed__17_00___x40_Lean_Parser_Term_Basic_1911936479____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_initFn___closed__16_00___x40_Lean_Parser_Term_Basic_1911936479____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_initFn___closed__17_00___x40_Lean_Parser_Term_Basic_1911936479____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_initFn___closed__17_00___x40_Lean_Parser_Term_Basic_1911936479____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_initFn_00___x40_Lean_Parser_Term_Basic_1911936479____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_initFn_00___x40_Lean_Parser_Term_Basic_1911936479____hygCtx___hyg_2____boxed(lean_object*);
static const lean_string_object l_Lean_Parser_Tactic_tacticSeq1Indented___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "tacticSeq1Indented"};
static const lean_object* l_Lean_Parser_Tactic_tacticSeq1Indented___closed__0 = (const lean_object*)&l_Lean_Parser_Tactic_tacticSeq1Indented___closed__0_value;
static const lean_ctor_object l_Lean_Parser_Tactic_tacticSeq1Indented___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_Tactic_tacticSeq1Indented___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_tacticSeq1Indented___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_Tactic_tacticSeq1Indented___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_tacticSeq1Indented___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_sepByIndentSemicolon___regBuiltin_Lean_Parser_Tactic_sepByIndentSemicolon_docString__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Parser_Tactic_tacticSeq1Indented___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_tacticSeq1Indented___closed__1_value_aux_2),((lean_object*)&l_Lean_Parser_Tactic_tacticSeq1Indented___closed__0_value),LEAN_SCALAR_PTR_LITERAL(223, 90, 160, 238, 133, 180, 23, 239)}};
static const lean_object* l_Lean_Parser_Tactic_tacticSeq1Indented___closed__1 = (const lean_object*)&l_Lean_Parser_Tactic_tacticSeq1Indented___closed__1_value;
static lean_once_cell_t l_Lean_Parser_Tactic_tacticSeq1Indented___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_tacticSeq1Indented___closed__2;
static lean_once_cell_t l_Lean_Parser_Tactic_tacticSeq1Indented___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_tacticSeq1Indented___closed__3;
static lean_once_cell_t l_Lean_Parser_Tactic_tacticSeq1Indented___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_tacticSeq1Indented___closed__4;
static lean_once_cell_t l_Lean_Parser_Tactic_tacticSeq1Indented___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_tacticSeq1Indented___closed__5;
static lean_once_cell_t l_Lean_Parser_Tactic_tacticSeq1Indented___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_tacticSeq1Indented___closed__6;
static lean_once_cell_t l_Lean_Parser_Tactic_tacticSeq1Indented___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_tacticSeq1Indented___closed__7;
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_tacticSeq1Indented;
static const lean_string_object l_Lean_Parser_Tactic_tacticSeqBracketed___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "tacticSeqBracketed"};
static const lean_object* l_Lean_Parser_Tactic_tacticSeqBracketed___closed__0 = (const lean_object*)&l_Lean_Parser_Tactic_tacticSeqBracketed___closed__0_value;
static const lean_ctor_object l_Lean_Parser_Tactic_tacticSeqBracketed___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_Tactic_tacticSeqBracketed___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_tacticSeqBracketed___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_Tactic_tacticSeqBracketed___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_tacticSeqBracketed___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_sepByIndentSemicolon___regBuiltin_Lean_Parser_Tactic_sepByIndentSemicolon_docString__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Parser_Tactic_tacticSeqBracketed___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_tacticSeqBracketed___closed__1_value_aux_2),((lean_object*)&l_Lean_Parser_Tactic_tacticSeqBracketed___closed__0_value),LEAN_SCALAR_PTR_LITERAL(142, 80, 121, 250, 245, 54, 71, 145)}};
static const lean_object* l_Lean_Parser_Tactic_tacticSeqBracketed___closed__1 = (const lean_object*)&l_Lean_Parser_Tactic_tacticSeqBracketed___closed__1_value;
static lean_once_cell_t l_Lean_Parser_Tactic_tacticSeqBracketed___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_tacticSeqBracketed___closed__2;
static const lean_string_object l_Lean_Parser_Tactic_tacticSeqBracketed___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "{ "};
static const lean_object* l_Lean_Parser_Tactic_tacticSeqBracketed___closed__3 = (const lean_object*)&l_Lean_Parser_Tactic_tacticSeqBracketed___closed__3_value;
static lean_once_cell_t l_Lean_Parser_Tactic_tacticSeqBracketed___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_tacticSeqBracketed___closed__4;
static lean_once_cell_t l_Lean_Parser_Tactic_tacticSeqBracketed___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_tacticSeqBracketed___closed__5;
static const lean_string_object l_Lean_Parser_Tactic_tacticSeqBracketed___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "}"};
static const lean_object* l_Lean_Parser_Tactic_tacticSeqBracketed___closed__6 = (const lean_object*)&l_Lean_Parser_Tactic_tacticSeqBracketed___closed__6_value;
static lean_once_cell_t l_Lean_Parser_Tactic_tacticSeqBracketed___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_tacticSeqBracketed___closed__7;
static lean_once_cell_t l_Lean_Parser_Tactic_tacticSeqBracketed___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_tacticSeqBracketed___closed__8;
static lean_once_cell_t l_Lean_Parser_Tactic_tacticSeqBracketed___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_tacticSeqBracketed___closed__9;
static lean_once_cell_t l_Lean_Parser_Tactic_tacticSeqBracketed___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_tacticSeqBracketed___closed__10;
static lean_once_cell_t l_Lean_Parser_Tactic_tacticSeqBracketed___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_tacticSeqBracketed___closed__11;
static lean_once_cell_t l_Lean_Parser_Tactic_tacticSeqBracketed___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_tacticSeqBracketed___closed__12;
static lean_once_cell_t l_Lean_Parser_Tactic_tacticSeqBracketed___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_tacticSeqBracketed___closed__13;
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_tacticSeqBracketed;
static const lean_string_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeqBracketed___regBuiltin_Lean_Parser_Tactic_tacticSeqBracketed_docString__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 133, .m_capacity = 133, .m_length = 131, .m_data = "The syntax `{ tacs }` is an alternative syntax for `· tacs`.\nIt runs the tactics in sequence, and fails if the goal is not solved. "};
static const lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeqBracketed___regBuiltin_Lean_Parser_Tactic_tacticSeqBracketed_docString__1___closed__0 = (const lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeqBracketed___regBuiltin_Lean_Parser_Tactic_tacticSeqBracketed_docString__1___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeqBracketed___regBuiltin_Lean_Parser_Tactic_tacticSeqBracketed_docString__1();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeqBracketed___regBuiltin_Lean_Parser_Tactic_tacticSeqBracketed_docString__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_tacticParser_formatter___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_tacticParser_formatter___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_tacticParser_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_tacticParser_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Parser_Tactic_tacticSeqBracketed_formatter___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_mkAntiquot_formatter___boxed, .m_arity = 9, .m_num_fixed = 4, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_tacticSeqBracketed___closed__0_value),((lean_object*)&l_Lean_Parser_Tactic_tacticSeqBracketed___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Parser_Tactic_tacticSeqBracketed_formatter___closed__0 = (const lean_object*)&l_Lean_Parser_Tactic_tacticSeqBracketed_formatter___closed__0_value;
static const lean_closure_object l_Lean_Parser_Tactic_tacticSeqBracketed_formatter___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_symbol_formatter___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_tacticSeqBracketed___closed__3_value)} };
static const lean_object* l_Lean_Parser_Tactic_tacticSeqBracketed_formatter___closed__1 = (const lean_object*)&l_Lean_Parser_Tactic_tacticSeqBracketed_formatter___closed__1_value;
static const lean_closure_object l_Lean_Parser_Tactic_tacticSeqBracketed_formatter___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_tacticParser_formatter___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Parser_Tactic_tacticSeqBracketed_formatter___closed__2 = (const lean_object*)&l_Lean_Parser_Tactic_tacticSeqBracketed_formatter___closed__2_value;
static const lean_closure_object l_Lean_Parser_Tactic_tacticSeqBracketed_formatter___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_Tactic_sepByIndentSemicolon_formatter___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_tacticSeqBracketed_formatter___closed__2_value)} };
static const lean_object* l_Lean_Parser_Tactic_tacticSeqBracketed_formatter___closed__3 = (const lean_object*)&l_Lean_Parser_Tactic_tacticSeqBracketed_formatter___closed__3_value;
static lean_once_cell_t l_Lean_Parser_Tactic_tacticSeqBracketed_formatter___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_tacticSeqBracketed_formatter___closed__4;
static const lean_closure_object l_Lean_Parser_Tactic_tacticSeqBracketed_formatter___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_symbol_formatter___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_tacticSeqBracketed___closed__6_value)} };
static const lean_object* l_Lean_Parser_Tactic_tacticSeqBracketed_formatter___closed__5 = (const lean_object*)&l_Lean_Parser_Tactic_tacticSeqBracketed_formatter___closed__5_value;
static lean_once_cell_t l_Lean_Parser_Tactic_tacticSeqBracketed_formatter___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_tacticSeqBracketed_formatter___closed__6;
static lean_once_cell_t l_Lean_Parser_Tactic_tacticSeqBracketed_formatter___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_tacticSeqBracketed_formatter___closed__7;
static lean_once_cell_t l_Lean_Parser_Tactic_tacticSeqBracketed_formatter___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_tacticSeqBracketed_formatter___closed__8;
static lean_once_cell_t l_Lean_Parser_Tactic_tacticSeqBracketed_formatter___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_tacticSeqBracketed_formatter___closed__9;
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_tacticSeqBracketed_formatter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_tacticSeqBracketed_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeq___regBuiltin_Lean_Parser_Tactic_tacticSeqBracketed_formatter__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "formatter"};
static const lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeq___regBuiltin_Lean_Parser_Tactic_tacticSeqBracketed_formatter__5___closed__0 = (const lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeq___regBuiltin_Lean_Parser_Tactic_tacticSeqBracketed_formatter__5___closed__0_value;
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeq___regBuiltin_Lean_Parser_Tactic_tacticSeqBracketed_formatter__5___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeq___regBuiltin_Lean_Parser_Tactic_tacticSeqBracketed_formatter__5___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeq___regBuiltin_Lean_Parser_Tactic_tacticSeqBracketed_formatter__5___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeq___regBuiltin_Lean_Parser_Tactic_tacticSeqBracketed_formatter__5___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeq___regBuiltin_Lean_Parser_Tactic_tacticSeqBracketed_formatter__5___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_sepByIndentSemicolon___regBuiltin_Lean_Parser_Tactic_sepByIndentSemicolon_docString__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeq___regBuiltin_Lean_Parser_Tactic_tacticSeqBracketed_formatter__5___closed__1_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeq___regBuiltin_Lean_Parser_Tactic_tacticSeqBracketed_formatter__5___closed__1_value_aux_2),((lean_object*)&l_Lean_Parser_Tactic_tacticSeqBracketed___closed__0_value),LEAN_SCALAR_PTR_LITERAL(142, 80, 121, 250, 245, 54, 71, 145)}};
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeq___regBuiltin_Lean_Parser_Tactic_tacticSeqBracketed_formatter__5___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeq___regBuiltin_Lean_Parser_Tactic_tacticSeqBracketed_formatter__5___closed__1_value_aux_3),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeq___regBuiltin_Lean_Parser_Tactic_tacticSeqBracketed_formatter__5___closed__0_value),LEAN_SCALAR_PTR_LITERAL(175, 28, 43, 150, 183, 142, 81, 15)}};
static const lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeq___regBuiltin_Lean_Parser_Tactic_tacticSeqBracketed_formatter__5___closed__1 = (const lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeq___regBuiltin_Lean_Parser_Tactic_tacticSeqBracketed_formatter__5___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeq___regBuiltin_Lean_Parser_Tactic_tacticSeqBracketed_formatter__5();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeq___regBuiltin_Lean_Parser_Tactic_tacticSeqBracketed_formatter__5___boxed(lean_object*);
static const lean_closure_object l_Lean_Parser_Tactic_tacticSeq1Indented_formatter___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_mkAntiquot_formatter___boxed, .m_arity = 9, .m_num_fixed = 4, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_tacticSeq1Indented___closed__0_value),((lean_object*)&l_Lean_Parser_Tactic_tacticSeq1Indented___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Parser_Tactic_tacticSeq1Indented_formatter___closed__0 = (const lean_object*)&l_Lean_Parser_Tactic_tacticSeq1Indented_formatter___closed__0_value;
static const lean_closure_object l_Lean_Parser_Tactic_tacticSeq1Indented_formatter___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_Tactic_sepBy1IndentSemicolon_formatter___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_tacticSeqBracketed_formatter___closed__2_value)} };
static const lean_object* l_Lean_Parser_Tactic_tacticSeq1Indented_formatter___closed__1 = (const lean_object*)&l_Lean_Parser_Tactic_tacticSeq1Indented_formatter___closed__1_value;
static const lean_closure_object l_Lean_Parser_Tactic_tacticSeq1Indented_formatter___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_leadingNode_formatter___boxed, .m_arity = 8, .m_num_fixed = 3, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_tacticSeq1Indented___closed__1_value),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic_tacticSeq1Indented_formatter___closed__1_value)} };
static const lean_object* l_Lean_Parser_Tactic_tacticSeq1Indented_formatter___closed__2 = (const lean_object*)&l_Lean_Parser_Tactic_tacticSeq1Indented_formatter___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_tacticSeq1Indented_formatter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_tacticSeq1Indented_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeq___regBuiltin_Lean_Parser_Tactic_tacticSeq1Indented_formatter__9___closed__0_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeq___regBuiltin_Lean_Parser_Tactic_tacticSeq1Indented_formatter__9___closed__0_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeq___regBuiltin_Lean_Parser_Tactic_tacticSeq1Indented_formatter__9___closed__0_value_aux_0),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeq___regBuiltin_Lean_Parser_Tactic_tacticSeq1Indented_formatter__9___closed__0_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeq___regBuiltin_Lean_Parser_Tactic_tacticSeq1Indented_formatter__9___closed__0_value_aux_1),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_sepByIndentSemicolon___regBuiltin_Lean_Parser_Tactic_sepByIndentSemicolon_docString__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeq___regBuiltin_Lean_Parser_Tactic_tacticSeq1Indented_formatter__9___closed__0_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeq___regBuiltin_Lean_Parser_Tactic_tacticSeq1Indented_formatter__9___closed__0_value_aux_2),((lean_object*)&l_Lean_Parser_Tactic_tacticSeq1Indented___closed__0_value),LEAN_SCALAR_PTR_LITERAL(223, 90, 160, 238, 133, 180, 23, 239)}};
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeq___regBuiltin_Lean_Parser_Tactic_tacticSeq1Indented_formatter__9___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeq___regBuiltin_Lean_Parser_Tactic_tacticSeq1Indented_formatter__9___closed__0_value_aux_3),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeq___regBuiltin_Lean_Parser_Tactic_tacticSeqBracketed_formatter__5___closed__0_value),LEAN_SCALAR_PTR_LITERAL(10, 209, 129, 56, 116, 223, 51, 73)}};
static const lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeq___regBuiltin_Lean_Parser_Tactic_tacticSeq1Indented_formatter__9___closed__0 = (const lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeq___regBuiltin_Lean_Parser_Tactic_tacticSeq1Indented_formatter__9___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeq___regBuiltin_Lean_Parser_Tactic_tacticSeq1Indented_formatter__9();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeq___regBuiltin_Lean_Parser_Tactic_tacticSeq1Indented_formatter__9___boxed(lean_object*);
static const lean_string_object l_Lean_Parser_Tactic_tacticSeq_formatter___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "tacticSeq"};
static const lean_object* l_Lean_Parser_Tactic_tacticSeq_formatter___closed__0 = (const lean_object*)&l_Lean_Parser_Tactic_tacticSeq_formatter___closed__0_value;
static const lean_ctor_object l_Lean_Parser_Tactic_tacticSeq_formatter___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_Tactic_tacticSeq_formatter___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_tacticSeq_formatter___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_Tactic_tacticSeq_formatter___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_tacticSeq_formatter___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_sepByIndentSemicolon___regBuiltin_Lean_Parser_Tactic_sepByIndentSemicolon_docString__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Parser_Tactic_tacticSeq_formatter___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_tacticSeq_formatter___closed__1_value_aux_2),((lean_object*)&l_Lean_Parser_Tactic_tacticSeq_formatter___closed__0_value),LEAN_SCALAR_PTR_LITERAL(212, 140, 85, 215, 241, 69, 7, 118)}};
static const lean_object* l_Lean_Parser_Tactic_tacticSeq_formatter___closed__1 = (const lean_object*)&l_Lean_Parser_Tactic_tacticSeq_formatter___closed__1_value;
static const lean_closure_object l_Lean_Parser_Tactic_tacticSeq_formatter___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_mkAntiquot_formatter___boxed, .m_arity = 9, .m_num_fixed = 4, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_tacticSeq_formatter___closed__0_value),((lean_object*)&l_Lean_Parser_Tactic_tacticSeq_formatter___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Parser_Tactic_tacticSeq_formatter___closed__2 = (const lean_object*)&l_Lean_Parser_Tactic_tacticSeq_formatter___closed__2_value;
static lean_once_cell_t l_Lean_Parser_Tactic_tacticSeq_formatter___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_tacticSeq_formatter___closed__3;
static lean_once_cell_t l_Lean_Parser_Tactic_tacticSeq_formatter___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_tacticSeq_formatter___closed__4;
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_tacticSeq_formatter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_tacticSeq_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeq___regBuiltin_Lean_Parser_Tactic_tacticSeq_formatter__13___closed__0_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeq___regBuiltin_Lean_Parser_Tactic_tacticSeq_formatter__13___closed__0_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeq___regBuiltin_Lean_Parser_Tactic_tacticSeq_formatter__13___closed__0_value_aux_0),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeq___regBuiltin_Lean_Parser_Tactic_tacticSeq_formatter__13___closed__0_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeq___regBuiltin_Lean_Parser_Tactic_tacticSeq_formatter__13___closed__0_value_aux_1),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_sepByIndentSemicolon___regBuiltin_Lean_Parser_Tactic_sepByIndentSemicolon_docString__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeq___regBuiltin_Lean_Parser_Tactic_tacticSeq_formatter__13___closed__0_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeq___regBuiltin_Lean_Parser_Tactic_tacticSeq_formatter__13___closed__0_value_aux_2),((lean_object*)&l_Lean_Parser_Tactic_tacticSeq_formatter___closed__0_value),LEAN_SCALAR_PTR_LITERAL(212, 140, 85, 215, 241, 69, 7, 118)}};
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeq___regBuiltin_Lean_Parser_Tactic_tacticSeq_formatter__13___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeq___regBuiltin_Lean_Parser_Tactic_tacticSeq_formatter__13___closed__0_value_aux_3),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeq___regBuiltin_Lean_Parser_Tactic_tacticSeqBracketed_formatter__5___closed__0_value),LEAN_SCALAR_PTR_LITERAL(29, 70, 11, 167, 226, 145, 9, 201)}};
static const lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeq___regBuiltin_Lean_Parser_Tactic_tacticSeq_formatter__13___closed__0 = (const lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeq___regBuiltin_Lean_Parser_Tactic_tacticSeq_formatter__13___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeq___regBuiltin_Lean_Parser_Tactic_tacticSeq_formatter__13();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeq___regBuiltin_Lean_Parser_Tactic_tacticSeq_formatter__13___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_tacticParser_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_tacticParser_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Parser_Tactic_tacticSeqBracketed_parenthesizer___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_mkAntiquot_parenthesizer___boxed, .m_arity = 9, .m_num_fixed = 4, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_tacticSeqBracketed___closed__0_value),((lean_object*)&l_Lean_Parser_Tactic_tacticSeqBracketed___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Parser_Tactic_tacticSeqBracketed_parenthesizer___closed__0 = (const lean_object*)&l_Lean_Parser_Tactic_tacticSeqBracketed_parenthesizer___closed__0_value;
static const lean_closure_object l_Lean_Parser_Tactic_tacticSeqBracketed_parenthesizer___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_symbol_parenthesizer___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_tacticSeqBracketed___closed__3_value)} };
static const lean_object* l_Lean_Parser_Tactic_tacticSeqBracketed_parenthesizer___closed__1 = (const lean_object*)&l_Lean_Parser_Tactic_tacticSeqBracketed_parenthesizer___closed__1_value;
static const lean_closure_object l_Lean_Parser_Tactic_tacticSeqBracketed_parenthesizer___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_tacticParser_parenthesizer___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Parser_Tactic_tacticSeqBracketed_parenthesizer___closed__2 = (const lean_object*)&l_Lean_Parser_Tactic_tacticSeqBracketed_parenthesizer___closed__2_value;
static const lean_closure_object l_Lean_Parser_Tactic_tacticSeqBracketed_parenthesizer___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_Tactic_sepByIndentSemicolon_parenthesizer___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_tacticSeqBracketed_parenthesizer___closed__2_value)} };
static const lean_object* l_Lean_Parser_Tactic_tacticSeqBracketed_parenthesizer___closed__3 = (const lean_object*)&l_Lean_Parser_Tactic_tacticSeqBracketed_parenthesizer___closed__3_value;
static const lean_closure_object l_Lean_Parser_Tactic_tacticSeqBracketed_parenthesizer___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_ppLine_parenthesizer___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Parser_Tactic_tacticSeqBracketed_parenthesizer___closed__4 = (const lean_object*)&l_Lean_Parser_Tactic_tacticSeqBracketed_parenthesizer___closed__4_value;
static const lean_closure_object l_Lean_Parser_Tactic_tacticSeqBracketed_parenthesizer___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_ppDedent_parenthesizer___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_tacticSeqBracketed_parenthesizer___closed__4_value)} };
static const lean_object* l_Lean_Parser_Tactic_tacticSeqBracketed_parenthesizer___closed__5 = (const lean_object*)&l_Lean_Parser_Tactic_tacticSeqBracketed_parenthesizer___closed__5_value;
static const lean_closure_object l_Lean_Parser_Tactic_tacticSeqBracketed_parenthesizer___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_symbol_parenthesizer___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_tacticSeqBracketed___closed__6_value)} };
static const lean_object* l_Lean_Parser_Tactic_tacticSeqBracketed_parenthesizer___closed__6 = (const lean_object*)&l_Lean_Parser_Tactic_tacticSeqBracketed_parenthesizer___closed__6_value;
static const lean_closure_object l_Lean_Parser_Tactic_tacticSeqBracketed_parenthesizer___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_tacticSeqBracketed_parenthesizer___closed__5_value),((lean_object*)&l_Lean_Parser_Tactic_tacticSeqBracketed_parenthesizer___closed__6_value)} };
static const lean_object* l_Lean_Parser_Tactic_tacticSeqBracketed_parenthesizer___closed__7 = (const lean_object*)&l_Lean_Parser_Tactic_tacticSeqBracketed_parenthesizer___closed__7_value;
static const lean_closure_object l_Lean_Parser_Tactic_tacticSeqBracketed_parenthesizer___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_tacticSeqBracketed_parenthesizer___closed__3_value),((lean_object*)&l_Lean_Parser_Tactic_tacticSeqBracketed_parenthesizer___closed__7_value)} };
static const lean_object* l_Lean_Parser_Tactic_tacticSeqBracketed_parenthesizer___closed__8 = (const lean_object*)&l_Lean_Parser_Tactic_tacticSeqBracketed_parenthesizer___closed__8_value;
static const lean_closure_object l_Lean_Parser_Tactic_tacticSeqBracketed_parenthesizer___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_tacticSeqBracketed_parenthesizer___closed__1_value),((lean_object*)&l_Lean_Parser_Tactic_tacticSeqBracketed_parenthesizer___closed__8_value)} };
static const lean_object* l_Lean_Parser_Tactic_tacticSeqBracketed_parenthesizer___closed__9 = (const lean_object*)&l_Lean_Parser_Tactic_tacticSeqBracketed_parenthesizer___closed__9_value;
static const lean_closure_object l_Lean_Parser_Tactic_tacticSeqBracketed_parenthesizer___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Parenthesizer_leadingNode_parenthesizer___boxed, .m_arity = 8, .m_num_fixed = 3, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_tacticSeqBracketed___closed__1_value),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic_tacticSeqBracketed_parenthesizer___closed__9_value)} };
static const lean_object* l_Lean_Parser_Tactic_tacticSeqBracketed_parenthesizer___closed__10 = (const lean_object*)&l_Lean_Parser_Tactic_tacticSeqBracketed_parenthesizer___closed__10_value;
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_tacticSeqBracketed_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_tacticSeqBracketed_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeq___regBuiltin_Lean_Parser_Tactic_tacticSeqBracketed_parenthesizer__19___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "parenthesizer"};
static const lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeq___regBuiltin_Lean_Parser_Tactic_tacticSeqBracketed_parenthesizer__19___closed__0 = (const lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeq___regBuiltin_Lean_Parser_Tactic_tacticSeqBracketed_parenthesizer__19___closed__0_value;
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeq___regBuiltin_Lean_Parser_Tactic_tacticSeqBracketed_parenthesizer__19___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeq___regBuiltin_Lean_Parser_Tactic_tacticSeqBracketed_parenthesizer__19___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeq___regBuiltin_Lean_Parser_Tactic_tacticSeqBracketed_parenthesizer__19___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeq___regBuiltin_Lean_Parser_Tactic_tacticSeqBracketed_parenthesizer__19___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeq___regBuiltin_Lean_Parser_Tactic_tacticSeqBracketed_parenthesizer__19___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_sepByIndentSemicolon___regBuiltin_Lean_Parser_Tactic_sepByIndentSemicolon_docString__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeq___regBuiltin_Lean_Parser_Tactic_tacticSeqBracketed_parenthesizer__19___closed__1_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeq___regBuiltin_Lean_Parser_Tactic_tacticSeqBracketed_parenthesizer__19___closed__1_value_aux_2),((lean_object*)&l_Lean_Parser_Tactic_tacticSeqBracketed___closed__0_value),LEAN_SCALAR_PTR_LITERAL(142, 80, 121, 250, 245, 54, 71, 145)}};
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeq___regBuiltin_Lean_Parser_Tactic_tacticSeqBracketed_parenthesizer__19___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeq___regBuiltin_Lean_Parser_Tactic_tacticSeqBracketed_parenthesizer__19___closed__1_value_aux_3),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeq___regBuiltin_Lean_Parser_Tactic_tacticSeqBracketed_parenthesizer__19___closed__0_value),LEAN_SCALAR_PTR_LITERAL(203, 119, 215, 182, 191, 114, 165, 30)}};
static const lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeq___regBuiltin_Lean_Parser_Tactic_tacticSeqBracketed_parenthesizer__19___closed__1 = (const lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeq___regBuiltin_Lean_Parser_Tactic_tacticSeqBracketed_parenthesizer__19___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeq___regBuiltin_Lean_Parser_Tactic_tacticSeqBracketed_parenthesizer__19();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeq___regBuiltin_Lean_Parser_Tactic_tacticSeqBracketed_parenthesizer__19___boxed(lean_object*);
static const lean_closure_object l_Lean_Parser_Tactic_tacticSeq1Indented_parenthesizer___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_mkAntiquot_parenthesizer___boxed, .m_arity = 9, .m_num_fixed = 4, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_tacticSeq1Indented___closed__0_value),((lean_object*)&l_Lean_Parser_Tactic_tacticSeq1Indented___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Parser_Tactic_tacticSeq1Indented_parenthesizer___closed__0 = (const lean_object*)&l_Lean_Parser_Tactic_tacticSeq1Indented_parenthesizer___closed__0_value;
static const lean_closure_object l_Lean_Parser_Tactic_tacticSeq1Indented_parenthesizer___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_Tactic_sepBy1IndentSemicolon_parenthesizer___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_tacticSeqBracketed_parenthesizer___closed__2_value)} };
static const lean_object* l_Lean_Parser_Tactic_tacticSeq1Indented_parenthesizer___closed__1 = (const lean_object*)&l_Lean_Parser_Tactic_tacticSeq1Indented_parenthesizer___closed__1_value;
static const lean_closure_object l_Lean_Parser_Tactic_tacticSeq1Indented_parenthesizer___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Parenthesizer_leadingNode_parenthesizer___boxed, .m_arity = 8, .m_num_fixed = 3, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_tacticSeq1Indented___closed__1_value),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic_tacticSeq1Indented_parenthesizer___closed__1_value)} };
static const lean_object* l_Lean_Parser_Tactic_tacticSeq1Indented_parenthesizer___closed__2 = (const lean_object*)&l_Lean_Parser_Tactic_tacticSeq1Indented_parenthesizer___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_tacticSeq1Indented_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_tacticSeq1Indented_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeq___regBuiltin_Lean_Parser_Tactic_tacticSeq1Indented_parenthesizer__23___closed__0_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeq___regBuiltin_Lean_Parser_Tactic_tacticSeq1Indented_parenthesizer__23___closed__0_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeq___regBuiltin_Lean_Parser_Tactic_tacticSeq1Indented_parenthesizer__23___closed__0_value_aux_0),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeq___regBuiltin_Lean_Parser_Tactic_tacticSeq1Indented_parenthesizer__23___closed__0_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeq___regBuiltin_Lean_Parser_Tactic_tacticSeq1Indented_parenthesizer__23___closed__0_value_aux_1),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_sepByIndentSemicolon___regBuiltin_Lean_Parser_Tactic_sepByIndentSemicolon_docString__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeq___regBuiltin_Lean_Parser_Tactic_tacticSeq1Indented_parenthesizer__23___closed__0_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeq___regBuiltin_Lean_Parser_Tactic_tacticSeq1Indented_parenthesizer__23___closed__0_value_aux_2),((lean_object*)&l_Lean_Parser_Tactic_tacticSeq1Indented___closed__0_value),LEAN_SCALAR_PTR_LITERAL(223, 90, 160, 238, 133, 180, 23, 239)}};
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeq___regBuiltin_Lean_Parser_Tactic_tacticSeq1Indented_parenthesizer__23___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeq___regBuiltin_Lean_Parser_Tactic_tacticSeq1Indented_parenthesizer__23___closed__0_value_aux_3),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeq___regBuiltin_Lean_Parser_Tactic_tacticSeqBracketed_parenthesizer__19___closed__0_value),LEAN_SCALAR_PTR_LITERAL(166, 13, 185, 142, 76, 107, 137, 177)}};
static const lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeq___regBuiltin_Lean_Parser_Tactic_tacticSeq1Indented_parenthesizer__23___closed__0 = (const lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeq___regBuiltin_Lean_Parser_Tactic_tacticSeq1Indented_parenthesizer__23___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeq___regBuiltin_Lean_Parser_Tactic_tacticSeq1Indented_parenthesizer__23();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeq___regBuiltin_Lean_Parser_Tactic_tacticSeq1Indented_parenthesizer__23___boxed(lean_object*);
static const lean_closure_object l_Lean_Parser_Tactic_tacticSeq_parenthesizer___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_mkAntiquot_parenthesizer___boxed, .m_arity = 9, .m_num_fixed = 4, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_tacticSeq_formatter___closed__0_value),((lean_object*)&l_Lean_Parser_Tactic_tacticSeq_formatter___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Parser_Tactic_tacticSeq_parenthesizer___closed__0 = (const lean_object*)&l_Lean_Parser_Tactic_tacticSeq_parenthesizer___closed__0_value;
static lean_once_cell_t l_Lean_Parser_Tactic_tacticSeq_parenthesizer___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_tacticSeq_parenthesizer___closed__1;
static lean_once_cell_t l_Lean_Parser_Tactic_tacticSeq_parenthesizer___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_tacticSeq_parenthesizer___closed__2;
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_tacticSeq_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_tacticSeq_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeq___regBuiltin_Lean_Parser_Tactic_tacticSeq_parenthesizer__27___closed__0_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeq___regBuiltin_Lean_Parser_Tactic_tacticSeq_parenthesizer__27___closed__0_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeq___regBuiltin_Lean_Parser_Tactic_tacticSeq_parenthesizer__27___closed__0_value_aux_0),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeq___regBuiltin_Lean_Parser_Tactic_tacticSeq_parenthesizer__27___closed__0_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeq___regBuiltin_Lean_Parser_Tactic_tacticSeq_parenthesizer__27___closed__0_value_aux_1),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_sepByIndentSemicolon___regBuiltin_Lean_Parser_Tactic_sepByIndentSemicolon_docString__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeq___regBuiltin_Lean_Parser_Tactic_tacticSeq_parenthesizer__27___closed__0_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeq___regBuiltin_Lean_Parser_Tactic_tacticSeq_parenthesizer__27___closed__0_value_aux_2),((lean_object*)&l_Lean_Parser_Tactic_tacticSeq_formatter___closed__0_value),LEAN_SCALAR_PTR_LITERAL(212, 140, 85, 215, 241, 69, 7, 118)}};
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeq___regBuiltin_Lean_Parser_Tactic_tacticSeq_parenthesizer__27___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeq___regBuiltin_Lean_Parser_Tactic_tacticSeq_parenthesizer__27___closed__0_value_aux_3),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeq___regBuiltin_Lean_Parser_Tactic_tacticSeqBracketed_parenthesizer__19___closed__0_value),LEAN_SCALAR_PTR_LITERAL(105, 229, 96, 2, 142, 147, 226, 101)}};
static const lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeq___regBuiltin_Lean_Parser_Tactic_tacticSeq_parenthesizer__27___closed__0 = (const lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeq___regBuiltin_Lean_Parser_Tactic_tacticSeq_parenthesizer__27___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeq___regBuiltin_Lean_Parser_Tactic_tacticSeq_parenthesizer__27();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeq___regBuiltin_Lean_Parser_Tactic_tacticSeq_parenthesizer__27___boxed(lean_object*);
static lean_once_cell_t l_Lean_Parser_Tactic_tacticSeq___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_tacticSeq___closed__0;
static lean_once_cell_t l_Lean_Parser_Tactic_tacticSeq___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_tacticSeq___closed__1;
static lean_once_cell_t l_Lean_Parser_Tactic_tacticSeq___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_tacticSeq___closed__2;
static lean_once_cell_t l_Lean_Parser_Tactic_tacticSeq___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_tacticSeq___closed__3;
static lean_once_cell_t l_Lean_Parser_Tactic_tacticSeq___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_tacticSeq___closed__4;
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_tacticSeq;
static const lean_string_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeq___regBuiltin_Lean_Parser_Tactic_tacticSeq_docString__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 166, .m_capacity = 166, .m_length = 165, .m_data = "A sequence of tactics in brackets, or a delimiter-free indented sequence of tactics.\nDelimiter-free indentation is determined by the *first* tactic of the sequence. "};
static const lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeq___regBuiltin_Lean_Parser_Tactic_tacticSeq_docString__1___closed__0 = (const lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeq___regBuiltin_Lean_Parser_Tactic_tacticSeq_docString__1___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeq___regBuiltin_Lean_Parser_Tactic_tacticSeq_docString__1();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeq___regBuiltin_Lean_Parser_Tactic_tacticSeq_docString__1___boxed(lean_object*);
static const lean_closure_object l_Lean_Parser_Tactic_tacticSeqIndentGt_formatter___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Syntax_MonadTraverser_goLeft___at___00Lean_PrettyPrinter_Formatter_visitArgs_spec__1___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Parser_Tactic_tacticSeqIndentGt_formatter___closed__0 = (const lean_object*)&l_Lean_Parser_Tactic_tacticSeqIndentGt_formatter___closed__0_value;
static lean_once_cell_t l_Lean_Parser_Tactic_tacticSeqIndentGt_formatter___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_tacticSeqIndentGt_formatter___closed__1;
static const lean_closure_object l_Lean_Parser_Tactic_tacticSeqIndentGt_formatter___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Formatter_node_formatter___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_tacticSeq1Indented___closed__1_value),((lean_object*)&l_Lean_Parser_Tactic_tacticSeqIndentGt_formatter___closed__0_value)} };
static const lean_object* l_Lean_Parser_Tactic_tacticSeqIndentGt_formatter___closed__2 = (const lean_object*)&l_Lean_Parser_Tactic_tacticSeqIndentGt_formatter___closed__2_value;
static lean_once_cell_t l_Lean_Parser_Tactic_tacticSeqIndentGt_formatter___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_tacticSeqIndentGt_formatter___closed__3;
static lean_once_cell_t l_Lean_Parser_Tactic_tacticSeqIndentGt_formatter___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_tacticSeqIndentGt_formatter___closed__4;
static lean_once_cell_t l_Lean_Parser_Tactic_tacticSeqIndentGt_formatter___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_tacticSeqIndentGt_formatter___closed__5;
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_tacticSeqIndentGt_formatter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_tacticSeqIndentGt_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeqIndentGt___regBuiltin_Lean_Parser_Tactic_tacticSeqIndentGt_formatter__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "tacticSeqIndentGt"};
static const lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeqIndentGt___regBuiltin_Lean_Parser_Tactic_tacticSeqIndentGt_formatter__3___closed__0 = (const lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeqIndentGt___regBuiltin_Lean_Parser_Tactic_tacticSeqIndentGt_formatter__3___closed__0_value;
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeqIndentGt___regBuiltin_Lean_Parser_Tactic_tacticSeqIndentGt_formatter__3___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeqIndentGt___regBuiltin_Lean_Parser_Tactic_tacticSeqIndentGt_formatter__3___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeqIndentGt___regBuiltin_Lean_Parser_Tactic_tacticSeqIndentGt_formatter__3___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeqIndentGt___regBuiltin_Lean_Parser_Tactic_tacticSeqIndentGt_formatter__3___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeqIndentGt___regBuiltin_Lean_Parser_Tactic_tacticSeqIndentGt_formatter__3___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_sepByIndentSemicolon___regBuiltin_Lean_Parser_Tactic_sepByIndentSemicolon_docString__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeqIndentGt___regBuiltin_Lean_Parser_Tactic_tacticSeqIndentGt_formatter__3___closed__1_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeqIndentGt___regBuiltin_Lean_Parser_Tactic_tacticSeqIndentGt_formatter__3___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeqIndentGt___regBuiltin_Lean_Parser_Tactic_tacticSeqIndentGt_formatter__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(212, 234, 202, 179, 65, 11, 242, 216)}};
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeqIndentGt___regBuiltin_Lean_Parser_Tactic_tacticSeqIndentGt_formatter__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeqIndentGt___regBuiltin_Lean_Parser_Tactic_tacticSeqIndentGt_formatter__3___closed__1_value_aux_3),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeq___regBuiltin_Lean_Parser_Tactic_tacticSeqBracketed_formatter__5___closed__0_value),LEAN_SCALAR_PTR_LITERAL(29, 164, 99, 10, 143, 215, 5, 182)}};
static const lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeqIndentGt___regBuiltin_Lean_Parser_Tactic_tacticSeqIndentGt_formatter__3___closed__1 = (const lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeqIndentGt___regBuiltin_Lean_Parser_Tactic_tacticSeqIndentGt_formatter__3___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeqIndentGt___regBuiltin_Lean_Parser_Tactic_tacticSeqIndentGt_formatter__3();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeqIndentGt___regBuiltin_Lean_Parser_Tactic_tacticSeqIndentGt_formatter__3___boxed(lean_object*);
static const lean_closure_object l_Lean_Parser_Tactic_tacticSeqIndentGt_parenthesizer___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Syntax_MonadTraverser_goLeft___at___00Lean_PrettyPrinter_Parenthesizer_visitArgs_spec__1___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Parser_Tactic_tacticSeqIndentGt_parenthesizer___closed__0 = (const lean_object*)&l_Lean_Parser_Tactic_tacticSeqIndentGt_parenthesizer___closed__0_value;
static lean_once_cell_t l_Lean_Parser_Tactic_tacticSeqIndentGt_parenthesizer___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_tacticSeqIndentGt_parenthesizer___closed__1;
static const lean_closure_object l_Lean_Parser_Tactic_tacticSeqIndentGt_parenthesizer___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Parenthesizer_node_parenthesizer___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_tacticSeq1Indented___closed__1_value),((lean_object*)&l_Lean_Parser_Tactic_tacticSeqIndentGt_parenthesizer___closed__0_value)} };
static const lean_object* l_Lean_Parser_Tactic_tacticSeqIndentGt_parenthesizer___closed__2 = (const lean_object*)&l_Lean_Parser_Tactic_tacticSeqIndentGt_parenthesizer___closed__2_value;
static lean_once_cell_t l_Lean_Parser_Tactic_tacticSeqIndentGt_parenthesizer___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_tacticSeqIndentGt_parenthesizer___closed__3;
static lean_once_cell_t l_Lean_Parser_Tactic_tacticSeqIndentGt_parenthesizer___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_tacticSeqIndentGt_parenthesizer___closed__4;
static lean_once_cell_t l_Lean_Parser_Tactic_tacticSeqIndentGt_parenthesizer___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_tacticSeqIndentGt_parenthesizer___closed__5;
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_tacticSeqIndentGt_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_tacticSeqIndentGt_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeqIndentGt___regBuiltin_Lean_Parser_Tactic_tacticSeqIndentGt_parenthesizer__7___closed__0_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeqIndentGt___regBuiltin_Lean_Parser_Tactic_tacticSeqIndentGt_parenthesizer__7___closed__0_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeqIndentGt___regBuiltin_Lean_Parser_Tactic_tacticSeqIndentGt_parenthesizer__7___closed__0_value_aux_0),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeqIndentGt___regBuiltin_Lean_Parser_Tactic_tacticSeqIndentGt_parenthesizer__7___closed__0_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeqIndentGt___regBuiltin_Lean_Parser_Tactic_tacticSeqIndentGt_parenthesizer__7___closed__0_value_aux_1),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_sepByIndentSemicolon___regBuiltin_Lean_Parser_Tactic_sepByIndentSemicolon_docString__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeqIndentGt___regBuiltin_Lean_Parser_Tactic_tacticSeqIndentGt_parenthesizer__7___closed__0_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeqIndentGt___regBuiltin_Lean_Parser_Tactic_tacticSeqIndentGt_parenthesizer__7___closed__0_value_aux_2),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeqIndentGt___regBuiltin_Lean_Parser_Tactic_tacticSeqIndentGt_formatter__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(212, 234, 202, 179, 65, 11, 242, 216)}};
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeqIndentGt___regBuiltin_Lean_Parser_Tactic_tacticSeqIndentGt_parenthesizer__7___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeqIndentGt___regBuiltin_Lean_Parser_Tactic_tacticSeqIndentGt_parenthesizer__7___closed__0_value_aux_3),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeq___regBuiltin_Lean_Parser_Tactic_tacticSeqBracketed_parenthesizer__19___closed__0_value),LEAN_SCALAR_PTR_LITERAL(105, 71, 140, 7, 47, 84, 129, 16)}};
static const lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeqIndentGt___regBuiltin_Lean_Parser_Tactic_tacticSeqIndentGt_parenthesizer__7___closed__0 = (const lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeqIndentGt___regBuiltin_Lean_Parser_Tactic_tacticSeqIndentGt_parenthesizer__7___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeqIndentGt___regBuiltin_Lean_Parser_Tactic_tacticSeqIndentGt_parenthesizer__7();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeqIndentGt___regBuiltin_Lean_Parser_Tactic_tacticSeqIndentGt_parenthesizer__7___boxed(lean_object*);
static const lean_string_object l_Lean_Parser_Tactic_tacticSeqIndentGt___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "indented tactic sequence"};
static const lean_object* l_Lean_Parser_Tactic_tacticSeqIndentGt___closed__0 = (const lean_object*)&l_Lean_Parser_Tactic_tacticSeqIndentGt___closed__0_value;
static lean_once_cell_t l_Lean_Parser_Tactic_tacticSeqIndentGt___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_tacticSeqIndentGt___closed__1;
static lean_once_cell_t l_Lean_Parser_Tactic_tacticSeqIndentGt___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_tacticSeqIndentGt___closed__2;
static lean_once_cell_t l_Lean_Parser_Tactic_tacticSeqIndentGt___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_tacticSeqIndentGt___closed__3;
static lean_once_cell_t l_Lean_Parser_Tactic_tacticSeqIndentGt___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_tacticSeqIndentGt___closed__4;
static lean_once_cell_t l_Lean_Parser_Tactic_tacticSeqIndentGt___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_tacticSeqIndentGt___closed__5;
static lean_once_cell_t l_Lean_Parser_Tactic_tacticSeqIndentGt___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_tacticSeqIndentGt___closed__6;
static lean_once_cell_t l_Lean_Parser_Tactic_tacticSeqIndentGt___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_tacticSeqIndentGt___closed__7;
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_tacticSeqIndentGt;
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeqIndentGt___regBuiltin_Lean_Parser_Tactic_tacticSeqIndentGt_docString__1___closed__0_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeqIndentGt___regBuiltin_Lean_Parser_Tactic_tacticSeqIndentGt_docString__1___closed__0_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeqIndentGt___regBuiltin_Lean_Parser_Tactic_tacticSeqIndentGt_docString__1___closed__0_value_aux_0),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeqIndentGt___regBuiltin_Lean_Parser_Tactic_tacticSeqIndentGt_docString__1___closed__0_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeqIndentGt___regBuiltin_Lean_Parser_Tactic_tacticSeqIndentGt_docString__1___closed__0_value_aux_1),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_sepByIndentSemicolon___regBuiltin_Lean_Parser_Tactic_sepByIndentSemicolon_docString__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeqIndentGt___regBuiltin_Lean_Parser_Tactic_tacticSeqIndentGt_docString__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeqIndentGt___regBuiltin_Lean_Parser_Tactic_tacticSeqIndentGt_docString__1___closed__0_value_aux_2),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeqIndentGt___regBuiltin_Lean_Parser_Tactic_tacticSeqIndentGt_formatter__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(212, 234, 202, 179, 65, 11, 242, 216)}};
static const lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeqIndentGt___regBuiltin_Lean_Parser_Tactic_tacticSeqIndentGt_docString__1___closed__0 = (const lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeqIndentGt___regBuiltin_Lean_Parser_Tactic_tacticSeqIndentGt_docString__1___closed__0_value;
static const lean_string_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeqIndentGt___regBuiltin_Lean_Parser_Tactic_tacticSeqIndentGt_docString__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 257, .m_capacity = 257, .m_length = 256, .m_data = "Same as [`tacticSeq`] but requires delimiter-free tactic sequence to have strict indentation.\nFalls back to an empty tactic sequence when no appropriately indented content follows, producing\nan elaboration error (unsolved goals) rather than a parse error. "};
static const lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeqIndentGt___regBuiltin_Lean_Parser_Tactic_tacticSeqIndentGt_docString__1___closed__1 = (const lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeqIndentGt___regBuiltin_Lean_Parser_Tactic_tacticSeqIndentGt_docString__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeqIndentGt___regBuiltin_Lean_Parser_Tactic_tacticSeqIndentGt_docString__1();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeqIndentGt___regBuiltin_Lean_Parser_Tactic_tacticSeqIndentGt_docString__1___boxed(lean_object*);
static const lean_string_object l_Lean_Parser_Tactic_seq1_formatter___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "seq1"};
static const lean_object* l_Lean_Parser_Tactic_seq1_formatter___closed__0 = (const lean_object*)&l_Lean_Parser_Tactic_seq1_formatter___closed__0_value;
static const lean_ctor_object l_Lean_Parser_Tactic_seq1_formatter___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_Tactic_seq1_formatter___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_seq1_formatter___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_Tactic_seq1_formatter___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_seq1_formatter___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_sepByIndentSemicolon___regBuiltin_Lean_Parser_Tactic_sepByIndentSemicolon_docString__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Parser_Tactic_seq1_formatter___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_seq1_formatter___closed__1_value_aux_2),((lean_object*)&l_Lean_Parser_Tactic_seq1_formatter___closed__0_value),LEAN_SCALAR_PTR_LITERAL(242, 140, 137, 56, 141, 11, 143, 117)}};
static const lean_object* l_Lean_Parser_Tactic_seq1_formatter___closed__1 = (const lean_object*)&l_Lean_Parser_Tactic_seq1_formatter___closed__1_value;
static const lean_string_object l_Lean_Parser_Tactic_seq1_formatter___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ";\n"};
static const lean_object* l_Lean_Parser_Tactic_seq1_formatter___closed__2 = (const lean_object*)&l_Lean_Parser_Tactic_seq1_formatter___closed__2_value;
static const lean_closure_object l_Lean_Parser_Tactic_seq1_formatter___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_symbol_formatter___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_seq1_formatter___closed__2_value)} };
static const lean_object* l_Lean_Parser_Tactic_seq1_formatter___closed__3 = (const lean_object*)&l_Lean_Parser_Tactic_seq1_formatter___closed__3_value;
static const lean_closure_object l_Lean_Parser_Tactic_seq1_formatter___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_sepBy1_formatter___boxed, .m_arity = 9, .m_num_fixed = 4, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_tacticSeqBracketed_formatter___closed__2_value),((lean_object*)&l_Lean_Parser_Tactic_seq1_formatter___closed__2_value),((lean_object*)&l_Lean_Parser_Tactic_seq1_formatter___closed__3_value),((lean_object*)(((size_t)(1) << 1) | 1))} };
static const lean_object* l_Lean_Parser_Tactic_seq1_formatter___closed__4 = (const lean_object*)&l_Lean_Parser_Tactic_seq1_formatter___closed__4_value;
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_seq1_formatter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_seq1_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_seq1___regBuiltin_Lean_Parser_Tactic_seq1_formatter__3___closed__0_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_seq1___regBuiltin_Lean_Parser_Tactic_seq1_formatter__3___closed__0_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_seq1___regBuiltin_Lean_Parser_Tactic_seq1_formatter__3___closed__0_value_aux_0),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_seq1___regBuiltin_Lean_Parser_Tactic_seq1_formatter__3___closed__0_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_seq1___regBuiltin_Lean_Parser_Tactic_seq1_formatter__3___closed__0_value_aux_1),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_sepByIndentSemicolon___regBuiltin_Lean_Parser_Tactic_sepByIndentSemicolon_docString__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_seq1___regBuiltin_Lean_Parser_Tactic_seq1_formatter__3___closed__0_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_seq1___regBuiltin_Lean_Parser_Tactic_seq1_formatter__3___closed__0_value_aux_2),((lean_object*)&l_Lean_Parser_Tactic_seq1_formatter___closed__0_value),LEAN_SCALAR_PTR_LITERAL(242, 140, 137, 56, 141, 11, 143, 117)}};
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_seq1___regBuiltin_Lean_Parser_Tactic_seq1_formatter__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_seq1___regBuiltin_Lean_Parser_Tactic_seq1_formatter__3___closed__0_value_aux_3),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeq___regBuiltin_Lean_Parser_Tactic_tacticSeqBracketed_formatter__5___closed__0_value),LEAN_SCALAR_PTR_LITERAL(251, 140, 213, 31, 38, 205, 32, 123)}};
static const lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_seq1___regBuiltin_Lean_Parser_Tactic_seq1_formatter__3___closed__0 = (const lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_seq1___regBuiltin_Lean_Parser_Tactic_seq1_formatter__3___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_seq1___regBuiltin_Lean_Parser_Tactic_seq1_formatter__3();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_seq1___regBuiltin_Lean_Parser_Tactic_seq1_formatter__3___boxed(lean_object*);
static const lean_closure_object l_Lean_Parser_Tactic_seq1_parenthesizer___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_symbol_parenthesizer___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_seq1_formatter___closed__2_value)} };
static const lean_object* l_Lean_Parser_Tactic_seq1_parenthesizer___closed__0 = (const lean_object*)&l_Lean_Parser_Tactic_seq1_parenthesizer___closed__0_value;
static const lean_closure_object l_Lean_Parser_Tactic_seq1_parenthesizer___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_sepBy1_parenthesizer___boxed, .m_arity = 9, .m_num_fixed = 4, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_tacticSeqBracketed_parenthesizer___closed__2_value),((lean_object*)&l_Lean_Parser_Tactic_seq1_formatter___closed__2_value),((lean_object*)&l_Lean_Parser_Tactic_seq1_parenthesizer___closed__0_value),((lean_object*)(((size_t)(1) << 1) | 1))} };
static const lean_object* l_Lean_Parser_Tactic_seq1_parenthesizer___closed__1 = (const lean_object*)&l_Lean_Parser_Tactic_seq1_parenthesizer___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_seq1_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_seq1_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_seq1___regBuiltin_Lean_Parser_Tactic_seq1_parenthesizer__7___closed__0_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_seq1___regBuiltin_Lean_Parser_Tactic_seq1_parenthesizer__7___closed__0_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_seq1___regBuiltin_Lean_Parser_Tactic_seq1_parenthesizer__7___closed__0_value_aux_0),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_seq1___regBuiltin_Lean_Parser_Tactic_seq1_parenthesizer__7___closed__0_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_seq1___regBuiltin_Lean_Parser_Tactic_seq1_parenthesizer__7___closed__0_value_aux_1),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_sepByIndentSemicolon___regBuiltin_Lean_Parser_Tactic_sepByIndentSemicolon_docString__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_seq1___regBuiltin_Lean_Parser_Tactic_seq1_parenthesizer__7___closed__0_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_seq1___regBuiltin_Lean_Parser_Tactic_seq1_parenthesizer__7___closed__0_value_aux_2),((lean_object*)&l_Lean_Parser_Tactic_seq1_formatter___closed__0_value),LEAN_SCALAR_PTR_LITERAL(242, 140, 137, 56, 141, 11, 143, 117)}};
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_seq1___regBuiltin_Lean_Parser_Tactic_seq1_parenthesizer__7___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_seq1___regBuiltin_Lean_Parser_Tactic_seq1_parenthesizer__7___closed__0_value_aux_3),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeq___regBuiltin_Lean_Parser_Tactic_tacticSeqBracketed_parenthesizer__19___closed__0_value),LEAN_SCALAR_PTR_LITERAL(223, 68, 6, 57, 113, 151, 68, 138)}};
static const lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_seq1___regBuiltin_Lean_Parser_Tactic_seq1_parenthesizer__7___closed__0 = (const lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_seq1___regBuiltin_Lean_Parser_Tactic_seq1_parenthesizer__7___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_seq1___regBuiltin_Lean_Parser_Tactic_seq1_parenthesizer__7();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_seq1___regBuiltin_Lean_Parser_Tactic_seq1_parenthesizer__7___boxed(lean_object*);
static lean_once_cell_t l_Lean_Parser_Tactic_seq1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_seq1___closed__0;
static lean_once_cell_t l_Lean_Parser_Tactic_seq1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_seq1___closed__1;
static lean_once_cell_t l_Lean_Parser_Tactic_seq1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_seq1___closed__2;
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_seq1;
static const lean_string_object l_Lean_Parser_Term_hole___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hole"};
static const lean_object* l_Lean_Parser_Term_hole___closed__0 = (const lean_object*)&l_Lean_Parser_Term_hole___closed__0_value;
static const lean_ctor_object l_Lean_Parser_Term_hole___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_Term_hole___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Term_hole___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_Term_hole___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Term_hole___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__12_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Parser_Term_hole___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Term_hole___closed__1_value_aux_2),((lean_object*)&l_Lean_Parser_Term_hole___closed__0_value),LEAN_SCALAR_PTR_LITERAL(135, 134, 219, 115, 97, 130, 74, 55)}};
static const lean_object* l_Lean_Parser_Term_hole___closed__1 = (const lean_object*)&l_Lean_Parser_Term_hole___closed__1_value;
static lean_once_cell_t l_Lean_Parser_Term_hole___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Term_hole___closed__2;
static const lean_string_object l_Lean_Parser_Term_hole___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "_"};
static const lean_object* l_Lean_Parser_Term_hole___closed__3 = (const lean_object*)&l_Lean_Parser_Term_hole___closed__3_value;
static lean_once_cell_t l_Lean_Parser_Term_hole___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Term_hole___closed__4;
static lean_once_cell_t l_Lean_Parser_Term_hole___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Term_hole___closed__5;
static lean_once_cell_t l_Lean_Parser_Term_hole___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Term_hole___closed__6;
static lean_once_cell_t l_Lean_Parser_Term_hole___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Term_hole___closed__7;
LEAN_EXPORT lean_object* l_Lean_Parser_Term_hole;
static const lean_string_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_hole___regBuiltin_Lean_Parser_Term_hole__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "term"};
static const lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_hole___regBuiltin_Lean_Parser_Term_hole__1___closed__0 = (const lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_hole___regBuiltin_Lean_Parser_Term_hole__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_hole___regBuiltin_Lean_Parser_Term_hole__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_hole___regBuiltin_Lean_Parser_Term_hole__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(187, 230, 181, 162, 253, 146, 122, 119)}};
static const lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_hole___regBuiltin_Lean_Parser_Term_hole__1___closed__1 = (const lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_hole___regBuiltin_Lean_Parser_Term_hole__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_hole___regBuiltin_Lean_Parser_Term_hole__1();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_hole___regBuiltin_Lean_Parser_Term_hole__1___boxed(lean_object*);
static const lean_string_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_hole___regBuiltin_Lean_Parser_Term_hole_docString__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 814, .m_capacity = 814, .m_length = 813, .m_data = "A *hole* (or *placeholder term*), which stands for an unknown term that is expected to be inferred based on context.\nFor example, in `@id _ Nat.zero`, the `_` must be the type of `Nat.zero`, which is `Nat`.\n\nThe way this works is that holes create fresh metavariables.\nThe elaborator is allowed to assign terms to metavariables while it is checking definitional equalities.\nThis is often known as *unification*.\n\nNormally, all holes must be solved for. However, there are a few contexts where this is not necessary:\n* In `match` patterns, holes are catch-all patterns.\n* In some tactics, such as `refine'` and `apply`, unsolved-for placeholders become new goals.\n\nRelated concept: implicit parameters are automatically filled in with holes during the elaboration process.\n\nSee also `\?m` syntax (synthetic holes).\n"};
static const lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_hole___regBuiltin_Lean_Parser_Term_hole_docString__3___closed__0 = (const lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_hole___regBuiltin_Lean_Parser_Term_hole_docString__3___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_hole___regBuiltin_Lean_Parser_Term_hole_docString__3();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_hole___regBuiltin_Lean_Parser_Term_hole_docString__3___boxed(lean_object*);
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_hole___regBuiltin_Lean_Parser_Term_hole_declRange__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(143) << 1) | 1)),((lean_object*)(((size_t)(23) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_hole___regBuiltin_Lean_Parser_Term_hole_declRange__5___closed__0 = (const lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_hole___regBuiltin_Lean_Parser_Term_hole_declRange__5___closed__0_value;
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_hole___regBuiltin_Lean_Parser_Term_hole_declRange__5___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(144) << 1) | 1)),((lean_object*)(((size_t)(5) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_hole___regBuiltin_Lean_Parser_Term_hole_declRange__5___closed__1 = (const lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_hole___regBuiltin_Lean_Parser_Term_hole_declRange__5___closed__1_value;
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_hole___regBuiltin_Lean_Parser_Term_hole_declRange__5___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_hole___regBuiltin_Lean_Parser_Term_hole_declRange__5___closed__0_value),((lean_object*)(((size_t)(23) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_hole___regBuiltin_Lean_Parser_Term_hole_declRange__5___closed__1_value),((lean_object*)(((size_t)(5) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_hole___regBuiltin_Lean_Parser_Term_hole_declRange__5___closed__2 = (const lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_hole___regBuiltin_Lean_Parser_Term_hole_declRange__5___closed__2_value;
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_hole___regBuiltin_Lean_Parser_Term_hole_declRange__5___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(143) << 1) | 1)),((lean_object*)(((size_t)(27) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_hole___regBuiltin_Lean_Parser_Term_hole_declRange__5___closed__3 = (const lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_hole___regBuiltin_Lean_Parser_Term_hole_declRange__5___closed__3_value;
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_hole___regBuiltin_Lean_Parser_Term_hole_declRange__5___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(143) << 1) | 1)),((lean_object*)(((size_t)(31) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_hole___regBuiltin_Lean_Parser_Term_hole_declRange__5___closed__4 = (const lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_hole___regBuiltin_Lean_Parser_Term_hole_declRange__5___closed__4_value;
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_hole___regBuiltin_Lean_Parser_Term_hole_declRange__5___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_hole___regBuiltin_Lean_Parser_Term_hole_declRange__5___closed__3_value),((lean_object*)(((size_t)(27) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_hole___regBuiltin_Lean_Parser_Term_hole_declRange__5___closed__4_value),((lean_object*)(((size_t)(31) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_hole___regBuiltin_Lean_Parser_Term_hole_declRange__5___closed__5 = (const lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_hole___regBuiltin_Lean_Parser_Term_hole_declRange__5___closed__5_value;
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_hole___regBuiltin_Lean_Parser_Term_hole_declRange__5___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_hole___regBuiltin_Lean_Parser_Term_hole_declRange__5___closed__2_value),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_hole___regBuiltin_Lean_Parser_Term_hole_declRange__5___closed__5_value)}};
static const lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_hole___regBuiltin_Lean_Parser_Term_hole_declRange__5___closed__6 = (const lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_hole___regBuiltin_Lean_Parser_Term_hole_declRange__5___closed__6_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_hole___regBuiltin_Lean_Parser_Term_hole_declRange__5();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_hole___regBuiltin_Lean_Parser_Term_hole_declRange__5___boxed(lean_object*);
static const lean_closure_object l_Lean_Parser_Term_hole_formatter___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_mkAntiquot_formatter___boxed, .m_arity = 9, .m_num_fixed = 4, .m_objs = {((lean_object*)&l_Lean_Parser_Term_hole___closed__0_value),((lean_object*)&l_Lean_Parser_Term_hole___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Parser_Term_hole_formatter___closed__0 = (const lean_object*)&l_Lean_Parser_Term_hole_formatter___closed__0_value;
static const lean_closure_object l_Lean_Parser_Term_hole_formatter___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_symbol_formatter___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Parser_Term_hole___closed__3_value)} };
static const lean_object* l_Lean_Parser_Term_hole_formatter___closed__1 = (const lean_object*)&l_Lean_Parser_Term_hole_formatter___closed__1_value;
static const lean_closure_object l_Lean_Parser_Term_hole_formatter___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_leadingNode_formatter___boxed, .m_arity = 8, .m_num_fixed = 3, .m_objs = {((lean_object*)&l_Lean_Parser_Term_hole___closed__1_value),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)&l_Lean_Parser_Term_hole_formatter___closed__1_value)} };
static const lean_object* l_Lean_Parser_Term_hole_formatter___closed__2 = (const lean_object*)&l_Lean_Parser_Term_hole_formatter___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Parser_Term_hole_formatter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Term_hole_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_hole___regBuiltin_Lean_Parser_Term_hole_formatter__9___closed__0_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_hole___regBuiltin_Lean_Parser_Term_hole_formatter__9___closed__0_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_hole___regBuiltin_Lean_Parser_Term_hole_formatter__9___closed__0_value_aux_0),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_hole___regBuiltin_Lean_Parser_Term_hole_formatter__9___closed__0_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_hole___regBuiltin_Lean_Parser_Term_hole_formatter__9___closed__0_value_aux_1),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__12_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_hole___regBuiltin_Lean_Parser_Term_hole_formatter__9___closed__0_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_hole___regBuiltin_Lean_Parser_Term_hole_formatter__9___closed__0_value_aux_2),((lean_object*)&l_Lean_Parser_Term_hole___closed__0_value),LEAN_SCALAR_PTR_LITERAL(135, 134, 219, 115, 97, 130, 74, 55)}};
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_hole___regBuiltin_Lean_Parser_Term_hole_formatter__9___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_hole___regBuiltin_Lean_Parser_Term_hole_formatter__9___closed__0_value_aux_3),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeq___regBuiltin_Lean_Parser_Tactic_tacticSeqBracketed_formatter__5___closed__0_value),LEAN_SCALAR_PTR_LITERAL(194, 229, 9, 16, 12, 224, 229, 201)}};
static const lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_hole___regBuiltin_Lean_Parser_Term_hole_formatter__9___closed__0 = (const lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_hole___regBuiltin_Lean_Parser_Term_hole_formatter__9___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_hole___regBuiltin_Lean_Parser_Term_hole_formatter__9();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_hole___regBuiltin_Lean_Parser_Term_hole_formatter__9___boxed(lean_object*);
static const lean_closure_object l_Lean_Parser_Term_hole_parenthesizer___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_mkAntiquot_parenthesizer___boxed, .m_arity = 9, .m_num_fixed = 4, .m_objs = {((lean_object*)&l_Lean_Parser_Term_hole___closed__0_value),((lean_object*)&l_Lean_Parser_Term_hole___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Parser_Term_hole_parenthesizer___closed__0 = (const lean_object*)&l_Lean_Parser_Term_hole_parenthesizer___closed__0_value;
static const lean_closure_object l_Lean_Parser_Term_hole_parenthesizer___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_symbol_parenthesizer___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Parser_Term_hole___closed__3_value)} };
static const lean_object* l_Lean_Parser_Term_hole_parenthesizer___closed__1 = (const lean_object*)&l_Lean_Parser_Term_hole_parenthesizer___closed__1_value;
static const lean_closure_object l_Lean_Parser_Term_hole_parenthesizer___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Parenthesizer_leadingNode_parenthesizer___boxed, .m_arity = 8, .m_num_fixed = 3, .m_objs = {((lean_object*)&l_Lean_Parser_Term_hole___closed__1_value),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)&l_Lean_Parser_Term_hole_parenthesizer___closed__1_value)} };
static const lean_object* l_Lean_Parser_Term_hole_parenthesizer___closed__2 = (const lean_object*)&l_Lean_Parser_Term_hole_parenthesizer___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Parser_Term_hole_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Term_hole_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_hole___regBuiltin_Lean_Parser_Term_hole_parenthesizer__13___closed__0_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_hole___regBuiltin_Lean_Parser_Term_hole_parenthesizer__13___closed__0_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_hole___regBuiltin_Lean_Parser_Term_hole_parenthesizer__13___closed__0_value_aux_0),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_hole___regBuiltin_Lean_Parser_Term_hole_parenthesizer__13___closed__0_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_hole___regBuiltin_Lean_Parser_Term_hole_parenthesizer__13___closed__0_value_aux_1),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__12_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_hole___regBuiltin_Lean_Parser_Term_hole_parenthesizer__13___closed__0_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_hole___regBuiltin_Lean_Parser_Term_hole_parenthesizer__13___closed__0_value_aux_2),((lean_object*)&l_Lean_Parser_Term_hole___closed__0_value),LEAN_SCALAR_PTR_LITERAL(135, 134, 219, 115, 97, 130, 74, 55)}};
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_hole___regBuiltin_Lean_Parser_Term_hole_parenthesizer__13___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_hole___regBuiltin_Lean_Parser_Term_hole_parenthesizer__13___closed__0_value_aux_3),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeq___regBuiltin_Lean_Parser_Tactic_tacticSeqBracketed_parenthesizer__19___closed__0_value),LEAN_SCALAR_PTR_LITERAL(142, 251, 253, 165, 169, 88, 32, 49)}};
static const lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_hole___regBuiltin_Lean_Parser_Term_hole_parenthesizer__13___closed__0 = (const lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_hole___regBuiltin_Lean_Parser_Term_hole_parenthesizer__13___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_hole___regBuiltin_Lean_Parser_Term_hole_parenthesizer__13();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_hole___regBuiltin_Lean_Parser_Term_hole_parenthesizer__13___boxed(lean_object*);
static const lean_string_object l_Lean_Parser_Term_syntheticHole___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "syntheticHole"};
static const lean_object* l_Lean_Parser_Term_syntheticHole___closed__0 = (const lean_object*)&l_Lean_Parser_Term_syntheticHole___closed__0_value;
static const lean_ctor_object l_Lean_Parser_Term_syntheticHole___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_Term_syntheticHole___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Term_syntheticHole___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_Term_syntheticHole___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Term_syntheticHole___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__12_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Parser_Term_syntheticHole___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Term_syntheticHole___closed__1_value_aux_2),((lean_object*)&l_Lean_Parser_Term_syntheticHole___closed__0_value),LEAN_SCALAR_PTR_LITERAL(218, 189, 67, 60, 211, 196, 112, 165)}};
static const lean_object* l_Lean_Parser_Term_syntheticHole___closed__1 = (const lean_object*)&l_Lean_Parser_Term_syntheticHole___closed__1_value;
static lean_once_cell_t l_Lean_Parser_Term_syntheticHole___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Term_syntheticHole___closed__2;
static const lean_string_object l_Lean_Parser_Term_syntheticHole___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "\?"};
static const lean_object* l_Lean_Parser_Term_syntheticHole___closed__3 = (const lean_object*)&l_Lean_Parser_Term_syntheticHole___closed__3_value;
static lean_once_cell_t l_Lean_Parser_Term_syntheticHole___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Term_syntheticHole___closed__4;
static lean_once_cell_t l_Lean_Parser_Term_syntheticHole___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Term_syntheticHole___closed__5;
static lean_once_cell_t l_Lean_Parser_Term_syntheticHole___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Term_syntheticHole___closed__6;
static lean_once_cell_t l_Lean_Parser_Term_syntheticHole___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Term_syntheticHole___closed__7;
static lean_once_cell_t l_Lean_Parser_Term_syntheticHole___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Term_syntheticHole___closed__8;
static lean_once_cell_t l_Lean_Parser_Term_syntheticHole___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Term_syntheticHole___closed__9;
LEAN_EXPORT lean_object* l_Lean_Parser_Term_syntheticHole;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_syntheticHole___regBuiltin_Lean_Parser_Term_syntheticHole__1();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_syntheticHole___regBuiltin_Lean_Parser_Term_syntheticHole__1___boxed(lean_object*);
static const lean_string_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_syntheticHole___regBuiltin_Lean_Parser_Term_syntheticHole_docString__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3166, .m_capacity = 3166, .m_length = 3151, .m_data = "A *synthetic hole* (or *synthetic placeholder*), which stands for an unknown term that should be synthesized using tactics.\n- `\?_` creates a fresh metavariable with an auto-generated name.\n- `\?m` either refers to a pre-existing metavariable named `m` or creates a fresh metavariable with that name.\n\nIn particular, the synthetic hole syntax creates \"synthetic opaque metavariables\",\nthe same kind of metavariable used to represent goals in the tactic state.\n\nSynthetic holes are similar to holes in that `_` also creates metavariables,\nbut synthetic opaque metavariables have some different properties:\n- In tactics such as `refine`, only synthetic holes yield new goals.\n- During elaboration, unification will not solve for synthetic opaque metavariables, they are \"opaque\".\n  This is to prevent counterintuitive behavior such as disappearing goals.\n- When synthetic holes appear under binders, they capture local variables using a more complicated mechanism known as delayed assignment.\n\n## Delayed assigned metavariables\n\nThis section gives an overview of some technical details of synthetic holes, which you should feel free to skip.\nUnderstanding delayed assignments is mainly useful for those who are working on tactics and other metaprogramming.\nIt is included here until there is a suitable place for it in the reference manual.\n\nWhen a synthetic hole appears under a binding construct, such as for example `fun (x : α) (y : β) => \?s`,\nthe system creates a *delayed assignment*. This consists of\n1. A metavariable `\?m` of type `(x : α) → (y : β) → γ x y` whose local context is the local context outside the `fun`,\n  where `γ x y` is the type of `\?s`. Recall that `x` and `y` appear in the local context of `\?s`.\n2. A delayed assignment record associating `\?m` to `\?s` and the variables `#[x, y]` in the local context of `\?s`\n\nThen, this function elaborates as `fun (x : α) (y : β) => \?m x y`, where one should understand `x` and `y` here\nas being De Bruijn indexes, since Lean uses the locally nameless encoding of lambda calculus.\n\nOnce `\?s` is fully solved for, in the sense that after metavariable instantiation it is a metavariable-free term `e`,\nthen we can make the assignment `\?m := fun (x' : α) (y' : β) => e[x := x', y := y']`.\n(Implementation note: Lean only instantiates full applications `\?m x' y'` of delayed assigned metavariables, to skip forming this function.)\nThis delayed assignment mechanism is essential to the operation of basic tactics like `intro`,\nand a good mental model is that it is a way to \"apply\" the metavariable `\?s` by substituting values in for some of its local variables.\nWhile it would be easier to immediately assign `\?s := \?m x y`,\ndelayed assignment preserves `\?s` as an unsolved-for metavariable with a local context that still contains `x` and `y`,\nwhich is exactly what tactics like `intro` need.\n\nBy default, delayed assigned metavariables pretty print with what they are delayed assigned to.\nThe delayed assigned metavariables themselves can be pretty printed using `set_option pp.mvars.delayed true`.\n\nFor more information, see the \"Gruesome details\" module docstrings in `Lean.MetavarContext`.\n"};
static const lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_syntheticHole___regBuiltin_Lean_Parser_Term_syntheticHole_docString__3___closed__0 = (const lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_syntheticHole___regBuiltin_Lean_Parser_Term_syntheticHole_docString__3___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_syntheticHole___regBuiltin_Lean_Parser_Term_syntheticHole_docString__3();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_syntheticHole___regBuiltin_Lean_Parser_Term_syntheticHole_docString__3___boxed(lean_object*);
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_syntheticHole___regBuiltin_Lean_Parser_Term_syntheticHole_declRange__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(147) << 1) | 1)),((lean_object*)(((size_t)(23) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_syntheticHole___regBuiltin_Lean_Parser_Term_syntheticHole_declRange__5___closed__0 = (const lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_syntheticHole___regBuiltin_Lean_Parser_Term_syntheticHole_declRange__5___closed__0_value;
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_syntheticHole___regBuiltin_Lean_Parser_Term_syntheticHole_declRange__5___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(148) << 1) | 1)),((lean_object*)(((size_t)(25) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_syntheticHole___regBuiltin_Lean_Parser_Term_syntheticHole_declRange__5___closed__1 = (const lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_syntheticHole___regBuiltin_Lean_Parser_Term_syntheticHole_declRange__5___closed__1_value;
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_syntheticHole___regBuiltin_Lean_Parser_Term_syntheticHole_declRange__5___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_syntheticHole___regBuiltin_Lean_Parser_Term_syntheticHole_declRange__5___closed__0_value),((lean_object*)(((size_t)(23) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_syntheticHole___regBuiltin_Lean_Parser_Term_syntheticHole_declRange__5___closed__1_value),((lean_object*)(((size_t)(25) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_syntheticHole___regBuiltin_Lean_Parser_Term_syntheticHole_declRange__5___closed__2 = (const lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_syntheticHole___regBuiltin_Lean_Parser_Term_syntheticHole_declRange__5___closed__2_value;
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_syntheticHole___regBuiltin_Lean_Parser_Term_syntheticHole_declRange__5___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(147) << 1) | 1)),((lean_object*)(((size_t)(27) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_syntheticHole___regBuiltin_Lean_Parser_Term_syntheticHole_declRange__5___closed__3 = (const lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_syntheticHole___regBuiltin_Lean_Parser_Term_syntheticHole_declRange__5___closed__3_value;
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_syntheticHole___regBuiltin_Lean_Parser_Term_syntheticHole_declRange__5___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(147) << 1) | 1)),((lean_object*)(((size_t)(40) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_syntheticHole___regBuiltin_Lean_Parser_Term_syntheticHole_declRange__5___closed__4 = (const lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_syntheticHole___regBuiltin_Lean_Parser_Term_syntheticHole_declRange__5___closed__4_value;
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_syntheticHole___regBuiltin_Lean_Parser_Term_syntheticHole_declRange__5___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_syntheticHole___regBuiltin_Lean_Parser_Term_syntheticHole_declRange__5___closed__3_value),((lean_object*)(((size_t)(27) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_syntheticHole___regBuiltin_Lean_Parser_Term_syntheticHole_declRange__5___closed__4_value),((lean_object*)(((size_t)(40) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_syntheticHole___regBuiltin_Lean_Parser_Term_syntheticHole_declRange__5___closed__5 = (const lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_syntheticHole___regBuiltin_Lean_Parser_Term_syntheticHole_declRange__5___closed__5_value;
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_syntheticHole___regBuiltin_Lean_Parser_Term_syntheticHole_declRange__5___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_syntheticHole___regBuiltin_Lean_Parser_Term_syntheticHole_declRange__5___closed__2_value),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_syntheticHole___regBuiltin_Lean_Parser_Term_syntheticHole_declRange__5___closed__5_value)}};
static const lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_syntheticHole___regBuiltin_Lean_Parser_Term_syntheticHole_declRange__5___closed__6 = (const lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_syntheticHole___regBuiltin_Lean_Parser_Term_syntheticHole_declRange__5___closed__6_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_syntheticHole___regBuiltin_Lean_Parser_Term_syntheticHole_declRange__5();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_syntheticHole___regBuiltin_Lean_Parser_Term_syntheticHole_declRange__5___boxed(lean_object*);
static const lean_closure_object l_Lean_Parser_Term_syntheticHole_formatter___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_mkAntiquot_formatter___boxed, .m_arity = 9, .m_num_fixed = 4, .m_objs = {((lean_object*)&l_Lean_Parser_Term_syntheticHole___closed__0_value),((lean_object*)&l_Lean_Parser_Term_syntheticHole___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Parser_Term_syntheticHole_formatter___closed__0 = (const lean_object*)&l_Lean_Parser_Term_syntheticHole_formatter___closed__0_value;
static const lean_closure_object l_Lean_Parser_Term_syntheticHole_formatter___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_symbol_formatter___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Parser_Term_syntheticHole___closed__3_value)} };
static const lean_object* l_Lean_Parser_Term_syntheticHole_formatter___closed__1 = (const lean_object*)&l_Lean_Parser_Term_syntheticHole_formatter___closed__1_value;
static const lean_closure_object l_Lean_Parser_Term_syntheticHole_formatter___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_ident_formatter___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Parser_Term_syntheticHole_formatter___closed__2 = (const lean_object*)&l_Lean_Parser_Term_syntheticHole_formatter___closed__2_value;
static const lean_closure_object l_Lean_Parser_Term_syntheticHole_formatter___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Formatter_orelse_formatter___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Parser_Term_syntheticHole_formatter___closed__2_value),((lean_object*)&l_Lean_Parser_Term_hole_formatter___closed__1_value)} };
static const lean_object* l_Lean_Parser_Term_syntheticHole_formatter___closed__3 = (const lean_object*)&l_Lean_Parser_Term_syntheticHole_formatter___closed__3_value;
static const lean_closure_object l_Lean_Parser_Term_syntheticHole_formatter___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Parser_Term_syntheticHole_formatter___closed__1_value),((lean_object*)&l_Lean_Parser_Term_syntheticHole_formatter___closed__3_value)} };
static const lean_object* l_Lean_Parser_Term_syntheticHole_formatter___closed__4 = (const lean_object*)&l_Lean_Parser_Term_syntheticHole_formatter___closed__4_value;
static const lean_closure_object l_Lean_Parser_Term_syntheticHole_formatter___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_leadingNode_formatter___boxed, .m_arity = 8, .m_num_fixed = 3, .m_objs = {((lean_object*)&l_Lean_Parser_Term_syntheticHole___closed__1_value),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)&l_Lean_Parser_Term_syntheticHole_formatter___closed__4_value)} };
static const lean_object* l_Lean_Parser_Term_syntheticHole_formatter___closed__5 = (const lean_object*)&l_Lean_Parser_Term_syntheticHole_formatter___closed__5_value;
LEAN_EXPORT lean_object* l_Lean_Parser_Term_syntheticHole_formatter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Term_syntheticHole_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_syntheticHole___regBuiltin_Lean_Parser_Term_syntheticHole_formatter__9___closed__0_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_syntheticHole___regBuiltin_Lean_Parser_Term_syntheticHole_formatter__9___closed__0_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_syntheticHole___regBuiltin_Lean_Parser_Term_syntheticHole_formatter__9___closed__0_value_aux_0),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_syntheticHole___regBuiltin_Lean_Parser_Term_syntheticHole_formatter__9___closed__0_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_syntheticHole___regBuiltin_Lean_Parser_Term_syntheticHole_formatter__9___closed__0_value_aux_1),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__12_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_syntheticHole___regBuiltin_Lean_Parser_Term_syntheticHole_formatter__9___closed__0_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_syntheticHole___regBuiltin_Lean_Parser_Term_syntheticHole_formatter__9___closed__0_value_aux_2),((lean_object*)&l_Lean_Parser_Term_syntheticHole___closed__0_value),LEAN_SCALAR_PTR_LITERAL(218, 189, 67, 60, 211, 196, 112, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_syntheticHole___regBuiltin_Lean_Parser_Term_syntheticHole_formatter__9___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_syntheticHole___regBuiltin_Lean_Parser_Term_syntheticHole_formatter__9___closed__0_value_aux_3),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeq___regBuiltin_Lean_Parser_Tactic_tacticSeqBracketed_formatter__5___closed__0_value),LEAN_SCALAR_PTR_LITERAL(243, 87, 196, 54, 9, 128, 178, 139)}};
static const lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_syntheticHole___regBuiltin_Lean_Parser_Term_syntheticHole_formatter__9___closed__0 = (const lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_syntheticHole___regBuiltin_Lean_Parser_Term_syntheticHole_formatter__9___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_syntheticHole___regBuiltin_Lean_Parser_Term_syntheticHole_formatter__9();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_syntheticHole___regBuiltin_Lean_Parser_Term_syntheticHole_formatter__9___boxed(lean_object*);
static const lean_closure_object l_Lean_Parser_Term_syntheticHole_parenthesizer___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_mkAntiquot_parenthesizer___boxed, .m_arity = 9, .m_num_fixed = 4, .m_objs = {((lean_object*)&l_Lean_Parser_Term_syntheticHole___closed__0_value),((lean_object*)&l_Lean_Parser_Term_syntheticHole___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Parser_Term_syntheticHole_parenthesizer___closed__0 = (const lean_object*)&l_Lean_Parser_Term_syntheticHole_parenthesizer___closed__0_value;
static const lean_closure_object l_Lean_Parser_Term_syntheticHole_parenthesizer___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_symbol_parenthesizer___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Parser_Term_syntheticHole___closed__3_value)} };
static const lean_object* l_Lean_Parser_Term_syntheticHole_parenthesizer___closed__1 = (const lean_object*)&l_Lean_Parser_Term_syntheticHole_parenthesizer___closed__1_value;
static const lean_closure_object l_Lean_Parser_Term_syntheticHole_parenthesizer___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_ident_parenthesizer___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Parser_Term_syntheticHole_parenthesizer___closed__2 = (const lean_object*)&l_Lean_Parser_Term_syntheticHole_parenthesizer___closed__2_value;
static const lean_closure_object l_Lean_Parser_Term_syntheticHole_parenthesizer___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Parenthesizer_orelse_parenthesizer___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Parser_Term_syntheticHole_parenthesizer___closed__2_value),((lean_object*)&l_Lean_Parser_Term_hole_parenthesizer___closed__1_value)} };
static const lean_object* l_Lean_Parser_Term_syntheticHole_parenthesizer___closed__3 = (const lean_object*)&l_Lean_Parser_Term_syntheticHole_parenthesizer___closed__3_value;
static const lean_closure_object l_Lean_Parser_Term_syntheticHole_parenthesizer___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Parser_Term_syntheticHole_parenthesizer___closed__1_value),((lean_object*)&l_Lean_Parser_Term_syntheticHole_parenthesizer___closed__3_value)} };
static const lean_object* l_Lean_Parser_Term_syntheticHole_parenthesizer___closed__4 = (const lean_object*)&l_Lean_Parser_Term_syntheticHole_parenthesizer___closed__4_value;
static const lean_closure_object l_Lean_Parser_Term_syntheticHole_parenthesizer___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Parenthesizer_leadingNode_parenthesizer___boxed, .m_arity = 8, .m_num_fixed = 3, .m_objs = {((lean_object*)&l_Lean_Parser_Term_syntheticHole___closed__1_value),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)&l_Lean_Parser_Term_syntheticHole_parenthesizer___closed__4_value)} };
static const lean_object* l_Lean_Parser_Term_syntheticHole_parenthesizer___closed__5 = (const lean_object*)&l_Lean_Parser_Term_syntheticHole_parenthesizer___closed__5_value;
LEAN_EXPORT lean_object* l_Lean_Parser_Term_syntheticHole_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Term_syntheticHole_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_syntheticHole___regBuiltin_Lean_Parser_Term_syntheticHole_parenthesizer__13___closed__0_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_syntheticHole___regBuiltin_Lean_Parser_Term_syntheticHole_parenthesizer__13___closed__0_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_syntheticHole___regBuiltin_Lean_Parser_Term_syntheticHole_parenthesizer__13___closed__0_value_aux_0),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_syntheticHole___regBuiltin_Lean_Parser_Term_syntheticHole_parenthesizer__13___closed__0_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_syntheticHole___regBuiltin_Lean_Parser_Term_syntheticHole_parenthesizer__13___closed__0_value_aux_1),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__12_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_syntheticHole___regBuiltin_Lean_Parser_Term_syntheticHole_parenthesizer__13___closed__0_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_syntheticHole___regBuiltin_Lean_Parser_Term_syntheticHole_parenthesizer__13___closed__0_value_aux_2),((lean_object*)&l_Lean_Parser_Term_syntheticHole___closed__0_value),LEAN_SCALAR_PTR_LITERAL(218, 189, 67, 60, 211, 196, 112, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_syntheticHole___regBuiltin_Lean_Parser_Term_syntheticHole_parenthesizer__13___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_syntheticHole___regBuiltin_Lean_Parser_Term_syntheticHole_parenthesizer__13___closed__0_value_aux_3),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeq___regBuiltin_Lean_Parser_Tactic_tacticSeqBracketed_parenthesizer__19___closed__0_value),LEAN_SCALAR_PTR_LITERAL(231, 25, 118, 219, 8, 203, 22, 194)}};
static const lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_syntheticHole___regBuiltin_Lean_Parser_Term_syntheticHole_parenthesizer__13___closed__0 = (const lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_syntheticHole___regBuiltin_Lean_Parser_Term_syntheticHole_parenthesizer__13___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_syntheticHole___regBuiltin_Lean_Parser_Term_syntheticHole_parenthesizer__13();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_syntheticHole___regBuiltin_Lean_Parser_Term_syntheticHole_parenthesizer__13___boxed(lean_object*);
static const lean_string_object l_Lean_Parser_Term_omission___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "omission"};
static const lean_object* l_Lean_Parser_Term_omission___closed__0 = (const lean_object*)&l_Lean_Parser_Term_omission___closed__0_value;
static const lean_ctor_object l_Lean_Parser_Term_omission___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_Term_omission___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Term_omission___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_Term_omission___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Term_omission___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__12_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Parser_Term_omission___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Term_omission___closed__1_value_aux_2),((lean_object*)&l_Lean_Parser_Term_omission___closed__0_value),LEAN_SCALAR_PTR_LITERAL(22, 154, 52, 140, 5, 177, 16, 6)}};
static const lean_object* l_Lean_Parser_Term_omission___closed__1 = (const lean_object*)&l_Lean_Parser_Term_omission___closed__1_value;
static lean_once_cell_t l_Lean_Parser_Term_omission___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Term_omission___closed__2;
static const lean_string_object l_Lean_Parser_Term_omission___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "⋯"};
static const lean_object* l_Lean_Parser_Term_omission___closed__3 = (const lean_object*)&l_Lean_Parser_Term_omission___closed__3_value;
static lean_once_cell_t l_Lean_Parser_Term_omission___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Term_omission___closed__4;
static lean_once_cell_t l_Lean_Parser_Term_omission___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Term_omission___closed__5;
static lean_once_cell_t l_Lean_Parser_Term_omission___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Term_omission___closed__6;
static lean_once_cell_t l_Lean_Parser_Term_omission___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Term_omission___closed__7;
LEAN_EXPORT lean_object* l_Lean_Parser_Term_omission;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_omission___regBuiltin_Lean_Parser_Term_omission__1();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_omission___regBuiltin_Lean_Parser_Term_omission__1___boxed(lean_object*);
static const lean_string_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_omission___regBuiltin_Lean_Parser_Term_omission_docString__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 435, .m_capacity = 435, .m_length = 428, .m_data = "The `⋯` term denotes a term that was omitted by the pretty printer.\nThe presence of `⋯` in pretty printer output is controlled by the `pp.deepTerms` and `pp.proofs` options,\nand these options can be further adjusted using `pp.deepTerms.threshold` and `pp.proofs.threshold`.\n\nIt is only meant to be used for pretty printing.\nHowever, in case it is copied and pasted from the Infoview, `⋯` logs a warning and elaborates like `_`.\n"};
static const lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_omission___regBuiltin_Lean_Parser_Term_omission_docString__3___closed__0 = (const lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_omission___regBuiltin_Lean_Parser_Term_omission_docString__3___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_omission___regBuiltin_Lean_Parser_Term_omission_docString__3();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_omission___regBuiltin_Lean_Parser_Term_omission_docString__3___boxed(lean_object*);
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_omission___regBuiltin_Lean_Parser_Term_omission_declRange__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(157) << 1) | 1)),((lean_object*)(((size_t)(23) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_omission___regBuiltin_Lean_Parser_Term_omission_declRange__5___closed__0 = (const lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_omission___regBuiltin_Lean_Parser_Term_omission_declRange__5___closed__0_value;
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_omission___regBuiltin_Lean_Parser_Term_omission_declRange__5___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(158) << 1) | 1)),((lean_object*)(((size_t)(5) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_omission___regBuiltin_Lean_Parser_Term_omission_declRange__5___closed__1 = (const lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_omission___regBuiltin_Lean_Parser_Term_omission_declRange__5___closed__1_value;
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_omission___regBuiltin_Lean_Parser_Term_omission_declRange__5___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_omission___regBuiltin_Lean_Parser_Term_omission_declRange__5___closed__0_value),((lean_object*)(((size_t)(23) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_omission___regBuiltin_Lean_Parser_Term_omission_declRange__5___closed__1_value),((lean_object*)(((size_t)(5) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_omission___regBuiltin_Lean_Parser_Term_omission_declRange__5___closed__2 = (const lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_omission___regBuiltin_Lean_Parser_Term_omission_declRange__5___closed__2_value;
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_omission___regBuiltin_Lean_Parser_Term_omission_declRange__5___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(157) << 1) | 1)),((lean_object*)(((size_t)(27) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_omission___regBuiltin_Lean_Parser_Term_omission_declRange__5___closed__3 = (const lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_omission___regBuiltin_Lean_Parser_Term_omission_declRange__5___closed__3_value;
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_omission___regBuiltin_Lean_Parser_Term_omission_declRange__5___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(157) << 1) | 1)),((lean_object*)(((size_t)(35) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_omission___regBuiltin_Lean_Parser_Term_omission_declRange__5___closed__4 = (const lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_omission___regBuiltin_Lean_Parser_Term_omission_declRange__5___closed__4_value;
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_omission___regBuiltin_Lean_Parser_Term_omission_declRange__5___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_omission___regBuiltin_Lean_Parser_Term_omission_declRange__5___closed__3_value),((lean_object*)(((size_t)(27) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_omission___regBuiltin_Lean_Parser_Term_omission_declRange__5___closed__4_value),((lean_object*)(((size_t)(35) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_omission___regBuiltin_Lean_Parser_Term_omission_declRange__5___closed__5 = (const lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_omission___regBuiltin_Lean_Parser_Term_omission_declRange__5___closed__5_value;
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_omission___regBuiltin_Lean_Parser_Term_omission_declRange__5___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_omission___regBuiltin_Lean_Parser_Term_omission_declRange__5___closed__2_value),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_omission___regBuiltin_Lean_Parser_Term_omission_declRange__5___closed__5_value)}};
static const lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_omission___regBuiltin_Lean_Parser_Term_omission_declRange__5___closed__6 = (const lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_omission___regBuiltin_Lean_Parser_Term_omission_declRange__5___closed__6_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_omission___regBuiltin_Lean_Parser_Term_omission_declRange__5();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_omission___regBuiltin_Lean_Parser_Term_omission_declRange__5___boxed(lean_object*);
static const lean_closure_object l_Lean_Parser_Term_omission_formatter___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_mkAntiquot_formatter___boxed, .m_arity = 9, .m_num_fixed = 4, .m_objs = {((lean_object*)&l_Lean_Parser_Term_omission___closed__0_value),((lean_object*)&l_Lean_Parser_Term_omission___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Parser_Term_omission_formatter___closed__0 = (const lean_object*)&l_Lean_Parser_Term_omission_formatter___closed__0_value;
static const lean_closure_object l_Lean_Parser_Term_omission_formatter___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_symbol_formatter___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Parser_Term_omission___closed__3_value)} };
static const lean_object* l_Lean_Parser_Term_omission_formatter___closed__1 = (const lean_object*)&l_Lean_Parser_Term_omission_formatter___closed__1_value;
static const lean_closure_object l_Lean_Parser_Term_omission_formatter___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_leadingNode_formatter___boxed, .m_arity = 8, .m_num_fixed = 3, .m_objs = {((lean_object*)&l_Lean_Parser_Term_omission___closed__1_value),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)&l_Lean_Parser_Term_omission_formatter___closed__1_value)} };
static const lean_object* l_Lean_Parser_Term_omission_formatter___closed__2 = (const lean_object*)&l_Lean_Parser_Term_omission_formatter___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Parser_Term_omission_formatter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Term_omission_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_omission___regBuiltin_Lean_Parser_Term_omission_formatter__9___closed__0_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_omission___regBuiltin_Lean_Parser_Term_omission_formatter__9___closed__0_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_omission___regBuiltin_Lean_Parser_Term_omission_formatter__9___closed__0_value_aux_0),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_omission___regBuiltin_Lean_Parser_Term_omission_formatter__9___closed__0_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_omission___regBuiltin_Lean_Parser_Term_omission_formatter__9___closed__0_value_aux_1),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__12_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_omission___regBuiltin_Lean_Parser_Term_omission_formatter__9___closed__0_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_omission___regBuiltin_Lean_Parser_Term_omission_formatter__9___closed__0_value_aux_2),((lean_object*)&l_Lean_Parser_Term_omission___closed__0_value),LEAN_SCALAR_PTR_LITERAL(22, 154, 52, 140, 5, 177, 16, 6)}};
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_omission___regBuiltin_Lean_Parser_Term_omission_formatter__9___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_omission___regBuiltin_Lean_Parser_Term_omission_formatter__9___closed__0_value_aux_3),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeq___regBuiltin_Lean_Parser_Tactic_tacticSeqBracketed_formatter__5___closed__0_value),LEAN_SCALAR_PTR_LITERAL(135, 172, 62, 233, 244, 85, 47, 109)}};
static const lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_omission___regBuiltin_Lean_Parser_Term_omission_formatter__9___closed__0 = (const lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_omission___regBuiltin_Lean_Parser_Term_omission_formatter__9___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_omission___regBuiltin_Lean_Parser_Term_omission_formatter__9();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_omission___regBuiltin_Lean_Parser_Term_omission_formatter__9___boxed(lean_object*);
static const lean_closure_object l_Lean_Parser_Term_omission_parenthesizer___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_mkAntiquot_parenthesizer___boxed, .m_arity = 9, .m_num_fixed = 4, .m_objs = {((lean_object*)&l_Lean_Parser_Term_omission___closed__0_value),((lean_object*)&l_Lean_Parser_Term_omission___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Parser_Term_omission_parenthesizer___closed__0 = (const lean_object*)&l_Lean_Parser_Term_omission_parenthesizer___closed__0_value;
static const lean_closure_object l_Lean_Parser_Term_omission_parenthesizer___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_symbol_parenthesizer___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Parser_Term_omission___closed__3_value)} };
static const lean_object* l_Lean_Parser_Term_omission_parenthesizer___closed__1 = (const lean_object*)&l_Lean_Parser_Term_omission_parenthesizer___closed__1_value;
static const lean_closure_object l_Lean_Parser_Term_omission_parenthesizer___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Parenthesizer_leadingNode_parenthesizer___boxed, .m_arity = 8, .m_num_fixed = 3, .m_objs = {((lean_object*)&l_Lean_Parser_Term_omission___closed__1_value),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)&l_Lean_Parser_Term_omission_parenthesizer___closed__1_value)} };
static const lean_object* l_Lean_Parser_Term_omission_parenthesizer___closed__2 = (const lean_object*)&l_Lean_Parser_Term_omission_parenthesizer___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Parser_Term_omission_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Term_omission_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_omission___regBuiltin_Lean_Parser_Term_omission_parenthesizer__13___closed__0_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_omission___regBuiltin_Lean_Parser_Term_omission_parenthesizer__13___closed__0_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_omission___regBuiltin_Lean_Parser_Term_omission_parenthesizer__13___closed__0_value_aux_0),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_omission___regBuiltin_Lean_Parser_Term_omission_parenthesizer__13___closed__0_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_omission___regBuiltin_Lean_Parser_Term_omission_parenthesizer__13___closed__0_value_aux_1),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__12_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_omission___regBuiltin_Lean_Parser_Term_omission_parenthesizer__13___closed__0_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_omission___regBuiltin_Lean_Parser_Term_omission_parenthesizer__13___closed__0_value_aux_2),((lean_object*)&l_Lean_Parser_Term_omission___closed__0_value),LEAN_SCALAR_PTR_LITERAL(22, 154, 52, 140, 5, 177, 16, 6)}};
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_omission___regBuiltin_Lean_Parser_Term_omission_parenthesizer__13___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_omission___regBuiltin_Lean_Parser_Term_omission_parenthesizer__13___closed__0_value_aux_3),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeq___regBuiltin_Lean_Parser_Tactic_tacticSeqBracketed_parenthesizer__19___closed__0_value),LEAN_SCALAR_PTR_LITERAL(83, 133, 194, 146, 208, 209, 34, 77)}};
static const lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_omission___regBuiltin_Lean_Parser_Term_omission_parenthesizer__13___closed__0 = (const lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_omission___regBuiltin_Lean_Parser_Term_omission_parenthesizer__13___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_omission___regBuiltin_Lean_Parser_Term_omission_parenthesizer__13();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_omission___regBuiltin_Lean_Parser_Term_omission_parenthesizer__13___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Term_binderIdent_formatter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Term_binderIdent_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Term_binderIdent_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Term_binderIdent_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Parser_Term_binderIdent___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Term_binderIdent___closed__0;
LEAN_EXPORT lean_object* l_Lean_Parser_Term_binderIdent;
static const lean_string_object l_Lean_Parser_Term_binderType_formatter___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = " : "};
static const lean_object* l_Lean_Parser_Term_binderType_formatter___closed__0 = (const lean_object*)&l_Lean_Parser_Term_binderType_formatter___closed__0_value;
static const lean_closure_object l_Lean_Parser_Term_binderType_formatter___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_symbol_formatter___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Parser_Term_binderType_formatter___closed__0_value)} };
static const lean_object* l_Lean_Parser_Term_binderType_formatter___closed__1 = (const lean_object*)&l_Lean_Parser_Term_binderType_formatter___closed__1_value;
static const lean_closure_object l_Lean_Parser_Term_binderType_formatter___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_termParser_formatter___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Parser_Term_binderType_formatter___closed__2 = (const lean_object*)&l_Lean_Parser_Term_binderType_formatter___closed__2_value;
static const lean_closure_object l_Lean_Parser_Term_binderType_formatter___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Parser_Term_binderType_formatter___closed__1_value),((lean_object*)&l_Lean_Parser_Term_binderType_formatter___closed__2_value)} };
static const lean_object* l_Lean_Parser_Term_binderType_formatter___closed__3 = (const lean_object*)&l_Lean_Parser_Term_binderType_formatter___closed__3_value;
static const lean_string_object l_Lean_Parser_Term_binderType_formatter___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l_Lean_Parser_Term_binderType_formatter___closed__4 = (const lean_object*)&l_Lean_Parser_Term_binderType_formatter___closed__4_value;
static const lean_ctor_object l_Lean_Parser_Term_binderType_formatter___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_Term_binderType_formatter___closed__4_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l_Lean_Parser_Term_binderType_formatter___closed__5 = (const lean_object*)&l_Lean_Parser_Term_binderType_formatter___closed__5_value;
LEAN_EXPORT lean_object* l_Lean_Parser_Term_binderType_formatter(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Term_binderType_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Parser_Term_binderType_parenthesizer___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_symbol_parenthesizer___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Parser_Term_binderType_formatter___closed__0_value)} };
static const lean_object* l_Lean_Parser_Term_binderType_parenthesizer___closed__0 = (const lean_object*)&l_Lean_Parser_Term_binderType_parenthesizer___closed__0_value;
static const lean_closure_object l_Lean_Parser_Term_binderType_parenthesizer___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_termParser_parenthesizer___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Parser_Term_binderType_parenthesizer___closed__1 = (const lean_object*)&l_Lean_Parser_Term_binderType_parenthesizer___closed__1_value;
static const lean_closure_object l_Lean_Parser_Term_binderType_parenthesizer___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Parser_Term_binderType_parenthesizer___closed__0_value),((lean_object*)&l_Lean_Parser_Term_binderType_parenthesizer___closed__1_value)} };
static const lean_object* l_Lean_Parser_Term_binderType_parenthesizer___closed__2 = (const lean_object*)&l_Lean_Parser_Term_binderType_parenthesizer___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Parser_Term_binderType_parenthesizer(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Term_binderType_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Parser_Term_binderType___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Term_binderType___closed__0;
static lean_once_cell_t l_Lean_Parser_Term_binderType___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Term_binderType___closed__1;
static lean_once_cell_t l_Lean_Parser_Term_binderType___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Term_binderType___closed__2;
static lean_once_cell_t l_Lean_Parser_Term_binderType___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Term_binderType___closed__3;
static lean_once_cell_t l_Lean_Parser_Term_binderType___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Term_binderType___closed__4;
LEAN_EXPORT lean_object* l_Lean_Parser_Term_binderType(uint8_t);
LEAN_EXPORT lean_object* l_Lean_Parser_Term_binderType___boxed(lean_object*);
static const lean_string_object l_Lean_Parser_Term_binderTactic_formatter___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "binderTactic"};
static const lean_object* l_Lean_Parser_Term_binderTactic_formatter___closed__0 = (const lean_object*)&l_Lean_Parser_Term_binderTactic_formatter___closed__0_value;
static const lean_ctor_object l_Lean_Parser_Term_binderTactic_formatter___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_Term_binderTactic_formatter___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Term_binderTactic_formatter___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_Term_binderTactic_formatter___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Term_binderTactic_formatter___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__12_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Parser_Term_binderTactic_formatter___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Term_binderTactic_formatter___closed__1_value_aux_2),((lean_object*)&l_Lean_Parser_Term_binderTactic_formatter___closed__0_value),LEAN_SCALAR_PTR_LITERAL(17, 181, 78, 34, 190, 12, 180, 92)}};
static const lean_object* l_Lean_Parser_Term_binderTactic_formatter___closed__1 = (const lean_object*)&l_Lean_Parser_Term_binderTactic_formatter___closed__1_value;
static const lean_closure_object l_Lean_Parser_Term_binderTactic_formatter___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_mkAntiquot_formatter___boxed, .m_arity = 9, .m_num_fixed = 4, .m_objs = {((lean_object*)&l_Lean_Parser_Term_binderTactic_formatter___closed__0_value),((lean_object*)&l_Lean_Parser_Term_binderTactic_formatter___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Parser_Term_binderTactic_formatter___closed__2 = (const lean_object*)&l_Lean_Parser_Term_binderTactic_formatter___closed__2_value;
static const lean_string_object l_Lean_Parser_Term_binderTactic_formatter___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " := "};
static const lean_object* l_Lean_Parser_Term_binderTactic_formatter___closed__3 = (const lean_object*)&l_Lean_Parser_Term_binderTactic_formatter___closed__3_value;
static const lean_closure_object l_Lean_Parser_Term_binderTactic_formatter___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_symbol_formatter___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Parser_Term_binderTactic_formatter___closed__3_value)} };
static const lean_object* l_Lean_Parser_Term_binderTactic_formatter___closed__4 = (const lean_object*)&l_Lean_Parser_Term_binderTactic_formatter___closed__4_value;
static const lean_string_object l_Lean_Parser_Term_binderTactic_formatter___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " by "};
static const lean_object* l_Lean_Parser_Term_binderTactic_formatter___closed__5 = (const lean_object*)&l_Lean_Parser_Term_binderTactic_formatter___closed__5_value;
static const lean_closure_object l_Lean_Parser_Term_binderTactic_formatter___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_symbol_formatter___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Parser_Term_binderTactic_formatter___closed__5_value)} };
static const lean_object* l_Lean_Parser_Term_binderTactic_formatter___closed__6 = (const lean_object*)&l_Lean_Parser_Term_binderTactic_formatter___closed__6_value;
static const lean_closure_object l_Lean_Parser_Term_binderTactic_formatter___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Parser_Term_binderTactic_formatter___closed__4_value),((lean_object*)&l_Lean_Parser_Term_binderTactic_formatter___closed__6_value)} };
static const lean_object* l_Lean_Parser_Term_binderTactic_formatter___closed__7 = (const lean_object*)&l_Lean_Parser_Term_binderTactic_formatter___closed__7_value;
static const lean_closure_object l_Lean_Parser_Term_binderTactic_formatter___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_atomic_formatter___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Parser_Term_binderTactic_formatter___closed__7_value)} };
static const lean_object* l_Lean_Parser_Term_binderTactic_formatter___closed__8 = (const lean_object*)&l_Lean_Parser_Term_binderTactic_formatter___closed__8_value;
static lean_once_cell_t l_Lean_Parser_Term_binderTactic_formatter___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Term_binderTactic_formatter___closed__9;
static lean_once_cell_t l_Lean_Parser_Term_binderTactic_formatter___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Term_binderTactic_formatter___closed__10;
LEAN_EXPORT lean_object* l_Lean_Parser_Term_binderTactic_formatter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Term_binderTactic_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_binderTactic___regBuiltin_Lean_Parser_Term_binderTactic_formatter__3___closed__0_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_binderTactic___regBuiltin_Lean_Parser_Term_binderTactic_formatter__3___closed__0_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_binderTactic___regBuiltin_Lean_Parser_Term_binderTactic_formatter__3___closed__0_value_aux_0),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_binderTactic___regBuiltin_Lean_Parser_Term_binderTactic_formatter__3___closed__0_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_binderTactic___regBuiltin_Lean_Parser_Term_binderTactic_formatter__3___closed__0_value_aux_1),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__12_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_binderTactic___regBuiltin_Lean_Parser_Term_binderTactic_formatter__3___closed__0_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_binderTactic___regBuiltin_Lean_Parser_Term_binderTactic_formatter__3___closed__0_value_aux_2),((lean_object*)&l_Lean_Parser_Term_binderTactic_formatter___closed__0_value),LEAN_SCALAR_PTR_LITERAL(17, 181, 78, 34, 190, 12, 180, 92)}};
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_binderTactic___regBuiltin_Lean_Parser_Term_binderTactic_formatter__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_binderTactic___regBuiltin_Lean_Parser_Term_binderTactic_formatter__3___closed__0_value_aux_3),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeq___regBuiltin_Lean_Parser_Tactic_tacticSeqBracketed_formatter__5___closed__0_value),LEAN_SCALAR_PTR_LITERAL(28, 165, 164, 143, 129, 158, 74, 4)}};
static const lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_binderTactic___regBuiltin_Lean_Parser_Term_binderTactic_formatter__3___closed__0 = (const lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_binderTactic___regBuiltin_Lean_Parser_Term_binderTactic_formatter__3___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_binderTactic___regBuiltin_Lean_Parser_Term_binderTactic_formatter__3();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_binderTactic___regBuiltin_Lean_Parser_Term_binderTactic_formatter__3___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Term_binderTactic_parenthesizer___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Term_binderTactic_parenthesizer___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Parser_Term_binderTactic_parenthesizer___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_mkAntiquot_parenthesizer___boxed, .m_arity = 9, .m_num_fixed = 4, .m_objs = {((lean_object*)&l_Lean_Parser_Term_binderTactic_formatter___closed__0_value),((lean_object*)&l_Lean_Parser_Term_binderTactic_formatter___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Parser_Term_binderTactic_parenthesizer___closed__0 = (const lean_object*)&l_Lean_Parser_Term_binderTactic_parenthesizer___closed__0_value;
static const lean_closure_object l_Lean_Parser_Term_binderTactic_parenthesizer___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_symbol_parenthesizer___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Parser_Term_binderTactic_formatter___closed__3_value)} };
static const lean_object* l_Lean_Parser_Term_binderTactic_parenthesizer___closed__1 = (const lean_object*)&l_Lean_Parser_Term_binderTactic_parenthesizer___closed__1_value;
static const lean_closure_object l_Lean_Parser_Term_binderTactic_parenthesizer___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_symbol_parenthesizer___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Parser_Term_binderTactic_formatter___closed__5_value)} };
static const lean_object* l_Lean_Parser_Term_binderTactic_parenthesizer___closed__2 = (const lean_object*)&l_Lean_Parser_Term_binderTactic_parenthesizer___closed__2_value;
static const lean_closure_object l_Lean_Parser_Term_binderTactic_parenthesizer___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_Term_binderTactic_parenthesizer___lam__0___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Parser_Term_binderTactic_parenthesizer___closed__1_value),((lean_object*)&l_Lean_Parser_Term_binderTactic_parenthesizer___closed__2_value)} };
static const lean_object* l_Lean_Parser_Term_binderTactic_parenthesizer___closed__3 = (const lean_object*)&l_Lean_Parser_Term_binderTactic_parenthesizer___closed__3_value;
static lean_once_cell_t l_Lean_Parser_Term_binderTactic_parenthesizer___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Term_binderTactic_parenthesizer___closed__4;
static lean_once_cell_t l_Lean_Parser_Term_binderTactic_parenthesizer___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Term_binderTactic_parenthesizer___closed__5;
LEAN_EXPORT lean_object* l_Lean_Parser_Term_binderTactic_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Term_binderTactic_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_binderTactic___regBuiltin_Lean_Parser_Term_binderTactic_parenthesizer__7___closed__0_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_binderTactic___regBuiltin_Lean_Parser_Term_binderTactic_parenthesizer__7___closed__0_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_binderTactic___regBuiltin_Lean_Parser_Term_binderTactic_parenthesizer__7___closed__0_value_aux_0),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_binderTactic___regBuiltin_Lean_Parser_Term_binderTactic_parenthesizer__7___closed__0_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_binderTactic___regBuiltin_Lean_Parser_Term_binderTactic_parenthesizer__7___closed__0_value_aux_1),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__12_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_binderTactic___regBuiltin_Lean_Parser_Term_binderTactic_parenthesizer__7___closed__0_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_binderTactic___regBuiltin_Lean_Parser_Term_binderTactic_parenthesizer__7___closed__0_value_aux_2),((lean_object*)&l_Lean_Parser_Term_binderTactic_formatter___closed__0_value),LEAN_SCALAR_PTR_LITERAL(17, 181, 78, 34, 190, 12, 180, 92)}};
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_binderTactic___regBuiltin_Lean_Parser_Term_binderTactic_parenthesizer__7___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_binderTactic___regBuiltin_Lean_Parser_Term_binderTactic_parenthesizer__7___closed__0_value_aux_3),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeq___regBuiltin_Lean_Parser_Tactic_tacticSeqBracketed_parenthesizer__19___closed__0_value),LEAN_SCALAR_PTR_LITERAL(64, 3, 105, 152, 28, 10, 167, 0)}};
static const lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_binderTactic___regBuiltin_Lean_Parser_Term_binderTactic_parenthesizer__7___closed__0 = (const lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_binderTactic___regBuiltin_Lean_Parser_Term_binderTactic_parenthesizer__7___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_binderTactic___regBuiltin_Lean_Parser_Term_binderTactic_parenthesizer__7();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_binderTactic___regBuiltin_Lean_Parser_Term_binderTactic_parenthesizer__7___boxed(lean_object*);
static lean_once_cell_t l_Lean_Parser_Term_binderTactic___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Term_binderTactic___closed__0;
static lean_once_cell_t l_Lean_Parser_Term_binderTactic___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Term_binderTactic___closed__1;
static lean_once_cell_t l_Lean_Parser_Term_binderTactic___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Term_binderTactic___closed__2;
static lean_once_cell_t l_Lean_Parser_Term_binderTactic___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Term_binderTactic___closed__3;
static lean_once_cell_t l_Lean_Parser_Term_binderTactic___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Term_binderTactic___closed__4;
static lean_once_cell_t l_Lean_Parser_Term_binderTactic___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Term_binderTactic___closed__5;
static lean_once_cell_t l_Lean_Parser_Term_binderTactic___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Term_binderTactic___closed__6;
static lean_once_cell_t l_Lean_Parser_Term_binderTactic___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Term_binderTactic___closed__7;
static lean_once_cell_t l_Lean_Parser_Term_binderTactic___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Term_binderTactic___closed__8;
LEAN_EXPORT lean_object* l_Lean_Parser_Term_binderTactic;
static const lean_string_object l_Lean_Parser_Term_binderDefault___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "binderDefault"};
static const lean_object* l_Lean_Parser_Term_binderDefault___closed__0 = (const lean_object*)&l_Lean_Parser_Term_binderDefault___closed__0_value;
static const lean_ctor_object l_Lean_Parser_Term_binderDefault___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_Term_binderDefault___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Term_binderDefault___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_Term_binderDefault___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Term_binderDefault___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__12_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Parser_Term_binderDefault___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Term_binderDefault___closed__1_value_aux_2),((lean_object*)&l_Lean_Parser_Term_binderDefault___closed__0_value),LEAN_SCALAR_PTR_LITERAL(35, 119, 214, 97, 198, 223, 242, 31)}};
static const lean_object* l_Lean_Parser_Term_binderDefault___closed__1 = (const lean_object*)&l_Lean_Parser_Term_binderDefault___closed__1_value;
static lean_once_cell_t l_Lean_Parser_Term_binderDefault___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Term_binderDefault___closed__2;
static lean_once_cell_t l_Lean_Parser_Term_binderDefault___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Term_binderDefault___closed__3;
static lean_once_cell_t l_Lean_Parser_Term_binderDefault___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Term_binderDefault___closed__4;
static lean_once_cell_t l_Lean_Parser_Term_binderDefault___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Term_binderDefault___closed__5;
static lean_once_cell_t l_Lean_Parser_Term_binderDefault___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Term_binderDefault___closed__6;
LEAN_EXPORT lean_object* l_Lean_Parser_Term_binderDefault;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_binderDefaultM;
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_getCur___at___00Lean_Parser_Term_binderDefault_parenthesizer_spec__0___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_getCur___at___00Lean_Parser_Term_binderDefault_parenthesizer_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_getCur___at___00Lean_Parser_Term_binderDefault_parenthesizer_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_getCur___at___00Lean_Parser_Term_binderDefault_parenthesizer_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Term_binderDefault_parenthesizer___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Term_binderDefault_parenthesizer___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Parser_Term_binderDefault_parenthesizer___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "byTactic"};
static const lean_object* l_Lean_Parser_Term_binderDefault_parenthesizer___closed__0 = (const lean_object*)&l_Lean_Parser_Term_binderDefault_parenthesizer___closed__0_value;
static const lean_ctor_object l_Lean_Parser_Term_binderDefault_parenthesizer___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_Term_binderDefault_parenthesizer___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Term_binderDefault_parenthesizer___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_Term_binderDefault_parenthesizer___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Term_binderDefault_parenthesizer___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__12_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Parser_Term_binderDefault_parenthesizer___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Term_binderDefault_parenthesizer___closed__1_value_aux_2),((lean_object*)&l_Lean_Parser_Term_binderDefault_parenthesizer___closed__0_value),LEAN_SCALAR_PTR_LITERAL(187, 150, 238, 148, 228, 221, 116, 224)}};
static const lean_object* l_Lean_Parser_Term_binderDefault_parenthesizer___closed__1 = (const lean_object*)&l_Lean_Parser_Term_binderDefault_parenthesizer___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Parser_Term_binderDefault_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Term_binderDefault_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Parser_Term_explicitBinder___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "explicitBinder"};
static const lean_object* l_Lean_Parser_Term_explicitBinder___closed__0 = (const lean_object*)&l_Lean_Parser_Term_explicitBinder___closed__0_value;
static const lean_ctor_object l_Lean_Parser_Term_explicitBinder___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_Term_explicitBinder___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Term_explicitBinder___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_Term_explicitBinder___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Term_explicitBinder___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__12_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Parser_Term_explicitBinder___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Term_explicitBinder___closed__1_value_aux_2),((lean_object*)&l_Lean_Parser_Term_explicitBinder___closed__0_value),LEAN_SCALAR_PTR_LITERAL(49, 119, 193, 23, 170, 93, 183, 238)}};
static const lean_object* l_Lean_Parser_Term_explicitBinder___closed__1 = (const lean_object*)&l_Lean_Parser_Term_explicitBinder___closed__1_value;
static lean_once_cell_t l_Lean_Parser_Term_explicitBinder___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Term_explicitBinder___closed__2;
static const lean_string_object l_Lean_Parser_Term_explicitBinder___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "("};
static const lean_object* l_Lean_Parser_Term_explicitBinder___closed__3 = (const lean_object*)&l_Lean_Parser_Term_explicitBinder___closed__3_value;
static lean_once_cell_t l_Lean_Parser_Term_explicitBinder___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Term_explicitBinder___closed__4;
static lean_once_cell_t l_Lean_Parser_Term_explicitBinder___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Term_explicitBinder___closed__5;
static lean_once_cell_t l_Lean_Parser_Term_explicitBinder___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Term_explicitBinder___closed__6;
static lean_once_cell_t l_Lean_Parser_Term_explicitBinder___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Term_explicitBinder___closed__7;
static const lean_string_object l_Lean_Parser_Term_explicitBinder___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l_Lean_Parser_Term_explicitBinder___closed__8 = (const lean_object*)&l_Lean_Parser_Term_explicitBinder___closed__8_value;
static lean_once_cell_t l_Lean_Parser_Term_explicitBinder___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Term_explicitBinder___closed__9;
LEAN_EXPORT lean_object* l_Lean_Parser_Term_explicitBinder(uint8_t);
LEAN_EXPORT lean_object* l_Lean_Parser_Term_explicitBinder___boxed(lean_object*);
static const lean_string_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_explicitBinder___regBuiltin_Lean_Parser_Term_explicitBinder_docString__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 147, .m_capacity = 147, .m_length = 146, .m_data = "Explicit binder, like `(x y : A)` or `(x y)`.\nDefault values can be specified using `(x : A := v)` syntax, and tactics using `(x : A := by tac)`.\n"};
static const lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_explicitBinder___regBuiltin_Lean_Parser_Term_explicitBinder_docString__1___closed__0 = (const lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_explicitBinder___regBuiltin_Lean_Parser_Term_explicitBinder_docString__1___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_explicitBinder___regBuiltin_Lean_Parser_Term_explicitBinder_docString__1();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_explicitBinder___regBuiltin_Lean_Parser_Term_explicitBinder_docString__1___boxed(lean_object*);
static const lean_string_object l_Lean_Parser_Term_implicitBinder___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "implicitBinder"};
static const lean_object* l_Lean_Parser_Term_implicitBinder___closed__0 = (const lean_object*)&l_Lean_Parser_Term_implicitBinder___closed__0_value;
static const lean_ctor_object l_Lean_Parser_Term_implicitBinder___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_Term_implicitBinder___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Term_implicitBinder___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_Term_implicitBinder___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Term_implicitBinder___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__12_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Parser_Term_implicitBinder___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Term_implicitBinder___closed__1_value_aux_2),((lean_object*)&l_Lean_Parser_Term_implicitBinder___closed__0_value),LEAN_SCALAR_PTR_LITERAL(39, 181, 62, 102, 86, 14, 161, 96)}};
static const lean_object* l_Lean_Parser_Term_implicitBinder___closed__1 = (const lean_object*)&l_Lean_Parser_Term_implicitBinder___closed__1_value;
static lean_once_cell_t l_Lean_Parser_Term_implicitBinder___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Term_implicitBinder___closed__2;
static const lean_string_object l_Lean_Parser_Term_implicitBinder___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "{"};
static const lean_object* l_Lean_Parser_Term_implicitBinder___closed__3 = (const lean_object*)&l_Lean_Parser_Term_implicitBinder___closed__3_value;
static lean_once_cell_t l_Lean_Parser_Term_implicitBinder___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Term_implicitBinder___closed__4;
LEAN_EXPORT lean_object* l_Lean_Parser_Term_implicitBinder(uint8_t);
LEAN_EXPORT lean_object* l_Lean_Parser_Term_implicitBinder___boxed(lean_object*);
static const lean_string_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_implicitBinder___regBuiltin_Lean_Parser_Term_implicitBinder_docString__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 379, .m_capacity = 379, .m_length = 378, .m_data = "Implicit binder, like `{x y : A}` or `{x y}`.\nIn regular applications, whenever all parameters before it have been specified,\nthen a `_` placeholder is automatically inserted for this parameter.\nImplicit parameters should be able to be determined from the other arguments and the return type\nby unification.\n\nIn `@` explicit mode, implicit binders behave like explicit binders.\n"};
static const lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_implicitBinder___regBuiltin_Lean_Parser_Term_implicitBinder_docString__1___closed__0 = (const lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_implicitBinder___regBuiltin_Lean_Parser_Term_implicitBinder_docString__1___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_implicitBinder___regBuiltin_Lean_Parser_Term_implicitBinder_docString__1();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_implicitBinder___regBuiltin_Lean_Parser_Term_implicitBinder_docString__1___boxed(lean_object*);
static lean_once_cell_t l_Lean_Parser_Term_strictImplicitLeftBracket___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Term_strictImplicitLeftBracket___closed__0;
static const lean_string_object l_Lean_Parser_Term_strictImplicitLeftBracket___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "group"};
static const lean_object* l_Lean_Parser_Term_strictImplicitLeftBracket___closed__1 = (const lean_object*)&l_Lean_Parser_Term_strictImplicitLeftBracket___closed__1_value;
static const lean_ctor_object l_Lean_Parser_Term_strictImplicitLeftBracket___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_Term_strictImplicitLeftBracket___closed__1_value),LEAN_SCALAR_PTR_LITERAL(206, 113, 20, 57, 188, 177, 187, 30)}};
static const lean_object* l_Lean_Parser_Term_strictImplicitLeftBracket___closed__2 = (const lean_object*)&l_Lean_Parser_Term_strictImplicitLeftBracket___closed__2_value;
static lean_once_cell_t l_Lean_Parser_Term_strictImplicitLeftBracket___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Term_strictImplicitLeftBracket___closed__3;
static lean_once_cell_t l_Lean_Parser_Term_strictImplicitLeftBracket___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Term_strictImplicitLeftBracket___closed__4;
static const lean_string_object l_Lean_Parser_Term_strictImplicitLeftBracket___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "⦃"};
static const lean_object* l_Lean_Parser_Term_strictImplicitLeftBracket___closed__5 = (const lean_object*)&l_Lean_Parser_Term_strictImplicitLeftBracket___closed__5_value;
static lean_once_cell_t l_Lean_Parser_Term_strictImplicitLeftBracket___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Term_strictImplicitLeftBracket___closed__6;
static lean_once_cell_t l_Lean_Parser_Term_strictImplicitLeftBracket___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Term_strictImplicitLeftBracket___closed__7;
LEAN_EXPORT lean_object* l_Lean_Parser_Term_strictImplicitLeftBracket;
static lean_once_cell_t l_Lean_Parser_Term_strictImplicitRightBracket___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Term_strictImplicitRightBracket___closed__0;
static lean_once_cell_t l_Lean_Parser_Term_strictImplicitRightBracket___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Term_strictImplicitRightBracket___closed__1;
static lean_once_cell_t l_Lean_Parser_Term_strictImplicitRightBracket___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Term_strictImplicitRightBracket___closed__2;
static const lean_string_object l_Lean_Parser_Term_strictImplicitRightBracket___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "⦄"};
static const lean_object* l_Lean_Parser_Term_strictImplicitRightBracket___closed__3 = (const lean_object*)&l_Lean_Parser_Term_strictImplicitRightBracket___closed__3_value;
static lean_once_cell_t l_Lean_Parser_Term_strictImplicitRightBracket___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Term_strictImplicitRightBracket___closed__4;
static lean_once_cell_t l_Lean_Parser_Term_strictImplicitRightBracket___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Term_strictImplicitRightBracket___closed__5;
LEAN_EXPORT lean_object* l_Lean_Parser_Term_strictImplicitRightBracket;
static const lean_string_object l_Lean_Parser_Term_strictImplicitBinder___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "strictImplicitBinder"};
static const lean_object* l_Lean_Parser_Term_strictImplicitBinder___closed__0 = (const lean_object*)&l_Lean_Parser_Term_strictImplicitBinder___closed__0_value;
static const lean_ctor_object l_Lean_Parser_Term_strictImplicitBinder___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_Term_strictImplicitBinder___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Term_strictImplicitBinder___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_Term_strictImplicitBinder___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Term_strictImplicitBinder___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__12_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Parser_Term_strictImplicitBinder___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Term_strictImplicitBinder___closed__1_value_aux_2),((lean_object*)&l_Lean_Parser_Term_strictImplicitBinder___closed__0_value),LEAN_SCALAR_PTR_LITERAL(125, 223, 215, 186, 222, 17, 242, 189)}};
static const lean_object* l_Lean_Parser_Term_strictImplicitBinder___closed__1 = (const lean_object*)&l_Lean_Parser_Term_strictImplicitBinder___closed__1_value;
static lean_once_cell_t l_Lean_Parser_Term_strictImplicitBinder___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Term_strictImplicitBinder___closed__2;
LEAN_EXPORT lean_object* l_Lean_Parser_Term_strictImplicitBinder(uint8_t);
LEAN_EXPORT lean_object* l_Lean_Parser_Term_strictImplicitBinder___boxed(lean_object*);
static const lean_string_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_strictImplicitBinder___regBuiltin_Lean_Parser_Term_strictImplicitBinder_docString__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 783, .m_capacity = 783, .m_length = 752, .m_data = "Strict-implicit binder, like `⦃x y : A⦄` or `⦃x y⦄`.\nIn contrast to `{ ... }` implicit binders, strict-implicit binders do not automatically insert\na `_` placeholder until at least one subsequent explicit parameter is specified.\nDo *not* use strict-implicit binders unless there is a subsequent explicit parameter.\nAssuming this rule is followed, for fully applied expressions implicit and strict-implicit binders have the same behavior.\n\nExample: If `h : ∀ ⦃x : A⦄, x ∈ s → p x` and `hs : y ∈ s`,\nthen `h` by itself elaborates to itself without inserting `_` for the `x : A` parameter,\nand `h hs` has type `p y`.\nIn contrast, if `h' : ∀ {x : A}, x ∈ s → p x`, then `h` by itself elaborates to have type `\?m ∈ s → p \?m`\nwith `\?m` a fresh metavariable.\n"};
static const lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_strictImplicitBinder___regBuiltin_Lean_Parser_Term_strictImplicitBinder_docString__1___closed__0 = (const lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_strictImplicitBinder___regBuiltin_Lean_Parser_Term_strictImplicitBinder_docString__1___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_strictImplicitBinder___regBuiltin_Lean_Parser_Term_strictImplicitBinder_docString__1();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_strictImplicitBinder___regBuiltin_Lean_Parser_Term_strictImplicitBinder_docString__1___boxed(lean_object*);
static lean_once_cell_t l_Lean_Parser_Term_optIdent___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Term_optIdent___closed__0;
static lean_once_cell_t l_Lean_Parser_Term_optIdent___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Term_optIdent___closed__1;
static lean_once_cell_t l_Lean_Parser_Term_optIdent___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Term_optIdent___closed__2;
LEAN_EXPORT lean_object* l_Lean_Parser_Term_optIdent;
static const lean_string_object l_Lean_Parser_Term_instBinder___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "instBinder"};
static const lean_object* l_Lean_Parser_Term_instBinder___closed__0 = (const lean_object*)&l_Lean_Parser_Term_instBinder___closed__0_value;
static const lean_ctor_object l_Lean_Parser_Term_instBinder___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_Term_instBinder___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Term_instBinder___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_Term_instBinder___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Term_instBinder___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__12_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Parser_Term_instBinder___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Term_instBinder___closed__1_value_aux_2),((lean_object*)&l_Lean_Parser_Term_instBinder___closed__0_value),LEAN_SCALAR_PTR_LITERAL(198, 219, 89, 171, 221, 95, 22, 227)}};
static const lean_object* l_Lean_Parser_Term_instBinder___closed__1 = (const lean_object*)&l_Lean_Parser_Term_instBinder___closed__1_value;
static lean_once_cell_t l_Lean_Parser_Term_instBinder___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Term_instBinder___closed__2;
static const lean_string_object l_Lean_Parser_Term_instBinder___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "["};
static const lean_object* l_Lean_Parser_Term_instBinder___closed__3 = (const lean_object*)&l_Lean_Parser_Term_instBinder___closed__3_value;
static lean_once_cell_t l_Lean_Parser_Term_instBinder___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Term_instBinder___closed__4;
static lean_once_cell_t l_Lean_Parser_Term_instBinder___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Term_instBinder___closed__5;
static lean_once_cell_t l_Lean_Parser_Term_instBinder___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Term_instBinder___closed__6;
static const lean_string_object l_Lean_Parser_Term_instBinder___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "]"};
static const lean_object* l_Lean_Parser_Term_instBinder___closed__7 = (const lean_object*)&l_Lean_Parser_Term_instBinder___closed__7_value;
static lean_once_cell_t l_Lean_Parser_Term_instBinder___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Term_instBinder___closed__8;
static lean_once_cell_t l_Lean_Parser_Term_instBinder___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Term_instBinder___closed__9;
static lean_once_cell_t l_Lean_Parser_Term_instBinder___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Term_instBinder___closed__10;
static lean_once_cell_t l_Lean_Parser_Term_instBinder___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Term_instBinder___closed__11;
static lean_once_cell_t l_Lean_Parser_Term_instBinder___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Term_instBinder___closed__12;
static lean_once_cell_t l_Lean_Parser_Term_instBinder___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Term_instBinder___closed__13;
LEAN_EXPORT lean_object* l_Lean_Parser_Term_instBinder;
static const lean_string_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_instBinder___regBuiltin_Lean_Parser_Term_instBinder_docString__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 430, .m_capacity = 430, .m_length = 429, .m_data = "Instance-implicit binder, like `[C]` or `[inst : C]`.\nIn regular applications without `@` explicit mode, it is automatically inserted\nand solved for by typeclass inference for the specified class `C`.\nIn `@` explicit mode, if `_` is used for an instance-implicit parameter, then it is still solved for by typeclass inference;\nuse `(_)` to inhibit this and have it be solved for by unification instead, like an implicit argument.\n"};
static const lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_instBinder___regBuiltin_Lean_Parser_Term_instBinder_docString__1___closed__0 = (const lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_instBinder___regBuiltin_Lean_Parser_Term_instBinder_docString__1___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_instBinder___regBuiltin_Lean_Parser_Term_instBinder_docString__1();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_instBinder___regBuiltin_Lean_Parser_Term_instBinder_docString__1___boxed(lean_object*);
static const lean_closure_object l_Lean_Parser_Term_binderDefault_formatter___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_mkAntiquot_formatter___boxed, .m_arity = 9, .m_num_fixed = 4, .m_objs = {((lean_object*)&l_Lean_Parser_Term_binderDefault___closed__0_value),((lean_object*)&l_Lean_Parser_Term_binderDefault___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Parser_Term_binderDefault_formatter___closed__0 = (const lean_object*)&l_Lean_Parser_Term_binderDefault_formatter___closed__0_value;
static const lean_closure_object l_Lean_Parser_Term_binderDefault_formatter___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Parser_Term_binderTactic_formatter___closed__4_value),((lean_object*)&l_Lean_Parser_Term_binderType_formatter___closed__2_value)} };
static const lean_object* l_Lean_Parser_Term_binderDefault_formatter___closed__1 = (const lean_object*)&l_Lean_Parser_Term_binderDefault_formatter___closed__1_value;
static const lean_closure_object l_Lean_Parser_Term_binderDefault_formatter___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_leadingNode_formatter___boxed, .m_arity = 8, .m_num_fixed = 3, .m_objs = {((lean_object*)&l_Lean_Parser_Term_binderDefault___closed__1_value),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)&l_Lean_Parser_Term_binderDefault_formatter___closed__1_value)} };
static const lean_object* l_Lean_Parser_Term_binderDefault_formatter___closed__2 = (const lean_object*)&l_Lean_Parser_Term_binderDefault_formatter___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Parser_Term_binderDefault_formatter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Term_binderDefault_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_bracketedBinder___regBuiltin_Lean_Parser_Term_binderDefault_formatter__3___closed__0_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_bracketedBinder___regBuiltin_Lean_Parser_Term_binderDefault_formatter__3___closed__0_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_bracketedBinder___regBuiltin_Lean_Parser_Term_binderDefault_formatter__3___closed__0_value_aux_0),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_bracketedBinder___regBuiltin_Lean_Parser_Term_binderDefault_formatter__3___closed__0_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_bracketedBinder___regBuiltin_Lean_Parser_Term_binderDefault_formatter__3___closed__0_value_aux_1),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__12_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_bracketedBinder___regBuiltin_Lean_Parser_Term_binderDefault_formatter__3___closed__0_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_bracketedBinder___regBuiltin_Lean_Parser_Term_binderDefault_formatter__3___closed__0_value_aux_2),((lean_object*)&l_Lean_Parser_Term_binderDefault___closed__0_value),LEAN_SCALAR_PTR_LITERAL(35, 119, 214, 97, 198, 223, 242, 31)}};
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_bracketedBinder___regBuiltin_Lean_Parser_Term_binderDefault_formatter__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_bracketedBinder___regBuiltin_Lean_Parser_Term_binderDefault_formatter__3___closed__0_value_aux_3),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeq___regBuiltin_Lean_Parser_Tactic_tacticSeqBracketed_formatter__5___closed__0_value),LEAN_SCALAR_PTR_LITERAL(246, 200, 15, 206, 200, 98, 47, 188)}};
static const lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_bracketedBinder___regBuiltin_Lean_Parser_Term_binderDefault_formatter__3___closed__0 = (const lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_bracketedBinder___regBuiltin_Lean_Parser_Term_binderDefault_formatter__3___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_bracketedBinder___regBuiltin_Lean_Parser_Term_binderDefault_formatter__3();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_bracketedBinder___regBuiltin_Lean_Parser_Term_binderDefault_formatter__3___boxed(lean_object*);
static const lean_closure_object l_Lean_Parser_Term_explicitBinder_formatter___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_mkAntiquot_formatter___boxed, .m_arity = 9, .m_num_fixed = 4, .m_objs = {((lean_object*)&l_Lean_Parser_Term_explicitBinder___closed__0_value),((lean_object*)&l_Lean_Parser_Term_explicitBinder___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Parser_Term_explicitBinder_formatter___closed__0 = (const lean_object*)&l_Lean_Parser_Term_explicitBinder_formatter___closed__0_value;
static const lean_closure_object l_Lean_Parser_Term_explicitBinder_formatter___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_symbol_formatter___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Parser_Term_explicitBinder___closed__3_value)} };
static const lean_object* l_Lean_Parser_Term_explicitBinder_formatter___closed__1 = (const lean_object*)&l_Lean_Parser_Term_explicitBinder_formatter___closed__1_value;
static lean_once_cell_t l_Lean_Parser_Term_explicitBinder_formatter___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Term_explicitBinder_formatter___closed__2;
static lean_once_cell_t l_Lean_Parser_Term_explicitBinder_formatter___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Term_explicitBinder_formatter___closed__3;
static lean_once_cell_t l_Lean_Parser_Term_explicitBinder_formatter___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Term_explicitBinder_formatter___closed__4;
static const lean_closure_object l_Lean_Parser_Term_explicitBinder_formatter___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_symbol_formatter___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Parser_Term_explicitBinder___closed__8_value)} };
static const lean_object* l_Lean_Parser_Term_explicitBinder_formatter___closed__5 = (const lean_object*)&l_Lean_Parser_Term_explicitBinder_formatter___closed__5_value;
LEAN_EXPORT lean_object* l_Lean_Parser_Term_explicitBinder_formatter(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Term_explicitBinder_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Parser_Term_strictImplicitLeftBracket_formatter___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_symbol_formatter___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Parser_Term_implicitBinder___closed__3_value)} };
static const lean_object* l_Lean_Parser_Term_strictImplicitLeftBracket_formatter___closed__0 = (const lean_object*)&l_Lean_Parser_Term_strictImplicitLeftBracket_formatter___closed__0_value;
static const lean_closure_object l_Lean_Parser_Term_strictImplicitLeftBracket_formatter___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Parser_Term_strictImplicitLeftBracket_formatter___closed__0_value),((lean_object*)&l_Lean_Parser_Term_strictImplicitLeftBracket_formatter___closed__0_value)} };
static const lean_object* l_Lean_Parser_Term_strictImplicitLeftBracket_formatter___closed__1 = (const lean_object*)&l_Lean_Parser_Term_strictImplicitLeftBracket_formatter___closed__1_value;
static const lean_closure_object l_Lean_Parser_Term_strictImplicitLeftBracket_formatter___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_group_formatter___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Parser_Term_strictImplicitLeftBracket_formatter___closed__1_value)} };
static const lean_object* l_Lean_Parser_Term_strictImplicitLeftBracket_formatter___closed__2 = (const lean_object*)&l_Lean_Parser_Term_strictImplicitLeftBracket_formatter___closed__2_value;
static const lean_closure_object l_Lean_Parser_Term_strictImplicitLeftBracket_formatter___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_atomic_formatter___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Parser_Term_strictImplicitLeftBracket_formatter___closed__2_value)} };
static const lean_object* l_Lean_Parser_Term_strictImplicitLeftBracket_formatter___closed__3 = (const lean_object*)&l_Lean_Parser_Term_strictImplicitLeftBracket_formatter___closed__3_value;
static const lean_closure_object l_Lean_Parser_Term_strictImplicitLeftBracket_formatter___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_symbol_formatter___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Parser_Term_strictImplicitLeftBracket___closed__5_value)} };
static const lean_object* l_Lean_Parser_Term_strictImplicitLeftBracket_formatter___closed__4 = (const lean_object*)&l_Lean_Parser_Term_strictImplicitLeftBracket_formatter___closed__4_value;
LEAN_EXPORT lean_object* l_Lean_Parser_Term_strictImplicitLeftBracket_formatter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Term_strictImplicitLeftBracket_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Parser_Term_strictImplicitRightBracket_formatter___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_tacticSeqBracketed_formatter___closed__5_value),((lean_object*)&l_Lean_Parser_Tactic_tacticSeqBracketed_formatter___closed__5_value)} };
static const lean_object* l_Lean_Parser_Term_strictImplicitRightBracket_formatter___closed__0 = (const lean_object*)&l_Lean_Parser_Term_strictImplicitRightBracket_formatter___closed__0_value;
static const lean_closure_object l_Lean_Parser_Term_strictImplicitRightBracket_formatter___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_group_formatter___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Parser_Term_strictImplicitRightBracket_formatter___closed__0_value)} };
static const lean_object* l_Lean_Parser_Term_strictImplicitRightBracket_formatter___closed__1 = (const lean_object*)&l_Lean_Parser_Term_strictImplicitRightBracket_formatter___closed__1_value;
static const lean_closure_object l_Lean_Parser_Term_strictImplicitRightBracket_formatter___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_atomic_formatter___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Parser_Term_strictImplicitRightBracket_formatter___closed__1_value)} };
static const lean_object* l_Lean_Parser_Term_strictImplicitRightBracket_formatter___closed__2 = (const lean_object*)&l_Lean_Parser_Term_strictImplicitRightBracket_formatter___closed__2_value;
static const lean_closure_object l_Lean_Parser_Term_strictImplicitRightBracket_formatter___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_symbol_formatter___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Parser_Term_strictImplicitRightBracket___closed__3_value)} };
static const lean_object* l_Lean_Parser_Term_strictImplicitRightBracket_formatter___closed__3 = (const lean_object*)&l_Lean_Parser_Term_strictImplicitRightBracket_formatter___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_Parser_Term_strictImplicitRightBracket_formatter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Term_strictImplicitRightBracket_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Parser_Term_strictImplicitBinder_formatter___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_mkAntiquot_formatter___boxed, .m_arity = 9, .m_num_fixed = 4, .m_objs = {((lean_object*)&l_Lean_Parser_Term_strictImplicitBinder___closed__0_value),((lean_object*)&l_Lean_Parser_Term_strictImplicitBinder___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Parser_Term_strictImplicitBinder_formatter___closed__0 = (const lean_object*)&l_Lean_Parser_Term_strictImplicitBinder_formatter___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Parser_Term_strictImplicitBinder_formatter(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Term_strictImplicitBinder_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Parser_Term_implicitBinder_formatter___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_mkAntiquot_formatter___boxed, .m_arity = 9, .m_num_fixed = 4, .m_objs = {((lean_object*)&l_Lean_Parser_Term_implicitBinder___closed__0_value),((lean_object*)&l_Lean_Parser_Term_implicitBinder___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Parser_Term_implicitBinder_formatter___closed__0 = (const lean_object*)&l_Lean_Parser_Term_implicitBinder_formatter___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Parser_Term_implicitBinder_formatter(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Term_implicitBinder_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Parser_Term_optIdent_formatter___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Parser_Term_syntheticHole_formatter___closed__2_value),((lean_object*)&l_Lean_Parser_Term_binderType_formatter___closed__1_value)} };
static const lean_object* l_Lean_Parser_Term_optIdent_formatter___closed__0 = (const lean_object*)&l_Lean_Parser_Term_optIdent_formatter___closed__0_value;
static const lean_closure_object l_Lean_Parser_Term_optIdent_formatter___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_atomic_formatter___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Parser_Term_optIdent_formatter___closed__0_value)} };
static const lean_object* l_Lean_Parser_Term_optIdent_formatter___closed__1 = (const lean_object*)&l_Lean_Parser_Term_optIdent_formatter___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Parser_Term_optIdent_formatter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Term_optIdent_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Parser_Term_instBinder_formatter___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_mkAntiquot_formatter___boxed, .m_arity = 9, .m_num_fixed = 4, .m_objs = {((lean_object*)&l_Lean_Parser_Term_instBinder___closed__0_value),((lean_object*)&l_Lean_Parser_Term_instBinder___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Parser_Term_instBinder_formatter___closed__0 = (const lean_object*)&l_Lean_Parser_Term_instBinder_formatter___closed__0_value;
static const lean_closure_object l_Lean_Parser_Term_instBinder_formatter___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_symbol_formatter___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Parser_Term_instBinder___closed__3_value)} };
static const lean_object* l_Lean_Parser_Term_instBinder_formatter___closed__1 = (const lean_object*)&l_Lean_Parser_Term_instBinder_formatter___closed__1_value;
static lean_once_cell_t l_Lean_Parser_Term_instBinder_formatter___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Term_instBinder_formatter___closed__2;
static lean_once_cell_t l_Lean_Parser_Term_instBinder_formatter___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Term_instBinder_formatter___closed__3;
static const lean_closure_object l_Lean_Parser_Term_instBinder_formatter___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_symbol_formatter___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Parser_Term_instBinder___closed__7_value)} };
static const lean_object* l_Lean_Parser_Term_instBinder_formatter___closed__4 = (const lean_object*)&l_Lean_Parser_Term_instBinder_formatter___closed__4_value;
static lean_once_cell_t l_Lean_Parser_Term_instBinder_formatter___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Term_instBinder_formatter___closed__5;
static lean_once_cell_t l_Lean_Parser_Term_instBinder_formatter___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Term_instBinder_formatter___closed__6;
static lean_once_cell_t l_Lean_Parser_Term_instBinder_formatter___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Term_instBinder_formatter___closed__7;
static lean_once_cell_t l_Lean_Parser_Term_instBinder_formatter___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Term_instBinder_formatter___closed__8;
LEAN_EXPORT lean_object* l_Lean_Parser_Term_instBinder_formatter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Term_instBinder_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_bracketedBinder___regBuiltin_Lean_Parser_Term_instBinder_formatter__19___closed__0_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_bracketedBinder___regBuiltin_Lean_Parser_Term_instBinder_formatter__19___closed__0_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_bracketedBinder___regBuiltin_Lean_Parser_Term_instBinder_formatter__19___closed__0_value_aux_0),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_bracketedBinder___regBuiltin_Lean_Parser_Term_instBinder_formatter__19___closed__0_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_bracketedBinder___regBuiltin_Lean_Parser_Term_instBinder_formatter__19___closed__0_value_aux_1),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__12_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_bracketedBinder___regBuiltin_Lean_Parser_Term_instBinder_formatter__19___closed__0_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_bracketedBinder___regBuiltin_Lean_Parser_Term_instBinder_formatter__19___closed__0_value_aux_2),((lean_object*)&l_Lean_Parser_Term_instBinder___closed__0_value),LEAN_SCALAR_PTR_LITERAL(198, 219, 89, 171, 221, 95, 22, 227)}};
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_bracketedBinder___regBuiltin_Lean_Parser_Term_instBinder_formatter__19___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_bracketedBinder___regBuiltin_Lean_Parser_Term_instBinder_formatter__19___closed__0_value_aux_3),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeq___regBuiltin_Lean_Parser_Tactic_tacticSeqBracketed_formatter__5___closed__0_value),LEAN_SCALAR_PTR_LITERAL(151, 181, 168, 154, 36, 105, 180, 29)}};
static const lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_bracketedBinder___regBuiltin_Lean_Parser_Term_instBinder_formatter__19___closed__0 = (const lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_bracketedBinder___regBuiltin_Lean_Parser_Term_instBinder_formatter__19___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_bracketedBinder___regBuiltin_Lean_Parser_Term_instBinder_formatter__19();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_bracketedBinder___regBuiltin_Lean_Parser_Term_instBinder_formatter__19___boxed(lean_object*);
static const lean_string_object l_Lean_Parser_Term_bracketedBinder_formatter___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "bracketedBinder"};
static const lean_object* l_Lean_Parser_Term_bracketedBinder_formatter___closed__0 = (const lean_object*)&l_Lean_Parser_Term_bracketedBinder_formatter___closed__0_value;
static const lean_ctor_object l_Lean_Parser_Term_bracketedBinder_formatter___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_Term_bracketedBinder_formatter___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Term_bracketedBinder_formatter___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_Term_bracketedBinder_formatter___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Term_bracketedBinder_formatter___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__12_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Parser_Term_bracketedBinder_formatter___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Term_bracketedBinder_formatter___closed__1_value_aux_2),((lean_object*)&l_Lean_Parser_Term_bracketedBinder_formatter___closed__0_value),LEAN_SCALAR_PTR_LITERAL(46, 236, 200, 246, 105, 131, 38, 240)}};
static const lean_object* l_Lean_Parser_Term_bracketedBinder_formatter___closed__1 = (const lean_object*)&l_Lean_Parser_Term_bracketedBinder_formatter___closed__1_value;
static const lean_closure_object l_Lean_Parser_Term_bracketedBinder_formatter___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_mkAntiquot_formatter___boxed, .m_arity = 9, .m_num_fixed = 4, .m_objs = {((lean_object*)&l_Lean_Parser_Term_bracketedBinder_formatter___closed__0_value),((lean_object*)&l_Lean_Parser_Term_bracketedBinder_formatter___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1))} };
static const lean_object* l_Lean_Parser_Term_bracketedBinder_formatter___closed__2 = (const lean_object*)&l_Lean_Parser_Term_bracketedBinder_formatter___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Parser_Term_bracketedBinder_formatter(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Term_bracketedBinder_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Parser_Term_explicitBinder_parenthesizer___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_mkAntiquot_parenthesizer___boxed, .m_arity = 9, .m_num_fixed = 4, .m_objs = {((lean_object*)&l_Lean_Parser_Term_explicitBinder___closed__0_value),((lean_object*)&l_Lean_Parser_Term_explicitBinder___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Parser_Term_explicitBinder_parenthesizer___closed__0 = (const lean_object*)&l_Lean_Parser_Term_explicitBinder_parenthesizer___closed__0_value;
static const lean_closure_object l_Lean_Parser_Term_explicitBinder_parenthesizer___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_symbol_parenthesizer___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Parser_Term_explicitBinder___closed__3_value)} };
static const lean_object* l_Lean_Parser_Term_explicitBinder_parenthesizer___closed__1 = (const lean_object*)&l_Lean_Parser_Term_explicitBinder_parenthesizer___closed__1_value;
static lean_once_cell_t l_Lean_Parser_Term_explicitBinder_parenthesizer___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Term_explicitBinder_parenthesizer___closed__2;
static lean_once_cell_t l_Lean_Parser_Term_explicitBinder_parenthesizer___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Term_explicitBinder_parenthesizer___closed__3;
static lean_once_cell_t l_Lean_Parser_Term_explicitBinder_parenthesizer___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Term_explicitBinder_parenthesizer___closed__4;
static const lean_closure_object l_Lean_Parser_Term_explicitBinder_parenthesizer___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_symbol_parenthesizer___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Parser_Term_explicitBinder___closed__8_value)} };
static const lean_object* l_Lean_Parser_Term_explicitBinder_parenthesizer___closed__5 = (const lean_object*)&l_Lean_Parser_Term_explicitBinder_parenthesizer___closed__5_value;
LEAN_EXPORT lean_object* l_Lean_Parser_Term_explicitBinder_parenthesizer(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Term_explicitBinder_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Term_strictImplicitLeftBracket_parenthesizer___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Term_strictImplicitLeftBracket_parenthesizer___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Parser_Term_strictImplicitLeftBracket_parenthesizer___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_symbol_parenthesizer___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Parser_Term_implicitBinder___closed__3_value)} };
static const lean_object* l_Lean_Parser_Term_strictImplicitLeftBracket_parenthesizer___closed__0 = (const lean_object*)&l_Lean_Parser_Term_strictImplicitLeftBracket_parenthesizer___closed__0_value;
static const lean_closure_object l_Lean_Parser_Term_strictImplicitLeftBracket_parenthesizer___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Parser_Term_strictImplicitLeftBracket_parenthesizer___closed__0_value),((lean_object*)&l_Lean_Parser_Term_strictImplicitLeftBracket_parenthesizer___closed__0_value)} };
static const lean_object* l_Lean_Parser_Term_strictImplicitLeftBracket_parenthesizer___closed__1 = (const lean_object*)&l_Lean_Parser_Term_strictImplicitLeftBracket_parenthesizer___closed__1_value;
static const lean_closure_object l_Lean_Parser_Term_strictImplicitLeftBracket_parenthesizer___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_Term_strictImplicitLeftBracket_parenthesizer___lam__0___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Parser_Term_strictImplicitLeftBracket_parenthesizer___closed__1_value)} };
static const lean_object* l_Lean_Parser_Term_strictImplicitLeftBracket_parenthesizer___closed__2 = (const lean_object*)&l_Lean_Parser_Term_strictImplicitLeftBracket_parenthesizer___closed__2_value;
static const lean_closure_object l_Lean_Parser_Term_strictImplicitLeftBracket_parenthesizer___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_symbol_parenthesizer___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Parser_Term_strictImplicitLeftBracket___closed__5_value)} };
static const lean_object* l_Lean_Parser_Term_strictImplicitLeftBracket_parenthesizer___closed__3 = (const lean_object*)&l_Lean_Parser_Term_strictImplicitLeftBracket_parenthesizer___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_Parser_Term_strictImplicitLeftBracket_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Term_strictImplicitLeftBracket_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Parser_Term_strictImplicitRightBracket_parenthesizer___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_tacticSeqBracketed_parenthesizer___closed__6_value),((lean_object*)&l_Lean_Parser_Tactic_tacticSeqBracketed_parenthesizer___closed__6_value)} };
static const lean_object* l_Lean_Parser_Term_strictImplicitRightBracket_parenthesizer___closed__0 = (const lean_object*)&l_Lean_Parser_Term_strictImplicitRightBracket_parenthesizer___closed__0_value;
static const lean_closure_object l_Lean_Parser_Term_strictImplicitRightBracket_parenthesizer___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_Term_strictImplicitLeftBracket_parenthesizer___lam__0___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Parser_Term_strictImplicitRightBracket_parenthesizer___closed__0_value)} };
static const lean_object* l_Lean_Parser_Term_strictImplicitRightBracket_parenthesizer___closed__1 = (const lean_object*)&l_Lean_Parser_Term_strictImplicitRightBracket_parenthesizer___closed__1_value;
static const lean_closure_object l_Lean_Parser_Term_strictImplicitRightBracket_parenthesizer___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_symbol_parenthesizer___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Parser_Term_strictImplicitRightBracket___closed__3_value)} };
static const lean_object* l_Lean_Parser_Term_strictImplicitRightBracket_parenthesizer___closed__2 = (const lean_object*)&l_Lean_Parser_Term_strictImplicitRightBracket_parenthesizer___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Parser_Term_strictImplicitRightBracket_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Term_strictImplicitRightBracket_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Parser_Term_strictImplicitBinder_parenthesizer___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_mkAntiquot_parenthesizer___boxed, .m_arity = 9, .m_num_fixed = 4, .m_objs = {((lean_object*)&l_Lean_Parser_Term_strictImplicitBinder___closed__0_value),((lean_object*)&l_Lean_Parser_Term_strictImplicitBinder___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Parser_Term_strictImplicitBinder_parenthesizer___closed__0 = (const lean_object*)&l_Lean_Parser_Term_strictImplicitBinder_parenthesizer___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Parser_Term_strictImplicitBinder_parenthesizer(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Term_strictImplicitBinder_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Parser_Term_implicitBinder_parenthesizer___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_mkAntiquot_parenthesizer___boxed, .m_arity = 9, .m_num_fixed = 4, .m_objs = {((lean_object*)&l_Lean_Parser_Term_implicitBinder___closed__0_value),((lean_object*)&l_Lean_Parser_Term_implicitBinder___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Parser_Term_implicitBinder_parenthesizer___closed__0 = (const lean_object*)&l_Lean_Parser_Term_implicitBinder_parenthesizer___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Parser_Term_implicitBinder_parenthesizer(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Term_implicitBinder_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Parser_Term_optIdent_parenthesizer___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_Term_binderTactic_parenthesizer___lam__0___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Parser_Term_syntheticHole_parenthesizer___closed__2_value),((lean_object*)&l_Lean_Parser_Term_binderType_parenthesizer___closed__0_value)} };
static const lean_object* l_Lean_Parser_Term_optIdent_parenthesizer___closed__0 = (const lean_object*)&l_Lean_Parser_Term_optIdent_parenthesizer___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Parser_Term_optIdent_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Term_optIdent_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Parser_Term_instBinder_parenthesizer___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_mkAntiquot_parenthesizer___boxed, .m_arity = 9, .m_num_fixed = 4, .m_objs = {((lean_object*)&l_Lean_Parser_Term_instBinder___closed__0_value),((lean_object*)&l_Lean_Parser_Term_instBinder___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Parser_Term_instBinder_parenthesizer___closed__0 = (const lean_object*)&l_Lean_Parser_Term_instBinder_parenthesizer___closed__0_value;
static const lean_closure_object l_Lean_Parser_Term_instBinder_parenthesizer___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_symbol_parenthesizer___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Parser_Term_instBinder___closed__3_value)} };
static const lean_object* l_Lean_Parser_Term_instBinder_parenthesizer___closed__1 = (const lean_object*)&l_Lean_Parser_Term_instBinder_parenthesizer___closed__1_value;
static lean_once_cell_t l_Lean_Parser_Term_instBinder_parenthesizer___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Term_instBinder_parenthesizer___closed__2;
static lean_once_cell_t l_Lean_Parser_Term_instBinder_parenthesizer___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Term_instBinder_parenthesizer___closed__3;
static const lean_closure_object l_Lean_Parser_Term_instBinder_parenthesizer___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_symbol_parenthesizer___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Parser_Term_instBinder___closed__7_value)} };
static const lean_object* l_Lean_Parser_Term_instBinder_parenthesizer___closed__4 = (const lean_object*)&l_Lean_Parser_Term_instBinder_parenthesizer___closed__4_value;
static lean_once_cell_t l_Lean_Parser_Term_instBinder_parenthesizer___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Term_instBinder_parenthesizer___closed__5;
static lean_once_cell_t l_Lean_Parser_Term_instBinder_parenthesizer___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Term_instBinder_parenthesizer___closed__6;
static lean_once_cell_t l_Lean_Parser_Term_instBinder_parenthesizer___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Term_instBinder_parenthesizer___closed__7;
static lean_once_cell_t l_Lean_Parser_Term_instBinder_parenthesizer___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Term_instBinder_parenthesizer___closed__8;
LEAN_EXPORT lean_object* l_Lean_Parser_Term_instBinder_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Term_instBinder_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_bracketedBinder___regBuiltin_Lean_Parser_Term_instBinder_parenthesizer__37___closed__0_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_bracketedBinder___regBuiltin_Lean_Parser_Term_instBinder_parenthesizer__37___closed__0_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_bracketedBinder___regBuiltin_Lean_Parser_Term_instBinder_parenthesizer__37___closed__0_value_aux_0),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_bracketedBinder___regBuiltin_Lean_Parser_Term_instBinder_parenthesizer__37___closed__0_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_bracketedBinder___regBuiltin_Lean_Parser_Term_instBinder_parenthesizer__37___closed__0_value_aux_1),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__12_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_bracketedBinder___regBuiltin_Lean_Parser_Term_instBinder_parenthesizer__37___closed__0_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_bracketedBinder___regBuiltin_Lean_Parser_Term_instBinder_parenthesizer__37___closed__0_value_aux_2),((lean_object*)&l_Lean_Parser_Term_instBinder___closed__0_value),LEAN_SCALAR_PTR_LITERAL(198, 219, 89, 171, 221, 95, 22, 227)}};
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_bracketedBinder___regBuiltin_Lean_Parser_Term_instBinder_parenthesizer__37___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_bracketedBinder___regBuiltin_Lean_Parser_Term_instBinder_parenthesizer__37___closed__0_value_aux_3),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeq___regBuiltin_Lean_Parser_Tactic_tacticSeqBracketed_parenthesizer__19___closed__0_value),LEAN_SCALAR_PTR_LITERAL(227, 46, 136, 228, 180, 199, 157, 185)}};
static const lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_bracketedBinder___regBuiltin_Lean_Parser_Term_instBinder_parenthesizer__37___closed__0 = (const lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_bracketedBinder___regBuiltin_Lean_Parser_Term_instBinder_parenthesizer__37___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_bracketedBinder___regBuiltin_Lean_Parser_Term_instBinder_parenthesizer__37();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_bracketedBinder___regBuiltin_Lean_Parser_Term_instBinder_parenthesizer__37___boxed(lean_object*);
static const lean_closure_object l_Lean_Parser_Term_bracketedBinder_parenthesizer___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_mkAntiquot_parenthesizer___boxed, .m_arity = 9, .m_num_fixed = 4, .m_objs = {((lean_object*)&l_Lean_Parser_Term_bracketedBinder_formatter___closed__0_value),((lean_object*)&l_Lean_Parser_Term_bracketedBinder_formatter___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1))} };
static const lean_object* l_Lean_Parser_Term_bracketedBinder_parenthesizer___closed__0 = (const lean_object*)&l_Lean_Parser_Term_bracketedBinder_parenthesizer___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Parser_Term_bracketedBinder_parenthesizer(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Term_bracketedBinder_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Parser_Term_bracketedBinder___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Term_bracketedBinder___closed__0;
LEAN_EXPORT lean_object* l_Lean_Parser_Term_bracketedBinder(uint8_t);
LEAN_EXPORT lean_object* l_Lean_Parser_Term_bracketedBinder___boxed(lean_object*);
static const lean_string_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_bracketedBinder___regBuiltin_Lean_Parser_Term_bracketedBinder_docString__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 328, .m_capacity = 328, .m_length = 323, .m_data = "A `bracketedBinder` matches any kind of binder group that uses some kind of brackets:\n* An explicit binder like `(x y : A)`\n* An implicit binder like `{x y : A}`\n* A strict implicit binder, `⦃y z : A⦄` or its ASCII alternative `{{y z : A}}`\n* An instance binder `[A]` or `[x : A]` (multiple variables are not allowed here)\n"};
static const lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_bracketedBinder___regBuiltin_Lean_Parser_Term_bracketedBinder_docString__1___closed__0 = (const lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_bracketedBinder___regBuiltin_Lean_Parser_Term_bracketedBinder_docString__1___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_bracketedBinder___regBuiltin_Lean_Parser_Term_bracketedBinder_docString__1();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_bracketedBinder___regBuiltin_Lean_Parser_Term_bracketedBinder_docString__1___boxed(lean_object*);
static const lean_string_object l_Lean_Parser_Term_typeSpec_formatter___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "typeSpec"};
static const lean_object* l_Lean_Parser_Term_typeSpec_formatter___closed__0 = (const lean_object*)&l_Lean_Parser_Term_typeSpec_formatter___closed__0_value;
static const lean_ctor_object l_Lean_Parser_Term_typeSpec_formatter___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_Term_typeSpec_formatter___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Term_typeSpec_formatter___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_Term_typeSpec_formatter___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Term_typeSpec_formatter___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__12_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Parser_Term_typeSpec_formatter___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Term_typeSpec_formatter___closed__1_value_aux_2),((lean_object*)&l_Lean_Parser_Term_typeSpec_formatter___closed__0_value),LEAN_SCALAR_PTR_LITERAL(77, 126, 241, 117, 174, 189, 108, 62)}};
static const lean_object* l_Lean_Parser_Term_typeSpec_formatter___closed__1 = (const lean_object*)&l_Lean_Parser_Term_typeSpec_formatter___closed__1_value;
static const lean_closure_object l_Lean_Parser_Term_typeSpec_formatter___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_mkAntiquot_formatter___boxed, .m_arity = 9, .m_num_fixed = 4, .m_objs = {((lean_object*)&l_Lean_Parser_Term_typeSpec_formatter___closed__0_value),((lean_object*)&l_Lean_Parser_Term_typeSpec_formatter___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Parser_Term_typeSpec_formatter___closed__2 = (const lean_object*)&l_Lean_Parser_Term_typeSpec_formatter___closed__2_value;
static const lean_closure_object l_Lean_Parser_Term_typeSpec_formatter___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_leadingNode_formatter___boxed, .m_arity = 8, .m_num_fixed = 3, .m_objs = {((lean_object*)&l_Lean_Parser_Term_typeSpec_formatter___closed__1_value),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)&l_Lean_Parser_Term_binderType_formatter___closed__3_value)} };
static const lean_object* l_Lean_Parser_Term_typeSpec_formatter___closed__3 = (const lean_object*)&l_Lean_Parser_Term_typeSpec_formatter___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_Parser_Term_typeSpec_formatter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Term_typeSpec_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_typeSpec___regBuiltin_Lean_Parser_Term_typeSpec_formatter__3___closed__0_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_typeSpec___regBuiltin_Lean_Parser_Term_typeSpec_formatter__3___closed__0_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_typeSpec___regBuiltin_Lean_Parser_Term_typeSpec_formatter__3___closed__0_value_aux_0),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_typeSpec___regBuiltin_Lean_Parser_Term_typeSpec_formatter__3___closed__0_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_typeSpec___regBuiltin_Lean_Parser_Term_typeSpec_formatter__3___closed__0_value_aux_1),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__12_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_typeSpec___regBuiltin_Lean_Parser_Term_typeSpec_formatter__3___closed__0_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_typeSpec___regBuiltin_Lean_Parser_Term_typeSpec_formatter__3___closed__0_value_aux_2),((lean_object*)&l_Lean_Parser_Term_typeSpec_formatter___closed__0_value),LEAN_SCALAR_PTR_LITERAL(77, 126, 241, 117, 174, 189, 108, 62)}};
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_typeSpec___regBuiltin_Lean_Parser_Term_typeSpec_formatter__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_typeSpec___regBuiltin_Lean_Parser_Term_typeSpec_formatter__3___closed__0_value_aux_3),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeq___regBuiltin_Lean_Parser_Tactic_tacticSeqBracketed_formatter__5___closed__0_value),LEAN_SCALAR_PTR_LITERAL(176, 173, 248, 77, 70, 111, 216, 115)}};
static const lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_typeSpec___regBuiltin_Lean_Parser_Term_typeSpec_formatter__3___closed__0 = (const lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_typeSpec___regBuiltin_Lean_Parser_Term_typeSpec_formatter__3___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_typeSpec___regBuiltin_Lean_Parser_Term_typeSpec_formatter__3();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_typeSpec___regBuiltin_Lean_Parser_Term_typeSpec_formatter__3___boxed(lean_object*);
static const lean_closure_object l_Lean_Parser_Term_typeSpec_parenthesizer___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_mkAntiquot_parenthesizer___boxed, .m_arity = 9, .m_num_fixed = 4, .m_objs = {((lean_object*)&l_Lean_Parser_Term_typeSpec_formatter___closed__0_value),((lean_object*)&l_Lean_Parser_Term_typeSpec_formatter___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Parser_Term_typeSpec_parenthesizer___closed__0 = (const lean_object*)&l_Lean_Parser_Term_typeSpec_parenthesizer___closed__0_value;
static const lean_closure_object l_Lean_Parser_Term_typeSpec_parenthesizer___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Parenthesizer_leadingNode_parenthesizer___boxed, .m_arity = 8, .m_num_fixed = 3, .m_objs = {((lean_object*)&l_Lean_Parser_Term_typeSpec_formatter___closed__1_value),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)&l_Lean_Parser_Term_binderType_parenthesizer___closed__2_value)} };
static const lean_object* l_Lean_Parser_Term_typeSpec_parenthesizer___closed__1 = (const lean_object*)&l_Lean_Parser_Term_typeSpec_parenthesizer___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Parser_Term_typeSpec_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Term_typeSpec_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_typeSpec___regBuiltin_Lean_Parser_Term_typeSpec_parenthesizer__7___closed__0_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_typeSpec___regBuiltin_Lean_Parser_Term_typeSpec_parenthesizer__7___closed__0_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_typeSpec___regBuiltin_Lean_Parser_Term_typeSpec_parenthesizer__7___closed__0_value_aux_0),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_typeSpec___regBuiltin_Lean_Parser_Term_typeSpec_parenthesizer__7___closed__0_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_typeSpec___regBuiltin_Lean_Parser_Term_typeSpec_parenthesizer__7___closed__0_value_aux_1),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__12_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_typeSpec___regBuiltin_Lean_Parser_Term_typeSpec_parenthesizer__7___closed__0_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_typeSpec___regBuiltin_Lean_Parser_Term_typeSpec_parenthesizer__7___closed__0_value_aux_2),((lean_object*)&l_Lean_Parser_Term_typeSpec_formatter___closed__0_value),LEAN_SCALAR_PTR_LITERAL(77, 126, 241, 117, 174, 189, 108, 62)}};
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_typeSpec___regBuiltin_Lean_Parser_Term_typeSpec_parenthesizer__7___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_typeSpec___regBuiltin_Lean_Parser_Term_typeSpec_parenthesizer__7___closed__0_value_aux_3),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeq___regBuiltin_Lean_Parser_Tactic_tacticSeqBracketed_parenthesizer__19___closed__0_value),LEAN_SCALAR_PTR_LITERAL(76, 253, 28, 94, 107, 59, 142, 182)}};
static const lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_typeSpec___regBuiltin_Lean_Parser_Term_typeSpec_parenthesizer__7___closed__0 = (const lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_typeSpec___regBuiltin_Lean_Parser_Term_typeSpec_parenthesizer__7___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_typeSpec___regBuiltin_Lean_Parser_Term_typeSpec_parenthesizer__7();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_typeSpec___regBuiltin_Lean_Parser_Term_typeSpec_parenthesizer__7___boxed(lean_object*);
static lean_once_cell_t l_Lean_Parser_Term_typeSpec___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Term_typeSpec___closed__0;
static lean_once_cell_t l_Lean_Parser_Term_typeSpec___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Term_typeSpec___closed__1;
static lean_once_cell_t l_Lean_Parser_Term_typeSpec___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Term_typeSpec___closed__2;
static lean_once_cell_t l_Lean_Parser_Term_typeSpec___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Term_typeSpec___closed__3;
LEAN_EXPORT lean_object* l_Lean_Parser_Term_typeSpec;
LEAN_EXPORT lean_object* l_Lean_Parser_Term_optType_formatter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Term_optType_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Term_optType_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Term_optType_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Parser_Term_optType___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Term_optType___closed__0;
LEAN_EXPORT lean_object* l_Lean_Parser_Term_optType;
static const lean_string_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_initFn___closed__0_00___x40_Lean_Parser_Term_Basic_2382944618____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "builtin_structInstFieldDecl_parser"};
static const lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_initFn___closed__0_00___x40_Lean_Parser_Term_Basic_2382944618____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_initFn___closed__0_00___x40_Lean_Parser_Term_Basic_2382944618____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_initFn___closed__1_00___x40_Lean_Parser_Term_Basic_2382944618____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_initFn___closed__0_00___x40_Lean_Parser_Term_Basic_2382944618____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(246, 241, 24, 32, 102, 74, 183, 216)}};
static const lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_initFn___closed__1_00___x40_Lean_Parser_Term_Basic_2382944618____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_initFn___closed__1_00___x40_Lean_Parser_Term_Basic_2382944618____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_initFn___closed__2_00___x40_Lean_Parser_Term_Basic_2382944618____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "structInstFieldDecl"};
static const lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_initFn___closed__2_00___x40_Lean_Parser_Term_Basic_2382944618____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_initFn___closed__2_00___x40_Lean_Parser_Term_Basic_2382944618____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_initFn___closed__3_00___x40_Lean_Parser_Term_Basic_2382944618____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_initFn___closed__3_00___x40_Lean_Parser_Term_Basic_2382944618____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_initFn___closed__3_00___x40_Lean_Parser_Term_Basic_2382944618____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_initFn___closed__3_00___x40_Lean_Parser_Term_Basic_2382944618____hygCtx___hyg_2__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_initFn___closed__3_00___x40_Lean_Parser_Term_Basic_2382944618____hygCtx___hyg_2__value_aux_1),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__4_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(36, 45, 52, 71, 90, 26, 52, 161)}};
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_initFn___closed__3_00___x40_Lean_Parser_Term_Basic_2382944618____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_initFn___closed__3_00___x40_Lean_Parser_Term_Basic_2382944618____hygCtx___hyg_2__value_aux_2),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_initFn___closed__2_00___x40_Lean_Parser_Term_Basic_2382944618____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(117, 206, 83, 2, 15, 157, 185, 163)}};
static const lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_initFn___closed__3_00___x40_Lean_Parser_Term_Basic_2382944618____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_initFn___closed__3_00___x40_Lean_Parser_Term_Basic_2382944618____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_initFn___closed__4_00___x40_Lean_Parser_Term_Basic_2382944618____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_initFn___closed__4_00___x40_Lean_Parser_Term_Basic_2382944618____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_initFn___closed__5_00___x40_Lean_Parser_Term_Basic_2382944618____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_initFn___closed__5_00___x40_Lean_Parser_Term_Basic_2382944618____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_initFn___closed__6_00___x40_Lean_Parser_Term_Basic_2382944618____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_initFn___closed__6_00___x40_Lean_Parser_Term_Basic_2382944618____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_initFn___closed__7_00___x40_Lean_Parser_Term_Basic_2382944618____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_initFn___closed__7_00___x40_Lean_Parser_Term_Basic_2382944618____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_initFn___closed__8_00___x40_Lean_Parser_Term_Basic_2382944618____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_initFn___closed__8_00___x40_Lean_Parser_Term_Basic_2382944618____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_initFn___closed__9_00___x40_Lean_Parser_Term_Basic_2382944618____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_initFn___closed__9_00___x40_Lean_Parser_Term_Basic_2382944618____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_initFn___closed__10_00___x40_Lean_Parser_Term_Basic_2382944618____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_initFn___closed__10_00___x40_Lean_Parser_Term_Basic_2382944618____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_initFn___closed__11_00___x40_Lean_Parser_Term_Basic_2382944618____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_initFn___closed__11_00___x40_Lean_Parser_Term_Basic_2382944618____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_initFn___closed__12_00___x40_Lean_Parser_Term_Basic_2382944618____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_initFn___closed__12_00___x40_Lean_Parser_Term_Basic_2382944618____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_initFn___closed__13_00___x40_Lean_Parser_Term_Basic_2382944618____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_initFn___closed__13_00___x40_Lean_Parser_Term_Basic_2382944618____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_initFn___closed__14_00___x40_Lean_Parser_Term_Basic_2382944618____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_initFn___closed__14_00___x40_Lean_Parser_Term_Basic_2382944618____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_initFn_00___x40_Lean_Parser_Term_Basic_2382944618____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_initFn_00___x40_Lean_Parser_Term_Basic_2382944618____hygCtx___hyg_2____boxed(lean_object*);
static const lean_ctor_object l_Lean_Parser_Term_structInstFieldDeclParser___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_initFn___closed__2_00___x40_Lean_Parser_Term_Basic_2382944618____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(214, 155, 219, 23, 195, 76, 212, 152)}};
static const lean_object* l_Lean_Parser_Term_structInstFieldDeclParser___closed__0 = (const lean_object*)&l_Lean_Parser_Term_structInstFieldDeclParser___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Parser_Term_structInstFieldDeclParser(lean_object*);
static const lean_string_object l_Lean_Parser_Term_optEllipsis_formatter___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "optEllipsis"};
static const lean_object* l_Lean_Parser_Term_optEllipsis_formatter___closed__0 = (const lean_object*)&l_Lean_Parser_Term_optEllipsis_formatter___closed__0_value;
static const lean_ctor_object l_Lean_Parser_Term_optEllipsis_formatter___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_Term_optEllipsis_formatter___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Term_optEllipsis_formatter___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_Term_optEllipsis_formatter___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Term_optEllipsis_formatter___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__12_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Parser_Term_optEllipsis_formatter___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Term_optEllipsis_formatter___closed__1_value_aux_2),((lean_object*)&l_Lean_Parser_Term_optEllipsis_formatter___closed__0_value),LEAN_SCALAR_PTR_LITERAL(13, 1, 242, 203, 207, 188, 181, 160)}};
static const lean_object* l_Lean_Parser_Term_optEllipsis_formatter___closed__1 = (const lean_object*)&l_Lean_Parser_Term_optEllipsis_formatter___closed__1_value;
static const lean_closure_object l_Lean_Parser_Term_optEllipsis_formatter___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_mkAntiquot_formatter___boxed, .m_arity = 9, .m_num_fixed = 4, .m_objs = {((lean_object*)&l_Lean_Parser_Term_optEllipsis_formatter___closed__0_value),((lean_object*)&l_Lean_Parser_Term_optEllipsis_formatter___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Parser_Term_optEllipsis_formatter___closed__2 = (const lean_object*)&l_Lean_Parser_Term_optEllipsis_formatter___closed__2_value;
static const lean_string_object l_Lean_Parser_Term_optEllipsis_formatter___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = " .."};
static const lean_object* l_Lean_Parser_Term_optEllipsis_formatter___closed__3 = (const lean_object*)&l_Lean_Parser_Term_optEllipsis_formatter___closed__3_value;
static const lean_closure_object l_Lean_Parser_Term_optEllipsis_formatter___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_symbol_formatter___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Parser_Term_optEllipsis_formatter___closed__3_value)} };
static const lean_object* l_Lean_Parser_Term_optEllipsis_formatter___closed__4 = (const lean_object*)&l_Lean_Parser_Term_optEllipsis_formatter___closed__4_value;
static const lean_closure_object l_Lean_Parser_Term_optEllipsis_formatter___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_optional_formatter___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Parser_Term_optEllipsis_formatter___closed__4_value)} };
static const lean_object* l_Lean_Parser_Term_optEllipsis_formatter___closed__5 = (const lean_object*)&l_Lean_Parser_Term_optEllipsis_formatter___closed__5_value;
static const lean_closure_object l_Lean_Parser_Term_optEllipsis_formatter___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_leadingNode_formatter___boxed, .m_arity = 8, .m_num_fixed = 3, .m_objs = {((lean_object*)&l_Lean_Parser_Term_optEllipsis_formatter___closed__1_value),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)&l_Lean_Parser_Term_optEllipsis_formatter___closed__5_value)} };
static const lean_object* l_Lean_Parser_Term_optEllipsis_formatter___closed__6 = (const lean_object*)&l_Lean_Parser_Term_optEllipsis_formatter___closed__6_value;
LEAN_EXPORT lean_object* l_Lean_Parser_Term_optEllipsis_formatter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Term_optEllipsis_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_optEllipsis___regBuiltin_Lean_Parser_Term_optEllipsis_formatter__3___closed__0_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_optEllipsis___regBuiltin_Lean_Parser_Term_optEllipsis_formatter__3___closed__0_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_optEllipsis___regBuiltin_Lean_Parser_Term_optEllipsis_formatter__3___closed__0_value_aux_0),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_optEllipsis___regBuiltin_Lean_Parser_Term_optEllipsis_formatter__3___closed__0_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_optEllipsis___regBuiltin_Lean_Parser_Term_optEllipsis_formatter__3___closed__0_value_aux_1),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__12_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_optEllipsis___regBuiltin_Lean_Parser_Term_optEllipsis_formatter__3___closed__0_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_optEllipsis___regBuiltin_Lean_Parser_Term_optEllipsis_formatter__3___closed__0_value_aux_2),((lean_object*)&l_Lean_Parser_Term_optEllipsis_formatter___closed__0_value),LEAN_SCALAR_PTR_LITERAL(13, 1, 242, 203, 207, 188, 181, 160)}};
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_optEllipsis___regBuiltin_Lean_Parser_Term_optEllipsis_formatter__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_optEllipsis___regBuiltin_Lean_Parser_Term_optEllipsis_formatter__3___closed__0_value_aux_3),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeq___regBuiltin_Lean_Parser_Tactic_tacticSeqBracketed_formatter__5___closed__0_value),LEAN_SCALAR_PTR_LITERAL(112, 207, 90, 31, 52, 47, 237, 191)}};
static const lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_optEllipsis___regBuiltin_Lean_Parser_Term_optEllipsis_formatter__3___closed__0 = (const lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_optEllipsis___regBuiltin_Lean_Parser_Term_optEllipsis_formatter__3___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_optEllipsis___regBuiltin_Lean_Parser_Term_optEllipsis_formatter__3();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_optEllipsis___regBuiltin_Lean_Parser_Term_optEllipsis_formatter__3___boxed(lean_object*);
static const lean_closure_object l_Lean_Parser_Term_optEllipsis_parenthesizer___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_mkAntiquot_parenthesizer___boxed, .m_arity = 9, .m_num_fixed = 4, .m_objs = {((lean_object*)&l_Lean_Parser_Term_optEllipsis_formatter___closed__0_value),((lean_object*)&l_Lean_Parser_Term_optEllipsis_formatter___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Parser_Term_optEllipsis_parenthesizer___closed__0 = (const lean_object*)&l_Lean_Parser_Term_optEllipsis_parenthesizer___closed__0_value;
static const lean_closure_object l_Lean_Parser_Term_optEllipsis_parenthesizer___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_symbol_parenthesizer___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Parser_Term_optEllipsis_formatter___closed__3_value)} };
static const lean_object* l_Lean_Parser_Term_optEllipsis_parenthesizer___closed__1 = (const lean_object*)&l_Lean_Parser_Term_optEllipsis_parenthesizer___closed__1_value;
static const lean_closure_object l_Lean_Parser_Term_optEllipsis_parenthesizer___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_optional_parenthesizer___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Parser_Term_optEllipsis_parenthesizer___closed__1_value)} };
static const lean_object* l_Lean_Parser_Term_optEllipsis_parenthesizer___closed__2 = (const lean_object*)&l_Lean_Parser_Term_optEllipsis_parenthesizer___closed__2_value;
static const lean_closure_object l_Lean_Parser_Term_optEllipsis_parenthesizer___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Parenthesizer_leadingNode_parenthesizer___boxed, .m_arity = 8, .m_num_fixed = 3, .m_objs = {((lean_object*)&l_Lean_Parser_Term_optEllipsis_formatter___closed__1_value),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)&l_Lean_Parser_Term_optEllipsis_parenthesizer___closed__2_value)} };
static const lean_object* l_Lean_Parser_Term_optEllipsis_parenthesizer___closed__3 = (const lean_object*)&l_Lean_Parser_Term_optEllipsis_parenthesizer___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_Parser_Term_optEllipsis_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Term_optEllipsis_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_optEllipsis___regBuiltin_Lean_Parser_Term_optEllipsis_parenthesizer__7___closed__0_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_optEllipsis___regBuiltin_Lean_Parser_Term_optEllipsis_parenthesizer__7___closed__0_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_optEllipsis___regBuiltin_Lean_Parser_Term_optEllipsis_parenthesizer__7___closed__0_value_aux_0),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_optEllipsis___regBuiltin_Lean_Parser_Term_optEllipsis_parenthesizer__7___closed__0_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_optEllipsis___regBuiltin_Lean_Parser_Term_optEllipsis_parenthesizer__7___closed__0_value_aux_1),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__12_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_optEllipsis___regBuiltin_Lean_Parser_Term_optEllipsis_parenthesizer__7___closed__0_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_optEllipsis___regBuiltin_Lean_Parser_Term_optEllipsis_parenthesizer__7___closed__0_value_aux_2),((lean_object*)&l_Lean_Parser_Term_optEllipsis_formatter___closed__0_value),LEAN_SCALAR_PTR_LITERAL(13, 1, 242, 203, 207, 188, 181, 160)}};
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_optEllipsis___regBuiltin_Lean_Parser_Term_optEllipsis_parenthesizer__7___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_optEllipsis___regBuiltin_Lean_Parser_Term_optEllipsis_parenthesizer__7___closed__0_value_aux_3),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeq___regBuiltin_Lean_Parser_Tactic_tacticSeqBracketed_parenthesizer__19___closed__0_value),LEAN_SCALAR_PTR_LITERAL(140, 107, 208, 253, 252, 167, 109, 165)}};
static const lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_optEllipsis___regBuiltin_Lean_Parser_Term_optEllipsis_parenthesizer__7___closed__0 = (const lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_optEllipsis___regBuiltin_Lean_Parser_Term_optEllipsis_parenthesizer__7___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_optEllipsis___regBuiltin_Lean_Parser_Term_optEllipsis_parenthesizer__7();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_optEllipsis___regBuiltin_Lean_Parser_Term_optEllipsis_parenthesizer__7___boxed(lean_object*);
static lean_once_cell_t l_Lean_Parser_Term_optEllipsis___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Term_optEllipsis___closed__0;
static lean_once_cell_t l_Lean_Parser_Term_optEllipsis___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Term_optEllipsis___closed__1;
static lean_once_cell_t l_Lean_Parser_Term_optEllipsis___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Term_optEllipsis___closed__2;
static lean_once_cell_t l_Lean_Parser_Term_optEllipsis___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Term_optEllipsis___closed__3;
static lean_once_cell_t l_Lean_Parser_Term_optEllipsis___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Term_optEllipsis___closed__4;
static lean_once_cell_t l_Lean_Parser_Term_optEllipsis___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Term_optEllipsis___closed__5;
LEAN_EXPORT lean_object* l_Lean_Parser_Term_optEllipsis;
static const lean_string_object l_Lean_Parser_Term_structInstArrayRef_formatter___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "structInstArrayRef"};
static const lean_object* l_Lean_Parser_Term_structInstArrayRef_formatter___closed__0 = (const lean_object*)&l_Lean_Parser_Term_structInstArrayRef_formatter___closed__0_value;
static const lean_ctor_object l_Lean_Parser_Term_structInstArrayRef_formatter___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_Term_structInstArrayRef_formatter___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Term_structInstArrayRef_formatter___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_Term_structInstArrayRef_formatter___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Term_structInstArrayRef_formatter___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__12_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Parser_Term_structInstArrayRef_formatter___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Term_structInstArrayRef_formatter___closed__1_value_aux_2),((lean_object*)&l_Lean_Parser_Term_structInstArrayRef_formatter___closed__0_value),LEAN_SCALAR_PTR_LITERAL(74, 97, 16, 232, 167, 67, 90, 227)}};
static const lean_object* l_Lean_Parser_Term_structInstArrayRef_formatter___closed__1 = (const lean_object*)&l_Lean_Parser_Term_structInstArrayRef_formatter___closed__1_value;
static const lean_closure_object l_Lean_Parser_Term_structInstArrayRef_formatter___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_mkAntiquot_formatter___boxed, .m_arity = 9, .m_num_fixed = 4, .m_objs = {((lean_object*)&l_Lean_Parser_Term_structInstArrayRef_formatter___closed__0_value),((lean_object*)&l_Lean_Parser_Term_structInstArrayRef_formatter___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Parser_Term_structInstArrayRef_formatter___closed__2 = (const lean_object*)&l_Lean_Parser_Term_structInstArrayRef_formatter___closed__2_value;
static const lean_closure_object l_Lean_Parser_Term_structInstArrayRef_formatter___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_withoutPosition_formatter___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Parser_Term_binderType_formatter___closed__2_value)} };
static const lean_object* l_Lean_Parser_Term_structInstArrayRef_formatter___closed__3 = (const lean_object*)&l_Lean_Parser_Term_structInstArrayRef_formatter___closed__3_value;
static const lean_closure_object l_Lean_Parser_Term_structInstArrayRef_formatter___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Parser_Term_structInstArrayRef_formatter___closed__3_value),((lean_object*)&l_Lean_Parser_Term_instBinder_formatter___closed__4_value)} };
static const lean_object* l_Lean_Parser_Term_structInstArrayRef_formatter___closed__4 = (const lean_object*)&l_Lean_Parser_Term_structInstArrayRef_formatter___closed__4_value;
static const lean_closure_object l_Lean_Parser_Term_structInstArrayRef_formatter___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Parser_Term_instBinder_formatter___closed__1_value),((lean_object*)&l_Lean_Parser_Term_structInstArrayRef_formatter___closed__4_value)} };
static const lean_object* l_Lean_Parser_Term_structInstArrayRef_formatter___closed__5 = (const lean_object*)&l_Lean_Parser_Term_structInstArrayRef_formatter___closed__5_value;
static const lean_closure_object l_Lean_Parser_Term_structInstArrayRef_formatter___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_leadingNode_formatter___boxed, .m_arity = 8, .m_num_fixed = 3, .m_objs = {((lean_object*)&l_Lean_Parser_Term_structInstArrayRef_formatter___closed__1_value),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)&l_Lean_Parser_Term_structInstArrayRef_formatter___closed__5_value)} };
static const lean_object* l_Lean_Parser_Term_structInstArrayRef_formatter___closed__6 = (const lean_object*)&l_Lean_Parser_Term_structInstArrayRef_formatter___closed__6_value;
LEAN_EXPORT lean_object* l_Lean_Parser_Term_structInstArrayRef_formatter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Term_structInstArrayRef_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_structInstArrayRef___regBuiltin_Lean_Parser_Term_structInstArrayRef_formatter__3___closed__0_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_structInstArrayRef___regBuiltin_Lean_Parser_Term_structInstArrayRef_formatter__3___closed__0_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_structInstArrayRef___regBuiltin_Lean_Parser_Term_structInstArrayRef_formatter__3___closed__0_value_aux_0),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_structInstArrayRef___regBuiltin_Lean_Parser_Term_structInstArrayRef_formatter__3___closed__0_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_structInstArrayRef___regBuiltin_Lean_Parser_Term_structInstArrayRef_formatter__3___closed__0_value_aux_1),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__12_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_structInstArrayRef___regBuiltin_Lean_Parser_Term_structInstArrayRef_formatter__3___closed__0_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_structInstArrayRef___regBuiltin_Lean_Parser_Term_structInstArrayRef_formatter__3___closed__0_value_aux_2),((lean_object*)&l_Lean_Parser_Term_structInstArrayRef_formatter___closed__0_value),LEAN_SCALAR_PTR_LITERAL(74, 97, 16, 232, 167, 67, 90, 227)}};
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_structInstArrayRef___regBuiltin_Lean_Parser_Term_structInstArrayRef_formatter__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_structInstArrayRef___regBuiltin_Lean_Parser_Term_structInstArrayRef_formatter__3___closed__0_value_aux_3),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeq___regBuiltin_Lean_Parser_Tactic_tacticSeqBracketed_formatter__5___closed__0_value),LEAN_SCALAR_PTR_LITERAL(195, 119, 180, 184, 53, 176, 23, 24)}};
static const lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_structInstArrayRef___regBuiltin_Lean_Parser_Term_structInstArrayRef_formatter__3___closed__0 = (const lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_structInstArrayRef___regBuiltin_Lean_Parser_Term_structInstArrayRef_formatter__3___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_structInstArrayRef___regBuiltin_Lean_Parser_Term_structInstArrayRef_formatter__3();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_structInstArrayRef___regBuiltin_Lean_Parser_Term_structInstArrayRef_formatter__3___boxed(lean_object*);
static const lean_closure_object l_Lean_Parser_Term_structInstArrayRef_parenthesizer___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_mkAntiquot_parenthesizer___boxed, .m_arity = 9, .m_num_fixed = 4, .m_objs = {((lean_object*)&l_Lean_Parser_Term_structInstArrayRef_formatter___closed__0_value),((lean_object*)&l_Lean_Parser_Term_structInstArrayRef_formatter___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Parser_Term_structInstArrayRef_parenthesizer___closed__0 = (const lean_object*)&l_Lean_Parser_Term_structInstArrayRef_parenthesizer___closed__0_value;
static const lean_closure_object l_Lean_Parser_Term_structInstArrayRef_parenthesizer___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_withoutPosition_parenthesizer___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Parser_Term_binderType_parenthesizer___closed__1_value)} };
static const lean_object* l_Lean_Parser_Term_structInstArrayRef_parenthesizer___closed__1 = (const lean_object*)&l_Lean_Parser_Term_structInstArrayRef_parenthesizer___closed__1_value;
static const lean_closure_object l_Lean_Parser_Term_structInstArrayRef_parenthesizer___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Parser_Term_structInstArrayRef_parenthesizer___closed__1_value),((lean_object*)&l_Lean_Parser_Term_instBinder_parenthesizer___closed__4_value)} };
static const lean_object* l_Lean_Parser_Term_structInstArrayRef_parenthesizer___closed__2 = (const lean_object*)&l_Lean_Parser_Term_structInstArrayRef_parenthesizer___closed__2_value;
static const lean_closure_object l_Lean_Parser_Term_structInstArrayRef_parenthesizer___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Parser_Term_instBinder_parenthesizer___closed__1_value),((lean_object*)&l_Lean_Parser_Term_structInstArrayRef_parenthesizer___closed__2_value)} };
static const lean_object* l_Lean_Parser_Term_structInstArrayRef_parenthesizer___closed__3 = (const lean_object*)&l_Lean_Parser_Term_structInstArrayRef_parenthesizer___closed__3_value;
static const lean_closure_object l_Lean_Parser_Term_structInstArrayRef_parenthesizer___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Parenthesizer_leadingNode_parenthesizer___boxed, .m_arity = 8, .m_num_fixed = 3, .m_objs = {((lean_object*)&l_Lean_Parser_Term_structInstArrayRef_formatter___closed__1_value),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)&l_Lean_Parser_Term_structInstArrayRef_parenthesizer___closed__3_value)} };
static const lean_object* l_Lean_Parser_Term_structInstArrayRef_parenthesizer___closed__4 = (const lean_object*)&l_Lean_Parser_Term_structInstArrayRef_parenthesizer___closed__4_value;
LEAN_EXPORT lean_object* l_Lean_Parser_Term_structInstArrayRef_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Term_structInstArrayRef_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_structInstArrayRef___regBuiltin_Lean_Parser_Term_structInstArrayRef_parenthesizer__7___closed__0_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_structInstArrayRef___regBuiltin_Lean_Parser_Term_structInstArrayRef_parenthesizer__7___closed__0_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_structInstArrayRef___regBuiltin_Lean_Parser_Term_structInstArrayRef_parenthesizer__7___closed__0_value_aux_0),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_structInstArrayRef___regBuiltin_Lean_Parser_Term_structInstArrayRef_parenthesizer__7___closed__0_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_structInstArrayRef___regBuiltin_Lean_Parser_Term_structInstArrayRef_parenthesizer__7___closed__0_value_aux_1),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__12_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_structInstArrayRef___regBuiltin_Lean_Parser_Term_structInstArrayRef_parenthesizer__7___closed__0_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_structInstArrayRef___regBuiltin_Lean_Parser_Term_structInstArrayRef_parenthesizer__7___closed__0_value_aux_2),((lean_object*)&l_Lean_Parser_Term_structInstArrayRef_formatter___closed__0_value),LEAN_SCALAR_PTR_LITERAL(74, 97, 16, 232, 167, 67, 90, 227)}};
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_structInstArrayRef___regBuiltin_Lean_Parser_Term_structInstArrayRef_parenthesizer__7___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_structInstArrayRef___regBuiltin_Lean_Parser_Term_structInstArrayRef_parenthesizer__7___closed__0_value_aux_3),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeq___regBuiltin_Lean_Parser_Tactic_tacticSeqBracketed_parenthesizer__19___closed__0_value),LEAN_SCALAR_PTR_LITERAL(183, 252, 101, 22, 5, 156, 113, 37)}};
static const lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_structInstArrayRef___regBuiltin_Lean_Parser_Term_structInstArrayRef_parenthesizer__7___closed__0 = (const lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_structInstArrayRef___regBuiltin_Lean_Parser_Term_structInstArrayRef_parenthesizer__7___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_structInstArrayRef___regBuiltin_Lean_Parser_Term_structInstArrayRef_parenthesizer__7();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_structInstArrayRef___regBuiltin_Lean_Parser_Term_structInstArrayRef_parenthesizer__7___boxed(lean_object*);
static lean_once_cell_t l_Lean_Parser_Term_structInstArrayRef___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Term_structInstArrayRef___closed__0;
static lean_once_cell_t l_Lean_Parser_Term_structInstArrayRef___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Term_structInstArrayRef___closed__1;
static lean_once_cell_t l_Lean_Parser_Term_structInstArrayRef___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Term_structInstArrayRef___closed__2;
static lean_once_cell_t l_Lean_Parser_Term_structInstArrayRef___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Term_structInstArrayRef___closed__3;
static lean_once_cell_t l_Lean_Parser_Term_structInstArrayRef___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Term_structInstArrayRef___closed__4;
static lean_once_cell_t l_Lean_Parser_Term_structInstArrayRef___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Term_structInstArrayRef___closed__5;
static lean_once_cell_t l_Lean_Parser_Term_structInstArrayRef___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Term_structInstArrayRef___closed__6;
LEAN_EXPORT lean_object* l_Lean_Parser_Term_structInstArrayRef;
static const lean_string_object l_Lean_Parser_Term_structInstLVal_formatter___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "structInstLVal"};
static const lean_object* l_Lean_Parser_Term_structInstLVal_formatter___closed__0 = (const lean_object*)&l_Lean_Parser_Term_structInstLVal_formatter___closed__0_value;
static const lean_ctor_object l_Lean_Parser_Term_structInstLVal_formatter___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_Term_structInstLVal_formatter___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Term_structInstLVal_formatter___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_Term_structInstLVal_formatter___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Term_structInstLVal_formatter___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__12_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Parser_Term_structInstLVal_formatter___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Term_structInstLVal_formatter___closed__1_value_aux_2),((lean_object*)&l_Lean_Parser_Term_structInstLVal_formatter___closed__0_value),LEAN_SCALAR_PTR_LITERAL(185, 133, 6, 147, 6, 183, 100, 198)}};
static const lean_object* l_Lean_Parser_Term_structInstLVal_formatter___closed__1 = (const lean_object*)&l_Lean_Parser_Term_structInstLVal_formatter___closed__1_value;
static const lean_closure_object l_Lean_Parser_Term_structInstLVal_formatter___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_mkAntiquot_formatter___boxed, .m_arity = 9, .m_num_fixed = 4, .m_objs = {((lean_object*)&l_Lean_Parser_Term_structInstLVal_formatter___closed__0_value),((lean_object*)&l_Lean_Parser_Term_structInstLVal_formatter___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Parser_Term_structInstLVal_formatter___closed__2 = (const lean_object*)&l_Lean_Parser_Term_structInstLVal_formatter___closed__2_value;
static lean_once_cell_t l_Lean_Parser_Term_structInstLVal_formatter___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Term_structInstLVal_formatter___closed__3;
static lean_once_cell_t l_Lean_Parser_Term_structInstLVal_formatter___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Term_structInstLVal_formatter___closed__4;
static const lean_string_object l_Lean_Parser_Term_structInstLVal_formatter___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "."};
static const lean_object* l_Lean_Parser_Term_structInstLVal_formatter___closed__5 = (const lean_object*)&l_Lean_Parser_Term_structInstLVal_formatter___closed__5_value;
static const lean_closure_object l_Lean_Parser_Term_structInstLVal_formatter___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_symbol_formatter___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Parser_Term_structInstLVal_formatter___closed__5_value)} };
static const lean_object* l_Lean_Parser_Term_structInstLVal_formatter___closed__6 = (const lean_object*)&l_Lean_Parser_Term_structInstLVal_formatter___closed__6_value;
static lean_once_cell_t l_Lean_Parser_Term_structInstLVal_formatter___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Term_structInstLVal_formatter___closed__7;
static lean_once_cell_t l_Lean_Parser_Term_structInstLVal_formatter___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Term_structInstLVal_formatter___closed__8;
static lean_once_cell_t l_Lean_Parser_Term_structInstLVal_formatter___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Term_structInstLVal_formatter___closed__9;
static lean_once_cell_t l_Lean_Parser_Term_structInstLVal_formatter___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Term_structInstLVal_formatter___closed__10;
static lean_once_cell_t l_Lean_Parser_Term_structInstLVal_formatter___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Term_structInstLVal_formatter___closed__11;
static lean_once_cell_t l_Lean_Parser_Term_structInstLVal_formatter___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Term_structInstLVal_formatter___closed__12;
static lean_once_cell_t l_Lean_Parser_Term_structInstLVal_formatter___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Term_structInstLVal_formatter___closed__13;
LEAN_EXPORT lean_object* l_Lean_Parser_Term_structInstLVal_formatter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Term_structInstLVal_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_structInstLVal___regBuiltin_Lean_Parser_Term_structInstLVal_formatter__3___closed__0_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_structInstLVal___regBuiltin_Lean_Parser_Term_structInstLVal_formatter__3___closed__0_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_structInstLVal___regBuiltin_Lean_Parser_Term_structInstLVal_formatter__3___closed__0_value_aux_0),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_structInstLVal___regBuiltin_Lean_Parser_Term_structInstLVal_formatter__3___closed__0_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_structInstLVal___regBuiltin_Lean_Parser_Term_structInstLVal_formatter__3___closed__0_value_aux_1),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__12_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_structInstLVal___regBuiltin_Lean_Parser_Term_structInstLVal_formatter__3___closed__0_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_structInstLVal___regBuiltin_Lean_Parser_Term_structInstLVal_formatter__3___closed__0_value_aux_2),((lean_object*)&l_Lean_Parser_Term_structInstLVal_formatter___closed__0_value),LEAN_SCALAR_PTR_LITERAL(185, 133, 6, 147, 6, 183, 100, 198)}};
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_structInstLVal___regBuiltin_Lean_Parser_Term_structInstLVal_formatter__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_structInstLVal___regBuiltin_Lean_Parser_Term_structInstLVal_formatter__3___closed__0_value_aux_3),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeq___regBuiltin_Lean_Parser_Tactic_tacticSeqBracketed_formatter__5___closed__0_value),LEAN_SCALAR_PTR_LITERAL(84, 11, 50, 166, 172, 142, 234, 224)}};
static const lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_structInstLVal___regBuiltin_Lean_Parser_Term_structInstLVal_formatter__3___closed__0 = (const lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_structInstLVal___regBuiltin_Lean_Parser_Term_structInstLVal_formatter__3___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_structInstLVal___regBuiltin_Lean_Parser_Term_structInstLVal_formatter__3();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_structInstLVal___regBuiltin_Lean_Parser_Term_structInstLVal_formatter__3___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Term_structInstLVal_parenthesizer___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Term_structInstLVal_parenthesizer___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Parser_Term_structInstLVal_parenthesizer___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_Term_structInstLVal_parenthesizer___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Parser_Term_structInstLVal_parenthesizer___closed__0 = (const lean_object*)&l_Lean_Parser_Term_structInstLVal_parenthesizer___closed__0_value;
static const lean_closure_object l_Lean_Parser_Term_structInstLVal_parenthesizer___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_mkAntiquot_parenthesizer___boxed, .m_arity = 9, .m_num_fixed = 4, .m_objs = {((lean_object*)&l_Lean_Parser_Term_structInstLVal_formatter___closed__0_value),((lean_object*)&l_Lean_Parser_Term_structInstLVal_formatter___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Parser_Term_structInstLVal_parenthesizer___closed__1 = (const lean_object*)&l_Lean_Parser_Term_structInstLVal_parenthesizer___closed__1_value;
static lean_once_cell_t l_Lean_Parser_Term_structInstLVal_parenthesizer___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Term_structInstLVal_parenthesizer___closed__2;
static lean_once_cell_t l_Lean_Parser_Term_structInstLVal_parenthesizer___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Term_structInstLVal_parenthesizer___closed__3;
static const lean_closure_object l_Lean_Parser_Term_structInstLVal_parenthesizer___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_symbol_parenthesizer___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Parser_Term_structInstLVal_formatter___closed__5_value)} };
static const lean_object* l_Lean_Parser_Term_structInstLVal_parenthesizer___closed__4 = (const lean_object*)&l_Lean_Parser_Term_structInstLVal_parenthesizer___closed__4_value;
static const lean_closure_object l_Lean_Parser_Term_structInstLVal_parenthesizer___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Parenthesizer_orelse_parenthesizer___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Parser_Term_syntheticHole_parenthesizer___closed__2_value),((lean_object*)&l_Lean_Parser_Term_structInstLVal_parenthesizer___closed__0_value)} };
static const lean_object* l_Lean_Parser_Term_structInstLVal_parenthesizer___closed__5 = (const lean_object*)&l_Lean_Parser_Term_structInstLVal_parenthesizer___closed__5_value;
static const lean_closure_object l_Lean_Parser_Term_structInstLVal_parenthesizer___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Parser_Term_structInstLVal_parenthesizer___closed__4_value),((lean_object*)&l_Lean_Parser_Term_structInstLVal_parenthesizer___closed__5_value)} };
static const lean_object* l_Lean_Parser_Term_structInstLVal_parenthesizer___closed__6 = (const lean_object*)&l_Lean_Parser_Term_structInstLVal_parenthesizer___closed__6_value;
static const lean_closure_object l_Lean_Parser_Term_structInstLVal_parenthesizer___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_group_parenthesizer___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Parser_Term_structInstLVal_parenthesizer___closed__6_value)} };
static const lean_object* l_Lean_Parser_Term_structInstLVal_parenthesizer___closed__7 = (const lean_object*)&l_Lean_Parser_Term_structInstLVal_parenthesizer___closed__7_value;
static lean_once_cell_t l_Lean_Parser_Term_structInstLVal_parenthesizer___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Term_structInstLVal_parenthesizer___closed__8;
static lean_once_cell_t l_Lean_Parser_Term_structInstLVal_parenthesizer___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Term_structInstLVal_parenthesizer___closed__9;
static lean_once_cell_t l_Lean_Parser_Term_structInstLVal_parenthesizer___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Term_structInstLVal_parenthesizer___closed__10;
static lean_once_cell_t l_Lean_Parser_Term_structInstLVal_parenthesizer___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Term_structInstLVal_parenthesizer___closed__11;
LEAN_EXPORT lean_object* l_Lean_Parser_Term_structInstLVal_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Term_structInstLVal_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_structInstLVal___regBuiltin_Lean_Parser_Term_structInstLVal_parenthesizer__7___closed__0_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_structInstLVal___regBuiltin_Lean_Parser_Term_structInstLVal_parenthesizer__7___closed__0_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_structInstLVal___regBuiltin_Lean_Parser_Term_structInstLVal_parenthesizer__7___closed__0_value_aux_0),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_structInstLVal___regBuiltin_Lean_Parser_Term_structInstLVal_parenthesizer__7___closed__0_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_structInstLVal___regBuiltin_Lean_Parser_Term_structInstLVal_parenthesizer__7___closed__0_value_aux_1),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__12_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_structInstLVal___regBuiltin_Lean_Parser_Term_structInstLVal_parenthesizer__7___closed__0_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_structInstLVal___regBuiltin_Lean_Parser_Term_structInstLVal_parenthesizer__7___closed__0_value_aux_2),((lean_object*)&l_Lean_Parser_Term_structInstLVal_formatter___closed__0_value),LEAN_SCALAR_PTR_LITERAL(185, 133, 6, 147, 6, 183, 100, 198)}};
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_structInstLVal___regBuiltin_Lean_Parser_Term_structInstLVal_parenthesizer__7___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_structInstLVal___regBuiltin_Lean_Parser_Term_structInstLVal_parenthesizer__7___closed__0_value_aux_3),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeq___regBuiltin_Lean_Parser_Tactic_tacticSeqBracketed_parenthesizer__19___closed__0_value),LEAN_SCALAR_PTR_LITERAL(8, 253, 40, 249, 57, 253, 160, 66)}};
static const lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_structInstLVal___regBuiltin_Lean_Parser_Term_structInstLVal_parenthesizer__7___closed__0 = (const lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_structInstLVal___regBuiltin_Lean_Parser_Term_structInstLVal_parenthesizer__7___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_structInstLVal___regBuiltin_Lean_Parser_Term_structInstLVal_parenthesizer__7();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_structInstLVal___regBuiltin_Lean_Parser_Term_structInstLVal_parenthesizer__7___boxed(lean_object*);
static lean_once_cell_t l_Lean_Parser_Term_structInstLVal___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Term_structInstLVal___closed__0;
static lean_once_cell_t l_Lean_Parser_Term_structInstLVal___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Term_structInstLVal___closed__1;
static lean_once_cell_t l_Lean_Parser_Term_structInstLVal___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Term_structInstLVal___closed__2;
static lean_once_cell_t l_Lean_Parser_Term_structInstLVal___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Term_structInstLVal___closed__3;
static lean_once_cell_t l_Lean_Parser_Term_structInstLVal___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Term_structInstLVal___closed__4;
static lean_once_cell_t l_Lean_Parser_Term_structInstLVal___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Term_structInstLVal___closed__5;
static lean_once_cell_t l_Lean_Parser_Term_structInstLVal___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Term_structInstLVal___closed__6;
static lean_once_cell_t l_Lean_Parser_Term_structInstLVal___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Term_structInstLVal___closed__7;
static lean_once_cell_t l_Lean_Parser_Term_structInstLVal___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Term_structInstLVal___closed__8;
static lean_once_cell_t l_Lean_Parser_Term_structInstLVal___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Term_structInstLVal___closed__9;
static lean_once_cell_t l_Lean_Parser_Term_structInstLVal___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Term_structInstLVal___closed__10;
static lean_once_cell_t l_Lean_Parser_Term_structInstLVal___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Term_structInstLVal___closed__11;
static lean_once_cell_t l_Lean_Parser_Term_structInstLVal___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Term_structInstLVal___closed__12;
LEAN_EXPORT lean_object* l_Lean_Parser_Term_structInstLVal;
static const lean_string_object l_Lean_Parser_Term_structInstFieldBinder_formatter___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "structInstFieldBinder"};
static const lean_object* l_Lean_Parser_Term_structInstFieldBinder_formatter___closed__0 = (const lean_object*)&l_Lean_Parser_Term_structInstFieldBinder_formatter___closed__0_value;
static const lean_ctor_object l_Lean_Parser_Term_structInstFieldBinder_formatter___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_Term_structInstFieldBinder_formatter___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Term_structInstFieldBinder_formatter___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_Term_structInstFieldBinder_formatter___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Term_structInstFieldBinder_formatter___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__12_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Parser_Term_structInstFieldBinder_formatter___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Term_structInstFieldBinder_formatter___closed__1_value_aux_2),((lean_object*)&l_Lean_Parser_Term_structInstFieldBinder_formatter___closed__0_value),LEAN_SCALAR_PTR_LITERAL(41, 104, 136, 45, 39, 93, 2, 154)}};
static const lean_object* l_Lean_Parser_Term_structInstFieldBinder_formatter___closed__1 = (const lean_object*)&l_Lean_Parser_Term_structInstFieldBinder_formatter___closed__1_value;
static const lean_closure_object l_Lean_Parser_Term_structInstFieldBinder_formatter___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_mkAntiquot_formatter___boxed, .m_arity = 9, .m_num_fixed = 4, .m_objs = {((lean_object*)&l_Lean_Parser_Term_structInstFieldBinder_formatter___closed__0_value),((lean_object*)&l_Lean_Parser_Term_structInstFieldBinder_formatter___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1))} };
static const lean_object* l_Lean_Parser_Term_structInstFieldBinder_formatter___closed__2 = (const lean_object*)&l_Lean_Parser_Term_structInstFieldBinder_formatter___closed__2_value;
static const lean_closure_object l_Lean_Parser_Term_structInstFieldBinder_formatter___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_Term_bracketedBinder_formatter___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Parser_Term_structInstFieldBinder_formatter___closed__3 = (const lean_object*)&l_Lean_Parser_Term_structInstFieldBinder_formatter___closed__3_value;
static lean_once_cell_t l_Lean_Parser_Term_structInstFieldBinder_formatter___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Term_structInstFieldBinder_formatter___closed__4;
LEAN_EXPORT lean_object* l_Lean_Parser_Term_structInstFieldBinder_formatter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Term_structInstFieldBinder_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Parser_Term_structInstFieldBinder_parenthesizer___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_mkAntiquot_parenthesizer___boxed, .m_arity = 9, .m_num_fixed = 4, .m_objs = {((lean_object*)&l_Lean_Parser_Term_structInstFieldBinder_formatter___closed__0_value),((lean_object*)&l_Lean_Parser_Term_structInstFieldBinder_formatter___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1))} };
static const lean_object* l_Lean_Parser_Term_structInstFieldBinder_parenthesizer___closed__0 = (const lean_object*)&l_Lean_Parser_Term_structInstFieldBinder_parenthesizer___closed__0_value;
static const lean_closure_object l_Lean_Parser_Term_structInstFieldBinder_parenthesizer___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_Term_bracketedBinder_parenthesizer___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Parser_Term_structInstFieldBinder_parenthesizer___closed__1 = (const lean_object*)&l_Lean_Parser_Term_structInstFieldBinder_parenthesizer___closed__1_value;
static lean_once_cell_t l_Lean_Parser_Term_structInstFieldBinder_parenthesizer___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Term_structInstFieldBinder_parenthesizer___closed__2;
LEAN_EXPORT lean_object* l_Lean_Parser_Term_structInstFieldBinder_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Term_structInstFieldBinder_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Parser_Term_structInstFieldBinder___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Term_structInstFieldBinder___closed__0;
static lean_once_cell_t l_Lean_Parser_Term_structInstFieldBinder___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Term_structInstFieldBinder___closed__1;
static lean_once_cell_t l_Lean_Parser_Term_structInstFieldBinder___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Term_structInstFieldBinder___closed__2;
static lean_once_cell_t l_Lean_Parser_Term_structInstFieldBinder___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Term_structInstFieldBinder___closed__3;
LEAN_EXPORT lean_object* l_Lean_Parser_Term_structInstFieldBinder;
static const lean_closure_object l_Lean_Parser_Term_optTypeForStructInst_formatter___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Formatter_notFollowedBy_formatter___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_tacticSeqBracketed_formatter___closed__5_value)} };
static const lean_object* l_Lean_Parser_Term_optTypeForStructInst_formatter___closed__0 = (const lean_object*)&l_Lean_Parser_Term_optTypeForStructInst_formatter___closed__0_value;
static lean_once_cell_t l_Lean_Parser_Term_optTypeForStructInst_formatter___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Term_optTypeForStructInst_formatter___closed__1;
static lean_once_cell_t l_Lean_Parser_Term_optTypeForStructInst_formatter___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Term_optTypeForStructInst_formatter___closed__2;
LEAN_EXPORT lean_object* l_Lean_Parser_Term_optTypeForStructInst_formatter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Term_optTypeForStructInst_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Parser_Term_optTypeForStructInst_parenthesizer___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Parenthesizer_notFollowedBy_parenthesizer___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_tacticSeqBracketed_parenthesizer___closed__6_value)} };
static const lean_object* l_Lean_Parser_Term_optTypeForStructInst_parenthesizer___closed__0 = (const lean_object*)&l_Lean_Parser_Term_optTypeForStructInst_parenthesizer___closed__0_value;
static lean_once_cell_t l_Lean_Parser_Term_optTypeForStructInst_parenthesizer___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Term_optTypeForStructInst_parenthesizer___closed__1;
LEAN_EXPORT lean_object* l_Lean_Parser_Term_optTypeForStructInst_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Term_optTypeForStructInst_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Parser_Term_optTypeForStructInst___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Term_optTypeForStructInst___closed__0;
static lean_once_cell_t l_Lean_Parser_Term_optTypeForStructInst___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Term_optTypeForStructInst___closed__1;
static lean_once_cell_t l_Lean_Parser_Term_optTypeForStructInst___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Term_optTypeForStructInst___closed__2;
static lean_once_cell_t l_Lean_Parser_Term_optTypeForStructInst___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Term_optTypeForStructInst___closed__3;
LEAN_EXPORT lean_object* l_Lean_Parser_Term_optTypeForStructInst;
LEAN_EXPORT lean_object* l_Lean_Parser_Term_structInstFieldDeclParser_formatter___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Term_structInstFieldDeclParser_formatter___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Term_structInstFieldDeclParser_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Term_structInstFieldDeclParser_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Term_structInstField_formatter___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Term_structInstField_formatter___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Term_structInstField_formatter___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Term_structInstField_formatter___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Parser_Term_structInstField_formatter___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_Term_structInstField_formatter___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Parser_Term_structInstField_formatter___closed__0 = (const lean_object*)&l_Lean_Parser_Term_structInstField_formatter___closed__0_value;
static const lean_string_object l_Lean_Parser_Term_structInstField_formatter___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "structInstField"};
static const lean_object* l_Lean_Parser_Term_structInstField_formatter___closed__1 = (const lean_object*)&l_Lean_Parser_Term_structInstField_formatter___closed__1_value;
static const lean_ctor_object l_Lean_Parser_Term_structInstField_formatter___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_Term_structInstField_formatter___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Term_structInstField_formatter___closed__2_value_aux_0),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_Term_structInstField_formatter___closed__2_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Term_structInstField_formatter___closed__2_value_aux_1),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__12_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Parser_Term_structInstField_formatter___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Term_structInstField_formatter___closed__2_value_aux_2),((lean_object*)&l_Lean_Parser_Term_structInstField_formatter___closed__1_value),LEAN_SCALAR_PTR_LITERAL(50, 77, 20, 88, 28, 210, 230, 84)}};
static const lean_object* l_Lean_Parser_Term_structInstField_formatter___closed__2 = (const lean_object*)&l_Lean_Parser_Term_structInstField_formatter___closed__2_value;
static const lean_closure_object l_Lean_Parser_Term_structInstField_formatter___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_mkAntiquot_formatter___boxed, .m_arity = 9, .m_num_fixed = 4, .m_objs = {((lean_object*)&l_Lean_Parser_Term_structInstField_formatter___closed__1_value),((lean_object*)&l_Lean_Parser_Term_structInstField_formatter___closed__2_value),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Parser_Term_structInstField_formatter___closed__3 = (const lean_object*)&l_Lean_Parser_Term_structInstField_formatter___closed__3_value;
static lean_once_cell_t l_Lean_Parser_Term_structInstField_formatter___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Term_structInstField_formatter___closed__4;
static lean_once_cell_t l_Lean_Parser_Term_structInstField_formatter___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Term_structInstField_formatter___closed__5;
static lean_once_cell_t l_Lean_Parser_Term_structInstField_formatter___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Term_structInstField_formatter___closed__6;
static const lean_closure_object l_Lean_Parser_Term_structInstField_formatter___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_Term_structInstFieldDeclParser_formatter___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Parser_Term_structInstField_formatter___closed__7 = (const lean_object*)&l_Lean_Parser_Term_structInstField_formatter___closed__7_value;
static const lean_closure_object l_Lean_Parser_Term_structInstField_formatter___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_ppDedent_formatter___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Parser_Term_structInstField_formatter___closed__7_value)} };
static const lean_object* l_Lean_Parser_Term_structInstField_formatter___closed__8 = (const lean_object*)&l_Lean_Parser_Term_structInstField_formatter___closed__8_value;
static lean_once_cell_t l_Lean_Parser_Term_structInstField_formatter___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Term_structInstField_formatter___closed__9;
static lean_once_cell_t l_Lean_Parser_Term_structInstField_formatter___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Term_structInstField_formatter___closed__10;
static lean_once_cell_t l_Lean_Parser_Term_structInstField_formatter___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Term_structInstField_formatter___closed__11;
static lean_once_cell_t l_Lean_Parser_Term_structInstField_formatter___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Term_structInstField_formatter___closed__12;
static lean_once_cell_t l_Lean_Parser_Term_structInstField_formatter___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Term_structInstField_formatter___closed__13;
static lean_once_cell_t l_Lean_Parser_Term_structInstField_formatter___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Term_structInstField_formatter___closed__14;
static lean_once_cell_t l_Lean_Parser_Term_structInstField_formatter___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Term_structInstField_formatter___closed__15;
LEAN_EXPORT lean_object* l_Lean_Parser_Term_structInstField_formatter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Term_structInstField_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_structInstField___regBuiltin_Lean_Parser_Term_structInstField_formatter__5___closed__0_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_structInstField___regBuiltin_Lean_Parser_Term_structInstField_formatter__5___closed__0_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_structInstField___regBuiltin_Lean_Parser_Term_structInstField_formatter__5___closed__0_value_aux_0),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_structInstField___regBuiltin_Lean_Parser_Term_structInstField_formatter__5___closed__0_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_structInstField___regBuiltin_Lean_Parser_Term_structInstField_formatter__5___closed__0_value_aux_1),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__12_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_structInstField___regBuiltin_Lean_Parser_Term_structInstField_formatter__5___closed__0_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_structInstField___regBuiltin_Lean_Parser_Term_structInstField_formatter__5___closed__0_value_aux_2),((lean_object*)&l_Lean_Parser_Term_structInstField_formatter___closed__1_value),LEAN_SCALAR_PTR_LITERAL(50, 77, 20, 88, 28, 210, 230, 84)}};
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_structInstField___regBuiltin_Lean_Parser_Term_structInstField_formatter__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_structInstField___regBuiltin_Lean_Parser_Term_structInstField_formatter__5___closed__0_value_aux_3),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeq___regBuiltin_Lean_Parser_Tactic_tacticSeqBracketed_formatter__5___closed__0_value),LEAN_SCALAR_PTR_LITERAL(59, 71, 141, 255, 254, 105, 125, 157)}};
static const lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_structInstField___regBuiltin_Lean_Parser_Term_structInstField_formatter__5___closed__0 = (const lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_structInstField___regBuiltin_Lean_Parser_Term_structInstField_formatter__5___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_structInstField___regBuiltin_Lean_Parser_Term_structInstField_formatter__5();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_structInstField___regBuiltin_Lean_Parser_Term_structInstField_formatter__5___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Term_structInstFieldDeclParser_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Term_structInstFieldDeclParser_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Parser_Term_structInstField_parenthesizer___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_mkAntiquot_parenthesizer___boxed, .m_arity = 9, .m_num_fixed = 4, .m_objs = {((lean_object*)&l_Lean_Parser_Term_structInstField_formatter___closed__1_value),((lean_object*)&l_Lean_Parser_Term_structInstField_formatter___closed__2_value),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Parser_Term_structInstField_parenthesizer___closed__0 = (const lean_object*)&l_Lean_Parser_Term_structInstField_parenthesizer___closed__0_value;
static const lean_closure_object l_Lean_Parser_Term_structInstField_parenthesizer___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_ppSpace_parenthesizer___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Parser_Term_structInstField_parenthesizer___closed__1 = (const lean_object*)&l_Lean_Parser_Term_structInstField_parenthesizer___closed__1_value;
static lean_once_cell_t l_Lean_Parser_Term_structInstField_parenthesizer___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Term_structInstField_parenthesizer___closed__2;
static lean_once_cell_t l_Lean_Parser_Term_structInstField_parenthesizer___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Term_structInstField_parenthesizer___closed__3;
static lean_once_cell_t l_Lean_Parser_Term_structInstField_parenthesizer___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Term_structInstField_parenthesizer___closed__4;
static const lean_closure_object l_Lean_Parser_Term_structInstField_parenthesizer___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_Term_structInstFieldDeclParser_parenthesizer___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Parser_Term_structInstField_parenthesizer___closed__5 = (const lean_object*)&l_Lean_Parser_Term_structInstField_parenthesizer___closed__5_value;
static const lean_closure_object l_Lean_Parser_Term_structInstField_parenthesizer___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_ppDedent_parenthesizer___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Parser_Term_structInstField_parenthesizer___closed__5_value)} };
static const lean_object* l_Lean_Parser_Term_structInstField_parenthesizer___closed__6 = (const lean_object*)&l_Lean_Parser_Term_structInstField_parenthesizer___closed__6_value;
static lean_once_cell_t l_Lean_Parser_Term_structInstField_parenthesizer___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Term_structInstField_parenthesizer___closed__7;
static lean_once_cell_t l_Lean_Parser_Term_structInstField_parenthesizer___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Term_structInstField_parenthesizer___closed__8;
static lean_once_cell_t l_Lean_Parser_Term_structInstField_parenthesizer___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Term_structInstField_parenthesizer___closed__9;
static lean_once_cell_t l_Lean_Parser_Term_structInstField_parenthesizer___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Term_structInstField_parenthesizer___closed__10;
static lean_once_cell_t l_Lean_Parser_Term_structInstField_parenthesizer___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Term_structInstField_parenthesizer___closed__11;
static lean_once_cell_t l_Lean_Parser_Term_structInstField_parenthesizer___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Term_structInstField_parenthesizer___closed__12;
static lean_once_cell_t l_Lean_Parser_Term_structInstField_parenthesizer___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Term_structInstField_parenthesizer___closed__13;
LEAN_EXPORT lean_object* l_Lean_Parser_Term_structInstField_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Term_structInstField_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_structInstField___regBuiltin_Lean_Parser_Term_structInstField_parenthesizer__11___closed__0_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_structInstField___regBuiltin_Lean_Parser_Term_structInstField_parenthesizer__11___closed__0_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_structInstField___regBuiltin_Lean_Parser_Term_structInstField_parenthesizer__11___closed__0_value_aux_0),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_structInstField___regBuiltin_Lean_Parser_Term_structInstField_parenthesizer__11___closed__0_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_structInstField___regBuiltin_Lean_Parser_Term_structInstField_parenthesizer__11___closed__0_value_aux_1),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__12_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_structInstField___regBuiltin_Lean_Parser_Term_structInstField_parenthesizer__11___closed__0_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_structInstField___regBuiltin_Lean_Parser_Term_structInstField_parenthesizer__11___closed__0_value_aux_2),((lean_object*)&l_Lean_Parser_Term_structInstField_formatter___closed__1_value),LEAN_SCALAR_PTR_LITERAL(50, 77, 20, 88, 28, 210, 230, 84)}};
static const lean_ctor_object l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_structInstField___regBuiltin_Lean_Parser_Term_structInstField_parenthesizer__11___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_structInstField___regBuiltin_Lean_Parser_Term_structInstField_parenthesizer__11___closed__0_value_aux_3),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeq___regBuiltin_Lean_Parser_Tactic_tacticSeqBracketed_parenthesizer__19___closed__0_value),LEAN_SCALAR_PTR_LITERAL(159, 10, 220, 108, 68, 147, 4, 252)}};
static const lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_structInstField___regBuiltin_Lean_Parser_Term_structInstField_parenthesizer__11___closed__0 = (const lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_structInstField___regBuiltin_Lean_Parser_Term_structInstField_parenthesizer__11___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_structInstField___regBuiltin_Lean_Parser_Term_structInstField_parenthesizer__11();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_structInstField___regBuiltin_Lean_Parser_Term_structInstField_parenthesizer__11___boxed(lean_object*);
static lean_once_cell_t l_Lean_Parser_Term_structInstField___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Term_structInstField___closed__0;
static const lean_string_object l_Lean_Parser_Term_structInstField___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "checkColGt"};
static const lean_object* l_Lean_Parser_Term_structInstField___closed__1 = (const lean_object*)&l_Lean_Parser_Term_structInstField___closed__1_value;
static lean_once_cell_t l_Lean_Parser_Term_structInstField___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Term_structInstField___closed__2;
static lean_once_cell_t l_Lean_Parser_Term_structInstField___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Term_structInstField___closed__3;
static lean_once_cell_t l_Lean_Parser_Term_structInstField___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Term_structInstField___closed__4;
static lean_once_cell_t l_Lean_Parser_Term_structInstField___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Term_structInstField___closed__5;
static lean_once_cell_t l_Lean_Parser_Term_structInstField___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Term_structInstField___closed__6;
static lean_once_cell_t l_Lean_Parser_Term_structInstField___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Term_structInstField___closed__7;
static lean_once_cell_t l_Lean_Parser_Term_structInstField___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Term_structInstField___closed__8;
static lean_once_cell_t l_Lean_Parser_Term_structInstField___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Term_structInstField___closed__9;
static lean_once_cell_t l_Lean_Parser_Term_structInstField___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Term_structInstField___closed__10;
static lean_once_cell_t l_Lean_Parser_Term_structInstField___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Term_structInstField___closed__11;
static lean_once_cell_t l_Lean_Parser_Term_structInstField___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Term_structInstField___closed__12;
static lean_once_cell_t l_Lean_Parser_Term_structInstField___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Term_structInstField___closed__13;
LEAN_EXPORT lean_object* l_Lean_Parser_Term_structInstField;
static const lean_string_object l_Lean_Parser_Term_structInstFields_formatter___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "structInstFields"};
static const lean_object* l_Lean_Parser_Term_structInstFields_formatter___closed__0 = (const lean_object*)&l_Lean_Parser_Term_structInstFields_formatter___closed__0_value;
static const lean_ctor_object l_Lean_Parser_Term_structInstFields_formatter___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_Term_structInstFields_formatter___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Term_structInstFields_formatter___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_Term_structInstFields_formatter___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Term_structInstFields_formatter___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__12_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Parser_Term_structInstFields_formatter___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Term_structInstFields_formatter___closed__1_value_aux_2),((lean_object*)&l_Lean_Parser_Term_structInstFields_formatter___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 82, 141, 43, 62, 171, 163, 69)}};
static const lean_object* l_Lean_Parser_Term_structInstFields_formatter___closed__1 = (const lean_object*)&l_Lean_Parser_Term_structInstFields_formatter___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Parser_Term_structInstFields_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Term_structInstFields_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Term_structInstFields_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Term_structInstFields_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Term_structInstFields(lean_object*);
static lean_object* _init_l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__7_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_13_; lean_object* v___x_14_; 
v___x_13_ = lean_box(0);
v___x_14_ = l_unsafeCast___redArg(v___x_13_);
return v___x_14_;
}
}
static lean_object* _init_l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__9_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_16_; lean_object* v___x_17_; lean_object* v___x_18_; 
v___x_16_ = ((lean_object*)(l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__8_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2_));
v___x_17_ = lean_obj_once(&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__7_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2_, &l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__7_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__7_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2_);
v___x_18_ = l_Lean_Name_str___override(v___x_17_, v___x_16_);
return v___x_18_;
}
}
static lean_object* _init_l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__10_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_19_; lean_object* v___x_20_; lean_object* v___x_21_; 
v___x_19_ = ((lean_object*)(l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2_));
v___x_20_ = lean_obj_once(&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__9_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2_, &l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__9_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__9_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2_);
v___x_21_ = l_Lean_Name_str___override(v___x_20_, v___x_19_);
return v___x_21_;
}
}
static lean_object* _init_l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__11_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_22_; lean_object* v___x_23_; lean_object* v___x_24_; 
v___x_22_ = ((lean_object*)(l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2_));
v___x_23_ = lean_obj_once(&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__10_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2_, &l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__10_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__10_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2_);
v___x_24_ = l_Lean_Name_str___override(v___x_23_, v___x_22_);
return v___x_24_;
}
}
static lean_object* _init_l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__13_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_26_; lean_object* v___x_27_; lean_object* v___x_28_; 
v___x_26_ = ((lean_object*)(l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__12_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2_));
v___x_27_ = lean_obj_once(&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__11_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2_, &l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__11_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__11_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2_);
v___x_28_ = l_Lean_Name_str___override(v___x_27_, v___x_26_);
return v___x_28_;
}
}
static lean_object* _init_l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__15_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_30_; lean_object* v___x_31_; lean_object* v___x_32_; 
v___x_30_ = ((lean_object*)(l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__14_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2_));
v___x_31_ = lean_obj_once(&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__13_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2_, &l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__13_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__13_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2_);
v___x_32_ = l_Lean_Name_str___override(v___x_31_, v___x_30_);
return v___x_32_;
}
}
static lean_object* _init_l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__16_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_33_; lean_object* v___x_34_; lean_object* v___x_35_; 
v___x_33_ = lean_unsigned_to_nat(0u);
v___x_34_ = lean_obj_once(&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__15_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2_, &l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__15_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__15_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2_);
v___x_35_ = l_Lean_Name_num___override(v___x_34_, v___x_33_);
return v___x_35_;
}
}
static lean_object* _init_l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__17_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_36_; lean_object* v___x_37_; lean_object* v___x_38_; 
v___x_36_ = ((lean_object*)(l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2_));
v___x_37_ = lean_obj_once(&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__16_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2_, &l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__16_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__16_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2_);
v___x_38_ = l_Lean_Name_str___override(v___x_37_, v___x_36_);
return v___x_38_;
}
}
static lean_object* _init_l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__18_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_39_; lean_object* v___x_40_; lean_object* v___x_41_; 
v___x_39_ = ((lean_object*)(l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2_));
v___x_40_ = lean_obj_once(&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__17_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2_, &l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__17_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__17_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2_);
v___x_41_ = l_Lean_Name_str___override(v___x_40_, v___x_39_);
return v___x_41_;
}
}
static lean_object* _init_l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__20_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_43_; lean_object* v___x_44_; lean_object* v___x_45_; 
v___x_43_ = ((lean_object*)(l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__19_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2_));
v___x_44_ = lean_obj_once(&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__18_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2_, &l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__18_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__18_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2_);
v___x_45_ = l_Lean_Name_str___override(v___x_44_, v___x_43_);
return v___x_45_;
}
}
static lean_object* _init_l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__22_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_47_; lean_object* v___x_48_; lean_object* v___x_49_; 
v___x_47_ = ((lean_object*)(l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__21_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2_));
v___x_48_ = lean_obj_once(&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__20_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2_, &l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__20_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__20_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2_);
v___x_49_ = l_Lean_Name_str___override(v___x_48_, v___x_47_);
return v___x_49_;
}
}
static lean_object* _init_l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__23_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_50_; lean_object* v___x_51_; lean_object* v___x_52_; 
v___x_50_ = ((lean_object*)(l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2_));
v___x_51_ = lean_obj_once(&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__22_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2_, &l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__22_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__22_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2_);
v___x_52_ = l_Lean_Name_str___override(v___x_51_, v___x_50_);
return v___x_52_;
}
}
static lean_object* _init_l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__24_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_53_; lean_object* v___x_54_; lean_object* v___x_55_; 
v___x_53_ = ((lean_object*)(l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2_));
v___x_54_ = lean_obj_once(&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__23_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2_, &l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__23_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__23_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2_);
v___x_55_ = l_Lean_Name_str___override(v___x_54_, v___x_53_);
return v___x_55_;
}
}
static lean_object* _init_l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__25_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_56_; lean_object* v___x_57_; lean_object* v___x_58_; 
v___x_56_ = ((lean_object*)(l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__12_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2_));
v___x_57_ = lean_obj_once(&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__24_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2_, &l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__24_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__24_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2_);
v___x_58_ = l_Lean_Name_str___override(v___x_57_, v___x_56_);
return v___x_58_;
}
}
static lean_object* _init_l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__26_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_59_; lean_object* v___x_60_; lean_object* v___x_61_; 
v___x_59_ = ((lean_object*)(l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__14_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2_));
v___x_60_ = lean_obj_once(&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__25_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2_, &l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__25_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__25_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2_);
v___x_61_ = l_Lean_Name_str___override(v___x_60_, v___x_59_);
return v___x_61_;
}
}
static lean_object* _init_l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__27_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_62_; lean_object* v___x_63_; lean_object* v___x_64_; 
v___x_62_ = lean_unsigned_to_nat(1563126128u);
v___x_63_ = lean_obj_once(&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__26_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2_, &l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__26_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__26_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2_);
v___x_64_ = l_Lean_Name_num___override(v___x_63_, v___x_62_);
return v___x_64_;
}
}
static lean_object* _init_l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__29_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_66_; lean_object* v___x_67_; lean_object* v___x_68_; 
v___x_66_ = ((lean_object*)(l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__28_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2_));
v___x_67_ = lean_obj_once(&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__27_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2_, &l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__27_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__27_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2_);
v___x_68_ = l_Lean_Name_str___override(v___x_67_, v___x_66_);
return v___x_68_;
}
}
static lean_object* _init_l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__31_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_70_; lean_object* v___x_71_; lean_object* v___x_72_; 
v___x_70_ = ((lean_object*)(l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__30_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2_));
v___x_71_ = lean_obj_once(&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__29_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2_, &l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__29_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__29_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2_);
v___x_72_ = l_Lean_Name_str___override(v___x_71_, v___x_70_);
return v___x_72_;
}
}
static lean_object* _init_l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__32_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_73_; lean_object* v___x_74_; lean_object* v___x_75_; 
v___x_73_ = lean_unsigned_to_nat(2u);
v___x_74_ = lean_obj_once(&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__31_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2_, &l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__31_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__31_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2_);
v___x_75_ = l_Lean_Name_num___override(v___x_74_, v___x_73_);
return v___x_75_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_82_; lean_object* v___x_83_; uint8_t v___x_84_; lean_object* v___x_85_; lean_object* v___x_86_; 
v___x_82_ = ((lean_object*)(l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__1_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2_));
v___x_83_ = ((lean_object*)(l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__6_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2_));
v___x_84_ = 2;
v___x_85_ = lean_obj_once(&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__32_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2_, &l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__32_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__32_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2_);
v___x_86_ = l_Lean_Parser_registerBuiltinParserAttribute(v___x_82_, v___x_83_, v___x_84_, v___x_85_);
if (lean_obj_tag(v___x_86_) == 0)
{
lean_object* v___x_87_; lean_object* v___x_88_; lean_object* v___x_89_; 
lean_dec_ref_known(v___x_86_, 1);
v___x_87_ = ((lean_object*)(l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__34_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2_));
v___x_88_ = ((lean_object*)(l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__35_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2_));
v___x_89_ = l_Lean_Parser_registerBuiltinDynamicParserAttribute(v___x_87_, v___x_88_, v___x_85_);
return v___x_89_;
}
else
{
return v___x_86_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2____boxed(lean_object* v_a_90_){
_start:
{
lean_object* v_res_91_; 
v_res_91_ = l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2_();
return v_res_91_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_tacticParser(lean_object* v_rbp_92_){
_start:
{
lean_object* v___x_93_; lean_object* v___x_94_; 
v___x_93_ = ((lean_object*)(l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__35_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2_));
v___x_94_ = l_Lean_Parser_categoryParser(v___x_93_, v_rbp_92_);
return v___x_94_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_convParser(lean_object* v_rbp_98_){
_start:
{
lean_object* v___x_99_; lean_object* v___x_100_; 
v___x_99_ = ((lean_object*)(l_Lean_Parser_convParser___closed__1));
v___x_100_ = l_Lean_Parser_categoryParser(v___x_99_, v_rbp_98_);
return v___x_100_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_sepByIndentSemicolon_formatter(lean_object* v_p_104_, lean_object* v_a_105_, lean_object* v_a_106_, lean_object* v_a_107_, lean_object* v_a_108_){
_start:
{
lean_object* v___x_110_; lean_object* v___x_111_; 
v___x_110_ = ((lean_object*)(l_Lean_Parser_Tactic_sepByIndentSemicolon_formatter___closed__1));
v___x_111_ = l_Lean_Parser_sepByIndent_formatter___redArg(v_p_104_, v___x_110_, v_a_105_, v_a_106_, v_a_107_, v_a_108_);
return v___x_111_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_sepByIndentSemicolon_formatter___boxed(lean_object* v_p_112_, lean_object* v_a_113_, lean_object* v_a_114_, lean_object* v_a_115_, lean_object* v_a_116_, lean_object* v_a_117_){
_start:
{
lean_object* v_res_118_; 
v_res_118_ = l_Lean_Parser_Tactic_sepByIndentSemicolon_formatter(v_p_112_, v_a_113_, v_a_114_, v_a_115_, v_a_116_);
lean_dec(v_a_116_);
lean_dec_ref(v_a_115_);
lean_dec(v_a_114_);
lean_dec_ref(v_a_113_);
return v_res_118_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_sepByIndentSemicolon_parenthesizer(lean_object* v_p_121_, lean_object* v_a_122_, lean_object* v_a_123_, lean_object* v_a_124_, lean_object* v_a_125_){
_start:
{
lean_object* v___x_127_; lean_object* v___x_128_; uint8_t v___x_129_; lean_object* v___x_130_; 
v___x_127_ = ((lean_object*)(l_Lean_Parser_Tactic_sepByIndentSemicolon_formatter___closed__0));
v___x_128_ = ((lean_object*)(l_Lean_Parser_Tactic_sepByIndentSemicolon_parenthesizer___closed__0));
v___x_129_ = 1;
v___x_130_ = l_Lean_Parser_sepByIndent_parenthesizer(v_p_121_, v___x_127_, v___x_128_, v___x_129_, v_a_122_, v_a_123_, v_a_124_, v_a_125_);
return v___x_130_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_sepByIndentSemicolon_parenthesizer___boxed(lean_object* v_p_131_, lean_object* v_a_132_, lean_object* v_a_133_, lean_object* v_a_134_, lean_object* v_a_135_, lean_object* v_a_136_){
_start:
{
lean_object* v_res_137_; 
v_res_137_ = l_Lean_Parser_Tactic_sepByIndentSemicolon_parenthesizer(v_p_131_, v_a_132_, v_a_133_, v_a_134_, v_a_135_);
lean_dec(v_a_135_);
lean_dec_ref(v_a_134_);
lean_dec(v_a_133_);
lean_dec_ref(v_a_132_);
return v_res_137_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_sepByIndentSemicolon___closed__0(void){
_start:
{
lean_object* v___x_138_; lean_object* v___x_139_; 
v___x_138_ = ((lean_object*)(l_Lean_Parser_Tactic_sepByIndentSemicolon_formatter___closed__0));
v___x_139_ = l_Lean_Parser_symbol(v___x_138_);
return v___x_139_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_sepByIndentSemicolon___closed__4(void){
_start:
{
lean_object* v___x_144_; lean_object* v___x_145_; 
v___x_144_ = ((lean_object*)(l_Lean_Parser_Tactic_sepByIndentSemicolon___closed__3));
v___x_145_ = l_Lean_Parser_symbol(v___x_144_);
return v___x_145_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_sepByIndentSemicolon___closed__6(void){
_start:
{
lean_object* v___x_147_; lean_object* v___x_148_; 
v___x_147_ = ((lean_object*)(l_Lean_Parser_Tactic_sepByIndentSemicolon___closed__5));
v___x_148_ = l_Lean_Parser_checkColGe(v___x_147_);
return v___x_148_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_sepByIndentSemicolon___closed__7(void){
_start:
{
lean_object* v___x_149_; lean_object* v___x_150_; 
v___x_149_ = ((lean_object*)(l_Lean_Parser_Tactic_sepByIndentSemicolon___closed__5));
v___x_150_ = l_Lean_Parser_checkColEq(v___x_149_);
return v___x_150_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_sepByIndentSemicolon___closed__9(void){
_start:
{
lean_object* v___x_152_; lean_object* v___x_153_; 
v___x_152_ = ((lean_object*)(l_Lean_Parser_Tactic_sepByIndentSemicolon___closed__8));
v___x_153_ = l_Lean_Parser_checkLinebreakBefore(v___x_152_);
return v___x_153_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_sepByIndentSemicolon___closed__10(void){
_start:
{
lean_object* v___x_154_; lean_object* v___x_155_; lean_object* v___x_156_; 
v___x_154_ = l_Lean_Parser_pushNone;
v___x_155_ = lean_obj_once(&l_Lean_Parser_Tactic_sepByIndentSemicolon___closed__9, &l_Lean_Parser_Tactic_sepByIndentSemicolon___closed__9_once, _init_l_Lean_Parser_Tactic_sepByIndentSemicolon___closed__9);
v___x_156_ = l_Lean_Parser_andthen(v___x_155_, v___x_154_);
return v___x_156_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_sepByIndentSemicolon___closed__11(void){
_start:
{
lean_object* v___x_157_; lean_object* v___x_158_; lean_object* v___x_159_; 
v___x_157_ = lean_obj_once(&l_Lean_Parser_Tactic_sepByIndentSemicolon___closed__10, &l_Lean_Parser_Tactic_sepByIndentSemicolon___closed__10_once, _init_l_Lean_Parser_Tactic_sepByIndentSemicolon___closed__10);
v___x_158_ = lean_obj_once(&l_Lean_Parser_Tactic_sepByIndentSemicolon___closed__7, &l_Lean_Parser_Tactic_sepByIndentSemicolon___closed__7_once, _init_l_Lean_Parser_Tactic_sepByIndentSemicolon___closed__7);
v___x_159_ = l_Lean_Parser_andthen(v___x_158_, v___x_157_);
return v___x_159_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_sepByIndentSemicolon___closed__12(void){
_start:
{
lean_object* v___x_160_; lean_object* v___x_161_; lean_object* v___x_162_; 
v___x_160_ = lean_obj_once(&l_Lean_Parser_Tactic_sepByIndentSemicolon___closed__11, &l_Lean_Parser_Tactic_sepByIndentSemicolon___closed__11_once, _init_l_Lean_Parser_Tactic_sepByIndentSemicolon___closed__11);
v___x_161_ = lean_obj_once(&l_Lean_Parser_Tactic_sepByIndentSemicolon___closed__0, &l_Lean_Parser_Tactic_sepByIndentSemicolon___closed__0_once, _init_l_Lean_Parser_Tactic_sepByIndentSemicolon___closed__0);
v___x_162_ = l_Lean_Parser_orelse(v___x_161_, v___x_160_);
return v___x_162_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_sepByIndentSemicolon(lean_object* v_p_163_){
_start:
{
lean_object* v___x_164_; uint8_t v___x_165_; lean_object* v___x_166_; lean_object* v___x_167_; lean_object* v_p_168_; lean_object* v___x_169_; lean_object* v___x_170_; lean_object* v___x_171_; lean_object* v___x_172_; lean_object* v___x_173_; 
v___x_164_ = ((lean_object*)(l_Lean_Parser_Tactic_sepByIndentSemicolon_formatter___closed__0));
v___x_165_ = 1;
v___x_166_ = ((lean_object*)(l_Lean_Parser_Tactic_sepByIndentSemicolon___closed__2));
v___x_167_ = lean_obj_once(&l_Lean_Parser_Tactic_sepByIndentSemicolon___closed__4, &l_Lean_Parser_Tactic_sepByIndentSemicolon___closed__4_once, _init_l_Lean_Parser_Tactic_sepByIndentSemicolon___closed__4);
v_p_168_ = l_Lean_Parser_withAntiquotSpliceAndSuffix(v___x_166_, v_p_163_, v___x_167_);
v___x_169_ = lean_obj_once(&l_Lean_Parser_Tactic_sepByIndentSemicolon___closed__6, &l_Lean_Parser_Tactic_sepByIndentSemicolon___closed__6_once, _init_l_Lean_Parser_Tactic_sepByIndentSemicolon___closed__6);
v___x_170_ = l_Lean_Parser_andthen(v___x_169_, v_p_168_);
v___x_171_ = lean_obj_once(&l_Lean_Parser_Tactic_sepByIndentSemicolon___closed__12, &l_Lean_Parser_Tactic_sepByIndentSemicolon___closed__12_once, _init_l_Lean_Parser_Tactic_sepByIndentSemicolon___closed__12);
v___x_172_ = l_Lean_Parser_sepBy(v___x_170_, v___x_164_, v___x_171_, v___x_165_);
v___x_173_ = l_Lean_Parser_withPosition(v___x_172_);
return v___x_173_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_sepByIndentSemicolon___regBuiltin_Lean_Parser_Tactic_sepByIndentSemicolon_docString__1(){
_start:
{
lean_object* v___x_183_; lean_object* v___x_184_; lean_object* v___x_185_; 
v___x_183_ = ((lean_object*)(l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_sepByIndentSemicolon___regBuiltin_Lean_Parser_Tactic_sepByIndentSemicolon_docString__1___closed__2));
v___x_184_ = ((lean_object*)(l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_sepByIndentSemicolon___regBuiltin_Lean_Parser_Tactic_sepByIndentSemicolon_docString__1___closed__3));
v___x_185_ = l_Lean_addBuiltinDocString(v___x_183_, v___x_184_);
return v___x_185_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_sepByIndentSemicolon___regBuiltin_Lean_Parser_Tactic_sepByIndentSemicolon_docString__1___boxed(lean_object* v_a_186_){
_start:
{
lean_object* v_res_187_; 
v_res_187_ = l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_sepByIndentSemicolon___regBuiltin_Lean_Parser_Tactic_sepByIndentSemicolon_docString__1();
return v_res_187_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_sepBy1IndentSemicolon_formatter(lean_object* v_p_188_, lean_object* v_a_189_, lean_object* v_a_190_, lean_object* v_a_191_, lean_object* v_a_192_){
_start:
{
lean_object* v___x_194_; lean_object* v___x_195_; 
v___x_194_ = ((lean_object*)(l_Lean_Parser_Tactic_sepByIndentSemicolon_formatter___closed__1));
v___x_195_ = l_Lean_Parser_sepByIndent_formatter___redArg(v_p_188_, v___x_194_, v_a_189_, v_a_190_, v_a_191_, v_a_192_);
return v___x_195_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_sepBy1IndentSemicolon_formatter___boxed(lean_object* v_p_196_, lean_object* v_a_197_, lean_object* v_a_198_, lean_object* v_a_199_, lean_object* v_a_200_, lean_object* v_a_201_){
_start:
{
lean_object* v_res_202_; 
v_res_202_ = l_Lean_Parser_Tactic_sepBy1IndentSemicolon_formatter(v_p_196_, v_a_197_, v_a_198_, v_a_199_, v_a_200_);
lean_dec(v_a_200_);
lean_dec_ref(v_a_199_);
lean_dec(v_a_198_);
lean_dec_ref(v_a_197_);
return v_res_202_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_sepBy1IndentSemicolon_parenthesizer(lean_object* v_p_203_, lean_object* v_a_204_, lean_object* v_a_205_, lean_object* v_a_206_, lean_object* v_a_207_){
_start:
{
lean_object* v___x_209_; lean_object* v___x_210_; uint8_t v___x_211_; lean_object* v___x_212_; 
v___x_209_ = ((lean_object*)(l_Lean_Parser_Tactic_sepByIndentSemicolon_formatter___closed__0));
v___x_210_ = ((lean_object*)(l_Lean_Parser_Tactic_sepByIndentSemicolon_parenthesizer___closed__0));
v___x_211_ = 1;
v___x_212_ = l_Lean_Parser_sepBy1Indent_parenthesizer(v_p_203_, v___x_209_, v___x_210_, v___x_211_, v_a_204_, v_a_205_, v_a_206_, v_a_207_);
return v___x_212_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_sepBy1IndentSemicolon_parenthesizer___boxed(lean_object* v_p_213_, lean_object* v_a_214_, lean_object* v_a_215_, lean_object* v_a_216_, lean_object* v_a_217_, lean_object* v_a_218_){
_start:
{
lean_object* v_res_219_; 
v_res_219_ = l_Lean_Parser_Tactic_sepBy1IndentSemicolon_parenthesizer(v_p_213_, v_a_214_, v_a_215_, v_a_216_, v_a_217_);
lean_dec(v_a_217_);
lean_dec_ref(v_a_216_);
lean_dec(v_a_215_);
lean_dec_ref(v_a_214_);
return v_res_219_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_sepBy1IndentSemicolon(lean_object* v_p_220_){
_start:
{
lean_object* v___x_221_; uint8_t v___x_222_; lean_object* v___x_223_; lean_object* v___x_224_; lean_object* v_p_225_; lean_object* v___x_226_; lean_object* v___x_227_; lean_object* v___x_228_; lean_object* v___x_229_; lean_object* v___x_230_; 
v___x_221_ = ((lean_object*)(l_Lean_Parser_Tactic_sepByIndentSemicolon_formatter___closed__0));
v___x_222_ = 1;
v___x_223_ = ((lean_object*)(l_Lean_Parser_Tactic_sepByIndentSemicolon___closed__2));
v___x_224_ = lean_obj_once(&l_Lean_Parser_Tactic_sepByIndentSemicolon___closed__4, &l_Lean_Parser_Tactic_sepByIndentSemicolon___closed__4_once, _init_l_Lean_Parser_Tactic_sepByIndentSemicolon___closed__4);
v_p_225_ = l_Lean_Parser_withAntiquotSpliceAndSuffix(v___x_223_, v_p_220_, v___x_224_);
v___x_226_ = lean_obj_once(&l_Lean_Parser_Tactic_sepByIndentSemicolon___closed__6, &l_Lean_Parser_Tactic_sepByIndentSemicolon___closed__6_once, _init_l_Lean_Parser_Tactic_sepByIndentSemicolon___closed__6);
v___x_227_ = l_Lean_Parser_andthen(v___x_226_, v_p_225_);
v___x_228_ = lean_obj_once(&l_Lean_Parser_Tactic_sepByIndentSemicolon___closed__12, &l_Lean_Parser_Tactic_sepByIndentSemicolon___closed__12_once, _init_l_Lean_Parser_Tactic_sepByIndentSemicolon___closed__12);
v___x_229_ = l_Lean_Parser_sepBy1(v___x_227_, v___x_221_, v___x_228_, v___x_222_);
v___x_230_ = l_Lean_Parser_withPosition(v___x_229_);
return v___x_230_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_sepBy1IndentSemicolon___regBuiltin_Lean_Parser_Tactic_sepBy1IndentSemicolon_docString__1(){
_start:
{
lean_object* v___x_239_; lean_object* v___x_240_; lean_object* v___x_241_; 
v___x_239_ = ((lean_object*)(l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_sepBy1IndentSemicolon___regBuiltin_Lean_Parser_Tactic_sepBy1IndentSemicolon_docString__1___closed__1));
v___x_240_ = ((lean_object*)(l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_sepBy1IndentSemicolon___regBuiltin_Lean_Parser_Tactic_sepBy1IndentSemicolon_docString__1___closed__2));
v___x_241_ = l_Lean_addBuiltinDocString(v___x_239_, v___x_240_);
return v___x_241_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_sepBy1IndentSemicolon___regBuiltin_Lean_Parser_Tactic_sepBy1IndentSemicolon_docString__1___boxed(lean_object* v_a_242_){
_start:
{
lean_object* v_res_243_; 
v_res_243_ = l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_sepBy1IndentSemicolon___regBuiltin_Lean_Parser_Tactic_sepBy1IndentSemicolon_docString__1();
return v_res_243_;
}
}
static lean_object* _init_l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_initFn___closed__5_00___x40_Lean_Parser_Term_Basic_1911936479____hygCtx___hyg_2_(void){
_start:
{
uint8_t v___x_253_; lean_object* v___x_254_; lean_object* v___x_255_; lean_object* v___x_256_; 
v___x_253_ = 1;
v___x_254_ = ((lean_object*)(l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_initFn___closed__4_00___x40_Lean_Parser_Term_Basic_1911936479____hygCtx___hyg_2_));
v___x_255_ = lean_obj_once(&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__7_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2_, &l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__7_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__7_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2_);
v___x_256_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_256_, 0, v___x_255_);
lean_ctor_set(v___x_256_, 1, v___x_254_);
lean_ctor_set_uint8(v___x_256_, sizeof(void*)*2, v___x_253_);
return v___x_256_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_initFn_00___x40_Lean_Parser_Term_Basic_1911936479____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_277_; lean_object* v___x_278_; lean_object* v___x_279_; lean_object* v___x_280_; lean_object* v___x_281_; lean_object* v___y_283_; lean_object* v___x_293_; 
v___x_277_ = ((lean_object*)(l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_initFn___closed__0_00___x40_Lean_Parser_Term_Basic_1911936479____hygCtx___hyg_2_));
v___x_278_ = ((lean_object*)(l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_sepByIndentSemicolon___regBuiltin_Lean_Parser_Tactic_sepByIndentSemicolon_docString__1___closed__2));
v___x_279_ = ((lean_object*)(l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_initFn___closed__2_00___x40_Lean_Parser_Term_Basic_1911936479____hygCtx___hyg_2_));
v___x_280_ = ((lean_object*)(l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_initFn___closed__3_00___x40_Lean_Parser_Term_Basic_1911936479____hygCtx___hyg_2_));
v___x_281_ = lean_obj_once(&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_initFn___closed__5_00___x40_Lean_Parser_Term_Basic_1911936479____hygCtx___hyg_2_, &l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_initFn___closed__5_00___x40_Lean_Parser_Term_Basic_1911936479____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_initFn___closed__5_00___x40_Lean_Parser_Term_Basic_1911936479____hygCtx___hyg_2_);
v___x_293_ = l_Lean_Parser_registerAlias(v___x_277_, v___x_278_, v___x_279_, v___x_280_, v___x_281_);
if (lean_obj_tag(v___x_293_) == 0)
{
lean_object* v___x_294_; lean_object* v___x_295_; 
lean_dec_ref_known(v___x_293_, 1);
v___x_294_ = ((lean_object*)(l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_initFn___closed__15_00___x40_Lean_Parser_Term_Basic_1911936479____hygCtx___hyg_2_));
v___x_295_ = l_Lean_PrettyPrinter_Formatter_registerAlias(v___x_277_, v___x_294_);
if (lean_obj_tag(v___x_295_) == 0)
{
lean_object* v___x_296_; lean_object* v___x_297_; 
lean_dec_ref_known(v___x_295_, 1);
v___x_296_ = ((lean_object*)(l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_initFn___closed__17_00___x40_Lean_Parser_Term_Basic_1911936479____hygCtx___hyg_2_));
v___x_297_ = l_Lean_PrettyPrinter_Parenthesizer_registerAlias(v___x_277_, v___x_296_);
v___y_283_ = v___x_297_;
goto v___jp_282_;
}
else
{
v___y_283_ = v___x_295_;
goto v___jp_282_;
}
}
else
{
v___y_283_ = v___x_293_;
goto v___jp_282_;
}
v___jp_282_:
{
if (lean_obj_tag(v___y_283_) == 0)
{
lean_object* v___x_284_; lean_object* v___x_285_; lean_object* v___x_286_; lean_object* v___x_287_; lean_object* v___x_288_; 
lean_dec_ref_known(v___y_283_, 1);
v___x_284_ = ((lean_object*)(l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_initFn___closed__6_00___x40_Lean_Parser_Term_Basic_1911936479____hygCtx___hyg_2_));
v___x_285_ = ((lean_object*)(l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_sepBy1IndentSemicolon___regBuiltin_Lean_Parser_Tactic_sepBy1IndentSemicolon_docString__1___closed__1));
v___x_286_ = ((lean_object*)(l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_initFn___closed__8_00___x40_Lean_Parser_Term_Basic_1911936479____hygCtx___hyg_2_));
v___x_287_ = ((lean_object*)(l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_initFn___closed__9_00___x40_Lean_Parser_Term_Basic_1911936479____hygCtx___hyg_2_));
v___x_288_ = l_Lean_Parser_registerAlias(v___x_284_, v___x_285_, v___x_286_, v___x_287_, v___x_281_);
if (lean_obj_tag(v___x_288_) == 0)
{
lean_object* v___x_289_; lean_object* v___x_290_; 
lean_dec_ref_known(v___x_288_, 1);
v___x_289_ = ((lean_object*)(l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_initFn___closed__11_00___x40_Lean_Parser_Term_Basic_1911936479____hygCtx___hyg_2_));
v___x_290_ = l_Lean_PrettyPrinter_Formatter_registerAlias(v___x_284_, v___x_289_);
if (lean_obj_tag(v___x_290_) == 0)
{
lean_object* v___x_291_; lean_object* v___x_292_; 
lean_dec_ref_known(v___x_290_, 1);
v___x_291_ = ((lean_object*)(l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_initFn___closed__13_00___x40_Lean_Parser_Term_Basic_1911936479____hygCtx___hyg_2_));
v___x_292_ = l_Lean_PrettyPrinter_Parenthesizer_registerAlias(v___x_284_, v___x_291_);
return v___x_292_;
}
else
{
return v___x_290_;
}
}
else
{
return v___x_288_;
}
}
else
{
return v___y_283_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_initFn_00___x40_Lean_Parser_Term_Basic_1911936479____hygCtx___hyg_2____boxed(lean_object* v_a_298_){
_start:
{
lean_object* v_res_299_; 
v_res_299_ = l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_initFn_00___x40_Lean_Parser_Term_Basic_1911936479____hygCtx___hyg_2_();
return v_res_299_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_tacticSeq1Indented___closed__2(void){
_start:
{
uint8_t v___x_306_; uint8_t v___x_307_; lean_object* v___x_308_; lean_object* v___x_309_; lean_object* v___x_310_; 
v___x_306_ = 0;
v___x_307_ = 1;
v___x_308_ = ((lean_object*)(l_Lean_Parser_Tactic_tacticSeq1Indented___closed__1));
v___x_309_ = ((lean_object*)(l_Lean_Parser_Tactic_tacticSeq1Indented___closed__0));
v___x_310_ = l_Lean_Parser_mkAntiquot(v___x_309_, v___x_308_, v___x_307_, v___x_306_);
return v___x_310_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_tacticSeq1Indented___closed__3(void){
_start:
{
lean_object* v___x_311_; lean_object* v___x_312_; lean_object* v___x_313_; 
v___x_311_ = lean_unsigned_to_nat(0u);
v___x_312_ = ((lean_object*)(l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__35_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2_));
v___x_313_ = l_Lean_Parser_categoryParser(v___x_312_, v___x_311_);
return v___x_313_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_tacticSeq1Indented___closed__4(void){
_start:
{
lean_object* v___x_314_; lean_object* v___x_315_; 
v___x_314_ = lean_obj_once(&l_Lean_Parser_Tactic_tacticSeq1Indented___closed__3, &l_Lean_Parser_Tactic_tacticSeq1Indented___closed__3_once, _init_l_Lean_Parser_Tactic_tacticSeq1Indented___closed__3);
v___x_315_ = l_Lean_Parser_Tactic_sepBy1IndentSemicolon(v___x_314_);
return v___x_315_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_tacticSeq1Indented___closed__5(void){
_start:
{
lean_object* v___x_316_; lean_object* v___x_317_; lean_object* v___x_318_; lean_object* v___x_319_; 
v___x_316_ = lean_obj_once(&l_Lean_Parser_Tactic_tacticSeq1Indented___closed__4, &l_Lean_Parser_Tactic_tacticSeq1Indented___closed__4_once, _init_l_Lean_Parser_Tactic_tacticSeq1Indented___closed__4);
v___x_317_ = lean_unsigned_to_nat(1024u);
v___x_318_ = ((lean_object*)(l_Lean_Parser_Tactic_tacticSeq1Indented___closed__1));
v___x_319_ = l_Lean_Parser_leadingNode(v___x_318_, v___x_317_, v___x_316_);
return v___x_319_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_tacticSeq1Indented___closed__6(void){
_start:
{
lean_object* v___x_320_; lean_object* v___x_321_; lean_object* v___x_322_; 
v___x_320_ = lean_obj_once(&l_Lean_Parser_Tactic_tacticSeq1Indented___closed__5, &l_Lean_Parser_Tactic_tacticSeq1Indented___closed__5_once, _init_l_Lean_Parser_Tactic_tacticSeq1Indented___closed__5);
v___x_321_ = lean_obj_once(&l_Lean_Parser_Tactic_tacticSeq1Indented___closed__2, &l_Lean_Parser_Tactic_tacticSeq1Indented___closed__2_once, _init_l_Lean_Parser_Tactic_tacticSeq1Indented___closed__2);
v___x_322_ = l_Lean_Parser_withAntiquot(v___x_321_, v___x_320_);
return v___x_322_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_tacticSeq1Indented___closed__7(void){
_start:
{
lean_object* v___x_323_; lean_object* v___x_324_; lean_object* v___x_325_; 
v___x_323_ = lean_obj_once(&l_Lean_Parser_Tactic_tacticSeq1Indented___closed__6, &l_Lean_Parser_Tactic_tacticSeq1Indented___closed__6_once, _init_l_Lean_Parser_Tactic_tacticSeq1Indented___closed__6);
v___x_324_ = ((lean_object*)(l_Lean_Parser_Tactic_tacticSeq1Indented___closed__1));
v___x_325_ = l_Lean_Parser_withCache(v___x_324_, v___x_323_);
return v___x_325_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_tacticSeq1Indented(void){
_start:
{
lean_object* v___x_326_; 
v___x_326_ = lean_obj_once(&l_Lean_Parser_Tactic_tacticSeq1Indented___closed__7, &l_Lean_Parser_Tactic_tacticSeq1Indented___closed__7_once, _init_l_Lean_Parser_Tactic_tacticSeq1Indented___closed__7);
return v___x_326_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_tacticSeqBracketed___closed__2(void){
_start:
{
uint8_t v___x_333_; uint8_t v___x_334_; lean_object* v___x_335_; lean_object* v___x_336_; lean_object* v___x_337_; 
v___x_333_ = 0;
v___x_334_ = 1;
v___x_335_ = ((lean_object*)(l_Lean_Parser_Tactic_tacticSeqBracketed___closed__1));
v___x_336_ = ((lean_object*)(l_Lean_Parser_Tactic_tacticSeqBracketed___closed__0));
v___x_337_ = l_Lean_Parser_mkAntiquot(v___x_336_, v___x_335_, v___x_334_, v___x_333_);
return v___x_337_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_tacticSeqBracketed___closed__4(void){
_start:
{
lean_object* v___x_339_; lean_object* v___x_340_; 
v___x_339_ = ((lean_object*)(l_Lean_Parser_Tactic_tacticSeqBracketed___closed__3));
v___x_340_ = l_Lean_Parser_symbol(v___x_339_);
return v___x_340_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_tacticSeqBracketed___closed__5(void){
_start:
{
lean_object* v___x_341_; lean_object* v___x_342_; 
v___x_341_ = lean_obj_once(&l_Lean_Parser_Tactic_tacticSeq1Indented___closed__3, &l_Lean_Parser_Tactic_tacticSeq1Indented___closed__3_once, _init_l_Lean_Parser_Tactic_tacticSeq1Indented___closed__3);
v___x_342_ = l_Lean_Parser_Tactic_sepByIndentSemicolon(v___x_341_);
return v___x_342_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_tacticSeqBracketed___closed__7(void){
_start:
{
lean_object* v___x_344_; lean_object* v___x_345_; 
v___x_344_ = ((lean_object*)(l_Lean_Parser_Tactic_tacticSeqBracketed___closed__6));
v___x_345_ = l_Lean_Parser_symbol(v___x_344_);
return v___x_345_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_tacticSeqBracketed___closed__8(void){
_start:
{
lean_object* v___x_346_; lean_object* v___x_347_; lean_object* v___x_348_; 
v___x_346_ = lean_obj_once(&l_Lean_Parser_Tactic_tacticSeqBracketed___closed__7, &l_Lean_Parser_Tactic_tacticSeqBracketed___closed__7_once, _init_l_Lean_Parser_Tactic_tacticSeqBracketed___closed__7);
v___x_347_ = l_Lean_Parser_skip;
v___x_348_ = l_Lean_Parser_andthen(v___x_347_, v___x_346_);
return v___x_348_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_tacticSeqBracketed___closed__9(void){
_start:
{
lean_object* v___x_349_; lean_object* v___x_350_; lean_object* v___x_351_; 
v___x_349_ = lean_obj_once(&l_Lean_Parser_Tactic_tacticSeqBracketed___closed__8, &l_Lean_Parser_Tactic_tacticSeqBracketed___closed__8_once, _init_l_Lean_Parser_Tactic_tacticSeqBracketed___closed__8);
v___x_350_ = lean_obj_once(&l_Lean_Parser_Tactic_tacticSeqBracketed___closed__5, &l_Lean_Parser_Tactic_tacticSeqBracketed___closed__5_once, _init_l_Lean_Parser_Tactic_tacticSeqBracketed___closed__5);
v___x_351_ = l_Lean_Parser_andthen(v___x_350_, v___x_349_);
return v___x_351_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_tacticSeqBracketed___closed__10(void){
_start:
{
lean_object* v___x_352_; lean_object* v___x_353_; lean_object* v___x_354_; 
v___x_352_ = lean_obj_once(&l_Lean_Parser_Tactic_tacticSeqBracketed___closed__9, &l_Lean_Parser_Tactic_tacticSeqBracketed___closed__9_once, _init_l_Lean_Parser_Tactic_tacticSeqBracketed___closed__9);
v___x_353_ = lean_obj_once(&l_Lean_Parser_Tactic_tacticSeqBracketed___closed__4, &l_Lean_Parser_Tactic_tacticSeqBracketed___closed__4_once, _init_l_Lean_Parser_Tactic_tacticSeqBracketed___closed__4);
v___x_354_ = l_Lean_Parser_andthen(v___x_353_, v___x_352_);
return v___x_354_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_tacticSeqBracketed___closed__11(void){
_start:
{
lean_object* v___x_355_; lean_object* v___x_356_; lean_object* v___x_357_; lean_object* v___x_358_; 
v___x_355_ = lean_obj_once(&l_Lean_Parser_Tactic_tacticSeqBracketed___closed__10, &l_Lean_Parser_Tactic_tacticSeqBracketed___closed__10_once, _init_l_Lean_Parser_Tactic_tacticSeqBracketed___closed__10);
v___x_356_ = lean_unsigned_to_nat(1024u);
v___x_357_ = ((lean_object*)(l_Lean_Parser_Tactic_tacticSeqBracketed___closed__1));
v___x_358_ = l_Lean_Parser_leadingNode(v___x_357_, v___x_356_, v___x_355_);
return v___x_358_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_tacticSeqBracketed___closed__12(void){
_start:
{
lean_object* v___x_359_; lean_object* v___x_360_; lean_object* v___x_361_; 
v___x_359_ = lean_obj_once(&l_Lean_Parser_Tactic_tacticSeqBracketed___closed__11, &l_Lean_Parser_Tactic_tacticSeqBracketed___closed__11_once, _init_l_Lean_Parser_Tactic_tacticSeqBracketed___closed__11);
v___x_360_ = lean_obj_once(&l_Lean_Parser_Tactic_tacticSeqBracketed___closed__2, &l_Lean_Parser_Tactic_tacticSeqBracketed___closed__2_once, _init_l_Lean_Parser_Tactic_tacticSeqBracketed___closed__2);
v___x_361_ = l_Lean_Parser_withAntiquot(v___x_360_, v___x_359_);
return v___x_361_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_tacticSeqBracketed___closed__13(void){
_start:
{
lean_object* v___x_362_; lean_object* v___x_363_; lean_object* v___x_364_; 
v___x_362_ = lean_obj_once(&l_Lean_Parser_Tactic_tacticSeqBracketed___closed__12, &l_Lean_Parser_Tactic_tacticSeqBracketed___closed__12_once, _init_l_Lean_Parser_Tactic_tacticSeqBracketed___closed__12);
v___x_363_ = ((lean_object*)(l_Lean_Parser_Tactic_tacticSeqBracketed___closed__1));
v___x_364_ = l_Lean_Parser_withCache(v___x_363_, v___x_362_);
return v___x_364_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_tacticSeqBracketed(void){
_start:
{
lean_object* v___x_365_; 
v___x_365_ = lean_obj_once(&l_Lean_Parser_Tactic_tacticSeqBracketed___closed__13, &l_Lean_Parser_Tactic_tacticSeqBracketed___closed__13_once, _init_l_Lean_Parser_Tactic_tacticSeqBracketed___closed__13);
return v___x_365_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeqBracketed___regBuiltin_Lean_Parser_Tactic_tacticSeqBracketed_docString__1(){
_start:
{
lean_object* v___x_368_; lean_object* v___x_369_; lean_object* v___x_370_; 
v___x_368_ = ((lean_object*)(l_Lean_Parser_Tactic_tacticSeqBracketed___closed__1));
v___x_369_ = ((lean_object*)(l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeqBracketed___regBuiltin_Lean_Parser_Tactic_tacticSeqBracketed_docString__1___closed__0));
v___x_370_ = l_Lean_addBuiltinDocString(v___x_368_, v___x_369_);
return v___x_370_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeqBracketed___regBuiltin_Lean_Parser_Tactic_tacticSeqBracketed_docString__1___boxed(lean_object* v_a_371_){
_start:
{
lean_object* v_res_372_; 
v_res_372_ = l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeqBracketed___regBuiltin_Lean_Parser_Tactic_tacticSeqBracketed_docString__1();
return v_res_372_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_tacticParser_formatter___redArg(lean_object* v_a_373_, lean_object* v_a_374_, lean_object* v_a_375_, lean_object* v_a_376_){
_start:
{
lean_object* v___x_378_; lean_object* v___x_379_; 
v___x_378_ = ((lean_object*)(l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__35_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2_));
v___x_379_ = l_Lean_PrettyPrinter_Formatter_categoryParser_formatter(v___x_378_, v_a_373_, v_a_374_, v_a_375_, v_a_376_);
return v___x_379_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_tacticParser_formatter___redArg___boxed(lean_object* v_a_380_, lean_object* v_a_381_, lean_object* v_a_382_, lean_object* v_a_383_, lean_object* v_a_384_){
_start:
{
lean_object* v_res_385_; 
v_res_385_ = l_Lean_Parser_tacticParser_formatter___redArg(v_a_380_, v_a_381_, v_a_382_, v_a_383_);
lean_dec(v_a_383_);
lean_dec_ref(v_a_382_);
lean_dec(v_a_381_);
lean_dec_ref(v_a_380_);
return v_res_385_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_tacticParser_formatter(lean_object* v_rbp_386_, lean_object* v_a_387_, lean_object* v_a_388_, lean_object* v_a_389_, lean_object* v_a_390_){
_start:
{
lean_object* v___x_392_; 
v___x_392_ = l_Lean_Parser_tacticParser_formatter___redArg(v_a_387_, v_a_388_, v_a_389_, v_a_390_);
return v___x_392_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_tacticParser_formatter___boxed(lean_object* v_rbp_393_, lean_object* v_a_394_, lean_object* v_a_395_, lean_object* v_a_396_, lean_object* v_a_397_, lean_object* v_a_398_){
_start:
{
lean_object* v_res_399_; 
v_res_399_ = l_Lean_Parser_tacticParser_formatter(v_rbp_393_, v_a_394_, v_a_395_, v_a_396_, v_a_397_);
lean_dec(v_a_397_);
lean_dec_ref(v_a_396_);
lean_dec(v_a_395_);
lean_dec_ref(v_a_394_);
lean_dec(v_rbp_393_);
return v_res_399_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_tacticSeqBracketed_formatter___closed__4(void){
_start:
{
lean_object* v___x_413_; lean_object* v___x_414_; 
v___x_413_ = lean_alloc_closure((void*)(l_Lean_ppLine_formatter___boxed), 5, 0);
v___x_414_ = lean_alloc_closure((void*)(l_Lean_ppDedent_formatter___boxed), 6, 1);
lean_closure_set(v___x_414_, 0, v___x_413_);
return v___x_414_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_tacticSeqBracketed_formatter___closed__6(void){
_start:
{
lean_object* v___x_417_; lean_object* v___x_418_; lean_object* v___x_419_; 
v___x_417_ = ((lean_object*)(l_Lean_Parser_Tactic_tacticSeqBracketed_formatter___closed__5));
v___x_418_ = lean_obj_once(&l_Lean_Parser_Tactic_tacticSeqBracketed_formatter___closed__4, &l_Lean_Parser_Tactic_tacticSeqBracketed_formatter___closed__4_once, _init_l_Lean_Parser_Tactic_tacticSeqBracketed_formatter___closed__4);
v___x_419_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed), 7, 2);
lean_closure_set(v___x_419_, 0, v___x_418_);
lean_closure_set(v___x_419_, 1, v___x_417_);
return v___x_419_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_tacticSeqBracketed_formatter___closed__7(void){
_start:
{
lean_object* v___x_420_; lean_object* v___x_421_; lean_object* v___x_422_; 
v___x_420_ = lean_obj_once(&l_Lean_Parser_Tactic_tacticSeqBracketed_formatter___closed__6, &l_Lean_Parser_Tactic_tacticSeqBracketed_formatter___closed__6_once, _init_l_Lean_Parser_Tactic_tacticSeqBracketed_formatter___closed__6);
v___x_421_ = ((lean_object*)(l_Lean_Parser_Tactic_tacticSeqBracketed_formatter___closed__3));
v___x_422_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed), 7, 2);
lean_closure_set(v___x_422_, 0, v___x_421_);
lean_closure_set(v___x_422_, 1, v___x_420_);
return v___x_422_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_tacticSeqBracketed_formatter___closed__8(void){
_start:
{
lean_object* v___x_423_; lean_object* v___x_424_; lean_object* v___x_425_; 
v___x_423_ = lean_obj_once(&l_Lean_Parser_Tactic_tacticSeqBracketed_formatter___closed__7, &l_Lean_Parser_Tactic_tacticSeqBracketed_formatter___closed__7_once, _init_l_Lean_Parser_Tactic_tacticSeqBracketed_formatter___closed__7);
v___x_424_ = ((lean_object*)(l_Lean_Parser_Tactic_tacticSeqBracketed_formatter___closed__1));
v___x_425_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed), 7, 2);
lean_closure_set(v___x_425_, 0, v___x_424_);
lean_closure_set(v___x_425_, 1, v___x_423_);
return v___x_425_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_tacticSeqBracketed_formatter___closed__9(void){
_start:
{
lean_object* v___x_426_; lean_object* v___x_427_; lean_object* v___x_428_; lean_object* v___x_429_; 
v___x_426_ = lean_obj_once(&l_Lean_Parser_Tactic_tacticSeqBracketed_formatter___closed__8, &l_Lean_Parser_Tactic_tacticSeqBracketed_formatter___closed__8_once, _init_l_Lean_Parser_Tactic_tacticSeqBracketed_formatter___closed__8);
v___x_427_ = lean_unsigned_to_nat(1024u);
v___x_428_ = ((lean_object*)(l_Lean_Parser_Tactic_tacticSeqBracketed___closed__1));
v___x_429_ = lean_alloc_closure((void*)(l_Lean_Parser_leadingNode_formatter___boxed), 8, 3);
lean_closure_set(v___x_429_, 0, v___x_428_);
lean_closure_set(v___x_429_, 1, v___x_427_);
lean_closure_set(v___x_429_, 2, v___x_426_);
return v___x_429_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_tacticSeqBracketed_formatter(lean_object* v_a_430_, lean_object* v_a_431_, lean_object* v_a_432_, lean_object* v_a_433_){
_start:
{
lean_object* v___x_435_; lean_object* v___x_436_; lean_object* v___x_437_; 
v___x_435_ = ((lean_object*)(l_Lean_Parser_Tactic_tacticSeqBracketed_formatter___closed__0));
v___x_436_ = lean_obj_once(&l_Lean_Parser_Tactic_tacticSeqBracketed_formatter___closed__9, &l_Lean_Parser_Tactic_tacticSeqBracketed_formatter___closed__9_once, _init_l_Lean_Parser_Tactic_tacticSeqBracketed_formatter___closed__9);
v___x_437_ = l_Lean_PrettyPrinter_Formatter_orelse_formatter(v___x_435_, v___x_436_, v_a_430_, v_a_431_, v_a_432_, v_a_433_);
return v___x_437_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_tacticSeqBracketed_formatter___boxed(lean_object* v_a_438_, lean_object* v_a_439_, lean_object* v_a_440_, lean_object* v_a_441_, lean_object* v_a_442_){
_start:
{
lean_object* v_res_443_; 
v_res_443_ = l_Lean_Parser_Tactic_tacticSeqBracketed_formatter(v_a_438_, v_a_439_, v_a_440_, v_a_441_);
lean_dec(v_a_441_);
lean_dec_ref(v_a_440_);
lean_dec(v_a_439_);
lean_dec_ref(v_a_438_);
return v_res_443_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeq___regBuiltin_Lean_Parser_Tactic_tacticSeqBracketed_formatter__5(){
_start:
{
lean_object* v___x_452_; lean_object* v___x_453_; lean_object* v___x_454_; lean_object* v___x_455_; lean_object* v___x_456_; 
v___x_452_ = l_Lean_PrettyPrinter_formatterAttribute;
v___x_453_ = ((lean_object*)(l_Lean_Parser_Tactic_tacticSeqBracketed___closed__1));
v___x_454_ = ((lean_object*)(l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeq___regBuiltin_Lean_Parser_Tactic_tacticSeqBracketed_formatter__5___closed__1));
v___x_455_ = lean_alloc_closure((void*)(l_Lean_Parser_Tactic_tacticSeqBracketed_formatter___boxed), 5, 0);
v___x_456_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_452_, v___x_453_, v___x_454_, v___x_455_);
return v___x_456_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeq___regBuiltin_Lean_Parser_Tactic_tacticSeqBracketed_formatter__5___boxed(lean_object* v_a_457_){
_start:
{
lean_object* v_res_458_; 
v_res_458_ = l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeq___regBuiltin_Lean_Parser_Tactic_tacticSeqBracketed_formatter__5();
return v_res_458_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_tacticSeq1Indented_formatter(lean_object* v_a_472_, lean_object* v_a_473_, lean_object* v_a_474_, lean_object* v_a_475_){
_start:
{
lean_object* v___x_477_; lean_object* v___x_478_; lean_object* v___x_479_; 
v___x_477_ = ((lean_object*)(l_Lean_Parser_Tactic_tacticSeq1Indented_formatter___closed__0));
v___x_478_ = ((lean_object*)(l_Lean_Parser_Tactic_tacticSeq1Indented_formatter___closed__2));
v___x_479_ = l_Lean_PrettyPrinter_Formatter_orelse_formatter(v___x_477_, v___x_478_, v_a_472_, v_a_473_, v_a_474_, v_a_475_);
return v___x_479_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_tacticSeq1Indented_formatter___boxed(lean_object* v_a_480_, lean_object* v_a_481_, lean_object* v_a_482_, lean_object* v_a_483_, lean_object* v_a_484_){
_start:
{
lean_object* v_res_485_; 
v_res_485_ = l_Lean_Parser_Tactic_tacticSeq1Indented_formatter(v_a_480_, v_a_481_, v_a_482_, v_a_483_);
lean_dec(v_a_483_);
lean_dec_ref(v_a_482_);
lean_dec(v_a_481_);
lean_dec_ref(v_a_480_);
return v_res_485_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeq___regBuiltin_Lean_Parser_Tactic_tacticSeq1Indented_formatter__9(){
_start:
{
lean_object* v___x_493_; lean_object* v___x_494_; lean_object* v___x_495_; lean_object* v___x_496_; lean_object* v___x_497_; 
v___x_493_ = l_Lean_PrettyPrinter_formatterAttribute;
v___x_494_ = ((lean_object*)(l_Lean_Parser_Tactic_tacticSeq1Indented___closed__1));
v___x_495_ = ((lean_object*)(l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeq___regBuiltin_Lean_Parser_Tactic_tacticSeq1Indented_formatter__9___closed__0));
v___x_496_ = lean_alloc_closure((void*)(l_Lean_Parser_Tactic_tacticSeq1Indented_formatter___boxed), 5, 0);
v___x_497_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_493_, v___x_494_, v___x_495_, v___x_496_);
return v___x_497_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeq___regBuiltin_Lean_Parser_Tactic_tacticSeq1Indented_formatter__9___boxed(lean_object* v_a_498_){
_start:
{
lean_object* v_res_499_; 
v_res_499_ = l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeq___regBuiltin_Lean_Parser_Tactic_tacticSeq1Indented_formatter__9();
return v_res_499_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_tacticSeq_formatter___closed__3(void){
_start:
{
lean_object* v___x_513_; lean_object* v___x_514_; lean_object* v___x_515_; 
v___x_513_ = lean_alloc_closure((void*)(l_Lean_Parser_Tactic_tacticSeq1Indented_formatter___boxed), 5, 0);
v___x_514_ = lean_alloc_closure((void*)(l_Lean_Parser_Tactic_tacticSeqBracketed_formatter___boxed), 5, 0);
v___x_515_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_orelse_formatter___boxed), 7, 2);
lean_closure_set(v___x_515_, 0, v___x_514_);
lean_closure_set(v___x_515_, 1, v___x_513_);
return v___x_515_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_tacticSeq_formatter___closed__4(void){
_start:
{
lean_object* v___x_516_; lean_object* v___x_517_; lean_object* v___x_518_; lean_object* v___x_519_; 
v___x_516_ = lean_obj_once(&l_Lean_Parser_Tactic_tacticSeq_formatter___closed__3, &l_Lean_Parser_Tactic_tacticSeq_formatter___closed__3_once, _init_l_Lean_Parser_Tactic_tacticSeq_formatter___closed__3);
v___x_517_ = lean_unsigned_to_nat(1024u);
v___x_518_ = ((lean_object*)(l_Lean_Parser_Tactic_tacticSeq_formatter___closed__1));
v___x_519_ = lean_alloc_closure((void*)(l_Lean_Parser_leadingNode_formatter___boxed), 8, 3);
lean_closure_set(v___x_519_, 0, v___x_518_);
lean_closure_set(v___x_519_, 1, v___x_517_);
lean_closure_set(v___x_519_, 2, v___x_516_);
return v___x_519_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_tacticSeq_formatter(lean_object* v_a_520_, lean_object* v_a_521_, lean_object* v_a_522_, lean_object* v_a_523_){
_start:
{
lean_object* v___x_525_; lean_object* v___x_526_; lean_object* v___x_527_; 
v___x_525_ = ((lean_object*)(l_Lean_Parser_Tactic_tacticSeq_formatter___closed__2));
v___x_526_ = lean_obj_once(&l_Lean_Parser_Tactic_tacticSeq_formatter___closed__4, &l_Lean_Parser_Tactic_tacticSeq_formatter___closed__4_once, _init_l_Lean_Parser_Tactic_tacticSeq_formatter___closed__4);
v___x_527_ = l_Lean_PrettyPrinter_Formatter_orelse_formatter(v___x_525_, v___x_526_, v_a_520_, v_a_521_, v_a_522_, v_a_523_);
return v___x_527_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_tacticSeq_formatter___boxed(lean_object* v_a_528_, lean_object* v_a_529_, lean_object* v_a_530_, lean_object* v_a_531_, lean_object* v_a_532_){
_start:
{
lean_object* v_res_533_; 
v_res_533_ = l_Lean_Parser_Tactic_tacticSeq_formatter(v_a_528_, v_a_529_, v_a_530_, v_a_531_);
lean_dec(v_a_531_);
lean_dec_ref(v_a_530_);
lean_dec(v_a_529_);
lean_dec_ref(v_a_528_);
return v_res_533_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeq___regBuiltin_Lean_Parser_Tactic_tacticSeq_formatter__13(){
_start:
{
lean_object* v___x_541_; lean_object* v___x_542_; lean_object* v___x_543_; lean_object* v___x_544_; lean_object* v___x_545_; 
v___x_541_ = l_Lean_PrettyPrinter_formatterAttribute;
v___x_542_ = ((lean_object*)(l_Lean_Parser_Tactic_tacticSeq_formatter___closed__1));
v___x_543_ = ((lean_object*)(l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeq___regBuiltin_Lean_Parser_Tactic_tacticSeq_formatter__13___closed__0));
v___x_544_ = lean_alloc_closure((void*)(l_Lean_Parser_Tactic_tacticSeq_formatter___boxed), 5, 0);
v___x_545_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_541_, v___x_542_, v___x_543_, v___x_544_);
return v___x_545_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeq___regBuiltin_Lean_Parser_Tactic_tacticSeq_formatter__13___boxed(lean_object* v_a_546_){
_start:
{
lean_object* v_res_547_; 
v_res_547_ = l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeq___regBuiltin_Lean_Parser_Tactic_tacticSeq_formatter__13();
return v_res_547_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_tacticParser_parenthesizer(lean_object* v_rbp_548_, lean_object* v_a_549_, lean_object* v_a_550_, lean_object* v_a_551_, lean_object* v_a_552_){
_start:
{
lean_object* v___x_554_; lean_object* v___x_555_; 
v___x_554_ = ((lean_object*)(l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__35_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2_));
v___x_555_ = l_Lean_PrettyPrinter_Parenthesizer_categoryParser_parenthesizer(v___x_554_, v_rbp_548_, v_a_549_, v_a_550_, v_a_551_, v_a_552_);
return v___x_555_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_tacticParser_parenthesizer___boxed(lean_object* v_rbp_556_, lean_object* v_a_557_, lean_object* v_a_558_, lean_object* v_a_559_, lean_object* v_a_560_, lean_object* v_a_561_){
_start:
{
lean_object* v_res_562_; 
v_res_562_ = l_Lean_Parser_tacticParser_parenthesizer(v_rbp_556_, v_a_557_, v_a_558_, v_a_559_, v_a_560_);
lean_dec(v_a_560_);
lean_dec_ref(v_a_559_);
lean_dec(v_a_558_);
lean_dec_ref(v_a_557_);
return v_res_562_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_tacticSeqBracketed_parenthesizer(lean_object* v_a_594_, lean_object* v_a_595_, lean_object* v_a_596_, lean_object* v_a_597_){
_start:
{
lean_object* v___x_599_; lean_object* v___x_600_; lean_object* v___x_601_; 
v___x_599_ = ((lean_object*)(l_Lean_Parser_Tactic_tacticSeqBracketed_parenthesizer___closed__0));
v___x_600_ = ((lean_object*)(l_Lean_Parser_Tactic_tacticSeqBracketed_parenthesizer___closed__10));
v___x_601_ = l_Lean_PrettyPrinter_Parenthesizer_withAntiquot_parenthesizer(v___x_599_, v___x_600_, v_a_594_, v_a_595_, v_a_596_, v_a_597_);
return v___x_601_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_tacticSeqBracketed_parenthesizer___boxed(lean_object* v_a_602_, lean_object* v_a_603_, lean_object* v_a_604_, lean_object* v_a_605_, lean_object* v_a_606_){
_start:
{
lean_object* v_res_607_; 
v_res_607_ = l_Lean_Parser_Tactic_tacticSeqBracketed_parenthesizer(v_a_602_, v_a_603_, v_a_604_, v_a_605_);
lean_dec(v_a_605_);
lean_dec_ref(v_a_604_);
lean_dec(v_a_603_);
lean_dec_ref(v_a_602_);
return v_res_607_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeq___regBuiltin_Lean_Parser_Tactic_tacticSeqBracketed_parenthesizer__19(){
_start:
{
lean_object* v___x_616_; lean_object* v___x_617_; lean_object* v___x_618_; lean_object* v___x_619_; lean_object* v___x_620_; 
v___x_616_ = l_Lean_PrettyPrinter_parenthesizerAttribute;
v___x_617_ = ((lean_object*)(l_Lean_Parser_Tactic_tacticSeqBracketed___closed__1));
v___x_618_ = ((lean_object*)(l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeq___regBuiltin_Lean_Parser_Tactic_tacticSeqBracketed_parenthesizer__19___closed__1));
v___x_619_ = lean_alloc_closure((void*)(l_Lean_Parser_Tactic_tacticSeqBracketed_parenthesizer___boxed), 5, 0);
v___x_620_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_616_, v___x_617_, v___x_618_, v___x_619_);
return v___x_620_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeq___regBuiltin_Lean_Parser_Tactic_tacticSeqBracketed_parenthesizer__19___boxed(lean_object* v_a_621_){
_start:
{
lean_object* v_res_622_; 
v_res_622_ = l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeq___regBuiltin_Lean_Parser_Tactic_tacticSeqBracketed_parenthesizer__19();
return v_res_622_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_tacticSeq1Indented_parenthesizer(lean_object* v_a_636_, lean_object* v_a_637_, lean_object* v_a_638_, lean_object* v_a_639_){
_start:
{
lean_object* v___x_641_; lean_object* v___x_642_; lean_object* v___x_643_; 
v___x_641_ = ((lean_object*)(l_Lean_Parser_Tactic_tacticSeq1Indented_parenthesizer___closed__0));
v___x_642_ = ((lean_object*)(l_Lean_Parser_Tactic_tacticSeq1Indented_parenthesizer___closed__2));
v___x_643_ = l_Lean_PrettyPrinter_Parenthesizer_withAntiquot_parenthesizer(v___x_641_, v___x_642_, v_a_636_, v_a_637_, v_a_638_, v_a_639_);
return v___x_643_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_tacticSeq1Indented_parenthesizer___boxed(lean_object* v_a_644_, lean_object* v_a_645_, lean_object* v_a_646_, lean_object* v_a_647_, lean_object* v_a_648_){
_start:
{
lean_object* v_res_649_; 
v_res_649_ = l_Lean_Parser_Tactic_tacticSeq1Indented_parenthesizer(v_a_644_, v_a_645_, v_a_646_, v_a_647_);
lean_dec(v_a_647_);
lean_dec_ref(v_a_646_);
lean_dec(v_a_645_);
lean_dec_ref(v_a_644_);
return v_res_649_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeq___regBuiltin_Lean_Parser_Tactic_tacticSeq1Indented_parenthesizer__23(){
_start:
{
lean_object* v___x_657_; lean_object* v___x_658_; lean_object* v___x_659_; lean_object* v___x_660_; lean_object* v___x_661_; 
v___x_657_ = l_Lean_PrettyPrinter_parenthesizerAttribute;
v___x_658_ = ((lean_object*)(l_Lean_Parser_Tactic_tacticSeq1Indented___closed__1));
v___x_659_ = ((lean_object*)(l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeq___regBuiltin_Lean_Parser_Tactic_tacticSeq1Indented_parenthesizer__23___closed__0));
v___x_660_ = lean_alloc_closure((void*)(l_Lean_Parser_Tactic_tacticSeq1Indented_parenthesizer___boxed), 5, 0);
v___x_661_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_657_, v___x_658_, v___x_659_, v___x_660_);
return v___x_661_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeq___regBuiltin_Lean_Parser_Tactic_tacticSeq1Indented_parenthesizer__23___boxed(lean_object* v_a_662_){
_start:
{
lean_object* v_res_663_; 
v_res_663_ = l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeq___regBuiltin_Lean_Parser_Tactic_tacticSeq1Indented_parenthesizer__23();
return v_res_663_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_tacticSeq_parenthesizer___closed__1(void){
_start:
{
lean_object* v___x_671_; lean_object* v___x_672_; lean_object* v___x_673_; 
v___x_671_ = lean_alloc_closure((void*)(l_Lean_Parser_Tactic_tacticSeq1Indented_parenthesizer___boxed), 5, 0);
v___x_672_ = lean_alloc_closure((void*)(l_Lean_Parser_Tactic_tacticSeqBracketed_parenthesizer___boxed), 5, 0);
v___x_673_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_orelse_parenthesizer___boxed), 7, 2);
lean_closure_set(v___x_673_, 0, v___x_672_);
lean_closure_set(v___x_673_, 1, v___x_671_);
return v___x_673_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_tacticSeq_parenthesizer___closed__2(void){
_start:
{
lean_object* v___x_674_; lean_object* v___x_675_; lean_object* v___x_676_; lean_object* v___x_677_; 
v___x_674_ = lean_obj_once(&l_Lean_Parser_Tactic_tacticSeq_parenthesizer___closed__1, &l_Lean_Parser_Tactic_tacticSeq_parenthesizer___closed__1_once, _init_l_Lean_Parser_Tactic_tacticSeq_parenthesizer___closed__1);
v___x_675_ = lean_unsigned_to_nat(1024u);
v___x_676_ = ((lean_object*)(l_Lean_Parser_Tactic_tacticSeq_formatter___closed__1));
v___x_677_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_leadingNode_parenthesizer___boxed), 8, 3);
lean_closure_set(v___x_677_, 0, v___x_676_);
lean_closure_set(v___x_677_, 1, v___x_675_);
lean_closure_set(v___x_677_, 2, v___x_674_);
return v___x_677_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_tacticSeq_parenthesizer(lean_object* v_a_678_, lean_object* v_a_679_, lean_object* v_a_680_, lean_object* v_a_681_){
_start:
{
lean_object* v___x_683_; lean_object* v___x_684_; lean_object* v___x_685_; 
v___x_683_ = ((lean_object*)(l_Lean_Parser_Tactic_tacticSeq_parenthesizer___closed__0));
v___x_684_ = lean_obj_once(&l_Lean_Parser_Tactic_tacticSeq_parenthesizer___closed__2, &l_Lean_Parser_Tactic_tacticSeq_parenthesizer___closed__2_once, _init_l_Lean_Parser_Tactic_tacticSeq_parenthesizer___closed__2);
v___x_685_ = l_Lean_PrettyPrinter_Parenthesizer_withAntiquot_parenthesizer(v___x_683_, v___x_684_, v_a_678_, v_a_679_, v_a_680_, v_a_681_);
return v___x_685_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_tacticSeq_parenthesizer___boxed(lean_object* v_a_686_, lean_object* v_a_687_, lean_object* v_a_688_, lean_object* v_a_689_, lean_object* v_a_690_){
_start:
{
lean_object* v_res_691_; 
v_res_691_ = l_Lean_Parser_Tactic_tacticSeq_parenthesizer(v_a_686_, v_a_687_, v_a_688_, v_a_689_);
lean_dec(v_a_689_);
lean_dec_ref(v_a_688_);
lean_dec(v_a_687_);
lean_dec_ref(v_a_686_);
return v_res_691_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeq___regBuiltin_Lean_Parser_Tactic_tacticSeq_parenthesizer__27(){
_start:
{
lean_object* v___x_699_; lean_object* v___x_700_; lean_object* v___x_701_; lean_object* v___x_702_; lean_object* v___x_703_; 
v___x_699_ = l_Lean_PrettyPrinter_parenthesizerAttribute;
v___x_700_ = ((lean_object*)(l_Lean_Parser_Tactic_tacticSeq_formatter___closed__1));
v___x_701_ = ((lean_object*)(l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeq___regBuiltin_Lean_Parser_Tactic_tacticSeq_parenthesizer__27___closed__0));
v___x_702_ = lean_alloc_closure((void*)(l_Lean_Parser_Tactic_tacticSeq_parenthesizer___boxed), 5, 0);
v___x_703_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_699_, v___x_700_, v___x_701_, v___x_702_);
return v___x_703_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeq___regBuiltin_Lean_Parser_Tactic_tacticSeq_parenthesizer__27___boxed(lean_object* v_a_704_){
_start:
{
lean_object* v_res_705_; 
v_res_705_ = l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeq___regBuiltin_Lean_Parser_Tactic_tacticSeq_parenthesizer__27();
return v_res_705_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_tacticSeq___closed__0(void){
_start:
{
uint8_t v___x_706_; uint8_t v___x_707_; lean_object* v___x_708_; lean_object* v___x_709_; lean_object* v___x_710_; 
v___x_706_ = 0;
v___x_707_ = 1;
v___x_708_ = ((lean_object*)(l_Lean_Parser_Tactic_tacticSeq_formatter___closed__1));
v___x_709_ = ((lean_object*)(l_Lean_Parser_Tactic_tacticSeq_formatter___closed__0));
v___x_710_ = l_Lean_Parser_mkAntiquot(v___x_709_, v___x_708_, v___x_707_, v___x_706_);
return v___x_710_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_tacticSeq___closed__1(void){
_start:
{
lean_object* v___x_711_; lean_object* v___x_712_; lean_object* v___x_713_; 
v___x_711_ = l_Lean_Parser_Tactic_tacticSeq1Indented;
v___x_712_ = l_Lean_Parser_Tactic_tacticSeqBracketed;
v___x_713_ = l_Lean_Parser_orelse(v___x_712_, v___x_711_);
return v___x_713_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_tacticSeq___closed__2(void){
_start:
{
lean_object* v___x_714_; lean_object* v___x_715_; lean_object* v___x_716_; lean_object* v___x_717_; 
v___x_714_ = lean_obj_once(&l_Lean_Parser_Tactic_tacticSeq___closed__1, &l_Lean_Parser_Tactic_tacticSeq___closed__1_once, _init_l_Lean_Parser_Tactic_tacticSeq___closed__1);
v___x_715_ = lean_unsigned_to_nat(1024u);
v___x_716_ = ((lean_object*)(l_Lean_Parser_Tactic_tacticSeq_formatter___closed__1));
v___x_717_ = l_Lean_Parser_leadingNode(v___x_716_, v___x_715_, v___x_714_);
return v___x_717_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_tacticSeq___closed__3(void){
_start:
{
lean_object* v___x_718_; lean_object* v___x_719_; lean_object* v___x_720_; 
v___x_718_ = lean_obj_once(&l_Lean_Parser_Tactic_tacticSeq___closed__2, &l_Lean_Parser_Tactic_tacticSeq___closed__2_once, _init_l_Lean_Parser_Tactic_tacticSeq___closed__2);
v___x_719_ = lean_obj_once(&l_Lean_Parser_Tactic_tacticSeq___closed__0, &l_Lean_Parser_Tactic_tacticSeq___closed__0_once, _init_l_Lean_Parser_Tactic_tacticSeq___closed__0);
v___x_720_ = l_Lean_Parser_withAntiquot(v___x_719_, v___x_718_);
return v___x_720_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_tacticSeq___closed__4(void){
_start:
{
lean_object* v___x_721_; lean_object* v___x_722_; lean_object* v___x_723_; 
v___x_721_ = lean_obj_once(&l_Lean_Parser_Tactic_tacticSeq___closed__3, &l_Lean_Parser_Tactic_tacticSeq___closed__3_once, _init_l_Lean_Parser_Tactic_tacticSeq___closed__3);
v___x_722_ = ((lean_object*)(l_Lean_Parser_Tactic_tacticSeq_formatter___closed__1));
v___x_723_ = l_Lean_Parser_withCache(v___x_722_, v___x_721_);
return v___x_723_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_tacticSeq(void){
_start:
{
lean_object* v___x_724_; 
v___x_724_ = lean_obj_once(&l_Lean_Parser_Tactic_tacticSeq___closed__4, &l_Lean_Parser_Tactic_tacticSeq___closed__4_once, _init_l_Lean_Parser_Tactic_tacticSeq___closed__4);
return v___x_724_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeq___regBuiltin_Lean_Parser_Tactic_tacticSeq_docString__1(){
_start:
{
lean_object* v___x_727_; lean_object* v___x_728_; lean_object* v___x_729_; 
v___x_727_ = ((lean_object*)(l_Lean_Parser_Tactic_tacticSeq_formatter___closed__1));
v___x_728_ = ((lean_object*)(l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeq___regBuiltin_Lean_Parser_Tactic_tacticSeq_docString__1___closed__0));
v___x_729_ = l_Lean_addBuiltinDocString(v___x_727_, v___x_728_);
return v___x_729_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeq___regBuiltin_Lean_Parser_Tactic_tacticSeq_docString__1___boxed(lean_object* v_a_730_){
_start:
{
lean_object* v_res_731_; 
v_res_731_ = l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeq___regBuiltin_Lean_Parser_Tactic_tacticSeq_docString__1();
return v_res_731_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_tacticSeqIndentGt_formatter___closed__1(void){
_start:
{
lean_object* v___x_733_; lean_object* v___x_734_; lean_object* v___x_735_; 
v___x_733_ = lean_alloc_closure((void*)(l_Lean_Parser_Tactic_tacticSeq1Indented_formatter___boxed), 5, 0);
v___x_734_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_checkColGt_formatter___boxed), 5, 0);
v___x_735_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed), 7, 2);
lean_closure_set(v___x_735_, 0, v___x_734_);
lean_closure_set(v___x_735_, 1, v___x_733_);
return v___x_735_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_tacticSeqIndentGt_formatter___closed__3(void){
_start:
{
lean_object* v___x_739_; lean_object* v___x_740_; lean_object* v___x_741_; 
v___x_739_ = ((lean_object*)(l_Lean_Parser_Tactic_tacticSeqIndentGt_formatter___closed__2));
v___x_740_ = lean_obj_once(&l_Lean_Parser_Tactic_tacticSeqIndentGt_formatter___closed__1, &l_Lean_Parser_Tactic_tacticSeqIndentGt_formatter___closed__1_once, _init_l_Lean_Parser_Tactic_tacticSeqIndentGt_formatter___closed__1);
v___x_741_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_orelse_formatter___boxed), 7, 2);
lean_closure_set(v___x_741_, 0, v___x_740_);
lean_closure_set(v___x_741_, 1, v___x_739_);
return v___x_741_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_tacticSeqIndentGt_formatter___closed__4(void){
_start:
{
lean_object* v___x_742_; lean_object* v___x_743_; lean_object* v___x_744_; 
v___x_742_ = lean_obj_once(&l_Lean_Parser_Tactic_tacticSeqIndentGt_formatter___closed__3, &l_Lean_Parser_Tactic_tacticSeqIndentGt_formatter___closed__3_once, _init_l_Lean_Parser_Tactic_tacticSeqIndentGt_formatter___closed__3);
v___x_743_ = lean_alloc_closure((void*)(l_Lean_Parser_Tactic_tacticSeqBracketed_formatter___boxed), 5, 0);
v___x_744_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_orelse_formatter___boxed), 7, 2);
lean_closure_set(v___x_744_, 0, v___x_743_);
lean_closure_set(v___x_744_, 1, v___x_742_);
return v___x_744_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_tacticSeqIndentGt_formatter___closed__5(void){
_start:
{
lean_object* v___x_745_; lean_object* v___x_746_; lean_object* v___x_747_; 
v___x_745_ = lean_obj_once(&l_Lean_Parser_Tactic_tacticSeqIndentGt_formatter___closed__4, &l_Lean_Parser_Tactic_tacticSeqIndentGt_formatter___closed__4_once, _init_l_Lean_Parser_Tactic_tacticSeqIndentGt_formatter___closed__4);
v___x_746_ = ((lean_object*)(l_Lean_Parser_Tactic_tacticSeq_formatter___closed__1));
v___x_747_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_node_formatter___boxed), 7, 2);
lean_closure_set(v___x_747_, 0, v___x_746_);
lean_closure_set(v___x_747_, 1, v___x_745_);
return v___x_747_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_tacticSeqIndentGt_formatter(lean_object* v_a_748_, lean_object* v_a_749_, lean_object* v_a_750_, lean_object* v_a_751_){
_start:
{
lean_object* v___x_753_; lean_object* v___x_754_; lean_object* v___x_755_; 
v___x_753_ = ((lean_object*)(l_Lean_Parser_Tactic_tacticSeq_formatter___closed__2));
v___x_754_ = lean_obj_once(&l_Lean_Parser_Tactic_tacticSeqIndentGt_formatter___closed__5, &l_Lean_Parser_Tactic_tacticSeqIndentGt_formatter___closed__5_once, _init_l_Lean_Parser_Tactic_tacticSeqIndentGt_formatter___closed__5);
v___x_755_ = l_Lean_PrettyPrinter_Formatter_orelse_formatter(v___x_753_, v___x_754_, v_a_748_, v_a_749_, v_a_750_, v_a_751_);
return v___x_755_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_tacticSeqIndentGt_formatter___boxed(lean_object* v_a_756_, lean_object* v_a_757_, lean_object* v_a_758_, lean_object* v_a_759_, lean_object* v_a_760_){
_start:
{
lean_object* v_res_761_; 
v_res_761_ = l_Lean_Parser_Tactic_tacticSeqIndentGt_formatter(v_a_756_, v_a_757_, v_a_758_, v_a_759_);
lean_dec(v_a_759_);
lean_dec_ref(v_a_758_);
lean_dec(v_a_757_);
lean_dec_ref(v_a_756_);
return v_res_761_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeqIndentGt___regBuiltin_Lean_Parser_Tactic_tacticSeqIndentGt_formatter__3(){
_start:
{
lean_object* v___x_770_; lean_object* v___x_771_; lean_object* v___x_772_; lean_object* v___x_773_; lean_object* v___x_774_; 
v___x_770_ = l_Lean_PrettyPrinter_formatterAttribute;
v___x_771_ = ((lean_object*)(l_Lean_Parser_Tactic_tacticSeq_formatter___closed__1));
v___x_772_ = ((lean_object*)(l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeqIndentGt___regBuiltin_Lean_Parser_Tactic_tacticSeqIndentGt_formatter__3___closed__1));
v___x_773_ = lean_alloc_closure((void*)(l_Lean_Parser_Tactic_tacticSeqIndentGt_formatter___boxed), 5, 0);
v___x_774_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_770_, v___x_771_, v___x_772_, v___x_773_);
return v___x_774_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeqIndentGt___regBuiltin_Lean_Parser_Tactic_tacticSeqIndentGt_formatter__3___boxed(lean_object* v_a_775_){
_start:
{
lean_object* v_res_776_; 
v_res_776_ = l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeqIndentGt___regBuiltin_Lean_Parser_Tactic_tacticSeqIndentGt_formatter__3();
return v_res_776_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_tacticSeqIndentGt_parenthesizer___closed__1(void){
_start:
{
lean_object* v___x_778_; lean_object* v___x_779_; lean_object* v___x_780_; 
v___x_778_ = lean_alloc_closure((void*)(l_Lean_Parser_Tactic_tacticSeq1Indented_parenthesizer___boxed), 5, 0);
v___x_779_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_checkColGt_parenthesizer___boxed), 5, 0);
v___x_780_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed), 7, 2);
lean_closure_set(v___x_780_, 0, v___x_779_);
lean_closure_set(v___x_780_, 1, v___x_778_);
return v___x_780_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_tacticSeqIndentGt_parenthesizer___closed__3(void){
_start:
{
lean_object* v___x_784_; lean_object* v___x_785_; lean_object* v___x_786_; 
v___x_784_ = ((lean_object*)(l_Lean_Parser_Tactic_tacticSeqIndentGt_parenthesizer___closed__2));
v___x_785_ = lean_obj_once(&l_Lean_Parser_Tactic_tacticSeqIndentGt_parenthesizer___closed__1, &l_Lean_Parser_Tactic_tacticSeqIndentGt_parenthesizer___closed__1_once, _init_l_Lean_Parser_Tactic_tacticSeqIndentGt_parenthesizer___closed__1);
v___x_786_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_orelse_parenthesizer___boxed), 7, 2);
lean_closure_set(v___x_786_, 0, v___x_785_);
lean_closure_set(v___x_786_, 1, v___x_784_);
return v___x_786_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_tacticSeqIndentGt_parenthesizer___closed__4(void){
_start:
{
lean_object* v___x_787_; lean_object* v___x_788_; lean_object* v___x_789_; 
v___x_787_ = lean_obj_once(&l_Lean_Parser_Tactic_tacticSeqIndentGt_parenthesizer___closed__3, &l_Lean_Parser_Tactic_tacticSeqIndentGt_parenthesizer___closed__3_once, _init_l_Lean_Parser_Tactic_tacticSeqIndentGt_parenthesizer___closed__3);
v___x_788_ = lean_alloc_closure((void*)(l_Lean_Parser_Tactic_tacticSeqBracketed_parenthesizer___boxed), 5, 0);
v___x_789_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_orelse_parenthesizer___boxed), 7, 2);
lean_closure_set(v___x_789_, 0, v___x_788_);
lean_closure_set(v___x_789_, 1, v___x_787_);
return v___x_789_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_tacticSeqIndentGt_parenthesizer___closed__5(void){
_start:
{
lean_object* v___x_790_; lean_object* v___x_791_; lean_object* v___x_792_; 
v___x_790_ = lean_obj_once(&l_Lean_Parser_Tactic_tacticSeqIndentGt_parenthesizer___closed__4, &l_Lean_Parser_Tactic_tacticSeqIndentGt_parenthesizer___closed__4_once, _init_l_Lean_Parser_Tactic_tacticSeqIndentGt_parenthesizer___closed__4);
v___x_791_ = ((lean_object*)(l_Lean_Parser_Tactic_tacticSeq_formatter___closed__1));
v___x_792_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_node_parenthesizer___boxed), 7, 2);
lean_closure_set(v___x_792_, 0, v___x_791_);
lean_closure_set(v___x_792_, 1, v___x_790_);
return v___x_792_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_tacticSeqIndentGt_parenthesizer(lean_object* v_a_793_, lean_object* v_a_794_, lean_object* v_a_795_, lean_object* v_a_796_){
_start:
{
lean_object* v___x_798_; lean_object* v___x_799_; lean_object* v___x_800_; 
v___x_798_ = ((lean_object*)(l_Lean_Parser_Tactic_tacticSeq_parenthesizer___closed__0));
v___x_799_ = lean_obj_once(&l_Lean_Parser_Tactic_tacticSeqIndentGt_parenthesizer___closed__5, &l_Lean_Parser_Tactic_tacticSeqIndentGt_parenthesizer___closed__5_once, _init_l_Lean_Parser_Tactic_tacticSeqIndentGt_parenthesizer___closed__5);
v___x_800_ = l_Lean_PrettyPrinter_Parenthesizer_withAntiquot_parenthesizer(v___x_798_, v___x_799_, v_a_793_, v_a_794_, v_a_795_, v_a_796_);
return v___x_800_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_tacticSeqIndentGt_parenthesizer___boxed(lean_object* v_a_801_, lean_object* v_a_802_, lean_object* v_a_803_, lean_object* v_a_804_, lean_object* v_a_805_){
_start:
{
lean_object* v_res_806_; 
v_res_806_ = l_Lean_Parser_Tactic_tacticSeqIndentGt_parenthesizer(v_a_801_, v_a_802_, v_a_803_, v_a_804_);
lean_dec(v_a_804_);
lean_dec_ref(v_a_803_);
lean_dec(v_a_802_);
lean_dec_ref(v_a_801_);
return v_res_806_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeqIndentGt___regBuiltin_Lean_Parser_Tactic_tacticSeqIndentGt_parenthesizer__7(){
_start:
{
lean_object* v___x_814_; lean_object* v___x_815_; lean_object* v___x_816_; lean_object* v___x_817_; lean_object* v___x_818_; 
v___x_814_ = l_Lean_PrettyPrinter_parenthesizerAttribute;
v___x_815_ = ((lean_object*)(l_Lean_Parser_Tactic_tacticSeq_formatter___closed__1));
v___x_816_ = ((lean_object*)(l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeqIndentGt___regBuiltin_Lean_Parser_Tactic_tacticSeqIndentGt_parenthesizer__7___closed__0));
v___x_817_ = lean_alloc_closure((void*)(l_Lean_Parser_Tactic_tacticSeqIndentGt_parenthesizer___boxed), 5, 0);
v___x_818_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_814_, v___x_815_, v___x_816_, v___x_817_);
return v___x_818_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeqIndentGt___regBuiltin_Lean_Parser_Tactic_tacticSeqIndentGt_parenthesizer__7___boxed(lean_object* v_a_819_){
_start:
{
lean_object* v_res_820_; 
v_res_820_ = l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeqIndentGt___regBuiltin_Lean_Parser_Tactic_tacticSeqIndentGt_parenthesizer__7();
return v_res_820_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_tacticSeqIndentGt___closed__1(void){
_start:
{
lean_object* v___x_822_; lean_object* v___x_823_; 
v___x_822_ = ((lean_object*)(l_Lean_Parser_Tactic_tacticSeqIndentGt___closed__0));
v___x_823_ = l_Lean_Parser_checkColGt(v___x_822_);
return v___x_823_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_tacticSeqIndentGt___closed__2(void){
_start:
{
lean_object* v___x_824_; lean_object* v___x_825_; lean_object* v___x_826_; 
v___x_824_ = l_Lean_Parser_Tactic_tacticSeq1Indented;
v___x_825_ = lean_obj_once(&l_Lean_Parser_Tactic_tacticSeqIndentGt___closed__1, &l_Lean_Parser_Tactic_tacticSeqIndentGt___closed__1_once, _init_l_Lean_Parser_Tactic_tacticSeqIndentGt___closed__1);
v___x_826_ = l_Lean_Parser_andthen(v___x_825_, v___x_824_);
return v___x_826_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_tacticSeqIndentGt___closed__3(void){
_start:
{
lean_object* v___x_827_; lean_object* v___x_828_; lean_object* v___x_829_; 
v___x_827_ = l_Lean_Parser_pushNone;
v___x_828_ = ((lean_object*)(l_Lean_Parser_Tactic_tacticSeq1Indented___closed__1));
v___x_829_ = l_Lean_Parser_node(v___x_828_, v___x_827_);
return v___x_829_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_tacticSeqIndentGt___closed__4(void){
_start:
{
lean_object* v___x_830_; lean_object* v___x_831_; lean_object* v___x_832_; 
v___x_830_ = lean_obj_once(&l_Lean_Parser_Tactic_tacticSeqIndentGt___closed__3, &l_Lean_Parser_Tactic_tacticSeqIndentGt___closed__3_once, _init_l_Lean_Parser_Tactic_tacticSeqIndentGt___closed__3);
v___x_831_ = lean_obj_once(&l_Lean_Parser_Tactic_tacticSeqIndentGt___closed__2, &l_Lean_Parser_Tactic_tacticSeqIndentGt___closed__2_once, _init_l_Lean_Parser_Tactic_tacticSeqIndentGt___closed__2);
v___x_832_ = l_Lean_Parser_orelse(v___x_831_, v___x_830_);
return v___x_832_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_tacticSeqIndentGt___closed__5(void){
_start:
{
lean_object* v___x_833_; lean_object* v___x_834_; lean_object* v___x_835_; 
v___x_833_ = lean_obj_once(&l_Lean_Parser_Tactic_tacticSeqIndentGt___closed__4, &l_Lean_Parser_Tactic_tacticSeqIndentGt___closed__4_once, _init_l_Lean_Parser_Tactic_tacticSeqIndentGt___closed__4);
v___x_834_ = l_Lean_Parser_Tactic_tacticSeqBracketed;
v___x_835_ = l_Lean_Parser_orelse(v___x_834_, v___x_833_);
return v___x_835_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_tacticSeqIndentGt___closed__6(void){
_start:
{
lean_object* v___x_836_; lean_object* v___x_837_; lean_object* v___x_838_; 
v___x_836_ = lean_obj_once(&l_Lean_Parser_Tactic_tacticSeqIndentGt___closed__5, &l_Lean_Parser_Tactic_tacticSeqIndentGt___closed__5_once, _init_l_Lean_Parser_Tactic_tacticSeqIndentGt___closed__5);
v___x_837_ = ((lean_object*)(l_Lean_Parser_Tactic_tacticSeq_formatter___closed__1));
v___x_838_ = l_Lean_Parser_node(v___x_837_, v___x_836_);
return v___x_838_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_tacticSeqIndentGt___closed__7(void){
_start:
{
lean_object* v___x_839_; lean_object* v___x_840_; lean_object* v___x_841_; 
v___x_839_ = lean_obj_once(&l_Lean_Parser_Tactic_tacticSeqIndentGt___closed__6, &l_Lean_Parser_Tactic_tacticSeqIndentGt___closed__6_once, _init_l_Lean_Parser_Tactic_tacticSeqIndentGt___closed__6);
v___x_840_ = lean_obj_once(&l_Lean_Parser_Tactic_tacticSeq___closed__0, &l_Lean_Parser_Tactic_tacticSeq___closed__0_once, _init_l_Lean_Parser_Tactic_tacticSeq___closed__0);
v___x_841_ = l_Lean_Parser_withAntiquot(v___x_840_, v___x_839_);
return v___x_841_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_tacticSeqIndentGt(void){
_start:
{
lean_object* v___x_842_; 
v___x_842_ = lean_obj_once(&l_Lean_Parser_Tactic_tacticSeqIndentGt___closed__7, &l_Lean_Parser_Tactic_tacticSeqIndentGt___closed__7_once, _init_l_Lean_Parser_Tactic_tacticSeqIndentGt___closed__7);
return v___x_842_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeqIndentGt___regBuiltin_Lean_Parser_Tactic_tacticSeqIndentGt_docString__1(){
_start:
{
lean_object* v___x_850_; lean_object* v___x_851_; lean_object* v___x_852_; 
v___x_850_ = ((lean_object*)(l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeqIndentGt___regBuiltin_Lean_Parser_Tactic_tacticSeqIndentGt_docString__1___closed__0));
v___x_851_ = ((lean_object*)(l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeqIndentGt___regBuiltin_Lean_Parser_Tactic_tacticSeqIndentGt_docString__1___closed__1));
v___x_852_ = l_Lean_addBuiltinDocString(v___x_850_, v___x_851_);
return v___x_852_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeqIndentGt___regBuiltin_Lean_Parser_Tactic_tacticSeqIndentGt_docString__1___boxed(lean_object* v_a_853_){
_start:
{
lean_object* v_res_854_; 
v_res_854_ = l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeqIndentGt___regBuiltin_Lean_Parser_Tactic_tacticSeqIndentGt_docString__1();
return v_res_854_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_seq1_formatter(lean_object* v_a_870_, lean_object* v_a_871_, lean_object* v_a_872_, lean_object* v_a_873_){
_start:
{
lean_object* v___x_875_; lean_object* v___x_876_; lean_object* v___x_877_; 
v___x_875_ = ((lean_object*)(l_Lean_Parser_Tactic_seq1_formatter___closed__1));
v___x_876_ = ((lean_object*)(l_Lean_Parser_Tactic_seq1_formatter___closed__4));
v___x_877_ = l_Lean_PrettyPrinter_Formatter_node_formatter(v___x_875_, v___x_876_, v_a_870_, v_a_871_, v_a_872_, v_a_873_);
return v___x_877_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_seq1_formatter___boxed(lean_object* v_a_878_, lean_object* v_a_879_, lean_object* v_a_880_, lean_object* v_a_881_, lean_object* v_a_882_){
_start:
{
lean_object* v_res_883_; 
v_res_883_ = l_Lean_Parser_Tactic_seq1_formatter(v_a_878_, v_a_879_, v_a_880_, v_a_881_);
lean_dec(v_a_881_);
lean_dec_ref(v_a_880_);
lean_dec(v_a_879_);
lean_dec_ref(v_a_878_);
return v_res_883_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_seq1___regBuiltin_Lean_Parser_Tactic_seq1_formatter__3(){
_start:
{
lean_object* v___x_891_; lean_object* v___x_892_; lean_object* v___x_893_; lean_object* v___x_894_; lean_object* v___x_895_; 
v___x_891_ = l_Lean_PrettyPrinter_formatterAttribute;
v___x_892_ = ((lean_object*)(l_Lean_Parser_Tactic_seq1_formatter___closed__1));
v___x_893_ = ((lean_object*)(l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_seq1___regBuiltin_Lean_Parser_Tactic_seq1_formatter__3___closed__0));
v___x_894_ = lean_alloc_closure((void*)(l_Lean_Parser_Tactic_seq1_formatter___boxed), 5, 0);
v___x_895_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_891_, v___x_892_, v___x_893_, v___x_894_);
return v___x_895_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_seq1___regBuiltin_Lean_Parser_Tactic_seq1_formatter__3___boxed(lean_object* v_a_896_){
_start:
{
lean_object* v_res_897_; 
v_res_897_ = l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_seq1___regBuiltin_Lean_Parser_Tactic_seq1_formatter__3();
return v_res_897_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_seq1_parenthesizer(lean_object* v_a_906_, lean_object* v_a_907_, lean_object* v_a_908_, lean_object* v_a_909_){
_start:
{
lean_object* v___x_911_; lean_object* v___x_912_; lean_object* v___x_913_; 
v___x_911_ = ((lean_object*)(l_Lean_Parser_Tactic_seq1_formatter___closed__1));
v___x_912_ = ((lean_object*)(l_Lean_Parser_Tactic_seq1_parenthesizer___closed__1));
v___x_913_ = l_Lean_PrettyPrinter_Parenthesizer_node_parenthesizer(v___x_911_, v___x_912_, v_a_906_, v_a_907_, v_a_908_, v_a_909_);
return v___x_913_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_seq1_parenthesizer___boxed(lean_object* v_a_914_, lean_object* v_a_915_, lean_object* v_a_916_, lean_object* v_a_917_, lean_object* v_a_918_){
_start:
{
lean_object* v_res_919_; 
v_res_919_ = l_Lean_Parser_Tactic_seq1_parenthesizer(v_a_914_, v_a_915_, v_a_916_, v_a_917_);
lean_dec(v_a_917_);
lean_dec_ref(v_a_916_);
lean_dec(v_a_915_);
lean_dec_ref(v_a_914_);
return v_res_919_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_seq1___regBuiltin_Lean_Parser_Tactic_seq1_parenthesizer__7(){
_start:
{
lean_object* v___x_927_; lean_object* v___x_928_; lean_object* v___x_929_; lean_object* v___x_930_; lean_object* v___x_931_; 
v___x_927_ = l_Lean_PrettyPrinter_parenthesizerAttribute;
v___x_928_ = ((lean_object*)(l_Lean_Parser_Tactic_seq1_formatter___closed__1));
v___x_929_ = ((lean_object*)(l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_seq1___regBuiltin_Lean_Parser_Tactic_seq1_parenthesizer__7___closed__0));
v___x_930_ = lean_alloc_closure((void*)(l_Lean_Parser_Tactic_seq1_parenthesizer___boxed), 5, 0);
v___x_931_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_927_, v___x_928_, v___x_929_, v___x_930_);
return v___x_931_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_seq1___regBuiltin_Lean_Parser_Tactic_seq1_parenthesizer__7___boxed(lean_object* v_a_932_){
_start:
{
lean_object* v_res_933_; 
v_res_933_ = l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_seq1___regBuiltin_Lean_Parser_Tactic_seq1_parenthesizer__7();
return v_res_933_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_seq1___closed__0(void){
_start:
{
lean_object* v___x_934_; lean_object* v___x_935_; 
v___x_934_ = ((lean_object*)(l_Lean_Parser_Tactic_seq1_formatter___closed__2));
v___x_935_ = l_Lean_Parser_symbol(v___x_934_);
return v___x_935_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_seq1___closed__1(void){
_start:
{
uint8_t v___x_936_; lean_object* v___x_937_; lean_object* v___x_938_; lean_object* v___x_939_; lean_object* v___x_940_; 
v___x_936_ = 1;
v___x_937_ = lean_obj_once(&l_Lean_Parser_Tactic_seq1___closed__0, &l_Lean_Parser_Tactic_seq1___closed__0_once, _init_l_Lean_Parser_Tactic_seq1___closed__0);
v___x_938_ = ((lean_object*)(l_Lean_Parser_Tactic_seq1_formatter___closed__2));
v___x_939_ = lean_obj_once(&l_Lean_Parser_Tactic_tacticSeq1Indented___closed__3, &l_Lean_Parser_Tactic_tacticSeq1Indented___closed__3_once, _init_l_Lean_Parser_Tactic_tacticSeq1Indented___closed__3);
v___x_940_ = l_Lean_Parser_sepBy1(v___x_939_, v___x_938_, v___x_937_, v___x_936_);
return v___x_940_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_seq1___closed__2(void){
_start:
{
lean_object* v___x_941_; lean_object* v___x_942_; lean_object* v___x_943_; 
v___x_941_ = lean_obj_once(&l_Lean_Parser_Tactic_seq1___closed__1, &l_Lean_Parser_Tactic_seq1___closed__1_once, _init_l_Lean_Parser_Tactic_seq1___closed__1);
v___x_942_ = ((lean_object*)(l_Lean_Parser_Tactic_seq1_formatter___closed__1));
v___x_943_ = l_Lean_Parser_node(v___x_942_, v___x_941_);
return v___x_943_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_seq1(void){
_start:
{
lean_object* v___x_944_; 
v___x_944_ = lean_obj_once(&l_Lean_Parser_Tactic_seq1___closed__2, &l_Lean_Parser_Tactic_seq1___closed__2_once, _init_l_Lean_Parser_Tactic_seq1___closed__2);
return v___x_944_;
}
}
static lean_object* _init_l_Lean_Parser_Term_hole___closed__2(void){
_start:
{
uint8_t v___x_951_; uint8_t v___x_952_; lean_object* v___x_953_; lean_object* v___x_954_; lean_object* v___x_955_; 
v___x_951_ = 0;
v___x_952_ = 1;
v___x_953_ = ((lean_object*)(l_Lean_Parser_Term_hole___closed__1));
v___x_954_ = ((lean_object*)(l_Lean_Parser_Term_hole___closed__0));
v___x_955_ = l_Lean_Parser_mkAntiquot(v___x_954_, v___x_953_, v___x_952_, v___x_951_);
return v___x_955_;
}
}
static lean_object* _init_l_Lean_Parser_Term_hole___closed__4(void){
_start:
{
lean_object* v___x_957_; lean_object* v___x_958_; 
v___x_957_ = ((lean_object*)(l_Lean_Parser_Term_hole___closed__3));
v___x_958_ = l_Lean_Parser_symbol(v___x_957_);
return v___x_958_;
}
}
static lean_object* _init_l_Lean_Parser_Term_hole___closed__5(void){
_start:
{
lean_object* v___x_959_; lean_object* v___x_960_; lean_object* v___x_961_; lean_object* v___x_962_; 
v___x_959_ = lean_obj_once(&l_Lean_Parser_Term_hole___closed__4, &l_Lean_Parser_Term_hole___closed__4_once, _init_l_Lean_Parser_Term_hole___closed__4);
v___x_960_ = lean_unsigned_to_nat(1024u);
v___x_961_ = ((lean_object*)(l_Lean_Parser_Term_hole___closed__1));
v___x_962_ = l_Lean_Parser_leadingNode(v___x_961_, v___x_960_, v___x_959_);
return v___x_962_;
}
}
static lean_object* _init_l_Lean_Parser_Term_hole___closed__6(void){
_start:
{
lean_object* v___x_963_; lean_object* v___x_964_; lean_object* v___x_965_; 
v___x_963_ = lean_obj_once(&l_Lean_Parser_Term_hole___closed__5, &l_Lean_Parser_Term_hole___closed__5_once, _init_l_Lean_Parser_Term_hole___closed__5);
v___x_964_ = lean_obj_once(&l_Lean_Parser_Term_hole___closed__2, &l_Lean_Parser_Term_hole___closed__2_once, _init_l_Lean_Parser_Term_hole___closed__2);
v___x_965_ = l_Lean_Parser_withAntiquot(v___x_964_, v___x_963_);
return v___x_965_;
}
}
static lean_object* _init_l_Lean_Parser_Term_hole___closed__7(void){
_start:
{
lean_object* v___x_966_; lean_object* v___x_967_; lean_object* v___x_968_; 
v___x_966_ = lean_obj_once(&l_Lean_Parser_Term_hole___closed__6, &l_Lean_Parser_Term_hole___closed__6_once, _init_l_Lean_Parser_Term_hole___closed__6);
v___x_967_ = ((lean_object*)(l_Lean_Parser_Term_hole___closed__1));
v___x_968_ = l_Lean_Parser_withCache(v___x_967_, v___x_966_);
return v___x_968_;
}
}
static lean_object* _init_l_Lean_Parser_Term_hole(void){
_start:
{
lean_object* v___x_969_; 
v___x_969_ = lean_obj_once(&l_Lean_Parser_Term_hole___closed__7, &l_Lean_Parser_Term_hole___closed__7_once, _init_l_Lean_Parser_Term_hole___closed__7);
return v___x_969_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_hole___regBuiltin_Lean_Parser_Term_hole__1(){
_start:
{
lean_object* v___x_974_; lean_object* v___x_975_; lean_object* v___x_976_; lean_object* v___x_977_; lean_object* v___x_978_; 
v___x_974_ = ((lean_object*)(l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_hole___regBuiltin_Lean_Parser_Term_hole__1___closed__1));
v___x_975_ = ((lean_object*)(l_Lean_Parser_Term_hole___closed__1));
v___x_976_ = l_Lean_Parser_Term_hole;
v___x_977_ = lean_unsigned_to_nat(1000u);
v___x_978_ = l_Lean_Parser_addBuiltinLeadingParser(v___x_974_, v___x_975_, v___x_976_, v___x_977_);
return v___x_978_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_hole___regBuiltin_Lean_Parser_Term_hole__1___boxed(lean_object* v_a_979_){
_start:
{
lean_object* v_res_980_; 
v_res_980_ = l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_hole___regBuiltin_Lean_Parser_Term_hole__1();
return v_res_980_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_hole___regBuiltin_Lean_Parser_Term_hole_docString__3(){
_start:
{
lean_object* v___x_983_; lean_object* v___x_984_; lean_object* v___x_985_; 
v___x_983_ = ((lean_object*)(l_Lean_Parser_Term_hole___closed__1));
v___x_984_ = ((lean_object*)(l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_hole___regBuiltin_Lean_Parser_Term_hole_docString__3___closed__0));
v___x_985_ = l_Lean_addBuiltinDocString(v___x_983_, v___x_984_);
return v___x_985_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_hole___regBuiltin_Lean_Parser_Term_hole_docString__3___boxed(lean_object* v_a_986_){
_start:
{
lean_object* v_res_987_; 
v_res_987_ = l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_hole___regBuiltin_Lean_Parser_Term_hole_docString__3();
return v_res_987_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_hole___regBuiltin_Lean_Parser_Term_hole_declRange__5(){
_start:
{
lean_object* v___x_1014_; lean_object* v___x_1015_; lean_object* v___x_1016_; 
v___x_1014_ = ((lean_object*)(l_Lean_Parser_Term_hole___closed__1));
v___x_1015_ = ((lean_object*)(l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_hole___regBuiltin_Lean_Parser_Term_hole_declRange__5___closed__6));
v___x_1016_ = l_Lean_addBuiltinDeclarationRanges(v___x_1014_, v___x_1015_);
return v___x_1016_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_hole___regBuiltin_Lean_Parser_Term_hole_declRange__5___boxed(lean_object* v_a_1017_){
_start:
{
lean_object* v_res_1018_; 
v_res_1018_ = l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_hole___regBuiltin_Lean_Parser_Term_hole_declRange__5();
return v_res_1018_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Term_hole_formatter(lean_object* v_a_1032_, lean_object* v_a_1033_, lean_object* v_a_1034_, lean_object* v_a_1035_){
_start:
{
lean_object* v___x_1037_; lean_object* v___x_1038_; lean_object* v___x_1039_; 
v___x_1037_ = ((lean_object*)(l_Lean_Parser_Term_hole_formatter___closed__0));
v___x_1038_ = ((lean_object*)(l_Lean_Parser_Term_hole_formatter___closed__2));
v___x_1039_ = l_Lean_PrettyPrinter_Formatter_orelse_formatter(v___x_1037_, v___x_1038_, v_a_1032_, v_a_1033_, v_a_1034_, v_a_1035_);
return v___x_1039_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Term_hole_formatter___boxed(lean_object* v_a_1040_, lean_object* v_a_1041_, lean_object* v_a_1042_, lean_object* v_a_1043_, lean_object* v_a_1044_){
_start:
{
lean_object* v_res_1045_; 
v_res_1045_ = l_Lean_Parser_Term_hole_formatter(v_a_1040_, v_a_1041_, v_a_1042_, v_a_1043_);
lean_dec(v_a_1043_);
lean_dec_ref(v_a_1042_);
lean_dec(v_a_1041_);
lean_dec_ref(v_a_1040_);
return v_res_1045_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_hole___regBuiltin_Lean_Parser_Term_hole_formatter__9(){
_start:
{
lean_object* v___x_1053_; lean_object* v___x_1054_; lean_object* v___x_1055_; lean_object* v___x_1056_; lean_object* v___x_1057_; 
v___x_1053_ = l_Lean_PrettyPrinter_formatterAttribute;
v___x_1054_ = ((lean_object*)(l_Lean_Parser_Term_hole___closed__1));
v___x_1055_ = ((lean_object*)(l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_hole___regBuiltin_Lean_Parser_Term_hole_formatter__9___closed__0));
v___x_1056_ = lean_alloc_closure((void*)(l_Lean_Parser_Term_hole_formatter___boxed), 5, 0);
v___x_1057_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_1053_, v___x_1054_, v___x_1055_, v___x_1056_);
return v___x_1057_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_hole___regBuiltin_Lean_Parser_Term_hole_formatter__9___boxed(lean_object* v_a_1058_){
_start:
{
lean_object* v_res_1059_; 
v_res_1059_ = l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_hole___regBuiltin_Lean_Parser_Term_hole_formatter__9();
return v_res_1059_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Term_hole_parenthesizer(lean_object* v_a_1073_, lean_object* v_a_1074_, lean_object* v_a_1075_, lean_object* v_a_1076_){
_start:
{
lean_object* v___x_1078_; lean_object* v___x_1079_; lean_object* v___x_1080_; 
v___x_1078_ = ((lean_object*)(l_Lean_Parser_Term_hole_parenthesizer___closed__0));
v___x_1079_ = ((lean_object*)(l_Lean_Parser_Term_hole_parenthesizer___closed__2));
v___x_1080_ = l_Lean_PrettyPrinter_Parenthesizer_withAntiquot_parenthesizer(v___x_1078_, v___x_1079_, v_a_1073_, v_a_1074_, v_a_1075_, v_a_1076_);
return v___x_1080_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Term_hole_parenthesizer___boxed(lean_object* v_a_1081_, lean_object* v_a_1082_, lean_object* v_a_1083_, lean_object* v_a_1084_, lean_object* v_a_1085_){
_start:
{
lean_object* v_res_1086_; 
v_res_1086_ = l_Lean_Parser_Term_hole_parenthesizer(v_a_1081_, v_a_1082_, v_a_1083_, v_a_1084_);
lean_dec(v_a_1084_);
lean_dec_ref(v_a_1083_);
lean_dec(v_a_1082_);
lean_dec_ref(v_a_1081_);
return v_res_1086_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_hole___regBuiltin_Lean_Parser_Term_hole_parenthesizer__13(){
_start:
{
lean_object* v___x_1094_; lean_object* v___x_1095_; lean_object* v___x_1096_; lean_object* v___x_1097_; lean_object* v___x_1098_; 
v___x_1094_ = l_Lean_PrettyPrinter_parenthesizerAttribute;
v___x_1095_ = ((lean_object*)(l_Lean_Parser_Term_hole___closed__1));
v___x_1096_ = ((lean_object*)(l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_hole___regBuiltin_Lean_Parser_Term_hole_parenthesizer__13___closed__0));
v___x_1097_ = lean_alloc_closure((void*)(l_Lean_Parser_Term_hole_parenthesizer___boxed), 5, 0);
v___x_1098_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_1094_, v___x_1095_, v___x_1096_, v___x_1097_);
return v___x_1098_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_hole___regBuiltin_Lean_Parser_Term_hole_parenthesizer__13___boxed(lean_object* v_a_1099_){
_start:
{
lean_object* v_res_1100_; 
v_res_1100_ = l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_hole___regBuiltin_Lean_Parser_Term_hole_parenthesizer__13();
return v_res_1100_;
}
}
static lean_object* _init_l_Lean_Parser_Term_syntheticHole___closed__2(void){
_start:
{
uint8_t v___x_1107_; uint8_t v___x_1108_; lean_object* v___x_1109_; lean_object* v___x_1110_; lean_object* v___x_1111_; 
v___x_1107_ = 0;
v___x_1108_ = 1;
v___x_1109_ = ((lean_object*)(l_Lean_Parser_Term_syntheticHole___closed__1));
v___x_1110_ = ((lean_object*)(l_Lean_Parser_Term_syntheticHole___closed__0));
v___x_1111_ = l_Lean_Parser_mkAntiquot(v___x_1110_, v___x_1109_, v___x_1108_, v___x_1107_);
return v___x_1111_;
}
}
static lean_object* _init_l_Lean_Parser_Term_syntheticHole___closed__4(void){
_start:
{
lean_object* v___x_1113_; lean_object* v___x_1114_; 
v___x_1113_ = ((lean_object*)(l_Lean_Parser_Term_syntheticHole___closed__3));
v___x_1114_ = l_Lean_Parser_symbol(v___x_1113_);
return v___x_1114_;
}
}
static lean_object* _init_l_Lean_Parser_Term_syntheticHole___closed__5(void){
_start:
{
lean_object* v___x_1115_; lean_object* v___x_1116_; lean_object* v___x_1117_; 
v___x_1115_ = lean_obj_once(&l_Lean_Parser_Term_hole___closed__4, &l_Lean_Parser_Term_hole___closed__4_once, _init_l_Lean_Parser_Term_hole___closed__4);
v___x_1116_ = l_Lean_Parser_ident;
v___x_1117_ = l_Lean_Parser_orelse(v___x_1116_, v___x_1115_);
return v___x_1117_;
}
}
static lean_object* _init_l_Lean_Parser_Term_syntheticHole___closed__6(void){
_start:
{
lean_object* v___x_1118_; lean_object* v___x_1119_; lean_object* v___x_1120_; 
v___x_1118_ = lean_obj_once(&l_Lean_Parser_Term_syntheticHole___closed__5, &l_Lean_Parser_Term_syntheticHole___closed__5_once, _init_l_Lean_Parser_Term_syntheticHole___closed__5);
v___x_1119_ = lean_obj_once(&l_Lean_Parser_Term_syntheticHole___closed__4, &l_Lean_Parser_Term_syntheticHole___closed__4_once, _init_l_Lean_Parser_Term_syntheticHole___closed__4);
v___x_1120_ = l_Lean_Parser_andthen(v___x_1119_, v___x_1118_);
return v___x_1120_;
}
}
static lean_object* _init_l_Lean_Parser_Term_syntheticHole___closed__7(void){
_start:
{
lean_object* v___x_1121_; lean_object* v___x_1122_; lean_object* v___x_1123_; lean_object* v___x_1124_; 
v___x_1121_ = lean_obj_once(&l_Lean_Parser_Term_syntheticHole___closed__6, &l_Lean_Parser_Term_syntheticHole___closed__6_once, _init_l_Lean_Parser_Term_syntheticHole___closed__6);
v___x_1122_ = lean_unsigned_to_nat(1024u);
v___x_1123_ = ((lean_object*)(l_Lean_Parser_Term_syntheticHole___closed__1));
v___x_1124_ = l_Lean_Parser_leadingNode(v___x_1123_, v___x_1122_, v___x_1121_);
return v___x_1124_;
}
}
static lean_object* _init_l_Lean_Parser_Term_syntheticHole___closed__8(void){
_start:
{
lean_object* v___x_1125_; lean_object* v___x_1126_; lean_object* v___x_1127_; 
v___x_1125_ = lean_obj_once(&l_Lean_Parser_Term_syntheticHole___closed__7, &l_Lean_Parser_Term_syntheticHole___closed__7_once, _init_l_Lean_Parser_Term_syntheticHole___closed__7);
v___x_1126_ = lean_obj_once(&l_Lean_Parser_Term_syntheticHole___closed__2, &l_Lean_Parser_Term_syntheticHole___closed__2_once, _init_l_Lean_Parser_Term_syntheticHole___closed__2);
v___x_1127_ = l_Lean_Parser_withAntiquot(v___x_1126_, v___x_1125_);
return v___x_1127_;
}
}
static lean_object* _init_l_Lean_Parser_Term_syntheticHole___closed__9(void){
_start:
{
lean_object* v___x_1128_; lean_object* v___x_1129_; lean_object* v___x_1130_; 
v___x_1128_ = lean_obj_once(&l_Lean_Parser_Term_syntheticHole___closed__8, &l_Lean_Parser_Term_syntheticHole___closed__8_once, _init_l_Lean_Parser_Term_syntheticHole___closed__8);
v___x_1129_ = ((lean_object*)(l_Lean_Parser_Term_syntheticHole___closed__1));
v___x_1130_ = l_Lean_Parser_withCache(v___x_1129_, v___x_1128_);
return v___x_1130_;
}
}
static lean_object* _init_l_Lean_Parser_Term_syntheticHole(void){
_start:
{
lean_object* v___x_1131_; 
v___x_1131_ = lean_obj_once(&l_Lean_Parser_Term_syntheticHole___closed__9, &l_Lean_Parser_Term_syntheticHole___closed__9_once, _init_l_Lean_Parser_Term_syntheticHole___closed__9);
return v___x_1131_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_syntheticHole___regBuiltin_Lean_Parser_Term_syntheticHole__1(){
_start:
{
lean_object* v___x_1133_; lean_object* v___x_1134_; lean_object* v___x_1135_; lean_object* v___x_1136_; lean_object* v___x_1137_; 
v___x_1133_ = ((lean_object*)(l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_hole___regBuiltin_Lean_Parser_Term_hole__1___closed__1));
v___x_1134_ = ((lean_object*)(l_Lean_Parser_Term_syntheticHole___closed__1));
v___x_1135_ = l_Lean_Parser_Term_syntheticHole;
v___x_1136_ = lean_unsigned_to_nat(1000u);
v___x_1137_ = l_Lean_Parser_addBuiltinLeadingParser(v___x_1133_, v___x_1134_, v___x_1135_, v___x_1136_);
return v___x_1137_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_syntheticHole___regBuiltin_Lean_Parser_Term_syntheticHole__1___boxed(lean_object* v_a_1138_){
_start:
{
lean_object* v_res_1139_; 
v_res_1139_ = l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_syntheticHole___regBuiltin_Lean_Parser_Term_syntheticHole__1();
return v_res_1139_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_syntheticHole___regBuiltin_Lean_Parser_Term_syntheticHole_docString__3(){
_start:
{
lean_object* v___x_1142_; lean_object* v___x_1143_; lean_object* v___x_1144_; 
v___x_1142_ = ((lean_object*)(l_Lean_Parser_Term_syntheticHole___closed__1));
v___x_1143_ = ((lean_object*)(l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_syntheticHole___regBuiltin_Lean_Parser_Term_syntheticHole_docString__3___closed__0));
v___x_1144_ = l_Lean_addBuiltinDocString(v___x_1142_, v___x_1143_);
return v___x_1144_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_syntheticHole___regBuiltin_Lean_Parser_Term_syntheticHole_docString__3___boxed(lean_object* v_a_1145_){
_start:
{
lean_object* v_res_1146_; 
v_res_1146_ = l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_syntheticHole___regBuiltin_Lean_Parser_Term_syntheticHole_docString__3();
return v_res_1146_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_syntheticHole___regBuiltin_Lean_Parser_Term_syntheticHole_declRange__5(){
_start:
{
lean_object* v___x_1173_; lean_object* v___x_1174_; lean_object* v___x_1175_; 
v___x_1173_ = ((lean_object*)(l_Lean_Parser_Term_syntheticHole___closed__1));
v___x_1174_ = ((lean_object*)(l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_syntheticHole___regBuiltin_Lean_Parser_Term_syntheticHole_declRange__5___closed__6));
v___x_1175_ = l_Lean_addBuiltinDeclarationRanges(v___x_1173_, v___x_1174_);
return v___x_1175_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_syntheticHole___regBuiltin_Lean_Parser_Term_syntheticHole_declRange__5___boxed(lean_object* v_a_1176_){
_start:
{
lean_object* v_res_1177_; 
v_res_1177_ = l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_syntheticHole___regBuiltin_Lean_Parser_Term_syntheticHole_declRange__5();
return v_res_1177_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Term_syntheticHole_formatter(lean_object* v_a_1198_, lean_object* v_a_1199_, lean_object* v_a_1200_, lean_object* v_a_1201_){
_start:
{
lean_object* v___x_1203_; lean_object* v___x_1204_; lean_object* v___x_1205_; 
v___x_1203_ = ((lean_object*)(l_Lean_Parser_Term_syntheticHole_formatter___closed__0));
v___x_1204_ = ((lean_object*)(l_Lean_Parser_Term_syntheticHole_formatter___closed__5));
v___x_1205_ = l_Lean_PrettyPrinter_Formatter_orelse_formatter(v___x_1203_, v___x_1204_, v_a_1198_, v_a_1199_, v_a_1200_, v_a_1201_);
return v___x_1205_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Term_syntheticHole_formatter___boxed(lean_object* v_a_1206_, lean_object* v_a_1207_, lean_object* v_a_1208_, lean_object* v_a_1209_, lean_object* v_a_1210_){
_start:
{
lean_object* v_res_1211_; 
v_res_1211_ = l_Lean_Parser_Term_syntheticHole_formatter(v_a_1206_, v_a_1207_, v_a_1208_, v_a_1209_);
lean_dec(v_a_1209_);
lean_dec_ref(v_a_1208_);
lean_dec(v_a_1207_);
lean_dec_ref(v_a_1206_);
return v_res_1211_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_syntheticHole___regBuiltin_Lean_Parser_Term_syntheticHole_formatter__9(){
_start:
{
lean_object* v___x_1219_; lean_object* v___x_1220_; lean_object* v___x_1221_; lean_object* v___x_1222_; lean_object* v___x_1223_; 
v___x_1219_ = l_Lean_PrettyPrinter_formatterAttribute;
v___x_1220_ = ((lean_object*)(l_Lean_Parser_Term_syntheticHole___closed__1));
v___x_1221_ = ((lean_object*)(l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_syntheticHole___regBuiltin_Lean_Parser_Term_syntheticHole_formatter__9___closed__0));
v___x_1222_ = lean_alloc_closure((void*)(l_Lean_Parser_Term_syntheticHole_formatter___boxed), 5, 0);
v___x_1223_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_1219_, v___x_1220_, v___x_1221_, v___x_1222_);
return v___x_1223_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_syntheticHole___regBuiltin_Lean_Parser_Term_syntheticHole_formatter__9___boxed(lean_object* v_a_1224_){
_start:
{
lean_object* v_res_1225_; 
v_res_1225_ = l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_syntheticHole___regBuiltin_Lean_Parser_Term_syntheticHole_formatter__9();
return v_res_1225_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Term_syntheticHole_parenthesizer(lean_object* v_a_1246_, lean_object* v_a_1247_, lean_object* v_a_1248_, lean_object* v_a_1249_){
_start:
{
lean_object* v___x_1251_; lean_object* v___x_1252_; lean_object* v___x_1253_; 
v___x_1251_ = ((lean_object*)(l_Lean_Parser_Term_syntheticHole_parenthesizer___closed__0));
v___x_1252_ = ((lean_object*)(l_Lean_Parser_Term_syntheticHole_parenthesizer___closed__5));
v___x_1253_ = l_Lean_PrettyPrinter_Parenthesizer_withAntiquot_parenthesizer(v___x_1251_, v___x_1252_, v_a_1246_, v_a_1247_, v_a_1248_, v_a_1249_);
return v___x_1253_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Term_syntheticHole_parenthesizer___boxed(lean_object* v_a_1254_, lean_object* v_a_1255_, lean_object* v_a_1256_, lean_object* v_a_1257_, lean_object* v_a_1258_){
_start:
{
lean_object* v_res_1259_; 
v_res_1259_ = l_Lean_Parser_Term_syntheticHole_parenthesizer(v_a_1254_, v_a_1255_, v_a_1256_, v_a_1257_);
lean_dec(v_a_1257_);
lean_dec_ref(v_a_1256_);
lean_dec(v_a_1255_);
lean_dec_ref(v_a_1254_);
return v_res_1259_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_syntheticHole___regBuiltin_Lean_Parser_Term_syntheticHole_parenthesizer__13(){
_start:
{
lean_object* v___x_1267_; lean_object* v___x_1268_; lean_object* v___x_1269_; lean_object* v___x_1270_; lean_object* v___x_1271_; 
v___x_1267_ = l_Lean_PrettyPrinter_parenthesizerAttribute;
v___x_1268_ = ((lean_object*)(l_Lean_Parser_Term_syntheticHole___closed__1));
v___x_1269_ = ((lean_object*)(l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_syntheticHole___regBuiltin_Lean_Parser_Term_syntheticHole_parenthesizer__13___closed__0));
v___x_1270_ = lean_alloc_closure((void*)(l_Lean_Parser_Term_syntheticHole_parenthesizer___boxed), 5, 0);
v___x_1271_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_1267_, v___x_1268_, v___x_1269_, v___x_1270_);
return v___x_1271_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_syntheticHole___regBuiltin_Lean_Parser_Term_syntheticHole_parenthesizer__13___boxed(lean_object* v_a_1272_){
_start:
{
lean_object* v_res_1273_; 
v_res_1273_ = l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_syntheticHole___regBuiltin_Lean_Parser_Term_syntheticHole_parenthesizer__13();
return v_res_1273_;
}
}
static lean_object* _init_l_Lean_Parser_Term_omission___closed__2(void){
_start:
{
uint8_t v___x_1280_; uint8_t v___x_1281_; lean_object* v___x_1282_; lean_object* v___x_1283_; lean_object* v___x_1284_; 
v___x_1280_ = 0;
v___x_1281_ = 1;
v___x_1282_ = ((lean_object*)(l_Lean_Parser_Term_omission___closed__1));
v___x_1283_ = ((lean_object*)(l_Lean_Parser_Term_omission___closed__0));
v___x_1284_ = l_Lean_Parser_mkAntiquot(v___x_1283_, v___x_1282_, v___x_1281_, v___x_1280_);
return v___x_1284_;
}
}
static lean_object* _init_l_Lean_Parser_Term_omission___closed__4(void){
_start:
{
lean_object* v___x_1286_; lean_object* v___x_1287_; 
v___x_1286_ = ((lean_object*)(l_Lean_Parser_Term_omission___closed__3));
v___x_1287_ = l_Lean_Parser_symbol(v___x_1286_);
return v___x_1287_;
}
}
static lean_object* _init_l_Lean_Parser_Term_omission___closed__5(void){
_start:
{
lean_object* v___x_1288_; lean_object* v___x_1289_; lean_object* v___x_1290_; lean_object* v___x_1291_; 
v___x_1288_ = lean_obj_once(&l_Lean_Parser_Term_omission___closed__4, &l_Lean_Parser_Term_omission___closed__4_once, _init_l_Lean_Parser_Term_omission___closed__4);
v___x_1289_ = lean_unsigned_to_nat(1024u);
v___x_1290_ = ((lean_object*)(l_Lean_Parser_Term_omission___closed__1));
v___x_1291_ = l_Lean_Parser_leadingNode(v___x_1290_, v___x_1289_, v___x_1288_);
return v___x_1291_;
}
}
static lean_object* _init_l_Lean_Parser_Term_omission___closed__6(void){
_start:
{
lean_object* v___x_1292_; lean_object* v___x_1293_; lean_object* v___x_1294_; 
v___x_1292_ = lean_obj_once(&l_Lean_Parser_Term_omission___closed__5, &l_Lean_Parser_Term_omission___closed__5_once, _init_l_Lean_Parser_Term_omission___closed__5);
v___x_1293_ = lean_obj_once(&l_Lean_Parser_Term_omission___closed__2, &l_Lean_Parser_Term_omission___closed__2_once, _init_l_Lean_Parser_Term_omission___closed__2);
v___x_1294_ = l_Lean_Parser_withAntiquot(v___x_1293_, v___x_1292_);
return v___x_1294_;
}
}
static lean_object* _init_l_Lean_Parser_Term_omission___closed__7(void){
_start:
{
lean_object* v___x_1295_; lean_object* v___x_1296_; lean_object* v___x_1297_; 
v___x_1295_ = lean_obj_once(&l_Lean_Parser_Term_omission___closed__6, &l_Lean_Parser_Term_omission___closed__6_once, _init_l_Lean_Parser_Term_omission___closed__6);
v___x_1296_ = ((lean_object*)(l_Lean_Parser_Term_omission___closed__1));
v___x_1297_ = l_Lean_Parser_withCache(v___x_1296_, v___x_1295_);
return v___x_1297_;
}
}
static lean_object* _init_l_Lean_Parser_Term_omission(void){
_start:
{
lean_object* v___x_1298_; 
v___x_1298_ = lean_obj_once(&l_Lean_Parser_Term_omission___closed__7, &l_Lean_Parser_Term_omission___closed__7_once, _init_l_Lean_Parser_Term_omission___closed__7);
return v___x_1298_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_omission___regBuiltin_Lean_Parser_Term_omission__1(){
_start:
{
lean_object* v___x_1300_; lean_object* v___x_1301_; lean_object* v___x_1302_; lean_object* v___x_1303_; lean_object* v___x_1304_; 
v___x_1300_ = ((lean_object*)(l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_hole___regBuiltin_Lean_Parser_Term_hole__1___closed__1));
v___x_1301_ = ((lean_object*)(l_Lean_Parser_Term_omission___closed__1));
v___x_1302_ = l_Lean_Parser_Term_omission;
v___x_1303_ = lean_unsigned_to_nat(1000u);
v___x_1304_ = l_Lean_Parser_addBuiltinLeadingParser(v___x_1300_, v___x_1301_, v___x_1302_, v___x_1303_);
return v___x_1304_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_omission___regBuiltin_Lean_Parser_Term_omission__1___boxed(lean_object* v_a_1305_){
_start:
{
lean_object* v_res_1306_; 
v_res_1306_ = l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_omission___regBuiltin_Lean_Parser_Term_omission__1();
return v_res_1306_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_omission___regBuiltin_Lean_Parser_Term_omission_docString__3(){
_start:
{
lean_object* v___x_1309_; lean_object* v___x_1310_; lean_object* v___x_1311_; 
v___x_1309_ = ((lean_object*)(l_Lean_Parser_Term_omission___closed__1));
v___x_1310_ = ((lean_object*)(l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_omission___regBuiltin_Lean_Parser_Term_omission_docString__3___closed__0));
v___x_1311_ = l_Lean_addBuiltinDocString(v___x_1309_, v___x_1310_);
return v___x_1311_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_omission___regBuiltin_Lean_Parser_Term_omission_docString__3___boxed(lean_object* v_a_1312_){
_start:
{
lean_object* v_res_1313_; 
v_res_1313_ = l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_omission___regBuiltin_Lean_Parser_Term_omission_docString__3();
return v_res_1313_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_omission___regBuiltin_Lean_Parser_Term_omission_declRange__5(){
_start:
{
lean_object* v___x_1340_; lean_object* v___x_1341_; lean_object* v___x_1342_; 
v___x_1340_ = ((lean_object*)(l_Lean_Parser_Term_omission___closed__1));
v___x_1341_ = ((lean_object*)(l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_omission___regBuiltin_Lean_Parser_Term_omission_declRange__5___closed__6));
v___x_1342_ = l_Lean_addBuiltinDeclarationRanges(v___x_1340_, v___x_1341_);
return v___x_1342_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_omission___regBuiltin_Lean_Parser_Term_omission_declRange__5___boxed(lean_object* v_a_1343_){
_start:
{
lean_object* v_res_1344_; 
v_res_1344_ = l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_omission___regBuiltin_Lean_Parser_Term_omission_declRange__5();
return v_res_1344_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Term_omission_formatter(lean_object* v_a_1358_, lean_object* v_a_1359_, lean_object* v_a_1360_, lean_object* v_a_1361_){
_start:
{
lean_object* v___x_1363_; lean_object* v___x_1364_; lean_object* v___x_1365_; 
v___x_1363_ = ((lean_object*)(l_Lean_Parser_Term_omission_formatter___closed__0));
v___x_1364_ = ((lean_object*)(l_Lean_Parser_Term_omission_formatter___closed__2));
v___x_1365_ = l_Lean_PrettyPrinter_Formatter_orelse_formatter(v___x_1363_, v___x_1364_, v_a_1358_, v_a_1359_, v_a_1360_, v_a_1361_);
return v___x_1365_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Term_omission_formatter___boxed(lean_object* v_a_1366_, lean_object* v_a_1367_, lean_object* v_a_1368_, lean_object* v_a_1369_, lean_object* v_a_1370_){
_start:
{
lean_object* v_res_1371_; 
v_res_1371_ = l_Lean_Parser_Term_omission_formatter(v_a_1366_, v_a_1367_, v_a_1368_, v_a_1369_);
lean_dec(v_a_1369_);
lean_dec_ref(v_a_1368_);
lean_dec(v_a_1367_);
lean_dec_ref(v_a_1366_);
return v_res_1371_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_omission___regBuiltin_Lean_Parser_Term_omission_formatter__9(){
_start:
{
lean_object* v___x_1379_; lean_object* v___x_1380_; lean_object* v___x_1381_; lean_object* v___x_1382_; lean_object* v___x_1383_; 
v___x_1379_ = l_Lean_PrettyPrinter_formatterAttribute;
v___x_1380_ = ((lean_object*)(l_Lean_Parser_Term_omission___closed__1));
v___x_1381_ = ((lean_object*)(l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_omission___regBuiltin_Lean_Parser_Term_omission_formatter__9___closed__0));
v___x_1382_ = lean_alloc_closure((void*)(l_Lean_Parser_Term_omission_formatter___boxed), 5, 0);
v___x_1383_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_1379_, v___x_1380_, v___x_1381_, v___x_1382_);
return v___x_1383_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_omission___regBuiltin_Lean_Parser_Term_omission_formatter__9___boxed(lean_object* v_a_1384_){
_start:
{
lean_object* v_res_1385_; 
v_res_1385_ = l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_omission___regBuiltin_Lean_Parser_Term_omission_formatter__9();
return v_res_1385_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Term_omission_parenthesizer(lean_object* v_a_1399_, lean_object* v_a_1400_, lean_object* v_a_1401_, lean_object* v_a_1402_){
_start:
{
lean_object* v___x_1404_; lean_object* v___x_1405_; lean_object* v___x_1406_; 
v___x_1404_ = ((lean_object*)(l_Lean_Parser_Term_omission_parenthesizer___closed__0));
v___x_1405_ = ((lean_object*)(l_Lean_Parser_Term_omission_parenthesizer___closed__2));
v___x_1406_ = l_Lean_PrettyPrinter_Parenthesizer_withAntiquot_parenthesizer(v___x_1404_, v___x_1405_, v_a_1399_, v_a_1400_, v_a_1401_, v_a_1402_);
return v___x_1406_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Term_omission_parenthesizer___boxed(lean_object* v_a_1407_, lean_object* v_a_1408_, lean_object* v_a_1409_, lean_object* v_a_1410_, lean_object* v_a_1411_){
_start:
{
lean_object* v_res_1412_; 
v_res_1412_ = l_Lean_Parser_Term_omission_parenthesizer(v_a_1407_, v_a_1408_, v_a_1409_, v_a_1410_);
lean_dec(v_a_1410_);
lean_dec_ref(v_a_1409_);
lean_dec(v_a_1408_);
lean_dec_ref(v_a_1407_);
return v_res_1412_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_omission___regBuiltin_Lean_Parser_Term_omission_parenthesizer__13(){
_start:
{
lean_object* v___x_1420_; lean_object* v___x_1421_; lean_object* v___x_1422_; lean_object* v___x_1423_; lean_object* v___x_1424_; 
v___x_1420_ = l_Lean_PrettyPrinter_parenthesizerAttribute;
v___x_1421_ = ((lean_object*)(l_Lean_Parser_Term_omission___closed__1));
v___x_1422_ = ((lean_object*)(l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_omission___regBuiltin_Lean_Parser_Term_omission_parenthesizer__13___closed__0));
v___x_1423_ = lean_alloc_closure((void*)(l_Lean_Parser_Term_omission_parenthesizer___boxed), 5, 0);
v___x_1424_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_1420_, v___x_1421_, v___x_1422_, v___x_1423_);
return v___x_1424_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_omission___regBuiltin_Lean_Parser_Term_omission_parenthesizer__13___boxed(lean_object* v_a_1425_){
_start:
{
lean_object* v_res_1426_; 
v_res_1426_ = l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_omission___regBuiltin_Lean_Parser_Term_omission_parenthesizer__13();
return v_res_1426_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Term_binderIdent_formatter(lean_object* v_a_1427_, lean_object* v_a_1428_, lean_object* v_a_1429_, lean_object* v_a_1430_){
_start:
{
lean_object* v___x_1432_; lean_object* v___x_1433_; lean_object* v___x_1434_; 
v___x_1432_ = ((lean_object*)(l_Lean_Parser_Term_syntheticHole_formatter___closed__2));
v___x_1433_ = lean_alloc_closure((void*)(l_Lean_Parser_Term_hole_formatter___boxed), 5, 0);
v___x_1434_ = l_Lean_PrettyPrinter_Formatter_orelse_formatter(v___x_1432_, v___x_1433_, v_a_1427_, v_a_1428_, v_a_1429_, v_a_1430_);
return v___x_1434_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Term_binderIdent_formatter___boxed(lean_object* v_a_1435_, lean_object* v_a_1436_, lean_object* v_a_1437_, lean_object* v_a_1438_, lean_object* v_a_1439_){
_start:
{
lean_object* v_res_1440_; 
v_res_1440_ = l_Lean_Parser_Term_binderIdent_formatter(v_a_1435_, v_a_1436_, v_a_1437_, v_a_1438_);
lean_dec(v_a_1438_);
lean_dec_ref(v_a_1437_);
lean_dec(v_a_1436_);
lean_dec_ref(v_a_1435_);
return v_res_1440_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Term_binderIdent_parenthesizer(lean_object* v_a_1441_, lean_object* v_a_1442_, lean_object* v_a_1443_, lean_object* v_a_1444_){
_start:
{
lean_object* v___x_1446_; lean_object* v___x_1447_; lean_object* v___x_1448_; 
v___x_1446_ = ((lean_object*)(l_Lean_Parser_Term_syntheticHole_parenthesizer___closed__2));
v___x_1447_ = lean_alloc_closure((void*)(l_Lean_Parser_Term_hole_parenthesizer___boxed), 5, 0);
v___x_1448_ = l_Lean_PrettyPrinter_Parenthesizer_orelse_parenthesizer(v___x_1446_, v___x_1447_, v_a_1441_, v_a_1442_, v_a_1443_, v_a_1444_);
return v___x_1448_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Term_binderIdent_parenthesizer___boxed(lean_object* v_a_1449_, lean_object* v_a_1450_, lean_object* v_a_1451_, lean_object* v_a_1452_, lean_object* v_a_1453_){
_start:
{
lean_object* v_res_1454_; 
v_res_1454_ = l_Lean_Parser_Term_binderIdent_parenthesizer(v_a_1449_, v_a_1450_, v_a_1451_, v_a_1452_);
lean_dec(v_a_1452_);
lean_dec_ref(v_a_1451_);
lean_dec(v_a_1450_);
lean_dec_ref(v_a_1449_);
return v_res_1454_;
}
}
static lean_object* _init_l_Lean_Parser_Term_binderIdent___closed__0(void){
_start:
{
lean_object* v___x_1455_; lean_object* v___x_1456_; lean_object* v___x_1457_; 
v___x_1455_ = l_Lean_Parser_Term_hole;
v___x_1456_ = l_Lean_Parser_ident;
v___x_1457_ = l_Lean_Parser_orelse(v___x_1456_, v___x_1455_);
return v___x_1457_;
}
}
static lean_object* _init_l_Lean_Parser_Term_binderIdent(void){
_start:
{
lean_object* v___x_1458_; 
v___x_1458_ = lean_obj_once(&l_Lean_Parser_Term_binderIdent___closed__0, &l_Lean_Parser_Term_binderIdent___closed__0_once, _init_l_Lean_Parser_Term_binderIdent___closed__0);
return v___x_1458_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Term_binderType_formatter(uint8_t v_requireType_1470_, lean_object* v_a_1471_, lean_object* v_a_1472_, lean_object* v_a_1473_, lean_object* v_a_1474_){
_start:
{
if (v_requireType_1470_ == 0)
{
lean_object* v___x_1476_; lean_object* v___x_1477_; 
v___x_1476_ = ((lean_object*)(l_Lean_Parser_Term_binderType_formatter___closed__3));
v___x_1477_ = l_Lean_Parser_optional_formatter(v___x_1476_, v_a_1471_, v_a_1472_, v_a_1473_, v_a_1474_);
return v___x_1477_;
}
else
{
lean_object* v___x_1478_; lean_object* v___x_1479_; lean_object* v___x_1480_; 
v___x_1478_ = ((lean_object*)(l_Lean_Parser_Term_binderType_formatter___closed__5));
v___x_1479_ = ((lean_object*)(l_Lean_Parser_Term_binderType_formatter___closed__3));
v___x_1480_ = l_Lean_PrettyPrinter_Formatter_node_formatter(v___x_1478_, v___x_1479_, v_a_1471_, v_a_1472_, v_a_1473_, v_a_1474_);
return v___x_1480_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Term_binderType_formatter___boxed(lean_object* v_requireType_1481_, lean_object* v_a_1482_, lean_object* v_a_1483_, lean_object* v_a_1484_, lean_object* v_a_1485_, lean_object* v_a_1486_){
_start:
{
uint8_t v_requireType_boxed_1487_; lean_object* v_res_1488_; 
v_requireType_boxed_1487_ = lean_unbox(v_requireType_1481_);
v_res_1488_ = l_Lean_Parser_Term_binderType_formatter(v_requireType_boxed_1487_, v_a_1482_, v_a_1483_, v_a_1484_, v_a_1485_);
lean_dec(v_a_1485_);
lean_dec_ref(v_a_1484_);
lean_dec(v_a_1483_);
lean_dec_ref(v_a_1482_);
return v_res_1488_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Term_binderType_parenthesizer(uint8_t v_requireType_1496_, lean_object* v_a_1497_, lean_object* v_a_1498_, lean_object* v_a_1499_, lean_object* v_a_1500_){
_start:
{
if (v_requireType_1496_ == 0)
{
lean_object* v___x_1502_; lean_object* v___x_1503_; 
v___x_1502_ = ((lean_object*)(l_Lean_Parser_Term_binderType_parenthesizer___closed__2));
v___x_1503_ = l_Lean_Parser_optional_parenthesizer(v___x_1502_, v_a_1497_, v_a_1498_, v_a_1499_, v_a_1500_);
return v___x_1503_;
}
else
{
lean_object* v___x_1504_; lean_object* v___x_1505_; lean_object* v___x_1506_; 
v___x_1504_ = ((lean_object*)(l_Lean_Parser_Term_binderType_formatter___closed__5));
v___x_1505_ = ((lean_object*)(l_Lean_Parser_Term_binderType_parenthesizer___closed__2));
v___x_1506_ = l_Lean_PrettyPrinter_Parenthesizer_node_parenthesizer(v___x_1504_, v___x_1505_, v_a_1497_, v_a_1498_, v_a_1499_, v_a_1500_);
return v___x_1506_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Term_binderType_parenthesizer___boxed(lean_object* v_requireType_1507_, lean_object* v_a_1508_, lean_object* v_a_1509_, lean_object* v_a_1510_, lean_object* v_a_1511_, lean_object* v_a_1512_){
_start:
{
uint8_t v_requireType_boxed_1513_; lean_object* v_res_1514_; 
v_requireType_boxed_1513_ = lean_unbox(v_requireType_1507_);
v_res_1514_ = l_Lean_Parser_Term_binderType_parenthesizer(v_requireType_boxed_1513_, v_a_1508_, v_a_1509_, v_a_1510_, v_a_1511_);
lean_dec(v_a_1511_);
lean_dec_ref(v_a_1510_);
lean_dec(v_a_1509_);
lean_dec_ref(v_a_1508_);
return v_res_1514_;
}
}
static lean_object* _init_l_Lean_Parser_Term_binderType___closed__0(void){
_start:
{
lean_object* v___x_1515_; lean_object* v___x_1516_; 
v___x_1515_ = ((lean_object*)(l_Lean_Parser_Term_binderType_formatter___closed__0));
v___x_1516_ = l_Lean_Parser_symbol(v___x_1515_);
return v___x_1516_;
}
}
static lean_object* _init_l_Lean_Parser_Term_binderType___closed__1(void){
_start:
{
lean_object* v___x_1517_; lean_object* v___x_1518_; 
v___x_1517_ = lean_unsigned_to_nat(0u);
v___x_1518_ = l_Lean_Parser_termParser(v___x_1517_);
return v___x_1518_;
}
}
static lean_object* _init_l_Lean_Parser_Term_binderType___closed__2(void){
_start:
{
lean_object* v___x_1519_; lean_object* v___x_1520_; lean_object* v___x_1521_; 
v___x_1519_ = lean_obj_once(&l_Lean_Parser_Term_binderType___closed__1, &l_Lean_Parser_Term_binderType___closed__1_once, _init_l_Lean_Parser_Term_binderType___closed__1);
v___x_1520_ = lean_obj_once(&l_Lean_Parser_Term_binderType___closed__0, &l_Lean_Parser_Term_binderType___closed__0_once, _init_l_Lean_Parser_Term_binderType___closed__0);
v___x_1521_ = l_Lean_Parser_andthen(v___x_1520_, v___x_1519_);
return v___x_1521_;
}
}
static lean_object* _init_l_Lean_Parser_Term_binderType___closed__3(void){
_start:
{
lean_object* v___x_1522_; lean_object* v___x_1523_; 
v___x_1522_ = lean_obj_once(&l_Lean_Parser_Term_binderType___closed__2, &l_Lean_Parser_Term_binderType___closed__2_once, _init_l_Lean_Parser_Term_binderType___closed__2);
v___x_1523_ = l_Lean_Parser_optional(v___x_1522_);
return v___x_1523_;
}
}
static lean_object* _init_l_Lean_Parser_Term_binderType___closed__4(void){
_start:
{
lean_object* v___x_1524_; lean_object* v___x_1525_; lean_object* v___x_1526_; 
v___x_1524_ = lean_obj_once(&l_Lean_Parser_Term_binderType___closed__2, &l_Lean_Parser_Term_binderType___closed__2_once, _init_l_Lean_Parser_Term_binderType___closed__2);
v___x_1525_ = ((lean_object*)(l_Lean_Parser_Term_binderType_formatter___closed__5));
v___x_1526_ = l_Lean_Parser_node(v___x_1525_, v___x_1524_);
return v___x_1526_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Term_binderType(uint8_t v_requireType_1527_){
_start:
{
if (v_requireType_1527_ == 0)
{
lean_object* v___x_1528_; 
v___x_1528_ = lean_obj_once(&l_Lean_Parser_Term_binderType___closed__3, &l_Lean_Parser_Term_binderType___closed__3_once, _init_l_Lean_Parser_Term_binderType___closed__3);
return v___x_1528_;
}
else
{
lean_object* v___x_1529_; 
v___x_1529_ = lean_obj_once(&l_Lean_Parser_Term_binderType___closed__4, &l_Lean_Parser_Term_binderType___closed__4_once, _init_l_Lean_Parser_Term_binderType___closed__4);
return v___x_1529_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Term_binderType___boxed(lean_object* v_requireType_1530_){
_start:
{
uint8_t v_requireType_boxed_1531_; lean_object* v_res_1532_; 
v_requireType_boxed_1531_ = lean_unbox(v_requireType_1530_);
v_res_1532_ = l_Lean_Parser_Term_binderType(v_requireType_boxed_1531_);
return v_res_1532_;
}
}
static lean_object* _init_l_Lean_Parser_Term_binderTactic_formatter___closed__9(void){
_start:
{
lean_object* v___x_1557_; lean_object* v___x_1558_; lean_object* v___x_1559_; 
v___x_1557_ = lean_alloc_closure((void*)(l_Lean_Parser_Tactic_tacticSeq_formatter___boxed), 5, 0);
v___x_1558_ = ((lean_object*)(l_Lean_Parser_Term_binderTactic_formatter___closed__8));
v___x_1559_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed), 7, 2);
lean_closure_set(v___x_1559_, 0, v___x_1558_);
lean_closure_set(v___x_1559_, 1, v___x_1557_);
return v___x_1559_;
}
}
static lean_object* _init_l_Lean_Parser_Term_binderTactic_formatter___closed__10(void){
_start:
{
lean_object* v___x_1560_; lean_object* v___x_1561_; lean_object* v___x_1562_; lean_object* v___x_1563_; 
v___x_1560_ = lean_obj_once(&l_Lean_Parser_Term_binderTactic_formatter___closed__9, &l_Lean_Parser_Term_binderTactic_formatter___closed__9_once, _init_l_Lean_Parser_Term_binderTactic_formatter___closed__9);
v___x_1561_ = lean_unsigned_to_nat(1024u);
v___x_1562_ = ((lean_object*)(l_Lean_Parser_Term_binderTactic_formatter___closed__1));
v___x_1563_ = lean_alloc_closure((void*)(l_Lean_Parser_leadingNode_formatter___boxed), 8, 3);
lean_closure_set(v___x_1563_, 0, v___x_1562_);
lean_closure_set(v___x_1563_, 1, v___x_1561_);
lean_closure_set(v___x_1563_, 2, v___x_1560_);
return v___x_1563_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Term_binderTactic_formatter(lean_object* v_a_1564_, lean_object* v_a_1565_, lean_object* v_a_1566_, lean_object* v_a_1567_){
_start:
{
lean_object* v___x_1569_; lean_object* v___x_1570_; lean_object* v___x_1571_; 
v___x_1569_ = ((lean_object*)(l_Lean_Parser_Term_binderTactic_formatter___closed__2));
v___x_1570_ = lean_obj_once(&l_Lean_Parser_Term_binderTactic_formatter___closed__10, &l_Lean_Parser_Term_binderTactic_formatter___closed__10_once, _init_l_Lean_Parser_Term_binderTactic_formatter___closed__10);
v___x_1571_ = l_Lean_PrettyPrinter_Formatter_orelse_formatter(v___x_1569_, v___x_1570_, v_a_1564_, v_a_1565_, v_a_1566_, v_a_1567_);
return v___x_1571_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Term_binderTactic_formatter___boxed(lean_object* v_a_1572_, lean_object* v_a_1573_, lean_object* v_a_1574_, lean_object* v_a_1575_, lean_object* v_a_1576_){
_start:
{
lean_object* v_res_1577_; 
v_res_1577_ = l_Lean_Parser_Term_binderTactic_formatter(v_a_1572_, v_a_1573_, v_a_1574_, v_a_1575_);
lean_dec(v_a_1575_);
lean_dec_ref(v_a_1574_);
lean_dec(v_a_1573_);
lean_dec_ref(v_a_1572_);
return v_res_1577_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_binderTactic___regBuiltin_Lean_Parser_Term_binderTactic_formatter__3(){
_start:
{
lean_object* v___x_1585_; lean_object* v___x_1586_; lean_object* v___x_1587_; lean_object* v___x_1588_; lean_object* v___x_1589_; 
v___x_1585_ = l_Lean_PrettyPrinter_formatterAttribute;
v___x_1586_ = ((lean_object*)(l_Lean_Parser_Term_binderTactic_formatter___closed__1));
v___x_1587_ = ((lean_object*)(l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_binderTactic___regBuiltin_Lean_Parser_Term_binderTactic_formatter__3___closed__0));
v___x_1588_ = lean_alloc_closure((void*)(l_Lean_Parser_Term_binderTactic_formatter___boxed), 5, 0);
v___x_1589_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_1585_, v___x_1586_, v___x_1587_, v___x_1588_);
return v___x_1589_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_binderTactic___regBuiltin_Lean_Parser_Term_binderTactic_formatter__3___boxed(lean_object* v_a_1590_){
_start:
{
lean_object* v_res_1591_; 
v_res_1591_ = l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_binderTactic___regBuiltin_Lean_Parser_Term_binderTactic_formatter__3();
return v_res_1591_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Term_binderTactic_parenthesizer___lam__0(lean_object* v___x_1592_, lean_object* v___x_1593_, lean_object* v___y_1594_, lean_object* v___y_1595_, lean_object* v___y_1596_, lean_object* v___y_1597_){
_start:
{
lean_object* v___x_1599_; 
v___x_1599_ = l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer(v___x_1592_, v___x_1593_, v___y_1594_, v___y_1595_, v___y_1596_, v___y_1597_);
return v___x_1599_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Term_binderTactic_parenthesizer___lam__0___boxed(lean_object* v___x_1600_, lean_object* v___x_1601_, lean_object* v___y_1602_, lean_object* v___y_1603_, lean_object* v___y_1604_, lean_object* v___y_1605_, lean_object* v___y_1606_){
_start:
{
lean_object* v_res_1607_; 
v_res_1607_ = l_Lean_Parser_Term_binderTactic_parenthesizer___lam__0(v___x_1600_, v___x_1601_, v___y_1602_, v___y_1603_, v___y_1604_, v___y_1605_);
lean_dec(v___y_1605_);
lean_dec_ref(v___y_1604_);
lean_dec(v___y_1603_);
lean_dec_ref(v___y_1602_);
return v_res_1607_;
}
}
static lean_object* _init_l_Lean_Parser_Term_binderTactic_parenthesizer___closed__4(void){
_start:
{
lean_object* v___x_1622_; lean_object* v___f_1623_; lean_object* v___x_1624_; 
v___x_1622_ = lean_alloc_closure((void*)(l_Lean_Parser_Tactic_tacticSeq_parenthesizer___boxed), 5, 0);
v___f_1623_ = ((lean_object*)(l_Lean_Parser_Term_binderTactic_parenthesizer___closed__3));
v___x_1624_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed), 7, 2);
lean_closure_set(v___x_1624_, 0, v___f_1623_);
lean_closure_set(v___x_1624_, 1, v___x_1622_);
return v___x_1624_;
}
}
static lean_object* _init_l_Lean_Parser_Term_binderTactic_parenthesizer___closed__5(void){
_start:
{
lean_object* v___x_1625_; lean_object* v___x_1626_; lean_object* v___x_1627_; lean_object* v___x_1628_; 
v___x_1625_ = lean_obj_once(&l_Lean_Parser_Term_binderTactic_parenthesizer___closed__4, &l_Lean_Parser_Term_binderTactic_parenthesizer___closed__4_once, _init_l_Lean_Parser_Term_binderTactic_parenthesizer___closed__4);
v___x_1626_ = lean_unsigned_to_nat(1024u);
v___x_1627_ = ((lean_object*)(l_Lean_Parser_Term_binderTactic_formatter___closed__1));
v___x_1628_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_leadingNode_parenthesizer___boxed), 8, 3);
lean_closure_set(v___x_1628_, 0, v___x_1627_);
lean_closure_set(v___x_1628_, 1, v___x_1626_);
lean_closure_set(v___x_1628_, 2, v___x_1625_);
return v___x_1628_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Term_binderTactic_parenthesizer(lean_object* v_a_1629_, lean_object* v_a_1630_, lean_object* v_a_1631_, lean_object* v_a_1632_){
_start:
{
lean_object* v___x_1634_; lean_object* v___x_1635_; lean_object* v___x_1636_; 
v___x_1634_ = ((lean_object*)(l_Lean_Parser_Term_binderTactic_parenthesizer___closed__0));
v___x_1635_ = lean_obj_once(&l_Lean_Parser_Term_binderTactic_parenthesizer___closed__5, &l_Lean_Parser_Term_binderTactic_parenthesizer___closed__5_once, _init_l_Lean_Parser_Term_binderTactic_parenthesizer___closed__5);
v___x_1636_ = l_Lean_PrettyPrinter_Parenthesizer_withAntiquot_parenthesizer(v___x_1634_, v___x_1635_, v_a_1629_, v_a_1630_, v_a_1631_, v_a_1632_);
return v___x_1636_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Term_binderTactic_parenthesizer___boxed(lean_object* v_a_1637_, lean_object* v_a_1638_, lean_object* v_a_1639_, lean_object* v_a_1640_, lean_object* v_a_1641_){
_start:
{
lean_object* v_res_1642_; 
v_res_1642_ = l_Lean_Parser_Term_binderTactic_parenthesizer(v_a_1637_, v_a_1638_, v_a_1639_, v_a_1640_);
lean_dec(v_a_1640_);
lean_dec_ref(v_a_1639_);
lean_dec(v_a_1638_);
lean_dec_ref(v_a_1637_);
return v_res_1642_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_binderTactic___regBuiltin_Lean_Parser_Term_binderTactic_parenthesizer__7(){
_start:
{
lean_object* v___x_1650_; lean_object* v___x_1651_; lean_object* v___x_1652_; lean_object* v___x_1653_; lean_object* v___x_1654_; 
v___x_1650_ = l_Lean_PrettyPrinter_parenthesizerAttribute;
v___x_1651_ = ((lean_object*)(l_Lean_Parser_Term_binderTactic_formatter___closed__1));
v___x_1652_ = ((lean_object*)(l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_binderTactic___regBuiltin_Lean_Parser_Term_binderTactic_parenthesizer__7___closed__0));
v___x_1653_ = lean_alloc_closure((void*)(l_Lean_Parser_Term_binderTactic_parenthesizer___boxed), 5, 0);
v___x_1654_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_1650_, v___x_1651_, v___x_1652_, v___x_1653_);
return v___x_1654_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_binderTactic___regBuiltin_Lean_Parser_Term_binderTactic_parenthesizer__7___boxed(lean_object* v_a_1655_){
_start:
{
lean_object* v_res_1656_; 
v_res_1656_ = l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_binderTactic___regBuiltin_Lean_Parser_Term_binderTactic_parenthesizer__7();
return v_res_1656_;
}
}
static lean_object* _init_l_Lean_Parser_Term_binderTactic___closed__0(void){
_start:
{
uint8_t v___x_1657_; uint8_t v___x_1658_; lean_object* v___x_1659_; lean_object* v___x_1660_; lean_object* v___x_1661_; 
v___x_1657_ = 0;
v___x_1658_ = 1;
v___x_1659_ = ((lean_object*)(l_Lean_Parser_Term_binderTactic_formatter___closed__1));
v___x_1660_ = ((lean_object*)(l_Lean_Parser_Term_binderTactic_formatter___closed__0));
v___x_1661_ = l_Lean_Parser_mkAntiquot(v___x_1660_, v___x_1659_, v___x_1658_, v___x_1657_);
return v___x_1661_;
}
}
static lean_object* _init_l_Lean_Parser_Term_binderTactic___closed__1(void){
_start:
{
lean_object* v___x_1662_; lean_object* v___x_1663_; 
v___x_1662_ = ((lean_object*)(l_Lean_Parser_Term_binderTactic_formatter___closed__3));
v___x_1663_ = l_Lean_Parser_symbol(v___x_1662_);
return v___x_1663_;
}
}
static lean_object* _init_l_Lean_Parser_Term_binderTactic___closed__2(void){
_start:
{
lean_object* v___x_1664_; lean_object* v___x_1665_; 
v___x_1664_ = ((lean_object*)(l_Lean_Parser_Term_binderTactic_formatter___closed__5));
v___x_1665_ = l_Lean_Parser_symbol(v___x_1664_);
return v___x_1665_;
}
}
static lean_object* _init_l_Lean_Parser_Term_binderTactic___closed__3(void){
_start:
{
lean_object* v___x_1666_; lean_object* v___x_1667_; lean_object* v___x_1668_; 
v___x_1666_ = lean_obj_once(&l_Lean_Parser_Term_binderTactic___closed__2, &l_Lean_Parser_Term_binderTactic___closed__2_once, _init_l_Lean_Parser_Term_binderTactic___closed__2);
v___x_1667_ = lean_obj_once(&l_Lean_Parser_Term_binderTactic___closed__1, &l_Lean_Parser_Term_binderTactic___closed__1_once, _init_l_Lean_Parser_Term_binderTactic___closed__1);
v___x_1668_ = l_Lean_Parser_andthen(v___x_1667_, v___x_1666_);
return v___x_1668_;
}
}
static lean_object* _init_l_Lean_Parser_Term_binderTactic___closed__4(void){
_start:
{
lean_object* v___x_1669_; lean_object* v___x_1670_; 
v___x_1669_ = lean_obj_once(&l_Lean_Parser_Term_binderTactic___closed__3, &l_Lean_Parser_Term_binderTactic___closed__3_once, _init_l_Lean_Parser_Term_binderTactic___closed__3);
v___x_1670_ = l_Lean_Parser_atomic(v___x_1669_);
return v___x_1670_;
}
}
static lean_object* _init_l_Lean_Parser_Term_binderTactic___closed__5(void){
_start:
{
lean_object* v___x_1671_; lean_object* v___x_1672_; lean_object* v___x_1673_; 
v___x_1671_ = l_Lean_Parser_Tactic_tacticSeq;
v___x_1672_ = lean_obj_once(&l_Lean_Parser_Term_binderTactic___closed__4, &l_Lean_Parser_Term_binderTactic___closed__4_once, _init_l_Lean_Parser_Term_binderTactic___closed__4);
v___x_1673_ = l_Lean_Parser_andthen(v___x_1672_, v___x_1671_);
return v___x_1673_;
}
}
static lean_object* _init_l_Lean_Parser_Term_binderTactic___closed__6(void){
_start:
{
lean_object* v___x_1674_; lean_object* v___x_1675_; lean_object* v___x_1676_; lean_object* v___x_1677_; 
v___x_1674_ = lean_obj_once(&l_Lean_Parser_Term_binderTactic___closed__5, &l_Lean_Parser_Term_binderTactic___closed__5_once, _init_l_Lean_Parser_Term_binderTactic___closed__5);
v___x_1675_ = lean_unsigned_to_nat(1024u);
v___x_1676_ = ((lean_object*)(l_Lean_Parser_Term_binderTactic_formatter___closed__1));
v___x_1677_ = l_Lean_Parser_leadingNode(v___x_1676_, v___x_1675_, v___x_1674_);
return v___x_1677_;
}
}
static lean_object* _init_l_Lean_Parser_Term_binderTactic___closed__7(void){
_start:
{
lean_object* v___x_1678_; lean_object* v___x_1679_; lean_object* v___x_1680_; 
v___x_1678_ = lean_obj_once(&l_Lean_Parser_Term_binderTactic___closed__6, &l_Lean_Parser_Term_binderTactic___closed__6_once, _init_l_Lean_Parser_Term_binderTactic___closed__6);
v___x_1679_ = lean_obj_once(&l_Lean_Parser_Term_binderTactic___closed__0, &l_Lean_Parser_Term_binderTactic___closed__0_once, _init_l_Lean_Parser_Term_binderTactic___closed__0);
v___x_1680_ = l_Lean_Parser_withAntiquot(v___x_1679_, v___x_1678_);
return v___x_1680_;
}
}
static lean_object* _init_l_Lean_Parser_Term_binderTactic___closed__8(void){
_start:
{
lean_object* v___x_1681_; lean_object* v___x_1682_; lean_object* v___x_1683_; 
v___x_1681_ = lean_obj_once(&l_Lean_Parser_Term_binderTactic___closed__7, &l_Lean_Parser_Term_binderTactic___closed__7_once, _init_l_Lean_Parser_Term_binderTactic___closed__7);
v___x_1682_ = ((lean_object*)(l_Lean_Parser_Term_binderTactic_formatter___closed__1));
v___x_1683_ = l_Lean_Parser_withCache(v___x_1682_, v___x_1681_);
return v___x_1683_;
}
}
static lean_object* _init_l_Lean_Parser_Term_binderTactic(void){
_start:
{
lean_object* v___x_1684_; 
v___x_1684_ = lean_obj_once(&l_Lean_Parser_Term_binderTactic___closed__8, &l_Lean_Parser_Term_binderTactic___closed__8_once, _init_l_Lean_Parser_Term_binderTactic___closed__8);
return v___x_1684_;
}
}
static lean_object* _init_l_Lean_Parser_Term_binderDefault___closed__2(void){
_start:
{
uint8_t v___x_1691_; uint8_t v___x_1692_; lean_object* v___x_1693_; lean_object* v___x_1694_; lean_object* v___x_1695_; 
v___x_1691_ = 0;
v___x_1692_ = 1;
v___x_1693_ = ((lean_object*)(l_Lean_Parser_Term_binderDefault___closed__1));
v___x_1694_ = ((lean_object*)(l_Lean_Parser_Term_binderDefault___closed__0));
v___x_1695_ = l_Lean_Parser_mkAntiquot(v___x_1694_, v___x_1693_, v___x_1692_, v___x_1691_);
return v___x_1695_;
}
}
static lean_object* _init_l_Lean_Parser_Term_binderDefault___closed__3(void){
_start:
{
lean_object* v___x_1696_; lean_object* v___x_1697_; lean_object* v___x_1698_; 
v___x_1696_ = lean_obj_once(&l_Lean_Parser_Term_binderType___closed__1, &l_Lean_Parser_Term_binderType___closed__1_once, _init_l_Lean_Parser_Term_binderType___closed__1);
v___x_1697_ = lean_obj_once(&l_Lean_Parser_Term_binderTactic___closed__1, &l_Lean_Parser_Term_binderTactic___closed__1_once, _init_l_Lean_Parser_Term_binderTactic___closed__1);
v___x_1698_ = l_Lean_Parser_andthen(v___x_1697_, v___x_1696_);
return v___x_1698_;
}
}
static lean_object* _init_l_Lean_Parser_Term_binderDefault___closed__4(void){
_start:
{
lean_object* v___x_1699_; lean_object* v___x_1700_; lean_object* v___x_1701_; lean_object* v___x_1702_; 
v___x_1699_ = lean_obj_once(&l_Lean_Parser_Term_binderDefault___closed__3, &l_Lean_Parser_Term_binderDefault___closed__3_once, _init_l_Lean_Parser_Term_binderDefault___closed__3);
v___x_1700_ = lean_unsigned_to_nat(1024u);
v___x_1701_ = ((lean_object*)(l_Lean_Parser_Term_binderDefault___closed__1));
v___x_1702_ = l_Lean_Parser_leadingNode(v___x_1701_, v___x_1700_, v___x_1699_);
return v___x_1702_;
}
}
static lean_object* _init_l_Lean_Parser_Term_binderDefault___closed__5(void){
_start:
{
lean_object* v___x_1703_; lean_object* v___x_1704_; lean_object* v___x_1705_; 
v___x_1703_ = lean_obj_once(&l_Lean_Parser_Term_binderDefault___closed__4, &l_Lean_Parser_Term_binderDefault___closed__4_once, _init_l_Lean_Parser_Term_binderDefault___closed__4);
v___x_1704_ = lean_obj_once(&l_Lean_Parser_Term_binderDefault___closed__2, &l_Lean_Parser_Term_binderDefault___closed__2_once, _init_l_Lean_Parser_Term_binderDefault___closed__2);
v___x_1705_ = l_Lean_Parser_withAntiquot(v___x_1704_, v___x_1703_);
return v___x_1705_;
}
}
static lean_object* _init_l_Lean_Parser_Term_binderDefault___closed__6(void){
_start:
{
lean_object* v___x_1706_; lean_object* v___x_1707_; lean_object* v___x_1708_; 
v___x_1706_ = lean_obj_once(&l_Lean_Parser_Term_binderDefault___closed__5, &l_Lean_Parser_Term_binderDefault___closed__5_once, _init_l_Lean_Parser_Term_binderDefault___closed__5);
v___x_1707_ = ((lean_object*)(l_Lean_Parser_Term_binderDefault___closed__1));
v___x_1708_ = l_Lean_Parser_withCache(v___x_1707_, v___x_1706_);
return v___x_1708_;
}
}
static lean_object* _init_l_Lean_Parser_Term_binderDefault(void){
_start:
{
lean_object* v___x_1709_; 
v___x_1709_ = lean_obj_once(&l_Lean_Parser_Term_binderDefault___closed__6, &l_Lean_Parser_Term_binderDefault___closed__6_once, _init_l_Lean_Parser_Term_binderDefault___closed__6);
return v___x_1709_;
}
}
static lean_object* _init_l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_binderDefaultM(void){
_start:
{
lean_object* v___x_1710_; 
v___x_1710_ = l_Lean_Parser_Term_binderDefault;
return v___x_1710_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_getCur___at___00Lean_Parser_Term_binderDefault_parenthesizer_spec__0___redArg(lean_object* v___y_1711_){
_start:
{
lean_object* v___x_1713_; lean_object* v_stxTrav_1714_; lean_object* v_cur_1715_; lean_object* v___x_1716_; 
v___x_1713_ = lean_st_ref_get(v___y_1711_);
v_stxTrav_1714_ = lean_ctor_get(v___x_1713_, 0);
lean_inc_ref(v_stxTrav_1714_);
lean_dec(v___x_1713_);
v_cur_1715_ = lean_ctor_get(v_stxTrav_1714_, 0);
lean_inc(v_cur_1715_);
lean_dec_ref(v_stxTrav_1714_);
v___x_1716_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1716_, 0, v_cur_1715_);
return v___x_1716_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_getCur___at___00Lean_Parser_Term_binderDefault_parenthesizer_spec__0___redArg___boxed(lean_object* v___y_1717_, lean_object* v___y_1718_){
_start:
{
lean_object* v_res_1719_; 
v_res_1719_ = l_Lean_Syntax_MonadTraverser_getCur___at___00Lean_Parser_Term_binderDefault_parenthesizer_spec__0___redArg(v___y_1717_);
lean_dec(v___y_1717_);
return v_res_1719_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_getCur___at___00Lean_Parser_Term_binderDefault_parenthesizer_spec__0(lean_object* v___y_1720_, lean_object* v___y_1721_, lean_object* v___y_1722_, lean_object* v___y_1723_){
_start:
{
lean_object* v___x_1725_; 
v___x_1725_ = l_Lean_Syntax_MonadTraverser_getCur___at___00Lean_Parser_Term_binderDefault_parenthesizer_spec__0___redArg(v___y_1721_);
return v___x_1725_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_getCur___at___00Lean_Parser_Term_binderDefault_parenthesizer_spec__0___boxed(lean_object* v___y_1726_, lean_object* v___y_1727_, lean_object* v___y_1728_, lean_object* v___y_1729_, lean_object* v___y_1730_){
_start:
{
lean_object* v_res_1731_; 
v_res_1731_ = l_Lean_Syntax_MonadTraverser_getCur___at___00Lean_Parser_Term_binderDefault_parenthesizer_spec__0(v___y_1726_, v___y_1727_, v___y_1728_, v___y_1729_);
lean_dec(v___y_1729_);
lean_dec_ref(v___y_1728_);
lean_dec(v___y_1727_);
lean_dec_ref(v___y_1726_);
return v_res_1731_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Term_binderDefault_parenthesizer___lam__0(lean_object* v___y_1732_, lean_object* v___y_1733_, lean_object* v___y_1734_, lean_object* v___y_1735_, lean_object* v___y_1736_){
_start:
{
lean_object* v___x_1738_; 
v___x_1738_ = l_Lean_PrettyPrinter_Parenthesizer_term_parenthesizer(v___y_1732_, v___y_1733_, v___y_1734_, v___y_1735_, v___y_1736_);
if (lean_obj_tag(v___x_1738_) == 0)
{
lean_object* v___x_1739_; 
lean_dec_ref_known(v___x_1738_, 1);
v___x_1739_ = l_Lean_PrettyPrinter_Parenthesizer_visitToken___redArg(v___y_1734_);
return v___x_1739_;
}
else
{
return v___x_1738_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Term_binderDefault_parenthesizer___lam__0___boxed(lean_object* v___y_1740_, lean_object* v___y_1741_, lean_object* v___y_1742_, lean_object* v___y_1743_, lean_object* v___y_1744_, lean_object* v___y_1745_){
_start:
{
lean_object* v_res_1746_; 
v_res_1746_ = l_Lean_Parser_Term_binderDefault_parenthesizer___lam__0(v___y_1740_, v___y_1741_, v___y_1742_, v___y_1743_, v___y_1744_);
lean_dec(v___y_1744_);
lean_dec_ref(v___y_1743_);
lean_dec(v___y_1742_);
lean_dec_ref(v___y_1741_);
return v_res_1746_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Term_binderDefault_parenthesizer(lean_object* v_a_1753_, lean_object* v_a_1754_, lean_object* v_a_1755_, lean_object* v_a_1756_){
_start:
{
lean_object* v___x_1758_; lean_object* v_a_1759_; lean_object* v___y_1761_; lean_object* v___x_1764_; uint8_t v___x_1765_; 
v___x_1758_ = l_Lean_Syntax_MonadTraverser_getCur___at___00Lean_Parser_Term_binderDefault_parenthesizer_spec__0___redArg(v_a_1754_);
v_a_1759_ = lean_ctor_get(v___x_1758_, 0);
lean_inc_n(v_a_1759_, 2);
lean_dec_ref(v___x_1758_);
v___x_1764_ = ((lean_object*)(l_Lean_Parser_Term_binderDefault___closed__1));
v___x_1765_ = l_Lean_Syntax_isOfKind(v_a_1759_, v___x_1764_);
if (v___x_1765_ == 0)
{
lean_object* v___x_1766_; 
lean_dec(v_a_1759_);
v___x_1766_ = lean_unsigned_to_nat(0u);
v___y_1761_ = v___x_1766_;
goto v___jp_1760_;
}
else
{
lean_object* v___x_1767_; lean_object* v___x_1768_; lean_object* v___x_1769_; uint8_t v___x_1770_; 
v___x_1767_ = lean_unsigned_to_nat(1u);
v___x_1768_ = l_Lean_Syntax_getArg(v_a_1759_, v___x_1767_);
lean_dec(v_a_1759_);
v___x_1769_ = ((lean_object*)(l_Lean_Parser_Term_binderDefault_parenthesizer___closed__1));
v___x_1770_ = l_Lean_Syntax_isOfKind(v___x_1768_, v___x_1769_);
if (v___x_1770_ == 0)
{
lean_object* v___x_1771_; 
v___x_1771_ = lean_unsigned_to_nat(0u);
v___y_1761_ = v___x_1771_;
goto v___jp_1760_;
}
else
{
lean_object* v___x_1772_; 
v___x_1772_ = l_Lean_Parser_maxPrec;
v___y_1761_ = v___x_1772_;
goto v___jp_1760_;
}
}
v___jp_1760_:
{
lean_object* v___f_1762_; lean_object* v___x_1763_; 
v___f_1762_ = lean_alloc_closure((void*)(l_Lean_Parser_Term_binderDefault_parenthesizer___lam__0___boxed), 6, 1);
lean_closure_set(v___f_1762_, 0, v___y_1761_);
v___x_1763_ = l_Lean_PrettyPrinter_Parenthesizer_visitArgs(v___f_1762_, v_a_1753_, v_a_1754_, v_a_1755_, v_a_1756_);
return v___x_1763_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Term_binderDefault_parenthesizer___boxed(lean_object* v_a_1773_, lean_object* v_a_1774_, lean_object* v_a_1775_, lean_object* v_a_1776_, lean_object* v_a_1777_){
_start:
{
lean_object* v_res_1778_; 
v_res_1778_ = l_Lean_Parser_Term_binderDefault_parenthesizer(v_a_1773_, v_a_1774_, v_a_1775_, v_a_1776_);
lean_dec(v_a_1776_);
lean_dec_ref(v_a_1775_);
lean_dec(v_a_1774_);
lean_dec_ref(v_a_1773_);
return v_res_1778_;
}
}
static lean_object* _init_l_Lean_Parser_Term_explicitBinder___closed__2(void){
_start:
{
uint8_t v___x_1785_; uint8_t v___x_1786_; lean_object* v___x_1787_; lean_object* v___x_1788_; lean_object* v___x_1789_; 
v___x_1785_ = 0;
v___x_1786_ = 1;
v___x_1787_ = ((lean_object*)(l_Lean_Parser_Term_explicitBinder___closed__1));
v___x_1788_ = ((lean_object*)(l_Lean_Parser_Term_explicitBinder___closed__0));
v___x_1789_ = l_Lean_Parser_mkAntiquot(v___x_1788_, v___x_1787_, v___x_1786_, v___x_1785_);
return v___x_1789_;
}
}
static lean_object* _init_l_Lean_Parser_Term_explicitBinder___closed__4(void){
_start:
{
lean_object* v___x_1791_; lean_object* v___x_1792_; 
v___x_1791_ = ((lean_object*)(l_Lean_Parser_Term_explicitBinder___closed__3));
v___x_1792_ = l_Lean_Parser_symbol(v___x_1791_);
return v___x_1792_;
}
}
static lean_object* _init_l_Lean_Parser_Term_explicitBinder___closed__5(void){
_start:
{
lean_object* v___x_1793_; lean_object* v___x_1794_; 
v___x_1793_ = l_Lean_Parser_Term_binderIdent;
v___x_1794_ = l_Lean_Parser_many1(v___x_1793_);
return v___x_1794_;
}
}
static lean_object* _init_l_Lean_Parser_Term_explicitBinder___closed__6(void){
_start:
{
lean_object* v___x_1795_; lean_object* v___x_1796_; lean_object* v___x_1797_; 
v___x_1795_ = l_Lean_Parser_Term_binderDefault;
v___x_1796_ = l_Lean_Parser_Term_binderTactic;
v___x_1797_ = l_Lean_Parser_orelse(v___x_1796_, v___x_1795_);
return v___x_1797_;
}
}
static lean_object* _init_l_Lean_Parser_Term_explicitBinder___closed__7(void){
_start:
{
lean_object* v___x_1798_; lean_object* v___x_1799_; 
v___x_1798_ = lean_obj_once(&l_Lean_Parser_Term_explicitBinder___closed__6, &l_Lean_Parser_Term_explicitBinder___closed__6_once, _init_l_Lean_Parser_Term_explicitBinder___closed__6);
v___x_1799_ = l_Lean_Parser_optional(v___x_1798_);
return v___x_1799_;
}
}
static lean_object* _init_l_Lean_Parser_Term_explicitBinder___closed__9(void){
_start:
{
lean_object* v___x_1801_; lean_object* v___x_1802_; 
v___x_1801_ = ((lean_object*)(l_Lean_Parser_Term_explicitBinder___closed__8));
v___x_1802_ = l_Lean_Parser_symbol(v___x_1801_);
return v___x_1802_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Term_explicitBinder(uint8_t v_requireType_1803_){
_start:
{
lean_object* v___x_1804_; lean_object* v___x_1805_; lean_object* v___x_1806_; lean_object* v___x_1807_; lean_object* v___x_1808_; lean_object* v___x_1809_; lean_object* v___x_1810_; lean_object* v___x_1811_; lean_object* v___x_1812_; lean_object* v___x_1813_; lean_object* v___x_1814_; lean_object* v___x_1815_; lean_object* v___x_1816_; lean_object* v___x_1817_; lean_object* v___x_1818_; 
v___x_1804_ = ((lean_object*)(l_Lean_Parser_Term_explicitBinder___closed__1));
v___x_1805_ = lean_obj_once(&l_Lean_Parser_Term_explicitBinder___closed__2, &l_Lean_Parser_Term_explicitBinder___closed__2_once, _init_l_Lean_Parser_Term_explicitBinder___closed__2);
v___x_1806_ = lean_unsigned_to_nat(1024u);
v___x_1807_ = lean_obj_once(&l_Lean_Parser_Term_explicitBinder___closed__4, &l_Lean_Parser_Term_explicitBinder___closed__4_once, _init_l_Lean_Parser_Term_explicitBinder___closed__4);
v___x_1808_ = lean_obj_once(&l_Lean_Parser_Term_explicitBinder___closed__5, &l_Lean_Parser_Term_explicitBinder___closed__5_once, _init_l_Lean_Parser_Term_explicitBinder___closed__5);
v___x_1809_ = l_Lean_Parser_Term_binderType(v_requireType_1803_);
v___x_1810_ = lean_obj_once(&l_Lean_Parser_Term_explicitBinder___closed__7, &l_Lean_Parser_Term_explicitBinder___closed__7_once, _init_l_Lean_Parser_Term_explicitBinder___closed__7);
v___x_1811_ = l_Lean_Parser_andthen(v___x_1809_, v___x_1810_);
v___x_1812_ = l_Lean_Parser_andthen(v___x_1808_, v___x_1811_);
v___x_1813_ = l_Lean_Parser_withoutPosition(v___x_1812_);
v___x_1814_ = lean_obj_once(&l_Lean_Parser_Term_explicitBinder___closed__9, &l_Lean_Parser_Term_explicitBinder___closed__9_once, _init_l_Lean_Parser_Term_explicitBinder___closed__9);
v___x_1815_ = l_Lean_Parser_andthen(v___x_1813_, v___x_1814_);
v___x_1816_ = l_Lean_Parser_andthen(v___x_1807_, v___x_1815_);
v___x_1817_ = l_Lean_Parser_leadingNode(v___x_1804_, v___x_1806_, v___x_1816_);
v___x_1818_ = l_Lean_Parser_withAntiquot(v___x_1805_, v___x_1817_);
return v___x_1818_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Term_explicitBinder___boxed(lean_object* v_requireType_1819_){
_start:
{
uint8_t v_requireType_boxed_1820_; lean_object* v_res_1821_; 
v_requireType_boxed_1820_ = lean_unbox(v_requireType_1819_);
v_res_1821_ = l_Lean_Parser_Term_explicitBinder(v_requireType_boxed_1820_);
return v_res_1821_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_explicitBinder___regBuiltin_Lean_Parser_Term_explicitBinder_docString__1(){
_start:
{
lean_object* v___x_1824_; lean_object* v___x_1825_; lean_object* v___x_1826_; 
v___x_1824_ = ((lean_object*)(l_Lean_Parser_Term_explicitBinder___closed__1));
v___x_1825_ = ((lean_object*)(l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_explicitBinder___regBuiltin_Lean_Parser_Term_explicitBinder_docString__1___closed__0));
v___x_1826_ = l_Lean_addBuiltinDocString(v___x_1824_, v___x_1825_);
return v___x_1826_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_explicitBinder___regBuiltin_Lean_Parser_Term_explicitBinder_docString__1___boxed(lean_object* v_a_1827_){
_start:
{
lean_object* v_res_1828_; 
v_res_1828_ = l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_explicitBinder___regBuiltin_Lean_Parser_Term_explicitBinder_docString__1();
return v_res_1828_;
}
}
static lean_object* _init_l_Lean_Parser_Term_implicitBinder___closed__2(void){
_start:
{
uint8_t v___x_1835_; uint8_t v___x_1836_; lean_object* v___x_1837_; lean_object* v___x_1838_; lean_object* v___x_1839_; 
v___x_1835_ = 0;
v___x_1836_ = 1;
v___x_1837_ = ((lean_object*)(l_Lean_Parser_Term_implicitBinder___closed__1));
v___x_1838_ = ((lean_object*)(l_Lean_Parser_Term_implicitBinder___closed__0));
v___x_1839_ = l_Lean_Parser_mkAntiquot(v___x_1838_, v___x_1837_, v___x_1836_, v___x_1835_);
return v___x_1839_;
}
}
static lean_object* _init_l_Lean_Parser_Term_implicitBinder___closed__4(void){
_start:
{
lean_object* v___x_1841_; lean_object* v___x_1842_; 
v___x_1841_ = ((lean_object*)(l_Lean_Parser_Term_implicitBinder___closed__3));
v___x_1842_ = l_Lean_Parser_symbol(v___x_1841_);
return v___x_1842_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Term_implicitBinder(uint8_t v_requireType_1843_){
_start:
{
lean_object* v___x_1844_; lean_object* v___x_1845_; lean_object* v___x_1846_; lean_object* v___x_1847_; lean_object* v___x_1848_; lean_object* v___x_1849_; lean_object* v___x_1850_; lean_object* v___x_1851_; lean_object* v___x_1852_; lean_object* v___x_1853_; lean_object* v___x_1854_; lean_object* v___x_1855_; lean_object* v___x_1856_; 
v___x_1844_ = ((lean_object*)(l_Lean_Parser_Term_implicitBinder___closed__1));
v___x_1845_ = lean_obj_once(&l_Lean_Parser_Term_implicitBinder___closed__2, &l_Lean_Parser_Term_implicitBinder___closed__2_once, _init_l_Lean_Parser_Term_implicitBinder___closed__2);
v___x_1846_ = lean_unsigned_to_nat(1024u);
v___x_1847_ = lean_obj_once(&l_Lean_Parser_Term_implicitBinder___closed__4, &l_Lean_Parser_Term_implicitBinder___closed__4_once, _init_l_Lean_Parser_Term_implicitBinder___closed__4);
v___x_1848_ = lean_obj_once(&l_Lean_Parser_Term_explicitBinder___closed__5, &l_Lean_Parser_Term_explicitBinder___closed__5_once, _init_l_Lean_Parser_Term_explicitBinder___closed__5);
v___x_1849_ = l_Lean_Parser_Term_binderType(v_requireType_1843_);
v___x_1850_ = l_Lean_Parser_andthen(v___x_1848_, v___x_1849_);
v___x_1851_ = l_Lean_Parser_withoutPosition(v___x_1850_);
v___x_1852_ = lean_obj_once(&l_Lean_Parser_Tactic_tacticSeqBracketed___closed__7, &l_Lean_Parser_Tactic_tacticSeqBracketed___closed__7_once, _init_l_Lean_Parser_Tactic_tacticSeqBracketed___closed__7);
v___x_1853_ = l_Lean_Parser_andthen(v___x_1851_, v___x_1852_);
v___x_1854_ = l_Lean_Parser_andthen(v___x_1847_, v___x_1853_);
v___x_1855_ = l_Lean_Parser_leadingNode(v___x_1844_, v___x_1846_, v___x_1854_);
v___x_1856_ = l_Lean_Parser_withAntiquot(v___x_1845_, v___x_1855_);
return v___x_1856_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Term_implicitBinder___boxed(lean_object* v_requireType_1857_){
_start:
{
uint8_t v_requireType_boxed_1858_; lean_object* v_res_1859_; 
v_requireType_boxed_1858_ = lean_unbox(v_requireType_1857_);
v_res_1859_ = l_Lean_Parser_Term_implicitBinder(v_requireType_boxed_1858_);
return v_res_1859_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_implicitBinder___regBuiltin_Lean_Parser_Term_implicitBinder_docString__1(){
_start:
{
lean_object* v___x_1862_; lean_object* v___x_1863_; lean_object* v___x_1864_; 
v___x_1862_ = ((lean_object*)(l_Lean_Parser_Term_implicitBinder___closed__1));
v___x_1863_ = ((lean_object*)(l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_implicitBinder___regBuiltin_Lean_Parser_Term_implicitBinder_docString__1___closed__0));
v___x_1864_ = l_Lean_addBuiltinDocString(v___x_1862_, v___x_1863_);
return v___x_1864_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_implicitBinder___regBuiltin_Lean_Parser_Term_implicitBinder_docString__1___boxed(lean_object* v_a_1865_){
_start:
{
lean_object* v_res_1866_; 
v_res_1866_ = l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_implicitBinder___regBuiltin_Lean_Parser_Term_implicitBinder_docString__1();
return v_res_1866_;
}
}
static lean_object* _init_l_Lean_Parser_Term_strictImplicitLeftBracket___closed__0(void){
_start:
{
lean_object* v___x_1867_; lean_object* v___x_1868_; 
v___x_1867_ = lean_obj_once(&l_Lean_Parser_Term_implicitBinder___closed__4, &l_Lean_Parser_Term_implicitBinder___closed__4_once, _init_l_Lean_Parser_Term_implicitBinder___closed__4);
v___x_1868_ = l_Lean_Parser_andthen(v___x_1867_, v___x_1867_);
return v___x_1868_;
}
}
static lean_object* _init_l_Lean_Parser_Term_strictImplicitLeftBracket___closed__3(void){
_start:
{
lean_object* v___x_1872_; lean_object* v___x_1873_; lean_object* v___x_1874_; 
v___x_1872_ = lean_obj_once(&l_Lean_Parser_Term_strictImplicitLeftBracket___closed__0, &l_Lean_Parser_Term_strictImplicitLeftBracket___closed__0_once, _init_l_Lean_Parser_Term_strictImplicitLeftBracket___closed__0);
v___x_1873_ = ((lean_object*)(l_Lean_Parser_Term_strictImplicitLeftBracket___closed__2));
v___x_1874_ = l_Lean_Parser_node(v___x_1873_, v___x_1872_);
return v___x_1874_;
}
}
static lean_object* _init_l_Lean_Parser_Term_strictImplicitLeftBracket___closed__4(void){
_start:
{
lean_object* v___x_1875_; lean_object* v___x_1876_; 
v___x_1875_ = lean_obj_once(&l_Lean_Parser_Term_strictImplicitLeftBracket___closed__3, &l_Lean_Parser_Term_strictImplicitLeftBracket___closed__3_once, _init_l_Lean_Parser_Term_strictImplicitLeftBracket___closed__3);
v___x_1876_ = l_Lean_Parser_atomic(v___x_1875_);
return v___x_1876_;
}
}
static lean_object* _init_l_Lean_Parser_Term_strictImplicitLeftBracket___closed__6(void){
_start:
{
lean_object* v___x_1878_; lean_object* v___x_1879_; 
v___x_1878_ = ((lean_object*)(l_Lean_Parser_Term_strictImplicitLeftBracket___closed__5));
v___x_1879_ = l_Lean_Parser_symbol(v___x_1878_);
return v___x_1879_;
}
}
static lean_object* _init_l_Lean_Parser_Term_strictImplicitLeftBracket___closed__7(void){
_start:
{
lean_object* v___x_1880_; lean_object* v___x_1881_; lean_object* v___x_1882_; 
v___x_1880_ = lean_obj_once(&l_Lean_Parser_Term_strictImplicitLeftBracket___closed__6, &l_Lean_Parser_Term_strictImplicitLeftBracket___closed__6_once, _init_l_Lean_Parser_Term_strictImplicitLeftBracket___closed__6);
v___x_1881_ = lean_obj_once(&l_Lean_Parser_Term_strictImplicitLeftBracket___closed__4, &l_Lean_Parser_Term_strictImplicitLeftBracket___closed__4_once, _init_l_Lean_Parser_Term_strictImplicitLeftBracket___closed__4);
v___x_1882_ = l_Lean_Parser_orelse(v___x_1881_, v___x_1880_);
return v___x_1882_;
}
}
static lean_object* _init_l_Lean_Parser_Term_strictImplicitLeftBracket(void){
_start:
{
lean_object* v___x_1883_; 
v___x_1883_ = lean_obj_once(&l_Lean_Parser_Term_strictImplicitLeftBracket___closed__7, &l_Lean_Parser_Term_strictImplicitLeftBracket___closed__7_once, _init_l_Lean_Parser_Term_strictImplicitLeftBracket___closed__7);
return v___x_1883_;
}
}
static lean_object* _init_l_Lean_Parser_Term_strictImplicitRightBracket___closed__0(void){
_start:
{
lean_object* v___x_1884_; lean_object* v___x_1885_; 
v___x_1884_ = lean_obj_once(&l_Lean_Parser_Tactic_tacticSeqBracketed___closed__7, &l_Lean_Parser_Tactic_tacticSeqBracketed___closed__7_once, _init_l_Lean_Parser_Tactic_tacticSeqBracketed___closed__7);
v___x_1885_ = l_Lean_Parser_andthen(v___x_1884_, v___x_1884_);
return v___x_1885_;
}
}
static lean_object* _init_l_Lean_Parser_Term_strictImplicitRightBracket___closed__1(void){
_start:
{
lean_object* v___x_1886_; lean_object* v___x_1887_; lean_object* v___x_1888_; 
v___x_1886_ = lean_obj_once(&l_Lean_Parser_Term_strictImplicitRightBracket___closed__0, &l_Lean_Parser_Term_strictImplicitRightBracket___closed__0_once, _init_l_Lean_Parser_Term_strictImplicitRightBracket___closed__0);
v___x_1887_ = ((lean_object*)(l_Lean_Parser_Term_strictImplicitLeftBracket___closed__2));
v___x_1888_ = l_Lean_Parser_node(v___x_1887_, v___x_1886_);
return v___x_1888_;
}
}
static lean_object* _init_l_Lean_Parser_Term_strictImplicitRightBracket___closed__2(void){
_start:
{
lean_object* v___x_1889_; lean_object* v___x_1890_; 
v___x_1889_ = lean_obj_once(&l_Lean_Parser_Term_strictImplicitRightBracket___closed__1, &l_Lean_Parser_Term_strictImplicitRightBracket___closed__1_once, _init_l_Lean_Parser_Term_strictImplicitRightBracket___closed__1);
v___x_1890_ = l_Lean_Parser_atomic(v___x_1889_);
return v___x_1890_;
}
}
static lean_object* _init_l_Lean_Parser_Term_strictImplicitRightBracket___closed__4(void){
_start:
{
lean_object* v___x_1892_; lean_object* v___x_1893_; 
v___x_1892_ = ((lean_object*)(l_Lean_Parser_Term_strictImplicitRightBracket___closed__3));
v___x_1893_ = l_Lean_Parser_symbol(v___x_1892_);
return v___x_1893_;
}
}
static lean_object* _init_l_Lean_Parser_Term_strictImplicitRightBracket___closed__5(void){
_start:
{
lean_object* v___x_1894_; lean_object* v___x_1895_; lean_object* v___x_1896_; 
v___x_1894_ = lean_obj_once(&l_Lean_Parser_Term_strictImplicitRightBracket___closed__4, &l_Lean_Parser_Term_strictImplicitRightBracket___closed__4_once, _init_l_Lean_Parser_Term_strictImplicitRightBracket___closed__4);
v___x_1895_ = lean_obj_once(&l_Lean_Parser_Term_strictImplicitRightBracket___closed__2, &l_Lean_Parser_Term_strictImplicitRightBracket___closed__2_once, _init_l_Lean_Parser_Term_strictImplicitRightBracket___closed__2);
v___x_1896_ = l_Lean_Parser_orelse(v___x_1895_, v___x_1894_);
return v___x_1896_;
}
}
static lean_object* _init_l_Lean_Parser_Term_strictImplicitRightBracket(void){
_start:
{
lean_object* v___x_1897_; 
v___x_1897_ = lean_obj_once(&l_Lean_Parser_Term_strictImplicitRightBracket___closed__5, &l_Lean_Parser_Term_strictImplicitRightBracket___closed__5_once, _init_l_Lean_Parser_Term_strictImplicitRightBracket___closed__5);
return v___x_1897_;
}
}
static lean_object* _init_l_Lean_Parser_Term_strictImplicitBinder___closed__2(void){
_start:
{
uint8_t v___x_1904_; uint8_t v___x_1905_; lean_object* v___x_1906_; lean_object* v___x_1907_; lean_object* v___x_1908_; 
v___x_1904_ = 0;
v___x_1905_ = 1;
v___x_1906_ = ((lean_object*)(l_Lean_Parser_Term_strictImplicitBinder___closed__1));
v___x_1907_ = ((lean_object*)(l_Lean_Parser_Term_strictImplicitBinder___closed__0));
v___x_1908_ = l_Lean_Parser_mkAntiquot(v___x_1907_, v___x_1906_, v___x_1905_, v___x_1904_);
return v___x_1908_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Term_strictImplicitBinder(uint8_t v_requireType_1909_){
_start:
{
lean_object* v___x_1910_; lean_object* v___x_1911_; lean_object* v___x_1912_; lean_object* v___x_1913_; lean_object* v___x_1914_; lean_object* v___x_1915_; lean_object* v___x_1916_; lean_object* v___x_1917_; lean_object* v___x_1918_; lean_object* v___x_1919_; lean_object* v___x_1920_; lean_object* v___x_1921_; 
v___x_1910_ = ((lean_object*)(l_Lean_Parser_Term_strictImplicitBinder___closed__1));
v___x_1911_ = lean_obj_once(&l_Lean_Parser_Term_strictImplicitBinder___closed__2, &l_Lean_Parser_Term_strictImplicitBinder___closed__2_once, _init_l_Lean_Parser_Term_strictImplicitBinder___closed__2);
v___x_1912_ = lean_unsigned_to_nat(1024u);
v___x_1913_ = l_Lean_Parser_Term_strictImplicitLeftBracket;
v___x_1914_ = lean_obj_once(&l_Lean_Parser_Term_explicitBinder___closed__5, &l_Lean_Parser_Term_explicitBinder___closed__5_once, _init_l_Lean_Parser_Term_explicitBinder___closed__5);
v___x_1915_ = l_Lean_Parser_Term_binderType(v_requireType_1909_);
v___x_1916_ = l_Lean_Parser_Term_strictImplicitRightBracket;
v___x_1917_ = l_Lean_Parser_andthen(v___x_1915_, v___x_1916_);
v___x_1918_ = l_Lean_Parser_andthen(v___x_1914_, v___x_1917_);
v___x_1919_ = l_Lean_Parser_andthen(v___x_1913_, v___x_1918_);
v___x_1920_ = l_Lean_Parser_leadingNode(v___x_1910_, v___x_1912_, v___x_1919_);
v___x_1921_ = l_Lean_Parser_withAntiquot(v___x_1911_, v___x_1920_);
return v___x_1921_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Term_strictImplicitBinder___boxed(lean_object* v_requireType_1922_){
_start:
{
uint8_t v_requireType_boxed_1923_; lean_object* v_res_1924_; 
v_requireType_boxed_1923_ = lean_unbox(v_requireType_1922_);
v_res_1924_ = l_Lean_Parser_Term_strictImplicitBinder(v_requireType_boxed_1923_);
return v_res_1924_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_strictImplicitBinder___regBuiltin_Lean_Parser_Term_strictImplicitBinder_docString__1(){
_start:
{
lean_object* v___x_1927_; lean_object* v___x_1928_; lean_object* v___x_1929_; 
v___x_1927_ = ((lean_object*)(l_Lean_Parser_Term_strictImplicitBinder___closed__1));
v___x_1928_ = ((lean_object*)(l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_strictImplicitBinder___regBuiltin_Lean_Parser_Term_strictImplicitBinder_docString__1___closed__0));
v___x_1929_ = l_Lean_addBuiltinDocString(v___x_1927_, v___x_1928_);
return v___x_1929_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_strictImplicitBinder___regBuiltin_Lean_Parser_Term_strictImplicitBinder_docString__1___boxed(lean_object* v_a_1930_){
_start:
{
lean_object* v_res_1931_; 
v_res_1931_ = l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_strictImplicitBinder___regBuiltin_Lean_Parser_Term_strictImplicitBinder_docString__1();
return v_res_1931_;
}
}
static lean_object* _init_l_Lean_Parser_Term_optIdent___closed__0(void){
_start:
{
lean_object* v___x_1932_; lean_object* v___x_1933_; lean_object* v___x_1934_; 
v___x_1932_ = lean_obj_once(&l_Lean_Parser_Term_binderType___closed__0, &l_Lean_Parser_Term_binderType___closed__0_once, _init_l_Lean_Parser_Term_binderType___closed__0);
v___x_1933_ = l_Lean_Parser_ident;
v___x_1934_ = l_Lean_Parser_andthen(v___x_1933_, v___x_1932_);
return v___x_1934_;
}
}
static lean_object* _init_l_Lean_Parser_Term_optIdent___closed__1(void){
_start:
{
lean_object* v___x_1935_; lean_object* v___x_1936_; 
v___x_1935_ = lean_obj_once(&l_Lean_Parser_Term_optIdent___closed__0, &l_Lean_Parser_Term_optIdent___closed__0_once, _init_l_Lean_Parser_Term_optIdent___closed__0);
v___x_1936_ = l_Lean_Parser_atomic(v___x_1935_);
return v___x_1936_;
}
}
static lean_object* _init_l_Lean_Parser_Term_optIdent___closed__2(void){
_start:
{
lean_object* v___x_1937_; lean_object* v___x_1938_; 
v___x_1937_ = lean_obj_once(&l_Lean_Parser_Term_optIdent___closed__1, &l_Lean_Parser_Term_optIdent___closed__1_once, _init_l_Lean_Parser_Term_optIdent___closed__1);
v___x_1938_ = l_Lean_Parser_optional(v___x_1937_);
return v___x_1938_;
}
}
static lean_object* _init_l_Lean_Parser_Term_optIdent(void){
_start:
{
lean_object* v___x_1939_; 
v___x_1939_ = lean_obj_once(&l_Lean_Parser_Term_optIdent___closed__2, &l_Lean_Parser_Term_optIdent___closed__2_once, _init_l_Lean_Parser_Term_optIdent___closed__2);
return v___x_1939_;
}
}
static lean_object* _init_l_Lean_Parser_Term_instBinder___closed__2(void){
_start:
{
uint8_t v___x_1946_; uint8_t v___x_1947_; lean_object* v___x_1948_; lean_object* v___x_1949_; lean_object* v___x_1950_; 
v___x_1946_ = 0;
v___x_1947_ = 1;
v___x_1948_ = ((lean_object*)(l_Lean_Parser_Term_instBinder___closed__1));
v___x_1949_ = ((lean_object*)(l_Lean_Parser_Term_instBinder___closed__0));
v___x_1950_ = l_Lean_Parser_mkAntiquot(v___x_1949_, v___x_1948_, v___x_1947_, v___x_1946_);
return v___x_1950_;
}
}
static lean_object* _init_l_Lean_Parser_Term_instBinder___closed__4(void){
_start:
{
lean_object* v___x_1952_; lean_object* v___x_1953_; 
v___x_1952_ = ((lean_object*)(l_Lean_Parser_Term_instBinder___closed__3));
v___x_1953_ = l_Lean_Parser_symbol(v___x_1952_);
return v___x_1953_;
}
}
static lean_object* _init_l_Lean_Parser_Term_instBinder___closed__5(void){
_start:
{
lean_object* v___x_1954_; lean_object* v___x_1955_; lean_object* v___x_1956_; 
v___x_1954_ = lean_obj_once(&l_Lean_Parser_Term_binderType___closed__1, &l_Lean_Parser_Term_binderType___closed__1_once, _init_l_Lean_Parser_Term_binderType___closed__1);
v___x_1955_ = l_Lean_Parser_Term_optIdent;
v___x_1956_ = l_Lean_Parser_andthen(v___x_1955_, v___x_1954_);
return v___x_1956_;
}
}
static lean_object* _init_l_Lean_Parser_Term_instBinder___closed__6(void){
_start:
{
lean_object* v___x_1957_; lean_object* v___x_1958_; 
v___x_1957_ = lean_obj_once(&l_Lean_Parser_Term_instBinder___closed__5, &l_Lean_Parser_Term_instBinder___closed__5_once, _init_l_Lean_Parser_Term_instBinder___closed__5);
v___x_1958_ = l_Lean_Parser_withoutPosition(v___x_1957_);
return v___x_1958_;
}
}
static lean_object* _init_l_Lean_Parser_Term_instBinder___closed__8(void){
_start:
{
lean_object* v___x_1960_; lean_object* v___x_1961_; 
v___x_1960_ = ((lean_object*)(l_Lean_Parser_Term_instBinder___closed__7));
v___x_1961_ = l_Lean_Parser_symbol(v___x_1960_);
return v___x_1961_;
}
}
static lean_object* _init_l_Lean_Parser_Term_instBinder___closed__9(void){
_start:
{
lean_object* v___x_1962_; lean_object* v___x_1963_; lean_object* v___x_1964_; 
v___x_1962_ = lean_obj_once(&l_Lean_Parser_Term_instBinder___closed__8, &l_Lean_Parser_Term_instBinder___closed__8_once, _init_l_Lean_Parser_Term_instBinder___closed__8);
v___x_1963_ = lean_obj_once(&l_Lean_Parser_Term_instBinder___closed__6, &l_Lean_Parser_Term_instBinder___closed__6_once, _init_l_Lean_Parser_Term_instBinder___closed__6);
v___x_1964_ = l_Lean_Parser_andthen(v___x_1963_, v___x_1962_);
return v___x_1964_;
}
}
static lean_object* _init_l_Lean_Parser_Term_instBinder___closed__10(void){
_start:
{
lean_object* v___x_1965_; lean_object* v___x_1966_; lean_object* v___x_1967_; 
v___x_1965_ = lean_obj_once(&l_Lean_Parser_Term_instBinder___closed__9, &l_Lean_Parser_Term_instBinder___closed__9_once, _init_l_Lean_Parser_Term_instBinder___closed__9);
v___x_1966_ = lean_obj_once(&l_Lean_Parser_Term_instBinder___closed__4, &l_Lean_Parser_Term_instBinder___closed__4_once, _init_l_Lean_Parser_Term_instBinder___closed__4);
v___x_1967_ = l_Lean_Parser_andthen(v___x_1966_, v___x_1965_);
return v___x_1967_;
}
}
static lean_object* _init_l_Lean_Parser_Term_instBinder___closed__11(void){
_start:
{
lean_object* v___x_1968_; lean_object* v___x_1969_; lean_object* v___x_1970_; lean_object* v___x_1971_; 
v___x_1968_ = lean_obj_once(&l_Lean_Parser_Term_instBinder___closed__10, &l_Lean_Parser_Term_instBinder___closed__10_once, _init_l_Lean_Parser_Term_instBinder___closed__10);
v___x_1969_ = lean_unsigned_to_nat(1024u);
v___x_1970_ = ((lean_object*)(l_Lean_Parser_Term_instBinder___closed__1));
v___x_1971_ = l_Lean_Parser_leadingNode(v___x_1970_, v___x_1969_, v___x_1968_);
return v___x_1971_;
}
}
static lean_object* _init_l_Lean_Parser_Term_instBinder___closed__12(void){
_start:
{
lean_object* v___x_1972_; lean_object* v___x_1973_; lean_object* v___x_1974_; 
v___x_1972_ = lean_obj_once(&l_Lean_Parser_Term_instBinder___closed__11, &l_Lean_Parser_Term_instBinder___closed__11_once, _init_l_Lean_Parser_Term_instBinder___closed__11);
v___x_1973_ = lean_obj_once(&l_Lean_Parser_Term_instBinder___closed__2, &l_Lean_Parser_Term_instBinder___closed__2_once, _init_l_Lean_Parser_Term_instBinder___closed__2);
v___x_1974_ = l_Lean_Parser_withAntiquot(v___x_1973_, v___x_1972_);
return v___x_1974_;
}
}
static lean_object* _init_l_Lean_Parser_Term_instBinder___closed__13(void){
_start:
{
lean_object* v___x_1975_; lean_object* v___x_1976_; lean_object* v___x_1977_; 
v___x_1975_ = lean_obj_once(&l_Lean_Parser_Term_instBinder___closed__12, &l_Lean_Parser_Term_instBinder___closed__12_once, _init_l_Lean_Parser_Term_instBinder___closed__12);
v___x_1976_ = ((lean_object*)(l_Lean_Parser_Term_instBinder___closed__1));
v___x_1977_ = l_Lean_Parser_withCache(v___x_1976_, v___x_1975_);
return v___x_1977_;
}
}
static lean_object* _init_l_Lean_Parser_Term_instBinder(void){
_start:
{
lean_object* v___x_1978_; 
v___x_1978_ = lean_obj_once(&l_Lean_Parser_Term_instBinder___closed__13, &l_Lean_Parser_Term_instBinder___closed__13_once, _init_l_Lean_Parser_Term_instBinder___closed__13);
return v___x_1978_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_instBinder___regBuiltin_Lean_Parser_Term_instBinder_docString__1(){
_start:
{
lean_object* v___x_1981_; lean_object* v___x_1982_; lean_object* v___x_1983_; 
v___x_1981_ = ((lean_object*)(l_Lean_Parser_Term_instBinder___closed__1));
v___x_1982_ = ((lean_object*)(l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_instBinder___regBuiltin_Lean_Parser_Term_instBinder_docString__1___closed__0));
v___x_1983_ = l_Lean_addBuiltinDocString(v___x_1981_, v___x_1982_);
return v___x_1983_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_instBinder___regBuiltin_Lean_Parser_Term_instBinder_docString__1___boxed(lean_object* v_a_1984_){
_start:
{
lean_object* v_res_1985_; 
v_res_1985_ = l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_instBinder___regBuiltin_Lean_Parser_Term_instBinder_docString__1();
return v_res_1985_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Term_binderDefault_formatter(lean_object* v_a_2000_, lean_object* v_a_2001_, lean_object* v_a_2002_, lean_object* v_a_2003_){
_start:
{
lean_object* v___x_2005_; lean_object* v___x_2006_; lean_object* v___x_2007_; 
v___x_2005_ = ((lean_object*)(l_Lean_Parser_Term_binderDefault_formatter___closed__0));
v___x_2006_ = ((lean_object*)(l_Lean_Parser_Term_binderDefault_formatter___closed__2));
v___x_2007_ = l_Lean_PrettyPrinter_Formatter_orelse_formatter(v___x_2005_, v___x_2006_, v_a_2000_, v_a_2001_, v_a_2002_, v_a_2003_);
return v___x_2007_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Term_binderDefault_formatter___boxed(lean_object* v_a_2008_, lean_object* v_a_2009_, lean_object* v_a_2010_, lean_object* v_a_2011_, lean_object* v_a_2012_){
_start:
{
lean_object* v_res_2013_; 
v_res_2013_ = l_Lean_Parser_Term_binderDefault_formatter(v_a_2008_, v_a_2009_, v_a_2010_, v_a_2011_);
lean_dec(v_a_2011_);
lean_dec_ref(v_a_2010_);
lean_dec(v_a_2009_);
lean_dec_ref(v_a_2008_);
return v_res_2013_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_bracketedBinder___regBuiltin_Lean_Parser_Term_binderDefault_formatter__3(){
_start:
{
lean_object* v___x_2021_; lean_object* v___x_2022_; lean_object* v___x_2023_; lean_object* v___x_2024_; lean_object* v___x_2025_; 
v___x_2021_ = l_Lean_PrettyPrinter_formatterAttribute;
v___x_2022_ = ((lean_object*)(l_Lean_Parser_Term_binderDefault___closed__1));
v___x_2023_ = ((lean_object*)(l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_bracketedBinder___regBuiltin_Lean_Parser_Term_binderDefault_formatter__3___closed__0));
v___x_2024_ = lean_alloc_closure((void*)(l_Lean_Parser_Term_binderDefault_formatter___boxed), 5, 0);
v___x_2025_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_2021_, v___x_2022_, v___x_2023_, v___x_2024_);
return v___x_2025_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_bracketedBinder___regBuiltin_Lean_Parser_Term_binderDefault_formatter__3___boxed(lean_object* v_a_2026_){
_start:
{
lean_object* v_res_2027_; 
v_res_2027_ = l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_bracketedBinder___regBuiltin_Lean_Parser_Term_binderDefault_formatter__3();
return v_res_2027_;
}
}
static lean_object* _init_l_Lean_Parser_Term_explicitBinder_formatter___closed__2(void){
_start:
{
lean_object* v___x_2037_; lean_object* v___x_2038_; 
v___x_2037_ = lean_alloc_closure((void*)(l_Lean_Parser_Term_binderIdent_formatter___boxed), 5, 0);
v___x_2038_ = lean_alloc_closure((void*)(l_Lean_Parser_many1_formatter___boxed), 6, 1);
lean_closure_set(v___x_2038_, 0, v___x_2037_);
return v___x_2038_;
}
}
static lean_object* _init_l_Lean_Parser_Term_explicitBinder_formatter___closed__3(void){
_start:
{
lean_object* v___x_2039_; lean_object* v___x_2040_; lean_object* v___x_2041_; 
v___x_2039_ = lean_alloc_closure((void*)(l_Lean_Parser_Term_binderDefault_formatter___boxed), 5, 0);
v___x_2040_ = lean_alloc_closure((void*)(l_Lean_Parser_Term_binderTactic_formatter___boxed), 5, 0);
v___x_2041_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_orelse_formatter___boxed), 7, 2);
lean_closure_set(v___x_2041_, 0, v___x_2040_);
lean_closure_set(v___x_2041_, 1, v___x_2039_);
return v___x_2041_;
}
}
static lean_object* _init_l_Lean_Parser_Term_explicitBinder_formatter___closed__4(void){
_start:
{
lean_object* v___x_2042_; lean_object* v___x_2043_; 
v___x_2042_ = lean_obj_once(&l_Lean_Parser_Term_explicitBinder_formatter___closed__3, &l_Lean_Parser_Term_explicitBinder_formatter___closed__3_once, _init_l_Lean_Parser_Term_explicitBinder_formatter___closed__3);
v___x_2043_ = lean_alloc_closure((void*)(l_Lean_Parser_optional_formatter___boxed), 6, 1);
lean_closure_set(v___x_2043_, 0, v___x_2042_);
return v___x_2043_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Term_explicitBinder_formatter(uint8_t v_requireType_2046_, lean_object* v_a_2047_, lean_object* v_a_2048_, lean_object* v_a_2049_, lean_object* v_a_2050_){
_start:
{
lean_object* v___x_2052_; lean_object* v___x_2053_; lean_object* v___x_2054_; lean_object* v___x_2055_; lean_object* v___x_2056_; lean_object* v___x_2057_; lean_object* v___x_2058_; lean_object* v___x_2059_; lean_object* v___x_2060_; lean_object* v___x_2061_; lean_object* v___x_2062_; lean_object* v___x_2063_; lean_object* v___x_2064_; lean_object* v___x_2065_; lean_object* v___x_2066_; lean_object* v___x_2067_; lean_object* v___x_2068_; 
v___x_2052_ = ((lean_object*)(l_Lean_Parser_Term_explicitBinder___closed__1));
v___x_2053_ = ((lean_object*)(l_Lean_Parser_Term_explicitBinder_formatter___closed__0));
v___x_2054_ = lean_unsigned_to_nat(1024u);
v___x_2055_ = ((lean_object*)(l_Lean_Parser_Term_explicitBinder_formatter___closed__1));
v___x_2056_ = lean_obj_once(&l_Lean_Parser_Term_explicitBinder_formatter___closed__2, &l_Lean_Parser_Term_explicitBinder_formatter___closed__2_once, _init_l_Lean_Parser_Term_explicitBinder_formatter___closed__2);
v___x_2057_ = lean_box(v_requireType_2046_);
v___x_2058_ = lean_alloc_closure((void*)(l_Lean_Parser_Term_binderType_formatter___boxed), 6, 1);
lean_closure_set(v___x_2058_, 0, v___x_2057_);
v___x_2059_ = lean_obj_once(&l_Lean_Parser_Term_explicitBinder_formatter___closed__4, &l_Lean_Parser_Term_explicitBinder_formatter___closed__4_once, _init_l_Lean_Parser_Term_explicitBinder_formatter___closed__4);
v___x_2060_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed), 7, 2);
lean_closure_set(v___x_2060_, 0, v___x_2058_);
lean_closure_set(v___x_2060_, 1, v___x_2059_);
v___x_2061_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed), 7, 2);
lean_closure_set(v___x_2061_, 0, v___x_2056_);
lean_closure_set(v___x_2061_, 1, v___x_2060_);
v___x_2062_ = lean_alloc_closure((void*)(l_Lean_Parser_withoutPosition_formatter___boxed), 6, 1);
lean_closure_set(v___x_2062_, 0, v___x_2061_);
v___x_2063_ = ((lean_object*)(l_Lean_Parser_Term_explicitBinder_formatter___closed__5));
v___x_2064_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed), 7, 2);
lean_closure_set(v___x_2064_, 0, v___x_2062_);
lean_closure_set(v___x_2064_, 1, v___x_2063_);
v___x_2065_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed), 7, 2);
lean_closure_set(v___x_2065_, 0, v___x_2055_);
lean_closure_set(v___x_2065_, 1, v___x_2064_);
v___x_2066_ = lean_alloc_closure((void*)(l_Lean_Parser_ppGroup_formatter___boxed), 6, 1);
lean_closure_set(v___x_2066_, 0, v___x_2065_);
v___x_2067_ = lean_alloc_closure((void*)(l_Lean_Parser_leadingNode_formatter___boxed), 8, 3);
lean_closure_set(v___x_2067_, 0, v___x_2052_);
lean_closure_set(v___x_2067_, 1, v___x_2054_);
lean_closure_set(v___x_2067_, 2, v___x_2066_);
v___x_2068_ = l_Lean_PrettyPrinter_Formatter_orelse_formatter(v___x_2053_, v___x_2067_, v_a_2047_, v_a_2048_, v_a_2049_, v_a_2050_);
return v___x_2068_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Term_explicitBinder_formatter___boxed(lean_object* v_requireType_2069_, lean_object* v_a_2070_, lean_object* v_a_2071_, lean_object* v_a_2072_, lean_object* v_a_2073_, lean_object* v_a_2074_){
_start:
{
uint8_t v_requireType_boxed_2075_; lean_object* v_res_2076_; 
v_requireType_boxed_2075_ = lean_unbox(v_requireType_2069_);
v_res_2076_ = l_Lean_Parser_Term_explicitBinder_formatter(v_requireType_boxed_2075_, v_a_2070_, v_a_2071_, v_a_2072_, v_a_2073_);
lean_dec(v_a_2073_);
lean_dec_ref(v_a_2072_);
lean_dec(v_a_2071_);
lean_dec_ref(v_a_2070_);
return v_res_2076_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Term_strictImplicitLeftBracket_formatter(lean_object* v_a_2087_, lean_object* v_a_2088_, lean_object* v_a_2089_, lean_object* v_a_2090_){
_start:
{
lean_object* v___x_2092_; lean_object* v___x_2093_; lean_object* v___x_2094_; 
v___x_2092_ = ((lean_object*)(l_Lean_Parser_Term_strictImplicitLeftBracket_formatter___closed__3));
v___x_2093_ = ((lean_object*)(l_Lean_Parser_Term_strictImplicitLeftBracket_formatter___closed__4));
v___x_2094_ = l_Lean_PrettyPrinter_Formatter_orelse_formatter(v___x_2092_, v___x_2093_, v_a_2087_, v_a_2088_, v_a_2089_, v_a_2090_);
return v___x_2094_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Term_strictImplicitLeftBracket_formatter___boxed(lean_object* v_a_2095_, lean_object* v_a_2096_, lean_object* v_a_2097_, lean_object* v_a_2098_, lean_object* v_a_2099_){
_start:
{
lean_object* v_res_2100_; 
v_res_2100_ = l_Lean_Parser_Term_strictImplicitLeftBracket_formatter(v_a_2095_, v_a_2096_, v_a_2097_, v_a_2098_);
lean_dec(v_a_2098_);
lean_dec_ref(v_a_2097_);
lean_dec(v_a_2096_);
lean_dec_ref(v_a_2095_);
return v_res_2100_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Term_strictImplicitRightBracket_formatter(lean_object* v_a_2109_, lean_object* v_a_2110_, lean_object* v_a_2111_, lean_object* v_a_2112_){
_start:
{
lean_object* v___x_2114_; lean_object* v___x_2115_; lean_object* v___x_2116_; 
v___x_2114_ = ((lean_object*)(l_Lean_Parser_Term_strictImplicitRightBracket_formatter___closed__2));
v___x_2115_ = ((lean_object*)(l_Lean_Parser_Term_strictImplicitRightBracket_formatter___closed__3));
v___x_2116_ = l_Lean_PrettyPrinter_Formatter_orelse_formatter(v___x_2114_, v___x_2115_, v_a_2109_, v_a_2110_, v_a_2111_, v_a_2112_);
return v___x_2116_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Term_strictImplicitRightBracket_formatter___boxed(lean_object* v_a_2117_, lean_object* v_a_2118_, lean_object* v_a_2119_, lean_object* v_a_2120_, lean_object* v_a_2121_){
_start:
{
lean_object* v_res_2122_; 
v_res_2122_ = l_Lean_Parser_Term_strictImplicitRightBracket_formatter(v_a_2117_, v_a_2118_, v_a_2119_, v_a_2120_);
lean_dec(v_a_2120_);
lean_dec_ref(v_a_2119_);
lean_dec(v_a_2118_);
lean_dec_ref(v_a_2117_);
return v_res_2122_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Term_strictImplicitBinder_formatter(uint8_t v_requireType_2130_, lean_object* v_a_2131_, lean_object* v_a_2132_, lean_object* v_a_2133_, lean_object* v_a_2134_){
_start:
{
lean_object* v___x_2136_; lean_object* v___x_2137_; lean_object* v___x_2138_; lean_object* v___x_2139_; lean_object* v___x_2140_; lean_object* v___x_2141_; lean_object* v___x_2142_; lean_object* v___x_2143_; lean_object* v___x_2144_; lean_object* v___x_2145_; lean_object* v___x_2146_; lean_object* v___x_2147_; lean_object* v___x_2148_; lean_object* v___x_2149_; 
v___x_2136_ = ((lean_object*)(l_Lean_Parser_Term_strictImplicitBinder___closed__1));
v___x_2137_ = ((lean_object*)(l_Lean_Parser_Term_strictImplicitBinder_formatter___closed__0));
v___x_2138_ = lean_unsigned_to_nat(1024u);
v___x_2139_ = lean_alloc_closure((void*)(l_Lean_Parser_Term_strictImplicitLeftBracket_formatter___boxed), 5, 0);
v___x_2140_ = lean_obj_once(&l_Lean_Parser_Term_explicitBinder_formatter___closed__2, &l_Lean_Parser_Term_explicitBinder_formatter___closed__2_once, _init_l_Lean_Parser_Term_explicitBinder_formatter___closed__2);
v___x_2141_ = lean_box(v_requireType_2130_);
v___x_2142_ = lean_alloc_closure((void*)(l_Lean_Parser_Term_binderType_formatter___boxed), 6, 1);
lean_closure_set(v___x_2142_, 0, v___x_2141_);
v___x_2143_ = lean_alloc_closure((void*)(l_Lean_Parser_Term_strictImplicitRightBracket_formatter___boxed), 5, 0);
v___x_2144_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed), 7, 2);
lean_closure_set(v___x_2144_, 0, v___x_2142_);
lean_closure_set(v___x_2144_, 1, v___x_2143_);
v___x_2145_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed), 7, 2);
lean_closure_set(v___x_2145_, 0, v___x_2140_);
lean_closure_set(v___x_2145_, 1, v___x_2144_);
v___x_2146_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed), 7, 2);
lean_closure_set(v___x_2146_, 0, v___x_2139_);
lean_closure_set(v___x_2146_, 1, v___x_2145_);
v___x_2147_ = lean_alloc_closure((void*)(l_Lean_Parser_ppGroup_formatter___boxed), 6, 1);
lean_closure_set(v___x_2147_, 0, v___x_2146_);
v___x_2148_ = lean_alloc_closure((void*)(l_Lean_Parser_leadingNode_formatter___boxed), 8, 3);
lean_closure_set(v___x_2148_, 0, v___x_2136_);
lean_closure_set(v___x_2148_, 1, v___x_2138_);
lean_closure_set(v___x_2148_, 2, v___x_2147_);
v___x_2149_ = l_Lean_PrettyPrinter_Formatter_orelse_formatter(v___x_2137_, v___x_2148_, v_a_2131_, v_a_2132_, v_a_2133_, v_a_2134_);
return v___x_2149_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Term_strictImplicitBinder_formatter___boxed(lean_object* v_requireType_2150_, lean_object* v_a_2151_, lean_object* v_a_2152_, lean_object* v_a_2153_, lean_object* v_a_2154_, lean_object* v_a_2155_){
_start:
{
uint8_t v_requireType_boxed_2156_; lean_object* v_res_2157_; 
v_requireType_boxed_2156_ = lean_unbox(v_requireType_2150_);
v_res_2157_ = l_Lean_Parser_Term_strictImplicitBinder_formatter(v_requireType_boxed_2156_, v_a_2151_, v_a_2152_, v_a_2153_, v_a_2154_);
lean_dec(v_a_2154_);
lean_dec_ref(v_a_2153_);
lean_dec(v_a_2152_);
lean_dec_ref(v_a_2151_);
return v_res_2157_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Term_implicitBinder_formatter(uint8_t v_requireType_2165_, lean_object* v_a_2166_, lean_object* v_a_2167_, lean_object* v_a_2168_, lean_object* v_a_2169_){
_start:
{
lean_object* v___x_2171_; lean_object* v___x_2172_; lean_object* v___x_2173_; lean_object* v___x_2174_; lean_object* v___x_2175_; lean_object* v___x_2176_; lean_object* v___x_2177_; lean_object* v___x_2178_; lean_object* v___x_2179_; lean_object* v___x_2180_; lean_object* v___x_2181_; lean_object* v___x_2182_; lean_object* v___x_2183_; lean_object* v___x_2184_; lean_object* v___x_2185_; 
v___x_2171_ = ((lean_object*)(l_Lean_Parser_Term_implicitBinder___closed__1));
v___x_2172_ = ((lean_object*)(l_Lean_Parser_Term_implicitBinder_formatter___closed__0));
v___x_2173_ = lean_unsigned_to_nat(1024u);
v___x_2174_ = ((lean_object*)(l_Lean_Parser_Term_strictImplicitLeftBracket_formatter___closed__0));
v___x_2175_ = lean_obj_once(&l_Lean_Parser_Term_explicitBinder_formatter___closed__2, &l_Lean_Parser_Term_explicitBinder_formatter___closed__2_once, _init_l_Lean_Parser_Term_explicitBinder_formatter___closed__2);
v___x_2176_ = lean_box(v_requireType_2165_);
v___x_2177_ = lean_alloc_closure((void*)(l_Lean_Parser_Term_binderType_formatter___boxed), 6, 1);
lean_closure_set(v___x_2177_, 0, v___x_2176_);
v___x_2178_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed), 7, 2);
lean_closure_set(v___x_2178_, 0, v___x_2175_);
lean_closure_set(v___x_2178_, 1, v___x_2177_);
v___x_2179_ = lean_alloc_closure((void*)(l_Lean_Parser_withoutPosition_formatter___boxed), 6, 1);
lean_closure_set(v___x_2179_, 0, v___x_2178_);
v___x_2180_ = ((lean_object*)(l_Lean_Parser_Tactic_tacticSeqBracketed_formatter___closed__5));
v___x_2181_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed), 7, 2);
lean_closure_set(v___x_2181_, 0, v___x_2179_);
lean_closure_set(v___x_2181_, 1, v___x_2180_);
v___x_2182_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed), 7, 2);
lean_closure_set(v___x_2182_, 0, v___x_2174_);
lean_closure_set(v___x_2182_, 1, v___x_2181_);
v___x_2183_ = lean_alloc_closure((void*)(l_Lean_Parser_ppGroup_formatter___boxed), 6, 1);
lean_closure_set(v___x_2183_, 0, v___x_2182_);
v___x_2184_ = lean_alloc_closure((void*)(l_Lean_Parser_leadingNode_formatter___boxed), 8, 3);
lean_closure_set(v___x_2184_, 0, v___x_2171_);
lean_closure_set(v___x_2184_, 1, v___x_2173_);
lean_closure_set(v___x_2184_, 2, v___x_2183_);
v___x_2185_ = l_Lean_PrettyPrinter_Formatter_orelse_formatter(v___x_2172_, v___x_2184_, v_a_2166_, v_a_2167_, v_a_2168_, v_a_2169_);
return v___x_2185_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Term_implicitBinder_formatter___boxed(lean_object* v_requireType_2186_, lean_object* v_a_2187_, lean_object* v_a_2188_, lean_object* v_a_2189_, lean_object* v_a_2190_, lean_object* v_a_2191_){
_start:
{
uint8_t v_requireType_boxed_2192_; lean_object* v_res_2193_; 
v_requireType_boxed_2192_ = lean_unbox(v_requireType_2186_);
v_res_2193_ = l_Lean_Parser_Term_implicitBinder_formatter(v_requireType_boxed_2192_, v_a_2187_, v_a_2188_, v_a_2189_, v_a_2190_);
lean_dec(v_a_2190_);
lean_dec_ref(v_a_2189_);
lean_dec(v_a_2188_);
lean_dec_ref(v_a_2187_);
return v_res_2193_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Term_optIdent_formatter(lean_object* v_a_2199_, lean_object* v_a_2200_, lean_object* v_a_2201_, lean_object* v_a_2202_){
_start:
{
lean_object* v___x_2204_; lean_object* v___x_2205_; 
v___x_2204_ = ((lean_object*)(l_Lean_Parser_Term_optIdent_formatter___closed__1));
v___x_2205_ = l_Lean_Parser_optional_formatter(v___x_2204_, v_a_2199_, v_a_2200_, v_a_2201_, v_a_2202_);
return v___x_2205_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Term_optIdent_formatter___boxed(lean_object* v_a_2206_, lean_object* v_a_2207_, lean_object* v_a_2208_, lean_object* v_a_2209_, lean_object* v_a_2210_){
_start:
{
lean_object* v_res_2211_; 
v_res_2211_ = l_Lean_Parser_Term_optIdent_formatter(v_a_2206_, v_a_2207_, v_a_2208_, v_a_2209_);
lean_dec(v_a_2209_);
lean_dec_ref(v_a_2208_);
lean_dec(v_a_2207_);
lean_dec_ref(v_a_2206_);
return v_res_2211_;
}
}
static lean_object* _init_l_Lean_Parser_Term_instBinder_formatter___closed__2(void){
_start:
{
lean_object* v___x_2221_; lean_object* v___x_2222_; lean_object* v___x_2223_; 
v___x_2221_ = ((lean_object*)(l_Lean_Parser_Term_binderType_formatter___closed__2));
v___x_2222_ = lean_alloc_closure((void*)(l_Lean_Parser_Term_optIdent_formatter___boxed), 5, 0);
v___x_2223_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed), 7, 2);
lean_closure_set(v___x_2223_, 0, v___x_2222_);
lean_closure_set(v___x_2223_, 1, v___x_2221_);
return v___x_2223_;
}
}
static lean_object* _init_l_Lean_Parser_Term_instBinder_formatter___closed__3(void){
_start:
{
lean_object* v___x_2224_; lean_object* v___x_2225_; 
v___x_2224_ = lean_obj_once(&l_Lean_Parser_Term_instBinder_formatter___closed__2, &l_Lean_Parser_Term_instBinder_formatter___closed__2_once, _init_l_Lean_Parser_Term_instBinder_formatter___closed__2);
v___x_2225_ = lean_alloc_closure((void*)(l_Lean_Parser_withoutPosition_formatter___boxed), 6, 1);
lean_closure_set(v___x_2225_, 0, v___x_2224_);
return v___x_2225_;
}
}
static lean_object* _init_l_Lean_Parser_Term_instBinder_formatter___closed__5(void){
_start:
{
lean_object* v___x_2228_; lean_object* v___x_2229_; lean_object* v___x_2230_; 
v___x_2228_ = ((lean_object*)(l_Lean_Parser_Term_instBinder_formatter___closed__4));
v___x_2229_ = lean_obj_once(&l_Lean_Parser_Term_instBinder_formatter___closed__3, &l_Lean_Parser_Term_instBinder_formatter___closed__3_once, _init_l_Lean_Parser_Term_instBinder_formatter___closed__3);
v___x_2230_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed), 7, 2);
lean_closure_set(v___x_2230_, 0, v___x_2229_);
lean_closure_set(v___x_2230_, 1, v___x_2228_);
return v___x_2230_;
}
}
static lean_object* _init_l_Lean_Parser_Term_instBinder_formatter___closed__6(void){
_start:
{
lean_object* v___x_2231_; lean_object* v___x_2232_; lean_object* v___x_2233_; 
v___x_2231_ = lean_obj_once(&l_Lean_Parser_Term_instBinder_formatter___closed__5, &l_Lean_Parser_Term_instBinder_formatter___closed__5_once, _init_l_Lean_Parser_Term_instBinder_formatter___closed__5);
v___x_2232_ = ((lean_object*)(l_Lean_Parser_Term_instBinder_formatter___closed__1));
v___x_2233_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed), 7, 2);
lean_closure_set(v___x_2233_, 0, v___x_2232_);
lean_closure_set(v___x_2233_, 1, v___x_2231_);
return v___x_2233_;
}
}
static lean_object* _init_l_Lean_Parser_Term_instBinder_formatter___closed__7(void){
_start:
{
lean_object* v___x_2234_; lean_object* v___x_2235_; 
v___x_2234_ = lean_obj_once(&l_Lean_Parser_Term_instBinder_formatter___closed__6, &l_Lean_Parser_Term_instBinder_formatter___closed__6_once, _init_l_Lean_Parser_Term_instBinder_formatter___closed__6);
v___x_2235_ = lean_alloc_closure((void*)(l_Lean_Parser_ppGroup_formatter___boxed), 6, 1);
lean_closure_set(v___x_2235_, 0, v___x_2234_);
return v___x_2235_;
}
}
static lean_object* _init_l_Lean_Parser_Term_instBinder_formatter___closed__8(void){
_start:
{
lean_object* v___x_2236_; lean_object* v___x_2237_; lean_object* v___x_2238_; lean_object* v___x_2239_; 
v___x_2236_ = lean_obj_once(&l_Lean_Parser_Term_instBinder_formatter___closed__7, &l_Lean_Parser_Term_instBinder_formatter___closed__7_once, _init_l_Lean_Parser_Term_instBinder_formatter___closed__7);
v___x_2237_ = lean_unsigned_to_nat(1024u);
v___x_2238_ = ((lean_object*)(l_Lean_Parser_Term_instBinder___closed__1));
v___x_2239_ = lean_alloc_closure((void*)(l_Lean_Parser_leadingNode_formatter___boxed), 8, 3);
lean_closure_set(v___x_2239_, 0, v___x_2238_);
lean_closure_set(v___x_2239_, 1, v___x_2237_);
lean_closure_set(v___x_2239_, 2, v___x_2236_);
return v___x_2239_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Term_instBinder_formatter(lean_object* v_a_2240_, lean_object* v_a_2241_, lean_object* v_a_2242_, lean_object* v_a_2243_){
_start:
{
lean_object* v___x_2245_; lean_object* v___x_2246_; lean_object* v___x_2247_; 
v___x_2245_ = ((lean_object*)(l_Lean_Parser_Term_instBinder_formatter___closed__0));
v___x_2246_ = lean_obj_once(&l_Lean_Parser_Term_instBinder_formatter___closed__8, &l_Lean_Parser_Term_instBinder_formatter___closed__8_once, _init_l_Lean_Parser_Term_instBinder_formatter___closed__8);
v___x_2247_ = l_Lean_PrettyPrinter_Formatter_orelse_formatter(v___x_2245_, v___x_2246_, v_a_2240_, v_a_2241_, v_a_2242_, v_a_2243_);
return v___x_2247_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Term_instBinder_formatter___boxed(lean_object* v_a_2248_, lean_object* v_a_2249_, lean_object* v_a_2250_, lean_object* v_a_2251_, lean_object* v_a_2252_){
_start:
{
lean_object* v_res_2253_; 
v_res_2253_ = l_Lean_Parser_Term_instBinder_formatter(v_a_2248_, v_a_2249_, v_a_2250_, v_a_2251_);
lean_dec(v_a_2251_);
lean_dec_ref(v_a_2250_);
lean_dec(v_a_2249_);
lean_dec_ref(v_a_2248_);
return v_res_2253_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_bracketedBinder___regBuiltin_Lean_Parser_Term_instBinder_formatter__19(){
_start:
{
lean_object* v___x_2261_; lean_object* v___x_2262_; lean_object* v___x_2263_; lean_object* v___x_2264_; lean_object* v___x_2265_; 
v___x_2261_ = l_Lean_PrettyPrinter_formatterAttribute;
v___x_2262_ = ((lean_object*)(l_Lean_Parser_Term_instBinder___closed__1));
v___x_2263_ = ((lean_object*)(l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_bracketedBinder___regBuiltin_Lean_Parser_Term_instBinder_formatter__19___closed__0));
v___x_2264_ = lean_alloc_closure((void*)(l_Lean_Parser_Term_instBinder_formatter___boxed), 5, 0);
v___x_2265_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_2261_, v___x_2262_, v___x_2263_, v___x_2264_);
return v___x_2265_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_bracketedBinder___regBuiltin_Lean_Parser_Term_instBinder_formatter__19___boxed(lean_object* v_a_2266_){
_start:
{
lean_object* v_res_2267_; 
v_res_2267_ = l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_bracketedBinder___regBuiltin_Lean_Parser_Term_instBinder_formatter__19();
return v_res_2267_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Term_bracketedBinder_formatter(uint8_t v_requireType_2280_, lean_object* v_a_2281_, lean_object* v_a_2282_, lean_object* v_a_2283_, lean_object* v_a_2284_){
_start:
{
lean_object* v___x_2286_; lean_object* v___x_2287_; lean_object* v___x_2288_; lean_object* v___x_2289_; lean_object* v___x_2290_; lean_object* v___x_2291_; lean_object* v___x_2292_; lean_object* v___x_2293_; lean_object* v___x_2294_; lean_object* v___x_2295_; lean_object* v___x_2296_; lean_object* v___x_2297_; 
v___x_2286_ = ((lean_object*)(l_Lean_Parser_Term_bracketedBinder_formatter___closed__2));
v___x_2287_ = lean_box(v_requireType_2280_);
v___x_2288_ = lean_alloc_closure((void*)(l_Lean_Parser_Term_explicitBinder_formatter___boxed), 6, 1);
lean_closure_set(v___x_2288_, 0, v___x_2287_);
v___x_2289_ = lean_box(v_requireType_2280_);
v___x_2290_ = lean_alloc_closure((void*)(l_Lean_Parser_Term_strictImplicitBinder_formatter___boxed), 6, 1);
lean_closure_set(v___x_2290_, 0, v___x_2289_);
v___x_2291_ = lean_box(v_requireType_2280_);
v___x_2292_ = lean_alloc_closure((void*)(l_Lean_Parser_Term_implicitBinder_formatter___boxed), 6, 1);
lean_closure_set(v___x_2292_, 0, v___x_2291_);
v___x_2293_ = lean_alloc_closure((void*)(l_Lean_Parser_Term_instBinder_formatter___boxed), 5, 0);
v___x_2294_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_orelse_formatter___boxed), 7, 2);
lean_closure_set(v___x_2294_, 0, v___x_2292_);
lean_closure_set(v___x_2294_, 1, v___x_2293_);
v___x_2295_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_orelse_formatter___boxed), 7, 2);
lean_closure_set(v___x_2295_, 0, v___x_2290_);
lean_closure_set(v___x_2295_, 1, v___x_2294_);
v___x_2296_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_orelse_formatter___boxed), 7, 2);
lean_closure_set(v___x_2296_, 0, v___x_2288_);
lean_closure_set(v___x_2296_, 1, v___x_2295_);
v___x_2297_ = l_Lean_PrettyPrinter_Formatter_orelse_formatter(v___x_2286_, v___x_2296_, v_a_2281_, v_a_2282_, v_a_2283_, v_a_2284_);
return v___x_2297_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Term_bracketedBinder_formatter___boxed(lean_object* v_requireType_2298_, lean_object* v_a_2299_, lean_object* v_a_2300_, lean_object* v_a_2301_, lean_object* v_a_2302_, lean_object* v_a_2303_){
_start:
{
uint8_t v_requireType_boxed_2304_; lean_object* v_res_2305_; 
v_requireType_boxed_2304_ = lean_unbox(v_requireType_2298_);
v_res_2305_ = l_Lean_Parser_Term_bracketedBinder_formatter(v_requireType_boxed_2304_, v_a_2299_, v_a_2300_, v_a_2301_, v_a_2302_);
lean_dec(v_a_2302_);
lean_dec_ref(v_a_2301_);
lean_dec(v_a_2300_);
lean_dec_ref(v_a_2299_);
return v_res_2305_;
}
}
static lean_object* _init_l_Lean_Parser_Term_explicitBinder_parenthesizer___closed__2(void){
_start:
{
lean_object* v___x_2315_; lean_object* v___x_2316_; 
v___x_2315_ = lean_alloc_closure((void*)(l_Lean_Parser_Term_binderIdent_parenthesizer___boxed), 5, 0);
v___x_2316_ = lean_alloc_closure((void*)(l_Lean_Parser_many1_parenthesizer___boxed), 6, 1);
lean_closure_set(v___x_2316_, 0, v___x_2315_);
return v___x_2316_;
}
}
static lean_object* _init_l_Lean_Parser_Term_explicitBinder_parenthesizer___closed__3(void){
_start:
{
lean_object* v___x_2317_; lean_object* v___x_2318_; lean_object* v___x_2319_; 
v___x_2317_ = lean_alloc_closure((void*)(l_Lean_Parser_Term_binderDefault_parenthesizer___boxed), 5, 0);
v___x_2318_ = lean_alloc_closure((void*)(l_Lean_Parser_Term_binderTactic_parenthesizer___boxed), 5, 0);
v___x_2319_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_orelse_parenthesizer___boxed), 7, 2);
lean_closure_set(v___x_2319_, 0, v___x_2318_);
lean_closure_set(v___x_2319_, 1, v___x_2317_);
return v___x_2319_;
}
}
static lean_object* _init_l_Lean_Parser_Term_explicitBinder_parenthesizer___closed__4(void){
_start:
{
lean_object* v___x_2320_; lean_object* v___x_2321_; 
v___x_2320_ = lean_obj_once(&l_Lean_Parser_Term_explicitBinder_parenthesizer___closed__3, &l_Lean_Parser_Term_explicitBinder_parenthesizer___closed__3_once, _init_l_Lean_Parser_Term_explicitBinder_parenthesizer___closed__3);
v___x_2321_ = lean_alloc_closure((void*)(l_Lean_Parser_optional_parenthesizer___boxed), 6, 1);
lean_closure_set(v___x_2321_, 0, v___x_2320_);
return v___x_2321_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Term_explicitBinder_parenthesizer(uint8_t v_requireType_2324_, lean_object* v_a_2325_, lean_object* v_a_2326_, lean_object* v_a_2327_, lean_object* v_a_2328_){
_start:
{
lean_object* v___x_2330_; lean_object* v___x_2331_; lean_object* v___x_2332_; lean_object* v___x_2333_; lean_object* v___x_2334_; lean_object* v___x_2335_; lean_object* v___x_2336_; lean_object* v___x_2337_; lean_object* v___x_2338_; lean_object* v___x_2339_; lean_object* v___x_2340_; lean_object* v___x_2341_; lean_object* v___x_2342_; lean_object* v___x_2343_; lean_object* v___x_2344_; lean_object* v___x_2345_; lean_object* v___x_2346_; 
v___x_2330_ = ((lean_object*)(l_Lean_Parser_Term_explicitBinder___closed__1));
v___x_2331_ = ((lean_object*)(l_Lean_Parser_Term_explicitBinder_parenthesizer___closed__0));
v___x_2332_ = lean_unsigned_to_nat(1024u);
v___x_2333_ = ((lean_object*)(l_Lean_Parser_Term_explicitBinder_parenthesizer___closed__1));
v___x_2334_ = lean_obj_once(&l_Lean_Parser_Term_explicitBinder_parenthesizer___closed__2, &l_Lean_Parser_Term_explicitBinder_parenthesizer___closed__2_once, _init_l_Lean_Parser_Term_explicitBinder_parenthesizer___closed__2);
v___x_2335_ = lean_box(v_requireType_2324_);
v___x_2336_ = lean_alloc_closure((void*)(l_Lean_Parser_Term_binderType_parenthesizer___boxed), 6, 1);
lean_closure_set(v___x_2336_, 0, v___x_2335_);
v___x_2337_ = lean_obj_once(&l_Lean_Parser_Term_explicitBinder_parenthesizer___closed__4, &l_Lean_Parser_Term_explicitBinder_parenthesizer___closed__4_once, _init_l_Lean_Parser_Term_explicitBinder_parenthesizer___closed__4);
v___x_2338_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed), 7, 2);
lean_closure_set(v___x_2338_, 0, v___x_2336_);
lean_closure_set(v___x_2338_, 1, v___x_2337_);
v___x_2339_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed), 7, 2);
lean_closure_set(v___x_2339_, 0, v___x_2334_);
lean_closure_set(v___x_2339_, 1, v___x_2338_);
v___x_2340_ = lean_alloc_closure((void*)(l_Lean_Parser_withoutPosition_parenthesizer___boxed), 6, 1);
lean_closure_set(v___x_2340_, 0, v___x_2339_);
v___x_2341_ = ((lean_object*)(l_Lean_Parser_Term_explicitBinder_parenthesizer___closed__5));
v___x_2342_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed), 7, 2);
lean_closure_set(v___x_2342_, 0, v___x_2340_);
lean_closure_set(v___x_2342_, 1, v___x_2341_);
v___x_2343_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed), 7, 2);
lean_closure_set(v___x_2343_, 0, v___x_2333_);
lean_closure_set(v___x_2343_, 1, v___x_2342_);
v___x_2344_ = lean_alloc_closure((void*)(l_Lean_Parser_ppGroup_parenthesizer___boxed), 6, 1);
lean_closure_set(v___x_2344_, 0, v___x_2343_);
v___x_2345_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_leadingNode_parenthesizer___boxed), 8, 3);
lean_closure_set(v___x_2345_, 0, v___x_2330_);
lean_closure_set(v___x_2345_, 1, v___x_2332_);
lean_closure_set(v___x_2345_, 2, v___x_2344_);
v___x_2346_ = l_Lean_PrettyPrinter_Parenthesizer_withAntiquot_parenthesizer(v___x_2331_, v___x_2345_, v_a_2325_, v_a_2326_, v_a_2327_, v_a_2328_);
return v___x_2346_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Term_explicitBinder_parenthesizer___boxed(lean_object* v_requireType_2347_, lean_object* v_a_2348_, lean_object* v_a_2349_, lean_object* v_a_2350_, lean_object* v_a_2351_, lean_object* v_a_2352_){
_start:
{
uint8_t v_requireType_boxed_2353_; lean_object* v_res_2354_; 
v_requireType_boxed_2353_ = lean_unbox(v_requireType_2347_);
v_res_2354_ = l_Lean_Parser_Term_explicitBinder_parenthesizer(v_requireType_boxed_2353_, v_a_2348_, v_a_2349_, v_a_2350_, v_a_2351_);
lean_dec(v_a_2351_);
lean_dec_ref(v_a_2350_);
lean_dec(v_a_2349_);
lean_dec_ref(v_a_2348_);
return v_res_2354_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Term_strictImplicitLeftBracket_parenthesizer___lam__0(lean_object* v___x_2355_, lean_object* v___y_2356_, lean_object* v___y_2357_, lean_object* v___y_2358_, lean_object* v___y_2359_){
_start:
{
lean_object* v___x_2361_; 
v___x_2361_ = l_Lean_Parser_group_parenthesizer(v___x_2355_, v___y_2356_, v___y_2357_, v___y_2358_, v___y_2359_);
return v___x_2361_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Term_strictImplicitLeftBracket_parenthesizer___lam__0___boxed(lean_object* v___x_2362_, lean_object* v___y_2363_, lean_object* v___y_2364_, lean_object* v___y_2365_, lean_object* v___y_2366_, lean_object* v___y_2367_){
_start:
{
lean_object* v_res_2368_; 
v_res_2368_ = l_Lean_Parser_Term_strictImplicitLeftBracket_parenthesizer___lam__0(v___x_2362_, v___y_2363_, v___y_2364_, v___y_2365_, v___y_2366_);
lean_dec(v___y_2366_);
lean_dec_ref(v___y_2365_);
lean_dec(v___y_2364_);
lean_dec_ref(v___y_2363_);
return v_res_2368_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Term_strictImplicitLeftBracket_parenthesizer(lean_object* v_a_2377_, lean_object* v_a_2378_, lean_object* v_a_2379_, lean_object* v_a_2380_){
_start:
{
lean_object* v___f_2382_; lean_object* v___x_2383_; lean_object* v___x_2384_; 
v___f_2382_ = ((lean_object*)(l_Lean_Parser_Term_strictImplicitLeftBracket_parenthesizer___closed__2));
v___x_2383_ = ((lean_object*)(l_Lean_Parser_Term_strictImplicitLeftBracket_parenthesizer___closed__3));
v___x_2384_ = l_Lean_PrettyPrinter_Parenthesizer_orelse_parenthesizer(v___f_2382_, v___x_2383_, v_a_2377_, v_a_2378_, v_a_2379_, v_a_2380_);
return v___x_2384_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Term_strictImplicitLeftBracket_parenthesizer___boxed(lean_object* v_a_2385_, lean_object* v_a_2386_, lean_object* v_a_2387_, lean_object* v_a_2388_, lean_object* v_a_2389_){
_start:
{
lean_object* v_res_2390_; 
v_res_2390_ = l_Lean_Parser_Term_strictImplicitLeftBracket_parenthesizer(v_a_2385_, v_a_2386_, v_a_2387_, v_a_2388_);
lean_dec(v_a_2388_);
lean_dec_ref(v_a_2387_);
lean_dec(v_a_2386_);
lean_dec_ref(v_a_2385_);
return v_res_2390_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Term_strictImplicitRightBracket_parenthesizer(lean_object* v_a_2397_, lean_object* v_a_2398_, lean_object* v_a_2399_, lean_object* v_a_2400_){
_start:
{
lean_object* v___f_2402_; lean_object* v___x_2403_; lean_object* v___x_2404_; 
v___f_2402_ = ((lean_object*)(l_Lean_Parser_Term_strictImplicitRightBracket_parenthesizer___closed__1));
v___x_2403_ = ((lean_object*)(l_Lean_Parser_Term_strictImplicitRightBracket_parenthesizer___closed__2));
v___x_2404_ = l_Lean_PrettyPrinter_Parenthesizer_orelse_parenthesizer(v___f_2402_, v___x_2403_, v_a_2397_, v_a_2398_, v_a_2399_, v_a_2400_);
return v___x_2404_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Term_strictImplicitRightBracket_parenthesizer___boxed(lean_object* v_a_2405_, lean_object* v_a_2406_, lean_object* v_a_2407_, lean_object* v_a_2408_, lean_object* v_a_2409_){
_start:
{
lean_object* v_res_2410_; 
v_res_2410_ = l_Lean_Parser_Term_strictImplicitRightBracket_parenthesizer(v_a_2405_, v_a_2406_, v_a_2407_, v_a_2408_);
lean_dec(v_a_2408_);
lean_dec_ref(v_a_2407_);
lean_dec(v_a_2406_);
lean_dec_ref(v_a_2405_);
return v_res_2410_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Term_strictImplicitBinder_parenthesizer(uint8_t v_requireType_2418_, lean_object* v_a_2419_, lean_object* v_a_2420_, lean_object* v_a_2421_, lean_object* v_a_2422_){
_start:
{
lean_object* v___x_2424_; lean_object* v___x_2425_; lean_object* v___x_2426_; lean_object* v___x_2427_; lean_object* v___x_2428_; lean_object* v___x_2429_; lean_object* v___x_2430_; lean_object* v___x_2431_; lean_object* v___x_2432_; lean_object* v___x_2433_; lean_object* v___x_2434_; lean_object* v___x_2435_; lean_object* v___x_2436_; lean_object* v___x_2437_; 
v___x_2424_ = ((lean_object*)(l_Lean_Parser_Term_strictImplicitBinder___closed__1));
v___x_2425_ = ((lean_object*)(l_Lean_Parser_Term_strictImplicitBinder_parenthesizer___closed__0));
v___x_2426_ = lean_unsigned_to_nat(1024u);
v___x_2427_ = lean_alloc_closure((void*)(l_Lean_Parser_Term_strictImplicitLeftBracket_parenthesizer___boxed), 5, 0);
v___x_2428_ = lean_obj_once(&l_Lean_Parser_Term_explicitBinder_parenthesizer___closed__2, &l_Lean_Parser_Term_explicitBinder_parenthesizer___closed__2_once, _init_l_Lean_Parser_Term_explicitBinder_parenthesizer___closed__2);
v___x_2429_ = lean_box(v_requireType_2418_);
v___x_2430_ = lean_alloc_closure((void*)(l_Lean_Parser_Term_binderType_parenthesizer___boxed), 6, 1);
lean_closure_set(v___x_2430_, 0, v___x_2429_);
v___x_2431_ = lean_alloc_closure((void*)(l_Lean_Parser_Term_strictImplicitRightBracket_parenthesizer___boxed), 5, 0);
v___x_2432_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed), 7, 2);
lean_closure_set(v___x_2432_, 0, v___x_2430_);
lean_closure_set(v___x_2432_, 1, v___x_2431_);
v___x_2433_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed), 7, 2);
lean_closure_set(v___x_2433_, 0, v___x_2428_);
lean_closure_set(v___x_2433_, 1, v___x_2432_);
v___x_2434_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed), 7, 2);
lean_closure_set(v___x_2434_, 0, v___x_2427_);
lean_closure_set(v___x_2434_, 1, v___x_2433_);
v___x_2435_ = lean_alloc_closure((void*)(l_Lean_Parser_ppGroup_parenthesizer___boxed), 6, 1);
lean_closure_set(v___x_2435_, 0, v___x_2434_);
v___x_2436_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_leadingNode_parenthesizer___boxed), 8, 3);
lean_closure_set(v___x_2436_, 0, v___x_2424_);
lean_closure_set(v___x_2436_, 1, v___x_2426_);
lean_closure_set(v___x_2436_, 2, v___x_2435_);
v___x_2437_ = l_Lean_PrettyPrinter_Parenthesizer_withAntiquot_parenthesizer(v___x_2425_, v___x_2436_, v_a_2419_, v_a_2420_, v_a_2421_, v_a_2422_);
return v___x_2437_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Term_strictImplicitBinder_parenthesizer___boxed(lean_object* v_requireType_2438_, lean_object* v_a_2439_, lean_object* v_a_2440_, lean_object* v_a_2441_, lean_object* v_a_2442_, lean_object* v_a_2443_){
_start:
{
uint8_t v_requireType_boxed_2444_; lean_object* v_res_2445_; 
v_requireType_boxed_2444_ = lean_unbox(v_requireType_2438_);
v_res_2445_ = l_Lean_Parser_Term_strictImplicitBinder_parenthesizer(v_requireType_boxed_2444_, v_a_2439_, v_a_2440_, v_a_2441_, v_a_2442_);
lean_dec(v_a_2442_);
lean_dec_ref(v_a_2441_);
lean_dec(v_a_2440_);
lean_dec_ref(v_a_2439_);
return v_res_2445_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Term_implicitBinder_parenthesizer(uint8_t v_requireType_2453_, lean_object* v_a_2454_, lean_object* v_a_2455_, lean_object* v_a_2456_, lean_object* v_a_2457_){
_start:
{
lean_object* v___x_2459_; lean_object* v___x_2460_; lean_object* v___x_2461_; lean_object* v___x_2462_; lean_object* v___x_2463_; lean_object* v___x_2464_; lean_object* v___x_2465_; lean_object* v___x_2466_; lean_object* v___x_2467_; lean_object* v___x_2468_; lean_object* v___x_2469_; lean_object* v___x_2470_; lean_object* v___x_2471_; lean_object* v___x_2472_; lean_object* v___x_2473_; 
v___x_2459_ = ((lean_object*)(l_Lean_Parser_Term_implicitBinder___closed__1));
v___x_2460_ = ((lean_object*)(l_Lean_Parser_Term_implicitBinder_parenthesizer___closed__0));
v___x_2461_ = lean_unsigned_to_nat(1024u);
v___x_2462_ = ((lean_object*)(l_Lean_Parser_Term_strictImplicitLeftBracket_parenthesizer___closed__0));
v___x_2463_ = lean_obj_once(&l_Lean_Parser_Term_explicitBinder_parenthesizer___closed__2, &l_Lean_Parser_Term_explicitBinder_parenthesizer___closed__2_once, _init_l_Lean_Parser_Term_explicitBinder_parenthesizer___closed__2);
v___x_2464_ = lean_box(v_requireType_2453_);
v___x_2465_ = lean_alloc_closure((void*)(l_Lean_Parser_Term_binderType_parenthesizer___boxed), 6, 1);
lean_closure_set(v___x_2465_, 0, v___x_2464_);
v___x_2466_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed), 7, 2);
lean_closure_set(v___x_2466_, 0, v___x_2463_);
lean_closure_set(v___x_2466_, 1, v___x_2465_);
v___x_2467_ = lean_alloc_closure((void*)(l_Lean_Parser_withoutPosition_parenthesizer___boxed), 6, 1);
lean_closure_set(v___x_2467_, 0, v___x_2466_);
v___x_2468_ = ((lean_object*)(l_Lean_Parser_Tactic_tacticSeqBracketed_parenthesizer___closed__6));
v___x_2469_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed), 7, 2);
lean_closure_set(v___x_2469_, 0, v___x_2467_);
lean_closure_set(v___x_2469_, 1, v___x_2468_);
v___x_2470_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed), 7, 2);
lean_closure_set(v___x_2470_, 0, v___x_2462_);
lean_closure_set(v___x_2470_, 1, v___x_2469_);
v___x_2471_ = lean_alloc_closure((void*)(l_Lean_Parser_ppGroup_parenthesizer___boxed), 6, 1);
lean_closure_set(v___x_2471_, 0, v___x_2470_);
v___x_2472_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_leadingNode_parenthesizer___boxed), 8, 3);
lean_closure_set(v___x_2472_, 0, v___x_2459_);
lean_closure_set(v___x_2472_, 1, v___x_2461_);
lean_closure_set(v___x_2472_, 2, v___x_2471_);
v___x_2473_ = l_Lean_PrettyPrinter_Parenthesizer_withAntiquot_parenthesizer(v___x_2460_, v___x_2472_, v_a_2454_, v_a_2455_, v_a_2456_, v_a_2457_);
return v___x_2473_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Term_implicitBinder_parenthesizer___boxed(lean_object* v_requireType_2474_, lean_object* v_a_2475_, lean_object* v_a_2476_, lean_object* v_a_2477_, lean_object* v_a_2478_, lean_object* v_a_2479_){
_start:
{
uint8_t v_requireType_boxed_2480_; lean_object* v_res_2481_; 
v_requireType_boxed_2480_ = lean_unbox(v_requireType_2474_);
v_res_2481_ = l_Lean_Parser_Term_implicitBinder_parenthesizer(v_requireType_boxed_2480_, v_a_2475_, v_a_2476_, v_a_2477_, v_a_2478_);
lean_dec(v_a_2478_);
lean_dec_ref(v_a_2477_);
lean_dec(v_a_2476_);
lean_dec_ref(v_a_2475_);
return v_res_2481_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Term_optIdent_parenthesizer(lean_object* v_a_2485_, lean_object* v_a_2486_, lean_object* v_a_2487_, lean_object* v_a_2488_){
_start:
{
lean_object* v___f_2490_; lean_object* v___x_2491_; 
v___f_2490_ = ((lean_object*)(l_Lean_Parser_Term_optIdent_parenthesizer___closed__0));
v___x_2491_ = l_Lean_Parser_optional_parenthesizer(v___f_2490_, v_a_2485_, v_a_2486_, v_a_2487_, v_a_2488_);
return v___x_2491_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Term_optIdent_parenthesizer___boxed(lean_object* v_a_2492_, lean_object* v_a_2493_, lean_object* v_a_2494_, lean_object* v_a_2495_, lean_object* v_a_2496_){
_start:
{
lean_object* v_res_2497_; 
v_res_2497_ = l_Lean_Parser_Term_optIdent_parenthesizer(v_a_2492_, v_a_2493_, v_a_2494_, v_a_2495_);
lean_dec(v_a_2495_);
lean_dec_ref(v_a_2494_);
lean_dec(v_a_2493_);
lean_dec_ref(v_a_2492_);
return v_res_2497_;
}
}
static lean_object* _init_l_Lean_Parser_Term_instBinder_parenthesizer___closed__2(void){
_start:
{
lean_object* v___x_2507_; lean_object* v___x_2508_; lean_object* v___x_2509_; 
v___x_2507_ = ((lean_object*)(l_Lean_Parser_Term_binderType_parenthesizer___closed__1));
v___x_2508_ = lean_alloc_closure((void*)(l_Lean_Parser_Term_optIdent_parenthesizer___boxed), 5, 0);
v___x_2509_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed), 7, 2);
lean_closure_set(v___x_2509_, 0, v___x_2508_);
lean_closure_set(v___x_2509_, 1, v___x_2507_);
return v___x_2509_;
}
}
static lean_object* _init_l_Lean_Parser_Term_instBinder_parenthesizer___closed__3(void){
_start:
{
lean_object* v___x_2510_; lean_object* v___x_2511_; 
v___x_2510_ = lean_obj_once(&l_Lean_Parser_Term_instBinder_parenthesizer___closed__2, &l_Lean_Parser_Term_instBinder_parenthesizer___closed__2_once, _init_l_Lean_Parser_Term_instBinder_parenthesizer___closed__2);
v___x_2511_ = lean_alloc_closure((void*)(l_Lean_Parser_withoutPosition_parenthesizer___boxed), 6, 1);
lean_closure_set(v___x_2511_, 0, v___x_2510_);
return v___x_2511_;
}
}
static lean_object* _init_l_Lean_Parser_Term_instBinder_parenthesizer___closed__5(void){
_start:
{
lean_object* v___x_2514_; lean_object* v___x_2515_; lean_object* v___x_2516_; 
v___x_2514_ = ((lean_object*)(l_Lean_Parser_Term_instBinder_parenthesizer___closed__4));
v___x_2515_ = lean_obj_once(&l_Lean_Parser_Term_instBinder_parenthesizer___closed__3, &l_Lean_Parser_Term_instBinder_parenthesizer___closed__3_once, _init_l_Lean_Parser_Term_instBinder_parenthesizer___closed__3);
v___x_2516_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed), 7, 2);
lean_closure_set(v___x_2516_, 0, v___x_2515_);
lean_closure_set(v___x_2516_, 1, v___x_2514_);
return v___x_2516_;
}
}
static lean_object* _init_l_Lean_Parser_Term_instBinder_parenthesizer___closed__6(void){
_start:
{
lean_object* v___x_2517_; lean_object* v___x_2518_; lean_object* v___x_2519_; 
v___x_2517_ = lean_obj_once(&l_Lean_Parser_Term_instBinder_parenthesizer___closed__5, &l_Lean_Parser_Term_instBinder_parenthesizer___closed__5_once, _init_l_Lean_Parser_Term_instBinder_parenthesizer___closed__5);
v___x_2518_ = ((lean_object*)(l_Lean_Parser_Term_instBinder_parenthesizer___closed__1));
v___x_2519_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed), 7, 2);
lean_closure_set(v___x_2519_, 0, v___x_2518_);
lean_closure_set(v___x_2519_, 1, v___x_2517_);
return v___x_2519_;
}
}
static lean_object* _init_l_Lean_Parser_Term_instBinder_parenthesizer___closed__7(void){
_start:
{
lean_object* v___x_2520_; lean_object* v___x_2521_; 
v___x_2520_ = lean_obj_once(&l_Lean_Parser_Term_instBinder_parenthesizer___closed__6, &l_Lean_Parser_Term_instBinder_parenthesizer___closed__6_once, _init_l_Lean_Parser_Term_instBinder_parenthesizer___closed__6);
v___x_2521_ = lean_alloc_closure((void*)(l_Lean_Parser_ppGroup_parenthesizer___boxed), 6, 1);
lean_closure_set(v___x_2521_, 0, v___x_2520_);
return v___x_2521_;
}
}
static lean_object* _init_l_Lean_Parser_Term_instBinder_parenthesizer___closed__8(void){
_start:
{
lean_object* v___x_2522_; lean_object* v___x_2523_; lean_object* v___x_2524_; lean_object* v___x_2525_; 
v___x_2522_ = lean_obj_once(&l_Lean_Parser_Term_instBinder_parenthesizer___closed__7, &l_Lean_Parser_Term_instBinder_parenthesizer___closed__7_once, _init_l_Lean_Parser_Term_instBinder_parenthesizer___closed__7);
v___x_2523_ = lean_unsigned_to_nat(1024u);
v___x_2524_ = ((lean_object*)(l_Lean_Parser_Term_instBinder___closed__1));
v___x_2525_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_leadingNode_parenthesizer___boxed), 8, 3);
lean_closure_set(v___x_2525_, 0, v___x_2524_);
lean_closure_set(v___x_2525_, 1, v___x_2523_);
lean_closure_set(v___x_2525_, 2, v___x_2522_);
return v___x_2525_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Term_instBinder_parenthesizer(lean_object* v_a_2526_, lean_object* v_a_2527_, lean_object* v_a_2528_, lean_object* v_a_2529_){
_start:
{
lean_object* v___x_2531_; lean_object* v___x_2532_; lean_object* v___x_2533_; 
v___x_2531_ = ((lean_object*)(l_Lean_Parser_Term_instBinder_parenthesizer___closed__0));
v___x_2532_ = lean_obj_once(&l_Lean_Parser_Term_instBinder_parenthesizer___closed__8, &l_Lean_Parser_Term_instBinder_parenthesizer___closed__8_once, _init_l_Lean_Parser_Term_instBinder_parenthesizer___closed__8);
v___x_2533_ = l_Lean_PrettyPrinter_Parenthesizer_withAntiquot_parenthesizer(v___x_2531_, v___x_2532_, v_a_2526_, v_a_2527_, v_a_2528_, v_a_2529_);
return v___x_2533_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Term_instBinder_parenthesizer___boxed(lean_object* v_a_2534_, lean_object* v_a_2535_, lean_object* v_a_2536_, lean_object* v_a_2537_, lean_object* v_a_2538_){
_start:
{
lean_object* v_res_2539_; 
v_res_2539_ = l_Lean_Parser_Term_instBinder_parenthesizer(v_a_2534_, v_a_2535_, v_a_2536_, v_a_2537_);
lean_dec(v_a_2537_);
lean_dec_ref(v_a_2536_);
lean_dec(v_a_2535_);
lean_dec_ref(v_a_2534_);
return v_res_2539_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_bracketedBinder___regBuiltin_Lean_Parser_Term_instBinder_parenthesizer__37(){
_start:
{
lean_object* v___x_2547_; lean_object* v___x_2548_; lean_object* v___x_2549_; lean_object* v___x_2550_; lean_object* v___x_2551_; 
v___x_2547_ = l_Lean_PrettyPrinter_parenthesizerAttribute;
v___x_2548_ = ((lean_object*)(l_Lean_Parser_Term_instBinder___closed__1));
v___x_2549_ = ((lean_object*)(l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_bracketedBinder___regBuiltin_Lean_Parser_Term_instBinder_parenthesizer__37___closed__0));
v___x_2550_ = lean_alloc_closure((void*)(l_Lean_Parser_Term_instBinder_parenthesizer___boxed), 5, 0);
v___x_2551_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_2547_, v___x_2548_, v___x_2549_, v___x_2550_);
return v___x_2551_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_bracketedBinder___regBuiltin_Lean_Parser_Term_instBinder_parenthesizer__37___boxed(lean_object* v_a_2552_){
_start:
{
lean_object* v_res_2553_; 
v_res_2553_ = l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_bracketedBinder___regBuiltin_Lean_Parser_Term_instBinder_parenthesizer__37();
return v_res_2553_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Term_bracketedBinder_parenthesizer(uint8_t v_requireType_2560_, lean_object* v_a_2561_, lean_object* v_a_2562_, lean_object* v_a_2563_, lean_object* v_a_2564_){
_start:
{
lean_object* v___x_2566_; lean_object* v___x_2567_; lean_object* v___x_2568_; lean_object* v___x_2569_; lean_object* v___x_2570_; lean_object* v___x_2571_; lean_object* v___x_2572_; lean_object* v___x_2573_; lean_object* v___x_2574_; lean_object* v___x_2575_; lean_object* v___x_2576_; lean_object* v___x_2577_; 
v___x_2566_ = ((lean_object*)(l_Lean_Parser_Term_bracketedBinder_parenthesizer___closed__0));
v___x_2567_ = lean_box(v_requireType_2560_);
v___x_2568_ = lean_alloc_closure((void*)(l_Lean_Parser_Term_explicitBinder_parenthesizer___boxed), 6, 1);
lean_closure_set(v___x_2568_, 0, v___x_2567_);
v___x_2569_ = lean_box(v_requireType_2560_);
v___x_2570_ = lean_alloc_closure((void*)(l_Lean_Parser_Term_strictImplicitBinder_parenthesizer___boxed), 6, 1);
lean_closure_set(v___x_2570_, 0, v___x_2569_);
v___x_2571_ = lean_box(v_requireType_2560_);
v___x_2572_ = lean_alloc_closure((void*)(l_Lean_Parser_Term_implicitBinder_parenthesizer___boxed), 6, 1);
lean_closure_set(v___x_2572_, 0, v___x_2571_);
v___x_2573_ = lean_alloc_closure((void*)(l_Lean_Parser_Term_instBinder_parenthesizer___boxed), 5, 0);
v___x_2574_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_orelse_parenthesizer___boxed), 7, 2);
lean_closure_set(v___x_2574_, 0, v___x_2572_);
lean_closure_set(v___x_2574_, 1, v___x_2573_);
v___x_2575_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_orelse_parenthesizer___boxed), 7, 2);
lean_closure_set(v___x_2575_, 0, v___x_2570_);
lean_closure_set(v___x_2575_, 1, v___x_2574_);
v___x_2576_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_orelse_parenthesizer___boxed), 7, 2);
lean_closure_set(v___x_2576_, 0, v___x_2568_);
lean_closure_set(v___x_2576_, 1, v___x_2575_);
v___x_2577_ = l_Lean_PrettyPrinter_Parenthesizer_withAntiquot_parenthesizer(v___x_2566_, v___x_2576_, v_a_2561_, v_a_2562_, v_a_2563_, v_a_2564_);
return v___x_2577_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Term_bracketedBinder_parenthesizer___boxed(lean_object* v_requireType_2578_, lean_object* v_a_2579_, lean_object* v_a_2580_, lean_object* v_a_2581_, lean_object* v_a_2582_, lean_object* v_a_2583_){
_start:
{
uint8_t v_requireType_boxed_2584_; lean_object* v_res_2585_; 
v_requireType_boxed_2584_ = lean_unbox(v_requireType_2578_);
v_res_2585_ = l_Lean_Parser_Term_bracketedBinder_parenthesizer(v_requireType_boxed_2584_, v_a_2579_, v_a_2580_, v_a_2581_, v_a_2582_);
lean_dec(v_a_2582_);
lean_dec_ref(v_a_2581_);
lean_dec(v_a_2580_);
lean_dec_ref(v_a_2579_);
return v_res_2585_;
}
}
static lean_object* _init_l_Lean_Parser_Term_bracketedBinder___closed__0(void){
_start:
{
uint8_t v___x_2586_; lean_object* v___x_2587_; lean_object* v___x_2588_; lean_object* v___x_2589_; 
v___x_2586_ = 1;
v___x_2587_ = ((lean_object*)(l_Lean_Parser_Term_bracketedBinder_formatter___closed__1));
v___x_2588_ = ((lean_object*)(l_Lean_Parser_Term_bracketedBinder_formatter___closed__0));
v___x_2589_ = l_Lean_Parser_mkAntiquot(v___x_2588_, v___x_2587_, v___x_2586_, v___x_2586_);
return v___x_2589_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Term_bracketedBinder(uint8_t v_requireType_2590_){
_start:
{
lean_object* v___x_2591_; lean_object* v___x_2592_; lean_object* v___x_2593_; lean_object* v___x_2594_; lean_object* v___x_2595_; lean_object* v___x_2596_; lean_object* v___x_2597_; lean_object* v___x_2598_; lean_object* v___x_2599_; 
v___x_2591_ = lean_obj_once(&l_Lean_Parser_Term_bracketedBinder___closed__0, &l_Lean_Parser_Term_bracketedBinder___closed__0_once, _init_l_Lean_Parser_Term_bracketedBinder___closed__0);
v___x_2592_ = l_Lean_Parser_Term_explicitBinder(v_requireType_2590_);
v___x_2593_ = l_Lean_Parser_Term_strictImplicitBinder(v_requireType_2590_);
v___x_2594_ = l_Lean_Parser_Term_implicitBinder(v_requireType_2590_);
v___x_2595_ = l_Lean_Parser_Term_instBinder;
v___x_2596_ = l_Lean_Parser_orelse(v___x_2594_, v___x_2595_);
v___x_2597_ = l_Lean_Parser_orelse(v___x_2593_, v___x_2596_);
v___x_2598_ = l_Lean_Parser_orelse(v___x_2592_, v___x_2597_);
v___x_2599_ = l_Lean_Parser_withAntiquot(v___x_2591_, v___x_2598_);
return v___x_2599_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Term_bracketedBinder___boxed(lean_object* v_requireType_2600_){
_start:
{
uint8_t v_requireType_boxed_2601_; lean_object* v_res_2602_; 
v_requireType_boxed_2601_ = lean_unbox(v_requireType_2600_);
v_res_2602_ = l_Lean_Parser_Term_bracketedBinder(v_requireType_boxed_2601_);
return v_res_2602_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_bracketedBinder___regBuiltin_Lean_Parser_Term_bracketedBinder_docString__1(){
_start:
{
lean_object* v___x_2605_; lean_object* v___x_2606_; lean_object* v___x_2607_; 
v___x_2605_ = ((lean_object*)(l_Lean_Parser_Term_bracketedBinder_formatter___closed__1));
v___x_2606_ = ((lean_object*)(l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_bracketedBinder___regBuiltin_Lean_Parser_Term_bracketedBinder_docString__1___closed__0));
v___x_2607_ = l_Lean_addBuiltinDocString(v___x_2605_, v___x_2606_);
return v___x_2607_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_bracketedBinder___regBuiltin_Lean_Parser_Term_bracketedBinder_docString__1___boxed(lean_object* v_a_2608_){
_start:
{
lean_object* v_res_2609_; 
v_res_2609_ = l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_bracketedBinder___regBuiltin_Lean_Parser_Term_bracketedBinder_docString__1();
return v_res_2609_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Term_typeSpec_formatter(lean_object* v_a_2627_, lean_object* v_a_2628_, lean_object* v_a_2629_, lean_object* v_a_2630_){
_start:
{
lean_object* v___x_2632_; lean_object* v___x_2633_; lean_object* v___x_2634_; 
v___x_2632_ = ((lean_object*)(l_Lean_Parser_Term_typeSpec_formatter___closed__2));
v___x_2633_ = ((lean_object*)(l_Lean_Parser_Term_typeSpec_formatter___closed__3));
v___x_2634_ = l_Lean_PrettyPrinter_Formatter_orelse_formatter(v___x_2632_, v___x_2633_, v_a_2627_, v_a_2628_, v_a_2629_, v_a_2630_);
return v___x_2634_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Term_typeSpec_formatter___boxed(lean_object* v_a_2635_, lean_object* v_a_2636_, lean_object* v_a_2637_, lean_object* v_a_2638_, lean_object* v_a_2639_){
_start:
{
lean_object* v_res_2640_; 
v_res_2640_ = l_Lean_Parser_Term_typeSpec_formatter(v_a_2635_, v_a_2636_, v_a_2637_, v_a_2638_);
lean_dec(v_a_2638_);
lean_dec_ref(v_a_2637_);
lean_dec(v_a_2636_);
lean_dec_ref(v_a_2635_);
return v_res_2640_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_typeSpec___regBuiltin_Lean_Parser_Term_typeSpec_formatter__3(){
_start:
{
lean_object* v___x_2648_; lean_object* v___x_2649_; lean_object* v___x_2650_; lean_object* v___x_2651_; lean_object* v___x_2652_; 
v___x_2648_ = l_Lean_PrettyPrinter_formatterAttribute;
v___x_2649_ = ((lean_object*)(l_Lean_Parser_Term_typeSpec_formatter___closed__1));
v___x_2650_ = ((lean_object*)(l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_typeSpec___regBuiltin_Lean_Parser_Term_typeSpec_formatter__3___closed__0));
v___x_2651_ = lean_alloc_closure((void*)(l_Lean_Parser_Term_typeSpec_formatter___boxed), 5, 0);
v___x_2652_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_2648_, v___x_2649_, v___x_2650_, v___x_2651_);
return v___x_2652_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_typeSpec___regBuiltin_Lean_Parser_Term_typeSpec_formatter__3___boxed(lean_object* v_a_2653_){
_start:
{
lean_object* v_res_2654_; 
v_res_2654_ = l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_typeSpec___regBuiltin_Lean_Parser_Term_typeSpec_formatter__3();
return v_res_2654_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Term_typeSpec_parenthesizer(lean_object* v_a_2666_, lean_object* v_a_2667_, lean_object* v_a_2668_, lean_object* v_a_2669_){
_start:
{
lean_object* v___x_2671_; lean_object* v___x_2672_; lean_object* v___x_2673_; 
v___x_2671_ = ((lean_object*)(l_Lean_Parser_Term_typeSpec_parenthesizer___closed__0));
v___x_2672_ = ((lean_object*)(l_Lean_Parser_Term_typeSpec_parenthesizer___closed__1));
v___x_2673_ = l_Lean_PrettyPrinter_Parenthesizer_withAntiquot_parenthesizer(v___x_2671_, v___x_2672_, v_a_2666_, v_a_2667_, v_a_2668_, v_a_2669_);
return v___x_2673_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Term_typeSpec_parenthesizer___boxed(lean_object* v_a_2674_, lean_object* v_a_2675_, lean_object* v_a_2676_, lean_object* v_a_2677_, lean_object* v_a_2678_){
_start:
{
lean_object* v_res_2679_; 
v_res_2679_ = l_Lean_Parser_Term_typeSpec_parenthesizer(v_a_2674_, v_a_2675_, v_a_2676_, v_a_2677_);
lean_dec(v_a_2677_);
lean_dec_ref(v_a_2676_);
lean_dec(v_a_2675_);
lean_dec_ref(v_a_2674_);
return v_res_2679_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_typeSpec___regBuiltin_Lean_Parser_Term_typeSpec_parenthesizer__7(){
_start:
{
lean_object* v___x_2687_; lean_object* v___x_2688_; lean_object* v___x_2689_; lean_object* v___x_2690_; lean_object* v___x_2691_; 
v___x_2687_ = l_Lean_PrettyPrinter_parenthesizerAttribute;
v___x_2688_ = ((lean_object*)(l_Lean_Parser_Term_typeSpec_formatter___closed__1));
v___x_2689_ = ((lean_object*)(l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_typeSpec___regBuiltin_Lean_Parser_Term_typeSpec_parenthesizer__7___closed__0));
v___x_2690_ = lean_alloc_closure((void*)(l_Lean_Parser_Term_typeSpec_parenthesizer___boxed), 5, 0);
v___x_2691_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_2687_, v___x_2688_, v___x_2689_, v___x_2690_);
return v___x_2691_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_typeSpec___regBuiltin_Lean_Parser_Term_typeSpec_parenthesizer__7___boxed(lean_object* v_a_2692_){
_start:
{
lean_object* v_res_2693_; 
v_res_2693_ = l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_typeSpec___regBuiltin_Lean_Parser_Term_typeSpec_parenthesizer__7();
return v_res_2693_;
}
}
static lean_object* _init_l_Lean_Parser_Term_typeSpec___closed__0(void){
_start:
{
uint8_t v___x_2694_; uint8_t v___x_2695_; lean_object* v___x_2696_; lean_object* v___x_2697_; lean_object* v___x_2698_; 
v___x_2694_ = 0;
v___x_2695_ = 1;
v___x_2696_ = ((lean_object*)(l_Lean_Parser_Term_typeSpec_formatter___closed__1));
v___x_2697_ = ((lean_object*)(l_Lean_Parser_Term_typeSpec_formatter___closed__0));
v___x_2698_ = l_Lean_Parser_mkAntiquot(v___x_2697_, v___x_2696_, v___x_2695_, v___x_2694_);
return v___x_2698_;
}
}
static lean_object* _init_l_Lean_Parser_Term_typeSpec___closed__1(void){
_start:
{
lean_object* v___x_2699_; lean_object* v___x_2700_; lean_object* v___x_2701_; lean_object* v___x_2702_; 
v___x_2699_ = lean_obj_once(&l_Lean_Parser_Term_binderType___closed__2, &l_Lean_Parser_Term_binderType___closed__2_once, _init_l_Lean_Parser_Term_binderType___closed__2);
v___x_2700_ = lean_unsigned_to_nat(1024u);
v___x_2701_ = ((lean_object*)(l_Lean_Parser_Term_typeSpec_formatter___closed__1));
v___x_2702_ = l_Lean_Parser_leadingNode(v___x_2701_, v___x_2700_, v___x_2699_);
return v___x_2702_;
}
}
static lean_object* _init_l_Lean_Parser_Term_typeSpec___closed__2(void){
_start:
{
lean_object* v___x_2703_; lean_object* v___x_2704_; lean_object* v___x_2705_; 
v___x_2703_ = lean_obj_once(&l_Lean_Parser_Term_typeSpec___closed__1, &l_Lean_Parser_Term_typeSpec___closed__1_once, _init_l_Lean_Parser_Term_typeSpec___closed__1);
v___x_2704_ = lean_obj_once(&l_Lean_Parser_Term_typeSpec___closed__0, &l_Lean_Parser_Term_typeSpec___closed__0_once, _init_l_Lean_Parser_Term_typeSpec___closed__0);
v___x_2705_ = l_Lean_Parser_withAntiquot(v___x_2704_, v___x_2703_);
return v___x_2705_;
}
}
static lean_object* _init_l_Lean_Parser_Term_typeSpec___closed__3(void){
_start:
{
lean_object* v___x_2706_; lean_object* v___x_2707_; lean_object* v___x_2708_; 
v___x_2706_ = lean_obj_once(&l_Lean_Parser_Term_typeSpec___closed__2, &l_Lean_Parser_Term_typeSpec___closed__2_once, _init_l_Lean_Parser_Term_typeSpec___closed__2);
v___x_2707_ = ((lean_object*)(l_Lean_Parser_Term_typeSpec_formatter___closed__1));
v___x_2708_ = l_Lean_Parser_withCache(v___x_2707_, v___x_2706_);
return v___x_2708_;
}
}
static lean_object* _init_l_Lean_Parser_Term_typeSpec(void){
_start:
{
lean_object* v___x_2709_; 
v___x_2709_ = lean_obj_once(&l_Lean_Parser_Term_typeSpec___closed__3, &l_Lean_Parser_Term_typeSpec___closed__3_once, _init_l_Lean_Parser_Term_typeSpec___closed__3);
return v___x_2709_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Term_optType_formatter(lean_object* v_a_2710_, lean_object* v_a_2711_, lean_object* v_a_2712_, lean_object* v_a_2713_){
_start:
{
lean_object* v___x_2715_; lean_object* v___x_2716_; 
v___x_2715_ = lean_alloc_closure((void*)(l_Lean_Parser_Term_typeSpec_formatter___boxed), 5, 0);
v___x_2716_ = l_Lean_Parser_optional_formatter(v___x_2715_, v_a_2710_, v_a_2711_, v_a_2712_, v_a_2713_);
return v___x_2716_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Term_optType_formatter___boxed(lean_object* v_a_2717_, lean_object* v_a_2718_, lean_object* v_a_2719_, lean_object* v_a_2720_, lean_object* v_a_2721_){
_start:
{
lean_object* v_res_2722_; 
v_res_2722_ = l_Lean_Parser_Term_optType_formatter(v_a_2717_, v_a_2718_, v_a_2719_, v_a_2720_);
lean_dec(v_a_2720_);
lean_dec_ref(v_a_2719_);
lean_dec(v_a_2718_);
lean_dec_ref(v_a_2717_);
return v_res_2722_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Term_optType_parenthesizer(lean_object* v_a_2723_, lean_object* v_a_2724_, lean_object* v_a_2725_, lean_object* v_a_2726_){
_start:
{
lean_object* v___x_2728_; lean_object* v___x_2729_; 
v___x_2728_ = lean_alloc_closure((void*)(l_Lean_Parser_Term_typeSpec_parenthesizer___boxed), 5, 0);
v___x_2729_ = l_Lean_Parser_optional_parenthesizer(v___x_2728_, v_a_2723_, v_a_2724_, v_a_2725_, v_a_2726_);
return v___x_2729_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Term_optType_parenthesizer___boxed(lean_object* v_a_2730_, lean_object* v_a_2731_, lean_object* v_a_2732_, lean_object* v_a_2733_, lean_object* v_a_2734_){
_start:
{
lean_object* v_res_2735_; 
v_res_2735_ = l_Lean_Parser_Term_optType_parenthesizer(v_a_2730_, v_a_2731_, v_a_2732_, v_a_2733_);
lean_dec(v_a_2733_);
lean_dec_ref(v_a_2732_);
lean_dec(v_a_2731_);
lean_dec_ref(v_a_2730_);
return v_res_2735_;
}
}
static lean_object* _init_l_Lean_Parser_Term_optType___closed__0(void){
_start:
{
lean_object* v___x_2736_; lean_object* v___x_2737_; 
v___x_2736_ = l_Lean_Parser_Term_typeSpec;
v___x_2737_ = l_Lean_Parser_optional(v___x_2736_);
return v___x_2737_;
}
}
static lean_object* _init_l_Lean_Parser_Term_optType(void){
_start:
{
lean_object* v___x_2738_; 
v___x_2738_ = lean_obj_once(&l_Lean_Parser_Term_optType___closed__0, &l_Lean_Parser_Term_optType___closed__0_once, _init_l_Lean_Parser_Term_optType___closed__0);
return v___x_2738_;
}
}
static lean_object* _init_l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_initFn___closed__4_00___x40_Lean_Parser_Term_Basic_2382944618____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2748_; lean_object* v___x_2749_; lean_object* v___x_2750_; 
v___x_2748_ = ((lean_object*)(l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__12_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2_));
v___x_2749_ = lean_obj_once(&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__18_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2_, &l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__18_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__18_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2_);
v___x_2750_ = l_Lean_Name_str___override(v___x_2749_, v___x_2748_);
return v___x_2750_;
}
}
static lean_object* _init_l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_initFn___closed__5_00___x40_Lean_Parser_Term_Basic_2382944618____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2751_; lean_object* v___x_2752_; lean_object* v___x_2753_; 
v___x_2751_ = ((lean_object*)(l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__19_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2_));
v___x_2752_ = lean_obj_once(&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_initFn___closed__4_00___x40_Lean_Parser_Term_Basic_2382944618____hygCtx___hyg_2_, &l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_initFn___closed__4_00___x40_Lean_Parser_Term_Basic_2382944618____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_initFn___closed__4_00___x40_Lean_Parser_Term_Basic_2382944618____hygCtx___hyg_2_);
v___x_2753_ = l_Lean_Name_str___override(v___x_2752_, v___x_2751_);
return v___x_2753_;
}
}
static lean_object* _init_l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_initFn___closed__6_00___x40_Lean_Parser_Term_Basic_2382944618____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2754_; lean_object* v___x_2755_; lean_object* v___x_2756_; 
v___x_2754_ = ((lean_object*)(l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__21_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2_));
v___x_2755_ = lean_obj_once(&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_initFn___closed__5_00___x40_Lean_Parser_Term_Basic_2382944618____hygCtx___hyg_2_, &l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_initFn___closed__5_00___x40_Lean_Parser_Term_Basic_2382944618____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_initFn___closed__5_00___x40_Lean_Parser_Term_Basic_2382944618____hygCtx___hyg_2_);
v___x_2756_ = l_Lean_Name_str___override(v___x_2755_, v___x_2754_);
return v___x_2756_;
}
}
static lean_object* _init_l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_initFn___closed__7_00___x40_Lean_Parser_Term_Basic_2382944618____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2757_; lean_object* v___x_2758_; lean_object* v___x_2759_; 
v___x_2757_ = ((lean_object*)(l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2_));
v___x_2758_ = lean_obj_once(&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_initFn___closed__6_00___x40_Lean_Parser_Term_Basic_2382944618____hygCtx___hyg_2_, &l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_initFn___closed__6_00___x40_Lean_Parser_Term_Basic_2382944618____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_initFn___closed__6_00___x40_Lean_Parser_Term_Basic_2382944618____hygCtx___hyg_2_);
v___x_2759_ = l_Lean_Name_str___override(v___x_2758_, v___x_2757_);
return v___x_2759_;
}
}
static lean_object* _init_l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_initFn___closed__8_00___x40_Lean_Parser_Term_Basic_2382944618____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2760_; lean_object* v___x_2761_; lean_object* v___x_2762_; 
v___x_2760_ = ((lean_object*)(l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2_));
v___x_2761_ = lean_obj_once(&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_initFn___closed__7_00___x40_Lean_Parser_Term_Basic_2382944618____hygCtx___hyg_2_, &l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_initFn___closed__7_00___x40_Lean_Parser_Term_Basic_2382944618____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_initFn___closed__7_00___x40_Lean_Parser_Term_Basic_2382944618____hygCtx___hyg_2_);
v___x_2762_ = l_Lean_Name_str___override(v___x_2761_, v___x_2760_);
return v___x_2762_;
}
}
static lean_object* _init_l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_initFn___closed__9_00___x40_Lean_Parser_Term_Basic_2382944618____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2763_; lean_object* v___x_2764_; lean_object* v___x_2765_; 
v___x_2763_ = ((lean_object*)(l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__12_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2_));
v___x_2764_ = lean_obj_once(&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_initFn___closed__8_00___x40_Lean_Parser_Term_Basic_2382944618____hygCtx___hyg_2_, &l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_initFn___closed__8_00___x40_Lean_Parser_Term_Basic_2382944618____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_initFn___closed__8_00___x40_Lean_Parser_Term_Basic_2382944618____hygCtx___hyg_2_);
v___x_2765_ = l_Lean_Name_str___override(v___x_2764_, v___x_2763_);
return v___x_2765_;
}
}
static lean_object* _init_l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_initFn___closed__10_00___x40_Lean_Parser_Term_Basic_2382944618____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2766_; lean_object* v___x_2767_; lean_object* v___x_2768_; 
v___x_2766_ = ((lean_object*)(l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__14_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2_));
v___x_2767_ = lean_obj_once(&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_initFn___closed__9_00___x40_Lean_Parser_Term_Basic_2382944618____hygCtx___hyg_2_, &l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_initFn___closed__9_00___x40_Lean_Parser_Term_Basic_2382944618____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_initFn___closed__9_00___x40_Lean_Parser_Term_Basic_2382944618____hygCtx___hyg_2_);
v___x_2768_ = l_Lean_Name_str___override(v___x_2767_, v___x_2766_);
return v___x_2768_;
}
}
static lean_object* _init_l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_initFn___closed__11_00___x40_Lean_Parser_Term_Basic_2382944618____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2769_; lean_object* v___x_2770_; lean_object* v___x_2771_; 
v___x_2769_ = lean_unsigned_to_nat(2382944618u);
v___x_2770_ = lean_obj_once(&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_initFn___closed__10_00___x40_Lean_Parser_Term_Basic_2382944618____hygCtx___hyg_2_, &l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_initFn___closed__10_00___x40_Lean_Parser_Term_Basic_2382944618____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_initFn___closed__10_00___x40_Lean_Parser_Term_Basic_2382944618____hygCtx___hyg_2_);
v___x_2771_ = l_Lean_Name_num___override(v___x_2770_, v___x_2769_);
return v___x_2771_;
}
}
static lean_object* _init_l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_initFn___closed__12_00___x40_Lean_Parser_Term_Basic_2382944618____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2772_; lean_object* v___x_2773_; lean_object* v___x_2774_; 
v___x_2772_ = ((lean_object*)(l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__28_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2_));
v___x_2773_ = lean_obj_once(&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_initFn___closed__11_00___x40_Lean_Parser_Term_Basic_2382944618____hygCtx___hyg_2_, &l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_initFn___closed__11_00___x40_Lean_Parser_Term_Basic_2382944618____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_initFn___closed__11_00___x40_Lean_Parser_Term_Basic_2382944618____hygCtx___hyg_2_);
v___x_2774_ = l_Lean_Name_str___override(v___x_2773_, v___x_2772_);
return v___x_2774_;
}
}
static lean_object* _init_l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_initFn___closed__13_00___x40_Lean_Parser_Term_Basic_2382944618____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2775_; lean_object* v___x_2776_; lean_object* v___x_2777_; 
v___x_2775_ = ((lean_object*)(l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn___closed__30_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2_));
v___x_2776_ = lean_obj_once(&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_initFn___closed__12_00___x40_Lean_Parser_Term_Basic_2382944618____hygCtx___hyg_2_, &l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_initFn___closed__12_00___x40_Lean_Parser_Term_Basic_2382944618____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_initFn___closed__12_00___x40_Lean_Parser_Term_Basic_2382944618____hygCtx___hyg_2_);
v___x_2777_ = l_Lean_Name_str___override(v___x_2776_, v___x_2775_);
return v___x_2777_;
}
}
static lean_object* _init_l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_initFn___closed__14_00___x40_Lean_Parser_Term_Basic_2382944618____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2778_; lean_object* v___x_2779_; lean_object* v___x_2780_; 
v___x_2778_ = lean_unsigned_to_nat(2u);
v___x_2779_ = lean_obj_once(&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_initFn___closed__13_00___x40_Lean_Parser_Term_Basic_2382944618____hygCtx___hyg_2_, &l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_initFn___closed__13_00___x40_Lean_Parser_Term_Basic_2382944618____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_initFn___closed__13_00___x40_Lean_Parser_Term_Basic_2382944618____hygCtx___hyg_2_);
v___x_2780_ = l_Lean_Name_num___override(v___x_2779_, v___x_2778_);
return v___x_2780_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_initFn_00___x40_Lean_Parser_Term_Basic_2382944618____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_2782_; lean_object* v___x_2783_; uint8_t v___x_2784_; lean_object* v___x_2785_; lean_object* v___x_2786_; 
v___x_2782_ = ((lean_object*)(l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_initFn___closed__1_00___x40_Lean_Parser_Term_Basic_2382944618____hygCtx___hyg_2_));
v___x_2783_ = ((lean_object*)(l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_initFn___closed__3_00___x40_Lean_Parser_Term_Basic_2382944618____hygCtx___hyg_2_));
v___x_2784_ = 0;
v___x_2785_ = lean_obj_once(&l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_initFn___closed__14_00___x40_Lean_Parser_Term_Basic_2382944618____hygCtx___hyg_2_, &l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_initFn___closed__14_00___x40_Lean_Parser_Term_Basic_2382944618____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_initFn___closed__14_00___x40_Lean_Parser_Term_Basic_2382944618____hygCtx___hyg_2_);
v___x_2786_ = l_Lean_Parser_registerBuiltinParserAttribute(v___x_2782_, v___x_2783_, v___x_2784_, v___x_2785_);
return v___x_2786_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_initFn_00___x40_Lean_Parser_Term_Basic_2382944618____hygCtx___hyg_2____boxed(lean_object* v_a_2787_){
_start:
{
lean_object* v_res_2788_; 
v_res_2788_ = l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_initFn_00___x40_Lean_Parser_Term_Basic_2382944618____hygCtx___hyg_2_();
return v_res_2788_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Term_structInstFieldDeclParser(lean_object* v_rbp_2791_){
_start:
{
lean_object* v___x_2792_; lean_object* v___x_2793_; 
v___x_2792_ = ((lean_object*)(l_Lean_Parser_Term_structInstFieldDeclParser___closed__0));
v___x_2793_ = l_Lean_Parser_categoryParser(v___x_2792_, v_rbp_2791_);
return v___x_2793_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Term_optEllipsis_formatter(lean_object* v_a_2816_, lean_object* v_a_2817_, lean_object* v_a_2818_, lean_object* v_a_2819_){
_start:
{
lean_object* v___x_2821_; lean_object* v___x_2822_; lean_object* v___x_2823_; 
v___x_2821_ = ((lean_object*)(l_Lean_Parser_Term_optEllipsis_formatter___closed__2));
v___x_2822_ = ((lean_object*)(l_Lean_Parser_Term_optEllipsis_formatter___closed__6));
v___x_2823_ = l_Lean_PrettyPrinter_Formatter_orelse_formatter(v___x_2821_, v___x_2822_, v_a_2816_, v_a_2817_, v_a_2818_, v_a_2819_);
return v___x_2823_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Term_optEllipsis_formatter___boxed(lean_object* v_a_2824_, lean_object* v_a_2825_, lean_object* v_a_2826_, lean_object* v_a_2827_, lean_object* v_a_2828_){
_start:
{
lean_object* v_res_2829_; 
v_res_2829_ = l_Lean_Parser_Term_optEllipsis_formatter(v_a_2824_, v_a_2825_, v_a_2826_, v_a_2827_);
lean_dec(v_a_2827_);
lean_dec_ref(v_a_2826_);
lean_dec(v_a_2825_);
lean_dec_ref(v_a_2824_);
return v_res_2829_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_optEllipsis___regBuiltin_Lean_Parser_Term_optEllipsis_formatter__3(){
_start:
{
lean_object* v___x_2837_; lean_object* v___x_2838_; lean_object* v___x_2839_; lean_object* v___x_2840_; lean_object* v___x_2841_; 
v___x_2837_ = l_Lean_PrettyPrinter_formatterAttribute;
v___x_2838_ = ((lean_object*)(l_Lean_Parser_Term_optEllipsis_formatter___closed__1));
v___x_2839_ = ((lean_object*)(l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_optEllipsis___regBuiltin_Lean_Parser_Term_optEllipsis_formatter__3___closed__0));
v___x_2840_ = lean_alloc_closure((void*)(l_Lean_Parser_Term_optEllipsis_formatter___boxed), 5, 0);
v___x_2841_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_2837_, v___x_2838_, v___x_2839_, v___x_2840_);
return v___x_2841_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_optEllipsis___regBuiltin_Lean_Parser_Term_optEllipsis_formatter__3___boxed(lean_object* v_a_2842_){
_start:
{
lean_object* v_res_2843_; 
v_res_2843_ = l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_optEllipsis___regBuiltin_Lean_Parser_Term_optEllipsis_formatter__3();
return v_res_2843_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Term_optEllipsis_parenthesizer(lean_object* v_a_2859_, lean_object* v_a_2860_, lean_object* v_a_2861_, lean_object* v_a_2862_){
_start:
{
lean_object* v___x_2864_; lean_object* v___x_2865_; lean_object* v___x_2866_; 
v___x_2864_ = ((lean_object*)(l_Lean_Parser_Term_optEllipsis_parenthesizer___closed__0));
v___x_2865_ = ((lean_object*)(l_Lean_Parser_Term_optEllipsis_parenthesizer___closed__3));
v___x_2866_ = l_Lean_PrettyPrinter_Parenthesizer_withAntiquot_parenthesizer(v___x_2864_, v___x_2865_, v_a_2859_, v_a_2860_, v_a_2861_, v_a_2862_);
return v___x_2866_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Term_optEllipsis_parenthesizer___boxed(lean_object* v_a_2867_, lean_object* v_a_2868_, lean_object* v_a_2869_, lean_object* v_a_2870_, lean_object* v_a_2871_){
_start:
{
lean_object* v_res_2872_; 
v_res_2872_ = l_Lean_Parser_Term_optEllipsis_parenthesizer(v_a_2867_, v_a_2868_, v_a_2869_, v_a_2870_);
lean_dec(v_a_2870_);
lean_dec_ref(v_a_2869_);
lean_dec(v_a_2868_);
lean_dec_ref(v_a_2867_);
return v_res_2872_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_optEllipsis___regBuiltin_Lean_Parser_Term_optEllipsis_parenthesizer__7(){
_start:
{
lean_object* v___x_2880_; lean_object* v___x_2881_; lean_object* v___x_2882_; lean_object* v___x_2883_; lean_object* v___x_2884_; 
v___x_2880_ = l_Lean_PrettyPrinter_parenthesizerAttribute;
v___x_2881_ = ((lean_object*)(l_Lean_Parser_Term_optEllipsis_formatter___closed__1));
v___x_2882_ = ((lean_object*)(l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_optEllipsis___regBuiltin_Lean_Parser_Term_optEllipsis_parenthesizer__7___closed__0));
v___x_2883_ = lean_alloc_closure((void*)(l_Lean_Parser_Term_optEllipsis_parenthesizer___boxed), 5, 0);
v___x_2884_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_2880_, v___x_2881_, v___x_2882_, v___x_2883_);
return v___x_2884_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_optEllipsis___regBuiltin_Lean_Parser_Term_optEllipsis_parenthesizer__7___boxed(lean_object* v_a_2885_){
_start:
{
lean_object* v_res_2886_; 
v_res_2886_ = l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_optEllipsis___regBuiltin_Lean_Parser_Term_optEllipsis_parenthesizer__7();
return v_res_2886_;
}
}
static lean_object* _init_l_Lean_Parser_Term_optEllipsis___closed__0(void){
_start:
{
uint8_t v___x_2887_; uint8_t v___x_2888_; lean_object* v___x_2889_; lean_object* v___x_2890_; lean_object* v___x_2891_; 
v___x_2887_ = 0;
v___x_2888_ = 1;
v___x_2889_ = ((lean_object*)(l_Lean_Parser_Term_optEllipsis_formatter___closed__1));
v___x_2890_ = ((lean_object*)(l_Lean_Parser_Term_optEllipsis_formatter___closed__0));
v___x_2891_ = l_Lean_Parser_mkAntiquot(v___x_2890_, v___x_2889_, v___x_2888_, v___x_2887_);
return v___x_2891_;
}
}
static lean_object* _init_l_Lean_Parser_Term_optEllipsis___closed__1(void){
_start:
{
lean_object* v___x_2892_; lean_object* v___x_2893_; 
v___x_2892_ = ((lean_object*)(l_Lean_Parser_Term_optEllipsis_formatter___closed__3));
v___x_2893_ = l_Lean_Parser_symbol(v___x_2892_);
return v___x_2893_;
}
}
static lean_object* _init_l_Lean_Parser_Term_optEllipsis___closed__2(void){
_start:
{
lean_object* v___x_2894_; lean_object* v___x_2895_; 
v___x_2894_ = lean_obj_once(&l_Lean_Parser_Term_optEllipsis___closed__1, &l_Lean_Parser_Term_optEllipsis___closed__1_once, _init_l_Lean_Parser_Term_optEllipsis___closed__1);
v___x_2895_ = l_Lean_Parser_optional(v___x_2894_);
return v___x_2895_;
}
}
static lean_object* _init_l_Lean_Parser_Term_optEllipsis___closed__3(void){
_start:
{
lean_object* v___x_2896_; lean_object* v___x_2897_; lean_object* v___x_2898_; lean_object* v___x_2899_; 
v___x_2896_ = lean_obj_once(&l_Lean_Parser_Term_optEllipsis___closed__2, &l_Lean_Parser_Term_optEllipsis___closed__2_once, _init_l_Lean_Parser_Term_optEllipsis___closed__2);
v___x_2897_ = lean_unsigned_to_nat(1024u);
v___x_2898_ = ((lean_object*)(l_Lean_Parser_Term_optEllipsis_formatter___closed__1));
v___x_2899_ = l_Lean_Parser_leadingNode(v___x_2898_, v___x_2897_, v___x_2896_);
return v___x_2899_;
}
}
static lean_object* _init_l_Lean_Parser_Term_optEllipsis___closed__4(void){
_start:
{
lean_object* v___x_2900_; lean_object* v___x_2901_; lean_object* v___x_2902_; 
v___x_2900_ = lean_obj_once(&l_Lean_Parser_Term_optEllipsis___closed__3, &l_Lean_Parser_Term_optEllipsis___closed__3_once, _init_l_Lean_Parser_Term_optEllipsis___closed__3);
v___x_2901_ = lean_obj_once(&l_Lean_Parser_Term_optEllipsis___closed__0, &l_Lean_Parser_Term_optEllipsis___closed__0_once, _init_l_Lean_Parser_Term_optEllipsis___closed__0);
v___x_2902_ = l_Lean_Parser_withAntiquot(v___x_2901_, v___x_2900_);
return v___x_2902_;
}
}
static lean_object* _init_l_Lean_Parser_Term_optEllipsis___closed__5(void){
_start:
{
lean_object* v___x_2903_; lean_object* v___x_2904_; lean_object* v___x_2905_; 
v___x_2903_ = lean_obj_once(&l_Lean_Parser_Term_optEllipsis___closed__4, &l_Lean_Parser_Term_optEllipsis___closed__4_once, _init_l_Lean_Parser_Term_optEllipsis___closed__4);
v___x_2904_ = ((lean_object*)(l_Lean_Parser_Term_optEllipsis_formatter___closed__1));
v___x_2905_ = l_Lean_Parser_withCache(v___x_2904_, v___x_2903_);
return v___x_2905_;
}
}
static lean_object* _init_l_Lean_Parser_Term_optEllipsis(void){
_start:
{
lean_object* v___x_2906_; 
v___x_2906_ = lean_obj_once(&l_Lean_Parser_Term_optEllipsis___closed__5, &l_Lean_Parser_Term_optEllipsis___closed__5_once, _init_l_Lean_Parser_Term_optEllipsis___closed__5);
return v___x_2906_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Term_structInstArrayRef_formatter(lean_object* v_a_2932_, lean_object* v_a_2933_, lean_object* v_a_2934_, lean_object* v_a_2935_){
_start:
{
lean_object* v___x_2937_; lean_object* v___x_2938_; lean_object* v___x_2939_; 
v___x_2937_ = ((lean_object*)(l_Lean_Parser_Term_structInstArrayRef_formatter___closed__2));
v___x_2938_ = ((lean_object*)(l_Lean_Parser_Term_structInstArrayRef_formatter___closed__6));
v___x_2939_ = l_Lean_PrettyPrinter_Formatter_orelse_formatter(v___x_2937_, v___x_2938_, v_a_2932_, v_a_2933_, v_a_2934_, v_a_2935_);
return v___x_2939_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Term_structInstArrayRef_formatter___boxed(lean_object* v_a_2940_, lean_object* v_a_2941_, lean_object* v_a_2942_, lean_object* v_a_2943_, lean_object* v_a_2944_){
_start:
{
lean_object* v_res_2945_; 
v_res_2945_ = l_Lean_Parser_Term_structInstArrayRef_formatter(v_a_2940_, v_a_2941_, v_a_2942_, v_a_2943_);
lean_dec(v_a_2943_);
lean_dec_ref(v_a_2942_);
lean_dec(v_a_2941_);
lean_dec_ref(v_a_2940_);
return v_res_2945_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_structInstArrayRef___regBuiltin_Lean_Parser_Term_structInstArrayRef_formatter__3(){
_start:
{
lean_object* v___x_2953_; lean_object* v___x_2954_; lean_object* v___x_2955_; lean_object* v___x_2956_; lean_object* v___x_2957_; 
v___x_2953_ = l_Lean_PrettyPrinter_formatterAttribute;
v___x_2954_ = ((lean_object*)(l_Lean_Parser_Term_structInstArrayRef_formatter___closed__1));
v___x_2955_ = ((lean_object*)(l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_structInstArrayRef___regBuiltin_Lean_Parser_Term_structInstArrayRef_formatter__3___closed__0));
v___x_2956_ = lean_alloc_closure((void*)(l_Lean_Parser_Term_structInstArrayRef_formatter___boxed), 5, 0);
v___x_2957_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_2953_, v___x_2954_, v___x_2955_, v___x_2956_);
return v___x_2957_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_structInstArrayRef___regBuiltin_Lean_Parser_Term_structInstArrayRef_formatter__3___boxed(lean_object* v_a_2958_){
_start:
{
lean_object* v_res_2959_; 
v_res_2959_ = l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_structInstArrayRef___regBuiltin_Lean_Parser_Term_structInstArrayRef_formatter__3();
return v_res_2959_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Term_structInstArrayRef_parenthesizer(lean_object* v_a_2979_, lean_object* v_a_2980_, lean_object* v_a_2981_, lean_object* v_a_2982_){
_start:
{
lean_object* v___x_2984_; lean_object* v___x_2985_; lean_object* v___x_2986_; 
v___x_2984_ = ((lean_object*)(l_Lean_Parser_Term_structInstArrayRef_parenthesizer___closed__0));
v___x_2985_ = ((lean_object*)(l_Lean_Parser_Term_structInstArrayRef_parenthesizer___closed__4));
v___x_2986_ = l_Lean_PrettyPrinter_Parenthesizer_withAntiquot_parenthesizer(v___x_2984_, v___x_2985_, v_a_2979_, v_a_2980_, v_a_2981_, v_a_2982_);
return v___x_2986_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Term_structInstArrayRef_parenthesizer___boxed(lean_object* v_a_2987_, lean_object* v_a_2988_, lean_object* v_a_2989_, lean_object* v_a_2990_, lean_object* v_a_2991_){
_start:
{
lean_object* v_res_2992_; 
v_res_2992_ = l_Lean_Parser_Term_structInstArrayRef_parenthesizer(v_a_2987_, v_a_2988_, v_a_2989_, v_a_2990_);
lean_dec(v_a_2990_);
lean_dec_ref(v_a_2989_);
lean_dec(v_a_2988_);
lean_dec_ref(v_a_2987_);
return v_res_2992_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_structInstArrayRef___regBuiltin_Lean_Parser_Term_structInstArrayRef_parenthesizer__7(){
_start:
{
lean_object* v___x_3000_; lean_object* v___x_3001_; lean_object* v___x_3002_; lean_object* v___x_3003_; lean_object* v___x_3004_; 
v___x_3000_ = l_Lean_PrettyPrinter_parenthesizerAttribute;
v___x_3001_ = ((lean_object*)(l_Lean_Parser_Term_structInstArrayRef_formatter___closed__1));
v___x_3002_ = ((lean_object*)(l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_structInstArrayRef___regBuiltin_Lean_Parser_Term_structInstArrayRef_parenthesizer__7___closed__0));
v___x_3003_ = lean_alloc_closure((void*)(l_Lean_Parser_Term_structInstArrayRef_parenthesizer___boxed), 5, 0);
v___x_3004_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_3000_, v___x_3001_, v___x_3002_, v___x_3003_);
return v___x_3004_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_structInstArrayRef___regBuiltin_Lean_Parser_Term_structInstArrayRef_parenthesizer__7___boxed(lean_object* v_a_3005_){
_start:
{
lean_object* v_res_3006_; 
v_res_3006_ = l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_structInstArrayRef___regBuiltin_Lean_Parser_Term_structInstArrayRef_parenthesizer__7();
return v_res_3006_;
}
}
static lean_object* _init_l_Lean_Parser_Term_structInstArrayRef___closed__0(void){
_start:
{
uint8_t v___x_3007_; uint8_t v___x_3008_; lean_object* v___x_3009_; lean_object* v___x_3010_; lean_object* v___x_3011_; 
v___x_3007_ = 0;
v___x_3008_ = 1;
v___x_3009_ = ((lean_object*)(l_Lean_Parser_Term_structInstArrayRef_formatter___closed__1));
v___x_3010_ = ((lean_object*)(l_Lean_Parser_Term_structInstArrayRef_formatter___closed__0));
v___x_3011_ = l_Lean_Parser_mkAntiquot(v___x_3010_, v___x_3009_, v___x_3008_, v___x_3007_);
return v___x_3011_;
}
}
static lean_object* _init_l_Lean_Parser_Term_structInstArrayRef___closed__1(void){
_start:
{
lean_object* v___x_3012_; lean_object* v___x_3013_; 
v___x_3012_ = lean_obj_once(&l_Lean_Parser_Term_binderType___closed__1, &l_Lean_Parser_Term_binderType___closed__1_once, _init_l_Lean_Parser_Term_binderType___closed__1);
v___x_3013_ = l_Lean_Parser_withoutPosition(v___x_3012_);
return v___x_3013_;
}
}
static lean_object* _init_l_Lean_Parser_Term_structInstArrayRef___closed__2(void){
_start:
{
lean_object* v___x_3014_; lean_object* v___x_3015_; lean_object* v___x_3016_; 
v___x_3014_ = lean_obj_once(&l_Lean_Parser_Term_instBinder___closed__8, &l_Lean_Parser_Term_instBinder___closed__8_once, _init_l_Lean_Parser_Term_instBinder___closed__8);
v___x_3015_ = lean_obj_once(&l_Lean_Parser_Term_structInstArrayRef___closed__1, &l_Lean_Parser_Term_structInstArrayRef___closed__1_once, _init_l_Lean_Parser_Term_structInstArrayRef___closed__1);
v___x_3016_ = l_Lean_Parser_andthen(v___x_3015_, v___x_3014_);
return v___x_3016_;
}
}
static lean_object* _init_l_Lean_Parser_Term_structInstArrayRef___closed__3(void){
_start:
{
lean_object* v___x_3017_; lean_object* v___x_3018_; lean_object* v___x_3019_; 
v___x_3017_ = lean_obj_once(&l_Lean_Parser_Term_structInstArrayRef___closed__2, &l_Lean_Parser_Term_structInstArrayRef___closed__2_once, _init_l_Lean_Parser_Term_structInstArrayRef___closed__2);
v___x_3018_ = lean_obj_once(&l_Lean_Parser_Term_instBinder___closed__4, &l_Lean_Parser_Term_instBinder___closed__4_once, _init_l_Lean_Parser_Term_instBinder___closed__4);
v___x_3019_ = l_Lean_Parser_andthen(v___x_3018_, v___x_3017_);
return v___x_3019_;
}
}
static lean_object* _init_l_Lean_Parser_Term_structInstArrayRef___closed__4(void){
_start:
{
lean_object* v___x_3020_; lean_object* v___x_3021_; lean_object* v___x_3022_; lean_object* v___x_3023_; 
v___x_3020_ = lean_obj_once(&l_Lean_Parser_Term_structInstArrayRef___closed__3, &l_Lean_Parser_Term_structInstArrayRef___closed__3_once, _init_l_Lean_Parser_Term_structInstArrayRef___closed__3);
v___x_3021_ = lean_unsigned_to_nat(1024u);
v___x_3022_ = ((lean_object*)(l_Lean_Parser_Term_structInstArrayRef_formatter___closed__1));
v___x_3023_ = l_Lean_Parser_leadingNode(v___x_3022_, v___x_3021_, v___x_3020_);
return v___x_3023_;
}
}
static lean_object* _init_l_Lean_Parser_Term_structInstArrayRef___closed__5(void){
_start:
{
lean_object* v___x_3024_; lean_object* v___x_3025_; lean_object* v___x_3026_; 
v___x_3024_ = lean_obj_once(&l_Lean_Parser_Term_structInstArrayRef___closed__4, &l_Lean_Parser_Term_structInstArrayRef___closed__4_once, _init_l_Lean_Parser_Term_structInstArrayRef___closed__4);
v___x_3025_ = lean_obj_once(&l_Lean_Parser_Term_structInstArrayRef___closed__0, &l_Lean_Parser_Term_structInstArrayRef___closed__0_once, _init_l_Lean_Parser_Term_structInstArrayRef___closed__0);
v___x_3026_ = l_Lean_Parser_withAntiquot(v___x_3025_, v___x_3024_);
return v___x_3026_;
}
}
static lean_object* _init_l_Lean_Parser_Term_structInstArrayRef___closed__6(void){
_start:
{
lean_object* v___x_3027_; lean_object* v___x_3028_; lean_object* v___x_3029_; 
v___x_3027_ = lean_obj_once(&l_Lean_Parser_Term_structInstArrayRef___closed__5, &l_Lean_Parser_Term_structInstArrayRef___closed__5_once, _init_l_Lean_Parser_Term_structInstArrayRef___closed__5);
v___x_3028_ = ((lean_object*)(l_Lean_Parser_Term_structInstArrayRef_formatter___closed__1));
v___x_3029_ = l_Lean_Parser_withCache(v___x_3028_, v___x_3027_);
return v___x_3029_;
}
}
static lean_object* _init_l_Lean_Parser_Term_structInstArrayRef(void){
_start:
{
lean_object* v___x_3030_; 
v___x_3030_ = lean_obj_once(&l_Lean_Parser_Term_structInstArrayRef___closed__6, &l_Lean_Parser_Term_structInstArrayRef___closed__6_once, _init_l_Lean_Parser_Term_structInstArrayRef___closed__6);
return v___x_3030_;
}
}
static lean_object* _init_l_Lean_Parser_Term_structInstLVal_formatter___closed__3(void){
_start:
{
lean_object* v___x_3044_; lean_object* v___x_3045_; lean_object* v___x_3046_; 
v___x_3044_ = lean_alloc_closure((void*)(l_Lean_Parser_Term_structInstArrayRef_formatter___boxed), 5, 0);
v___x_3045_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_fieldIdx_formatter___boxed), 5, 0);
v___x_3046_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_orelse_formatter___boxed), 7, 2);
lean_closure_set(v___x_3046_, 0, v___x_3045_);
lean_closure_set(v___x_3046_, 1, v___x_3044_);
return v___x_3046_;
}
}
static lean_object* _init_l_Lean_Parser_Term_structInstLVal_formatter___closed__4(void){
_start:
{
lean_object* v___x_3047_; lean_object* v___x_3048_; lean_object* v___x_3049_; 
v___x_3047_ = lean_obj_once(&l_Lean_Parser_Term_structInstLVal_formatter___closed__3, &l_Lean_Parser_Term_structInstLVal_formatter___closed__3_once, _init_l_Lean_Parser_Term_structInstLVal_formatter___closed__3);
v___x_3048_ = ((lean_object*)(l_Lean_Parser_Term_syntheticHole_formatter___closed__2));
v___x_3049_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_orelse_formatter___boxed), 7, 2);
lean_closure_set(v___x_3049_, 0, v___x_3048_);
lean_closure_set(v___x_3049_, 1, v___x_3047_);
return v___x_3049_;
}
}
static lean_object* _init_l_Lean_Parser_Term_structInstLVal_formatter___closed__7(void){
_start:
{
lean_object* v___x_3053_; lean_object* v___x_3054_; lean_object* v___x_3055_; 
v___x_3053_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_fieldIdx_formatter___boxed), 5, 0);
v___x_3054_ = ((lean_object*)(l_Lean_Parser_Term_syntheticHole_formatter___closed__2));
v___x_3055_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_orelse_formatter___boxed), 7, 2);
lean_closure_set(v___x_3055_, 0, v___x_3054_);
lean_closure_set(v___x_3055_, 1, v___x_3053_);
return v___x_3055_;
}
}
static lean_object* _init_l_Lean_Parser_Term_structInstLVal_formatter___closed__8(void){
_start:
{
lean_object* v___x_3056_; lean_object* v___x_3057_; lean_object* v___x_3058_; 
v___x_3056_ = lean_obj_once(&l_Lean_Parser_Term_structInstLVal_formatter___closed__7, &l_Lean_Parser_Term_structInstLVal_formatter___closed__7_once, _init_l_Lean_Parser_Term_structInstLVal_formatter___closed__7);
v___x_3057_ = ((lean_object*)(l_Lean_Parser_Term_structInstLVal_formatter___closed__6));
v___x_3058_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed), 7, 2);
lean_closure_set(v___x_3058_, 0, v___x_3057_);
lean_closure_set(v___x_3058_, 1, v___x_3056_);
return v___x_3058_;
}
}
static lean_object* _init_l_Lean_Parser_Term_structInstLVal_formatter___closed__9(void){
_start:
{
lean_object* v___x_3059_; lean_object* v___x_3060_; 
v___x_3059_ = lean_obj_once(&l_Lean_Parser_Term_structInstLVal_formatter___closed__8, &l_Lean_Parser_Term_structInstLVal_formatter___closed__8_once, _init_l_Lean_Parser_Term_structInstLVal_formatter___closed__8);
v___x_3060_ = lean_alloc_closure((void*)(l_Lean_Parser_group_formatter___boxed), 6, 1);
lean_closure_set(v___x_3060_, 0, v___x_3059_);
return v___x_3060_;
}
}
static lean_object* _init_l_Lean_Parser_Term_structInstLVal_formatter___closed__10(void){
_start:
{
lean_object* v___x_3061_; lean_object* v___x_3062_; lean_object* v___x_3063_; 
v___x_3061_ = lean_alloc_closure((void*)(l_Lean_Parser_Term_structInstArrayRef_formatter___boxed), 5, 0);
v___x_3062_ = lean_obj_once(&l_Lean_Parser_Term_structInstLVal_formatter___closed__9, &l_Lean_Parser_Term_structInstLVal_formatter___closed__9_once, _init_l_Lean_Parser_Term_structInstLVal_formatter___closed__9);
v___x_3063_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_orelse_formatter___boxed), 7, 2);
lean_closure_set(v___x_3063_, 0, v___x_3062_);
lean_closure_set(v___x_3063_, 1, v___x_3061_);
return v___x_3063_;
}
}
static lean_object* _init_l_Lean_Parser_Term_structInstLVal_formatter___closed__11(void){
_start:
{
lean_object* v___x_3064_; lean_object* v___x_3065_; 
v___x_3064_ = lean_obj_once(&l_Lean_Parser_Term_structInstLVal_formatter___closed__10, &l_Lean_Parser_Term_structInstLVal_formatter___closed__10_once, _init_l_Lean_Parser_Term_structInstLVal_formatter___closed__10);
v___x_3065_ = lean_alloc_closure((void*)(l_Lean_Parser_many_formatter___boxed), 6, 1);
lean_closure_set(v___x_3065_, 0, v___x_3064_);
return v___x_3065_;
}
}
static lean_object* _init_l_Lean_Parser_Term_structInstLVal_formatter___closed__12(void){
_start:
{
lean_object* v___x_3066_; lean_object* v___x_3067_; lean_object* v___x_3068_; 
v___x_3066_ = lean_obj_once(&l_Lean_Parser_Term_structInstLVal_formatter___closed__11, &l_Lean_Parser_Term_structInstLVal_formatter___closed__11_once, _init_l_Lean_Parser_Term_structInstLVal_formatter___closed__11);
v___x_3067_ = lean_obj_once(&l_Lean_Parser_Term_structInstLVal_formatter___closed__4, &l_Lean_Parser_Term_structInstLVal_formatter___closed__4_once, _init_l_Lean_Parser_Term_structInstLVal_formatter___closed__4);
v___x_3068_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed), 7, 2);
lean_closure_set(v___x_3068_, 0, v___x_3067_);
lean_closure_set(v___x_3068_, 1, v___x_3066_);
return v___x_3068_;
}
}
static lean_object* _init_l_Lean_Parser_Term_structInstLVal_formatter___closed__13(void){
_start:
{
lean_object* v___x_3069_; lean_object* v___x_3070_; lean_object* v___x_3071_; lean_object* v___x_3072_; 
v___x_3069_ = lean_obj_once(&l_Lean_Parser_Term_structInstLVal_formatter___closed__12, &l_Lean_Parser_Term_structInstLVal_formatter___closed__12_once, _init_l_Lean_Parser_Term_structInstLVal_formatter___closed__12);
v___x_3070_ = lean_unsigned_to_nat(1024u);
v___x_3071_ = ((lean_object*)(l_Lean_Parser_Term_structInstLVal_formatter___closed__1));
v___x_3072_ = lean_alloc_closure((void*)(l_Lean_Parser_leadingNode_formatter___boxed), 8, 3);
lean_closure_set(v___x_3072_, 0, v___x_3071_);
lean_closure_set(v___x_3072_, 1, v___x_3070_);
lean_closure_set(v___x_3072_, 2, v___x_3069_);
return v___x_3072_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Term_structInstLVal_formatter(lean_object* v_a_3073_, lean_object* v_a_3074_, lean_object* v_a_3075_, lean_object* v_a_3076_){
_start:
{
lean_object* v___x_3078_; lean_object* v___x_3079_; lean_object* v___x_3080_; 
v___x_3078_ = ((lean_object*)(l_Lean_Parser_Term_structInstLVal_formatter___closed__2));
v___x_3079_ = lean_obj_once(&l_Lean_Parser_Term_structInstLVal_formatter___closed__13, &l_Lean_Parser_Term_structInstLVal_formatter___closed__13_once, _init_l_Lean_Parser_Term_structInstLVal_formatter___closed__13);
v___x_3080_ = l_Lean_PrettyPrinter_Formatter_orelse_formatter(v___x_3078_, v___x_3079_, v_a_3073_, v_a_3074_, v_a_3075_, v_a_3076_);
return v___x_3080_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Term_structInstLVal_formatter___boxed(lean_object* v_a_3081_, lean_object* v_a_3082_, lean_object* v_a_3083_, lean_object* v_a_3084_, lean_object* v_a_3085_){
_start:
{
lean_object* v_res_3086_; 
v_res_3086_ = l_Lean_Parser_Term_structInstLVal_formatter(v_a_3081_, v_a_3082_, v_a_3083_, v_a_3084_);
lean_dec(v_a_3084_);
lean_dec_ref(v_a_3083_);
lean_dec(v_a_3082_);
lean_dec_ref(v_a_3081_);
return v_res_3086_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_structInstLVal___regBuiltin_Lean_Parser_Term_structInstLVal_formatter__3(){
_start:
{
lean_object* v___x_3094_; lean_object* v___x_3095_; lean_object* v___x_3096_; lean_object* v___x_3097_; lean_object* v___x_3098_; 
v___x_3094_ = l_Lean_PrettyPrinter_formatterAttribute;
v___x_3095_ = ((lean_object*)(l_Lean_Parser_Term_structInstLVal_formatter___closed__1));
v___x_3096_ = ((lean_object*)(l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_structInstLVal___regBuiltin_Lean_Parser_Term_structInstLVal_formatter__3___closed__0));
v___x_3097_ = lean_alloc_closure((void*)(l_Lean_Parser_Term_structInstLVal_formatter___boxed), 5, 0);
v___x_3098_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_3094_, v___x_3095_, v___x_3096_, v___x_3097_);
return v___x_3098_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_structInstLVal___regBuiltin_Lean_Parser_Term_structInstLVal_formatter__3___boxed(lean_object* v_a_3099_){
_start:
{
lean_object* v_res_3100_; 
v_res_3100_ = l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_structInstLVal___regBuiltin_Lean_Parser_Term_structInstLVal_formatter__3();
return v_res_3100_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Term_structInstLVal_parenthesizer___lam__0(lean_object* v___y_3101_, lean_object* v___y_3102_, lean_object* v___y_3103_, lean_object* v___y_3104_){
_start:
{
lean_object* v___x_3106_; 
v___x_3106_ = l_Lean_PrettyPrinter_Parenthesizer_visitToken___redArg(v___y_3102_);
return v___x_3106_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Term_structInstLVal_parenthesizer___lam__0___boxed(lean_object* v___y_3107_, lean_object* v___y_3108_, lean_object* v___y_3109_, lean_object* v___y_3110_, lean_object* v___y_3111_){
_start:
{
lean_object* v_res_3112_; 
v_res_3112_ = l_Lean_Parser_Term_structInstLVal_parenthesizer___lam__0(v___y_3107_, v___y_3108_, v___y_3109_, v___y_3110_);
lean_dec(v___y_3110_);
lean_dec_ref(v___y_3109_);
lean_dec(v___y_3108_);
lean_dec_ref(v___y_3107_);
return v_res_3112_;
}
}
static lean_object* _init_l_Lean_Parser_Term_structInstLVal_parenthesizer___closed__2(void){
_start:
{
lean_object* v___x_3121_; lean_object* v___f_3122_; lean_object* v___x_3123_; 
v___x_3121_ = lean_alloc_closure((void*)(l_Lean_Parser_Term_structInstArrayRef_parenthesizer___boxed), 5, 0);
v___f_3122_ = ((lean_object*)(l_Lean_Parser_Term_structInstLVal_parenthesizer___closed__0));
v___x_3123_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_orelse_parenthesizer___boxed), 7, 2);
lean_closure_set(v___x_3123_, 0, v___f_3122_);
lean_closure_set(v___x_3123_, 1, v___x_3121_);
return v___x_3123_;
}
}
static lean_object* _init_l_Lean_Parser_Term_structInstLVal_parenthesizer___closed__3(void){
_start:
{
lean_object* v___x_3124_; lean_object* v___x_3125_; lean_object* v___x_3126_; 
v___x_3124_ = lean_obj_once(&l_Lean_Parser_Term_structInstLVal_parenthesizer___closed__2, &l_Lean_Parser_Term_structInstLVal_parenthesizer___closed__2_once, _init_l_Lean_Parser_Term_structInstLVal_parenthesizer___closed__2);
v___x_3125_ = ((lean_object*)(l_Lean_Parser_Term_syntheticHole_parenthesizer___closed__2));
v___x_3126_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_orelse_parenthesizer___boxed), 7, 2);
lean_closure_set(v___x_3126_, 0, v___x_3125_);
lean_closure_set(v___x_3126_, 1, v___x_3124_);
return v___x_3126_;
}
}
static lean_object* _init_l_Lean_Parser_Term_structInstLVal_parenthesizer___closed__8(void){
_start:
{
lean_object* v___x_3137_; lean_object* v___x_3138_; lean_object* v___x_3139_; 
v___x_3137_ = lean_alloc_closure((void*)(l_Lean_Parser_Term_structInstArrayRef_parenthesizer___boxed), 5, 0);
v___x_3138_ = ((lean_object*)(l_Lean_Parser_Term_structInstLVal_parenthesizer___closed__7));
v___x_3139_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_orelse_parenthesizer___boxed), 7, 2);
lean_closure_set(v___x_3139_, 0, v___x_3138_);
lean_closure_set(v___x_3139_, 1, v___x_3137_);
return v___x_3139_;
}
}
static lean_object* _init_l_Lean_Parser_Term_structInstLVal_parenthesizer___closed__9(void){
_start:
{
lean_object* v___x_3140_; lean_object* v___x_3141_; 
v___x_3140_ = lean_obj_once(&l_Lean_Parser_Term_structInstLVal_parenthesizer___closed__8, &l_Lean_Parser_Term_structInstLVal_parenthesizer___closed__8_once, _init_l_Lean_Parser_Term_structInstLVal_parenthesizer___closed__8);
v___x_3141_ = lean_alloc_closure((void*)(l_Lean_Parser_many_parenthesizer___boxed), 6, 1);
lean_closure_set(v___x_3141_, 0, v___x_3140_);
return v___x_3141_;
}
}
static lean_object* _init_l_Lean_Parser_Term_structInstLVal_parenthesizer___closed__10(void){
_start:
{
lean_object* v___x_3142_; lean_object* v___x_3143_; lean_object* v___x_3144_; 
v___x_3142_ = lean_obj_once(&l_Lean_Parser_Term_structInstLVal_parenthesizer___closed__9, &l_Lean_Parser_Term_structInstLVal_parenthesizer___closed__9_once, _init_l_Lean_Parser_Term_structInstLVal_parenthesizer___closed__9);
v___x_3143_ = lean_obj_once(&l_Lean_Parser_Term_structInstLVal_parenthesizer___closed__3, &l_Lean_Parser_Term_structInstLVal_parenthesizer___closed__3_once, _init_l_Lean_Parser_Term_structInstLVal_parenthesizer___closed__3);
v___x_3144_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed), 7, 2);
lean_closure_set(v___x_3144_, 0, v___x_3143_);
lean_closure_set(v___x_3144_, 1, v___x_3142_);
return v___x_3144_;
}
}
static lean_object* _init_l_Lean_Parser_Term_structInstLVal_parenthesizer___closed__11(void){
_start:
{
lean_object* v___x_3145_; lean_object* v___x_3146_; lean_object* v___x_3147_; lean_object* v___x_3148_; 
v___x_3145_ = lean_obj_once(&l_Lean_Parser_Term_structInstLVal_parenthesizer___closed__10, &l_Lean_Parser_Term_structInstLVal_parenthesizer___closed__10_once, _init_l_Lean_Parser_Term_structInstLVal_parenthesizer___closed__10);
v___x_3146_ = lean_unsigned_to_nat(1024u);
v___x_3147_ = ((lean_object*)(l_Lean_Parser_Term_structInstLVal_formatter___closed__1));
v___x_3148_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_leadingNode_parenthesizer___boxed), 8, 3);
lean_closure_set(v___x_3148_, 0, v___x_3147_);
lean_closure_set(v___x_3148_, 1, v___x_3146_);
lean_closure_set(v___x_3148_, 2, v___x_3145_);
return v___x_3148_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Term_structInstLVal_parenthesizer(lean_object* v_a_3149_, lean_object* v_a_3150_, lean_object* v_a_3151_, lean_object* v_a_3152_){
_start:
{
lean_object* v___x_3154_; lean_object* v___x_3155_; lean_object* v___x_3156_; 
v___x_3154_ = ((lean_object*)(l_Lean_Parser_Term_structInstLVal_parenthesizer___closed__1));
v___x_3155_ = lean_obj_once(&l_Lean_Parser_Term_structInstLVal_parenthesizer___closed__11, &l_Lean_Parser_Term_structInstLVal_parenthesizer___closed__11_once, _init_l_Lean_Parser_Term_structInstLVal_parenthesizer___closed__11);
v___x_3156_ = l_Lean_PrettyPrinter_Parenthesizer_withAntiquot_parenthesizer(v___x_3154_, v___x_3155_, v_a_3149_, v_a_3150_, v_a_3151_, v_a_3152_);
return v___x_3156_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Term_structInstLVal_parenthesizer___boxed(lean_object* v_a_3157_, lean_object* v_a_3158_, lean_object* v_a_3159_, lean_object* v_a_3160_, lean_object* v_a_3161_){
_start:
{
lean_object* v_res_3162_; 
v_res_3162_ = l_Lean_Parser_Term_structInstLVal_parenthesizer(v_a_3157_, v_a_3158_, v_a_3159_, v_a_3160_);
lean_dec(v_a_3160_);
lean_dec_ref(v_a_3159_);
lean_dec(v_a_3158_);
lean_dec_ref(v_a_3157_);
return v_res_3162_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_structInstLVal___regBuiltin_Lean_Parser_Term_structInstLVal_parenthesizer__7(){
_start:
{
lean_object* v___x_3170_; lean_object* v___x_3171_; lean_object* v___x_3172_; lean_object* v___x_3173_; lean_object* v___x_3174_; 
v___x_3170_ = l_Lean_PrettyPrinter_parenthesizerAttribute;
v___x_3171_ = ((lean_object*)(l_Lean_Parser_Term_structInstLVal_formatter___closed__1));
v___x_3172_ = ((lean_object*)(l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_structInstLVal___regBuiltin_Lean_Parser_Term_structInstLVal_parenthesizer__7___closed__0));
v___x_3173_ = lean_alloc_closure((void*)(l_Lean_Parser_Term_structInstLVal_parenthesizer___boxed), 5, 0);
v___x_3174_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_3170_, v___x_3171_, v___x_3172_, v___x_3173_);
return v___x_3174_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_structInstLVal___regBuiltin_Lean_Parser_Term_structInstLVal_parenthesizer__7___boxed(lean_object* v_a_3175_){
_start:
{
lean_object* v_res_3176_; 
v_res_3176_ = l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_structInstLVal___regBuiltin_Lean_Parser_Term_structInstLVal_parenthesizer__7();
return v_res_3176_;
}
}
static lean_object* _init_l_Lean_Parser_Term_structInstLVal___closed__0(void){
_start:
{
uint8_t v___x_3177_; uint8_t v___x_3178_; lean_object* v___x_3179_; lean_object* v___x_3180_; lean_object* v___x_3181_; 
v___x_3177_ = 0;
v___x_3178_ = 1;
v___x_3179_ = ((lean_object*)(l_Lean_Parser_Term_structInstLVal_formatter___closed__1));
v___x_3180_ = ((lean_object*)(l_Lean_Parser_Term_structInstLVal_formatter___closed__0));
v___x_3181_ = l_Lean_Parser_mkAntiquot(v___x_3180_, v___x_3179_, v___x_3178_, v___x_3177_);
return v___x_3181_;
}
}
static lean_object* _init_l_Lean_Parser_Term_structInstLVal___closed__1(void){
_start:
{
lean_object* v___x_3182_; lean_object* v___x_3183_; lean_object* v___x_3184_; 
v___x_3182_ = l_Lean_Parser_Term_structInstArrayRef;
v___x_3183_ = l_Lean_Parser_fieldIdx;
v___x_3184_ = l_Lean_Parser_orelse(v___x_3183_, v___x_3182_);
return v___x_3184_;
}
}
static lean_object* _init_l_Lean_Parser_Term_structInstLVal___closed__2(void){
_start:
{
lean_object* v___x_3185_; lean_object* v___x_3186_; lean_object* v___x_3187_; 
v___x_3185_ = lean_obj_once(&l_Lean_Parser_Term_structInstLVal___closed__1, &l_Lean_Parser_Term_structInstLVal___closed__1_once, _init_l_Lean_Parser_Term_structInstLVal___closed__1);
v___x_3186_ = l_Lean_Parser_ident;
v___x_3187_ = l_Lean_Parser_orelse(v___x_3186_, v___x_3185_);
return v___x_3187_;
}
}
static lean_object* _init_l_Lean_Parser_Term_structInstLVal___closed__3(void){
_start:
{
lean_object* v___x_3188_; lean_object* v___x_3189_; 
v___x_3188_ = ((lean_object*)(l_Lean_Parser_Term_structInstLVal_formatter___closed__5));
v___x_3189_ = l_Lean_Parser_symbol(v___x_3188_);
return v___x_3189_;
}
}
static lean_object* _init_l_Lean_Parser_Term_structInstLVal___closed__4(void){
_start:
{
lean_object* v___x_3190_; lean_object* v___x_3191_; lean_object* v___x_3192_; 
v___x_3190_ = l_Lean_Parser_fieldIdx;
v___x_3191_ = l_Lean_Parser_ident;
v___x_3192_ = l_Lean_Parser_orelse(v___x_3191_, v___x_3190_);
return v___x_3192_;
}
}
static lean_object* _init_l_Lean_Parser_Term_structInstLVal___closed__5(void){
_start:
{
lean_object* v___x_3193_; lean_object* v___x_3194_; lean_object* v___x_3195_; 
v___x_3193_ = lean_obj_once(&l_Lean_Parser_Term_structInstLVal___closed__4, &l_Lean_Parser_Term_structInstLVal___closed__4_once, _init_l_Lean_Parser_Term_structInstLVal___closed__4);
v___x_3194_ = lean_obj_once(&l_Lean_Parser_Term_structInstLVal___closed__3, &l_Lean_Parser_Term_structInstLVal___closed__3_once, _init_l_Lean_Parser_Term_structInstLVal___closed__3);
v___x_3195_ = l_Lean_Parser_andthen(v___x_3194_, v___x_3193_);
return v___x_3195_;
}
}
static lean_object* _init_l_Lean_Parser_Term_structInstLVal___closed__6(void){
_start:
{
lean_object* v___x_3196_; lean_object* v___x_3197_; lean_object* v___x_3198_; 
v___x_3196_ = lean_obj_once(&l_Lean_Parser_Term_structInstLVal___closed__5, &l_Lean_Parser_Term_structInstLVal___closed__5_once, _init_l_Lean_Parser_Term_structInstLVal___closed__5);
v___x_3197_ = ((lean_object*)(l_Lean_Parser_Term_strictImplicitLeftBracket___closed__2));
v___x_3198_ = l_Lean_Parser_node(v___x_3197_, v___x_3196_);
return v___x_3198_;
}
}
static lean_object* _init_l_Lean_Parser_Term_structInstLVal___closed__7(void){
_start:
{
lean_object* v___x_3199_; lean_object* v___x_3200_; lean_object* v___x_3201_; 
v___x_3199_ = l_Lean_Parser_Term_structInstArrayRef;
v___x_3200_ = lean_obj_once(&l_Lean_Parser_Term_structInstLVal___closed__6, &l_Lean_Parser_Term_structInstLVal___closed__6_once, _init_l_Lean_Parser_Term_structInstLVal___closed__6);
v___x_3201_ = l_Lean_Parser_orelse(v___x_3200_, v___x_3199_);
return v___x_3201_;
}
}
static lean_object* _init_l_Lean_Parser_Term_structInstLVal___closed__8(void){
_start:
{
lean_object* v___x_3202_; lean_object* v___x_3203_; 
v___x_3202_ = lean_obj_once(&l_Lean_Parser_Term_structInstLVal___closed__7, &l_Lean_Parser_Term_structInstLVal___closed__7_once, _init_l_Lean_Parser_Term_structInstLVal___closed__7);
v___x_3203_ = l_Lean_Parser_many(v___x_3202_);
return v___x_3203_;
}
}
static lean_object* _init_l_Lean_Parser_Term_structInstLVal___closed__9(void){
_start:
{
lean_object* v___x_3204_; lean_object* v___x_3205_; lean_object* v___x_3206_; 
v___x_3204_ = lean_obj_once(&l_Lean_Parser_Term_structInstLVal___closed__8, &l_Lean_Parser_Term_structInstLVal___closed__8_once, _init_l_Lean_Parser_Term_structInstLVal___closed__8);
v___x_3205_ = lean_obj_once(&l_Lean_Parser_Term_structInstLVal___closed__2, &l_Lean_Parser_Term_structInstLVal___closed__2_once, _init_l_Lean_Parser_Term_structInstLVal___closed__2);
v___x_3206_ = l_Lean_Parser_andthen(v___x_3205_, v___x_3204_);
return v___x_3206_;
}
}
static lean_object* _init_l_Lean_Parser_Term_structInstLVal___closed__10(void){
_start:
{
lean_object* v___x_3207_; lean_object* v___x_3208_; lean_object* v___x_3209_; lean_object* v___x_3210_; 
v___x_3207_ = lean_obj_once(&l_Lean_Parser_Term_structInstLVal___closed__9, &l_Lean_Parser_Term_structInstLVal___closed__9_once, _init_l_Lean_Parser_Term_structInstLVal___closed__9);
v___x_3208_ = lean_unsigned_to_nat(1024u);
v___x_3209_ = ((lean_object*)(l_Lean_Parser_Term_structInstLVal_formatter___closed__1));
v___x_3210_ = l_Lean_Parser_leadingNode(v___x_3209_, v___x_3208_, v___x_3207_);
return v___x_3210_;
}
}
static lean_object* _init_l_Lean_Parser_Term_structInstLVal___closed__11(void){
_start:
{
lean_object* v___x_3211_; lean_object* v___x_3212_; lean_object* v___x_3213_; 
v___x_3211_ = lean_obj_once(&l_Lean_Parser_Term_structInstLVal___closed__10, &l_Lean_Parser_Term_structInstLVal___closed__10_once, _init_l_Lean_Parser_Term_structInstLVal___closed__10);
v___x_3212_ = lean_obj_once(&l_Lean_Parser_Term_structInstLVal___closed__0, &l_Lean_Parser_Term_structInstLVal___closed__0_once, _init_l_Lean_Parser_Term_structInstLVal___closed__0);
v___x_3213_ = l_Lean_Parser_withAntiquot(v___x_3212_, v___x_3211_);
return v___x_3213_;
}
}
static lean_object* _init_l_Lean_Parser_Term_structInstLVal___closed__12(void){
_start:
{
lean_object* v___x_3214_; lean_object* v___x_3215_; lean_object* v___x_3216_; 
v___x_3214_ = lean_obj_once(&l_Lean_Parser_Term_structInstLVal___closed__11, &l_Lean_Parser_Term_structInstLVal___closed__11_once, _init_l_Lean_Parser_Term_structInstLVal___closed__11);
v___x_3215_ = ((lean_object*)(l_Lean_Parser_Term_structInstLVal_formatter___closed__1));
v___x_3216_ = l_Lean_Parser_withCache(v___x_3215_, v___x_3214_);
return v___x_3216_;
}
}
static lean_object* _init_l_Lean_Parser_Term_structInstLVal(void){
_start:
{
lean_object* v___x_3217_; 
v___x_3217_ = lean_obj_once(&l_Lean_Parser_Term_structInstLVal___closed__12, &l_Lean_Parser_Term_structInstLVal___closed__12_once, _init_l_Lean_Parser_Term_structInstLVal___closed__12);
return v___x_3217_;
}
}
static lean_object* _init_l_Lean_Parser_Term_structInstFieldBinder_formatter___closed__4(void){
_start:
{
lean_object* v___x_3233_; lean_object* v___x_3234_; lean_object* v___x_3235_; 
v___x_3233_ = ((lean_object*)(l_Lean_Parser_Term_structInstFieldBinder_formatter___closed__3));
v___x_3234_ = lean_alloc_closure((void*)(l_Lean_Parser_Term_binderIdent_formatter___boxed), 5, 0);
v___x_3235_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_orelse_formatter___boxed), 7, 2);
lean_closure_set(v___x_3235_, 0, v___x_3234_);
lean_closure_set(v___x_3235_, 1, v___x_3233_);
return v___x_3235_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Term_structInstFieldBinder_formatter(lean_object* v_a_3236_, lean_object* v_a_3237_, lean_object* v_a_3238_, lean_object* v_a_3239_){
_start:
{
lean_object* v___x_3241_; lean_object* v___x_3242_; lean_object* v___x_3243_; 
v___x_3241_ = ((lean_object*)(l_Lean_Parser_Term_structInstFieldBinder_formatter___closed__2));
v___x_3242_ = lean_obj_once(&l_Lean_Parser_Term_structInstFieldBinder_formatter___closed__4, &l_Lean_Parser_Term_structInstFieldBinder_formatter___closed__4_once, _init_l_Lean_Parser_Term_structInstFieldBinder_formatter___closed__4);
v___x_3243_ = l_Lean_PrettyPrinter_Formatter_orelse_formatter(v___x_3241_, v___x_3242_, v_a_3236_, v_a_3237_, v_a_3238_, v_a_3239_);
return v___x_3243_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Term_structInstFieldBinder_formatter___boxed(lean_object* v_a_3244_, lean_object* v_a_3245_, lean_object* v_a_3246_, lean_object* v_a_3247_, lean_object* v_a_3248_){
_start:
{
lean_object* v_res_3249_; 
v_res_3249_ = l_Lean_Parser_Term_structInstFieldBinder_formatter(v_a_3244_, v_a_3245_, v_a_3246_, v_a_3247_);
lean_dec(v_a_3247_);
lean_dec_ref(v_a_3246_);
lean_dec(v_a_3245_);
lean_dec_ref(v_a_3244_);
return v_res_3249_;
}
}
static lean_object* _init_l_Lean_Parser_Term_structInstFieldBinder_parenthesizer___closed__2(void){
_start:
{
lean_object* v___x_3259_; lean_object* v___x_3260_; lean_object* v___x_3261_; 
v___x_3259_ = ((lean_object*)(l_Lean_Parser_Term_structInstFieldBinder_parenthesizer___closed__1));
v___x_3260_ = lean_alloc_closure((void*)(l_Lean_Parser_Term_binderIdent_parenthesizer___boxed), 5, 0);
v___x_3261_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_orelse_parenthesizer___boxed), 7, 2);
lean_closure_set(v___x_3261_, 0, v___x_3260_);
lean_closure_set(v___x_3261_, 1, v___x_3259_);
return v___x_3261_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Term_structInstFieldBinder_parenthesizer(lean_object* v_a_3262_, lean_object* v_a_3263_, lean_object* v_a_3264_, lean_object* v_a_3265_){
_start:
{
lean_object* v___x_3267_; lean_object* v___x_3268_; lean_object* v___x_3269_; 
v___x_3267_ = ((lean_object*)(l_Lean_Parser_Term_structInstFieldBinder_parenthesizer___closed__0));
v___x_3268_ = lean_obj_once(&l_Lean_Parser_Term_structInstFieldBinder_parenthesizer___closed__2, &l_Lean_Parser_Term_structInstFieldBinder_parenthesizer___closed__2_once, _init_l_Lean_Parser_Term_structInstFieldBinder_parenthesizer___closed__2);
v___x_3269_ = l_Lean_PrettyPrinter_Parenthesizer_withAntiquot_parenthesizer(v___x_3267_, v___x_3268_, v_a_3262_, v_a_3263_, v_a_3264_, v_a_3265_);
return v___x_3269_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Term_structInstFieldBinder_parenthesizer___boxed(lean_object* v_a_3270_, lean_object* v_a_3271_, lean_object* v_a_3272_, lean_object* v_a_3273_, lean_object* v_a_3274_){
_start:
{
lean_object* v_res_3275_; 
v_res_3275_ = l_Lean_Parser_Term_structInstFieldBinder_parenthesizer(v_a_3270_, v_a_3271_, v_a_3272_, v_a_3273_);
lean_dec(v_a_3273_);
lean_dec_ref(v_a_3272_);
lean_dec(v_a_3271_);
lean_dec_ref(v_a_3270_);
return v_res_3275_;
}
}
static lean_object* _init_l_Lean_Parser_Term_structInstFieldBinder___closed__0(void){
_start:
{
uint8_t v___x_3276_; lean_object* v___x_3277_; lean_object* v___x_3278_; lean_object* v___x_3279_; 
v___x_3276_ = 1;
v___x_3277_ = ((lean_object*)(l_Lean_Parser_Term_structInstFieldBinder_formatter___closed__1));
v___x_3278_ = ((lean_object*)(l_Lean_Parser_Term_structInstFieldBinder_formatter___closed__0));
v___x_3279_ = l_Lean_Parser_mkAntiquot(v___x_3278_, v___x_3277_, v___x_3276_, v___x_3276_);
return v___x_3279_;
}
}
static lean_object* _init_l_Lean_Parser_Term_structInstFieldBinder___closed__1(void){
_start:
{
uint8_t v___x_3280_; lean_object* v___x_3281_; 
v___x_3280_ = 0;
v___x_3281_ = l_Lean_Parser_Term_bracketedBinder(v___x_3280_);
return v___x_3281_;
}
}
static lean_object* _init_l_Lean_Parser_Term_structInstFieldBinder___closed__2(void){
_start:
{
lean_object* v___x_3282_; lean_object* v___x_3283_; lean_object* v___x_3284_; 
v___x_3282_ = lean_obj_once(&l_Lean_Parser_Term_structInstFieldBinder___closed__1, &l_Lean_Parser_Term_structInstFieldBinder___closed__1_once, _init_l_Lean_Parser_Term_structInstFieldBinder___closed__1);
v___x_3283_ = l_Lean_Parser_Term_binderIdent;
v___x_3284_ = l_Lean_Parser_orelse(v___x_3283_, v___x_3282_);
return v___x_3284_;
}
}
static lean_object* _init_l_Lean_Parser_Term_structInstFieldBinder___closed__3(void){
_start:
{
lean_object* v___x_3285_; lean_object* v___x_3286_; lean_object* v___x_3287_; 
v___x_3285_ = lean_obj_once(&l_Lean_Parser_Term_structInstFieldBinder___closed__2, &l_Lean_Parser_Term_structInstFieldBinder___closed__2_once, _init_l_Lean_Parser_Term_structInstFieldBinder___closed__2);
v___x_3286_ = lean_obj_once(&l_Lean_Parser_Term_structInstFieldBinder___closed__0, &l_Lean_Parser_Term_structInstFieldBinder___closed__0_once, _init_l_Lean_Parser_Term_structInstFieldBinder___closed__0);
v___x_3287_ = l_Lean_Parser_withAntiquot(v___x_3286_, v___x_3285_);
return v___x_3287_;
}
}
static lean_object* _init_l_Lean_Parser_Term_structInstFieldBinder(void){
_start:
{
lean_object* v___x_3288_; 
v___x_3288_ = lean_obj_once(&l_Lean_Parser_Term_structInstFieldBinder___closed__3, &l_Lean_Parser_Term_structInstFieldBinder___closed__3_once, _init_l_Lean_Parser_Term_structInstFieldBinder___closed__3);
return v___x_3288_;
}
}
static lean_object* _init_l_Lean_Parser_Term_optTypeForStructInst_formatter___closed__1(void){
_start:
{
lean_object* v___x_3291_; lean_object* v___x_3292_; lean_object* v___x_3293_; 
v___x_3291_ = ((lean_object*)(l_Lean_Parser_Term_optTypeForStructInst_formatter___closed__0));
v___x_3292_ = lean_alloc_closure((void*)(l_Lean_Parser_Term_typeSpec_formatter___boxed), 5, 0);
v___x_3293_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed), 7, 2);
lean_closure_set(v___x_3293_, 0, v___x_3292_);
lean_closure_set(v___x_3293_, 1, v___x_3291_);
return v___x_3293_;
}
}
static lean_object* _init_l_Lean_Parser_Term_optTypeForStructInst_formatter___closed__2(void){
_start:
{
lean_object* v___x_3294_; lean_object* v___x_3295_; 
v___x_3294_ = lean_obj_once(&l_Lean_Parser_Term_optTypeForStructInst_formatter___closed__1, &l_Lean_Parser_Term_optTypeForStructInst_formatter___closed__1_once, _init_l_Lean_Parser_Term_optTypeForStructInst_formatter___closed__1);
v___x_3295_ = lean_alloc_closure((void*)(l_Lean_Parser_atomic_formatter___boxed), 6, 1);
lean_closure_set(v___x_3295_, 0, v___x_3294_);
return v___x_3295_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Term_optTypeForStructInst_formatter(lean_object* v_a_3296_, lean_object* v_a_3297_, lean_object* v_a_3298_, lean_object* v_a_3299_){
_start:
{
lean_object* v___x_3301_; lean_object* v___x_3302_; 
v___x_3301_ = lean_obj_once(&l_Lean_Parser_Term_optTypeForStructInst_formatter___closed__2, &l_Lean_Parser_Term_optTypeForStructInst_formatter___closed__2_once, _init_l_Lean_Parser_Term_optTypeForStructInst_formatter___closed__2);
v___x_3302_ = l_Lean_Parser_optional_formatter(v___x_3301_, v_a_3296_, v_a_3297_, v_a_3298_, v_a_3299_);
return v___x_3302_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Term_optTypeForStructInst_formatter___boxed(lean_object* v_a_3303_, lean_object* v_a_3304_, lean_object* v_a_3305_, lean_object* v_a_3306_, lean_object* v_a_3307_){
_start:
{
lean_object* v_res_3308_; 
v_res_3308_ = l_Lean_Parser_Term_optTypeForStructInst_formatter(v_a_3303_, v_a_3304_, v_a_3305_, v_a_3306_);
lean_dec(v_a_3306_);
lean_dec_ref(v_a_3305_);
lean_dec(v_a_3304_);
lean_dec_ref(v_a_3303_);
return v_res_3308_;
}
}
static lean_object* _init_l_Lean_Parser_Term_optTypeForStructInst_parenthesizer___closed__1(void){
_start:
{
lean_object* v___x_3311_; lean_object* v___x_3312_; lean_object* v___f_3313_; 
v___x_3311_ = ((lean_object*)(l_Lean_Parser_Term_optTypeForStructInst_parenthesizer___closed__0));
v___x_3312_ = lean_alloc_closure((void*)(l_Lean_Parser_Term_typeSpec_parenthesizer___boxed), 5, 0);
v___f_3313_ = lean_alloc_closure((void*)(l_Lean_Parser_Term_binderTactic_parenthesizer___lam__0___boxed), 7, 2);
lean_closure_set(v___f_3313_, 0, v___x_3312_);
lean_closure_set(v___f_3313_, 1, v___x_3311_);
return v___f_3313_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Term_optTypeForStructInst_parenthesizer(lean_object* v_a_3314_, lean_object* v_a_3315_, lean_object* v_a_3316_, lean_object* v_a_3317_){
_start:
{
lean_object* v___f_3319_; lean_object* v___x_3320_; 
v___f_3319_ = lean_obj_once(&l_Lean_Parser_Term_optTypeForStructInst_parenthesizer___closed__1, &l_Lean_Parser_Term_optTypeForStructInst_parenthesizer___closed__1_once, _init_l_Lean_Parser_Term_optTypeForStructInst_parenthesizer___closed__1);
v___x_3320_ = l_Lean_Parser_optional_parenthesizer(v___f_3319_, v_a_3314_, v_a_3315_, v_a_3316_, v_a_3317_);
return v___x_3320_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Term_optTypeForStructInst_parenthesizer___boxed(lean_object* v_a_3321_, lean_object* v_a_3322_, lean_object* v_a_3323_, lean_object* v_a_3324_, lean_object* v_a_3325_){
_start:
{
lean_object* v_res_3326_; 
v_res_3326_ = l_Lean_Parser_Term_optTypeForStructInst_parenthesizer(v_a_3321_, v_a_3322_, v_a_3323_, v_a_3324_);
lean_dec(v_a_3324_);
lean_dec_ref(v_a_3323_);
lean_dec(v_a_3322_);
lean_dec_ref(v_a_3321_);
return v_res_3326_;
}
}
static lean_object* _init_l_Lean_Parser_Term_optTypeForStructInst___closed__0(void){
_start:
{
lean_object* v___x_3327_; lean_object* v___x_3328_; lean_object* v___x_3329_; 
v___x_3327_ = ((lean_object*)(l_Lean_Parser_Tactic_tacticSeqBracketed___closed__6));
v___x_3328_ = lean_obj_once(&l_Lean_Parser_Tactic_tacticSeqBracketed___closed__7, &l_Lean_Parser_Tactic_tacticSeqBracketed___closed__7_once, _init_l_Lean_Parser_Tactic_tacticSeqBracketed___closed__7);
v___x_3329_ = l_Lean_Parser_notFollowedBy(v___x_3328_, v___x_3327_);
return v___x_3329_;
}
}
static lean_object* _init_l_Lean_Parser_Term_optTypeForStructInst___closed__1(void){
_start:
{
lean_object* v___x_3330_; lean_object* v___x_3331_; lean_object* v___x_3332_; 
v___x_3330_ = lean_obj_once(&l_Lean_Parser_Term_optTypeForStructInst___closed__0, &l_Lean_Parser_Term_optTypeForStructInst___closed__0_once, _init_l_Lean_Parser_Term_optTypeForStructInst___closed__0);
v___x_3331_ = l_Lean_Parser_Term_typeSpec;
v___x_3332_ = l_Lean_Parser_andthen(v___x_3331_, v___x_3330_);
return v___x_3332_;
}
}
static lean_object* _init_l_Lean_Parser_Term_optTypeForStructInst___closed__2(void){
_start:
{
lean_object* v___x_3333_; lean_object* v___x_3334_; 
v___x_3333_ = lean_obj_once(&l_Lean_Parser_Term_optTypeForStructInst___closed__1, &l_Lean_Parser_Term_optTypeForStructInst___closed__1_once, _init_l_Lean_Parser_Term_optTypeForStructInst___closed__1);
v___x_3334_ = l_Lean_Parser_atomic(v___x_3333_);
return v___x_3334_;
}
}
static lean_object* _init_l_Lean_Parser_Term_optTypeForStructInst___closed__3(void){
_start:
{
lean_object* v___x_3335_; lean_object* v___x_3336_; 
v___x_3335_ = lean_obj_once(&l_Lean_Parser_Term_optTypeForStructInst___closed__2, &l_Lean_Parser_Term_optTypeForStructInst___closed__2_once, _init_l_Lean_Parser_Term_optTypeForStructInst___closed__2);
v___x_3336_ = l_Lean_Parser_optional(v___x_3335_);
return v___x_3336_;
}
}
static lean_object* _init_l_Lean_Parser_Term_optTypeForStructInst(void){
_start:
{
lean_object* v___x_3337_; 
v___x_3337_ = lean_obj_once(&l_Lean_Parser_Term_optTypeForStructInst___closed__3, &l_Lean_Parser_Term_optTypeForStructInst___closed__3_once, _init_l_Lean_Parser_Term_optTypeForStructInst___closed__3);
return v___x_3337_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Term_structInstFieldDeclParser_formatter___redArg(lean_object* v_a_3338_, lean_object* v_a_3339_, lean_object* v_a_3340_, lean_object* v_a_3341_){
_start:
{
lean_object* v___x_3343_; lean_object* v___x_3344_; 
v___x_3343_ = ((lean_object*)(l_Lean_Parser_Term_structInstFieldDeclParser___closed__0));
v___x_3344_ = l_Lean_PrettyPrinter_Formatter_categoryParser_formatter(v___x_3343_, v_a_3338_, v_a_3339_, v_a_3340_, v_a_3341_);
return v___x_3344_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Term_structInstFieldDeclParser_formatter___redArg___boxed(lean_object* v_a_3345_, lean_object* v_a_3346_, lean_object* v_a_3347_, lean_object* v_a_3348_, lean_object* v_a_3349_){
_start:
{
lean_object* v_res_3350_; 
v_res_3350_ = l_Lean_Parser_Term_structInstFieldDeclParser_formatter___redArg(v_a_3345_, v_a_3346_, v_a_3347_, v_a_3348_);
lean_dec(v_a_3348_);
lean_dec_ref(v_a_3347_);
lean_dec(v_a_3346_);
lean_dec_ref(v_a_3345_);
return v_res_3350_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Term_structInstFieldDeclParser_formatter(lean_object* v_rbp_3351_, lean_object* v_a_3352_, lean_object* v_a_3353_, lean_object* v_a_3354_, lean_object* v_a_3355_){
_start:
{
lean_object* v___x_3357_; 
v___x_3357_ = l_Lean_Parser_Term_structInstFieldDeclParser_formatter___redArg(v_a_3352_, v_a_3353_, v_a_3354_, v_a_3355_);
return v___x_3357_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Term_structInstFieldDeclParser_formatter___boxed(lean_object* v_rbp_3358_, lean_object* v_a_3359_, lean_object* v_a_3360_, lean_object* v_a_3361_, lean_object* v_a_3362_, lean_object* v_a_3363_){
_start:
{
lean_object* v_res_3364_; 
v_res_3364_ = l_Lean_Parser_Term_structInstFieldDeclParser_formatter(v_rbp_3358_, v_a_3359_, v_a_3360_, v_a_3361_, v_a_3362_);
lean_dec(v_a_3362_);
lean_dec_ref(v_a_3361_);
lean_dec(v_a_3360_);
lean_dec_ref(v_a_3359_);
lean_dec(v_rbp_3358_);
return v_res_3364_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Term_structInstField_formatter___lam__0(lean_object* v___y_3365_, lean_object* v___y_3366_, lean_object* v___y_3367_, lean_object* v___y_3368_){
_start:
{
lean_object* v___x_3370_; 
v___x_3370_ = l_Lean_PrettyPrinter_Formatter_pushLine___redArg(v___y_3366_);
return v___x_3370_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Term_structInstField_formatter___lam__0___boxed(lean_object* v___y_3371_, lean_object* v___y_3372_, lean_object* v___y_3373_, lean_object* v___y_3374_, lean_object* v___y_3375_){
_start:
{
lean_object* v_res_3376_; 
v_res_3376_ = l_Lean_Parser_Term_structInstField_formatter___lam__0(v___y_3371_, v___y_3372_, v___y_3373_, v___y_3374_);
lean_dec(v___y_3374_);
lean_dec_ref(v___y_3373_);
lean_dec(v___y_3372_);
lean_dec_ref(v___y_3371_);
return v_res_3376_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Term_structInstField_formatter___lam__1(lean_object* v___x_3377_, lean_object* v___x_3378_, lean_object* v___y_3379_, lean_object* v___y_3380_, lean_object* v___y_3381_, lean_object* v___y_3382_){
_start:
{
lean_object* v___x_3384_; 
v___x_3384_ = l_Lean_PrettyPrinter_Formatter_orelse_formatter(v___x_3377_, v___x_3378_, v___y_3379_, v___y_3380_, v___y_3381_, v___y_3382_);
return v___x_3384_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Term_structInstField_formatter___lam__1___boxed(lean_object* v___x_3385_, lean_object* v___x_3386_, lean_object* v___y_3387_, lean_object* v___y_3388_, lean_object* v___y_3389_, lean_object* v___y_3390_, lean_object* v___y_3391_){
_start:
{
lean_object* v_res_3392_; 
v_res_3392_ = l_Lean_Parser_Term_structInstField_formatter___lam__1(v___x_3385_, v___x_3386_, v___y_3387_, v___y_3388_, v___y_3389_, v___y_3390_);
lean_dec(v___y_3390_);
lean_dec_ref(v___y_3389_);
lean_dec(v___y_3388_);
lean_dec_ref(v___y_3387_);
return v_res_3392_;
}
}
static lean_object* _init_l_Lean_Parser_Term_structInstField_formatter___closed__4(void){
_start:
{
lean_object* v___x_3407_; lean_object* v___f_3408_; lean_object* v___x_3409_; 
v___x_3407_ = lean_alloc_closure((void*)(l_Lean_Parser_Term_structInstFieldBinder_formatter___boxed), 5, 0);
v___f_3408_ = ((lean_object*)(l_Lean_Parser_Term_structInstField_formatter___closed__0));
v___x_3409_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed), 7, 2);
lean_closure_set(v___x_3409_, 0, v___f_3408_);
lean_closure_set(v___x_3409_, 1, v___x_3407_);
return v___x_3409_;
}
}
static lean_object* _init_l_Lean_Parser_Term_structInstField_formatter___closed__5(void){
_start:
{
lean_object* v___x_3410_; lean_object* v___x_3411_; lean_object* v___x_3412_; 
v___x_3410_ = lean_obj_once(&l_Lean_Parser_Term_structInstField_formatter___closed__4, &l_Lean_Parser_Term_structInstField_formatter___closed__4_once, _init_l_Lean_Parser_Term_structInstField_formatter___closed__4);
v___x_3411_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_checkColGt_formatter___boxed), 5, 0);
v___x_3412_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed), 7, 2);
lean_closure_set(v___x_3412_, 0, v___x_3411_);
lean_closure_set(v___x_3412_, 1, v___x_3410_);
return v___x_3412_;
}
}
static lean_object* _init_l_Lean_Parser_Term_structInstField_formatter___closed__6(void){
_start:
{
lean_object* v___x_3413_; lean_object* v___x_3414_; 
v___x_3413_ = lean_obj_once(&l_Lean_Parser_Term_structInstField_formatter___closed__5, &l_Lean_Parser_Term_structInstField_formatter___closed__5_once, _init_l_Lean_Parser_Term_structInstField_formatter___closed__5);
v___x_3414_ = lean_alloc_closure((void*)(l_Lean_Parser_many_formatter___boxed), 6, 1);
lean_closure_set(v___x_3414_, 0, v___x_3413_);
return v___x_3414_;
}
}
static lean_object* _init_l_Lean_Parser_Term_structInstField_formatter___closed__9(void){
_start:
{
lean_object* v___x_3419_; lean_object* v___x_3420_; lean_object* v___x_3421_; 
v___x_3419_ = ((lean_object*)(l_Lean_Parser_Term_structInstField_formatter___closed__8));
v___x_3420_ = lean_alloc_closure((void*)(l_Lean_Parser_Term_optTypeForStructInst_formatter___boxed), 5, 0);
v___x_3421_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed), 7, 2);
lean_closure_set(v___x_3421_, 0, v___x_3420_);
lean_closure_set(v___x_3421_, 1, v___x_3419_);
return v___x_3421_;
}
}
static lean_object* _init_l_Lean_Parser_Term_structInstField_formatter___closed__10(void){
_start:
{
lean_object* v___x_3422_; lean_object* v___x_3423_; lean_object* v___x_3424_; 
v___x_3422_ = lean_obj_once(&l_Lean_Parser_Term_structInstField_formatter___closed__9, &l_Lean_Parser_Term_structInstField_formatter___closed__9_once, _init_l_Lean_Parser_Term_structInstField_formatter___closed__9);
v___x_3423_ = lean_obj_once(&l_Lean_Parser_Term_structInstField_formatter___closed__6, &l_Lean_Parser_Term_structInstField_formatter___closed__6_once, _init_l_Lean_Parser_Term_structInstField_formatter___closed__6);
v___x_3424_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed), 7, 2);
lean_closure_set(v___x_3424_, 0, v___x_3423_);
lean_closure_set(v___x_3424_, 1, v___x_3422_);
return v___x_3424_;
}
}
static lean_object* _init_l_Lean_Parser_Term_structInstField_formatter___closed__11(void){
_start:
{
lean_object* v___x_3425_; lean_object* v___x_3426_; 
v___x_3425_ = lean_obj_once(&l_Lean_Parser_Term_structInstField_formatter___closed__10, &l_Lean_Parser_Term_structInstField_formatter___closed__10_once, _init_l_Lean_Parser_Term_structInstField_formatter___closed__10);
v___x_3426_ = lean_alloc_closure((void*)(l_Lean_Parser_optional_formatter___boxed), 6, 1);
lean_closure_set(v___x_3426_, 0, v___x_3425_);
return v___x_3426_;
}
}
static lean_object* _init_l_Lean_Parser_Term_structInstField_formatter___closed__12(void){
_start:
{
lean_object* v___x_3427_; lean_object* v___x_3428_; lean_object* v___x_3429_; 
v___x_3427_ = lean_obj_once(&l_Lean_Parser_Term_structInstField_formatter___closed__11, &l_Lean_Parser_Term_structInstField_formatter___closed__11_once, _init_l_Lean_Parser_Term_structInstField_formatter___closed__11);
v___x_3428_ = lean_alloc_closure((void*)(l_Lean_Parser_Term_structInstLVal_formatter___boxed), 5, 0);
v___x_3429_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed), 7, 2);
lean_closure_set(v___x_3429_, 0, v___x_3428_);
lean_closure_set(v___x_3429_, 1, v___x_3427_);
return v___x_3429_;
}
}
static lean_object* _init_l_Lean_Parser_Term_structInstField_formatter___closed__13(void){
_start:
{
lean_object* v___x_3430_; lean_object* v___x_3431_; lean_object* v___x_3432_; lean_object* v___x_3433_; 
v___x_3430_ = lean_obj_once(&l_Lean_Parser_Term_structInstField_formatter___closed__12, &l_Lean_Parser_Term_structInstField_formatter___closed__12_once, _init_l_Lean_Parser_Term_structInstField_formatter___closed__12);
v___x_3431_ = lean_unsigned_to_nat(1024u);
v___x_3432_ = ((lean_object*)(l_Lean_Parser_Term_structInstField_formatter___closed__2));
v___x_3433_ = lean_alloc_closure((void*)(l_Lean_Parser_leadingNode_formatter___boxed), 8, 3);
lean_closure_set(v___x_3433_, 0, v___x_3432_);
lean_closure_set(v___x_3433_, 1, v___x_3431_);
lean_closure_set(v___x_3433_, 2, v___x_3430_);
return v___x_3433_;
}
}
static lean_object* _init_l_Lean_Parser_Term_structInstField_formatter___closed__14(void){
_start:
{
lean_object* v___x_3434_; lean_object* v___x_3435_; lean_object* v___f_3436_; 
v___x_3434_ = lean_obj_once(&l_Lean_Parser_Term_structInstField_formatter___closed__13, &l_Lean_Parser_Term_structInstField_formatter___closed__13_once, _init_l_Lean_Parser_Term_structInstField_formatter___closed__13);
v___x_3435_ = ((lean_object*)(l_Lean_Parser_Term_structInstField_formatter___closed__3));
v___f_3436_ = lean_alloc_closure((void*)(l_Lean_Parser_Term_structInstField_formatter___lam__1___boxed), 7, 2);
lean_closure_set(v___f_3436_, 0, v___x_3435_);
lean_closure_set(v___f_3436_, 1, v___x_3434_);
return v___f_3436_;
}
}
static lean_object* _init_l_Lean_Parser_Term_structInstField_formatter___closed__15(void){
_start:
{
lean_object* v___f_3437_; lean_object* v___x_3438_; lean_object* v___x_3439_; 
v___f_3437_ = lean_obj_once(&l_Lean_Parser_Term_structInstField_formatter___closed__14, &l_Lean_Parser_Term_structInstField_formatter___closed__14_once, _init_l_Lean_Parser_Term_structInstField_formatter___closed__14);
v___x_3438_ = ((lean_object*)(l_Lean_Parser_Term_structInstField_formatter___closed__2));
v___x_3439_ = lean_alloc_closure((void*)(l_Lean_Parser_withCache_formatter___boxed), 7, 2);
lean_closure_set(v___x_3439_, 0, v___x_3438_);
lean_closure_set(v___x_3439_, 1, v___f_3437_);
return v___x_3439_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Term_structInstField_formatter(lean_object* v_a_3440_, lean_object* v_a_3441_, lean_object* v_a_3442_, lean_object* v_a_3443_){
_start:
{
lean_object* v___x_3445_; lean_object* v___x_3446_; 
v___x_3445_ = lean_obj_once(&l_Lean_Parser_Term_structInstField_formatter___closed__15, &l_Lean_Parser_Term_structInstField_formatter___closed__15_once, _init_l_Lean_Parser_Term_structInstField_formatter___closed__15);
v___x_3446_ = l_Lean_Parser_ppGroup_formatter(v___x_3445_, v_a_3440_, v_a_3441_, v_a_3442_, v_a_3443_);
return v___x_3446_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Term_structInstField_formatter___boxed(lean_object* v_a_3447_, lean_object* v_a_3448_, lean_object* v_a_3449_, lean_object* v_a_3450_, lean_object* v_a_3451_){
_start:
{
lean_object* v_res_3452_; 
v_res_3452_ = l_Lean_Parser_Term_structInstField_formatter(v_a_3447_, v_a_3448_, v_a_3449_, v_a_3450_);
lean_dec(v_a_3450_);
lean_dec_ref(v_a_3449_);
lean_dec(v_a_3448_);
lean_dec_ref(v_a_3447_);
return v_res_3452_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_structInstField___regBuiltin_Lean_Parser_Term_structInstField_formatter__5(){
_start:
{
lean_object* v___x_3460_; lean_object* v___x_3461_; lean_object* v___x_3462_; lean_object* v___x_3463_; lean_object* v___x_3464_; 
v___x_3460_ = l_Lean_PrettyPrinter_formatterAttribute;
v___x_3461_ = ((lean_object*)(l_Lean_Parser_Term_structInstField_formatter___closed__2));
v___x_3462_ = ((lean_object*)(l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_structInstField___regBuiltin_Lean_Parser_Term_structInstField_formatter__5___closed__0));
v___x_3463_ = lean_alloc_closure((void*)(l_Lean_Parser_Term_structInstField_formatter___boxed), 5, 0);
v___x_3464_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_3460_, v___x_3461_, v___x_3462_, v___x_3463_);
return v___x_3464_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_structInstField___regBuiltin_Lean_Parser_Term_structInstField_formatter__5___boxed(lean_object* v_a_3465_){
_start:
{
lean_object* v_res_3466_; 
v_res_3466_ = l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_structInstField___regBuiltin_Lean_Parser_Term_structInstField_formatter__5();
return v_res_3466_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Term_structInstFieldDeclParser_parenthesizer(lean_object* v_rbp_3467_, lean_object* v_a_3468_, lean_object* v_a_3469_, lean_object* v_a_3470_, lean_object* v_a_3471_){
_start:
{
lean_object* v___x_3473_; lean_object* v___x_3474_; 
v___x_3473_ = ((lean_object*)(l_Lean_Parser_Term_structInstFieldDeclParser___closed__0));
v___x_3474_ = l_Lean_PrettyPrinter_Parenthesizer_categoryParser_parenthesizer(v___x_3473_, v_rbp_3467_, v_a_3468_, v_a_3469_, v_a_3470_, v_a_3471_);
return v___x_3474_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Term_structInstFieldDeclParser_parenthesizer___boxed(lean_object* v_rbp_3475_, lean_object* v_a_3476_, lean_object* v_a_3477_, lean_object* v_a_3478_, lean_object* v_a_3479_, lean_object* v_a_3480_){
_start:
{
lean_object* v_res_3481_; 
v_res_3481_ = l_Lean_Parser_Term_structInstFieldDeclParser_parenthesizer(v_rbp_3475_, v_a_3476_, v_a_3477_, v_a_3478_, v_a_3479_);
lean_dec(v_a_3479_);
lean_dec_ref(v_a_3478_);
lean_dec(v_a_3477_);
lean_dec_ref(v_a_3476_);
return v_res_3481_;
}
}
static lean_object* _init_l_Lean_Parser_Term_structInstField_parenthesizer___closed__2(void){
_start:
{
lean_object* v___x_3490_; lean_object* v___x_3491_; lean_object* v___x_3492_; 
v___x_3490_ = lean_alloc_closure((void*)(l_Lean_Parser_Term_structInstFieldBinder_parenthesizer___boxed), 5, 0);
v___x_3491_ = ((lean_object*)(l_Lean_Parser_Term_structInstField_parenthesizer___closed__1));
v___x_3492_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed), 7, 2);
lean_closure_set(v___x_3492_, 0, v___x_3491_);
lean_closure_set(v___x_3492_, 1, v___x_3490_);
return v___x_3492_;
}
}
static lean_object* _init_l_Lean_Parser_Term_structInstField_parenthesizer___closed__3(void){
_start:
{
lean_object* v___x_3493_; lean_object* v___x_3494_; lean_object* v___x_3495_; 
v___x_3493_ = lean_obj_once(&l_Lean_Parser_Term_structInstField_parenthesizer___closed__2, &l_Lean_Parser_Term_structInstField_parenthesizer___closed__2_once, _init_l_Lean_Parser_Term_structInstField_parenthesizer___closed__2);
v___x_3494_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_checkColGt_parenthesizer___boxed), 5, 0);
v___x_3495_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed), 7, 2);
lean_closure_set(v___x_3495_, 0, v___x_3494_);
lean_closure_set(v___x_3495_, 1, v___x_3493_);
return v___x_3495_;
}
}
static lean_object* _init_l_Lean_Parser_Term_structInstField_parenthesizer___closed__4(void){
_start:
{
lean_object* v___x_3496_; lean_object* v___x_3497_; 
v___x_3496_ = lean_obj_once(&l_Lean_Parser_Term_structInstField_parenthesizer___closed__3, &l_Lean_Parser_Term_structInstField_parenthesizer___closed__3_once, _init_l_Lean_Parser_Term_structInstField_parenthesizer___closed__3);
v___x_3497_ = lean_alloc_closure((void*)(l_Lean_Parser_many_parenthesizer___boxed), 6, 1);
lean_closure_set(v___x_3497_, 0, v___x_3496_);
return v___x_3497_;
}
}
static lean_object* _init_l_Lean_Parser_Term_structInstField_parenthesizer___closed__7(void){
_start:
{
lean_object* v___x_3502_; lean_object* v___x_3503_; lean_object* v___x_3504_; 
v___x_3502_ = ((lean_object*)(l_Lean_Parser_Term_structInstField_parenthesizer___closed__6));
v___x_3503_ = lean_alloc_closure((void*)(l_Lean_Parser_Term_optTypeForStructInst_parenthesizer___boxed), 5, 0);
v___x_3504_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed), 7, 2);
lean_closure_set(v___x_3504_, 0, v___x_3503_);
lean_closure_set(v___x_3504_, 1, v___x_3502_);
return v___x_3504_;
}
}
static lean_object* _init_l_Lean_Parser_Term_structInstField_parenthesizer___closed__8(void){
_start:
{
lean_object* v___x_3505_; lean_object* v___x_3506_; lean_object* v___x_3507_; 
v___x_3505_ = lean_obj_once(&l_Lean_Parser_Term_structInstField_parenthesizer___closed__7, &l_Lean_Parser_Term_structInstField_parenthesizer___closed__7_once, _init_l_Lean_Parser_Term_structInstField_parenthesizer___closed__7);
v___x_3506_ = lean_obj_once(&l_Lean_Parser_Term_structInstField_parenthesizer___closed__4, &l_Lean_Parser_Term_structInstField_parenthesizer___closed__4_once, _init_l_Lean_Parser_Term_structInstField_parenthesizer___closed__4);
v___x_3507_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed), 7, 2);
lean_closure_set(v___x_3507_, 0, v___x_3506_);
lean_closure_set(v___x_3507_, 1, v___x_3505_);
return v___x_3507_;
}
}
static lean_object* _init_l_Lean_Parser_Term_structInstField_parenthesizer___closed__9(void){
_start:
{
lean_object* v___x_3508_; lean_object* v___x_3509_; 
v___x_3508_ = lean_obj_once(&l_Lean_Parser_Term_structInstField_parenthesizer___closed__8, &l_Lean_Parser_Term_structInstField_parenthesizer___closed__8_once, _init_l_Lean_Parser_Term_structInstField_parenthesizer___closed__8);
v___x_3509_ = lean_alloc_closure((void*)(l_Lean_Parser_optional_parenthesizer___boxed), 6, 1);
lean_closure_set(v___x_3509_, 0, v___x_3508_);
return v___x_3509_;
}
}
static lean_object* _init_l_Lean_Parser_Term_structInstField_parenthesizer___closed__10(void){
_start:
{
lean_object* v___x_3510_; lean_object* v___x_3511_; lean_object* v___x_3512_; 
v___x_3510_ = lean_obj_once(&l_Lean_Parser_Term_structInstField_parenthesizer___closed__9, &l_Lean_Parser_Term_structInstField_parenthesizer___closed__9_once, _init_l_Lean_Parser_Term_structInstField_parenthesizer___closed__9);
v___x_3511_ = lean_alloc_closure((void*)(l_Lean_Parser_Term_structInstLVal_parenthesizer___boxed), 5, 0);
v___x_3512_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed), 7, 2);
lean_closure_set(v___x_3512_, 0, v___x_3511_);
lean_closure_set(v___x_3512_, 1, v___x_3510_);
return v___x_3512_;
}
}
static lean_object* _init_l_Lean_Parser_Term_structInstField_parenthesizer___closed__11(void){
_start:
{
lean_object* v___x_3513_; lean_object* v___x_3514_; lean_object* v___x_3515_; lean_object* v___x_3516_; 
v___x_3513_ = lean_obj_once(&l_Lean_Parser_Term_structInstField_parenthesizer___closed__10, &l_Lean_Parser_Term_structInstField_parenthesizer___closed__10_once, _init_l_Lean_Parser_Term_structInstField_parenthesizer___closed__10);
v___x_3514_ = lean_unsigned_to_nat(1024u);
v___x_3515_ = ((lean_object*)(l_Lean_Parser_Term_structInstField_formatter___closed__2));
v___x_3516_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_leadingNode_parenthesizer___boxed), 8, 3);
lean_closure_set(v___x_3516_, 0, v___x_3515_);
lean_closure_set(v___x_3516_, 1, v___x_3514_);
lean_closure_set(v___x_3516_, 2, v___x_3513_);
return v___x_3516_;
}
}
static lean_object* _init_l_Lean_Parser_Term_structInstField_parenthesizer___closed__12(void){
_start:
{
lean_object* v___x_3517_; lean_object* v___x_3518_; lean_object* v___x_3519_; 
v___x_3517_ = lean_obj_once(&l_Lean_Parser_Term_structInstField_parenthesizer___closed__11, &l_Lean_Parser_Term_structInstField_parenthesizer___closed__11_once, _init_l_Lean_Parser_Term_structInstField_parenthesizer___closed__11);
v___x_3518_ = ((lean_object*)(l_Lean_Parser_Term_structInstField_parenthesizer___closed__0));
v___x_3519_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_withAntiquot_parenthesizer___boxed), 7, 2);
lean_closure_set(v___x_3519_, 0, v___x_3518_);
lean_closure_set(v___x_3519_, 1, v___x_3517_);
return v___x_3519_;
}
}
static lean_object* _init_l_Lean_Parser_Term_structInstField_parenthesizer___closed__13(void){
_start:
{
lean_object* v___x_3520_; lean_object* v___x_3521_; lean_object* v___x_3522_; 
v___x_3520_ = lean_obj_once(&l_Lean_Parser_Term_structInstField_parenthesizer___closed__12, &l_Lean_Parser_Term_structInstField_parenthesizer___closed__12_once, _init_l_Lean_Parser_Term_structInstField_parenthesizer___closed__12);
v___x_3521_ = ((lean_object*)(l_Lean_Parser_Term_structInstField_formatter___closed__2));
v___x_3522_ = lean_alloc_closure((void*)(l_Lean_Parser_withCache_parenthesizer___boxed), 7, 2);
lean_closure_set(v___x_3522_, 0, v___x_3521_);
lean_closure_set(v___x_3522_, 1, v___x_3520_);
return v___x_3522_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Term_structInstField_parenthesizer(lean_object* v_a_3523_, lean_object* v_a_3524_, lean_object* v_a_3525_, lean_object* v_a_3526_){
_start:
{
lean_object* v___x_3528_; lean_object* v___x_3529_; 
v___x_3528_ = lean_obj_once(&l_Lean_Parser_Term_structInstField_parenthesizer___closed__13, &l_Lean_Parser_Term_structInstField_parenthesizer___closed__13_once, _init_l_Lean_Parser_Term_structInstField_parenthesizer___closed__13);
v___x_3529_ = l_Lean_Parser_ppGroup_parenthesizer(v___x_3528_, v_a_3523_, v_a_3524_, v_a_3525_, v_a_3526_);
return v___x_3529_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Term_structInstField_parenthesizer___boxed(lean_object* v_a_3530_, lean_object* v_a_3531_, lean_object* v_a_3532_, lean_object* v_a_3533_, lean_object* v_a_3534_){
_start:
{
lean_object* v_res_3535_; 
v_res_3535_ = l_Lean_Parser_Term_structInstField_parenthesizer(v_a_3530_, v_a_3531_, v_a_3532_, v_a_3533_);
lean_dec(v_a_3533_);
lean_dec_ref(v_a_3532_);
lean_dec(v_a_3531_);
lean_dec_ref(v_a_3530_);
return v_res_3535_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_structInstField___regBuiltin_Lean_Parser_Term_structInstField_parenthesizer__11(){
_start:
{
lean_object* v___x_3543_; lean_object* v___x_3544_; lean_object* v___x_3545_; lean_object* v___x_3546_; lean_object* v___x_3547_; 
v___x_3543_ = l_Lean_PrettyPrinter_parenthesizerAttribute;
v___x_3544_ = ((lean_object*)(l_Lean_Parser_Term_structInstField_formatter___closed__2));
v___x_3545_ = ((lean_object*)(l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_structInstField___regBuiltin_Lean_Parser_Term_structInstField_parenthesizer__11___closed__0));
v___x_3546_ = lean_alloc_closure((void*)(l_Lean_Parser_Term_structInstField_parenthesizer___boxed), 5, 0);
v___x_3547_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_3543_, v___x_3544_, v___x_3545_, v___x_3546_);
return v___x_3547_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_structInstField___regBuiltin_Lean_Parser_Term_structInstField_parenthesizer__11___boxed(lean_object* v_a_3548_){
_start:
{
lean_object* v_res_3549_; 
v_res_3549_ = l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_structInstField___regBuiltin_Lean_Parser_Term_structInstField_parenthesizer__11();
return v_res_3549_;
}
}
static lean_object* _init_l_Lean_Parser_Term_structInstField___closed__0(void){
_start:
{
uint8_t v___x_3550_; uint8_t v___x_3551_; lean_object* v___x_3552_; lean_object* v___x_3553_; lean_object* v___x_3554_; 
v___x_3550_ = 0;
v___x_3551_ = 1;
v___x_3552_ = ((lean_object*)(l_Lean_Parser_Term_structInstField_formatter___closed__2));
v___x_3553_ = ((lean_object*)(l_Lean_Parser_Term_structInstField_formatter___closed__1));
v___x_3554_ = l_Lean_Parser_mkAntiquot(v___x_3553_, v___x_3552_, v___x_3551_, v___x_3550_);
return v___x_3554_;
}
}
static lean_object* _init_l_Lean_Parser_Term_structInstField___closed__2(void){
_start:
{
lean_object* v___x_3556_; lean_object* v___x_3557_; 
v___x_3556_ = ((lean_object*)(l_Lean_Parser_Term_structInstField___closed__1));
v___x_3557_ = l_Lean_Parser_checkColGt(v___x_3556_);
return v___x_3557_;
}
}
static lean_object* _init_l_Lean_Parser_Term_structInstField___closed__3(void){
_start:
{
lean_object* v___x_3558_; lean_object* v___x_3559_; lean_object* v___x_3560_; 
v___x_3558_ = l_Lean_Parser_Term_structInstFieldBinder;
v___x_3559_ = l_Lean_Parser_skip;
v___x_3560_ = l_Lean_Parser_andthen(v___x_3559_, v___x_3558_);
return v___x_3560_;
}
}
static lean_object* _init_l_Lean_Parser_Term_structInstField___closed__4(void){
_start:
{
lean_object* v___x_3561_; lean_object* v___x_3562_; lean_object* v___x_3563_; 
v___x_3561_ = lean_obj_once(&l_Lean_Parser_Term_structInstField___closed__3, &l_Lean_Parser_Term_structInstField___closed__3_once, _init_l_Lean_Parser_Term_structInstField___closed__3);
v___x_3562_ = lean_obj_once(&l_Lean_Parser_Term_structInstField___closed__2, &l_Lean_Parser_Term_structInstField___closed__2_once, _init_l_Lean_Parser_Term_structInstField___closed__2);
v___x_3563_ = l_Lean_Parser_andthen(v___x_3562_, v___x_3561_);
return v___x_3563_;
}
}
static lean_object* _init_l_Lean_Parser_Term_structInstField___closed__5(void){
_start:
{
lean_object* v___x_3564_; lean_object* v___x_3565_; 
v___x_3564_ = lean_obj_once(&l_Lean_Parser_Term_structInstField___closed__4, &l_Lean_Parser_Term_structInstField___closed__4_once, _init_l_Lean_Parser_Term_structInstField___closed__4);
v___x_3565_ = l_Lean_Parser_many(v___x_3564_);
return v___x_3565_;
}
}
static lean_object* _init_l_Lean_Parser_Term_structInstField___closed__6(void){
_start:
{
lean_object* v___x_3566_; lean_object* v___x_3567_; lean_object* v___x_3568_; 
v___x_3566_ = lean_unsigned_to_nat(0u);
v___x_3567_ = ((lean_object*)(l_Lean_Parser_Term_structInstFieldDeclParser___closed__0));
v___x_3568_ = l_Lean_Parser_categoryParser(v___x_3567_, v___x_3566_);
return v___x_3568_;
}
}
static lean_object* _init_l_Lean_Parser_Term_structInstField___closed__7(void){
_start:
{
lean_object* v___x_3569_; lean_object* v___x_3570_; lean_object* v___x_3571_; 
v___x_3569_ = lean_obj_once(&l_Lean_Parser_Term_structInstField___closed__6, &l_Lean_Parser_Term_structInstField___closed__6_once, _init_l_Lean_Parser_Term_structInstField___closed__6);
v___x_3570_ = l_Lean_Parser_Term_optTypeForStructInst;
v___x_3571_ = l_Lean_Parser_andthen(v___x_3570_, v___x_3569_);
return v___x_3571_;
}
}
static lean_object* _init_l_Lean_Parser_Term_structInstField___closed__8(void){
_start:
{
lean_object* v___x_3572_; lean_object* v___x_3573_; lean_object* v___x_3574_; 
v___x_3572_ = lean_obj_once(&l_Lean_Parser_Term_structInstField___closed__7, &l_Lean_Parser_Term_structInstField___closed__7_once, _init_l_Lean_Parser_Term_structInstField___closed__7);
v___x_3573_ = lean_obj_once(&l_Lean_Parser_Term_structInstField___closed__5, &l_Lean_Parser_Term_structInstField___closed__5_once, _init_l_Lean_Parser_Term_structInstField___closed__5);
v___x_3574_ = l_Lean_Parser_andthen(v___x_3573_, v___x_3572_);
return v___x_3574_;
}
}
static lean_object* _init_l_Lean_Parser_Term_structInstField___closed__9(void){
_start:
{
lean_object* v___x_3575_; lean_object* v___x_3576_; 
v___x_3575_ = lean_obj_once(&l_Lean_Parser_Term_structInstField___closed__8, &l_Lean_Parser_Term_structInstField___closed__8_once, _init_l_Lean_Parser_Term_structInstField___closed__8);
v___x_3576_ = l_Lean_Parser_optional(v___x_3575_);
return v___x_3576_;
}
}
static lean_object* _init_l_Lean_Parser_Term_structInstField___closed__10(void){
_start:
{
lean_object* v___x_3577_; lean_object* v___x_3578_; lean_object* v___x_3579_; 
v___x_3577_ = lean_obj_once(&l_Lean_Parser_Term_structInstField___closed__9, &l_Lean_Parser_Term_structInstField___closed__9_once, _init_l_Lean_Parser_Term_structInstField___closed__9);
v___x_3578_ = l_Lean_Parser_Term_structInstLVal;
v___x_3579_ = l_Lean_Parser_andthen(v___x_3578_, v___x_3577_);
return v___x_3579_;
}
}
static lean_object* _init_l_Lean_Parser_Term_structInstField___closed__11(void){
_start:
{
lean_object* v___x_3580_; lean_object* v___x_3581_; lean_object* v___x_3582_; lean_object* v___x_3583_; 
v___x_3580_ = lean_obj_once(&l_Lean_Parser_Term_structInstField___closed__10, &l_Lean_Parser_Term_structInstField___closed__10_once, _init_l_Lean_Parser_Term_structInstField___closed__10);
v___x_3581_ = lean_unsigned_to_nat(1024u);
v___x_3582_ = ((lean_object*)(l_Lean_Parser_Term_structInstField_formatter___closed__2));
v___x_3583_ = l_Lean_Parser_leadingNode(v___x_3582_, v___x_3581_, v___x_3580_);
return v___x_3583_;
}
}
static lean_object* _init_l_Lean_Parser_Term_structInstField___closed__12(void){
_start:
{
lean_object* v___x_3584_; lean_object* v___x_3585_; lean_object* v___x_3586_; 
v___x_3584_ = lean_obj_once(&l_Lean_Parser_Term_structInstField___closed__11, &l_Lean_Parser_Term_structInstField___closed__11_once, _init_l_Lean_Parser_Term_structInstField___closed__11);
v___x_3585_ = lean_obj_once(&l_Lean_Parser_Term_structInstField___closed__0, &l_Lean_Parser_Term_structInstField___closed__0_once, _init_l_Lean_Parser_Term_structInstField___closed__0);
v___x_3586_ = l_Lean_Parser_withAntiquot(v___x_3585_, v___x_3584_);
return v___x_3586_;
}
}
static lean_object* _init_l_Lean_Parser_Term_structInstField___closed__13(void){
_start:
{
lean_object* v___x_3587_; lean_object* v___x_3588_; lean_object* v___x_3589_; 
v___x_3587_ = lean_obj_once(&l_Lean_Parser_Term_structInstField___closed__12, &l_Lean_Parser_Term_structInstField___closed__12_once, _init_l_Lean_Parser_Term_structInstField___closed__12);
v___x_3588_ = ((lean_object*)(l_Lean_Parser_Term_structInstField_formatter___closed__2));
v___x_3589_ = l_Lean_Parser_withCache(v___x_3588_, v___x_3587_);
return v___x_3589_;
}
}
static lean_object* _init_l_Lean_Parser_Term_structInstField(void){
_start:
{
lean_object* v___x_3590_; 
v___x_3590_ = lean_obj_once(&l_Lean_Parser_Term_structInstField___closed__13, &l_Lean_Parser_Term_structInstField___closed__13_once, _init_l_Lean_Parser_Term_structInstField___closed__13);
return v___x_3590_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Term_structInstFields_formatter(lean_object* v_p_3597_, lean_object* v_a_3598_, lean_object* v_a_3599_, lean_object* v_a_3600_, lean_object* v_a_3601_){
_start:
{
lean_object* v___x_3603_; lean_object* v___x_3604_; 
v___x_3603_ = ((lean_object*)(l_Lean_Parser_Term_structInstFields_formatter___closed__1));
v___x_3604_ = l_Lean_PrettyPrinter_Formatter_node_formatter(v___x_3603_, v_p_3597_, v_a_3598_, v_a_3599_, v_a_3600_, v_a_3601_);
return v___x_3604_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Term_structInstFields_formatter___boxed(lean_object* v_p_3605_, lean_object* v_a_3606_, lean_object* v_a_3607_, lean_object* v_a_3608_, lean_object* v_a_3609_, lean_object* v_a_3610_){
_start:
{
lean_object* v_res_3611_; 
v_res_3611_ = l_Lean_Parser_Term_structInstFields_formatter(v_p_3605_, v_a_3606_, v_a_3607_, v_a_3608_, v_a_3609_);
lean_dec(v_a_3609_);
lean_dec_ref(v_a_3608_);
lean_dec(v_a_3607_);
lean_dec_ref(v_a_3606_);
return v_res_3611_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Term_structInstFields_parenthesizer(lean_object* v_p_3612_, lean_object* v_a_3613_, lean_object* v_a_3614_, lean_object* v_a_3615_, lean_object* v_a_3616_){
_start:
{
lean_object* v___x_3618_; lean_object* v___x_3619_; 
v___x_3618_ = ((lean_object*)(l_Lean_Parser_Term_structInstFields_formatter___closed__1));
v___x_3619_ = l_Lean_PrettyPrinter_Parenthesizer_node_parenthesizer(v___x_3618_, v_p_3612_, v_a_3613_, v_a_3614_, v_a_3615_, v_a_3616_);
return v___x_3619_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Term_structInstFields_parenthesizer___boxed(lean_object* v_p_3620_, lean_object* v_a_3621_, lean_object* v_a_3622_, lean_object* v_a_3623_, lean_object* v_a_3624_, lean_object* v_a_3625_){
_start:
{
lean_object* v_res_3626_; 
v_res_3626_ = l_Lean_Parser_Term_structInstFields_parenthesizer(v_p_3620_, v_a_3621_, v_a_3622_, v_a_3623_, v_a_3624_);
lean_dec(v_a_3624_);
lean_dec_ref(v_a_3623_);
lean_dec(v_a_3622_);
lean_dec_ref(v_a_3621_);
return v_res_3626_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Term_structInstFields(lean_object* v_p_3627_){
_start:
{
lean_object* v___x_3628_; lean_object* v___x_3629_; 
v___x_3628_ = ((lean_object*)(l_Lean_Parser_Term_structInstFields_formatter___closed__1));
v___x_3629_ = l_Lean_Parser_node(v___x_3628_, v_p_3627_);
return v___x_3629_;
}
}
lean_object* runtime_initialize_Lean_Parser_Attr(uint8_t builtin);
lean_object* runtime_initialize_Lean_Parser_Level(uint8_t builtin);
lean_object* runtime_initialize_Lean_Parser_Term_Doc(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Parser_Term_Basic(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Parser_Attr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Parser_Level(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Parser_Term_Doc(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Term_Basic_0__Lean_Parser_initFn_00___x40_Lean_Parser_Term_Basic_1563126128____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_sepByIndentSemicolon___regBuiltin_Lean_Parser_Tactic_sepByIndentSemicolon_docString__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_sepBy1IndentSemicolon___regBuiltin_Lean_Parser_Tactic_sepBy1IndentSemicolon_docString__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_initFn_00___x40_Lean_Parser_Term_Basic_1911936479____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Parser_Tactic_tacticSeq1Indented = _init_l_Lean_Parser_Tactic_tacticSeq1Indented();
lean_mark_persistent(l_Lean_Parser_Tactic_tacticSeq1Indented);
l_Lean_Parser_Tactic_tacticSeqBracketed = _init_l_Lean_Parser_Tactic_tacticSeqBracketed();
lean_mark_persistent(l_Lean_Parser_Tactic_tacticSeqBracketed);
res = l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeqBracketed___regBuiltin_Lean_Parser_Tactic_tacticSeqBracketed_docString__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeq___regBuiltin_Lean_Parser_Tactic_tacticSeqBracketed_formatter__5();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeq___regBuiltin_Lean_Parser_Tactic_tacticSeq1Indented_formatter__9();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeq___regBuiltin_Lean_Parser_Tactic_tacticSeq_formatter__13();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeq___regBuiltin_Lean_Parser_Tactic_tacticSeqBracketed_parenthesizer__19();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeq___regBuiltin_Lean_Parser_Tactic_tacticSeq1Indented_parenthesizer__23();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeq___regBuiltin_Lean_Parser_Tactic_tacticSeq_parenthesizer__27();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Parser_Tactic_tacticSeq = _init_l_Lean_Parser_Tactic_tacticSeq();
lean_mark_persistent(l_Lean_Parser_Tactic_tacticSeq);
res = l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeq___regBuiltin_Lean_Parser_Tactic_tacticSeq_docString__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeqIndentGt___regBuiltin_Lean_Parser_Tactic_tacticSeqIndentGt_formatter__3();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeqIndentGt___regBuiltin_Lean_Parser_Tactic_tacticSeqIndentGt_parenthesizer__7();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Parser_Tactic_tacticSeqIndentGt = _init_l_Lean_Parser_Tactic_tacticSeqIndentGt();
lean_mark_persistent(l_Lean_Parser_Tactic_tacticSeqIndentGt);
res = l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_tacticSeqIndentGt___regBuiltin_Lean_Parser_Tactic_tacticSeqIndentGt_docString__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_seq1___regBuiltin_Lean_Parser_Tactic_seq1_formatter__3();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Tactic_seq1___regBuiltin_Lean_Parser_Tactic_seq1_parenthesizer__7();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Parser_Tactic_seq1 = _init_l_Lean_Parser_Tactic_seq1();
lean_mark_persistent(l_Lean_Parser_Tactic_seq1);
l_Lean_Parser_Term_hole = _init_l_Lean_Parser_Term_hole();
lean_mark_persistent(l_Lean_Parser_Term_hole);
res = l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_hole___regBuiltin_Lean_Parser_Term_hole__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_hole___regBuiltin_Lean_Parser_Term_hole_docString__3();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_hole___regBuiltin_Lean_Parser_Term_hole_declRange__5();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_hole___regBuiltin_Lean_Parser_Term_hole_formatter__9();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_hole___regBuiltin_Lean_Parser_Term_hole_parenthesizer__13();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Parser_Term_syntheticHole = _init_l_Lean_Parser_Term_syntheticHole();
lean_mark_persistent(l_Lean_Parser_Term_syntheticHole);
res = l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_syntheticHole___regBuiltin_Lean_Parser_Term_syntheticHole__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_syntheticHole___regBuiltin_Lean_Parser_Term_syntheticHole_docString__3();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_syntheticHole___regBuiltin_Lean_Parser_Term_syntheticHole_declRange__5();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_syntheticHole___regBuiltin_Lean_Parser_Term_syntheticHole_formatter__9();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_syntheticHole___regBuiltin_Lean_Parser_Term_syntheticHole_parenthesizer__13();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Parser_Term_omission = _init_l_Lean_Parser_Term_omission();
lean_mark_persistent(l_Lean_Parser_Term_omission);
res = l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_omission___regBuiltin_Lean_Parser_Term_omission__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_omission___regBuiltin_Lean_Parser_Term_omission_docString__3();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_omission___regBuiltin_Lean_Parser_Term_omission_declRange__5();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_omission___regBuiltin_Lean_Parser_Term_omission_formatter__9();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_omission___regBuiltin_Lean_Parser_Term_omission_parenthesizer__13();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Parser_Term_binderIdent = _init_l_Lean_Parser_Term_binderIdent();
lean_mark_persistent(l_Lean_Parser_Term_binderIdent);
res = l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_binderTactic___regBuiltin_Lean_Parser_Term_binderTactic_formatter__3();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_binderTactic___regBuiltin_Lean_Parser_Term_binderTactic_parenthesizer__7();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Parser_Term_binderTactic = _init_l_Lean_Parser_Term_binderTactic();
lean_mark_persistent(l_Lean_Parser_Term_binderTactic);
l_Lean_Parser_Term_binderDefault = _init_l_Lean_Parser_Term_binderDefault();
lean_mark_persistent(l_Lean_Parser_Term_binderDefault);
res = l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_explicitBinder___regBuiltin_Lean_Parser_Term_explicitBinder_docString__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_implicitBinder___regBuiltin_Lean_Parser_Term_implicitBinder_docString__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Parser_Term_strictImplicitLeftBracket = _init_l_Lean_Parser_Term_strictImplicitLeftBracket();
lean_mark_persistent(l_Lean_Parser_Term_strictImplicitLeftBracket);
l_Lean_Parser_Term_strictImplicitRightBracket = _init_l_Lean_Parser_Term_strictImplicitRightBracket();
lean_mark_persistent(l_Lean_Parser_Term_strictImplicitRightBracket);
res = l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_strictImplicitBinder___regBuiltin_Lean_Parser_Term_strictImplicitBinder_docString__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Parser_Term_optIdent = _init_l_Lean_Parser_Term_optIdent();
lean_mark_persistent(l_Lean_Parser_Term_optIdent);
l_Lean_Parser_Term_instBinder = _init_l_Lean_Parser_Term_instBinder();
lean_mark_persistent(l_Lean_Parser_Term_instBinder);
res = l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_instBinder___regBuiltin_Lean_Parser_Term_instBinder_docString__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_bracketedBinder___regBuiltin_Lean_Parser_Term_binderDefault_formatter__3();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_bracketedBinder___regBuiltin_Lean_Parser_Term_instBinder_formatter__19();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_bracketedBinder___regBuiltin_Lean_Parser_Term_instBinder_parenthesizer__37();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_bracketedBinder___regBuiltin_Lean_Parser_Term_bracketedBinder_docString__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_typeSpec___regBuiltin_Lean_Parser_Term_typeSpec_formatter__3();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_typeSpec___regBuiltin_Lean_Parser_Term_typeSpec_parenthesizer__7();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Parser_Term_typeSpec = _init_l_Lean_Parser_Term_typeSpec();
lean_mark_persistent(l_Lean_Parser_Term_typeSpec);
l_Lean_Parser_Term_optType = _init_l_Lean_Parser_Term_optType();
lean_mark_persistent(l_Lean_Parser_Term_optType);
res = l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_initFn_00___x40_Lean_Parser_Term_Basic_2382944618____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_optEllipsis___regBuiltin_Lean_Parser_Term_optEllipsis_formatter__3();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_optEllipsis___regBuiltin_Lean_Parser_Term_optEllipsis_parenthesizer__7();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Parser_Term_optEllipsis = _init_l_Lean_Parser_Term_optEllipsis();
lean_mark_persistent(l_Lean_Parser_Term_optEllipsis);
res = l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_structInstArrayRef___regBuiltin_Lean_Parser_Term_structInstArrayRef_formatter__3();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_structInstArrayRef___regBuiltin_Lean_Parser_Term_structInstArrayRef_parenthesizer__7();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Parser_Term_structInstArrayRef = _init_l_Lean_Parser_Term_structInstArrayRef();
lean_mark_persistent(l_Lean_Parser_Term_structInstArrayRef);
res = l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_structInstLVal___regBuiltin_Lean_Parser_Term_structInstLVal_formatter__3();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_structInstLVal___regBuiltin_Lean_Parser_Term_structInstLVal_parenthesizer__7();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Parser_Term_structInstLVal = _init_l_Lean_Parser_Term_structInstLVal();
lean_mark_persistent(l_Lean_Parser_Term_structInstLVal);
l_Lean_Parser_Term_structInstFieldBinder = _init_l_Lean_Parser_Term_structInstFieldBinder();
lean_mark_persistent(l_Lean_Parser_Term_structInstFieldBinder);
l_Lean_Parser_Term_optTypeForStructInst = _init_l_Lean_Parser_Term_optTypeForStructInst();
lean_mark_persistent(l_Lean_Parser_Term_optTypeForStructInst);
res = l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_structInstField___regBuiltin_Lean_Parser_Term_structInstField_formatter__5();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_structInstField___regBuiltin_Lean_Parser_Term_structInstField_parenthesizer__11();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Parser_Term_structInstField = _init_l_Lean_Parser_Term_structInstField();
lean_mark_persistent(l_Lean_Parser_Term_structInstField);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* runtime_initialize_Lean_Parser_Basic(uint8_t builtin);
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Parser_Term_Basic(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
res = runtime_initialize_Lean_Parser_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_binderDefaultM = _init_l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_binderDefaultM();
lean_mark_persistent(l___private_Lean_Parser_Term_Basic_0__Lean_Parser_Term_binderDefaultM);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Parser_Attr(uint8_t builtin);
lean_object* initialize_Lean_Parser_Level(uint8_t builtin);
lean_object* initialize_Lean_Parser_Term_Doc(uint8_t builtin);
lean_object* initialize_Lean_Parser_Basic(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Parser_Term_Basic(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Parser_Attr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Parser_Level(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Parser_Term_Doc(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Parser_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Parser_Term_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Parser_Term_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Parser_Term_Basic(builtin);
}
#ifdef __cplusplus
}
#endif

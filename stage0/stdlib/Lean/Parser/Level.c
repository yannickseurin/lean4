// Lean compiler output
// Module: Lean.Parser.Level
// Imports: public import Lean.Parser.Extra
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
lean_object* l_Lean_Parser_symbol_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_categoryParser_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_withoutPosition_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_leadingNode_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_orelse_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Parser_maxPrec;
lean_object* l_Lean_PrettyPrinter_Parenthesizer_addPrecCheck___redArg(lean_object*, lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
extern lean_object* l_Lean_Parser_numLit;
lean_object* l_Lean_Parser_symbol(lean_object*);
lean_object* l_Lean_Parser_andthen(lean_object*, lean_object*);
lean_object* l_Lean_Parser_trailingNode(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_addBuiltinTrailingParser(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_categoryParser_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_categoryParser(lean_object*, lean_object*);
extern lean_object* l_Lean_Parser_skip;
lean_object* l_Lean_Parser_many1(lean_object*);
lean_object* l_Lean_Parser_nonReservedSymbol(lean_object*, uint8_t);
extern lean_object* l_Lean_PrettyPrinter_parenthesizerAttribute;
lean_object* l_Lean_Parser_mkAntiquot_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_symbol_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_leadingNode_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_withAntiquot_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_numLit_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_withoutPosition(lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_pushLine___redArg(lean_object*);
lean_object* l_Lean_Parser_many1_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_ppSpace_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_many1_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_nonReservedSymbol_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_leadingNode(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_mkAntiquot(lean_object*, lean_object*, uint8_t, uint8_t);
lean_object* l_Lean_Parser_withAntiquot(lean_object*, lean_object*);
lean_object* l_Lean_Parser_withCache(lean_object*, lean_object*);
lean_object* l_Lean_Parser_addBuiltinLeadingParser(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Parser_ident;
lean_object* l_Lean_Parser_checkPrec(lean_object*);
lean_object* l_Lean_Parser_withoutPosition_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_trailingNode_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_nonReservedSymbol_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addBuiltinDeclarationRanges(lean_object*, lean_object*);
lean_object* l_Lean_Parser_numLit_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_checkPrec_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_andthen_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_registerBuiltinParserAttribute(lean_object*, lean_object*, uint8_t, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_trailingNode_formatter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_ident_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_ident_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__0_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "builtin_level_parser"};
static const lean_object* l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__0_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__0_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__1_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__0_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(93, 234, 74, 98, 36, 143, 62, 135)}};
static const lean_object* l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__1_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__1_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__4_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Category"};
static const lean_object* l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__4_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__4_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__5_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "level"};
static const lean_object* l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__5_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__5_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__6_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__6_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__6_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__6_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__6_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2__value_aux_1),((lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__4_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(36, 45, 52, 71, 90, 26, 52, 161)}};
static const lean_ctor_object l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__6_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__6_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2__value_aux_2),((lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__5_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(147, 194, 17, 31, 235, 221, 150, 77)}};
static const lean_object* l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__6_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__6_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__7_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__7_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__8_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__8_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__8_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__9_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__9_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__10_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__10_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__11_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__11_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__12_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Level"};
static const lean_object* l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__12_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__12_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__13_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__13_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__14_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__14_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__15_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__15_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__16_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__16_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__17_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "initFn"};
static const lean_object* l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__17_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__17_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__18_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__18_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__19_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_@"};
static const lean_object* l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__19_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__19_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__20_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__20_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__21_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__21_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__22_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__22_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__23_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__23_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__24_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__24_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__25_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "_hygCtx"};
static const lean_object* l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__25_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__25_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__26_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__26_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__27_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "_hyg"};
static const lean_object* l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__27_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__27_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__28_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__28_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__29_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__29_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Level_0__Lean_Parser_initFn_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Level_0__Lean_Parser_initFn_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2____boxed(lean_object*);
static const lean_ctor_object l_Lean_Parser_levelParser___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__5_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(248, 87, 114, 95, 43, 103, 70, 253)}};
static const lean_object* l_Lean_Parser_levelParser___closed__0 = (const lean_object*)&l_Lean_Parser_levelParser___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Parser_levelParser(lean_object*);
static const lean_string_object l_Lean_Parser_Level_paren___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "paren"};
static const lean_object* l_Lean_Parser_Level_paren___closed__0 = (const lean_object*)&l_Lean_Parser_Level_paren___closed__0_value;
static const lean_ctor_object l_Lean_Parser_Level_paren___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_Level_paren___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Level_paren___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_Level_paren___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Level_paren___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__12_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(176, 210, 143, 23, 235, 250, 136, 158)}};
static const lean_ctor_object l_Lean_Parser_Level_paren___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Level_paren___closed__1_value_aux_2),((lean_object*)&l_Lean_Parser_Level_paren___closed__0_value),LEAN_SCALAR_PTR_LITERAL(67, 200, 57, 231, 14, 244, 115, 229)}};
static const lean_object* l_Lean_Parser_Level_paren___closed__1 = (const lean_object*)&l_Lean_Parser_Level_paren___closed__1_value;
static lean_once_cell_t l_Lean_Parser_Level_paren___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Level_paren___closed__2;
static const lean_string_object l_Lean_Parser_Level_paren___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "("};
static const lean_object* l_Lean_Parser_Level_paren___closed__3 = (const lean_object*)&l_Lean_Parser_Level_paren___closed__3_value;
static lean_once_cell_t l_Lean_Parser_Level_paren___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Level_paren___closed__4;
static lean_once_cell_t l_Lean_Parser_Level_paren___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Level_paren___closed__5;
static lean_once_cell_t l_Lean_Parser_Level_paren___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Level_paren___closed__6;
static const lean_string_object l_Lean_Parser_Level_paren___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l_Lean_Parser_Level_paren___closed__7 = (const lean_object*)&l_Lean_Parser_Level_paren___closed__7_value;
static lean_once_cell_t l_Lean_Parser_Level_paren___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Level_paren___closed__8;
static lean_once_cell_t l_Lean_Parser_Level_paren___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Level_paren___closed__9;
static lean_once_cell_t l_Lean_Parser_Level_paren___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Level_paren___closed__10;
static lean_once_cell_t l_Lean_Parser_Level_paren___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Level_paren___closed__11;
static lean_once_cell_t l_Lean_Parser_Level_paren___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Level_paren___closed__12;
static lean_once_cell_t l_Lean_Parser_Level_paren___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Level_paren___closed__13;
LEAN_EXPORT lean_object* l_Lean_Parser_Level_paren;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Level_0__Lean_Parser_Level_paren___regBuiltin_Lean_Parser_Level_paren__1();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Level_0__Lean_Parser_Level_paren___regBuiltin_Lean_Parser_Level_paren__1___boxed(lean_object*);
static const lean_ctor_object l___private_Lean_Parser_Level_0__Lean_Parser_Level_paren___regBuiltin_Lean_Parser_Level_paren_declRange__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(20) << 1) | 1)),((lean_object*)(((size_t)(24) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Level_0__Lean_Parser_Level_paren___regBuiltin_Lean_Parser_Level_paren_declRange__3___closed__0 = (const lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_Level_paren___regBuiltin_Lean_Parser_Level_paren_declRange__3___closed__0_value;
static const lean_ctor_object l___private_Lean_Parser_Level_0__Lean_Parser_Level_paren___regBuiltin_Lean_Parser_Level_paren_declRange__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(21) << 1) | 1)),((lean_object*)(((size_t)(43) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Level_0__Lean_Parser_Level_paren___regBuiltin_Lean_Parser_Level_paren_declRange__3___closed__1 = (const lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_Level_paren___regBuiltin_Lean_Parser_Level_paren_declRange__3___closed__1_value;
static const lean_ctor_object l___private_Lean_Parser_Level_0__Lean_Parser_Level_paren___regBuiltin_Lean_Parser_Level_paren_declRange__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_Level_paren___regBuiltin_Lean_Parser_Level_paren_declRange__3___closed__0_value),((lean_object*)(((size_t)(24) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_Level_paren___regBuiltin_Lean_Parser_Level_paren_declRange__3___closed__1_value),((lean_object*)(((size_t)(43) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Level_0__Lean_Parser_Level_paren___regBuiltin_Lean_Parser_Level_paren_declRange__3___closed__2 = (const lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_Level_paren___regBuiltin_Lean_Parser_Level_paren_declRange__3___closed__2_value;
static const lean_ctor_object l___private_Lean_Parser_Level_0__Lean_Parser_Level_paren___regBuiltin_Lean_Parser_Level_paren_declRange__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(20) << 1) | 1)),((lean_object*)(((size_t)(28) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Level_0__Lean_Parser_Level_paren___regBuiltin_Lean_Parser_Level_paren_declRange__3___closed__3 = (const lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_Level_paren___regBuiltin_Lean_Parser_Level_paren_declRange__3___closed__3_value;
static const lean_ctor_object l___private_Lean_Parser_Level_0__Lean_Parser_Level_paren___regBuiltin_Lean_Parser_Level_paren_declRange__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(20) << 1) | 1)),((lean_object*)(((size_t)(33) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Level_0__Lean_Parser_Level_paren___regBuiltin_Lean_Parser_Level_paren_declRange__3___closed__4 = (const lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_Level_paren___regBuiltin_Lean_Parser_Level_paren_declRange__3___closed__4_value;
static const lean_ctor_object l___private_Lean_Parser_Level_0__Lean_Parser_Level_paren___regBuiltin_Lean_Parser_Level_paren_declRange__3___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_Level_paren___regBuiltin_Lean_Parser_Level_paren_declRange__3___closed__3_value),((lean_object*)(((size_t)(28) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_Level_paren___regBuiltin_Lean_Parser_Level_paren_declRange__3___closed__4_value),((lean_object*)(((size_t)(33) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Level_0__Lean_Parser_Level_paren___regBuiltin_Lean_Parser_Level_paren_declRange__3___closed__5 = (const lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_Level_paren___regBuiltin_Lean_Parser_Level_paren_declRange__3___closed__5_value;
static const lean_ctor_object l___private_Lean_Parser_Level_0__Lean_Parser_Level_paren___regBuiltin_Lean_Parser_Level_paren_declRange__3___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_Level_paren___regBuiltin_Lean_Parser_Level_paren_declRange__3___closed__2_value),((lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_Level_paren___regBuiltin_Lean_Parser_Level_paren_declRange__3___closed__5_value)}};
static const lean_object* l___private_Lean_Parser_Level_0__Lean_Parser_Level_paren___regBuiltin_Lean_Parser_Level_paren_declRange__3___closed__6 = (const lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_Level_paren___regBuiltin_Lean_Parser_Level_paren_declRange__3___closed__6_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Level_0__Lean_Parser_Level_paren___regBuiltin_Lean_Parser_Level_paren_declRange__3();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Level_0__Lean_Parser_Level_paren___regBuiltin_Lean_Parser_Level_paren_declRange__3___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_levelParser_formatter___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_levelParser_formatter___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_levelParser_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_levelParser_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Parser_Level_paren_formatter___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_mkAntiquot_formatter___boxed, .m_arity = 9, .m_num_fixed = 4, .m_objs = {((lean_object*)&l_Lean_Parser_Level_paren___closed__0_value),((lean_object*)&l_Lean_Parser_Level_paren___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Parser_Level_paren_formatter___closed__0 = (const lean_object*)&l_Lean_Parser_Level_paren_formatter___closed__0_value;
static const lean_closure_object l_Lean_Parser_Level_paren_formatter___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_symbol_formatter___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Parser_Level_paren___closed__3_value)} };
static const lean_object* l_Lean_Parser_Level_paren_formatter___closed__1 = (const lean_object*)&l_Lean_Parser_Level_paren_formatter___closed__1_value;
static const lean_closure_object l_Lean_Parser_Level_paren_formatter___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_levelParser_formatter___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Parser_Level_paren_formatter___closed__2 = (const lean_object*)&l_Lean_Parser_Level_paren_formatter___closed__2_value;
static const lean_closure_object l_Lean_Parser_Level_paren_formatter___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_withoutPosition_formatter___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Parser_Level_paren_formatter___closed__2_value)} };
static const lean_object* l_Lean_Parser_Level_paren_formatter___closed__3 = (const lean_object*)&l_Lean_Parser_Level_paren_formatter___closed__3_value;
static const lean_closure_object l_Lean_Parser_Level_paren_formatter___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_symbol_formatter___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Parser_Level_paren___closed__7_value)} };
static const lean_object* l_Lean_Parser_Level_paren_formatter___closed__4 = (const lean_object*)&l_Lean_Parser_Level_paren_formatter___closed__4_value;
static const lean_closure_object l_Lean_Parser_Level_paren_formatter___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Parser_Level_paren_formatter___closed__3_value),((lean_object*)&l_Lean_Parser_Level_paren_formatter___closed__4_value)} };
static const lean_object* l_Lean_Parser_Level_paren_formatter___closed__5 = (const lean_object*)&l_Lean_Parser_Level_paren_formatter___closed__5_value;
static const lean_closure_object l_Lean_Parser_Level_paren_formatter___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Parser_Level_paren_formatter___closed__1_value),((lean_object*)&l_Lean_Parser_Level_paren_formatter___closed__5_value)} };
static const lean_object* l_Lean_Parser_Level_paren_formatter___closed__6 = (const lean_object*)&l_Lean_Parser_Level_paren_formatter___closed__6_value;
static const lean_closure_object l_Lean_Parser_Level_paren_formatter___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_leadingNode_formatter___boxed, .m_arity = 8, .m_num_fixed = 3, .m_objs = {((lean_object*)&l_Lean_Parser_Level_paren___closed__1_value),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)&l_Lean_Parser_Level_paren_formatter___closed__6_value)} };
static const lean_object* l_Lean_Parser_Level_paren_formatter___closed__7 = (const lean_object*)&l_Lean_Parser_Level_paren_formatter___closed__7_value;
LEAN_EXPORT lean_object* l_Lean_Parser_Level_paren_formatter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Level_paren_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Parser_Level_0__Lean_Parser_Level_paren___regBuiltin_Lean_Parser_Level_paren_formatter__9___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "formatter"};
static const lean_object* l___private_Lean_Parser_Level_0__Lean_Parser_Level_paren___regBuiltin_Lean_Parser_Level_paren_formatter__9___closed__0 = (const lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_Level_paren___regBuiltin_Lean_Parser_Level_paren_formatter__9___closed__0_value;
static const lean_ctor_object l___private_Lean_Parser_Level_0__Lean_Parser_Level_paren___regBuiltin_Lean_Parser_Level_paren_formatter__9___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Level_0__Lean_Parser_Level_paren___regBuiltin_Lean_Parser_Level_paren_formatter__9___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_Level_paren___regBuiltin_Lean_Parser_Level_paren_formatter__9___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Level_0__Lean_Parser_Level_paren___regBuiltin_Lean_Parser_Level_paren_formatter__9___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_Level_paren___regBuiltin_Lean_Parser_Level_paren_formatter__9___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__12_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(176, 210, 143, 23, 235, 250, 136, 158)}};
static const lean_ctor_object l___private_Lean_Parser_Level_0__Lean_Parser_Level_paren___regBuiltin_Lean_Parser_Level_paren_formatter__9___closed__1_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_Level_paren___regBuiltin_Lean_Parser_Level_paren_formatter__9___closed__1_value_aux_2),((lean_object*)&l_Lean_Parser_Level_paren___closed__0_value),LEAN_SCALAR_PTR_LITERAL(67, 200, 57, 231, 14, 244, 115, 229)}};
static const lean_ctor_object l___private_Lean_Parser_Level_0__Lean_Parser_Level_paren___regBuiltin_Lean_Parser_Level_paren_formatter__9___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_Level_paren___regBuiltin_Lean_Parser_Level_paren_formatter__9___closed__1_value_aux_3),((lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_Level_paren___regBuiltin_Lean_Parser_Level_paren_formatter__9___closed__0_value),LEAN_SCALAR_PTR_LITERAL(214, 205, 143, 182, 150, 105, 121, 3)}};
static const lean_object* l___private_Lean_Parser_Level_0__Lean_Parser_Level_paren___regBuiltin_Lean_Parser_Level_paren_formatter__9___closed__1 = (const lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_Level_paren___regBuiltin_Lean_Parser_Level_paren_formatter__9___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Level_0__Lean_Parser_Level_paren___regBuiltin_Lean_Parser_Level_paren_formatter__9();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Level_0__Lean_Parser_Level_paren___regBuiltin_Lean_Parser_Level_paren_formatter__9___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_levelParser_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_levelParser_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Parser_Level_paren_parenthesizer___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_mkAntiquot_parenthesizer___boxed, .m_arity = 9, .m_num_fixed = 4, .m_objs = {((lean_object*)&l_Lean_Parser_Level_paren___closed__0_value),((lean_object*)&l_Lean_Parser_Level_paren___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Parser_Level_paren_parenthesizer___closed__0 = (const lean_object*)&l_Lean_Parser_Level_paren_parenthesizer___closed__0_value;
static const lean_closure_object l_Lean_Parser_Level_paren_parenthesizer___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_symbol_parenthesizer___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Parser_Level_paren___closed__3_value)} };
static const lean_object* l_Lean_Parser_Level_paren_parenthesizer___closed__1 = (const lean_object*)&l_Lean_Parser_Level_paren_parenthesizer___closed__1_value;
static const lean_closure_object l_Lean_Parser_Level_paren_parenthesizer___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_levelParser_parenthesizer___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Parser_Level_paren_parenthesizer___closed__2 = (const lean_object*)&l_Lean_Parser_Level_paren_parenthesizer___closed__2_value;
static const lean_closure_object l_Lean_Parser_Level_paren_parenthesizer___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_withoutPosition_parenthesizer___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Parser_Level_paren_parenthesizer___closed__2_value)} };
static const lean_object* l_Lean_Parser_Level_paren_parenthesizer___closed__3 = (const lean_object*)&l_Lean_Parser_Level_paren_parenthesizer___closed__3_value;
static const lean_closure_object l_Lean_Parser_Level_paren_parenthesizer___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_symbol_parenthesizer___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Parser_Level_paren___closed__7_value)} };
static const lean_object* l_Lean_Parser_Level_paren_parenthesizer___closed__4 = (const lean_object*)&l_Lean_Parser_Level_paren_parenthesizer___closed__4_value;
static const lean_closure_object l_Lean_Parser_Level_paren_parenthesizer___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Parser_Level_paren_parenthesizer___closed__3_value),((lean_object*)&l_Lean_Parser_Level_paren_parenthesizer___closed__4_value)} };
static const lean_object* l_Lean_Parser_Level_paren_parenthesizer___closed__5 = (const lean_object*)&l_Lean_Parser_Level_paren_parenthesizer___closed__5_value;
static const lean_closure_object l_Lean_Parser_Level_paren_parenthesizer___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Parser_Level_paren_parenthesizer___closed__1_value),((lean_object*)&l_Lean_Parser_Level_paren_parenthesizer___closed__5_value)} };
static const lean_object* l_Lean_Parser_Level_paren_parenthesizer___closed__6 = (const lean_object*)&l_Lean_Parser_Level_paren_parenthesizer___closed__6_value;
static const lean_closure_object l_Lean_Parser_Level_paren_parenthesizer___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Parenthesizer_leadingNode_parenthesizer___boxed, .m_arity = 8, .m_num_fixed = 3, .m_objs = {((lean_object*)&l_Lean_Parser_Level_paren___closed__1_value),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)&l_Lean_Parser_Level_paren_parenthesizer___closed__6_value)} };
static const lean_object* l_Lean_Parser_Level_paren_parenthesizer___closed__7 = (const lean_object*)&l_Lean_Parser_Level_paren_parenthesizer___closed__7_value;
LEAN_EXPORT lean_object* l_Lean_Parser_Level_paren_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Level_paren_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Parser_Level_0__Lean_Parser_Level_paren___regBuiltin_Lean_Parser_Level_paren_parenthesizer__15___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "parenthesizer"};
static const lean_object* l___private_Lean_Parser_Level_0__Lean_Parser_Level_paren___regBuiltin_Lean_Parser_Level_paren_parenthesizer__15___closed__0 = (const lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_Level_paren___regBuiltin_Lean_Parser_Level_paren_parenthesizer__15___closed__0_value;
static const lean_ctor_object l___private_Lean_Parser_Level_0__Lean_Parser_Level_paren___regBuiltin_Lean_Parser_Level_paren_parenthesizer__15___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Level_0__Lean_Parser_Level_paren___regBuiltin_Lean_Parser_Level_paren_parenthesizer__15___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_Level_paren___regBuiltin_Lean_Parser_Level_paren_parenthesizer__15___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Level_0__Lean_Parser_Level_paren___regBuiltin_Lean_Parser_Level_paren_parenthesizer__15___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_Level_paren___regBuiltin_Lean_Parser_Level_paren_parenthesizer__15___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__12_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(176, 210, 143, 23, 235, 250, 136, 158)}};
static const lean_ctor_object l___private_Lean_Parser_Level_0__Lean_Parser_Level_paren___regBuiltin_Lean_Parser_Level_paren_parenthesizer__15___closed__1_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_Level_paren___regBuiltin_Lean_Parser_Level_paren_parenthesizer__15___closed__1_value_aux_2),((lean_object*)&l_Lean_Parser_Level_paren___closed__0_value),LEAN_SCALAR_PTR_LITERAL(67, 200, 57, 231, 14, 244, 115, 229)}};
static const lean_ctor_object l___private_Lean_Parser_Level_0__Lean_Parser_Level_paren___regBuiltin_Lean_Parser_Level_paren_parenthesizer__15___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_Level_paren___regBuiltin_Lean_Parser_Level_paren_parenthesizer__15___closed__1_value_aux_3),((lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_Level_paren___regBuiltin_Lean_Parser_Level_paren_parenthesizer__15___closed__0_value),LEAN_SCALAR_PTR_LITERAL(122, 227, 175, 112, 158, 37, 38, 221)}};
static const lean_object* l___private_Lean_Parser_Level_0__Lean_Parser_Level_paren___regBuiltin_Lean_Parser_Level_paren_parenthesizer__15___closed__1 = (const lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_Level_paren___regBuiltin_Lean_Parser_Level_paren_parenthesizer__15___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Level_0__Lean_Parser_Level_paren___regBuiltin_Lean_Parser_Level_paren_parenthesizer__15();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Level_0__Lean_Parser_Level_paren___regBuiltin_Lean_Parser_Level_paren_parenthesizer__15___boxed(lean_object*);
static const lean_string_object l_Lean_Parser_Level_max___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "max"};
static const lean_object* l_Lean_Parser_Level_max___closed__0 = (const lean_object*)&l_Lean_Parser_Level_max___closed__0_value;
static const lean_ctor_object l_Lean_Parser_Level_max___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_Level_max___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Level_max___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_Level_max___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Level_max___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__12_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(176, 210, 143, 23, 235, 250, 136, 158)}};
static const lean_ctor_object l_Lean_Parser_Level_max___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Level_max___closed__1_value_aux_2),((lean_object*)&l_Lean_Parser_Level_max___closed__0_value),LEAN_SCALAR_PTR_LITERAL(106, 181, 1, 145, 170, 142, 100, 97)}};
static const lean_object* l_Lean_Parser_Level_max___closed__1 = (const lean_object*)&l_Lean_Parser_Level_max___closed__1_value;
static lean_once_cell_t l_Lean_Parser_Level_max___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Level_max___closed__2;
static lean_once_cell_t l_Lean_Parser_Level_max___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Level_max___closed__3;
static lean_once_cell_t l_Lean_Parser_Level_max___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Level_max___closed__4;
static lean_once_cell_t l_Lean_Parser_Level_max___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Level_max___closed__5;
static lean_once_cell_t l_Lean_Parser_Level_max___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Level_max___closed__6;
static lean_once_cell_t l_Lean_Parser_Level_max___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Level_max___closed__7;
static lean_once_cell_t l_Lean_Parser_Level_max___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Level_max___closed__8;
static lean_once_cell_t l_Lean_Parser_Level_max___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Level_max___closed__9;
static lean_once_cell_t l_Lean_Parser_Level_max___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Level_max___closed__10;
LEAN_EXPORT lean_object* l_Lean_Parser_Level_max;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Level_0__Lean_Parser_Level_max___regBuiltin_Lean_Parser_Level_max__1();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Level_0__Lean_Parser_Level_max___regBuiltin_Lean_Parser_Level_max__1___boxed(lean_object*);
static const lean_ctor_object l___private_Lean_Parser_Level_0__Lean_Parser_Level_max___regBuiltin_Lean_Parser_Level_max_declRange__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(22) << 1) | 1)),((lean_object*)(((size_t)(24) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Level_0__Lean_Parser_Level_max___regBuiltin_Lean_Parser_Level_max_declRange__3___closed__0 = (const lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_Level_max___regBuiltin_Lean_Parser_Level_max_declRange__3___closed__0_value;
static const lean_ctor_object l___private_Lean_Parser_Level_0__Lean_Parser_Level_max___regBuiltin_Lean_Parser_Level_max_declRange__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(23) << 1) | 1)),((lean_object*)(((size_t)(73) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Level_0__Lean_Parser_Level_max___regBuiltin_Lean_Parser_Level_max_declRange__3___closed__1 = (const lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_Level_max___regBuiltin_Lean_Parser_Level_max_declRange__3___closed__1_value;
static const lean_ctor_object l___private_Lean_Parser_Level_0__Lean_Parser_Level_max___regBuiltin_Lean_Parser_Level_max_declRange__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_Level_max___regBuiltin_Lean_Parser_Level_max_declRange__3___closed__0_value),((lean_object*)(((size_t)(24) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_Level_max___regBuiltin_Lean_Parser_Level_max_declRange__3___closed__1_value),((lean_object*)(((size_t)(73) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Level_0__Lean_Parser_Level_max___regBuiltin_Lean_Parser_Level_max_declRange__3___closed__2 = (const lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_Level_max___regBuiltin_Lean_Parser_Level_max_declRange__3___closed__2_value;
static const lean_ctor_object l___private_Lean_Parser_Level_0__Lean_Parser_Level_max___regBuiltin_Lean_Parser_Level_max_declRange__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(22) << 1) | 1)),((lean_object*)(((size_t)(28) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Level_0__Lean_Parser_Level_max___regBuiltin_Lean_Parser_Level_max_declRange__3___closed__3 = (const lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_Level_max___regBuiltin_Lean_Parser_Level_max_declRange__3___closed__3_value;
static const lean_ctor_object l___private_Lean_Parser_Level_0__Lean_Parser_Level_max___regBuiltin_Lean_Parser_Level_max_declRange__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(22) << 1) | 1)),((lean_object*)(((size_t)(31) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Level_0__Lean_Parser_Level_max___regBuiltin_Lean_Parser_Level_max_declRange__3___closed__4 = (const lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_Level_max___regBuiltin_Lean_Parser_Level_max_declRange__3___closed__4_value;
static const lean_ctor_object l___private_Lean_Parser_Level_0__Lean_Parser_Level_max___regBuiltin_Lean_Parser_Level_max_declRange__3___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_Level_max___regBuiltin_Lean_Parser_Level_max_declRange__3___closed__3_value),((lean_object*)(((size_t)(28) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_Level_max___regBuiltin_Lean_Parser_Level_max_declRange__3___closed__4_value),((lean_object*)(((size_t)(31) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Level_0__Lean_Parser_Level_max___regBuiltin_Lean_Parser_Level_max_declRange__3___closed__5 = (const lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_Level_max___regBuiltin_Lean_Parser_Level_max_declRange__3___closed__5_value;
static const lean_ctor_object l___private_Lean_Parser_Level_0__Lean_Parser_Level_max___regBuiltin_Lean_Parser_Level_max_declRange__3___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_Level_max___regBuiltin_Lean_Parser_Level_max_declRange__3___closed__2_value),((lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_Level_max___regBuiltin_Lean_Parser_Level_max_declRange__3___closed__5_value)}};
static const lean_object* l___private_Lean_Parser_Level_0__Lean_Parser_Level_max___regBuiltin_Lean_Parser_Level_max_declRange__3___closed__6 = (const lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_Level_max___regBuiltin_Lean_Parser_Level_max_declRange__3___closed__6_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Level_0__Lean_Parser_Level_max___regBuiltin_Lean_Parser_Level_max_declRange__3();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Level_0__Lean_Parser_Level_max___regBuiltin_Lean_Parser_Level_max_declRange__3___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Level_max_formatter___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Level_max_formatter___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Parser_Level_max_formatter___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_Level_max_formatter___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Parser_Level_max_formatter___closed__0 = (const lean_object*)&l_Lean_Parser_Level_max_formatter___closed__0_value;
static const lean_closure_object l_Lean_Parser_Level_max_formatter___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_mkAntiquot_formatter___boxed, .m_arity = 9, .m_num_fixed = 4, .m_objs = {((lean_object*)&l_Lean_Parser_Level_max___closed__0_value),((lean_object*)&l_Lean_Parser_Level_max___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Parser_Level_max_formatter___closed__1 = (const lean_object*)&l_Lean_Parser_Level_max_formatter___closed__1_value;
static const lean_closure_object l_Lean_Parser_Level_max_formatter___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_nonReservedSymbol_formatter___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Parser_Level_max___closed__0_value),((lean_object*)(((size_t)(1) << 1) | 1))} };
static const lean_object* l_Lean_Parser_Level_max_formatter___closed__2 = (const lean_object*)&l_Lean_Parser_Level_max_formatter___closed__2_value;
static lean_once_cell_t l_Lean_Parser_Level_max_formatter___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Level_max_formatter___closed__3;
static lean_once_cell_t l_Lean_Parser_Level_max_formatter___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Level_max_formatter___closed__4;
static lean_once_cell_t l_Lean_Parser_Level_max_formatter___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Level_max_formatter___closed__5;
static lean_once_cell_t l_Lean_Parser_Level_max_formatter___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Level_max_formatter___closed__6;
static lean_once_cell_t l_Lean_Parser_Level_max_formatter___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Level_max_formatter___closed__7;
LEAN_EXPORT lean_object* l_Lean_Parser_Level_max_formatter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Level_max_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Parser_Level_0__Lean_Parser_Level_max___regBuiltin_Lean_Parser_Level_max_formatter__7___closed__0_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Level_0__Lean_Parser_Level_max___regBuiltin_Lean_Parser_Level_max_formatter__7___closed__0_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_Level_max___regBuiltin_Lean_Parser_Level_max_formatter__7___closed__0_value_aux_0),((lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Level_0__Lean_Parser_Level_max___regBuiltin_Lean_Parser_Level_max_formatter__7___closed__0_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_Level_max___regBuiltin_Lean_Parser_Level_max_formatter__7___closed__0_value_aux_1),((lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__12_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(176, 210, 143, 23, 235, 250, 136, 158)}};
static const lean_ctor_object l___private_Lean_Parser_Level_0__Lean_Parser_Level_max___regBuiltin_Lean_Parser_Level_max_formatter__7___closed__0_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_Level_max___regBuiltin_Lean_Parser_Level_max_formatter__7___closed__0_value_aux_2),((lean_object*)&l_Lean_Parser_Level_max___closed__0_value),LEAN_SCALAR_PTR_LITERAL(106, 181, 1, 145, 170, 142, 100, 97)}};
static const lean_ctor_object l___private_Lean_Parser_Level_0__Lean_Parser_Level_max___regBuiltin_Lean_Parser_Level_max_formatter__7___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_Level_max___regBuiltin_Lean_Parser_Level_max_formatter__7___closed__0_value_aux_3),((lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_Level_paren___regBuiltin_Lean_Parser_Level_paren_formatter__9___closed__0_value),LEAN_SCALAR_PTR_LITERAL(35, 225, 183, 44, 175, 196, 165, 133)}};
static const lean_object* l___private_Lean_Parser_Level_0__Lean_Parser_Level_max___regBuiltin_Lean_Parser_Level_max_formatter__7___closed__0 = (const lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_Level_max___regBuiltin_Lean_Parser_Level_max_formatter__7___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Level_0__Lean_Parser_Level_max___regBuiltin_Lean_Parser_Level_max_formatter__7();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Level_0__Lean_Parser_Level_max___regBuiltin_Lean_Parser_Level_max_formatter__7___boxed(lean_object*);
static const lean_closure_object l_Lean_Parser_Level_max_parenthesizer___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_mkAntiquot_parenthesizer___boxed, .m_arity = 9, .m_num_fixed = 4, .m_objs = {((lean_object*)&l_Lean_Parser_Level_max___closed__0_value),((lean_object*)&l_Lean_Parser_Level_max___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Parser_Level_max_parenthesizer___closed__0 = (const lean_object*)&l_Lean_Parser_Level_max_parenthesizer___closed__0_value;
static const lean_closure_object l_Lean_Parser_Level_max_parenthesizer___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_nonReservedSymbol_parenthesizer___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Parser_Level_max___closed__0_value),((lean_object*)(((size_t)(1) << 1) | 1))} };
static const lean_object* l_Lean_Parser_Level_max_parenthesizer___closed__1 = (const lean_object*)&l_Lean_Parser_Level_max_parenthesizer___closed__1_value;
static const lean_closure_object l_Lean_Parser_Level_max_parenthesizer___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_ppSpace_parenthesizer___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Parser_Level_max_parenthesizer___closed__2 = (const lean_object*)&l_Lean_Parser_Level_max_parenthesizer___closed__2_value;
static lean_once_cell_t l_Lean_Parser_Level_max_parenthesizer___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Level_max_parenthesizer___closed__3;
static lean_once_cell_t l_Lean_Parser_Level_max_parenthesizer___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Level_max_parenthesizer___closed__4;
static lean_once_cell_t l_Lean_Parser_Level_max_parenthesizer___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Level_max_parenthesizer___closed__5;
static lean_once_cell_t l_Lean_Parser_Level_max_parenthesizer___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Level_max_parenthesizer___closed__6;
static lean_once_cell_t l_Lean_Parser_Level_max_parenthesizer___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Level_max_parenthesizer___closed__7;
LEAN_EXPORT lean_object* l_Lean_Parser_Level_max_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Level_max_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Parser_Level_0__Lean_Parser_Level_max___regBuiltin_Lean_Parser_Level_max_parenthesizer__11___closed__0_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Level_0__Lean_Parser_Level_max___regBuiltin_Lean_Parser_Level_max_parenthesizer__11___closed__0_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_Level_max___regBuiltin_Lean_Parser_Level_max_parenthesizer__11___closed__0_value_aux_0),((lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Level_0__Lean_Parser_Level_max___regBuiltin_Lean_Parser_Level_max_parenthesizer__11___closed__0_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_Level_max___regBuiltin_Lean_Parser_Level_max_parenthesizer__11___closed__0_value_aux_1),((lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__12_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(176, 210, 143, 23, 235, 250, 136, 158)}};
static const lean_ctor_object l___private_Lean_Parser_Level_0__Lean_Parser_Level_max___regBuiltin_Lean_Parser_Level_max_parenthesizer__11___closed__0_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_Level_max___regBuiltin_Lean_Parser_Level_max_parenthesizer__11___closed__0_value_aux_2),((lean_object*)&l_Lean_Parser_Level_max___closed__0_value),LEAN_SCALAR_PTR_LITERAL(106, 181, 1, 145, 170, 142, 100, 97)}};
static const lean_ctor_object l___private_Lean_Parser_Level_0__Lean_Parser_Level_max___regBuiltin_Lean_Parser_Level_max_parenthesizer__11___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_Level_max___regBuiltin_Lean_Parser_Level_max_parenthesizer__11___closed__0_value_aux_3),((lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_Level_paren___regBuiltin_Lean_Parser_Level_paren_parenthesizer__15___closed__0_value),LEAN_SCALAR_PTR_LITERAL(87, 115, 250, 67, 104, 241, 13, 135)}};
static const lean_object* l___private_Lean_Parser_Level_0__Lean_Parser_Level_max___regBuiltin_Lean_Parser_Level_max_parenthesizer__11___closed__0 = (const lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_Level_max___regBuiltin_Lean_Parser_Level_max_parenthesizer__11___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Level_0__Lean_Parser_Level_max___regBuiltin_Lean_Parser_Level_max_parenthesizer__11();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Level_0__Lean_Parser_Level_max___regBuiltin_Lean_Parser_Level_max_parenthesizer__11___boxed(lean_object*);
static const lean_string_object l_Lean_Parser_Level_imax___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "imax"};
static const lean_object* l_Lean_Parser_Level_imax___closed__0 = (const lean_object*)&l_Lean_Parser_Level_imax___closed__0_value;
static const lean_ctor_object l_Lean_Parser_Level_imax___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_Level_imax___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Level_imax___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_Level_imax___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Level_imax___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__12_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(176, 210, 143, 23, 235, 250, 136, 158)}};
static const lean_ctor_object l_Lean_Parser_Level_imax___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Level_imax___closed__1_value_aux_2),((lean_object*)&l_Lean_Parser_Level_imax___closed__0_value),LEAN_SCALAR_PTR_LITERAL(124, 169, 176, 27, 219, 169, 119, 28)}};
static const lean_object* l_Lean_Parser_Level_imax___closed__1 = (const lean_object*)&l_Lean_Parser_Level_imax___closed__1_value;
static lean_once_cell_t l_Lean_Parser_Level_imax___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Level_imax___closed__2;
static lean_once_cell_t l_Lean_Parser_Level_imax___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Level_imax___closed__3;
static lean_once_cell_t l_Lean_Parser_Level_imax___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Level_imax___closed__4;
static lean_once_cell_t l_Lean_Parser_Level_imax___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Level_imax___closed__5;
static lean_once_cell_t l_Lean_Parser_Level_imax___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Level_imax___closed__6;
static lean_once_cell_t l_Lean_Parser_Level_imax___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Level_imax___closed__7;
LEAN_EXPORT lean_object* l_Lean_Parser_Level_imax;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Level_0__Lean_Parser_Level_imax___regBuiltin_Lean_Parser_Level_imax__1();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Level_0__Lean_Parser_Level_imax___regBuiltin_Lean_Parser_Level_imax__1___boxed(lean_object*);
static const lean_ctor_object l___private_Lean_Parser_Level_0__Lean_Parser_Level_imax___regBuiltin_Lean_Parser_Level_imax_declRange__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(24) << 1) | 1)),((lean_object*)(((size_t)(24) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Level_0__Lean_Parser_Level_imax___regBuiltin_Lean_Parser_Level_imax_declRange__3___closed__0 = (const lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_Level_imax___regBuiltin_Lean_Parser_Level_imax_declRange__3___closed__0_value;
static const lean_ctor_object l___private_Lean_Parser_Level_0__Lean_Parser_Level_imax___regBuiltin_Lean_Parser_Level_imax_declRange__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(25) << 1) | 1)),((lean_object*)(((size_t)(73) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Level_0__Lean_Parser_Level_imax___regBuiltin_Lean_Parser_Level_imax_declRange__3___closed__1 = (const lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_Level_imax___regBuiltin_Lean_Parser_Level_imax_declRange__3___closed__1_value;
static const lean_ctor_object l___private_Lean_Parser_Level_0__Lean_Parser_Level_imax___regBuiltin_Lean_Parser_Level_imax_declRange__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_Level_imax___regBuiltin_Lean_Parser_Level_imax_declRange__3___closed__0_value),((lean_object*)(((size_t)(24) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_Level_imax___regBuiltin_Lean_Parser_Level_imax_declRange__3___closed__1_value),((lean_object*)(((size_t)(73) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Level_0__Lean_Parser_Level_imax___regBuiltin_Lean_Parser_Level_imax_declRange__3___closed__2 = (const lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_Level_imax___regBuiltin_Lean_Parser_Level_imax_declRange__3___closed__2_value;
static const lean_ctor_object l___private_Lean_Parser_Level_0__Lean_Parser_Level_imax___regBuiltin_Lean_Parser_Level_imax_declRange__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(24) << 1) | 1)),((lean_object*)(((size_t)(28) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Level_0__Lean_Parser_Level_imax___regBuiltin_Lean_Parser_Level_imax_declRange__3___closed__3 = (const lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_Level_imax___regBuiltin_Lean_Parser_Level_imax_declRange__3___closed__3_value;
static const lean_ctor_object l___private_Lean_Parser_Level_0__Lean_Parser_Level_imax___regBuiltin_Lean_Parser_Level_imax_declRange__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(24) << 1) | 1)),((lean_object*)(((size_t)(32) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Level_0__Lean_Parser_Level_imax___regBuiltin_Lean_Parser_Level_imax_declRange__3___closed__4 = (const lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_Level_imax___regBuiltin_Lean_Parser_Level_imax_declRange__3___closed__4_value;
static const lean_ctor_object l___private_Lean_Parser_Level_0__Lean_Parser_Level_imax___regBuiltin_Lean_Parser_Level_imax_declRange__3___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_Level_imax___regBuiltin_Lean_Parser_Level_imax_declRange__3___closed__3_value),((lean_object*)(((size_t)(28) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_Level_imax___regBuiltin_Lean_Parser_Level_imax_declRange__3___closed__4_value),((lean_object*)(((size_t)(32) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Level_0__Lean_Parser_Level_imax___regBuiltin_Lean_Parser_Level_imax_declRange__3___closed__5 = (const lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_Level_imax___regBuiltin_Lean_Parser_Level_imax_declRange__3___closed__5_value;
static const lean_ctor_object l___private_Lean_Parser_Level_0__Lean_Parser_Level_imax___regBuiltin_Lean_Parser_Level_imax_declRange__3___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_Level_imax___regBuiltin_Lean_Parser_Level_imax_declRange__3___closed__2_value),((lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_Level_imax___regBuiltin_Lean_Parser_Level_imax_declRange__3___closed__5_value)}};
static const lean_object* l___private_Lean_Parser_Level_0__Lean_Parser_Level_imax___regBuiltin_Lean_Parser_Level_imax_declRange__3___closed__6 = (const lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_Level_imax___regBuiltin_Lean_Parser_Level_imax_declRange__3___closed__6_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Level_0__Lean_Parser_Level_imax___regBuiltin_Lean_Parser_Level_imax_declRange__3();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Level_0__Lean_Parser_Level_imax___regBuiltin_Lean_Parser_Level_imax_declRange__3___boxed(lean_object*);
static const lean_closure_object l_Lean_Parser_Level_imax_formatter___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_mkAntiquot_formatter___boxed, .m_arity = 9, .m_num_fixed = 4, .m_objs = {((lean_object*)&l_Lean_Parser_Level_imax___closed__0_value),((lean_object*)&l_Lean_Parser_Level_imax___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Parser_Level_imax_formatter___closed__0 = (const lean_object*)&l_Lean_Parser_Level_imax_formatter___closed__0_value;
static const lean_closure_object l_Lean_Parser_Level_imax_formatter___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_nonReservedSymbol_formatter___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Parser_Level_imax___closed__0_value),((lean_object*)(((size_t)(1) << 1) | 1))} };
static const lean_object* l_Lean_Parser_Level_imax_formatter___closed__1 = (const lean_object*)&l_Lean_Parser_Level_imax_formatter___closed__1_value;
static lean_once_cell_t l_Lean_Parser_Level_imax_formatter___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Level_imax_formatter___closed__2;
static lean_once_cell_t l_Lean_Parser_Level_imax_formatter___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Level_imax_formatter___closed__3;
LEAN_EXPORT lean_object* l_Lean_Parser_Level_imax_formatter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Level_imax_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Parser_Level_0__Lean_Parser_Level_imax___regBuiltin_Lean_Parser_Level_imax_formatter__7___closed__0_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Level_0__Lean_Parser_Level_imax___regBuiltin_Lean_Parser_Level_imax_formatter__7___closed__0_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_Level_imax___regBuiltin_Lean_Parser_Level_imax_formatter__7___closed__0_value_aux_0),((lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Level_0__Lean_Parser_Level_imax___regBuiltin_Lean_Parser_Level_imax_formatter__7___closed__0_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_Level_imax___regBuiltin_Lean_Parser_Level_imax_formatter__7___closed__0_value_aux_1),((lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__12_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(176, 210, 143, 23, 235, 250, 136, 158)}};
static const lean_ctor_object l___private_Lean_Parser_Level_0__Lean_Parser_Level_imax___regBuiltin_Lean_Parser_Level_imax_formatter__7___closed__0_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_Level_imax___regBuiltin_Lean_Parser_Level_imax_formatter__7___closed__0_value_aux_2),((lean_object*)&l_Lean_Parser_Level_imax___closed__0_value),LEAN_SCALAR_PTR_LITERAL(124, 169, 176, 27, 219, 169, 119, 28)}};
static const lean_ctor_object l___private_Lean_Parser_Level_0__Lean_Parser_Level_imax___regBuiltin_Lean_Parser_Level_imax_formatter__7___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_Level_imax___regBuiltin_Lean_Parser_Level_imax_formatter__7___closed__0_value_aux_3),((lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_Level_paren___regBuiltin_Lean_Parser_Level_paren_formatter__9___closed__0_value),LEAN_SCALAR_PTR_LITERAL(85, 26, 255, 193, 194, 235, 233, 232)}};
static const lean_object* l___private_Lean_Parser_Level_0__Lean_Parser_Level_imax___regBuiltin_Lean_Parser_Level_imax_formatter__7___closed__0 = (const lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_Level_imax___regBuiltin_Lean_Parser_Level_imax_formatter__7___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Level_0__Lean_Parser_Level_imax___regBuiltin_Lean_Parser_Level_imax_formatter__7();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Level_0__Lean_Parser_Level_imax___regBuiltin_Lean_Parser_Level_imax_formatter__7___boxed(lean_object*);
static const lean_closure_object l_Lean_Parser_Level_imax_parenthesizer___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_mkAntiquot_parenthesizer___boxed, .m_arity = 9, .m_num_fixed = 4, .m_objs = {((lean_object*)&l_Lean_Parser_Level_imax___closed__0_value),((lean_object*)&l_Lean_Parser_Level_imax___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Parser_Level_imax_parenthesizer___closed__0 = (const lean_object*)&l_Lean_Parser_Level_imax_parenthesizer___closed__0_value;
static const lean_closure_object l_Lean_Parser_Level_imax_parenthesizer___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_nonReservedSymbol_parenthesizer___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Parser_Level_imax___closed__0_value),((lean_object*)(((size_t)(1) << 1) | 1))} };
static const lean_object* l_Lean_Parser_Level_imax_parenthesizer___closed__1 = (const lean_object*)&l_Lean_Parser_Level_imax_parenthesizer___closed__1_value;
static lean_once_cell_t l_Lean_Parser_Level_imax_parenthesizer___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Level_imax_parenthesizer___closed__2;
static lean_once_cell_t l_Lean_Parser_Level_imax_parenthesizer___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Level_imax_parenthesizer___closed__3;
LEAN_EXPORT lean_object* l_Lean_Parser_Level_imax_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Level_imax_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Parser_Level_0__Lean_Parser_Level_imax___regBuiltin_Lean_Parser_Level_imax_parenthesizer__11___closed__0_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Level_0__Lean_Parser_Level_imax___regBuiltin_Lean_Parser_Level_imax_parenthesizer__11___closed__0_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_Level_imax___regBuiltin_Lean_Parser_Level_imax_parenthesizer__11___closed__0_value_aux_0),((lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Level_0__Lean_Parser_Level_imax___regBuiltin_Lean_Parser_Level_imax_parenthesizer__11___closed__0_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_Level_imax___regBuiltin_Lean_Parser_Level_imax_parenthesizer__11___closed__0_value_aux_1),((lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__12_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(176, 210, 143, 23, 235, 250, 136, 158)}};
static const lean_ctor_object l___private_Lean_Parser_Level_0__Lean_Parser_Level_imax___regBuiltin_Lean_Parser_Level_imax_parenthesizer__11___closed__0_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_Level_imax___regBuiltin_Lean_Parser_Level_imax_parenthesizer__11___closed__0_value_aux_2),((lean_object*)&l_Lean_Parser_Level_imax___closed__0_value),LEAN_SCALAR_PTR_LITERAL(124, 169, 176, 27, 219, 169, 119, 28)}};
static const lean_ctor_object l___private_Lean_Parser_Level_0__Lean_Parser_Level_imax___regBuiltin_Lean_Parser_Level_imax_parenthesizer__11___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_Level_imax___regBuiltin_Lean_Parser_Level_imax_parenthesizer__11___closed__0_value_aux_3),((lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_Level_paren___regBuiltin_Lean_Parser_Level_paren_parenthesizer__15___closed__0_value),LEAN_SCALAR_PTR_LITERAL(49, 81, 250, 139, 137, 13, 195, 65)}};
static const lean_object* l___private_Lean_Parser_Level_0__Lean_Parser_Level_imax___regBuiltin_Lean_Parser_Level_imax_parenthesizer__11___closed__0 = (const lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_Level_imax___regBuiltin_Lean_Parser_Level_imax_parenthesizer__11___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Level_0__Lean_Parser_Level_imax___regBuiltin_Lean_Parser_Level_imax_parenthesizer__11();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Level_0__Lean_Parser_Level_imax___regBuiltin_Lean_Parser_Level_imax_parenthesizer__11___boxed(lean_object*);
static const lean_string_object l_Lean_Parser_Level_hole___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hole"};
static const lean_object* l_Lean_Parser_Level_hole___closed__0 = (const lean_object*)&l_Lean_Parser_Level_hole___closed__0_value;
static const lean_ctor_object l_Lean_Parser_Level_hole___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_Level_hole___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Level_hole___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_Level_hole___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Level_hole___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__12_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(176, 210, 143, 23, 235, 250, 136, 158)}};
static const lean_ctor_object l_Lean_Parser_Level_hole___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Level_hole___closed__1_value_aux_2),((lean_object*)&l_Lean_Parser_Level_hole___closed__0_value),LEAN_SCALAR_PTR_LITERAL(144, 86, 172, 30, 114, 81, 66, 18)}};
static const lean_object* l_Lean_Parser_Level_hole___closed__1 = (const lean_object*)&l_Lean_Parser_Level_hole___closed__1_value;
static lean_once_cell_t l_Lean_Parser_Level_hole___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Level_hole___closed__2;
static const lean_string_object l_Lean_Parser_Level_hole___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "_"};
static const lean_object* l_Lean_Parser_Level_hole___closed__3 = (const lean_object*)&l_Lean_Parser_Level_hole___closed__3_value;
static lean_once_cell_t l_Lean_Parser_Level_hole___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Level_hole___closed__4;
static lean_once_cell_t l_Lean_Parser_Level_hole___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Level_hole___closed__5;
static lean_once_cell_t l_Lean_Parser_Level_hole___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Level_hole___closed__6;
static lean_once_cell_t l_Lean_Parser_Level_hole___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Level_hole___closed__7;
LEAN_EXPORT lean_object* l_Lean_Parser_Level_hole;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Level_0__Lean_Parser_Level_hole___regBuiltin_Lean_Parser_Level_hole__1();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Level_0__Lean_Parser_Level_hole___regBuiltin_Lean_Parser_Level_hole__1___boxed(lean_object*);
static const lean_ctor_object l___private_Lean_Parser_Level_0__Lean_Parser_Level_hole___regBuiltin_Lean_Parser_Level_hole_declRange__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(26) << 1) | 1)),((lean_object*)(((size_t)(24) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Level_0__Lean_Parser_Level_hole___regBuiltin_Lean_Parser_Level_hole_declRange__3___closed__0 = (const lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_Level_hole___regBuiltin_Lean_Parser_Level_hole_declRange__3___closed__0_value;
static const lean_ctor_object l___private_Lean_Parser_Level_0__Lean_Parser_Level_hole___regBuiltin_Lean_Parser_Level_hole_declRange__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(27) << 1) | 1)),((lean_object*)(((size_t)(5) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Level_0__Lean_Parser_Level_hole___regBuiltin_Lean_Parser_Level_hole_declRange__3___closed__1 = (const lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_Level_hole___regBuiltin_Lean_Parser_Level_hole_declRange__3___closed__1_value;
static const lean_ctor_object l___private_Lean_Parser_Level_0__Lean_Parser_Level_hole___regBuiltin_Lean_Parser_Level_hole_declRange__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_Level_hole___regBuiltin_Lean_Parser_Level_hole_declRange__3___closed__0_value),((lean_object*)(((size_t)(24) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_Level_hole___regBuiltin_Lean_Parser_Level_hole_declRange__3___closed__1_value),((lean_object*)(((size_t)(5) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Level_0__Lean_Parser_Level_hole___regBuiltin_Lean_Parser_Level_hole_declRange__3___closed__2 = (const lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_Level_hole___regBuiltin_Lean_Parser_Level_hole_declRange__3___closed__2_value;
static const lean_ctor_object l___private_Lean_Parser_Level_0__Lean_Parser_Level_hole___regBuiltin_Lean_Parser_Level_hole_declRange__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(26) << 1) | 1)),((lean_object*)(((size_t)(28) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Level_0__Lean_Parser_Level_hole___regBuiltin_Lean_Parser_Level_hole_declRange__3___closed__3 = (const lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_Level_hole___regBuiltin_Lean_Parser_Level_hole_declRange__3___closed__3_value;
static const lean_ctor_object l___private_Lean_Parser_Level_0__Lean_Parser_Level_hole___regBuiltin_Lean_Parser_Level_hole_declRange__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(26) << 1) | 1)),((lean_object*)(((size_t)(32) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Level_0__Lean_Parser_Level_hole___regBuiltin_Lean_Parser_Level_hole_declRange__3___closed__4 = (const lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_Level_hole___regBuiltin_Lean_Parser_Level_hole_declRange__3___closed__4_value;
static const lean_ctor_object l___private_Lean_Parser_Level_0__Lean_Parser_Level_hole___regBuiltin_Lean_Parser_Level_hole_declRange__3___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_Level_hole___regBuiltin_Lean_Parser_Level_hole_declRange__3___closed__3_value),((lean_object*)(((size_t)(28) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_Level_hole___regBuiltin_Lean_Parser_Level_hole_declRange__3___closed__4_value),((lean_object*)(((size_t)(32) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Level_0__Lean_Parser_Level_hole___regBuiltin_Lean_Parser_Level_hole_declRange__3___closed__5 = (const lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_Level_hole___regBuiltin_Lean_Parser_Level_hole_declRange__3___closed__5_value;
static const lean_ctor_object l___private_Lean_Parser_Level_0__Lean_Parser_Level_hole___regBuiltin_Lean_Parser_Level_hole_declRange__3___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_Level_hole___regBuiltin_Lean_Parser_Level_hole_declRange__3___closed__2_value),((lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_Level_hole___regBuiltin_Lean_Parser_Level_hole_declRange__3___closed__5_value)}};
static const lean_object* l___private_Lean_Parser_Level_0__Lean_Parser_Level_hole___regBuiltin_Lean_Parser_Level_hole_declRange__3___closed__6 = (const lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_Level_hole___regBuiltin_Lean_Parser_Level_hole_declRange__3___closed__6_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Level_0__Lean_Parser_Level_hole___regBuiltin_Lean_Parser_Level_hole_declRange__3();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Level_0__Lean_Parser_Level_hole___regBuiltin_Lean_Parser_Level_hole_declRange__3___boxed(lean_object*);
static const lean_closure_object l_Lean_Parser_Level_hole_formatter___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_mkAntiquot_formatter___boxed, .m_arity = 9, .m_num_fixed = 4, .m_objs = {((lean_object*)&l_Lean_Parser_Level_hole___closed__0_value),((lean_object*)&l_Lean_Parser_Level_hole___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Parser_Level_hole_formatter___closed__0 = (const lean_object*)&l_Lean_Parser_Level_hole_formatter___closed__0_value;
static const lean_closure_object l_Lean_Parser_Level_hole_formatter___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_symbol_formatter___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Parser_Level_hole___closed__3_value)} };
static const lean_object* l_Lean_Parser_Level_hole_formatter___closed__1 = (const lean_object*)&l_Lean_Parser_Level_hole_formatter___closed__1_value;
static const lean_closure_object l_Lean_Parser_Level_hole_formatter___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_leadingNode_formatter___boxed, .m_arity = 8, .m_num_fixed = 3, .m_objs = {((lean_object*)&l_Lean_Parser_Level_hole___closed__1_value),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)&l_Lean_Parser_Level_hole_formatter___closed__1_value)} };
static const lean_object* l_Lean_Parser_Level_hole_formatter___closed__2 = (const lean_object*)&l_Lean_Parser_Level_hole_formatter___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Parser_Level_hole_formatter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Level_hole_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Parser_Level_0__Lean_Parser_Level_hole___regBuiltin_Lean_Parser_Level_hole_formatter__7___closed__0_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Level_0__Lean_Parser_Level_hole___regBuiltin_Lean_Parser_Level_hole_formatter__7___closed__0_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_Level_hole___regBuiltin_Lean_Parser_Level_hole_formatter__7___closed__0_value_aux_0),((lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Level_0__Lean_Parser_Level_hole___regBuiltin_Lean_Parser_Level_hole_formatter__7___closed__0_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_Level_hole___regBuiltin_Lean_Parser_Level_hole_formatter__7___closed__0_value_aux_1),((lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__12_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(176, 210, 143, 23, 235, 250, 136, 158)}};
static const lean_ctor_object l___private_Lean_Parser_Level_0__Lean_Parser_Level_hole___regBuiltin_Lean_Parser_Level_hole_formatter__7___closed__0_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_Level_hole___regBuiltin_Lean_Parser_Level_hole_formatter__7___closed__0_value_aux_2),((lean_object*)&l_Lean_Parser_Level_hole___closed__0_value),LEAN_SCALAR_PTR_LITERAL(144, 86, 172, 30, 114, 81, 66, 18)}};
static const lean_ctor_object l___private_Lean_Parser_Level_0__Lean_Parser_Level_hole___regBuiltin_Lean_Parser_Level_hole_formatter__7___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_Level_hole___regBuiltin_Lean_Parser_Level_hole_formatter__7___closed__0_value_aux_3),((lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_Level_paren___regBuiltin_Lean_Parser_Level_paren_formatter__9___closed__0_value),LEAN_SCALAR_PTR_LITERAL(49, 121, 29, 92, 225, 27, 180, 225)}};
static const lean_object* l___private_Lean_Parser_Level_0__Lean_Parser_Level_hole___regBuiltin_Lean_Parser_Level_hole_formatter__7___closed__0 = (const lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_Level_hole___regBuiltin_Lean_Parser_Level_hole_formatter__7___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Level_0__Lean_Parser_Level_hole___regBuiltin_Lean_Parser_Level_hole_formatter__7();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Level_0__Lean_Parser_Level_hole___regBuiltin_Lean_Parser_Level_hole_formatter__7___boxed(lean_object*);
static const lean_closure_object l_Lean_Parser_Level_hole_parenthesizer___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_mkAntiquot_parenthesizer___boxed, .m_arity = 9, .m_num_fixed = 4, .m_objs = {((lean_object*)&l_Lean_Parser_Level_hole___closed__0_value),((lean_object*)&l_Lean_Parser_Level_hole___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Parser_Level_hole_parenthesizer___closed__0 = (const lean_object*)&l_Lean_Parser_Level_hole_parenthesizer___closed__0_value;
static const lean_closure_object l_Lean_Parser_Level_hole_parenthesizer___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_symbol_parenthesizer___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Parser_Level_hole___closed__3_value)} };
static const lean_object* l_Lean_Parser_Level_hole_parenthesizer___closed__1 = (const lean_object*)&l_Lean_Parser_Level_hole_parenthesizer___closed__1_value;
static const lean_closure_object l_Lean_Parser_Level_hole_parenthesizer___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Parenthesizer_leadingNode_parenthesizer___boxed, .m_arity = 8, .m_num_fixed = 3, .m_objs = {((lean_object*)&l_Lean_Parser_Level_hole___closed__1_value),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)&l_Lean_Parser_Level_hole_parenthesizer___closed__1_value)} };
static const lean_object* l_Lean_Parser_Level_hole_parenthesizer___closed__2 = (const lean_object*)&l_Lean_Parser_Level_hole_parenthesizer___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Parser_Level_hole_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Level_hole_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Parser_Level_0__Lean_Parser_Level_hole___regBuiltin_Lean_Parser_Level_hole_parenthesizer__11___closed__0_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Level_0__Lean_Parser_Level_hole___regBuiltin_Lean_Parser_Level_hole_parenthesizer__11___closed__0_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_Level_hole___regBuiltin_Lean_Parser_Level_hole_parenthesizer__11___closed__0_value_aux_0),((lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Level_0__Lean_Parser_Level_hole___regBuiltin_Lean_Parser_Level_hole_parenthesizer__11___closed__0_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_Level_hole___regBuiltin_Lean_Parser_Level_hole_parenthesizer__11___closed__0_value_aux_1),((lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__12_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(176, 210, 143, 23, 235, 250, 136, 158)}};
static const lean_ctor_object l___private_Lean_Parser_Level_0__Lean_Parser_Level_hole___regBuiltin_Lean_Parser_Level_hole_parenthesizer__11___closed__0_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_Level_hole___regBuiltin_Lean_Parser_Level_hole_parenthesizer__11___closed__0_value_aux_2),((lean_object*)&l_Lean_Parser_Level_hole___closed__0_value),LEAN_SCALAR_PTR_LITERAL(144, 86, 172, 30, 114, 81, 66, 18)}};
static const lean_ctor_object l___private_Lean_Parser_Level_0__Lean_Parser_Level_hole___regBuiltin_Lean_Parser_Level_hole_parenthesizer__11___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_Level_hole___regBuiltin_Lean_Parser_Level_hole_parenthesizer__11___closed__0_value_aux_3),((lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_Level_paren___regBuiltin_Lean_Parser_Level_paren_parenthesizer__15___closed__0_value),LEAN_SCALAR_PTR_LITERAL(85, 66, 56, 8, 167, 106, 211, 138)}};
static const lean_object* l___private_Lean_Parser_Level_0__Lean_Parser_Level_hole___regBuiltin_Lean_Parser_Level_hole_parenthesizer__11___closed__0 = (const lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_Level_hole___regBuiltin_Lean_Parser_Level_hole_parenthesizer__11___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Level_0__Lean_Parser_Level_hole___regBuiltin_Lean_Parser_Level_hole_parenthesizer__11();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Level_0__Lean_Parser_Level_hole___regBuiltin_Lean_Parser_Level_hole_parenthesizer__11___boxed(lean_object*);
static lean_once_cell_t l_Lean_Parser_Level_num___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Level_num___closed__0;
static lean_once_cell_t l_Lean_Parser_Level_num___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Level_num___closed__1;
LEAN_EXPORT lean_object* l_Lean_Parser_Level_num;
static const lean_string_object l___private_Lean_Parser_Level_0__Lean_Parser_Level_num___regBuiltin_Lean_Parser_Level_num__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "num"};
static const lean_object* l___private_Lean_Parser_Level_0__Lean_Parser_Level_num___regBuiltin_Lean_Parser_Level_num__1___closed__0 = (const lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_Level_num___regBuiltin_Lean_Parser_Level_num__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Parser_Level_0__Lean_Parser_Level_num___regBuiltin_Lean_Parser_Level_num__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Level_0__Lean_Parser_Level_num___regBuiltin_Lean_Parser_Level_num__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_Level_num___regBuiltin_Lean_Parser_Level_num__1___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Level_0__Lean_Parser_Level_num___regBuiltin_Lean_Parser_Level_num__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_Level_num___regBuiltin_Lean_Parser_Level_num__1___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__12_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(176, 210, 143, 23, 235, 250, 136, 158)}};
static const lean_ctor_object l___private_Lean_Parser_Level_0__Lean_Parser_Level_num___regBuiltin_Lean_Parser_Level_num__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_Level_num___regBuiltin_Lean_Parser_Level_num__1___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_Level_num___regBuiltin_Lean_Parser_Level_num__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(204, 144, 149, 43, 79, 38, 134, 232)}};
static const lean_object* l___private_Lean_Parser_Level_0__Lean_Parser_Level_num___regBuiltin_Lean_Parser_Level_num__1___closed__1 = (const lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_Level_num___regBuiltin_Lean_Parser_Level_num__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Level_0__Lean_Parser_Level_num___regBuiltin_Lean_Parser_Level_num__1();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Level_0__Lean_Parser_Level_num___regBuiltin_Lean_Parser_Level_num__1___boxed(lean_object*);
static const lean_ctor_object l___private_Lean_Parser_Level_0__Lean_Parser_Level_num___regBuiltin_Lean_Parser_Level_num_declRange__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(28) << 1) | 1)),((lean_object*)(((size_t)(24) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Level_0__Lean_Parser_Level_num___regBuiltin_Lean_Parser_Level_num_declRange__3___closed__0 = (const lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_Level_num___regBuiltin_Lean_Parser_Level_num_declRange__3___closed__0_value;
static const lean_ctor_object l___private_Lean_Parser_Level_0__Lean_Parser_Level_num___regBuiltin_Lean_Parser_Level_num_declRange__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(29) << 1) | 1)),((lean_object*)(((size_t)(29) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Level_0__Lean_Parser_Level_num___regBuiltin_Lean_Parser_Level_num_declRange__3___closed__1 = (const lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_Level_num___regBuiltin_Lean_Parser_Level_num_declRange__3___closed__1_value;
static const lean_ctor_object l___private_Lean_Parser_Level_0__Lean_Parser_Level_num___regBuiltin_Lean_Parser_Level_num_declRange__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_Level_num___regBuiltin_Lean_Parser_Level_num_declRange__3___closed__0_value),((lean_object*)(((size_t)(24) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_Level_num___regBuiltin_Lean_Parser_Level_num_declRange__3___closed__1_value),((lean_object*)(((size_t)(29) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Level_0__Lean_Parser_Level_num___regBuiltin_Lean_Parser_Level_num_declRange__3___closed__2 = (const lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_Level_num___regBuiltin_Lean_Parser_Level_num_declRange__3___closed__2_value;
static const lean_ctor_object l___private_Lean_Parser_Level_0__Lean_Parser_Level_num___regBuiltin_Lean_Parser_Level_num_declRange__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(28) << 1) | 1)),((lean_object*)(((size_t)(28) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Level_0__Lean_Parser_Level_num___regBuiltin_Lean_Parser_Level_num_declRange__3___closed__3 = (const lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_Level_num___regBuiltin_Lean_Parser_Level_num_declRange__3___closed__3_value;
static const lean_ctor_object l___private_Lean_Parser_Level_0__Lean_Parser_Level_num___regBuiltin_Lean_Parser_Level_num_declRange__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(28) << 1) | 1)),((lean_object*)(((size_t)(31) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Level_0__Lean_Parser_Level_num___regBuiltin_Lean_Parser_Level_num_declRange__3___closed__4 = (const lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_Level_num___regBuiltin_Lean_Parser_Level_num_declRange__3___closed__4_value;
static const lean_ctor_object l___private_Lean_Parser_Level_0__Lean_Parser_Level_num___regBuiltin_Lean_Parser_Level_num_declRange__3___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_Level_num___regBuiltin_Lean_Parser_Level_num_declRange__3___closed__3_value),((lean_object*)(((size_t)(28) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_Level_num___regBuiltin_Lean_Parser_Level_num_declRange__3___closed__4_value),((lean_object*)(((size_t)(31) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Level_0__Lean_Parser_Level_num___regBuiltin_Lean_Parser_Level_num_declRange__3___closed__5 = (const lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_Level_num___regBuiltin_Lean_Parser_Level_num_declRange__3___closed__5_value;
static const lean_ctor_object l___private_Lean_Parser_Level_0__Lean_Parser_Level_num___regBuiltin_Lean_Parser_Level_num_declRange__3___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_Level_num___regBuiltin_Lean_Parser_Level_num_declRange__3___closed__2_value),((lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_Level_num___regBuiltin_Lean_Parser_Level_num_declRange__3___closed__5_value)}};
static const lean_object* l___private_Lean_Parser_Level_0__Lean_Parser_Level_num___regBuiltin_Lean_Parser_Level_num_declRange__3___closed__6 = (const lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_Level_num___regBuiltin_Lean_Parser_Level_num_declRange__3___closed__6_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Level_0__Lean_Parser_Level_num___regBuiltin_Lean_Parser_Level_num_declRange__3();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Level_0__Lean_Parser_Level_num___regBuiltin_Lean_Parser_Level_num_declRange__3___boxed(lean_object*);
static const lean_closure_object l_Lean_Parser_Level_num_formatter___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_numLit_formatter___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Parser_Level_num_formatter___closed__0 = (const lean_object*)&l_Lean_Parser_Level_num_formatter___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Parser_Level_num_formatter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Level_num_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Level_num_parenthesizer___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Level_num_parenthesizer___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Parser_Level_num_parenthesizer___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Level_num_parenthesizer___closed__0;
static const lean_closure_object l_Lean_Parser_Level_num_parenthesizer___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_numLit_parenthesizer___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Parser_Level_num_parenthesizer___closed__1 = (const lean_object*)&l_Lean_Parser_Level_num_parenthesizer___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Parser_Level_num_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Level_num_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Parser_Level_ident___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Level_ident___closed__0;
LEAN_EXPORT lean_object* l_Lean_Parser_Level_ident;
static const lean_string_object l___private_Lean_Parser_Level_0__Lean_Parser_Level_ident___regBuiltin_Lean_Parser_Level_ident__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ident"};
static const lean_object* l___private_Lean_Parser_Level_0__Lean_Parser_Level_ident___regBuiltin_Lean_Parser_Level_ident__1___closed__0 = (const lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_Level_ident___regBuiltin_Lean_Parser_Level_ident__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Parser_Level_0__Lean_Parser_Level_ident___regBuiltin_Lean_Parser_Level_ident__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Level_0__Lean_Parser_Level_ident___regBuiltin_Lean_Parser_Level_ident__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_Level_ident___regBuiltin_Lean_Parser_Level_ident__1___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Level_0__Lean_Parser_Level_ident___regBuiltin_Lean_Parser_Level_ident__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_Level_ident___regBuiltin_Lean_Parser_Level_ident__1___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__12_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(176, 210, 143, 23, 235, 250, 136, 158)}};
static const lean_ctor_object l___private_Lean_Parser_Level_0__Lean_Parser_Level_ident___regBuiltin_Lean_Parser_Level_ident__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_Level_ident___regBuiltin_Lean_Parser_Level_ident__1___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_Level_ident___regBuiltin_Lean_Parser_Level_ident__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(155, 196, 73, 63, 184, 149, 21, 131)}};
static const lean_object* l___private_Lean_Parser_Level_0__Lean_Parser_Level_ident___regBuiltin_Lean_Parser_Level_ident__1___closed__1 = (const lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_Level_ident___regBuiltin_Lean_Parser_Level_ident__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Level_0__Lean_Parser_Level_ident___regBuiltin_Lean_Parser_Level_ident__1();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Level_0__Lean_Parser_Level_ident___regBuiltin_Lean_Parser_Level_ident__1___boxed(lean_object*);
static const lean_ctor_object l___private_Lean_Parser_Level_0__Lean_Parser_Level_ident___regBuiltin_Lean_Parser_Level_ident_declRange__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(30) << 1) | 1)),((lean_object*)(((size_t)(24) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Level_0__Lean_Parser_Level_ident___regBuiltin_Lean_Parser_Level_ident_declRange__3___closed__0 = (const lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_Level_ident___regBuiltin_Lean_Parser_Level_ident_declRange__3___closed__0_value;
static const lean_ctor_object l___private_Lean_Parser_Level_0__Lean_Parser_Level_ident___regBuiltin_Lean_Parser_Level_ident_declRange__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(31) << 1) | 1)),((lean_object*)(((size_t)(35) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Level_0__Lean_Parser_Level_ident___regBuiltin_Lean_Parser_Level_ident_declRange__3___closed__1 = (const lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_Level_ident___regBuiltin_Lean_Parser_Level_ident_declRange__3___closed__1_value;
static const lean_ctor_object l___private_Lean_Parser_Level_0__Lean_Parser_Level_ident___regBuiltin_Lean_Parser_Level_ident_declRange__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_Level_ident___regBuiltin_Lean_Parser_Level_ident_declRange__3___closed__0_value),((lean_object*)(((size_t)(24) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_Level_ident___regBuiltin_Lean_Parser_Level_ident_declRange__3___closed__1_value),((lean_object*)(((size_t)(35) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Level_0__Lean_Parser_Level_ident___regBuiltin_Lean_Parser_Level_ident_declRange__3___closed__2 = (const lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_Level_ident___regBuiltin_Lean_Parser_Level_ident_declRange__3___closed__2_value;
static const lean_ctor_object l___private_Lean_Parser_Level_0__Lean_Parser_Level_ident___regBuiltin_Lean_Parser_Level_ident_declRange__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(30) << 1) | 1)),((lean_object*)(((size_t)(28) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Level_0__Lean_Parser_Level_ident___regBuiltin_Lean_Parser_Level_ident_declRange__3___closed__3 = (const lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_Level_ident___regBuiltin_Lean_Parser_Level_ident_declRange__3___closed__3_value;
static const lean_ctor_object l___private_Lean_Parser_Level_0__Lean_Parser_Level_ident___regBuiltin_Lean_Parser_Level_ident_declRange__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(30) << 1) | 1)),((lean_object*)(((size_t)(33) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Level_0__Lean_Parser_Level_ident___regBuiltin_Lean_Parser_Level_ident_declRange__3___closed__4 = (const lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_Level_ident___regBuiltin_Lean_Parser_Level_ident_declRange__3___closed__4_value;
static const lean_ctor_object l___private_Lean_Parser_Level_0__Lean_Parser_Level_ident___regBuiltin_Lean_Parser_Level_ident_declRange__3___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_Level_ident___regBuiltin_Lean_Parser_Level_ident_declRange__3___closed__3_value),((lean_object*)(((size_t)(28) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_Level_ident___regBuiltin_Lean_Parser_Level_ident_declRange__3___closed__4_value),((lean_object*)(((size_t)(33) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Level_0__Lean_Parser_Level_ident___regBuiltin_Lean_Parser_Level_ident_declRange__3___closed__5 = (const lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_Level_ident___regBuiltin_Lean_Parser_Level_ident_declRange__3___closed__5_value;
static const lean_ctor_object l___private_Lean_Parser_Level_0__Lean_Parser_Level_ident___regBuiltin_Lean_Parser_Level_ident_declRange__3___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_Level_ident___regBuiltin_Lean_Parser_Level_ident_declRange__3___closed__2_value),((lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_Level_ident___regBuiltin_Lean_Parser_Level_ident_declRange__3___closed__5_value)}};
static const lean_object* l___private_Lean_Parser_Level_0__Lean_Parser_Level_ident___regBuiltin_Lean_Parser_Level_ident_declRange__3___closed__6 = (const lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_Level_ident___regBuiltin_Lean_Parser_Level_ident_declRange__3___closed__6_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Level_0__Lean_Parser_Level_ident___regBuiltin_Lean_Parser_Level_ident_declRange__3();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Level_0__Lean_Parser_Level_ident___regBuiltin_Lean_Parser_Level_ident_declRange__3___boxed(lean_object*);
static const lean_closure_object l_Lean_Parser_Level_ident_formatter___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_ident_formatter___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Parser_Level_ident_formatter___closed__0 = (const lean_object*)&l_Lean_Parser_Level_ident_formatter___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Parser_Level_ident_formatter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Level_ident_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Parser_Level_ident_parenthesizer___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_ident_parenthesizer___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Parser_Level_ident_parenthesizer___closed__0 = (const lean_object*)&l_Lean_Parser_Level_ident_parenthesizer___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Parser_Level_ident_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Level_ident_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Parser_Level_addLit___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "addLit"};
static const lean_object* l_Lean_Parser_Level_addLit___closed__0 = (const lean_object*)&l_Lean_Parser_Level_addLit___closed__0_value;
static const lean_ctor_object l_Lean_Parser_Level_addLit___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_Level_addLit___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Level_addLit___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_Level_addLit___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Level_addLit___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__12_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(176, 210, 143, 23, 235, 250, 136, 158)}};
static const lean_ctor_object l_Lean_Parser_Level_addLit___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Level_addLit___closed__1_value_aux_2),((lean_object*)&l_Lean_Parser_Level_addLit___closed__0_value),LEAN_SCALAR_PTR_LITERAL(53, 243, 225, 2, 30, 243, 80, 174)}};
static const lean_object* l_Lean_Parser_Level_addLit___closed__1 = (const lean_object*)&l_Lean_Parser_Level_addLit___closed__1_value;
static const lean_string_object l_Lean_Parser_Level_addLit___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = " + "};
static const lean_object* l_Lean_Parser_Level_addLit___closed__2 = (const lean_object*)&l_Lean_Parser_Level_addLit___closed__2_value;
static lean_once_cell_t l_Lean_Parser_Level_addLit___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Level_addLit___closed__3;
static lean_once_cell_t l_Lean_Parser_Level_addLit___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Level_addLit___closed__4;
static lean_once_cell_t l_Lean_Parser_Level_addLit___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Level_addLit___closed__5;
LEAN_EXPORT lean_object* l_Lean_Parser_Level_addLit;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Level_0__Lean_Parser_Level_addLit___regBuiltin_Lean_Parser_Level_addLit__1();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Level_0__Lean_Parser_Level_addLit___regBuiltin_Lean_Parser_Level_addLit__1___boxed(lean_object*);
static const lean_ctor_object l___private_Lean_Parser_Level_0__Lean_Parser_Level_addLit___regBuiltin_Lean_Parser_Level_addLit_declRange__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(32) << 1) | 1)),((lean_object*)(((size_t)(24) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Level_0__Lean_Parser_Level_addLit___regBuiltin_Lean_Parser_Level_addLit_declRange__3___closed__0 = (const lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_Level_addLit___regBuiltin_Lean_Parser_Level_addLit_declRange__3___closed__0_value;
static const lean_ctor_object l___private_Lean_Parser_Level_0__Lean_Parser_Level_addLit___regBuiltin_Lean_Parser_Level_addLit_declRange__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(33) << 1) | 1)),((lean_object*)(((size_t)(17) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Level_0__Lean_Parser_Level_addLit___regBuiltin_Lean_Parser_Level_addLit_declRange__3___closed__1 = (const lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_Level_addLit___regBuiltin_Lean_Parser_Level_addLit_declRange__3___closed__1_value;
static const lean_ctor_object l___private_Lean_Parser_Level_0__Lean_Parser_Level_addLit___regBuiltin_Lean_Parser_Level_addLit_declRange__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_Level_addLit___regBuiltin_Lean_Parser_Level_addLit_declRange__3___closed__0_value),((lean_object*)(((size_t)(24) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_Level_addLit___regBuiltin_Lean_Parser_Level_addLit_declRange__3___closed__1_value),((lean_object*)(((size_t)(17) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Level_0__Lean_Parser_Level_addLit___regBuiltin_Lean_Parser_Level_addLit_declRange__3___closed__2 = (const lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_Level_addLit___regBuiltin_Lean_Parser_Level_addLit_declRange__3___closed__2_value;
static const lean_ctor_object l___private_Lean_Parser_Level_0__Lean_Parser_Level_addLit___regBuiltin_Lean_Parser_Level_addLit_declRange__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(32) << 1) | 1)),((lean_object*)(((size_t)(28) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Level_0__Lean_Parser_Level_addLit___regBuiltin_Lean_Parser_Level_addLit_declRange__3___closed__3 = (const lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_Level_addLit___regBuiltin_Lean_Parser_Level_addLit_declRange__3___closed__3_value;
static const lean_ctor_object l___private_Lean_Parser_Level_0__Lean_Parser_Level_addLit___regBuiltin_Lean_Parser_Level_addLit_declRange__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(32) << 1) | 1)),((lean_object*)(((size_t)(34) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Level_0__Lean_Parser_Level_addLit___regBuiltin_Lean_Parser_Level_addLit_declRange__3___closed__4 = (const lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_Level_addLit___regBuiltin_Lean_Parser_Level_addLit_declRange__3___closed__4_value;
static const lean_ctor_object l___private_Lean_Parser_Level_0__Lean_Parser_Level_addLit___regBuiltin_Lean_Parser_Level_addLit_declRange__3___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_Level_addLit___regBuiltin_Lean_Parser_Level_addLit_declRange__3___closed__3_value),((lean_object*)(((size_t)(28) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_Level_addLit___regBuiltin_Lean_Parser_Level_addLit_declRange__3___closed__4_value),((lean_object*)(((size_t)(34) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Level_0__Lean_Parser_Level_addLit___regBuiltin_Lean_Parser_Level_addLit_declRange__3___closed__5 = (const lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_Level_addLit___regBuiltin_Lean_Parser_Level_addLit_declRange__3___closed__5_value;
static const lean_ctor_object l___private_Lean_Parser_Level_0__Lean_Parser_Level_addLit___regBuiltin_Lean_Parser_Level_addLit_declRange__3___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_Level_addLit___regBuiltin_Lean_Parser_Level_addLit_declRange__3___closed__2_value),((lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_Level_addLit___regBuiltin_Lean_Parser_Level_addLit_declRange__3___closed__5_value)}};
static const lean_object* l___private_Lean_Parser_Level_0__Lean_Parser_Level_addLit___regBuiltin_Lean_Parser_Level_addLit_declRange__3___closed__6 = (const lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_Level_addLit___regBuiltin_Lean_Parser_Level_addLit_declRange__3___closed__6_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Level_0__Lean_Parser_Level_addLit___regBuiltin_Lean_Parser_Level_addLit_declRange__3();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Level_0__Lean_Parser_Level_addLit___regBuiltin_Lean_Parser_Level_addLit_declRange__3___boxed(lean_object*);
static const lean_closure_object l_Lean_Parser_Level_addLit_formatter___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_symbol_formatter___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Parser_Level_addLit___closed__2_value)} };
static const lean_object* l_Lean_Parser_Level_addLit_formatter___closed__0 = (const lean_object*)&l_Lean_Parser_Level_addLit_formatter___closed__0_value;
static const lean_closure_object l_Lean_Parser_Level_addLit_formatter___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Parser_Level_addLit_formatter___closed__0_value),((lean_object*)&l_Lean_Parser_Level_num_formatter___closed__0_value)} };
static const lean_object* l_Lean_Parser_Level_addLit_formatter___closed__1 = (const lean_object*)&l_Lean_Parser_Level_addLit_formatter___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Parser_Level_addLit_formatter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Level_addLit_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Parser_Level_0__Lean_Parser_Level_addLit___regBuiltin_Lean_Parser_Level_addLit_formatter__7___closed__0_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Level_0__Lean_Parser_Level_addLit___regBuiltin_Lean_Parser_Level_addLit_formatter__7___closed__0_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_Level_addLit___regBuiltin_Lean_Parser_Level_addLit_formatter__7___closed__0_value_aux_0),((lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Level_0__Lean_Parser_Level_addLit___regBuiltin_Lean_Parser_Level_addLit_formatter__7___closed__0_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_Level_addLit___regBuiltin_Lean_Parser_Level_addLit_formatter__7___closed__0_value_aux_1),((lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__12_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(176, 210, 143, 23, 235, 250, 136, 158)}};
static const lean_ctor_object l___private_Lean_Parser_Level_0__Lean_Parser_Level_addLit___regBuiltin_Lean_Parser_Level_addLit_formatter__7___closed__0_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_Level_addLit___regBuiltin_Lean_Parser_Level_addLit_formatter__7___closed__0_value_aux_2),((lean_object*)&l_Lean_Parser_Level_addLit___closed__0_value),LEAN_SCALAR_PTR_LITERAL(53, 243, 225, 2, 30, 243, 80, 174)}};
static const lean_ctor_object l___private_Lean_Parser_Level_0__Lean_Parser_Level_addLit___regBuiltin_Lean_Parser_Level_addLit_formatter__7___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_Level_addLit___regBuiltin_Lean_Parser_Level_addLit_formatter__7___closed__0_value_aux_3),((lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_Level_paren___regBuiltin_Lean_Parser_Level_paren_formatter__9___closed__0_value),LEAN_SCALAR_PTR_LITERAL(40, 138, 111, 75, 72, 230, 73, 52)}};
static const lean_object* l___private_Lean_Parser_Level_0__Lean_Parser_Level_addLit___regBuiltin_Lean_Parser_Level_addLit_formatter__7___closed__0 = (const lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_Level_addLit___regBuiltin_Lean_Parser_Level_addLit_formatter__7___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Level_0__Lean_Parser_Level_addLit___regBuiltin_Lean_Parser_Level_addLit_formatter__7();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Level_0__Lean_Parser_Level_addLit___regBuiltin_Lean_Parser_Level_addLit_formatter__7___boxed(lean_object*);
static const lean_closure_object l_Lean_Parser_Level_addLit_parenthesizer___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_symbol_parenthesizer___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Parser_Level_addLit___closed__2_value)} };
static const lean_object* l_Lean_Parser_Level_addLit_parenthesizer___closed__0 = (const lean_object*)&l_Lean_Parser_Level_addLit_parenthesizer___closed__0_value;
static const lean_closure_object l_Lean_Parser_Level_addLit_parenthesizer___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Parser_Level_addLit_parenthesizer___closed__0_value),((lean_object*)&l_Lean_Parser_Level_num_parenthesizer___closed__1_value)} };
static const lean_object* l_Lean_Parser_Level_addLit_parenthesizer___closed__1 = (const lean_object*)&l_Lean_Parser_Level_addLit_parenthesizer___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Parser_Level_addLit_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Level_addLit_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Parser_Level_0__Lean_Parser_Level_addLit___regBuiltin_Lean_Parser_Level_addLit_parenthesizer__11___closed__0_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Level_0__Lean_Parser_Level_addLit___regBuiltin_Lean_Parser_Level_addLit_parenthesizer__11___closed__0_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_Level_addLit___regBuiltin_Lean_Parser_Level_addLit_parenthesizer__11___closed__0_value_aux_0),((lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Level_0__Lean_Parser_Level_addLit___regBuiltin_Lean_Parser_Level_addLit_parenthesizer__11___closed__0_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_Level_addLit___regBuiltin_Lean_Parser_Level_addLit_parenthesizer__11___closed__0_value_aux_1),((lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__12_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(176, 210, 143, 23, 235, 250, 136, 158)}};
static const lean_ctor_object l___private_Lean_Parser_Level_0__Lean_Parser_Level_addLit___regBuiltin_Lean_Parser_Level_addLit_parenthesizer__11___closed__0_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_Level_addLit___regBuiltin_Lean_Parser_Level_addLit_parenthesizer__11___closed__0_value_aux_2),((lean_object*)&l_Lean_Parser_Level_addLit___closed__0_value),LEAN_SCALAR_PTR_LITERAL(53, 243, 225, 2, 30, 243, 80, 174)}};
static const lean_ctor_object l___private_Lean_Parser_Level_0__Lean_Parser_Level_addLit___regBuiltin_Lean_Parser_Level_addLit_parenthesizer__11___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_Level_addLit___regBuiltin_Lean_Parser_Level_addLit_parenthesizer__11___closed__0_value_aux_3),((lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_Level_paren___regBuiltin_Lean_Parser_Level_paren_parenthesizer__15___closed__0_value),LEAN_SCALAR_PTR_LITERAL(52, 158, 100, 239, 198, 8, 217, 250)}};
static const lean_object* l___private_Lean_Parser_Level_0__Lean_Parser_Level_addLit___regBuiltin_Lean_Parser_Level_addLit_parenthesizer__11___closed__0 = (const lean_object*)&l___private_Lean_Parser_Level_0__Lean_Parser_Level_addLit___regBuiltin_Lean_Parser_Level_addLit_parenthesizer__11___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Level_0__Lean_Parser_Level_addLit___regBuiltin_Lean_Parser_Level_addLit_parenthesizer__11();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Level_0__Lean_Parser_Level_addLit___regBuiltin_Lean_Parser_Level_addLit_parenthesizer__11___boxed(lean_object*);
static lean_object* _init_l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__7_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_13_; lean_object* v___x_14_; 
v___x_13_ = lean_box(0);
v___x_14_ = l_unsafeCast___redArg(v___x_13_);
return v___x_14_;
}
}
static lean_object* _init_l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__9_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_16_; lean_object* v___x_17_; lean_object* v___x_18_; 
v___x_16_ = ((lean_object*)(l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__8_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2_));
v___x_17_ = lean_obj_once(&l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__7_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2_, &l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__7_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__7_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2_);
v___x_18_ = l_Lean_Name_str___override(v___x_17_, v___x_16_);
return v___x_18_;
}
}
static lean_object* _init_l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__10_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_19_; lean_object* v___x_20_; lean_object* v___x_21_; 
v___x_19_ = ((lean_object*)(l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2_));
v___x_20_ = lean_obj_once(&l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__9_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2_, &l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__9_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__9_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2_);
v___x_21_ = l_Lean_Name_str___override(v___x_20_, v___x_19_);
return v___x_21_;
}
}
static lean_object* _init_l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__11_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_22_; lean_object* v___x_23_; lean_object* v___x_24_; 
v___x_22_ = ((lean_object*)(l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2_));
v___x_23_ = lean_obj_once(&l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__10_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2_, &l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__10_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__10_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2_);
v___x_24_ = l_Lean_Name_str___override(v___x_23_, v___x_22_);
return v___x_24_;
}
}
static lean_object* _init_l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__13_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_26_; lean_object* v___x_27_; lean_object* v___x_28_; 
v___x_26_ = ((lean_object*)(l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__12_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2_));
v___x_27_ = lean_obj_once(&l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__11_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2_, &l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__11_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__11_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2_);
v___x_28_ = l_Lean_Name_str___override(v___x_27_, v___x_26_);
return v___x_28_;
}
}
static lean_object* _init_l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__14_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_29_; lean_object* v___x_30_; lean_object* v___x_31_; 
v___x_29_ = lean_unsigned_to_nat(0u);
v___x_30_ = lean_obj_once(&l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__13_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2_, &l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__13_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__13_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2_);
v___x_31_ = l_Lean_Name_num___override(v___x_30_, v___x_29_);
return v___x_31_;
}
}
static lean_object* _init_l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__15_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_32_; lean_object* v___x_33_; lean_object* v___x_34_; 
v___x_32_ = ((lean_object*)(l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2_));
v___x_33_ = lean_obj_once(&l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__14_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2_, &l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__14_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__14_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2_);
v___x_34_ = l_Lean_Name_str___override(v___x_33_, v___x_32_);
return v___x_34_;
}
}
static lean_object* _init_l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__16_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_35_; lean_object* v___x_36_; lean_object* v___x_37_; 
v___x_35_ = ((lean_object*)(l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2_));
v___x_36_ = lean_obj_once(&l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__15_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2_, &l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__15_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__15_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2_);
v___x_37_ = l_Lean_Name_str___override(v___x_36_, v___x_35_);
return v___x_37_;
}
}
static lean_object* _init_l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__18_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_39_; lean_object* v___x_40_; lean_object* v___x_41_; 
v___x_39_ = ((lean_object*)(l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__17_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2_));
v___x_40_ = lean_obj_once(&l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__16_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2_, &l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__16_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__16_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2_);
v___x_41_ = l_Lean_Name_str___override(v___x_40_, v___x_39_);
return v___x_41_;
}
}
static lean_object* _init_l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__20_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_43_; lean_object* v___x_44_; lean_object* v___x_45_; 
v___x_43_ = ((lean_object*)(l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__19_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2_));
v___x_44_ = lean_obj_once(&l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__18_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2_, &l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__18_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__18_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2_);
v___x_45_ = l_Lean_Name_str___override(v___x_44_, v___x_43_);
return v___x_45_;
}
}
static lean_object* _init_l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__21_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_46_; lean_object* v___x_47_; lean_object* v___x_48_; 
v___x_46_ = ((lean_object*)(l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2_));
v___x_47_ = lean_obj_once(&l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__20_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2_, &l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__20_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__20_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2_);
v___x_48_ = l_Lean_Name_str___override(v___x_47_, v___x_46_);
return v___x_48_;
}
}
static lean_object* _init_l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__22_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_49_; lean_object* v___x_50_; lean_object* v___x_51_; 
v___x_49_ = ((lean_object*)(l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2_));
v___x_50_ = lean_obj_once(&l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__21_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2_, &l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__21_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__21_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2_);
v___x_51_ = l_Lean_Name_str___override(v___x_50_, v___x_49_);
return v___x_51_;
}
}
static lean_object* _init_l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__23_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_52_; lean_object* v___x_53_; lean_object* v___x_54_; 
v___x_52_ = ((lean_object*)(l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__12_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2_));
v___x_53_ = lean_obj_once(&l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__22_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2_, &l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__22_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__22_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2_);
v___x_54_ = l_Lean_Name_str___override(v___x_53_, v___x_52_);
return v___x_54_;
}
}
static lean_object* _init_l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__24_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_55_; lean_object* v___x_56_; lean_object* v___x_57_; 
v___x_55_ = lean_unsigned_to_nat(2271617841u);
v___x_56_ = lean_obj_once(&l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__23_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2_, &l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__23_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__23_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2_);
v___x_57_ = l_Lean_Name_num___override(v___x_56_, v___x_55_);
return v___x_57_;
}
}
static lean_object* _init_l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__26_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_59_; lean_object* v___x_60_; lean_object* v___x_61_; 
v___x_59_ = ((lean_object*)(l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__25_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2_));
v___x_60_ = lean_obj_once(&l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__24_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2_, &l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__24_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__24_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2_);
v___x_61_ = l_Lean_Name_str___override(v___x_60_, v___x_59_);
return v___x_61_;
}
}
static lean_object* _init_l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__28_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_63_; lean_object* v___x_64_; lean_object* v___x_65_; 
v___x_63_ = ((lean_object*)(l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__27_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2_));
v___x_64_ = lean_obj_once(&l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__26_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2_, &l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__26_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__26_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2_);
v___x_65_ = l_Lean_Name_str___override(v___x_64_, v___x_63_);
return v___x_65_;
}
}
static lean_object* _init_l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__29_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_66_; lean_object* v___x_67_; lean_object* v___x_68_; 
v___x_66_ = lean_unsigned_to_nat(2u);
v___x_67_ = lean_obj_once(&l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__28_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2_, &l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__28_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__28_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2_);
v___x_68_ = l_Lean_Name_num___override(v___x_67_, v___x_66_);
return v___x_68_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Level_0__Lean_Parser_initFn_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_70_; lean_object* v___x_71_; uint8_t v___x_72_; lean_object* v___x_73_; lean_object* v___x_74_; 
v___x_70_ = ((lean_object*)(l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__1_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2_));
v___x_71_ = ((lean_object*)(l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__6_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2_));
v___x_72_ = 0;
v___x_73_ = lean_obj_once(&l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__29_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2_, &l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__29_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Level_0__Lean_Parser_initFn___closed__29_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2_);
v___x_74_ = l_Lean_Parser_registerBuiltinParserAttribute(v___x_70_, v___x_71_, v___x_72_, v___x_73_);
return v___x_74_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Level_0__Lean_Parser_initFn_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2____boxed(lean_object* v_a_75_){
_start:
{
lean_object* v_res_76_; 
v_res_76_ = l___private_Lean_Parser_Level_0__Lean_Parser_initFn_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2_();
return v_res_76_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_levelParser(lean_object* v_rbp_79_){
_start:
{
lean_object* v___x_80_; lean_object* v___x_81_; 
v___x_80_ = ((lean_object*)(l_Lean_Parser_levelParser___closed__0));
v___x_81_ = l_Lean_Parser_categoryParser(v___x_80_, v_rbp_79_);
return v___x_81_;
}
}
static lean_object* _init_l_Lean_Parser_Level_paren___closed__2(void){
_start:
{
uint8_t v___x_88_; uint8_t v___x_89_; lean_object* v___x_90_; lean_object* v___x_91_; lean_object* v___x_92_; 
v___x_88_ = 0;
v___x_89_ = 1;
v___x_90_ = ((lean_object*)(l_Lean_Parser_Level_paren___closed__1));
v___x_91_ = ((lean_object*)(l_Lean_Parser_Level_paren___closed__0));
v___x_92_ = l_Lean_Parser_mkAntiquot(v___x_91_, v___x_90_, v___x_89_, v___x_88_);
return v___x_92_;
}
}
static lean_object* _init_l_Lean_Parser_Level_paren___closed__4(void){
_start:
{
lean_object* v___x_94_; lean_object* v___x_95_; 
v___x_94_ = ((lean_object*)(l_Lean_Parser_Level_paren___closed__3));
v___x_95_ = l_Lean_Parser_symbol(v___x_94_);
return v___x_95_;
}
}
static lean_object* _init_l_Lean_Parser_Level_paren___closed__5(void){
_start:
{
lean_object* v___x_96_; lean_object* v___x_97_; lean_object* v___x_98_; 
v___x_96_ = lean_unsigned_to_nat(0u);
v___x_97_ = ((lean_object*)(l_Lean_Parser_levelParser___closed__0));
v___x_98_ = l_Lean_Parser_categoryParser(v___x_97_, v___x_96_);
return v___x_98_;
}
}
static lean_object* _init_l_Lean_Parser_Level_paren___closed__6(void){
_start:
{
lean_object* v___x_99_; lean_object* v___x_100_; 
v___x_99_ = lean_obj_once(&l_Lean_Parser_Level_paren___closed__5, &l_Lean_Parser_Level_paren___closed__5_once, _init_l_Lean_Parser_Level_paren___closed__5);
v___x_100_ = l_Lean_Parser_withoutPosition(v___x_99_);
return v___x_100_;
}
}
static lean_object* _init_l_Lean_Parser_Level_paren___closed__8(void){
_start:
{
lean_object* v___x_102_; lean_object* v___x_103_; 
v___x_102_ = ((lean_object*)(l_Lean_Parser_Level_paren___closed__7));
v___x_103_ = l_Lean_Parser_symbol(v___x_102_);
return v___x_103_;
}
}
static lean_object* _init_l_Lean_Parser_Level_paren___closed__9(void){
_start:
{
lean_object* v___x_104_; lean_object* v___x_105_; lean_object* v___x_106_; 
v___x_104_ = lean_obj_once(&l_Lean_Parser_Level_paren___closed__8, &l_Lean_Parser_Level_paren___closed__8_once, _init_l_Lean_Parser_Level_paren___closed__8);
v___x_105_ = lean_obj_once(&l_Lean_Parser_Level_paren___closed__6, &l_Lean_Parser_Level_paren___closed__6_once, _init_l_Lean_Parser_Level_paren___closed__6);
v___x_106_ = l_Lean_Parser_andthen(v___x_105_, v___x_104_);
return v___x_106_;
}
}
static lean_object* _init_l_Lean_Parser_Level_paren___closed__10(void){
_start:
{
lean_object* v___x_107_; lean_object* v___x_108_; lean_object* v___x_109_; 
v___x_107_ = lean_obj_once(&l_Lean_Parser_Level_paren___closed__9, &l_Lean_Parser_Level_paren___closed__9_once, _init_l_Lean_Parser_Level_paren___closed__9);
v___x_108_ = lean_obj_once(&l_Lean_Parser_Level_paren___closed__4, &l_Lean_Parser_Level_paren___closed__4_once, _init_l_Lean_Parser_Level_paren___closed__4);
v___x_109_ = l_Lean_Parser_andthen(v___x_108_, v___x_107_);
return v___x_109_;
}
}
static lean_object* _init_l_Lean_Parser_Level_paren___closed__11(void){
_start:
{
lean_object* v___x_110_; lean_object* v___x_111_; lean_object* v___x_112_; lean_object* v___x_113_; 
v___x_110_ = lean_obj_once(&l_Lean_Parser_Level_paren___closed__10, &l_Lean_Parser_Level_paren___closed__10_once, _init_l_Lean_Parser_Level_paren___closed__10);
v___x_111_ = lean_unsigned_to_nat(1024u);
v___x_112_ = ((lean_object*)(l_Lean_Parser_Level_paren___closed__1));
v___x_113_ = l_Lean_Parser_leadingNode(v___x_112_, v___x_111_, v___x_110_);
return v___x_113_;
}
}
static lean_object* _init_l_Lean_Parser_Level_paren___closed__12(void){
_start:
{
lean_object* v___x_114_; lean_object* v___x_115_; lean_object* v___x_116_; 
v___x_114_ = lean_obj_once(&l_Lean_Parser_Level_paren___closed__11, &l_Lean_Parser_Level_paren___closed__11_once, _init_l_Lean_Parser_Level_paren___closed__11);
v___x_115_ = lean_obj_once(&l_Lean_Parser_Level_paren___closed__2, &l_Lean_Parser_Level_paren___closed__2_once, _init_l_Lean_Parser_Level_paren___closed__2);
v___x_116_ = l_Lean_Parser_withAntiquot(v___x_115_, v___x_114_);
return v___x_116_;
}
}
static lean_object* _init_l_Lean_Parser_Level_paren___closed__13(void){
_start:
{
lean_object* v___x_117_; lean_object* v___x_118_; lean_object* v___x_119_; 
v___x_117_ = lean_obj_once(&l_Lean_Parser_Level_paren___closed__12, &l_Lean_Parser_Level_paren___closed__12_once, _init_l_Lean_Parser_Level_paren___closed__12);
v___x_118_ = ((lean_object*)(l_Lean_Parser_Level_paren___closed__1));
v___x_119_ = l_Lean_Parser_withCache(v___x_118_, v___x_117_);
return v___x_119_;
}
}
static lean_object* _init_l_Lean_Parser_Level_paren(void){
_start:
{
lean_object* v___x_120_; 
v___x_120_ = lean_obj_once(&l_Lean_Parser_Level_paren___closed__13, &l_Lean_Parser_Level_paren___closed__13_once, _init_l_Lean_Parser_Level_paren___closed__13);
return v___x_120_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Level_0__Lean_Parser_Level_paren___regBuiltin_Lean_Parser_Level_paren__1(){
_start:
{
lean_object* v___x_122_; lean_object* v___x_123_; lean_object* v___x_124_; lean_object* v___x_125_; lean_object* v___x_126_; 
v___x_122_ = ((lean_object*)(l_Lean_Parser_levelParser___closed__0));
v___x_123_ = ((lean_object*)(l_Lean_Parser_Level_paren___closed__1));
v___x_124_ = l_Lean_Parser_Level_paren;
v___x_125_ = lean_unsigned_to_nat(1000u);
v___x_126_ = l_Lean_Parser_addBuiltinLeadingParser(v___x_122_, v___x_123_, v___x_124_, v___x_125_);
return v___x_126_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Level_0__Lean_Parser_Level_paren___regBuiltin_Lean_Parser_Level_paren__1___boxed(lean_object* v_a_127_){
_start:
{
lean_object* v_res_128_; 
v_res_128_ = l___private_Lean_Parser_Level_0__Lean_Parser_Level_paren___regBuiltin_Lean_Parser_Level_paren__1();
return v_res_128_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Level_0__Lean_Parser_Level_paren___regBuiltin_Lean_Parser_Level_paren_declRange__3(){
_start:
{
lean_object* v___x_155_; lean_object* v___x_156_; lean_object* v___x_157_; 
v___x_155_ = ((lean_object*)(l_Lean_Parser_Level_paren___closed__1));
v___x_156_ = ((lean_object*)(l___private_Lean_Parser_Level_0__Lean_Parser_Level_paren___regBuiltin_Lean_Parser_Level_paren_declRange__3___closed__6));
v___x_157_ = l_Lean_addBuiltinDeclarationRanges(v___x_155_, v___x_156_);
return v___x_157_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Level_0__Lean_Parser_Level_paren___regBuiltin_Lean_Parser_Level_paren_declRange__3___boxed(lean_object* v_a_158_){
_start:
{
lean_object* v_res_159_; 
v_res_159_ = l___private_Lean_Parser_Level_0__Lean_Parser_Level_paren___regBuiltin_Lean_Parser_Level_paren_declRange__3();
return v_res_159_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_levelParser_formatter___redArg(lean_object* v_a_160_, lean_object* v_a_161_, lean_object* v_a_162_, lean_object* v_a_163_){
_start:
{
lean_object* v___x_165_; lean_object* v___x_166_; 
v___x_165_ = ((lean_object*)(l_Lean_Parser_levelParser___closed__0));
v___x_166_ = l_Lean_PrettyPrinter_Formatter_categoryParser_formatter(v___x_165_, v_a_160_, v_a_161_, v_a_162_, v_a_163_);
return v___x_166_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_levelParser_formatter___redArg___boxed(lean_object* v_a_167_, lean_object* v_a_168_, lean_object* v_a_169_, lean_object* v_a_170_, lean_object* v_a_171_){
_start:
{
lean_object* v_res_172_; 
v_res_172_ = l_Lean_Parser_levelParser_formatter___redArg(v_a_167_, v_a_168_, v_a_169_, v_a_170_);
lean_dec(v_a_170_);
lean_dec_ref(v_a_169_);
lean_dec(v_a_168_);
lean_dec_ref(v_a_167_);
return v_res_172_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_levelParser_formatter(lean_object* v_rbp_173_, lean_object* v_a_174_, lean_object* v_a_175_, lean_object* v_a_176_, lean_object* v_a_177_){
_start:
{
lean_object* v___x_179_; 
v___x_179_ = l_Lean_Parser_levelParser_formatter___redArg(v_a_174_, v_a_175_, v_a_176_, v_a_177_);
return v___x_179_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_levelParser_formatter___boxed(lean_object* v_rbp_180_, lean_object* v_a_181_, lean_object* v_a_182_, lean_object* v_a_183_, lean_object* v_a_184_, lean_object* v_a_185_){
_start:
{
lean_object* v_res_186_; 
v_res_186_ = l_Lean_Parser_levelParser_formatter(v_rbp_180_, v_a_181_, v_a_182_, v_a_183_, v_a_184_);
lean_dec(v_a_184_);
lean_dec_ref(v_a_183_);
lean_dec(v_a_182_);
lean_dec_ref(v_a_181_);
lean_dec(v_rbp_180_);
return v_res_186_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Level_paren_formatter(lean_object* v_a_212_, lean_object* v_a_213_, lean_object* v_a_214_, lean_object* v_a_215_){
_start:
{
lean_object* v___x_217_; lean_object* v___x_218_; lean_object* v___x_219_; 
v___x_217_ = ((lean_object*)(l_Lean_Parser_Level_paren_formatter___closed__0));
v___x_218_ = ((lean_object*)(l_Lean_Parser_Level_paren_formatter___closed__7));
v___x_219_ = l_Lean_PrettyPrinter_Formatter_orelse_formatter(v___x_217_, v___x_218_, v_a_212_, v_a_213_, v_a_214_, v_a_215_);
return v___x_219_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Level_paren_formatter___boxed(lean_object* v_a_220_, lean_object* v_a_221_, lean_object* v_a_222_, lean_object* v_a_223_, lean_object* v_a_224_){
_start:
{
lean_object* v_res_225_; 
v_res_225_ = l_Lean_Parser_Level_paren_formatter(v_a_220_, v_a_221_, v_a_222_, v_a_223_);
lean_dec(v_a_223_);
lean_dec_ref(v_a_222_);
lean_dec(v_a_221_);
lean_dec_ref(v_a_220_);
return v_res_225_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Level_0__Lean_Parser_Level_paren___regBuiltin_Lean_Parser_Level_paren_formatter__9(){
_start:
{
lean_object* v___x_234_; lean_object* v___x_235_; lean_object* v___x_236_; lean_object* v___x_237_; lean_object* v___x_238_; 
v___x_234_ = l_Lean_PrettyPrinter_formatterAttribute;
v___x_235_ = ((lean_object*)(l_Lean_Parser_Level_paren___closed__1));
v___x_236_ = ((lean_object*)(l___private_Lean_Parser_Level_0__Lean_Parser_Level_paren___regBuiltin_Lean_Parser_Level_paren_formatter__9___closed__1));
v___x_237_ = lean_alloc_closure((void*)(l_Lean_Parser_Level_paren_formatter___boxed), 5, 0);
v___x_238_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_234_, v___x_235_, v___x_236_, v___x_237_);
return v___x_238_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Level_0__Lean_Parser_Level_paren___regBuiltin_Lean_Parser_Level_paren_formatter__9___boxed(lean_object* v_a_239_){
_start:
{
lean_object* v_res_240_; 
v_res_240_ = l___private_Lean_Parser_Level_0__Lean_Parser_Level_paren___regBuiltin_Lean_Parser_Level_paren_formatter__9();
return v_res_240_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_levelParser_parenthesizer(lean_object* v_rbp_241_, lean_object* v_a_242_, lean_object* v_a_243_, lean_object* v_a_244_, lean_object* v_a_245_){
_start:
{
lean_object* v___x_247_; lean_object* v___x_248_; 
v___x_247_ = ((lean_object*)(l_Lean_Parser_levelParser___closed__0));
v___x_248_ = l_Lean_PrettyPrinter_Parenthesizer_categoryParser_parenthesizer(v___x_247_, v_rbp_241_, v_a_242_, v_a_243_, v_a_244_, v_a_245_);
return v___x_248_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_levelParser_parenthesizer___boxed(lean_object* v_rbp_249_, lean_object* v_a_250_, lean_object* v_a_251_, lean_object* v_a_252_, lean_object* v_a_253_, lean_object* v_a_254_){
_start:
{
lean_object* v_res_255_; 
v_res_255_ = l_Lean_Parser_levelParser_parenthesizer(v_rbp_249_, v_a_250_, v_a_251_, v_a_252_, v_a_253_);
lean_dec(v_a_253_);
lean_dec_ref(v_a_252_);
lean_dec(v_a_251_);
lean_dec_ref(v_a_250_);
return v_res_255_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Level_paren_parenthesizer(lean_object* v_a_281_, lean_object* v_a_282_, lean_object* v_a_283_, lean_object* v_a_284_){
_start:
{
lean_object* v___x_286_; lean_object* v___x_287_; lean_object* v___x_288_; 
v___x_286_ = ((lean_object*)(l_Lean_Parser_Level_paren_parenthesizer___closed__0));
v___x_287_ = ((lean_object*)(l_Lean_Parser_Level_paren_parenthesizer___closed__7));
v___x_288_ = l_Lean_PrettyPrinter_Parenthesizer_withAntiquot_parenthesizer(v___x_286_, v___x_287_, v_a_281_, v_a_282_, v_a_283_, v_a_284_);
return v___x_288_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Level_paren_parenthesizer___boxed(lean_object* v_a_289_, lean_object* v_a_290_, lean_object* v_a_291_, lean_object* v_a_292_, lean_object* v_a_293_){
_start:
{
lean_object* v_res_294_; 
v_res_294_ = l_Lean_Parser_Level_paren_parenthesizer(v_a_289_, v_a_290_, v_a_291_, v_a_292_);
lean_dec(v_a_292_);
lean_dec_ref(v_a_291_);
lean_dec(v_a_290_);
lean_dec_ref(v_a_289_);
return v_res_294_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Level_0__Lean_Parser_Level_paren___regBuiltin_Lean_Parser_Level_paren_parenthesizer__15(){
_start:
{
lean_object* v___x_303_; lean_object* v___x_304_; lean_object* v___x_305_; lean_object* v___x_306_; lean_object* v___x_307_; 
v___x_303_ = l_Lean_PrettyPrinter_parenthesizerAttribute;
v___x_304_ = ((lean_object*)(l_Lean_Parser_Level_paren___closed__1));
v___x_305_ = ((lean_object*)(l___private_Lean_Parser_Level_0__Lean_Parser_Level_paren___regBuiltin_Lean_Parser_Level_paren_parenthesizer__15___closed__1));
v___x_306_ = lean_alloc_closure((void*)(l_Lean_Parser_Level_paren_parenthesizer___boxed), 5, 0);
v___x_307_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_303_, v___x_304_, v___x_305_, v___x_306_);
return v___x_307_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Level_0__Lean_Parser_Level_paren___regBuiltin_Lean_Parser_Level_paren_parenthesizer__15___boxed(lean_object* v_a_308_){
_start:
{
lean_object* v_res_309_; 
v_res_309_ = l___private_Lean_Parser_Level_0__Lean_Parser_Level_paren___regBuiltin_Lean_Parser_Level_paren_parenthesizer__15();
return v_res_309_;
}
}
static lean_object* _init_l_Lean_Parser_Level_max___closed__2(void){
_start:
{
uint8_t v___x_316_; uint8_t v___x_317_; lean_object* v___x_318_; lean_object* v___x_319_; lean_object* v___x_320_; 
v___x_316_ = 0;
v___x_317_ = 1;
v___x_318_ = ((lean_object*)(l_Lean_Parser_Level_max___closed__1));
v___x_319_ = ((lean_object*)(l_Lean_Parser_Level_max___closed__0));
v___x_320_ = l_Lean_Parser_mkAntiquot(v___x_319_, v___x_318_, v___x_317_, v___x_316_);
return v___x_320_;
}
}
static lean_object* _init_l_Lean_Parser_Level_max___closed__3(void){
_start:
{
uint8_t v___x_321_; lean_object* v___x_322_; lean_object* v___x_323_; 
v___x_321_ = 1;
v___x_322_ = ((lean_object*)(l_Lean_Parser_Level_max___closed__0));
v___x_323_ = l_Lean_Parser_nonReservedSymbol(v___x_322_, v___x_321_);
return v___x_323_;
}
}
static lean_object* _init_l_Lean_Parser_Level_max___closed__4(void){
_start:
{
lean_object* v___x_324_; lean_object* v___x_325_; lean_object* v___x_326_; 
v___x_324_ = l_Lean_Parser_maxPrec;
v___x_325_ = ((lean_object*)(l_Lean_Parser_levelParser___closed__0));
v___x_326_ = l_Lean_Parser_categoryParser(v___x_325_, v___x_324_);
return v___x_326_;
}
}
static lean_object* _init_l_Lean_Parser_Level_max___closed__5(void){
_start:
{
lean_object* v___x_327_; lean_object* v___x_328_; lean_object* v___x_329_; 
v___x_327_ = lean_obj_once(&l_Lean_Parser_Level_max___closed__4, &l_Lean_Parser_Level_max___closed__4_once, _init_l_Lean_Parser_Level_max___closed__4);
v___x_328_ = l_Lean_Parser_skip;
v___x_329_ = l_Lean_Parser_andthen(v___x_328_, v___x_327_);
return v___x_329_;
}
}
static lean_object* _init_l_Lean_Parser_Level_max___closed__6(void){
_start:
{
lean_object* v___x_330_; lean_object* v___x_331_; 
v___x_330_ = lean_obj_once(&l_Lean_Parser_Level_max___closed__5, &l_Lean_Parser_Level_max___closed__5_once, _init_l_Lean_Parser_Level_max___closed__5);
v___x_331_ = l_Lean_Parser_many1(v___x_330_);
return v___x_331_;
}
}
static lean_object* _init_l_Lean_Parser_Level_max___closed__7(void){
_start:
{
lean_object* v___x_332_; lean_object* v___x_333_; lean_object* v___x_334_; 
v___x_332_ = lean_obj_once(&l_Lean_Parser_Level_max___closed__6, &l_Lean_Parser_Level_max___closed__6_once, _init_l_Lean_Parser_Level_max___closed__6);
v___x_333_ = lean_obj_once(&l_Lean_Parser_Level_max___closed__3, &l_Lean_Parser_Level_max___closed__3_once, _init_l_Lean_Parser_Level_max___closed__3);
v___x_334_ = l_Lean_Parser_andthen(v___x_333_, v___x_332_);
return v___x_334_;
}
}
static lean_object* _init_l_Lean_Parser_Level_max___closed__8(void){
_start:
{
lean_object* v___x_335_; lean_object* v___x_336_; lean_object* v___x_337_; lean_object* v___x_338_; 
v___x_335_ = lean_obj_once(&l_Lean_Parser_Level_max___closed__7, &l_Lean_Parser_Level_max___closed__7_once, _init_l_Lean_Parser_Level_max___closed__7);
v___x_336_ = lean_unsigned_to_nat(1024u);
v___x_337_ = ((lean_object*)(l_Lean_Parser_Level_max___closed__1));
v___x_338_ = l_Lean_Parser_leadingNode(v___x_337_, v___x_336_, v___x_335_);
return v___x_338_;
}
}
static lean_object* _init_l_Lean_Parser_Level_max___closed__9(void){
_start:
{
lean_object* v___x_339_; lean_object* v___x_340_; lean_object* v___x_341_; 
v___x_339_ = lean_obj_once(&l_Lean_Parser_Level_max___closed__8, &l_Lean_Parser_Level_max___closed__8_once, _init_l_Lean_Parser_Level_max___closed__8);
v___x_340_ = lean_obj_once(&l_Lean_Parser_Level_max___closed__2, &l_Lean_Parser_Level_max___closed__2_once, _init_l_Lean_Parser_Level_max___closed__2);
v___x_341_ = l_Lean_Parser_withAntiquot(v___x_340_, v___x_339_);
return v___x_341_;
}
}
static lean_object* _init_l_Lean_Parser_Level_max___closed__10(void){
_start:
{
lean_object* v___x_342_; lean_object* v___x_343_; lean_object* v___x_344_; 
v___x_342_ = lean_obj_once(&l_Lean_Parser_Level_max___closed__9, &l_Lean_Parser_Level_max___closed__9_once, _init_l_Lean_Parser_Level_max___closed__9);
v___x_343_ = ((lean_object*)(l_Lean_Parser_Level_max___closed__1));
v___x_344_ = l_Lean_Parser_withCache(v___x_343_, v___x_342_);
return v___x_344_;
}
}
static lean_object* _init_l_Lean_Parser_Level_max(void){
_start:
{
lean_object* v___x_345_; 
v___x_345_ = lean_obj_once(&l_Lean_Parser_Level_max___closed__10, &l_Lean_Parser_Level_max___closed__10_once, _init_l_Lean_Parser_Level_max___closed__10);
return v___x_345_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Level_0__Lean_Parser_Level_max___regBuiltin_Lean_Parser_Level_max__1(){
_start:
{
lean_object* v___x_347_; lean_object* v___x_348_; lean_object* v___x_349_; lean_object* v___x_350_; lean_object* v___x_351_; 
v___x_347_ = ((lean_object*)(l_Lean_Parser_levelParser___closed__0));
v___x_348_ = ((lean_object*)(l_Lean_Parser_Level_max___closed__1));
v___x_349_ = l_Lean_Parser_Level_max;
v___x_350_ = lean_unsigned_to_nat(1000u);
v___x_351_ = l_Lean_Parser_addBuiltinLeadingParser(v___x_347_, v___x_348_, v___x_349_, v___x_350_);
return v___x_351_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Level_0__Lean_Parser_Level_max___regBuiltin_Lean_Parser_Level_max__1___boxed(lean_object* v_a_352_){
_start:
{
lean_object* v_res_353_; 
v_res_353_ = l___private_Lean_Parser_Level_0__Lean_Parser_Level_max___regBuiltin_Lean_Parser_Level_max__1();
return v_res_353_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Level_0__Lean_Parser_Level_max___regBuiltin_Lean_Parser_Level_max_declRange__3(){
_start:
{
lean_object* v___x_380_; lean_object* v___x_381_; lean_object* v___x_382_; 
v___x_380_ = ((lean_object*)(l_Lean_Parser_Level_max___closed__1));
v___x_381_ = ((lean_object*)(l___private_Lean_Parser_Level_0__Lean_Parser_Level_max___regBuiltin_Lean_Parser_Level_max_declRange__3___closed__6));
v___x_382_ = l_Lean_addBuiltinDeclarationRanges(v___x_380_, v___x_381_);
return v___x_382_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Level_0__Lean_Parser_Level_max___regBuiltin_Lean_Parser_Level_max_declRange__3___boxed(lean_object* v_a_383_){
_start:
{
lean_object* v_res_384_; 
v_res_384_ = l___private_Lean_Parser_Level_0__Lean_Parser_Level_max___regBuiltin_Lean_Parser_Level_max_declRange__3();
return v_res_384_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Level_max_formatter___lam__0(lean_object* v___y_385_, lean_object* v___y_386_, lean_object* v___y_387_, lean_object* v___y_388_){
_start:
{
lean_object* v___x_390_; 
v___x_390_ = l_Lean_PrettyPrinter_Formatter_pushLine___redArg(v___y_386_);
return v___x_390_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Level_max_formatter___lam__0___boxed(lean_object* v___y_391_, lean_object* v___y_392_, lean_object* v___y_393_, lean_object* v___y_394_, lean_object* v___y_395_){
_start:
{
lean_object* v_res_396_; 
v_res_396_ = l_Lean_Parser_Level_max_formatter___lam__0(v___y_391_, v___y_392_, v___y_393_, v___y_394_);
lean_dec(v___y_394_);
lean_dec_ref(v___y_393_);
lean_dec(v___y_392_);
lean_dec_ref(v___y_391_);
return v_res_396_;
}
}
static lean_object* _init_l_Lean_Parser_Level_max_formatter___closed__3(void){
_start:
{
lean_object* v___x_409_; lean_object* v___x_410_; 
v___x_409_ = l_Lean_Parser_maxPrec;
v___x_410_ = lean_alloc_closure((void*)(l_Lean_Parser_levelParser_formatter___boxed), 6, 1);
lean_closure_set(v___x_410_, 0, v___x_409_);
return v___x_410_;
}
}
static lean_object* _init_l_Lean_Parser_Level_max_formatter___closed__4(void){
_start:
{
lean_object* v___x_411_; lean_object* v___f_412_; lean_object* v___x_413_; 
v___x_411_ = lean_obj_once(&l_Lean_Parser_Level_max_formatter___closed__3, &l_Lean_Parser_Level_max_formatter___closed__3_once, _init_l_Lean_Parser_Level_max_formatter___closed__3);
v___f_412_ = ((lean_object*)(l_Lean_Parser_Level_max_formatter___closed__0));
v___x_413_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed), 7, 2);
lean_closure_set(v___x_413_, 0, v___f_412_);
lean_closure_set(v___x_413_, 1, v___x_411_);
return v___x_413_;
}
}
static lean_object* _init_l_Lean_Parser_Level_max_formatter___closed__5(void){
_start:
{
lean_object* v___x_414_; lean_object* v___x_415_; 
v___x_414_ = lean_obj_once(&l_Lean_Parser_Level_max_formatter___closed__4, &l_Lean_Parser_Level_max_formatter___closed__4_once, _init_l_Lean_Parser_Level_max_formatter___closed__4);
v___x_415_ = lean_alloc_closure((void*)(l_Lean_Parser_many1_formatter___boxed), 6, 1);
lean_closure_set(v___x_415_, 0, v___x_414_);
return v___x_415_;
}
}
static lean_object* _init_l_Lean_Parser_Level_max_formatter___closed__6(void){
_start:
{
lean_object* v___x_416_; lean_object* v___x_417_; lean_object* v___x_418_; 
v___x_416_ = lean_obj_once(&l_Lean_Parser_Level_max_formatter___closed__5, &l_Lean_Parser_Level_max_formatter___closed__5_once, _init_l_Lean_Parser_Level_max_formatter___closed__5);
v___x_417_ = ((lean_object*)(l_Lean_Parser_Level_max_formatter___closed__2));
v___x_418_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed), 7, 2);
lean_closure_set(v___x_418_, 0, v___x_417_);
lean_closure_set(v___x_418_, 1, v___x_416_);
return v___x_418_;
}
}
static lean_object* _init_l_Lean_Parser_Level_max_formatter___closed__7(void){
_start:
{
lean_object* v___x_419_; lean_object* v___x_420_; lean_object* v___x_421_; lean_object* v___x_422_; 
v___x_419_ = lean_obj_once(&l_Lean_Parser_Level_max_formatter___closed__6, &l_Lean_Parser_Level_max_formatter___closed__6_once, _init_l_Lean_Parser_Level_max_formatter___closed__6);
v___x_420_ = lean_unsigned_to_nat(1024u);
v___x_421_ = ((lean_object*)(l_Lean_Parser_Level_max___closed__1));
v___x_422_ = lean_alloc_closure((void*)(l_Lean_Parser_leadingNode_formatter___boxed), 8, 3);
lean_closure_set(v___x_422_, 0, v___x_421_);
lean_closure_set(v___x_422_, 1, v___x_420_);
lean_closure_set(v___x_422_, 2, v___x_419_);
return v___x_422_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Level_max_formatter(lean_object* v_a_423_, lean_object* v_a_424_, lean_object* v_a_425_, lean_object* v_a_426_){
_start:
{
lean_object* v___x_428_; lean_object* v___x_429_; lean_object* v___x_430_; 
v___x_428_ = ((lean_object*)(l_Lean_Parser_Level_max_formatter___closed__1));
v___x_429_ = lean_obj_once(&l_Lean_Parser_Level_max_formatter___closed__7, &l_Lean_Parser_Level_max_formatter___closed__7_once, _init_l_Lean_Parser_Level_max_formatter___closed__7);
v___x_430_ = l_Lean_PrettyPrinter_Formatter_orelse_formatter(v___x_428_, v___x_429_, v_a_423_, v_a_424_, v_a_425_, v_a_426_);
return v___x_430_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Level_max_formatter___boxed(lean_object* v_a_431_, lean_object* v_a_432_, lean_object* v_a_433_, lean_object* v_a_434_, lean_object* v_a_435_){
_start:
{
lean_object* v_res_436_; 
v_res_436_ = l_Lean_Parser_Level_max_formatter(v_a_431_, v_a_432_, v_a_433_, v_a_434_);
lean_dec(v_a_434_);
lean_dec_ref(v_a_433_);
lean_dec(v_a_432_);
lean_dec_ref(v_a_431_);
return v_res_436_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Level_0__Lean_Parser_Level_max___regBuiltin_Lean_Parser_Level_max_formatter__7(){
_start:
{
lean_object* v___x_444_; lean_object* v___x_445_; lean_object* v___x_446_; lean_object* v___x_447_; lean_object* v___x_448_; 
v___x_444_ = l_Lean_PrettyPrinter_formatterAttribute;
v___x_445_ = ((lean_object*)(l_Lean_Parser_Level_max___closed__1));
v___x_446_ = ((lean_object*)(l___private_Lean_Parser_Level_0__Lean_Parser_Level_max___regBuiltin_Lean_Parser_Level_max_formatter__7___closed__0));
v___x_447_ = lean_alloc_closure((void*)(l_Lean_Parser_Level_max_formatter___boxed), 5, 0);
v___x_448_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_444_, v___x_445_, v___x_446_, v___x_447_);
return v___x_448_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Level_0__Lean_Parser_Level_max___regBuiltin_Lean_Parser_Level_max_formatter__7___boxed(lean_object* v_a_449_){
_start:
{
lean_object* v_res_450_; 
v_res_450_ = l___private_Lean_Parser_Level_0__Lean_Parser_Level_max___regBuiltin_Lean_Parser_Level_max_formatter__7();
return v_res_450_;
}
}
static lean_object* _init_l_Lean_Parser_Level_max_parenthesizer___closed__3(void){
_start:
{
lean_object* v___x_463_; lean_object* v___x_464_; 
v___x_463_ = l_Lean_Parser_maxPrec;
v___x_464_ = lean_alloc_closure((void*)(l_Lean_Parser_levelParser_parenthesizer___boxed), 6, 1);
lean_closure_set(v___x_464_, 0, v___x_463_);
return v___x_464_;
}
}
static lean_object* _init_l_Lean_Parser_Level_max_parenthesizer___closed__4(void){
_start:
{
lean_object* v___x_465_; lean_object* v___x_466_; lean_object* v___x_467_; 
v___x_465_ = lean_obj_once(&l_Lean_Parser_Level_max_parenthesizer___closed__3, &l_Lean_Parser_Level_max_parenthesizer___closed__3_once, _init_l_Lean_Parser_Level_max_parenthesizer___closed__3);
v___x_466_ = ((lean_object*)(l_Lean_Parser_Level_max_parenthesizer___closed__2));
v___x_467_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed), 7, 2);
lean_closure_set(v___x_467_, 0, v___x_466_);
lean_closure_set(v___x_467_, 1, v___x_465_);
return v___x_467_;
}
}
static lean_object* _init_l_Lean_Parser_Level_max_parenthesizer___closed__5(void){
_start:
{
lean_object* v___x_468_; lean_object* v___x_469_; 
v___x_468_ = lean_obj_once(&l_Lean_Parser_Level_max_parenthesizer___closed__4, &l_Lean_Parser_Level_max_parenthesizer___closed__4_once, _init_l_Lean_Parser_Level_max_parenthesizer___closed__4);
v___x_469_ = lean_alloc_closure((void*)(l_Lean_Parser_many1_parenthesizer___boxed), 6, 1);
lean_closure_set(v___x_469_, 0, v___x_468_);
return v___x_469_;
}
}
static lean_object* _init_l_Lean_Parser_Level_max_parenthesizer___closed__6(void){
_start:
{
lean_object* v___x_470_; lean_object* v___x_471_; lean_object* v___x_472_; 
v___x_470_ = lean_obj_once(&l_Lean_Parser_Level_max_parenthesizer___closed__5, &l_Lean_Parser_Level_max_parenthesizer___closed__5_once, _init_l_Lean_Parser_Level_max_parenthesizer___closed__5);
v___x_471_ = ((lean_object*)(l_Lean_Parser_Level_max_parenthesizer___closed__1));
v___x_472_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed), 7, 2);
lean_closure_set(v___x_472_, 0, v___x_471_);
lean_closure_set(v___x_472_, 1, v___x_470_);
return v___x_472_;
}
}
static lean_object* _init_l_Lean_Parser_Level_max_parenthesizer___closed__7(void){
_start:
{
lean_object* v___x_473_; lean_object* v___x_474_; lean_object* v___x_475_; lean_object* v___x_476_; 
v___x_473_ = lean_obj_once(&l_Lean_Parser_Level_max_parenthesizer___closed__6, &l_Lean_Parser_Level_max_parenthesizer___closed__6_once, _init_l_Lean_Parser_Level_max_parenthesizer___closed__6);
v___x_474_ = lean_unsigned_to_nat(1024u);
v___x_475_ = ((lean_object*)(l_Lean_Parser_Level_max___closed__1));
v___x_476_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_leadingNode_parenthesizer___boxed), 8, 3);
lean_closure_set(v___x_476_, 0, v___x_475_);
lean_closure_set(v___x_476_, 1, v___x_474_);
lean_closure_set(v___x_476_, 2, v___x_473_);
return v___x_476_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Level_max_parenthesizer(lean_object* v_a_477_, lean_object* v_a_478_, lean_object* v_a_479_, lean_object* v_a_480_){
_start:
{
lean_object* v___x_482_; lean_object* v___x_483_; lean_object* v___x_484_; 
v___x_482_ = ((lean_object*)(l_Lean_Parser_Level_max_parenthesizer___closed__0));
v___x_483_ = lean_obj_once(&l_Lean_Parser_Level_max_parenthesizer___closed__7, &l_Lean_Parser_Level_max_parenthesizer___closed__7_once, _init_l_Lean_Parser_Level_max_parenthesizer___closed__7);
v___x_484_ = l_Lean_PrettyPrinter_Parenthesizer_withAntiquot_parenthesizer(v___x_482_, v___x_483_, v_a_477_, v_a_478_, v_a_479_, v_a_480_);
return v___x_484_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Level_max_parenthesizer___boxed(lean_object* v_a_485_, lean_object* v_a_486_, lean_object* v_a_487_, lean_object* v_a_488_, lean_object* v_a_489_){
_start:
{
lean_object* v_res_490_; 
v_res_490_ = l_Lean_Parser_Level_max_parenthesizer(v_a_485_, v_a_486_, v_a_487_, v_a_488_);
lean_dec(v_a_488_);
lean_dec_ref(v_a_487_);
lean_dec(v_a_486_);
lean_dec_ref(v_a_485_);
return v_res_490_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Level_0__Lean_Parser_Level_max___regBuiltin_Lean_Parser_Level_max_parenthesizer__11(){
_start:
{
lean_object* v___x_498_; lean_object* v___x_499_; lean_object* v___x_500_; lean_object* v___x_501_; lean_object* v___x_502_; 
v___x_498_ = l_Lean_PrettyPrinter_parenthesizerAttribute;
v___x_499_ = ((lean_object*)(l_Lean_Parser_Level_max___closed__1));
v___x_500_ = ((lean_object*)(l___private_Lean_Parser_Level_0__Lean_Parser_Level_max___regBuiltin_Lean_Parser_Level_max_parenthesizer__11___closed__0));
v___x_501_ = lean_alloc_closure((void*)(l_Lean_Parser_Level_max_parenthesizer___boxed), 5, 0);
v___x_502_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_498_, v___x_499_, v___x_500_, v___x_501_);
return v___x_502_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Level_0__Lean_Parser_Level_max___regBuiltin_Lean_Parser_Level_max_parenthesizer__11___boxed(lean_object* v_a_503_){
_start:
{
lean_object* v_res_504_; 
v_res_504_ = l___private_Lean_Parser_Level_0__Lean_Parser_Level_max___regBuiltin_Lean_Parser_Level_max_parenthesizer__11();
return v_res_504_;
}
}
static lean_object* _init_l_Lean_Parser_Level_imax___closed__2(void){
_start:
{
uint8_t v___x_511_; uint8_t v___x_512_; lean_object* v___x_513_; lean_object* v___x_514_; lean_object* v___x_515_; 
v___x_511_ = 0;
v___x_512_ = 1;
v___x_513_ = ((lean_object*)(l_Lean_Parser_Level_imax___closed__1));
v___x_514_ = ((lean_object*)(l_Lean_Parser_Level_imax___closed__0));
v___x_515_ = l_Lean_Parser_mkAntiquot(v___x_514_, v___x_513_, v___x_512_, v___x_511_);
return v___x_515_;
}
}
static lean_object* _init_l_Lean_Parser_Level_imax___closed__3(void){
_start:
{
uint8_t v___x_516_; lean_object* v___x_517_; lean_object* v___x_518_; 
v___x_516_ = 1;
v___x_517_ = ((lean_object*)(l_Lean_Parser_Level_imax___closed__0));
v___x_518_ = l_Lean_Parser_nonReservedSymbol(v___x_517_, v___x_516_);
return v___x_518_;
}
}
static lean_object* _init_l_Lean_Parser_Level_imax___closed__4(void){
_start:
{
lean_object* v___x_519_; lean_object* v___x_520_; lean_object* v___x_521_; 
v___x_519_ = lean_obj_once(&l_Lean_Parser_Level_max___closed__6, &l_Lean_Parser_Level_max___closed__6_once, _init_l_Lean_Parser_Level_max___closed__6);
v___x_520_ = lean_obj_once(&l_Lean_Parser_Level_imax___closed__3, &l_Lean_Parser_Level_imax___closed__3_once, _init_l_Lean_Parser_Level_imax___closed__3);
v___x_521_ = l_Lean_Parser_andthen(v___x_520_, v___x_519_);
return v___x_521_;
}
}
static lean_object* _init_l_Lean_Parser_Level_imax___closed__5(void){
_start:
{
lean_object* v___x_522_; lean_object* v___x_523_; lean_object* v___x_524_; lean_object* v___x_525_; 
v___x_522_ = lean_obj_once(&l_Lean_Parser_Level_imax___closed__4, &l_Lean_Parser_Level_imax___closed__4_once, _init_l_Lean_Parser_Level_imax___closed__4);
v___x_523_ = lean_unsigned_to_nat(1024u);
v___x_524_ = ((lean_object*)(l_Lean_Parser_Level_imax___closed__1));
v___x_525_ = l_Lean_Parser_leadingNode(v___x_524_, v___x_523_, v___x_522_);
return v___x_525_;
}
}
static lean_object* _init_l_Lean_Parser_Level_imax___closed__6(void){
_start:
{
lean_object* v___x_526_; lean_object* v___x_527_; lean_object* v___x_528_; 
v___x_526_ = lean_obj_once(&l_Lean_Parser_Level_imax___closed__5, &l_Lean_Parser_Level_imax___closed__5_once, _init_l_Lean_Parser_Level_imax___closed__5);
v___x_527_ = lean_obj_once(&l_Lean_Parser_Level_imax___closed__2, &l_Lean_Parser_Level_imax___closed__2_once, _init_l_Lean_Parser_Level_imax___closed__2);
v___x_528_ = l_Lean_Parser_withAntiquot(v___x_527_, v___x_526_);
return v___x_528_;
}
}
static lean_object* _init_l_Lean_Parser_Level_imax___closed__7(void){
_start:
{
lean_object* v___x_529_; lean_object* v___x_530_; lean_object* v___x_531_; 
v___x_529_ = lean_obj_once(&l_Lean_Parser_Level_imax___closed__6, &l_Lean_Parser_Level_imax___closed__6_once, _init_l_Lean_Parser_Level_imax___closed__6);
v___x_530_ = ((lean_object*)(l_Lean_Parser_Level_imax___closed__1));
v___x_531_ = l_Lean_Parser_withCache(v___x_530_, v___x_529_);
return v___x_531_;
}
}
static lean_object* _init_l_Lean_Parser_Level_imax(void){
_start:
{
lean_object* v___x_532_; 
v___x_532_ = lean_obj_once(&l_Lean_Parser_Level_imax___closed__7, &l_Lean_Parser_Level_imax___closed__7_once, _init_l_Lean_Parser_Level_imax___closed__7);
return v___x_532_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Level_0__Lean_Parser_Level_imax___regBuiltin_Lean_Parser_Level_imax__1(){
_start:
{
lean_object* v___x_534_; lean_object* v___x_535_; lean_object* v___x_536_; lean_object* v___x_537_; lean_object* v___x_538_; 
v___x_534_ = ((lean_object*)(l_Lean_Parser_levelParser___closed__0));
v___x_535_ = ((lean_object*)(l_Lean_Parser_Level_imax___closed__1));
v___x_536_ = l_Lean_Parser_Level_imax;
v___x_537_ = lean_unsigned_to_nat(1000u);
v___x_538_ = l_Lean_Parser_addBuiltinLeadingParser(v___x_534_, v___x_535_, v___x_536_, v___x_537_);
return v___x_538_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Level_0__Lean_Parser_Level_imax___regBuiltin_Lean_Parser_Level_imax__1___boxed(lean_object* v_a_539_){
_start:
{
lean_object* v_res_540_; 
v_res_540_ = l___private_Lean_Parser_Level_0__Lean_Parser_Level_imax___regBuiltin_Lean_Parser_Level_imax__1();
return v_res_540_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Level_0__Lean_Parser_Level_imax___regBuiltin_Lean_Parser_Level_imax_declRange__3(){
_start:
{
lean_object* v___x_566_; lean_object* v___x_567_; lean_object* v___x_568_; 
v___x_566_ = ((lean_object*)(l_Lean_Parser_Level_imax___closed__1));
v___x_567_ = ((lean_object*)(l___private_Lean_Parser_Level_0__Lean_Parser_Level_imax___regBuiltin_Lean_Parser_Level_imax_declRange__3___closed__6));
v___x_568_ = l_Lean_addBuiltinDeclarationRanges(v___x_566_, v___x_567_);
return v___x_568_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Level_0__Lean_Parser_Level_imax___regBuiltin_Lean_Parser_Level_imax_declRange__3___boxed(lean_object* v_a_569_){
_start:
{
lean_object* v_res_570_; 
v_res_570_ = l___private_Lean_Parser_Level_0__Lean_Parser_Level_imax___regBuiltin_Lean_Parser_Level_imax_declRange__3();
return v_res_570_;
}
}
static lean_object* _init_l_Lean_Parser_Level_imax_formatter___closed__2(void){
_start:
{
lean_object* v___x_582_; lean_object* v___x_583_; lean_object* v___x_584_; 
v___x_582_ = lean_obj_once(&l_Lean_Parser_Level_max_formatter___closed__5, &l_Lean_Parser_Level_max_formatter___closed__5_once, _init_l_Lean_Parser_Level_max_formatter___closed__5);
v___x_583_ = ((lean_object*)(l_Lean_Parser_Level_imax_formatter___closed__1));
v___x_584_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed), 7, 2);
lean_closure_set(v___x_584_, 0, v___x_583_);
lean_closure_set(v___x_584_, 1, v___x_582_);
return v___x_584_;
}
}
static lean_object* _init_l_Lean_Parser_Level_imax_formatter___closed__3(void){
_start:
{
lean_object* v___x_585_; lean_object* v___x_586_; lean_object* v___x_587_; lean_object* v___x_588_; 
v___x_585_ = lean_obj_once(&l_Lean_Parser_Level_imax_formatter___closed__2, &l_Lean_Parser_Level_imax_formatter___closed__2_once, _init_l_Lean_Parser_Level_imax_formatter___closed__2);
v___x_586_ = lean_unsigned_to_nat(1024u);
v___x_587_ = ((lean_object*)(l_Lean_Parser_Level_imax___closed__1));
v___x_588_ = lean_alloc_closure((void*)(l_Lean_Parser_leadingNode_formatter___boxed), 8, 3);
lean_closure_set(v___x_588_, 0, v___x_587_);
lean_closure_set(v___x_588_, 1, v___x_586_);
lean_closure_set(v___x_588_, 2, v___x_585_);
return v___x_588_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Level_imax_formatter(lean_object* v_a_589_, lean_object* v_a_590_, lean_object* v_a_591_, lean_object* v_a_592_){
_start:
{
lean_object* v___x_594_; lean_object* v___x_595_; lean_object* v___x_596_; 
v___x_594_ = ((lean_object*)(l_Lean_Parser_Level_imax_formatter___closed__0));
v___x_595_ = lean_obj_once(&l_Lean_Parser_Level_imax_formatter___closed__3, &l_Lean_Parser_Level_imax_formatter___closed__3_once, _init_l_Lean_Parser_Level_imax_formatter___closed__3);
v___x_596_ = l_Lean_PrettyPrinter_Formatter_orelse_formatter(v___x_594_, v___x_595_, v_a_589_, v_a_590_, v_a_591_, v_a_592_);
return v___x_596_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Level_imax_formatter___boxed(lean_object* v_a_597_, lean_object* v_a_598_, lean_object* v_a_599_, lean_object* v_a_600_, lean_object* v_a_601_){
_start:
{
lean_object* v_res_602_; 
v_res_602_ = l_Lean_Parser_Level_imax_formatter(v_a_597_, v_a_598_, v_a_599_, v_a_600_);
lean_dec(v_a_600_);
lean_dec_ref(v_a_599_);
lean_dec(v_a_598_);
lean_dec_ref(v_a_597_);
return v_res_602_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Level_0__Lean_Parser_Level_imax___regBuiltin_Lean_Parser_Level_imax_formatter__7(){
_start:
{
lean_object* v___x_610_; lean_object* v___x_611_; lean_object* v___x_612_; lean_object* v___x_613_; lean_object* v___x_614_; 
v___x_610_ = l_Lean_PrettyPrinter_formatterAttribute;
v___x_611_ = ((lean_object*)(l_Lean_Parser_Level_imax___closed__1));
v___x_612_ = ((lean_object*)(l___private_Lean_Parser_Level_0__Lean_Parser_Level_imax___regBuiltin_Lean_Parser_Level_imax_formatter__7___closed__0));
v___x_613_ = lean_alloc_closure((void*)(l_Lean_Parser_Level_imax_formatter___boxed), 5, 0);
v___x_614_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_610_, v___x_611_, v___x_612_, v___x_613_);
return v___x_614_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Level_0__Lean_Parser_Level_imax___regBuiltin_Lean_Parser_Level_imax_formatter__7___boxed(lean_object* v_a_615_){
_start:
{
lean_object* v_res_616_; 
v_res_616_ = l___private_Lean_Parser_Level_0__Lean_Parser_Level_imax___regBuiltin_Lean_Parser_Level_imax_formatter__7();
return v_res_616_;
}
}
static lean_object* _init_l_Lean_Parser_Level_imax_parenthesizer___closed__2(void){
_start:
{
lean_object* v___x_628_; lean_object* v___x_629_; lean_object* v___x_630_; 
v___x_628_ = lean_obj_once(&l_Lean_Parser_Level_max_parenthesizer___closed__5, &l_Lean_Parser_Level_max_parenthesizer___closed__5_once, _init_l_Lean_Parser_Level_max_parenthesizer___closed__5);
v___x_629_ = ((lean_object*)(l_Lean_Parser_Level_imax_parenthesizer___closed__1));
v___x_630_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed), 7, 2);
lean_closure_set(v___x_630_, 0, v___x_629_);
lean_closure_set(v___x_630_, 1, v___x_628_);
return v___x_630_;
}
}
static lean_object* _init_l_Lean_Parser_Level_imax_parenthesizer___closed__3(void){
_start:
{
lean_object* v___x_631_; lean_object* v___x_632_; lean_object* v___x_633_; lean_object* v___x_634_; 
v___x_631_ = lean_obj_once(&l_Lean_Parser_Level_imax_parenthesizer___closed__2, &l_Lean_Parser_Level_imax_parenthesizer___closed__2_once, _init_l_Lean_Parser_Level_imax_parenthesizer___closed__2);
v___x_632_ = lean_unsigned_to_nat(1024u);
v___x_633_ = ((lean_object*)(l_Lean_Parser_Level_imax___closed__1));
v___x_634_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_leadingNode_parenthesizer___boxed), 8, 3);
lean_closure_set(v___x_634_, 0, v___x_633_);
lean_closure_set(v___x_634_, 1, v___x_632_);
lean_closure_set(v___x_634_, 2, v___x_631_);
return v___x_634_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Level_imax_parenthesizer(lean_object* v_a_635_, lean_object* v_a_636_, lean_object* v_a_637_, lean_object* v_a_638_){
_start:
{
lean_object* v___x_640_; lean_object* v___x_641_; lean_object* v___x_642_; 
v___x_640_ = ((lean_object*)(l_Lean_Parser_Level_imax_parenthesizer___closed__0));
v___x_641_ = lean_obj_once(&l_Lean_Parser_Level_imax_parenthesizer___closed__3, &l_Lean_Parser_Level_imax_parenthesizer___closed__3_once, _init_l_Lean_Parser_Level_imax_parenthesizer___closed__3);
v___x_642_ = l_Lean_PrettyPrinter_Parenthesizer_withAntiquot_parenthesizer(v___x_640_, v___x_641_, v_a_635_, v_a_636_, v_a_637_, v_a_638_);
return v___x_642_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Level_imax_parenthesizer___boxed(lean_object* v_a_643_, lean_object* v_a_644_, lean_object* v_a_645_, lean_object* v_a_646_, lean_object* v_a_647_){
_start:
{
lean_object* v_res_648_; 
v_res_648_ = l_Lean_Parser_Level_imax_parenthesizer(v_a_643_, v_a_644_, v_a_645_, v_a_646_);
lean_dec(v_a_646_);
lean_dec_ref(v_a_645_);
lean_dec(v_a_644_);
lean_dec_ref(v_a_643_);
return v_res_648_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Level_0__Lean_Parser_Level_imax___regBuiltin_Lean_Parser_Level_imax_parenthesizer__11(){
_start:
{
lean_object* v___x_656_; lean_object* v___x_657_; lean_object* v___x_658_; lean_object* v___x_659_; lean_object* v___x_660_; 
v___x_656_ = l_Lean_PrettyPrinter_parenthesizerAttribute;
v___x_657_ = ((lean_object*)(l_Lean_Parser_Level_imax___closed__1));
v___x_658_ = ((lean_object*)(l___private_Lean_Parser_Level_0__Lean_Parser_Level_imax___regBuiltin_Lean_Parser_Level_imax_parenthesizer__11___closed__0));
v___x_659_ = lean_alloc_closure((void*)(l_Lean_Parser_Level_imax_parenthesizer___boxed), 5, 0);
v___x_660_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_656_, v___x_657_, v___x_658_, v___x_659_);
return v___x_660_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Level_0__Lean_Parser_Level_imax___regBuiltin_Lean_Parser_Level_imax_parenthesizer__11___boxed(lean_object* v_a_661_){
_start:
{
lean_object* v_res_662_; 
v_res_662_ = l___private_Lean_Parser_Level_0__Lean_Parser_Level_imax___regBuiltin_Lean_Parser_Level_imax_parenthesizer__11();
return v_res_662_;
}
}
static lean_object* _init_l_Lean_Parser_Level_hole___closed__2(void){
_start:
{
uint8_t v___x_669_; uint8_t v___x_670_; lean_object* v___x_671_; lean_object* v___x_672_; lean_object* v___x_673_; 
v___x_669_ = 0;
v___x_670_ = 1;
v___x_671_ = ((lean_object*)(l_Lean_Parser_Level_hole___closed__1));
v___x_672_ = ((lean_object*)(l_Lean_Parser_Level_hole___closed__0));
v___x_673_ = l_Lean_Parser_mkAntiquot(v___x_672_, v___x_671_, v___x_670_, v___x_669_);
return v___x_673_;
}
}
static lean_object* _init_l_Lean_Parser_Level_hole___closed__4(void){
_start:
{
lean_object* v___x_675_; lean_object* v___x_676_; 
v___x_675_ = ((lean_object*)(l_Lean_Parser_Level_hole___closed__3));
v___x_676_ = l_Lean_Parser_symbol(v___x_675_);
return v___x_676_;
}
}
static lean_object* _init_l_Lean_Parser_Level_hole___closed__5(void){
_start:
{
lean_object* v___x_677_; lean_object* v___x_678_; lean_object* v___x_679_; lean_object* v___x_680_; 
v___x_677_ = lean_obj_once(&l_Lean_Parser_Level_hole___closed__4, &l_Lean_Parser_Level_hole___closed__4_once, _init_l_Lean_Parser_Level_hole___closed__4);
v___x_678_ = lean_unsigned_to_nat(1024u);
v___x_679_ = ((lean_object*)(l_Lean_Parser_Level_hole___closed__1));
v___x_680_ = l_Lean_Parser_leadingNode(v___x_679_, v___x_678_, v___x_677_);
return v___x_680_;
}
}
static lean_object* _init_l_Lean_Parser_Level_hole___closed__6(void){
_start:
{
lean_object* v___x_681_; lean_object* v___x_682_; lean_object* v___x_683_; 
v___x_681_ = lean_obj_once(&l_Lean_Parser_Level_hole___closed__5, &l_Lean_Parser_Level_hole___closed__5_once, _init_l_Lean_Parser_Level_hole___closed__5);
v___x_682_ = lean_obj_once(&l_Lean_Parser_Level_hole___closed__2, &l_Lean_Parser_Level_hole___closed__2_once, _init_l_Lean_Parser_Level_hole___closed__2);
v___x_683_ = l_Lean_Parser_withAntiquot(v___x_682_, v___x_681_);
return v___x_683_;
}
}
static lean_object* _init_l_Lean_Parser_Level_hole___closed__7(void){
_start:
{
lean_object* v___x_684_; lean_object* v___x_685_; lean_object* v___x_686_; 
v___x_684_ = lean_obj_once(&l_Lean_Parser_Level_hole___closed__6, &l_Lean_Parser_Level_hole___closed__6_once, _init_l_Lean_Parser_Level_hole___closed__6);
v___x_685_ = ((lean_object*)(l_Lean_Parser_Level_hole___closed__1));
v___x_686_ = l_Lean_Parser_withCache(v___x_685_, v___x_684_);
return v___x_686_;
}
}
static lean_object* _init_l_Lean_Parser_Level_hole(void){
_start:
{
lean_object* v___x_687_; 
v___x_687_ = lean_obj_once(&l_Lean_Parser_Level_hole___closed__7, &l_Lean_Parser_Level_hole___closed__7_once, _init_l_Lean_Parser_Level_hole___closed__7);
return v___x_687_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Level_0__Lean_Parser_Level_hole___regBuiltin_Lean_Parser_Level_hole__1(){
_start:
{
lean_object* v___x_689_; lean_object* v___x_690_; lean_object* v___x_691_; lean_object* v___x_692_; lean_object* v___x_693_; 
v___x_689_ = ((lean_object*)(l_Lean_Parser_levelParser___closed__0));
v___x_690_ = ((lean_object*)(l_Lean_Parser_Level_hole___closed__1));
v___x_691_ = l_Lean_Parser_Level_hole;
v___x_692_ = lean_unsigned_to_nat(1000u);
v___x_693_ = l_Lean_Parser_addBuiltinLeadingParser(v___x_689_, v___x_690_, v___x_691_, v___x_692_);
return v___x_693_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Level_0__Lean_Parser_Level_hole___regBuiltin_Lean_Parser_Level_hole__1___boxed(lean_object* v_a_694_){
_start:
{
lean_object* v_res_695_; 
v_res_695_ = l___private_Lean_Parser_Level_0__Lean_Parser_Level_hole___regBuiltin_Lean_Parser_Level_hole__1();
return v_res_695_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Level_0__Lean_Parser_Level_hole___regBuiltin_Lean_Parser_Level_hole_declRange__3(){
_start:
{
lean_object* v___x_722_; lean_object* v___x_723_; lean_object* v___x_724_; 
v___x_722_ = ((lean_object*)(l_Lean_Parser_Level_hole___closed__1));
v___x_723_ = ((lean_object*)(l___private_Lean_Parser_Level_0__Lean_Parser_Level_hole___regBuiltin_Lean_Parser_Level_hole_declRange__3___closed__6));
v___x_724_ = l_Lean_addBuiltinDeclarationRanges(v___x_722_, v___x_723_);
return v___x_724_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Level_0__Lean_Parser_Level_hole___regBuiltin_Lean_Parser_Level_hole_declRange__3___boxed(lean_object* v_a_725_){
_start:
{
lean_object* v_res_726_; 
v_res_726_ = l___private_Lean_Parser_Level_0__Lean_Parser_Level_hole___regBuiltin_Lean_Parser_Level_hole_declRange__3();
return v_res_726_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Level_hole_formatter(lean_object* v_a_740_, lean_object* v_a_741_, lean_object* v_a_742_, lean_object* v_a_743_){
_start:
{
lean_object* v___x_745_; lean_object* v___x_746_; lean_object* v___x_747_; 
v___x_745_ = ((lean_object*)(l_Lean_Parser_Level_hole_formatter___closed__0));
v___x_746_ = ((lean_object*)(l_Lean_Parser_Level_hole_formatter___closed__2));
v___x_747_ = l_Lean_PrettyPrinter_Formatter_orelse_formatter(v___x_745_, v___x_746_, v_a_740_, v_a_741_, v_a_742_, v_a_743_);
return v___x_747_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Level_hole_formatter___boxed(lean_object* v_a_748_, lean_object* v_a_749_, lean_object* v_a_750_, lean_object* v_a_751_, lean_object* v_a_752_){
_start:
{
lean_object* v_res_753_; 
v_res_753_ = l_Lean_Parser_Level_hole_formatter(v_a_748_, v_a_749_, v_a_750_, v_a_751_);
lean_dec(v_a_751_);
lean_dec_ref(v_a_750_);
lean_dec(v_a_749_);
lean_dec_ref(v_a_748_);
return v_res_753_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Level_0__Lean_Parser_Level_hole___regBuiltin_Lean_Parser_Level_hole_formatter__7(){
_start:
{
lean_object* v___x_761_; lean_object* v___x_762_; lean_object* v___x_763_; lean_object* v___x_764_; lean_object* v___x_765_; 
v___x_761_ = l_Lean_PrettyPrinter_formatterAttribute;
v___x_762_ = ((lean_object*)(l_Lean_Parser_Level_hole___closed__1));
v___x_763_ = ((lean_object*)(l___private_Lean_Parser_Level_0__Lean_Parser_Level_hole___regBuiltin_Lean_Parser_Level_hole_formatter__7___closed__0));
v___x_764_ = lean_alloc_closure((void*)(l_Lean_Parser_Level_hole_formatter___boxed), 5, 0);
v___x_765_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_761_, v___x_762_, v___x_763_, v___x_764_);
return v___x_765_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Level_0__Lean_Parser_Level_hole___regBuiltin_Lean_Parser_Level_hole_formatter__7___boxed(lean_object* v_a_766_){
_start:
{
lean_object* v_res_767_; 
v_res_767_ = l___private_Lean_Parser_Level_0__Lean_Parser_Level_hole___regBuiltin_Lean_Parser_Level_hole_formatter__7();
return v_res_767_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Level_hole_parenthesizer(lean_object* v_a_781_, lean_object* v_a_782_, lean_object* v_a_783_, lean_object* v_a_784_){
_start:
{
lean_object* v___x_786_; lean_object* v___x_787_; lean_object* v___x_788_; 
v___x_786_ = ((lean_object*)(l_Lean_Parser_Level_hole_parenthesizer___closed__0));
v___x_787_ = ((lean_object*)(l_Lean_Parser_Level_hole_parenthesizer___closed__2));
v___x_788_ = l_Lean_PrettyPrinter_Parenthesizer_withAntiquot_parenthesizer(v___x_786_, v___x_787_, v_a_781_, v_a_782_, v_a_783_, v_a_784_);
return v___x_788_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Level_hole_parenthesizer___boxed(lean_object* v_a_789_, lean_object* v_a_790_, lean_object* v_a_791_, lean_object* v_a_792_, lean_object* v_a_793_){
_start:
{
lean_object* v_res_794_; 
v_res_794_ = l_Lean_Parser_Level_hole_parenthesizer(v_a_789_, v_a_790_, v_a_791_, v_a_792_);
lean_dec(v_a_792_);
lean_dec_ref(v_a_791_);
lean_dec(v_a_790_);
lean_dec_ref(v_a_789_);
return v_res_794_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Level_0__Lean_Parser_Level_hole___regBuiltin_Lean_Parser_Level_hole_parenthesizer__11(){
_start:
{
lean_object* v___x_802_; lean_object* v___x_803_; lean_object* v___x_804_; lean_object* v___x_805_; lean_object* v___x_806_; 
v___x_802_ = l_Lean_PrettyPrinter_parenthesizerAttribute;
v___x_803_ = ((lean_object*)(l_Lean_Parser_Level_hole___closed__1));
v___x_804_ = ((lean_object*)(l___private_Lean_Parser_Level_0__Lean_Parser_Level_hole___regBuiltin_Lean_Parser_Level_hole_parenthesizer__11___closed__0));
v___x_805_ = lean_alloc_closure((void*)(l_Lean_Parser_Level_hole_parenthesizer___boxed), 5, 0);
v___x_806_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_802_, v___x_803_, v___x_804_, v___x_805_);
return v___x_806_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Level_0__Lean_Parser_Level_hole___regBuiltin_Lean_Parser_Level_hole_parenthesizer__11___boxed(lean_object* v_a_807_){
_start:
{
lean_object* v_res_808_; 
v_res_808_ = l___private_Lean_Parser_Level_0__Lean_Parser_Level_hole___regBuiltin_Lean_Parser_Level_hole_parenthesizer__11();
return v_res_808_;
}
}
static lean_object* _init_l_Lean_Parser_Level_num___closed__0(void){
_start:
{
lean_object* v___x_809_; lean_object* v___x_810_; 
v___x_809_ = l_Lean_Parser_maxPrec;
v___x_810_ = l_Lean_Parser_checkPrec(v___x_809_);
return v___x_810_;
}
}
static lean_object* _init_l_Lean_Parser_Level_num___closed__1(void){
_start:
{
lean_object* v___x_811_; lean_object* v___x_812_; lean_object* v___x_813_; 
v___x_811_ = l_Lean_Parser_numLit;
v___x_812_ = lean_obj_once(&l_Lean_Parser_Level_num___closed__0, &l_Lean_Parser_Level_num___closed__0_once, _init_l_Lean_Parser_Level_num___closed__0);
v___x_813_ = l_Lean_Parser_andthen(v___x_812_, v___x_811_);
return v___x_813_;
}
}
static lean_object* _init_l_Lean_Parser_Level_num(void){
_start:
{
lean_object* v___x_814_; 
v___x_814_ = lean_obj_once(&l_Lean_Parser_Level_num___closed__1, &l_Lean_Parser_Level_num___closed__1_once, _init_l_Lean_Parser_Level_num___closed__1);
return v___x_814_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Level_0__Lean_Parser_Level_num___regBuiltin_Lean_Parser_Level_num__1(){
_start:
{
lean_object* v___x_822_; lean_object* v___x_823_; lean_object* v___x_824_; lean_object* v___x_825_; lean_object* v___x_826_; 
v___x_822_ = ((lean_object*)(l_Lean_Parser_levelParser___closed__0));
v___x_823_ = ((lean_object*)(l___private_Lean_Parser_Level_0__Lean_Parser_Level_num___regBuiltin_Lean_Parser_Level_num__1___closed__1));
v___x_824_ = l_Lean_Parser_Level_num;
v___x_825_ = lean_unsigned_to_nat(1000u);
v___x_826_ = l_Lean_Parser_addBuiltinLeadingParser(v___x_822_, v___x_823_, v___x_824_, v___x_825_);
return v___x_826_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Level_0__Lean_Parser_Level_num___regBuiltin_Lean_Parser_Level_num__1___boxed(lean_object* v_a_827_){
_start:
{
lean_object* v_res_828_; 
v_res_828_ = l___private_Lean_Parser_Level_0__Lean_Parser_Level_num___regBuiltin_Lean_Parser_Level_num__1();
return v_res_828_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Level_0__Lean_Parser_Level_num___regBuiltin_Lean_Parser_Level_num_declRange__3(){
_start:
{
lean_object* v___x_853_; lean_object* v___x_854_; lean_object* v___x_855_; 
v___x_853_ = ((lean_object*)(l___private_Lean_Parser_Level_0__Lean_Parser_Level_num___regBuiltin_Lean_Parser_Level_num__1___closed__1));
v___x_854_ = ((lean_object*)(l___private_Lean_Parser_Level_0__Lean_Parser_Level_num___regBuiltin_Lean_Parser_Level_num_declRange__3___closed__6));
v___x_855_ = l_Lean_addBuiltinDeclarationRanges(v___x_853_, v___x_854_);
return v___x_855_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Level_0__Lean_Parser_Level_num___regBuiltin_Lean_Parser_Level_num_declRange__3___boxed(lean_object* v_a_856_){
_start:
{
lean_object* v_res_857_; 
v_res_857_ = l___private_Lean_Parser_Level_0__Lean_Parser_Level_num___regBuiltin_Lean_Parser_Level_num_declRange__3();
return v_res_857_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Level_num_formatter(lean_object* v_a_859_, lean_object* v_a_860_, lean_object* v_a_861_, lean_object* v_a_862_){
_start:
{
lean_object* v___x_864_; lean_object* v___x_865_; lean_object* v___x_866_; 
v___x_864_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_checkPrec_formatter___boxed), 5, 0);
v___x_865_ = ((lean_object*)(l_Lean_Parser_Level_num_formatter___closed__0));
v___x_866_ = l_Lean_PrettyPrinter_Formatter_andthen_formatter(v___x_864_, v___x_865_, v_a_859_, v_a_860_, v_a_861_, v_a_862_);
return v___x_866_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Level_num_formatter___boxed(lean_object* v_a_867_, lean_object* v_a_868_, lean_object* v_a_869_, lean_object* v_a_870_, lean_object* v_a_871_){
_start:
{
lean_object* v_res_872_; 
v_res_872_ = l_Lean_Parser_Level_num_formatter(v_a_867_, v_a_868_, v_a_869_, v_a_870_);
lean_dec(v_a_870_);
lean_dec_ref(v_a_869_);
lean_dec(v_a_868_);
lean_dec_ref(v_a_867_);
return v_res_872_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Level_num_parenthesizer___lam__0(lean_object* v___x_873_, lean_object* v___y_874_, lean_object* v___y_875_, lean_object* v___y_876_, lean_object* v___y_877_){
_start:
{
lean_object* v___x_879_; 
v___x_879_ = l_Lean_PrettyPrinter_Parenthesizer_addPrecCheck___redArg(v___x_873_, v___y_875_);
return v___x_879_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Level_num_parenthesizer___lam__0___boxed(lean_object* v___x_880_, lean_object* v___y_881_, lean_object* v___y_882_, lean_object* v___y_883_, lean_object* v___y_884_, lean_object* v___y_885_){
_start:
{
lean_object* v_res_886_; 
v_res_886_ = l_Lean_Parser_Level_num_parenthesizer___lam__0(v___x_880_, v___y_881_, v___y_882_, v___y_883_, v___y_884_);
lean_dec(v___y_884_);
lean_dec_ref(v___y_883_);
lean_dec(v___y_882_);
lean_dec_ref(v___y_881_);
return v_res_886_;
}
}
static lean_object* _init_l_Lean_Parser_Level_num_parenthesizer___closed__0(void){
_start:
{
lean_object* v___x_887_; lean_object* v___f_888_; 
v___x_887_ = l_Lean_Parser_maxPrec;
v___f_888_ = lean_alloc_closure((void*)(l_Lean_Parser_Level_num_parenthesizer___lam__0___boxed), 6, 1);
lean_closure_set(v___f_888_, 0, v___x_887_);
return v___f_888_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Level_num_parenthesizer(lean_object* v_a_890_, lean_object* v_a_891_, lean_object* v_a_892_, lean_object* v_a_893_){
_start:
{
lean_object* v___f_895_; lean_object* v___x_896_; lean_object* v___x_897_; 
v___f_895_ = lean_obj_once(&l_Lean_Parser_Level_num_parenthesizer___closed__0, &l_Lean_Parser_Level_num_parenthesizer___closed__0_once, _init_l_Lean_Parser_Level_num_parenthesizer___closed__0);
v___x_896_ = ((lean_object*)(l_Lean_Parser_Level_num_parenthesizer___closed__1));
v___x_897_ = l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer(v___f_895_, v___x_896_, v_a_890_, v_a_891_, v_a_892_, v_a_893_);
return v___x_897_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Level_num_parenthesizer___boxed(lean_object* v_a_898_, lean_object* v_a_899_, lean_object* v_a_900_, lean_object* v_a_901_, lean_object* v_a_902_){
_start:
{
lean_object* v_res_903_; 
v_res_903_ = l_Lean_Parser_Level_num_parenthesizer(v_a_898_, v_a_899_, v_a_900_, v_a_901_);
lean_dec(v_a_901_);
lean_dec_ref(v_a_900_);
lean_dec(v_a_899_);
lean_dec_ref(v_a_898_);
return v_res_903_;
}
}
static lean_object* _init_l_Lean_Parser_Level_ident___closed__0(void){
_start:
{
lean_object* v___x_904_; lean_object* v___x_905_; lean_object* v___x_906_; 
v___x_904_ = l_Lean_Parser_ident;
v___x_905_ = lean_obj_once(&l_Lean_Parser_Level_num___closed__0, &l_Lean_Parser_Level_num___closed__0_once, _init_l_Lean_Parser_Level_num___closed__0);
v___x_906_ = l_Lean_Parser_andthen(v___x_905_, v___x_904_);
return v___x_906_;
}
}
static lean_object* _init_l_Lean_Parser_Level_ident(void){
_start:
{
lean_object* v___x_907_; 
v___x_907_ = lean_obj_once(&l_Lean_Parser_Level_ident___closed__0, &l_Lean_Parser_Level_ident___closed__0_once, _init_l_Lean_Parser_Level_ident___closed__0);
return v___x_907_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Level_0__Lean_Parser_Level_ident___regBuiltin_Lean_Parser_Level_ident__1(){
_start:
{
lean_object* v___x_915_; lean_object* v___x_916_; lean_object* v___x_917_; lean_object* v___x_918_; lean_object* v___x_919_; 
v___x_915_ = ((lean_object*)(l_Lean_Parser_levelParser___closed__0));
v___x_916_ = ((lean_object*)(l___private_Lean_Parser_Level_0__Lean_Parser_Level_ident___regBuiltin_Lean_Parser_Level_ident__1___closed__1));
v___x_917_ = l_Lean_Parser_Level_ident;
v___x_918_ = lean_unsigned_to_nat(1000u);
v___x_919_ = l_Lean_Parser_addBuiltinLeadingParser(v___x_915_, v___x_916_, v___x_917_, v___x_918_);
return v___x_919_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Level_0__Lean_Parser_Level_ident___regBuiltin_Lean_Parser_Level_ident__1___boxed(lean_object* v_a_920_){
_start:
{
lean_object* v_res_921_; 
v_res_921_ = l___private_Lean_Parser_Level_0__Lean_Parser_Level_ident___regBuiltin_Lean_Parser_Level_ident__1();
return v_res_921_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Level_0__Lean_Parser_Level_ident___regBuiltin_Lean_Parser_Level_ident_declRange__3(){
_start:
{
lean_object* v___x_948_; lean_object* v___x_949_; lean_object* v___x_950_; 
v___x_948_ = ((lean_object*)(l___private_Lean_Parser_Level_0__Lean_Parser_Level_ident___regBuiltin_Lean_Parser_Level_ident__1___closed__1));
v___x_949_ = ((lean_object*)(l___private_Lean_Parser_Level_0__Lean_Parser_Level_ident___regBuiltin_Lean_Parser_Level_ident_declRange__3___closed__6));
v___x_950_ = l_Lean_addBuiltinDeclarationRanges(v___x_948_, v___x_949_);
return v___x_950_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Level_0__Lean_Parser_Level_ident___regBuiltin_Lean_Parser_Level_ident_declRange__3___boxed(lean_object* v_a_951_){
_start:
{
lean_object* v_res_952_; 
v_res_952_ = l___private_Lean_Parser_Level_0__Lean_Parser_Level_ident___regBuiltin_Lean_Parser_Level_ident_declRange__3();
return v_res_952_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Level_ident_formatter(lean_object* v_a_954_, lean_object* v_a_955_, lean_object* v_a_956_, lean_object* v_a_957_){
_start:
{
lean_object* v___x_959_; lean_object* v___x_960_; lean_object* v___x_961_; 
v___x_959_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_checkPrec_formatter___boxed), 5, 0);
v___x_960_ = ((lean_object*)(l_Lean_Parser_Level_ident_formatter___closed__0));
v___x_961_ = l_Lean_PrettyPrinter_Formatter_andthen_formatter(v___x_959_, v___x_960_, v_a_954_, v_a_955_, v_a_956_, v_a_957_);
return v___x_961_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Level_ident_formatter___boxed(lean_object* v_a_962_, lean_object* v_a_963_, lean_object* v_a_964_, lean_object* v_a_965_, lean_object* v_a_966_){
_start:
{
lean_object* v_res_967_; 
v_res_967_ = l_Lean_Parser_Level_ident_formatter(v_a_962_, v_a_963_, v_a_964_, v_a_965_);
lean_dec(v_a_965_);
lean_dec_ref(v_a_964_);
lean_dec(v_a_963_);
lean_dec_ref(v_a_962_);
return v_res_967_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Level_ident_parenthesizer(lean_object* v_a_969_, lean_object* v_a_970_, lean_object* v_a_971_, lean_object* v_a_972_){
_start:
{
lean_object* v___f_974_; lean_object* v___x_975_; lean_object* v___x_976_; 
v___f_974_ = lean_obj_once(&l_Lean_Parser_Level_num_parenthesizer___closed__0, &l_Lean_Parser_Level_num_parenthesizer___closed__0_once, _init_l_Lean_Parser_Level_num_parenthesizer___closed__0);
v___x_975_ = ((lean_object*)(l_Lean_Parser_Level_ident_parenthesizer___closed__0));
v___x_976_ = l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer(v___f_974_, v___x_975_, v_a_969_, v_a_970_, v_a_971_, v_a_972_);
return v___x_976_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Level_ident_parenthesizer___boxed(lean_object* v_a_977_, lean_object* v_a_978_, lean_object* v_a_979_, lean_object* v_a_980_, lean_object* v_a_981_){
_start:
{
lean_object* v_res_982_; 
v_res_982_ = l_Lean_Parser_Level_ident_parenthesizer(v_a_977_, v_a_978_, v_a_979_, v_a_980_);
lean_dec(v_a_980_);
lean_dec_ref(v_a_979_);
lean_dec(v_a_978_);
lean_dec_ref(v_a_977_);
return v_res_982_;
}
}
static lean_object* _init_l_Lean_Parser_Level_addLit___closed__3(void){
_start:
{
lean_object* v___x_990_; lean_object* v___x_991_; 
v___x_990_ = ((lean_object*)(l_Lean_Parser_Level_addLit___closed__2));
v___x_991_ = l_Lean_Parser_symbol(v___x_990_);
return v___x_991_;
}
}
static lean_object* _init_l_Lean_Parser_Level_addLit___closed__4(void){
_start:
{
lean_object* v___x_992_; lean_object* v___x_993_; lean_object* v___x_994_; 
v___x_992_ = l_Lean_Parser_numLit;
v___x_993_ = lean_obj_once(&l_Lean_Parser_Level_addLit___closed__3, &l_Lean_Parser_Level_addLit___closed__3_once, _init_l_Lean_Parser_Level_addLit___closed__3);
v___x_994_ = l_Lean_Parser_andthen(v___x_993_, v___x_992_);
return v___x_994_;
}
}
static lean_object* _init_l_Lean_Parser_Level_addLit___closed__5(void){
_start:
{
lean_object* v___x_995_; lean_object* v___x_996_; lean_object* v___x_997_; lean_object* v___x_998_; lean_object* v___x_999_; 
v___x_995_ = lean_obj_once(&l_Lean_Parser_Level_addLit___closed__4, &l_Lean_Parser_Level_addLit___closed__4_once, _init_l_Lean_Parser_Level_addLit___closed__4);
v___x_996_ = lean_unsigned_to_nat(0u);
v___x_997_ = lean_unsigned_to_nat(65u);
v___x_998_ = ((lean_object*)(l_Lean_Parser_Level_addLit___closed__1));
v___x_999_ = l_Lean_Parser_trailingNode(v___x_998_, v___x_997_, v___x_996_, v___x_995_);
return v___x_999_;
}
}
static lean_object* _init_l_Lean_Parser_Level_addLit(void){
_start:
{
lean_object* v___x_1000_; 
v___x_1000_ = lean_obj_once(&l_Lean_Parser_Level_addLit___closed__5, &l_Lean_Parser_Level_addLit___closed__5_once, _init_l_Lean_Parser_Level_addLit___closed__5);
return v___x_1000_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Level_0__Lean_Parser_Level_addLit___regBuiltin_Lean_Parser_Level_addLit__1(){
_start:
{
lean_object* v___x_1002_; lean_object* v___x_1003_; lean_object* v___x_1004_; lean_object* v___x_1005_; lean_object* v___x_1006_; 
v___x_1002_ = ((lean_object*)(l_Lean_Parser_levelParser___closed__0));
v___x_1003_ = ((lean_object*)(l_Lean_Parser_Level_addLit___closed__1));
v___x_1004_ = l_Lean_Parser_Level_addLit;
v___x_1005_ = lean_unsigned_to_nat(1000u);
v___x_1006_ = l_Lean_Parser_addBuiltinTrailingParser(v___x_1002_, v___x_1003_, v___x_1004_, v___x_1005_);
return v___x_1006_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Level_0__Lean_Parser_Level_addLit___regBuiltin_Lean_Parser_Level_addLit__1___boxed(lean_object* v_a_1007_){
_start:
{
lean_object* v_res_1008_; 
v_res_1008_ = l___private_Lean_Parser_Level_0__Lean_Parser_Level_addLit___regBuiltin_Lean_Parser_Level_addLit__1();
return v_res_1008_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Level_0__Lean_Parser_Level_addLit___regBuiltin_Lean_Parser_Level_addLit_declRange__3(){
_start:
{
lean_object* v___x_1035_; lean_object* v___x_1036_; lean_object* v___x_1037_; 
v___x_1035_ = ((lean_object*)(l_Lean_Parser_Level_addLit___closed__1));
v___x_1036_ = ((lean_object*)(l___private_Lean_Parser_Level_0__Lean_Parser_Level_addLit___regBuiltin_Lean_Parser_Level_addLit_declRange__3___closed__6));
v___x_1037_ = l_Lean_addBuiltinDeclarationRanges(v___x_1035_, v___x_1036_);
return v___x_1037_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Level_0__Lean_Parser_Level_addLit___regBuiltin_Lean_Parser_Level_addLit_declRange__3___boxed(lean_object* v_a_1038_){
_start:
{
lean_object* v_res_1039_; 
v_res_1039_ = l___private_Lean_Parser_Level_0__Lean_Parser_Level_addLit___regBuiltin_Lean_Parser_Level_addLit_declRange__3();
return v_res_1039_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Level_addLit_formatter(lean_object* v_a_1045_, lean_object* v_a_1046_, lean_object* v_a_1047_, lean_object* v_a_1048_){
_start:
{
lean_object* v___x_1050_; lean_object* v___x_1051_; lean_object* v___x_1052_; 
v___x_1050_ = ((lean_object*)(l_Lean_Parser_Level_addLit___closed__1));
v___x_1051_ = ((lean_object*)(l_Lean_Parser_Level_addLit_formatter___closed__1));
v___x_1052_ = l_Lean_PrettyPrinter_Formatter_trailingNode_formatter___redArg(v___x_1050_, v___x_1051_, v_a_1045_, v_a_1046_, v_a_1047_, v_a_1048_);
return v___x_1052_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Level_addLit_formatter___boxed(lean_object* v_a_1053_, lean_object* v_a_1054_, lean_object* v_a_1055_, lean_object* v_a_1056_, lean_object* v_a_1057_){
_start:
{
lean_object* v_res_1058_; 
v_res_1058_ = l_Lean_Parser_Level_addLit_formatter(v_a_1053_, v_a_1054_, v_a_1055_, v_a_1056_);
lean_dec(v_a_1056_);
lean_dec_ref(v_a_1055_);
lean_dec(v_a_1054_);
lean_dec_ref(v_a_1053_);
return v_res_1058_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Level_0__Lean_Parser_Level_addLit___regBuiltin_Lean_Parser_Level_addLit_formatter__7(){
_start:
{
lean_object* v___x_1066_; lean_object* v___x_1067_; lean_object* v___x_1068_; lean_object* v___x_1069_; lean_object* v___x_1070_; 
v___x_1066_ = l_Lean_PrettyPrinter_formatterAttribute;
v___x_1067_ = ((lean_object*)(l_Lean_Parser_Level_addLit___closed__1));
v___x_1068_ = ((lean_object*)(l___private_Lean_Parser_Level_0__Lean_Parser_Level_addLit___regBuiltin_Lean_Parser_Level_addLit_formatter__7___closed__0));
v___x_1069_ = lean_alloc_closure((void*)(l_Lean_Parser_Level_addLit_formatter___boxed), 5, 0);
v___x_1070_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_1066_, v___x_1067_, v___x_1068_, v___x_1069_);
return v___x_1070_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Level_0__Lean_Parser_Level_addLit___regBuiltin_Lean_Parser_Level_addLit_formatter__7___boxed(lean_object* v_a_1071_){
_start:
{
lean_object* v_res_1072_; 
v_res_1072_ = l___private_Lean_Parser_Level_0__Lean_Parser_Level_addLit___regBuiltin_Lean_Parser_Level_addLit_formatter__7();
return v_res_1072_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Level_addLit_parenthesizer(lean_object* v_a_1078_, lean_object* v_a_1079_, lean_object* v_a_1080_, lean_object* v_a_1081_){
_start:
{
lean_object* v___x_1083_; lean_object* v___x_1084_; lean_object* v___x_1085_; lean_object* v___x_1086_; lean_object* v___x_1087_; 
v___x_1083_ = ((lean_object*)(l_Lean_Parser_Level_addLit___closed__1));
v___x_1084_ = lean_unsigned_to_nat(65u);
v___x_1085_ = lean_unsigned_to_nat(0u);
v___x_1086_ = ((lean_object*)(l_Lean_Parser_Level_addLit_parenthesizer___closed__1));
v___x_1087_ = l_Lean_PrettyPrinter_Parenthesizer_trailingNode_parenthesizer(v___x_1083_, v___x_1084_, v___x_1085_, v___x_1086_, v_a_1078_, v_a_1079_, v_a_1080_, v_a_1081_);
return v___x_1087_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Level_addLit_parenthesizer___boxed(lean_object* v_a_1088_, lean_object* v_a_1089_, lean_object* v_a_1090_, lean_object* v_a_1091_, lean_object* v_a_1092_){
_start:
{
lean_object* v_res_1093_; 
v_res_1093_ = l_Lean_Parser_Level_addLit_parenthesizer(v_a_1088_, v_a_1089_, v_a_1090_, v_a_1091_);
lean_dec(v_a_1091_);
lean_dec_ref(v_a_1090_);
lean_dec(v_a_1089_);
lean_dec_ref(v_a_1088_);
return v_res_1093_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Level_0__Lean_Parser_Level_addLit___regBuiltin_Lean_Parser_Level_addLit_parenthesizer__11(){
_start:
{
lean_object* v___x_1101_; lean_object* v___x_1102_; lean_object* v___x_1103_; lean_object* v___x_1104_; lean_object* v___x_1105_; 
v___x_1101_ = l_Lean_PrettyPrinter_parenthesizerAttribute;
v___x_1102_ = ((lean_object*)(l_Lean_Parser_Level_addLit___closed__1));
v___x_1103_ = ((lean_object*)(l___private_Lean_Parser_Level_0__Lean_Parser_Level_addLit___regBuiltin_Lean_Parser_Level_addLit_parenthesizer__11___closed__0));
v___x_1104_ = lean_alloc_closure((void*)(l_Lean_Parser_Level_addLit_parenthesizer___boxed), 5, 0);
v___x_1105_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_1101_, v___x_1102_, v___x_1103_, v___x_1104_);
return v___x_1105_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Level_0__Lean_Parser_Level_addLit___regBuiltin_Lean_Parser_Level_addLit_parenthesizer__11___boxed(lean_object* v_a_1106_){
_start:
{
lean_object* v_res_1107_; 
v_res_1107_ = l___private_Lean_Parser_Level_0__Lean_Parser_Level_addLit___regBuiltin_Lean_Parser_Level_addLit_parenthesizer__11();
return v_res_1107_;
}
}
lean_object* runtime_initialize_Lean_Parser_Extra(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Parser_Level(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Parser_Extra(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Level_0__Lean_Parser_initFn_00___x40_Lean_Parser_Level_2271617841____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Parser_Level_paren = _init_l_Lean_Parser_Level_paren();
lean_mark_persistent(l_Lean_Parser_Level_paren);
res = l___private_Lean_Parser_Level_0__Lean_Parser_Level_paren___regBuiltin_Lean_Parser_Level_paren__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Level_0__Lean_Parser_Level_paren___regBuiltin_Lean_Parser_Level_paren_declRange__3();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Level_0__Lean_Parser_Level_paren___regBuiltin_Lean_Parser_Level_paren_formatter__9();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Level_0__Lean_Parser_Level_paren___regBuiltin_Lean_Parser_Level_paren_parenthesizer__15();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Parser_Level_max = _init_l_Lean_Parser_Level_max();
lean_mark_persistent(l_Lean_Parser_Level_max);
res = l___private_Lean_Parser_Level_0__Lean_Parser_Level_max___regBuiltin_Lean_Parser_Level_max__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Level_0__Lean_Parser_Level_max___regBuiltin_Lean_Parser_Level_max_declRange__3();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Level_0__Lean_Parser_Level_max___regBuiltin_Lean_Parser_Level_max_formatter__7();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Level_0__Lean_Parser_Level_max___regBuiltin_Lean_Parser_Level_max_parenthesizer__11();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Parser_Level_imax = _init_l_Lean_Parser_Level_imax();
lean_mark_persistent(l_Lean_Parser_Level_imax);
res = l___private_Lean_Parser_Level_0__Lean_Parser_Level_imax___regBuiltin_Lean_Parser_Level_imax__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Level_0__Lean_Parser_Level_imax___regBuiltin_Lean_Parser_Level_imax_declRange__3();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Level_0__Lean_Parser_Level_imax___regBuiltin_Lean_Parser_Level_imax_formatter__7();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Level_0__Lean_Parser_Level_imax___regBuiltin_Lean_Parser_Level_imax_parenthesizer__11();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Parser_Level_hole = _init_l_Lean_Parser_Level_hole();
lean_mark_persistent(l_Lean_Parser_Level_hole);
res = l___private_Lean_Parser_Level_0__Lean_Parser_Level_hole___regBuiltin_Lean_Parser_Level_hole__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Level_0__Lean_Parser_Level_hole___regBuiltin_Lean_Parser_Level_hole_declRange__3();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Level_0__Lean_Parser_Level_hole___regBuiltin_Lean_Parser_Level_hole_formatter__7();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Level_0__Lean_Parser_Level_hole___regBuiltin_Lean_Parser_Level_hole_parenthesizer__11();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Parser_Level_num = _init_l_Lean_Parser_Level_num();
lean_mark_persistent(l_Lean_Parser_Level_num);
res = l___private_Lean_Parser_Level_0__Lean_Parser_Level_num___regBuiltin_Lean_Parser_Level_num__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Level_0__Lean_Parser_Level_num___regBuiltin_Lean_Parser_Level_num_declRange__3();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Parser_Level_ident = _init_l_Lean_Parser_Level_ident();
lean_mark_persistent(l_Lean_Parser_Level_ident);
res = l___private_Lean_Parser_Level_0__Lean_Parser_Level_ident___regBuiltin_Lean_Parser_Level_ident__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Level_0__Lean_Parser_Level_ident___regBuiltin_Lean_Parser_Level_ident_declRange__3();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Parser_Level_addLit = _init_l_Lean_Parser_Level_addLit();
lean_mark_persistent(l_Lean_Parser_Level_addLit);
res = l___private_Lean_Parser_Level_0__Lean_Parser_Level_addLit___regBuiltin_Lean_Parser_Level_addLit__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Level_0__Lean_Parser_Level_addLit___regBuiltin_Lean_Parser_Level_addLit_declRange__3();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Level_0__Lean_Parser_Level_addLit___regBuiltin_Lean_Parser_Level_addLit_formatter__7();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Level_0__Lean_Parser_Level_addLit___regBuiltin_Lean_Parser_Level_addLit_parenthesizer__11();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Parser_Level(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Parser_Extra(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Parser_Level(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Parser_Extra(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Parser_Level(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Parser_Level(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Parser_Level(builtin);
}
#ifdef __cplusplus
}
#endif

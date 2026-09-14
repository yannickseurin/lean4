// Lean compiler output
// Module: Lean.Parser.Attr
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
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_mkAntiquot_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addBuiltinDeclarationRanges(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Parser_strLit;
lean_object* l_Lean_Parser_nonReservedSymbol(lean_object*, uint8_t);
lean_object* l_Lean_Parser_optional(lean_object*);
lean_object* l_Lean_Parser_andthen(lean_object*, lean_object*);
extern lean_object* l_Lean_Parser_skip;
extern lean_object* l_Lean_Parser_ident;
lean_object* l_Lean_Parser_leadingNode(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_mkAntiquot(lean_object*, lean_object*, uint8_t, uint8_t);
lean_object* l_Lean_Parser_withAntiquot(lean_object*, lean_object*);
lean_object* l_Lean_Parser_ident_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_pushLine___redArg(lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_many1_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_symbol_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Parser_numLit;
lean_object* l_Lean_Parser_withCache(lean_object*, lean_object*);
extern lean_object* l_Lean_PrettyPrinter_formatterAttribute;
lean_object* l_Lean_Parser_leadingNode_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_orelse_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Parser_categoryParser(lean_object*, lean_object*);
lean_object* l_Lean_Parser_symbol(lean_object*);
lean_object* l_Lean_Parser_mkAntiquot_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_ident_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_symbol_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_leadingNode_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_withAntiquot_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_ppSpace_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_optional_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_categoryParser_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_orelse_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_strLit_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_nonReservedSymbol_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_optional_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_many_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_many1(lean_object*);
lean_object* l_Lean_Parser_addBuiltinLeadingParser(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
extern lean_object* l_Lean_PrettyPrinter_parenthesizerAttribute;
lean_object* l_Lean_PrettyPrinter_Parenthesizer_categoryParser_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_orelse_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_nonReservedSymbol_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_orelse(lean_object*, lean_object*);
lean_object* l_Lean_Parser_many(lean_object*);
lean_object* l_Lean_addBuiltinDocString(lean_object*, lean_object*);
extern lean_object* l_Lean_Parser_maxPrec;
lean_object* l_Lean_PrettyPrinter_Parenthesizer_addPrecCheck___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Parser_numLit_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_numLit_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_strLit_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_checkPrec_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_andthen_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_many1_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_many_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_registerBuiltinParserAttribute(lean_object*, lean_object*, uint8_t, lean_object*);
lean_object* l_Lean_Parser_registerBuiltinDynamicParserAttribute(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_checkPrec(lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__0_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "builtin_prio_parser"};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__0_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__0_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__1_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__0_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(14, 62, 206, 117, 66, 228, 175, 129)}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__1_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__1_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__4_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Category"};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__4_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__4_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__5_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "prio"};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__5_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__5_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__6_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__6_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__6_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__6_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__6_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value_aux_1),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__4_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(36, 45, 52, 71, 90, 26, 52, 161)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__6_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__6_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value_aux_2),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__5_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(17, 107, 2, 165, 49, 177, 197, 179)}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__6_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__6_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__7_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__7_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__8_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__8_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__8_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__9_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__9_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__10_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__10_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__11_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__11_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__12_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Attr"};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__12_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__12_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__13_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__13_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__14_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__14_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__15_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__15_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__16_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__16_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__17_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "initFn"};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__17_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__17_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__18_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__18_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__19_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_@"};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__19_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__19_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__20_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__20_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__21_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__21_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__22_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__22_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__23_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__23_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__24_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__24_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__25_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "_hygCtx"};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__25_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__25_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__26_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__26_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__27_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "_hyg"};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__27_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__27_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__28_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__28_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__29_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__29_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__30_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "prio_parser"};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__30_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__30_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__31_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__30_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(101, 192, 223, 117, 127, 39, 55, 31)}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__31_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__31_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__32_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__5_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(122, 247, 65, 238, 243, 154, 137, 247)}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__32_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__32_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_initFn_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_initFn_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2____boxed(lean_object*);
static const lean_string_object l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__0_00___x40_Lean_Parser_Attr_249558774____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "builtin_attr_parser"};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__0_00___x40_Lean_Parser_Attr_249558774____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__0_00___x40_Lean_Parser_Attr_249558774____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__1_00___x40_Lean_Parser_Attr_249558774____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__0_00___x40_Lean_Parser_Attr_249558774____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(106, 71, 13, 255, 49, 148, 157, 196)}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__1_00___x40_Lean_Parser_Attr_249558774____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__1_00___x40_Lean_Parser_Attr_249558774____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Attr_249558774____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "attr"};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Attr_249558774____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Attr_249558774____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Attr_249558774____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Attr_249558774____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Attr_249558774____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Attr_249558774____hygCtx___hyg_2__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Attr_249558774____hygCtx___hyg_2__value_aux_1),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__4_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(36, 45, 52, 71, 90, 26, 52, 161)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Attr_249558774____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Attr_249558774____hygCtx___hyg_2__value_aux_2),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Attr_249558774____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(6, 185, 156, 91, 160, 100, 34, 125)}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Attr_249558774____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Attr_249558774____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__4_00___x40_Lean_Parser_Attr_249558774____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__4_00___x40_Lean_Parser_Attr_249558774____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__5_00___x40_Lean_Parser_Attr_249558774____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__5_00___x40_Lean_Parser_Attr_249558774____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__6_00___x40_Lean_Parser_Attr_249558774____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__6_00___x40_Lean_Parser_Attr_249558774____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__7_00___x40_Lean_Parser_Attr_249558774____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__7_00___x40_Lean_Parser_Attr_249558774____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__8_00___x40_Lean_Parser_Attr_249558774____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "attr_parser"};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__8_00___x40_Lean_Parser_Attr_249558774____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__8_00___x40_Lean_Parser_Attr_249558774____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__9_00___x40_Lean_Parser_Attr_249558774____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__8_00___x40_Lean_Parser_Attr_249558774____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(165, 118, 202, 56, 176, 36, 29, 40)}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__9_00___x40_Lean_Parser_Attr_249558774____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__9_00___x40_Lean_Parser_Attr_249558774____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__10_00___x40_Lean_Parser_Attr_249558774____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Attr_249558774____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(69, 57, 207, 35, 177, 108, 73, 87)}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__10_00___x40_Lean_Parser_Attr_249558774____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__10_00___x40_Lean_Parser_Attr_249558774____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_initFn_00___x40_Lean_Parser_Attr_249558774____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_initFn_00___x40_Lean_Parser_Attr_249558774____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_priorityParser(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_attrParser(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_priorityParser_formatter___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_priorityParser_formatter___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_priorityParser_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_priorityParser_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_priorityParser_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_priorityParser_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_attrParser_formatter___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_attrParser_formatter___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_attrParser_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_attrParser_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_attrParser_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_attrParser_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Parser_Priority_numPrio___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Priority_numPrio___closed__0;
static lean_once_cell_t l_Lean_Parser_Priority_numPrio___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Priority_numPrio___closed__1;
LEAN_EXPORT lean_object* l_Lean_Parser_Priority_numPrio;
static const lean_string_object l___private_Lean_Parser_Attr_0__Lean_Parser_Priority_numPrio___regBuiltin_Lean_Parser_Priority_numPrio__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Priority"};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Priority_numPrio___regBuiltin_Lean_Parser_Priority_numPrio__1___closed__0 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Priority_numPrio___regBuiltin_Lean_Parser_Priority_numPrio__1___closed__0_value;
static const lean_string_object l___private_Lean_Parser_Attr_0__Lean_Parser_Priority_numPrio___regBuiltin_Lean_Parser_Priority_numPrio__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "numPrio"};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Priority_numPrio___regBuiltin_Lean_Parser_Priority_numPrio__1___closed__1 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Priority_numPrio___regBuiltin_Lean_Parser_Priority_numPrio__1___closed__1_value;
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Priority_numPrio___regBuiltin_Lean_Parser_Priority_numPrio__1___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Priority_numPrio___regBuiltin_Lean_Parser_Priority_numPrio__1___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Priority_numPrio___regBuiltin_Lean_Parser_Priority_numPrio__1___closed__2_value_aux_0),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Priority_numPrio___regBuiltin_Lean_Parser_Priority_numPrio__1___closed__2_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Priority_numPrio___regBuiltin_Lean_Parser_Priority_numPrio__1___closed__2_value_aux_1),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Priority_numPrio___regBuiltin_Lean_Parser_Priority_numPrio__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(51, 3, 140, 143, 23, 192, 98, 73)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Priority_numPrio___regBuiltin_Lean_Parser_Priority_numPrio__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Priority_numPrio___regBuiltin_Lean_Parser_Priority_numPrio__1___closed__2_value_aux_2),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Priority_numPrio___regBuiltin_Lean_Parser_Priority_numPrio__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(62, 56, 13, 47, 63, 33, 83, 156)}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Priority_numPrio___regBuiltin_Lean_Parser_Priority_numPrio__1___closed__2 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Priority_numPrio___regBuiltin_Lean_Parser_Priority_numPrio__1___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Priority_numPrio___regBuiltin_Lean_Parser_Priority_numPrio__1();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Priority_numPrio___regBuiltin_Lean_Parser_Priority_numPrio__1___boxed(lean_object*);
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Priority_numPrio___regBuiltin_Lean_Parser_Priority_numPrio_declRange__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(30) << 1) | 1)),((lean_object*)(((size_t)(23) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Priority_numPrio___regBuiltin_Lean_Parser_Priority_numPrio_declRange__3___closed__0 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Priority_numPrio___regBuiltin_Lean_Parser_Priority_numPrio_declRange__3___closed__0_value;
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Priority_numPrio___regBuiltin_Lean_Parser_Priority_numPrio_declRange__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(30) << 1) | 1)),((lean_object*)(((size_t)(66) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Priority_numPrio___regBuiltin_Lean_Parser_Priority_numPrio_declRange__3___closed__1 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Priority_numPrio___regBuiltin_Lean_Parser_Priority_numPrio_declRange__3___closed__1_value;
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Priority_numPrio___regBuiltin_Lean_Parser_Priority_numPrio_declRange__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Priority_numPrio___regBuiltin_Lean_Parser_Priority_numPrio_declRange__3___closed__0_value),((lean_object*)(((size_t)(23) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Priority_numPrio___regBuiltin_Lean_Parser_Priority_numPrio_declRange__3___closed__1_value),((lean_object*)(((size_t)(66) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Priority_numPrio___regBuiltin_Lean_Parser_Priority_numPrio_declRange__3___closed__2 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Priority_numPrio___regBuiltin_Lean_Parser_Priority_numPrio_declRange__3___closed__2_value;
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Priority_numPrio___regBuiltin_Lean_Parser_Priority_numPrio_declRange__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(30) << 1) | 1)),((lean_object*)(((size_t)(27) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Priority_numPrio___regBuiltin_Lean_Parser_Priority_numPrio_declRange__3___closed__3 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Priority_numPrio___regBuiltin_Lean_Parser_Priority_numPrio_declRange__3___closed__3_value;
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Priority_numPrio___regBuiltin_Lean_Parser_Priority_numPrio_declRange__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(30) << 1) | 1)),((lean_object*)(((size_t)(34) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Priority_numPrio___regBuiltin_Lean_Parser_Priority_numPrio_declRange__3___closed__4 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Priority_numPrio___regBuiltin_Lean_Parser_Priority_numPrio_declRange__3___closed__4_value;
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Priority_numPrio___regBuiltin_Lean_Parser_Priority_numPrio_declRange__3___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Priority_numPrio___regBuiltin_Lean_Parser_Priority_numPrio_declRange__3___closed__3_value),((lean_object*)(((size_t)(27) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Priority_numPrio___regBuiltin_Lean_Parser_Priority_numPrio_declRange__3___closed__4_value),((lean_object*)(((size_t)(34) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Priority_numPrio___regBuiltin_Lean_Parser_Priority_numPrio_declRange__3___closed__5 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Priority_numPrio___regBuiltin_Lean_Parser_Priority_numPrio_declRange__3___closed__5_value;
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Priority_numPrio___regBuiltin_Lean_Parser_Priority_numPrio_declRange__3___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Priority_numPrio___regBuiltin_Lean_Parser_Priority_numPrio_declRange__3___closed__2_value),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Priority_numPrio___regBuiltin_Lean_Parser_Priority_numPrio_declRange__3___closed__5_value)}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Priority_numPrio___regBuiltin_Lean_Parser_Priority_numPrio_declRange__3___closed__6 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Priority_numPrio___regBuiltin_Lean_Parser_Priority_numPrio_declRange__3___closed__6_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Priority_numPrio___regBuiltin_Lean_Parser_Priority_numPrio_declRange__3();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Priority_numPrio___regBuiltin_Lean_Parser_Priority_numPrio_declRange__3___boxed(lean_object*);
static const lean_closure_object l_Lean_Parser_Priority_numPrio_formatter___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_numLit_formatter___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Parser_Priority_numPrio_formatter___closed__0 = (const lean_object*)&l_Lean_Parser_Priority_numPrio_formatter___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Parser_Priority_numPrio_formatter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Priority_numPrio_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Priority_numPrio_parenthesizer___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Priority_numPrio_parenthesizer___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Parser_Priority_numPrio_parenthesizer___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Priority_numPrio_parenthesizer___closed__0;
static const lean_closure_object l_Lean_Parser_Priority_numPrio_parenthesizer___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_numLit_parenthesizer___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Parser_Priority_numPrio_parenthesizer___closed__1 = (const lean_object*)&l_Lean_Parser_Priority_numPrio_parenthesizer___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Parser_Priority_numPrio_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Priority_numPrio_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Parser_Attr_simple___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "simple"};
static const lean_object* l_Lean_Parser_Attr_simple___closed__0 = (const lean_object*)&l_Lean_Parser_Attr_simple___closed__0_value;
static const lean_ctor_object l_Lean_Parser_Attr_simple___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_Attr_simple___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_simple___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_Attr_simple___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_simple___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__12_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l_Lean_Parser_Attr_simple___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_simple___closed__1_value_aux_2),((lean_object*)&l_Lean_Parser_Attr_simple___closed__0_value),LEAN_SCALAR_PTR_LITERAL(107, 67, 254, 234, 65, 174, 209, 53)}};
static const lean_object* l_Lean_Parser_Attr_simple___closed__1 = (const lean_object*)&l_Lean_Parser_Attr_simple___closed__1_value;
static lean_once_cell_t l_Lean_Parser_Attr_simple___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_simple___closed__2;
static lean_once_cell_t l_Lean_Parser_Attr_simple___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_simple___closed__3;
static lean_once_cell_t l_Lean_Parser_Attr_simple___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_simple___closed__4;
static lean_once_cell_t l_Lean_Parser_Attr_simple___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_simple___closed__5;
static lean_once_cell_t l_Lean_Parser_Attr_simple___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_simple___closed__6;
static lean_once_cell_t l_Lean_Parser_Attr_simple___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_simple___closed__7;
static lean_once_cell_t l_Lean_Parser_Attr_simple___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_simple___closed__8;
static lean_once_cell_t l_Lean_Parser_Attr_simple___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_simple___closed__9;
static lean_once_cell_t l_Lean_Parser_Attr_simple___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_simple___closed__10;
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_simple;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple__1();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple__1___boxed(lean_object*);
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_declRange__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(36) << 1) | 1)),((lean_object*)(((size_t)(23) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_declRange__3___closed__0 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_declRange__3___closed__0_value;
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_declRange__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(36) << 1) | 1)),((lean_object*)(((size_t)(113) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_declRange__3___closed__1 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_declRange__3___closed__1_value;
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_declRange__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_declRange__3___closed__0_value),((lean_object*)(((size_t)(23) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_declRange__3___closed__1_value),((lean_object*)(((size_t)(113) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_declRange__3___closed__2 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_declRange__3___closed__2_value;
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_declRange__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(36) << 1) | 1)),((lean_object*)(((size_t)(27) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_declRange__3___closed__3 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_declRange__3___closed__3_value;
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_declRange__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(36) << 1) | 1)),((lean_object*)(((size_t)(33) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_declRange__3___closed__4 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_declRange__3___closed__4_value;
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_declRange__3___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_declRange__3___closed__3_value),((lean_object*)(((size_t)(27) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_declRange__3___closed__4_value),((lean_object*)(((size_t)(33) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_declRange__3___closed__5 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_declRange__3___closed__5_value;
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_declRange__3___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_declRange__3___closed__2_value),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_declRange__3___closed__5_value)}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_declRange__3___closed__6 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_declRange__3___closed__6_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_declRange__3();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_declRange__3___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_simple_formatter___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_simple_formatter___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Parser_Attr_simple_formatter___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_Attr_simple_formatter___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Parser_Attr_simple_formatter___closed__0 = (const lean_object*)&l_Lean_Parser_Attr_simple_formatter___closed__0_value;
static const lean_closure_object l_Lean_Parser_Attr_simple_formatter___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_mkAntiquot_formatter___boxed, .m_arity = 9, .m_num_fixed = 4, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_simple___closed__0_value),((lean_object*)&l_Lean_Parser_Attr_simple___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Parser_Attr_simple_formatter___closed__1 = (const lean_object*)&l_Lean_Parser_Attr_simple_formatter___closed__1_value;
static const lean_closure_object l_Lean_Parser_Attr_simple_formatter___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_ident_formatter___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Parser_Attr_simple_formatter___closed__2 = (const lean_object*)&l_Lean_Parser_Attr_simple_formatter___closed__2_value;
static const lean_closure_object l_Lean_Parser_Attr_simple_formatter___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_priorityParser_formatter___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Parser_Attr_simple_formatter___closed__3 = (const lean_object*)&l_Lean_Parser_Attr_simple_formatter___closed__3_value;
static const lean_closure_object l_Lean_Parser_Attr_simple_formatter___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Formatter_orelse_formatter___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_simple_formatter___closed__3_value),((lean_object*)&l_Lean_Parser_Attr_simple_formatter___closed__2_value)} };
static const lean_object* l_Lean_Parser_Attr_simple_formatter___closed__4 = (const lean_object*)&l_Lean_Parser_Attr_simple_formatter___closed__4_value;
static const lean_closure_object l_Lean_Parser_Attr_simple_formatter___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_simple_formatter___closed__0_value),((lean_object*)&l_Lean_Parser_Attr_simple_formatter___closed__4_value)} };
static const lean_object* l_Lean_Parser_Attr_simple_formatter___closed__5 = (const lean_object*)&l_Lean_Parser_Attr_simple_formatter___closed__5_value;
static const lean_closure_object l_Lean_Parser_Attr_simple_formatter___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_optional_formatter___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_simple_formatter___closed__5_value)} };
static const lean_object* l_Lean_Parser_Attr_simple_formatter___closed__6 = (const lean_object*)&l_Lean_Parser_Attr_simple_formatter___closed__6_value;
static const lean_closure_object l_Lean_Parser_Attr_simple_formatter___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_simple_formatter___closed__2_value),((lean_object*)&l_Lean_Parser_Attr_simple_formatter___closed__6_value)} };
static const lean_object* l_Lean_Parser_Attr_simple_formatter___closed__7 = (const lean_object*)&l_Lean_Parser_Attr_simple_formatter___closed__7_value;
static const lean_closure_object l_Lean_Parser_Attr_simple_formatter___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_leadingNode_formatter___boxed, .m_arity = 8, .m_num_fixed = 3, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_simple___closed__1_value),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)&l_Lean_Parser_Attr_simple_formatter___closed__7_value)} };
static const lean_object* l_Lean_Parser_Attr_simple_formatter___closed__8 = (const lean_object*)&l_Lean_Parser_Attr_simple_formatter___closed__8_value;
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_simple_formatter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_simple_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_formatter__7___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "formatter"};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_formatter__7___closed__0 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_formatter__7___closed__0_value;
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_formatter__7___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_formatter__7___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_formatter__7___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_formatter__7___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_formatter__7___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__12_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_formatter__7___closed__1_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_formatter__7___closed__1_value_aux_2),((lean_object*)&l_Lean_Parser_Attr_simple___closed__0_value),LEAN_SCALAR_PTR_LITERAL(107, 67, 254, 234, 65, 174, 209, 53)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_formatter__7___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_formatter__7___closed__1_value_aux_3),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_formatter__7___closed__0_value),LEAN_SCALAR_PTR_LITERAL(142, 229, 191, 246, 47, 244, 239, 84)}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_formatter__7___closed__1 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_formatter__7___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_formatter__7();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_formatter__7___boxed(lean_object*);
static const lean_closure_object l_Lean_Parser_Attr_simple_parenthesizer___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_mkAntiquot_parenthesizer___boxed, .m_arity = 9, .m_num_fixed = 4, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_simple___closed__0_value),((lean_object*)&l_Lean_Parser_Attr_simple___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Parser_Attr_simple_parenthesizer___closed__0 = (const lean_object*)&l_Lean_Parser_Attr_simple_parenthesizer___closed__0_value;
static const lean_closure_object l_Lean_Parser_Attr_simple_parenthesizer___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_ident_parenthesizer___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Parser_Attr_simple_parenthesizer___closed__1 = (const lean_object*)&l_Lean_Parser_Attr_simple_parenthesizer___closed__1_value;
static const lean_closure_object l_Lean_Parser_Attr_simple_parenthesizer___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_ppSpace_parenthesizer___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Parser_Attr_simple_parenthesizer___closed__2 = (const lean_object*)&l_Lean_Parser_Attr_simple_parenthesizer___closed__2_value;
static const lean_closure_object l_Lean_Parser_Attr_simple_parenthesizer___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_priorityParser_parenthesizer___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Parser_Attr_simple_parenthesizer___closed__3 = (const lean_object*)&l_Lean_Parser_Attr_simple_parenthesizer___closed__3_value;
static const lean_closure_object l_Lean_Parser_Attr_simple_parenthesizer___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Parenthesizer_orelse_parenthesizer___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_simple_parenthesizer___closed__3_value),((lean_object*)&l_Lean_Parser_Attr_simple_parenthesizer___closed__1_value)} };
static const lean_object* l_Lean_Parser_Attr_simple_parenthesizer___closed__4 = (const lean_object*)&l_Lean_Parser_Attr_simple_parenthesizer___closed__4_value;
static const lean_closure_object l_Lean_Parser_Attr_simple_parenthesizer___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_simple_parenthesizer___closed__2_value),((lean_object*)&l_Lean_Parser_Attr_simple_parenthesizer___closed__4_value)} };
static const lean_object* l_Lean_Parser_Attr_simple_parenthesizer___closed__5 = (const lean_object*)&l_Lean_Parser_Attr_simple_parenthesizer___closed__5_value;
static const lean_closure_object l_Lean_Parser_Attr_simple_parenthesizer___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_optional_parenthesizer___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_simple_parenthesizer___closed__5_value)} };
static const lean_object* l_Lean_Parser_Attr_simple_parenthesizer___closed__6 = (const lean_object*)&l_Lean_Parser_Attr_simple_parenthesizer___closed__6_value;
static const lean_closure_object l_Lean_Parser_Attr_simple_parenthesizer___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_simple_parenthesizer___closed__1_value),((lean_object*)&l_Lean_Parser_Attr_simple_parenthesizer___closed__6_value)} };
static const lean_object* l_Lean_Parser_Attr_simple_parenthesizer___closed__7 = (const lean_object*)&l_Lean_Parser_Attr_simple_parenthesizer___closed__7_value;
static const lean_closure_object l_Lean_Parser_Attr_simple_parenthesizer___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Parenthesizer_leadingNode_parenthesizer___boxed, .m_arity = 8, .m_num_fixed = 3, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_simple___closed__1_value),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)&l_Lean_Parser_Attr_simple_parenthesizer___closed__7_value)} };
static const lean_object* l_Lean_Parser_Attr_simple_parenthesizer___closed__8 = (const lean_object*)&l_Lean_Parser_Attr_simple_parenthesizer___closed__8_value;
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_simple_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_simple_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_parenthesizer__11___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "parenthesizer"};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_parenthesizer__11___closed__0 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_parenthesizer__11___closed__0_value;
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_parenthesizer__11___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_parenthesizer__11___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_parenthesizer__11___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_parenthesizer__11___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_parenthesizer__11___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__12_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_parenthesizer__11___closed__1_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_parenthesizer__11___closed__1_value_aux_2),((lean_object*)&l_Lean_Parser_Attr_simple___closed__0_value),LEAN_SCALAR_PTR_LITERAL(107, 67, 254, 234, 65, 174, 209, 53)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_parenthesizer__11___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_parenthesizer__11___closed__1_value_aux_3),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_parenthesizer__11___closed__0_value),LEAN_SCALAR_PTR_LITERAL(194, 123, 213, 83, 58, 188, 82, 100)}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_parenthesizer__11___closed__1 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_parenthesizer__11___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_parenthesizer__11();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_parenthesizer__11___boxed(lean_object*);
static const lean_string_object l_Lean_Parser_Attr_macro___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "macro"};
static const lean_object* l_Lean_Parser_Attr_macro___closed__0 = (const lean_object*)&l_Lean_Parser_Attr_macro___closed__0_value;
static const lean_ctor_object l_Lean_Parser_Attr_macro___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_Attr_macro___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_macro___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_Attr_macro___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_macro___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__12_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l_Lean_Parser_Attr_macro___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_macro___closed__1_value_aux_2),((lean_object*)&l_Lean_Parser_Attr_macro___closed__0_value),LEAN_SCALAR_PTR_LITERAL(17, 202, 70, 6, 8, 133, 137, 74)}};
static const lean_object* l_Lean_Parser_Attr_macro___closed__1 = (const lean_object*)&l_Lean_Parser_Attr_macro___closed__1_value;
static lean_once_cell_t l_Lean_Parser_Attr_macro___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_macro___closed__2;
static const lean_string_object l_Lean_Parser_Attr_macro___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "macro "};
static const lean_object* l_Lean_Parser_Attr_macro___closed__3 = (const lean_object*)&l_Lean_Parser_Attr_macro___closed__3_value;
static lean_once_cell_t l_Lean_Parser_Attr_macro___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_macro___closed__4;
static lean_once_cell_t l_Lean_Parser_Attr_macro___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_macro___closed__5;
static lean_once_cell_t l_Lean_Parser_Attr_macro___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_macro___closed__6;
static lean_once_cell_t l_Lean_Parser_Attr_macro___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_macro___closed__7;
static lean_once_cell_t l_Lean_Parser_Attr_macro___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_macro___closed__8;
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_macro;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_macro___regBuiltin_Lean_Parser_Attr_macro__1();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_macro___regBuiltin_Lean_Parser_Attr_macro__1___boxed(lean_object*);
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_macro___regBuiltin_Lean_Parser_Attr_macro_declRange__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(38) << 1) | 1)),((lean_object*)(((size_t)(23) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_macro___regBuiltin_Lean_Parser_Attr_macro_declRange__3___closed__0 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_macro___regBuiltin_Lean_Parser_Attr_macro_declRange__3___closed__0_value;
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_macro___regBuiltin_Lean_Parser_Attr_macro_declRange__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(38) << 1) | 1)),((lean_object*)(((size_t)(73) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_macro___regBuiltin_Lean_Parser_Attr_macro_declRange__3___closed__1 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_macro___regBuiltin_Lean_Parser_Attr_macro_declRange__3___closed__1_value;
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_macro___regBuiltin_Lean_Parser_Attr_macro_declRange__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_macro___regBuiltin_Lean_Parser_Attr_macro_declRange__3___closed__0_value),((lean_object*)(((size_t)(23) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_macro___regBuiltin_Lean_Parser_Attr_macro_declRange__3___closed__1_value),((lean_object*)(((size_t)(73) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_macro___regBuiltin_Lean_Parser_Attr_macro_declRange__3___closed__2 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_macro___regBuiltin_Lean_Parser_Attr_macro_declRange__3___closed__2_value;
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_macro___regBuiltin_Lean_Parser_Attr_macro_declRange__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(38) << 1) | 1)),((lean_object*)(((size_t)(27) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_macro___regBuiltin_Lean_Parser_Attr_macro_declRange__3___closed__3 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_macro___regBuiltin_Lean_Parser_Attr_macro_declRange__3___closed__3_value;
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_macro___regBuiltin_Lean_Parser_Attr_macro_declRange__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(38) << 1) | 1)),((lean_object*)(((size_t)(34) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_macro___regBuiltin_Lean_Parser_Attr_macro_declRange__3___closed__4 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_macro___regBuiltin_Lean_Parser_Attr_macro_declRange__3___closed__4_value;
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_macro___regBuiltin_Lean_Parser_Attr_macro_declRange__3___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_macro___regBuiltin_Lean_Parser_Attr_macro_declRange__3___closed__3_value),((lean_object*)(((size_t)(27) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_macro___regBuiltin_Lean_Parser_Attr_macro_declRange__3___closed__4_value),((lean_object*)(((size_t)(34) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_macro___regBuiltin_Lean_Parser_Attr_macro_declRange__3___closed__5 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_macro___regBuiltin_Lean_Parser_Attr_macro_declRange__3___closed__5_value;
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_macro___regBuiltin_Lean_Parser_Attr_macro_declRange__3___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_macro___regBuiltin_Lean_Parser_Attr_macro_declRange__3___closed__2_value),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_macro___regBuiltin_Lean_Parser_Attr_macro_declRange__3___closed__5_value)}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_macro___regBuiltin_Lean_Parser_Attr_macro_declRange__3___closed__6 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_macro___regBuiltin_Lean_Parser_Attr_macro_declRange__3___closed__6_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_macro___regBuiltin_Lean_Parser_Attr_macro_declRange__3();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_macro___regBuiltin_Lean_Parser_Attr_macro_declRange__3___boxed(lean_object*);
static const lean_closure_object l_Lean_Parser_Attr_macro_formatter___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_mkAntiquot_formatter___boxed, .m_arity = 9, .m_num_fixed = 4, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_macro___closed__0_value),((lean_object*)&l_Lean_Parser_Attr_macro___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Parser_Attr_macro_formatter___closed__0 = (const lean_object*)&l_Lean_Parser_Attr_macro_formatter___closed__0_value;
static const lean_closure_object l_Lean_Parser_Attr_macro_formatter___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_symbol_formatter___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_macro___closed__3_value)} };
static const lean_object* l_Lean_Parser_Attr_macro_formatter___closed__1 = (const lean_object*)&l_Lean_Parser_Attr_macro_formatter___closed__1_value;
static const lean_closure_object l_Lean_Parser_Attr_macro_formatter___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_macro_formatter___closed__1_value),((lean_object*)&l_Lean_Parser_Attr_simple_formatter___closed__2_value)} };
static const lean_object* l_Lean_Parser_Attr_macro_formatter___closed__2 = (const lean_object*)&l_Lean_Parser_Attr_macro_formatter___closed__2_value;
static const lean_closure_object l_Lean_Parser_Attr_macro_formatter___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_leadingNode_formatter___boxed, .m_arity = 8, .m_num_fixed = 3, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_macro___closed__1_value),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)&l_Lean_Parser_Attr_macro_formatter___closed__2_value)} };
static const lean_object* l_Lean_Parser_Attr_macro_formatter___closed__3 = (const lean_object*)&l_Lean_Parser_Attr_macro_formatter___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_macro_formatter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_macro_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_macro___regBuiltin_Lean_Parser_Attr_macro_formatter__7___closed__0_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_macro___regBuiltin_Lean_Parser_Attr_macro_formatter__7___closed__0_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_macro___regBuiltin_Lean_Parser_Attr_macro_formatter__7___closed__0_value_aux_0),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_macro___regBuiltin_Lean_Parser_Attr_macro_formatter__7___closed__0_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_macro___regBuiltin_Lean_Parser_Attr_macro_formatter__7___closed__0_value_aux_1),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__12_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_macro___regBuiltin_Lean_Parser_Attr_macro_formatter__7___closed__0_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_macro___regBuiltin_Lean_Parser_Attr_macro_formatter__7___closed__0_value_aux_2),((lean_object*)&l_Lean_Parser_Attr_macro___closed__0_value),LEAN_SCALAR_PTR_LITERAL(17, 202, 70, 6, 8, 133, 137, 74)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_macro___regBuiltin_Lean_Parser_Attr_macro_formatter__7___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_macro___regBuiltin_Lean_Parser_Attr_macro_formatter__7___closed__0_value_aux_3),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_formatter__7___closed__0_value),LEAN_SCALAR_PTR_LITERAL(28, 38, 245, 236, 190, 18, 200, 255)}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_macro___regBuiltin_Lean_Parser_Attr_macro_formatter__7___closed__0 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_macro___regBuiltin_Lean_Parser_Attr_macro_formatter__7___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_macro___regBuiltin_Lean_Parser_Attr_macro_formatter__7();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_macro___regBuiltin_Lean_Parser_Attr_macro_formatter__7___boxed(lean_object*);
static const lean_closure_object l_Lean_Parser_Attr_macro_parenthesizer___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_mkAntiquot_parenthesizer___boxed, .m_arity = 9, .m_num_fixed = 4, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_macro___closed__0_value),((lean_object*)&l_Lean_Parser_Attr_macro___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Parser_Attr_macro_parenthesizer___closed__0 = (const lean_object*)&l_Lean_Parser_Attr_macro_parenthesizer___closed__0_value;
static const lean_closure_object l_Lean_Parser_Attr_macro_parenthesizer___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_symbol_parenthesizer___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_macro___closed__3_value)} };
static const lean_object* l_Lean_Parser_Attr_macro_parenthesizer___closed__1 = (const lean_object*)&l_Lean_Parser_Attr_macro_parenthesizer___closed__1_value;
static const lean_closure_object l_Lean_Parser_Attr_macro_parenthesizer___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_macro_parenthesizer___closed__1_value),((lean_object*)&l_Lean_Parser_Attr_simple_parenthesizer___closed__1_value)} };
static const lean_object* l_Lean_Parser_Attr_macro_parenthesizer___closed__2 = (const lean_object*)&l_Lean_Parser_Attr_macro_parenthesizer___closed__2_value;
static const lean_closure_object l_Lean_Parser_Attr_macro_parenthesizer___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Parenthesizer_leadingNode_parenthesizer___boxed, .m_arity = 8, .m_num_fixed = 3, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_macro___closed__1_value),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)&l_Lean_Parser_Attr_macro_parenthesizer___closed__2_value)} };
static const lean_object* l_Lean_Parser_Attr_macro_parenthesizer___closed__3 = (const lean_object*)&l_Lean_Parser_Attr_macro_parenthesizer___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_macro_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_macro_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_macro___regBuiltin_Lean_Parser_Attr_macro_parenthesizer__11___closed__0_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_macro___regBuiltin_Lean_Parser_Attr_macro_parenthesizer__11___closed__0_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_macro___regBuiltin_Lean_Parser_Attr_macro_parenthesizer__11___closed__0_value_aux_0),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_macro___regBuiltin_Lean_Parser_Attr_macro_parenthesizer__11___closed__0_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_macro___regBuiltin_Lean_Parser_Attr_macro_parenthesizer__11___closed__0_value_aux_1),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__12_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_macro___regBuiltin_Lean_Parser_Attr_macro_parenthesizer__11___closed__0_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_macro___regBuiltin_Lean_Parser_Attr_macro_parenthesizer__11___closed__0_value_aux_2),((lean_object*)&l_Lean_Parser_Attr_macro___closed__0_value),LEAN_SCALAR_PTR_LITERAL(17, 202, 70, 6, 8, 133, 137, 74)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_macro___regBuiltin_Lean_Parser_Attr_macro_parenthesizer__11___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_macro___regBuiltin_Lean_Parser_Attr_macro_parenthesizer__11___closed__0_value_aux_3),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_parenthesizer__11___closed__0_value),LEAN_SCALAR_PTR_LITERAL(64, 178, 73, 41, 185, 64, 194, 161)}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_macro___regBuiltin_Lean_Parser_Attr_macro_parenthesizer__11___closed__0 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_macro___regBuiltin_Lean_Parser_Attr_macro_parenthesizer__11___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_macro___regBuiltin_Lean_Parser_Attr_macro_parenthesizer__11();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_macro___regBuiltin_Lean_Parser_Attr_macro_parenthesizer__11___boxed(lean_object*);
static const lean_string_object l_Lean_Parser_Attr_export___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "export"};
static const lean_object* l_Lean_Parser_Attr_export___closed__0 = (const lean_object*)&l_Lean_Parser_Attr_export___closed__0_value;
static const lean_ctor_object l_Lean_Parser_Attr_export___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_Attr_export___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_export___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_Attr_export___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_export___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__12_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l_Lean_Parser_Attr_export___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_export___closed__1_value_aux_2),((lean_object*)&l_Lean_Parser_Attr_export___closed__0_value),LEAN_SCALAR_PTR_LITERAL(43, 70, 85, 26, 88, 142, 178, 115)}};
static const lean_object* l_Lean_Parser_Attr_export___closed__1 = (const lean_object*)&l_Lean_Parser_Attr_export___closed__1_value;
static lean_once_cell_t l_Lean_Parser_Attr_export___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_export___closed__2;
static const lean_string_object l_Lean_Parser_Attr_export___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "export "};
static const lean_object* l_Lean_Parser_Attr_export___closed__3 = (const lean_object*)&l_Lean_Parser_Attr_export___closed__3_value;
static lean_once_cell_t l_Lean_Parser_Attr_export___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_export___closed__4;
static lean_once_cell_t l_Lean_Parser_Attr_export___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_export___closed__5;
static lean_once_cell_t l_Lean_Parser_Attr_export___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_export___closed__6;
static lean_once_cell_t l_Lean_Parser_Attr_export___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_export___closed__7;
static lean_once_cell_t l_Lean_Parser_Attr_export___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_export___closed__8;
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_export;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_export___regBuiltin_Lean_Parser_Attr_export__1();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_export___regBuiltin_Lean_Parser_Attr_export__1___boxed(lean_object*);
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_export___regBuiltin_Lean_Parser_Attr_export_declRange__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(39) << 1) | 1)),((lean_object*)(((size_t)(23) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_export___regBuiltin_Lean_Parser_Attr_export_declRange__3___closed__0 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_export___regBuiltin_Lean_Parser_Attr_export_declRange__3___closed__0_value;
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_export___regBuiltin_Lean_Parser_Attr_export_declRange__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(39) << 1) | 1)),((lean_object*)(((size_t)(74) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_export___regBuiltin_Lean_Parser_Attr_export_declRange__3___closed__1 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_export___regBuiltin_Lean_Parser_Attr_export_declRange__3___closed__1_value;
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_export___regBuiltin_Lean_Parser_Attr_export_declRange__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_export___regBuiltin_Lean_Parser_Attr_export_declRange__3___closed__0_value),((lean_object*)(((size_t)(23) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_export___regBuiltin_Lean_Parser_Attr_export_declRange__3___closed__1_value),((lean_object*)(((size_t)(74) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_export___regBuiltin_Lean_Parser_Attr_export_declRange__3___closed__2 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_export___regBuiltin_Lean_Parser_Attr_export_declRange__3___closed__2_value;
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_export___regBuiltin_Lean_Parser_Attr_export_declRange__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(39) << 1) | 1)),((lean_object*)(((size_t)(27) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_export___regBuiltin_Lean_Parser_Attr_export_declRange__3___closed__3 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_export___regBuiltin_Lean_Parser_Attr_export_declRange__3___closed__3_value;
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_export___regBuiltin_Lean_Parser_Attr_export_declRange__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(39) << 1) | 1)),((lean_object*)(((size_t)(35) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_export___regBuiltin_Lean_Parser_Attr_export_declRange__3___closed__4 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_export___regBuiltin_Lean_Parser_Attr_export_declRange__3___closed__4_value;
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_export___regBuiltin_Lean_Parser_Attr_export_declRange__3___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_export___regBuiltin_Lean_Parser_Attr_export_declRange__3___closed__3_value),((lean_object*)(((size_t)(27) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_export___regBuiltin_Lean_Parser_Attr_export_declRange__3___closed__4_value),((lean_object*)(((size_t)(35) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_export___regBuiltin_Lean_Parser_Attr_export_declRange__3___closed__5 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_export___regBuiltin_Lean_Parser_Attr_export_declRange__3___closed__5_value;
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_export___regBuiltin_Lean_Parser_Attr_export_declRange__3___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_export___regBuiltin_Lean_Parser_Attr_export_declRange__3___closed__2_value),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_export___regBuiltin_Lean_Parser_Attr_export_declRange__3___closed__5_value)}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_export___regBuiltin_Lean_Parser_Attr_export_declRange__3___closed__6 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_export___regBuiltin_Lean_Parser_Attr_export_declRange__3___closed__6_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_export___regBuiltin_Lean_Parser_Attr_export_declRange__3();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_export___regBuiltin_Lean_Parser_Attr_export_declRange__3___boxed(lean_object*);
static const lean_closure_object l_Lean_Parser_Attr_export_formatter___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_mkAntiquot_formatter___boxed, .m_arity = 9, .m_num_fixed = 4, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_export___closed__0_value),((lean_object*)&l_Lean_Parser_Attr_export___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Parser_Attr_export_formatter___closed__0 = (const lean_object*)&l_Lean_Parser_Attr_export_formatter___closed__0_value;
static const lean_closure_object l_Lean_Parser_Attr_export_formatter___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_symbol_formatter___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_export___closed__3_value)} };
static const lean_object* l_Lean_Parser_Attr_export_formatter___closed__1 = (const lean_object*)&l_Lean_Parser_Attr_export_formatter___closed__1_value;
static const lean_closure_object l_Lean_Parser_Attr_export_formatter___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_export_formatter___closed__1_value),((lean_object*)&l_Lean_Parser_Attr_simple_formatter___closed__2_value)} };
static const lean_object* l_Lean_Parser_Attr_export_formatter___closed__2 = (const lean_object*)&l_Lean_Parser_Attr_export_formatter___closed__2_value;
static const lean_closure_object l_Lean_Parser_Attr_export_formatter___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_leadingNode_formatter___boxed, .m_arity = 8, .m_num_fixed = 3, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_export___closed__1_value),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)&l_Lean_Parser_Attr_export_formatter___closed__2_value)} };
static const lean_object* l_Lean_Parser_Attr_export_formatter___closed__3 = (const lean_object*)&l_Lean_Parser_Attr_export_formatter___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_export_formatter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_export_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_export___regBuiltin_Lean_Parser_Attr_export_formatter__7___closed__0_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_export___regBuiltin_Lean_Parser_Attr_export_formatter__7___closed__0_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_export___regBuiltin_Lean_Parser_Attr_export_formatter__7___closed__0_value_aux_0),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_export___regBuiltin_Lean_Parser_Attr_export_formatter__7___closed__0_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_export___regBuiltin_Lean_Parser_Attr_export_formatter__7___closed__0_value_aux_1),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__12_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_export___regBuiltin_Lean_Parser_Attr_export_formatter__7___closed__0_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_export___regBuiltin_Lean_Parser_Attr_export_formatter__7___closed__0_value_aux_2),((lean_object*)&l_Lean_Parser_Attr_export___closed__0_value),LEAN_SCALAR_PTR_LITERAL(43, 70, 85, 26, 88, 142, 178, 115)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_export___regBuiltin_Lean_Parser_Attr_export_formatter__7___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_export___regBuiltin_Lean_Parser_Attr_export_formatter__7___closed__0_value_aux_3),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_formatter__7___closed__0_value),LEAN_SCALAR_PTR_LITERAL(78, 151, 18, 12, 107, 65, 124, 243)}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_export___regBuiltin_Lean_Parser_Attr_export_formatter__7___closed__0 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_export___regBuiltin_Lean_Parser_Attr_export_formatter__7___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_export___regBuiltin_Lean_Parser_Attr_export_formatter__7();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_export___regBuiltin_Lean_Parser_Attr_export_formatter__7___boxed(lean_object*);
static const lean_closure_object l_Lean_Parser_Attr_export_parenthesizer___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_mkAntiquot_parenthesizer___boxed, .m_arity = 9, .m_num_fixed = 4, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_export___closed__0_value),((lean_object*)&l_Lean_Parser_Attr_export___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Parser_Attr_export_parenthesizer___closed__0 = (const lean_object*)&l_Lean_Parser_Attr_export_parenthesizer___closed__0_value;
static const lean_closure_object l_Lean_Parser_Attr_export_parenthesizer___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_symbol_parenthesizer___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_export___closed__3_value)} };
static const lean_object* l_Lean_Parser_Attr_export_parenthesizer___closed__1 = (const lean_object*)&l_Lean_Parser_Attr_export_parenthesizer___closed__1_value;
static const lean_closure_object l_Lean_Parser_Attr_export_parenthesizer___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_export_parenthesizer___closed__1_value),((lean_object*)&l_Lean_Parser_Attr_simple_parenthesizer___closed__1_value)} };
static const lean_object* l_Lean_Parser_Attr_export_parenthesizer___closed__2 = (const lean_object*)&l_Lean_Parser_Attr_export_parenthesizer___closed__2_value;
static const lean_closure_object l_Lean_Parser_Attr_export_parenthesizer___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Parenthesizer_leadingNode_parenthesizer___boxed, .m_arity = 8, .m_num_fixed = 3, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_export___closed__1_value),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)&l_Lean_Parser_Attr_export_parenthesizer___closed__2_value)} };
static const lean_object* l_Lean_Parser_Attr_export_parenthesizer___closed__3 = (const lean_object*)&l_Lean_Parser_Attr_export_parenthesizer___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_export_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_export_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_export___regBuiltin_Lean_Parser_Attr_export_parenthesizer__11___closed__0_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_export___regBuiltin_Lean_Parser_Attr_export_parenthesizer__11___closed__0_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_export___regBuiltin_Lean_Parser_Attr_export_parenthesizer__11___closed__0_value_aux_0),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_export___regBuiltin_Lean_Parser_Attr_export_parenthesizer__11___closed__0_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_export___regBuiltin_Lean_Parser_Attr_export_parenthesizer__11___closed__0_value_aux_1),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__12_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_export___regBuiltin_Lean_Parser_Attr_export_parenthesizer__11___closed__0_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_export___regBuiltin_Lean_Parser_Attr_export_parenthesizer__11___closed__0_value_aux_2),((lean_object*)&l_Lean_Parser_Attr_export___closed__0_value),LEAN_SCALAR_PTR_LITERAL(43, 70, 85, 26, 88, 142, 178, 115)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_export___regBuiltin_Lean_Parser_Attr_export_parenthesizer__11___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_export___regBuiltin_Lean_Parser_Attr_export_parenthesizer__11___closed__0_value_aux_3),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_parenthesizer__11___closed__0_value),LEAN_SCALAR_PTR_LITERAL(2, 202, 214, 57, 107, 104, 12, 237)}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_export___regBuiltin_Lean_Parser_Attr_export_parenthesizer__11___closed__0 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_export___regBuiltin_Lean_Parser_Attr_export_parenthesizer__11___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_export___regBuiltin_Lean_Parser_Attr_export_parenthesizer__11();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_export___regBuiltin_Lean_Parser_Attr_export_parenthesizer__11___boxed(lean_object*);
static const lean_string_object l_Lean_Parser_Attr_recursor___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "recursor"};
static const lean_object* l_Lean_Parser_Attr_recursor___closed__0 = (const lean_object*)&l_Lean_Parser_Attr_recursor___closed__0_value;
static const lean_ctor_object l_Lean_Parser_Attr_recursor___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_Attr_recursor___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_recursor___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_Attr_recursor___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_recursor___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__12_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l_Lean_Parser_Attr_recursor___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_recursor___closed__1_value_aux_2),((lean_object*)&l_Lean_Parser_Attr_recursor___closed__0_value),LEAN_SCALAR_PTR_LITERAL(90, 29, 106, 40, 200, 118, 31, 85)}};
static const lean_object* l_Lean_Parser_Attr_recursor___closed__1 = (const lean_object*)&l_Lean_Parser_Attr_recursor___closed__1_value;
static lean_once_cell_t l_Lean_Parser_Attr_recursor___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_recursor___closed__2;
static const lean_string_object l_Lean_Parser_Attr_recursor___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "recursor "};
static const lean_object* l_Lean_Parser_Attr_recursor___closed__3 = (const lean_object*)&l_Lean_Parser_Attr_recursor___closed__3_value;
static lean_once_cell_t l_Lean_Parser_Attr_recursor___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_recursor___closed__4;
static lean_once_cell_t l_Lean_Parser_Attr_recursor___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_recursor___closed__5;
static lean_once_cell_t l_Lean_Parser_Attr_recursor___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_recursor___closed__6;
static lean_once_cell_t l_Lean_Parser_Attr_recursor___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_recursor___closed__7;
static lean_once_cell_t l_Lean_Parser_Attr_recursor___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_recursor___closed__8;
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_recursor;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_recursor___regBuiltin_Lean_Parser_Attr_recursor__1();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_recursor___regBuiltin_Lean_Parser_Attr_recursor__1___boxed(lean_object*);
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_recursor___regBuiltin_Lean_Parser_Attr_recursor_declRange__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(42) << 1) | 1)),((lean_object*)(((size_t)(23) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_recursor___regBuiltin_Lean_Parser_Attr_recursor_declRange__3___closed__0 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_recursor___regBuiltin_Lean_Parser_Attr_recursor_declRange__3___closed__0_value;
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_recursor___regBuiltin_Lean_Parser_Attr_recursor_declRange__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(42) << 1) | 1)),((lean_object*)(((size_t)(101) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_recursor___regBuiltin_Lean_Parser_Attr_recursor_declRange__3___closed__1 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_recursor___regBuiltin_Lean_Parser_Attr_recursor_declRange__3___closed__1_value;
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_recursor___regBuiltin_Lean_Parser_Attr_recursor_declRange__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_recursor___regBuiltin_Lean_Parser_Attr_recursor_declRange__3___closed__0_value),((lean_object*)(((size_t)(23) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_recursor___regBuiltin_Lean_Parser_Attr_recursor_declRange__3___closed__1_value),((lean_object*)(((size_t)(101) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_recursor___regBuiltin_Lean_Parser_Attr_recursor_declRange__3___closed__2 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_recursor___regBuiltin_Lean_Parser_Attr_recursor_declRange__3___closed__2_value;
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_recursor___regBuiltin_Lean_Parser_Attr_recursor_declRange__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(42) << 1) | 1)),((lean_object*)(((size_t)(27) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_recursor___regBuiltin_Lean_Parser_Attr_recursor_declRange__3___closed__3 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_recursor___regBuiltin_Lean_Parser_Attr_recursor_declRange__3___closed__3_value;
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_recursor___regBuiltin_Lean_Parser_Attr_recursor_declRange__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(42) << 1) | 1)),((lean_object*)(((size_t)(35) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_recursor___regBuiltin_Lean_Parser_Attr_recursor_declRange__3___closed__4 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_recursor___regBuiltin_Lean_Parser_Attr_recursor_declRange__3___closed__4_value;
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_recursor___regBuiltin_Lean_Parser_Attr_recursor_declRange__3___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_recursor___regBuiltin_Lean_Parser_Attr_recursor_declRange__3___closed__3_value),((lean_object*)(((size_t)(27) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_recursor___regBuiltin_Lean_Parser_Attr_recursor_declRange__3___closed__4_value),((lean_object*)(((size_t)(35) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_recursor___regBuiltin_Lean_Parser_Attr_recursor_declRange__3___closed__5 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_recursor___regBuiltin_Lean_Parser_Attr_recursor_declRange__3___closed__5_value;
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_recursor___regBuiltin_Lean_Parser_Attr_recursor_declRange__3___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_recursor___regBuiltin_Lean_Parser_Attr_recursor_declRange__3___closed__2_value),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_recursor___regBuiltin_Lean_Parser_Attr_recursor_declRange__3___closed__5_value)}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_recursor___regBuiltin_Lean_Parser_Attr_recursor_declRange__3___closed__6 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_recursor___regBuiltin_Lean_Parser_Attr_recursor_declRange__3___closed__6_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_recursor___regBuiltin_Lean_Parser_Attr_recursor_declRange__3();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_recursor___regBuiltin_Lean_Parser_Attr_recursor_declRange__3___boxed(lean_object*);
static const lean_closure_object l_Lean_Parser_Attr_recursor_formatter___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_mkAntiquot_formatter___boxed, .m_arity = 9, .m_num_fixed = 4, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_recursor___closed__0_value),((lean_object*)&l_Lean_Parser_Attr_recursor___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Parser_Attr_recursor_formatter___closed__0 = (const lean_object*)&l_Lean_Parser_Attr_recursor_formatter___closed__0_value;
static const lean_closure_object l_Lean_Parser_Attr_recursor_formatter___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_nonReservedSymbol_formatter___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_recursor___closed__3_value),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Parser_Attr_recursor_formatter___closed__1 = (const lean_object*)&l_Lean_Parser_Attr_recursor_formatter___closed__1_value;
static const lean_closure_object l_Lean_Parser_Attr_recursor_formatter___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_recursor_formatter___closed__1_value),((lean_object*)&l_Lean_Parser_Priority_numPrio_formatter___closed__0_value)} };
static const lean_object* l_Lean_Parser_Attr_recursor_formatter___closed__2 = (const lean_object*)&l_Lean_Parser_Attr_recursor_formatter___closed__2_value;
static const lean_closure_object l_Lean_Parser_Attr_recursor_formatter___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_leadingNode_formatter___boxed, .m_arity = 8, .m_num_fixed = 3, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_recursor___closed__1_value),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)&l_Lean_Parser_Attr_recursor_formatter___closed__2_value)} };
static const lean_object* l_Lean_Parser_Attr_recursor_formatter___closed__3 = (const lean_object*)&l_Lean_Parser_Attr_recursor_formatter___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_recursor_formatter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_recursor_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_recursor___regBuiltin_Lean_Parser_Attr_recursor_formatter__7___closed__0_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_recursor___regBuiltin_Lean_Parser_Attr_recursor_formatter__7___closed__0_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_recursor___regBuiltin_Lean_Parser_Attr_recursor_formatter__7___closed__0_value_aux_0),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_recursor___regBuiltin_Lean_Parser_Attr_recursor_formatter__7___closed__0_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_recursor___regBuiltin_Lean_Parser_Attr_recursor_formatter__7___closed__0_value_aux_1),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__12_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_recursor___regBuiltin_Lean_Parser_Attr_recursor_formatter__7___closed__0_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_recursor___regBuiltin_Lean_Parser_Attr_recursor_formatter__7___closed__0_value_aux_2),((lean_object*)&l_Lean_Parser_Attr_recursor___closed__0_value),LEAN_SCALAR_PTR_LITERAL(90, 29, 106, 40, 200, 118, 31, 85)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_recursor___regBuiltin_Lean_Parser_Attr_recursor_formatter__7___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_recursor___regBuiltin_Lean_Parser_Attr_recursor_formatter__7___closed__0_value_aux_3),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_formatter__7___closed__0_value),LEAN_SCALAR_PTR_LITERAL(115, 2, 9, 92, 3, 102, 239, 12)}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_recursor___regBuiltin_Lean_Parser_Attr_recursor_formatter__7___closed__0 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_recursor___regBuiltin_Lean_Parser_Attr_recursor_formatter__7___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_recursor___regBuiltin_Lean_Parser_Attr_recursor_formatter__7();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_recursor___regBuiltin_Lean_Parser_Attr_recursor_formatter__7___boxed(lean_object*);
static const lean_closure_object l_Lean_Parser_Attr_recursor_parenthesizer___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_mkAntiquot_parenthesizer___boxed, .m_arity = 9, .m_num_fixed = 4, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_recursor___closed__0_value),((lean_object*)&l_Lean_Parser_Attr_recursor___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Parser_Attr_recursor_parenthesizer___closed__0 = (const lean_object*)&l_Lean_Parser_Attr_recursor_parenthesizer___closed__0_value;
static const lean_closure_object l_Lean_Parser_Attr_recursor_parenthesizer___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_nonReservedSymbol_parenthesizer___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_recursor___closed__3_value),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Parser_Attr_recursor_parenthesizer___closed__1 = (const lean_object*)&l_Lean_Parser_Attr_recursor_parenthesizer___closed__1_value;
static const lean_closure_object l_Lean_Parser_Attr_recursor_parenthesizer___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_recursor_parenthesizer___closed__1_value),((lean_object*)&l_Lean_Parser_Priority_numPrio_parenthesizer___closed__1_value)} };
static const lean_object* l_Lean_Parser_Attr_recursor_parenthesizer___closed__2 = (const lean_object*)&l_Lean_Parser_Attr_recursor_parenthesizer___closed__2_value;
static const lean_closure_object l_Lean_Parser_Attr_recursor_parenthesizer___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Parenthesizer_leadingNode_parenthesizer___boxed, .m_arity = 8, .m_num_fixed = 3, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_recursor___closed__1_value),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)&l_Lean_Parser_Attr_recursor_parenthesizer___closed__2_value)} };
static const lean_object* l_Lean_Parser_Attr_recursor_parenthesizer___closed__3 = (const lean_object*)&l_Lean_Parser_Attr_recursor_parenthesizer___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_recursor_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_recursor_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_recursor___regBuiltin_Lean_Parser_Attr_recursor_parenthesizer__11___closed__0_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_recursor___regBuiltin_Lean_Parser_Attr_recursor_parenthesizer__11___closed__0_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_recursor___regBuiltin_Lean_Parser_Attr_recursor_parenthesizer__11___closed__0_value_aux_0),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_recursor___regBuiltin_Lean_Parser_Attr_recursor_parenthesizer__11___closed__0_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_recursor___regBuiltin_Lean_Parser_Attr_recursor_parenthesizer__11___closed__0_value_aux_1),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__12_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_recursor___regBuiltin_Lean_Parser_Attr_recursor_parenthesizer__11___closed__0_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_recursor___regBuiltin_Lean_Parser_Attr_recursor_parenthesizer__11___closed__0_value_aux_2),((lean_object*)&l_Lean_Parser_Attr_recursor___closed__0_value),LEAN_SCALAR_PTR_LITERAL(90, 29, 106, 40, 200, 118, 31, 85)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_recursor___regBuiltin_Lean_Parser_Attr_recursor_parenthesizer__11___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_recursor___regBuiltin_Lean_Parser_Attr_recursor_parenthesizer__11___closed__0_value_aux_3),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_parenthesizer__11___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 47, 55, 250, 244, 14, 194, 236)}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_recursor___regBuiltin_Lean_Parser_Attr_recursor_parenthesizer__11___closed__0 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_recursor___regBuiltin_Lean_Parser_Attr_recursor_parenthesizer__11___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_recursor___regBuiltin_Lean_Parser_Attr_recursor_parenthesizer__11();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_recursor___regBuiltin_Lean_Parser_Attr_recursor_parenthesizer__11___boxed(lean_object*);
static const lean_string_object l_Lean_Parser_Attr_class___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "class"};
static const lean_object* l_Lean_Parser_Attr_class___closed__0 = (const lean_object*)&l_Lean_Parser_Attr_class___closed__0_value;
static const lean_ctor_object l_Lean_Parser_Attr_class___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_Attr_class___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_class___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_Attr_class___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_class___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__12_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l_Lean_Parser_Attr_class___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_class___closed__1_value_aux_2),((lean_object*)&l_Lean_Parser_Attr_class___closed__0_value),LEAN_SCALAR_PTR_LITERAL(149, 14, 146, 125, 144, 1, 65, 64)}};
static const lean_object* l_Lean_Parser_Attr_class___closed__1 = (const lean_object*)&l_Lean_Parser_Attr_class___closed__1_value;
static lean_once_cell_t l_Lean_Parser_Attr_class___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_class___closed__2;
static lean_once_cell_t l_Lean_Parser_Attr_class___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_class___closed__3;
static lean_once_cell_t l_Lean_Parser_Attr_class___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_class___closed__4;
static lean_once_cell_t l_Lean_Parser_Attr_class___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_class___closed__5;
static lean_once_cell_t l_Lean_Parser_Attr_class___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_class___closed__6;
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_class;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_class___regBuiltin_Lean_Parser_Attr_class__1();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_class___regBuiltin_Lean_Parser_Attr_class__1___boxed(lean_object*);
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_class___regBuiltin_Lean_Parser_Attr_class_declRange__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(43) << 1) | 1)),((lean_object*)(((size_t)(23) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_class___regBuiltin_Lean_Parser_Attr_class_declRange__3___closed__0 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_class___regBuiltin_Lean_Parser_Attr_class_declRange__3___closed__0_value;
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_class___regBuiltin_Lean_Parser_Attr_class_declRange__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(43) << 1) | 1)),((lean_object*)(((size_t)(69) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_class___regBuiltin_Lean_Parser_Attr_class_declRange__3___closed__1 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_class___regBuiltin_Lean_Parser_Attr_class_declRange__3___closed__1_value;
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_class___regBuiltin_Lean_Parser_Attr_class_declRange__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_class___regBuiltin_Lean_Parser_Attr_class_declRange__3___closed__0_value),((lean_object*)(((size_t)(23) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_class___regBuiltin_Lean_Parser_Attr_class_declRange__3___closed__1_value),((lean_object*)(((size_t)(69) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_class___regBuiltin_Lean_Parser_Attr_class_declRange__3___closed__2 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_class___regBuiltin_Lean_Parser_Attr_class_declRange__3___closed__2_value;
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_class___regBuiltin_Lean_Parser_Attr_class_declRange__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(43) << 1) | 1)),((lean_object*)(((size_t)(27) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_class___regBuiltin_Lean_Parser_Attr_class_declRange__3___closed__3 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_class___regBuiltin_Lean_Parser_Attr_class_declRange__3___closed__3_value;
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_class___regBuiltin_Lean_Parser_Attr_class_declRange__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(43) << 1) | 1)),((lean_object*)(((size_t)(34) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_class___regBuiltin_Lean_Parser_Attr_class_declRange__3___closed__4 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_class___regBuiltin_Lean_Parser_Attr_class_declRange__3___closed__4_value;
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_class___regBuiltin_Lean_Parser_Attr_class_declRange__3___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_class___regBuiltin_Lean_Parser_Attr_class_declRange__3___closed__3_value),((lean_object*)(((size_t)(27) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_class___regBuiltin_Lean_Parser_Attr_class_declRange__3___closed__4_value),((lean_object*)(((size_t)(34) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_class___regBuiltin_Lean_Parser_Attr_class_declRange__3___closed__5 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_class___regBuiltin_Lean_Parser_Attr_class_declRange__3___closed__5_value;
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_class___regBuiltin_Lean_Parser_Attr_class_declRange__3___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_class___regBuiltin_Lean_Parser_Attr_class_declRange__3___closed__2_value),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_class___regBuiltin_Lean_Parser_Attr_class_declRange__3___closed__5_value)}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_class___regBuiltin_Lean_Parser_Attr_class_declRange__3___closed__6 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_class___regBuiltin_Lean_Parser_Attr_class_declRange__3___closed__6_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_class___regBuiltin_Lean_Parser_Attr_class_declRange__3();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_class___regBuiltin_Lean_Parser_Attr_class_declRange__3___boxed(lean_object*);
static const lean_closure_object l_Lean_Parser_Attr_class_formatter___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_mkAntiquot_formatter___boxed, .m_arity = 9, .m_num_fixed = 4, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_class___closed__0_value),((lean_object*)&l_Lean_Parser_Attr_class___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Parser_Attr_class_formatter___closed__0 = (const lean_object*)&l_Lean_Parser_Attr_class_formatter___closed__0_value;
static const lean_closure_object l_Lean_Parser_Attr_class_formatter___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_symbol_formatter___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_class___closed__0_value)} };
static const lean_object* l_Lean_Parser_Attr_class_formatter___closed__1 = (const lean_object*)&l_Lean_Parser_Attr_class_formatter___closed__1_value;
static const lean_closure_object l_Lean_Parser_Attr_class_formatter___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_leadingNode_formatter___boxed, .m_arity = 8, .m_num_fixed = 3, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_class___closed__1_value),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)&l_Lean_Parser_Attr_class_formatter___closed__1_value)} };
static const lean_object* l_Lean_Parser_Attr_class_formatter___closed__2 = (const lean_object*)&l_Lean_Parser_Attr_class_formatter___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_class_formatter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_class_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_class___regBuiltin_Lean_Parser_Attr_class_formatter__7___closed__0_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_class___regBuiltin_Lean_Parser_Attr_class_formatter__7___closed__0_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_class___regBuiltin_Lean_Parser_Attr_class_formatter__7___closed__0_value_aux_0),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_class___regBuiltin_Lean_Parser_Attr_class_formatter__7___closed__0_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_class___regBuiltin_Lean_Parser_Attr_class_formatter__7___closed__0_value_aux_1),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__12_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_class___regBuiltin_Lean_Parser_Attr_class_formatter__7___closed__0_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_class___regBuiltin_Lean_Parser_Attr_class_formatter__7___closed__0_value_aux_2),((lean_object*)&l_Lean_Parser_Attr_class___closed__0_value),LEAN_SCALAR_PTR_LITERAL(149, 14, 146, 125, 144, 1, 65, 64)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_class___regBuiltin_Lean_Parser_Attr_class_formatter__7___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_class___regBuiltin_Lean_Parser_Attr_class_formatter__7___closed__0_value_aux_3),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_formatter__7___closed__0_value),LEAN_SCALAR_PTR_LITERAL(72, 161, 70, 79, 21, 219, 219, 187)}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_class___regBuiltin_Lean_Parser_Attr_class_formatter__7___closed__0 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_class___regBuiltin_Lean_Parser_Attr_class_formatter__7___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_class___regBuiltin_Lean_Parser_Attr_class_formatter__7();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_class___regBuiltin_Lean_Parser_Attr_class_formatter__7___boxed(lean_object*);
static const lean_closure_object l_Lean_Parser_Attr_class_parenthesizer___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_mkAntiquot_parenthesizer___boxed, .m_arity = 9, .m_num_fixed = 4, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_class___closed__0_value),((lean_object*)&l_Lean_Parser_Attr_class___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Parser_Attr_class_parenthesizer___closed__0 = (const lean_object*)&l_Lean_Parser_Attr_class_parenthesizer___closed__0_value;
static const lean_closure_object l_Lean_Parser_Attr_class_parenthesizer___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_symbol_parenthesizer___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_class___closed__0_value)} };
static const lean_object* l_Lean_Parser_Attr_class_parenthesizer___closed__1 = (const lean_object*)&l_Lean_Parser_Attr_class_parenthesizer___closed__1_value;
static const lean_closure_object l_Lean_Parser_Attr_class_parenthesizer___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Parenthesizer_leadingNode_parenthesizer___boxed, .m_arity = 8, .m_num_fixed = 3, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_class___closed__1_value),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)&l_Lean_Parser_Attr_class_parenthesizer___closed__1_value)} };
static const lean_object* l_Lean_Parser_Attr_class_parenthesizer___closed__2 = (const lean_object*)&l_Lean_Parser_Attr_class_parenthesizer___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_class_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_class_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_class___regBuiltin_Lean_Parser_Attr_class_parenthesizer__11___closed__0_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_class___regBuiltin_Lean_Parser_Attr_class_parenthesizer__11___closed__0_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_class___regBuiltin_Lean_Parser_Attr_class_parenthesizer__11___closed__0_value_aux_0),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_class___regBuiltin_Lean_Parser_Attr_class_parenthesizer__11___closed__0_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_class___regBuiltin_Lean_Parser_Attr_class_parenthesizer__11___closed__0_value_aux_1),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__12_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_class___regBuiltin_Lean_Parser_Attr_class_parenthesizer__11___closed__0_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_class___regBuiltin_Lean_Parser_Attr_class_parenthesizer__11___closed__0_value_aux_2),((lean_object*)&l_Lean_Parser_Attr_class___closed__0_value),LEAN_SCALAR_PTR_LITERAL(149, 14, 146, 125, 144, 1, 65, 64)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_class___regBuiltin_Lean_Parser_Attr_class_parenthesizer__11___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_class___regBuiltin_Lean_Parser_Attr_class_parenthesizer__11___closed__0_value_aux_3),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_parenthesizer__11___closed__0_value),LEAN_SCALAR_PTR_LITERAL(20, 183, 192, 212, 26, 200, 245, 145)}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_class___regBuiltin_Lean_Parser_Attr_class_parenthesizer__11___closed__0 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_class___regBuiltin_Lean_Parser_Attr_class_parenthesizer__11___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_class___regBuiltin_Lean_Parser_Attr_class_parenthesizer__11();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_class___regBuiltin_Lean_Parser_Attr_class_parenthesizer__11___boxed(lean_object*);
static const lean_string_object l_Lean_Parser_Attr_instance___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "instance"};
static const lean_object* l_Lean_Parser_Attr_instance___closed__0 = (const lean_object*)&l_Lean_Parser_Attr_instance___closed__0_value;
static const lean_ctor_object l_Lean_Parser_Attr_instance___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_Attr_instance___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_instance___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_Attr_instance___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_instance___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__12_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l_Lean_Parser_Attr_instance___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_instance___closed__1_value_aux_2),((lean_object*)&l_Lean_Parser_Attr_instance___closed__0_value),LEAN_SCALAR_PTR_LITERAL(128, 1, 138, 227, 223, 112, 103, 179)}};
static const lean_object* l_Lean_Parser_Attr_instance___closed__1 = (const lean_object*)&l_Lean_Parser_Attr_instance___closed__1_value;
static lean_once_cell_t l_Lean_Parser_Attr_instance___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_instance___closed__2;
static lean_once_cell_t l_Lean_Parser_Attr_instance___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_instance___closed__3;
static lean_once_cell_t l_Lean_Parser_Attr_instance___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_instance___closed__4;
static lean_once_cell_t l_Lean_Parser_Attr_instance___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_instance___closed__5;
static lean_once_cell_t l_Lean_Parser_Attr_instance___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_instance___closed__6;
static lean_once_cell_t l_Lean_Parser_Attr_instance___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_instance___closed__7;
static lean_once_cell_t l_Lean_Parser_Attr_instance___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_instance___closed__8;
static lean_once_cell_t l_Lean_Parser_Attr_instance___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_instance___closed__9;
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_instance;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_instance___regBuiltin_Lean_Parser_Attr_instance__1();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_instance___regBuiltin_Lean_Parser_Attr_instance__1___boxed(lean_object*);
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_instance___regBuiltin_Lean_Parser_Attr_instance_declRange__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(44) << 1) | 1)),((lean_object*)(((size_t)(23) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_instance___regBuiltin_Lean_Parser_Attr_instance_declRange__3___closed__0 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_instance___regBuiltin_Lean_Parser_Attr_instance_declRange__3___closed__0_value;
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_instance___regBuiltin_Lean_Parser_Attr_instance_declRange__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(44) << 1) | 1)),((lean_object*)(((size_t)(112) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_instance___regBuiltin_Lean_Parser_Attr_instance_declRange__3___closed__1 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_instance___regBuiltin_Lean_Parser_Attr_instance_declRange__3___closed__1_value;
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_instance___regBuiltin_Lean_Parser_Attr_instance_declRange__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_instance___regBuiltin_Lean_Parser_Attr_instance_declRange__3___closed__0_value),((lean_object*)(((size_t)(23) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_instance___regBuiltin_Lean_Parser_Attr_instance_declRange__3___closed__1_value),((lean_object*)(((size_t)(112) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_instance___regBuiltin_Lean_Parser_Attr_instance_declRange__3___closed__2 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_instance___regBuiltin_Lean_Parser_Attr_instance_declRange__3___closed__2_value;
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_instance___regBuiltin_Lean_Parser_Attr_instance_declRange__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(44) << 1) | 1)),((lean_object*)(((size_t)(27) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_instance___regBuiltin_Lean_Parser_Attr_instance_declRange__3___closed__3 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_instance___regBuiltin_Lean_Parser_Attr_instance_declRange__3___closed__3_value;
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_instance___regBuiltin_Lean_Parser_Attr_instance_declRange__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(44) << 1) | 1)),((lean_object*)(((size_t)(37) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_instance___regBuiltin_Lean_Parser_Attr_instance_declRange__3___closed__4 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_instance___regBuiltin_Lean_Parser_Attr_instance_declRange__3___closed__4_value;
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_instance___regBuiltin_Lean_Parser_Attr_instance_declRange__3___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_instance___regBuiltin_Lean_Parser_Attr_instance_declRange__3___closed__3_value),((lean_object*)(((size_t)(27) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_instance___regBuiltin_Lean_Parser_Attr_instance_declRange__3___closed__4_value),((lean_object*)(((size_t)(37) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_instance___regBuiltin_Lean_Parser_Attr_instance_declRange__3___closed__5 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_instance___regBuiltin_Lean_Parser_Attr_instance_declRange__3___closed__5_value;
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_instance___regBuiltin_Lean_Parser_Attr_instance_declRange__3___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_instance___regBuiltin_Lean_Parser_Attr_instance_declRange__3___closed__2_value),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_instance___regBuiltin_Lean_Parser_Attr_instance_declRange__3___closed__5_value)}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_instance___regBuiltin_Lean_Parser_Attr_instance_declRange__3___closed__6 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_instance___regBuiltin_Lean_Parser_Attr_instance_declRange__3___closed__6_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_instance___regBuiltin_Lean_Parser_Attr_instance_declRange__3();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_instance___regBuiltin_Lean_Parser_Attr_instance_declRange__3___boxed(lean_object*);
static const lean_closure_object l_Lean_Parser_Attr_instance_formatter___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_mkAntiquot_formatter___boxed, .m_arity = 9, .m_num_fixed = 4, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_instance___closed__0_value),((lean_object*)&l_Lean_Parser_Attr_instance___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Parser_Attr_instance_formatter___closed__0 = (const lean_object*)&l_Lean_Parser_Attr_instance_formatter___closed__0_value;
static const lean_closure_object l_Lean_Parser_Attr_instance_formatter___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_symbol_formatter___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_instance___closed__0_value)} };
static const lean_object* l_Lean_Parser_Attr_instance_formatter___closed__1 = (const lean_object*)&l_Lean_Parser_Attr_instance_formatter___closed__1_value;
static const lean_closure_object l_Lean_Parser_Attr_instance_formatter___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_simple_formatter___closed__0_value),((lean_object*)&l_Lean_Parser_Attr_simple_formatter___closed__3_value)} };
static const lean_object* l_Lean_Parser_Attr_instance_formatter___closed__2 = (const lean_object*)&l_Lean_Parser_Attr_instance_formatter___closed__2_value;
static const lean_closure_object l_Lean_Parser_Attr_instance_formatter___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_optional_formatter___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_instance_formatter___closed__2_value)} };
static const lean_object* l_Lean_Parser_Attr_instance_formatter___closed__3 = (const lean_object*)&l_Lean_Parser_Attr_instance_formatter___closed__3_value;
static const lean_closure_object l_Lean_Parser_Attr_instance_formatter___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_instance_formatter___closed__1_value),((lean_object*)&l_Lean_Parser_Attr_instance_formatter___closed__3_value)} };
static const lean_object* l_Lean_Parser_Attr_instance_formatter___closed__4 = (const lean_object*)&l_Lean_Parser_Attr_instance_formatter___closed__4_value;
static const lean_closure_object l_Lean_Parser_Attr_instance_formatter___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_leadingNode_formatter___boxed, .m_arity = 8, .m_num_fixed = 3, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_instance___closed__1_value),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)&l_Lean_Parser_Attr_instance_formatter___closed__4_value)} };
static const lean_object* l_Lean_Parser_Attr_instance_formatter___closed__5 = (const lean_object*)&l_Lean_Parser_Attr_instance_formatter___closed__5_value;
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_instance_formatter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_instance_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_instance___regBuiltin_Lean_Parser_Attr_instance_formatter__7___closed__0_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_instance___regBuiltin_Lean_Parser_Attr_instance_formatter__7___closed__0_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_instance___regBuiltin_Lean_Parser_Attr_instance_formatter__7___closed__0_value_aux_0),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_instance___regBuiltin_Lean_Parser_Attr_instance_formatter__7___closed__0_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_instance___regBuiltin_Lean_Parser_Attr_instance_formatter__7___closed__0_value_aux_1),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__12_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_instance___regBuiltin_Lean_Parser_Attr_instance_formatter__7___closed__0_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_instance___regBuiltin_Lean_Parser_Attr_instance_formatter__7___closed__0_value_aux_2),((lean_object*)&l_Lean_Parser_Attr_instance___closed__0_value),LEAN_SCALAR_PTR_LITERAL(128, 1, 138, 227, 223, 112, 103, 179)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_instance___regBuiltin_Lean_Parser_Attr_instance_formatter__7___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_instance___regBuiltin_Lean_Parser_Attr_instance_formatter__7___closed__0_value_aux_3),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_formatter__7___closed__0_value),LEAN_SCALAR_PTR_LITERAL(129, 225, 246, 137, 65, 110, 208, 211)}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_instance___regBuiltin_Lean_Parser_Attr_instance_formatter__7___closed__0 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_instance___regBuiltin_Lean_Parser_Attr_instance_formatter__7___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_instance___regBuiltin_Lean_Parser_Attr_instance_formatter__7();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_instance___regBuiltin_Lean_Parser_Attr_instance_formatter__7___boxed(lean_object*);
static const lean_closure_object l_Lean_Parser_Attr_instance_parenthesizer___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_mkAntiquot_parenthesizer___boxed, .m_arity = 9, .m_num_fixed = 4, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_instance___closed__0_value),((lean_object*)&l_Lean_Parser_Attr_instance___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Parser_Attr_instance_parenthesizer___closed__0 = (const lean_object*)&l_Lean_Parser_Attr_instance_parenthesizer___closed__0_value;
static const lean_closure_object l_Lean_Parser_Attr_instance_parenthesizer___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_symbol_parenthesizer___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_instance___closed__0_value)} };
static const lean_object* l_Lean_Parser_Attr_instance_parenthesizer___closed__1 = (const lean_object*)&l_Lean_Parser_Attr_instance_parenthesizer___closed__1_value;
static const lean_closure_object l_Lean_Parser_Attr_instance_parenthesizer___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_simple_parenthesizer___closed__2_value),((lean_object*)&l_Lean_Parser_Attr_simple_parenthesizer___closed__3_value)} };
static const lean_object* l_Lean_Parser_Attr_instance_parenthesizer___closed__2 = (const lean_object*)&l_Lean_Parser_Attr_instance_parenthesizer___closed__2_value;
static const lean_closure_object l_Lean_Parser_Attr_instance_parenthesizer___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_optional_parenthesizer___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_instance_parenthesizer___closed__2_value)} };
static const lean_object* l_Lean_Parser_Attr_instance_parenthesizer___closed__3 = (const lean_object*)&l_Lean_Parser_Attr_instance_parenthesizer___closed__3_value;
static const lean_closure_object l_Lean_Parser_Attr_instance_parenthesizer___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_instance_parenthesizer___closed__1_value),((lean_object*)&l_Lean_Parser_Attr_instance_parenthesizer___closed__3_value)} };
static const lean_object* l_Lean_Parser_Attr_instance_parenthesizer___closed__4 = (const lean_object*)&l_Lean_Parser_Attr_instance_parenthesizer___closed__4_value;
static const lean_closure_object l_Lean_Parser_Attr_instance_parenthesizer___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Parenthesizer_leadingNode_parenthesizer___boxed, .m_arity = 8, .m_num_fixed = 3, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_instance___closed__1_value),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)&l_Lean_Parser_Attr_instance_parenthesizer___closed__4_value)} };
static const lean_object* l_Lean_Parser_Attr_instance_parenthesizer___closed__5 = (const lean_object*)&l_Lean_Parser_Attr_instance_parenthesizer___closed__5_value;
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_instance_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_instance_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_instance___regBuiltin_Lean_Parser_Attr_instance_parenthesizer__11___closed__0_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_instance___regBuiltin_Lean_Parser_Attr_instance_parenthesizer__11___closed__0_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_instance___regBuiltin_Lean_Parser_Attr_instance_parenthesizer__11___closed__0_value_aux_0),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_instance___regBuiltin_Lean_Parser_Attr_instance_parenthesizer__11___closed__0_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_instance___regBuiltin_Lean_Parser_Attr_instance_parenthesizer__11___closed__0_value_aux_1),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__12_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_instance___regBuiltin_Lean_Parser_Attr_instance_parenthesizer__11___closed__0_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_instance___regBuiltin_Lean_Parser_Attr_instance_parenthesizer__11___closed__0_value_aux_2),((lean_object*)&l_Lean_Parser_Attr_instance___closed__0_value),LEAN_SCALAR_PTR_LITERAL(128, 1, 138, 227, 223, 112, 103, 179)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_instance___regBuiltin_Lean_Parser_Attr_instance_parenthesizer__11___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_instance___regBuiltin_Lean_Parser_Attr_instance_parenthesizer__11___closed__0_value_aux_3),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_parenthesizer__11___closed__0_value),LEAN_SCALAR_PTR_LITERAL(165, 44, 88, 85, 16, 38, 144, 111)}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_instance___regBuiltin_Lean_Parser_Attr_instance_parenthesizer__11___closed__0 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_instance___regBuiltin_Lean_Parser_Attr_instance_parenthesizer__11___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_instance___regBuiltin_Lean_Parser_Attr_instance_parenthesizer__11();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_instance___regBuiltin_Lean_Parser_Attr_instance_parenthesizer__11___boxed(lean_object*);
static const lean_string_object l_Lean_Parser_Attr_default__instance___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "default_instance"};
static const lean_object* l_Lean_Parser_Attr_default__instance___closed__0 = (const lean_object*)&l_Lean_Parser_Attr_default__instance___closed__0_value;
static const lean_ctor_object l_Lean_Parser_Attr_default__instance___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_Attr_default__instance___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_default__instance___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_Attr_default__instance___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_default__instance___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__12_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l_Lean_Parser_Attr_default__instance___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_default__instance___closed__1_value_aux_2),((lean_object*)&l_Lean_Parser_Attr_default__instance___closed__0_value),LEAN_SCALAR_PTR_LITERAL(225, 215, 188, 14, 80, 67, 224, 116)}};
static const lean_object* l_Lean_Parser_Attr_default__instance___closed__1 = (const lean_object*)&l_Lean_Parser_Attr_default__instance___closed__1_value;
static lean_once_cell_t l_Lean_Parser_Attr_default__instance___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_default__instance___closed__2;
static lean_once_cell_t l_Lean_Parser_Attr_default__instance___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_default__instance___closed__3;
static lean_once_cell_t l_Lean_Parser_Attr_default__instance___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_default__instance___closed__4;
static lean_once_cell_t l_Lean_Parser_Attr_default__instance___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_default__instance___closed__5;
static lean_once_cell_t l_Lean_Parser_Attr_default__instance___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_default__instance___closed__6;
static lean_once_cell_t l_Lean_Parser_Attr_default__instance___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_default__instance___closed__7;
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_default__instance;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_default__instance___regBuiltin_Lean_Parser_Attr_default__instance__1();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_default__instance___regBuiltin_Lean_Parser_Attr_default__instance__1___boxed(lean_object*);
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_default__instance___regBuiltin_Lean_Parser_Attr_default__instance_declRange__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(45) << 1) | 1)),((lean_object*)(((size_t)(23) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_default__instance___regBuiltin_Lean_Parser_Attr_default__instance_declRange__3___closed__0 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_default__instance___regBuiltin_Lean_Parser_Attr_default__instance_declRange__3___closed__0_value;
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_default__instance___regBuiltin_Lean_Parser_Attr_default__instance_declRange__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(45) << 1) | 1)),((lean_object*)(((size_t)(138) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_default__instance___regBuiltin_Lean_Parser_Attr_default__instance_declRange__3___closed__1 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_default__instance___regBuiltin_Lean_Parser_Attr_default__instance_declRange__3___closed__1_value;
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_default__instance___regBuiltin_Lean_Parser_Attr_default__instance_declRange__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_default__instance___regBuiltin_Lean_Parser_Attr_default__instance_declRange__3___closed__0_value),((lean_object*)(((size_t)(23) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_default__instance___regBuiltin_Lean_Parser_Attr_default__instance_declRange__3___closed__1_value),((lean_object*)(((size_t)(138) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_default__instance___regBuiltin_Lean_Parser_Attr_default__instance_declRange__3___closed__2 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_default__instance___regBuiltin_Lean_Parser_Attr_default__instance_declRange__3___closed__2_value;
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_default__instance___regBuiltin_Lean_Parser_Attr_default__instance_declRange__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(45) << 1) | 1)),((lean_object*)(((size_t)(27) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_default__instance___regBuiltin_Lean_Parser_Attr_default__instance_declRange__3___closed__3 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_default__instance___regBuiltin_Lean_Parser_Attr_default__instance_declRange__3___closed__3_value;
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_default__instance___regBuiltin_Lean_Parser_Attr_default__instance_declRange__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(45) << 1) | 1)),((lean_object*)(((size_t)(43) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_default__instance___regBuiltin_Lean_Parser_Attr_default__instance_declRange__3___closed__4 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_default__instance___regBuiltin_Lean_Parser_Attr_default__instance_declRange__3___closed__4_value;
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_default__instance___regBuiltin_Lean_Parser_Attr_default__instance_declRange__3___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_default__instance___regBuiltin_Lean_Parser_Attr_default__instance_declRange__3___closed__3_value),((lean_object*)(((size_t)(27) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_default__instance___regBuiltin_Lean_Parser_Attr_default__instance_declRange__3___closed__4_value),((lean_object*)(((size_t)(43) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_default__instance___regBuiltin_Lean_Parser_Attr_default__instance_declRange__3___closed__5 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_default__instance___regBuiltin_Lean_Parser_Attr_default__instance_declRange__3___closed__5_value;
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_default__instance___regBuiltin_Lean_Parser_Attr_default__instance_declRange__3___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_default__instance___regBuiltin_Lean_Parser_Attr_default__instance_declRange__3___closed__2_value),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_default__instance___regBuiltin_Lean_Parser_Attr_default__instance_declRange__3___closed__5_value)}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_default__instance___regBuiltin_Lean_Parser_Attr_default__instance_declRange__3___closed__6 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_default__instance___regBuiltin_Lean_Parser_Attr_default__instance_declRange__3___closed__6_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_default__instance___regBuiltin_Lean_Parser_Attr_default__instance_declRange__3();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_default__instance___regBuiltin_Lean_Parser_Attr_default__instance_declRange__3___boxed(lean_object*);
static const lean_closure_object l_Lean_Parser_Attr_default__instance_formatter___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_mkAntiquot_formatter___boxed, .m_arity = 9, .m_num_fixed = 4, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_default__instance___closed__0_value),((lean_object*)&l_Lean_Parser_Attr_default__instance___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Parser_Attr_default__instance_formatter___closed__0 = (const lean_object*)&l_Lean_Parser_Attr_default__instance_formatter___closed__0_value;
static const lean_closure_object l_Lean_Parser_Attr_default__instance_formatter___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_nonReservedSymbol_formatter___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_default__instance___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Parser_Attr_default__instance_formatter___closed__1 = (const lean_object*)&l_Lean_Parser_Attr_default__instance_formatter___closed__1_value;
static const lean_closure_object l_Lean_Parser_Attr_default__instance_formatter___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_default__instance_formatter___closed__1_value),((lean_object*)&l_Lean_Parser_Attr_instance_formatter___closed__3_value)} };
static const lean_object* l_Lean_Parser_Attr_default__instance_formatter___closed__2 = (const lean_object*)&l_Lean_Parser_Attr_default__instance_formatter___closed__2_value;
static const lean_closure_object l_Lean_Parser_Attr_default__instance_formatter___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_leadingNode_formatter___boxed, .m_arity = 8, .m_num_fixed = 3, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_default__instance___closed__1_value),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)&l_Lean_Parser_Attr_default__instance_formatter___closed__2_value)} };
static const lean_object* l_Lean_Parser_Attr_default__instance_formatter___closed__3 = (const lean_object*)&l_Lean_Parser_Attr_default__instance_formatter___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_default__instance_formatter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_default__instance_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_default__instance___regBuiltin_Lean_Parser_Attr_default__instance_formatter__7___closed__0_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_default__instance___regBuiltin_Lean_Parser_Attr_default__instance_formatter__7___closed__0_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_default__instance___regBuiltin_Lean_Parser_Attr_default__instance_formatter__7___closed__0_value_aux_0),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_default__instance___regBuiltin_Lean_Parser_Attr_default__instance_formatter__7___closed__0_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_default__instance___regBuiltin_Lean_Parser_Attr_default__instance_formatter__7___closed__0_value_aux_1),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__12_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_default__instance___regBuiltin_Lean_Parser_Attr_default__instance_formatter__7___closed__0_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_default__instance___regBuiltin_Lean_Parser_Attr_default__instance_formatter__7___closed__0_value_aux_2),((lean_object*)&l_Lean_Parser_Attr_default__instance___closed__0_value),LEAN_SCALAR_PTR_LITERAL(225, 215, 188, 14, 80, 67, 224, 116)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_default__instance___regBuiltin_Lean_Parser_Attr_default__instance_formatter__7___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_default__instance___regBuiltin_Lean_Parser_Attr_default__instance_formatter__7___closed__0_value_aux_3),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_formatter__7___closed__0_value),LEAN_SCALAR_PTR_LITERAL(140, 112, 171, 71, 131, 75, 3, 107)}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_default__instance___regBuiltin_Lean_Parser_Attr_default__instance_formatter__7___closed__0 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_default__instance___regBuiltin_Lean_Parser_Attr_default__instance_formatter__7___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_default__instance___regBuiltin_Lean_Parser_Attr_default__instance_formatter__7();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_default__instance___regBuiltin_Lean_Parser_Attr_default__instance_formatter__7___boxed(lean_object*);
static const lean_closure_object l_Lean_Parser_Attr_default__instance_parenthesizer___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_mkAntiquot_parenthesizer___boxed, .m_arity = 9, .m_num_fixed = 4, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_default__instance___closed__0_value),((lean_object*)&l_Lean_Parser_Attr_default__instance___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Parser_Attr_default__instance_parenthesizer___closed__0 = (const lean_object*)&l_Lean_Parser_Attr_default__instance_parenthesizer___closed__0_value;
static const lean_closure_object l_Lean_Parser_Attr_default__instance_parenthesizer___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_nonReservedSymbol_parenthesizer___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_default__instance___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Parser_Attr_default__instance_parenthesizer___closed__1 = (const lean_object*)&l_Lean_Parser_Attr_default__instance_parenthesizer___closed__1_value;
static const lean_closure_object l_Lean_Parser_Attr_default__instance_parenthesizer___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_default__instance_parenthesizer___closed__1_value),((lean_object*)&l_Lean_Parser_Attr_instance_parenthesizer___closed__3_value)} };
static const lean_object* l_Lean_Parser_Attr_default__instance_parenthesizer___closed__2 = (const lean_object*)&l_Lean_Parser_Attr_default__instance_parenthesizer___closed__2_value;
static const lean_closure_object l_Lean_Parser_Attr_default__instance_parenthesizer___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Parenthesizer_leadingNode_parenthesizer___boxed, .m_arity = 8, .m_num_fixed = 3, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_default__instance___closed__1_value),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)&l_Lean_Parser_Attr_default__instance_parenthesizer___closed__2_value)} };
static const lean_object* l_Lean_Parser_Attr_default__instance_parenthesizer___closed__3 = (const lean_object*)&l_Lean_Parser_Attr_default__instance_parenthesizer___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_default__instance_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_default__instance_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_default__instance___regBuiltin_Lean_Parser_Attr_default__instance_parenthesizer__11___closed__0_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_default__instance___regBuiltin_Lean_Parser_Attr_default__instance_parenthesizer__11___closed__0_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_default__instance___regBuiltin_Lean_Parser_Attr_default__instance_parenthesizer__11___closed__0_value_aux_0),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_default__instance___regBuiltin_Lean_Parser_Attr_default__instance_parenthesizer__11___closed__0_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_default__instance___regBuiltin_Lean_Parser_Attr_default__instance_parenthesizer__11___closed__0_value_aux_1),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__12_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_default__instance___regBuiltin_Lean_Parser_Attr_default__instance_parenthesizer__11___closed__0_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_default__instance___regBuiltin_Lean_Parser_Attr_default__instance_parenthesizer__11___closed__0_value_aux_2),((lean_object*)&l_Lean_Parser_Attr_default__instance___closed__0_value),LEAN_SCALAR_PTR_LITERAL(225, 215, 188, 14, 80, 67, 224, 116)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_default__instance___regBuiltin_Lean_Parser_Attr_default__instance_parenthesizer__11___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_default__instance___regBuiltin_Lean_Parser_Attr_default__instance_parenthesizer__11___closed__0_value_aux_3),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_parenthesizer__11___closed__0_value),LEAN_SCALAR_PTR_LITERAL(112, 170, 216, 200, 27, 58, 15, 9)}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_default__instance___regBuiltin_Lean_Parser_Attr_default__instance_parenthesizer__11___closed__0 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_default__instance___regBuiltin_Lean_Parser_Attr_default__instance_parenthesizer__11___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_default__instance___regBuiltin_Lean_Parser_Attr_default__instance_parenthesizer__11();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_default__instance___regBuiltin_Lean_Parser_Attr_default__instance_parenthesizer__11___boxed(lean_object*);
static const lean_string_object l_Lean_Parser_Attr_specialize___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "specialize"};
static const lean_object* l_Lean_Parser_Attr_specialize___closed__0 = (const lean_object*)&l_Lean_Parser_Attr_specialize___closed__0_value;
static const lean_ctor_object l_Lean_Parser_Attr_specialize___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_Attr_specialize___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_specialize___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_Attr_specialize___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_specialize___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__12_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l_Lean_Parser_Attr_specialize___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_specialize___closed__1_value_aux_2),((lean_object*)&l_Lean_Parser_Attr_specialize___closed__0_value),LEAN_SCALAR_PTR_LITERAL(37, 28, 50, 2, 100, 118, 84, 52)}};
static const lean_object* l_Lean_Parser_Attr_specialize___closed__1 = (const lean_object*)&l_Lean_Parser_Attr_specialize___closed__1_value;
static lean_once_cell_t l_Lean_Parser_Attr_specialize___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_specialize___closed__2;
static lean_once_cell_t l_Lean_Parser_Attr_specialize___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_specialize___closed__3;
static lean_once_cell_t l_Lean_Parser_Attr_specialize___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_specialize___closed__4;
static lean_once_cell_t l_Lean_Parser_Attr_specialize___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_specialize___closed__5;
static lean_once_cell_t l_Lean_Parser_Attr_specialize___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_specialize___closed__6;
static lean_once_cell_t l_Lean_Parser_Attr_specialize___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_specialize___closed__7;
static lean_once_cell_t l_Lean_Parser_Attr_specialize___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_specialize___closed__8;
static lean_once_cell_t l_Lean_Parser_Attr_specialize___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_specialize___closed__9;
static lean_once_cell_t l_Lean_Parser_Attr_specialize___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_specialize___closed__10;
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_specialize;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_specialize___regBuiltin_Lean_Parser_Attr_specialize__1();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_specialize___regBuiltin_Lean_Parser_Attr_specialize__1___boxed(lean_object*);
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_specialize___regBuiltin_Lean_Parser_Attr_specialize_declRange__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(46) << 1) | 1)),((lean_object*)(((size_t)(23) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_specialize___regBuiltin_Lean_Parser_Attr_specialize_declRange__3___closed__0 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_specialize___regBuiltin_Lean_Parser_Attr_specialize_declRange__3___closed__0_value;
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_specialize___regBuiltin_Lean_Parser_Attr_specialize_declRange__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(46) << 1) | 1)),((lean_object*)(((size_t)(134) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_specialize___regBuiltin_Lean_Parser_Attr_specialize_declRange__3___closed__1 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_specialize___regBuiltin_Lean_Parser_Attr_specialize_declRange__3___closed__1_value;
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_specialize___regBuiltin_Lean_Parser_Attr_specialize_declRange__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_specialize___regBuiltin_Lean_Parser_Attr_specialize_declRange__3___closed__0_value),((lean_object*)(((size_t)(23) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_specialize___regBuiltin_Lean_Parser_Attr_specialize_declRange__3___closed__1_value),((lean_object*)(((size_t)(134) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_specialize___regBuiltin_Lean_Parser_Attr_specialize_declRange__3___closed__2 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_specialize___regBuiltin_Lean_Parser_Attr_specialize_declRange__3___closed__2_value;
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_specialize___regBuiltin_Lean_Parser_Attr_specialize_declRange__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(46) << 1) | 1)),((lean_object*)(((size_t)(27) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_specialize___regBuiltin_Lean_Parser_Attr_specialize_declRange__3___closed__3 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_specialize___regBuiltin_Lean_Parser_Attr_specialize_declRange__3___closed__3_value;
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_specialize___regBuiltin_Lean_Parser_Attr_specialize_declRange__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(46) << 1) | 1)),((lean_object*)(((size_t)(39) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_specialize___regBuiltin_Lean_Parser_Attr_specialize_declRange__3___closed__4 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_specialize___regBuiltin_Lean_Parser_Attr_specialize_declRange__3___closed__4_value;
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_specialize___regBuiltin_Lean_Parser_Attr_specialize_declRange__3___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_specialize___regBuiltin_Lean_Parser_Attr_specialize_declRange__3___closed__3_value),((lean_object*)(((size_t)(27) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_specialize___regBuiltin_Lean_Parser_Attr_specialize_declRange__3___closed__4_value),((lean_object*)(((size_t)(39) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_specialize___regBuiltin_Lean_Parser_Attr_specialize_declRange__3___closed__5 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_specialize___regBuiltin_Lean_Parser_Attr_specialize_declRange__3___closed__5_value;
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_specialize___regBuiltin_Lean_Parser_Attr_specialize_declRange__3___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_specialize___regBuiltin_Lean_Parser_Attr_specialize_declRange__3___closed__2_value),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_specialize___regBuiltin_Lean_Parser_Attr_specialize_declRange__3___closed__5_value)}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_specialize___regBuiltin_Lean_Parser_Attr_specialize_declRange__3___closed__6 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_specialize___regBuiltin_Lean_Parser_Attr_specialize_declRange__3___closed__6_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_specialize___regBuiltin_Lean_Parser_Attr_specialize_declRange__3();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_specialize___regBuiltin_Lean_Parser_Attr_specialize_declRange__3___boxed(lean_object*);
static const lean_closure_object l_Lean_Parser_Attr_specialize_formatter___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_mkAntiquot_formatter___boxed, .m_arity = 9, .m_num_fixed = 4, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_specialize___closed__0_value),((lean_object*)&l_Lean_Parser_Attr_specialize___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Parser_Attr_specialize_formatter___closed__0 = (const lean_object*)&l_Lean_Parser_Attr_specialize_formatter___closed__0_value;
static const lean_closure_object l_Lean_Parser_Attr_specialize_formatter___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_nonReservedSymbol_formatter___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_specialize___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Parser_Attr_specialize_formatter___closed__1 = (const lean_object*)&l_Lean_Parser_Attr_specialize_formatter___closed__1_value;
static const lean_closure_object l_Lean_Parser_Attr_specialize_formatter___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Formatter_orelse_formatter___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_simple_formatter___closed__2_value),((lean_object*)&l_Lean_Parser_Priority_numPrio_formatter___closed__0_value)} };
static const lean_object* l_Lean_Parser_Attr_specialize_formatter___closed__2 = (const lean_object*)&l_Lean_Parser_Attr_specialize_formatter___closed__2_value;
static const lean_closure_object l_Lean_Parser_Attr_specialize_formatter___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_simple_formatter___closed__0_value),((lean_object*)&l_Lean_Parser_Attr_specialize_formatter___closed__2_value)} };
static const lean_object* l_Lean_Parser_Attr_specialize_formatter___closed__3 = (const lean_object*)&l_Lean_Parser_Attr_specialize_formatter___closed__3_value;
static const lean_closure_object l_Lean_Parser_Attr_specialize_formatter___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_many_formatter___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_specialize_formatter___closed__3_value)} };
static const lean_object* l_Lean_Parser_Attr_specialize_formatter___closed__4 = (const lean_object*)&l_Lean_Parser_Attr_specialize_formatter___closed__4_value;
static const lean_closure_object l_Lean_Parser_Attr_specialize_formatter___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_specialize_formatter___closed__1_value),((lean_object*)&l_Lean_Parser_Attr_specialize_formatter___closed__4_value)} };
static const lean_object* l_Lean_Parser_Attr_specialize_formatter___closed__5 = (const lean_object*)&l_Lean_Parser_Attr_specialize_formatter___closed__5_value;
static const lean_closure_object l_Lean_Parser_Attr_specialize_formatter___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_leadingNode_formatter___boxed, .m_arity = 8, .m_num_fixed = 3, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_specialize___closed__1_value),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)&l_Lean_Parser_Attr_specialize_formatter___closed__5_value)} };
static const lean_object* l_Lean_Parser_Attr_specialize_formatter___closed__6 = (const lean_object*)&l_Lean_Parser_Attr_specialize_formatter___closed__6_value;
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_specialize_formatter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_specialize_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_specialize___regBuiltin_Lean_Parser_Attr_specialize_formatter__7___closed__0_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_specialize___regBuiltin_Lean_Parser_Attr_specialize_formatter__7___closed__0_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_specialize___regBuiltin_Lean_Parser_Attr_specialize_formatter__7___closed__0_value_aux_0),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_specialize___regBuiltin_Lean_Parser_Attr_specialize_formatter__7___closed__0_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_specialize___regBuiltin_Lean_Parser_Attr_specialize_formatter__7___closed__0_value_aux_1),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__12_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_specialize___regBuiltin_Lean_Parser_Attr_specialize_formatter__7___closed__0_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_specialize___regBuiltin_Lean_Parser_Attr_specialize_formatter__7___closed__0_value_aux_2),((lean_object*)&l_Lean_Parser_Attr_specialize___closed__0_value),LEAN_SCALAR_PTR_LITERAL(37, 28, 50, 2, 100, 118, 84, 52)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_specialize___regBuiltin_Lean_Parser_Attr_specialize_formatter__7___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_specialize___regBuiltin_Lean_Parser_Attr_specialize_formatter__7___closed__0_value_aux_3),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_formatter__7___closed__0_value),LEAN_SCALAR_PTR_LITERAL(120, 88, 144, 13, 224, 198, 112, 184)}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_specialize___regBuiltin_Lean_Parser_Attr_specialize_formatter__7___closed__0 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_specialize___regBuiltin_Lean_Parser_Attr_specialize_formatter__7___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_specialize___regBuiltin_Lean_Parser_Attr_specialize_formatter__7();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_specialize___regBuiltin_Lean_Parser_Attr_specialize_formatter__7___boxed(lean_object*);
static const lean_closure_object l_Lean_Parser_Attr_specialize_parenthesizer___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_mkAntiquot_parenthesizer___boxed, .m_arity = 9, .m_num_fixed = 4, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_specialize___closed__0_value),((lean_object*)&l_Lean_Parser_Attr_specialize___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Parser_Attr_specialize_parenthesizer___closed__0 = (const lean_object*)&l_Lean_Parser_Attr_specialize_parenthesizer___closed__0_value;
static const lean_closure_object l_Lean_Parser_Attr_specialize_parenthesizer___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_nonReservedSymbol_parenthesizer___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_specialize___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Parser_Attr_specialize_parenthesizer___closed__1 = (const lean_object*)&l_Lean_Parser_Attr_specialize_parenthesizer___closed__1_value;
static const lean_closure_object l_Lean_Parser_Attr_specialize_parenthesizer___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Parenthesizer_orelse_parenthesizer___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_simple_parenthesizer___closed__1_value),((lean_object*)&l_Lean_Parser_Priority_numPrio_parenthesizer___closed__1_value)} };
static const lean_object* l_Lean_Parser_Attr_specialize_parenthesizer___closed__2 = (const lean_object*)&l_Lean_Parser_Attr_specialize_parenthesizer___closed__2_value;
static const lean_closure_object l_Lean_Parser_Attr_specialize_parenthesizer___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_simple_parenthesizer___closed__2_value),((lean_object*)&l_Lean_Parser_Attr_specialize_parenthesizer___closed__2_value)} };
static const lean_object* l_Lean_Parser_Attr_specialize_parenthesizer___closed__3 = (const lean_object*)&l_Lean_Parser_Attr_specialize_parenthesizer___closed__3_value;
static const lean_closure_object l_Lean_Parser_Attr_specialize_parenthesizer___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_many_parenthesizer___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_specialize_parenthesizer___closed__3_value)} };
static const lean_object* l_Lean_Parser_Attr_specialize_parenthesizer___closed__4 = (const lean_object*)&l_Lean_Parser_Attr_specialize_parenthesizer___closed__4_value;
static const lean_closure_object l_Lean_Parser_Attr_specialize_parenthesizer___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_specialize_parenthesizer___closed__1_value),((lean_object*)&l_Lean_Parser_Attr_specialize_parenthesizer___closed__4_value)} };
static const lean_object* l_Lean_Parser_Attr_specialize_parenthesizer___closed__5 = (const lean_object*)&l_Lean_Parser_Attr_specialize_parenthesizer___closed__5_value;
static const lean_closure_object l_Lean_Parser_Attr_specialize_parenthesizer___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Parenthesizer_leadingNode_parenthesizer___boxed, .m_arity = 8, .m_num_fixed = 3, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_specialize___closed__1_value),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)&l_Lean_Parser_Attr_specialize_parenthesizer___closed__5_value)} };
static const lean_object* l_Lean_Parser_Attr_specialize_parenthesizer___closed__6 = (const lean_object*)&l_Lean_Parser_Attr_specialize_parenthesizer___closed__6_value;
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_specialize_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_specialize_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_specialize___regBuiltin_Lean_Parser_Attr_specialize_parenthesizer__11___closed__0_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_specialize___regBuiltin_Lean_Parser_Attr_specialize_parenthesizer__11___closed__0_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_specialize___regBuiltin_Lean_Parser_Attr_specialize_parenthesizer__11___closed__0_value_aux_0),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_specialize___regBuiltin_Lean_Parser_Attr_specialize_parenthesizer__11___closed__0_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_specialize___regBuiltin_Lean_Parser_Attr_specialize_parenthesizer__11___closed__0_value_aux_1),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__12_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_specialize___regBuiltin_Lean_Parser_Attr_specialize_parenthesizer__11___closed__0_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_specialize___regBuiltin_Lean_Parser_Attr_specialize_parenthesizer__11___closed__0_value_aux_2),((lean_object*)&l_Lean_Parser_Attr_specialize___closed__0_value),LEAN_SCALAR_PTR_LITERAL(37, 28, 50, 2, 100, 118, 84, 52)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_specialize___regBuiltin_Lean_Parser_Attr_specialize_parenthesizer__11___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_specialize___regBuiltin_Lean_Parser_Attr_specialize_parenthesizer__11___closed__0_value_aux_3),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_parenthesizer__11___closed__0_value),LEAN_SCALAR_PTR_LITERAL(132, 146, 129, 38, 159, 182, 72, 140)}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_specialize___regBuiltin_Lean_Parser_Attr_specialize_parenthesizer__11___closed__0 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_specialize___regBuiltin_Lean_Parser_Attr_specialize_parenthesizer__11___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_specialize___regBuiltin_Lean_Parser_Attr_specialize_parenthesizer__11();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_specialize___regBuiltin_Lean_Parser_Attr_specialize_parenthesizer__11___boxed(lean_object*);
static const lean_string_object l_Lean_Parser_Attr_externEntry___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "externEntry"};
static const lean_object* l_Lean_Parser_Attr_externEntry___closed__0 = (const lean_object*)&l_Lean_Parser_Attr_externEntry___closed__0_value;
static const lean_ctor_object l_Lean_Parser_Attr_externEntry___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_Attr_externEntry___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_externEntry___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_Attr_externEntry___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_externEntry___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__12_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l_Lean_Parser_Attr_externEntry___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_externEntry___closed__1_value_aux_2),((lean_object*)&l_Lean_Parser_Attr_externEntry___closed__0_value),LEAN_SCALAR_PTR_LITERAL(115, 120, 255, 6, 244, 195, 179, 180)}};
static const lean_object* l_Lean_Parser_Attr_externEntry___closed__1 = (const lean_object*)&l_Lean_Parser_Attr_externEntry___closed__1_value;
static lean_once_cell_t l_Lean_Parser_Attr_externEntry___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_externEntry___closed__2;
static lean_once_cell_t l_Lean_Parser_Attr_externEntry___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_externEntry___closed__3;
static lean_once_cell_t l_Lean_Parser_Attr_externEntry___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_externEntry___closed__4;
static const lean_string_object l_Lean_Parser_Attr_externEntry___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "inline "};
static const lean_object* l_Lean_Parser_Attr_externEntry___closed__5 = (const lean_object*)&l_Lean_Parser_Attr_externEntry___closed__5_value;
static lean_once_cell_t l_Lean_Parser_Attr_externEntry___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_externEntry___closed__6;
static lean_once_cell_t l_Lean_Parser_Attr_externEntry___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_externEntry___closed__7;
static lean_once_cell_t l_Lean_Parser_Attr_externEntry___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_externEntry___closed__8;
static lean_once_cell_t l_Lean_Parser_Attr_externEntry___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_externEntry___closed__9;
static lean_once_cell_t l_Lean_Parser_Attr_externEntry___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_externEntry___closed__10;
static lean_once_cell_t l_Lean_Parser_Attr_externEntry___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_externEntry___closed__11;
static lean_once_cell_t l_Lean_Parser_Attr_externEntry___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_externEntry___closed__12;
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_externEntry;
static const lean_string_object l_Lean_Parser_Attr_extern___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "extern"};
static const lean_object* l_Lean_Parser_Attr_extern___closed__0 = (const lean_object*)&l_Lean_Parser_Attr_extern___closed__0_value;
static const lean_ctor_object l_Lean_Parser_Attr_extern___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_Attr_extern___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_extern___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_Attr_extern___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_extern___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__12_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l_Lean_Parser_Attr_extern___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_extern___closed__1_value_aux_2),((lean_object*)&l_Lean_Parser_Attr_extern___closed__0_value),LEAN_SCALAR_PTR_LITERAL(174, 126, 252, 124, 35, 62, 180, 112)}};
static const lean_object* l_Lean_Parser_Attr_extern___closed__1 = (const lean_object*)&l_Lean_Parser_Attr_extern___closed__1_value;
static lean_once_cell_t l_Lean_Parser_Attr_extern___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_extern___closed__2;
static lean_once_cell_t l_Lean_Parser_Attr_extern___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_extern___closed__3;
static lean_once_cell_t l_Lean_Parser_Attr_extern___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_extern___closed__4;
static lean_once_cell_t l_Lean_Parser_Attr_extern___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_extern___closed__5;
static lean_once_cell_t l_Lean_Parser_Attr_extern___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_extern___closed__6;
static lean_once_cell_t l_Lean_Parser_Attr_extern___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_extern___closed__7;
static lean_once_cell_t l_Lean_Parser_Attr_extern___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_extern___closed__8;
static lean_once_cell_t l_Lean_Parser_Attr_extern___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_extern___closed__9;
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_extern;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_extern__1();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_extern__1___boxed(lean_object*);
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_extern_declRange__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(50) << 1) | 1)),((lean_object*)(((size_t)(23) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_extern_declRange__3___closed__0 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_extern_declRange__3___closed__0_value;
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_extern_declRange__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(51) << 1) | 1)),((lean_object*)(((size_t)(93) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_extern_declRange__3___closed__1 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_extern_declRange__3___closed__1_value;
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_extern_declRange__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_extern_declRange__3___closed__0_value),((lean_object*)(((size_t)(23) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_extern_declRange__3___closed__1_value),((lean_object*)(((size_t)(93) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_extern_declRange__3___closed__2 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_extern_declRange__3___closed__2_value;
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_extern_declRange__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(50) << 1) | 1)),((lean_object*)(((size_t)(27) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_extern_declRange__3___closed__3 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_extern_declRange__3___closed__3_value;
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_extern_declRange__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(50) << 1) | 1)),((lean_object*)(((size_t)(33) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_extern_declRange__3___closed__4 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_extern_declRange__3___closed__4_value;
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_extern_declRange__3___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_extern_declRange__3___closed__3_value),((lean_object*)(((size_t)(27) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_extern_declRange__3___closed__4_value),((lean_object*)(((size_t)(33) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_extern_declRange__3___closed__5 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_extern_declRange__3___closed__5_value;
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_extern_declRange__3___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_extern_declRange__3___closed__2_value),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_extern_declRange__3___closed__5_value)}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_extern_declRange__3___closed__6 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_extern_declRange__3___closed__6_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_extern_declRange__3();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_extern_declRange__3___boxed(lean_object*);
static const lean_closure_object l_Lean_Parser_Attr_externEntry_formatter___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_mkAntiquot_formatter___boxed, .m_arity = 9, .m_num_fixed = 4, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_externEntry___closed__0_value),((lean_object*)&l_Lean_Parser_Attr_externEntry___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Parser_Attr_externEntry_formatter___closed__0 = (const lean_object*)&l_Lean_Parser_Attr_externEntry_formatter___closed__0_value;
static const lean_closure_object l_Lean_Parser_Attr_externEntry_formatter___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_simple_formatter___closed__2_value),((lean_object*)&l_Lean_Parser_Attr_simple_formatter___closed__0_value)} };
static const lean_object* l_Lean_Parser_Attr_externEntry_formatter___closed__1 = (const lean_object*)&l_Lean_Parser_Attr_externEntry_formatter___closed__1_value;
static const lean_closure_object l_Lean_Parser_Attr_externEntry_formatter___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_optional_formatter___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_externEntry_formatter___closed__1_value)} };
static const lean_object* l_Lean_Parser_Attr_externEntry_formatter___closed__2 = (const lean_object*)&l_Lean_Parser_Attr_externEntry_formatter___closed__2_value;
static const lean_closure_object l_Lean_Parser_Attr_externEntry_formatter___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_nonReservedSymbol_formatter___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_externEntry___closed__5_value),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Parser_Attr_externEntry_formatter___closed__3 = (const lean_object*)&l_Lean_Parser_Attr_externEntry_formatter___closed__3_value;
static const lean_closure_object l_Lean_Parser_Attr_externEntry_formatter___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_optional_formatter___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_externEntry_formatter___closed__3_value)} };
static const lean_object* l_Lean_Parser_Attr_externEntry_formatter___closed__4 = (const lean_object*)&l_Lean_Parser_Attr_externEntry_formatter___closed__4_value;
static const lean_closure_object l_Lean_Parser_Attr_externEntry_formatter___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_strLit_formatter___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Parser_Attr_externEntry_formatter___closed__5 = (const lean_object*)&l_Lean_Parser_Attr_externEntry_formatter___closed__5_value;
static const lean_closure_object l_Lean_Parser_Attr_externEntry_formatter___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_externEntry_formatter___closed__4_value),((lean_object*)&l_Lean_Parser_Attr_externEntry_formatter___closed__5_value)} };
static const lean_object* l_Lean_Parser_Attr_externEntry_formatter___closed__6 = (const lean_object*)&l_Lean_Parser_Attr_externEntry_formatter___closed__6_value;
static const lean_closure_object l_Lean_Parser_Attr_externEntry_formatter___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_externEntry_formatter___closed__2_value),((lean_object*)&l_Lean_Parser_Attr_externEntry_formatter___closed__6_value)} };
static const lean_object* l_Lean_Parser_Attr_externEntry_formatter___closed__7 = (const lean_object*)&l_Lean_Parser_Attr_externEntry_formatter___closed__7_value;
static const lean_closure_object l_Lean_Parser_Attr_externEntry_formatter___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_leadingNode_formatter___boxed, .m_arity = 8, .m_num_fixed = 3, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_externEntry___closed__1_value),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)&l_Lean_Parser_Attr_externEntry_formatter___closed__7_value)} };
static const lean_object* l_Lean_Parser_Attr_externEntry_formatter___closed__8 = (const lean_object*)&l_Lean_Parser_Attr_externEntry_formatter___closed__8_value;
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_externEntry_formatter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_externEntry_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_externEntry_formatter__7___closed__0_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_externEntry_formatter__7___closed__0_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_externEntry_formatter__7___closed__0_value_aux_0),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_externEntry_formatter__7___closed__0_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_externEntry_formatter__7___closed__0_value_aux_1),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__12_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_externEntry_formatter__7___closed__0_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_externEntry_formatter__7___closed__0_value_aux_2),((lean_object*)&l_Lean_Parser_Attr_externEntry___closed__0_value),LEAN_SCALAR_PTR_LITERAL(115, 120, 255, 6, 244, 195, 179, 180)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_externEntry_formatter__7___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_externEntry_formatter__7___closed__0_value_aux_3),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_formatter__7___closed__0_value),LEAN_SCALAR_PTR_LITERAL(230, 209, 196, 10, 229, 104, 88, 235)}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_externEntry_formatter__7___closed__0 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_externEntry_formatter__7___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_externEntry_formatter__7();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_externEntry_formatter__7___boxed(lean_object*);
static const lean_closure_object l_Lean_Parser_Attr_extern_formatter___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_mkAntiquot_formatter___boxed, .m_arity = 9, .m_num_fixed = 4, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_extern___closed__0_value),((lean_object*)&l_Lean_Parser_Attr_extern___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Parser_Attr_extern_formatter___closed__0 = (const lean_object*)&l_Lean_Parser_Attr_extern_formatter___closed__0_value;
static const lean_closure_object l_Lean_Parser_Attr_extern_formatter___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_nonReservedSymbol_formatter___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_extern___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Parser_Attr_extern_formatter___closed__1 = (const lean_object*)&l_Lean_Parser_Attr_extern_formatter___closed__1_value;
static lean_once_cell_t l_Lean_Parser_Attr_extern_formatter___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_extern_formatter___closed__2;
static lean_once_cell_t l_Lean_Parser_Attr_extern_formatter___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_extern_formatter___closed__3;
static lean_once_cell_t l_Lean_Parser_Attr_extern_formatter___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_extern_formatter___closed__4;
static lean_once_cell_t l_Lean_Parser_Attr_extern_formatter___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_extern_formatter___closed__5;
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_extern_formatter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_extern_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_extern_formatter__11___closed__0_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_extern_formatter__11___closed__0_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_extern_formatter__11___closed__0_value_aux_0),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_extern_formatter__11___closed__0_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_extern_formatter__11___closed__0_value_aux_1),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__12_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_extern_formatter__11___closed__0_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_extern_formatter__11___closed__0_value_aux_2),((lean_object*)&l_Lean_Parser_Attr_extern___closed__0_value),LEAN_SCALAR_PTR_LITERAL(174, 126, 252, 124, 35, 62, 180, 112)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_extern_formatter__11___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_extern_formatter__11___closed__0_value_aux_3),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_formatter__7___closed__0_value),LEAN_SCALAR_PTR_LITERAL(15, 8, 91, 19, 215, 171, 128, 249)}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_extern_formatter__11___closed__0 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_extern_formatter__11___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_extern_formatter__11();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_extern_formatter__11___boxed(lean_object*);
static const lean_closure_object l_Lean_Parser_Attr_externEntry_parenthesizer___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_mkAntiquot_parenthesizer___boxed, .m_arity = 9, .m_num_fixed = 4, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_externEntry___closed__0_value),((lean_object*)&l_Lean_Parser_Attr_externEntry___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Parser_Attr_externEntry_parenthesizer___closed__0 = (const lean_object*)&l_Lean_Parser_Attr_externEntry_parenthesizer___closed__0_value;
static const lean_closure_object l_Lean_Parser_Attr_externEntry_parenthesizer___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_simple_parenthesizer___closed__1_value),((lean_object*)&l_Lean_Parser_Attr_simple_parenthesizer___closed__2_value)} };
static const lean_object* l_Lean_Parser_Attr_externEntry_parenthesizer___closed__1 = (const lean_object*)&l_Lean_Parser_Attr_externEntry_parenthesizer___closed__1_value;
static const lean_closure_object l_Lean_Parser_Attr_externEntry_parenthesizer___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_optional_parenthesizer___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_externEntry_parenthesizer___closed__1_value)} };
static const lean_object* l_Lean_Parser_Attr_externEntry_parenthesizer___closed__2 = (const lean_object*)&l_Lean_Parser_Attr_externEntry_parenthesizer___closed__2_value;
static const lean_closure_object l_Lean_Parser_Attr_externEntry_parenthesizer___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_nonReservedSymbol_parenthesizer___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_externEntry___closed__5_value),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Parser_Attr_externEntry_parenthesizer___closed__3 = (const lean_object*)&l_Lean_Parser_Attr_externEntry_parenthesizer___closed__3_value;
static const lean_closure_object l_Lean_Parser_Attr_externEntry_parenthesizer___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_optional_parenthesizer___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_externEntry_parenthesizer___closed__3_value)} };
static const lean_object* l_Lean_Parser_Attr_externEntry_parenthesizer___closed__4 = (const lean_object*)&l_Lean_Parser_Attr_externEntry_parenthesizer___closed__4_value;
static const lean_closure_object l_Lean_Parser_Attr_externEntry_parenthesizer___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_strLit_parenthesizer___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Parser_Attr_externEntry_parenthesizer___closed__5 = (const lean_object*)&l_Lean_Parser_Attr_externEntry_parenthesizer___closed__5_value;
static const lean_closure_object l_Lean_Parser_Attr_externEntry_parenthesizer___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_externEntry_parenthesizer___closed__4_value),((lean_object*)&l_Lean_Parser_Attr_externEntry_parenthesizer___closed__5_value)} };
static const lean_object* l_Lean_Parser_Attr_externEntry_parenthesizer___closed__6 = (const lean_object*)&l_Lean_Parser_Attr_externEntry_parenthesizer___closed__6_value;
static const lean_closure_object l_Lean_Parser_Attr_externEntry_parenthesizer___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_externEntry_parenthesizer___closed__2_value),((lean_object*)&l_Lean_Parser_Attr_externEntry_parenthesizer___closed__6_value)} };
static const lean_object* l_Lean_Parser_Attr_externEntry_parenthesizer___closed__7 = (const lean_object*)&l_Lean_Parser_Attr_externEntry_parenthesizer___closed__7_value;
static const lean_closure_object l_Lean_Parser_Attr_externEntry_parenthesizer___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Parenthesizer_leadingNode_parenthesizer___boxed, .m_arity = 8, .m_num_fixed = 3, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_externEntry___closed__1_value),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)&l_Lean_Parser_Attr_externEntry_parenthesizer___closed__7_value)} };
static const lean_object* l_Lean_Parser_Attr_externEntry_parenthesizer___closed__8 = (const lean_object*)&l_Lean_Parser_Attr_externEntry_parenthesizer___closed__8_value;
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_externEntry_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_externEntry_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_externEntry_parenthesizer__15___closed__0_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_externEntry_parenthesizer__15___closed__0_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_externEntry_parenthesizer__15___closed__0_value_aux_0),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_externEntry_parenthesizer__15___closed__0_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_externEntry_parenthesizer__15___closed__0_value_aux_1),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__12_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_externEntry_parenthesizer__15___closed__0_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_externEntry_parenthesizer__15___closed__0_value_aux_2),((lean_object*)&l_Lean_Parser_Attr_externEntry___closed__0_value),LEAN_SCALAR_PTR_LITERAL(115, 120, 255, 6, 244, 195, 179, 180)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_externEntry_parenthesizer__15___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_externEntry_parenthesizer__15___closed__0_value_aux_3),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_parenthesizer__11___closed__0_value),LEAN_SCALAR_PTR_LITERAL(202, 76, 95, 57, 63, 140, 230, 190)}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_externEntry_parenthesizer__15___closed__0 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_externEntry_parenthesizer__15___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_externEntry_parenthesizer__15();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_externEntry_parenthesizer__15___boxed(lean_object*);
static const lean_closure_object l_Lean_Parser_Attr_extern_parenthesizer___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_mkAntiquot_parenthesizer___boxed, .m_arity = 9, .m_num_fixed = 4, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_extern___closed__0_value),((lean_object*)&l_Lean_Parser_Attr_extern___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Parser_Attr_extern_parenthesizer___closed__0 = (const lean_object*)&l_Lean_Parser_Attr_extern_parenthesizer___closed__0_value;
static const lean_closure_object l_Lean_Parser_Attr_extern_parenthesizer___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_nonReservedSymbol_parenthesizer___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_extern___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Parser_Attr_extern_parenthesizer___closed__1 = (const lean_object*)&l_Lean_Parser_Attr_extern_parenthesizer___closed__1_value;
static lean_once_cell_t l_Lean_Parser_Attr_extern_parenthesizer___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_extern_parenthesizer___closed__2;
static lean_once_cell_t l_Lean_Parser_Attr_extern_parenthesizer___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_extern_parenthesizer___closed__3;
static lean_once_cell_t l_Lean_Parser_Attr_extern_parenthesizer___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_extern_parenthesizer___closed__4;
static lean_once_cell_t l_Lean_Parser_Attr_extern_parenthesizer___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_extern_parenthesizer___closed__5;
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_extern_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_extern_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_extern_parenthesizer__19___closed__0_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_extern_parenthesizer__19___closed__0_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_extern_parenthesizer__19___closed__0_value_aux_0),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_extern_parenthesizer__19___closed__0_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_extern_parenthesizer__19___closed__0_value_aux_1),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__12_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_extern_parenthesizer__19___closed__0_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_extern_parenthesizer__19___closed__0_value_aux_2),((lean_object*)&l_Lean_Parser_Attr_extern___closed__0_value),LEAN_SCALAR_PTR_LITERAL(174, 126, 252, 124, 35, 62, 180, 112)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_extern_parenthesizer__19___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_extern_parenthesizer__19___closed__0_value_aux_3),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_parenthesizer__11___closed__0_value),LEAN_SCALAR_PTR_LITERAL(107, 28, 254, 72, 236, 212, 80, 70)}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_extern_parenthesizer__19___closed__0 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_extern_parenthesizer__19___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_extern_parenthesizer__19();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_extern_parenthesizer__19___boxed(lean_object*);
static const lean_string_object l_Lean_Parser_Attr_tactic__alt___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "tactic_alt"};
static const lean_object* l_Lean_Parser_Attr_tactic__alt___closed__0 = (const lean_object*)&l_Lean_Parser_Attr_tactic__alt___closed__0_value;
static const lean_ctor_object l_Lean_Parser_Attr_tactic__alt___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_Attr_tactic__alt___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_tactic__alt___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_Attr_tactic__alt___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_tactic__alt___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__12_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l_Lean_Parser_Attr_tactic__alt___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_tactic__alt___closed__1_value_aux_2),((lean_object*)&l_Lean_Parser_Attr_tactic__alt___closed__0_value),LEAN_SCALAR_PTR_LITERAL(221, 239, 168, 96, 206, 229, 58, 101)}};
static const lean_object* l_Lean_Parser_Attr_tactic__alt___closed__1 = (const lean_object*)&l_Lean_Parser_Attr_tactic__alt___closed__1_value;
static lean_once_cell_t l_Lean_Parser_Attr_tactic__alt___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_tactic__alt___closed__2;
static lean_once_cell_t l_Lean_Parser_Attr_tactic__alt___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_tactic__alt___closed__3;
static lean_once_cell_t l_Lean_Parser_Attr_tactic__alt___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_tactic__alt___closed__4;
static lean_once_cell_t l_Lean_Parser_Attr_tactic__alt___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_tactic__alt___closed__5;
static lean_once_cell_t l_Lean_Parser_Attr_tactic__alt___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_tactic__alt___closed__6;
static lean_once_cell_t l_Lean_Parser_Attr_tactic__alt___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_tactic__alt___closed__7;
static lean_once_cell_t l_Lean_Parser_Attr_tactic__alt___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_tactic__alt___closed__8;
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_tactic__alt;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__alt___regBuiltin_Lean_Parser_Attr_tactic__alt__1();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__alt___regBuiltin_Lean_Parser_Attr_tactic__alt__1___boxed(lean_object*);
static const lean_string_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__alt___regBuiltin_Lean_Parser_Attr_tactic__alt_docString__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 209, .m_capacity = 209, .m_length = 208, .m_data = "Declares this tactic to be an alias or alternative form of an existing tactic.\n\nThis has the following effects:\n* The alias relationship is saved\n* The docstring is taken from the original tactic, if present\n"};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__alt___regBuiltin_Lean_Parser_Attr_tactic__alt_docString__3___closed__0 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__alt___regBuiltin_Lean_Parser_Attr_tactic__alt_docString__3___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__alt___regBuiltin_Lean_Parser_Attr_tactic__alt_docString__3();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__alt___regBuiltin_Lean_Parser_Attr_tactic__alt_docString__3___boxed(lean_object*);
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__alt___regBuiltin_Lean_Parser_Attr_tactic__alt_declRange__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(60) << 1) | 1)),((lean_object*)(((size_t)(23) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__alt___regBuiltin_Lean_Parser_Attr_tactic__alt_declRange__5___closed__0 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__alt___regBuiltin_Lean_Parser_Attr_tactic__alt_declRange__5___closed__0_value;
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__alt___regBuiltin_Lean_Parser_Attr_tactic__alt_declRange__5___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(61) << 1) | 1)),((lean_object*)(((size_t)(34) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__alt___regBuiltin_Lean_Parser_Attr_tactic__alt_declRange__5___closed__1 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__alt___regBuiltin_Lean_Parser_Attr_tactic__alt_declRange__5___closed__1_value;
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__alt___regBuiltin_Lean_Parser_Attr_tactic__alt_declRange__5___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__alt___regBuiltin_Lean_Parser_Attr_tactic__alt_declRange__5___closed__0_value),((lean_object*)(((size_t)(23) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__alt___regBuiltin_Lean_Parser_Attr_tactic__alt_declRange__5___closed__1_value),((lean_object*)(((size_t)(34) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__alt___regBuiltin_Lean_Parser_Attr_tactic__alt_declRange__5___closed__2 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__alt___regBuiltin_Lean_Parser_Attr_tactic__alt_declRange__5___closed__2_value;
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__alt___regBuiltin_Lean_Parser_Attr_tactic__alt_declRange__5___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(60) << 1) | 1)),((lean_object*)(((size_t)(27) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__alt___regBuiltin_Lean_Parser_Attr_tactic__alt_declRange__5___closed__3 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__alt___regBuiltin_Lean_Parser_Attr_tactic__alt_declRange__5___closed__3_value;
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__alt___regBuiltin_Lean_Parser_Attr_tactic__alt_declRange__5___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(60) << 1) | 1)),((lean_object*)(((size_t)(39) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__alt___regBuiltin_Lean_Parser_Attr_tactic__alt_declRange__5___closed__4 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__alt___regBuiltin_Lean_Parser_Attr_tactic__alt_declRange__5___closed__4_value;
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__alt___regBuiltin_Lean_Parser_Attr_tactic__alt_declRange__5___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__alt___regBuiltin_Lean_Parser_Attr_tactic__alt_declRange__5___closed__3_value),((lean_object*)(((size_t)(27) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__alt___regBuiltin_Lean_Parser_Attr_tactic__alt_declRange__5___closed__4_value),((lean_object*)(((size_t)(39) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__alt___regBuiltin_Lean_Parser_Attr_tactic__alt_declRange__5___closed__5 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__alt___regBuiltin_Lean_Parser_Attr_tactic__alt_declRange__5___closed__5_value;
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__alt___regBuiltin_Lean_Parser_Attr_tactic__alt_declRange__5___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__alt___regBuiltin_Lean_Parser_Attr_tactic__alt_declRange__5___closed__2_value),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__alt___regBuiltin_Lean_Parser_Attr_tactic__alt_declRange__5___closed__5_value)}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__alt___regBuiltin_Lean_Parser_Attr_tactic__alt_declRange__5___closed__6 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__alt___regBuiltin_Lean_Parser_Attr_tactic__alt_declRange__5___closed__6_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__alt___regBuiltin_Lean_Parser_Attr_tactic__alt_declRange__5();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__alt___regBuiltin_Lean_Parser_Attr_tactic__alt_declRange__5___boxed(lean_object*);
static const lean_closure_object l_Lean_Parser_Attr_tactic__alt_formatter___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_mkAntiquot_formatter___boxed, .m_arity = 9, .m_num_fixed = 4, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_tactic__alt___closed__0_value),((lean_object*)&l_Lean_Parser_Attr_tactic__alt___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Parser_Attr_tactic__alt_formatter___closed__0 = (const lean_object*)&l_Lean_Parser_Attr_tactic__alt_formatter___closed__0_value;
static const lean_closure_object l_Lean_Parser_Attr_tactic__alt_formatter___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_symbol_formatter___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_tactic__alt___closed__0_value)} };
static const lean_object* l_Lean_Parser_Attr_tactic__alt_formatter___closed__1 = (const lean_object*)&l_Lean_Parser_Attr_tactic__alt_formatter___closed__1_value;
static const lean_closure_object l_Lean_Parser_Attr_tactic__alt_formatter___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_simple_formatter___closed__0_value),((lean_object*)&l_Lean_Parser_Attr_simple_formatter___closed__2_value)} };
static const lean_object* l_Lean_Parser_Attr_tactic__alt_formatter___closed__2 = (const lean_object*)&l_Lean_Parser_Attr_tactic__alt_formatter___closed__2_value;
static const lean_closure_object l_Lean_Parser_Attr_tactic__alt_formatter___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_tactic__alt_formatter___closed__1_value),((lean_object*)&l_Lean_Parser_Attr_tactic__alt_formatter___closed__2_value)} };
static const lean_object* l_Lean_Parser_Attr_tactic__alt_formatter___closed__3 = (const lean_object*)&l_Lean_Parser_Attr_tactic__alt_formatter___closed__3_value;
static const lean_closure_object l_Lean_Parser_Attr_tactic__alt_formatter___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_leadingNode_formatter___boxed, .m_arity = 8, .m_num_fixed = 3, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_tactic__alt___closed__1_value),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)&l_Lean_Parser_Attr_tactic__alt_formatter___closed__3_value)} };
static const lean_object* l_Lean_Parser_Attr_tactic__alt_formatter___closed__4 = (const lean_object*)&l_Lean_Parser_Attr_tactic__alt_formatter___closed__4_value;
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_tactic__alt_formatter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_tactic__alt_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__alt___regBuiltin_Lean_Parser_Attr_tactic__alt_formatter__9___closed__0_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__alt___regBuiltin_Lean_Parser_Attr_tactic__alt_formatter__9___closed__0_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__alt___regBuiltin_Lean_Parser_Attr_tactic__alt_formatter__9___closed__0_value_aux_0),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__alt___regBuiltin_Lean_Parser_Attr_tactic__alt_formatter__9___closed__0_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__alt___regBuiltin_Lean_Parser_Attr_tactic__alt_formatter__9___closed__0_value_aux_1),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__12_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__alt___regBuiltin_Lean_Parser_Attr_tactic__alt_formatter__9___closed__0_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__alt___regBuiltin_Lean_Parser_Attr_tactic__alt_formatter__9___closed__0_value_aux_2),((lean_object*)&l_Lean_Parser_Attr_tactic__alt___closed__0_value),LEAN_SCALAR_PTR_LITERAL(221, 239, 168, 96, 206, 229, 58, 101)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__alt___regBuiltin_Lean_Parser_Attr_tactic__alt_formatter__9___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__alt___regBuiltin_Lean_Parser_Attr_tactic__alt_formatter__9___closed__0_value_aux_3),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_formatter__7___closed__0_value),LEAN_SCALAR_PTR_LITERAL(224, 174, 15, 101, 134, 196, 196, 73)}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__alt___regBuiltin_Lean_Parser_Attr_tactic__alt_formatter__9___closed__0 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__alt___regBuiltin_Lean_Parser_Attr_tactic__alt_formatter__9___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__alt___regBuiltin_Lean_Parser_Attr_tactic__alt_formatter__9();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__alt___regBuiltin_Lean_Parser_Attr_tactic__alt_formatter__9___boxed(lean_object*);
static const lean_closure_object l_Lean_Parser_Attr_tactic__alt_parenthesizer___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_mkAntiquot_parenthesizer___boxed, .m_arity = 9, .m_num_fixed = 4, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_tactic__alt___closed__0_value),((lean_object*)&l_Lean_Parser_Attr_tactic__alt___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Parser_Attr_tactic__alt_parenthesizer___closed__0 = (const lean_object*)&l_Lean_Parser_Attr_tactic__alt_parenthesizer___closed__0_value;
static const lean_closure_object l_Lean_Parser_Attr_tactic__alt_parenthesizer___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_symbol_parenthesizer___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_tactic__alt___closed__0_value)} };
static const lean_object* l_Lean_Parser_Attr_tactic__alt_parenthesizer___closed__1 = (const lean_object*)&l_Lean_Parser_Attr_tactic__alt_parenthesizer___closed__1_value;
static const lean_closure_object l_Lean_Parser_Attr_tactic__alt_parenthesizer___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_simple_parenthesizer___closed__2_value),((lean_object*)&l_Lean_Parser_Attr_simple_parenthesizer___closed__1_value)} };
static const lean_object* l_Lean_Parser_Attr_tactic__alt_parenthesizer___closed__2 = (const lean_object*)&l_Lean_Parser_Attr_tactic__alt_parenthesizer___closed__2_value;
static const lean_closure_object l_Lean_Parser_Attr_tactic__alt_parenthesizer___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_tactic__alt_parenthesizer___closed__1_value),((lean_object*)&l_Lean_Parser_Attr_tactic__alt_parenthesizer___closed__2_value)} };
static const lean_object* l_Lean_Parser_Attr_tactic__alt_parenthesizer___closed__3 = (const lean_object*)&l_Lean_Parser_Attr_tactic__alt_parenthesizer___closed__3_value;
static const lean_closure_object l_Lean_Parser_Attr_tactic__alt_parenthesizer___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Parenthesizer_leadingNode_parenthesizer___boxed, .m_arity = 8, .m_num_fixed = 3, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_tactic__alt___closed__1_value),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)&l_Lean_Parser_Attr_tactic__alt_parenthesizer___closed__3_value)} };
static const lean_object* l_Lean_Parser_Attr_tactic__alt_parenthesizer___closed__4 = (const lean_object*)&l_Lean_Parser_Attr_tactic__alt_parenthesizer___closed__4_value;
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_tactic__alt_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_tactic__alt_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__alt___regBuiltin_Lean_Parser_Attr_tactic__alt_parenthesizer__13___closed__0_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__alt___regBuiltin_Lean_Parser_Attr_tactic__alt_parenthesizer__13___closed__0_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__alt___regBuiltin_Lean_Parser_Attr_tactic__alt_parenthesizer__13___closed__0_value_aux_0),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__alt___regBuiltin_Lean_Parser_Attr_tactic__alt_parenthesizer__13___closed__0_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__alt___regBuiltin_Lean_Parser_Attr_tactic__alt_parenthesizer__13___closed__0_value_aux_1),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__12_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__alt___regBuiltin_Lean_Parser_Attr_tactic__alt_parenthesizer__13___closed__0_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__alt___regBuiltin_Lean_Parser_Attr_tactic__alt_parenthesizer__13___closed__0_value_aux_2),((lean_object*)&l_Lean_Parser_Attr_tactic__alt___closed__0_value),LEAN_SCALAR_PTR_LITERAL(221, 239, 168, 96, 206, 229, 58, 101)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__alt___regBuiltin_Lean_Parser_Attr_tactic__alt_parenthesizer__13___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__alt___regBuiltin_Lean_Parser_Attr_tactic__alt_parenthesizer__13___closed__0_value_aux_3),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_parenthesizer__11___closed__0_value),LEAN_SCALAR_PTR_LITERAL(124, 105, 16, 60, 122, 191, 76, 132)}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__alt___regBuiltin_Lean_Parser_Attr_tactic__alt_parenthesizer__13___closed__0 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__alt___regBuiltin_Lean_Parser_Attr_tactic__alt_parenthesizer__13___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__alt___regBuiltin_Lean_Parser_Attr_tactic__alt_parenthesizer__13();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__alt___regBuiltin_Lean_Parser_Attr_tactic__alt_parenthesizer__13___boxed(lean_object*);
static const lean_string_object l_Lean_Parser_Attr_tactic__tag___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "tactic_tag"};
static const lean_object* l_Lean_Parser_Attr_tactic__tag___closed__0 = (const lean_object*)&l_Lean_Parser_Attr_tactic__tag___closed__0_value;
static const lean_ctor_object l_Lean_Parser_Attr_tactic__tag___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_Attr_tactic__tag___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_tactic__tag___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_Attr_tactic__tag___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_tactic__tag___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__12_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l_Lean_Parser_Attr_tactic__tag___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_tactic__tag___closed__1_value_aux_2),((lean_object*)&l_Lean_Parser_Attr_tactic__tag___closed__0_value),LEAN_SCALAR_PTR_LITERAL(146, 70, 119, 85, 147, 120, 119, 38)}};
static const lean_object* l_Lean_Parser_Attr_tactic__tag___closed__1 = (const lean_object*)&l_Lean_Parser_Attr_tactic__tag___closed__1_value;
static lean_once_cell_t l_Lean_Parser_Attr_tactic__tag___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_tactic__tag___closed__2;
static lean_once_cell_t l_Lean_Parser_Attr_tactic__tag___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_tactic__tag___closed__3;
static lean_once_cell_t l_Lean_Parser_Attr_tactic__tag___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_tactic__tag___closed__4;
static lean_once_cell_t l_Lean_Parser_Attr_tactic__tag___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_tactic__tag___closed__5;
static lean_once_cell_t l_Lean_Parser_Attr_tactic__tag___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_tactic__tag___closed__6;
static lean_once_cell_t l_Lean_Parser_Attr_tactic__tag___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_tactic__tag___closed__7;
static lean_once_cell_t l_Lean_Parser_Attr_tactic__tag___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_tactic__tag___closed__8;
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_tactic__tag;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__tag___regBuiltin_Lean_Parser_Attr_tactic__tag__1();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__tag___regBuiltin_Lean_Parser_Attr_tactic__tag__1___boxed(lean_object*);
static const lean_string_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__tag___regBuiltin_Lean_Parser_Attr_tactic__tag_docString__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 96, .m_capacity = 96, .m_length = 95, .m_data = "Adds one or more tags to a tactic.\n\nTags should be applied to the canonical names for tactics.\n"};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__tag___regBuiltin_Lean_Parser_Attr_tactic__tag_docString__3___closed__0 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__tag___regBuiltin_Lean_Parser_Attr_tactic__tag_docString__3___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__tag___regBuiltin_Lean_Parser_Attr_tactic__tag_docString__3();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__tag___regBuiltin_Lean_Parser_Attr_tactic__tag_docString__3___boxed(lean_object*);
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__tag___regBuiltin_Lean_Parser_Attr_tactic__tag_declRange__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(68) << 1) | 1)),((lean_object*)(((size_t)(23) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__tag___regBuiltin_Lean_Parser_Attr_tactic__tag_declRange__5___closed__0 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__tag___regBuiltin_Lean_Parser_Attr_tactic__tag_declRange__5___closed__0_value;
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__tag___regBuiltin_Lean_Parser_Attr_tactic__tag_declRange__5___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(69) << 1) | 1)),((lean_object*)(((size_t)(42) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__tag___regBuiltin_Lean_Parser_Attr_tactic__tag_declRange__5___closed__1 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__tag___regBuiltin_Lean_Parser_Attr_tactic__tag_declRange__5___closed__1_value;
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__tag___regBuiltin_Lean_Parser_Attr_tactic__tag_declRange__5___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__tag___regBuiltin_Lean_Parser_Attr_tactic__tag_declRange__5___closed__0_value),((lean_object*)(((size_t)(23) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__tag___regBuiltin_Lean_Parser_Attr_tactic__tag_declRange__5___closed__1_value),((lean_object*)(((size_t)(42) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__tag___regBuiltin_Lean_Parser_Attr_tactic__tag_declRange__5___closed__2 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__tag___regBuiltin_Lean_Parser_Attr_tactic__tag_declRange__5___closed__2_value;
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__tag___regBuiltin_Lean_Parser_Attr_tactic__tag_declRange__5___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(68) << 1) | 1)),((lean_object*)(((size_t)(27) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__tag___regBuiltin_Lean_Parser_Attr_tactic__tag_declRange__5___closed__3 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__tag___regBuiltin_Lean_Parser_Attr_tactic__tag_declRange__5___closed__3_value;
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__tag___regBuiltin_Lean_Parser_Attr_tactic__tag_declRange__5___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(68) << 1) | 1)),((lean_object*)(((size_t)(39) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__tag___regBuiltin_Lean_Parser_Attr_tactic__tag_declRange__5___closed__4 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__tag___regBuiltin_Lean_Parser_Attr_tactic__tag_declRange__5___closed__4_value;
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__tag___regBuiltin_Lean_Parser_Attr_tactic__tag_declRange__5___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__tag___regBuiltin_Lean_Parser_Attr_tactic__tag_declRange__5___closed__3_value),((lean_object*)(((size_t)(27) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__tag___regBuiltin_Lean_Parser_Attr_tactic__tag_declRange__5___closed__4_value),((lean_object*)(((size_t)(39) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__tag___regBuiltin_Lean_Parser_Attr_tactic__tag_declRange__5___closed__5 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__tag___regBuiltin_Lean_Parser_Attr_tactic__tag_declRange__5___closed__5_value;
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__tag___regBuiltin_Lean_Parser_Attr_tactic__tag_declRange__5___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__tag___regBuiltin_Lean_Parser_Attr_tactic__tag_declRange__5___closed__2_value),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__tag___regBuiltin_Lean_Parser_Attr_tactic__tag_declRange__5___closed__5_value)}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__tag___regBuiltin_Lean_Parser_Attr_tactic__tag_declRange__5___closed__6 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__tag___regBuiltin_Lean_Parser_Attr_tactic__tag_declRange__5___closed__6_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__tag___regBuiltin_Lean_Parser_Attr_tactic__tag_declRange__5();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__tag___regBuiltin_Lean_Parser_Attr_tactic__tag_declRange__5___boxed(lean_object*);
static const lean_closure_object l_Lean_Parser_Attr_tactic__tag_formatter___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_mkAntiquot_formatter___boxed, .m_arity = 9, .m_num_fixed = 4, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_tactic__tag___closed__0_value),((lean_object*)&l_Lean_Parser_Attr_tactic__tag___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Parser_Attr_tactic__tag_formatter___closed__0 = (const lean_object*)&l_Lean_Parser_Attr_tactic__tag_formatter___closed__0_value;
static const lean_closure_object l_Lean_Parser_Attr_tactic__tag_formatter___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_symbol_formatter___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_tactic__tag___closed__0_value)} };
static const lean_object* l_Lean_Parser_Attr_tactic__tag_formatter___closed__1 = (const lean_object*)&l_Lean_Parser_Attr_tactic__tag_formatter___closed__1_value;
static const lean_closure_object l_Lean_Parser_Attr_tactic__tag_formatter___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_many1_formatter___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_tactic__alt_formatter___closed__2_value)} };
static const lean_object* l_Lean_Parser_Attr_tactic__tag_formatter___closed__2 = (const lean_object*)&l_Lean_Parser_Attr_tactic__tag_formatter___closed__2_value;
static const lean_closure_object l_Lean_Parser_Attr_tactic__tag_formatter___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_tactic__tag_formatter___closed__1_value),((lean_object*)&l_Lean_Parser_Attr_tactic__tag_formatter___closed__2_value)} };
static const lean_object* l_Lean_Parser_Attr_tactic__tag_formatter___closed__3 = (const lean_object*)&l_Lean_Parser_Attr_tactic__tag_formatter___closed__3_value;
static const lean_closure_object l_Lean_Parser_Attr_tactic__tag_formatter___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_leadingNode_formatter___boxed, .m_arity = 8, .m_num_fixed = 3, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_tactic__tag___closed__1_value),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)&l_Lean_Parser_Attr_tactic__tag_formatter___closed__3_value)} };
static const lean_object* l_Lean_Parser_Attr_tactic__tag_formatter___closed__4 = (const lean_object*)&l_Lean_Parser_Attr_tactic__tag_formatter___closed__4_value;
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_tactic__tag_formatter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_tactic__tag_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__tag___regBuiltin_Lean_Parser_Attr_tactic__tag_formatter__9___closed__0_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__tag___regBuiltin_Lean_Parser_Attr_tactic__tag_formatter__9___closed__0_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__tag___regBuiltin_Lean_Parser_Attr_tactic__tag_formatter__9___closed__0_value_aux_0),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__tag___regBuiltin_Lean_Parser_Attr_tactic__tag_formatter__9___closed__0_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__tag___regBuiltin_Lean_Parser_Attr_tactic__tag_formatter__9___closed__0_value_aux_1),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__12_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__tag___regBuiltin_Lean_Parser_Attr_tactic__tag_formatter__9___closed__0_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__tag___regBuiltin_Lean_Parser_Attr_tactic__tag_formatter__9___closed__0_value_aux_2),((lean_object*)&l_Lean_Parser_Attr_tactic__tag___closed__0_value),LEAN_SCALAR_PTR_LITERAL(146, 70, 119, 85, 147, 120, 119, 38)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__tag___regBuiltin_Lean_Parser_Attr_tactic__tag_formatter__9___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__tag___regBuiltin_Lean_Parser_Attr_tactic__tag_formatter__9___closed__0_value_aux_3),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_formatter__7___closed__0_value),LEAN_SCALAR_PTR_LITERAL(91, 156, 211, 23, 66, 168, 121, 85)}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__tag___regBuiltin_Lean_Parser_Attr_tactic__tag_formatter__9___closed__0 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__tag___regBuiltin_Lean_Parser_Attr_tactic__tag_formatter__9___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__tag___regBuiltin_Lean_Parser_Attr_tactic__tag_formatter__9();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__tag___regBuiltin_Lean_Parser_Attr_tactic__tag_formatter__9___boxed(lean_object*);
static const lean_closure_object l_Lean_Parser_Attr_tactic__tag_parenthesizer___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_mkAntiquot_parenthesizer___boxed, .m_arity = 9, .m_num_fixed = 4, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_tactic__tag___closed__0_value),((lean_object*)&l_Lean_Parser_Attr_tactic__tag___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Parser_Attr_tactic__tag_parenthesizer___closed__0 = (const lean_object*)&l_Lean_Parser_Attr_tactic__tag_parenthesizer___closed__0_value;
static const lean_closure_object l_Lean_Parser_Attr_tactic__tag_parenthesizer___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_symbol_parenthesizer___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_tactic__tag___closed__0_value)} };
static const lean_object* l_Lean_Parser_Attr_tactic__tag_parenthesizer___closed__1 = (const lean_object*)&l_Lean_Parser_Attr_tactic__tag_parenthesizer___closed__1_value;
static const lean_closure_object l_Lean_Parser_Attr_tactic__tag_parenthesizer___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_many1_parenthesizer___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_tactic__alt_parenthesizer___closed__2_value)} };
static const lean_object* l_Lean_Parser_Attr_tactic__tag_parenthesizer___closed__2 = (const lean_object*)&l_Lean_Parser_Attr_tactic__tag_parenthesizer___closed__2_value;
static const lean_closure_object l_Lean_Parser_Attr_tactic__tag_parenthesizer___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_tactic__tag_parenthesizer___closed__1_value),((lean_object*)&l_Lean_Parser_Attr_tactic__tag_parenthesizer___closed__2_value)} };
static const lean_object* l_Lean_Parser_Attr_tactic__tag_parenthesizer___closed__3 = (const lean_object*)&l_Lean_Parser_Attr_tactic__tag_parenthesizer___closed__3_value;
static const lean_closure_object l_Lean_Parser_Attr_tactic__tag_parenthesizer___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Parenthesizer_leadingNode_parenthesizer___boxed, .m_arity = 8, .m_num_fixed = 3, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_tactic__tag___closed__1_value),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)&l_Lean_Parser_Attr_tactic__tag_parenthesizer___closed__3_value)} };
static const lean_object* l_Lean_Parser_Attr_tactic__tag_parenthesizer___closed__4 = (const lean_object*)&l_Lean_Parser_Attr_tactic__tag_parenthesizer___closed__4_value;
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_tactic__tag_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_tactic__tag_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__tag___regBuiltin_Lean_Parser_Attr_tactic__tag_parenthesizer__13___closed__0_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__tag___regBuiltin_Lean_Parser_Attr_tactic__tag_parenthesizer__13___closed__0_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__tag___regBuiltin_Lean_Parser_Attr_tactic__tag_parenthesizer__13___closed__0_value_aux_0),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__tag___regBuiltin_Lean_Parser_Attr_tactic__tag_parenthesizer__13___closed__0_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__tag___regBuiltin_Lean_Parser_Attr_tactic__tag_parenthesizer__13___closed__0_value_aux_1),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__12_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__tag___regBuiltin_Lean_Parser_Attr_tactic__tag_parenthesizer__13___closed__0_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__tag___regBuiltin_Lean_Parser_Attr_tactic__tag_parenthesizer__13___closed__0_value_aux_2),((lean_object*)&l_Lean_Parser_Attr_tactic__tag___closed__0_value),LEAN_SCALAR_PTR_LITERAL(146, 70, 119, 85, 147, 120, 119, 38)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__tag___regBuiltin_Lean_Parser_Attr_tactic__tag_parenthesizer__13___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__tag___regBuiltin_Lean_Parser_Attr_tactic__tag_parenthesizer__13___closed__0_value_aux_3),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_parenthesizer__11___closed__0_value),LEAN_SCALAR_PTR_LITERAL(127, 101, 40, 71, 142, 150, 231, 238)}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__tag___regBuiltin_Lean_Parser_Attr_tactic__tag_parenthesizer__13___closed__0 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__tag___regBuiltin_Lean_Parser_Attr_tactic__tag_parenthesizer__13___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__tag___regBuiltin_Lean_Parser_Attr_tactic__tag_parenthesizer__13();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__tag___regBuiltin_Lean_Parser_Attr_tactic__tag_parenthesizer__13___boxed(lean_object*);
static const lean_string_object l_Lean_Parser_Attr_tactic__name___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "tactic_name"};
static const lean_object* l_Lean_Parser_Attr_tactic__name___closed__0 = (const lean_object*)&l_Lean_Parser_Attr_tactic__name___closed__0_value;
static const lean_ctor_object l_Lean_Parser_Attr_tactic__name___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_Attr_tactic__name___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_tactic__name___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_Attr_tactic__name___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_tactic__name___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__12_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l_Lean_Parser_Attr_tactic__name___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_tactic__name___closed__1_value_aux_2),((lean_object*)&l_Lean_Parser_Attr_tactic__name___closed__0_value),LEAN_SCALAR_PTR_LITERAL(121, 253, 162, 55, 13, 176, 86, 10)}};
static const lean_object* l_Lean_Parser_Attr_tactic__name___closed__1 = (const lean_object*)&l_Lean_Parser_Attr_tactic__name___closed__1_value;
static lean_once_cell_t l_Lean_Parser_Attr_tactic__name___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_tactic__name___closed__2;
static lean_once_cell_t l_Lean_Parser_Attr_tactic__name___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_tactic__name___closed__3;
static lean_once_cell_t l_Lean_Parser_Attr_tactic__name___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_tactic__name___closed__4;
static lean_once_cell_t l_Lean_Parser_Attr_tactic__name___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_tactic__name___closed__5;
static lean_once_cell_t l_Lean_Parser_Attr_tactic__name___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_tactic__name___closed__6;
static lean_once_cell_t l_Lean_Parser_Attr_tactic__name___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_tactic__name___closed__7;
static lean_once_cell_t l_Lean_Parser_Attr_tactic__name___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_tactic__name___closed__8;
static lean_once_cell_t l_Lean_Parser_Attr_tactic__name___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_tactic__name___closed__9;
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_tactic__name;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__name___regBuiltin_Lean_Parser_Attr_tactic__name__1();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__name___regBuiltin_Lean_Parser_Attr_tactic__name__1___boxed(lean_object*);
static const lean_string_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__name___regBuiltin_Lean_Parser_Attr_tactic__name_docString__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 392, .m_capacity = 392, .m_length = 391, .m_data = "Sets the tactic's name.\n\nOrdinarily, tactic names are automatically set to the first token in the tactic's parser. If this\nprocess fails, or if the tactic's name should be multiple tokens (e.g. `let rec`), then this\nattribute can be used to provide a name.\n\nThe tactic's name is used in documentation as well as in completion. Thus, the name should be a\nvalid prefix of the tactic's syntax.\n"};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__name___regBuiltin_Lean_Parser_Attr_tactic__name_docString__3___closed__0 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__name___regBuiltin_Lean_Parser_Attr_tactic__name_docString__3___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__name___regBuiltin_Lean_Parser_Attr_tactic__name_docString__3();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__name___regBuiltin_Lean_Parser_Attr_tactic__name_docString__3___boxed(lean_object*);
static const lean_closure_object l_Lean_Parser_Attr_tactic__name_formatter___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_mkAntiquot_formatter___boxed, .m_arity = 9, .m_num_fixed = 4, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_tactic__name___closed__0_value),((lean_object*)&l_Lean_Parser_Attr_tactic__name___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Parser_Attr_tactic__name_formatter___closed__0 = (const lean_object*)&l_Lean_Parser_Attr_tactic__name_formatter___closed__0_value;
static const lean_closure_object l_Lean_Parser_Attr_tactic__name_formatter___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_symbol_formatter___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_tactic__name___closed__0_value)} };
static const lean_object* l_Lean_Parser_Attr_tactic__name_formatter___closed__1 = (const lean_object*)&l_Lean_Parser_Attr_tactic__name_formatter___closed__1_value;
static const lean_closure_object l_Lean_Parser_Attr_tactic__name_formatter___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Formatter_orelse_formatter___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_simple_formatter___closed__2_value),((lean_object*)&l_Lean_Parser_Attr_externEntry_formatter___closed__5_value)} };
static const lean_object* l_Lean_Parser_Attr_tactic__name_formatter___closed__2 = (const lean_object*)&l_Lean_Parser_Attr_tactic__name_formatter___closed__2_value;
static const lean_closure_object l_Lean_Parser_Attr_tactic__name_formatter___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_simple_formatter___closed__0_value),((lean_object*)&l_Lean_Parser_Attr_tactic__name_formatter___closed__2_value)} };
static const lean_object* l_Lean_Parser_Attr_tactic__name_formatter___closed__3 = (const lean_object*)&l_Lean_Parser_Attr_tactic__name_formatter___closed__3_value;
static const lean_closure_object l_Lean_Parser_Attr_tactic__name_formatter___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_tactic__name_formatter___closed__1_value),((lean_object*)&l_Lean_Parser_Attr_tactic__name_formatter___closed__3_value)} };
static const lean_object* l_Lean_Parser_Attr_tactic__name_formatter___closed__4 = (const lean_object*)&l_Lean_Parser_Attr_tactic__name_formatter___closed__4_value;
static const lean_closure_object l_Lean_Parser_Attr_tactic__name_formatter___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_leadingNode_formatter___boxed, .m_arity = 8, .m_num_fixed = 3, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_tactic__name___closed__1_value),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)&l_Lean_Parser_Attr_tactic__name_formatter___closed__4_value)} };
static const lean_object* l_Lean_Parser_Attr_tactic__name_formatter___closed__5 = (const lean_object*)&l_Lean_Parser_Attr_tactic__name_formatter___closed__5_value;
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_tactic__name_formatter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_tactic__name_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__name___regBuiltin_Lean_Parser_Attr_tactic__name_formatter__7___closed__0_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__name___regBuiltin_Lean_Parser_Attr_tactic__name_formatter__7___closed__0_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__name___regBuiltin_Lean_Parser_Attr_tactic__name_formatter__7___closed__0_value_aux_0),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__name___regBuiltin_Lean_Parser_Attr_tactic__name_formatter__7___closed__0_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__name___regBuiltin_Lean_Parser_Attr_tactic__name_formatter__7___closed__0_value_aux_1),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__12_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__name___regBuiltin_Lean_Parser_Attr_tactic__name_formatter__7___closed__0_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__name___regBuiltin_Lean_Parser_Attr_tactic__name_formatter__7___closed__0_value_aux_2),((lean_object*)&l_Lean_Parser_Attr_tactic__name___closed__0_value),LEAN_SCALAR_PTR_LITERAL(121, 253, 162, 55, 13, 176, 86, 10)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__name___regBuiltin_Lean_Parser_Attr_tactic__name_formatter__7___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__name___regBuiltin_Lean_Parser_Attr_tactic__name_formatter__7___closed__0_value_aux_3),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_formatter__7___closed__0_value),LEAN_SCALAR_PTR_LITERAL(20, 115, 32, 33, 176, 74, 73, 63)}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__name___regBuiltin_Lean_Parser_Attr_tactic__name_formatter__7___closed__0 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__name___regBuiltin_Lean_Parser_Attr_tactic__name_formatter__7___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__name___regBuiltin_Lean_Parser_Attr_tactic__name_formatter__7();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__name___regBuiltin_Lean_Parser_Attr_tactic__name_formatter__7___boxed(lean_object*);
static const lean_closure_object l_Lean_Parser_Attr_tactic__name_parenthesizer___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_mkAntiquot_parenthesizer___boxed, .m_arity = 9, .m_num_fixed = 4, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_tactic__name___closed__0_value),((lean_object*)&l_Lean_Parser_Attr_tactic__name___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Parser_Attr_tactic__name_parenthesizer___closed__0 = (const lean_object*)&l_Lean_Parser_Attr_tactic__name_parenthesizer___closed__0_value;
static const lean_closure_object l_Lean_Parser_Attr_tactic__name_parenthesizer___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_symbol_parenthesizer___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_tactic__name___closed__0_value)} };
static const lean_object* l_Lean_Parser_Attr_tactic__name_parenthesizer___closed__1 = (const lean_object*)&l_Lean_Parser_Attr_tactic__name_parenthesizer___closed__1_value;
static const lean_closure_object l_Lean_Parser_Attr_tactic__name_parenthesizer___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Parenthesizer_orelse_parenthesizer___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_simple_parenthesizer___closed__1_value),((lean_object*)&l_Lean_Parser_Attr_externEntry_parenthesizer___closed__5_value)} };
static const lean_object* l_Lean_Parser_Attr_tactic__name_parenthesizer___closed__2 = (const lean_object*)&l_Lean_Parser_Attr_tactic__name_parenthesizer___closed__2_value;
static const lean_closure_object l_Lean_Parser_Attr_tactic__name_parenthesizer___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_simple_parenthesizer___closed__2_value),((lean_object*)&l_Lean_Parser_Attr_tactic__name_parenthesizer___closed__2_value)} };
static const lean_object* l_Lean_Parser_Attr_tactic__name_parenthesizer___closed__3 = (const lean_object*)&l_Lean_Parser_Attr_tactic__name_parenthesizer___closed__3_value;
static const lean_closure_object l_Lean_Parser_Attr_tactic__name_parenthesizer___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_tactic__name_parenthesizer___closed__1_value),((lean_object*)&l_Lean_Parser_Attr_tactic__name_parenthesizer___closed__3_value)} };
static const lean_object* l_Lean_Parser_Attr_tactic__name_parenthesizer___closed__4 = (const lean_object*)&l_Lean_Parser_Attr_tactic__name_parenthesizer___closed__4_value;
static const lean_closure_object l_Lean_Parser_Attr_tactic__name_parenthesizer___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Parenthesizer_leadingNode_parenthesizer___boxed, .m_arity = 8, .m_num_fixed = 3, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_tactic__name___closed__1_value),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)&l_Lean_Parser_Attr_tactic__name_parenthesizer___closed__4_value)} };
static const lean_object* l_Lean_Parser_Attr_tactic__name_parenthesizer___closed__5 = (const lean_object*)&l_Lean_Parser_Attr_tactic__name_parenthesizer___closed__5_value;
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_tactic__name_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_tactic__name_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__name___regBuiltin_Lean_Parser_Attr_tactic__name_parenthesizer__11___closed__0_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__name___regBuiltin_Lean_Parser_Attr_tactic__name_parenthesizer__11___closed__0_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__name___regBuiltin_Lean_Parser_Attr_tactic__name_parenthesizer__11___closed__0_value_aux_0),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__name___regBuiltin_Lean_Parser_Attr_tactic__name_parenthesizer__11___closed__0_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__name___regBuiltin_Lean_Parser_Attr_tactic__name_parenthesizer__11___closed__0_value_aux_1),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__12_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__name___regBuiltin_Lean_Parser_Attr_tactic__name_parenthesizer__11___closed__0_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__name___regBuiltin_Lean_Parser_Attr_tactic__name_parenthesizer__11___closed__0_value_aux_2),((lean_object*)&l_Lean_Parser_Attr_tactic__name___closed__0_value),LEAN_SCALAR_PTR_LITERAL(121, 253, 162, 55, 13, 176, 86, 10)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__name___regBuiltin_Lean_Parser_Attr_tactic__name_parenthesizer__11___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__name___regBuiltin_Lean_Parser_Attr_tactic__name_parenthesizer__11___closed__0_value_aux_3),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_parenthesizer__11___closed__0_value),LEAN_SCALAR_PTR_LITERAL(72, 5, 121, 30, 21, 6, 250, 91)}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__name___regBuiltin_Lean_Parser_Attr_tactic__name_parenthesizer__11___closed__0 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__name___regBuiltin_Lean_Parser_Attr_tactic__name_parenthesizer__11___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__name___regBuiltin_Lean_Parser_Attr_tactic__name_parenthesizer__11();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__name___regBuiltin_Lean_Parser_Attr_tactic__name_parenthesizer__11___boxed(lean_object*);
static lean_object* _init_l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__7_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_13_; lean_object* v___x_14_; 
v___x_13_ = lean_box(0);
v___x_14_ = l_unsafeCast___redArg(v___x_13_);
return v___x_14_;
}
}
static lean_object* _init_l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__9_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_16_; lean_object* v___x_17_; lean_object* v___x_18_; 
v___x_16_ = ((lean_object*)(l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__8_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2_));
v___x_17_ = lean_obj_once(&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__7_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2_, &l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__7_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__7_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2_);
v___x_18_ = l_Lean_Name_str___override(v___x_17_, v___x_16_);
return v___x_18_;
}
}
static lean_object* _init_l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__10_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_19_; lean_object* v___x_20_; lean_object* v___x_21_; 
v___x_19_ = ((lean_object*)(l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2_));
v___x_20_ = lean_obj_once(&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__9_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2_, &l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__9_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__9_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2_);
v___x_21_ = l_Lean_Name_str___override(v___x_20_, v___x_19_);
return v___x_21_;
}
}
static lean_object* _init_l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__11_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_22_; lean_object* v___x_23_; lean_object* v___x_24_; 
v___x_22_ = ((lean_object*)(l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2_));
v___x_23_ = lean_obj_once(&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__10_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2_, &l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__10_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__10_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2_);
v___x_24_ = l_Lean_Name_str___override(v___x_23_, v___x_22_);
return v___x_24_;
}
}
static lean_object* _init_l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__13_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_26_; lean_object* v___x_27_; lean_object* v___x_28_; 
v___x_26_ = ((lean_object*)(l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__12_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2_));
v___x_27_ = lean_obj_once(&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__11_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2_, &l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__11_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__11_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2_);
v___x_28_ = l_Lean_Name_str___override(v___x_27_, v___x_26_);
return v___x_28_;
}
}
static lean_object* _init_l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__14_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_29_; lean_object* v___x_30_; lean_object* v___x_31_; 
v___x_29_ = lean_unsigned_to_nat(0u);
v___x_30_ = lean_obj_once(&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__13_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2_, &l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__13_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__13_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2_);
v___x_31_ = l_Lean_Name_num___override(v___x_30_, v___x_29_);
return v___x_31_;
}
}
static lean_object* _init_l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__15_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_32_; lean_object* v___x_33_; lean_object* v___x_34_; 
v___x_32_ = ((lean_object*)(l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2_));
v___x_33_ = lean_obj_once(&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__14_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2_, &l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__14_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__14_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2_);
v___x_34_ = l_Lean_Name_str___override(v___x_33_, v___x_32_);
return v___x_34_;
}
}
static lean_object* _init_l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__16_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_35_; lean_object* v___x_36_; lean_object* v___x_37_; 
v___x_35_ = ((lean_object*)(l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2_));
v___x_36_ = lean_obj_once(&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__15_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2_, &l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__15_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__15_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2_);
v___x_37_ = l_Lean_Name_str___override(v___x_36_, v___x_35_);
return v___x_37_;
}
}
static lean_object* _init_l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__18_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_39_; lean_object* v___x_40_; lean_object* v___x_41_; 
v___x_39_ = ((lean_object*)(l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__17_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2_));
v___x_40_ = lean_obj_once(&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__16_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2_, &l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__16_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__16_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2_);
v___x_41_ = l_Lean_Name_str___override(v___x_40_, v___x_39_);
return v___x_41_;
}
}
static lean_object* _init_l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__20_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_43_; lean_object* v___x_44_; lean_object* v___x_45_; 
v___x_43_ = ((lean_object*)(l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__19_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2_));
v___x_44_ = lean_obj_once(&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__18_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2_, &l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__18_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__18_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2_);
v___x_45_ = l_Lean_Name_str___override(v___x_44_, v___x_43_);
return v___x_45_;
}
}
static lean_object* _init_l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__21_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_46_; lean_object* v___x_47_; lean_object* v___x_48_; 
v___x_46_ = ((lean_object*)(l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2_));
v___x_47_ = lean_obj_once(&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__20_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2_, &l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__20_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__20_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2_);
v___x_48_ = l_Lean_Name_str___override(v___x_47_, v___x_46_);
return v___x_48_;
}
}
static lean_object* _init_l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__22_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_49_; lean_object* v___x_50_; lean_object* v___x_51_; 
v___x_49_ = ((lean_object*)(l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2_));
v___x_50_ = lean_obj_once(&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__21_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2_, &l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__21_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__21_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2_);
v___x_51_ = l_Lean_Name_str___override(v___x_50_, v___x_49_);
return v___x_51_;
}
}
static lean_object* _init_l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__23_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_52_; lean_object* v___x_53_; lean_object* v___x_54_; 
v___x_52_ = ((lean_object*)(l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__12_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2_));
v___x_53_ = lean_obj_once(&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__22_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2_, &l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__22_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__22_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2_);
v___x_54_ = l_Lean_Name_str___override(v___x_53_, v___x_52_);
return v___x_54_;
}
}
static lean_object* _init_l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__24_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_55_; lean_object* v___x_56_; lean_object* v___x_57_; 
v___x_55_ = lean_unsigned_to_nat(1857506627u);
v___x_56_ = lean_obj_once(&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__23_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2_, &l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__23_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__23_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2_);
v___x_57_ = l_Lean_Name_num___override(v___x_56_, v___x_55_);
return v___x_57_;
}
}
static lean_object* _init_l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__26_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_59_; lean_object* v___x_60_; lean_object* v___x_61_; 
v___x_59_ = ((lean_object*)(l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__25_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2_));
v___x_60_ = lean_obj_once(&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__24_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2_, &l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__24_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__24_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2_);
v___x_61_ = l_Lean_Name_str___override(v___x_60_, v___x_59_);
return v___x_61_;
}
}
static lean_object* _init_l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__28_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_63_; lean_object* v___x_64_; lean_object* v___x_65_; 
v___x_63_ = ((lean_object*)(l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__27_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2_));
v___x_64_ = lean_obj_once(&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__26_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2_, &l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__26_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__26_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2_);
v___x_65_ = l_Lean_Name_str___override(v___x_64_, v___x_63_);
return v___x_65_;
}
}
static lean_object* _init_l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__29_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_66_; lean_object* v___x_67_; lean_object* v___x_68_; 
v___x_66_ = lean_unsigned_to_nat(2u);
v___x_67_ = lean_obj_once(&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__28_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2_, &l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__28_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__28_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2_);
v___x_68_ = l_Lean_Name_num___override(v___x_67_, v___x_66_);
return v___x_68_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_initFn_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_75_; lean_object* v___x_76_; uint8_t v___x_77_; lean_object* v___x_78_; lean_object* v___x_79_; 
v___x_75_ = ((lean_object*)(l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__1_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2_));
v___x_76_ = ((lean_object*)(l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__6_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2_));
v___x_77_ = 2;
v___x_78_ = lean_obj_once(&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__29_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2_, &l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__29_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__29_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2_);
v___x_79_ = l_Lean_Parser_registerBuiltinParserAttribute(v___x_75_, v___x_76_, v___x_77_, v___x_78_);
if (lean_obj_tag(v___x_79_) == 0)
{
lean_object* v___x_80_; lean_object* v___x_81_; lean_object* v___x_82_; 
lean_dec_ref_known(v___x_79_, 1);
v___x_80_ = ((lean_object*)(l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__31_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2_));
v___x_81_ = ((lean_object*)(l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__32_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2_));
v___x_82_ = l_Lean_Parser_registerBuiltinDynamicParserAttribute(v___x_80_, v___x_81_, v___x_78_);
return v___x_82_;
}
else
{
return v___x_79_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_initFn_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2____boxed(lean_object* v_a_83_){
_start:
{
lean_object* v_res_84_; 
v_res_84_ = l___private_Lean_Parser_Attr_0__Lean_Parser_initFn_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2_();
return v_res_84_;
}
}
static lean_object* _init_l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__4_00___x40_Lean_Parser_Attr_249558774____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_94_; lean_object* v___x_95_; lean_object* v___x_96_; 
v___x_94_ = lean_unsigned_to_nat(249558774u);
v___x_95_ = lean_obj_once(&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__23_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2_, &l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__23_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__23_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2_);
v___x_96_ = l_Lean_Name_num___override(v___x_95_, v___x_94_);
return v___x_96_;
}
}
static lean_object* _init_l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__5_00___x40_Lean_Parser_Attr_249558774____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_97_; lean_object* v___x_98_; lean_object* v___x_99_; 
v___x_97_ = ((lean_object*)(l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__25_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2_));
v___x_98_ = lean_obj_once(&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__4_00___x40_Lean_Parser_Attr_249558774____hygCtx___hyg_2_, &l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__4_00___x40_Lean_Parser_Attr_249558774____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__4_00___x40_Lean_Parser_Attr_249558774____hygCtx___hyg_2_);
v___x_99_ = l_Lean_Name_str___override(v___x_98_, v___x_97_);
return v___x_99_;
}
}
static lean_object* _init_l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__6_00___x40_Lean_Parser_Attr_249558774____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_100_; lean_object* v___x_101_; lean_object* v___x_102_; 
v___x_100_ = ((lean_object*)(l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__27_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2_));
v___x_101_ = lean_obj_once(&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__5_00___x40_Lean_Parser_Attr_249558774____hygCtx___hyg_2_, &l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__5_00___x40_Lean_Parser_Attr_249558774____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__5_00___x40_Lean_Parser_Attr_249558774____hygCtx___hyg_2_);
v___x_102_ = l_Lean_Name_str___override(v___x_101_, v___x_100_);
return v___x_102_;
}
}
static lean_object* _init_l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__7_00___x40_Lean_Parser_Attr_249558774____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_103_; lean_object* v___x_104_; lean_object* v___x_105_; 
v___x_103_ = lean_unsigned_to_nat(2u);
v___x_104_ = lean_obj_once(&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__6_00___x40_Lean_Parser_Attr_249558774____hygCtx___hyg_2_, &l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__6_00___x40_Lean_Parser_Attr_249558774____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__6_00___x40_Lean_Parser_Attr_249558774____hygCtx___hyg_2_);
v___x_105_ = l_Lean_Name_num___override(v___x_104_, v___x_103_);
return v___x_105_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_initFn_00___x40_Lean_Parser_Attr_249558774____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_112_; lean_object* v___x_113_; uint8_t v___x_114_; lean_object* v___x_115_; lean_object* v___x_116_; 
v___x_112_ = ((lean_object*)(l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__1_00___x40_Lean_Parser_Attr_249558774____hygCtx___hyg_2_));
v___x_113_ = ((lean_object*)(l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Attr_249558774____hygCtx___hyg_2_));
v___x_114_ = 1;
v___x_115_ = lean_obj_once(&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__7_00___x40_Lean_Parser_Attr_249558774____hygCtx___hyg_2_, &l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__7_00___x40_Lean_Parser_Attr_249558774____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__7_00___x40_Lean_Parser_Attr_249558774____hygCtx___hyg_2_);
v___x_116_ = l_Lean_Parser_registerBuiltinParserAttribute(v___x_112_, v___x_113_, v___x_114_, v___x_115_);
if (lean_obj_tag(v___x_116_) == 0)
{
lean_object* v___x_117_; lean_object* v___x_118_; lean_object* v___x_119_; 
lean_dec_ref_known(v___x_116_, 1);
v___x_117_ = ((lean_object*)(l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__9_00___x40_Lean_Parser_Attr_249558774____hygCtx___hyg_2_));
v___x_118_ = ((lean_object*)(l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__10_00___x40_Lean_Parser_Attr_249558774____hygCtx___hyg_2_));
v___x_119_ = l_Lean_Parser_registerBuiltinDynamicParserAttribute(v___x_117_, v___x_118_, v___x_115_);
return v___x_119_;
}
else
{
return v___x_116_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_initFn_00___x40_Lean_Parser_Attr_249558774____hygCtx___hyg_2____boxed(lean_object* v_a_120_){
_start:
{
lean_object* v_res_121_; 
v_res_121_ = l___private_Lean_Parser_Attr_0__Lean_Parser_initFn_00___x40_Lean_Parser_Attr_249558774____hygCtx___hyg_2_();
return v_res_121_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_priorityParser(lean_object* v_rbp_122_){
_start:
{
lean_object* v___x_123_; lean_object* v___x_124_; 
v___x_123_ = ((lean_object*)(l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__32_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2_));
v___x_124_ = l_Lean_Parser_categoryParser(v___x_123_, v_rbp_122_);
return v___x_124_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_attrParser(lean_object* v_rbp_125_){
_start:
{
lean_object* v___x_126_; lean_object* v___x_127_; 
v___x_126_ = ((lean_object*)(l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__10_00___x40_Lean_Parser_Attr_249558774____hygCtx___hyg_2_));
v___x_127_ = l_Lean_Parser_categoryParser(v___x_126_, v_rbp_125_);
return v___x_127_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_priorityParser_formatter___redArg(lean_object* v_a_128_, lean_object* v_a_129_, lean_object* v_a_130_, lean_object* v_a_131_){
_start:
{
lean_object* v___x_133_; lean_object* v___x_134_; 
v___x_133_ = ((lean_object*)(l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__32_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2_));
v___x_134_ = l_Lean_PrettyPrinter_Formatter_categoryParser_formatter(v___x_133_, v_a_128_, v_a_129_, v_a_130_, v_a_131_);
return v___x_134_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_priorityParser_formatter___redArg___boxed(lean_object* v_a_135_, lean_object* v_a_136_, lean_object* v_a_137_, lean_object* v_a_138_, lean_object* v_a_139_){
_start:
{
lean_object* v_res_140_; 
v_res_140_ = l_Lean_Parser_priorityParser_formatter___redArg(v_a_135_, v_a_136_, v_a_137_, v_a_138_);
lean_dec(v_a_138_);
lean_dec_ref(v_a_137_);
lean_dec(v_a_136_);
lean_dec_ref(v_a_135_);
return v_res_140_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_priorityParser_formatter(lean_object* v_rbp_141_, lean_object* v_a_142_, lean_object* v_a_143_, lean_object* v_a_144_, lean_object* v_a_145_){
_start:
{
lean_object* v___x_147_; 
v___x_147_ = l_Lean_Parser_priorityParser_formatter___redArg(v_a_142_, v_a_143_, v_a_144_, v_a_145_);
return v___x_147_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_priorityParser_formatter___boxed(lean_object* v_rbp_148_, lean_object* v_a_149_, lean_object* v_a_150_, lean_object* v_a_151_, lean_object* v_a_152_, lean_object* v_a_153_){
_start:
{
lean_object* v_res_154_; 
v_res_154_ = l_Lean_Parser_priorityParser_formatter(v_rbp_148_, v_a_149_, v_a_150_, v_a_151_, v_a_152_);
lean_dec(v_a_152_);
lean_dec_ref(v_a_151_);
lean_dec(v_a_150_);
lean_dec_ref(v_a_149_);
lean_dec(v_rbp_148_);
return v_res_154_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_priorityParser_parenthesizer(lean_object* v_rbp_155_, lean_object* v_a_156_, lean_object* v_a_157_, lean_object* v_a_158_, lean_object* v_a_159_){
_start:
{
lean_object* v___x_161_; lean_object* v___x_162_; 
v___x_161_ = ((lean_object*)(l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__32_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2_));
v___x_162_ = l_Lean_PrettyPrinter_Parenthesizer_categoryParser_parenthesizer(v___x_161_, v_rbp_155_, v_a_156_, v_a_157_, v_a_158_, v_a_159_);
return v___x_162_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_priorityParser_parenthesizer___boxed(lean_object* v_rbp_163_, lean_object* v_a_164_, lean_object* v_a_165_, lean_object* v_a_166_, lean_object* v_a_167_, lean_object* v_a_168_){
_start:
{
lean_object* v_res_169_; 
v_res_169_ = l_Lean_Parser_priorityParser_parenthesizer(v_rbp_163_, v_a_164_, v_a_165_, v_a_166_, v_a_167_);
lean_dec(v_a_167_);
lean_dec_ref(v_a_166_);
lean_dec(v_a_165_);
lean_dec_ref(v_a_164_);
return v_res_169_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_attrParser_formatter___redArg(lean_object* v_a_170_, lean_object* v_a_171_, lean_object* v_a_172_, lean_object* v_a_173_){
_start:
{
lean_object* v___x_175_; lean_object* v___x_176_; 
v___x_175_ = ((lean_object*)(l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__10_00___x40_Lean_Parser_Attr_249558774____hygCtx___hyg_2_));
v___x_176_ = l_Lean_PrettyPrinter_Formatter_categoryParser_formatter(v___x_175_, v_a_170_, v_a_171_, v_a_172_, v_a_173_);
return v___x_176_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_attrParser_formatter___redArg___boxed(lean_object* v_a_177_, lean_object* v_a_178_, lean_object* v_a_179_, lean_object* v_a_180_, lean_object* v_a_181_){
_start:
{
lean_object* v_res_182_; 
v_res_182_ = l_Lean_Parser_attrParser_formatter___redArg(v_a_177_, v_a_178_, v_a_179_, v_a_180_);
lean_dec(v_a_180_);
lean_dec_ref(v_a_179_);
lean_dec(v_a_178_);
lean_dec_ref(v_a_177_);
return v_res_182_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_attrParser_formatter(lean_object* v_rbp_183_, lean_object* v_a_184_, lean_object* v_a_185_, lean_object* v_a_186_, lean_object* v_a_187_){
_start:
{
lean_object* v___x_189_; 
v___x_189_ = l_Lean_Parser_attrParser_formatter___redArg(v_a_184_, v_a_185_, v_a_186_, v_a_187_);
return v___x_189_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_attrParser_formatter___boxed(lean_object* v_rbp_190_, lean_object* v_a_191_, lean_object* v_a_192_, lean_object* v_a_193_, lean_object* v_a_194_, lean_object* v_a_195_){
_start:
{
lean_object* v_res_196_; 
v_res_196_ = l_Lean_Parser_attrParser_formatter(v_rbp_190_, v_a_191_, v_a_192_, v_a_193_, v_a_194_);
lean_dec(v_a_194_);
lean_dec_ref(v_a_193_);
lean_dec(v_a_192_);
lean_dec_ref(v_a_191_);
lean_dec(v_rbp_190_);
return v_res_196_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_attrParser_parenthesizer(lean_object* v_rbp_197_, lean_object* v_a_198_, lean_object* v_a_199_, lean_object* v_a_200_, lean_object* v_a_201_){
_start:
{
lean_object* v___x_203_; lean_object* v___x_204_; 
v___x_203_ = ((lean_object*)(l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__10_00___x40_Lean_Parser_Attr_249558774____hygCtx___hyg_2_));
v___x_204_ = l_Lean_PrettyPrinter_Parenthesizer_categoryParser_parenthesizer(v___x_203_, v_rbp_197_, v_a_198_, v_a_199_, v_a_200_, v_a_201_);
return v___x_204_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_attrParser_parenthesizer___boxed(lean_object* v_rbp_205_, lean_object* v_a_206_, lean_object* v_a_207_, lean_object* v_a_208_, lean_object* v_a_209_, lean_object* v_a_210_){
_start:
{
lean_object* v_res_211_; 
v_res_211_ = l_Lean_Parser_attrParser_parenthesizer(v_rbp_205_, v_a_206_, v_a_207_, v_a_208_, v_a_209_);
lean_dec(v_a_209_);
lean_dec_ref(v_a_208_);
lean_dec(v_a_207_);
lean_dec_ref(v_a_206_);
return v_res_211_;
}
}
static lean_object* _init_l_Lean_Parser_Priority_numPrio___closed__0(void){
_start:
{
lean_object* v___x_212_; lean_object* v___x_213_; 
v___x_212_ = l_Lean_Parser_maxPrec;
v___x_213_ = l_Lean_Parser_checkPrec(v___x_212_);
return v___x_213_;
}
}
static lean_object* _init_l_Lean_Parser_Priority_numPrio___closed__1(void){
_start:
{
lean_object* v___x_214_; lean_object* v___x_215_; lean_object* v___x_216_; 
v___x_214_ = l_Lean_Parser_numLit;
v___x_215_ = lean_obj_once(&l_Lean_Parser_Priority_numPrio___closed__0, &l_Lean_Parser_Priority_numPrio___closed__0_once, _init_l_Lean_Parser_Priority_numPrio___closed__0);
v___x_216_ = l_Lean_Parser_andthen(v___x_215_, v___x_214_);
return v___x_216_;
}
}
static lean_object* _init_l_Lean_Parser_Priority_numPrio(void){
_start:
{
lean_object* v___x_217_; 
v___x_217_ = lean_obj_once(&l_Lean_Parser_Priority_numPrio___closed__1, &l_Lean_Parser_Priority_numPrio___closed__1_once, _init_l_Lean_Parser_Priority_numPrio___closed__1);
return v___x_217_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Priority_numPrio___regBuiltin_Lean_Parser_Priority_numPrio__1(){
_start:
{
lean_object* v___x_226_; lean_object* v___x_227_; lean_object* v___x_228_; lean_object* v___x_229_; lean_object* v___x_230_; 
v___x_226_ = ((lean_object*)(l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__32_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2_));
v___x_227_ = ((lean_object*)(l___private_Lean_Parser_Attr_0__Lean_Parser_Priority_numPrio___regBuiltin_Lean_Parser_Priority_numPrio__1___closed__2));
v___x_228_ = l_Lean_Parser_Priority_numPrio;
v___x_229_ = lean_unsigned_to_nat(1000u);
v___x_230_ = l_Lean_Parser_addBuiltinLeadingParser(v___x_226_, v___x_227_, v___x_228_, v___x_229_);
return v___x_230_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Priority_numPrio___regBuiltin_Lean_Parser_Priority_numPrio__1___boxed(lean_object* v_a_231_){
_start:
{
lean_object* v_res_232_; 
v_res_232_ = l___private_Lean_Parser_Attr_0__Lean_Parser_Priority_numPrio___regBuiltin_Lean_Parser_Priority_numPrio__1();
return v_res_232_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Priority_numPrio___regBuiltin_Lean_Parser_Priority_numPrio_declRange__3(){
_start:
{
lean_object* v___x_259_; lean_object* v___x_260_; lean_object* v___x_261_; 
v___x_259_ = ((lean_object*)(l___private_Lean_Parser_Attr_0__Lean_Parser_Priority_numPrio___regBuiltin_Lean_Parser_Priority_numPrio__1___closed__2));
v___x_260_ = ((lean_object*)(l___private_Lean_Parser_Attr_0__Lean_Parser_Priority_numPrio___regBuiltin_Lean_Parser_Priority_numPrio_declRange__3___closed__6));
v___x_261_ = l_Lean_addBuiltinDeclarationRanges(v___x_259_, v___x_260_);
return v___x_261_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Priority_numPrio___regBuiltin_Lean_Parser_Priority_numPrio_declRange__3___boxed(lean_object* v_a_262_){
_start:
{
lean_object* v_res_263_; 
v_res_263_ = l___private_Lean_Parser_Attr_0__Lean_Parser_Priority_numPrio___regBuiltin_Lean_Parser_Priority_numPrio_declRange__3();
return v_res_263_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Priority_numPrio_formatter(lean_object* v_a_265_, lean_object* v_a_266_, lean_object* v_a_267_, lean_object* v_a_268_){
_start:
{
lean_object* v___x_270_; lean_object* v___x_271_; lean_object* v___x_272_; 
v___x_270_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_checkPrec_formatter___boxed), 5, 0);
v___x_271_ = ((lean_object*)(l_Lean_Parser_Priority_numPrio_formatter___closed__0));
v___x_272_ = l_Lean_PrettyPrinter_Formatter_andthen_formatter(v___x_270_, v___x_271_, v_a_265_, v_a_266_, v_a_267_, v_a_268_);
return v___x_272_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Priority_numPrio_formatter___boxed(lean_object* v_a_273_, lean_object* v_a_274_, lean_object* v_a_275_, lean_object* v_a_276_, lean_object* v_a_277_){
_start:
{
lean_object* v_res_278_; 
v_res_278_ = l_Lean_Parser_Priority_numPrio_formatter(v_a_273_, v_a_274_, v_a_275_, v_a_276_);
lean_dec(v_a_276_);
lean_dec_ref(v_a_275_);
lean_dec(v_a_274_);
lean_dec_ref(v_a_273_);
return v_res_278_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Priority_numPrio_parenthesizer___lam__0(lean_object* v___x_279_, lean_object* v___y_280_, lean_object* v___y_281_, lean_object* v___y_282_, lean_object* v___y_283_){
_start:
{
lean_object* v___x_285_; 
v___x_285_ = l_Lean_PrettyPrinter_Parenthesizer_addPrecCheck___redArg(v___x_279_, v___y_281_);
return v___x_285_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Priority_numPrio_parenthesizer___lam__0___boxed(lean_object* v___x_286_, lean_object* v___y_287_, lean_object* v___y_288_, lean_object* v___y_289_, lean_object* v___y_290_, lean_object* v___y_291_){
_start:
{
lean_object* v_res_292_; 
v_res_292_ = l_Lean_Parser_Priority_numPrio_parenthesizer___lam__0(v___x_286_, v___y_287_, v___y_288_, v___y_289_, v___y_290_);
lean_dec(v___y_290_);
lean_dec_ref(v___y_289_);
lean_dec(v___y_288_);
lean_dec_ref(v___y_287_);
return v_res_292_;
}
}
static lean_object* _init_l_Lean_Parser_Priority_numPrio_parenthesizer___closed__0(void){
_start:
{
lean_object* v___x_293_; lean_object* v___f_294_; 
v___x_293_ = l_Lean_Parser_maxPrec;
v___f_294_ = lean_alloc_closure((void*)(l_Lean_Parser_Priority_numPrio_parenthesizer___lam__0___boxed), 6, 1);
lean_closure_set(v___f_294_, 0, v___x_293_);
return v___f_294_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Priority_numPrio_parenthesizer(lean_object* v_a_296_, lean_object* v_a_297_, lean_object* v_a_298_, lean_object* v_a_299_){
_start:
{
lean_object* v___f_301_; lean_object* v___x_302_; lean_object* v___x_303_; 
v___f_301_ = lean_obj_once(&l_Lean_Parser_Priority_numPrio_parenthesizer___closed__0, &l_Lean_Parser_Priority_numPrio_parenthesizer___closed__0_once, _init_l_Lean_Parser_Priority_numPrio_parenthesizer___closed__0);
v___x_302_ = ((lean_object*)(l_Lean_Parser_Priority_numPrio_parenthesizer___closed__1));
v___x_303_ = l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer(v___f_301_, v___x_302_, v_a_296_, v_a_297_, v_a_298_, v_a_299_);
return v___x_303_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Priority_numPrio_parenthesizer___boxed(lean_object* v_a_304_, lean_object* v_a_305_, lean_object* v_a_306_, lean_object* v_a_307_, lean_object* v_a_308_){
_start:
{
lean_object* v_res_309_; 
v_res_309_ = l_Lean_Parser_Priority_numPrio_parenthesizer(v_a_304_, v_a_305_, v_a_306_, v_a_307_);
lean_dec(v_a_307_);
lean_dec_ref(v_a_306_);
lean_dec(v_a_305_);
lean_dec_ref(v_a_304_);
return v_res_309_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_simple___closed__2(void){
_start:
{
uint8_t v___x_316_; uint8_t v___x_317_; lean_object* v___x_318_; lean_object* v___x_319_; lean_object* v___x_320_; 
v___x_316_ = 0;
v___x_317_ = 1;
v___x_318_ = ((lean_object*)(l_Lean_Parser_Attr_simple___closed__1));
v___x_319_ = ((lean_object*)(l_Lean_Parser_Attr_simple___closed__0));
v___x_320_ = l_Lean_Parser_mkAntiquot(v___x_319_, v___x_318_, v___x_317_, v___x_316_);
return v___x_320_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_simple___closed__3(void){
_start:
{
lean_object* v___x_321_; lean_object* v___x_322_; lean_object* v___x_323_; 
v___x_321_ = lean_unsigned_to_nat(0u);
v___x_322_ = ((lean_object*)(l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__32_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2_));
v___x_323_ = l_Lean_Parser_categoryParser(v___x_322_, v___x_321_);
return v___x_323_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_simple___closed__4(void){
_start:
{
lean_object* v___x_324_; lean_object* v___x_325_; lean_object* v___x_326_; 
v___x_324_ = l_Lean_Parser_ident;
v___x_325_ = lean_obj_once(&l_Lean_Parser_Attr_simple___closed__3, &l_Lean_Parser_Attr_simple___closed__3_once, _init_l_Lean_Parser_Attr_simple___closed__3);
v___x_326_ = l_Lean_Parser_orelse(v___x_325_, v___x_324_);
return v___x_326_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_simple___closed__5(void){
_start:
{
lean_object* v___x_327_; lean_object* v___x_328_; lean_object* v___x_329_; 
v___x_327_ = lean_obj_once(&l_Lean_Parser_Attr_simple___closed__4, &l_Lean_Parser_Attr_simple___closed__4_once, _init_l_Lean_Parser_Attr_simple___closed__4);
v___x_328_ = l_Lean_Parser_skip;
v___x_329_ = l_Lean_Parser_andthen(v___x_328_, v___x_327_);
return v___x_329_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_simple___closed__6(void){
_start:
{
lean_object* v___x_330_; lean_object* v___x_331_; 
v___x_330_ = lean_obj_once(&l_Lean_Parser_Attr_simple___closed__5, &l_Lean_Parser_Attr_simple___closed__5_once, _init_l_Lean_Parser_Attr_simple___closed__5);
v___x_331_ = l_Lean_Parser_optional(v___x_330_);
return v___x_331_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_simple___closed__7(void){
_start:
{
lean_object* v___x_332_; lean_object* v___x_333_; lean_object* v___x_334_; 
v___x_332_ = lean_obj_once(&l_Lean_Parser_Attr_simple___closed__6, &l_Lean_Parser_Attr_simple___closed__6_once, _init_l_Lean_Parser_Attr_simple___closed__6);
v___x_333_ = l_Lean_Parser_ident;
v___x_334_ = l_Lean_Parser_andthen(v___x_333_, v___x_332_);
return v___x_334_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_simple___closed__8(void){
_start:
{
lean_object* v___x_335_; lean_object* v___x_336_; lean_object* v___x_337_; lean_object* v___x_338_; 
v___x_335_ = lean_obj_once(&l_Lean_Parser_Attr_simple___closed__7, &l_Lean_Parser_Attr_simple___closed__7_once, _init_l_Lean_Parser_Attr_simple___closed__7);
v___x_336_ = lean_unsigned_to_nat(1024u);
v___x_337_ = ((lean_object*)(l_Lean_Parser_Attr_simple___closed__1));
v___x_338_ = l_Lean_Parser_leadingNode(v___x_337_, v___x_336_, v___x_335_);
return v___x_338_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_simple___closed__9(void){
_start:
{
lean_object* v___x_339_; lean_object* v___x_340_; lean_object* v___x_341_; 
v___x_339_ = lean_obj_once(&l_Lean_Parser_Attr_simple___closed__8, &l_Lean_Parser_Attr_simple___closed__8_once, _init_l_Lean_Parser_Attr_simple___closed__8);
v___x_340_ = lean_obj_once(&l_Lean_Parser_Attr_simple___closed__2, &l_Lean_Parser_Attr_simple___closed__2_once, _init_l_Lean_Parser_Attr_simple___closed__2);
v___x_341_ = l_Lean_Parser_withAntiquot(v___x_340_, v___x_339_);
return v___x_341_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_simple___closed__10(void){
_start:
{
lean_object* v___x_342_; lean_object* v___x_343_; lean_object* v___x_344_; 
v___x_342_ = lean_obj_once(&l_Lean_Parser_Attr_simple___closed__9, &l_Lean_Parser_Attr_simple___closed__9_once, _init_l_Lean_Parser_Attr_simple___closed__9);
v___x_343_ = ((lean_object*)(l_Lean_Parser_Attr_simple___closed__1));
v___x_344_ = l_Lean_Parser_withCache(v___x_343_, v___x_342_);
return v___x_344_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_simple(void){
_start:
{
lean_object* v___x_345_; 
v___x_345_ = lean_obj_once(&l_Lean_Parser_Attr_simple___closed__10, &l_Lean_Parser_Attr_simple___closed__10_once, _init_l_Lean_Parser_Attr_simple___closed__10);
return v___x_345_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple__1(){
_start:
{
lean_object* v___x_347_; lean_object* v___x_348_; lean_object* v___x_349_; lean_object* v___x_350_; lean_object* v___x_351_; 
v___x_347_ = ((lean_object*)(l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__10_00___x40_Lean_Parser_Attr_249558774____hygCtx___hyg_2_));
v___x_348_ = ((lean_object*)(l_Lean_Parser_Attr_simple___closed__1));
v___x_349_ = l_Lean_Parser_Attr_simple;
v___x_350_ = lean_unsigned_to_nat(1000u);
v___x_351_ = l_Lean_Parser_addBuiltinLeadingParser(v___x_347_, v___x_348_, v___x_349_, v___x_350_);
return v___x_351_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple__1___boxed(lean_object* v_a_352_){
_start:
{
lean_object* v_res_353_; 
v_res_353_ = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple__1();
return v_res_353_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_declRange__3(){
_start:
{
lean_object* v___x_380_; lean_object* v___x_381_; lean_object* v___x_382_; 
v___x_380_ = ((lean_object*)(l_Lean_Parser_Attr_simple___closed__1));
v___x_381_ = ((lean_object*)(l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_declRange__3___closed__6));
v___x_382_ = l_Lean_addBuiltinDeclarationRanges(v___x_380_, v___x_381_);
return v___x_382_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_declRange__3___boxed(lean_object* v_a_383_){
_start:
{
lean_object* v_res_384_; 
v_res_384_ = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_declRange__3();
return v_res_384_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_simple_formatter___lam__0(lean_object* v___y_385_, lean_object* v___y_386_, lean_object* v___y_387_, lean_object* v___y_388_){
_start:
{
lean_object* v___x_390_; 
v___x_390_ = l_Lean_PrettyPrinter_Formatter_pushLine___redArg(v___y_386_);
return v___x_390_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_simple_formatter___lam__0___boxed(lean_object* v___y_391_, lean_object* v___y_392_, lean_object* v___y_393_, lean_object* v___y_394_, lean_object* v___y_395_){
_start:
{
lean_object* v_res_396_; 
v_res_396_ = l_Lean_Parser_Attr_simple_formatter___lam__0(v___y_391_, v___y_392_, v___y_393_, v___y_394_);
lean_dec(v___y_394_);
lean_dec_ref(v___y_393_);
lean_dec(v___y_392_);
lean_dec_ref(v___y_391_);
return v_res_396_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_simple_formatter(lean_object* v_a_423_, lean_object* v_a_424_, lean_object* v_a_425_, lean_object* v_a_426_){
_start:
{
lean_object* v___x_428_; lean_object* v___x_429_; lean_object* v___x_430_; 
v___x_428_ = ((lean_object*)(l_Lean_Parser_Attr_simple_formatter___closed__1));
v___x_429_ = ((lean_object*)(l_Lean_Parser_Attr_simple_formatter___closed__8));
v___x_430_ = l_Lean_PrettyPrinter_Formatter_orelse_formatter(v___x_428_, v___x_429_, v_a_423_, v_a_424_, v_a_425_, v_a_426_);
return v___x_430_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_simple_formatter___boxed(lean_object* v_a_431_, lean_object* v_a_432_, lean_object* v_a_433_, lean_object* v_a_434_, lean_object* v_a_435_){
_start:
{
lean_object* v_res_436_; 
v_res_436_ = l_Lean_Parser_Attr_simple_formatter(v_a_431_, v_a_432_, v_a_433_, v_a_434_);
lean_dec(v_a_434_);
lean_dec_ref(v_a_433_);
lean_dec(v_a_432_);
lean_dec_ref(v_a_431_);
return v_res_436_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_formatter__7(){
_start:
{
lean_object* v___x_445_; lean_object* v___x_446_; lean_object* v___x_447_; lean_object* v___x_448_; lean_object* v___x_449_; 
v___x_445_ = l_Lean_PrettyPrinter_formatterAttribute;
v___x_446_ = ((lean_object*)(l_Lean_Parser_Attr_simple___closed__1));
v___x_447_ = ((lean_object*)(l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_formatter__7___closed__1));
v___x_448_ = lean_alloc_closure((void*)(l_Lean_Parser_Attr_simple_formatter___boxed), 5, 0);
v___x_449_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_445_, v___x_446_, v___x_447_, v___x_448_);
return v___x_449_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_formatter__7___boxed(lean_object* v_a_450_){
_start:
{
lean_object* v_res_451_; 
v_res_451_ = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_formatter__7();
return v_res_451_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_simple_parenthesizer(lean_object* v_a_478_, lean_object* v_a_479_, lean_object* v_a_480_, lean_object* v_a_481_){
_start:
{
lean_object* v___x_483_; lean_object* v___x_484_; lean_object* v___x_485_; 
v___x_483_ = ((lean_object*)(l_Lean_Parser_Attr_simple_parenthesizer___closed__0));
v___x_484_ = ((lean_object*)(l_Lean_Parser_Attr_simple_parenthesizer___closed__8));
v___x_485_ = l_Lean_PrettyPrinter_Parenthesizer_withAntiquot_parenthesizer(v___x_483_, v___x_484_, v_a_478_, v_a_479_, v_a_480_, v_a_481_);
return v___x_485_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_simple_parenthesizer___boxed(lean_object* v_a_486_, lean_object* v_a_487_, lean_object* v_a_488_, lean_object* v_a_489_, lean_object* v_a_490_){
_start:
{
lean_object* v_res_491_; 
v_res_491_ = l_Lean_Parser_Attr_simple_parenthesizer(v_a_486_, v_a_487_, v_a_488_, v_a_489_);
lean_dec(v_a_489_);
lean_dec_ref(v_a_488_);
lean_dec(v_a_487_);
lean_dec_ref(v_a_486_);
return v_res_491_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_parenthesizer__11(){
_start:
{
lean_object* v___x_500_; lean_object* v___x_501_; lean_object* v___x_502_; lean_object* v___x_503_; lean_object* v___x_504_; 
v___x_500_ = l_Lean_PrettyPrinter_parenthesizerAttribute;
v___x_501_ = ((lean_object*)(l_Lean_Parser_Attr_simple___closed__1));
v___x_502_ = ((lean_object*)(l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_parenthesizer__11___closed__1));
v___x_503_ = lean_alloc_closure((void*)(l_Lean_Parser_Attr_simple_parenthesizer___boxed), 5, 0);
v___x_504_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_500_, v___x_501_, v___x_502_, v___x_503_);
return v___x_504_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_parenthesizer__11___boxed(lean_object* v_a_505_){
_start:
{
lean_object* v_res_506_; 
v_res_506_ = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_parenthesizer__11();
return v_res_506_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_macro___closed__2(void){
_start:
{
uint8_t v___x_513_; uint8_t v___x_514_; lean_object* v___x_515_; lean_object* v___x_516_; lean_object* v___x_517_; 
v___x_513_ = 0;
v___x_514_ = 1;
v___x_515_ = ((lean_object*)(l_Lean_Parser_Attr_macro___closed__1));
v___x_516_ = ((lean_object*)(l_Lean_Parser_Attr_macro___closed__0));
v___x_517_ = l_Lean_Parser_mkAntiquot(v___x_516_, v___x_515_, v___x_514_, v___x_513_);
return v___x_517_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_macro___closed__4(void){
_start:
{
lean_object* v___x_519_; lean_object* v___x_520_; 
v___x_519_ = ((lean_object*)(l_Lean_Parser_Attr_macro___closed__3));
v___x_520_ = l_Lean_Parser_symbol(v___x_519_);
return v___x_520_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_macro___closed__5(void){
_start:
{
lean_object* v___x_521_; lean_object* v___x_522_; lean_object* v___x_523_; 
v___x_521_ = l_Lean_Parser_ident;
v___x_522_ = lean_obj_once(&l_Lean_Parser_Attr_macro___closed__4, &l_Lean_Parser_Attr_macro___closed__4_once, _init_l_Lean_Parser_Attr_macro___closed__4);
v___x_523_ = l_Lean_Parser_andthen(v___x_522_, v___x_521_);
return v___x_523_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_macro___closed__6(void){
_start:
{
lean_object* v___x_524_; lean_object* v___x_525_; lean_object* v___x_526_; lean_object* v___x_527_; 
v___x_524_ = lean_obj_once(&l_Lean_Parser_Attr_macro___closed__5, &l_Lean_Parser_Attr_macro___closed__5_once, _init_l_Lean_Parser_Attr_macro___closed__5);
v___x_525_ = lean_unsigned_to_nat(1024u);
v___x_526_ = ((lean_object*)(l_Lean_Parser_Attr_macro___closed__1));
v___x_527_ = l_Lean_Parser_leadingNode(v___x_526_, v___x_525_, v___x_524_);
return v___x_527_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_macro___closed__7(void){
_start:
{
lean_object* v___x_528_; lean_object* v___x_529_; lean_object* v___x_530_; 
v___x_528_ = lean_obj_once(&l_Lean_Parser_Attr_macro___closed__6, &l_Lean_Parser_Attr_macro___closed__6_once, _init_l_Lean_Parser_Attr_macro___closed__6);
v___x_529_ = lean_obj_once(&l_Lean_Parser_Attr_macro___closed__2, &l_Lean_Parser_Attr_macro___closed__2_once, _init_l_Lean_Parser_Attr_macro___closed__2);
v___x_530_ = l_Lean_Parser_withAntiquot(v___x_529_, v___x_528_);
return v___x_530_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_macro___closed__8(void){
_start:
{
lean_object* v___x_531_; lean_object* v___x_532_; lean_object* v___x_533_; 
v___x_531_ = lean_obj_once(&l_Lean_Parser_Attr_macro___closed__7, &l_Lean_Parser_Attr_macro___closed__7_once, _init_l_Lean_Parser_Attr_macro___closed__7);
v___x_532_ = ((lean_object*)(l_Lean_Parser_Attr_macro___closed__1));
v___x_533_ = l_Lean_Parser_withCache(v___x_532_, v___x_531_);
return v___x_533_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_macro(void){
_start:
{
lean_object* v___x_534_; 
v___x_534_ = lean_obj_once(&l_Lean_Parser_Attr_macro___closed__8, &l_Lean_Parser_Attr_macro___closed__8_once, _init_l_Lean_Parser_Attr_macro___closed__8);
return v___x_534_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_macro___regBuiltin_Lean_Parser_Attr_macro__1(){
_start:
{
lean_object* v___x_536_; lean_object* v___x_537_; lean_object* v___x_538_; lean_object* v___x_539_; lean_object* v___x_540_; 
v___x_536_ = ((lean_object*)(l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__10_00___x40_Lean_Parser_Attr_249558774____hygCtx___hyg_2_));
v___x_537_ = ((lean_object*)(l_Lean_Parser_Attr_macro___closed__1));
v___x_538_ = l_Lean_Parser_Attr_macro;
v___x_539_ = lean_unsigned_to_nat(1000u);
v___x_540_ = l_Lean_Parser_addBuiltinLeadingParser(v___x_536_, v___x_537_, v___x_538_, v___x_539_);
return v___x_540_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_macro___regBuiltin_Lean_Parser_Attr_macro__1___boxed(lean_object* v_a_541_){
_start:
{
lean_object* v_res_542_; 
v_res_542_ = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_macro___regBuiltin_Lean_Parser_Attr_macro__1();
return v_res_542_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_macro___regBuiltin_Lean_Parser_Attr_macro_declRange__3(){
_start:
{
lean_object* v___x_569_; lean_object* v___x_570_; lean_object* v___x_571_; 
v___x_569_ = ((lean_object*)(l_Lean_Parser_Attr_macro___closed__1));
v___x_570_ = ((lean_object*)(l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_macro___regBuiltin_Lean_Parser_Attr_macro_declRange__3___closed__6));
v___x_571_ = l_Lean_addBuiltinDeclarationRanges(v___x_569_, v___x_570_);
return v___x_571_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_macro___regBuiltin_Lean_Parser_Attr_macro_declRange__3___boxed(lean_object* v_a_572_){
_start:
{
lean_object* v_res_573_; 
v_res_573_ = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_macro___regBuiltin_Lean_Parser_Attr_macro_declRange__3();
return v_res_573_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_macro_formatter(lean_object* v_a_590_, lean_object* v_a_591_, lean_object* v_a_592_, lean_object* v_a_593_){
_start:
{
lean_object* v___x_595_; lean_object* v___x_596_; lean_object* v___x_597_; 
v___x_595_ = ((lean_object*)(l_Lean_Parser_Attr_macro_formatter___closed__0));
v___x_596_ = ((lean_object*)(l_Lean_Parser_Attr_macro_formatter___closed__3));
v___x_597_ = l_Lean_PrettyPrinter_Formatter_orelse_formatter(v___x_595_, v___x_596_, v_a_590_, v_a_591_, v_a_592_, v_a_593_);
return v___x_597_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_macro_formatter___boxed(lean_object* v_a_598_, lean_object* v_a_599_, lean_object* v_a_600_, lean_object* v_a_601_, lean_object* v_a_602_){
_start:
{
lean_object* v_res_603_; 
v_res_603_ = l_Lean_Parser_Attr_macro_formatter(v_a_598_, v_a_599_, v_a_600_, v_a_601_);
lean_dec(v_a_601_);
lean_dec_ref(v_a_600_);
lean_dec(v_a_599_);
lean_dec_ref(v_a_598_);
return v_res_603_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_macro___regBuiltin_Lean_Parser_Attr_macro_formatter__7(){
_start:
{
lean_object* v___x_611_; lean_object* v___x_612_; lean_object* v___x_613_; lean_object* v___x_614_; lean_object* v___x_615_; 
v___x_611_ = l_Lean_PrettyPrinter_formatterAttribute;
v___x_612_ = ((lean_object*)(l_Lean_Parser_Attr_macro___closed__1));
v___x_613_ = ((lean_object*)(l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_macro___regBuiltin_Lean_Parser_Attr_macro_formatter__7___closed__0));
v___x_614_ = lean_alloc_closure((void*)(l_Lean_Parser_Attr_macro_formatter___boxed), 5, 0);
v___x_615_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_611_, v___x_612_, v___x_613_, v___x_614_);
return v___x_615_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_macro___regBuiltin_Lean_Parser_Attr_macro_formatter__7___boxed(lean_object* v_a_616_){
_start:
{
lean_object* v_res_617_; 
v_res_617_ = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_macro___regBuiltin_Lean_Parser_Attr_macro_formatter__7();
return v_res_617_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_macro_parenthesizer(lean_object* v_a_634_, lean_object* v_a_635_, lean_object* v_a_636_, lean_object* v_a_637_){
_start:
{
lean_object* v___x_639_; lean_object* v___x_640_; lean_object* v___x_641_; 
v___x_639_ = ((lean_object*)(l_Lean_Parser_Attr_macro_parenthesizer___closed__0));
v___x_640_ = ((lean_object*)(l_Lean_Parser_Attr_macro_parenthesizer___closed__3));
v___x_641_ = l_Lean_PrettyPrinter_Parenthesizer_withAntiquot_parenthesizer(v___x_639_, v___x_640_, v_a_634_, v_a_635_, v_a_636_, v_a_637_);
return v___x_641_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_macro_parenthesizer___boxed(lean_object* v_a_642_, lean_object* v_a_643_, lean_object* v_a_644_, lean_object* v_a_645_, lean_object* v_a_646_){
_start:
{
lean_object* v_res_647_; 
v_res_647_ = l_Lean_Parser_Attr_macro_parenthesizer(v_a_642_, v_a_643_, v_a_644_, v_a_645_);
lean_dec(v_a_645_);
lean_dec_ref(v_a_644_);
lean_dec(v_a_643_);
lean_dec_ref(v_a_642_);
return v_res_647_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_macro___regBuiltin_Lean_Parser_Attr_macro_parenthesizer__11(){
_start:
{
lean_object* v___x_655_; lean_object* v___x_656_; lean_object* v___x_657_; lean_object* v___x_658_; lean_object* v___x_659_; 
v___x_655_ = l_Lean_PrettyPrinter_parenthesizerAttribute;
v___x_656_ = ((lean_object*)(l_Lean_Parser_Attr_macro___closed__1));
v___x_657_ = ((lean_object*)(l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_macro___regBuiltin_Lean_Parser_Attr_macro_parenthesizer__11___closed__0));
v___x_658_ = lean_alloc_closure((void*)(l_Lean_Parser_Attr_macro_parenthesizer___boxed), 5, 0);
v___x_659_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_655_, v___x_656_, v___x_657_, v___x_658_);
return v___x_659_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_macro___regBuiltin_Lean_Parser_Attr_macro_parenthesizer__11___boxed(lean_object* v_a_660_){
_start:
{
lean_object* v_res_661_; 
v_res_661_ = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_macro___regBuiltin_Lean_Parser_Attr_macro_parenthesizer__11();
return v_res_661_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_export___closed__2(void){
_start:
{
uint8_t v___x_668_; uint8_t v___x_669_; lean_object* v___x_670_; lean_object* v___x_671_; lean_object* v___x_672_; 
v___x_668_ = 0;
v___x_669_ = 1;
v___x_670_ = ((lean_object*)(l_Lean_Parser_Attr_export___closed__1));
v___x_671_ = ((lean_object*)(l_Lean_Parser_Attr_export___closed__0));
v___x_672_ = l_Lean_Parser_mkAntiquot(v___x_671_, v___x_670_, v___x_669_, v___x_668_);
return v___x_672_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_export___closed__4(void){
_start:
{
lean_object* v___x_674_; lean_object* v___x_675_; 
v___x_674_ = ((lean_object*)(l_Lean_Parser_Attr_export___closed__3));
v___x_675_ = l_Lean_Parser_symbol(v___x_674_);
return v___x_675_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_export___closed__5(void){
_start:
{
lean_object* v___x_676_; lean_object* v___x_677_; lean_object* v___x_678_; 
v___x_676_ = l_Lean_Parser_ident;
v___x_677_ = lean_obj_once(&l_Lean_Parser_Attr_export___closed__4, &l_Lean_Parser_Attr_export___closed__4_once, _init_l_Lean_Parser_Attr_export___closed__4);
v___x_678_ = l_Lean_Parser_andthen(v___x_677_, v___x_676_);
return v___x_678_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_export___closed__6(void){
_start:
{
lean_object* v___x_679_; lean_object* v___x_680_; lean_object* v___x_681_; lean_object* v___x_682_; 
v___x_679_ = lean_obj_once(&l_Lean_Parser_Attr_export___closed__5, &l_Lean_Parser_Attr_export___closed__5_once, _init_l_Lean_Parser_Attr_export___closed__5);
v___x_680_ = lean_unsigned_to_nat(1024u);
v___x_681_ = ((lean_object*)(l_Lean_Parser_Attr_export___closed__1));
v___x_682_ = l_Lean_Parser_leadingNode(v___x_681_, v___x_680_, v___x_679_);
return v___x_682_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_export___closed__7(void){
_start:
{
lean_object* v___x_683_; lean_object* v___x_684_; lean_object* v___x_685_; 
v___x_683_ = lean_obj_once(&l_Lean_Parser_Attr_export___closed__6, &l_Lean_Parser_Attr_export___closed__6_once, _init_l_Lean_Parser_Attr_export___closed__6);
v___x_684_ = lean_obj_once(&l_Lean_Parser_Attr_export___closed__2, &l_Lean_Parser_Attr_export___closed__2_once, _init_l_Lean_Parser_Attr_export___closed__2);
v___x_685_ = l_Lean_Parser_withAntiquot(v___x_684_, v___x_683_);
return v___x_685_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_export___closed__8(void){
_start:
{
lean_object* v___x_686_; lean_object* v___x_687_; lean_object* v___x_688_; 
v___x_686_ = lean_obj_once(&l_Lean_Parser_Attr_export___closed__7, &l_Lean_Parser_Attr_export___closed__7_once, _init_l_Lean_Parser_Attr_export___closed__7);
v___x_687_ = ((lean_object*)(l_Lean_Parser_Attr_export___closed__1));
v___x_688_ = l_Lean_Parser_withCache(v___x_687_, v___x_686_);
return v___x_688_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_export(void){
_start:
{
lean_object* v___x_689_; 
v___x_689_ = lean_obj_once(&l_Lean_Parser_Attr_export___closed__8, &l_Lean_Parser_Attr_export___closed__8_once, _init_l_Lean_Parser_Attr_export___closed__8);
return v___x_689_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_export___regBuiltin_Lean_Parser_Attr_export__1(){
_start:
{
lean_object* v___x_691_; lean_object* v___x_692_; lean_object* v___x_693_; lean_object* v___x_694_; lean_object* v___x_695_; 
v___x_691_ = ((lean_object*)(l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__10_00___x40_Lean_Parser_Attr_249558774____hygCtx___hyg_2_));
v___x_692_ = ((lean_object*)(l_Lean_Parser_Attr_export___closed__1));
v___x_693_ = l_Lean_Parser_Attr_export;
v___x_694_ = lean_unsigned_to_nat(1000u);
v___x_695_ = l_Lean_Parser_addBuiltinLeadingParser(v___x_691_, v___x_692_, v___x_693_, v___x_694_);
return v___x_695_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_export___regBuiltin_Lean_Parser_Attr_export__1___boxed(lean_object* v_a_696_){
_start:
{
lean_object* v_res_697_; 
v_res_697_ = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_export___regBuiltin_Lean_Parser_Attr_export__1();
return v_res_697_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_export___regBuiltin_Lean_Parser_Attr_export_declRange__3(){
_start:
{
lean_object* v___x_724_; lean_object* v___x_725_; lean_object* v___x_726_; 
v___x_724_ = ((lean_object*)(l_Lean_Parser_Attr_export___closed__1));
v___x_725_ = ((lean_object*)(l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_export___regBuiltin_Lean_Parser_Attr_export_declRange__3___closed__6));
v___x_726_ = l_Lean_addBuiltinDeclarationRanges(v___x_724_, v___x_725_);
return v___x_726_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_export___regBuiltin_Lean_Parser_Attr_export_declRange__3___boxed(lean_object* v_a_727_){
_start:
{
lean_object* v_res_728_; 
v_res_728_ = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_export___regBuiltin_Lean_Parser_Attr_export_declRange__3();
return v_res_728_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_export_formatter(lean_object* v_a_745_, lean_object* v_a_746_, lean_object* v_a_747_, lean_object* v_a_748_){
_start:
{
lean_object* v___x_750_; lean_object* v___x_751_; lean_object* v___x_752_; 
v___x_750_ = ((lean_object*)(l_Lean_Parser_Attr_export_formatter___closed__0));
v___x_751_ = ((lean_object*)(l_Lean_Parser_Attr_export_formatter___closed__3));
v___x_752_ = l_Lean_PrettyPrinter_Formatter_orelse_formatter(v___x_750_, v___x_751_, v_a_745_, v_a_746_, v_a_747_, v_a_748_);
return v___x_752_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_export_formatter___boxed(lean_object* v_a_753_, lean_object* v_a_754_, lean_object* v_a_755_, lean_object* v_a_756_, lean_object* v_a_757_){
_start:
{
lean_object* v_res_758_; 
v_res_758_ = l_Lean_Parser_Attr_export_formatter(v_a_753_, v_a_754_, v_a_755_, v_a_756_);
lean_dec(v_a_756_);
lean_dec_ref(v_a_755_);
lean_dec(v_a_754_);
lean_dec_ref(v_a_753_);
return v_res_758_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_export___regBuiltin_Lean_Parser_Attr_export_formatter__7(){
_start:
{
lean_object* v___x_766_; lean_object* v___x_767_; lean_object* v___x_768_; lean_object* v___x_769_; lean_object* v___x_770_; 
v___x_766_ = l_Lean_PrettyPrinter_formatterAttribute;
v___x_767_ = ((lean_object*)(l_Lean_Parser_Attr_export___closed__1));
v___x_768_ = ((lean_object*)(l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_export___regBuiltin_Lean_Parser_Attr_export_formatter__7___closed__0));
v___x_769_ = lean_alloc_closure((void*)(l_Lean_Parser_Attr_export_formatter___boxed), 5, 0);
v___x_770_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_766_, v___x_767_, v___x_768_, v___x_769_);
return v___x_770_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_export___regBuiltin_Lean_Parser_Attr_export_formatter__7___boxed(lean_object* v_a_771_){
_start:
{
lean_object* v_res_772_; 
v_res_772_ = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_export___regBuiltin_Lean_Parser_Attr_export_formatter__7();
return v_res_772_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_export_parenthesizer(lean_object* v_a_789_, lean_object* v_a_790_, lean_object* v_a_791_, lean_object* v_a_792_){
_start:
{
lean_object* v___x_794_; lean_object* v___x_795_; lean_object* v___x_796_; 
v___x_794_ = ((lean_object*)(l_Lean_Parser_Attr_export_parenthesizer___closed__0));
v___x_795_ = ((lean_object*)(l_Lean_Parser_Attr_export_parenthesizer___closed__3));
v___x_796_ = l_Lean_PrettyPrinter_Parenthesizer_withAntiquot_parenthesizer(v___x_794_, v___x_795_, v_a_789_, v_a_790_, v_a_791_, v_a_792_);
return v___x_796_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_export_parenthesizer___boxed(lean_object* v_a_797_, lean_object* v_a_798_, lean_object* v_a_799_, lean_object* v_a_800_, lean_object* v_a_801_){
_start:
{
lean_object* v_res_802_; 
v_res_802_ = l_Lean_Parser_Attr_export_parenthesizer(v_a_797_, v_a_798_, v_a_799_, v_a_800_);
lean_dec(v_a_800_);
lean_dec_ref(v_a_799_);
lean_dec(v_a_798_);
lean_dec_ref(v_a_797_);
return v_res_802_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_export___regBuiltin_Lean_Parser_Attr_export_parenthesizer__11(){
_start:
{
lean_object* v___x_810_; lean_object* v___x_811_; lean_object* v___x_812_; lean_object* v___x_813_; lean_object* v___x_814_; 
v___x_810_ = l_Lean_PrettyPrinter_parenthesizerAttribute;
v___x_811_ = ((lean_object*)(l_Lean_Parser_Attr_export___closed__1));
v___x_812_ = ((lean_object*)(l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_export___regBuiltin_Lean_Parser_Attr_export_parenthesizer__11___closed__0));
v___x_813_ = lean_alloc_closure((void*)(l_Lean_Parser_Attr_export_parenthesizer___boxed), 5, 0);
v___x_814_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_810_, v___x_811_, v___x_812_, v___x_813_);
return v___x_814_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_export___regBuiltin_Lean_Parser_Attr_export_parenthesizer__11___boxed(lean_object* v_a_815_){
_start:
{
lean_object* v_res_816_; 
v_res_816_ = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_export___regBuiltin_Lean_Parser_Attr_export_parenthesizer__11();
return v_res_816_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_recursor___closed__2(void){
_start:
{
uint8_t v___x_823_; uint8_t v___x_824_; lean_object* v___x_825_; lean_object* v___x_826_; lean_object* v___x_827_; 
v___x_823_ = 0;
v___x_824_ = 1;
v___x_825_ = ((lean_object*)(l_Lean_Parser_Attr_recursor___closed__1));
v___x_826_ = ((lean_object*)(l_Lean_Parser_Attr_recursor___closed__0));
v___x_827_ = l_Lean_Parser_mkAntiquot(v___x_826_, v___x_825_, v___x_824_, v___x_823_);
return v___x_827_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_recursor___closed__4(void){
_start:
{
uint8_t v___x_829_; lean_object* v___x_830_; lean_object* v___x_831_; 
v___x_829_ = 0;
v___x_830_ = ((lean_object*)(l_Lean_Parser_Attr_recursor___closed__3));
v___x_831_ = l_Lean_Parser_nonReservedSymbol(v___x_830_, v___x_829_);
return v___x_831_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_recursor___closed__5(void){
_start:
{
lean_object* v___x_832_; lean_object* v___x_833_; lean_object* v___x_834_; 
v___x_832_ = l_Lean_Parser_numLit;
v___x_833_ = lean_obj_once(&l_Lean_Parser_Attr_recursor___closed__4, &l_Lean_Parser_Attr_recursor___closed__4_once, _init_l_Lean_Parser_Attr_recursor___closed__4);
v___x_834_ = l_Lean_Parser_andthen(v___x_833_, v___x_832_);
return v___x_834_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_recursor___closed__6(void){
_start:
{
lean_object* v___x_835_; lean_object* v___x_836_; lean_object* v___x_837_; lean_object* v___x_838_; 
v___x_835_ = lean_obj_once(&l_Lean_Parser_Attr_recursor___closed__5, &l_Lean_Parser_Attr_recursor___closed__5_once, _init_l_Lean_Parser_Attr_recursor___closed__5);
v___x_836_ = lean_unsigned_to_nat(1024u);
v___x_837_ = ((lean_object*)(l_Lean_Parser_Attr_recursor___closed__1));
v___x_838_ = l_Lean_Parser_leadingNode(v___x_837_, v___x_836_, v___x_835_);
return v___x_838_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_recursor___closed__7(void){
_start:
{
lean_object* v___x_839_; lean_object* v___x_840_; lean_object* v___x_841_; 
v___x_839_ = lean_obj_once(&l_Lean_Parser_Attr_recursor___closed__6, &l_Lean_Parser_Attr_recursor___closed__6_once, _init_l_Lean_Parser_Attr_recursor___closed__6);
v___x_840_ = lean_obj_once(&l_Lean_Parser_Attr_recursor___closed__2, &l_Lean_Parser_Attr_recursor___closed__2_once, _init_l_Lean_Parser_Attr_recursor___closed__2);
v___x_841_ = l_Lean_Parser_withAntiquot(v___x_840_, v___x_839_);
return v___x_841_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_recursor___closed__8(void){
_start:
{
lean_object* v___x_842_; lean_object* v___x_843_; lean_object* v___x_844_; 
v___x_842_ = lean_obj_once(&l_Lean_Parser_Attr_recursor___closed__7, &l_Lean_Parser_Attr_recursor___closed__7_once, _init_l_Lean_Parser_Attr_recursor___closed__7);
v___x_843_ = ((lean_object*)(l_Lean_Parser_Attr_recursor___closed__1));
v___x_844_ = l_Lean_Parser_withCache(v___x_843_, v___x_842_);
return v___x_844_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_recursor(void){
_start:
{
lean_object* v___x_845_; 
v___x_845_ = lean_obj_once(&l_Lean_Parser_Attr_recursor___closed__8, &l_Lean_Parser_Attr_recursor___closed__8_once, _init_l_Lean_Parser_Attr_recursor___closed__8);
return v___x_845_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_recursor___regBuiltin_Lean_Parser_Attr_recursor__1(){
_start:
{
lean_object* v___x_847_; lean_object* v___x_848_; lean_object* v___x_849_; lean_object* v___x_850_; lean_object* v___x_851_; 
v___x_847_ = ((lean_object*)(l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__10_00___x40_Lean_Parser_Attr_249558774____hygCtx___hyg_2_));
v___x_848_ = ((lean_object*)(l_Lean_Parser_Attr_recursor___closed__1));
v___x_849_ = l_Lean_Parser_Attr_recursor;
v___x_850_ = lean_unsigned_to_nat(1000u);
v___x_851_ = l_Lean_Parser_addBuiltinLeadingParser(v___x_847_, v___x_848_, v___x_849_, v___x_850_);
return v___x_851_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_recursor___regBuiltin_Lean_Parser_Attr_recursor__1___boxed(lean_object* v_a_852_){
_start:
{
lean_object* v_res_853_; 
v_res_853_ = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_recursor___regBuiltin_Lean_Parser_Attr_recursor__1();
return v_res_853_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_recursor___regBuiltin_Lean_Parser_Attr_recursor_declRange__3(){
_start:
{
lean_object* v___x_880_; lean_object* v___x_881_; lean_object* v___x_882_; 
v___x_880_ = ((lean_object*)(l_Lean_Parser_Attr_recursor___closed__1));
v___x_881_ = ((lean_object*)(l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_recursor___regBuiltin_Lean_Parser_Attr_recursor_declRange__3___closed__6));
v___x_882_ = l_Lean_addBuiltinDeclarationRanges(v___x_880_, v___x_881_);
return v___x_882_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_recursor___regBuiltin_Lean_Parser_Attr_recursor_declRange__3___boxed(lean_object* v_a_883_){
_start:
{
lean_object* v_res_884_; 
v_res_884_ = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_recursor___regBuiltin_Lean_Parser_Attr_recursor_declRange__3();
return v_res_884_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_recursor_formatter(lean_object* v_a_903_, lean_object* v_a_904_, lean_object* v_a_905_, lean_object* v_a_906_){
_start:
{
lean_object* v___x_908_; lean_object* v___x_909_; lean_object* v___x_910_; 
v___x_908_ = ((lean_object*)(l_Lean_Parser_Attr_recursor_formatter___closed__0));
v___x_909_ = ((lean_object*)(l_Lean_Parser_Attr_recursor_formatter___closed__3));
v___x_910_ = l_Lean_PrettyPrinter_Formatter_orelse_formatter(v___x_908_, v___x_909_, v_a_903_, v_a_904_, v_a_905_, v_a_906_);
return v___x_910_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_recursor_formatter___boxed(lean_object* v_a_911_, lean_object* v_a_912_, lean_object* v_a_913_, lean_object* v_a_914_, lean_object* v_a_915_){
_start:
{
lean_object* v_res_916_; 
v_res_916_ = l_Lean_Parser_Attr_recursor_formatter(v_a_911_, v_a_912_, v_a_913_, v_a_914_);
lean_dec(v_a_914_);
lean_dec_ref(v_a_913_);
lean_dec(v_a_912_);
lean_dec_ref(v_a_911_);
return v_res_916_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_recursor___regBuiltin_Lean_Parser_Attr_recursor_formatter__7(){
_start:
{
lean_object* v___x_924_; lean_object* v___x_925_; lean_object* v___x_926_; lean_object* v___x_927_; lean_object* v___x_928_; 
v___x_924_ = l_Lean_PrettyPrinter_formatterAttribute;
v___x_925_ = ((lean_object*)(l_Lean_Parser_Attr_recursor___closed__1));
v___x_926_ = ((lean_object*)(l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_recursor___regBuiltin_Lean_Parser_Attr_recursor_formatter__7___closed__0));
v___x_927_ = lean_alloc_closure((void*)(l_Lean_Parser_Attr_recursor_formatter___boxed), 5, 0);
v___x_928_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_924_, v___x_925_, v___x_926_, v___x_927_);
return v___x_928_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_recursor___regBuiltin_Lean_Parser_Attr_recursor_formatter__7___boxed(lean_object* v_a_929_){
_start:
{
lean_object* v_res_930_; 
v_res_930_ = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_recursor___regBuiltin_Lean_Parser_Attr_recursor_formatter__7();
return v_res_930_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_recursor_parenthesizer(lean_object* v_a_949_, lean_object* v_a_950_, lean_object* v_a_951_, lean_object* v_a_952_){
_start:
{
lean_object* v___x_954_; lean_object* v___x_955_; lean_object* v___x_956_; 
v___x_954_ = ((lean_object*)(l_Lean_Parser_Attr_recursor_parenthesizer___closed__0));
v___x_955_ = ((lean_object*)(l_Lean_Parser_Attr_recursor_parenthesizer___closed__3));
v___x_956_ = l_Lean_PrettyPrinter_Parenthesizer_withAntiquot_parenthesizer(v___x_954_, v___x_955_, v_a_949_, v_a_950_, v_a_951_, v_a_952_);
return v___x_956_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_recursor_parenthesizer___boxed(lean_object* v_a_957_, lean_object* v_a_958_, lean_object* v_a_959_, lean_object* v_a_960_, lean_object* v_a_961_){
_start:
{
lean_object* v_res_962_; 
v_res_962_ = l_Lean_Parser_Attr_recursor_parenthesizer(v_a_957_, v_a_958_, v_a_959_, v_a_960_);
lean_dec(v_a_960_);
lean_dec_ref(v_a_959_);
lean_dec(v_a_958_);
lean_dec_ref(v_a_957_);
return v_res_962_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_recursor___regBuiltin_Lean_Parser_Attr_recursor_parenthesizer__11(){
_start:
{
lean_object* v___x_970_; lean_object* v___x_971_; lean_object* v___x_972_; lean_object* v___x_973_; lean_object* v___x_974_; 
v___x_970_ = l_Lean_PrettyPrinter_parenthesizerAttribute;
v___x_971_ = ((lean_object*)(l_Lean_Parser_Attr_recursor___closed__1));
v___x_972_ = ((lean_object*)(l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_recursor___regBuiltin_Lean_Parser_Attr_recursor_parenthesizer__11___closed__0));
v___x_973_ = lean_alloc_closure((void*)(l_Lean_Parser_Attr_recursor_parenthesizer___boxed), 5, 0);
v___x_974_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_970_, v___x_971_, v___x_972_, v___x_973_);
return v___x_974_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_recursor___regBuiltin_Lean_Parser_Attr_recursor_parenthesizer__11___boxed(lean_object* v_a_975_){
_start:
{
lean_object* v_res_976_; 
v_res_976_ = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_recursor___regBuiltin_Lean_Parser_Attr_recursor_parenthesizer__11();
return v_res_976_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_class___closed__2(void){
_start:
{
uint8_t v___x_983_; uint8_t v___x_984_; lean_object* v___x_985_; lean_object* v___x_986_; lean_object* v___x_987_; 
v___x_983_ = 0;
v___x_984_ = 1;
v___x_985_ = ((lean_object*)(l_Lean_Parser_Attr_class___closed__1));
v___x_986_ = ((lean_object*)(l_Lean_Parser_Attr_class___closed__0));
v___x_987_ = l_Lean_Parser_mkAntiquot(v___x_986_, v___x_985_, v___x_984_, v___x_983_);
return v___x_987_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_class___closed__3(void){
_start:
{
lean_object* v___x_988_; lean_object* v___x_989_; 
v___x_988_ = ((lean_object*)(l_Lean_Parser_Attr_class___closed__0));
v___x_989_ = l_Lean_Parser_symbol(v___x_988_);
return v___x_989_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_class___closed__4(void){
_start:
{
lean_object* v___x_990_; lean_object* v___x_991_; lean_object* v___x_992_; lean_object* v___x_993_; 
v___x_990_ = lean_obj_once(&l_Lean_Parser_Attr_class___closed__3, &l_Lean_Parser_Attr_class___closed__3_once, _init_l_Lean_Parser_Attr_class___closed__3);
v___x_991_ = lean_unsigned_to_nat(1024u);
v___x_992_ = ((lean_object*)(l_Lean_Parser_Attr_class___closed__1));
v___x_993_ = l_Lean_Parser_leadingNode(v___x_992_, v___x_991_, v___x_990_);
return v___x_993_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_class___closed__5(void){
_start:
{
lean_object* v___x_994_; lean_object* v___x_995_; lean_object* v___x_996_; 
v___x_994_ = lean_obj_once(&l_Lean_Parser_Attr_class___closed__4, &l_Lean_Parser_Attr_class___closed__4_once, _init_l_Lean_Parser_Attr_class___closed__4);
v___x_995_ = lean_obj_once(&l_Lean_Parser_Attr_class___closed__2, &l_Lean_Parser_Attr_class___closed__2_once, _init_l_Lean_Parser_Attr_class___closed__2);
v___x_996_ = l_Lean_Parser_withAntiquot(v___x_995_, v___x_994_);
return v___x_996_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_class___closed__6(void){
_start:
{
lean_object* v___x_997_; lean_object* v___x_998_; lean_object* v___x_999_; 
v___x_997_ = lean_obj_once(&l_Lean_Parser_Attr_class___closed__5, &l_Lean_Parser_Attr_class___closed__5_once, _init_l_Lean_Parser_Attr_class___closed__5);
v___x_998_ = ((lean_object*)(l_Lean_Parser_Attr_class___closed__1));
v___x_999_ = l_Lean_Parser_withCache(v___x_998_, v___x_997_);
return v___x_999_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_class(void){
_start:
{
lean_object* v___x_1000_; 
v___x_1000_ = lean_obj_once(&l_Lean_Parser_Attr_class___closed__6, &l_Lean_Parser_Attr_class___closed__6_once, _init_l_Lean_Parser_Attr_class___closed__6);
return v___x_1000_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_class___regBuiltin_Lean_Parser_Attr_class__1(){
_start:
{
lean_object* v___x_1002_; lean_object* v___x_1003_; lean_object* v___x_1004_; lean_object* v___x_1005_; lean_object* v___x_1006_; 
v___x_1002_ = ((lean_object*)(l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__10_00___x40_Lean_Parser_Attr_249558774____hygCtx___hyg_2_));
v___x_1003_ = ((lean_object*)(l_Lean_Parser_Attr_class___closed__1));
v___x_1004_ = l_Lean_Parser_Attr_class;
v___x_1005_ = lean_unsigned_to_nat(1000u);
v___x_1006_ = l_Lean_Parser_addBuiltinLeadingParser(v___x_1002_, v___x_1003_, v___x_1004_, v___x_1005_);
return v___x_1006_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_class___regBuiltin_Lean_Parser_Attr_class__1___boxed(lean_object* v_a_1007_){
_start:
{
lean_object* v_res_1008_; 
v_res_1008_ = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_class___regBuiltin_Lean_Parser_Attr_class__1();
return v_res_1008_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_class___regBuiltin_Lean_Parser_Attr_class_declRange__3(){
_start:
{
lean_object* v___x_1035_; lean_object* v___x_1036_; lean_object* v___x_1037_; 
v___x_1035_ = ((lean_object*)(l_Lean_Parser_Attr_class___closed__1));
v___x_1036_ = ((lean_object*)(l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_class___regBuiltin_Lean_Parser_Attr_class_declRange__3___closed__6));
v___x_1037_ = l_Lean_addBuiltinDeclarationRanges(v___x_1035_, v___x_1036_);
return v___x_1037_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_class___regBuiltin_Lean_Parser_Attr_class_declRange__3___boxed(lean_object* v_a_1038_){
_start:
{
lean_object* v_res_1039_; 
v_res_1039_ = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_class___regBuiltin_Lean_Parser_Attr_class_declRange__3();
return v_res_1039_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_class_formatter(lean_object* v_a_1053_, lean_object* v_a_1054_, lean_object* v_a_1055_, lean_object* v_a_1056_){
_start:
{
lean_object* v___x_1058_; lean_object* v___x_1059_; lean_object* v___x_1060_; 
v___x_1058_ = ((lean_object*)(l_Lean_Parser_Attr_class_formatter___closed__0));
v___x_1059_ = ((lean_object*)(l_Lean_Parser_Attr_class_formatter___closed__2));
v___x_1060_ = l_Lean_PrettyPrinter_Formatter_orelse_formatter(v___x_1058_, v___x_1059_, v_a_1053_, v_a_1054_, v_a_1055_, v_a_1056_);
return v___x_1060_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_class_formatter___boxed(lean_object* v_a_1061_, lean_object* v_a_1062_, lean_object* v_a_1063_, lean_object* v_a_1064_, lean_object* v_a_1065_){
_start:
{
lean_object* v_res_1066_; 
v_res_1066_ = l_Lean_Parser_Attr_class_formatter(v_a_1061_, v_a_1062_, v_a_1063_, v_a_1064_);
lean_dec(v_a_1064_);
lean_dec_ref(v_a_1063_);
lean_dec(v_a_1062_);
lean_dec_ref(v_a_1061_);
return v_res_1066_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_class___regBuiltin_Lean_Parser_Attr_class_formatter__7(){
_start:
{
lean_object* v___x_1074_; lean_object* v___x_1075_; lean_object* v___x_1076_; lean_object* v___x_1077_; lean_object* v___x_1078_; 
v___x_1074_ = l_Lean_PrettyPrinter_formatterAttribute;
v___x_1075_ = ((lean_object*)(l_Lean_Parser_Attr_class___closed__1));
v___x_1076_ = ((lean_object*)(l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_class___regBuiltin_Lean_Parser_Attr_class_formatter__7___closed__0));
v___x_1077_ = lean_alloc_closure((void*)(l_Lean_Parser_Attr_class_formatter___boxed), 5, 0);
v___x_1078_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_1074_, v___x_1075_, v___x_1076_, v___x_1077_);
return v___x_1078_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_class___regBuiltin_Lean_Parser_Attr_class_formatter__7___boxed(lean_object* v_a_1079_){
_start:
{
lean_object* v_res_1080_; 
v_res_1080_ = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_class___regBuiltin_Lean_Parser_Attr_class_formatter__7();
return v_res_1080_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_class_parenthesizer(lean_object* v_a_1094_, lean_object* v_a_1095_, lean_object* v_a_1096_, lean_object* v_a_1097_){
_start:
{
lean_object* v___x_1099_; lean_object* v___x_1100_; lean_object* v___x_1101_; 
v___x_1099_ = ((lean_object*)(l_Lean_Parser_Attr_class_parenthesizer___closed__0));
v___x_1100_ = ((lean_object*)(l_Lean_Parser_Attr_class_parenthesizer___closed__2));
v___x_1101_ = l_Lean_PrettyPrinter_Parenthesizer_withAntiquot_parenthesizer(v___x_1099_, v___x_1100_, v_a_1094_, v_a_1095_, v_a_1096_, v_a_1097_);
return v___x_1101_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_class_parenthesizer___boxed(lean_object* v_a_1102_, lean_object* v_a_1103_, lean_object* v_a_1104_, lean_object* v_a_1105_, lean_object* v_a_1106_){
_start:
{
lean_object* v_res_1107_; 
v_res_1107_ = l_Lean_Parser_Attr_class_parenthesizer(v_a_1102_, v_a_1103_, v_a_1104_, v_a_1105_);
lean_dec(v_a_1105_);
lean_dec_ref(v_a_1104_);
lean_dec(v_a_1103_);
lean_dec_ref(v_a_1102_);
return v_res_1107_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_class___regBuiltin_Lean_Parser_Attr_class_parenthesizer__11(){
_start:
{
lean_object* v___x_1115_; lean_object* v___x_1116_; lean_object* v___x_1117_; lean_object* v___x_1118_; lean_object* v___x_1119_; 
v___x_1115_ = l_Lean_PrettyPrinter_parenthesizerAttribute;
v___x_1116_ = ((lean_object*)(l_Lean_Parser_Attr_class___closed__1));
v___x_1117_ = ((lean_object*)(l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_class___regBuiltin_Lean_Parser_Attr_class_parenthesizer__11___closed__0));
v___x_1118_ = lean_alloc_closure((void*)(l_Lean_Parser_Attr_class_parenthesizer___boxed), 5, 0);
v___x_1119_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_1115_, v___x_1116_, v___x_1117_, v___x_1118_);
return v___x_1119_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_class___regBuiltin_Lean_Parser_Attr_class_parenthesizer__11___boxed(lean_object* v_a_1120_){
_start:
{
lean_object* v_res_1121_; 
v_res_1121_ = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_class___regBuiltin_Lean_Parser_Attr_class_parenthesizer__11();
return v_res_1121_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_instance___closed__2(void){
_start:
{
uint8_t v___x_1128_; uint8_t v___x_1129_; lean_object* v___x_1130_; lean_object* v___x_1131_; lean_object* v___x_1132_; 
v___x_1128_ = 0;
v___x_1129_ = 1;
v___x_1130_ = ((lean_object*)(l_Lean_Parser_Attr_instance___closed__1));
v___x_1131_ = ((lean_object*)(l_Lean_Parser_Attr_instance___closed__0));
v___x_1132_ = l_Lean_Parser_mkAntiquot(v___x_1131_, v___x_1130_, v___x_1129_, v___x_1128_);
return v___x_1132_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_instance___closed__3(void){
_start:
{
lean_object* v___x_1133_; lean_object* v___x_1134_; 
v___x_1133_ = ((lean_object*)(l_Lean_Parser_Attr_instance___closed__0));
v___x_1134_ = l_Lean_Parser_symbol(v___x_1133_);
return v___x_1134_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_instance___closed__4(void){
_start:
{
lean_object* v___x_1135_; lean_object* v___x_1136_; lean_object* v___x_1137_; 
v___x_1135_ = lean_obj_once(&l_Lean_Parser_Attr_simple___closed__3, &l_Lean_Parser_Attr_simple___closed__3_once, _init_l_Lean_Parser_Attr_simple___closed__3);
v___x_1136_ = l_Lean_Parser_skip;
v___x_1137_ = l_Lean_Parser_andthen(v___x_1136_, v___x_1135_);
return v___x_1137_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_instance___closed__5(void){
_start:
{
lean_object* v___x_1138_; lean_object* v___x_1139_; 
v___x_1138_ = lean_obj_once(&l_Lean_Parser_Attr_instance___closed__4, &l_Lean_Parser_Attr_instance___closed__4_once, _init_l_Lean_Parser_Attr_instance___closed__4);
v___x_1139_ = l_Lean_Parser_optional(v___x_1138_);
return v___x_1139_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_instance___closed__6(void){
_start:
{
lean_object* v___x_1140_; lean_object* v___x_1141_; lean_object* v___x_1142_; 
v___x_1140_ = lean_obj_once(&l_Lean_Parser_Attr_instance___closed__5, &l_Lean_Parser_Attr_instance___closed__5_once, _init_l_Lean_Parser_Attr_instance___closed__5);
v___x_1141_ = lean_obj_once(&l_Lean_Parser_Attr_instance___closed__3, &l_Lean_Parser_Attr_instance___closed__3_once, _init_l_Lean_Parser_Attr_instance___closed__3);
v___x_1142_ = l_Lean_Parser_andthen(v___x_1141_, v___x_1140_);
return v___x_1142_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_instance___closed__7(void){
_start:
{
lean_object* v___x_1143_; lean_object* v___x_1144_; lean_object* v___x_1145_; lean_object* v___x_1146_; 
v___x_1143_ = lean_obj_once(&l_Lean_Parser_Attr_instance___closed__6, &l_Lean_Parser_Attr_instance___closed__6_once, _init_l_Lean_Parser_Attr_instance___closed__6);
v___x_1144_ = lean_unsigned_to_nat(1024u);
v___x_1145_ = ((lean_object*)(l_Lean_Parser_Attr_instance___closed__1));
v___x_1146_ = l_Lean_Parser_leadingNode(v___x_1145_, v___x_1144_, v___x_1143_);
return v___x_1146_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_instance___closed__8(void){
_start:
{
lean_object* v___x_1147_; lean_object* v___x_1148_; lean_object* v___x_1149_; 
v___x_1147_ = lean_obj_once(&l_Lean_Parser_Attr_instance___closed__7, &l_Lean_Parser_Attr_instance___closed__7_once, _init_l_Lean_Parser_Attr_instance___closed__7);
v___x_1148_ = lean_obj_once(&l_Lean_Parser_Attr_instance___closed__2, &l_Lean_Parser_Attr_instance___closed__2_once, _init_l_Lean_Parser_Attr_instance___closed__2);
v___x_1149_ = l_Lean_Parser_withAntiquot(v___x_1148_, v___x_1147_);
return v___x_1149_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_instance___closed__9(void){
_start:
{
lean_object* v___x_1150_; lean_object* v___x_1151_; lean_object* v___x_1152_; 
v___x_1150_ = lean_obj_once(&l_Lean_Parser_Attr_instance___closed__8, &l_Lean_Parser_Attr_instance___closed__8_once, _init_l_Lean_Parser_Attr_instance___closed__8);
v___x_1151_ = ((lean_object*)(l_Lean_Parser_Attr_instance___closed__1));
v___x_1152_ = l_Lean_Parser_withCache(v___x_1151_, v___x_1150_);
return v___x_1152_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_instance(void){
_start:
{
lean_object* v___x_1153_; 
v___x_1153_ = lean_obj_once(&l_Lean_Parser_Attr_instance___closed__9, &l_Lean_Parser_Attr_instance___closed__9_once, _init_l_Lean_Parser_Attr_instance___closed__9);
return v___x_1153_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_instance___regBuiltin_Lean_Parser_Attr_instance__1(){
_start:
{
lean_object* v___x_1155_; lean_object* v___x_1156_; lean_object* v___x_1157_; lean_object* v___x_1158_; lean_object* v___x_1159_; 
v___x_1155_ = ((lean_object*)(l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__10_00___x40_Lean_Parser_Attr_249558774____hygCtx___hyg_2_));
v___x_1156_ = ((lean_object*)(l_Lean_Parser_Attr_instance___closed__1));
v___x_1157_ = l_Lean_Parser_Attr_instance;
v___x_1158_ = lean_unsigned_to_nat(1000u);
v___x_1159_ = l_Lean_Parser_addBuiltinLeadingParser(v___x_1155_, v___x_1156_, v___x_1157_, v___x_1158_);
return v___x_1159_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_instance___regBuiltin_Lean_Parser_Attr_instance__1___boxed(lean_object* v_a_1160_){
_start:
{
lean_object* v_res_1161_; 
v_res_1161_ = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_instance___regBuiltin_Lean_Parser_Attr_instance__1();
return v_res_1161_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_instance___regBuiltin_Lean_Parser_Attr_instance_declRange__3(){
_start:
{
lean_object* v___x_1188_; lean_object* v___x_1189_; lean_object* v___x_1190_; 
v___x_1188_ = ((lean_object*)(l_Lean_Parser_Attr_instance___closed__1));
v___x_1189_ = ((lean_object*)(l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_instance___regBuiltin_Lean_Parser_Attr_instance_declRange__3___closed__6));
v___x_1190_ = l_Lean_addBuiltinDeclarationRanges(v___x_1188_, v___x_1189_);
return v___x_1190_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_instance___regBuiltin_Lean_Parser_Attr_instance_declRange__3___boxed(lean_object* v_a_1191_){
_start:
{
lean_object* v_res_1192_; 
v_res_1192_ = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_instance___regBuiltin_Lean_Parser_Attr_instance_declRange__3();
return v_res_1192_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_instance_formatter(lean_object* v_a_1214_, lean_object* v_a_1215_, lean_object* v_a_1216_, lean_object* v_a_1217_){
_start:
{
lean_object* v___x_1219_; lean_object* v___x_1220_; lean_object* v___x_1221_; 
v___x_1219_ = ((lean_object*)(l_Lean_Parser_Attr_instance_formatter___closed__0));
v___x_1220_ = ((lean_object*)(l_Lean_Parser_Attr_instance_formatter___closed__5));
v___x_1221_ = l_Lean_PrettyPrinter_Formatter_orelse_formatter(v___x_1219_, v___x_1220_, v_a_1214_, v_a_1215_, v_a_1216_, v_a_1217_);
return v___x_1221_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_instance_formatter___boxed(lean_object* v_a_1222_, lean_object* v_a_1223_, lean_object* v_a_1224_, lean_object* v_a_1225_, lean_object* v_a_1226_){
_start:
{
lean_object* v_res_1227_; 
v_res_1227_ = l_Lean_Parser_Attr_instance_formatter(v_a_1222_, v_a_1223_, v_a_1224_, v_a_1225_);
lean_dec(v_a_1225_);
lean_dec_ref(v_a_1224_);
lean_dec(v_a_1223_);
lean_dec_ref(v_a_1222_);
return v_res_1227_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_instance___regBuiltin_Lean_Parser_Attr_instance_formatter__7(){
_start:
{
lean_object* v___x_1235_; lean_object* v___x_1236_; lean_object* v___x_1237_; lean_object* v___x_1238_; lean_object* v___x_1239_; 
v___x_1235_ = l_Lean_PrettyPrinter_formatterAttribute;
v___x_1236_ = ((lean_object*)(l_Lean_Parser_Attr_instance___closed__1));
v___x_1237_ = ((lean_object*)(l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_instance___regBuiltin_Lean_Parser_Attr_instance_formatter__7___closed__0));
v___x_1238_ = lean_alloc_closure((void*)(l_Lean_Parser_Attr_instance_formatter___boxed), 5, 0);
v___x_1239_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_1235_, v___x_1236_, v___x_1237_, v___x_1238_);
return v___x_1239_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_instance___regBuiltin_Lean_Parser_Attr_instance_formatter__7___boxed(lean_object* v_a_1240_){
_start:
{
lean_object* v_res_1241_; 
v_res_1241_ = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_instance___regBuiltin_Lean_Parser_Attr_instance_formatter__7();
return v_res_1241_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_instance_parenthesizer(lean_object* v_a_1263_, lean_object* v_a_1264_, lean_object* v_a_1265_, lean_object* v_a_1266_){
_start:
{
lean_object* v___x_1268_; lean_object* v___x_1269_; lean_object* v___x_1270_; 
v___x_1268_ = ((lean_object*)(l_Lean_Parser_Attr_instance_parenthesizer___closed__0));
v___x_1269_ = ((lean_object*)(l_Lean_Parser_Attr_instance_parenthesizer___closed__5));
v___x_1270_ = l_Lean_PrettyPrinter_Parenthesizer_withAntiquot_parenthesizer(v___x_1268_, v___x_1269_, v_a_1263_, v_a_1264_, v_a_1265_, v_a_1266_);
return v___x_1270_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_instance_parenthesizer___boxed(lean_object* v_a_1271_, lean_object* v_a_1272_, lean_object* v_a_1273_, lean_object* v_a_1274_, lean_object* v_a_1275_){
_start:
{
lean_object* v_res_1276_; 
v_res_1276_ = l_Lean_Parser_Attr_instance_parenthesizer(v_a_1271_, v_a_1272_, v_a_1273_, v_a_1274_);
lean_dec(v_a_1274_);
lean_dec_ref(v_a_1273_);
lean_dec(v_a_1272_);
lean_dec_ref(v_a_1271_);
return v_res_1276_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_instance___regBuiltin_Lean_Parser_Attr_instance_parenthesizer__11(){
_start:
{
lean_object* v___x_1284_; lean_object* v___x_1285_; lean_object* v___x_1286_; lean_object* v___x_1287_; lean_object* v___x_1288_; 
v___x_1284_ = l_Lean_PrettyPrinter_parenthesizerAttribute;
v___x_1285_ = ((lean_object*)(l_Lean_Parser_Attr_instance___closed__1));
v___x_1286_ = ((lean_object*)(l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_instance___regBuiltin_Lean_Parser_Attr_instance_parenthesizer__11___closed__0));
v___x_1287_ = lean_alloc_closure((void*)(l_Lean_Parser_Attr_instance_parenthesizer___boxed), 5, 0);
v___x_1288_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_1284_, v___x_1285_, v___x_1286_, v___x_1287_);
return v___x_1288_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_instance___regBuiltin_Lean_Parser_Attr_instance_parenthesizer__11___boxed(lean_object* v_a_1289_){
_start:
{
lean_object* v_res_1290_; 
v_res_1290_ = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_instance___regBuiltin_Lean_Parser_Attr_instance_parenthesizer__11();
return v_res_1290_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_default__instance___closed__2(void){
_start:
{
uint8_t v___x_1297_; uint8_t v___x_1298_; lean_object* v___x_1299_; lean_object* v___x_1300_; lean_object* v___x_1301_; 
v___x_1297_ = 0;
v___x_1298_ = 1;
v___x_1299_ = ((lean_object*)(l_Lean_Parser_Attr_default__instance___closed__1));
v___x_1300_ = ((lean_object*)(l_Lean_Parser_Attr_default__instance___closed__0));
v___x_1301_ = l_Lean_Parser_mkAntiquot(v___x_1300_, v___x_1299_, v___x_1298_, v___x_1297_);
return v___x_1301_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_default__instance___closed__3(void){
_start:
{
uint8_t v___x_1302_; lean_object* v___x_1303_; lean_object* v___x_1304_; 
v___x_1302_ = 0;
v___x_1303_ = ((lean_object*)(l_Lean_Parser_Attr_default__instance___closed__0));
v___x_1304_ = l_Lean_Parser_nonReservedSymbol(v___x_1303_, v___x_1302_);
return v___x_1304_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_default__instance___closed__4(void){
_start:
{
lean_object* v___x_1305_; lean_object* v___x_1306_; lean_object* v___x_1307_; 
v___x_1305_ = lean_obj_once(&l_Lean_Parser_Attr_instance___closed__5, &l_Lean_Parser_Attr_instance___closed__5_once, _init_l_Lean_Parser_Attr_instance___closed__5);
v___x_1306_ = lean_obj_once(&l_Lean_Parser_Attr_default__instance___closed__3, &l_Lean_Parser_Attr_default__instance___closed__3_once, _init_l_Lean_Parser_Attr_default__instance___closed__3);
v___x_1307_ = l_Lean_Parser_andthen(v___x_1306_, v___x_1305_);
return v___x_1307_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_default__instance___closed__5(void){
_start:
{
lean_object* v___x_1308_; lean_object* v___x_1309_; lean_object* v___x_1310_; lean_object* v___x_1311_; 
v___x_1308_ = lean_obj_once(&l_Lean_Parser_Attr_default__instance___closed__4, &l_Lean_Parser_Attr_default__instance___closed__4_once, _init_l_Lean_Parser_Attr_default__instance___closed__4);
v___x_1309_ = lean_unsigned_to_nat(1024u);
v___x_1310_ = ((lean_object*)(l_Lean_Parser_Attr_default__instance___closed__1));
v___x_1311_ = l_Lean_Parser_leadingNode(v___x_1310_, v___x_1309_, v___x_1308_);
return v___x_1311_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_default__instance___closed__6(void){
_start:
{
lean_object* v___x_1312_; lean_object* v___x_1313_; lean_object* v___x_1314_; 
v___x_1312_ = lean_obj_once(&l_Lean_Parser_Attr_default__instance___closed__5, &l_Lean_Parser_Attr_default__instance___closed__5_once, _init_l_Lean_Parser_Attr_default__instance___closed__5);
v___x_1313_ = lean_obj_once(&l_Lean_Parser_Attr_default__instance___closed__2, &l_Lean_Parser_Attr_default__instance___closed__2_once, _init_l_Lean_Parser_Attr_default__instance___closed__2);
v___x_1314_ = l_Lean_Parser_withAntiquot(v___x_1313_, v___x_1312_);
return v___x_1314_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_default__instance___closed__7(void){
_start:
{
lean_object* v___x_1315_; lean_object* v___x_1316_; lean_object* v___x_1317_; 
v___x_1315_ = lean_obj_once(&l_Lean_Parser_Attr_default__instance___closed__6, &l_Lean_Parser_Attr_default__instance___closed__6_once, _init_l_Lean_Parser_Attr_default__instance___closed__6);
v___x_1316_ = ((lean_object*)(l_Lean_Parser_Attr_default__instance___closed__1));
v___x_1317_ = l_Lean_Parser_withCache(v___x_1316_, v___x_1315_);
return v___x_1317_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_default__instance(void){
_start:
{
lean_object* v___x_1318_; 
v___x_1318_ = lean_obj_once(&l_Lean_Parser_Attr_default__instance___closed__7, &l_Lean_Parser_Attr_default__instance___closed__7_once, _init_l_Lean_Parser_Attr_default__instance___closed__7);
return v___x_1318_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_default__instance___regBuiltin_Lean_Parser_Attr_default__instance__1(){
_start:
{
lean_object* v___x_1320_; lean_object* v___x_1321_; lean_object* v___x_1322_; lean_object* v___x_1323_; lean_object* v___x_1324_; 
v___x_1320_ = ((lean_object*)(l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__10_00___x40_Lean_Parser_Attr_249558774____hygCtx___hyg_2_));
v___x_1321_ = ((lean_object*)(l_Lean_Parser_Attr_default__instance___closed__1));
v___x_1322_ = l_Lean_Parser_Attr_default__instance;
v___x_1323_ = lean_unsigned_to_nat(1000u);
v___x_1324_ = l_Lean_Parser_addBuiltinLeadingParser(v___x_1320_, v___x_1321_, v___x_1322_, v___x_1323_);
return v___x_1324_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_default__instance___regBuiltin_Lean_Parser_Attr_default__instance__1___boxed(lean_object* v_a_1325_){
_start:
{
lean_object* v_res_1326_; 
v_res_1326_ = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_default__instance___regBuiltin_Lean_Parser_Attr_default__instance__1();
return v_res_1326_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_default__instance___regBuiltin_Lean_Parser_Attr_default__instance_declRange__3(){
_start:
{
lean_object* v___x_1353_; lean_object* v___x_1354_; lean_object* v___x_1355_; 
v___x_1353_ = ((lean_object*)(l_Lean_Parser_Attr_default__instance___closed__1));
v___x_1354_ = ((lean_object*)(l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_default__instance___regBuiltin_Lean_Parser_Attr_default__instance_declRange__3___closed__6));
v___x_1355_ = l_Lean_addBuiltinDeclarationRanges(v___x_1353_, v___x_1354_);
return v___x_1355_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_default__instance___regBuiltin_Lean_Parser_Attr_default__instance_declRange__3___boxed(lean_object* v_a_1356_){
_start:
{
lean_object* v_res_1357_; 
v_res_1357_ = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_default__instance___regBuiltin_Lean_Parser_Attr_default__instance_declRange__3();
return v_res_1357_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_default__instance_formatter(lean_object* v_a_1376_, lean_object* v_a_1377_, lean_object* v_a_1378_, lean_object* v_a_1379_){
_start:
{
lean_object* v___x_1381_; lean_object* v___x_1382_; lean_object* v___x_1383_; 
v___x_1381_ = ((lean_object*)(l_Lean_Parser_Attr_default__instance_formatter___closed__0));
v___x_1382_ = ((lean_object*)(l_Lean_Parser_Attr_default__instance_formatter___closed__3));
v___x_1383_ = l_Lean_PrettyPrinter_Formatter_orelse_formatter(v___x_1381_, v___x_1382_, v_a_1376_, v_a_1377_, v_a_1378_, v_a_1379_);
return v___x_1383_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_default__instance_formatter___boxed(lean_object* v_a_1384_, lean_object* v_a_1385_, lean_object* v_a_1386_, lean_object* v_a_1387_, lean_object* v_a_1388_){
_start:
{
lean_object* v_res_1389_; 
v_res_1389_ = l_Lean_Parser_Attr_default__instance_formatter(v_a_1384_, v_a_1385_, v_a_1386_, v_a_1387_);
lean_dec(v_a_1387_);
lean_dec_ref(v_a_1386_);
lean_dec(v_a_1385_);
lean_dec_ref(v_a_1384_);
return v_res_1389_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_default__instance___regBuiltin_Lean_Parser_Attr_default__instance_formatter__7(){
_start:
{
lean_object* v___x_1397_; lean_object* v___x_1398_; lean_object* v___x_1399_; lean_object* v___x_1400_; lean_object* v___x_1401_; 
v___x_1397_ = l_Lean_PrettyPrinter_formatterAttribute;
v___x_1398_ = ((lean_object*)(l_Lean_Parser_Attr_default__instance___closed__1));
v___x_1399_ = ((lean_object*)(l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_default__instance___regBuiltin_Lean_Parser_Attr_default__instance_formatter__7___closed__0));
v___x_1400_ = lean_alloc_closure((void*)(l_Lean_Parser_Attr_default__instance_formatter___boxed), 5, 0);
v___x_1401_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_1397_, v___x_1398_, v___x_1399_, v___x_1400_);
return v___x_1401_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_default__instance___regBuiltin_Lean_Parser_Attr_default__instance_formatter__7___boxed(lean_object* v_a_1402_){
_start:
{
lean_object* v_res_1403_; 
v_res_1403_ = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_default__instance___regBuiltin_Lean_Parser_Attr_default__instance_formatter__7();
return v_res_1403_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_default__instance_parenthesizer(lean_object* v_a_1422_, lean_object* v_a_1423_, lean_object* v_a_1424_, lean_object* v_a_1425_){
_start:
{
lean_object* v___x_1427_; lean_object* v___x_1428_; lean_object* v___x_1429_; 
v___x_1427_ = ((lean_object*)(l_Lean_Parser_Attr_default__instance_parenthesizer___closed__0));
v___x_1428_ = ((lean_object*)(l_Lean_Parser_Attr_default__instance_parenthesizer___closed__3));
v___x_1429_ = l_Lean_PrettyPrinter_Parenthesizer_withAntiquot_parenthesizer(v___x_1427_, v___x_1428_, v_a_1422_, v_a_1423_, v_a_1424_, v_a_1425_);
return v___x_1429_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_default__instance_parenthesizer___boxed(lean_object* v_a_1430_, lean_object* v_a_1431_, lean_object* v_a_1432_, lean_object* v_a_1433_, lean_object* v_a_1434_){
_start:
{
lean_object* v_res_1435_; 
v_res_1435_ = l_Lean_Parser_Attr_default__instance_parenthesizer(v_a_1430_, v_a_1431_, v_a_1432_, v_a_1433_);
lean_dec(v_a_1433_);
lean_dec_ref(v_a_1432_);
lean_dec(v_a_1431_);
lean_dec_ref(v_a_1430_);
return v_res_1435_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_default__instance___regBuiltin_Lean_Parser_Attr_default__instance_parenthesizer__11(){
_start:
{
lean_object* v___x_1443_; lean_object* v___x_1444_; lean_object* v___x_1445_; lean_object* v___x_1446_; lean_object* v___x_1447_; 
v___x_1443_ = l_Lean_PrettyPrinter_parenthesizerAttribute;
v___x_1444_ = ((lean_object*)(l_Lean_Parser_Attr_default__instance___closed__1));
v___x_1445_ = ((lean_object*)(l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_default__instance___regBuiltin_Lean_Parser_Attr_default__instance_parenthesizer__11___closed__0));
v___x_1446_ = lean_alloc_closure((void*)(l_Lean_Parser_Attr_default__instance_parenthesizer___boxed), 5, 0);
v___x_1447_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_1443_, v___x_1444_, v___x_1445_, v___x_1446_);
return v___x_1447_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_default__instance___regBuiltin_Lean_Parser_Attr_default__instance_parenthesizer__11___boxed(lean_object* v_a_1448_){
_start:
{
lean_object* v_res_1449_; 
v_res_1449_ = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_default__instance___regBuiltin_Lean_Parser_Attr_default__instance_parenthesizer__11();
return v_res_1449_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_specialize___closed__2(void){
_start:
{
uint8_t v___x_1456_; uint8_t v___x_1457_; lean_object* v___x_1458_; lean_object* v___x_1459_; lean_object* v___x_1460_; 
v___x_1456_ = 0;
v___x_1457_ = 1;
v___x_1458_ = ((lean_object*)(l_Lean_Parser_Attr_specialize___closed__1));
v___x_1459_ = ((lean_object*)(l_Lean_Parser_Attr_specialize___closed__0));
v___x_1460_ = l_Lean_Parser_mkAntiquot(v___x_1459_, v___x_1458_, v___x_1457_, v___x_1456_);
return v___x_1460_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_specialize___closed__3(void){
_start:
{
uint8_t v___x_1461_; lean_object* v___x_1462_; lean_object* v___x_1463_; 
v___x_1461_ = 0;
v___x_1462_ = ((lean_object*)(l_Lean_Parser_Attr_specialize___closed__0));
v___x_1463_ = l_Lean_Parser_nonReservedSymbol(v___x_1462_, v___x_1461_);
return v___x_1463_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_specialize___closed__4(void){
_start:
{
lean_object* v___x_1464_; lean_object* v___x_1465_; lean_object* v___x_1466_; 
v___x_1464_ = l_Lean_Parser_numLit;
v___x_1465_ = l_Lean_Parser_ident;
v___x_1466_ = l_Lean_Parser_orelse(v___x_1465_, v___x_1464_);
return v___x_1466_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_specialize___closed__5(void){
_start:
{
lean_object* v___x_1467_; lean_object* v___x_1468_; lean_object* v___x_1469_; 
v___x_1467_ = lean_obj_once(&l_Lean_Parser_Attr_specialize___closed__4, &l_Lean_Parser_Attr_specialize___closed__4_once, _init_l_Lean_Parser_Attr_specialize___closed__4);
v___x_1468_ = l_Lean_Parser_skip;
v___x_1469_ = l_Lean_Parser_andthen(v___x_1468_, v___x_1467_);
return v___x_1469_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_specialize___closed__6(void){
_start:
{
lean_object* v___x_1470_; lean_object* v___x_1471_; 
v___x_1470_ = lean_obj_once(&l_Lean_Parser_Attr_specialize___closed__5, &l_Lean_Parser_Attr_specialize___closed__5_once, _init_l_Lean_Parser_Attr_specialize___closed__5);
v___x_1471_ = l_Lean_Parser_many(v___x_1470_);
return v___x_1471_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_specialize___closed__7(void){
_start:
{
lean_object* v___x_1472_; lean_object* v___x_1473_; lean_object* v___x_1474_; 
v___x_1472_ = lean_obj_once(&l_Lean_Parser_Attr_specialize___closed__6, &l_Lean_Parser_Attr_specialize___closed__6_once, _init_l_Lean_Parser_Attr_specialize___closed__6);
v___x_1473_ = lean_obj_once(&l_Lean_Parser_Attr_specialize___closed__3, &l_Lean_Parser_Attr_specialize___closed__3_once, _init_l_Lean_Parser_Attr_specialize___closed__3);
v___x_1474_ = l_Lean_Parser_andthen(v___x_1473_, v___x_1472_);
return v___x_1474_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_specialize___closed__8(void){
_start:
{
lean_object* v___x_1475_; lean_object* v___x_1476_; lean_object* v___x_1477_; lean_object* v___x_1478_; 
v___x_1475_ = lean_obj_once(&l_Lean_Parser_Attr_specialize___closed__7, &l_Lean_Parser_Attr_specialize___closed__7_once, _init_l_Lean_Parser_Attr_specialize___closed__7);
v___x_1476_ = lean_unsigned_to_nat(1024u);
v___x_1477_ = ((lean_object*)(l_Lean_Parser_Attr_specialize___closed__1));
v___x_1478_ = l_Lean_Parser_leadingNode(v___x_1477_, v___x_1476_, v___x_1475_);
return v___x_1478_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_specialize___closed__9(void){
_start:
{
lean_object* v___x_1479_; lean_object* v___x_1480_; lean_object* v___x_1481_; 
v___x_1479_ = lean_obj_once(&l_Lean_Parser_Attr_specialize___closed__8, &l_Lean_Parser_Attr_specialize___closed__8_once, _init_l_Lean_Parser_Attr_specialize___closed__8);
v___x_1480_ = lean_obj_once(&l_Lean_Parser_Attr_specialize___closed__2, &l_Lean_Parser_Attr_specialize___closed__2_once, _init_l_Lean_Parser_Attr_specialize___closed__2);
v___x_1481_ = l_Lean_Parser_withAntiquot(v___x_1480_, v___x_1479_);
return v___x_1481_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_specialize___closed__10(void){
_start:
{
lean_object* v___x_1482_; lean_object* v___x_1483_; lean_object* v___x_1484_; 
v___x_1482_ = lean_obj_once(&l_Lean_Parser_Attr_specialize___closed__9, &l_Lean_Parser_Attr_specialize___closed__9_once, _init_l_Lean_Parser_Attr_specialize___closed__9);
v___x_1483_ = ((lean_object*)(l_Lean_Parser_Attr_specialize___closed__1));
v___x_1484_ = l_Lean_Parser_withCache(v___x_1483_, v___x_1482_);
return v___x_1484_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_specialize(void){
_start:
{
lean_object* v___x_1485_; 
v___x_1485_ = lean_obj_once(&l_Lean_Parser_Attr_specialize___closed__10, &l_Lean_Parser_Attr_specialize___closed__10_once, _init_l_Lean_Parser_Attr_specialize___closed__10);
return v___x_1485_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_specialize___regBuiltin_Lean_Parser_Attr_specialize__1(){
_start:
{
lean_object* v___x_1487_; lean_object* v___x_1488_; lean_object* v___x_1489_; lean_object* v___x_1490_; lean_object* v___x_1491_; 
v___x_1487_ = ((lean_object*)(l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__10_00___x40_Lean_Parser_Attr_249558774____hygCtx___hyg_2_));
v___x_1488_ = ((lean_object*)(l_Lean_Parser_Attr_specialize___closed__1));
v___x_1489_ = l_Lean_Parser_Attr_specialize;
v___x_1490_ = lean_unsigned_to_nat(1000u);
v___x_1491_ = l_Lean_Parser_addBuiltinLeadingParser(v___x_1487_, v___x_1488_, v___x_1489_, v___x_1490_);
return v___x_1491_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_specialize___regBuiltin_Lean_Parser_Attr_specialize__1___boxed(lean_object* v_a_1492_){
_start:
{
lean_object* v_res_1493_; 
v_res_1493_ = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_specialize___regBuiltin_Lean_Parser_Attr_specialize__1();
return v_res_1493_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_specialize___regBuiltin_Lean_Parser_Attr_specialize_declRange__3(){
_start:
{
lean_object* v___x_1520_; lean_object* v___x_1521_; lean_object* v___x_1522_; 
v___x_1520_ = ((lean_object*)(l_Lean_Parser_Attr_specialize___closed__1));
v___x_1521_ = ((lean_object*)(l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_specialize___regBuiltin_Lean_Parser_Attr_specialize_declRange__3___closed__6));
v___x_1522_ = l_Lean_addBuiltinDeclarationRanges(v___x_1520_, v___x_1521_);
return v___x_1522_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_specialize___regBuiltin_Lean_Parser_Attr_specialize_declRange__3___boxed(lean_object* v_a_1523_){
_start:
{
lean_object* v_res_1524_; 
v_res_1524_ = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_specialize___regBuiltin_Lean_Parser_Attr_specialize_declRange__3();
return v_res_1524_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_specialize_formatter(lean_object* v_a_1551_, lean_object* v_a_1552_, lean_object* v_a_1553_, lean_object* v_a_1554_){
_start:
{
lean_object* v___x_1556_; lean_object* v___x_1557_; lean_object* v___x_1558_; 
v___x_1556_ = ((lean_object*)(l_Lean_Parser_Attr_specialize_formatter___closed__0));
v___x_1557_ = ((lean_object*)(l_Lean_Parser_Attr_specialize_formatter___closed__6));
v___x_1558_ = l_Lean_PrettyPrinter_Formatter_orelse_formatter(v___x_1556_, v___x_1557_, v_a_1551_, v_a_1552_, v_a_1553_, v_a_1554_);
return v___x_1558_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_specialize_formatter___boxed(lean_object* v_a_1559_, lean_object* v_a_1560_, lean_object* v_a_1561_, lean_object* v_a_1562_, lean_object* v_a_1563_){
_start:
{
lean_object* v_res_1564_; 
v_res_1564_ = l_Lean_Parser_Attr_specialize_formatter(v_a_1559_, v_a_1560_, v_a_1561_, v_a_1562_);
lean_dec(v_a_1562_);
lean_dec_ref(v_a_1561_);
lean_dec(v_a_1560_);
lean_dec_ref(v_a_1559_);
return v_res_1564_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_specialize___regBuiltin_Lean_Parser_Attr_specialize_formatter__7(){
_start:
{
lean_object* v___x_1572_; lean_object* v___x_1573_; lean_object* v___x_1574_; lean_object* v___x_1575_; lean_object* v___x_1576_; 
v___x_1572_ = l_Lean_PrettyPrinter_formatterAttribute;
v___x_1573_ = ((lean_object*)(l_Lean_Parser_Attr_specialize___closed__1));
v___x_1574_ = ((lean_object*)(l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_specialize___regBuiltin_Lean_Parser_Attr_specialize_formatter__7___closed__0));
v___x_1575_ = lean_alloc_closure((void*)(l_Lean_Parser_Attr_specialize_formatter___boxed), 5, 0);
v___x_1576_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_1572_, v___x_1573_, v___x_1574_, v___x_1575_);
return v___x_1576_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_specialize___regBuiltin_Lean_Parser_Attr_specialize_formatter__7___boxed(lean_object* v_a_1577_){
_start:
{
lean_object* v_res_1578_; 
v_res_1578_ = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_specialize___regBuiltin_Lean_Parser_Attr_specialize_formatter__7();
return v_res_1578_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_specialize_parenthesizer(lean_object* v_a_1605_, lean_object* v_a_1606_, lean_object* v_a_1607_, lean_object* v_a_1608_){
_start:
{
lean_object* v___x_1610_; lean_object* v___x_1611_; lean_object* v___x_1612_; 
v___x_1610_ = ((lean_object*)(l_Lean_Parser_Attr_specialize_parenthesizer___closed__0));
v___x_1611_ = ((lean_object*)(l_Lean_Parser_Attr_specialize_parenthesizer___closed__6));
v___x_1612_ = l_Lean_PrettyPrinter_Parenthesizer_withAntiquot_parenthesizer(v___x_1610_, v___x_1611_, v_a_1605_, v_a_1606_, v_a_1607_, v_a_1608_);
return v___x_1612_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_specialize_parenthesizer___boxed(lean_object* v_a_1613_, lean_object* v_a_1614_, lean_object* v_a_1615_, lean_object* v_a_1616_, lean_object* v_a_1617_){
_start:
{
lean_object* v_res_1618_; 
v_res_1618_ = l_Lean_Parser_Attr_specialize_parenthesizer(v_a_1613_, v_a_1614_, v_a_1615_, v_a_1616_);
lean_dec(v_a_1616_);
lean_dec_ref(v_a_1615_);
lean_dec(v_a_1614_);
lean_dec_ref(v_a_1613_);
return v_res_1618_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_specialize___regBuiltin_Lean_Parser_Attr_specialize_parenthesizer__11(){
_start:
{
lean_object* v___x_1626_; lean_object* v___x_1627_; lean_object* v___x_1628_; lean_object* v___x_1629_; lean_object* v___x_1630_; 
v___x_1626_ = l_Lean_PrettyPrinter_parenthesizerAttribute;
v___x_1627_ = ((lean_object*)(l_Lean_Parser_Attr_specialize___closed__1));
v___x_1628_ = ((lean_object*)(l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_specialize___regBuiltin_Lean_Parser_Attr_specialize_parenthesizer__11___closed__0));
v___x_1629_ = lean_alloc_closure((void*)(l_Lean_Parser_Attr_specialize_parenthesizer___boxed), 5, 0);
v___x_1630_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_1626_, v___x_1627_, v___x_1628_, v___x_1629_);
return v___x_1630_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_specialize___regBuiltin_Lean_Parser_Attr_specialize_parenthesizer__11___boxed(lean_object* v_a_1631_){
_start:
{
lean_object* v_res_1632_; 
v_res_1632_ = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_specialize___regBuiltin_Lean_Parser_Attr_specialize_parenthesizer__11();
return v_res_1632_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_externEntry___closed__2(void){
_start:
{
uint8_t v___x_1639_; uint8_t v___x_1640_; lean_object* v___x_1641_; lean_object* v___x_1642_; lean_object* v___x_1643_; 
v___x_1639_ = 0;
v___x_1640_ = 1;
v___x_1641_ = ((lean_object*)(l_Lean_Parser_Attr_externEntry___closed__1));
v___x_1642_ = ((lean_object*)(l_Lean_Parser_Attr_externEntry___closed__0));
v___x_1643_ = l_Lean_Parser_mkAntiquot(v___x_1642_, v___x_1641_, v___x_1640_, v___x_1639_);
return v___x_1643_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_externEntry___closed__3(void){
_start:
{
lean_object* v___x_1644_; lean_object* v___x_1645_; lean_object* v___x_1646_; 
v___x_1644_ = l_Lean_Parser_skip;
v___x_1645_ = l_Lean_Parser_ident;
v___x_1646_ = l_Lean_Parser_andthen(v___x_1645_, v___x_1644_);
return v___x_1646_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_externEntry___closed__4(void){
_start:
{
lean_object* v___x_1647_; lean_object* v___x_1648_; 
v___x_1647_ = lean_obj_once(&l_Lean_Parser_Attr_externEntry___closed__3, &l_Lean_Parser_Attr_externEntry___closed__3_once, _init_l_Lean_Parser_Attr_externEntry___closed__3);
v___x_1648_ = l_Lean_Parser_optional(v___x_1647_);
return v___x_1648_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_externEntry___closed__6(void){
_start:
{
uint8_t v___x_1650_; lean_object* v___x_1651_; lean_object* v___x_1652_; 
v___x_1650_ = 0;
v___x_1651_ = ((lean_object*)(l_Lean_Parser_Attr_externEntry___closed__5));
v___x_1652_ = l_Lean_Parser_nonReservedSymbol(v___x_1651_, v___x_1650_);
return v___x_1652_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_externEntry___closed__7(void){
_start:
{
lean_object* v___x_1653_; lean_object* v___x_1654_; 
v___x_1653_ = lean_obj_once(&l_Lean_Parser_Attr_externEntry___closed__6, &l_Lean_Parser_Attr_externEntry___closed__6_once, _init_l_Lean_Parser_Attr_externEntry___closed__6);
v___x_1654_ = l_Lean_Parser_optional(v___x_1653_);
return v___x_1654_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_externEntry___closed__8(void){
_start:
{
lean_object* v___x_1655_; lean_object* v___x_1656_; lean_object* v___x_1657_; 
v___x_1655_ = l_Lean_Parser_strLit;
v___x_1656_ = lean_obj_once(&l_Lean_Parser_Attr_externEntry___closed__7, &l_Lean_Parser_Attr_externEntry___closed__7_once, _init_l_Lean_Parser_Attr_externEntry___closed__7);
v___x_1657_ = l_Lean_Parser_andthen(v___x_1656_, v___x_1655_);
return v___x_1657_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_externEntry___closed__9(void){
_start:
{
lean_object* v___x_1658_; lean_object* v___x_1659_; lean_object* v___x_1660_; 
v___x_1658_ = lean_obj_once(&l_Lean_Parser_Attr_externEntry___closed__8, &l_Lean_Parser_Attr_externEntry___closed__8_once, _init_l_Lean_Parser_Attr_externEntry___closed__8);
v___x_1659_ = lean_obj_once(&l_Lean_Parser_Attr_externEntry___closed__4, &l_Lean_Parser_Attr_externEntry___closed__4_once, _init_l_Lean_Parser_Attr_externEntry___closed__4);
v___x_1660_ = l_Lean_Parser_andthen(v___x_1659_, v___x_1658_);
return v___x_1660_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_externEntry___closed__10(void){
_start:
{
lean_object* v___x_1661_; lean_object* v___x_1662_; lean_object* v___x_1663_; lean_object* v___x_1664_; 
v___x_1661_ = lean_obj_once(&l_Lean_Parser_Attr_externEntry___closed__9, &l_Lean_Parser_Attr_externEntry___closed__9_once, _init_l_Lean_Parser_Attr_externEntry___closed__9);
v___x_1662_ = lean_unsigned_to_nat(1024u);
v___x_1663_ = ((lean_object*)(l_Lean_Parser_Attr_externEntry___closed__1));
v___x_1664_ = l_Lean_Parser_leadingNode(v___x_1663_, v___x_1662_, v___x_1661_);
return v___x_1664_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_externEntry___closed__11(void){
_start:
{
lean_object* v___x_1665_; lean_object* v___x_1666_; lean_object* v___x_1667_; 
v___x_1665_ = lean_obj_once(&l_Lean_Parser_Attr_externEntry___closed__10, &l_Lean_Parser_Attr_externEntry___closed__10_once, _init_l_Lean_Parser_Attr_externEntry___closed__10);
v___x_1666_ = lean_obj_once(&l_Lean_Parser_Attr_externEntry___closed__2, &l_Lean_Parser_Attr_externEntry___closed__2_once, _init_l_Lean_Parser_Attr_externEntry___closed__2);
v___x_1667_ = l_Lean_Parser_withAntiquot(v___x_1666_, v___x_1665_);
return v___x_1667_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_externEntry___closed__12(void){
_start:
{
lean_object* v___x_1668_; lean_object* v___x_1669_; lean_object* v___x_1670_; 
v___x_1668_ = lean_obj_once(&l_Lean_Parser_Attr_externEntry___closed__11, &l_Lean_Parser_Attr_externEntry___closed__11_once, _init_l_Lean_Parser_Attr_externEntry___closed__11);
v___x_1669_ = ((lean_object*)(l_Lean_Parser_Attr_externEntry___closed__1));
v___x_1670_ = l_Lean_Parser_withCache(v___x_1669_, v___x_1668_);
return v___x_1670_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_externEntry(void){
_start:
{
lean_object* v___x_1671_; 
v___x_1671_ = lean_obj_once(&l_Lean_Parser_Attr_externEntry___closed__12, &l_Lean_Parser_Attr_externEntry___closed__12_once, _init_l_Lean_Parser_Attr_externEntry___closed__12);
return v___x_1671_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_extern___closed__2(void){
_start:
{
uint8_t v___x_1678_; uint8_t v___x_1679_; lean_object* v___x_1680_; lean_object* v___x_1681_; lean_object* v___x_1682_; 
v___x_1678_ = 0;
v___x_1679_ = 1;
v___x_1680_ = ((lean_object*)(l_Lean_Parser_Attr_extern___closed__1));
v___x_1681_ = ((lean_object*)(l_Lean_Parser_Attr_extern___closed__0));
v___x_1682_ = l_Lean_Parser_mkAntiquot(v___x_1681_, v___x_1680_, v___x_1679_, v___x_1678_);
return v___x_1682_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_extern___closed__3(void){
_start:
{
uint8_t v___x_1683_; lean_object* v___x_1684_; lean_object* v___x_1685_; 
v___x_1683_ = 0;
v___x_1684_ = ((lean_object*)(l_Lean_Parser_Attr_extern___closed__0));
v___x_1685_ = l_Lean_Parser_nonReservedSymbol(v___x_1684_, v___x_1683_);
return v___x_1685_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_extern___closed__4(void){
_start:
{
lean_object* v___x_1686_; lean_object* v___x_1687_; lean_object* v___x_1688_; 
v___x_1686_ = l_Lean_Parser_Attr_externEntry;
v___x_1687_ = l_Lean_Parser_skip;
v___x_1688_ = l_Lean_Parser_andthen(v___x_1687_, v___x_1686_);
return v___x_1688_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_extern___closed__5(void){
_start:
{
lean_object* v___x_1689_; lean_object* v___x_1690_; 
v___x_1689_ = lean_obj_once(&l_Lean_Parser_Attr_extern___closed__4, &l_Lean_Parser_Attr_extern___closed__4_once, _init_l_Lean_Parser_Attr_extern___closed__4);
v___x_1690_ = l_Lean_Parser_many(v___x_1689_);
return v___x_1690_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_extern___closed__6(void){
_start:
{
lean_object* v___x_1691_; lean_object* v___x_1692_; lean_object* v___x_1693_; 
v___x_1691_ = lean_obj_once(&l_Lean_Parser_Attr_extern___closed__5, &l_Lean_Parser_Attr_extern___closed__5_once, _init_l_Lean_Parser_Attr_extern___closed__5);
v___x_1692_ = lean_obj_once(&l_Lean_Parser_Attr_extern___closed__3, &l_Lean_Parser_Attr_extern___closed__3_once, _init_l_Lean_Parser_Attr_extern___closed__3);
v___x_1693_ = l_Lean_Parser_andthen(v___x_1692_, v___x_1691_);
return v___x_1693_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_extern___closed__7(void){
_start:
{
lean_object* v___x_1694_; lean_object* v___x_1695_; lean_object* v___x_1696_; lean_object* v___x_1697_; 
v___x_1694_ = lean_obj_once(&l_Lean_Parser_Attr_extern___closed__6, &l_Lean_Parser_Attr_extern___closed__6_once, _init_l_Lean_Parser_Attr_extern___closed__6);
v___x_1695_ = lean_unsigned_to_nat(1024u);
v___x_1696_ = ((lean_object*)(l_Lean_Parser_Attr_extern___closed__1));
v___x_1697_ = l_Lean_Parser_leadingNode(v___x_1696_, v___x_1695_, v___x_1694_);
return v___x_1697_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_extern___closed__8(void){
_start:
{
lean_object* v___x_1698_; lean_object* v___x_1699_; lean_object* v___x_1700_; 
v___x_1698_ = lean_obj_once(&l_Lean_Parser_Attr_extern___closed__7, &l_Lean_Parser_Attr_extern___closed__7_once, _init_l_Lean_Parser_Attr_extern___closed__7);
v___x_1699_ = lean_obj_once(&l_Lean_Parser_Attr_extern___closed__2, &l_Lean_Parser_Attr_extern___closed__2_once, _init_l_Lean_Parser_Attr_extern___closed__2);
v___x_1700_ = l_Lean_Parser_withAntiquot(v___x_1699_, v___x_1698_);
return v___x_1700_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_extern___closed__9(void){
_start:
{
lean_object* v___x_1701_; lean_object* v___x_1702_; lean_object* v___x_1703_; 
v___x_1701_ = lean_obj_once(&l_Lean_Parser_Attr_extern___closed__8, &l_Lean_Parser_Attr_extern___closed__8_once, _init_l_Lean_Parser_Attr_extern___closed__8);
v___x_1702_ = ((lean_object*)(l_Lean_Parser_Attr_extern___closed__1));
v___x_1703_ = l_Lean_Parser_withCache(v___x_1702_, v___x_1701_);
return v___x_1703_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_extern(void){
_start:
{
lean_object* v___x_1704_; 
v___x_1704_ = lean_obj_once(&l_Lean_Parser_Attr_extern___closed__9, &l_Lean_Parser_Attr_extern___closed__9_once, _init_l_Lean_Parser_Attr_extern___closed__9);
return v___x_1704_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_extern__1(){
_start:
{
lean_object* v___x_1706_; lean_object* v___x_1707_; lean_object* v___x_1708_; lean_object* v___x_1709_; lean_object* v___x_1710_; 
v___x_1706_ = ((lean_object*)(l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__10_00___x40_Lean_Parser_Attr_249558774____hygCtx___hyg_2_));
v___x_1707_ = ((lean_object*)(l_Lean_Parser_Attr_extern___closed__1));
v___x_1708_ = l_Lean_Parser_Attr_extern;
v___x_1709_ = lean_unsigned_to_nat(1000u);
v___x_1710_ = l_Lean_Parser_addBuiltinLeadingParser(v___x_1706_, v___x_1707_, v___x_1708_, v___x_1709_);
return v___x_1710_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_extern__1___boxed(lean_object* v_a_1711_){
_start:
{
lean_object* v_res_1712_; 
v_res_1712_ = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_extern__1();
return v_res_1712_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_extern_declRange__3(){
_start:
{
lean_object* v___x_1739_; lean_object* v___x_1740_; lean_object* v___x_1741_; 
v___x_1739_ = ((lean_object*)(l_Lean_Parser_Attr_extern___closed__1));
v___x_1740_ = ((lean_object*)(l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_extern_declRange__3___closed__6));
v___x_1741_ = l_Lean_addBuiltinDeclarationRanges(v___x_1739_, v___x_1740_);
return v___x_1741_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_extern_declRange__3___boxed(lean_object* v_a_1742_){
_start:
{
lean_object* v_res_1743_; 
v_res_1743_ = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_extern_declRange__3();
return v_res_1743_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_externEntry_formatter(lean_object* v_a_1773_, lean_object* v_a_1774_, lean_object* v_a_1775_, lean_object* v_a_1776_){
_start:
{
lean_object* v___x_1778_; lean_object* v___x_1779_; lean_object* v___x_1780_; 
v___x_1778_ = ((lean_object*)(l_Lean_Parser_Attr_externEntry_formatter___closed__0));
v___x_1779_ = ((lean_object*)(l_Lean_Parser_Attr_externEntry_formatter___closed__8));
v___x_1780_ = l_Lean_PrettyPrinter_Formatter_orelse_formatter(v___x_1778_, v___x_1779_, v_a_1773_, v_a_1774_, v_a_1775_, v_a_1776_);
return v___x_1780_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_externEntry_formatter___boxed(lean_object* v_a_1781_, lean_object* v_a_1782_, lean_object* v_a_1783_, lean_object* v_a_1784_, lean_object* v_a_1785_){
_start:
{
lean_object* v_res_1786_; 
v_res_1786_ = l_Lean_Parser_Attr_externEntry_formatter(v_a_1781_, v_a_1782_, v_a_1783_, v_a_1784_);
lean_dec(v_a_1784_);
lean_dec_ref(v_a_1783_);
lean_dec(v_a_1782_);
lean_dec_ref(v_a_1781_);
return v_res_1786_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_externEntry_formatter__7(){
_start:
{
lean_object* v___x_1794_; lean_object* v___x_1795_; lean_object* v___x_1796_; lean_object* v___x_1797_; lean_object* v___x_1798_; 
v___x_1794_ = l_Lean_PrettyPrinter_formatterAttribute;
v___x_1795_ = ((lean_object*)(l_Lean_Parser_Attr_externEntry___closed__1));
v___x_1796_ = ((lean_object*)(l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_externEntry_formatter__7___closed__0));
v___x_1797_ = lean_alloc_closure((void*)(l_Lean_Parser_Attr_externEntry_formatter___boxed), 5, 0);
v___x_1798_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_1794_, v___x_1795_, v___x_1796_, v___x_1797_);
return v___x_1798_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_externEntry_formatter__7___boxed(lean_object* v_a_1799_){
_start:
{
lean_object* v_res_1800_; 
v_res_1800_ = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_externEntry_formatter__7();
return v_res_1800_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_extern_formatter___closed__2(void){
_start:
{
lean_object* v___x_1812_; lean_object* v___f_1813_; lean_object* v___x_1814_; 
v___x_1812_ = lean_alloc_closure((void*)(l_Lean_Parser_Attr_externEntry_formatter___boxed), 5, 0);
v___f_1813_ = ((lean_object*)(l_Lean_Parser_Attr_simple_formatter___closed__0));
v___x_1814_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed), 7, 2);
lean_closure_set(v___x_1814_, 0, v___f_1813_);
lean_closure_set(v___x_1814_, 1, v___x_1812_);
return v___x_1814_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_extern_formatter___closed__3(void){
_start:
{
lean_object* v___x_1815_; lean_object* v___x_1816_; 
v___x_1815_ = lean_obj_once(&l_Lean_Parser_Attr_extern_formatter___closed__2, &l_Lean_Parser_Attr_extern_formatter___closed__2_once, _init_l_Lean_Parser_Attr_extern_formatter___closed__2);
v___x_1816_ = lean_alloc_closure((void*)(l_Lean_Parser_many_formatter___boxed), 6, 1);
lean_closure_set(v___x_1816_, 0, v___x_1815_);
return v___x_1816_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_extern_formatter___closed__4(void){
_start:
{
lean_object* v___x_1817_; lean_object* v___x_1818_; lean_object* v___x_1819_; 
v___x_1817_ = lean_obj_once(&l_Lean_Parser_Attr_extern_formatter___closed__3, &l_Lean_Parser_Attr_extern_formatter___closed__3_once, _init_l_Lean_Parser_Attr_extern_formatter___closed__3);
v___x_1818_ = ((lean_object*)(l_Lean_Parser_Attr_extern_formatter___closed__1));
v___x_1819_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed), 7, 2);
lean_closure_set(v___x_1819_, 0, v___x_1818_);
lean_closure_set(v___x_1819_, 1, v___x_1817_);
return v___x_1819_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_extern_formatter___closed__5(void){
_start:
{
lean_object* v___x_1820_; lean_object* v___x_1821_; lean_object* v___x_1822_; lean_object* v___x_1823_; 
v___x_1820_ = lean_obj_once(&l_Lean_Parser_Attr_extern_formatter___closed__4, &l_Lean_Parser_Attr_extern_formatter___closed__4_once, _init_l_Lean_Parser_Attr_extern_formatter___closed__4);
v___x_1821_ = lean_unsigned_to_nat(1024u);
v___x_1822_ = ((lean_object*)(l_Lean_Parser_Attr_extern___closed__1));
v___x_1823_ = lean_alloc_closure((void*)(l_Lean_Parser_leadingNode_formatter___boxed), 8, 3);
lean_closure_set(v___x_1823_, 0, v___x_1822_);
lean_closure_set(v___x_1823_, 1, v___x_1821_);
lean_closure_set(v___x_1823_, 2, v___x_1820_);
return v___x_1823_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_extern_formatter(lean_object* v_a_1824_, lean_object* v_a_1825_, lean_object* v_a_1826_, lean_object* v_a_1827_){
_start:
{
lean_object* v___x_1829_; lean_object* v___x_1830_; lean_object* v___x_1831_; 
v___x_1829_ = ((lean_object*)(l_Lean_Parser_Attr_extern_formatter___closed__0));
v___x_1830_ = lean_obj_once(&l_Lean_Parser_Attr_extern_formatter___closed__5, &l_Lean_Parser_Attr_extern_formatter___closed__5_once, _init_l_Lean_Parser_Attr_extern_formatter___closed__5);
v___x_1831_ = l_Lean_PrettyPrinter_Formatter_orelse_formatter(v___x_1829_, v___x_1830_, v_a_1824_, v_a_1825_, v_a_1826_, v_a_1827_);
return v___x_1831_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_extern_formatter___boxed(lean_object* v_a_1832_, lean_object* v_a_1833_, lean_object* v_a_1834_, lean_object* v_a_1835_, lean_object* v_a_1836_){
_start:
{
lean_object* v_res_1837_; 
v_res_1837_ = l_Lean_Parser_Attr_extern_formatter(v_a_1832_, v_a_1833_, v_a_1834_, v_a_1835_);
lean_dec(v_a_1835_);
lean_dec_ref(v_a_1834_);
lean_dec(v_a_1833_);
lean_dec_ref(v_a_1832_);
return v_res_1837_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_extern_formatter__11(){
_start:
{
lean_object* v___x_1845_; lean_object* v___x_1846_; lean_object* v___x_1847_; lean_object* v___x_1848_; lean_object* v___x_1849_; 
v___x_1845_ = l_Lean_PrettyPrinter_formatterAttribute;
v___x_1846_ = ((lean_object*)(l_Lean_Parser_Attr_extern___closed__1));
v___x_1847_ = ((lean_object*)(l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_extern_formatter__11___closed__0));
v___x_1848_ = lean_alloc_closure((void*)(l_Lean_Parser_Attr_extern_formatter___boxed), 5, 0);
v___x_1849_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_1845_, v___x_1846_, v___x_1847_, v___x_1848_);
return v___x_1849_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_extern_formatter__11___boxed(lean_object* v_a_1850_){
_start:
{
lean_object* v_res_1851_; 
v_res_1851_ = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_extern_formatter__11();
return v_res_1851_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_externEntry_parenthesizer(lean_object* v_a_1881_, lean_object* v_a_1882_, lean_object* v_a_1883_, lean_object* v_a_1884_){
_start:
{
lean_object* v___x_1886_; lean_object* v___x_1887_; lean_object* v___x_1888_; 
v___x_1886_ = ((lean_object*)(l_Lean_Parser_Attr_externEntry_parenthesizer___closed__0));
v___x_1887_ = ((lean_object*)(l_Lean_Parser_Attr_externEntry_parenthesizer___closed__8));
v___x_1888_ = l_Lean_PrettyPrinter_Parenthesizer_withAntiquot_parenthesizer(v___x_1886_, v___x_1887_, v_a_1881_, v_a_1882_, v_a_1883_, v_a_1884_);
return v___x_1888_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_externEntry_parenthesizer___boxed(lean_object* v_a_1889_, lean_object* v_a_1890_, lean_object* v_a_1891_, lean_object* v_a_1892_, lean_object* v_a_1893_){
_start:
{
lean_object* v_res_1894_; 
v_res_1894_ = l_Lean_Parser_Attr_externEntry_parenthesizer(v_a_1889_, v_a_1890_, v_a_1891_, v_a_1892_);
lean_dec(v_a_1892_);
lean_dec_ref(v_a_1891_);
lean_dec(v_a_1890_);
lean_dec_ref(v_a_1889_);
return v_res_1894_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_externEntry_parenthesizer__15(){
_start:
{
lean_object* v___x_1902_; lean_object* v___x_1903_; lean_object* v___x_1904_; lean_object* v___x_1905_; lean_object* v___x_1906_; 
v___x_1902_ = l_Lean_PrettyPrinter_parenthesizerAttribute;
v___x_1903_ = ((lean_object*)(l_Lean_Parser_Attr_externEntry___closed__1));
v___x_1904_ = ((lean_object*)(l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_externEntry_parenthesizer__15___closed__0));
v___x_1905_ = lean_alloc_closure((void*)(l_Lean_Parser_Attr_externEntry_parenthesizer___boxed), 5, 0);
v___x_1906_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_1902_, v___x_1903_, v___x_1904_, v___x_1905_);
return v___x_1906_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_externEntry_parenthesizer__15___boxed(lean_object* v_a_1907_){
_start:
{
lean_object* v_res_1908_; 
v_res_1908_ = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_externEntry_parenthesizer__15();
return v_res_1908_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_extern_parenthesizer___closed__2(void){
_start:
{
lean_object* v___x_1920_; lean_object* v___x_1921_; lean_object* v___x_1922_; 
v___x_1920_ = lean_alloc_closure((void*)(l_Lean_Parser_Attr_externEntry_parenthesizer___boxed), 5, 0);
v___x_1921_ = ((lean_object*)(l_Lean_Parser_Attr_simple_parenthesizer___closed__2));
v___x_1922_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed), 7, 2);
lean_closure_set(v___x_1922_, 0, v___x_1921_);
lean_closure_set(v___x_1922_, 1, v___x_1920_);
return v___x_1922_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_extern_parenthesizer___closed__3(void){
_start:
{
lean_object* v___x_1923_; lean_object* v___x_1924_; 
v___x_1923_ = lean_obj_once(&l_Lean_Parser_Attr_extern_parenthesizer___closed__2, &l_Lean_Parser_Attr_extern_parenthesizer___closed__2_once, _init_l_Lean_Parser_Attr_extern_parenthesizer___closed__2);
v___x_1924_ = lean_alloc_closure((void*)(l_Lean_Parser_many_parenthesizer___boxed), 6, 1);
lean_closure_set(v___x_1924_, 0, v___x_1923_);
return v___x_1924_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_extern_parenthesizer___closed__4(void){
_start:
{
lean_object* v___x_1925_; lean_object* v___x_1926_; lean_object* v___x_1927_; 
v___x_1925_ = lean_obj_once(&l_Lean_Parser_Attr_extern_parenthesizer___closed__3, &l_Lean_Parser_Attr_extern_parenthesizer___closed__3_once, _init_l_Lean_Parser_Attr_extern_parenthesizer___closed__3);
v___x_1926_ = ((lean_object*)(l_Lean_Parser_Attr_extern_parenthesizer___closed__1));
v___x_1927_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed), 7, 2);
lean_closure_set(v___x_1927_, 0, v___x_1926_);
lean_closure_set(v___x_1927_, 1, v___x_1925_);
return v___x_1927_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_extern_parenthesizer___closed__5(void){
_start:
{
lean_object* v___x_1928_; lean_object* v___x_1929_; lean_object* v___x_1930_; lean_object* v___x_1931_; 
v___x_1928_ = lean_obj_once(&l_Lean_Parser_Attr_extern_parenthesizer___closed__4, &l_Lean_Parser_Attr_extern_parenthesizer___closed__4_once, _init_l_Lean_Parser_Attr_extern_parenthesizer___closed__4);
v___x_1929_ = lean_unsigned_to_nat(1024u);
v___x_1930_ = ((lean_object*)(l_Lean_Parser_Attr_extern___closed__1));
v___x_1931_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_leadingNode_parenthesizer___boxed), 8, 3);
lean_closure_set(v___x_1931_, 0, v___x_1930_);
lean_closure_set(v___x_1931_, 1, v___x_1929_);
lean_closure_set(v___x_1931_, 2, v___x_1928_);
return v___x_1931_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_extern_parenthesizer(lean_object* v_a_1932_, lean_object* v_a_1933_, lean_object* v_a_1934_, lean_object* v_a_1935_){
_start:
{
lean_object* v___x_1937_; lean_object* v___x_1938_; lean_object* v___x_1939_; 
v___x_1937_ = ((lean_object*)(l_Lean_Parser_Attr_extern_parenthesizer___closed__0));
v___x_1938_ = lean_obj_once(&l_Lean_Parser_Attr_extern_parenthesizer___closed__5, &l_Lean_Parser_Attr_extern_parenthesizer___closed__5_once, _init_l_Lean_Parser_Attr_extern_parenthesizer___closed__5);
v___x_1939_ = l_Lean_PrettyPrinter_Parenthesizer_withAntiquot_parenthesizer(v___x_1937_, v___x_1938_, v_a_1932_, v_a_1933_, v_a_1934_, v_a_1935_);
return v___x_1939_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_extern_parenthesizer___boxed(lean_object* v_a_1940_, lean_object* v_a_1941_, lean_object* v_a_1942_, lean_object* v_a_1943_, lean_object* v_a_1944_){
_start:
{
lean_object* v_res_1945_; 
v_res_1945_ = l_Lean_Parser_Attr_extern_parenthesizer(v_a_1940_, v_a_1941_, v_a_1942_, v_a_1943_);
lean_dec(v_a_1943_);
lean_dec_ref(v_a_1942_);
lean_dec(v_a_1941_);
lean_dec_ref(v_a_1940_);
return v_res_1945_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_extern_parenthesizer__19(){
_start:
{
lean_object* v___x_1953_; lean_object* v___x_1954_; lean_object* v___x_1955_; lean_object* v___x_1956_; lean_object* v___x_1957_; 
v___x_1953_ = l_Lean_PrettyPrinter_parenthesizerAttribute;
v___x_1954_ = ((lean_object*)(l_Lean_Parser_Attr_extern___closed__1));
v___x_1955_ = ((lean_object*)(l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_extern_parenthesizer__19___closed__0));
v___x_1956_ = lean_alloc_closure((void*)(l_Lean_Parser_Attr_extern_parenthesizer___boxed), 5, 0);
v___x_1957_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_1953_, v___x_1954_, v___x_1955_, v___x_1956_);
return v___x_1957_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_extern_parenthesizer__19___boxed(lean_object* v_a_1958_){
_start:
{
lean_object* v_res_1959_; 
v_res_1959_ = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_extern_parenthesizer__19();
return v_res_1959_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_tactic__alt___closed__2(void){
_start:
{
uint8_t v___x_1966_; uint8_t v___x_1967_; lean_object* v___x_1968_; lean_object* v___x_1969_; lean_object* v___x_1970_; 
v___x_1966_ = 0;
v___x_1967_ = 1;
v___x_1968_ = ((lean_object*)(l_Lean_Parser_Attr_tactic__alt___closed__1));
v___x_1969_ = ((lean_object*)(l_Lean_Parser_Attr_tactic__alt___closed__0));
v___x_1970_ = l_Lean_Parser_mkAntiquot(v___x_1969_, v___x_1968_, v___x_1967_, v___x_1966_);
return v___x_1970_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_tactic__alt___closed__3(void){
_start:
{
lean_object* v___x_1971_; lean_object* v___x_1972_; 
v___x_1971_ = ((lean_object*)(l_Lean_Parser_Attr_tactic__alt___closed__0));
v___x_1972_ = l_Lean_Parser_symbol(v___x_1971_);
return v___x_1972_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_tactic__alt___closed__4(void){
_start:
{
lean_object* v___x_1973_; lean_object* v___x_1974_; lean_object* v___x_1975_; 
v___x_1973_ = l_Lean_Parser_ident;
v___x_1974_ = l_Lean_Parser_skip;
v___x_1975_ = l_Lean_Parser_andthen(v___x_1974_, v___x_1973_);
return v___x_1975_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_tactic__alt___closed__5(void){
_start:
{
lean_object* v___x_1976_; lean_object* v___x_1977_; lean_object* v___x_1978_; 
v___x_1976_ = lean_obj_once(&l_Lean_Parser_Attr_tactic__alt___closed__4, &l_Lean_Parser_Attr_tactic__alt___closed__4_once, _init_l_Lean_Parser_Attr_tactic__alt___closed__4);
v___x_1977_ = lean_obj_once(&l_Lean_Parser_Attr_tactic__alt___closed__3, &l_Lean_Parser_Attr_tactic__alt___closed__3_once, _init_l_Lean_Parser_Attr_tactic__alt___closed__3);
v___x_1978_ = l_Lean_Parser_andthen(v___x_1977_, v___x_1976_);
return v___x_1978_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_tactic__alt___closed__6(void){
_start:
{
lean_object* v___x_1979_; lean_object* v___x_1980_; lean_object* v___x_1981_; lean_object* v___x_1982_; 
v___x_1979_ = lean_obj_once(&l_Lean_Parser_Attr_tactic__alt___closed__5, &l_Lean_Parser_Attr_tactic__alt___closed__5_once, _init_l_Lean_Parser_Attr_tactic__alt___closed__5);
v___x_1980_ = lean_unsigned_to_nat(1024u);
v___x_1981_ = ((lean_object*)(l_Lean_Parser_Attr_tactic__alt___closed__1));
v___x_1982_ = l_Lean_Parser_leadingNode(v___x_1981_, v___x_1980_, v___x_1979_);
return v___x_1982_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_tactic__alt___closed__7(void){
_start:
{
lean_object* v___x_1983_; lean_object* v___x_1984_; lean_object* v___x_1985_; 
v___x_1983_ = lean_obj_once(&l_Lean_Parser_Attr_tactic__alt___closed__6, &l_Lean_Parser_Attr_tactic__alt___closed__6_once, _init_l_Lean_Parser_Attr_tactic__alt___closed__6);
v___x_1984_ = lean_obj_once(&l_Lean_Parser_Attr_tactic__alt___closed__2, &l_Lean_Parser_Attr_tactic__alt___closed__2_once, _init_l_Lean_Parser_Attr_tactic__alt___closed__2);
v___x_1985_ = l_Lean_Parser_withAntiquot(v___x_1984_, v___x_1983_);
return v___x_1985_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_tactic__alt___closed__8(void){
_start:
{
lean_object* v___x_1986_; lean_object* v___x_1987_; lean_object* v___x_1988_; 
v___x_1986_ = lean_obj_once(&l_Lean_Parser_Attr_tactic__alt___closed__7, &l_Lean_Parser_Attr_tactic__alt___closed__7_once, _init_l_Lean_Parser_Attr_tactic__alt___closed__7);
v___x_1987_ = ((lean_object*)(l_Lean_Parser_Attr_tactic__alt___closed__1));
v___x_1988_ = l_Lean_Parser_withCache(v___x_1987_, v___x_1986_);
return v___x_1988_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_tactic__alt(void){
_start:
{
lean_object* v___x_1989_; 
v___x_1989_ = lean_obj_once(&l_Lean_Parser_Attr_tactic__alt___closed__8, &l_Lean_Parser_Attr_tactic__alt___closed__8_once, _init_l_Lean_Parser_Attr_tactic__alt___closed__8);
return v___x_1989_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__alt___regBuiltin_Lean_Parser_Attr_tactic__alt__1(){
_start:
{
lean_object* v___x_1991_; lean_object* v___x_1992_; lean_object* v___x_1993_; lean_object* v___x_1994_; lean_object* v___x_1995_; 
v___x_1991_ = ((lean_object*)(l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__10_00___x40_Lean_Parser_Attr_249558774____hygCtx___hyg_2_));
v___x_1992_ = ((lean_object*)(l_Lean_Parser_Attr_tactic__alt___closed__1));
v___x_1993_ = l_Lean_Parser_Attr_tactic__alt;
v___x_1994_ = lean_unsigned_to_nat(1000u);
v___x_1995_ = l_Lean_Parser_addBuiltinLeadingParser(v___x_1991_, v___x_1992_, v___x_1993_, v___x_1994_);
return v___x_1995_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__alt___regBuiltin_Lean_Parser_Attr_tactic__alt__1___boxed(lean_object* v_a_1996_){
_start:
{
lean_object* v_res_1997_; 
v_res_1997_ = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__alt___regBuiltin_Lean_Parser_Attr_tactic__alt__1();
return v_res_1997_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__alt___regBuiltin_Lean_Parser_Attr_tactic__alt_docString__3(){
_start:
{
lean_object* v___x_2000_; lean_object* v___x_2001_; lean_object* v___x_2002_; 
v___x_2000_ = ((lean_object*)(l_Lean_Parser_Attr_tactic__alt___closed__1));
v___x_2001_ = ((lean_object*)(l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__alt___regBuiltin_Lean_Parser_Attr_tactic__alt_docString__3___closed__0));
v___x_2002_ = l_Lean_addBuiltinDocString(v___x_2000_, v___x_2001_);
return v___x_2002_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__alt___regBuiltin_Lean_Parser_Attr_tactic__alt_docString__3___boxed(lean_object* v_a_2003_){
_start:
{
lean_object* v_res_2004_; 
v_res_2004_ = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__alt___regBuiltin_Lean_Parser_Attr_tactic__alt_docString__3();
return v_res_2004_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__alt___regBuiltin_Lean_Parser_Attr_tactic__alt_declRange__5(){
_start:
{
lean_object* v___x_2031_; lean_object* v___x_2032_; lean_object* v___x_2033_; 
v___x_2031_ = ((lean_object*)(l_Lean_Parser_Attr_tactic__alt___closed__1));
v___x_2032_ = ((lean_object*)(l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__alt___regBuiltin_Lean_Parser_Attr_tactic__alt_declRange__5___closed__6));
v___x_2033_ = l_Lean_addBuiltinDeclarationRanges(v___x_2031_, v___x_2032_);
return v___x_2033_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__alt___regBuiltin_Lean_Parser_Attr_tactic__alt_declRange__5___boxed(lean_object* v_a_2034_){
_start:
{
lean_object* v_res_2035_; 
v_res_2035_ = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__alt___regBuiltin_Lean_Parser_Attr_tactic__alt_declRange__5();
return v_res_2035_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_tactic__alt_formatter(lean_object* v_a_2055_, lean_object* v_a_2056_, lean_object* v_a_2057_, lean_object* v_a_2058_){
_start:
{
lean_object* v___x_2060_; lean_object* v___x_2061_; lean_object* v___x_2062_; 
v___x_2060_ = ((lean_object*)(l_Lean_Parser_Attr_tactic__alt_formatter___closed__0));
v___x_2061_ = ((lean_object*)(l_Lean_Parser_Attr_tactic__alt_formatter___closed__4));
v___x_2062_ = l_Lean_PrettyPrinter_Formatter_orelse_formatter(v___x_2060_, v___x_2061_, v_a_2055_, v_a_2056_, v_a_2057_, v_a_2058_);
return v___x_2062_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_tactic__alt_formatter___boxed(lean_object* v_a_2063_, lean_object* v_a_2064_, lean_object* v_a_2065_, lean_object* v_a_2066_, lean_object* v_a_2067_){
_start:
{
lean_object* v_res_2068_; 
v_res_2068_ = l_Lean_Parser_Attr_tactic__alt_formatter(v_a_2063_, v_a_2064_, v_a_2065_, v_a_2066_);
lean_dec(v_a_2066_);
lean_dec_ref(v_a_2065_);
lean_dec(v_a_2064_);
lean_dec_ref(v_a_2063_);
return v_res_2068_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__alt___regBuiltin_Lean_Parser_Attr_tactic__alt_formatter__9(){
_start:
{
lean_object* v___x_2076_; lean_object* v___x_2077_; lean_object* v___x_2078_; lean_object* v___x_2079_; lean_object* v___x_2080_; 
v___x_2076_ = l_Lean_PrettyPrinter_formatterAttribute;
v___x_2077_ = ((lean_object*)(l_Lean_Parser_Attr_tactic__alt___closed__1));
v___x_2078_ = ((lean_object*)(l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__alt___regBuiltin_Lean_Parser_Attr_tactic__alt_formatter__9___closed__0));
v___x_2079_ = lean_alloc_closure((void*)(l_Lean_Parser_Attr_tactic__alt_formatter___boxed), 5, 0);
v___x_2080_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_2076_, v___x_2077_, v___x_2078_, v___x_2079_);
return v___x_2080_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__alt___regBuiltin_Lean_Parser_Attr_tactic__alt_formatter__9___boxed(lean_object* v_a_2081_){
_start:
{
lean_object* v_res_2082_; 
v_res_2082_ = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__alt___regBuiltin_Lean_Parser_Attr_tactic__alt_formatter__9();
return v_res_2082_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_tactic__alt_parenthesizer(lean_object* v_a_2102_, lean_object* v_a_2103_, lean_object* v_a_2104_, lean_object* v_a_2105_){
_start:
{
lean_object* v___x_2107_; lean_object* v___x_2108_; lean_object* v___x_2109_; 
v___x_2107_ = ((lean_object*)(l_Lean_Parser_Attr_tactic__alt_parenthesizer___closed__0));
v___x_2108_ = ((lean_object*)(l_Lean_Parser_Attr_tactic__alt_parenthesizer___closed__4));
v___x_2109_ = l_Lean_PrettyPrinter_Parenthesizer_withAntiquot_parenthesizer(v___x_2107_, v___x_2108_, v_a_2102_, v_a_2103_, v_a_2104_, v_a_2105_);
return v___x_2109_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_tactic__alt_parenthesizer___boxed(lean_object* v_a_2110_, lean_object* v_a_2111_, lean_object* v_a_2112_, lean_object* v_a_2113_, lean_object* v_a_2114_){
_start:
{
lean_object* v_res_2115_; 
v_res_2115_ = l_Lean_Parser_Attr_tactic__alt_parenthesizer(v_a_2110_, v_a_2111_, v_a_2112_, v_a_2113_);
lean_dec(v_a_2113_);
lean_dec_ref(v_a_2112_);
lean_dec(v_a_2111_);
lean_dec_ref(v_a_2110_);
return v_res_2115_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__alt___regBuiltin_Lean_Parser_Attr_tactic__alt_parenthesizer__13(){
_start:
{
lean_object* v___x_2123_; lean_object* v___x_2124_; lean_object* v___x_2125_; lean_object* v___x_2126_; lean_object* v___x_2127_; 
v___x_2123_ = l_Lean_PrettyPrinter_parenthesizerAttribute;
v___x_2124_ = ((lean_object*)(l_Lean_Parser_Attr_tactic__alt___closed__1));
v___x_2125_ = ((lean_object*)(l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__alt___regBuiltin_Lean_Parser_Attr_tactic__alt_parenthesizer__13___closed__0));
v___x_2126_ = lean_alloc_closure((void*)(l_Lean_Parser_Attr_tactic__alt_parenthesizer___boxed), 5, 0);
v___x_2127_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_2123_, v___x_2124_, v___x_2125_, v___x_2126_);
return v___x_2127_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__alt___regBuiltin_Lean_Parser_Attr_tactic__alt_parenthesizer__13___boxed(lean_object* v_a_2128_){
_start:
{
lean_object* v_res_2129_; 
v_res_2129_ = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__alt___regBuiltin_Lean_Parser_Attr_tactic__alt_parenthesizer__13();
return v_res_2129_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_tactic__tag___closed__2(void){
_start:
{
uint8_t v___x_2136_; uint8_t v___x_2137_; lean_object* v___x_2138_; lean_object* v___x_2139_; lean_object* v___x_2140_; 
v___x_2136_ = 0;
v___x_2137_ = 1;
v___x_2138_ = ((lean_object*)(l_Lean_Parser_Attr_tactic__tag___closed__1));
v___x_2139_ = ((lean_object*)(l_Lean_Parser_Attr_tactic__tag___closed__0));
v___x_2140_ = l_Lean_Parser_mkAntiquot(v___x_2139_, v___x_2138_, v___x_2137_, v___x_2136_);
return v___x_2140_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_tactic__tag___closed__3(void){
_start:
{
lean_object* v___x_2141_; lean_object* v___x_2142_; 
v___x_2141_ = ((lean_object*)(l_Lean_Parser_Attr_tactic__tag___closed__0));
v___x_2142_ = l_Lean_Parser_symbol(v___x_2141_);
return v___x_2142_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_tactic__tag___closed__4(void){
_start:
{
lean_object* v___x_2143_; lean_object* v___x_2144_; 
v___x_2143_ = lean_obj_once(&l_Lean_Parser_Attr_tactic__alt___closed__4, &l_Lean_Parser_Attr_tactic__alt___closed__4_once, _init_l_Lean_Parser_Attr_tactic__alt___closed__4);
v___x_2144_ = l_Lean_Parser_many1(v___x_2143_);
return v___x_2144_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_tactic__tag___closed__5(void){
_start:
{
lean_object* v___x_2145_; lean_object* v___x_2146_; lean_object* v___x_2147_; 
v___x_2145_ = lean_obj_once(&l_Lean_Parser_Attr_tactic__tag___closed__4, &l_Lean_Parser_Attr_tactic__tag___closed__4_once, _init_l_Lean_Parser_Attr_tactic__tag___closed__4);
v___x_2146_ = lean_obj_once(&l_Lean_Parser_Attr_tactic__tag___closed__3, &l_Lean_Parser_Attr_tactic__tag___closed__3_once, _init_l_Lean_Parser_Attr_tactic__tag___closed__3);
v___x_2147_ = l_Lean_Parser_andthen(v___x_2146_, v___x_2145_);
return v___x_2147_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_tactic__tag___closed__6(void){
_start:
{
lean_object* v___x_2148_; lean_object* v___x_2149_; lean_object* v___x_2150_; lean_object* v___x_2151_; 
v___x_2148_ = lean_obj_once(&l_Lean_Parser_Attr_tactic__tag___closed__5, &l_Lean_Parser_Attr_tactic__tag___closed__5_once, _init_l_Lean_Parser_Attr_tactic__tag___closed__5);
v___x_2149_ = lean_unsigned_to_nat(1024u);
v___x_2150_ = ((lean_object*)(l_Lean_Parser_Attr_tactic__tag___closed__1));
v___x_2151_ = l_Lean_Parser_leadingNode(v___x_2150_, v___x_2149_, v___x_2148_);
return v___x_2151_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_tactic__tag___closed__7(void){
_start:
{
lean_object* v___x_2152_; lean_object* v___x_2153_; lean_object* v___x_2154_; 
v___x_2152_ = lean_obj_once(&l_Lean_Parser_Attr_tactic__tag___closed__6, &l_Lean_Parser_Attr_tactic__tag___closed__6_once, _init_l_Lean_Parser_Attr_tactic__tag___closed__6);
v___x_2153_ = lean_obj_once(&l_Lean_Parser_Attr_tactic__tag___closed__2, &l_Lean_Parser_Attr_tactic__tag___closed__2_once, _init_l_Lean_Parser_Attr_tactic__tag___closed__2);
v___x_2154_ = l_Lean_Parser_withAntiquot(v___x_2153_, v___x_2152_);
return v___x_2154_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_tactic__tag___closed__8(void){
_start:
{
lean_object* v___x_2155_; lean_object* v___x_2156_; lean_object* v___x_2157_; 
v___x_2155_ = lean_obj_once(&l_Lean_Parser_Attr_tactic__tag___closed__7, &l_Lean_Parser_Attr_tactic__tag___closed__7_once, _init_l_Lean_Parser_Attr_tactic__tag___closed__7);
v___x_2156_ = ((lean_object*)(l_Lean_Parser_Attr_tactic__tag___closed__1));
v___x_2157_ = l_Lean_Parser_withCache(v___x_2156_, v___x_2155_);
return v___x_2157_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_tactic__tag(void){
_start:
{
lean_object* v___x_2158_; 
v___x_2158_ = lean_obj_once(&l_Lean_Parser_Attr_tactic__tag___closed__8, &l_Lean_Parser_Attr_tactic__tag___closed__8_once, _init_l_Lean_Parser_Attr_tactic__tag___closed__8);
return v___x_2158_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__tag___regBuiltin_Lean_Parser_Attr_tactic__tag__1(){
_start:
{
lean_object* v___x_2160_; lean_object* v___x_2161_; lean_object* v___x_2162_; lean_object* v___x_2163_; lean_object* v___x_2164_; 
v___x_2160_ = ((lean_object*)(l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__10_00___x40_Lean_Parser_Attr_249558774____hygCtx___hyg_2_));
v___x_2161_ = ((lean_object*)(l_Lean_Parser_Attr_tactic__tag___closed__1));
v___x_2162_ = l_Lean_Parser_Attr_tactic__tag;
v___x_2163_ = lean_unsigned_to_nat(1000u);
v___x_2164_ = l_Lean_Parser_addBuiltinLeadingParser(v___x_2160_, v___x_2161_, v___x_2162_, v___x_2163_);
return v___x_2164_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__tag___regBuiltin_Lean_Parser_Attr_tactic__tag__1___boxed(lean_object* v_a_2165_){
_start:
{
lean_object* v_res_2166_; 
v_res_2166_ = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__tag___regBuiltin_Lean_Parser_Attr_tactic__tag__1();
return v_res_2166_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__tag___regBuiltin_Lean_Parser_Attr_tactic__tag_docString__3(){
_start:
{
lean_object* v___x_2169_; lean_object* v___x_2170_; lean_object* v___x_2171_; 
v___x_2169_ = ((lean_object*)(l_Lean_Parser_Attr_tactic__tag___closed__1));
v___x_2170_ = ((lean_object*)(l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__tag___regBuiltin_Lean_Parser_Attr_tactic__tag_docString__3___closed__0));
v___x_2171_ = l_Lean_addBuiltinDocString(v___x_2169_, v___x_2170_);
return v___x_2171_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__tag___regBuiltin_Lean_Parser_Attr_tactic__tag_docString__3___boxed(lean_object* v_a_2172_){
_start:
{
lean_object* v_res_2173_; 
v_res_2173_ = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__tag___regBuiltin_Lean_Parser_Attr_tactic__tag_docString__3();
return v_res_2173_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__tag___regBuiltin_Lean_Parser_Attr_tactic__tag_declRange__5(){
_start:
{
lean_object* v___x_2200_; lean_object* v___x_2201_; lean_object* v___x_2202_; 
v___x_2200_ = ((lean_object*)(l_Lean_Parser_Attr_tactic__tag___closed__1));
v___x_2201_ = ((lean_object*)(l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__tag___regBuiltin_Lean_Parser_Attr_tactic__tag_declRange__5___closed__6));
v___x_2202_ = l_Lean_addBuiltinDeclarationRanges(v___x_2200_, v___x_2201_);
return v___x_2202_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__tag___regBuiltin_Lean_Parser_Attr_tactic__tag_declRange__5___boxed(lean_object* v_a_2203_){
_start:
{
lean_object* v_res_2204_; 
v_res_2204_ = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__tag___regBuiltin_Lean_Parser_Attr_tactic__tag_declRange__5();
return v_res_2204_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_tactic__tag_formatter(lean_object* v_a_2223_, lean_object* v_a_2224_, lean_object* v_a_2225_, lean_object* v_a_2226_){
_start:
{
lean_object* v___x_2228_; lean_object* v___x_2229_; lean_object* v___x_2230_; 
v___x_2228_ = ((lean_object*)(l_Lean_Parser_Attr_tactic__tag_formatter___closed__0));
v___x_2229_ = ((lean_object*)(l_Lean_Parser_Attr_tactic__tag_formatter___closed__4));
v___x_2230_ = l_Lean_PrettyPrinter_Formatter_orelse_formatter(v___x_2228_, v___x_2229_, v_a_2223_, v_a_2224_, v_a_2225_, v_a_2226_);
return v___x_2230_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_tactic__tag_formatter___boxed(lean_object* v_a_2231_, lean_object* v_a_2232_, lean_object* v_a_2233_, lean_object* v_a_2234_, lean_object* v_a_2235_){
_start:
{
lean_object* v_res_2236_; 
v_res_2236_ = l_Lean_Parser_Attr_tactic__tag_formatter(v_a_2231_, v_a_2232_, v_a_2233_, v_a_2234_);
lean_dec(v_a_2234_);
lean_dec_ref(v_a_2233_);
lean_dec(v_a_2232_);
lean_dec_ref(v_a_2231_);
return v_res_2236_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__tag___regBuiltin_Lean_Parser_Attr_tactic__tag_formatter__9(){
_start:
{
lean_object* v___x_2244_; lean_object* v___x_2245_; lean_object* v___x_2246_; lean_object* v___x_2247_; lean_object* v___x_2248_; 
v___x_2244_ = l_Lean_PrettyPrinter_formatterAttribute;
v___x_2245_ = ((lean_object*)(l_Lean_Parser_Attr_tactic__tag___closed__1));
v___x_2246_ = ((lean_object*)(l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__tag___regBuiltin_Lean_Parser_Attr_tactic__tag_formatter__9___closed__0));
v___x_2247_ = lean_alloc_closure((void*)(l_Lean_Parser_Attr_tactic__tag_formatter___boxed), 5, 0);
v___x_2248_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_2244_, v___x_2245_, v___x_2246_, v___x_2247_);
return v___x_2248_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__tag___regBuiltin_Lean_Parser_Attr_tactic__tag_formatter__9___boxed(lean_object* v_a_2249_){
_start:
{
lean_object* v_res_2250_; 
v_res_2250_ = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__tag___regBuiltin_Lean_Parser_Attr_tactic__tag_formatter__9();
return v_res_2250_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_tactic__tag_parenthesizer(lean_object* v_a_2269_, lean_object* v_a_2270_, lean_object* v_a_2271_, lean_object* v_a_2272_){
_start:
{
lean_object* v___x_2274_; lean_object* v___x_2275_; lean_object* v___x_2276_; 
v___x_2274_ = ((lean_object*)(l_Lean_Parser_Attr_tactic__tag_parenthesizer___closed__0));
v___x_2275_ = ((lean_object*)(l_Lean_Parser_Attr_tactic__tag_parenthesizer___closed__4));
v___x_2276_ = l_Lean_PrettyPrinter_Parenthesizer_withAntiquot_parenthesizer(v___x_2274_, v___x_2275_, v_a_2269_, v_a_2270_, v_a_2271_, v_a_2272_);
return v___x_2276_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_tactic__tag_parenthesizer___boxed(lean_object* v_a_2277_, lean_object* v_a_2278_, lean_object* v_a_2279_, lean_object* v_a_2280_, lean_object* v_a_2281_){
_start:
{
lean_object* v_res_2282_; 
v_res_2282_ = l_Lean_Parser_Attr_tactic__tag_parenthesizer(v_a_2277_, v_a_2278_, v_a_2279_, v_a_2280_);
lean_dec(v_a_2280_);
lean_dec_ref(v_a_2279_);
lean_dec(v_a_2278_);
lean_dec_ref(v_a_2277_);
return v_res_2282_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__tag___regBuiltin_Lean_Parser_Attr_tactic__tag_parenthesizer__13(){
_start:
{
lean_object* v___x_2290_; lean_object* v___x_2291_; lean_object* v___x_2292_; lean_object* v___x_2293_; lean_object* v___x_2294_; 
v___x_2290_ = l_Lean_PrettyPrinter_parenthesizerAttribute;
v___x_2291_ = ((lean_object*)(l_Lean_Parser_Attr_tactic__tag___closed__1));
v___x_2292_ = ((lean_object*)(l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__tag___regBuiltin_Lean_Parser_Attr_tactic__tag_parenthesizer__13___closed__0));
v___x_2293_ = lean_alloc_closure((void*)(l_Lean_Parser_Attr_tactic__tag_parenthesizer___boxed), 5, 0);
v___x_2294_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_2290_, v___x_2291_, v___x_2292_, v___x_2293_);
return v___x_2294_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__tag___regBuiltin_Lean_Parser_Attr_tactic__tag_parenthesizer__13___boxed(lean_object* v_a_2295_){
_start:
{
lean_object* v_res_2296_; 
v_res_2296_ = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__tag___regBuiltin_Lean_Parser_Attr_tactic__tag_parenthesizer__13();
return v_res_2296_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_tactic__name___closed__2(void){
_start:
{
uint8_t v___x_2303_; uint8_t v___x_2304_; lean_object* v___x_2305_; lean_object* v___x_2306_; lean_object* v___x_2307_; 
v___x_2303_ = 0;
v___x_2304_ = 1;
v___x_2305_ = ((lean_object*)(l_Lean_Parser_Attr_tactic__name___closed__1));
v___x_2306_ = ((lean_object*)(l_Lean_Parser_Attr_tactic__name___closed__0));
v___x_2307_ = l_Lean_Parser_mkAntiquot(v___x_2306_, v___x_2305_, v___x_2304_, v___x_2303_);
return v___x_2307_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_tactic__name___closed__3(void){
_start:
{
lean_object* v___x_2308_; lean_object* v___x_2309_; 
v___x_2308_ = ((lean_object*)(l_Lean_Parser_Attr_tactic__name___closed__0));
v___x_2309_ = l_Lean_Parser_symbol(v___x_2308_);
return v___x_2309_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_tactic__name___closed__4(void){
_start:
{
lean_object* v___x_2310_; lean_object* v___x_2311_; lean_object* v___x_2312_; 
v___x_2310_ = l_Lean_Parser_strLit;
v___x_2311_ = l_Lean_Parser_ident;
v___x_2312_ = l_Lean_Parser_orelse(v___x_2311_, v___x_2310_);
return v___x_2312_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_tactic__name___closed__5(void){
_start:
{
lean_object* v___x_2313_; lean_object* v___x_2314_; lean_object* v___x_2315_; 
v___x_2313_ = lean_obj_once(&l_Lean_Parser_Attr_tactic__name___closed__4, &l_Lean_Parser_Attr_tactic__name___closed__4_once, _init_l_Lean_Parser_Attr_tactic__name___closed__4);
v___x_2314_ = l_Lean_Parser_skip;
v___x_2315_ = l_Lean_Parser_andthen(v___x_2314_, v___x_2313_);
return v___x_2315_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_tactic__name___closed__6(void){
_start:
{
lean_object* v___x_2316_; lean_object* v___x_2317_; lean_object* v___x_2318_; 
v___x_2316_ = lean_obj_once(&l_Lean_Parser_Attr_tactic__name___closed__5, &l_Lean_Parser_Attr_tactic__name___closed__5_once, _init_l_Lean_Parser_Attr_tactic__name___closed__5);
v___x_2317_ = lean_obj_once(&l_Lean_Parser_Attr_tactic__name___closed__3, &l_Lean_Parser_Attr_tactic__name___closed__3_once, _init_l_Lean_Parser_Attr_tactic__name___closed__3);
v___x_2318_ = l_Lean_Parser_andthen(v___x_2317_, v___x_2316_);
return v___x_2318_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_tactic__name___closed__7(void){
_start:
{
lean_object* v___x_2319_; lean_object* v___x_2320_; lean_object* v___x_2321_; lean_object* v___x_2322_; 
v___x_2319_ = lean_obj_once(&l_Lean_Parser_Attr_tactic__name___closed__6, &l_Lean_Parser_Attr_tactic__name___closed__6_once, _init_l_Lean_Parser_Attr_tactic__name___closed__6);
v___x_2320_ = lean_unsigned_to_nat(1024u);
v___x_2321_ = ((lean_object*)(l_Lean_Parser_Attr_tactic__name___closed__1));
v___x_2322_ = l_Lean_Parser_leadingNode(v___x_2321_, v___x_2320_, v___x_2319_);
return v___x_2322_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_tactic__name___closed__8(void){
_start:
{
lean_object* v___x_2323_; lean_object* v___x_2324_; lean_object* v___x_2325_; 
v___x_2323_ = lean_obj_once(&l_Lean_Parser_Attr_tactic__name___closed__7, &l_Lean_Parser_Attr_tactic__name___closed__7_once, _init_l_Lean_Parser_Attr_tactic__name___closed__7);
v___x_2324_ = lean_obj_once(&l_Lean_Parser_Attr_tactic__name___closed__2, &l_Lean_Parser_Attr_tactic__name___closed__2_once, _init_l_Lean_Parser_Attr_tactic__name___closed__2);
v___x_2325_ = l_Lean_Parser_withAntiquot(v___x_2324_, v___x_2323_);
return v___x_2325_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_tactic__name___closed__9(void){
_start:
{
lean_object* v___x_2326_; lean_object* v___x_2327_; lean_object* v___x_2328_; 
v___x_2326_ = lean_obj_once(&l_Lean_Parser_Attr_tactic__name___closed__8, &l_Lean_Parser_Attr_tactic__name___closed__8_once, _init_l_Lean_Parser_Attr_tactic__name___closed__8);
v___x_2327_ = ((lean_object*)(l_Lean_Parser_Attr_tactic__name___closed__1));
v___x_2328_ = l_Lean_Parser_withCache(v___x_2327_, v___x_2326_);
return v___x_2328_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_tactic__name(void){
_start:
{
lean_object* v___x_2329_; 
v___x_2329_ = lean_obj_once(&l_Lean_Parser_Attr_tactic__name___closed__9, &l_Lean_Parser_Attr_tactic__name___closed__9_once, _init_l_Lean_Parser_Attr_tactic__name___closed__9);
return v___x_2329_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__name___regBuiltin_Lean_Parser_Attr_tactic__name__1(){
_start:
{
lean_object* v___x_2331_; lean_object* v___x_2332_; lean_object* v___x_2333_; lean_object* v___x_2334_; lean_object* v___x_2335_; 
v___x_2331_ = ((lean_object*)(l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__10_00___x40_Lean_Parser_Attr_249558774____hygCtx___hyg_2_));
v___x_2332_ = ((lean_object*)(l_Lean_Parser_Attr_tactic__name___closed__1));
v___x_2333_ = l_Lean_Parser_Attr_tactic__name;
v___x_2334_ = lean_unsigned_to_nat(1000u);
v___x_2335_ = l_Lean_Parser_addBuiltinLeadingParser(v___x_2331_, v___x_2332_, v___x_2333_, v___x_2334_);
return v___x_2335_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__name___regBuiltin_Lean_Parser_Attr_tactic__name__1___boxed(lean_object* v_a_2336_){
_start:
{
lean_object* v_res_2337_; 
v_res_2337_ = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__name___regBuiltin_Lean_Parser_Attr_tactic__name__1();
return v_res_2337_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__name___regBuiltin_Lean_Parser_Attr_tactic__name_docString__3(){
_start:
{
lean_object* v___x_2340_; lean_object* v___x_2341_; lean_object* v___x_2342_; 
v___x_2340_ = ((lean_object*)(l_Lean_Parser_Attr_tactic__name___closed__1));
v___x_2341_ = ((lean_object*)(l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__name___regBuiltin_Lean_Parser_Attr_tactic__name_docString__3___closed__0));
v___x_2342_ = l_Lean_addBuiltinDocString(v___x_2340_, v___x_2341_);
return v___x_2342_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__name___regBuiltin_Lean_Parser_Attr_tactic__name_docString__3___boxed(lean_object* v_a_2343_){
_start:
{
lean_object* v_res_2344_; 
v_res_2344_ = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__name___regBuiltin_Lean_Parser_Attr_tactic__name_docString__3();
return v_res_2344_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_tactic__name_formatter(lean_object* v_a_2367_, lean_object* v_a_2368_, lean_object* v_a_2369_, lean_object* v_a_2370_){
_start:
{
lean_object* v___x_2372_; lean_object* v___x_2373_; lean_object* v___x_2374_; 
v___x_2372_ = ((lean_object*)(l_Lean_Parser_Attr_tactic__name_formatter___closed__0));
v___x_2373_ = ((lean_object*)(l_Lean_Parser_Attr_tactic__name_formatter___closed__5));
v___x_2374_ = l_Lean_PrettyPrinter_Formatter_orelse_formatter(v___x_2372_, v___x_2373_, v_a_2367_, v_a_2368_, v_a_2369_, v_a_2370_);
return v___x_2374_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_tactic__name_formatter___boxed(lean_object* v_a_2375_, lean_object* v_a_2376_, lean_object* v_a_2377_, lean_object* v_a_2378_, lean_object* v_a_2379_){
_start:
{
lean_object* v_res_2380_; 
v_res_2380_ = l_Lean_Parser_Attr_tactic__name_formatter(v_a_2375_, v_a_2376_, v_a_2377_, v_a_2378_);
lean_dec(v_a_2378_);
lean_dec_ref(v_a_2377_);
lean_dec(v_a_2376_);
lean_dec_ref(v_a_2375_);
return v_res_2380_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__name___regBuiltin_Lean_Parser_Attr_tactic__name_formatter__7(){
_start:
{
lean_object* v___x_2388_; lean_object* v___x_2389_; lean_object* v___x_2390_; lean_object* v___x_2391_; lean_object* v___x_2392_; 
v___x_2388_ = l_Lean_PrettyPrinter_formatterAttribute;
v___x_2389_ = ((lean_object*)(l_Lean_Parser_Attr_tactic__name___closed__1));
v___x_2390_ = ((lean_object*)(l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__name___regBuiltin_Lean_Parser_Attr_tactic__name_formatter__7___closed__0));
v___x_2391_ = lean_alloc_closure((void*)(l_Lean_Parser_Attr_tactic__name_formatter___boxed), 5, 0);
v___x_2392_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_2388_, v___x_2389_, v___x_2390_, v___x_2391_);
return v___x_2392_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__name___regBuiltin_Lean_Parser_Attr_tactic__name_formatter__7___boxed(lean_object* v_a_2393_){
_start:
{
lean_object* v_res_2394_; 
v_res_2394_ = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__name___regBuiltin_Lean_Parser_Attr_tactic__name_formatter__7();
return v_res_2394_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_tactic__name_parenthesizer(lean_object* v_a_2417_, lean_object* v_a_2418_, lean_object* v_a_2419_, lean_object* v_a_2420_){
_start:
{
lean_object* v___x_2422_; lean_object* v___x_2423_; lean_object* v___x_2424_; 
v___x_2422_ = ((lean_object*)(l_Lean_Parser_Attr_tactic__name_parenthesizer___closed__0));
v___x_2423_ = ((lean_object*)(l_Lean_Parser_Attr_tactic__name_parenthesizer___closed__5));
v___x_2424_ = l_Lean_PrettyPrinter_Parenthesizer_withAntiquot_parenthesizer(v___x_2422_, v___x_2423_, v_a_2417_, v_a_2418_, v_a_2419_, v_a_2420_);
return v___x_2424_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_tactic__name_parenthesizer___boxed(lean_object* v_a_2425_, lean_object* v_a_2426_, lean_object* v_a_2427_, lean_object* v_a_2428_, lean_object* v_a_2429_){
_start:
{
lean_object* v_res_2430_; 
v_res_2430_ = l_Lean_Parser_Attr_tactic__name_parenthesizer(v_a_2425_, v_a_2426_, v_a_2427_, v_a_2428_);
lean_dec(v_a_2428_);
lean_dec_ref(v_a_2427_);
lean_dec(v_a_2426_);
lean_dec_ref(v_a_2425_);
return v_res_2430_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__name___regBuiltin_Lean_Parser_Attr_tactic__name_parenthesizer__11(){
_start:
{
lean_object* v___x_2438_; lean_object* v___x_2439_; lean_object* v___x_2440_; lean_object* v___x_2441_; lean_object* v___x_2442_; 
v___x_2438_ = l_Lean_PrettyPrinter_parenthesizerAttribute;
v___x_2439_ = ((lean_object*)(l_Lean_Parser_Attr_tactic__name___closed__1));
v___x_2440_ = ((lean_object*)(l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__name___regBuiltin_Lean_Parser_Attr_tactic__name_parenthesizer__11___closed__0));
v___x_2441_ = lean_alloc_closure((void*)(l_Lean_Parser_Attr_tactic__name_parenthesizer___boxed), 5, 0);
v___x_2442_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_2438_, v___x_2439_, v___x_2440_, v___x_2441_);
return v___x_2442_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__name___regBuiltin_Lean_Parser_Attr_tactic__name_parenthesizer__11___boxed(lean_object* v_a_2443_){
_start:
{
lean_object* v_res_2444_; 
v_res_2444_ = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__name___regBuiltin_Lean_Parser_Attr_tactic__name_parenthesizer__11();
return v_res_2444_;
}
}
lean_object* runtime_initialize_Lean_Parser_Extra(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Parser_Attr(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Parser_Extra(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Attr_0__Lean_Parser_initFn_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Attr_0__Lean_Parser_initFn_00___x40_Lean_Parser_Attr_249558774____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Parser_Priority_numPrio = _init_l_Lean_Parser_Priority_numPrio();
lean_mark_persistent(l_Lean_Parser_Priority_numPrio);
res = l___private_Lean_Parser_Attr_0__Lean_Parser_Priority_numPrio___regBuiltin_Lean_Parser_Priority_numPrio__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Attr_0__Lean_Parser_Priority_numPrio___regBuiltin_Lean_Parser_Priority_numPrio_declRange__3();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Parser_Attr_simple = _init_l_Lean_Parser_Attr_simple();
lean_mark_persistent(l_Lean_Parser_Attr_simple);
res = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_declRange__3();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_formatter__7();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_parenthesizer__11();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Parser_Attr_macro = _init_l_Lean_Parser_Attr_macro();
lean_mark_persistent(l_Lean_Parser_Attr_macro);
res = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_macro___regBuiltin_Lean_Parser_Attr_macro__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_macro___regBuiltin_Lean_Parser_Attr_macro_declRange__3();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_macro___regBuiltin_Lean_Parser_Attr_macro_formatter__7();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_macro___regBuiltin_Lean_Parser_Attr_macro_parenthesizer__11();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Parser_Attr_export = _init_l_Lean_Parser_Attr_export();
lean_mark_persistent(l_Lean_Parser_Attr_export);
res = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_export___regBuiltin_Lean_Parser_Attr_export__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_export___regBuiltin_Lean_Parser_Attr_export_declRange__3();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_export___regBuiltin_Lean_Parser_Attr_export_formatter__7();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_export___regBuiltin_Lean_Parser_Attr_export_parenthesizer__11();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Parser_Attr_recursor = _init_l_Lean_Parser_Attr_recursor();
lean_mark_persistent(l_Lean_Parser_Attr_recursor);
res = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_recursor___regBuiltin_Lean_Parser_Attr_recursor__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_recursor___regBuiltin_Lean_Parser_Attr_recursor_declRange__3();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_recursor___regBuiltin_Lean_Parser_Attr_recursor_formatter__7();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_recursor___regBuiltin_Lean_Parser_Attr_recursor_parenthesizer__11();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Parser_Attr_class = _init_l_Lean_Parser_Attr_class();
lean_mark_persistent(l_Lean_Parser_Attr_class);
res = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_class___regBuiltin_Lean_Parser_Attr_class__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_class___regBuiltin_Lean_Parser_Attr_class_declRange__3();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_class___regBuiltin_Lean_Parser_Attr_class_formatter__7();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_class___regBuiltin_Lean_Parser_Attr_class_parenthesizer__11();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Parser_Attr_instance = _init_l_Lean_Parser_Attr_instance();
lean_mark_persistent(l_Lean_Parser_Attr_instance);
res = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_instance___regBuiltin_Lean_Parser_Attr_instance__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_instance___regBuiltin_Lean_Parser_Attr_instance_declRange__3();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_instance___regBuiltin_Lean_Parser_Attr_instance_formatter__7();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_instance___regBuiltin_Lean_Parser_Attr_instance_parenthesizer__11();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Parser_Attr_default__instance = _init_l_Lean_Parser_Attr_default__instance();
lean_mark_persistent(l_Lean_Parser_Attr_default__instance);
res = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_default__instance___regBuiltin_Lean_Parser_Attr_default__instance__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_default__instance___regBuiltin_Lean_Parser_Attr_default__instance_declRange__3();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_default__instance___regBuiltin_Lean_Parser_Attr_default__instance_formatter__7();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_default__instance___regBuiltin_Lean_Parser_Attr_default__instance_parenthesizer__11();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Parser_Attr_specialize = _init_l_Lean_Parser_Attr_specialize();
lean_mark_persistent(l_Lean_Parser_Attr_specialize);
res = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_specialize___regBuiltin_Lean_Parser_Attr_specialize__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_specialize___regBuiltin_Lean_Parser_Attr_specialize_declRange__3();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_specialize___regBuiltin_Lean_Parser_Attr_specialize_formatter__7();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_specialize___regBuiltin_Lean_Parser_Attr_specialize_parenthesizer__11();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Parser_Attr_externEntry = _init_l_Lean_Parser_Attr_externEntry();
lean_mark_persistent(l_Lean_Parser_Attr_externEntry);
l_Lean_Parser_Attr_extern = _init_l_Lean_Parser_Attr_extern();
lean_mark_persistent(l_Lean_Parser_Attr_extern);
res = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_extern__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_extern_declRange__3();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_externEntry_formatter__7();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_extern_formatter__11();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_externEntry_parenthesizer__15();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_extern_parenthesizer__19();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Parser_Attr_tactic__alt = _init_l_Lean_Parser_Attr_tactic__alt();
lean_mark_persistent(l_Lean_Parser_Attr_tactic__alt);
res = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__alt___regBuiltin_Lean_Parser_Attr_tactic__alt__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__alt___regBuiltin_Lean_Parser_Attr_tactic__alt_docString__3();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__alt___regBuiltin_Lean_Parser_Attr_tactic__alt_declRange__5();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__alt___regBuiltin_Lean_Parser_Attr_tactic__alt_formatter__9();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__alt___regBuiltin_Lean_Parser_Attr_tactic__alt_parenthesizer__13();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Parser_Attr_tactic__tag = _init_l_Lean_Parser_Attr_tactic__tag();
lean_mark_persistent(l_Lean_Parser_Attr_tactic__tag);
res = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__tag___regBuiltin_Lean_Parser_Attr_tactic__tag__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__tag___regBuiltin_Lean_Parser_Attr_tactic__tag_docString__3();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__tag___regBuiltin_Lean_Parser_Attr_tactic__tag_declRange__5();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__tag___regBuiltin_Lean_Parser_Attr_tactic__tag_formatter__9();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__tag___regBuiltin_Lean_Parser_Attr_tactic__tag_parenthesizer__13();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Parser_Attr_tactic__name = _init_l_Lean_Parser_Attr_tactic__name();
lean_mark_persistent(l_Lean_Parser_Attr_tactic__name);
res = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__name___regBuiltin_Lean_Parser_Attr_tactic__name__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__name___regBuiltin_Lean_Parser_Attr_tactic__name_docString__3();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__name___regBuiltin_Lean_Parser_Attr_tactic__name_formatter__7();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__name___regBuiltin_Lean_Parser_Attr_tactic__name_parenthesizer__11();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Parser_Attr(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Parser_Extra(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Parser_Attr(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Parser_Extra(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Parser_Attr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Parser_Attr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Parser_Attr(builtin);
}
#ifdef __cplusplus
}
#endif
